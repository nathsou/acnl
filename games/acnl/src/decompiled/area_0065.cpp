// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00650174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00650174 {

inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32, u32)> call_006dabd8;  // (from the original)

u32 f_00650174(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r1 = r0;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0023ffb8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r13 + 8u;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    if (u32(*gptr<u8>(0x9506b0u)) != 0xffu) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = *gptr<u32>(0x9506b4u);  // (from the original)
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006dabd8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00650174
GUEST_EXPORT(0x00650174, d_00650174::f_00650174);

// f_00650234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00650234 {

struct __attribute__((packed)) Object_00650234_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_00650234_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_00650234_0, byte_179, 0x179);  // (from the original)

inline constexpr guest::Function<0x0058a018, u32(u32, u32, u32, u32)> call_0058a018;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32, u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_00650234(gptr<Object_00650234_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_6502a4;
    }
    r6 = 4u;
    if (r1 != 0) {
        r1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1);
        r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 5u;
        r0 = call_0058a8e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4 + 8u));
    res = r0 << 0x19 >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = r0 | 0x40u;  // (from the original)
        *gptr<u8>(r4 + 8u) = u8(r0);
    } else {
        goto L_6502a0;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0058a018(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6502a0:;
    *gptr<u8>(r5 + 0x170u) = u8(r6);  // (from the original)
L_6502a4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00650234
GUEST_EXPORT(0x00650234, d_00650234::f_00650234);

// f_006502a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006502a8 {

struct __attribute__((packed)) Object_006502a8_0 {
    u8 unknown_0[0x17a];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x7dd];  // (not used here)
    u16 half_958;
    u16 half_95a;
};
GUEST_OFFSET(Object_006502a8_0, byte_17a, 0x17a);  // (from the original)
GUEST_OFFSET(Object_006502a8_0, half_958, 0x958);  // (from the original)
GUEST_OFFSET(Object_006502a8_0, half_95a, 0x95a);  // (from the original)

inline constexpr guest::Function<0x0056ade4, u32(u32, u32, u32, u32)> call_0056ade4;  // (from the original)

u32 f_006502a8(gptr<Object_006502a8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x100u;  // (from the original)
    r0 = u32(arg0->byte_17a);
    r5 = r5 + 0x71u;  // (from the original)
    if ((r0 & 1u) != 0) {
        goto L_65030c;
    }
    res = r0 << 0x1c >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_650300;
    }
    r6 = r4 + 0x900u;  // (from the original)
    r0 = r4 + 0x2cu;  // (from the original)
    r1 = u32(s32(s16(arg0->half_958)));
    r2 = u32(s32(s16(arg0->half_95a)));
    r0 = call_0056ade4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = u32(s32(s16(*gptr<u16>(r4 + 0x2cu))));  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r6 + 0x58u)))) != r1) {  // (from the original)
        goto L_650300;
    }
    r1 = u32(*gptr<u8>(r5 + 9u)) & ~8u;
    *gptr<u8>(r5 + 9u) = u8(r1);
L_650300:;
    r0 = u32(*gptr<u8>(r5 + 9u)) | 1u;
    *gptr<u8>(r5 + 9u) = u8(r0);
L_65030c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006502a8
GUEST_EXPORT(0x006502a8, d_006502a8::f_006502a8);

// f_00650310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00650310 {

inline constexpr guest::Function<0x0056ade4, u32(u32, u32, u32, u32)> call_0056ade4;  // (from the original)

u32 f_00650310(gptr<SlotObject> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x100u;  // (from the original)
    r0 = u32(u8(arg0->flags_17a));
    r5 = r5 + 0x71u;  // (from the original)
    res = r0 << 0x1e >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_650378;
    }
    res = r0 << 0x1b >> 0x1f;  // (from the original)
    if (res == 0) {
        goto L_65036c;
    }
    r6 = r4 + 0x900u;  // (from the original)
    r0 = r4 + 0x2eu;  // (from the original)
    r1 = u32(s32(s16(u16(arg0->target_angle_95c))));
    r2 = u32(s32(s16(u16(arg0->target_angle_95e))));
    r0 = call_0056ade4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = u32(s32(s16(*gptr<u16>(r4 + 0x2eu))));  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r6 + 0x5cu)))) != r1) {  // (from the original)
        goto L_65036c;
    }
    r1 = u32(*gptr<u8>(r5 + 9u)) & ~0x10u;  // (from the original)
    *gptr<u8>(r5 + 9u) = u8(r1);
L_65036c:;
    r0 = u32(*gptr<u8>(r5 + 9u)) | 2u;
    *gptr<u8>(r5 + 9u) = u8(r0);
L_650378:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00650310
GUEST_EXPORT(0x00650310, d_00650310::f_00650310);

// f_006512e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006512e8 {

inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;  // (from the original)
inline constexpr guest::Function<0x006a83fc, u32(u32, u32, u32, u32)> call_006a83fc;  // (from the original)
inline constexpr guest::Function<0x006a84e8, u32(u32, u32, u32, u32)> call_006a84e8;  // (from the original)
inline constexpr guest::Function<0x0071a88c, u32(u32, u32, u32, u32)> call_0071a88c;  // (from the original)

u32 f_006512e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    zf = r3 == 0;
    r4 = r3;
    r13 = r13 - 0x18u;  // (from the original)
    r3 = 0u;
    *gptr<u16>(r13) = u16(r3);
    if (!zf) {
        zf = r4 == 1u;
    }
    r6 = r1;
    r5 = r0 + 0x6b4u;  // (from the original)
    *gptr<u16>(r13 + 2u) = u16(r2);
    *gptr<u16>(r13 + 4u) = u16(r3);
    if (!zf) {
        r3 = 2u;
        r2 = r13;
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_006a84e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r0 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a88c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb10(r0, r1, r2, r3);
    r3 = r0;
    r2 = r13;
    r1 = r6;
    r0 = r5;
    if (r4 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_006a84e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a83fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006512e8
GUEST_EXPORT(0x006512e8, d_006512e8::f_006512e8);

// f_0065137c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065137c {


u32 f_0065137c() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x886878u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x651398u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0065137c
GUEST_EXPORT(0x0065137c, d_0065137c::f_0065137c);

// f_0065139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065139c {


u32 f_0065139c() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x886878u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6513b4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0065139c
GUEST_EXPORT(0x0065139c, d_0065139c::f_0065139c);

// f_006513bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006513bc {


u32 f_006513bc() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    r0 = 0x886878u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x6513d4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0)) * S1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006513bc
GUEST_EXPORT(0x006513bc, d_006513bc::f_006513bc);

// f_0065141c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065141c {

struct __attribute__((packed)) Object_0065141c_0 {
    u8 unknown_0[0x8c5];  // (not used here)
    u8 byte_8c5;
};
GUEST_OFFSET(Object_0065141c_0, byte_8c5, 0x8c5);  // (from the original)

inline constexpr guest::Function<0x0064dc88, u32(u32, u32, u32, u32)> call_0064dc88;  // (from the original)
inline constexpr guest::Function<0x00656e5c, u32(u32, u32, u32, u32)> call_00656e5c;  // (from the original)
inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> call_0068db1c;  // (from the original)

u32 f_0065141c(gptr<Object_0065141c_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    res = u32(arg0->byte_8c5) << 0x1a >> 0x1f;  // (from the original)
    if (res != 0) {
        r1 = 1u;
        S4 = S0;
        S3 = S0;
        S2 = S0;
        r2 = r1;
        *gptr<u32>(r13) = u32(r1);
        r3 = 0u;
        S1 = std::bit_cast<float>(*gptr<u32>(0x65147cu));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x651480u));  // (from the original)
        r1 = 0xcbu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        r0 = call_0068db1c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r0 + 0x8c7u));  // (from the original)
    if ((r1 & 1u) == 0) {
        ea = r13;
        r13 = r13 + 8;
        r3 = *gptr<u32>(ea);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        return call_0064dc88(r0, r1, r2, r3);
    }
    ea = r13;
    r13 = r13 + 8;
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    return call_00656e5c(r0, r1, r2, r3);
}

}  // namespace d_0065141c
GUEST_EXPORT(0x0065141c, d_0065141c::f_0065141c);

