// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_00650174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00650174 {

inline guest::global<u8, 0x009506b0> global_009506b0;  // (from the original)
inline guest::global<u32, 0x009506b4> global_009506b4;  // (from the original)
inline constexpr guest::Function<0x0023ffb8, u32(u32, u32, u32, u32)> call_0023ffb8;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x006dabd8, u32(u32, u32, u32, u32)> call_006dabd8;  // (from the original)

u32 f_00650174(u32 r0, u32 r1_unused, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0023ffb8(r0_1, r0, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r2_1 = r13 + 8u;
    r1_2 = r13 + 4u;
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_3, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r13);
    r2_2 = *gptr<u32>(r13 + 4);
    if (u32(*global_009506b0) != 0xffu) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r0_4 = *global_009506b4;
    if (r0_4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_006dabd8(r0_4, r1_3, r2_2, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_5;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r1 != 0) {
        r1_1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1_1);
        r0_2 = call_0058c19c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058a8e0(r0_2, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 8u));
    res_2 = r0_1 << 0x19 >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 == 0) {
        r0_3 = r0_1 | 0x40u;  // (from the original)
        *gptr<u8>(r4_1 + 8u) = u8(r0_3);
    } else {
        goto L_6502a0;
    }
    r0_4 = call_0058c19c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = call_0058a018(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_6502a0:;
    *gptr<u8>(r0 + 0x170u) = u8(4u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 res_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x100u;  // (from the original)
    r0_1 = u32(arg0->byte_17a);
    r5_2 = r5_1 + 0x71u;  // (from the original)
    if ((r0_1 & 1u) != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    res_1 = r0_1 << 0x1c >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        goto L_650300;
    }
    r6_1 = r0 + 0x900u;  // (from the original)
    r0_2 = r0 + 0x2cu;  // (from the original)
    r1_1 = u32(s32(s16(arg0->half_958)));
    r2_1 = u32(s32(s16(arg0->half_95a)));
    call_0056ade4(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1 = u32(s32(s16(*gptr<u16>(r0 + 0x2cu))));  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r6_1 + 0x58u)))) != r1) {  // (from the original)
        goto L_650300;
    }
    r1 = u32(*gptr<u8>(r5_2 + 9u)) & ~8u;
    *gptr<u8>(r5_2 + 9u) = u8(r1);
L_650300:;
    r0_1 = u32(*gptr<u8>(r5_2 + 9u)) | 1u;
    *gptr<u8>(r5_2 + 9u) = u8(r0_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006502a8
GUEST_EXPORT(0x006502a8, d_006502a8::f_006502a8);

// f_00650310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00650310 {

inline constexpr guest::Function<0x0056ade4, u32(u32, u32, u32, u32)> call_0056ade4;  // (from the original)

u32 f_00650310(gptr<SlotObject> arg0) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r5_2 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 0x100u;  // (from the original)
    r0_1 = u32(u8(arg0->flags_17a));
    r5_2 = r5_1 + 0x71u;  // (from the original)
    res_1 = r0_1 << 0x1e >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    res_2 = r0_1 << 0x1b >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        goto L_65036c;
    }
    r6_1 = r0 + 0x900u;  // (from the original)
    r0_2 = r0 + 0x2eu;  // (from the original)
    r1_2 = u32(s32(s16(u16(arg0->target_angle_95c))));
    r2_1 = u32(s32(s16(u16(arg0->target_angle_95e))));
    call_0056ade4(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r1_1 = u32(s32(s16(*gptr<u16>(r0 + 0x2eu))));  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r6_1 + 0x5cu)))) != r1_1) {  // (from the original)
        goto L_65036c;
    }
    r1_1 = u32(*gptr<u8>(r5_2 + 9u)) & ~0x10u;  // (from the original)
    *gptr<u8>(r5_2 + 9u) = u8(r1_1);
L_65036c:;
    r0_1 = u32(*gptr<u8>(r5_2 + 9u)) | 2u;
    *gptr<u8>(r5_2 + 9u) = u8(r0_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r5_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    zf_1 = r3 == 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u16>(r13) = u16(0u);
    if (!zf_1) {
        zf_1 = r3 == 1u;
    }
    r5_1 = r0 + 0x6b4u;  // (from the original)
    *gptr<u16>(r13 + 2u) = u16(r2);
    *gptr<u16>(r13 + 4u) = u16(0u);
    if (!zf_1) {
        r2_1 = r13;
        guest::cpu()->r[13] = r13;
        r0_1 = call_006a84e8(r5_1, r1, r2_1, 2u);
        r1_1 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r0 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071a88c(r0_2, r1, r2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fcb10(r0_3, r1_2, r2_2, r3_1);
    r2_3 = r13;
    if (r3 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_006a84e8(r5_1, r1, r2_3, r0_4);
        r1_3 = guest::cpu()->r[1];
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_006a83fc(r5_1, r1, r2_3, r0_4);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_006512e8
GUEST_EXPORT(0x006512e8, d_006512e8::f_006512e8);

// f_0065137c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065137c {

inline guest::global<u32, 0x00651398> global_00651398;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)

u32 f_0065137c() {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_00651398);
    S0_1 = std::bit_cast<float>(*global_00886878) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_0065137c
GUEST_EXPORT(0x0065137c, d_0065137c::f_0065137c);

// f_0065139c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065139c {

inline guest::global<u32, 0x006513b4> global_006513b4;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)

u32 f_0065139c() {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_006513b4);
    S0_1 = std::bit_cast<float>(*global_00886878) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
}

}  // namespace d_0065139c
GUEST_EXPORT(0x0065139c, d_0065139c::f_0065139c);

// f_006513bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006513bc {

inline guest::global<u32, 0x006513d4> global_006513d4;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)

u32 f_006513bc() {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_006513d4);
    S0_1 = std::bit_cast<float>(*global_00886878) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
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

inline guest::global<u32, 0x0065147c> global_0065147c;  // (from the original)
inline guest::global<u32, 0x00651480> global_00651480;  // (from the original)
inline constexpr guest::Function<0x0064dc88, u32(u32, u32, u32, u32)> call_0064dc88;  // (from the original)
inline constexpr guest::Function<0x00656e5c, u32(u32, u32, u32, u32)> call_00656e5c;  // (from the original)
inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> call_0068db1c;  // (from the original)

u32 f_0065141c(gptr<Object_0065141c_0> arg0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    res_1 = u32(arg0->byte_8c5) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        *gptr<u32>(r13) = u32(1u);
        S1_1 = std::bit_cast<float>(*global_0065147c);
        S0_1 = std::bit_cast<float>(*global_00651480);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S0;
        guest::cpu()->s[3] = S0;
        guest::cpu()->s[4] = S0;
        r0_1 = call_0068db1c(r0, 0xcbu, 1u, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        S1_2 = guest::cpu()->s[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return r0_1;
    }
    r1_2 = u32(*gptr<u8>(r0 + 0x8c7u));  // (from the original)
    if ((r1_2 & 1u) == 0) {
        ea_1 = r13;
        r13 = r13 + 8;
        r3_1 = *gptr<u32>(ea_1);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        return call_0064dc88(r0, r1_2, r2, r3_1);
    }
    ea_2 = r13;
    r13 = r13 + 8;
    r3_2 = *gptr<u32>(ea_2);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    return call_00656e5c(r0, r1_2, r2, r3_2);
}

}  // namespace d_0065141c
GUEST_EXPORT(0x0065141c, d_0065141c::f_0065141c);

// f_006515b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006515b0 {

