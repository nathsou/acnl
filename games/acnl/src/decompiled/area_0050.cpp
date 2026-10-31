// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/state_a22020.hpp"

#include <bit>

using guest::gptr;

// f_005000d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005000d0 {

struct __attribute__((packed)) Object_005000d0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_005000d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_005000d0_0, word_18, 0x18);  // (from the original)


void f_005000d0(gptr<Object_005000d0_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_0 = u32(0x9030fcu);  // (from the original)
    arg0->word_8 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_005000d0
GUEST_EXPORT(0x005000d0, d_005000d0::f_005000d0);

// f_0050060c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050060c {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004ff388, u32(u32, u32, u32, u32)> call_004ff388;  // (from the original)

u32 f_0050060c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004ff388(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x903118u);  // (from the original)
    r0_2 = r0_1 + 0x11cu;  // (from the original)
    call_002fbb30(r0_2, r1, 0xe8u, r3_1);  // (from the original)
    *gptr<u8>(r0_1 + 0x204u) = u8(1u);  // (from the original)
    *gptr<u8>(r0_1 + 0x205u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = u32(r0_1 + 0x11cu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0050060c
GUEST_EXPORT(0x0050060c, d_0050060c::f_0050060c);

// f_005008b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005008b4 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004feb7c, u32(u32, u32, u32, u32)> call_004feb7c;  // (from the original)
inline constexpr guest::Function<0x004ff300, u32(u32, u32, u32, u32)> call_004ff300;  // (from the original)

u32 f_005008b4(u32 r0, u32 r1, u32 r2) {
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_004ff300(r0, 0u, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    call_004ff300(r0, 1u, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    call_004ff300(r0, 2u, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    call_004ff300(r0, 3u, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    call_004ff300(r0, 4u, r2_4, guest::cpu()->r[3]);
    *gptr<u8>(r0 + 0x2ecu) = u8(r1);  // (from the original)
    if (r1 != 0) {
        r1_1 = r0 + 0x11cu;  // (from the original)
        r0_1 = r0 + 0x30u;  // (from the original)
        call_002fbb30(r0_1, r1_1, 0xe8u, guest::cpu()->r[3]);  // (from the original)
    } else {
        r1_2 = r0 + 0x204u;  // (from the original)
        r0_2 = r0 + 0x30u;  // (from the original)
        call_002fbb30(r0_2, r1_2, 0xe8u, guest::cpu()->r[3]);  // (from the original)
    }
    call_004feb7c(r0, 0u, 1u, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_005008b4
GUEST_EXPORT(0x005008b4, d_005008b4::f_005008b4);

// f_005012e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005012e0 {

inline guest::global<u32, 0x0050135c> global_0050135c;  // (from the original)
inline guest::global<u32, 0x00501360> global_00501360;  // (from the original)
inline constexpr guest::Function<0x0050bcb4, u32(u32, u32, u32, u32)> call_0050bcb4;  // (from the original)

u32 f_005012e0(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    float S0_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 ea_7 = 0;
    u32 ea_8 = 0;
    u32 ea_9 = 0;
    u32 ea_10 = 0;
    float S1_1 = 0;
    u32 ea_11 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_0050bcb4(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = u32(0x9031a0u);  // (from the original)
    ea_1 = r0_1 + 0x710u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(~0u);
    r4_1 = r0_1 + 0x400u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_0050135c);
    ea_2 = r0_1 + 0x718u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r0_1 + 0x71cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    *gptr<u32>(r4_1 + 0x320u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r4_1 + 0x324u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    ea_4 = r0_1 + 0x728u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r0_1 + 0x72cu;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r0_1 + 0x730u;  // (from the original)
    *gptr<u32>(ea_6) = u32(0u);
    ea_7 = r0_1 + 0x734u;  // (from the original)
    *gptr<u32>(ea_7) = u32(0u);
    ea_8 = r0_1 + 0x738u;  // (from the original)
    *gptr<u8>(ea_8) = u8(0u);
    ea_9 = r0_1 + 0x739u;  // (from the original)
    *gptr<u8>(ea_9) = u8(0u);
    ea_10 = r0_1 + 0x73au;  // (from the original)
    *gptr<u8>(ea_10) = u8(0u);
    S1_1 = std::bit_cast<float>(*global_00501360);
    ea_11 = r0_1 + 0x73cu;  // (from the original)
    *gptr<u32>(ea_11) = u32(0x12u);  // (from the original)
    *gptr<u32>(ea_11 + 4) = u32(6u);
    *gptr<u32>(ea_11 + 8) = u32(4u);
    *gptr<u32>(r4_1 + 0x348u) = u32(std::bit_cast<u32>(S1_1));  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_005012e0
GUEST_EXPORT(0x005012e0, d_005012e0::f_005012e0);

// f_005013dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005013dc {

struct __attribute__((packed)) Object_005013dc_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_005013dc_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00501494> global_00501494;  // (from the original)
inline guest::global<u32, 0x0095e1a8> global_0095e1a8;  // (from the original)

u32 f_005013dc(u32 r0_unused, u32 r1_unused, gptr<Object_005013dc_2> arg2, u32 r3, float S0, float S1) {
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r12_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    float S2_1 = 0;
    float S4_1 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S2_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 8;
    r5_1 = 0u;
    r0_1 = *gptr<u32>(r13 + 8u);
    r4_1 = arg2->word_4;
    r12_1 = r5_1;
    if (r3 == 0) {
        r5_1 = 1u;
        r12_1 = r5_1;
        goto L_501414;
    }
    if (r3 == 1u) {
        r5_1 = 1u;
        goto L_501414;
    }
    if (r3 == 2u) {
        r12_1 = 1u;
    }
L_501414:;
    zf_1 = r0_1 == 0;
    r0_2 = *gptr<u32>(r2);
    if (!zf_1) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x24u));  // (from the original)
        S1_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x28u));  // (from the original)
        S3_1 = std::bit_cast<float>(*global_00501494);
        *global_0095e1a8 = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(0x95e1a8u + 4) = u32(std::bit_cast<u32>(S1_1));  // (from the original)
        r0_3 = r0_2 + 0x24u;  // (from the original)
        r1_1 = u32(*gptr<u16>(r4_1));
        *gptr<u32>(r2 + 4u) = u32(r4_1 + 2u);
        S2_1 = std::bit_cast<float>(r1_1);
        S4_1 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        S2_2 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        S3_2 = S0_1 * S4_1;
        S2_3 = S1_1 * S2_2;
        if (r5_1 != 0) {
            S0_1 = S3_2;
        }
        if (r12_1 != 0) {
            S1_1 = S2_3;
        }
        *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_1));
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_3;
    }
    r1_2 = *global_0095e1a8;
    r2_1 = *gptr<u32>(0x95e1a8u + 4);  // (from the original)
    *gptr<u32>(r0_2 + 0x24u) = u32(r1_2);  // (from the original)
    *gptr<u32>(r0_2 + 0x28u) = u32(r2_1);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_2;
}

}  // namespace d_005013dc
GUEST_EXPORT(0x005013dc, d_005013dc::f_005013dc);

// f_00501580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501580 {

struct __attribute__((packed)) Object_00501580_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00501580_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00501580_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00501608> global_00501608;  // (from the original)
inline guest::global<u32, 0x0095e1a0> global_0095e1a0;  // (from the original)

u32 f_00501580(u32 r0_unused, gptr<Object_00501580_1> arg1, u32 r2, u32 r3, float S0, float S1) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 zf_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S2_1 = 0;
    float S4_1 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S2_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 8;
    r0_1 = arg1->word_0;
    r4_1 = arg1->word_4;
    if (*gptr<u32>(r13 + 8u) != 0) {
        zf_1 = r2 == 0;
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x24u));  // (from the original)
        S1_1 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x28u));  // (from the original)
        S3_1 = std::bit_cast<float>(*global_00501608);
        *global_0095e1a0 = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(0x95e1a0u + 4) = u32(std::bit_cast<u32>(S1_1));  // (from the original)
        r0_2 = r0_1 + 0x24u;  // (from the original)
        r2_1 = u32(*gptr<u16>(r4_1));
        arg1->word_4 = u32(r4_1 + 2u);
        S2_1 = std::bit_cast<float>(r2_1);
        S4_1 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        S2_2 = float(std::bit_cast<u32>(S2_1)) * S3_1;
        S3_2 = S0_1 * S4_1;
        S2_3 = S1_1 * S2_2;
        if (!zf_1) {
            S0_1 = S3_2;
        }
        if (r3 != 0) {
            S1_1 = S2_3;
        }
        *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r0_2 + 4) = u32(std::bit_cast<u32>(S1_1));
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    r1_1 = *global_0095e1a0;
    r2_2 = *gptr<u32>(0x95e1a0u + 4);  // (from the original)
    r0_3 = r0_1 + 0x24u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r1_1);
    *gptr<u32>(r0_3 + 4) = u32(r2_2);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_3;
}

}  // namespace d_00501580
GUEST_EXPORT(0x00501580, d_00501580::f_00501580);

// f_00501cc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501cc8 {

inline guest::global<u32, 0x00501eac> global_00501eac;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x006aa6b0, u32(u32, u32, u32, u32)> call_006aa6b0;  // (from the original)
inline constexpr guest::Function<0x00766b00, u32(u32, u32, u32, u32)> call_00766b00;  // (from the original)

u32 f_00501cc8(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0_unused, float S1_unused, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    float S0_1 = 0;
    u32 res_1 = 0;
    float S1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_5 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_3 = 0;
    u32 r2_7 = 0;
    u32 r3_4 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_4 = 0;
    u32 r0_4 = 0;
    u32 r2_8 = 0;
    u32 r3_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_5 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_9 = 0;
    u32 r3_6 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_6 = 0;
    u32 r2_10 = 0;
    u32 r3_7 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_7 = 0;
    u32 r0_6 = 0;
    u32 r2_11 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_8 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_12 = 0;
    u32 r3_9 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_9 = 0;
    u32 r0_8 = 0;
    u32 r2_13 = 0;
    u32 r3_10 = 0;
    float S0_11 = 0;
    float S1_11 = 0;
    float S2_10 = 0;
    u32 r0_9 = 0;
    u32 r2_14 = 0;
    u32 r3_11 = 0;
    float S0_12 = 0;
    float S1_12 = 0;
    float S2_11 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_15 = 0;
    u32 r3_12 = 0;
    float S0_13 = 0;
    float S1_13 = 0;
    float S2_12 = 0;
    u32 r2_16 = 0;
    u32 r3_13 = 0;
    float S0_14 = 0;
    float S1_14 = 0;
    float S2_13 = 0;
    u32 r0_11 = 0;
    u32 r2_17 = 0;
    u32 r3_14 = 0;
    float S0_15 = 0;
    float S1_15 = 0;
    float S2_14 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_18 = 0;
    u32 r3_15 = 0;
    float S0_16 = 0;
    float S1_16 = 0;
    float S2_15 = 0;
    u32 r2_19 = 0;
    u32 r3_16 = 0;
    float S0_17 = 0;
    float S1_17 = 0;
    float S2_16 = 0;
    u32 r0_13 = 0;
    u32 r2_20 = 0;
    u32 r3_17 = 0;
    float S0_18 = 0;
    float S1_18 = 0;
    float S2_17 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_21 = 0;
    u32 r3_18 = 0;
    float S0_19 = 0;
    float S1_19 = 0;
    float S2_18 = 0;
    u32 r2_22 = 0;
    u32 r3_19 = 0;
    float S0_20 = 0;
    float S1_20 = 0;
    float S2_19 = 0;
    u32 r0_15 = 0;
    u32 r2_23 = 0;
    u32 r3_20 = 0;
    float S0_21 = 0;
    float S1_21 = 0;
    float S2_20 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_24 = 0;
    u32 r3_21 = 0;
    float S0_22 = 0;
    float S1_22 = 0;
    float S2_21 = 0;
    u32 r0_17 = 0;
    u32 r2_25 = 0;
    u32 r3_22 = 0;
    float S0_23 = 0;
    float S1_23 = 0;
    float S2_22 = 0;
    u32 r0_18 = 0;
    u32 r2_26 = 0;
    u32 r3_23 = 0;
    float S0_24 = 0;
    float S1_24 = 0;
    float S2_23 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r2_27 = 0;
    u32 r3_24 = 0;
    float S0_25 = 0;
    float S1_25 = 0;
    float S2_24 = 0;
    u32 r1_10 = 0;
    float S0_26 = 0;
    u32 res_2 = 0;
    float S1_26 = 0;
    u32 r1_11 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r0 = 1u;
    r5 = r4 + 0x800u;  // (from the original)
    do {
L_501cd8:;
        r2_1 = r4 + (r0 << 2);
        S0_1 = std::bit_cast<float>(*gptr<u32>(r5 + 0x26cu));  // (from the original)
        r0 = r0 + 1u;
        res_1 = r0 - 7u;
        S1_1 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r2_1 + 0xe48u) + 0x4cu));  // (from the original)
        r2_2 = *gptr<u32>(r2_1 + 0xe48u) + 0x48u;  // (from the original)
        *gptr<u32>(r2_2) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r2_2 + 4) = u32(std::bit_cast<u32>(S1_1));
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 7u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    r0_1 = r4 + 0xa78u;  // (from the original)
    *gptr<u32>(r13) = u32(r1);
    r1_1 = *gptr<u32>(r4 + 0xa74u);  // (from the original)
    r2_3 = r4 + 0xe48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2;
    call_006aa6b0(r0_1, r1_1, r2_3, 1u);
    r2_4 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    r0_2 = call_00766b00(r0_1, 0u, r2_4, r3_1);
    r2_5 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    r0_3 = r4 + 0xe68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    call_005e2e50(r0_3, r0_2, r2_5, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    call_005e2f94(r0_3, r1_2, r2_6, r3_3);
    r2_7 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_4;
    r0_4 = call_00766b00(r0_1, 1u, r2_7, r3_4);
    r2_8 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    r0_5 = r4 + 0xf2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_5;
    call_005e2e50(r0_5, r0_4, r2_8, r3_5);
    r1_3 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_6;
    call_005e2f94(r0_5, r1_3, r2_9, r3_6);
    r2_10 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_7;
    r0_6 = call_00766b00(r0_1, 2u, r2_10, r3_7);
    r2_11 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    r0_7 = r4 + 0xff0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_8;
    call_005e2e50(r0_7, r0_6, r2_11, r3_8);
    r1_4 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    r0_8 = r4 + 0xff0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    guest::cpu()->s[2] = S2_9;
    call_005e2f94(r0_8, r1_4, r2_12, r3_9);
    r2_13 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_11;
    guest::cpu()->s[2] = S2_10;
    r0_9 = call_00766b00(r0_1, 3u, r2_13, r3_10);
    r2_14 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    r0_10 = r4 + 0x10b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_11;
    call_005e2e50(r0_10, r0_9, r2_14, r3_11);
    r1_5 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_13 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_13;
    guest::cpu()->s[2] = S2_12;
    call_005e2f94(r0_10, r1_5, r2_15, r3_12);
    r2_16 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    S1_14 = guest::cpu()->s[1];
    S2_13 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    guest::cpu()->s[1] = S1_14;
    guest::cpu()->s[2] = S2_13;
    r0_11 = call_00766b00(r0_1, 4u, r2_16, r3_13);
    r2_17 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    S1_15 = guest::cpu()->s[1];
    S2_14 = guest::cpu()->s[2];
    r0_12 = r4 + 0x1178u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    guest::cpu()->s[1] = S1_15;
    guest::cpu()->s[2] = S2_14;
    call_005e2e50(r0_12, r0_11, r2_17, r3_14);
    r1_6 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    S1_16 = guest::cpu()->s[1];
    S2_15 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    guest::cpu()->s[1] = S1_16;
    guest::cpu()->s[2] = S2_15;
    call_005e2f94(r0_12, r1_6, r2_18, r3_15);
    r2_19 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    S0_17 = guest::cpu()->s[0];
    S1_17 = guest::cpu()->s[1];
    S2_16 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_17;
    guest::cpu()->s[1] = S1_17;
    guest::cpu()->s[2] = S2_16;
    r0_13 = call_00766b00(r0_1, 5u, r2_19, r3_16);
    r2_20 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S0_18 = guest::cpu()->s[0];
    S1_18 = guest::cpu()->s[1];
    S2_17 = guest::cpu()->s[2];
    r0_14 = r4 + 0x123cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_18;
    guest::cpu()->s[1] = S1_18;
    guest::cpu()->s[2] = S2_17;
    call_005e2e50(r0_14, r0_13, r2_20, r3_17);
    r1_7 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_18 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_18;
    call_005e2f94(r0_14, r1_7, r2_21, r3_18);
    r2_22 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    S0_20 = guest::cpu()->s[0];
    S1_20 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_20;
    guest::cpu()->s[1] = S1_20;
    guest::cpu()->s[2] = S2_19;
    r0_15 = call_00766b00(r0_1, 6u, r2_22, r3_19);
    r2_23 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    S0_21 = guest::cpu()->s[0];
    S1_21 = guest::cpu()->s[1];
    S2_20 = guest::cpu()->s[2];
    r0_16 = r4 + 0x1300u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_21;
    guest::cpu()->s[1] = S1_21;
    guest::cpu()->s[2] = S2_20;
    call_005e2e50(r0_16, r0_15, r2_23, r3_20);
    r1_8 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    S0_22 = guest::cpu()->s[0];
    S1_22 = guest::cpu()->s[1];
    S2_21 = guest::cpu()->s[2];
    r0_17 = r4 + 0x1300u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_22;
    guest::cpu()->s[1] = S1_22;
    guest::cpu()->s[2] = S2_21;
    call_005e2f94(r0_17, r1_8, r2_24, r3_21);
    r2_25 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    S0_23 = guest::cpu()->s[0];
    S1_23 = guest::cpu()->s[1];
    S2_22 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_23;
    guest::cpu()->s[1] = S1_23;
    guest::cpu()->s[2] = S2_22;
    r0_18 = call_00766b00(r0_1, 7u, r2_25, r3_22);
    r2_26 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    S0_24 = guest::cpu()->s[0];
    S1_24 = guest::cpu()->s[1];
    S2_23 = guest::cpu()->s[2];
    r0_19 = r4 + 0x13c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_24;
    guest::cpu()->s[1] = S1_24;
    guest::cpu()->s[2] = S2_23;
    call_005e2e50(r0_19, r0_18, r2_26, r3_23);
    r1_9 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    S0_25 = guest::cpu()->s[0];
    S1_25 = guest::cpu()->s[1];
    S2_24 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_25;
    guest::cpu()->s[1] = S1_25;
    guest::cpu()->s[2] = S2_24;
    call_005e2f94(r0_19, r1_9, r2_27, r3_24);
    S2 = std::bit_cast<float>(*global_00501eac);
    r0 = 1u;
    do {
L_501e7c:;
        r1_10 = r4 + (r0 << 2);
        r0 = r0 + 1u;
        S0_26 = std::bit_cast<float>(*gptr<u32>(r5 + 0x26cu)) + S2;  // (from the original)
        res_2 = r0 - 7u;
        S1_26 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r1_10 + 0xe48u) + 0x4cu));  // (from the original)
        r1_11 = *gptr<u32>(r1_10 + 0xe48u) + 0x48u;  // (from the original)
        *gptr<u32>(r1_11) = u32(std::bit_cast<u32>(S0_26));
        *gptr<u32>(r1_11 + 4) = u32(std::bit_cast<u32>(S1_26));
        guest::preempt();
    } while (res_2 >> 0x1f != ((r0 ^ 7u) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_26;
    guest::cpu()->s[1] = S1_26;
    return r0;
}

}  // namespace d_00501cc8
GUEST_EXPORT(0x00501cc8, d_00501cc8::f_00501cc8);