// f_006515b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006515b0 {

inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> call_0068db1c;  // (from the original)

u32 f_006515b0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    r1 = 1u;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    S4 = S0;
    S3 = S0;
    S2 = S0;
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    r3 = 0u;
    S1 = std::bit_cast<float>(*gptr<u32>(0x6515e4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x6515e8u));  // (from the original)
    r1 = 0xcbu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    call_0068db1c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_006515b0
GUEST_EXPORT(0x006515b0, d_006515b0::f_006515b0);

// f_006515ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006515ec {

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_006515ec(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fe8a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = r0 + 4u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006515ec
GUEST_EXPORT(0x006515ec, d_006515ec::f_006515ec);

// f_0065176c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065176c {

struct __attribute__((packed)) Object_0065176c_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_0065176c_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0058a918, u32(u32, u32, u32, u32)> call_0058a918;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_0065176c(gptr<Object_0065176c_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x886b5cu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0058a918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0065176c
GUEST_EXPORT(0x0065176c, d_0065176c::f_0065176c);

// f_0065179c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065179c {

inline constexpr guest::Function<0x0064f390, u32(u32, u32, u32, u32)> call_0064f390;  // (from the original)
inline constexpr guest::Function<0x00766bf8, u32(u32, u32, u32, u32)> call_00766bf8;  // (from the original)

u32 f_0065179c(gptr<SlotObject> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = u32(u8(arg0->state_1a9));
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 >= 0xebu) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_0064f390(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = u32(*gptr<u8>(r0 + 6u)) & 3u;
    if (r0 >= 3u) {
        r0 = 0u;
        goto L_6517dc;
    }
    if (r0 == 2u) {
        goto L_6517f0;
    }
L_6517dc:;
    res = u32(*gptr<u8>(r4 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    zf = res == 0;
    r1 = res;
    if (!zf) {
        zf = r0 == 1u;
    }
    if (zf) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
L_6517f0:;
    r1 = r4 + 0x4fcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_00766bf8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r13 + 4u;
    r2 = u32(*gptr<u8>(r4 + 0x8c5u)) & ~8u;  // (from the original)
    *gptr<u8>(r4 + 0x8c5u) = u8(r2);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r13));
    r0 = r4 + 0x8c5u;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(r1));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    r4 = r4 + 0x14u;  // (from the original)
    r1 = std::bit_cast<u32>(fabsf(S0 * S0 + S1 * S1 + S2 * S2));
    res = r1 - 0x34000000u;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ 0x34000000u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r2 | 8u;
        *gptr<u8>(r0) = u8(r1);
    }
    S1 = std::bit_cast<float>(*gptr<u32>(r4));
    S2 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    S3 = std::bit_cast<float>(*gptr<u32>(r4 + 8));
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S1 + std::bit_cast<float>(*gptr<u32>(r13))));
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S2 + std::bit_cast<float>(*gptr<u32>(r13 + 4u))));
    S0 = S3 + std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0065179c
GUEST_EXPORT(0x0065179c, d_0065179c::f_0065179c);

// f_006518d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006518d8 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0065473c, u32(u32, u32, u32, u32)> call_0065473c;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006518d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r1;
    r7 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u32>(r0 + 0xeu) = u32(*gptr<u32>(r5));  // (from the original)
    r1 = r0 + 0x13u;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r1) = u8(r0);
    r0 = call_0065473c(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r0) >> 8));
    r2 = r6;
    r0 = r7;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r3 = 0u;
    r1 = 0x92u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006518d8
GUEST_EXPORT(0x006518d8, d_006518d8::f_006518d8);

// f_00651928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00651928 {

inline constexpr guest::Function<0x005d4180, u32(u32, u32, u32, u32)> call_005d4180;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00651928(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r5 = r2;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r0 = ea + 1u;
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(r5)));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005d4180(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r6;
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    r3 = 0u;
    r1 = 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00651928
GUEST_EXPORT(0x00651928, d_00651928::f_00651928);

// f_006519c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006519c8 {

struct __attribute__((packed)) Object_006519c8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x14c];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x439];  // (not used here)
    u16 half_5b4;
};
GUEST_OFFSET(Object_006519c8_0, half_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006519c8_0, byte_17a, 0x17a);  // (from the original)
GUEST_OFFSET(Object_006519c8_0, half_5b4, 0x5b4);  // (from the original)


