// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00681214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681214 {

inline guest::global<u32, 0x0068128c> global_0068128c;  // (from the original)
inline guest::global<u32, 0x00886a24> global_00886a24;  // (from the original)
inline guest::global<u32, 0x0094df50> global_0094df50;  // (from the original)
inline guest::global<u32, 0x0098570c> global_0098570c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_00681214(u32 r0_unused, u32 r1, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if ((*global_0094df50 & 1u) == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        call_002fe7dc(0x94df50u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    S0_1 = std::bit_cast<float>(*global_0068128c);
    S1_1 = std::bit_cast<float>(*global_00886a24);
    r0_1 = r13;
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S0_1));
    *global_0098570c = u32(*gptr<u32>(r0_1));
    r1_1 = *gptr<u32>(r0_1 + 4u);
    *gptr<u32>(0x98570cu + 4u) = u32(r1_1);  // (from the original)
    *gptr<u32>(0x98570cu + 8u) = u32(*gptr<u32>(r0_1 + 8u));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x98570cu;  // (from the original)
}

}  // namespace d_00681214
GUEST_EXPORT(0x00681214, d_00681214::f_00681214);

// f_00681294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681294 {

inline guest::global<u32, 0x00886a28> global_00886a28;  // (from the original)
inline guest::global<u32, 0x00886a2c> global_00886a2c;  // (from the original)
inline guest::global<u32, 0x00886a30> global_00886a30;  // (from the original)
inline guest::global<u32, 0x0094df54> global_0094df54;  // (from the original)
inline guest::global<u32, 0x00985718> global_00985718;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_00681294(u32 r0_unused, u32 r1, float S0, float S1, float S2) {
    u32 r13 = guest::cpu()->r[13];
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if ((*global_0094df54 & 1u) == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        call_002fe7dc(0x94df54u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    S2_1 = std::bit_cast<float>(*global_00886a30);
    S1_1 = std::bit_cast<float>(*global_00886a2c);
    S0_1 = std::bit_cast<float>(*global_00886a28);
    r0_1 = r13;
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *global_00985718 = u32(*gptr<u32>(r0_1));
    r1_1 = *gptr<u32>(r0_1 + 4u);
    *gptr<u32>(0x985718u + 4u) = u32(r1_1);  // (from the original)
    *gptr<u32>(0x985718u + 8u) = u32(*gptr<u32>(r0_1 + 8u));  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x985718u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    ea_1 = r0 + 0x171u;  // (from the original)
    r0_1 = ea_1;
    r1_1 = u32(arg0->byte_171);
    if ((r1_1 & 1u) == 0) {
        goto L_681cb0;
    }
    arg0->byte_171 = u8(r1_1 & ~1u);
    r4_1 = r0 + 0x8cau;  // (from the original)
    if (u32(arg0->byte_8d0) == 0) {
        r6_1 = 0u;
    } else {
        r6_1 = 1u;
    }
    r8_1 = sxtb(u32(arg0->byte_8ca));
    r7_1 = sxtb(u32(arg0->byte_8cb));
    guest::cpu()->r[13] = r13;
    call_006606e0(r0, r8_1, r7_1, r3);
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_00597784(r0, r8_1, r7_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r6_1 == 0) {
        goto L_681cb0;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc20c(r0_2, r1_1, r2_1, r3_2);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_3) = u32(*gptr<u32>(r4_1 + 2u));
    r1_2 = r13;
    r0_4 = r0 + 0x93cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_4, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0067bc50(r0, r1_3, r2_3, r3_4);
    r1_1 = guest::cpu()->r[1];
    r0_1 = r13;
L_681cb0:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r9_1 = 0;
    u32 r1_2 = 0;
    u32 r8_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r7_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 ea_2 = 0;
    u32 r3_7 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    ea_1 = r0 + 0x171u;  // (from the original)
    r0_1 = ea_1;
    r1_1 = u32(arg0->byte_171);
    if ((r1_1 & 1u) == 0) {
        goto L_681db4;
    }
    arg0->byte_171 = u8(r1_1 & ~1u);
    r0_2 = u32(arg0->byte_8d8);
    r4_1 = r0 + 0x8cau;  // (from the original)
    r6_1 = (r0_2 & 8u) >> 3;
    res_1 = (r0_2 & 2u) >> 1;
    r9_1 = sxtb(u32(arg0->byte_8ca));
    r1_2 = u32(arg0->byte_8cb);
    r8_1 = sxtb(r1_2);
    if (res_1 != 0) {
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fc20c(r0_3, r1_2, r2, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        *gptr<u32>(r0_4) = u32(*gptr<u32>(r4_1 + 2u));
        r1_3 = r13;
        r0_5 = r0 + 0x93cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_5, r1_3, r2_1, r3_1);
        r1_4 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_0067bc50(r0, r1_4, r2_2, r3_2);
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_00660724(r0, r9_1, r8_1, r3);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7_1 = u32(*gptr<u8>(r0 + 0x1acu));  // (from the original)
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fc20c(r0_6, r1_5, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_6 = *gptr<u32>(r4_1 + 2u);
    *gptr<u32>(r0_7) = u32(r1_6);
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcaf4(r0_8, r1_6, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_681d8c;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fe8a8(r7_1, r1_1, r2_5, r3_5);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_681d8c;
    }
    r1_7 = r13;
    r0_11 = r0_10 + 0x26u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_11, r1_7, r2_6, r3_6);
    r1_1 = guest::cpu()->r[1];
L_681d8c:;
    r0_1 = r13;
    if (r6_1 == 0) {
        goto L_681db4;
    }
    ea_2 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3_7 = *gptr<u32>(ea_2);
    guest::cpu()->r[13] = r13;
    return call_00597784(r0, r9_1, r8_1, r3_7);
L_681db4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00681cb8
GUEST_EXPORT(0x00681cb8, d_00681cb8::f_00681cb8);

// f_00681db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681db8 {

inline guest::global<u32, 0x00950618> global_00950618;  // (from the original)
inline constexpr guest::Function<0x002c9868, u32(u32, u32, u32, u32)> call_002c9868;  // (from the original)

u32 f_00681db8() {
    u32 r0_1 = 0;
    r0_1 = *global_00950618;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_002c9868(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00681db8
GUEST_EXPORT(0x00681db8, d_00681db8::f_00681db8);

// f_00681f00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00681f00 {

inline guest::global<u32, 0x0085f2cc> global_0085f2cc;  // (from the original)
inline guest::global<u32, 0x0085f2d8> global_0085f2d8;  // (from the original)
inline guest::global<u32, 0x00886860> global_00886860;  // (from the original)
inline guest::global<u32, 0x00886864> global_00886864;  // (from the original)
inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline guest::global<u32, 0x009856dc> global_009856dc;  // (from the original)
inline guest::global<u32, 0x009856e8> global_009856e8;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32, u32)> call_006dabd8;  // (from the original)

u32 f_00681f00(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r4_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    float S3_2 = 0;
    float S0_4 = 0;
    float S2_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_2 = call_0023ffb8(r0_1, r0, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    r4_1 = 0u;
    if (r0_2 == 0) {
        goto L_681fcc;
    }
    r2_2 = r13 + 8u;
    r1_2 = r13 + 4u;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    call_003171b4(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    r1_1 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    if (u32(*global_009506b0) == 0xffu) {  // (from the original)
        r0_4 = *global_009506b4;
        if (r0_4 == 0) {
            goto L_681fcc;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        r0_5 = call_006dabd8(r0_4, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
        S2_1 = guest::cpu()->s[2];
        S3_1 = guest::cpu()->s[3];
        r4_1 = r0_5;
    }
    if (r4_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if ((*gptr<u32>(0x94dea0u + 0x5cu) & 1u) == 0) {  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        call_002fe7dc(0x94defcu, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        r2_1 = guest::cpu()->r[2];
        S3_1 = guest::cpu()->s[3];
    }
    *global_009856dc = u32(*gptr<u32>(r4_1 + 0x14u));  // (from the original)
    r1_1 = *gptr<u32>(r4_1 + 0x18u);  // (from the original)
    *gptr<u32>(0x9856dcu + 4u) = u32(r1_1);  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 0x1cu));  // (from the original)
    r4_1 = 0x9856dcu;  // (from the original)
    S2_1 = std::bit_cast<float>(*global_0085f2cc);
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4_1)) - S2_1));
    S1_1 = std::bit_cast<float>(*global_0085f2d8);
    S0_1 = S0_2 + S1_1;
    *gptr<u32>(r4_1 + 8u) = u32(std::bit_cast<u32>(S0_1));
L_681fcc:;
    if (r4_1 == 0) {
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    if ((*gptr<u32>(0x94dea0u + 0x60u) & 1u) == 0) {  // (from the original)
        goto L_681ff0;
    }
    goto L_682004;
L_681ff0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    call_002fe7dc(0x94df00u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
L_682004:;
    *global_009856e8 = u32(*gptr<u32>(r4_1));
    *gptr<u32>(0x9856e8u + 4u) = u32(*gptr<u32>(r4_1 + 4u));  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8u));
    S0_3 = std::bit_cast<float>(*global_00886860);
    S3_2 = std::bit_cast<float>(*global_009856e8) - S0_3;
    S0_4 = S1_2 + S0_3;
    S2_2 = std::bit_cast<float>(*global_00886864);
    *global_009856e8 = u32(std::bit_cast<u32>(S3_2));
    *gptr<u32>(0x9856e8u + 8u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    if (r1 != 0) {
        *gptr<u32>(r1) = u32(std::bit_cast<u32>(S2_2));
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = 0x886864u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0x9856e8u;  // (from the original)
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

inline guest::global<u32, 0x00886ad8> global_00886ad8;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_1 = u32(arg0->byte_91f);
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_007626c0(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        res_2 = u32(*gptr<u8>(r5_1 + 1u)) << 0x1e >> 0x1f;  // (from the original)
        if (res_2 == 0) {
            r0_3 = r0 + 0x1b4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_4 = call_0070e594(r0_3, r1_1, r2_1, r3_1);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
        } else {
            r0_4 = 0x95bfdcu;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_003117bc(r0_4, r1_1, r2_1, r3_1);
        if (r0_5 == 6u) {
            guest::cpu()->r[13] = r13;
            r0_6 = call_0064d0b8(r0, 0x6cu, 0u, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                r13 = r13 + 0x10;  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return 1u;
            }
        }
        guest::cpu()->r[13] = r13;
        r0_7 = call_0068229c(r0, 0xc3u, 0x10u, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        guest::cpu()->r[13] = r13;
        r0_8 = call_00683784(r0, 0u, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        if (r0_8 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        guest::cpu()->r[13] = r13;
        r0_9 = call_0068229c(r0, 0xceu, 0x12u, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        guest::cpu()->r[13] = r13;
        r0_10 = call_0068229c(r0, 0xcfu, 0x13u, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        res_3 = u32(*gptr<u8>(r5_1 + 1u)) << 0x1e >> 0x1f;  // (from the original)
        if (res_3 == 0) {
            r0_11 = r0 + 0x1b4u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_12 = call_0070e594(r0_11, r1, r2_3, r3_3);
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
        } else {
            r0_12 = 0x95bfdcu;  // (from the original)
        }
        r0_13 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_13, r0_12, r2_3, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_14 = r13;
        guest::cpu()->r[13] = r13;
        r0_15 = call_003117bc(r0_14, r1_2, r2_4, r3_4);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_15 != 0xbu) {  // (from the original)
            goto L_682204;
        }
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        r0_16 = call_00673a94(r0, r1_3, r2_5, r3_5);
        r1 = guest::cpu()->r[1];
        if (r0_16 != 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return 1u;
        }
        goto L_682204;
    }
    r0_17 = *global_00886ad8;
    guest::cpu()->r[13] = r13;
    r0_18 = call_004de6f0(r0_17, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0_18 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
L_682204:;
    guest::cpu()->r[13] = r13;
    r0_19 = call_0068229c(r0, 0x8fu, 0xdu, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_19 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_20 = call_0068229c(r0, 0x90u, 7u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_20 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_0068229c(r0, 0x91u, 0x11u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_21 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_22 = call_0068229c(r0, 0xd0u, 0x14u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_22 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r0 = arg0.addr();
    u32 r7_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r7_1 = r1;
    r5_1 = r2;
    r6_1 = r3;
    res_1 = u32(arg0->byte_172) << 0x1e >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r0_1 = r0 + 0x1b4u;  // (from the original)
        r0_2 = call_0070e594(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0_2 = 0x95bfdcu;  // (from the original)
    }
    r0_3 = call_003117bc(r0_2, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != r5_1) {
        r0_4 = 0u;
        goto L_6822fc;
    }
    if (r6_1 != 0) {
        r0_4 = 1u;
        goto L_6822fc;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_0064d0b8(r0, r7_1, 0u, 0u);
L_6822fc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_0068229c
GUEST_EXPORT(0x0068229c, d_0068229c::f_0068229c);

// f_00682330: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00682330 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00682330(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(r4_1) = u8(3u);
    r0_2 = r4_1 + 1u;
    guest::cpu()->r[13] = r13;
    call_005d41fc(r0_2, r1, r2_1, r3_1);
    *gptr<u8>(r0_1 + 0x13u) = u8(u32(s32(r2) >> 8));  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(r3);  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r5_1);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0x3au, r0_1, 0u);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x171u;  // (from the original)
    r1_1 = u32(arg0->byte_176) & ~8u;
    arg0->byte_176 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 res_2 = 0;
    u32 r5_2 = 0;
    u32 res_3 = 0;
    u32 r2_4 = 0;
    u32 res_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_1 = 0;
    u32 r0_11 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 res_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = r1;
    r0_1 = u32(u8(arg0->flag_91f));
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74e0(0x10000000u, r0_2, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r0 + 0x907u;  // (from the original)
    if (r0_3 == 0) {
        r0_4 = u32(*gptr<u8>(r5_1));
    } else {
        r0_4 = u32(*gptr<u8>(r0 + 0x8f3u));  // (from the original)
    }
    res_1 = r0_4 << 0x19 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_6834f0;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74c8(res_1, r1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002f74e0(0x10000000u, r0_5, r2_3, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        r0_7 = u32(*gptr<u8>(r0 + 0x91bu));  // (from the original)
    } else {
        r0_7 = u32(*gptr<u8>(r5_1));
    }
    res_2 = r0_7 << 0x19 >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        goto L_6834f0;
    }
    r5_2 = r0 + 0x171u;  // (from the original)
    r1 = 1u;
    res_3 = u32(*gptr<u8>(r0 + 0x174u)) << 0x1e >> 0x1f;  // (from the original)
    r2_4 = res_3;
    if (res_3 == 0) {
        goto L_6834f0;
    }
    *gptr<u8>(r13) = u8(r1);
    res_4 = u32(*gptr<u8>(r5_2 + 1u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_4 == 0) {
        r0_8 = r0 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_9 = call_0070e594(r0_8, r1, r2_4, r3_4);
        r1 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    } else {
        r0_9 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_003117bc(r0_9, r1, r2_4, r3_4);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0067c2e4(r0, r1_1, 0u, r6_1);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        goto L_683514;
    }
    if (r0_10 != 4u) {
        goto L_6834f0;
    }
    res_5 = u32(*gptr<u8>(r5_2 + 1u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_5 == 0) {
        r0_12 = r0 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_13 = call_0070e594(r0_12, r1, r2_5, r3_5);
        r1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
    } else {
        r0_13 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_14 = call_003117bc(r0_13, r1, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    if (r0_14 == 4u) {
        if (r6_1 != 0) {
            goto L_683514;
        }
        guest::cpu()->r[13] = r13;
        r0_15 = call_0064d0b8(r0, 0x70u, 0u, 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_15 != 0) {
            goto L_683514;
        }
    }
    if (u32(*gptr<u8>(r13)) == 0) {
        goto L_6834f8;
    }
L_6834f0:;
    r0_1 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_6834f8:;
    if (r6_1 != 0) {
        goto L_683514;
    }
    guest::cpu()->r[13] = r13;
    call_0064d0b8(r0, 0x1eu, 0u, 0u);  // (from the original)
    r1 = guest::cpu()->r[1];
L_683514:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r1_1 = r13 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(r1_1);
    r6_1 = *gptr<u32>(r1_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1);
    *gptr<u8>(ea_1 + 1u) = u8(r2);
    *gptr<u8>(ea_1 + 2u) = u8(r3);
    r1_2 = *gptr<u32>(r4_1);
    *gptr<u32>(ea_1 + 3u) = u32(r1_2);
    *gptr<u8>(ea_1 + 7u) = u8(r6_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0076c440(r4_1, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_683a40;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0076c440(r4_1, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_683a38;
    }
    r0_4 = u32(*gptr<u8>(r0 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_006515ec(r0_4, r1_4, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_683a38;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0076ae1c(r4_1, r1_4, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_6 >= 0x64u) {  // (from the original)
        goto L_683a38;
    }
    r1_5 = uxth(r0_6);
    r0_7 = r0_5 + 0x5494u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00582c9c(r0_7, r1_5, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
L_683a38:;
    r0_8 = u32(*gptr<u8>(r0 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005c5794(r0_8, r1_4, r2_3, r3_3);
L_683a40:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0xb9u, r0_1, 0u);  // (from the original)
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 ea_3 = 0;
    u32 r5_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r4_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 ea_4 = 0;
    u32 r4_3 = 0;
    u32 r5_3 = 0;
    u32 r6_2 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r4_4 = 0;
    u32 r5_4 = 0;
    u32 r6_3 = 0;
    goto L_6853fc;
L_24f4fc:;
    r0_1 = 0x9853b0u;  // (from the original)
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = *gptr<u32>(r0_1);
    r5 = *gptr<u32>(r0_1 + 4);
    if (r4 == r5) {
        ea_2 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_1 = *gptr<u32>(ea_2);
        r5_1 = *gptr<u32>(ea_2 + 4);
        r6_1 = *gptr<u32>(ea_2 + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    do {
L_24f510:;
        r0_1 = *gptr<u32>(r4);
        if (r0_1 != 0) {
            r0_2 = r0_1 + 0x1334u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_1 = call_0014f9ac(r0_2, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 4u;
        guest::preempt();
    } while (r4 != r5);
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_6853fc:;
    ea_3 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_3) = u32(r4);
    *gptr<u32>(ea_3 + 4) = u32(r5);
    *gptr<u32>(ea_3 + 8) = u32(r6);
    *gptr<u32>(ea_3 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5_2 = r1;
    guest::cpu()->r[13] = r13;
    call_00290108(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_0064f068(2u, 0x40u, r2_1, r3_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        r0_4 = 0x95c71cu;  // (from the original)
        r4_2 = *gptr<u32>(r0_4);
        if (r4_2 == 0) {
            ea_6 = r13;
            r13 = r13 + 0x10;  // (from the original)
            r4_4 = *gptr<u32>(ea_6);
            r5_4 = *gptr<u32>(ea_6 + 4);
            r6_3 = *gptr<u32>(ea_6 + 8);
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_4;
            guest::cpu()->r[5] = r5_4;
            guest::cpu()->r[6] = r6_3;
            guest::cpu()->r[13] = r13;
            return r0_4;
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_00305f44(r0_4, r1, r2_2, r3_2);
        guest::cpu()->r[13] = r13;
        call_001b7ce8(r4_2, r0_5, 1u, r5_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        ea_4 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_3 = *gptr<u32>(ea_4);
        r5_3 = *gptr<u32>(ea_4 + 4);
        r6_2 = *gptr<u32>(ea_4 + 8);
        r14 = *gptr<u32>(ea_4 + 0xc);  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        return call_0070cc5c(r4_2, r5_2, r2_3, r3_3);
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00768044(r5_2, r1, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        ea_6 = r13;
        r13 = r13 + 0x10;  // (from the original)
        r4_4 = *gptr<u32>(ea_6);
        r5_4 = *gptr<u32>(ea_6 + 4);
        r6_3 = *gptr<u32>(ea_6 + 8);
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_4;
        guest::cpu()->r[5] = r5_4;
        guest::cpu()->r[6] = r6_3;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    ea_5 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea_5);
    r5 = *gptr<u32>(ea_5 + 4);
    r6 = *gptr<u32>(ea_5 + 8);
    r14 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    guest::preempt();
    goto L_24f4fc;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    r0_1 = call_002f74c8(res_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_002f74e0(0x10000000u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    res_2 = u32(*gptr<u8>(r4_1 + 5u)) << 0x1c >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return res_2;
    }
    call_0068f290(res_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = u32(*gptr<u8>(r4_1 + 5u)) | 8u;
    *gptr<u8>(r4_1 + 5u) = u8(r0_3);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_00685c18
GUEST_EXPORT(0x00685c18, d_00685c18::f_00685c18);

// f_00685d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00685d7c {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00685d7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = u32(s32(u32(*gptr<u16>(r1))) >> 8);
    ea_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1_1);
    *gptr<u8>(ea_1 + 1u) = u8(r2);
    *gptr<u8>(ea_1 + 2u) = u8(r3);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0xb8u, r0_1, 0u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0064f068(5u, 0x40u, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0064f068(9u, 0x40u, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
    }
    r0_2 = 0x95c71cu;  // (from the original)
    r4_1 = *gptr<u32>(r0_2);
    if (r4_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (r5_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_00305f44(r0_2, r1_1, r2_1, r3_1);
        guest::cpu()->r[13] = r13;
        call_001b7ce8(r4_1, r0_3, 1u, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0070cc5c(r4_1, r3, r2_1, r3_1);
}

}  // namespace d_00687394
GUEST_EXPORT(0x00687394, d_00687394::f_00687394);

// f_0068752c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068752c {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x0014fd24, u32(u32, u32, u32, u32)> call_0014fd24;  // (from the original)
inline constexpr guest::Function<0x006dfde8, u32(u32, u32, u32, u32)> call_006dfde8;  // (from the original)

u32 f_0068752c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    r4 = r0;
    r6 = 0xae5658u;  // (from the original)
    r13 = r13 - 0x20u;  // (from the original)
    if (u32(*global_009506b0) == 0xffu) {  // (from the original)
        goto L_687560;
    }
L_687550:;
    r0_1 = *gptr<u32>(r6);
    r1_1 = *gptr<u32>(r6 + 4);
    r2_1 = *gptr<u32>(r6 + 8);
    *gptr<u32>(r4) = u32(r0_1);
    *gptr<u32>(r4 + 4) = u32(r1_1);
    *gptr<u32>(r4 + 8) = u32(r2_1);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_687560:;
    r0_2 = *global_009506b4;
    if (r0_2 == 0) {
        guest::preempt();
        goto L_687550;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006dfde8(r0_2, r1, r2, guest::cpu()->r[3]);
    if (r0_3 == 0) {
        r0_4 = *gptr<u32>(r6);
        r1_2 = *gptr<u32>(r6 + 4);
        r2_2 = *gptr<u32>(r6 + 8);
        goto L_687590;
    }
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0014fd24(r0_3, r1_3, r1, guest::cpu()->r[3]);
    r0_4 = *gptr<u32>(r13);
    r1_2 = *gptr<u32>(r13 + 4);
    r2_2 = *gptr<u32>(r13 + 8);
L_687590:;
    *gptr<u32>(r4) = u32(r0_4);
    *gptr<u32>(r4 + 4) = u32(r1_2);
    *gptr<u32>(r4 + 8) = u32(r2_2);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_007656b8(r0_1, r0, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x53cu;  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005d41b8(r0_2, 0xae5658u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0066a34c(r0_3, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xcu) = u32(r0_4);  // (from the original)
    r0_5 = u32(*gptr<u16>(r13 + 0xcu));  // (from the original)
    *gptr<u16>(r0 + 0x2eu) = u16(r0_5);  // (from the original)
    *gptr<u16>(r0 + 0x34u) = u16(r0_5);  // (from the original)
    r0_6 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r0_6 == 3u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r0_7 = r0 + 0x171u;  // (from the original)
    res_1 = u32(*gptr<u8>(r0 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    res_2 = u32(*gptr<u8>(r0_7 + 6u)) << 0x1d >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return res_2;
    }
    r0_8 = u32(*gptr<u8>(r0 + 0x91cu));  // (from the original)
    if (r0_8 != 2u) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_00656c20(r0, res_1, r2_3, r3_3);
    *gptr<u8>(r0_9 + 0xeu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_0064d0b8(r0, 0xbfu, r0_9, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_10;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = u32(arg0->byte_1ac);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe8a8(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_687fac;
    }
    r0_3 = u32(*gptr<u8>(r0 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe8a8(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r0_5 = r0_4 + 0x6c20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_0076fd38(r0_5, r1, r2_2, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            goto L_687fac;
        }
    }
    r5_1 = r0_2 + 0x6c20u;  // (from the original)
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fc934(r0_7, r2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_007701b8(r5_1, r0_8, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_687fac;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_005359fc(r1, r1_1, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r0_10 + 4u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_0076fe68(r5_1, r1, 1u, r3_5);
    r1_1 = guest::cpu()->r[1];
    r0_12 = r4_1 - r0_11;
    if (r0_12 == 1u) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_12;
    }
L_687fac:;
    r0_12 = 0u;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_00687f04
GUEST_EXPORT(0x00687f04, d_00687f04::f_00687f04);

// f_00687fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fb4 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00687fb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00656c20(r0, r1, r2, r3);
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0064d0b8(r0, 0xa7u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00687fb4
GUEST_EXPORT(0x00687fb4, d_00687fb4::f_00687fb4);

// f_00687fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00687fe0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00687fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r1_1 = r13 + 0x2cu;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r4_1 = *gptr<u32>(r1_1);
    r6_1 = *gptr<u32>(r1_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1_1, r2, r3);
    ea_2 = r0_1 + 0xeu;  // (from the original)
    *gptr<u16>(ea_2) = u16(r1);
    ea_3 = r13;
    *gptr<u16>(ea_3) = u16(r2);
    ea_4 = ea_2 + 2u;
    *gptr<u16>(ea_4) = u16(r2);
    if (r4_1 == 0) {
        r4_1 = r0 + 0x2eu;  // (from the original)
    }
    ea_5 = r0_1 + 0x14u;  // (from the original)
    *gptr<u8>(ea_5) = u8(r3);
    ea_6 = r0_1 + 0x13u;  // (from the original)
    *gptr<u8>(ea_6) = u8(r5_1);
    *gptr<u8>(ea_2 + 4u) = u8(u32(s32(u32(*gptr<u16>(r4_1))) >> 8));
    *gptr<u8>(ea_2 + 7u) = u8(r6_1);
    r13 = r13 + 4u;
    ea_7 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_7);
    r5_2 = *gptr<u32>(ea_7 + 4);
    r6_2 = *gptr<u32>(ea_7 + 8);
    r7_1 = *gptr<u32>(ea_7 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_7 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_7 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_7 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_7 + 0x1c);  // (from the original)
    r14 = *gptr<u32>(ea_7 + 0x20);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return call_0064d0b8(r0, 0xc5u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00687fe0
GUEST_EXPORT(0x00687fe0, d_00687fe0::f_00687fe0);

// f_00688144: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00688144 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00688144(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(r4_1) = u8(3u);
    r0_2 = r4_1 + 1u;
    guest::cpu()->r[13] = r13;
    call_005d41fc(r0_2, r1, r2_1, r3_1);
    *gptr<u8>(r0_1 + 0x13u) = u8(u32(s32(r2) >> 8));  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(r3);  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r5_1);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0x89u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00688144
GUEST_EXPORT(0x00688144, d_00688144::f_00688144);

// f_00689120: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689120 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00689120(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r1);
    ea_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1_1);
    *gptr<u8>(ea_1 + 4u) = u8(r2);
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0xc0u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00689120
GUEST_EXPORT(0x00689120, d_00689120::f_00689120);

// f_00689890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00689890 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00689890(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(*gptr<u16>(r2))) >> 8));
    *gptr<u8>(r0_1 + 0x17u) = u8(r3);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_0064d0b8(r0, 0x2du, r0_1, 0u);  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = call_002f74c8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_002f74e0(4u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_3 = call_002f74c8(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_002f74e0(0x20u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r4 = 0xaaef14u;  // (from the original)
    if (r0_4 == 0) {
        goto L_68a464;
    }
    r0_1 = u32(*gptr<u8>(r0 + 0x1a9u));  // (from the original)
    if (r0_1 == 0x46u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
L_68a454:;
    r0_1 = u32(*gptr<u8>(r4)) | 4u;
    *gptr<u8>(r4) = u8(r0_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_68a464:;
    r0_5 = call_002f74c8(r0_4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = call_002f74e0(0x10u, r0_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        guest::preempt();
        goto L_68a454;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_6;
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
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r5_1 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_1ac);
    r0_2 = call_002fe8a8(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        r6_1 = r0_2 + 4u;
        r0_3 = call_00712c18(r6_1, r1_1, r2_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        *gptr<u8>(r0 + 0x942u) = u8(r0_3);  // (from the original)
        r0_4 = call_00712c38(r6_1, r1_2, r2_2, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        *gptr<u32>(r0 + 0x944u) = u32(r0_4);  // (from the original)
        r0_5 = call_00712c28(r6_1, r1_3, r2_3, guest::cpu()->r[3]);
        r2_4 = guest::cpu()->r[2];
        r5_1 = r0_2 + 0x570eu;  // (from the original)
        *gptr<u32>(r0 + 0x948u) = u32(r0_5);  // (from the original)
        r1_4 = r6_1 + 6u;
        *gptr<u8>(r0 + 0x94cu) = u8(u32(*gptr<u8>(r5_1)) << 0x19 >> 0x1f);  // (from the original)
        r0_6 = r0 + 0x920u;  // (from the original)
        call_0010ac50(r0_6, r1_4, r2_4, guest::cpu()->r[3]);
        r2_5 = guest::cpu()->r[2];
        r1_5 = r0 + 0x920u;  // (from the original)
        r0_7 = r0 + 0x1b4u;  // (from the original)
        call_001d32c8(r0_7, r1_5, r2_5, guest::cpu()->r[3]);
        r2_6 = *gptr<u32>(r0 + 0x944u);  // (from the original)
        r1_6 = u32(*gptr<u8>(r0 + 0x942u));  // (from the original)
        r0_8 = r0 + 0x1b4u;  // (from the original)
        call_001d2e8c(r0_8, r1_6, r2_6, guest::cpu()->r[3]);
        *gptr<u32>(r0 + 0x3e0u) = u32(*gptr<u32>(r0 + 0x948u));  // (from the original)
        r0_2 = u32(*gptr<u8>(r0 + 0x94cu));  // (from the original)
        *gptr<u8>(r0 + 0x3e8u) = u8(r0_2);  // (from the original)
        r1_1 = u32(*gptr<u8>(r0 + 0x173u)) | 8u | 0x20u;  // (from the original)
        *gptr<u8>(r0 + 0x173u) = u8(r1_1);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0068a80c
GUEST_EXPORT(0x0068a80c, d_0068a80c::f_0068a80c);

// f_0068aa1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068aa1c {

inline guest::global<u32, 0x0068aaac> global_0068aaac;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0068aa1c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
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
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r0_2 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r1_1 = r13 + 0x28u;  // (from the original)
    r4_1 = *gptr<u32>(r1_1);
    r5_1 = *gptr<u32>(r1_1 + 4);
    r6_1 = *gptr<u32>(r1_1 + 8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00656c20(r0, r1_1, r2, r3);
    r2_1 = *gptr<u32>(r1);
    S1_1 = std::bit_cast<float>(*global_0068aaac);
    ea_2 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2_1);
    ea_3 = r13;
    *gptr<u16>(ea_3) = u16(r4_1);
    ea_4 = ea_2 + 4u;
    *gptr<u16>(ea_4) = u16(r4_1);
    ea_5 = r0_1 + 0x14u;  // (from the original)
    *gptr<u8>(ea_5) = u8(r3);
    *gptr<u8>(ea_2 + 7u) = u8(r2);
    *gptr<u8>(ea_2 + 8u) = u8(r5_1);
    r0_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r6_1)) * S1_1)));
    ea_6 = r13;
    *gptr<u16>(ea_6) = u16(r0_2);
    ea_7 = r0_1 + 0x17u;  // (from the original)
    *gptr<u16>(ea_7) = u16(r0_2);
    S0_1 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r6_1 + 8u)) * S1_1));
    r0_3 = std::bit_cast<u32>(S0_1);
    ea_8 = r13;
    *gptr<u16>(ea_8) = u16(r0_3);
    ea_9 = r0_1 + 0x19u;  // (from the original)
    *gptr<u16>(ea_9) = u16(r0_3);
    r13 = r13 + 4u;
    ea_10 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_2 = *gptr<u32>(ea_10);
    r5_2 = *gptr<u32>(ea_10 + 4);
    r6_2 = *gptr<u32>(ea_10 + 8);
    r7_1 = *gptr<u32>(ea_10 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_10 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_10 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_10 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_10 + 0x1c);  // (from the original)
    r14 = *gptr<u32>(ea_10 + 0x20);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return call_0064d0b8(r0, 0x3eu, r0_1, 0u);  // (from the original)
}

}  // namespace d_0068aa1c
GUEST_EXPORT(0x0068aa1c, d_0068aa1c::f_0068aa1c);

// f_0068b404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068b404 {

inline guest::global<u32, 0x0014fd48> global_0014fd48;  // (from the original)
inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x00292ccc, u32(u32, u32, u32, u32)> call_00292ccc;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)
inline constexpr guest::Function<0x0070cc5c, u32(u32, u32, u32, u32)> call_0070cc5c;  // (from the original)

u32 f_0068b404(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    goto L_68b404;
L_68b404:;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00292ccc(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = call_0064f068(0xau, 0x40u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_2 = 0x95c71cu;  // (from the original)
        r4_1 = *gptr<u32>(r0_2);
        if (r4_1 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
        r0_3 = call_00305f44(r0_2, r1_1, r2_2, r3_2);
        call_001b7ce8(r4_1, r0_3, 1u, r1);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0070cc5c(r4_1, r1, r2_3, r3_3);
    }
    res_1 = u32(*gptr<u8>(r0 + 0x177u)) << 0x1a >> 0x1f;  // (from the original)
    r0_2 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(*global_0014fd48, r0_2, r1_1, r2_2, r3_2);
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
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = u32(arg0->byte_91a);
    r1_1 = r1 ^ 1u;
    res_1 = r2_1 << 0x19 >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        call_00651928(r0, r1_1, 1u, res_1);
        r1_2 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    res_2 = r2_1 << 0x1a >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = res_2;
        return 0u;
    }
    call_0064d0b8(r0, 0x21u, 0u, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    return 1u;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r1_1 = u32(arg1->byte_e);
    if (r1_1 == 0) {
        r5_1 = 0u;
    } else {
        r5_1 = 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe8a4(r0, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r6 = 0x33a1u;  // (from the original)
        r0_2 = r0_1 + 0xau;  // (from the original)
        if (r5_1 == 0) {
            goto L_68c584;
        }
        guest::cpu()->r[13] = r13;
        r0_3 = call_0071a844(r0_2, r1_2, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc934(r0_4, r0_3, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r5_2 = r0_1 + 0xau;  // (from the original)
        r0_5 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fcbb0(r0_5, r6, r2_3, r3_3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_7 = r5_2 + 0x1cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_7, r0_6, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        r0_8 = r13;
        guest::cpu()->r[13] = r13;
        r0_9 = call_002fcb10(r0_8, r1_3, r2_5, r3_5);
        r1_2 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            r1_4 = r13;
            r0_10 = r0_1 + 0x6bd0u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002bf814(r0_10, r1_4, 0u, 1u);
            r1_2 = guest::cpu()->r[1];
        }
        r0_1 = r13;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_68c584:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_0071a844(r0_2, r1_2, r2_1, r3_1);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fcb84(r0_11, r6, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        r0_13 = r0_1 + 0x26u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_13, 0x95bfdcu, r2_7, r3);  // (from the original)
        r3 = guest::cpu()->r[3];
    }
    r5 = r0_1 + 0x6bd0u;  // (from the original)
    r4 = 0u;
    r7 = 1u;
    do {
L_68c5c0:;
        guest::cpu()->r[13] = r13;
        r0_14 = call_00724424(r5, r4, 0u, r3);
        r2_8 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_15 = call_002fcb84(r0_14, r6, r2_8, r3_7);
        r1_5 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_15 == 0)) {
            *gptr<u32>(r13) = u32(r7);
            guest::cpu()->r[13] = r13;
            r0_15 = call_002bf9cc(r5, r4, 0x95bfdcu, 0u);  // (from the original)
            r1_5 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_15;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 zf_2 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r6_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r6_3 = 0;
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r9 = r1;
    r7 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r6 = r2;
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fcb34(r1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res_1 = r0_1 - 0x26u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_1 ^ 0x26u) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    r5 = 0x69u;  // (from the original)
    if (res_1 == 0) {
        goto L_68c688;
    }
    if (nf_1 == vf_1) {
        goto L_68c6d0;
    }
    zf_1 = r0_1 == 0x24u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_1 == 0x25u;  // (from the original)
    }
    if (zf_1) {
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
    r0_2 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0_2, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_68c6c8;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_006d96fc(r0, r1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(r0_3);
    guest::cpu()->r[13] = r13;
    r0 = call_006579a8(r4, r9, r7, 0u);
    r1 = guest::cpu()->r[1];
L_68c6c8:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_68c6d0:;
    zf_2 = r0_1 == 0x28u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_1 == 0x66u;  // (from the original)
    }
    if (zf_2) {
        r5 = 0xd1u;  // (from the original)
        guest::preempt();
        goto L_68c688;
    }
    guest::preempt();
    goto L_68c684;
L_68c6e4:;
    r6_1 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    r0_4 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0_4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    if (r6_1 + 1u == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    if (r6_1 == 0) {
        goto L_68c740;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_006d96fc(r0, r1, r2_2, r3_2);
    *gptr<u32>(r13) = u32(r0_5);
    guest::cpu()->r[13] = r13;
    call_006579a8(r4, r9, r7, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_68c728:;
    r0_6 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb7b0(r0_6, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_7 = ~0u;
    *gptr<u32>(r4 + 0x154u) = u32(r0_7);  // (from the original)
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_68c740:;
    r1_2 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006d9abc(r9, r1_2, r2_2, r3_2);
    r6_2 = r13 + 4u;
    if (r5 == 0x69u) {  // (from the original)
        r0_8 = 2u;
    } else {
        r0_8 = 3u;
    }
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r6_2) = u32(r0_8);
    *gptr<u32>(r6_2 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    call_0068aa1c(r4, r9, 0u, 0u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_68c728;
L_68c784:;
    r0_9 = r4 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00723ad4(r0_9, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_68c6c8;
    }
    r1_3 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006d9abc(r9, r1_3, r2_3, r3_3);
    r0_10 = u32(*gptr<u8>(r4 + 0x8c5u));  // (from the original)
    r6_3 = r13 + 4u;
    *gptr<u32>(r13) = u32(r5);
    if (r0_10 << 0x1a >> 0x1f == 0) {  // (from the original)
        r3_4 = 1u;
    } else {
        r3_4 = 2u;
    }
    if (r5 == 0x69u) {  // (from the original)
        r0_11 = 2u;
    } else {
        r0_11 = 3u;
    }
    *gptr<u32>(r6_3) = u32(r0_11);
    *gptr<u32>(r6_3 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0_12 = call_0068aa1c(r4, r9, 1u, r3_4);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_12;
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

inline guest::global<u32, 0x00886948> global_00886948;  // (from the original)
inline guest::global<u32, 0x00886b48> global_00886b48;  // (from the original)
inline guest::global<u32, 0x00886b4c> global_00886b4c;  // (from the original)
inline guest::global<u32, 0x00886b50> global_00886b50;  // (from the original)
inline guest::global<u32, 0x0094f268> global_0094f268;  // (from the original)
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32, u32)> call_0014f3cc;  // (from the original)
inline constexpr guest::Function<0x00252034, u32(u32, u32, u32, u32)> call_00252034;  // (from the original)
inline constexpr guest::Function<0x00252850, u32(u32, u32, u32, u32)> call_00252850;  // (from the original)
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32, u32, u32)> call_0052e3ec;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;  // (from the original)

u32 f_0068cbb8(gptr<Object_0068cbb8_0> arg0, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    float S2_4 = 0;
    u32 r5_1 = 0;
    u32 r1_5 = 0;
    float S0_4 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    float S2_5 = 0;
    float S0_5 = 0;
    float S1_4 = 0;
    float S2_6 = 0;
    u32 r1_6 = 0;
    float S0_6 = 0;
    float S1_5 = 0;
    r13 = r13 - 0x60u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    res_2 = u32(arg0->byte_177) << 0x1a >> 0x1f;  // (from the original)
    if (res_2 != 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    r2_1 = arg0->word_26c;
    r1_2 = r13;
    r0_1 = r0 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_2 = call_0070ab44(r0_1, r1_2, r2_1, 0u);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    S2_1 = std::bit_cast<float>(*global_00886b50);
    S1_1 = std::bit_cast<float>(*global_00886b4c);
    S0_1 = std::bit_cast<float>(*global_00886b48);
    r0_3 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_3 + 8) = u32(std::bit_cast<u32>(S2_1));
    r0_4 = r13 + 0x3cu;  // (from the original)
    r1_3 = r13;
    r2_2 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_0014f3cc(r0_4, r1_3, r2_2, r3_1);
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r1_4 = r13 + 0x3cu;  // (from the original)
    r0_5 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    call_0052e3ec(r0_5, r1_4, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r0_6 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    call_006c5c60(r0_6, 0u, r2_4, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    *gptr<u32>(r13 + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r5_1 = *global_0094f268;
    if (r5_1 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    r1_5 = r13 + 0x30u;  // (from the original)
    S0_4 = std::bit_cast<float>(*global_00886948);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_4;
    r0_7 = call_00252034(r5_1, r1_5, r2_5, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    if (r0_7 == 0) {
        r13 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2_5;
    call_00252850(r5_1, r1_1, r2_6, r3_5);
    S0_5 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_6;
    call_0064d0b8(r0, 0x26u, 0u, 0u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_5;
    return 1u;
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

inline guest::global<u8, 0x0094fd20> global_0094fd20;  // (from the original)
inline constexpr guest::Function<0x004e54a4, u32(u32, u32, u32, u32)> call_004e54a4;  // (from the original)
inline constexpr guest::Function<0x005897c0, u32(u32, u32, u32, u32)> call_005897c0;  // (from the original)
inline constexpr guest::Function<0x00765aac, u32(u32, u32, u32, u32)> call_00765aac;  // (from the original)
inline constexpr guest::Function<0x00765cec, u32(u32, u32, u32, u32)> call_00765cec;  // (from the original)

u32 f_0068ce74(gptr<Object_0068ce74_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r2 = u32(arg0->byte_91d);
    r0_1 = r0 + 0x171u;  // (from the original)
    r5 = 1u;
    r1_1 = u32(arg0->byte_175);
    res_1 = r1_1 << 0x1c >> 0x1f;  // (from the original)
    r3 = res_1;
    if (res_1 != 0) {
        if (r2 == 0) {
            r1_1 = r1_1 & ~8u;
            arg0->byte_175 = u8(r1_1);
        }
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r2 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
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
    r2_1 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_2 = call_004e54a4(r4, r1, r2_1, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        goto L_68cf2c;
    }
    goto L_68cf58;
L_68cef8:;
    r2_2 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00765aac(r4, r1, r2_2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        *gptr<u8>(r4 + 0xca0u) = u8(r5);  // (from the original)
    } else {
        goto L_68cf2c;
    }
    goto L_68cf38;
L_68cf14:;
    r2_3 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_4 = call_00765cec(r4, r1, r2_3, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r0_2 = 2u;
        goto L_68cf58;
    }
L_68cf2c:;
    r0_5 = u32(*gptr<u8>(r4 + 0xca0u));  // (from the original)
    if (r0_5 == 3u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
L_68cf38:;
    r4_1 = r4 + 0x1520u;  // (from the original)
    *gptr<u8>(r4_1) = u8(5u);
    guest::cpu()->r[13] = r13;
    call_005897c0(5u, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    *global_0094fd20 = u8(r5);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0x94fd20u;  // (from the original)
L_68cf58:;
    *gptr<u8>(r4 + 0xca0u) = u8(r0_2);  // (from the original)
    guest::preempt();
    goto L_68cf38;
}

}  // namespace d_0068ce74
GUEST_EXPORT(0x0068ce74, d_0068ce74::f_0068ce74);

// f_0068d170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068d170 {

inline constexpr guest::Function<0x0024fc50, u32(u32, u32, u32, u32)> call_0024fc50;  // (from the original)

u32 f_0068d170(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = r0 + 0x5ecu;  // (from the original)
    r0_1 = call_0024fc50(r0_2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1 = u32(*gptr<u8>(r0 + 0x173u)) | 2u | 4u;  // (from the original)
    *gptr<u8>(r0 + 0x173u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = r0 + 0x5ecu;  // (from the original)
    r0_1 = call_00250024(r0_2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r1 = u32(*gptr<u8>(r0 + 0x173u)) | 2u | 4u;  // (from the original)
    *gptr<u8>(r0 + 0x173u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r4_1 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_18 = 0;
    u32 r2_19 = 0;
    u32 r3_18 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_19 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_20 = 0;
    u32 r2_21 = 0;
    u32 r3_20 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_21 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r1_22 = 0;
    u32 r2_23 = 0;
    u32 r3_22 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_23 = 0;
    u32 r2_24 = 0;
    u32 r3_23 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_24 = 0;
    u32 r2_25 = 0;
    u32 r3_24 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r1_25 = 0;
    u32 r2_26 = 0;
    u32 r3_25 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_26 = 0;
    u32 r2_27 = 0;
    u32 r3_26 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r1_27 = 0;
    u32 r2_28 = 0;
    u32 r3_27 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r1_28 = 0;
    u32 r2_29 = 0;
    u32 r3_28 = 0;
    u32 r0_57 = 0;
    u32 r0_58 = 0;
    u32 r1_29 = 0;
    u32 r2_30 = 0;
    u32 r3_29 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r1_30 = 0;
    u32 r2_31 = 0;
    u32 r3_30 = 0;
    u32 r0_61 = 0;
    u32 r0_62 = 0;
    u32 r1_31 = 0;
    u32 r2_32 = 0;
    u32 r3_31 = 0;
    u32 r0_63 = 0;
    u32 r0_64 = 0;
    u32 r1_32 = 0;
    u32 r2_33 = 0;
    u32 r3_32 = 0;
    u32 r0_65 = 0;
    u32 r0_66 = 0;
    u32 r1_33 = 0;
    u32 r2_34 = 0;
    u32 r3_33 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r1_34 = 0;
    u32 r2_35 = 0;
    u32 r3_34 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r1_35 = 0;
    u32 r2_36 = 0;
    u32 r3_35 = 0;
    u32 r0_71 = 0;
    u32 r0_72 = 0;
    u32 r1_36 = 0;
    u32 r2_37 = 0;
    u32 r3_36 = 0;
    u32 r0_73 = 0;
    u32 r0_74 = 0;
    u32 r1_37 = 0;
    u32 r2_38 = 0;
    u32 r3_37 = 0;
    u32 r0_75 = 0;
    u32 r0_76 = 0;
    u32 r1_38 = 0;
    u32 r2_39 = 0;
    u32 r3_38 = 0;
    u32 r0_77 = 0;
    u32 r0_78 = 0;
    u32 r1_39 = 0;
    u32 r2_40 = 0;
    u32 r3_39 = 0;
    u32 r0_79 = 0;
    u32 r0_80 = 0;
    u32 r1_40 = 0;
    u32 r2_41 = 0;
    u32 r3_40 = 0;
    u32 r0_81 = 0;
    u32 r0_82 = 0;
    u32 r1_41 = 0;
    u32 r2_42 = 0;
    u32 r3_41 = 0;
    u32 r0_83 = 0;
    u32 r0_84 = 0;
    u32 r1_42 = 0;
    u32 r2_43 = 0;
    u32 r3_42 = 0;
    u32 r0_85 = 0;
    u32 r0_86 = 0;
    u32 r1_43 = 0;
    u32 r2_44 = 0;
    u32 r3_43 = 0;
    u32 r0_87 = 0;
    u32 r0_88 = 0;
    u32 r1_44 = 0;
    u32 r2_45 = 0;
    u32 r3_44 = 0;
    u32 r0_89 = 0;
    u32 r0_90 = 0;
    u32 r1_45 = 0;
    u32 r2_46 = 0;
    u32 r3_45 = 0;
    u32 r0_91 = 0;
    u32 r0_92 = 0;
    u32 r1_46 = 0;
    u32 r2_47 = 0;
    u32 r3_46 = 0;
    u32 r0_93 = 0;
    u32 r0_94 = 0;
    u32 r1_47 = 0;
    u32 r2_48 = 0;
    u32 r3_47 = 0;
    u32 r0_95 = 0;
    u32 r0_96 = 0;
    u32 r1_48 = 0;
    u32 r2_49 = 0;
    u32 r3_48 = 0;
    u32 r0_97 = 0;
    u32 r0_98 = 0;
    u32 r0_99 = 0;
    u32 r0_100 = 0;
    u32 r2_50 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 ea_11 = 0;
    u32 ea_12 = 0;
    u32 ea_13 = 0;
    u32 r3_49 = 0;
    u32 r0_101 = 0;
    u32 r1_49 = 0;
    u32 r2_51 = 0;
    u32 r3_50 = 0;
    u32 r0_102 = 0;
    u32 r0_103 = 0;
    u32 r1_50 = 0;
    u32 r2_52 = 0;
    u32 r3_51 = 0;
    u32 r0_104 = 0;
    u32 r0_105 = 0;
    u32 r1_51 = 0;
    u32 r2_53 = 0;
    u32 r3_52 = 0;
    u32 r0_106 = 0;
    u32 r0_107 = 0;
    u32 r1_52 = 0;
    u32 r2_54 = 0;
    u32 r3_53 = 0;
    u32 r0_108 = 0;
    u32 r0_109 = 0;
    u32 r2_55 = 0;
    u32 r3_54 = 0;
    u32 r0_110 = 0;
    u32 r0_111 = 0;
    u32 r1_53 = 0;
    u32 r2_56 = 0;
    u32 r3_55 = 0;
    u32 r0_112 = 0;
    r13 = r13 - 8;
    r2_1 = 0x8f8630u + 0x98u;  // (from the original)
    arg0->word_0 = u32(0x8f8630u);  // (from the original)
    arg0->word_68 = u32(r2_1);
    r0_1 = r0 + 0x14fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002e6944(r0_1, 0x8f8630u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002e6944(r0_3, r1_1, r2_2, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002e6944(r0_5, r1_2, r2_3, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002e6944(r0_7, r1_3, r2_4, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002e6944(r0_9, r1_4, r2_5, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_002e6944(r0_11, r1_5, r2_6, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002e6944(r0_13, r1_6, r2_7, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_002e6944(r0_15, r1_7, r2_8, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_002e6944(r0_17, r1_8, r2_9, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_002e6944(r0_19, r1_9, r2_10, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_002e6944(r0_21, r1_10, r2_11, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_002e6944(r0_23, r1_11, r2_12, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_002e6944(r0_25, r1_12, r2_13, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_002e6944(r0_27, r1_13, r2_14, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_00250560(r0_29, r1_14, r2_15, r3_14);
    r4_1 = r0_30 - 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f76ac(r4_1, 0x6f8424u, 0x8cu, 3u);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r4_1 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_002e6944(r0_31, r1_15, r2_16, r3_15);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x410u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_34 = call_002694b8(r0_33, r1_16, r2_17, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_35 = r0_34 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_36 = call_002e6944(r0_35, r1_17, r2_18, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_37 = r0_36 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_38 = call_002e6944(r0_37, r1_18, r2_19, r3_18);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_39 = r0_38 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_002e6944(r0_39, r1_19, r2_20, r3_19);
    r1_20 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_41 = r0_40 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_42 = call_002e6944(r0_41, r1_20, r2_21, r3_20);
    r1_21 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_43 = r0_42 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_44 = call_002e6944(r0_43, r1_21, r2_22, r3_21);
    r1_22 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_45 = r0_44 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_46 = call_002e6944(r0_45, r1_22, r2_23, r3_22);
    r1_23 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_47 = r0_46 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_48 = call_002e6944(r0_47, r1_23, r2_24, r3_23);
    r1_24 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_49 = r0_48 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_50 = call_002e6944(r0_49, r1_24, r2_25, r3_24);
    r1_25 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_51 = r0_50 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_52 = call_002e6944(r0_51, r1_25, r2_26, r3_25);
    r1_26 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    r0_53 = r0_52 - 0x84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_54 = call_002e6944(r0_53, r1_26, r2_27, r3_26);
    r1_27 = guest::cpu()->r[1];
    r2_28 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    r0_55 = r0_54 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_56 = call_002e6944(r0_55, r1_27, r2_28, r3_27);
    r1_28 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    r0_57 = r0_56 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_58 = call_002e6944(r0_57, r1_28, r2_29, r3_28);
    r1_29 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_59 = r0_58 - 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_60 = call_002e6944(r0_59, r1_29, r2_30, r3_29);
    r1_30 = guest::cpu()->r[1];
    r2_31 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_61 = r0_60 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_62 = call_002e6944(r0_61, r1_30, r2_31, r3_30);
    r1_31 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    r0_63 = r0_62 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_64 = call_002e6944(r0_63, r1_31, r2_32, r3_31);
    r1_32 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    r0_65 = r0_64 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_66 = call_002e6944(r0_65, r1_32, r2_33, r3_32);
    r1_33 = guest::cpu()->r[1];
    r2_34 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    r0_67 = r0_66 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_68 = call_002e6944(r0_67, r1_33, r2_34, r3_33);
    r1_34 = guest::cpu()->r[1];
    r2_35 = guest::cpu()->r[2];
    r3_34 = guest::cpu()->r[3];
    r0_69 = r0_68 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_70 = call_002e6944(r0_69, r1_34, r2_35, r3_34);
    r1_35 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_35 = guest::cpu()->r[3];
    r0_71 = r0_70 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_72 = call_004eb5b4(r0_71, r1_35, r2_36, r3_35);
    r1_36 = guest::cpu()->r[1];
    r2_37 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    r0_73 = r0_72 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_74 = call_002e6944(r0_73, r1_36, r2_37, r3_36);
    r1_37 = guest::cpu()->r[1];
    r2_38 = guest::cpu()->r[2];
    r3_37 = guest::cpu()->r[3];
    r0_75 = r0_74 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_76 = call_002e6944(r0_75, r1_37, r2_38, r3_37);
    r1_38 = guest::cpu()->r[1];
    r2_39 = guest::cpu()->r[2];
    r3_38 = guest::cpu()->r[3];
    r0_77 = r0_76 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_78 = call_002e6944(r0_77, r1_38, r2_39, r3_38);
    r1_39 = guest::cpu()->r[1];
    r2_40 = guest::cpu()->r[2];
    r3_39 = guest::cpu()->r[3];
    r0_79 = r0_78 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_80 = call_002e6944(r0_79, r1_39, r2_40, r3_39);
    r1_40 = guest::cpu()->r[1];
    r2_41 = guest::cpu()->r[2];
    r3_40 = guest::cpu()->r[3];
    r0_81 = r0_80 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_82 = call_002e6944(r0_81, r1_40, r2_41, r3_40);
    r1_41 = guest::cpu()->r[1];
    r2_42 = guest::cpu()->r[2];
    r3_41 = guest::cpu()->r[3];
    r0_83 = r0_82 - 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_84 = call_002e6944(r0_83, r1_41, r2_42, r3_41);
    r1_42 = guest::cpu()->r[1];
    r2_43 = guest::cpu()->r[2];
    r3_42 = guest::cpu()->r[3];
    r0_85 = r0_84 - 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_86 = call_004eb5b4(r0_85, r1_42, r2_43, r3_42);
    r1_43 = guest::cpu()->r[1];
    r2_44 = guest::cpu()->r[2];
    r3_43 = guest::cpu()->r[3];
    r0_87 = r0_86 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_88 = call_002e6944(r0_87, r1_43, r2_44, r3_43);
    r1_44 = guest::cpu()->r[1];
    r2_45 = guest::cpu()->r[2];
    r3_44 = guest::cpu()->r[3];
    r0_89 = r0_88 - 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_90 = call_002e6944(r0_89, r1_44, r2_45, r3_44);
    r1_45 = guest::cpu()->r[1];
    r2_46 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    r0_91 = r0_90 - 0x2acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_92 = call_006a8954(r0_91, r1_45, r2_46, r3_45);
    r1_46 = guest::cpu()->r[1];
    r2_47 = guest::cpu()->r[2];
    r3_46 = guest::cpu()->r[3];
    r0_93 = r0_92 - 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_94 = call_00278140(r0_93, r1_46, r2_47, r3_46);
    r1_47 = guest::cpu()->r[1];
    r2_48 = guest::cpu()->r[2];
    r3_47 = guest::cpu()->r[3];
    r0_95 = r0_94 - 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_96 = call_006acabc(r0_95, r1_47, r2_48, r3_47);
    r1_48 = guest::cpu()->r[1];
    r2_49 = guest::cpu()->r[2];
    r3_48 = guest::cpu()->r[3];
    r0_97 = r0_96 - 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_98 = call_006acabc(r0_97, r1_48, r2_49, r3_48);
    r0_99 = r0_98 - 0x68u;  // (from the original)
    *gptr<u32>(r0_99 - 0x2e0u) = u32(0x8ebc68u);  // (from the original)
    r0_100 = r0_99 - 0x19cu;  // (from the original)
    r2_50 = ~0u;
    ea_1 = r0_100 + 0x70u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r2_50);
    ea_2 = r0_100 + 0x68u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r2_50);
    ea_3 = r0_100 + 0x60u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(ea_3 + 4) = u32(r2_50);
    ea_4 = r0_100 + 0x58u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    *gptr<u32>(ea_4 + 4) = u32(r2_50);
    ea_5 = r0_100 + 0x50u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    *gptr<u32>(ea_5 + 4) = u32(r2_50);
    ea_6 = r0_100 + 0x48u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    *gptr<u32>(ea_6 + 4) = u32(r2_50);
    ea_7 = r0_100 + 0x40u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    *gptr<u32>(ea_7 + 4) = u32(r2_50);
    ea_8 = r0_100 + 0x38u;  // (from the original)
    *gptr<u32>(ea_8) = u32(0u);
    *gptr<u32>(ea_8 + 4) = u32(r2_50);
    ea_9 = r0_100 + 0x30u;  // (from the original)
    *gptr<u32>(ea_9) = u32(0u);
    *gptr<u32>(ea_9 + 4) = u32(r2_50);
    ea_10 = r0_100 + 0x28u;  // (from the original)
    *gptr<u32>(ea_10) = u32(0u);
    *gptr<u32>(ea_10 + 4) = u32(r2_50);
    ea_11 = r0_100 + 0x20u;  // (from the original)
    *gptr<u32>(ea_11) = u32(0u);
    *gptr<u32>(ea_11 + 4) = u32(r2_50);
    ea_12 = r0_100 + 0x18u;  // (from the original)
    *gptr<u32>(ea_12) = u32(0u);
    *gptr<u32>(ea_12 + 4) = u32(r2_50);
    ea_13 = r0_100 + 0x10u;  // (from the original)
    *gptr<u32>(ea_13) = u32(0u);
    *gptr<u32>(ea_13 + 4) = u32(r2_50);
    r3_49 = r0_100 + 8u;
    *gptr<u32>(r3_49) = u32(0u);
    *gptr<u32>(r3_49 + 4) = u32(r2_50);
    *gptr<u32>(r0_100) = u32(0u);
    *gptr<u32>(r0_100 + 4) = u32(r2_50);
    r0_101 = r0_100 - 0x144u;  // (from the original)
    *gptr<u32>(r0_101) = u32(0x8eb174u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001abcd4(r0_101, 0x8eb174u, r2_50, r3_49);  // (from the original)
    r1_49 = guest::cpu()->r[1];
    r2_51 = guest::cpu()->r[2];
    r3_50 = guest::cpu()->r[3];
    r0_102 = r0_101 + 0xccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_103 = call_004ef50c(r0_102, r1_49, r2_51, r3_50);
    r1_50 = guest::cpu()->r[1];
    r2_52 = guest::cpu()->r[2];
    r3_51 = guest::cpu()->r[3];
    r0_104 = r0_103 - 0x54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_105 = call_004edd84(r0_104, r1_50, r2_52, r3_51);
    r1_51 = guest::cpu()->r[1];
    r2_53 = guest::cpu()->r[2];
    r3_52 = guest::cpu()->r[3];
    r0_106 = r0_105 - 0x90u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_107 = call_004eb5b4(r0_106, r1_51, r2_53, r3_52);
    r1_52 = guest::cpu()->r[1];
    r2_54 = guest::cpu()->r[2];
    r3_53 = guest::cpu()->r[3];
    r0_108 = r0_107 - 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_109 = call_004eb5b4(r0_108, r1_52, r2_54, r3_53);
    r2_55 = guest::cpu()->r[2];
    r3_54 = guest::cpu()->r[3];
    *gptr<u32>(r0_109 - 0x128u) = u32(0x8f4068u);  // (from the original)
    r0_110 = r0_109 - 0x128u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_111 = call_003170d0(r0_110, 0x8f4068u, r2_55, r3_54);  // (from the original)
    r1_53 = guest::cpu()->r[1];
    r2_56 = guest::cpu()->r[2];
    r3_55 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0_112 = r0_111 - 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006e480c(r0_112, r1_53, r2_56, r3_55);
}

}  // namespace d_0068e738
GUEST_EXPORT(0x0068e738, d_0068e738::f_0068e738);

// f_0068eb30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eb30 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068eb30() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (u32(*gptr<u8>(r0_1 + 0xf2u)) == 5u) {  // (from the original)
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    return r0_2;
}

}  // namespace d_0068eb30
GUEST_EXPORT(0x0068eb30, d_0068eb30::f_0068eb30);

// f_0068eba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eba8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068eba8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r1_1 = 0;
    goto L_68eba8;
L_1a20e0:;
    r1_1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1_1 != 5u) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    return call_001a5144(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_68eba8:;
    r0 = *global_00950874;
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

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a20f4, u32(u32, u32, u32, u32)> call_001a20f4;  // (from the original)

u32 f_0068ebc4() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a20f4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ebc4
GUEST_EXPORT(0x0068ebc4, d_0068ebc4::f_0068ebc4);

// f_0068ec10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec10 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068ec10() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (u32(s32(s8(*gptr<u8>(r0_1 + 0x135u)))) + 1u == 0) {  // (from the original)
        r0_2 = 0u;
    } else {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_0068ec10
GUEST_EXPORT(0x0068ec10, d_0068ec10::f_0068ec10);

// f_0068ec64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec64 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)

u32 f_0068ec64(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_2 = call_001a360c(r0_1, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0068ec64
GUEST_EXPORT(0x0068ec64, d_0068ec64::f_0068ec64);

// f_0068ec98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ec98 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068ec98(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68ec98;
L_68ec98:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(3u);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 3u;
    return r0_1;
}

}  // namespace d_0068ec98
GUEST_EXPORT(0x0068ec98, d_0068ec98::f_0068ec98);

// f_0068ecbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ecbc {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a36ac, u32(u32, u32, u32, u32)> call_001a36ac;  // (from the original)

u32 f_0068ecbc() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a36ac(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068ecbc
GUEST_EXPORT(0x0068ecbc, d_0068ecbc::f_0068ecbc);

// f_0068eec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eec8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a4600, u32(u32, u32, u32, u32)> call_001a4600;  // (from the original)

u32 f_0068eec8(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    return call_001a4600(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068eec8
GUEST_EXPORT(0x0068eec8, d_0068eec8::f_0068eec8);

// f_0068ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef60 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068ef60(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68ef60;
L_68ef60:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(0x12u);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0x12u;  // (from the original)
    return r0_1;
}

}  // namespace d_0068ef60
GUEST_EXPORT(0x0068ef60, d_0068ef60::f_0068ef60);

// f_0068ef84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068ef84 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068ef84(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68ef84;
L_68ef84:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(2u);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 2u;
    return r0_1;
}

}  // namespace d_0068ef84
GUEST_EXPORT(0x0068ef84, d_0068ef84::f_0068ef84);

// f_0068efa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efa8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a3a28, u32(u32, u32, u32, u32)> call_001a3a28;  // (from the original)

u32 f_0068efa8(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    return call_001a3a28(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068efa8
GUEST_EXPORT(0x0068efa8, d_0068efa8::f_0068efa8);

// f_0068efc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068efc8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5ffc, u32(u32, u32, u32, u32)> call_001a5ffc;  // (from the original)

u32 f_0068efc8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    return call_001a5ffc(r0_1, r0, r1, r0);
}

}  // namespace d_0068efc8
GUEST_EXPORT(0x0068efc8, d_0068efc8::f_0068efc8);

// f_0068eff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068eff0 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068eff0(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r1_1 = 0;
    goto L_68eff0;
L_1a45c4:;
    r1_1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1_1 != 0xcu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    return call_001a5144(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_68eff0:;
    r0 = *global_00950874;
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

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f00c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r1_1 = 0;
    goto L_68f00c;
L_1a45d8:;
    r1_1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1_1 != 0x19u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    *gptr<u32>(r0 + 0x13cu) = u32(0x8572ccu);  // (from the original)
    *gptr<u8>(r0 + 0x1a9u) = u8(1u);  // (from the original)
    return call_001a5144(r0, 1u, 0x8572ccu, guest::cpu()->r[3]);  // (from the original)
L_68f00c:;
    r0 = *global_00950874;
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

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f088(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68f088;
L_68f088:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(2u);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 2u;
    return r0_1;
}

}  // namespace d_0068f088
GUEST_EXPORT(0x0068f088, d_0068f088::f_0068f088);

// f_0068f0d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f0d8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f0d8() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 != 0) {
        r0_1 = u32(s32(s8(*gptr<u8>(r0_1 + 0x1bau))));  // (from the original)
    }
    return r0_1;
}

}  // namespace d_0068f0d8
GUEST_EXPORT(0x0068f0d8, d_0068f0d8::f_0068f0d8);

// f_0068f114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f114 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f114() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5144(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f114
GUEST_EXPORT(0x0068f114, d_0068f114::f_0068f114);

// f_0068f130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f130 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f130(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68f130;
L_68f130:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(0xcu);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0068f130
GUEST_EXPORT(0x0068f130, d_0068f130::f_0068f130);

// f_0068f14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f14c {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a51d0, u32(u32, u32, u32, u32)> call_001a51d0;  // (from the original)

u32 f_0068f14c() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a51d0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f14c
GUEST_EXPORT(0x0068f14c, d_0068f14c::f_0068f14c);

// f_0068f168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f168 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f168(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68f168;
L_68f168:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(6u);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(0u);  // (from the original)
    guest::cpu()->r[1] = 6u;
    return r0_1;
}

}  // namespace d_0068f168
GUEST_EXPORT(0x0068f168, d_0068f168::f_0068f168);

// f_0068f1c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1c8 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f1c8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    goto L_68f1c8;
L_68f1c8:;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 0xf3u) = u8(0xfu);  // (from the original)
    *gptr<u8>(r0_1 + 0x136u) = u8(5u);  // (from the original)
    guest::cpu()->r[1] = 0xfu;  // (from the original)
    return r0_1;
}

}  // namespace d_0068f1c8
GUEST_EXPORT(0x0068f1c8, d_0068f1c8::f_0068f1c8);

// f_0068f1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f1ec {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5f58, u32(u32, u32, u32, u32)> call_001a5f58;  // (from the original)

u32 f_0068f1ec() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5f58(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f1ec
GUEST_EXPORT(0x0068f1ec, d_0068f1ec::f_0068f1ec);

// f_0068f208: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f208 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5f98, u32(u32, u32, u32, u32)> call_001a5f98;  // (from the original)

u32 f_0068f208() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5f98(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0068f208
GUEST_EXPORT(0x0068f208, d_0068f208::f_0068f208);

// f_0068f290: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f290 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)

u32 f_0068f290(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r1_1 = 0;
    goto L_68f290;
L_1a5fdc:;
    r1_1 = u32(*gptr<u8>(r0 + 0xf2u));  // (from the original)
    if (r1_1 != 0x1au) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    *gptr<u8>(r0 + 0xf3u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x136u) = u8(0x17u);  // (from the original)
    guest::cpu()->r[1] = 0x17u;  // (from the original)
    return r0;
L_68f290:;
    r0 = *global_00950874;
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

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a5144, u32(u32, u32, u32, u32)> call_001a5144;  // (from the original)

u32 f_0068f2ac() {
    u32 r0_1 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_001a5144(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)
inline constexpr guest::Function<0x001a4f78, u32(u32, u32, u32, u32)> call_001a4f78;  // (from the original)

u32 f_0068f2c8(gptr<Object_0068f2c8_0> arg0, u32 r1, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = *global_00950874;
    if (r4_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 0x950874u;  // (from the original)
    }
    r1_1 = arg0->word_4;
    r2_1 = arg0->word_8;
    r3_1 = r13 + 4u;
    *gptr<u32>(r3_1) = u32(arg0->word_0);
    *gptr<u32>(r3_1 + 4) = u32(r1_1);
    *gptr<u32>(r3_1 + 8) = u32(r2_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_001a4f78(r4_1, r1_1, r2_1, r3_1);
    S0_1 = guest::cpu()->s[0];
    S1_1 = std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    S0_2 = S0_1 + S1_1;
    r1_2 = r13 + 4u;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    r0_1 = call_001a360c(r4_1, r1_2, 0x1bu, 0x14u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    return r0_1;
}

}  // namespace d_0068f2c8
GUEST_EXPORT(0x0068f2c8, d_0068f2c8::f_0068f2c8);

// f_0068f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f398 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)

u32 f_0068f398(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4_1 = *global_00950874;
    if (r4_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0x950874u;  // (from the original)
    }
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0023ffb8(r0_1, 0x59u, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c2ce0(4u, 1u, r2_1, r3_1);
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0_2 + 8u);
    }
    if (!zf_1) {
        *gptr<u32>(r13 + 0xcu) = u32(r0_2);  // (from the original)
    }
    *gptr<u32>(r13) = u32(0u);
    r1_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_001a360c(r4_1, r1_1, 0x4du, 0x13u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0068f398
GUEST_EXPORT(0x0068f398, d_0068f398::f_0068f398);

// f_0068f3fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f3fc {


u32 f_0068f3fc() {
    return 0x64u;  // (from the original)
}

}  // namespace d_0068f3fc
GUEST_EXPORT(0x0068f3fc, d_0068f3fc::f_0068f3fc);

// f_0068f460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0068f460 {

inline guest::global<u32, 0x00950874> global_00950874;  // (from the original)
inline constexpr guest::Function<0x001a360c, u32(u32, u32, u32, u32)> call_001a360c;  // (from the original)

u32 f_0068f460(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    r0_1 = *global_00950874;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(0u);
    r1_1 = r0_1 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_001a360c(r0_1, r1_1, 0x69u, 0x18u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    ea_2 = r13;
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0068f460
GUEST_EXPORT(0x0068f460, d_0068f460::f_0068f460);