// f_00501f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00501f84 {

struct __attribute__((packed)) Object_00501f84_0 {
    u8 unknown_0[0xe48];  // (not used here)
    u32 word_e48;
    u32 word_e4c;
    u32 word_e50;
    u32 word_e54;
    u32 word_e58;
    u32 word_e5c;
    u32 word_e60;
    u32 word_e64;
};
GUEST_OFFSET(Object_00501f84_0, word_e48, 0xe48);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e4c, 0xe4c);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e50, 0xe50);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e54, 0xe54);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e58, 0xe58);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e5c, 0xe5c);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e60, 0xe60);  // (from the original)
GUEST_OFFSET(Object_00501f84_0, word_e64, 0xe64);  // (from the original)


u32 f_00501f84(gptr<Object_00501f84_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_1 = 0;
    u32 r1_7 = 0;
    r12_1 = arg0->word_e48;
    *gptr<u8>(r12_1 + 0xb7u) = u8(r1 | u32(*gptr<u8>(r12_1 + 0xb7u)) & 0xfeu);  // (from the original)
    r1_1 = arg0->word_e4c;
    *gptr<u8>(r1_1 + 0xb7u) = u8(u32(*gptr<u8>(r1_1 + 0xb7u)) & 0xfeu | r2);  // (from the original)
    r1_2 = arg0->word_e50;
    *gptr<u8>(r1_2 + 0xb7u) = u8(u32(*gptr<u8>(r1_2 + 0xb7u)) & 0xfeu | r2);  // (from the original)
    r1_3 = arg0->word_e54;
    *gptr<u8>(r1_3 + 0xb7u) = u8(u32(*gptr<u8>(r1_3 + 0xb7u)) & 0xfeu | r2);  // (from the original)
    r1_4 = arg0->word_e58;
    *gptr<u8>(r1_4 + 0xb7u) = u8(u32(*gptr<u8>(r1_4 + 0xb7u)) & 0xfeu | r2);  // (from the original)
    r1_5 = arg0->word_e5c;
    *gptr<u8>(r1_5 + 0xb7u) = u8(u32(*gptr<u8>(r1_5 + 0xb7u)) & 0xfeu | r2);  // (from the original)
    r1_6 = arg0->word_e60;
    *gptr<u8>(r1_6 + 0xb7u) = u8(r2 | u32(*gptr<u8>(r1_6 + 0xb7u)) & 0xfeu);  // (from the original)
    r0_1 = arg0->word_e64;
    r1_7 = u32(*gptr<u8>(r0_1 + 0xb7u)) & 0xfeu | r3;  // (from the original)
    *gptr<u8>(r0_1 + 0xb7u) = u8(r1_7);  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return r0_1;
}

}  // namespace d_00501f84
GUEST_EXPORT(0x00501f84, d_00501f84::f_00501f84);

// f_00502030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00502030 {

inline constexpr guest::Function<0x005244d4, u32(u32, u32, u32, u32)> call_005244d4;  // (from the original)
inline constexpr guest::Function<0x005cc4a4, u32(u32, u32, u32, u32)> call_005cc4a4;  // (from the original)
inline constexpr guest::Function<0x005cc4d4, u32(u32, u32, u32, u32)> call_005cc4d4;  // (from the original)

u32 f_00502030(u32 r0) {
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 vf_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = 0u;
    r0_1 = r0 + 0xa50u;  // (from the original)
    r0_2 = call_005244d4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_3 = *gptr<u32>(r0 + 0xa5cu);  // (from the original)
        res_1 = r0_3 - 3u;
        vf_1 = ((r0_3 ^ 3u) & (r0_3 ^ res_1)) >> 0x1f;  // (from the original)
        r0_4 = *gptr<u32>(r0 + 0xa74u);  // (from the original)
        if (res_1 >> 0x1f == vf_1) {  // (from the original)
            call_005cc4a4(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        } else {
            call_005cc4d4(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r5_1 = 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r5_1;
}

}  // namespace d_00502030
GUEST_EXPORT(0x00502030, d_00502030::f_00502030);

// f_005022e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005022e0 {

struct __attribute__((packed)) Object_005022e0_0 {
    u8 unknown_0[0x71c];  // (not used here)
    u32 word_71c;
    u32 word_720;
    u8 unknown_724[0x14c];  // (not used here)
    u32 word_870;
};
GUEST_OFFSET(Object_005022e0_0, word_71c, 0x71c);  // (from the original)
GUEST_OFFSET(Object_005022e0_0, word_720, 0x720);  // (from the original)
GUEST_OFFSET(Object_005022e0_0, word_870, 0x870);  // (from the original)

inline guest::global<u32, 0x005023bc> global_005023bc;  // (from the original)
inline guest::global<u32, 0x005023c0> global_005023c0;  // (from the original)
inline guest::global<u32, 0x005023c4> global_005023c4;  // (from the original)
inline constexpr guest::Function<0x004b71c8, u32(u32, u32, u32, u32)> call_004b71c8;  // (from the original)
inline constexpr guest::Function<0x00501f84, u32(u32, u32, u32, u32)> call_00501f84;  // (from the original)

u32 f_005022e0(gptr<Object_005022e0_0> arg0, float S0_unused, float S1_unused, float S2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    u32 r0_2 = 0;
    float S0_3 = 0;
    float S0_4 = 0;
    float S2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    float S0_5 = 0;
    float S1_2 = 0;
    r0_1 = arg0->word_71c;
    r13 = r13 - 0x18u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005023bc);
    ea_1 = r0_1 + 0x28u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    r3_1 = r0 + 0x400u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0_1 + 0x30u));  // (from the original)
    S1_1 = std::bit_cast<float>(*global_005023c0);
    *gptr<u32>(r13) = u32(r1_1);
    *gptr<u32>(r13 + 4) = u32(r2_1);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    S0_2 = std::bit_cast<float>(arg0->word_720);
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_2));
    r0_2 = arg0->word_870;
    if (r0_2 != 0) {
        if (r0_2 == 1u) {
            goto L_502364;
        }
        if (r0_2 != 2u) {
            goto L_5023a8;
        }
        goto L_502384;
    }
    S0_3 = S0_2 + S1_1;
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_3));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2;
    call_00501f84(r0, 0u, 1u, 1u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    goto L_5023a8;
L_502364:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2;
    call_00501f84(r0, 1u, 0u, 1u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    goto L_5023a8;
L_502384:;
    S0_4 = S0_2 - S1_1;
    S2_1 = std::bit_cast<float>(*global_005023c4);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_4));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_00501f84(r0, 1u, 1u, 0u);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
L_5023a8:;
    r0_3 = *gptr<u32>(r0 + 0x71cu);  // (from the original)
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2;
    r0_4 = call_004b71c8(r0_3, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_2;
    return r0_4;
}

}  // namespace d_005022e0
GUEST_EXPORT(0x005022e0, d_005022e0::f_005022e0);

// f_005023c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005023c8 {