u32 f_006519c8(gptr<Object_006519c8_0> arg0, u32 r1, float S0, float S1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 - 8;
    r3 = sxth(u32(*gptr<u16>(r13 + 4u)) - u32(arg0->half_2c));
    arg0->byte_17a = u8(u32(arg0->byte_17a) & ~8u);
    r1 = u32(arg0->half_5b4);
    if (r1 != 0) {
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3))));
        S0 = std::bit_cast<float>(vcvt_sz_f(S1 / float(std::bit_cast<u32>(std::bit_cast<float>(r1)))));
        r1 = std::bit_cast<u32>(S0) + u32(arg0->half_2c);
        arg0->half_2c = u16(r1);
        r0 = u32(arg0->half_5b4);
        if (r0 == 0) {
            r0 = 0u;
            r13 = r13 + 8u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
        if (r0 >= 1u) {
            r0 = r0 - 1u;
        } else {
            r0 = 0u;
        }
        arg0->half_5b4 = u16(r0);
        r0 = 0u;
        r13 = r13 + 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = u32(*gptr<u16>(r13 + 4u));
    *gptr<u16>(r0 + 0x2cu) = u16(r1);  // (from the original)
    r0 = 1u;
    r13 = r13 + 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006519c8
GUEST_EXPORT(0x006519c8, d_006519c8::f_006519c8);

// f_006531d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006531d0 {

struct __attribute__((packed)) Object_006531d0_0 {
    u8 unknown_0[0x548];  // (not used here)
    u32 word_548;
    u32 word_54c;
    u32 word_550;
    u32 word_554;
    u32 word_558;
};
GUEST_OFFSET(Object_006531d0_0, word_548, 0x548);  // (from the original)
GUEST_OFFSET(Object_006531d0_0, word_54c, 0x54c);  // (from the original)
GUEST_OFFSET(Object_006531d0_0, word_550, 0x550);  // (from the original)
GUEST_OFFSET(Object_006531d0_0, word_554, 0x554);  // (from the original)
GUEST_OFFSET(Object_006531d0_0, word_558, 0x558);  // (from the original)

struct __attribute__((packed)) Object_006531d0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006531d0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006531d0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006531d0_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x006aca10, u32(u32, u32, u32, u32)> call_006aca10;  // (from the original)

u32 f_006531d0(gptr<Object_006531d0_0> arg0, gptr<Object_006531d0_1> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r7 = 0u;
    arg0->word_548 = u32(arg1->word_0);
    r5 = r4 + 0x59cu;  // (from the original)
    r3 = ~0x80000000u;  // (from the original)
    arg0->word_54c = u32(arg1->word_4);
    r2 = 0x10u;  // (from the original)
    arg0->word_550 = u32(arg1->word_8);
    r1 = r4 + 0x540u;  // (from the original)
    arg0->word_554 = u32(std::bit_cast<u32>(S0));
    arg0->word_558 = u32(std::bit_cast<u32>(S1));
    r0 = r4 + 0x55cu;  // (from the original)
    r6 = r0;
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 8u) = u32(r5);
    *gptr<u32>(r13 + 4u) = u32(r7);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006aca10(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 0u;
    *gptr<u32>(r6 + 0x34u) = u32(r1);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    *gptr<u8>(r5 + 4u) = u8(r0);
    *gptr<u32>(r5 + 8u) = u32(r7);
    *gptr<u32>(r5 + 0xcu) = u32(r7);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006531d0
GUEST_EXPORT(0x006531d0, d_006531d0::f_006531d0);

// f_00653724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653724 {

inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_00653724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = r1;
    r1 = 0x94dea0u;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r3;
    r3 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u8>(r1) = u8(r0);
    *gptr<u8>(r1 + 1u) = u8(r3);
    r1 = *gptr<u32>(0x950368u);  // (from the original)
    if (r1 == 0) {
        r0 = 0u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r2);
    r3 = r12;
    r2 = r4;
    r0 = u32(*gptr<u16>(0x886efau));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00653724
GUEST_EXPORT(0x00653724, d_00653724::f_00653724);

// f_006537b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006537b8 {

struct __attribute__((packed)) Object_006537b8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_006537b8_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_006537b8_0, byte_179, 0x179);  // (from the original)

inline constexpr guest::Function<0x0058a3c4, u32(u32, u32, u32, u32)> call_0058a3c4;  // (from the original)
inline constexpr guest::Function<0x0058a72c, u32(u32, u32, u32, u32)> call_0058a72c;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32, u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_006537b8(gptr<Object_006537b8_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_65384c;
    }
    if (r2 != 0) {
        r1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1);
        r0 = call_0058c19c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = 5u;
        r0 = call_0058a8e0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    r1 = u32(*gptr<u8>(r4 + 8u));
    res = r1 << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        r1 = r1 | 0x20u;  // (from the original)
        *gptr<u8>(r4 + 8u) = u8(r1);
        r0 = call_0058c19c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = call_0058a3c4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (r5 == 0) {
        goto L_65384c;
    }
    res = u32(*gptr<u8>(r4)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_65384c;
    }
    r0 = call_0058c19c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(0x886b60u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058a72c(r0, r1, r2, guest::cpu()->r[3]);
L_65384c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006537b8
GUEST_EXPORT(0x006537b8, d_006537b8::f_006537b8);

// f_00653888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653888 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00653888(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r1 = r9;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41fc(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r6) >> 8));
    *gptr<u8>(r8 + 0x13u) = u8(r7);  // (from the original)
    r2 = r8;
    r0 = r10;
    *gptr<u8>(r8 + 0x14u) = u8(r5);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    r3 = 0u;
    r1 = 0x81u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00653888
GUEST_EXPORT(0x00653888, d_00653888::f_00653888);

// f_006538e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006538e0 {

struct __attribute__((packed)) Object_006538e0_1 {
    u16 half_0;
};
GUEST_OFFSET(Object_006538e0_1, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x006547e4, u32(u32, u32, u32, u32)> call_006547e4;  // (from the original)

u32 f_006538e0(u32 r0, gptr<Object_006538e0_1> arg1, u32 r2_unused, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x100u;  // (from the original)
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    if (r1 != 0) {
        *gptr<u32>(r13) = u32(r2);
        r1 = u32(s32(s16(arg1->half_0)));
        r3 = 0x1000u;  // (from the original)
        r2 = 6u;
        guest::cpu()->r[13] = r13;
        r0 = call_006547e4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0x1000u;  // (from the original)
    r1 = uxth(u32(*gptr<u16>(r0 + 0x8c2u)));  // (from the original)
    *gptr<u16>(r13) = u16(r1);
    *gptr<u32>(r13) = u32(r2);
    r1 = sxth(uxth(r1));
    r2 = 6u;
    guest::cpu()->r[13] = r13;
    r0 = call_006547e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006538e0
GUEST_EXPORT(0x006538e0, d_006538e0::f_006538e0);

// f_00653f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653f24 {

inline constexpr guest::Function<0x0064f368, u32(u32, u32, u32, u32)> call_0064f368;  // (from the original)
inline constexpr guest::Function<0x006540d8, u32(u32, u32, u32, u32)> call_006540d8;  // (from the original)
inline constexpr guest::Function<0x00654230, u32(u32, u32, u32, u32)> call_00654230;  // (from the original)
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;  // (from the original)

u32 f_00653f24(gptr<SlotObject> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r0 + 0x171u;  // (from the original)
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_654008;
    }
    *gptr<u16>(r13) = u16(0u);
    r1 = *gptr<u32>(r13);
    r2 = 0xf0u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006540d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x900u;  // (from the original)
    zf = r6 == 0xeu;  // (from the original)
    *gptr<u8>(r5 + 9u) = u8(u32(*gptr<u8>(r5 + 9u)) & ~0x10u);  // (from the original)
    r1 = u32(*gptr<u16>(r4 + 0x2eu));  // (from the original)
    r7 = 0u;
    if (!zf) {
        zf = r6 == 0x1cu;  // (from the original)
    }
    *gptr<u16>(r0 + 0x5cu) = u16(r1);  // (from the original)
    *gptr<u16>(r0 + 0x5eu) = u16(r7);  // (from the original)
    if (!zf) {
        zf = r6 == 0x9fu;  // (from the original)
        if (!zf) {
            zf = u32(*gptr<u8>(r4 + 0x978u)) == 0;  // (from the original)
        }
        if (!zf) {
            r0 = r4;
            guest::cpu()->r[13] = r13;
            r0 = call_0064f368(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
    }
    r6 = r4 + 0x97au;  // (from the original)
    *gptr<u16>(r6) = u16(0xau);  // (from the original)
    *gptr<u8>(r6 + 2u) = u8(r7);
    *gptr<u8>(r6 + 3u) = u8(r7);
    res = u32(*gptr<u8>(r5)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_654008;
    }
    res = u32(*gptr<u8>(r5 + 6u)) << 0x1b >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_654008;
    }
    r1 = r4 + 0x43cu;  // (from the original)
    r2 = *gptr<u32>(r4 + 0x264u);  // (from the original)
    r3 = 1u;
    r5 = r1;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070ac68(r0, r1, r2, r3);
    r1 = r5;
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    return call_00654230(r0, r1, r2, r3);
L_654008:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00653f24
GUEST_EXPORT(0x00653f24, d_00653f24::f_00653f24);

// f_006540d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006540d8 {

struct __attribute__((packed)) Object_006540d8_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x14c];  // (not used here)
    u8 byte_17a;
    u8 unknown_17b[0x7dd];  // (not used here)
    u16 half_958;
    u16 half_95a;
};
GUEST_OFFSET(Object_006540d8_0, half_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006540d8_0, byte_17a, 0x17a);  // (from the original)
GUEST_OFFSET(Object_006540d8_0, half_958, 0x958);  // (from the original)
GUEST_OFFSET(Object_006540d8_0, half_95a, 0x95a);  // (from the original)


u32 f_006540d8(gptr<Object_006540d8_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    r13 = r13 - 0xc;  // (from the original)
    arg0->half_958 = u16(u32(*gptr<u16>(r13 + 4u)));
    arg0->half_95a = u16(r2);
    r1 = r0 + 0x171u;  // (from the original)
    r12 = u32(arg0->byte_17a) | 8u;
    arg0->byte_17a = u8(r12);
    if (u32(s32(s16(arg0->half_958))) == u32(s32(s16(arg0->half_2c)))) {
        arg0->byte_17a = u8(r12 & ~8u);
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006540d8
GUEST_EXPORT(0x006540d8, d_006540d8::f_006540d8);

// f_00654170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00654170 {

inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> call_001cf9c4;  // (from the original)
inline constexpr guest::Function<0x00268db4, u32(u32, u32, u32, u32)> call_00268db4;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_00654170(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r1;
    r2 = 0xcu;  // (from the original)
    r0 = r0 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00268db4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0071a844(r0, r1, r2, r3);
    r6 = 0u;
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r1 = r0;
    r3 = r6;
    r2 = r6;
    S0 = std::bit_cast<float>(*gptr<u32>(0x654204u));  // (from the original)
    r0 = r4 + 0x1b4u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r6);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001cf9c4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    if (r5 >= 0x41u) {  // (from the original)
        r0 = 0x951cbcu;  // (from the original)
    } else {
        r0 = 0x951cbcu + (r5 + (r5 << 1) << 2);  // (from the original)
    }
    *gptr<u16>(0x5bau + r4) = u16(*gptr<u32>(r0 + 8u));  // (from the original)
    r0 = 0x1554u;  // (from the original)
    *gptr<u8>(r0 + r4) = u8(r5);
    *gptr<u16>((r0 | u32(s32(r0) >> 0xb)) + r4) = u16(r6);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x174u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r4 + 0x174u) = u8(r1);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00654170
GUEST_EXPORT(0x00654170, d_00654170::f_00654170);

// f_006542dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006542dc {

inline constexpr guest::Function<0x00277e1c, u32(u32, u32, u32, u32)> call_00277e1c;  // (from the original)
inline constexpr guest::Function<0x005ce2e8, u32(u32, u32, u32, u32)> call_005ce2e8;  // (from the original)
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> call_00659674;  // (from the original)
inline constexpr guest::Function<0x006c6fe8, u32(u32, u32, u32, u32)> call_006c6fe8;  // (from the original)
inline constexpr guest::Function<0x006c87ac, u32(u32, u32, u32, u32)> call_006c87ac;  // (from the original)

u32 f_006542dc(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r1;
    res = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_6543a0;
    }
    r7 = r4 + 0x5ecu;  // (from the original)
    r8 = r4 + 0x424u;  // (from the original)
    r5 = r4 + 0x171u;  // (from the original)
    if (r0 == 0xffu) {  // (from the original)
        goto L_654364;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005ce2e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6543a0;
    }
    r1 = r0;
    r2 = 0xffu;  // (from the original)
    res = u32(*gptr<u8>(r4 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_6543a0;
    }
L_65433c:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00277e1c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
    r0 = r8;
    r13 = r13 + 0x18;  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    return call_00659674(r0, r1, r2, guest::cpu()->r[3]);
L_654364:;
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006c6fe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 + 1u == 0) {
        goto L_6543a0;
    }
    ea = r4 + 0x47cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_006c87ac(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r6;
    res = u32(*gptr<u8>(r4 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::preempt();
        goto L_65433c;
    }
L_6543a0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006542dc
GUEST_EXPORT(0x006542dc, d_006542dc::f_006542dc);

// f_006543a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006543a4 {

struct __attribute__((packed)) Object_006543a4_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
};
GUEST_OFFSET(Object_006543a4_0, byte_66, 0x66);  // (from the original)

inline constexpr guest::Function<0x00277e1c, u32(u32, u32, u32, u32)> call_00277e1c;  // (from the original)
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> call_00659674;  // (from the original)

u32 f_006543a4(gptr<Object_006543a4_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    res = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x5ecu;  // (from the original)
    r0 = call_00277e1c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x424u;  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0x173u)) | 2u;  // (from the original)
    *gptr<u8>(r4 + 0x173u) = u8(r2 | 4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 1u;
    return call_00659674(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006543a4
GUEST_EXPORT(0x006543a4, d_006543a4::f_006543a4);

// f_006543f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006543f0 {

inline constexpr guest::Function<0x00277e54, u32(u32, u32, u32, u32)> call_00277e54;  // (from the original)
inline constexpr guest::Function<0x005ce2e8, u32(u32, u32, u32, u32)> call_005ce2e8;  // (from the original)
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> call_00659674;  // (from the original)
inline constexpr guest::Function<0x006c6fe8, u32(u32, u32, u32, u32)> call_006c6fe8;  // (from the original)
inline constexpr guest::Function<0x006c87ac, u32(u32, u32, u32, u32)> call_006c87ac;  // (from the original)

u32 f_006543f0(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = r1;
    res = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        goto L_6544b4;
    }
    r7 = r4 + 0x5ecu;  // (from the original)
    r8 = r4 + 0x424u;  // (from the original)
    r5 = r4 + 0x171u;  // (from the original)
    if (r0 == 0xffu) {  // (from the original)
        goto L_654478;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005ce2e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6544b4;
    }
    r1 = r0;
    r2 = 0xffu;  // (from the original)
    res = u32(*gptr<u8>(r4 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        goto L_6544b4;
    }
L_654450:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00277e54(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
    r0 = r8;
    r13 = r13 + 0x18;  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    return call_00659674(r0, r1, r2, guest::cpu()->r[3]);
L_654478:;
    r0 = r4 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006c6fe8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 + 1u == 0) {
        goto L_6544b4;
    }
    ea = r4 + 0x47cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_006c87ac(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r6;
    res = u32(*gptr<u8>(r4 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::preempt();
        goto L_654450;
    }
L_6544b4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006543f0
GUEST_EXPORT(0x006543f0, d_006543f0::f_006543f0);

// f_006544b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006544b8 {

struct __attribute__((packed)) Object_006544b8_0 {
    u8 unknown_0[0x66];  // (not used here)
    u8 byte_66;
};
GUEST_OFFSET(Object_006544b8_0, byte_66, 0x66);  // (from the original)

inline constexpr guest::Function<0x00277e54, u32(u32, u32, u32, u32)> call_00277e54;  // (from the original)
inline constexpr guest::Function<0x00659674, u32(u32, u32, u32, u32)> call_00659674;  // (from the original)

u32 f_006544b8(gptr<Object_006544b8_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    res = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4 + 0x5ecu;  // (from the original)
    r0 = call_00277e54(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x424u;  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0x173u)) | 2u;  // (from the original)
    *gptr<u8>(r4 + 0x173u) = u8(r2 | 4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = 1u;
    return call_00659674(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_006544b8
GUEST_EXPORT(0x006544b8, d_006544b8::f_006544b8);

// f_0065472c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065472c {

inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)

u32 f_0065472c() {
    u32 r3 = 0;
    float S0 = 0;
    r3 = 1u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x654738u));  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_0064ee94(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_0065472c
GUEST_EXPORT(0x0065472c, d_0065472c::f_0065472c);

// f_006547d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006547d0 {

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_006547d0(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fe8a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = r0 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006547d0
GUEST_EXPORT(0x006547d0, d_006547d0::f_006547d0);

// f_006547e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006547e4 {

inline constexpr guest::Function<0x0056af2c, u32(u32, u32, u32, u32)> call_0056af2c;  // (from the original)

u32 f_006547e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r0 = r4 + 0x2eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056af2c(r0, r1, r2, r3);
    r0 = r4 + 0x900u;  // (from the original)
    *gptr<u8>(r4 + 0x17au) = u8(u32(*gptr<u8>(r4 + 0x17au)) & ~0x10u);  // (from the original)
    r1 = 0u;
    *gptr<u16>(r0 + 0x5cu) = u16(u32(*gptr<u16>(r4 + 0x2eu)));  // (from the original)
    *gptr<u16>(r0 + 0x5eu) = u16(r1);  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r4 + 0x2eu)))) == r5) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006547e4
GUEST_EXPORT(0x006547e4, d_006547e4::f_006547e4);

// f_0065487c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065487c {

inline constexpr guest::Function<0x0068ec98, u32(u32, u32, u32, u32)> call_0068ec98;  // (from the original)

u32 f_0065487c(gptr<SlotObject> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068ec98(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0065487c
GUEST_EXPORT(0x0065487c, d_0065487c::f_0065487c);

// f_006548ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006548ac {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_006548ac(gptr<SlotObject> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (u32(u8(arg0->state_1a9)) == r1) {
        r0 = 1u;
        return r0;
    }
    return call_0064d0b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006548ac
GUEST_EXPORT(0x006548ac, d_006548ac::f_006548ac);

// f_006548c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006548c4 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006548c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r8 = r3;
    r10 = r1;
    r1 = r13 + 0x28u;  // (from the original)
    r11 = r0;
    r5 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r10;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41fc(r0, r1, r2, r3);
    *gptr<u8>(r4 + 4u) = u8(u32(s32(r7) >> 8));
    *gptr<u8>(r9 + 0x13u) = u8(r8);  // (from the original)
    *gptr<u8>(r9 + 0x14u) = u8(r5);  // (from the original)
    r2 = r9;
    r0 = r11;
    *gptr<u8>(r4 + 7u) = u8(r6);
    r13 = r13 + 0x28;  // (from the original)
    r3 = 0u;
    r1 = 0x87u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006548c4
GUEST_EXPORT(0x006548c4, d_006548c4::f_006548c4);

// f_00654924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00654924 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00654924(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x30u;  // (from the original)
    r8 = r1;
    r5 = r2;
    r11 = r0;
    r9 = r3;
    ea = r13 + 0x30u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = *gptr<u32>(r5 + 4);
    r2 = *gptr<u32>(r5 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r1 = r13;
    r0 = r4 + 2u;
    *gptr<u8>(r4) = u8(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r0 = 0u;
    r3 = r0;
    r2 = r10;
    *gptr<u8>(r10 + 0x14u) = u8(u32(s32(u32(*gptr<u16>(r9))) >> 8));  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r6);
    *gptr<u8>(r4 + 7u) = u8(r0);
    r1 = 0x44u;  // (from the original)
    r0 = r11;
    *gptr<u8>(r4 + 8u) = u8(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_0064d0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00654924
GUEST_EXPORT(0x00654924, d_00654924::f_00654924);

// f_00657748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00657748 {

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_00657748(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_001b76ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00657748
GUEST_EXPORT(0x00657748, d_00657748::f_00657748);

// f_0065776c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065776c {

inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> call_0076e80c;  // (from the original)

u32 f_0065776c(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x10u;  // (from the original)
    return call_0076e80c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0065776c
GUEST_EXPORT(0x0065776c, d_0065776c::f_0065776c);

// f_00657790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00657790 {

struct __attribute__((packed)) Object_00657790_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_00657790_0, byte_171, 0x171);  // (from the original)

struct __attribute__((packed)) Object_00657790_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00657790_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00657790_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00657790_1, word_8, 0x8);  // (from the original)


u32 f_00657790(gptr<Object_00657790_0> arg0, gptr<Object_00657790_1> arg1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x9856f4u;  // (from the original)
    *gptr<u32>(r0) = u32(arg1->word_0);
    *gptr<u32>(r0 + 4u) = u32(arg1->word_4);
    r1 = arg1->word_8;
    *gptr<u32>(r0 + 8u) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00657790
GUEST_EXPORT(0x00657790, d_00657790::f_00657790);

// f_006577c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006577c4 {

struct __attribute__((packed)) Object_006577c4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_006577c4_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068ef60, u32(u32, u32, u32, u32)> call_0068ef60;  // (from the original)

u32 f_006577c4(gptr<Object_006577c4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068ef60(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006577c4
GUEST_EXPORT(0x006577c4, d_006577c4::f_006577c4);

// f_006577f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006577f4 {

struct __attribute__((packed)) Object_006577f4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
};
GUEST_OFFSET(Object_006577f4_0, byte_171, 0x171);  // (from the original)

inline constexpr guest::Function<0x0068ef84, u32(u32, u32, u32, u32)> call_0068ef84;  // (from the original)

u32 f_006577f4(gptr<Object_006577f4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0068ef84(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = u32(*gptr<u8>(r4 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 7u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_006577f4
GUEST_EXPORT(0x006577f4, d_006577f4::f_006577f4);

// f_0065795c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065795c {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065795c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r2;
    r7 = r1;
    r8 = r0;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r4 = r0 + 0xeu;  // (from the original)
    r1 = r7;
    r0 = r4;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r6;
    r3 = 0u;
    r1 = 0x62u;  // (from the original)
    *gptr<u8>(r4 + 4u) = u8(u32(s32(u32(*gptr<u16>(r5))) >> 8));
    r0 = r8;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0065795c
GUEST_EXPORT(0x0065795c, d_0065795c::f_0065795c);

// f_006579a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006579a8 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006579a8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r2;
    r7 = r1;
    r8 = r0;
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r7;
    r1 = *gptr<u32>(ea);
    r2 = r0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x657a24u));  // (from the original)
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    r3 = 0u;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S1)));
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r0 + 4u;
    *gptr<u16>(ea) = u16(r1);
    r0 = ea;
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 8u)) * S1));
    r1 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r0 + 2u;
    *gptr<u16>(ea) = u16(r1);
    ea = r2 + 0x17u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    ea = r2 + 0x18u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    r13 = r13 + 4u;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    r1 = 0x73u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_006579a8
GUEST_EXPORT(0x006579a8, d_006579a8::f_006579a8);

// f_00659674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659674 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x005992fc, u32(u32, u32, u32, u32)> call_005992fc;  // (from the original)

u32 f_00659674(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r1;
    r2 = r0;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r13);
    r5 = *gptr<u32>(r13 + 4);
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005992fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r6 == 0) {
        goto L_659724;
    }
    r2 = 0xaadaf4u;  // (from the original)
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    r1 = 1u;
    if (cf) {
        goto L_6596e4;
    }
    r0 = r4 + ((r5 << 3) - r5 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_6596e4;
    }
    r12 = r0 & 7u;
    r0 = r2 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r1, r12 & 0xff));  // (from the original)
    *gptr<u8>(r2 + 0x620u) = u8(r1);  // (from the original)
L_6596e4:;
    r0 = 0xa84790u;  // (from the original)
    cf = r4 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r5 >= 0x70u;  // (from the original)
    }
    r2 = r0 - 0xfffd667bu;  // (from the original)
    if (cf) {
        goto L_659724;
    }
    r0 = r4 + ((r5 << 3) - r5 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_659724;
    }
    r12 = r0 & 7u;
    r0 = r2 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r1, r12 & 0xff));  // (from the original)
    *gptr<u8>(r2 + 0x620u) = u8(r1);  // (from the original)
L_659724:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00659674
GUEST_EXPORT(0x00659674, d_00659674::f_00659674);

// f_00659750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659750 {

struct __attribute__((packed)) Object_00659750_0 {
    u8 unknown_0[0x2e];  // (not used here)
    u16 half_2e;
};
GUEST_OFFSET(Object_00659750_0, half_2e, 0x2e);  // (from the original)


u32 f_00659750(gptr<Object_00659750_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12 = u32(s32(s16(arg0->half_2e)));
    r5 = sxth(r1 - r12);
    if (r12 == r1) {
        goto L_6597f4;
    }
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5))));
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
    r4 = sxth(std::bit_cast<u32>(S0));
    res = r4 - r3;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r4 ^ r3) & (r4 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r6 = 0u - r3;
        res = r6 - r4;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r6 ^ r4) & (r6 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_6597b4;
    }
    res = r4 - r2;
    if (!u32(res == 0) && res >> 0x1f == ((r4 ^ r2) & (r4 ^ res)) >> 0x1f) {  // (from the original)
        r4 = r2;
        goto L_6597a8;
    }
    r2 = 0u - r2;
    res = r2 - r4;
    if (!u32(res == 0) && res >> 0x1f == ((r2 ^ r4) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r4 = sxth(r2);
    }
L_6597a8:;
    r12 = sxth(r12 + r4);
    goto L_6597f4;
L_6597b4:;
    res = r5;
    if (res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6597dc;
    }
    r12 = sxth(r12 + r3);
    r2 = sxth(r1 - r12);
    res = r2;
    if (!u32(res == 0) && res >> 0x1f == (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        goto L_6597f4;
    }
L_6597d4:;
    r12 = r1;
    goto L_6597f4;
L_6597dc:;
    r12 = sxth(r12 - r3);
    r2 = sxth(r1 - r12);
    res = r2;
    if (res >> 0x1f == (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_6597d4;
    }
L_6597f4:;
    *gptr<u16>(r0 + 0x2eu) = u16(r12);  // (from the original)
    r2 = r0 + 0x900u;  // (from the original)
    *gptr<u8>(r0 + 0x17au) = u8(u32(*gptr<u8>(r0 + 0x17au)) & ~0x10u);  // (from the original)
    *gptr<u16>(r2 + 0x5cu) = u16(uxth(r12));  // (from the original)
    *gptr<u16>(r2 + 0x5eu) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r0 + 0x2eu)))) == r1) {  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00659750
GUEST_EXPORT(0x00659750, d_00659750::f_00659750);

// f_006598a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006598a8 {

struct __attribute__((packed)) Object_006598a8_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_006598a8_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_006598a8_0, byte_179, 0x179);  // (from the original)