inline guest::global<u32, 0x006515e4> global_006515e4;  // (from the original)
inline guest::global<u32, 0x006515e8> global_006515e8;  // (from the original)
inline constexpr guest::Function<0x0068db1c, u32(u32, u32, u32, u32)> call_0068db1c;  // (from the original)

u32 f_006515b0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(1u);
    S1_1 = std::bit_cast<float>(*global_006515e4);
    S0_1 = std::bit_cast<float>(*global_006515e8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S0;
    guest::cpu()->s[3] = S0;
    guest::cpu()->s[4] = S0;
    call_0068db1c(guest::cpu()->r[0], 0xcbu, 1u, 0u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_006515b0
GUEST_EXPORT(0x006515b0, d_006515b0::f_006515b0);

// f_006515ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006515ec {

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_006515ec(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fe8a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = r0_1 + 4u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_1;
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

inline guest::global<u32, 0x00886b5c> global_00886b5c;  // (from the original)
inline constexpr guest::Function<0x0058a918, u32(u32, u32, u32, u32)> call_0058a918;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_0065176c(gptr<Object_0065176c_0> arg0, u32 r1) {
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    r0_1 = call_0058c19c(res_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = *global_00886b5c;
    guest::cpu()->r[13] += 8u;
    return call_0058a918(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0065176c
GUEST_EXPORT(0x0065176c, d_0065176c::f_0065176c);

// f_0065179c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065179c {

inline constexpr guest::Function<0x0064f390, u32(u32, u32, u32, u32)> call_0064f390;  // (from the original)
inline constexpr guest::Function<0x00766bf8, u32(u32, u32, u32, u32)> call_00766bf8;  // (from the original)

u32 f_0065179c(gptr<SlotObject> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    u32 r4_1 = 0;
    u32 r1_4 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_2 = 0;
    float S0_3 = 0;
    r0_1 = u32(u8(arg0->state_1a9));
    r13 = r13 - 0x18u;  // (from the original)
    if (r0_1 >= 0xebu) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0_2 = call_0064f390(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r0_3 = u32(*gptr<u8>(r0_2 + 6u)) & 3u;
    if (r0_3 >= 3u) {
        r0_3 = 0u;
        goto L_6517dc;
    }
    if (r0_3 == 2u) {
        goto L_6517f0;
    }
L_6517dc:;
    res_1 = u32(*gptr<u8>(r0 + 0x171u)) << 0x1a >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = r0_3 == 1u;
    }
    if (zf_1) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
L_6517f0:;
    r1_2 = r0 + 0x4fcu;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    call_00766bf8(r0_4, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = r13 + 4u;
    r2_2 = u32(*gptr<u8>(r0 + 0x8c5u)) & ~8u;  // (from the original)
    *gptr<u8>(r0 + 0x8c5u) = u8(r2_2);  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r13));
    r0_5 = r0 + 0x8c5u;  // (from the original)
    S1_2 = std::bit_cast<float>(*gptr<u32>(r1_3));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r1_3 + 4));
    r4_1 = r0 + 0x14u;  // (from the original)
    r1_4 = std::bit_cast<u32>(fabsf(S0_2 * S0_2 + S1_2 * S1_2 + S2_2 * S2_2));
    if (s32(r1_4) > s32(0x34000000u)) {  // (from the original)
        r1_4 = r2_2 | 8u;
        *gptr<u8>(r0_5) = u8(r1_4);
    }
    S1_3 = std::bit_cast<float>(*gptr<u32>(r4_1));
    S2_3 = std::bit_cast<float>(*gptr<u32>(r4_1 + 4));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r4_1 + 8));
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S1_3 + std::bit_cast<float>(*gptr<u32>(r13))));
    *gptr<u32>(r4_1 + 4u) = u32(std::bit_cast<u32>(S2_3 + std::bit_cast<float>(*gptr<u32>(r13 + 4u))));
    S0_3 = S3_2 + std::bit_cast<float>(*gptr<u32>(r13 + 8u));
    *gptr<u32>(r4_1 + 8u) = u32(std::bit_cast<u32>(S0_3));
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return r0_5;
}

}  // namespace d_0065179c
GUEST_EXPORT(0x0065179c, d_0065179c::f_0065179c);

// f_006518d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006518d8 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x0065473c, u32(u32, u32, u32, u32)> call_0065473c;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006518d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(r0_1 + 0xeu) = u32(*gptr<u32>(r1));  // (from the original)
    r1_1 = r0_1 + 0x13u;  // (from the original)
    *gptr<u8>(r1_1) = u8(0u);
    r0_2 = call_0065473c(0u, r1_1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r0_2) >> 8));
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_0064d0b8(r0, 0x92u, r0_1, 0u);  // (from the original)
}

}  // namespace d_006518d8
GUEST_EXPORT(0x006518d8, d_006518d8::f_006518d8);

// f_00651928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00651928 {

inline constexpr guest::Function<0x005d4180, u32(u32, u32, u32, u32)> call_005d4180;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00651928(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    ea_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1);
    r0_2 = ea_1 + 1u;
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r2)));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_005d4180(r0_2, r1_1, r2_1, r3_1);
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return call_0064d0b8(r0, 0x20u, r0_1, 0u);  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    r13 = r13 - 8;
    r3_1 = sxth(u32(*gptr<u16>(r13 + 4u)) - u32(arg0->half_2c));
    arg0->byte_17a = u8(u32(arg0->byte_17a) & ~8u);
    r1_1 = u32(arg0->half_5b4);
    if (r1_1 != 0) {
        S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1))));
        S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_1 / float(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))));
        r1_2 = std::bit_cast<u32>(S0_1) + u32(arg0->half_2c);
        arg0->half_2c = u16(r1_2);
        r0_1 = u32(arg0->half_5b4);
        if (r0_1 == 0) {
            r13 = r13 + 8u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r0_1 >= 1u) {
            r0_2 = r0_1 - 1u;
        } else {
            r0_2 = 0u;
        }
        arg0->half_5b4 = u16(r0_2);
        r13 = r13 + 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    r1_3 = u32(*gptr<u16>(r13 + 4u));
    *gptr<u16>(r0 + 0x2cu) = u16(r1_3);  // (from the original)
    r13 = r13 + 8u;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 1u;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    arg0->word_548 = u32(arg1->word_0);
    r5_1 = r0 + 0x59cu;  // (from the original)
    r3_1 = ~0x80000000u;  // (from the original)
    arg0->word_54c = u32(arg1->word_4);
    arg0->word_550 = u32(arg1->word_8);
    r1_1 = r0 + 0x540u;  // (from the original)
    arg0->word_554 = u32(std::bit_cast<u32>(S0));
    arg0->word_558 = u32(std::bit_cast<u32>(S1));
    r0_1 = r0 + 0x55cu;  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(r5_1);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_006aca10(r0_1, r1_1, 0x10u, r3_1);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    *gptr<u32>(r0_1 + 0x34u) = u32(0u);  // (from the original)
    r0_2 = u32(*gptr<u8>(r0 + 0x1acu));  // (from the original)
    *gptr<u8>(r5_1 + 4u) = u8(r0_2);
    *gptr<u32>(r5_1 + 8u) = u32(0u);
    *gptr<u32>(r5_1 + 0xcu) = u32(0u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_006531d0
GUEST_EXPORT(0x006531d0, d_006531d0::f_006531d0);

// f_00653724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653724 {

inline guest::global<u16, 0x00886efa> global_00886efa;  // (from the original)
inline guest::global<u8, 0x0094dea0> global_0094dea0;  // (from the original)
inline guest::global<u32, 0x00950368> global_00950368;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)