inline constexpr guest::Function<0x00501cc8, u32(u32, u32, u32, u32)> call_00501cc8;  // (from the original)
inline constexpr guest::Function<0x005024fc, u32(u32, u32, u32, u32)> call_005024fc;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_005023c8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r2_1 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    call_005024fc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = 0x95e1c0u;  // (from the original)
    r4 = 0u;
    do {
L_5023dc:;
        r0_1 = r5 + 0x28u;  // (from the original)
        r1_1 = *gptr<u32>(r6 + (r4 << 2));
        r0_2 = call_00568a80(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2 = r5 + (r4 << 2);
        *gptr<u32>(r2 + 0xe48u) = u32(r0_2);  // (from the original)
        r4 = r4 + 1u;
        res_1 = r4 - 8u;
        *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 8u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r1_2 = *gptr<u32>(r5 + 0xe48u);  // (from the original)
    r4_1 = r5 + 0xe48u;  // (from the original)
    r0_3 = r5 + 0xe68u;  // (from the original)
    call_005e2c98(r0_3, r1_2, 0u, guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r5 + 0xe4cu);  // (from the original)
    r0_4 = r5 + 0xf2cu;  // (from the original)
    call_005e2c98(r0_4, r1_3, 0u, guest::cpu()->r[3]);
    r1_4 = *gptr<u32>(r5 + 0xe50u);  // (from the original)
    r0_5 = r5 + 0xff0u;  // (from the original)
    call_005e2c98(r0_5, r1_4, 0u, guest::cpu()->r[3]);
    r1_5 = *gptr<u32>(r5 + 0xe54u);  // (from the original)
    r0_6 = r5 + 0x10b4u;  // (from the original)
    call_005e2c98(r0_6, r1_5, 0u, guest::cpu()->r[3]);
    r1_6 = *gptr<u32>(r5 + 0xe58u);  // (from the original)
    r0_7 = r5 + 0x1178u;  // (from the original)
    call_005e2c98(r0_7, r1_6, 0u, guest::cpu()->r[3]);
    r1_7 = *gptr<u32>(r5 + 0xe5cu);  // (from the original)
    r0_8 = r5 + 0x123cu;  // (from the original)
    call_005e2c98(r0_8, r1_7, 0u, guest::cpu()->r[3]);
    r1_8 = *gptr<u32>(r5 + 0xe60u);  // (from the original)
    r0_9 = r5 + 0x1300u;  // (from the original)
    call_005e2c98(r0_9, r1_8, 0u, guest::cpu()->r[3]);
    r1_9 = *gptr<u32>(r5 + 0xe64u);  // (from the original)
    r6_1 = r5 + 0xe64u;  // (from the original)
    r0_10 = r5 + 0x13c4u;  // (from the original)
    call_005e2c98(r0_10, r1_9, 0u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0xa6cu) = u32(*gptr<u32>(*gptr<u32>(r4_1) + 0x48u));  // (from the original)
    call_00501cc8(r5, 1u, r2_1, guest::cpu()->r[3]);
    r0_11 = *gptr<u32>(r4_1);
    *gptr<u8>(r0_11 + 0xb7u) = u8(u32(*gptr<u8>(r0_11 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_12 = *gptr<u32>(r6_1);
    r1_10 = u32(*gptr<u8>(r0_12 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0_12 + 0xb7u) = u8(r1_10);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    return r0_12;
}

}  // namespace d_005023c8
GUEST_EXPORT(0x005023c8, d_005023c8::f_005023c8);

// f_00504a34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00504a34 {

inline guest::global<u32, 0x0094f6c4> global_0094f6c4;  // (from the original)
inline constexpr guest::Function<0x00504c54, u32(u32, u32, u32, u32)> call_00504c54;  // (from the original)
inline constexpr guest::Function<0x00567f34, u32(u32, u32, u32, u32)> call_00567f34;  // (from the original)
inline constexpr guest::Function<0x00568a80, u32(u32, u32, u32, u32)> call_00568a80;  // (from the original)
inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_00504a34(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r7_1 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r8_1 = 0;
    u32 r0_12 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_12 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r4 = 0u;
    r6 = 0x95e1e0u;  // (from the original)
    do {
L_504a44:;
        r0_1 = r5 + 0x28u;  // (from the original)
        r1_1 = *gptr<u32>(r6 + (r4 << 2));
        r0_2 = call_00568a80(r0_1, r1_1, r2, guest::cpu()->r[3]);
        r2 = r5 + (r4 << 2);
        *gptr<u32>(r2 + 0xc10u) = u32(r0_2);  // (from the original)
        r4 = r4 + 1u;
        res_1 = r4 - 0xau;  // (from the original)
        *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xfeu);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 0xau) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r1_2 = *gptr<u32>(r5 + 0xc10u);  // (from the original)
    r0_3 = r5 + 0xc38u;  // (from the original)
    *gptr<u32>(r5 + 0x74cu) = u32(*gptr<u32>(r1_2 + 0x48u));  // (from the original)
    call_005e2c98(r0_3, r1_2, 0u, guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r5 + 0xc14u);  // (from the original)
    r0_4 = r5 + 0xcfcu;  // (from the original)
    call_005e2c98(r0_4, r1_3, 0u, guest::cpu()->r[3]);
    r1_4 = *gptr<u32>(r5 + 0xc18u);  // (from the original)
    r0_5 = r5 + 0xdc0u;  // (from the original)
    call_005e2c98(r0_5, r1_4, 0u, guest::cpu()->r[3]);
    r1_5 = *gptr<u32>(r5 + 0xc1cu);  // (from the original)
    r0_6 = r5 + 0xe84u;  // (from the original)
    call_005e2c98(r0_6, r1_5, 0u, guest::cpu()->r[3]);
    r1_6 = *gptr<u32>(r5 + 0xc20u);  // (from the original)
    r0_7 = r5 + 0xf48u;  // (from the original)
    call_005e2c98(r0_7, r1_6, 0u, guest::cpu()->r[3]);
    r1_7 = *gptr<u32>(r5 + 0xc24u);  // (from the original)
    r0_8 = r5 + 0x100cu;  // (from the original)
    call_005e2c98(r0_8, r1_7, 0u, guest::cpu()->r[3]);
    r1_8 = *gptr<u32>(r5 + 0xc28u);  // (from the original)
    r4_1 = r5 + 0xc28u;  // (from the original)
    r0_9 = r5 + 0x10d0u;  // (from the original)
    call_005e2c98(r0_9, r1_8, 0u, guest::cpu()->r[3]);
    r1_9 = *gptr<u32>(r5 + 0xc2cu);  // (from the original)
    r6_1 = r5 + 0xc2cu;  // (from the original)
    r0_10 = r5 + 0x1194u;  // (from the original)
    call_005e2c98(r0_10, r1_9, 0u, guest::cpu()->r[3]);
    r1_10 = *gptr<u32>(r5 + 0xc30u);  // (from the original)
    r7_1 = r5 + 0xc30u;  // (from the original)
    r0_11 = r5 + 0x1258u;  // (from the original)
    call_005e2c98(r0_11, r1_10, 0u, guest::cpu()->r[3]);
    r1_11 = *gptr<u32>(r5 + 0xc34u);  // (from the original)
    r8_1 = r5 + 0xc34u;  // (from the original)
    r0_12 = r5 + 0x131cu;  // (from the original)
    call_005e2c98(r0_12, r1_11, 0u, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0x750u) = u32(*global_0094f6c4 + 0x434u);  // (from the original)
    call_00504c54(r5, 1u, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_13 = *gptr<u32>(r4_1);
    *gptr<u8>(r0_13 + 0xb7u) = u8(u32(*gptr<u8>(r0_13 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_14 = *gptr<u32>(r6_1);
    *gptr<u8>(r0_14 + 0xb7u) = u8(u32(*gptr<u8>(r0_14 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_15 = *gptr<u32>(r7_1);
    *gptr<u8>(r0_15 + 0xb7u) = u8(u32(*gptr<u8>(r0_15 + 0xb7u)) & 0xfeu | 1u);  // (from the original)
    r0_16 = *gptr<u32>(r8_1);
    r1_12 = u32(*gptr<u8>(r0_16 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0_16 + 0xb7u) = u8(r1_12);  // (from the original)
    r0_17 = r5 + 0x400u;  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    r0_18 = r0_17 + 0x2f8u;  // (from the original)
    return call_00567f34(r0_18, r1_12, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00504a34
GUEST_EXPORT(0x00504a34, d_00504a34::f_00504a34);

// f_00504c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00504c54 {

inline guest::global<u32, 0x00504ec0> global_00504ec0;  // (from the original)
inline constexpr guest::Function<0x00118b71, u32(u32, u32, u32, u32)> call_00118b70;  // (from the original)
inline constexpr guest::Function<0x001ae738, u32(u32, u32, u32, u32)> call_001ae738;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x0070b1a4, u32(u32, u32, u32, u32)> call_0070b1a4;  // (from the original)

u32 f_00504c54(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    u32 res_2 = 0;
    float S1_2 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_2 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_5 = 0;
    u32 r0_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    float S2_8 = 0;
    u32 r0_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    float S0_10 = 0;
    float S1_10 = 0;
    float S2_9 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    float S0_11 = 0;
    float S1_11 = 0;
    float S2_10 = 0;
    u32 r0_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    float S0_12 = 0;
    float S1_12 = 0;
    float S2_11 = 0;
    u32 r0_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    float S0_13 = 0;
    float S1_13 = 0;
    float S2_12 = 0;
    u32 r0_13 = 0;
    u32 r1_8 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    float S0_14 = 0;
    float S1_14 = 0;
    float S2_13 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    float S0_15 = 0;
    float S1_15 = 0;
    float S2_14 = 0;
    u32 r0_14 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    float S0_16 = 0;
    float S1_16 = 0;
    float S2_15 = 0;
    u32 r0_15 = 0;
    u32 r1_9 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    float S0_17 = 0;
    float S1_17 = 0;
    float S2_16 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    float S0_18 = 0;
    float S1_18 = 0;
    float S2_17 = 0;
    u32 r0_16 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    float S0_19 = 0;
    float S1_19 = 0;
    float S2_18 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    float S0_20 = 0;
    float S1_20 = 0;
    float S2_19 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    float S0_21 = 0;
    float S1_21 = 0;
    float S2_20 = 0;
    u32 r0_18 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    float S0_22 = 0;
    float S1_22 = 0;
    float S2_21 = 0;
    u32 r0_19 = 0;
    u32 r1_11 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    float S0_23 = 0;
    float S1_23 = 0;
    float S2_22 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    float S0_24 = 0;
    float S1_24 = 0;
    float S2_23 = 0;
    u32 r0_20 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    float S0_25 = 0;
    float S1_25 = 0;
    float S2_24 = 0;
    u32 r0_21 = 0;
    u32 r1_12 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    float S0_26 = 0;
    float S1_26 = 0;
    float S2_25 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    float S0_27 = 0;
    float S1_27 = 0;
    float S2_26 = 0;
    u32 r0_22 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    float S0_28 = 0;
    float S1_28 = 0;
    float S2_27 = 0;
    u32 r0_23 = 0;
    u32 r1_13 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    float S0_29 = 0;
    float S1_29 = 0;
    float S2_28 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    float S0_30 = 0;
    float S1_30 = 0;
    float S2_29 = 0;
    u32 r0_24 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    float S0_31 = 0;
    float S1_31 = 0;
    float S2_30 = 0;
    u32 r0_25 = 0;
    u32 r1_14 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    float S0_32 = 0;
    float S1_32 = 0;
    float S2_31 = 0;
    u32 r1_15 = 0;
    float S0_33 = 0;
    u32 res_3 = 0;
    float S1_33 = 0;
    u32 r1_16 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    r0_2 = r0_1 + 0x6e238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_3 = call_00118b70(r0_2, r1_1, r2_1, r3_1);
    S2 = guest::cpu()->s[2];
    res_1 = r0_3 - 0xfu;  // (from the original)
    r2 = r0_3;
    if (res_1 >> 0x1f == ((r0_3 ^ 0xfu) & (r0_3 ^ res_1)) >> 0x1f) {  // (from the original)
        r2 = 0xeu;  // (from the original)
    }
    r0 = 0u;
    r5 = r4 + 0x400u;  // (from the original)
    do {
L_504c88:;
        r1_2 = r4 + (r0 << 2);
        S0_2 = std::bit_cast<float>(*gptr<u32>(r5 + 0x34cu));  // (from the original)
        r0 = r0 + 1u;
        res_2 = r0 - 6u;
        S1_2 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r1_2 + 0xc10u) + 0x4cu));  // (from the original)
        r1_3 = *gptr<u32>(r1_2 + 0xc10u) + 0x48u;  // (from the original)
        *gptr<u32>(r1_3) = u32(std::bit_cast<u32>(S0_2));
        *gptr<u32>(r1_3 + 4) = u32(std::bit_cast<u32>(S1_2));
        guest::preempt();
    } while (res_2 >> 0x1f != ((r0 ^ 6u) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
    *gptr<u32>(r13) = u32(r2 + 1u);
    *gptr<u32>(r13 + 4) = u32(r6);
    r3_2 = r2 + 1u;
    r0_4 = r4 + 0x754u;  // (from the original)
    r1_4 = *gptr<u32>(r4 + 0x750u);  // (from the original)
    r2_2 = r4 + 0xc10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2;
    call_001ae738(r0_4, r1_4, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    r0_5 = call_0070b1a4(r0_4, 0u, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    r0_6 = r4 + 0xc38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    call_005e2e50(r0_6, r0_5, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_4;
    call_005e2f94(r0_6, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_5;
    r0_7 = call_0070b1a4(r0_4, 1u, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    r0_8 = r4 + 0xcfcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_6;
    call_005e2e50(r0_8, r0_7, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_7;
    call_005e2f94(r0_8, r1_6, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    guest::cpu()->s[1] = S1_9;
    guest::cpu()->s[2] = S2_8;
    r0_9 = call_0070b1a4(r0_4, 2u, r2_9, r3_9);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_10 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    r0_10 = r4 + 0xdc0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_10;
    guest::cpu()->s[2] = S2_9;
    call_005e2e50(r0_10, r0_9, r2_10, r3_10);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    r0_11 = r4 + 0xdc0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_11;
    guest::cpu()->s[2] = S2_10;
    call_005e2f94(r0_11, r1_7, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_12 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_12;
    guest::cpu()->s[2] = S2_11;
    r0_12 = call_0070b1a4(r0_4, 3u, r2_12, r3_12);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_13 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    r0_13 = r4 + 0xe84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_13;
    guest::cpu()->s[2] = S2_12;
    call_005e2e50(r0_13, r0_12, r2_13, r3_13);
    r1_8 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    S0_14 = guest::cpu()->s[0];
    S1_14 = guest::cpu()->s[1];
    S2_13 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_14;
    guest::cpu()->s[1] = S1_14;
    guest::cpu()->s[2] = S2_13;
    call_005e2f94(r0_13, r1_8, r2_14, r3_14);
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    S0_15 = guest::cpu()->s[0];
    S1_15 = guest::cpu()->s[1];
    S2_14 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_15;
    guest::cpu()->s[1] = S1_15;
    guest::cpu()->s[2] = S2_14;
    r0_14 = call_0070b1a4(r0_4, 4u, r2_15, r3_15);
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    S0_16 = guest::cpu()->s[0];
    S1_16 = guest::cpu()->s[1];
    S2_15 = guest::cpu()->s[2];
    r0_15 = r4 + 0xf48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_16;
    guest::cpu()->s[1] = S1_16;
    guest::cpu()->s[2] = S2_15;
    call_005e2e50(r0_15, r0_14, r2_16, r3_16);
    r1_9 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    S0_17 = guest::cpu()->s[0];
    S1_17 = guest::cpu()->s[1];
    S2_16 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_17;
    guest::cpu()->s[1] = S1_17;
    guest::cpu()->s[2] = S2_16;
    call_005e2f94(r0_15, r1_9, r2_17, r3_17);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    S0_18 = guest::cpu()->s[0];
    S1_18 = guest::cpu()->s[1];
    S2_17 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_18;
    guest::cpu()->s[1] = S1_18;
    guest::cpu()->s[2] = S2_17;
    r0_16 = call_0070b1a4(r0_4, 5u, r2_18, r3_18);
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    S0_19 = guest::cpu()->s[0];
    S1_19 = guest::cpu()->s[1];
    S2_18 = guest::cpu()->s[2];
    r0_17 = r4 + 0x100cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_19;
    guest::cpu()->s[1] = S1_19;
    guest::cpu()->s[2] = S2_18;
    call_005e2e50(r0_17, r0_16, r2_19, r3_19);
    r1_10 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    S0_20 = guest::cpu()->s[0];
    S1_20 = guest::cpu()->s[1];
    S2_19 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_20;
    guest::cpu()->s[1] = S1_20;
    guest::cpu()->s[2] = S2_19;
    call_005e2f94(r0_17, r1_10, r2_20, r3_20);
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    S0_21 = guest::cpu()->s[0];
    S1_21 = guest::cpu()->s[1];
    S2_20 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_21;
    guest::cpu()->s[1] = S1_21;
    guest::cpu()->s[2] = S2_20;
    r0_18 = call_0070b1a4(r0_4, 6u, r2_21, r3_21);
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    S0_22 = guest::cpu()->s[0];
    S1_22 = guest::cpu()->s[1];
    S2_21 = guest::cpu()->s[2];
    r0_19 = r4 + 0x10d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_22;
    guest::cpu()->s[1] = S1_22;
    guest::cpu()->s[2] = S2_21;
    call_005e2e50(r0_19, r0_18, r2_22, r3_22);
    r1_11 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    S0_23 = guest::cpu()->s[0];
    S1_23 = guest::cpu()->s[1];
    S2_22 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_23;
    guest::cpu()->s[1] = S1_23;
    guest::cpu()->s[2] = S2_22;
    call_005e2f94(r0_19, r1_11, r2_23, r3_23);
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    S0_24 = guest::cpu()->s[0];
    S1_24 = guest::cpu()->s[1];
    S2_23 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_24;
    guest::cpu()->s[1] = S1_24;
    guest::cpu()->s[2] = S2_23;
    r0_20 = call_0070b1a4(r0_4, 7u, r2_24, r3_24);
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    S0_25 = guest::cpu()->s[0];
    S1_25 = guest::cpu()->s[1];
    S2_24 = guest::cpu()->s[2];
    r0_21 = r4 + 0x1194u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_25;
    guest::cpu()->s[1] = S1_25;
    guest::cpu()->s[2] = S2_24;
    call_005e2e50(r0_21, r0_20, r2_25, r3_25);
    r1_12 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    S0_26 = guest::cpu()->s[0];
    S1_26 = guest::cpu()->s[1];
    S2_25 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_26;
    guest::cpu()->s[1] = S1_26;
    guest::cpu()->s[2] = S2_25;
    call_005e2f94(r0_21, r1_12, r2_26, r3_26);
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    S0_27 = guest::cpu()->s[0];
    S1_27 = guest::cpu()->s[1];
    S2_26 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_27;
    guest::cpu()->s[1] = S1_27;
    guest::cpu()->s[2] = S2_26;
    r0_22 = call_0070b1a4(r0_4, 8u, r2_27, r3_27);
    r2_28 = guest::cpu()->r[2];
    r3_28 = guest::cpu()->r[3];
    S0_28 = guest::cpu()->s[0];
    S1_28 = guest::cpu()->s[1];
    S2_27 = guest::cpu()->s[2];
    r0_23 = r4 + 0x1258u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_28;
    guest::cpu()->s[1] = S1_28;
    guest::cpu()->s[2] = S2_27;
    call_005e2e50(r0_23, r0_22, r2_28, r3_28);
    r1_13 = guest::cpu()->r[1];
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    S0_29 = guest::cpu()->s[0];
    S1_29 = guest::cpu()->s[1];
    S2_28 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_29;
    guest::cpu()->s[1] = S1_29;
    guest::cpu()->s[2] = S2_28;
    call_005e2f94(r0_23, r1_13, r2_29, r3_29);
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    S0_30 = guest::cpu()->s[0];
    S1_30 = guest::cpu()->s[1];
    S2_29 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_30;
    guest::cpu()->s[1] = S1_30;
    guest::cpu()->s[2] = S2_29;
    r0_24 = call_0070b1a4(r0_4, 9u, r2_30, r3_30);
    r2_31 = guest::cpu()->r[2];
    r3_31 = guest::cpu()->r[3];
    S0_31 = guest::cpu()->s[0];
    S1_31 = guest::cpu()->s[1];
    S2_30 = guest::cpu()->s[2];
    r0_25 = r4 + 0x131cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_31;
    guest::cpu()->s[1] = S1_31;
    guest::cpu()->s[2] = S2_30;
    call_005e2e50(r0_25, r0_24, r2_31, r3_31);
    r1_14 = guest::cpu()->r[1];
    r2_32 = guest::cpu()->r[2];
    r3_32 = guest::cpu()->r[3];
    S0_32 = guest::cpu()->s[0];
    S1_32 = guest::cpu()->s[1];
    S2_31 = guest::cpu()->s[2];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_32;
    guest::cpu()->s[1] = S1_32;
    guest::cpu()->s[2] = S2_31;
    call_005e2f94(r0_25, r1_14, r2_32, r3_32);
    S2 = std::bit_cast<float>(*global_00504ec0);
    r0 = 0u;
    do {
L_504e8c:;
        r1_15 = r4 + (r0 << 2);
        r0 = r0 + 1u;
        S0_33 = std::bit_cast<float>(*gptr<u32>(r5 + 0x34cu)) + S2;  // (from the original)
        res_3 = r0 - 6u;
        S1_33 = std::bit_cast<float>(*gptr<u32>(*gptr<u32>(r1_15 + 0xc10u) + 0x4cu));  // (from the original)
        r1_16 = *gptr<u32>(r1_15 + 0xc10u) + 0x48u;  // (from the original)
        *gptr<u32>(r1_16) = u32(std::bit_cast<u32>(S0_33));
        *gptr<u32>(r1_16 + 4) = u32(std::bit_cast<u32>(S1_33));
        guest::preempt();
    } while (res_3 >> 0x1f != ((r0 ^ 6u) & (r0 ^ res_3)) >> 0x1f);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_33;
    guest::cpu()->s[1] = S1_33;
    return r0;
}

}  // namespace d_00504c54
GUEST_EXPORT(0x00504c54, d_00504c54::f_00504c54);

// f_005075a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005075a0 {

inline constexpr guest::Function<0x0050bcb4, u32(u32, u32, u32, u32)> call_0050bcb4;  // (from the original)

u32 f_005075a0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0050bcb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x903304u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x903304u;  // (from the original)
    return r0_1;
}

}  // namespace d_005075a0
GUEST_EXPORT(0x005075a0, d_005075a0::f_005075a0);

// f_005075cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005075cc {

inline constexpr guest::Function<0x0050bdc8, u32(u32, u32, u32, u32)> call_0050bdc8;  // (from the original)

u32 f_005075cc() {
    return call_0050bdc8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005075cc
GUEST_EXPORT(0x005075cc, d_005075cc::f_005075cc);

// f_00508fc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00508fc8 {

struct __attribute__((packed)) Object_00508fc8_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
};
GUEST_OFFSET(Object_00508fc8_0, word_4c, 0x4c);  // (from the original)

inline constexpr guest::Function<0x004b4fc8, u32(u32, u32, u32, u32)> call_004b4fc8;  // (from the original)

u32 f_00508fc8(gptr<Object_00508fc8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0_1 = arg0->word_4c;
    r4 = r2;
    r0_2 = call_004b4fc8(r0_1, r1, r2, r3);
    r2 = r0_2 + 0xcu;  // (from the original)
    r0 = *gptr<u32>(r0_2 + 0x10u);  // (from the original)
    r1_1 = r2 + 4u;
    if (r0 == r1_1) {
        goto L_509024;
    }
    do {
L_508ff0:;
        r1_2 = *gptr<u32>(r0 + 8u);
        r3_1 = u32(*gptr<u8>(r1_2 + 0xb7u));  // (from the original)
        res_1 = r3_1 & 1u;
        r12_1 = res_1;
        if (res_1 != 0) {
            r12_1 = 1u;
        }
        if (!(r12_1 == r4)) {
            *gptr<u8>(r1_2 + 0xb7u) = u8(r3_1 & 0xfeu | r4);  // (from the original)
        }
        r0 = *gptr<u32>(r0);
        r1_1 = r2 + 4u;
        guest::preempt();
    } while (r0 != r1_1);
L_509024:;
    *gptr<u32>(r5 + 0x184u) = u32(2u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 2u;
}

}  // namespace d_00508fc8
GUEST_EXPORT(0x00508fc8, d_00508fc8::f_00508fc8);

// f_005091fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005091fc {

struct __attribute__((packed)) Object_005091fc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_005091fc_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x004b4a84, u32(u32, u32, u32, u32)> call_004b4a84;  // (from the original)
inline constexpr guest::Function<0x004b4b2c, u32(u32, u32, u32, u32)> call_004b4b2c;  // (from the original)
inline constexpr guest::Function<0x004b4fc8, u32(u32, u32, u32, u32)> call_004b4fc8;  // (from the original)
inline constexpr guest::Function<0x0050c800, u32(u32, u32, u32, u32)> call_0050c800;  // (from the original)
inline constexpr guest::Function<0x00567f20, u32(u32, u32, u32, u32)> call_00567f20;  // (from the original)
inline constexpr guest::Function<0x00568b38, u32(u32, u32, u32, u32)> call_00568b38;  // (from the original)
inline constexpr guest::Function<0x0073be3c, u32(u32, u32, u32, u32)> call_0073be3c;  // (from the original)

u32 f_005091fc(gptr<Object_005091fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r2_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3_6 = 0;
    u32 r2_5 = 0;
    u32 r1_4 = 0;
    r6_1 = r2;
    r5_1 = 0u;
    r0_1 = arg0->word_20;
    r13 = r13 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00567f20(r0_1, r5_1, r1, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_5092b8;
    }
    if (r6_1 == 0) {
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        call_004b4b2c(r0_3, r1_1, r2_1, r3_1);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_004b4a84(r0_4, r0_2, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_5 = r13;
        guest::cpu()->r[13] = r13;
        r0_6 = call_0073be3c(r0_5, r1_2, r2_3, r3_3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r6_1 = r0_6;
    }
    r0_7 = *gptr<u32>(r0 + 0x4cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_004b4fc8(r0_7, r6_1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_5092b8;
    }
    r2_4 = *gptr<u32>(*gptr<u32>(r0 + 0x20u) + 4u);  // (from the original)
    r0_9 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00568b38(r0_9, r0_2, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_3 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fd108(0x3cu, r1_3, 4u, r3_5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0050c800(r0_11, r0_10, r0_8, 0u);
    r5_1 = r0_12;
    r3_6 = r0 + 0x14u;  // (from the original)
    r2_5 = r0_12 + 0x20u;  // (from the original)
    r1_4 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013e7d8(r3_6, r1_4, r2_5, r3_6);
    r1_1 = guest::cpu()->r[1];
L_5092b8:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r5_1;
}

}  // namespace d_005091fc
GUEST_EXPORT(0x005091fc, d_005091fc::f_005091fc);

// f_005095dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005095dc {

struct __attribute__((packed)) Object_005095dc_0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_005095dc_0, word_24, 0x24);  // (from the original)

inline guest::global<u8, 0x0095e0cd> global_0095e0cd;  // (from the original)
inline guest::global<u32, 0x00ad6604> global_00ad6604;  // (from the original)
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x005092c4, u32(u32, u32, u32, u32)> call_005092c4;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;  // (from the original)

u32 f_005095dc(gptr<Object_005095dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r1_1 = arg0->word_24;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0xcu, r1_1, 4u, r3);  // (from the original)
    *gptr<u32>(r0_1) = u32(0u);
    r1_2 = r0_1 + 4u;
    *gptr<u32>(r0_1 + 4u) = u32(r1_2);
    *gptr<u32>(r0_1 + 8u) = u32(r1_2);
    *gptr<u32>(r4 + 0x20u) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x174u) = u32(r0_1);  // (from the original)
    r0_2 = r4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00569184(r0_2, r2, r1, r3);
    r3 = guest::cpu()->r[3];
    r1 = *global_00ad6604;
    if (r1 == 0xad6604u) {  // (from the original)
        goto L_50966c;
    } else {
        r2 = *gptr<u32>(r4 + 0x180u);  // (from the original)
    }
    do {
L_509644:;
        if (!(s32(r2) <= s32(*gptr<u32>(r1 + 0x17cu)))) {  // (from the original)
            r0_3 = 0xad6600u;  // (from the original)
            r2_1 = r4 + 4u;
            goto L_509678;
        }
        r1 = *gptr<u32>(r1);
        guest::preempt();
    } while (r1 != 0xad6604u);  // (from the original)
L_50966c:;
    r0_3 = 0xad6600u;  // (from the original)
    r2_1 = r4 + 4u;
    r1 = r0_3 + 4u;
L_509678:;
    guest::cpu()->r[13] = r13;
    call_0013e7d8(r0_3, r1, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (u32(*global_0095e0cd) != 0) {
        r1_4 = *gptr<u32>(r4 + 0x48u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005092c4(r4, r1_4, 0xad660cu, r3_1);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    r0_4 = r4 + 0x28u;  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_00568c10(r0_4, r1_3, r2_2, r3_1);
}

}  // namespace d_005095dc
GUEST_EXPORT(0x005095dc, d_005095dc::f_005095dc);

// f_00509c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00509c54 {

struct __attribute__((packed)) Object_00509c54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_00509c54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00509c54_0, word_24, 0x24);  // (from the original)

inline guest::global<u32, 0x00509d10> global_00509d10;  // (from the original)
inline constexpr guest::Function<0x0012c984, u32(u32, u32, u32, u32)> call_0012c984;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_00509c54(gptr<Object_00509c54_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r2_1 = r0 + 0x18u;  // (from the original)
    arg0->word_0 = u32(0x90349cu);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_18 = u32(r2_1);
    arg0->word_14 = u32(0u);
    ea_1 = r0 + 0x1cu;  // (from the original)
    arg0->word_1c = u32(r2_1);
    ea_2 = ea_1 + 4u;
    arg0->word_20 = u32(0u);
    ea_3 = ea_2 + 4u;
    arg0->word_24 = u32(r3);
    r0_1 = ea_3 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_2 = call_0012c984(r0_1, 0x90349cu, r2_1, r3);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_2 - 0x28u;  // (from the original)
    ea_4 = r4_1 + 0x174u;  // (from the original)
    *gptr<u32>(ea_4) = u32(0u);
    ea_5 = r4_1 + 0x178u;  // (from the original)
    *gptr<u32>(ea_5) = u32(0u);
    ea_6 = r4_1 + 0x17cu;  // (from the original)
    *gptr<u32>(ea_6) = u32(r1);
    *gptr<u32>(ea_6 + 4) = u32(r2);
    *gptr<u32>(ea_6 + 8) = u32(0u);
    *gptr<u8>(r4_1 + 0x188u) = u8(1u);  // (from the original)
    *gptr<u8>(r4_1 + 0x189u) = u8(0u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_00509d10);
    *gptr<u8>(r4_1 + 0x18au) = u8(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x19cu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1a0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    r1_1 = r4_1 + 0x1a8u;  // (from the original)
    *gptr<u32>(r4_1 + 0x1a8u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r4_1 + 0x1a4u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1acu) = u32(r1_1);  // (from the original)
    r0_3 = *gptr<u32>(r4_1 + 0x24u);  // (from the original)
    if (r0_3 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        r0_4 = call_00569d50(r0_3, r1_1, r2_2, r3_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        *gptr<u32>(r4_1 + 0x24u) = u32(*gptr<u32>(r0_4 + 4u));  // (from the original)
    }
    *gptr<u32>(r4_1 + 0x18bu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x18fu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x193u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x197u) = u32(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x19bu) = u8(0u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r4_1;
}

}  // namespace d_00509c54
GUEST_EXPORT(0x00509c54, d_00509c54::f_00509c54);

// f_0050a710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050a710 {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)
inline constexpr guest::Function<0x0050a5ac, u32(u32, u32, u32, u32)> call_0050a5ac;  // (from the original)
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32, u32)> call_00522074;  // (from the original)

u32 f_0050a710(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_0095e0fc;
    r1_1 = *gptr<u32>(r0_1 + 0x14u);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 4u);
    }
    r0_2 = call_00522074(r0_1, r1_1, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = r0_2;
    r0_3 = call_0050a5ac(r0, r1_2, r2_1, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r4_1 = r4_1 - 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r4_1;
}

}  // namespace d_0050a710
GUEST_EXPORT(0x0050a710, d_0050a710::f_0050a710);

// f_0050bcb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050bcb4 {

inline guest::global<u32, 0x0050bda8> global_0050bda8;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00509c54, u32(u32, u32, u32, u32)> call_00509c54;  // (from the original)
inline constexpr guest::Function<0x007e8be8, u32(u32, u32, u32, u32)> call_007e8be8;  // (from the original)

u32 f_0050bcb4(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    float S0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    float S0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_00509c54(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_0050bda8);
    *gptr<u32>(r0_1) = u32(0x9034ccu);  // (from the original)
    *gptr<u32>(r0_1 + 0x1b0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1b4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1b8u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1bcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1c0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1c4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x1c8u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x20cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x210u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x618u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x620u) = u32(r1);  // (from the original)
    *gptr<u32>(r0_1 + 0x61cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x624u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x625u) = u8(0u);  // (from the original)
    r0_2 = r0_1 + 0x628u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_007e8be8(r0_2, 0x9034ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    S0_2 = guest::cpu()->s[0];
    r4_1 = r0_3 - 0x628u;  // (from the original)
    *gptr<u32>(r0_3 + 0x64u) = u32(0x9033c4u);  // (from the original)
    *gptr<u32>(r0_3 + 0xa8u) = u32(~0u);  // (from the original)
    *gptr<u32>(r0_3 + 0xccu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x45cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x458u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x454u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x450u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x44cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x448u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x444u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x440u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_3 - 0x43cu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1f0u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1f4u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1f8u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x1fcu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x200u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x204u) = u32(0u);  // (from the original)
    r0_4 = r4_1 + 0x214u;  // (from the original)
    *gptr<u32>(r4_1 + 0x208u) = u32(0u);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_002f825c(r0_4, 0x402u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    *gptr<u32>(r4_1 + 0x6d4u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6d8u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6dcu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6e0u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6e4u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6e8u) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6ecu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 0x6f0u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_3;
    return r4_1;
}

}  // namespace d_0050bcb4
GUEST_EXPORT(0x0050bcb4, d_0050bcb4::f_0050bcb4);

// f_0050c800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050c800 {

struct __attribute__((packed)) Object_0050c800_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 unknown_1f[0x1];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u8 byte_38;
};
GUEST_OFFSET(Object_0050c800_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0050c800_0, byte_38, 0x38);  // (from the original)

inline guest::global<u32, 0x0050c86c> global_0050c86c;  // (from the original)
inline guest::global<u32, 0x0050c870> global_0050c870;  // (from the original)
inline constexpr guest::Function<0x0050c424, u32(u32, u32, u32, u32)> call_0050c424;  // (from the original)

u32 f_0050c800(gptr<Object_0050c800_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    S0_1 = std::bit_cast<float>(*global_0050c86c);
    S1_1 = std::bit_cast<float>(*global_0050c870);
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S1_1));
    arg0->word_c = u32(std::bit_cast<u32>(S1_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->byte_1c = u8(0u);
    arg0->byte_1d = u8(0u);
    arg0->byte_1e = u8(0u);
    arg0->word_20 = u32(0u);
    arg0->word_0 = u32(0x90357cu);  // (from the original)
    arg0->word_24 = u32(0u);
    arg0->word_30 = u32(0u);
    arg0->word_34 = u32(0u);
    arg0->word_28 = u32(r1);
    arg0->word_2c = u32(r2);
    arg0->byte_38 = u8(r3);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_0050c424(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0;
}

}  // namespace d_0050c800
GUEST_EXPORT(0x0050c800, d_0050c800::f_0050c800);

// f_0050c9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050c9a4 {

struct __attribute__((packed)) Object_0050c9a4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x2];  // (not used here)
    u16 half_26;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_0050c9a4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0050c9a4_0, word_30, 0x30);  // (from the original)


void f_0050c9a4(gptr<Object_0050c9a4_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->half_26 = u16(~0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->word_30 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0050c9a4
GUEST_EXPORT(0x0050c9a4, d_0050c9a4::f_0050c9a4);

// f_0050ca3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ca3c {

struct __attribute__((packed)) Object_0050ca3c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x2];  // (not used here)
    u16 half_26;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_0050ca3c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, half_26, 0x26);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0050ca3c_0, word_30, 0x30);  // (from the original)


void f_0050ca3c(gptr<Object_0050ca3c_0> arg0) {
    arg0->half_26 = u16(~0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    arg0->word_30 = u32(0u);
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0050ca3c
GUEST_EXPORT(0x0050ca3c, d_0050ca3c::f_0050ca3c);

// f_0050cae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cae0 {

struct __attribute__((packed)) Object_0050cae0_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u16 half_14;
};
GUEST_OFFSET(Object_0050cae0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0050cae0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0050cae0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0050cae0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0050cae0_0, half_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0050cae0(gptr<Object_0050cae0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_10 = u32(0u);
    r2_1 = ~0u;
    arg0->word_0 = u32(0x9035dcu);  // (from the original)
    arg0->half_14 = u16(r2_1);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    r0_1 = r0 + 0x16u;  // (from the original)
    call_00301444(r0_1, 0x24u, r2_1, 0x9035dcu);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0050cae0
GUEST_EXPORT(0x0050cae0, d_0050cae0::f_0050cae0);

// f_0050cb9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cb9c {

struct __attribute__((packed)) Object_0050cb9c_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
};
GUEST_OFFSET(Object_0050cb9c_0, word_190, 0x190);  // (from the original)


void f_0050cb9c(gptr<Object_0050cb9c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->word_190;
    if (r2_1 >= 0x64u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    *gptr<u32>(r0 + (r2_1 << 2)) = u32(r1);
    r1_1 = arg0->word_190 + 1u;
    arg0->word_190 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0050cb9c
GUEST_EXPORT(0x0050cb9c, d_0050cb9c::f_0050cb9c);

// f_0050cc2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc2c {

struct __attribute__((packed)) Object_0050cc2c_0 {
    u8 unknown_0[0x190];  // (not used here)
    u32 word_190;
    u32 word_194;
};
GUEST_OFFSET(Object_0050cc2c_0, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Object_0050cc2c_0, word_194, 0x194);  // (from the original)


void f_0050cc2c(gptr<Object_0050cc2c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r3_1 = 0;
    r1 = 0u;
    arg0->word_190 = u32(r1);
    r3 = r1;
    r2 = r1;
    arg0->word_194 = u32(r1);
    do {
L_50cc40:;
        *gptr<u32>(r0 + (r3 << 2)) = u32(r1);
        r3_1 = r3 + 1u;
        r2 = r2 + 2u;
        *gptr<u32>(r0 + (r3_1 << 2)) = u32(r1);
        r3 = r3_1 + 1u;
        guest::preempt();
    } while (r2 < 0x64u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0050cc2c
GUEST_EXPORT(0x0050cc2c, d_0050cc2c::f_0050cc2c);

// f_0050cc60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc60 {

inline guest::global<u32, 0x0095366c> global_0095366c;  // (from the original)

u32 f_0050cc60() {
    u32 r0_1 = 0;
    r0_1 = *global_0095366c;
    if (s32(r0_1) > s32(5u)) {
        r0_1 = 5u;
    }
    return r0_1;
}

}  // namespace d_0050cc60
GUEST_EXPORT(0x0050cc60, d_0050cc60::f_0050cc60);

// f_0050cc78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cc78 {

inline guest::global<u32, 0x00953670> global_00953670;  // (from the original)

u32 f_0050cc78() {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    r0_1 = *global_00953670;
    zf_1 = r0_1 == 2u;
    if (!zf_1) {
        zf_1 = r0_1 == 1u;
    }
    if (zf_1) {
        return r0_1;
    } else {
    }
    return 0u;
}

}  // namespace d_0050cc78
GUEST_EXPORT(0x0050cc78, d_0050cc78::f_0050cc78);

// f_0050cd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cd1c {

inline guest::global<u32, 0x009535e0> global_009535e0;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x003452f0, u32(u32, u32, u32, u32)> call_003452f0;  // (from the original)
inline constexpr guest::Function<0x00345820, u32(u32, u32, u32, u32)> call_00345820;  // (from the original)

u32 f_0050cd1c(u32 r0_unused, u32 r1) {
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = *global_009535e0;
    call_00135748(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    res_1 = u32(*gptr<u8>(r4_1 + 0x10u)) - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r4_1 + 0x10u) = u8(res_1);  // (from the original)
    if (res_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_001357ec(r4_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = call_003452f0(res_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    call_00345820(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r4_1 + 0x11u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001357ec(r4_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0050cd1c
GUEST_EXPORT(0x0050cd1c, d_0050cd1c::f_0050cd1c);

// f_0050cd64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050cd64 {

inline guest::global<u32, 0x009535e0> global_009535e0;  // (from the original)
inline constexpr guest::Function<0x00127cf8, u32(u32, u32, u32, u32)> call_00127cf8;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)

u32 f_0050cd64(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r0_1 = *global_009535e0;
    if (r0_1 != 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_001391d8(0x14u, r1, guest::cpu()->r[2], r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r4_1 = 0u;
        goto L_50cdd8;
    }
    r4_1 = r0_1;
    *gptr<u32>(r0_1) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0012f154(r0_1, r1, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r4_1 + 0xcu) = u32(0u);  // (from the original)
    r5_1 = r4_1 + 0xcu;  // (from the original)
    r0_2 = r13;
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00127cf8(r0_2, 0u, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    res_1 = r0_1 >> 0x1f;  // (from the original)
    if (res_1 == 0) {
        r0_1 = 0u;
        *gptr<u32>(r5_1) = u32(*gptr<u32>(r13));
    }
    res_2 = r0_1 >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_0012f204(r0_1, r1, guest::cpu()->r[2], r3_3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r4_1 + 0x10u) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x11u) = u8(0u);  // (from the original)
L_50cdd8:;
    *global_009535e0 = u32(r4_1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050cd64
GUEST_EXPORT(0x0050cd64, d_0050cd64::f_0050cd64);

// f_0050ce40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ce40 {

inline constexpr guest::Function<0x00344eb8, u32(u32, u32, u32, u32)> call_00344eb8;  // (from the original)
inline constexpr guest::Function<0x00345030, u32(u32, u32, u32, u32)> call_00345030;  // (from the original)
inline constexpr guest::Function<0x0034512c, u32(u32, u32, u32, u32)> call_0034512c;  // (from the original)
inline constexpr guest::Function<0x00345180, u32(u32, u32, u32, u32)> call_00345180;  // (from the original)
inline constexpr guest::Function<0x00345278, u32(u32, u32, u32, u32)> call_00345278;  // (from the original)
inline constexpr guest::Function<0x003452f0, u32(u32, u32, u32, u32)> call_003452f0;  // (from the original)
inline constexpr guest::Function<0x003457e8, u32(u32, u32, u32, u32)> call_003457e8;  // (from the original)
inline constexpr guest::Function<0x00345820, u32(u32, u32, u32, u32)> call_00345820;  // (from the original)

u32 f_0050ce40(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
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
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 zf_6 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    r13 = r13 - 0x218u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00344eb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    res_1 = r0_1 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        if (r0 != 0) {
            *gptr<u32>(r0) = u32(0u);
        }
        r13 = r13 + 0x218u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    if (r1 != 0) {
        guest::cpu()->r[13] = r13;
        call_00345278(r1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0034512c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003457e8(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_5 = r0_4 & 0x80000000u;  // (from the original)
    if (r0_5 >> 0x1f == (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x218u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_6 = r13 + 0x200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00345030(r0_6, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_7 = r13 + 0x204u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00345180(r0_7, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r0) = u32(*gptr<u32>(r13 + 0x200u));  // (from the original)
    }
    r0_8 = 0xc8809ffau;  // (from the original)
    zf_1 = r0_4 == r0_8;
    if (!zf_1) {
        r0_8 = 0xc9209ffbu;  // (from the original)
        zf_1 = r0_4 == r0_8;
    }
    if (!zf_1) {
        r0_8 = 0xe0a09ffcu;  // (from the original)
        zf_1 = r0_4 == r0_8;
    }
    if (zf_1) {
        goto L_50cf68;
    }
    r0_8 = 0xc9209f84u;  // (from the original)
    if (r0_4 == r0_8) {
        if (r0 != 0) {
            r0_8 = 0x76bfu;  // (from the original)
            *gptr<u32>(r0) = u32(r0_8);
        }
        goto L_50cf68;
    }
    r0_8 = 0xc9209ccdu;  // (from the original)
    zf_2 = r0_4 == r0_8;
    if (!zf_2) {
        r0_8 = 0xc8a09f85u;  // (from the original)
        zf_2 = r0_4 == r0_8;
    }
    if (zf_2) {
        goto L_50cf68;
    }
    r0_8 = 0xc9209d2cu;  // (from the original)
    zf_3 = r0_4 == r0_8;
    if (!zf_3) {
        r0_8 = r0_8 - 0xc5u;  // (from the original)
        zf_3 = r0_4 == r0_8;
    }
    if (zf_3) {
        goto L_50cf68;
    }
    r0_8 = 0xc9209c66u;  // (from the original)
    zf_4 = r0_4 == r0_8;
    if (!zf_4) {
        r0_8 = r0_8 + 0x30u;  // (from the original)
        zf_4 = r0_4 == r0_8;
    }
    if (zf_4) {
        goto L_50cf68;
    }
    r0_8 = 0xc9209c97u;  // (from the original)
    zf_5 = r0_4 == r0_8;
    if (!zf_5) {
        r0_8 = r0_8 + 1u;
        zf_5 = r0_4 == r0_8;
    }
    if (zf_5) {
        goto L_50cf68;
    }
    r0_8 = 0xc9209cc9u;  // (from the original)
    zf_6 = r0_4 == r0_8;
    if (!zf_6) {
        r0_8 = r0_8 + 1u;
        zf_6 = r0_4 == r0_8;
    }
    if (!zf_6) {
        r0_8 = 0xf9609ff3u;  // (from the original)
    }
L_50cf68:;
    guest::cpu()->r[13] = r13;
    r0_9 = call_003452f0(r0_8, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00345820(r0_9, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x218u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0050ce40
GUEST_EXPORT(0x0050ce40, d_0050ce40::f_0050ce40);

// f_0050d09c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d09c {

inline constexpr guest::Function<0x00518468, u32(u32, u32, u32, u32)> call_00518468;  // (from the original)

u32 f_0050d09c(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = arg0->sub.addr();
    ea_1 = r13 + 0x10u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r12_1 = *gptr<u32>(ea_1 + 4);
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(r1_1);
        *gptr<u32>(r13 + 4) = u32(r12_1);
        guest::cpu()->r[13] = r13;
        r0_1 = call_00518468(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050d09c
GUEST_EXPORT(0x0050d09c, d_0050d09c::f_0050d09c);

// f_0050d10c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d10c {

inline constexpr guest::Function<0x0051868c, u32(u32, u32, u32, u32)> call_0051868c;  // (from the original)

u32 f_0050d10c(gptr<UnknownStateA22020> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r12_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r0_1 = arg0->sub.addr();
    r12_1 = *gptr<u32>(r13 + 8u);
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(r12_1);
        guest::cpu()->r[13] = r13;
        r0_1 = call_0051868c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    }
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050d10c
GUEST_EXPORT(0x0050d10c, d_0050d10c::f_0050d10c);

// f_0050d128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d128 {

inline constexpr guest::Function<0x00518750, u32(u32, u32, u32, u32)> call_00518750;  // (from the original)

u32 f_0050d128(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = r13 + 0x10u;  // (from the original)
    r0_1 = arg0->sub.addr();
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_00518750(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d128
GUEST_EXPORT(0x0050d128, d_0050d128::f_0050d128);

// f_0050d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d150 {

inline constexpr guest::Function<0x00518848, u32(u32, u32, u32, u32)> call_00518848;  // (from the original)

u32 f_0050d150(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r1_1 = r13 + 0x10u;  // (from the original)
    r0_1 = arg0->sub.addr();
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
        *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        r0_1 = call_00518848(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d150
GUEST_EXPORT(0x0050d150, d_0050d150::f_0050d150);

// f_0050d18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d18c {

inline constexpr guest::Function<0x005189e4, u32(u32, u32, u32, u32)> call_005189e4;  // (from the original)

u32 f_0050d18c(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r12_1 = r13 + 0x10u;  // (from the original)
    r0_1 = arg0->sub.addr();
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        r0_1 = call_005189e4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d18c
GUEST_EXPORT(0x0050d18c, d_0050d18c::f_0050d18c);

// f_0050d1f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d1f4 {

inline constexpr guest::Function<0x00518c3c, u32(u32, u32, u32, u32)> call_00518c3c;  // (from the original)

u32 f_0050d1f4(gptr<UnknownStateA22020> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r12_1 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r0_1 = arg0->sub.addr();
    r12_1 = *gptr<u32>(r13 + 8u);
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(r12_1);
        guest::cpu()->r[13] = r13;
        r0_1 = call_00518c3c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    }
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050d1f4
GUEST_EXPORT(0x0050d1f4, d_0050d1f4::f_0050d1f4);

// f_0050d210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d210 {

inline constexpr guest::Function<0x00518ca8, u32(u32, u32, u32, u32)> call_00518ca8;  // (from the original)

u32 f_0050d210(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13 + 0x18u;  // (from the original)
    r0_1 = arg0->sub.addr();
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_1));
        *gptr<u32>(r13 + 8) = u32(std::bit_cast<u32>(S2_1));
        *gptr<u32>(r13 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        guest::cpu()->s[2] = S2_1;
        guest::cpu()->s[3] = S3_1;
        r0_1 = call_00518ca8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0050d210
GUEST_EXPORT(0x0050d210, d_0050d210::f_0050d210);

// f_0050d274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d274 {

inline constexpr guest::Function<0x00518edc, u32(u32, u32, u32, u32)> call_00518edc;  // (from the original)

u32 f_0050d274(gptr<UnknownStateA22020> arg0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r12_1 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = arg0->sub.addr();
    ea_1 = r13 + 0x10u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r12_1 = *gptr<u32>(ea_1 + 4);
    if (r0_1 != 0) {
        *gptr<u32>(r13) = u32(r1_1);
        *gptr<u32>(r13 + 4) = u32(r12_1);
        guest::cpu()->r[13] = r13;
        r0_1 = call_00518edc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050d274
GUEST_EXPORT(0x0050d274, d_0050d274::f_0050d274);

// f_0050d478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d478 {

struct __attribute__((packed)) Object_0050d478_0 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
};
GUEST_OFFSET(Object_0050d478_0, word_b8, 0xb8);  // (from the original)

inline constexpr guest::Function<0x0013138c, u32(u32, u32, u32, u32)> call_0013138c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005197dc, u32(u32, u32, u32, u32)> call_005197dc;  // (from the original)
inline constexpr guest::Function<0x00747438, u32(u32, u32, u32, u32)> call_00747438;  // (from the original)

u32 f_0050d478(gptr<Object_0050d478_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_b8;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_0013138c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u32>(r0 + 0xb8u);  // (from the original)
    r0_3 = call_00747438(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r0_4 = *gptr<u32>(r0 + 0xb8u);  // (from the original)
    if (r0_4 != 0) {
        r0_5 = call_005197dc(r0_4, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        call_002ffb64(r0_5, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r0 + 0xb8u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0050d478
GUEST_EXPORT(0x0050d478, d_0050d478::f_0050d478);

// f_0050d8f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d8f0 {

inline guest::global<u32, 0x009535e4> global_009535e4;  // (from the original)
inline constexpr guest::Function<0x0013e358, u32(u32, u32, u32, u32)> call_0013e358;  // (from the original)
inline constexpr guest::Function<0x0034d018, u32(u32, u32, u32, u32)> call_0034d018;  // (from the original)
inline constexpr guest::Function<0x007284d8, u32(u32, u32, u32, u32)> call_007284d8;  // (from the original)

u32 f_0050d8f0() {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r4_1 = *global_009535e4;
    r0_1 = call_007284d8(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = call_0013e358(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 8u;
    return call_0034d018(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0050d8f0
GUEST_EXPORT(0x0050d8f0, d_0050d8f0::f_0050d8f0);

// f_0050d91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d91c {

inline guest::global<u32, 0x00952c9c> global_00952c9c;  // (from the original)
inline guest::global<u32, 0x009535e4> global_009535e4;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0034cd5c, u32(u32, u32, u32, u32)> call_0034cd5c;  // (from the original)
inline constexpr guest::Function<0x0034d018, u32(u32, u32, u32, u32)> call_0034d018;  // (from the original)
inline constexpr guest::Function<0x0034ed20, u32(u32, u32, u32, u32)> call_0034ed20;  // (from the original)

u32 f_0050d91c(u32 r0_unused, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = *global_009535e4;
    if (r0_1 == 0) {
        r1_1 = r13 + 8u;
        r4_1 = *global_00952c9c;
        *gptr<u32>(r13 + 0xcu) = u32(0x50d9b4u);  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
        *gptr<u32>(r13) = u32(0u);
        guest::cpu()->r[13] = r13;
        r0_2 = call_002f6e78(0x28000u, r1_1, r4_1, 1u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        *gptr<u32>(0x9535e4u + 4u) = u32(r0_2);  // (from the original)
        r0_3 = 0x9535e4u + 8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034cd5c(r0_3, r1_2, r2_1, r3_1);
        r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fd108(0x8bcu, r4_1, 4u, r3_2);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002f825c(r0_4, 0x8bcu, r2_2, r3_3);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_5 = call_0034ed20(r0_4, r1_3, r2_3, r3_4);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        *global_009535e4 = u32(r0_5);
        guest::cpu()->r[13] = r13;
        r0_1 = call_0034d018(r0_5, r1_4, r2_4, r3_5);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0050d91c
GUEST_EXPORT(0x0050d91c, d_0050d91c::f_0050d91c);

// f_0050d9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050d9c4 {

struct __attribute__((packed)) Object_0050d9c4_0 {
    u8 unknown_0[0x210];  // (not used here)
    u32 word_210;
    u8 unknown_214[0x1ac];  // (not used here)
    u32 word_3c0;
};
GUEST_OFFSET(Object_0050d9c4_0, word_210, 0x210);  // (from the original)
GUEST_OFFSET(Object_0050d9c4_0, word_3c0, 0x3c0);  // (from the original)

inline constexpr guest::Function<0x0034d134, u32(u32, u32, u32, u32)> call_0034d134;  // (from the original)
inline constexpr guest::Function<0x00350454, u32(u32, u32, u32, u32)> call_00350454;  // (from the original)
inline constexpr guest::Function<0x003504e8, u32(u32, u32, u32, u32)> call_003504e8;  // (from the original)
inline constexpr guest::Function<0x00728014, u32(u32, u32, u32, u32)> call_00728014;  // (from the original)
inline constexpr guest::Function<0x0072813c, u32(u32, u32, u32, u32)> call_0072813c;  // (from the original)
inline constexpr guest::Function<0x007286a0, u32(u32, u32, u32, u32)> call_007286a0;  // (from the original)
inline constexpr guest::Function<0x0072871c, u32(u32, u32, u32, u32)> call_0072871c;  // (from the original)
inline constexpr guest::Function<0x0072879c, u32(u32, u32, u32, u32)> call_0072879c;  // (from the original)
inline constexpr guest::Function<0x007287cc, u32(u32, u32, u32, u32)> call_007287cc;  // (from the original)

u32 f_0050d9c4(gptr<Object_0050d9c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r6_1 = 0;
    u32 r9_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r1_3 = 0;
    u32 r3_6 = 0;
    u32 r2_7 = 0;
    u32 r0_9 = 0;
    u32 r3_7 = 0;
    u32 res_2 = 0;
    u32 r1_4 = 0;
    r4_1 = r1;
    r13 = r13 - 0x48u;  // (from the original)
    if (r1 == 0) {
        r0_1 = arg0->word_210;
    } else {
        r0_1 = arg0->word_3c0;
    }
    r6_1 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r9_1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    if (r2 >= r0_1) {
        goto L_50db00;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0072813c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r6_1 < r0_2) {
        goto L_50db00;
    }
    r0_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003504e8(r0_3, r1, r2_1, r3_1);
    r1_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00728014(r0, r1_1, r4_1, r2);
    *gptr<u32>(r13 + 4u) = u32(r13 + 8u);
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0034d134(r0, r3, r9_1, r6_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    res_1 = r0_4 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_50dae4;
    }
    r0_5 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003504e8(r0_5, res_1, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r2_3 = r13 + 0x10u;  // (from the original)
    r0_6 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00350454(r0_6, r3, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r3 + 0x35u)) == 0) {  // (from the original)
        r0_7 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003504e8(r0_7, r1_2, r2_4, r3_4);
        r3_5 = guest::cpu()->r[3];
        r2_5 = r13 + 0x18u;  // (from the original)
        r0_8 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007287cc(r0_8, r3, r2_5, r3_5);
        r3_4 = guest::cpu()->r[3];
    }
    r2_6 = r13 + 0x18u;  // (from the original)
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0072871c(r3, r1_3, r2_6, r3_4);
    r3_6 = r13 + 0x18u;  // (from the original)
    r2_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_007286a0(r3, 2u, r2_7, r3_6);
    r3_7 = guest::cpu()->r[3];
    res_2 = r0_9 & 0x80000000u;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        if (*gptr<u32>(r13 + 4u) > 0x10u) {  // (from the original)
            *gptr<u32>(r13 + 4u) = u32(0x10u);  // (from the original)
        }
    }
    r1_4 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0072879c(r3, r1_4, 0x10u, r3_7);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_50dadc:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_50dae4:;
    r1 = 0xc8a10bf0u;  // (from the original)
    if (r0_4 == r1) {
        r0 = 1u;
        guest::preempt();
        goto L_50dadc;
    }
    r1 = 0xc8810beau;  // (from the original)
    if (r0_4 != r1) {
        r1 = 0xe0e10bfdu;  // (from the original)
    }
L_50db00:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 8u;
}

}  // namespace d_0050d9c4
GUEST_EXPORT(0x0050d9c4, d_0050d9c4::f_0050d9c4);

// f_0050db18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050db18 {

inline constexpr guest::Function<0x0034cf7c, u32(u32, u32, u32, u32)> call_0034cf7c;  // (from the original)
inline constexpr guest::Function<0x0034d184, u32(u32, u32, u32, u32)> call_0034d184;  // (from the original)
inline constexpr guest::Function<0x0034fef8, u32(u32, u32, u32, u32)> call_0034fef8;  // (from the original)
inline constexpr guest::Function<0x0034ff6c, u32(u32, u32, u32, u32)> call_0034ff6c;  // (from the original)
inline constexpr guest::Function<0x003501c8, u32(u32, u32, u32, u32)> call_003501c8;  // (from the original)
inline constexpr guest::Function<0x00350408, u32(u32, u32, u32, u32)> call_00350408;  // (from the original)
inline constexpr guest::Function<0x00350454, u32(u32, u32, u32, u32)> call_00350454;  // (from the original)
inline constexpr guest::Function<0x003504e8, u32(u32, u32, u32, u32)> call_003504e8;  // (from the original)
inline constexpr guest::Function<0x007286a0, u32(u32, u32, u32, u32)> call_007286a0;  // (from the original)
inline constexpr guest::Function<0x0072871c, u32(u32, u32, u32, u32)> call_0072871c;  // (from the original)
inline constexpr guest::Function<0x0072879c, u32(u32, u32, u32, u32)> call_0072879c;  // (from the original)
inline constexpr guest::Function<0x007287cc, u32(u32, u32, u32, u32)> call_007287cc;  // (from the original)

u32 f_0050db18(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r3_4 = 0;
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 zf_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 res_3 = 0;
    u32 zf_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 res_4 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 r2_5 = 0;
    u32 r0_12 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r3_8 = 0;
    u32 r2_7 = 0;
    u32 r0_14 = 0;
    u32 r2_8 = 0;
    u32 r1_4 = 0;
    u32 r3_9 = 0;
    u32 r2_9 = 0;
    u32 r0_15 = 0;
    u32 r3_10 = 0;
    u32 res_5 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_16 = 0;
    u32 r3_12 = 0;
    u32 r1_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    r13 = r13 - 0x1b8u;  // (from the original)
    ea_1 = r13 + 0x1b8u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    r8_1 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00350408(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_0034cf7c(0x198du, 0u, r2_1, r3_1);  // (from the original)
    r3_2 = u32(*gptr<u8>(r1 + 8u));
    r2_2 = u32(*gptr<u8>(r1 + 7u));
    *gptr<u32>(r13) = u32(u32(*gptr<u8>(r1 + 6u)));
    *gptr<u32>(r13 + 4) = u32(r2_2);
    *gptr<u32>(r13 + 8) = u32(r3_2);
    r3_3 = u32(*gptr<u8>(r1 + 9u));
    r2_3 = *gptr<u32>(r1);
    r0_3 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0034fef8(r0_3, r0_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    res_1 = r0_4 & 0x80000000u;  // (from the original)
    if (res_1 >> 0x1f) {  // (from the original)
        goto L_50dd38;
    }
    zf_1 = r2 == 0;
    if (!zf_1) {
        zf_1 = r3 == 0;
    }
    if (zf_1) {
        if (u32(*gptr<u8>(r1 + 6u)) != 1u) {
            goto L_50dd38;
        }
    } else {
        r0_5 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_003501c8(r0_5, r2, r3, r3_4);
        r1_1 = guest::cpu()->r[1];
        res_2 = r0_6 & 0x80000000u;  // (from the original)
        if (res_2 >> 0x1f) {  // (from the original)
            goto L_50dd38;
        }
    }
    zf_2 = r5_1 == 0;
    if (!zf_2) {
        zf_2 = r6_1 == 0;
    }
    if (zf_2) {
        goto L_50dd38;
    }
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0034ff6c(r0_7, 2u, r6_1, r5_1);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    res_3 = r0_8 & 0x80000000u;  // (from the original)
    if (res_3 >> 0x1f) {  // (from the original)
        goto L_50dd38;
    }
    zf_3 = r7_1 == 0;
    if (!zf_3) {
        zf_3 = r8_1 == 0;
    }
    if (!zf_3) {
        r0_9 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_0034ff6c(r0_9, 4u, r8_1, r7_1);
        r1_1 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        res_4 = r0_10 & 0x80000000u;  // (from the original)
        if (res_4 >> 0x1f) {  // (from the original)
            goto L_50dd38;
        }
    }
    r1_2 = u32(*gptr<u16>(r1 + 4u));
    *gptr<u16>(r13 + 0x7eu) = u16(r1_2);  // (from the original)
    r4_1 = r13 + 0x10u;  // (from the original)
    r0_11 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003504e8(r0_11, r1_2, r2_4, r3_5);
    r3_6 = guest::cpu()->r[3];
    r2_5 = r13 + 8u;
    r0_12 = r13 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00350454(r0_12, r4_1, r2_5, r3_6);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0x45u)) == 0) {  // (from the original)
        r0_13 = r13 + 0x180u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003504e8(r0_13, r1_3, r2_6, r3_7);
        r3_8 = guest::cpu()->r[3];
        r2_7 = r13 + 0x180u;  // (from the original)
        r0_14 = r13 + 0x188u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007287cc(r0_14, r4_1, r2_7, r3_8);
        r3_7 = guest::cpu()->r[3];
    }
    r2_8 = r13 + 0x180u;  // (from the original)
    r1_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_0072871c(r4_1, r1_4, r2_8, r3_7);
    r3_9 = r13 + 0x180u;  // (from the original)
    r2_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_15 = call_007286a0(r4_1, 2u, r2_9, r3_9);
    r3_10 = guest::cpu()->r[3];
    res_5 = r0_15 & 0x80000000u;  // (from the original)
    if (!(res_5 >> 0x1f)) {  // (from the original)
        if (*gptr<u32>(r13 + 4u) > 0x10u) {  // (from the original)
            *gptr<u32>(r13 + 4u) = u32(0x10u);  // (from the original)
        }
    }
    r1_5 = r13 + 0x180u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0072879c(r4_1, r1_5, 0x10u, r3_10);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_16 = r13 + 0x178u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003504e8(r0_16, r1_6, r2_10, r3_11);
    r3_12 = r13 + 0x178u;  // (from the original)
    r1_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0034d184(r0, r1_7, 1u, r3_12);
    r1_1 = r0_17 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r0_18 = 0u;
        goto L_50dd3c;
    }
    r1_1 = 0xe0a1086cu;  // (from the original)
    if (r0_17 == r1_1) {
        r0_18 = 9u;
        goto L_50dd3c;
    }
    r1_1 = 0xe0a1086du;  // (from the original)
    if (r0_17 == r1_1) {
        r0_18 = 0xau;  // (from the original)
        goto L_50dd3c;
    }
    r1_1 = 0xc8810beau;  // (from the original)
    if (r0_17 == r1_1) {
        goto L_50dd38;
    }
    r1_1 = 0xc8e10865u;  // (from the original)
    zf_4 = r0_17 == r1_1;
    if (!zf_4) {
        r1_1 = r1_1 + 1u;
        zf_4 = r0_17 == r1_1;
    }
    if (zf_4) {
        r0_18 = 0xbu;  // (from the original)
        goto L_50dd3c;
    }
    r1_1 = 0xc8a10bf0u;  // (from the original)
    if (r0_17 == r1_1) {
        r0_18 = 1u;
        goto L_50dd3c;
    }
    r1_1 = 0xc8e10869u;  // (from the original)
    zf_5 = r0_17 == r1_1;
    if (!zf_5) {
        r1_1 = 0xc8810befu;  // (from the original)
        zf_5 = r0_17 == r1_1;
    }
    if (!zf_5) {
        r1_1 = 0xe0e10beeu;  // (from the original)
    }
L_50dd38:;
    r0_18 = 0xcu;  // (from the original)
L_50dd3c:;
    r13 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_18;
}

}  // namespace d_0050db18
GUEST_EXPORT(0x0050db18, d_0050db18::f_0050db18);

// f_0050dd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050dd68 {

inline constexpr guest::Function<0x0034d774, u32(u32, u32, u32, u32)> call_0034d774;  // (from the original)
inline constexpr guest::Function<0x003504e8, u32(u32, u32, u32, u32)> call_003504e8;  // (from the original)
inline constexpr guest::Function<0x00728014, u32(u32, u32, u32, u32)> call_00728014;  // (from the original)

u32 f_0050dd68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 nf_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003504e8(r0_1, r1, r2, r3);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00728014(r0, r1_1, r1, r2);
    r3_1 = guest::cpu()->r[3];
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0034d774(r0, r1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_3 = r0_2 & 0x80000000u;  // (from the original)
    nf_1 = r0_3 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_3 = 1u;
    }
    if (nf_1 != 0u) {
        r0_3 = 0u;
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0050dd68
GUEST_EXPORT(0x0050dd68, d_0050dd68::f_0050dd68);

// f_0050ddc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ddc0 {

inline constexpr guest::Function<0x0034e5e4, u32(u32, u32, u32, u32)> call_0034e5e4;  // (from the original)

u32 f_0050ddc0(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 nf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0034e5e4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 & 0x80000000u;  // (from the original)
    nf_1 = r0_2 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_2 = 1u;
    }
    if (nf_1 != 0u) {
        r0_2 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0050ddc0
GUEST_EXPORT(0x0050ddc0, d_0050ddc0::f_0050ddc0);

// f_0050dddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050dddc {

inline constexpr guest::Function<0x0034cdcc, u32(u32, u32, u32, u32)> call_0034cdcc;  // (from the original)
inline constexpr guest::Function<0x0034cf7c, u32(u32, u32, u32, u32)> call_0034cf7c;  // (from the original)
inline constexpr guest::Function<0x0034df48, u32(u32, u32, u32, u32)> call_0034df48;  // (from the original)

u32 f_0050dddc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r12_1 = 0;
    u32 ea_4 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r5_1 = r2;
    r6_1 = r3;
    if (*gptr<u32>(r13 + 0x38u) != 0) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0034cdcc(0u, 0u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_0034cf7c(r5_1, 0u, r2, r3);
    ea_1 = r1 + 0x18u;  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    r3_1 = *gptr<u32>(ea_1 + 8);
    ea_2 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r1_1);
    *gptr<u32>(ea_2 + 4) = u32(r2_1);
    *gptr<u32>(ea_2 + 8) = u32(r3_1);
    *gptr<u32>(ea_2 + 0xc) = u32(0x19000u);  // (from the original)
    ea_3 = r1 + 8u;
    r1_2 = *gptr<u32>(ea_3);
    r2_2 = *gptr<u32>(ea_3 + 4);
    r3_2 = *gptr<u32>(ea_3 + 8);
    r12_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    ea_4 = r13 + 4u;
    *gptr<u32>(ea_4) = u32(r1_2);
    *gptr<u32>(ea_4 + 4) = u32(r2_2);
    *gptr<u32>(ea_4 + 8) = u32(r3_2);
    *gptr<u32>(ea_4 + 0xc) = u32(r12_1);  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r1 + 4u));
    r3_3 = *gptr<u32>(r1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0034df48(r0, r0_1, r6_1, r3_3);
    r1_3 = r0_2 & 0x80000000u;  // (from the original)
    if (r1_3 >> 0x1f == (r1_3 & (r1_3 ^ r1_3)) >> 0x1f) {  // (from the original)
        r0_3 = 0u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_3 = 0xc8e10868u;  // (from the original)
    if (r0_2 == r1_3) {
        r0_3 = 5u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_3 = 0xc8e10867u;  // (from the original)
    if (r0_2 == r1_3) {
        r0_3 = 6u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_3 = 0xc8a10bf0u;  // (from the original)
    if (r0_2 == r1_3) {
        r0_3 = 1u;
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r1_3 = 0xe0e10bfdu;  // (from the original)
    zf_1 = r0_2 == r1_3;
    if (!zf_1) {
        r1_3 = 0xc8e10be9u;  // (from the original)
        zf_1 = r0_2 == r1_3;
    }
    if (!zf_1) {
        r1_3 = 0xc8e1086au;  // (from the original)
    }
    r0_3 = 7u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_0050dddc
GUEST_EXPORT(0x0050dddc, d_0050dddc::f_0050dddc);

// f_0050ded0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ded0 {

inline constexpr guest::Function<0x0034e3f4, u32(u32, u32, u32, u32)> call_0034e3f4;  // (from the original)

u32 f_0050ded0(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 nf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0034e3f4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 & 0x80000000u;  // (from the original)
    nf_1 = r0_2 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_2 = 1u;
    }
    if (nf_1 != 0u) {
        r0_2 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0050ded0
GUEST_EXPORT(0x0050ded0, d_0050ded0::f_0050ded0);

// f_0050deec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050deec {

struct __attribute__((packed)) Object_0050deec_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050deec_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003d0c60, u32(u32, u32, u32, u32)> call_003d0c60;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x00832f1c, u32(u32, u32, u32, u32)> call_00832f1c;  // (from the original)

u32 f_0050deec(gptr<Object_0050deec_0> arg0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r4_1 = arg0->word_0;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003d0c60(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_00832f1c(r4_1, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003d0d6c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0050deec
GUEST_EXPORT(0x0050deec, d_0050deec::f_0050deec);

// f_0050df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050df24 {

struct __attribute__((packed)) Object_0050df24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050df24_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x003d0c60, u32(u32, u32, u32, u32)> call_003d0c60;  // (from the original)
inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x003d0eec, u32(u32, u32, u32, u32)> call_003d0eec;  // (from the original)
inline constexpr guest::Function<0x00832f1c, u32(u32, u32, u32, u32)> call_00832f1c;  // (from the original)

u32 f_0050df24(gptr<Object_0050df24_0> arg0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = arg0->word_0;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003d0c60(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003d0cbc(r0_2, r2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_003d0eec(r0_4, r0_3, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003d0d6c(r0_5, r1_1, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00832f1c(r5_1, r1_2, r2_4, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_003d0d6c(r0_6, r1_3, r2_5, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0050df24
GUEST_EXPORT(0x0050df24, d_0050df24::f_0050df24);

// f_0050df80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050df80 {

inline constexpr guest::Function<0x003d0cbc, u32(u32, u32, u32, u32)> call_003d0cbc;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x00832f1c, u32(u32, u32, u32, u32)> call_00832f1c;  // (from the original)

u32 f_0050df80(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_003d0cbc(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_00832f1c(r0, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003d0d6c(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_0050df80
GUEST_EXPORT(0x0050df80, d_0050df80::f_0050df80);

// f_0050e1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050e1d0 {

struct __attribute__((packed)) Object_0050e1d0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050e1d0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_0050e1d0(gptr<Object_0050e1d0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (*gptr<u32>(0x953660u + 0x14u) != 0) {  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x50e23cu);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    r2_1 = arg0->word_0;
    r1_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f6e78(0xd6000u, r1_1, r2_1, 1u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x953660u + 0x14u) = u32(r0_1);  // (from the original)
    r0_2 = r0 + 0x6cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_2, 0x22u, r2_2, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0050e1d0
GUEST_EXPORT(0x0050e1d0, d_0050e1d0::f_0050e1d0);

// f_0050e778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050e778 {

struct __attribute__((packed)) Object_0050e778_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0050e778_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x004167b0, u32(u32, u32, u32, u32)> call_004167b0;  // (from the original)
inline constexpr guest::Function<0x00417dbc, u32(u32, u32, u32, u32)> call_00417dbc;  // (from the original)
inline constexpr guest::Function<0x00429ac4, u32(u32, u32, u32, u32)> call_00429ac4;  // (from the original)
inline constexpr guest::Function<0x00429b10, u32(u32, u32, u32, u32)> call_00429b10;  // (from the original)
inline constexpr guest::Function<0x00449ee4, u32(u32, u32, u32, u32)> call_00449ee4;  // (from the original)
inline constexpr guest::Function<0x0044a814, u32(u32, u32, u32, u32)> call_0044a814;  // (from the original)
inline constexpr guest::Function<0x0044bca4, u32(u32, u32, u32, u32)> call_0044bca4;  // (from the original)
inline constexpr guest::Function<0x0044beb8, u32(u32, u32, u32, u32)> call_0044beb8;  // (from the original)
inline constexpr guest::Function<0x0044cc08, u32(u32, u32, u32, u32)> call_0044cc08;  // (from the original)
inline constexpr guest::Function<0x0044cc60, u32(u32, u32, u32, u32)> call_0044cc60;  // (from the original)
inline constexpr guest::Function<0x0045fd24, u32(u32, u32, u32, u32)> call_0045fd24;  // (from the original)
inline constexpr guest::Function<0x0050ee4c, u32(u32, u32, u32, u32)> call_0050ee4c;  // (from the original)
inline constexpr guest::Function<0x0050f004, u32(u32, u32, u32, u32)> call_0050f004;  // (from the original)
inline constexpr guest::Function<0x005117a8, u32(u32, u32, u32, u32)> call_005117a8;  // (from the original)
inline constexpr guest::Function<0x005124b8, u32(u32, u32, u32, u32)> call_005124b8;  // (from the original)
inline constexpr guest::Function<0x00513160, u32(u32, u32, u32, u32)> call_00513160;  // (from the original)

u32 f_0050e778(gptr<Object_0050e778_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r6_1 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 res_1 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 nf_1 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r3_8 = 0;
    u32 r2_8 = 0;
    u32 r1_8 = 0;
    u32 r0_12 = 0;
    u32 res_2 = 0;
    u32 r0_13 = 0;
    u32 r1_9 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r1_11 = 0;
    u32 zf_1 = 0;
    u32 r1_12 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_17 = 0;
    u32 r1_13 = 0;
    r4 = r0;
    r13 = r13 - 0x68u;  // (from the original)
    r1_1 = arg0->word_0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00131280(0x40u, r1_1, 4u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 8u) = u32(r0_1);
    if (r0_1 == 0) {
        goto L_50e8e8;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0050ee4c(r4, r1_2, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_50e8e8;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_005117a8(r4, r1_2, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_50e8e8;
    }
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_004167b0(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0045fd24(r0_5, r1_3, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r6_1 = r13 + 8u;
    r1_4 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(r6_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00513160(r4, r1_4, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_50e8e0;
    }
    r0_7 = ((r0_6 & ~0xffu | 0u) & ~0xff0000u | 0u << 0x10 & 0xff0000u) & ~0xff00u;  // (from the original)
    r1_5 = 0x10u << 8 & 0xff00u;  // (from the original)
    r5_1 = r0_7 | r1_5;
    guest::cpu()->r[13] = r13;
    r0_8 = call_00429b10(r0_7, r1_5, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    res_1 = r0_8 & 0x80000000u;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00429ac4(res_1, r1_6, r2_4, r3_4);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_9 = call_00449ee4(r6_1, r5_1, r2_5, r3_5);
        r1_7 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_10 = r0_9 & 0x80000000u;  // (from the original)
        nf_1 = r0_10 >> 0x1f;  // (from the original)
        if (nf_1 == 0u) {
            guest::cpu()->r[13] = r13;
            call_0044cc08(r0_10, r1_7, r2_6, r3_6);
            r2_7 = guest::cpu()->r[2];
            r3_7 = guest::cpu()->r[3];
            r0_11 = *global_00974a64;
            guest::cpu()->r[13] = r13;
            call_0044bca4(r0_11, 0x513e94u, r2_7, r3_7);  // (from the original)
            r3_8 = r13 + 0x20u;  // (from the original)
            *gptr<u32>(r13 + 0x1cu) = u32(0x2710u);  // (from the original)
            r2_8 = ~0u;
            *gptr<u8>(r13 + 0x10u) = u8(1u);  // (from the original)
            *gptr<u32>(r13 + 0x14u) = u32(0u);  // (from the original)
            *gptr<u8>(r13 + 0x18u) = u8(0u);  // (from the original)
            *gptr<u32>(r3_8) = u32(0x3e8u);  // (from the original)
            *gptr<u32>(r3_8 + 4) = u32(r2_8);
            *gptr<u32>(r3_8 + 8) = u32(0u);
            r1_8 = r13 + 0x10u;  // (from the original)
            *gptr<u32>(r13 + 0x2cu) = u32(0x3e8u);  // (from the original)
            *gptr<u8>(r13 + 0x30u) = u8(0u);  // (from the original)
            *gptr<u32>(r13 + 0x34u) = u32(0u);  // (from the original)
            guest::cpu()->r[13] = r13;
            r0_12 = call_005124b8(r4, r1_8, r2_8, r3_8);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            res_2 = r0_12 & 0x80000000u;  // (from the original)
            if (res_2 >> 0x1f) {  // (from the original)
                goto L_50e8fc;
            }
            r0_13 = r13 + 8u;
            guest::cpu()->r[13] = r13;
            call_00417dbc(r0_13, res_2, r2, r3);
            r1_9 = guest::cpu()->r[1];
            r13 = r13 + 0x68u;  // (from the original)
            guest::cpu()->r[1] = r1_9;
            guest::cpu()->r[13] = r13;
            return 0u;
        }
        guest::cpu()->r[13] = r13;
        call_0044cc08(r0_10, r1_7, r2_6, r3_6);
        r1_6 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    r0_14 = *global_00974a64;
    if (r0_14 != 0) {
        guest::cpu()->r[13] = r13;
        r0_15 = call_0044beb8(r0_14, r1_6, r2_4, r3_4);
        r1_10 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_14 = call_0044a814(r0_15, r1_10, r2_9, r3_9);
        r1_6 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    call_0044cc60(r0_14, r1_6, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_50e8e0:;
    r0_16 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00417dbc(r0_16, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_50e8e8:;
    guest::cpu()->r[13] = r13;
    call_0050f004(r4, r1_2, r2_1, r3_1);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[13] = r13;
    return 0x80000006u;  // (from the original)
L_50e8fc:;
    r1 = 0xd8a14868u;  // (from the original)
    zf_1 = r0_12 == r1;
    if (!zf_1) {
        r1 = r1 - 0x43u;  // (from the original)
        zf_1 = r0_12 == r1;
    }
    if (!zf_1) {
        guest::preempt();
        goto L_50e8e0;
    }
    guest::cpu()->r[13] = r13;
    call_0050f004(r4, r1, r2, r3);
    r1_12 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_17 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00417dbc(r0_17, r1_12, r2_10, r3_10);
    r1_13 = guest::cpu()->r[1];
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return 0x80000000u;  // (from the original)
}

}  // namespace d_0050e778
GUEST_EXPORT(0x0050e778, d_0050e778::f_0050e778);

// f_0050ed5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050ed5c {

struct __attribute__((packed)) Object_0050ed5c_0 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_0050ed5c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0050ed5c_0, word_24, 0x24);  // (from the original)

inline guest::global<u8, 0x0096b8fe> global_0096b8fe;  // (from the original)
inline guest::global<u32, 0x0096b92c> global_0096b92c;  // (from the original)
inline guest::global<u32, 0x0096b930> global_0096b930;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0037706c, u32(u32, u32, u32, u32)> call_0037706c;  // (from the original)
inline constexpr guest::Function<0x003823b0, u32(u32, u32, u32, u32)> call_003823b0;  // (from the original)
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> call_00540c1c;  // (from the original)

u32 f_0050ed5c(gptr<Object_0050ed5c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 res_1 = 0;
    u32 r8_1 = 0;
    u32 res_2 = 0;
    u32 r7_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = 0u;
    if (arg0->word_24 != 0) {
        goto L_50edf8;
    }
    r1_1 = arg0->word_0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fd108(0xce54u, r1_1, 4u, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(r6);
    ea_1 = r0_1 + 4u;
    *gptr<u32>(ea_1) = u32(r6);
    r4 = r0_1;
    ea_2 = r0_1 + 8u;
    *gptr<u32>(ea_2) = u32(r6);
    ea_3 = r0_1 + 0xcu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r6);
    r1 = 0x64u;  // (from the original)
    *gptr<u32>(ea_3 + 4u) = u32(r6);
    res_1 = r4 + 0x14u;  // (from the original)
    r0 = res_1;
    if (res_1 == 0) {
        goto L_50edf4;
    }
    r3 = 0x83u;  // (from the original)
    r2 = 0u;
    r12 = 0x63u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    do {
L_50edb8:;
        r8_1 = r3 + r2;
        res_2 = r12 - 1u;
        r12 = res_2;
        r7_1 = r0 + (r8_1 << 2);
        *gptr<u32>(r0 + (r2 << 2)) = u32(r7_1);
        r2 = r2 + r3;
        guest::preempt();
    } while (res_2 != 0);
    r3_1 = r3 * (r1 - 1u);
    *gptr<u32>(r0 + (r3_1 << 2)) = u32(r6);
    *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
    r2_1 = r1 * 0x20cu + r0;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00540c1c(r4, r1, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_50edf4:;
    *gptr<u32>(r5 + 0x24u) = u32(r4);  // (from the original)
L_50edf8:;
    *gptr<u8>(r5 + 0x28u) = u8(r6);  // (from the original)
    *global_0096b92c = u32(0x4ddc14u);  // (from the original)
    *global_0096b930 = u32(0x4ddbf8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0037706c(0x4ddbf8u, 0x96b930u, r2, r3);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *global_0096b8fe = u8(3u);
    guest::cpu()->r[13] = r13;
    call_003823b0(0u, 0x96b8feu, r2_2, r3_2);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0050ed5c
GUEST_EXPORT(0x0050ed5c, d_0050ed5c::f_0050ed5c);

// f_0050f004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050f004 {

inline guest::global<u32, 0x00974a58> global_00974a58;  // (from the original)
inline guest::global<u32, 0x00974a64> global_00974a64;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)
inline constexpr guest::Function<0x00414120, u32(u32, u32, u32, u32)> call_00414120;  // (from the original)
inline constexpr guest::Function<0x00415208, u32(u32, u32, u32, u32)> call_00415208;  // (from the original)
inline constexpr guest::Function<0x00415d24, u32(u32, u32, u32, u32)> call_00415d24;  // (from the original)
inline constexpr guest::Function<0x00416044, u32(u32, u32, u32, u32)> call_00416044;  // (from the original)
inline constexpr guest::Function<0x00425840, u32(u32, u32, u32, u32)> call_00425840;  // (from the original)
inline constexpr guest::Function<0x0044a814, u32(u32, u32, u32, u32)> call_0044a814;  // (from the original)
inline constexpr guest::Function<0x0044beb8, u32(u32, u32, u32, u32)> call_0044beb8;  // (from the original)
inline constexpr guest::Function<0x0044c1ec, u32(u32, u32, u32, u32)> call_0044c1ec;  // (from the original)
inline constexpr guest::Function<0x0044cc60, u32(u32, u32, u32, u32)> call_0044cc60;  // (from the original)
inline constexpr guest::Function<0x0044d894, u32(u32, u32, u32, u32)> call_0044d894;  // (from the original)
inline constexpr guest::Function<0x004502b4, u32(u32, u32, u32, u32)> call_004502b4;  // (from the original)
inline constexpr guest::Function<0x00450314, u32(u32, u32, u32, u32)> call_00450314;  // (from the original)
inline constexpr guest::Function<0x00452958, u32(u32, u32, u32, u32)> call_00452958;  // (from the original)
inline constexpr guest::Function<0x0045f368, u32(u32, u32, u32, u32)> call_0045f368;  // (from the original)
inline constexpr guest::Function<0x0045f918, u32(u32, u32, u32, u32)> call_0045f918;  // (from the original)
inline constexpr guest::Function<0x0050ecf4, u32(u32, u32, u32, u32)> call_0050ecf4;  // (from the original)

u32 f_0050f004(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r5_1 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r1_7 = 0;
    u32 r0_9 = 0;
    u32 r2_6 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r0_12 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_00974a64;
    if (r0_1 != 0) {
        call_0044c1ec(r0_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    *gptr<u8>(r0 + 0x69u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x68u) = u8(0u);  // (from the original)
    r0_2 = *global_00974a64;
    if (r0_2 != 0) {
        r0_3 = call_0044beb8(r0_2, r1, r2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r0_2 = call_0044a814(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    call_0044cc60(r0_2, r1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = 0x974a74u;  // (from the original)
    r5_1 = *gptr<u32>(r0_4);
    if (r5_1 != 0) {
        r1_3 = *gptr<u32>(r0 + 0x44u);  // (from the original)
        r0_5 = r5_1 + 0x10u;  // (from the original)
        r0_6 = call_004502b4(r0_5, r1_3, 0x3000u, guest::cpu()->r[3]);  // (from the original)
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        if (r0_6 != 0) {
            call_00452958(r0_6, r1_4, r2_3, guest::cpu()->r[3]);
            r2_4 = guest::cpu()->r[2];
            r1_5 = *gptr<u32>(r0 + 0x44u);  // (from the original)
            r0_7 = r5_1 + 0x10u;  // (from the original)
            r0_6 = call_00450314(r0_7, r1_5, r2_4, guest::cpu()->r[3]);
            r1_4 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
        }
        *gptr<u32>(r0 + 0x44u) = u32(0u);  // (from the original)
        r0_4 = call_0045f918(r0_6, r1_4, r2_3, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
    }
    r0_8 = call_0044d894(r0_4, r1_2, r2_2, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_8 != 0) {
        r0_8 = call_0045f368(r0_8, r1_6, r2_5, guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
    }
    call_00414120(r0_8, r1_6, r2_5, guest::cpu()->r[3]);
    r1_7 = 0x3ff00000u;  // (from the original)
    r0_9 = *global_00974a58;
    r2_6 = r0_9 - 0x100000u;  // (from the original)
    if (r2_6 < r1_7) {
        r0_9 = call_00415d24(r0_9, r1_7, r2_6, guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
    }
    r0_10 = call_00415208(r0_9, r1_7, r2_6, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_11 = call_00416044(r0_10, r1_8, r2_7, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    if (r0_11 != 0) {
        call_00425840(r0_11, r1_9, r2_8, guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
    }
    call_0050ecf4(r0, r1_9, r2_8, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_12 = *gptr<u32>(r0 + 8u);
    if (r0_12 != 0) {
        r0_12 = call_002f88b8(r0_12, r1_10, r2_9, guest::cpu()->r[3]);
        r1_10 = guest::cpu()->r[1];
        *gptr<u32>(r0 + 8u) = u32(0u);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    return r0_12;
}

}  // namespace d_0050f004
GUEST_EXPORT(0x0050f004, d_0050f004::f_0050f004);

// f_0050f118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0050f118 {

struct __attribute__((packed)) Object_0050f118_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x28];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Object_0050f118_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0050f118_0, byte_40, 0x40);  // (from the original)

inline guest::global<u32, 0x0096b92c> global_0096b92c;  // (from the original)
inline guest::global<u32, 0x0096b930> global_0096b930;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x00377160, u32(u32, u32, u32, u32)> call_00377160;  // (from the original)
inline constexpr guest::Function<0x00489ec8, u32(u32, u32, u32, u32)> call_00489ec8;  // (from the original)
inline constexpr guest::Function<0x0050cd1c, u32(u32, u32, u32, u32)> call_0050cd1c;  // (from the original)
inline constexpr guest::Function<0x0050ed5c, u32(u32, u32, u32, u32)> call_0050ed5c;  // (from the original)
inline constexpr guest::Function<0x00510358, u32(u32, u32, u32, u32)> call_00510358;  // (from the original)
inline constexpr guest::Function<0x005158b8, u32(u32, u32, u32, u32)> call_005158b8;  // (from the original)

u32 f_0050f118(gptr<Object_0050f118_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    if (arg0->word_14 == 0) {
        r5 = 0u;
        if (u32(arg0->byte_40) == 0) {
            r0_1 = call_0050ed5c(r4, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            if (r0_1 == 0) {
                goto L_50f184;
            }
            r0_2 = call_00510358(r4, r1, r2_1, guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            if (r0_2 == 0) {
                goto L_50f188;
            }
        }
        r0_3 = call_005158b8(r4, 0x86201u, 0x87be14u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        if (r0_3 == 0) {
            goto L_50f1b8;
        }
    }
    r0_1 = 1u;
L_50f184:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
L_50f188:;
    *global_0096b92c = u32(r5);
    *global_0096b930 = u32(r5);
    call_00377160(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r0 == 0) {
        goto L_50f200;
    }
L_50f1a4:;
    call_002ffb64(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    goto L_50f200;
L_50f1b8:;
    r0_4 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    zf_1 = r0_4 == 0;
    if (zf_1) {
        r0_4 = *gptr<u32>(r4 + 0x38u);  // (from the original)
        zf_1 = r0_4 == 0;
    }
    if (zf_1) {
        r0_5 = call_00489ec8(r0_4, r1, r2_3, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r0_4 = call_0050cd1c(r0_5, r1_2, r2_4, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        *gptr<u8>(r4 + 0x40u) = u8(r5);  // (from the original)
        *gptr<u8>(r4 + 0x41u) = u8(r5);  // (from the original)
    }
    *global_0096b92c = u32(r5);
    *global_0096b930 = u32(r5);
    call_00377160(r0_4, r1, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r4 + 0x28u) = u8(r5);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r0 != 0) {
        guest::preempt();
        goto L_50f1a4;
    }
L_50f200:;
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0050f118
GUEST_EXPORT(0x0050f118, d_0050f118::f_0050f118);