inline constexpr guest::Function<0x0058a1d8, u32(u32, u32, u32, u32)> call_0058a1d8;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32, u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_006598a8(gptr<Object_006598a8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_659918;
    }
    r6 = 2u;
    if (r1 != 0) {
        r1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1);
        r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 5u;
        r0 = call_0058a8e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4 + 8u));
    res = r0 << 0x1b >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = r0 | 0x10u;  // (from the original)
        *gptr<u8>(r4 + 8u) = u8(r0);
    } else {
        goto L_659914;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0058a1d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_659914:;
    *gptr<u8>(r5 + 0x170u) = u8(r6);  // (from the original)
L_659918:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006598a8
GUEST_EXPORT(0x006598a8, d_006598a8::f_006598a8);

// f_00659d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659d14 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659d14(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r2;
    r7 = r1;
    r8 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r7;
    r1 = *gptr<u32>(ea);
    r2 = r0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x659d98u));  // (from the original)
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = ea + 4u;
    *gptr<u8>(ea) = u8(r5);
    ea = r2 + 0x13u;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    r0 = 0u;
    r3 = r0;
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S1)));
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r2 + 0x14u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    S0 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 8u)) * S1));
    r1 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r2 + 0x16u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    ea = r2 + 0x18u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    r13 = r13 + 4u;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    r1 = 0x72u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00659d14