u32 f_00653724(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r3_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *global_0094dea0 = u8(r0);
    *gptr<u8>(0x94dea0u + 1u) = u8(r3_1);  // (from the original)
    r1_1 = *global_00950368;
    if (r1_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *gptr<u32>(r13) = u32(r2);
    r0_1 = u32(*global_00886efa);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0057b9dc(r0_1, r1_1, r3, r1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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

inline guest::global<u32, 0x00886b60> global_00886b60;  // (from the original)
inline constexpr guest::Function<0x0058a3c4, u32(u32, u32, u32, u32)> call_0058a3c4;  // (from the original)
inline constexpr guest::Function<0x0058a72c, u32(u32, u32, u32, u32)> call_0058a72c;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32, u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_006537b8(gptr<Object_006537b8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 res_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 res_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r2 != 0) {
        r1_1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1_1);
        r0_2 = call_0058c19c(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        call_0058a8e0(r0_2, 5u, r2_1, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    r1 = u32(*gptr<u8>(r4_1 + 8u));
    res_2 = r1 << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_2;
    if (res_2 == 0) {
        r1_2 = r1 | 0x20u;  // (from the original)
        *gptr<u8>(r4_1 + 8u) = u8(r1_2);
        r0_3 = call_0058c19c(r0_1, r1_2, r2, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r0_1 = call_0058a3c4(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (r5_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    res_3 = u32(*gptr<u8>(r4_1)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_3;
    if (res_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_4 = call_0058c19c(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r1_4 = *global_00886b60;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0058a72c(r0_4, r1_4, r2_3, guest::cpu()->r[3]);
}

}  // namespace d_006537b8
GUEST_EXPORT(0x006537b8, d_006537b8::f_006537b8);

// f_00653888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00653888 {

inline constexpr guest::Function<0x005d41fc, u32(u32, u32, u32, u32)> call_005d41fc;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00653888(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d41fc(r4_1, r1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(r5_1);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0x81u, r0_1, 0u);  // (from the original)
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
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_2 = 0;
    u32 r1_5 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    if (r1 != 0) {
        *gptr<u32>(r13) = u32(0x100u);  // (from the original)
        r1_1 = u32(s32(s16(arg1->half_0)));
        guest::cpu()->r[13] = r13;
        r0_1 = call_006547e4(r0, r1_1, 6u, 0x1000u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1_3 = uxth(u32(*gptr<u16>(r0 + 0x8c2u)));  // (from the original)
    *gptr<u16>(r13) = u16(r1_3);
    *gptr<u32>(r13) = u32(0x100u);  // (from the original)
    r1_4 = sxth(uxth(r1_3));
    guest::cpu()->r[13] = r13;
    r0_2 = call_006547e4(r0, r1_4, 6u, 0x1000u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r6_2 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 ea_1 = 0;
    u32 r3_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6_1 = r1;
    r5_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u16>(r13) = u16(0u);
    r1_1 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    call_006540d8(r0, r1_1, 0xf0u, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0 + 0x900u;  // (from the original)
    zf_1 = r6_1 == 0xeu;  // (from the original)
    *gptr<u8>(r5_1 + 9u) = u8(u32(*gptr<u8>(r5_1 + 9u)) & ~0x10u);  // (from the original)
    r1 = u32(*gptr<u16>(r0 + 0x2eu));  // (from the original)
    if (!zf_1) {
        zf_1 = r6_1 == 0x1cu;  // (from the original)
    }
    *gptr<u16>(r0_2 + 0x5cu) = u16(r1);  // (from the original)
    *gptr<u16>(r0_2 + 0x5eu) = u16(0u);  // (from the original)
    if (!zf_1) {
        zf_2 = r6_1 == 0x9fu;  // (from the original)
        if (!zf_2) {
            zf_2 = u32(*gptr<u8>(r0 + 0x978u)) == 0;  // (from the original)
        }
        if (!zf_2) {
            guest::cpu()->r[13] = r13;
            call_0064f368(r0, r1, r2_1, r3_1);
            r1 = guest::cpu()->r[1];
        }
    }
    r6_2 = r0 + 0x97au;  // (from the original)
    *gptr<u16>(r6_2) = u16(0xau);  // (from the original)
    *gptr<u8>(r6_2 + 2u) = u8(0u);
    *gptr<u8>(r6_2 + 3u) = u8(0u);
    res_2 = u32(*gptr<u8>(r5_1)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_2;
    if (res_2 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    res_3 = u32(*gptr<u8>(r5_1 + 6u)) << 0x1b >> 0x1f;  // (from the original)
    r0_1 = res_3;
    if (res_3 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1_2 = r0 + 0x43cu;  // (from the original)
    r2_2 = *gptr<u32>(r0 + 0x264u);  // (from the original)
    r0_3 = r0 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0070ac68(r0_3, r1_2, r2_2, 1u);
    ea_1 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3_2 = *gptr<u32>(ea_1);
    guest::cpu()->r[13] = r13;
    return call_00654230(r0, r1_2, 0u, r3_2);
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    r13 = r13 - 0xc;  // (from the original)
    arg0->half_958 = u16(u32(*gptr<u16>(r13 + 4u)));
    arg0->half_95a = u16(r2);
    r1_1 = r0 + 0x171u;  // (from the original)
    r12_1 = u32(arg0->byte_17a) | 8u;
    arg0->byte_17a = u8(r12_1);
    if (u32(s32(s16(arg0->half_958))) == u32(s32(s16(arg0->half_2c)))) {
        arg0->byte_17a = u8(r12_1 & ~8u);
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    r13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_006540d8
GUEST_EXPORT(0x006540d8, d_006540d8::f_006540d8);

// f_00654170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00654170 {

inline guest::global<u32, 0x00654204> global_00654204;  // (from the original)
inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> call_001cf9c4;  // (from the original)
inline constexpr guest::Function<0x00268db4, u32(u32, u32, u32, u32)> call_00268db4;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_00654170(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r0 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_00268db4(r0_1, r1, 0xcu, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_2 = r0 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_0071a844(r0_2, r1_1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    S0_2 = std::bit_cast<float>(*global_00654204);
    r0_4 = r0 + 0x1b4u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_001cf9c4(r0_4, r0_3, 0u, 0u);
    S0_3 = guest::cpu()->s[0];
    if (r1 >= 0x41u) {  // (from the original)
        r0_5 = 0x951cbcu;  // (from the original)
    } else {
        r0_5 = 0x951cbcu + (r1 + (r1 << 1) << 2);  // (from the original)
    }
    *gptr<u16>(0x5bau + r0) = u16(*gptr<u32>(r0_5 + 8u));  // (from the original)
    *gptr<u8>(0x1554u + r0) = u8(r1);  // (from the original)
    *gptr<u16>((0x1554u | u32(s32(0x1554u) >> 0xb)) + r0) = u16(0u);  // (from the original)
    r1_2 = u32(*gptr<u8>(r0 + 0x174u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0 + 0x174u) = u8(r1_2);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return 0x1554u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 res_3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r1;
    res_1 = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 != 0) {
        goto L_6543a0;
    }
    r7 = r0 + 0x5ecu;  // (from the original)
    r8 = r0 + 0x424u;  // (from the original)
    r5 = r0 + 0x171u;  // (from the original)
    if (r0_1 == 0xffu) {  // (from the original)
        goto L_654364;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ce2e8(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_6543a0;
    }
    r1 = r0_1;
    r2 = 0xffu;  // (from the original)
    res_2 = u32(*gptr<u8>(r0 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_2;
    if (res_2 != 0) {
        goto L_6543a0;
    }
L_65433c:;
    guest::cpu()->r[13] = r13;
    call_00277e1c(r7, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00659674(r8, 1u, r2_1, guest::cpu()->r[3]);
L_654364:;
    r0_2 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006c6fe8(r0_2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_1 + 1u == 0) {
        goto L_6543a0;
    }
    ea_1 = r0 + 0x47cu;  // (from the original)
    r0_3 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006c87ac(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r2 = r0_4;
    r1 = r0_1;
    res_3 = u32(*gptr<u8>(r0 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_3;
    if (res_3 == 0) {
        guest::preempt();
        goto L_65433c;
    }
L_6543a0:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    res_1 = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    r0_1 = r0 + 0x5ecu;  // (from the original)
    call_00277e1c(r0_1, r1, r2, guest::cpu()->r[3]);
    r0_2 = r0 + 0x424u;  // (from the original)
    r2_1 = u32(*gptr<u8>(r0 + 0x173u)) | 2u;  // (from the original)
    *gptr<u8>(r0 + 0x173u) = u8(r2_1 | 4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00659674(r0_2, 1u, r2_1, guest::cpu()->r[3]);
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
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 res_3 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = r1;
    res_1 = u32(u8(arg0->flags_66)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 != 0) {
        goto L_6544b4;
    }
    r7 = r0 + 0x5ecu;  // (from the original)
    r8 = r0 + 0x424u;  // (from the original)
    r5 = r0 + 0x171u;  // (from the original)
    if (r0_1 == 0xffu) {  // (from the original)
        goto L_654478;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005ce2e8(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_6544b4;
    }
    r1 = r0_1;
    r2 = 0xffu;  // (from the original)
    res_2 = u32(*gptr<u8>(r0 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_2;
    if (res_2 != 0) {
        goto L_6544b4;
    }
L_654450:;
    guest::cpu()->r[13] = r13;
    call_00277e54(r7, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u8>(r5 + 2u) = u8(u32(*gptr<u8>(r5 + 2u)) | 2u | 4u);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00659674(r8, 1u, r2_1, guest::cpu()->r[3]);
L_654478:;
    r0_2 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_006c6fe8(r0_2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_1 + 1u == 0) {
        goto L_6544b4;
    }
    ea_1 = r0 + 0x47cu;  // (from the original)
    r0_3 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_006c87ac(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r2 = r0_4;
    r1 = r0_1;
    res_3 = u32(*gptr<u8>(r0 + 0x66u)) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_3;
    if (res_3 == 0) {
        guest::preempt();
        goto L_654450;
    }
L_6544b4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    res_1 = u32(arg0->byte_66) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    r0_1 = r0 + 0x5ecu;  // (from the original)
    call_00277e54(r0_1, r1, r2, guest::cpu()->r[3]);
    r0_2 = r0 + 0x424u;  // (from the original)
    r2_1 = u32(*gptr<u8>(r0 + 0x173u)) | 2u;  // (from the original)
    *gptr<u8>(r0 + 0x173u) = u8(r2_1 | 4u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00659674(r0_2, 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_006544b8
GUEST_EXPORT(0x006544b8, d_006544b8::f_006544b8);

// f_0065472c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065472c {

inline guest::global<u32, 0x00654738> global_00654738;  // (from the original)
inline constexpr guest::Function<0x0064ee94, u32(u32, u32, u32, u32)> call_0064ee94;  // (from the original)

u32 f_0065472c() {
    float S0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00654738);
    guest::cpu()->s[0] = S0_1;
    return call_0064ee94(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], 1u);
}

}  // namespace d_0065472c
GUEST_EXPORT(0x0065472c, d_0065472c::f_0065472c);

// f_006547d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006547d0 {

inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_006547d0(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fe8a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = r0_1 + 0xau;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_006547d0
GUEST_EXPORT(0x006547d0, d_006547d0::f_006547d0);

// f_006547e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006547e4 {

inline constexpr guest::Function<0x0056af2c, u32(u32, u32, u32, u32)> call_0056af2c;  // (from the original)

u32 f_006547e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r0_1 = r0 + 0x2eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0056af2c(r0_1, r1, r2, r3);
    r0_2 = r0 + 0x900u;  // (from the original)
    *gptr<u8>(r0 + 0x17au) = u8(u32(*gptr<u8>(r0 + 0x17au)) & ~0x10u);  // (from the original)
    *gptr<u16>(r0_2 + 0x5cu) = u16(u32(*gptr<u16>(r0 + 0x2eu)));  // (from the original)
    *gptr<u16>(r0_2 + 0x5eu) = u16(0u);  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r0 + 0x2eu)))) == r1) {  // (from the original)
        r0_3 = 1u;
    } else {
        r0_3 = 0u;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_006547e4
GUEST_EXPORT(0x006547e4, d_006547e4::f_006547e4);

// f_0065487c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065487c {

inline constexpr guest::Function<0x0068ec98, u32(u32, u32, u32, u32)> call_0068ec98;  // (from the original)

u32 f_0065487c(gptr<SlotObject> arg0) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    call_0068ec98(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = u32(*gptr<u8>(r4_1 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r0_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_0065487c
GUEST_EXPORT(0x0065487c, d_0065487c::f_0065487c);

// f_006548ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006548ac {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)

u32 f_006548ac(gptr<SlotObject> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if (u32(u8(arg0->state_1a9)) == r1) {
        return 1u;
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
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r1_1 = r13 + 0x28u;  // (from the original)
    r5_1 = *gptr<u32>(r1_1);
    r6_1 = *gptr<u32>(r1_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d41fc(r4_1, r1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(r2) >> 8));
    *gptr<u8>(r0_1 + 0x13u) = u8(r3);  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = u8(r5_1);  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r6_1);
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0x87u, r0_1, 0u);  // (from the original)
}

}  // namespace d_006548c4
GUEST_EXPORT(0x006548c4, d_006548c4::f_006548c4);

// f_00654924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00654924 {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00654924(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x30u;  // (from the original)
    ea_1 = r13 + 0x30u;  // (from the original)
    r6_1 = *gptr<u32>(ea_1);
    r7_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    r1_1 = *gptr<u32>(r2 + 4);
    r2_1 = *gptr<u32>(r2 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r2));
    *gptr<u32>(r13 + 4) = u32(r1_1);
    *gptr<u32>(r13 + 8) = u32(r2_1);
    r1_2 = r13;
    r0_2 = r4_1 + 2u;
    *gptr<u8>(r4_1) = u8(r1);
    guest::cpu()->r[13] = r13;
    call_005d41b8(r0_2, r1_2, r2_1, r3_1);
    *gptr<u8>(r0_1 + 0x14u) = u8(u32(s32(u32(*gptr<u16>(r3))) >> 8));  // (from the original)
    *gptr<u8>(r4_1 + 1u) = u8(r6_1);
    *gptr<u8>(r4_1 + 7u) = u8(0u);
    *gptr<u8>(r4_1 + 8u) = u8(r7_1);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0064d0b8(r0, 0x44u, r0_1, 0u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_00654924
GUEST_EXPORT(0x00654924, d_00654924::f_00654924);

// f_00657748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00657748 {

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_00657748(u32 r0) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_006e0b2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    guest::cpu()->r[13] += 8u;
    return call_001b76ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00657748
GUEST_EXPORT(0x00657748, d_00657748::f_00657748);

// f_0065776c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065776c {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x0076e80c, u32(u32, u32, u32, u32)> call_0076e80c;  // (from the original)

u32 f_0065776c(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r0_1 = *global_0095c6d0;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r0;
        return r0_1;
    }
    r0_2 = r0_1 + 0x10u;  // (from the original)
    return call_0076e80c(r0_2, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline guest::global<u32, 0x009856f4> global_009856f4;  // (from the original)

u32 f_00657790(gptr<Object_00657790_0> arg0, gptr<Object_00657790_1> arg1) {
    u32 r1 = arg1.addr();
    u32 res_1 = 0;
    u32 r1_1 = 0;
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[1] = r1;
        return res_1;
    }
    *global_009856f4 = u32(arg1->word_0);
    *gptr<u32>(0x9856f4u + 4u) = u32(arg1->word_4);  // (from the original)
    r1_1 = arg1->word_8;
    *gptr<u32>(0x9856f4u + 8u) = u32(r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 0x9856f4u;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    call_0068ef60(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = u32(*gptr<u8>(r4_1 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r0_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return res_1;
    }
    call_0068ef84(res_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = u32(*gptr<u8>(r4_1 + 7u)) | 0x80u;  // (from the original)
    *gptr<u8>(r4_1 + 7u) = u8(r0_1);
    guest::cpu()->r[13] += 8u;
    return r0_1;
}

}  // namespace d_006577f4
GUEST_EXPORT(0x006577f4, d_006577f4::f_006577f4);

// f_0065795c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065795c {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065795c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    call_005d41b8(r4_1, r1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 4u) = u8(u32(s32(u32(*gptr<u16>(r2))) >> 8));
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_0064d0b8(r0, 0x62u, r0_1, 0u);  // (from the original)
}

}  // namespace d_0065795c
GUEST_EXPORT(0x0065795c, d_0065795c::f_0065795c);

// f_006579a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006579a8 {

inline guest::global<u32, 0x00657a24> global_00657a24;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_006579a8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r1);
    S1_1 = std::bit_cast<float>(*global_00657a24);
    ea_2 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_1);
    r1_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2)) * S1_1)));
    ea_3 = r13;
    *gptr<u16>(ea_3) = u16(r1_2);
    ea_4 = ea_2 + 4u;
    *gptr<u16>(ea_4) = u16(r1_2);
    S0_1 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2 + 8u)) * S1_1));
    r1_3 = std::bit_cast<u32>(S0_1);
    ea_5 = r13;
    *gptr<u16>(ea_5) = u16(r1_3);
    ea_6 = ea_4 + 2u;
    *gptr<u16>(ea_6) = u16(r1_3);
    ea_7 = r0_1 + 0x17u;  // (from the original)
    *gptr<u8>(ea_7) = u8(r3);
    ea_8 = r0_1 + 0x18u;  // (from the original)
    *gptr<u8>(ea_8) = u8(r5_1);
    r13 = r13 + 4u;
    ea_9 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_1 = *gptr<u32>(ea_9);
    r5_2 = *gptr<u32>(ea_9 + 4);
    r6_1 = *gptr<u32>(ea_9 + 8);
    r7_1 = *gptr<u32>(ea_9 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_9 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_9 + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea_9 + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return call_0064d0b8(r0, 0x73u, r0_1, 0u);  // (from the original)
}

}  // namespace d_006579a8
GUEST_EXPORT(0x006579a8, d_006579a8::f_006579a8);

// f_00659674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659674 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)
inline constexpr guest::Function<0x005992fc, u32(u32, u32, u32, u32)> call_005992fc;  // (from the original)

u32 f_00659674(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r12_1 = 0;
    u32 r0_4 = 0;
    u32 cf_2 = 0;
    u32 r2_2 = 0;
    u32 r12_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r0, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005992fc(r4_1, r5_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    if (r1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    cf_1 = r4_1 >= 0x70u;  // (from the original)
    if (!cf_1) {
        cf_1 = r5_1 >= 0x70u;  // (from the original)
    }
    r1_2 = 1u;
    if (cf_1) {
        goto L_6596e4;
    }
    r0_3 = r4_1 + ((r5_1 << 3) - r5_1 << 4);
    if (r0_3 >= 0x3100u) {  // (from the original)
        goto L_6596e4;
    }
    r12_1 = r0_3 & 7u;
    r0_4 = 0xaadaf4u + (r0_3 >> 3);  // (from the original)
    *gptr<u8>(r0_4) = u8(u32(*gptr<u8>(r0_4)) | lsl_r(r1_2, r12_1 & 0xff));  // (from the original)
    *gptr<u8>(0xaadaf4u + 0x620u) = u8(r1_2);  // (from the original)
L_6596e4:;
    r0_2 = 0xa84790u;  // (from the original)
    cf_2 = r4_1 >= 0x70u;  // (from the original)
    if (!cf_2) {
        cf_2 = r5_1 >= 0x70u;  // (from the original)
    }
    r2_2 = r0_2 - 0xfffd667bu;  // (from the original)
    if (cf_2) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_2 = r4_1 + ((r5_1 << 3) - r5_1 << 4);
    if (r0_2 >= 0x3100u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r12_2 = r0_2 & 7u;
    r0_2 = r2_2 + (r0_2 >> 3);
    *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(r0_2)) | lsl_r(r1_2, r12_2 & 0xff));  // (from the original)
    *gptr<u8>(r2_2 + 0x620u) = u8(r1_2);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r0 = arg0.addr();
    u32 r12_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r6_1 = 0;
    u32 res_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r12_1 = u32(s32(s16(arg0->half_2e)));
    r5_1 = sxth(r1 - r12_1);
    if (r12_1 == r1) {
        goto L_6597f4;
    }
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5_1))));
    S0 = std::bit_cast<float>(vcvt_sz_f(S1 * S0));
    r4_1 = sxth(std::bit_cast<u32>(S0));
    res_1 = r4_1 - r3;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r4_1 ^ r3) & (r4_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r6_1 = 0u - r3;
        res_2 = r6_1 - r4_1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r6_1 ^ r4_1) & (r6_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (zf_1 || nf_1 != vf_1) {
        goto L_6597b4;
    }
    if (s32(r4_1) > s32(r2)) {
        r4_1 = r2;
        goto L_6597a8;
    }
    r2_1 = 0u - r2;
    if (s32(r2_1) > s32(r4_1)) {
        r4_1 = sxth(r2_1);
    }
L_6597a8:;
    r12_1 = sxth(r12_1 + r4_1);
    goto L_6597f4;
L_6597b4:;
    if (r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        goto L_6597dc;
    }
    r12_1 = sxth(r12_1 + r3);
    r2_2 = sxth(r1 - r12_1);
    if (r2_2 != 0 && r2_2 >> 0x1f == (r2_2 & (r2_2 ^ r2_2)) >> 0x1f) {  // (from the original)
        goto L_6597f4;
    }
L_6597d4:;
    r12_1 = r1;
    goto L_6597f4;
L_6597dc:;
    r12_1 = sxth(r12_1 - r3);
    r2_3 = sxth(r1 - r12_1);
    if (r2_3 >> 0x1f == (r2_3 & (r2_3 ^ r2_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_6597d4;
    }
L_6597f4:;
    *gptr<u16>(r0 + 0x2eu) = u16(r12_1);  // (from the original)
    r2_4 = r0 + 0x900u;  // (from the original)
    *gptr<u8>(r0 + 0x17au) = u8(u32(*gptr<u8>(r0 + 0x17au)) & ~0x10u);  // (from the original)
    *gptr<u16>(r2_4 + 0x5cu) = u16(uxth(r12_1));  // (from the original)
    *gptr<u16>(r2_4 + 0x5eu) = u16(0u);  // (from the original)
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    if (u32(s32(s16(*gptr<u16>(r0 + 0x2eu)))) == r1) {  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r1 != 0) {
        r1_1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1_1);
        r0_2 = call_0058c19c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058a8e0(r0_2, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 8u));
    res_2 = r0_1 << 0x1b >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 == 0) {
        r0_3 = r0_1 | 0x10u;  // (from the original)
        *gptr<u8>(r4_1 + 8u) = u8(r0_3);
    } else {
        goto L_659914;
    }
    r0_4 = call_0058c19c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = call_0058a1d8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_659914:;
    *gptr<u8>(r0 + 0x170u) = u8(2u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006598a8
GUEST_EXPORT(0x006598a8, d_006598a8::f_006598a8);

// f_00659d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659d14 {

inline guest::global<u32, 0x00659d98> global_00659d98;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659d14(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_2 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    float S0_1 = 0;
    u32 r1_3 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = *gptr<u32>(r1);
    S1_1 = std::bit_cast<float>(*global_00659d98);
    ea_2 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_1);
    ea_3 = ea_2 + 4u;
    *gptr<u8>(ea_3) = u8(r2);
    ea_4 = r0_1 + 0x13u;  // (from the original)
    *gptr<u8>(ea_4) = u8(r3);
    r1_2 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4_1)) * S1_1)));
    ea_5 = r13;
    *gptr<u16>(ea_5) = u16(r1_2);
    ea_6 = r0_1 + 0x14u;  // (from the original)
    *gptr<u16>(ea_6) = u16(r1_2);
    S0_1 = std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r4_1 + 8u)) * S1_1));
    r1_3 = std::bit_cast<u32>(S0_1);
    ea_7 = r13;
    *gptr<u16>(ea_7) = u16(r1_3);
    ea_8 = r0_1 + 0x16u;  // (from the original)
    *gptr<u16>(ea_8) = u16(r1_3);
    ea_9 = r0_1 + 0x18u;  // (from the original)
    *gptr<u8>(ea_9) = u8(0u);
    r13 = r13 + 4u;
    ea_10 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_2 = *gptr<u32>(ea_10);
    r5_1 = *gptr<u32>(ea_10 + 4);
    r6_1 = *gptr<u32>(ea_10 + 8);
    r7_1 = *gptr<u32>(ea_10 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_10 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_10 + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea_10 + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return call_0064d0b8(r0, 0x72u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00659d14
GUEST_EXPORT(0x00659d14, d_00659d14::f_00659d14);

// f_00659e34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659e34 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659e34(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r1_1 = u32(*gptr<u16>(r1));
    ea_2 = r13;
    *gptr<u16>(ea_2) = u16(r1_1);
    ea_3 = r0_1 + 0xeu;  // (from the original)
    *gptr<u16>(ea_3) = u16(r1_1);
    *gptr<u8>(ea_3 + 2u) = u8(r3);
    *gptr<u8>(ea_3 + 3u) = u8(r2);
    *gptr<u8>(ea_3 + 4u) = u8(r4_1);
    ea_4 = r0_1 + 0x13u;  // (from the original)
    *gptr<u8>(ea_4) = u8(0u);
    r13 = r13 + 4u;
    ea_5 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_2 = *gptr<u32>(ea_5);
    r5_1 = *gptr<u32>(ea_5 + 4);
    r6_1 = *gptr<u32>(ea_5 + 8);
    r7_1 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return call_0064d0b8(r0, 0x15u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00659e34
GUEST_EXPORT(0x00659e34, d_00659e34::f_00659e34);

// f_00659f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00659f14 {

inline guest::global<u32, 0x00659fa4> global_00659fa4;  // (from the original)
inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_00659f14(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    float S1_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r5_1 = r0_1 + 0xeu;  // (from the original)
    r0_2 = r0_1 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_005d41b8(r0_2, r1, r2_1, r3_1);
    S0_2 = std::bit_cast<float>(*global_00659fa4);
    r0_3 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2)) * S0_2)));
    ea_2 = r13;
    *gptr<u16>(ea_2) = u16(r0_3);
    *gptr<u16>(r5_1) = u16(r0_3);
    r1_1 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(std::bit_cast<float>(*gptr<u32>(r2 + 4u)) * S0_2)));
    ea_3 = r13;
    *gptr<u16>(ea_3) = u16(r1_1);
    ea_4 = r5_1 + 2u;
    *gptr<u16>(ea_4) = u16(r1_1);
    S1_2 = std::bit_cast<float>(*gptr<u32>(r2 + 8u));
    S0_3 = std::bit_cast<float>(vcvt_sz_f(S1_2 * S0_2));
    r0_4 = std::bit_cast<u32>(S0_3);
    ea_5 = r13;
    *gptr<u16>(ea_5) = u16(r0_4);
    ea_6 = r5_1 + 4u;
    *gptr<u16>(ea_6) = u16(r0_4);
    r13 = r13 + 4u;
    ea_7 = r13;
    r13 = r13 + 0x1c;  // (from the original)
    r4_1 = *gptr<u32>(ea_7);
    r5_2 = *gptr<u32>(ea_7 + 4);
    r6_1 = *gptr<u32>(ea_7 + 8);
    r7_1 = *gptr<u32>(ea_7 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_7 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_7 + 0x14);  // (from the original)
    r14 = *gptr<u32>(ea_7 + 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    return call_0064d0b8(r0, 0xb0u, r0_1, 0u);  // (from the original)
}

}  // namespace d_00659f14
GUEST_EXPORT(0x00659f14, d_00659f14::f_00659f14);

// f_0065d5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065d5a8 {

inline guest::global<u32, 0x0065d5c8> global_0065d5c8;  // (from the original)
inline guest::global<u32, 0x00886878> global_00886878;  // (from the original)
inline guest::global<u32, 0x00886890> global_00886890;  // (from the original)

u32 f_0065d5a8() {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_0065d5c8);
    S0_1 = std::bit_cast<float>(*global_00886890) * S1_1 * std::bit_cast<float>(*global_00886878);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0x886878u;  // (from the original)
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

inline guest::global<u32, 0x0065d618> global_0065d618;  // (from the original)

u32 f_0065d5d4(gptr<Object_0065d5d4_0> arg0) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_0065d618);
    arg0->word_188 = u32(std::bit_cast<u32>(S0_1));
    *gptr<u16>(0x184u + r0) = u16(0x12cu);  // (from the original)
    *gptr<u16>((0x184u | u32(s32(0x184u) >> 6)) + r0) = u16(0u);  // (from the original)
    arg0->byte_18c = u8(0u);
    r1_1 = r0 + 0x8cau;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 != 0) {
        r0_1 = 0x1000u;  // (from the original)
        arg0->word_8ca = u32(r0_1);
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0065d5d4
GUEST_EXPORT(0x0065d5d4, d_0065d5d4::f_0065d5d4);

// f_0065d7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065d7ec {

inline constexpr guest::Function<0x0026a5dc, u32(u32, u32, u32, u32)> call_0026a5dc;  // (from the original)

u32 f_0065d7ec(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xd00u;  // (from the original)
    r0_2 = call_0026a5dc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = u32(*gptr<u8>(r0 + 0x174u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0 + 0x174u) = u8(r1_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
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

inline guest::global<u32, 0x0065dae0> global_0065dae0;  // (from the original)
inline constexpr guest::Function<0x0018df18, u32(u32, u32, u32, u32)> call_0018df18;  // (from the original)

u32 f_0065daa8(gptr<Object_0065daa8_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    zf_1 = u32(arg0->byte_91f) == 0;
    r3_1 = arg0->word_918;
    if (!zf_1) {
        S0 = std::bit_cast<float>(arg0->word_914);
    }
    if (zf_1) {
        S0 = std::bit_cast<float>(*global_0065dae0);
    }
    guest::cpu()->s[0] = S0;
    return call_0018df18(r1, r2, r3, r3_1);
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r1_1 = 0;
    u32 r2_5 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r0_2 = 0;
    u32 r2_7 = 0;
    u32 r1_3 = 0;
    u32 r2_8 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_9 = 0;
    u32 r0_5 = 0;
    u32 r2_10 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_11 = 0;
    u32 r0_7 = 0;
    u32 r4_2 = 0;
    u32 r1_6 = 0;
    u32 r2_12 = 0;
    u32 r0_8 = 0;
    u32 res_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r2_13 = 0;
    u32 res_3 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 nf_3 = 0;
    u32 zf_3 = 0;
    u32 vf_3 = 0;
    u32 zf_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0;
    r5_1 = r1;
    res_1 = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r0 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0064c5e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0064f068(3u, 0x40u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_00653854(r4_1, r5_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    call_006f0130(1u, 1u, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    call_0024b7b8(1u, 1u, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_1 = call_007017c0(r5_1, r1_1, r2_5, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_2 = call_002fd068(r0_1, r1_2, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    call_006b8140(r0_2, 1u, r2_7, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_3 = call_002ffad8(r5_1, r1_3, r2_8, guest::cpu()->r[3]);
    r0_4 = call_006b60d8(r0_2, r0_3, 1u, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_5 = call_002fb378(r0_4, r1_4, r2_9, guest::cpu()->r[3]);
    r2_10 = guest::cpu()->r[2];
    r0_6 = call_00309bd4(0xcu, r0_5, r2_10, guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        call_006b8d80(r0_2, 1u, r2_11, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
    }
    r0_7 = u32(*gptr<u8>(r4_1 + 0x1acu));  // (from the original)
    r0 = call_0065377c(r0_7, r1_5, r2_11, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4_2 = r0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    call_0024b448(r0, 0xfu, 1u, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r0_8 = call_0030b6b8(r5_1, r1_6, r2_12, guest::cpu()->r[3]);
    r1 = r0_8;
    res_2 = r1 - 0x22bau;  // (from the original)
    nf_1 = res_2 >> 0x1f;  // (from the original)
    zf_1 = res_2 == 0;
    vf_1 = ((r1 ^ 0x22bau) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    r0 = r0_8 - 0x22bau;  // (from the original)
    if (zf_1) {
        goto L_65dd3c;
    }
    if (!!zf_1 || nf_1 != vf_1) {
        r2_13 = 0x22bau - 0x11u;  // (from the original)
        res_3 = r1 - r2_13;
        nf_2 = res_3 >> 0x1f;  // (from the original)
        zf_2 = res_3 == 0;
        vf_2 = ((r1 ^ r2_13) & (r1 ^ res_3)) >> 0x1f;  // (from the original)
        r0 = r1 - r2_13;
        if (zf_2) {
            goto L_65dd00;
        }
        if (!!zf_2 || nf_2 != vf_2) {
            res_4 = r1 - 0x2296u;  // (from the original)
            r0 = res_4;
            if (res_4 == 0) {
                goto L_65dd64;
            }
            if (r0 == 4u) {
                goto L_65dcd8;
            }
            if (r0 == 9u) {
                goto L_65dd50;
            }
            if (r0 != 0xfu) {  // (from the original)
                guest::cpu()->r[13] += 0x10u;  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0;
            }
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return call_0024b448(r4_2, 0x18u, 1u, guest::cpu()->r[3]);  // (from the original)
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
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0024b448(r4_2, 0x29u, 1u, guest::cpu()->r[3]);  // (from the original)
    }
    res_5 = r0 - 0x10u;  // (from the original)
    nf_3 = res_5 >> 0x1f;  // (from the original)
    zf_3 = res_5 == 0;
    vf_3 = ((r0 ^ 0x10u) & (r0 ^ res_5)) >> 0x1f;  // (from the original)
    if (zf_3) {
        goto L_65dd8c;
    }
    if (!zf_3 && nf_3 == vf_3) {
        goto L_65dcac;
    }
    zf_4 = r0 == 0xbu;  // (from the original)
    if (!zf_4) {
        zf_4 = r0 == 0xcu;  // (from the original)
    }
    if (!zf_4) {
        zf_4 = r0 == 0xdu;  // (from the original)
    }
    if (zf_4) {
        goto L_65dda0;
    }
    if (r0 == 0xfu) {  // (from the original)
        goto L_65dd8c;
    }
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
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x28u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dcd8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x21u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dcec:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x24u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd00:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x25u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd14:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x26u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd28:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x27u, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd3c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x2au, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd50:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x2bu, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd64:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x2cu, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd78:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x2du, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dd8c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x3fu, 1u, guest::cpu()->r[3]);  // (from the original)
L_65dda0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0024b448(r4_2, 0x40u, 1u, guest::cpu()->r[3]);  // (from the original)
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

inline guest::global<u32, 0x0065df4c> global_0065df4c;  // (from the original)
inline constexpr guest::Function<0x001cf9c4, u32(u32, u32, u32, u32)> call_001cf9c4;  // (from the original)
inline constexpr guest::Function<0x00269208, u32(u32, u32, u32, u32)> call_00269208;  // (from the original)
inline constexpr guest::Function<0x0070ae20, u32(u32, u32, u32, u32)> call_0070ae20;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_0065de40(gptr<Object_0065de40_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 zf_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    float S0_3 = 0;
    u32 r0_10 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = r0 + 0x1500u;  // (from the original)
    if (u32(arg0->byte_1554) != 0x1eu) {  // (from the original)
        goto L_65de84;
    }
    if (u32(arg0->half_1556) < 7u) {
        goto L_65de84;
    }
    r1 = u32(arg0->byte_174) | 0x40u;  // (from the original)
    arg0->byte_174 = u8(r1);
L_65de84:;
    r0_1 = r0 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_0070ae20(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    zf_1 = r2 == 0;
    r6_1 = u32(*gptr<u16>(r0 + (r0_2 << 1) + 0x224u));  // (from the original)
    if (!zf_1) {
        if (u32(*gptr<u16>(0x5bau + r0)) == 0) {  // (from the original)
            r0_3 = 1u;
            r13 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0_1;
            return r0_3;
        }
    }
    *gptr<u16>(r5_1 + 0x56u) = u16(u32(*gptr<u16>(r5_1 + 0x56u)) + 1u);  // (from the original)
    r0_4 = r0 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_00269208(r0_4, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_5 = r0 + 0x5bau;  // (from the original)
    r1_2 = u32(*gptr<u16>(r0_5));
    if (r1_2 != 0) {
        if (r1_2 >= 1u) {
            r1_2 = r1_2 - 1u;
            *gptr<u16>(r0_5) = u16(r1_2);
        } else {
            *gptr<u16>(r0_5) = u16(0u);
        }
    }
    r0_6 = r0 + 0x1b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_7 = call_0070ae20(r0_6, r1_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (u32(*gptr<u16>(r0 + (r0_7 << 1) + 0x224u)) != r6_1) {  // (from the original)
        r0_8 = r0 + 0x3b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        r0_9 = call_0071a844(r0_8, r1_1, r2_3, r3_3);
        S0_3 = std::bit_cast<float>(*global_0065df4c);
        r0_10 = r0 + 0x1b4u;  // (from the original)
        *gptr<u32>(r13 + 4u) = u32(0u);
        *gptr<u32>(r13) = u32(1u);
        *gptr<u32>(r13 + 8u) = u32(0u);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        call_001cf9c4(r0_10, r0_9, 0u, 0u);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
    }
    r0_3 = 0u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 cf_1 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 cf_2 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 == 0) {
        goto L_65df98;
    }
    r1_1 = u32(arg0->byte_44);
    res_1 = r1_1 << 0x1e >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        goto L_65df98;
    }
    arg0->byte_44 = u8(r1_1 | 2u);
    guest::cpu()->r[13] = r13;
    call_00582e4c(0x10005e7u, r1, r2, 0u);  // (from the original)
    r3 = guest::cpu()->r[3];
L_65df98:;
    r1_2 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_2, r1, r3);
    r0_2 = *gptr<u32>(r13);
    r2_1 = *gptr<u32>(r13 + 4);
    cf_1 = r0_2 >= 0x70u;  // (from the original)
    if (!cf_1) {
        cf_1 = r2_1 >= 0x70u;  // (from the original)
    }
    if (cf_1) {
        goto L_65dfe4;
    }
    r0_3 = r0_2 + ((r2_1 << 3) - r2_1 << 4);
    if (r0_3 >= 0x3100u) {  // (from the original)
        goto L_65dfe4;
    }
    r3_1 = r0_3 & 7u;
    r0_4 = 0xaadaf4u + (r0_3 >> 3);  // (from the original)
    *gptr<u8>(r0_4) = u8(u32(*gptr<u8>(r0_4)) | lsl_r(1u, r3_1 & 0xff));  // (from the original)
    *gptr<u8>(0xaadaf4u + 0x620u) = u8(1u);  // (from the original)
L_65dfe4:;
    r0_5 = *gptr<u32>(r13);
    r2_2 = *gptr<u32>(r13 + 4);
    cf_2 = r0_5 >= 0x70u;  // (from the original)
    if (!cf_2) {
        cf_2 = r2_2 >= 0x70u;  // (from the original)
    }
    if (cf_2) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = 0xaae115u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    r0_6 = r0_5 + ((r2_2 << 3) - r2_2 << 4);
    if (r0_6 >= 0x3100u) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = 0xaae115u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r3_2 = r0_6 & 7u;
    r0_7 = 0xaae115u + (r0_6 >> 3);  // (from the original)
    *gptr<u8>(r0_7) = u8(u32(*gptr<u8>(r0_7)) | lsl_r(1u, r3_2 & 0xff));  // (from the original)
    *gptr<u8>(0xaae115u + 0x620u) = u8(1u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = 0xaae115u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_7;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_1a9);
    if (r0_1 >= 0xebu) {  // (from the original)
        r1_1 = 0u;
        goto L_65e0d8;
    }
    r0_1 = call_0064f390(r0_1, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1_1 = r0_1;
L_65e0d8:;
    r2_1 = u32(*gptr<u8>(r0 + 0x171u)) | 0x80u;  // (from the original)
    *gptr<u8>(r0 + 0x171u) = u8(r2_1);  // (from the original)
    if (r1_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r1_2 = u32(*gptr<u8>(r1_1 + 1u));
    if (r1_2 >= 0xebu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r1_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    if (r1_2 != 6u) {
        call_0064d0b8(r0, r1_2, 0u, 0u);
        r1_3 = guest::cpu()->r[1];
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    call_0067a478(r0_1, r1_2, r2_1, r3);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_0065196c(r0, r1_4, r2_2, r3_1);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_0065e0b8
GUEST_EXPORT(0x0065e0b8, d_0065e0b8::f_0065e0b8);

// f_0065e190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e190 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e190(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00656c20(r0, r1, r2, r3);
    *gptr<u8>(r0_1 + 0xeu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0064d0b8(r0, 0xe3u, r0_1, 0u);  // (from the original)
}

}  // namespace d_0065e190
GUEST_EXPORT(0x0065e190, d_0065e190::f_0065e190);

// f_0065e1bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e1bc {

inline constexpr guest::Function<0x005d41b8, u32(u32, u32, u32, u32)> call_005d41b8;  // (from the original)
inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e1bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r1_1 = r13 + 0x28u;  // (from the original)
    r5_1 = *gptr<u32>(r1_1);
    r6_1 = *gptr<u32>(r1_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1_1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0xeu;  // (from the original)
    *gptr<u32>(r0_1 + 0xeu) = u32(r5_1);  // (from the original)
    r2_1 = u32(*gptr<u8>(r4_1 + 9u)) & ~1u;
    *gptr<u8>(r4_1 + 9u) = u8((r2_1 | r3) & ~0xfeu | 0xfeu & r6_1 << 1);  // (from the original)
    r0_2 = r4_1 + 4u;
    guest::cpu()->r[13] = r13;
    call_005d41b8(r0_2, r1, r2_1, r3_1);
    *gptr<u8>(r4_1 + 8u) = u8(u32(s32(u32(*gptr<u16>(r2))) >> 8));
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0064d0b8(r0, 0x45u, r0_1, 0u);  // (from the original)
}

}  // namespace d_0065e1bc
GUEST_EXPORT(0x0065e1bc, d_0065e1bc::f_0065e1bc);

// f_0065e2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065e2e0 {

inline constexpr guest::Function<0x0064d0b8, u32(u32, u32, u32, u32)> call_0064d0b8;  // (from the original)
inline constexpr guest::Function<0x00656c20, u32(u32, u32, u32, u32)> call_00656c20;  // (from the original)

u32 f_0065e2e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    ea_1 = r13 + 0x20u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    r5_1 = *gptr<u32>(ea_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00656c20(r0, r1, r2, r3);
    ea_2 = r0_1 + 0xeu;  // (from the original)
    *gptr<u8>(ea_2) = u8(r1);
    *gptr<u8>(ea_2 + 1u) = u8(r2);
    *gptr<u8>(ea_2 + 2u) = u8(r4_1);
    *gptr<u8>(ea_2 + 3u) = u8(r3);
    *gptr<u8>(ea_2 + 8u) = u8(r5_1);
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0064d0b8(r0, 0x53u, r0_1, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_65e354;
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0064d0b8(r0, 0x52u, r0_1, 0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_65e354;
        }
    }
    r0_2 = 1u;
L_65e354:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13 + 4u;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003171b4(r0_1, r1_1, r1, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r5_1 = *gptr<u32>(r13);
    r6_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_005980c0(r5_1, r6_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        call_00598d20(r5_1, r6_1, r2_2, guest::cpu()->r[3]);
        guest::cpu()->r[13] = r13;
        call_0065ddfc(r0, r5_1, r6_1, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_2 = 1u;
    }
    r13 = r13 + 8u;
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_2 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0065fc64
GUEST_EXPORT(0x0065fc64, d_0065fc64::f_0065fc64);

// f_0065fcc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0065fcc0 {

inline constexpr guest::Function<0x005980c0, u32(u32, u32, u32, u32)> call_005980c0;  // (from the original)
inline constexpr guest::Function<0x00598d20, u32(u32, u32, u32, u32)> call_00598d20;  // (from the original)
inline constexpr guest::Function<0x0065ddfc, u32(u32, u32, u32, u32)> call_0065ddfc;  // (from the original)

u32 f_0065fcc0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005980c0(r1, r2, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        call_00598d20(r1, r2, r2_1, guest::cpu()->r[3]);
        call_0065ddfc(r0, r1, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0065fcc0
GUEST_EXPORT(0x0065fcc0, d_0065fcc0::f_0065fcc0);