GUEST_EXPORT(0x00659d14, d_00659d14::f_00659d14);

// f_00659e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659e34 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659e34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r3;
    r7 = r1;
    r8 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    ea = r7;
    r1 = u32(*gptr<u16>(ea));
    r2 = r0;
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
    r0 = ea;
    r1 = 0x15u;  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r5);
    *gptr<u8>(r0 + 3u) = u8(r6);
    *gptr<u8>(r0 + 4u) = u8(r4);
    r0 = 0u;
    ea = r2 + 0x13u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    r3 = r0;
    r13 = r13 + 4u;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00659e34
GUEST_EXPORT(0x00659e34, d_00659e34::f_00659e34);

// f_00659f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659f14 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659f14(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r2;
    r7 = r1;
    r8 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r6 = r0;
    r5 = r0 + 0xeu;  // (from the original)
    r1 = r7;
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_005d41b8(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x659fa4u));  // (from the original)
    r2 = r6;
    r3 = 0u;
    r0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r5;
    *gptr<u16>(ea) = u16(r0);
    r1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4 + 4u)) * S0)));
    ea = r13;
    *gptr<u16>(ea) = u16(r1);
    ea = r5 + 2u;
    *gptr<u16>(ea) = u16(r1);
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 8u));
    r1 = 0xb0u;  // (from the original)
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
    r0 = std::bit_cast<u32>(S0);
    ea = r13;
    *gptr<u16>(ea) = u16(r0);
    ea = r5 + 4u;
    *gptr<u16>(ea) = u16(r0);
    r13 = r13 + 4u;
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_00659f14
GUEST_EXPORT(0x00659f14, d_00659f14::f_00659f14);

// f_0065d5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065d5a8 {


u32 f_0065d5a8() {
    u32 r0 = 0;
    float S0 = 0;
    float S1 = 0;
    S1 = std::bit_cast<float>(*gptr<u32>(0x65d5c8u));  // (from the original)
    r0 = 0x886878u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x886890u)) * S1 * std::bit_cast<float>(*gptr<u32>(r0));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0065d5a8
GUEST_EXPORT(0x0065d5a8, d_0065d5a8::f_0065d5a8);

// f_0065d5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065d5d4 {

struct __attribute__((packed)) Object_0065d5d4_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x16];  // (not used here)
    u32 word_188;
    u8 byte_18c;
    u8 unknown_18d[0x73d];  // (not used here)
    u32 word_8ca;
};
GUEST_OFFSET(Object_0065d5d4_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0065d5d4_0, word_188, 0x188);  // (from the original)
GUEST_OFFSET(Object_0065d5d4_0, byte_18c, 0x18c);  // (from the original)
GUEST_OFFSET(Object_0065d5d4_0, word_8ca, 0x8ca);  // (from the original)


u32 f_0065d5d4(gptr<Object_0065d5d4_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x65d618u));  // (from the original)
    r1 = 0x184u;  // (from the original)
    arg0->word_188 = u32(std::bit_cast<u32>(S0));
    *gptr<u16>(r1 + r0) = u16(0x12cu);  // (from the original)
    r2 = 0u;
    *gptr<u16>((r1 | u32(s32(r1) >> 6)) + r0) = u16(r2);
    arg0->byte_18c = u8(r2);
    r1 = r0 + 0x8cau;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 0x1000u;  // (from the original)
        arg0->word_8ca = u32(r0);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0065d5d4
GUEST_EXPORT(0x0065d5d4, d_0065d5d4::f_0065d5d4);

// f_0065d7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065d7ec {

inline constexpr guest::Function<0x0026a5dc, u32(u32, u32, u32, u32)> call_0026a5dc;  // (from the original)

u32 f_0065d7ec(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0xd00u;  // (from the original)
    r0 = call_0026a5dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x174u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r4 + 0x174u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0065d7ec
GUEST_EXPORT(0x0065d7ec, d_0065d7ec::f_0065d7ec);

// f_0065daa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065daa8 {

struct __attribute__((packed)) Object_0065daa8_0 {
    u8 unknown_0[0x914];  // (not used here)
    u32 word_914;
    u32 word_918;
    u8 unknown_91c[0x3];  // (not used here)
    u8 byte_91f;
};
GUEST_OFFSET(Object_0065daa8_0, word_914, 0x914);  // (from the original)
GUEST_OFFSET(Object_0065daa8_0, word_918, 0x918);  // (from the original)
GUEST_OFFSET(Object_0065daa8_0, byte_91f, 0x91f);  // (from the original)

inline constexpr guest::Function<0x0018df18, u32(u32, u32, u32, u32)> call_0018df18;  // (from the original)

u32 f_0065daa8(gptr<Object_0065daa8_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 zf = 0;
    r12 = r1;
    r4 = r2;
    r2 = r3;
    zf = u32(arg0->byte_91f) == 0;
    r3 = arg0->word_918;
    if (!zf) {
        S0 = std::bit_cast<float>(arg0->word_914);
    }
    r1 = r4;
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x65dae0u));  // (from the original)
    }
    r0 = r12;
    guest::cpu()->s[0] = S0;
    return call_0018df18(r0, r1, r2, r3);
}

}  // namespace d_0065daa8
GUEST_EXPORT(0x0065daa8, d_0065daa8::f_0065daa8);

// f_0065db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065db0c {

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32, u32)> call_0024b448;  // (from the original)
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32, u32, u32)> call_0024b7b8;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)
inline constexpr guest::Function<0x00309bd4, u32(u32, u32, u32, u32)> call_00309bd4;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)
inline constexpr guest::Function<0x0064c5e0, u32(u32, u32, u32, u32)> call_0064c5e0;  // (from the original)
inline constexpr guest::Function<0x0064f068, u32(u32, u32, u32, u32)> call_0064f068;  // (from the original)
inline constexpr guest::Function<0x0065377c, u32(u32, u32, u32, u32)> call_0065377c;  // (from the original)
inline constexpr guest::Function<0x00653854, u32(u32, u32, u32, u32)> call_00653854;  // (from the original)
inline constexpr guest::Function<0x006b60d8, u32(u32, u32, u32, u32)> call_006b60d8;  // (from the original)
inline constexpr guest::Function<0x006b8140, u32(u32, u32, u32, u32)> call_006b8140;  // (from the original)
inline constexpr guest::Function<0x006b8d80, u32(u32, u32, u32, u32)> call_006b8d80;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)
inline constexpr guest::Function<0x007017c0, u32(u32, u32, u32, u32)> call_007017c0;  // (from the original)

u32 f_0065db0c(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_65dca8;
    }
    r0 = call_0064c5e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_65dca8;
    }
    r1 = 0x40u;  // (from the original)
    r0 = 3u;
    r0 = call_0064f068(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_65dca8;
    }
    r1 = r5;
    r0 = r4;
    r0 = call_00653854(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = r1;
    r0 = call_006f0130(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 1u;
    r0 = r1;
    r0 = call_0024b7b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_007017c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002fd068(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = r0;
    r1 = 1u;
    r0 = call_006b8140(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_002ffad8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = 1u;
    r0 = r6;
    r0 = call_006b60d8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0xcu;  // (from the original)
    r0 = call_00309bd4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = 1u;
        r0 = r6;
        r0 = call_006b8d80(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    r0 = call_0065377c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_65dca8;
    }
    r2 = 1u;
    r1 = 0xfu;  // (from the original)
    r0 = call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r5;
    r0 = call_0030b6b8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x22bau;  // (from the original)
    r1 = r0;
    res = r1 - r2;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ r2) & (r1 ^ res)) >> 0x1f;  // (from the original)
    r0 = r0 - r2;
    if (zf) {
        goto L_65dd3c;
    }
    if (!(!zf && nf == vf)) {
        r2 = r2 - 0x11u;  // (from the original)
        res = r1 - r2;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r2) & (r1 ^ res)) >> 0x1f;  // (from the original)
        r0 = r1 - r2;
        if (zf) {
            goto L_65dd00;
        }
        if (!(!zf && nf == vf)) {
            res = r1 - 0x2296u;  // (from the original)
            r0 = res;
            if (res == 0) {
                goto L_65dd64;
            }
            if (r0 == 4u) {
                goto L_65dcd8;
            }
            if (r0 == 9u) {
                goto L_65dd50;
            }
            if (r0 != 0xfu) {  // (from the original)
                goto L_65dca8;
            }
            r0 = r4;
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            r2 = 1u;
            r1 = 0x18u;  // (from the original)
            return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
        }
        if (r0 == 1u) {
            goto L_65dd14;
        }
        if (r0 == 4u) {
            goto L_65dd78;
        }
        if (r0 == 0xau) {  // (from the original)
            goto L_65dcec;
        }
        if (r0 != 0xbu) {  // (from the original)
            goto L_65dca8;
        }
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r2 = 1u;
        r1 = 0x29u;  // (from the original)
        return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
    }
    res = r0 - 0x10u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0x10u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_65dd8c;
    }
    if (!zf && nf == vf) {
        goto L_65dcac;
    }
    zf = r0 == 0xbu;  // (from the original)
    if (!zf) {
        zf = r0 == 0xcu;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0xdu;  // (from the original)
    }
    if (zf) {
        goto L_65dda0;
    }
    if (r0 == 0xfu) {  // (from the original)
        goto L_65dd8c;
    }
L_65dca8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_65dcac:;
    if (r0 == 0x11u) {  // (from the original)
        goto L_65dd8c;
    }
    if (r0 == 0x1au) {  // (from the original)
        goto L_65dd28;
    }
    if (r0 != 0x1bu) {  // (from the original)
        guest::preempt();
        goto L_65dca8;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x28u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dcd8:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x21u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dcec:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x24u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd00:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x25u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd14:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x26u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd28:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x27u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd3c:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x2au;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd50:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x2bu;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd64:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x2cu;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd78:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x2du;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dd8c:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x3fu;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
L_65dda0:;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 1u;
    r1 = 0x40u;  // (from the original)
    return call_0024b448(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0065db0c
GUEST_EXPORT(0x0065db0c, d_0065db0c::f_0065db0c);

// f_0065de40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065de40 {

struct __attribute__((packed)) Object_0065de40_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
    u8 unknown_175[0x13df];  // (not used here)
    u8 byte_1554;
    u8 unknown_1555[0x1];  // (not used here)
    u16 half_1556;
};
GUEST_OFFSET(Object_0065de40_0, byte_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_0065de40_0, byte_1554, 0x1554);  // (from the original)
GUEST_OFFSET(Object_0065de40_0, half_1556, 0x1556);  // (from the original)

inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> call_001cf9c4;  // (from the original)
inline constexpr guest::Function<0x00269208, u32(u32, u32, u32, u32)> call_00269208;  // (from the original)
inline constexpr guest::Function<0x0070ae20, u32(u32, u32, u32, u32)> call_0070ae20;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_0065de40(gptr<Object_0065de40_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r2;
    r7 = 1u;
    r5 = r4 + 0x1500u;  // (from the original)
    if (u32(arg0->byte_1554) != 0x1eu) {  // (from the original)
        goto L_65de84;
    }
    if (u32(arg0->half_1556) < 7u) {
        goto L_65de84;
    }
    r1 = u32(arg0->byte_174) | 0x40u;  // (from the original)
    arg0->byte_174 = u8(r1);
L_65de84:;
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0070ae20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    zf = r6 == 0;
    r6 = u32(*gptr<u16>(r4 + (r0 << 1) + 0x224u));  // (from the original)
    if (!zf) {
        if (u32(*gptr<u16>(0x5bau + r4)) == 0) {  // (from the original)
            r0 = 1u;
            goto L_65df40;
        }
    }
    *gptr<u16>(r5 + 0x56u) = u16(u32(*gptr<u16>(r5 + 0x56u)) + 1u);  // (from the original)
    r0 = r4 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00269208(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x5bau;  // (from the original)
    r5 = 0u;
    r1 = u32(*gptr<u16>(r0));
    if (r1 != 0) {
        if (r1 >= 1u) {
            r1 = r1 - 1u;
            *gptr<u16>(r0) = u16(r1);
        } else {
            *gptr<u16>(r0) = u16(r5);
        }
    }
    r0 = r4 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0070ae20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (u32(*gptr<u16>(r4 + (r0 << 1) + 0x224u)) != r6) {  // (from the original)
        r0 = r4 + 0x3b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0071a844(r0, r1, r2, r3);
        r3 = 0u;
        r1 = r0;
        r2 = r3;
        S0 = std::bit_cast<float>(*gptr<u32>(0x65df4cu));  // (from the original)
        r0 = r4 + 0x1b4u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(r5);
        *gptr<u32>(r13) = u32(r7);
        *gptr<u32>(r13 + 8u) = u32(r5);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_001cf9c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    r0 = 0u;
L_65df40:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0065de40
GUEST_EXPORT(0x0065de40, d_0065de40::f_0065de40);

// f_0065df50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065df50 {

struct __attribute__((packed)) Object_0065df50_0 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Object_0065df50_0, byte_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x00582e4c, u32(u32, u32, u32, u32)> call_00582e4c;  // (from the original)

u32 f_0065df50(gptr<Object_0065df50_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 cf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r1;
    r12 = r2;
    r5 = 1u;
    if (r0 == 0) {
        goto L_65df98;
    }
    r1 = u32(arg0->byte_44);
    res = r1 << 0x1e >> 0x1f;  // (from the original)
    if (res != 0) {
        goto L_65df98;
    }
    arg0->byte_44 = u8(r1 | 2u);
    r0 = 0x10005e7u;  // (from the original)
    r3 = 0u;
    r2 = r12;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00582e4c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
L_65df98:;
    r2 = r4;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r1 = 0xaadaf4u;  // (from the original)
    cf = r0 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r2 >= 0x70u;  // (from the original)
    }
    if (cf) {
        goto L_65dfe4;
    }
    r0 = r0 + ((r2 << 3) - r2 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        goto L_65dfe4;
    }
    r3 = r0 & 7u;
    r0 = r1 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r5, r3 & 0xff));  // (from the original)
    *gptr<u8>(r1 + 0x620u) = u8(r5);  // (from the original)
L_65dfe4:;
    r0 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    cf = r0 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r2 >= 0x70u;  // (from the original)
    }
    r1 = 0xaae115u;  // (from the original)
    if (cf) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r0 + ((r2 << 3) - r2 << 4);
    if (r0 >= 0x3100u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = r0 & 7u;
    r0 = r1 + (r0 >> 3);
    *gptr<u8>(r0) = u8(u32(*gptr<u8>(r0)) | lsl_r(r5, r3 & 0xff));  // (from the original)
    *gptr<u8>(r1 + 0x620u) = u8(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0065df50
GUEST_EXPORT(0x0065df50, d_0065df50::f_0065df50);

// f_0065e0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e0b8 {

struct __attribute__((packed)) Object_0065e0b8_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
};
GUEST_OFFSET(Object_0065e0b8_0, byte_1a9, 0x1a9);  // (from the original)

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0064f390, u32(u32, u32, u32, u32)> call_0064f390;  // (from the original)
inline constexpr guest::Function<0x0065196c, u32(u32, u32, u32, u32)> call_0065196c;  // (from the original)
inline constexpr guest::Function<0x0067a478, u32(u32, u32, u32, u32)> call_0067a478;  // (from the original)

u32 f_0065e0b8(gptr<Object_0065e0b8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_1a9);
    if (r0 >= 0xebu) {  // (from the original)
        r1 = 0u;
        goto L_65e0d8;
    }
    r0 = call_0064f390(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
L_65e0d8:;
    r2 = u32(*gptr<u8>(r4 + 0x171u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4 + 0x171u) = u8(r2);  // (from the original)
    if (r1 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u8>(r1 + 1u));
    if (r1 >= 0xebu) {  // (from the original)
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r1 != 6u) {
        r3 = 0u;
        r2 = r3;
        r0 = r4;
        r0 = call_0064d0b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0067a478(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_0065196c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0065e0b8
GUEST_EXPORT(0x0065e0b8, d_0065e0b8::f_0065e0b8);

// f_0065e190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e190 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e190(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r1 = 0xe3u;  // (from the original)
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0065e190
GUEST_EXPORT(0x0065e190, d_0065e190::f_0065e190);

// f_0065e1bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e1bc {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e1bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = r2;
    r10 = r1;
    r1 = r13 + 0x28u;  // (from the original)
    r11 = r0;
    r5 = *gptr<u32>(r1);
    r6 = *gptr<u32>(r1 + 4);
    r8 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0xeu;  // (from the original)
    *gptr<u32>(r0 + 0xeu) = u32(r5);  // (from the original)
    r9 = r0;
    r2 = u32(*gptr<u8>(r4 + 9u)) & ~1u;
    *gptr<u8>(r4 + 9u) = u8((r2 | r8) & ~0xfeu | 0xfeu & r6 << 1);  // (from the original)
    r1 = r10;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005d41b8(r0, r1, r2, r3);
    r2 = r9;
    r3 = 0u;
    r1 = 0x45u;  // (from the original)
    *gptr<u8>(r4 + 8u) = u8(u32(s32(u32(*gptr<u16>(r7))) >> 8));
    r0 = r11;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, r1, r2, r3);
}

}  // namespace d_0065e1bc
GUEST_EXPORT(0x0065e1bc, d_0065e1bc::f_0065e1bc);

// f_0065e2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e2e0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e2e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r1;
    r7 = r2;
    r9 = r0;
    r8 = r3;
    ea = r13 + 0x20u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_00656c20(r0, r1, r2, r3);
    r2 = r0;
    ea = r0 + 0xeu;  // (from the original)
    *gptr<u8>(ea) = u8(r6);
    r0 = ea;
    *gptr<u8>(r0 + 1u) = u8(r7);
    *gptr<u8>(r0 + 2u) = u8(r4);
    *gptr<u8>(r0 + 3u) = u8(r8);
    r3 = 0u;
    *gptr<u8>(r0 + 8u) = u8(r5);
    if (r4 != 0) {
        r1 = 0x53u;  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_0064d0b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_65e354;
        }
    } else {
        r1 = 0x52u;  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_0064d0b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_65e354;
        }
    }
    r0 = 1u;
L_65e354:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0065e2e0
GUEST_EXPORT(0x0065e2e0, d_0065e2e0::f_0065e2e0);

// f_0065fc64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065fc64 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x005980c0, u32(u32, u32, u32, u32)> call_005980c0;  // (from the original)
inline constexpr guest::Function<0x00598d20, u32(u32, u32, u32, u32)> call_00598d20;  // (from the original)
inline constexpr guest::Function<0x0065ddfc, u32(u32, u32, u32, u32)> call_0065ddfc;  // (from the original)

u32 f_0065fc64(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r2 = r1;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_003171b4(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r5 = *gptr<u32>(r13);
    r6 = *gptr<u32>(r13 + 4);
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005980c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r6;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00598d20(r0, r1, r2, guest::cpu()->r[3]);
        r2 = r6;
        r1 = r5;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0065ddfc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    r13 = r13 + 8u;
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

}  // namespace d_0065fc64
GUEST_EXPORT(0x0065fc64, d_0065fc64::f_0065fc64);

// f_0065fcc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065fcc0 {

inline constexpr guest::Function<0x005980c0, u32(u32, u32, u32, u32)> call_005980c0;  // (from the original)
inline constexpr guest::Function<0x00598d20, u32(u32, u32, u32, u32)> call_00598d20;  // (from the original)
inline constexpr guest::Function<0x0065ddfc, u32(u32, u32, u32, u32)> call_0065ddfc;  // (from the original)

u32 f_0065fcc0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r6 = r0;
    r5 = r2;
    r1 = r2;
    r0 = r4;
    r0 = call_005980c0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r5;
        r0 = r4;
        r0 = call_00598d20(r0, r1, r2, guest::cpu()->r[3]);
        r2 = r5;
        r1 = r4;
        r0 = r6;
        r0 = call_0065ddfc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0065fcc0
GUEST_EXPORT(0x0065fcc0, d_0065fcc0::f_0065fcc0);
