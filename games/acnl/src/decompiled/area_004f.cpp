// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_004f027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f027c {

inline guest::global<u32, 0x004f02c8> global_004f02c8;  // (from the original)
inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;  // (from the original)
inline constexpr guest::Function<0x004ee2b0, u32(u32, u32, u32, u32)> call_004ee2b0;  // (from the original)

u32 f_004f027c(u32 r0, u32 r1, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_004ed26c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    S0_2 = std::bit_cast<float>(*global_004f02c8);
    *gptr<u32>(*gptr<u32>(r0 + 0x114u) + 0xb8u) = u32(1u);  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_2));
    r1_2 = r13;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_004ee2b0(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return 1u;
}

}  // namespace d_004f027c
GUEST_EXPORT(0x004f027c, d_004f027c::f_004f027c);

// f_004f0310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0310 {

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline guest::global<u8, 0x00952a20> global_00952a20;  // (from the original)
inline constexpr guest::Function<0x0024ebc0, u32(u32, u32, u32, u32)> call_0024ebc0;  // (from the original)

u32 f_004f0310(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0094edd8;
    if (r0_1 != 0) {
        r1 = r0_1 + 0x300u;  // (from the original)
        *gptr<u32>(r0_1 + 0x1a8u) = u32(r1);  // (from the original)
    }
    *global_00952a20 = u8(1u);
    r0_2 = call_0024ebc0(1u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = u32(*gptr<u8>(r0_2 + 0x168u));  // (from the original)
    *gptr<u8>(0x952a20u + 1u) = u8(r0_3);  // (from the original)
    r0_4 = call_0024ebc0(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_4 + 0x168u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 1u;
    return r0_4;
}

}  // namespace d_004f0310
GUEST_EXPORT(0x004f0310, d_004f0310::f_004f0310);

// f_004f0568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0568 {

inline guest::global<u32, 0x00952a40> global_00952a40;  // (from the original)

u32 f_004f0568(u32 r0) {
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    r1_1 = 0u;
    ea_1 = *gptr<u32>(*global_00952a40 + 8u) + 0x40u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1);
    if (r3_1 == 0) {
        r2_1 = r1_1;
    } else {
        r2_1 = ea_1 + r3_1;
    }
    if (r2_1 == 0) {
        r1_1 = 0u;
        goto L_4f05a4;
    }
    ea_2 = r2_1 + (r0 << 4) + 0x28u;  // (from the original)
    r2_2 = *gptr<u32>(ea_2);
    if (r2_2 != 0) {
        r1_1 = r2_2 + ea_2;
    }
L_4f05a4:;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_1 = 0x80000002u & ~*gptr<u32>(r1_1);  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_004f0568
GUEST_EXPORT(0x004f0568, d_004f0568::f_004f0568);

// f_004f05cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f05cc {

inline guest::global<u32, 0x00952a38> global_00952a38;  // (from the original)
inline constexpr guest::Function<0x00495474, u32(u32, u32, u32, u32)> call_00495474;  // (from the original)

u32 f_004f05cc(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_00952a38;
    return call_00495474(r0_1, 0x107u, r0, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_004f05cc
GUEST_EXPORT(0x004f05cc, d_004f05cc::f_004f05cc);

// f_004f0818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0818 {

inline guest::global<u32, 0x004f0874> global_004f0874;  // (from the original)
inline guest::global<u32, 0x004f0878> global_004f0878;  // (from the original)
inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;  // (from the original)
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)

u32 f_004f0818(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_2 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_004ed26c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    S0_2 = std::bit_cast<float>(*global_004f0874);
    S1_2 = std::bit_cast<float>(*global_004f0878);
    *gptr<u32>(*gptr<u32>(r0 + 0x114u) + 0xb8u) = u32(0u);  // (from the original)
    r0_2 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0056a378(r0_2, 0u, r2_1, r3_1);
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    ea_1 = r0 + 0x118u;  // (from the original)
    r0_3 = *gptr<u32>(ea_1);
    ea_2 = r13;
    r1_2 = *gptr<u32>(ea_2);
    r2_2 = *gptr<u32>(ea_2 + 4);
    r3_2 = *gptr<u32>(ea_2 + 8);
    ea_3 = r0_3 + 0x17cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r1_2);
    ea_4 = r0_3 + 0x180u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r2_2);
    *gptr<u32>(ea_4 + 4) = u32(r3_2);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return 1u;
}

}  // namespace d_004f0818
GUEST_EXPORT(0x004f0818, d_004f0818::f_004f0818);

// f_004f0b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0b90 {

inline guest::global<u32, 0x004f0c34> global_004f0c34;  // (from the original)
inline guest::global<u32, 0x004f0c38> global_004f0c38;  // (from the original)
inline guest::global<u32, 0x004f0c3c> global_004f0c3c;  // (from the original)
inline guest::global<u32, 0x004f0c40> global_004f0c40;  // (from the original)
inline constexpr guest::Function<0x004a455c, u32(u32, u32, u32, u32)> call_004a455c;  // (from the original)
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;  // (from the original)

u32 f_004f0b90(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    float S0_2 = 0;
    u32 ea_3 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    float S0_3 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    if (r1 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0_1 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r1 = r0_1;
    }
    r3_1 = r13 + 8u;
    *gptr<u8>(r13) = u8(1u);
    *gptr<u8>(r13 + 1u) = u8(1u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    r0_2 = r13;
    *gptr<u32>(r3_1) = u32(0u);
    *gptr<u32>(r3_1 + 4) = u32(1u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_3 = call_004a455c(r0_2, r1, 0u, r3_1);
    r0_4 = *gptr<u32>(r0_3 + 8u);
    S0_1 = std::bit_cast<float>(*global_004f0c34);
    ea_1 = r0 + 8u;
    *gptr<u32>(ea_1) = u32(r0_4);
    r0_5 = r0_4 + 0xb4u;  // (from the original)
    *gptr<u32>(r0_5) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_5 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_5 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_5 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    ea_2 = r0 + 8u;
    S0_2 = std::bit_cast<float>(*global_004f0c38);
    ea_3 = *gptr<u32>(ea_2) + 0xc8u;  // (from the original)
    r2_1 = *gptr<u32>(ea_3);
    if (r2_1 == 0) {
        r0_6 = 0u;
    } else {
        r0_6 = ea_3 + r2_1;
    }
    *gptr<u32>(r0_6) = u32(1u);
    *gptr<u32>(r0_6 + 0xcu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
    *gptr<u32>(r0_6 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*global_004f0c3c)));
    S0_3 = std::bit_cast<float>(*global_004f0c40);
    *gptr<u32>(r0_6 + 8u) = u32(std::bit_cast<u32>(S0_3));
    *gptr<u32>(r0 + 4u) = u32(r0_3);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r0_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    return 1u;
}

}  // namespace d_004f0b90
GUEST_EXPORT(0x004f0b90, d_004f0b90::f_004f0b90);

// f_004f0c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0c4c {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;  // (from the original)

u32 f_004f0c4c() {
    return call_004ee4b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f0c4c
GUEST_EXPORT(0x004f0c4c, d_004f0c4c::f_004f0c4c);

// f_004f0de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0de0 {

struct __attribute__((packed)) Object_004f0de0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f0de0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0048b4dc, u32(u32, u32, u32, u32)> call_0048b4dc;  // (from the original)

u32 f_004f0de0(gptr<Object_004f0de0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *gptr<u32>(arg0->word_4 + 0x28u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_0048b4dc(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u32>(*gptr<u32>(r0 + 4u) + 0x28u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0048b4dc(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f0de0
GUEST_EXPORT(0x004f0de0, d_004f0de0::f_004f0de0);

// f_004f0eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0eb8 {

struct __attribute__((packed)) Object_004f0eb8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f0eb8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004f0f80, u32(u32, u32, u32, u32)> call_004f0f80;  // (from the original)

u32 f_004f0eb8(gptr<Object_004f0eb8_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r12_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 res_1 = 0;
    u32 r12_2 = 0;
    u32 r3_1 = 0;
    r13 = r13 - 0x120u;  // (from the original)
    r5 = 0u;
    r1_1 = arg0->word_4;
    r2_1 = *gptr<u32>(r1_1 + 0x174u);  // (from the original)
    r4 = *gptr<u32>(r1_1 + 0x170u);  // (from the original)
    if (r4 == r2_1) {
        ea_1 = *gptr<u32>(r1_1 + 8u) + 0xb8u;  // (from the original)
        r2_1 = *gptr<u32>(ea_1);
        if (r2_1 == 0) {
            r4 = r5;
        } else {
            r4 = r2_1 + ea_1;
        }
    }
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004f0f80(r0, r1_2, r2_1, r3);
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r2 = 0u;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_4f0f48;
    }
L_4f0f04:;
    r7 = r2 + 1u;
    r6 = r0 - r7;
    nf_1 = r6 >> 0x1f;  // (from the original)
    zf_1 = r6 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r3 = 0u;
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_4f0f3c;
    }
    do {
L_4f0f18:;
        r12_1 = r7 + r3;
        r8_1 = *gptr<u32>(r1 + (r2 << 2));
        r9_1 = *gptr<u32>(r1 + (r12_1 << 2));
        r3 = r3 + 1u;
        if (r8_1 > r9_1) {
            *gptr<u32>(r1 + (r2 << 2)) = u32(r9_1);
            *gptr<u32>(r1 + (r12_1 << 2)) = u32(r8_1);
        }
        res_1 = r6 - 1u;
        r6 = res_1;
        guest::preempt();
    } while (res_1 != 0);
L_4f0f3c:;
    r2 = r2 + 1u;
    if (s32(r0) > s32(r2)) {
        guest::preempt();
        goto L_4f0f04;
    }
L_4f0f48:;
    r2 = 0u;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_4f0f78;
    }
    do {
L_4f0f54:;
        r12_2 = *gptr<u32>(r1 + (r2 << 2));
        r3_1 = r4 + (r2 << 2);
        r2 = r2 + 1u;
        if (r12_2 == 0) {
            *gptr<u32>(r3_1) = u32(r5);
        } else {
            *gptr<u32>(r3_1) = u32(r12_2 - r3_1);
        }
        guest::preempt();
    } while (s32(r2) < s32(r0));
L_4f0f78:;
    r13 = r13 + 0x120u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004f0eb8
GUEST_EXPORT(0x004f0eb8, d_004f0eb8::f_004f0eb8);

// f_004f0f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0f80 {

struct __attribute__((packed)) Object_004f0f80_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f0f80_0, word_4, 0x4);  // (from the original)


u32 f_004f0f80(gptr<Object_004f0f80_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r12_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r12_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r12_3 = 0;
    u32 r4_1 = 0;
    u32 r12_4 = 0;
    r13 = r13 - 8;
    r0_1 = arg0->word_4;
    r5 = 0u;
    r2_1 = *gptr<u32>(r0_1 + 0x174u);  // (from the original)
    r12_1 = *gptr<u32>(r0_1 + 0x170u);  // (from the original)
    if (r12_1 == r2_1) {
        r0_2 = *gptr<u32>(r0_1 + 8u);
        r2_2 = r0_2 + 0xb8u;  // (from the original)
        r12_2 = *gptr<u32>(r0_2 + 0xb8u);  // (from the original)
        if (r12_2 == 0) {
            r12_1 = r5;
        } else {
            r12_1 = r12_2 + r2_2;
        }
        r2_1 = r12_1 + (*gptr<u32>(r0_2 + 0xb4u) << 2);  // (from the original)
    }
    r0_3 = r2_1 - r12_1;
    r2_3 = *gptr<u32>(r0 + 4u);
    r0 = r0_3 >> 2;
    r3 = *gptr<u32>(r2_3 + 0x170u);  // (from the original)
    if (r3 == *gptr<u32>(r2_3 + 0x174u)) {  // (from the original)
        ea_1 = *gptr<u32>(r2_3 + 8u) + 0xb8u;  // (from the original)
        r3_1 = *gptr<u32>(ea_1);
        if (r3_1 == 0) {
            r3 = r5;
        } else {
            r3 = r3_1 + ea_1;
        }
    }
    r2 = 0u;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    do {
L_4f0ffc:;
        r12_3 = r3 + (r2 << 2);
        r4_1 = *gptr<u32>(r12_3);
        if (r4_1 == 0) {
            r12_4 = r5;
        } else {
            r12_4 = r12_3 + r4_1;
        }
        *gptr<u32>(r1 + (r2 << 2)) = u32(r12_4);
        r2 = r2 + 1u;
        guest::preempt();
    } while (s32(r2) < s32(r0));
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004f0f80
GUEST_EXPORT(0x004f0f80, d_004f0f80::f_004f0f80);

// f_004f1164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1164 {

struct __attribute__((packed)) Object_004f1164_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f1164_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_004f1164_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f1164_1, word_8, 0x8);  // (from the original)


u32 f_004f1164(gptr<Object_004f1164_0> arg0, gptr<Object_004f1164_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 b_1 = 0;
    u32 b_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    r2_1 = arg0->word_4;
    S0_1 = std::bit_cast<float>(arg1->word_8);
    r0_1 = *gptr<u32>(r2_1 + 0x150u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    ea_1 = r2_1 + 0x28u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    r1_1 = *gptr<u32>(ea_1 + 0x12cu);  // (from the original)
    if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2;
    }
    b_1 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
    b_2 = u32(s32(*gptr<u32>(r0_2 + 0x10u) - b_1) >> 2);  // (from the original)
    if (s32(r1_1) >= s32(b_2)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2;
    }
    r2_2 = *gptr<u32>(r0_2 + 0x28u);  // (from the original)
    if (r2_2 == 0 || r2_2 >> 0x1f != (r2_2 & (r2_2 ^ r2_2)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2;
    }
    r1_2 = r1_1 * r2_2 + 0u;
    r0_3 = *gptr<u32>(r0_2 + 0x1cu) + (r1_2 << 2);  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_004f1164
GUEST_EXPORT(0x004f1164, d_004f1164::f_004f1164);

// f_004f1270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1270 {

struct __attribute__((packed)) Object_004f1270_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f1270_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)
inline constexpr guest::Function<0x004f0eb8, u32(u32, u32, u32, u32)> call_004f0eb8;  // (from the original)

u32 f_004f1270(gptr<Object_004f1270_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 8u;
    if (arg0->word_4 != 0) {
        call_004f0eb8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 8u;
    return call_004ee39c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f1270
GUEST_EXPORT(0x004f1270, d_004f1270::f_004f1270);

// f_004f14ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f14ac {

inline constexpr guest::Function<0x004ee514, u32(u32, u32, u32, u32)> call_004ee514;  // (from the original)

u32 f_004f14ac() {
    return call_004ee514(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f14ac
GUEST_EXPORT(0x004f14ac, d_004f14ac::f_004f14ac);

// f_004f1510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1510 {

struct __attribute__((packed)) Object_004f1510_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(Object_004f1510_0, word_e0, 0xe0);  // (from the original)

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_004f1510(gptr<Object_004f1510_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r2_1 = 0u;
    ea_1 = r0 + 0xe0u;  // (from the original)
    r3_1 = arg0->word_e0;
    r5_1 = r13;
    if (r3_1 == 0) {
        r0_1 = r2_1;
    } else {
        r0_1 = ea_1 + r3_1;
    }
    ea_2 = r0_1 + 0x1cu;  // (from the original)
    r3_2 = *gptr<u32>(ea_2);
    if (r3_2 != 0) {
        r2_1 = r3_2 + ea_2;
    }
    zf_1 = r2_1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    *gptr<u32>(r13) = u32(r2_1);
    if (zf_1) {
        r0_5 = ~0u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fa9d0(r1, r1, r2_1, r3_2);
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00736a1c(r5_1, r1, r0_2, r3_3);
    r1 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r0_5 = ~0u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    r1_1 = *gptr<u32>(r13);
    r0_4 = u32(s32(r0_3 - r1_1 - 0x1cu) >> 4);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_004f1510
GUEST_EXPORT(0x004f1510, d_004f1510::f_004f1510);

// f_004f1648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1648 {

struct __attribute__((packed)) Object_004f1648_0 {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Object_004f1648_0, word_c0, 0xc0);  // (from the original)

inline guest::global<u32, 0x004f1774> global_004f1774;  // (from the original)
inline guest::global<u32, 0x004f1778> global_004f1778;  // (from the original)
inline guest::global<u32, 0x004f177c> global_004f177c;  // (from the original)
inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_004f1648(gptr<Object_004f1648_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r11_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r10_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_3 = 0;
    u32 ea_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r11_1 = 0u;
    ea_1 = r13 + 0x38u;  // (from the original)
    r5_1 = *gptr<u32>(ea_1);
    r6_1 = *gptr<u32>(ea_1 + 4);
    r7_1 = *gptr<u32>(ea_1 + 8);
    ea_2 = r0 + 0xc0u;  // (from the original)
    r2_1 = arg0->word_c0;
    r10_1 = r13;
    if (r2_1 == 0) {
        r0_1 = r11_1;
    } else {
        r0_1 = ea_2 + r2_1;
    }
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    *gptr<u32>(r13) = u32(r0_1);
    if (zf_1) {
        goto L_4f16bc;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_002fa9d0(r1, r1, r2_1, r3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_3 = call_00736a1c(r10_1, r1, r0_2, r3_1);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0_3 == 0) {
        goto L_4f16bc;
    }
    ea_3 = r0_3 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea_3);
    if (r1 != 0) {
        r11_1 = r1 + ea_3;
    }
    goto L_4f16c0;
L_4f16bc:;
    r11_1 = 0u;
L_4f16c0:;
    if (r11_1 == 0) {
        r0_4 = 0u;
        goto L_4f176c;
    }
    r4_1 = r13 + 8u;
    S0_2 = std::bit_cast<float>(*global_004f1774);
    S1_2 = std::bit_cast<float>(*global_004f1778);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_2));
    r0_5 = r13;
    *gptr<u32>(r4_1) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r4_1 + 4) = u32(std::bit_cast<u32>(S1_2));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_004f2b8c(r0_5, r11_1, r2, r11_1);
    r3_2 = guest::cpu()->r[3];
    S1_3 = guest::cpu()->s[1];
    S0_3 = std::bit_cast<float>(*global_004f177c);
    if (r3 < 0x100u) {  // (from the original)
        S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) * S0_3;
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1_3));
    }
    if (r5_1 < 0x100u) {  // (from the original)
        S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5_1)))) * S0_3;
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S1_3));
    }
    if (r6_1 < 0x100u) {  // (from the original)
        S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1)))) * S0_3;
        *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1_3));
    }
    if (r7_1 < 0x100u) {  // (from the original)
        S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7_1))));
        S0_3 = S1_3 * S0_3;
        *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    }
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_004f2c10(r3_2, r1_1, r2, r3_2);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0_4 = 1u;
L_4f176c:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
}

}  // namespace d_004f1648
GUEST_EXPORT(0x004f1648, d_004f1648::f_004f1648);

// f_004f1b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1b64 {

inline constexpr guest::Function<0x004f1918, u32(u32, u32, u32, u32)> call_004f1918;  // (from the original)

u32 f_004f1b64(float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_004f1918(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_004f1b64
GUEST_EXPORT(0x004f1b64, d_004f1b64::f_004f1b64);

// f_004f1cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1cdc {

inline constexpr guest::Function<0x004f1b8c, u32(u32, u32, u32, u32)> call_004f1b8c;  // (from the original)

u32 f_004f1cdc(float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r1_1 = r13;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_004f1b8c(guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_004f1cdc
GUEST_EXPORT(0x004f1cdc, d_004f1cdc::f_004f1cdc);

// f_004f1d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1d04 {

struct __attribute__((packed)) Object_004f1d04_0 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
    u32 word_c0;
};
GUEST_OFFSET(Object_004f1d04_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_004f1d04_0, word_c0, 0xc0);  // (from the original)


void f_004f1d04(gptr<Object_004f1d04_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 ea_2 = 0;
    u32 r4_2 = 0;
    u32 res_1 = 0;
    u32 v_1 = 0;
    r3 = arg0->word_bc;
    r2 = 0u;
    nf_1 = r3 >> 0x1f;  // (from the original)
    zf_1 = r3 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r12 = 0u;
    }
    if (zf_1 || nf_1 != 0u) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return;
    }
    ea_1 = r13 - 4u;
    *gptr<u32>(ea_1) = u32(r4);
    r13 = ea_1;
    do {
L_4f1d1c:;
        r4_1 = arg0->word_c0;
        r1_1 = r0 + 0xc0u;  // (from the original)
        if (r4_1 == 0) {
            r1_2 = r12;
        } else {
            r1_2 = r1_1 + r4_1;
        }
        if (!(r1_2 == 0)) {
            ea_2 = r1_2 + (r2 << 4) + 0x28u;  // (from the original)
            r4_2 = *gptr<u32>(ea_2);
            if (r4_2 == 0) {
                r1_2 = r12;
            } else {
                r1_2 = ea_2 + r4_2;
            }
        }
        r2 = r2 + 1u;
        res_1 = r2 - r3;
        *gptr<u32>(r1_2 + 0x18u) = u32(*gptr<u32>(r1_2 + 0x18u) | 0x10u);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ r3) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    v_1 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = v_1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_004f1d04
GUEST_EXPORT(0x004f1d04, d_004f1d04::f_004f1d04);

// f_004f1d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1d6c {

struct __attribute__((packed)) Object_004f1d6c_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_004f1d6c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_004f1d6c_0, word_30, 0x30);  // (from the original)


void f_004f1d6c(gptr<Object_004f1d6c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_1 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r5_1 = 0;
    u32 r2_4 = 0;
    u32 r2_5 = 0;
    u32 ea_3 = 0;
    u32 r5_2 = 0;
    u32 r2_6 = 0;
    r13 = r13 - 0x1c;  // (from the original)
    r12 = r1 | 0x2000000u;  // (from the original)
    r10 = 0u;
    r9 = arg0->word_2c;
    nf_1 = r9 >> 0x1f;  // (from the original)
    zf_1 = r9 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r8 = 0u;
    }
    if (zf_1 || nf_1 != 0u) {
        goto L_4f1e3c;
    }
L_4f1d88:;
    r2_1 = arg0->word_30;
    r1_1 = r0 + 0x30u;  // (from the original)
    if (r2_1 == 0) {
        r1_2 = r8;
    } else {
        r1_2 = r1_1 + r2_1;
    }
    ea_1 = r1_2 + (r10 << 2);
    r2_2 = *gptr<u32>(ea_1);
    if (r2_2 == 0) {
        r1_3 = r8;
    } else {
        r1_3 = ea_1 + r2_2;
    }
    r2_3 = r1_3 + 0x10u;  // (from the original)
    r3_1 = *gptr<u32>(r1_3 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r1_3 + 0xcu);  // (from the original)
    if (r3_1 == 0) {
        r6 = r8;
    } else {
        r6 = r3_1 + r2_3;
    }
    r7 = r6 + (r1 << 2);
    if (r6 == r7) {
        goto L_4f1e30;
    }
L_4f1dd0:;
    r1_4 = *gptr<u32>(r6);
    r3 = 0u;
    if (r1_4 == 0) {
        r1 = r8;
    } else {
        r1 = r1_4 + r6;
    }
    r4 = *gptr<u32>(r1);
    if (r4 < 0u || r4 == 0) {
        goto L_4f1e24;
    }
    do {
L_4f1df0:;
        ea_2 = r1 + 4u;
        r5_1 = *gptr<u32>(ea_2);
        r2_4 = r1 + 4u;
        if (r5_1 == 0) {
            r2_5 = r8;
        } else {
            r2_5 = r2_4 + r5_1;
        }
        ea_3 = r2_5 + (r3 << 2);
        r5_2 = *gptr<u32>(ea_3);
        r3 = r3 + 1u;
        if (r5_2 == 0) {
            r2_6 = r8;
        } else {
            r2_6 = ea_3 + r5_2;
        }
        *gptr<u32>(r2_6 + 0x14u) = u32(r12);  // (from the original)
        guest::preempt();
    } while (r3 < r4);
L_4f1e24:;
    r6 = r6 + 4u;
    if (r6 != r7) {
        guest::preempt();
        goto L_4f1dd0;
    }
L_4f1e30:;
    r10 = r10 + 1u;
    if (s32(r10) < s32(r9)) {
        guest::preempt();
        goto L_4f1d88;
    }
L_4f1e3c:;
    r13 = r13 + 0x1c;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_004f1d6c
GUEST_EXPORT(0x004f1d6c, d_004f1d6c::f_004f1d6c);

// f_004f1e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1e44 {

struct __attribute__((packed)) Object_004f1e44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f1e44_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x004f1ec8> global_004f1ec8;  // (from the original)
inline guest::global<u32, 0x004f1ecc> global_004f1ecc;  // (from the original)
inline constexpr guest::Function<0x0056a1d4, u32(u32, u32, u32, u32)> call_0056a1d4;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)

u32 f_004f1e44(gptr<Object_004f1e44_0> arg0, gptr<Float4> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 r1_1 = 0;
    u32 r5_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_3 = 0;
    float S2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_4 = 0;
    float S2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    float S0_4 = 0;
    float S1_5 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r12_1 = 0;
    u32 r1_5 = 0;
    r0_1 = arg0->word_8;
    r13 = r13 - 0x20u;  // (from the original)
    S1_1 = arg1->v[1];
    S2_1 = arg1->v[2];
    r1_1 = r0_1 + 0xcu;  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r0_1 + 8u) = u32(std::bit_cast<u32>(arg1->v[0]));
    S0_1 = std::bit_cast<float>(*global_004f1ec8);
    *gptr<u32>(r1_1) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1_1 + 4) = u32(std::bit_cast<u32>(S2_1));
    r0_2 = r13;
    S1_2 = std::bit_cast<float>(*global_004f1ecc);
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u16>(r13 + 0xcu) = u16(r2);  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    call_0056a1d4(r0_2, r1_2, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    *gptr<u16>(r13 + 0xcu) = u16(r3);  // (from the original)
    r1_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_2;
    call_0056a224(r0_3, r1_3, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    *gptr<u16>(r13 + 0xcu) = u16(r5_1);  // (from the original)
    r1_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_3;
    call_0056a1d4(r0_4, r1_4, r2_2, r3_2);
    S0_4 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    r0_5 = *gptr<u32>(r0 + 8u);
    r3_3 = *gptr<u32>(r13 + 4);
    r12_1 = *gptr<u32>(r13 + 8);
    r1_5 = r0_5 + 0x18u;  // (from the original)
    *gptr<u32>(r0_5 + 0x14u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r1_5) = u32(r3_3);
    *gptr<u32>(r1_5 + 4) = u32(r12_1);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_5;
    return r0_5;
}

}  // namespace d_004f1e44
GUEST_EXPORT(0x004f1e44, d_004f1e44::f_004f1e44);

// f_004f2198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2198 {

inline constexpr guest::Function<0x004ee4ec, u32(u32, u32, u32, u32)> call_004ee4ec;  // (from the original)
inline constexpr guest::Function<0x0054a9f0, u32(u32, u32, u32, u32)> call_0054a9f0;  // (from the original)

u32 f_004f2198(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_004ee4ec(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x902b34u);  // (from the original)
    r0_2 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_1 + 8u) = u32(0u);
    r0_3 = call_0054a9f0(r0_2, 0u, r0_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_4 = r0_3 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_004f2198
GUEST_EXPORT(0x004f2198, d_004f2198::f_004f2198);

// f_004f220c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f220c {


u32 f_004f220c(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 res_2 = 0;
    u32 r1_3 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r12_1 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
L_4f220c:;
    r2_1 = *gptr<u32>(r0);
    if (r2_1 == 0x20000002u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2_1 != 0x20000004u) {  // (from the original)
        if (r2_1 == 0x20000009u) {  // (from the original)
            r1_1 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(r0 + 0x30u) = u32(r1_1);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
        res_1 = r2_1 - 0x20000011u;  // (from the original)
        if (res_1 != 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 == 0) {
            r1_2 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(r0 + 0x30u) = u32(r1_2);  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return r0;
        }
        res_2 = 0x20000011u & ~*gptr<u32>(r0);  // (from the original)
        if (res_2 != 0) {
            r0 = 0u;
        }
        r1_3 = r1 | 0x2000000u;  // (from the original)
        *gptr<u32>(r0 + 0x30u) = u32(r1_3);  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0;
    }
    r3_1 = r0 + 0x1cu;  // (from the original)
    r2_2 = r0;
    r12_1 = *gptr<u32>(r3_1);
    r0 = 0u;
    if (r12_1 == 0) {
        r3_2 = r0;
    } else {
        r3_2 = r3_1 + r12_1;
    }
    if (r3_2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2_3 = r2_2 + 0x1cu;  // (from the original)
    if (r12_1 != 0) {
        r0 = r12_1 + r2_3;
    }
    guest::preempt();
    goto L_4f220c;
}

}  // namespace d_004f220c
GUEST_EXPORT(0x004f220c, d_004f220c::f_004f220c);

// f_004f2638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2638 {

struct __attribute__((packed)) Object_004f2638_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f2638_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008a29a8> global_008a29a8;  // (from the original)

u32 f_004f2638(gptr<Object_004f2638_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = *gptr<u32>(arg0->word_8 + 0x24u) + (r1 << 2);  // (from the original)
    r1_1 = *global_008a29a8;
    *gptr<u32>(r0_1) = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_004f2638
GUEST_EXPORT(0x004f2638, d_004f2638::f_004f2638);

// f_004f2a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2a18 {

inline constexpr guest::Function<0x00495534, u32(u32, u32, u32, u32)> call_00495534;  // (from the original)
inline constexpr guest::Function<0x0049a0e4, u32(u32, u32, u32, u32)> call_0049a0e4;  // (from the original)
inline constexpr guest::Function<0x004eb148, u32(u32, u32, u32, u32)> call_004eb148;  // (from the original)
inline constexpr guest::Function<0x007b1038, u32(u32, u32, u32, u32)> call_007b1038;  // (from the original)

u32 f_004f2a18(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r5 = 0x9c90c4u;  // (from the original)
    do {
L_4f2a24:;
        r0_1 = *gptr<u32>(r5 + (r4 << 2));
        r0_2 = call_0049a0e4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(3u));
    call_004eb148(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_3 = *gptr<u32>(0x952a20u + 0x18u);  // (from the original)
    call_00495534(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    call_007b1038(0x3fffu, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(*gptr<u32>(*gptr<u32>(0x952a20u + 0x18u) + 0xc0u)) = u32(0u);  // (from the original)
    r0_4 = 1u - *gptr<u32>(0x952a20u + 0x28u);  // (from the original)
    *gptr<u32>(0x952a20u + 0x28u) = u32(r0_4);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_4;
}

}  // namespace d_004f2a18
GUEST_EXPORT(0x004f2a18, d_004f2a18::f_004f2a18);

// f_004f2d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2d48 {

inline guest::global<u32, 0x004f2e0c> global_004f2e0c;  // (from the original)
inline guest::global<u32, 0x004f2e10> global_004f2e10;  // (from the original)
inline guest::global<u32, 0x004f2e14> global_004f2e14;  // (from the original)
inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)

u32 f_004f2d48(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    u32 r1_1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    ea_1 = r13 + 0x28u;  // (from the original)
    r6_1 = *gptr<u32>(ea_1);
    r7_1 = *gptr<u32>(ea_1 + 4);
    if (r0 != 0) {
        S0_1 = std::bit_cast<float>(*global_004f2e0c);
        S1_1 = std::bit_cast<float>(*global_004f2e10);
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0_1));
        r12_1 = r13 + 8u;
        r0_1 = r13;
        *gptr<u32>(r12_1) = u32(std::bit_cast<u32>(S0_1));
        *gptr<u32>(r12_1 + 4) = u32(std::bit_cast<u32>(S1_1));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_004f2b8c(r0_1, r0, r1, r3);
        r3_1 = guest::cpu()->r[3];
        S1_2 = guest::cpu()->s[1];
        S0_2 = std::bit_cast<float>(*global_004f2e14);
        if (r2 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0_2;
            *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1_2));
        }
        if (r3_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) * S0_2;
            *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S1_2));
        }
        if (r6_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1)))) * S0_2;
            *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1_2));
        }
        if (r7_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7_1))));
            S0_2 = S1_2 * S0_2;
            *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0_2));  // (from the original)
        }
        r1_1 = r13;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_004f2c10(r0, r1_1, r1, r3_1);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = 1u;
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f2d48
GUEST_EXPORT(0x004f2d48, d_004f2d48::f_004f2d48);

// f_004f2ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2ef0 {

inline constexpr guest::Function<0x004a5b04, u32(u32, u32, u32, u32)> call_004a5b04;  // (from the original)

u32 f_004f2ef0(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 v_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 v_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0_1 = *gptr<u32>(r13);
    if (r0_1 == 0) {
        r13 = r13 + 0xcu;  // (from the original)
        v_1 = *gptr<u32>(r13);
        r13 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_004a5b04(r0_2, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0xcu;  // (from the original)
    v_2 = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004f2ef0
GUEST_EXPORT(0x004f2ef0, d_004f2ef0::f_004f2ef0);

// f_004f2f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f48 {

inline guest::global<u32, 0x004f2f5c> global_004f2f5c;  // (from the original)

u32 f_004f2f48(u32 r0) {
    u32 zf_1 = 0;
    u32 res_1 = 0;
    float S0_1 = 0;
    zf_1 = r0 == 0;
    if (!zf_1) {
        res_1 = r0 + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        r0 = res_1;
    }
    if (zf_1) {
        S0_1 = std::bit_cast<float>(*global_004f2f5c);
    } else {
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->s[0] = S0_1;
    return r0;
}

}  // namespace d_004f2f48
GUEST_EXPORT(0x004f2f48, d_004f2f48::f_004f2f48);

// f_004f2f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f60 {

inline guest::global<u32, 0x004f2f80> global_004f2f80;  // (from the original)

u32 f_004f2f60(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    float S0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    zf_1 = r0 == 0;
    S0_1 = std::bit_cast<float>(*global_004f2f80);
    if (!zf_1) {
        res_1 = r0 + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        r0 = res_1;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return r0;
    }
    r1_1 = *gptr<u32>(r0);
    if ((r1_1 & 1u) != 0) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    return r0;
}

}  // namespace d_004f2f60
GUEST_EXPORT(0x004f2f60, d_004f2f60::f_004f2f60);

// f_004f3068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3068 {

inline guest::global<u8, 0x00952a20> global_00952a20;  // (from the original)
inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> call_004efb0c;  // (from the original)
inline constexpr guest::Function<0x006ef650, u32(u32, u32, u32, u32)> call_006ef650;  // (from the original)

u32 f_004f3068(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r1_1 = u32(*global_00952a20);
    if (r1_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_006ef650(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_004efb0c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = *gptr<u32>(*gptr<u32>(0x952a20u + 0x18u) + 0xc0u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_004f3068
GUEST_EXPORT(0x004f3068, d_004f3068::f_004f3068);

// f_004f33dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f33dc {

struct __attribute__((packed)) Object_004f33dc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_004f33dc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f33dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004f33dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004f33dc_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_004f33dc(gptr<Object_004f33dc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2_1 = r0 + 4u;
    arg0->word_0 = u32(0x903054u);  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->byte_c = u8(0u);
    r1_1 = *gptr<u32>(0xad662cu + 4u);  // (from the original)
    call_0013e7d8(0xad662cu, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0) = u32(0x902bc8u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(0u);  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(1u);  // (from the original)
    r0_1 = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(0u);  // (from the original)
    call_002f825c(r0_1, 0x11u, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_004f33dc
GUEST_EXPORT(0x004f33dc, d_004f33dc::f_004f33dc);

// f_004f3a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3a64 {


u32 f_004f3a64(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    r0_1 = r1 - 0xau;  // (from the original)
    zf_1 = r0_1 == 5u;
    cf_1 = r0_1 >= 5u;
    if (!cf_1 || zf_1) {
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_004f3a64
GUEST_EXPORT(0x004f3a64, d_004f3a64::f_004f3a64);

// f_004f3b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3b48 {


u32 f_004f3b48(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r2 = 0x896f28u;  // (from the original)
    r0 = 0u;
    do {
L_4f3b50:;
        r3_1 = r2 + (r0 << 3);
        if (!(*gptr<u32>(r3_1) != r1)) {
            r0_1 = *gptr<u32>(r2 + (r0 << 3) + 4u);
            return r0_1;
        }
        if (!(*gptr<u32>(r3_1 + 8u) != r1)) {
            r0_2 = *gptr<u32>(r2 + (r0 << 3) + 0xcu);  // (from the original)
            return r0_2;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(6u));
    r0_3 = ~0u;
    return r0_3;
}

}  // namespace d_004f3b48
GUEST_EXPORT(0x004f3b48, d_004f3b48::f_004f3b48);

// f_004f4e58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f4e58 {

struct __attribute__((packed)) Object_004f4e58_0 {
    u32 word_0;
    u8 unknown_4[0x100];  // (not used here)
    u32 word_104;
    u8 byte_108;
    u8 unknown_109[0x3];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(Object_004f4e58_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f4e58_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_004f4e58_0, byte_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_004f4e58_0, word_10c, 0x10c);  // (from the original)

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_004f4e58(gptr<Object_004f4e58_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = 0u;
    arg0->word_0 = u32(0x902fc8u);  // (from the original)
    arg0->word_104 = u32(r7);
    arg0->byte_108 = u8(r7);
    arg0->word_10c = u32(r1);
    r0_1 = r5 + 4u;
    call_002f825c(r0_1, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    r2_1 = r5 + 0xa18u;  // (from the original)
    *gptr<u32>(r5) = u32(0x902c58u);  // (from the original)
    *gptr<u32>(r5 + 0x110u) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0xa14u) = u32(r7);  // (from the original)
    *gptr<u32>(r2_1) = u32(~0u);
    *gptr<u32>(r2_1 + 4) = u32(r7);
    r4_1 = r5 + 0xa14u;  // (from the original)
    r0_2 = r5 + 0x114u;  // (from the original)
    call_002f825c(r0_2, 0x100u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x28u);  // (from the original)
    r4 = 0u;
    do {
L_4f4ec4:;
        r6_1 = r5 + (r4 << 4);
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = u32(r7);  // (from the original)
        r0_3 = r6_1 + 0x214u;  // (from the original)
        call_0013fac4(r0_3, 0x10u, 1u, guest::cpu()->r[3]);  // (from the original)
        r0_4 = r6_1 + 0x614u;  // (from the original)
        call_0013fac4(r0_4, 0x10u, 1u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0xa14u)) > s32(r4));  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r5;
}

}  // namespace d_004f4e58
GUEST_EXPORT(0x004f4e58, d_004f4e58::f_004f4e58);

// f_004f524c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f524c {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)
inline constexpr guest::Function<0x004dae58, u32(u32, u32, u32, u32)> call_004dae58;  // (from the original)
inline constexpr guest::Function<0x004f5144, u32(u32, u32, u32, u32)> call_004f5144;  // (from the original)

u32 f_004f524c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 zf_3 = 0;
    u32 zf_4 = 0;
    u32 cf_2 = 0;
    u32 zf_5 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r3_2 = 0;
    u32 zf_6 = 0;
    u32 zf_7 = 0;
    u32 cf_3 = 0;
    u32 zf_8 = 0;
    u32 zf_9 = 0;
    u32 cf_4 = 0;
    u32 zf_10 = 0;
    u32 r0_4 = 0;
    u32 zf_11 = 0;
    u32 zf_12 = 0;
    u32 cf_5 = 0;
    u32 r1_5 = 0;
    u32 zf_13 = 0;
    u32 zf_14 = 0;
    u32 cf_6 = 0;
    u32 r1_6 = 0;
    u32 zf_15 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = 0u;
    r6 = r5;
    r10 = r0;
    r7 = r5;
    r1_1 = *global_0095e0fc;
    r0_1 = *gptr<u32>(r1_1 + 0x14u);  // (from the original)
    if (r0_1 == 0 || r0_1 >> 0x1f != (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        goto L_4f5460;
    }
    r1_2 = *gptr<u32>(r1_1 + 0x10u);  // (from the original)
    r2_1 = ~1u;
    r4 = u32(*gptr<u16>(r1_2 + (r2_1 + (r0_1 << 1))));
    r0_2 = call_004dae58(r4, r1_2, r2_1, r3);
    r1_3 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        r0_2 = u32(*gptr<u16>(r0_2 + 2u));
    }
    r8 = 0x896f58u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_2 == 0;
    }
    if (zf_1) {
        r0_2 = r4;
    }
    r9 = r8 + 0x170u;  // (from the original)
    if (r0_2 != r4) {
        goto L_4f5324;
    }
    r0 = r4 - 0x3041u;  // (from the original)
    zf_2 = r0 == 0x52u;  // (from the original)
    cf_1 = r0 >= 0x52u;  // (from the original)
    if (!cf_1 || zf_2) {
        r0 = 0u;
    }
    if (cf_1 && !zf_2) {
        goto L_4f52e8;
    }
    do {
L_4f52c0:;
        r1_3 = r8 + (r0 << 3);
        r3_1 = u32(*gptr<u16>(r1_3 + 2u));
        zf_3 = r3_1 == r4;
        if (!zf_3) {
            r2 = u32(*gptr<u16>(r1_3 + 0xau));  // (from the original)
            zf_3 = r2 == r4;
        }
        if (zf_3) {
            goto L_4f5324;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f5328;
L_4f52e8:;
    r0 = r4 - 0x30a1u;  // (from the original)
    zf_4 = r0 == 0x55u;  // (from the original)
    cf_2 = r0 >= 0x55u;  // (from the original)
    if (!cf_2 || zf_4) {
        r0 = 0u;
    }
    if (cf_2 && !zf_4) {
        goto L_4f5328;
    }
    do {
L_4f52fc:;
        r1_3 = r9 + (r0 << 3);
        r3_1 = u32(*gptr<u16>(r1_3 + 2u));
        zf_5 = r3_1 == r4;
        if (!zf_5) {
            r2 = u32(*gptr<u16>(r1_3 + 0xau));  // (from the original)
            zf_5 = r2 == r4;
        }
        if (zf_5) {
            goto L_4f5324;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f5328;
L_4f5324:;
    r5 = 1u;
L_4f5328:;
    r0_3 = call_004dae58(r4, r1_3, r2, r3_1);
    r1_4 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    zf_6 = r0_3 == 0;
    if (!zf_6) {
        r0_3 = u32(*gptr<u16>(r0_3 + 4u));
        zf_6 = r0_3 == 0;
    }
    if (zf_6) {
        r0_3 = r4;
    }
    if (r0_3 != r4) {
        goto L_4f53c0;
    }
    r0 = r4 - 0x3041u;  // (from the original)
    zf_7 = r0 == 0x52u;  // (from the original)
    cf_3 = r0 >= 0x52u;  // (from the original)
    if (!cf_3 || zf_7) {
        r0 = 0u;
    }
    if (cf_3 && !zf_7) {
        goto L_4f5384;
    }
    do {
L_4f535c:;
        r1_4 = r8 + (r0 << 3);
        r3_2 = u32(*gptr<u16>(r1_4 + 4u));
        zf_8 = r3_2 == r4;
        if (!zf_8) {
            r2 = u32(*gptr<u16>(r1_4 + 0xcu));  // (from the original)
            zf_8 = r2 == r4;
        }
        if (zf_8) {
            goto L_4f53c0;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f53c4;
L_4f5384:;
    r0 = r4 - 0x30a1u;  // (from the original)
    zf_9 = r0 == 0x55u;  // (from the original)
    cf_4 = r0 >= 0x55u;  // (from the original)
    if (!cf_4 || zf_9) {
        r0 = 0u;
    }
    if (cf_4 && !zf_9) {
        goto L_4f53c4;
    }
    do {
L_4f5398:;
        r1_4 = r9 + (r0 << 3);
        r3_2 = u32(*gptr<u16>(r1_4 + 4u));
        zf_10 = r3_2 == r4;
        if (!zf_10) {
            r2 = u32(*gptr<u16>(r1_4 + 0xcu));  // (from the original)
            zf_10 = r2 == r4;
        }
        if (zf_10) {
            goto L_4f53c0;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f53c4;
L_4f53c0:;
    r6 = 1u;
L_4f53c4:;
    r0_4 = call_004dae58(r4, r1_4, r2, r3_2);
    zf_11 = r0_4 == 0;
    if (!zf_11) {
        r0_4 = u32(*gptr<u16>(r0_4 + 6u));
        zf_11 = r0_4 == 0;
    }
    if (zf_11) {
        r0_4 = r4;
    }
    if (r0_4 != r4) {
        goto L_4f545c;
    }
    r0 = r4 - 0x3041u;  // (from the original)
    zf_12 = r0 == 0x52u;  // (from the original)
    cf_5 = r0 >= 0x52u;  // (from the original)
    if (!cf_5 || zf_12) {
        r0 = 0u;
    }
    if (cf_5 && !zf_12) {
        goto L_4f5420;
    }
    do {
L_4f53f8:;
        r1_5 = r8 + (r0 << 3);
        zf_13 = u32(*gptr<u16>(r1_5 + 6u)) == r4;
        if (!zf_13) {
            zf_13 = u32(*gptr<u16>(r1_5 + 0xeu)) == r4;  // (from the original)
        }
        if (zf_13) {
            goto L_4f545c;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f5460;
L_4f5420:;
    r0 = r4 - 0x30a1u;  // (from the original)
    zf_14 = r0 == 0x55u;  // (from the original)
    cf_6 = r0 >= 0x55u;  // (from the original)
    if (!cf_6 || zf_14) {
        r0 = 0u;
    }
    if (cf_6 && !zf_14) {
        goto L_4f5460;
    }
    do {
L_4f5434:;
        r1_6 = r9 + (r0 << 3);
        zf_15 = u32(*gptr<u16>(r1_6 + 6u)) == r4;
        if (!zf_15) {
            zf_15 = u32(*gptr<u16>(r1_6 + 0xeu)) == r4;  // (from the original)
        }
        if (zf_15) {
            goto L_4f545c;
        }
        r0 = r0 + 2u;
        guest::preempt();
    } while (s32(r0) < s32(0x2eu));  // (from the original)
    goto L_4f5460;
L_4f545c:;
    r7 = 1u;
L_4f5460:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_004f5144(r10, r5, r6, r7);
}

}  // namespace d_004f524c
GUEST_EXPORT(0x004f524c, d_004f524c::f_004f524c);

// f_004f6674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f6674 {

struct __attribute__((packed)) Object_004f6674_0 {
    u32 word_0;
    u8 unknown_4[0x100];  // (not used here)
    u32 word_104;
    u8 byte_108;
    u8 unknown_109[0x3];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(Object_004f6674_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f6674_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_004f6674_0, byte_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_004f6674_0, word_10c, 0x10c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_004f6674(gptr<Object_004f6674_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    arg0->word_0 = u32(0x902fc8u);  // (from the original)
    arg0->word_104 = u32(r5);
    arg0->byte_108 = u8(r5);
    arg0->word_10c = u32(r1);
    r0_1 = r4 + 4u;
    call_002f825c(r0_1, 0x100u, r2, r3);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_2 = ~0u;
    r2_1 = r4 + 0x328u;  // (from the original)
    *gptr<u32>(r4) = u32(0x902c84u);  // (from the original)
    *gptr<u32>(r4 + 0x110u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x318u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r4 + 0x314u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x31cu) = u32(r0_2);  // (from the original)
    *gptr<u32>(r4 + 0x320u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r4 + 0x324u) = u32(r0_2);  // (from the original)
    *gptr<u32>(r2_1) = u32(r0_2);
    *gptr<u32>(r2_1 + 4) = u32(r5);
    r0_3 = r4 + 0x114u;  // (from the original)
    call_002f825c(r0_3, 0x100u, r2_1, r3_1);  // (from the original)
    r0 = 0x3bu;  // (from the original)
    r1 = 0u;
    r2 = 1u;
    *gptr<u32>(r4 + 0x314u) = u32(r0);  // (from the original)
    do {
L_4f66e8:;
        r3_2 = r4 + (r1 << 1);
        *gptr<u32>(r4 + (r1 << 2) + 0x114u) = u32(r5);  // (from the original)
        *gptr<u8>(r3_2 + 0x214u) = u8(r2);  // (from the original)
        *gptr<u8>(r3_2 + 0x294u) = u8(r2);  // (from the original)
        *gptr<u8>(r3_2 + 0x215u) = u8(r2);  // (from the original)
        res_1 = r0 - 1u;
        r0 = res_1;
        r1 = r1 + 1u;
        *gptr<u8>(r3_2 + 0x295u) = u8(r2);  // (from the original)
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r4;
}

}  // namespace d_004f6674
GUEST_EXPORT(0x004f6674, d_004f6674::f_004f6674);

// f_004f76a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f76a8 {

struct __attribute__((packed)) Object_004f76a8_0 {
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
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u8 byte_40;
};
GUEST_OFFSET(Object_004f76a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_004f76a8_0, byte_40, 0x40);  // (from the original)


void f_004f76a8(gptr<Object_004f76a8_0> arg0) {
    u32 r2_1 = 0;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(r2_1);
    arg0->word_20 = u32(r2_1);
    arg0->word_24 = u32(r2_1);
    arg0->word_34 = u32(0u);
    arg0->word_28 = u32(r2_1);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0u);
    arg0->word_2c = u32(r2_1);
    arg0->word_30 = u32(~0u);
    arg0->byte_40 = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_004f76a8
GUEST_EXPORT(0x004f76a8, d_004f76a8::f_004f76a8);

// f_004f778c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f778c {

inline guest::global<u32, 0x00ad6638> global_00ad6638;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004f778c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x902d20u);  // (from the original)
    r0_2 = r0_1 + 0x30u;  // (from the original)
    call_002fbb30(r0_2, r1, 0x44u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = *gptr<u32>(r0_1 + 0x4cu);  // (from the original)
    r0_3 = 0u;
    *gptr<u8>(r0_1 + 0x74u) = u8(r0_3);  // (from the original)
    zf_1 = r2_1 + 0x64u == 0;  // (from the original)
    if (zf_1) {
        r0_3 = *global_00ad6638;
    }
    if (zf_1) {
        *gptr<u32>(r0_1 + 0x4cu) = u32(r0_3);  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x50u) = u32(*gptr<u32>(0xad6638u + 4u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x54u) = u32(*gptr<u32>(0xad6638u + 8u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x58u) = u32(*gptr<u32>(0xad6638u + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x5cu) = u32(*gptr<u32>(0xad6638u + 0x10u));  // (from the original)
    }
    *gptr<u32>(r0_1 + 0x18u) = u32(r0_1 + 0x30u);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x34u);  // (from the original)
    r0_4 = r0_1 + 0x1cu;  // (from the original)
    call_00150bc0(r0_4, r1_1, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_004f778c
GUEST_EXPORT(0x004f778c, d_004f778c::f_004f778c);

// f_004f9650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f9650 {

struct __attribute__((packed)) Object_004f9650_0 {
    u32 word_0;
    u8 unknown_4[0x100];  // (not used here)
    u32 word_104;
    u8 byte_108;
    u8 unknown_109[0x3];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(Object_004f9650_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f9650_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_004f9650_0, byte_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_004f9650_0, word_10c, 0x10c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x007796a0, u32(u32, u32, u32, u32)> call_007796a0;  // (from the original)

u32 f_004f9650(gptr<Object_004f9650_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r5 = r0;
    r7 = 0u;
    arg0->word_0 = u32(0x902fc8u);  // (from the original)
    arg0->word_104 = u32(r7);
    arg0->byte_108 = u8(r7);
    arg0->word_10c = u32(r1);
    r0_1 = r5 + 4u;
    call_002f825c(r0_1, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r4_1 = r5 + 0x614u;  // (from the original)
    *gptr<u32>(r5) = u32(0x902d64u);  // (from the original)
    r9 = ~0u;
    *gptr<u32>(r5 + 0x110u) = u32(r7);  // (from the original)
    *gptr<u32>(r4_1) = u32(r7);
    *gptr<u32>(r4_1 + 4) = u32(r9);
    *gptr<u32>(r5 + 0x62cu) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x61cu) = u32(r9);  // (from the original)
    r0_2 = r5 + 0x114u;  // (from the original)
    *gptr<u32>(r5 + 0x630u) = u32(r7);  // (from the original)
    call_002f825c(r0_2, 0x100u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x35u);  // (from the original)
    r4 = 0u;
    r8 = 1u;
    do {
L_4f96c0:;
        r2_2 = r5 + (r4 << 2);
        r6_1 = r5 + (r4 << 3);
        r0_3 = r6_1 + 0x214u;  // (from the original)
        *gptr<u32>(r2_2 + 0x114u) = u32(r7);  // (from the original)
        call_007796a0(r0_3, r8, r2_2, guest::cpu()->r[3]);
        r2_3 = guest::cpu()->r[2];
        r0_4 = r6_1 + 0x414u;  // (from the original)
        call_007796a0(r0_4, r8, r2_3, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x614u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x620u) = u32(r9);  // (from the original)
    *gptr<u32>(r5 + 0x624u) = u32(r9);  // (from the original)
    *gptr<u32>(r5 + 0x628u) = u32(r9);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r5;
}

}  // namespace d_004f9650
GUEST_EXPORT(0x004f9650, d_004f9650::f_004f9650);

// f_004f9f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f9f9c {

struct __attribute__((packed)) Object_004f9f9c_0 {
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
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 byte_44;
    u8 unknown_45[0x3];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x1];  // (not used here)
    u16 half_52;
};
GUEST_OFFSET(Object_004f9f9c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, byte_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, byte_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_004f9f9c_0, half_52, 0x52);  // (from the original)


void f_004f9f9c(gptr<Object_004f9f9c_0> arg0) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(r2_1);
    r3_1 = ~0u;
    arg0->word_20 = u32(r2_1);
    arg0->word_24 = u32(r2_1);
    arg0->word_34 = u32(0u);
    arg0->word_28 = u32(r2_1);
    arg0->word_2c = u32(r2_1);
    arg0->word_30 = u32(r3_1);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0xau);  // (from the original)
    arg0->word_40 = u32(3u);
    arg0->byte_44 = u8(1u);
    arg0->word_48 = u32(r3_1);
    arg0->word_4c = u32(r3_1);
    arg0->byte_50 = u8(0u);
    arg0->half_52 = u16(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_004f9f9c
GUEST_EXPORT(0x004f9f9c, d_004f9f9c::f_004f9f9c);

// f_004fa0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa0fc {

inline guest::global<u32, 0x00ad664c> global_00ad664c;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004fa0fc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x902d94u);  // (from the original)
    r0_2 = r0_1 + 0x30u;  // (from the original)
    call_002fbb30(r0_2, r1, 0x54u, guest::cpu()->r[3]);  // (from the original)
    r0_3 = *gptr<u32>(r0_1 + 0x4cu);  // (from the original)
    *gptr<u32>(r0_1 + 0x84u) = u32(0u);  // (from the original)
    zf_1 = r0_3 + 0x64u == 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x88u) = u8(0u);  // (from the original)
    if (zf_1) {
        r0_3 = *global_00ad664c;
    }
    if (zf_1) {
        *gptr<u32>(r0_1 + 0x4cu) = u32(r0_3);  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x50u) = u32(*gptr<u32>(0xad664cu + 4u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x54u) = u32(*gptr<u32>(0xad664cu + 8u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x58u) = u32(*gptr<u32>(0xad664cu + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x5cu) = u32(*gptr<u32>(0xad664cu + 0x10u));  // (from the original)
    }
    *gptr<u32>(r0_1 + 0x18u) = u32(r0_1 + 0x30u);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x34u);  // (from the original)
    r0_4 = r0_1 + 0x1cu;  // (from the original)
    call_00150bc0(r0_4, r1_1, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_004fa0fc
GUEST_EXPORT(0x004fa0fc, d_004fa0fc::f_004fa0fc);

// f_004fa674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa674 {

struct __attribute__((packed)) Object_004fa674_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_004fa674_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_004fa674_0, word_28, 0x28);  // (from the original)


void f_004fa674(gptr<Object_004fa674_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_0 = u32(0x902dd8u);  // (from the original)
    guest::cpu()->r[1] = 0x902dd8u;  // (from the original)
    return;
}

}  // namespace d_004fa674
GUEST_EXPORT(0x004fa674, d_004fa674::f_004fa674);

// f_004fae8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fae8c {

struct __attribute__((packed)) Object_004fae8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_004fae8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_004fae8c_0, word_28, 0x28);  // (from the original)


void f_004fae8c(gptr<Object_004fae8c_0> arg0) {
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->byte_14 = u8(0u);
    arg0->byte_15 = u8(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_0 = u32(0x902e8cu);  // (from the original)
    guest::cpu()->r[1] = 0x902e8cu;  // (from the original)
    return;
}

}  // namespace d_004fae8c
GUEST_EXPORT(0x004fae8c, d_004fae8c::f_004fae8c);

// f_004fb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fb304 {


u32 f_004fb304(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = r1;
    if (r1 == 3u) {
        return 2u;
    }
    if (r0_1 == 5u) {
        r0_1 = 4u;
    }
    return r0_1;
}

}  // namespace d_004fb304
GUEST_EXPORT(0x004fb304, d_004fb304::f_004fb304);

// f_004fd458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fd458 {

struct __attribute__((packed)) Object_004fd458_0 {
    u32 word_0;
    u8 unknown_4[0x100];  // (not used here)
    u32 word_104;
    u8 byte_108;
    u8 unknown_109[0x3];  // (not used here)
    u32 word_10c;
};
GUEST_OFFSET(Object_004fd458_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004fd458_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_004fd458_0, byte_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_004fd458_0, word_10c, 0x10c);  // (from the original)

inline guest::global<u32, 0x00ad6540> global_00ad6540;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00779598, u32(u32, u32, u32, u32)> call_00779598;  // (from the original)

u32 f_004fd458(gptr<Object_004fd458_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = 0u;
    arg0->word_0 = u32(0x902fc8u);  // (from the original)
    arg0->word_104 = u32(r7);
    arg0->byte_108 = u8(r7);
    arg0->word_10c = u32(r1);
    r0_1 = r5 + 4u;
    call_002f825c(r0_1, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r4_1 = r5 + 0x754u;  // (from the original)
    *gptr<u32>(r5) = u32(0x902ef4u);  // (from the original)
    r8 = ~0u;
    *gptr<u32>(r5 + 0x110u) = u32(r7);  // (from the original)
    *gptr<u32>(r4_1) = u32(r7);
    *gptr<u32>(r4_1 + 4) = u32(r8);
    *gptr<u32>(r5 + 0x76cu) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x770u) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x774u) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x778u) = u32(r7);  // (from the original)
    *gptr<u32>(r5 + 0x77cu) = u32(*global_00ad6540);  // (from the original)
    r0_2 = r5 + 0x114u;  // (from the original)
    call_002f825c(r0_2, 0x100u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r4_1) = u32(0x19u);  // (from the original)
    r4 = 0u;
    do {
L_4fd4d4:;
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = u32(r7);  // (from the original)
        r6_1 = (r4 << 3) - r4 + r5;
        r0_3 = r6_1 + 0x214u;  // (from the original)
        call_0013fac4(r0_3, 7u, 1u, guest::cpu()->r[3]);
        r0_4 = r6_1 + 0x3d4u;  // (from the original)
        call_0013fac4(r0_4, 7u, 1u, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r0_5 = r6_1 + 0x594u;  // (from the original)
        call_00779598(r0_5, r1_1, r2_2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x754u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x75cu) = u32(r8);  // (from the original)
    *gptr<u32>(r5 + 0x760u) = u32(r8);  // (from the original)
    *gptr<u32>(r5 + 0x764u) = u32(r8);  // (from the original)
    *gptr<u32>(r5 + 0x768u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r5;
}

}  // namespace d_004fd458
GUEST_EXPORT(0x004fd458, d_004fd458::f_004fd458);

// f_004fdec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fdec0 {

struct __attribute__((packed)) Object_004fdec0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004fdec0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x00101801, u32(u32, u32, u32, u32)> call_00101800;  // (from the original)
inline constexpr guest::Function<0x0010193b, u32(u32, u32, u32, u32)> call_0010193a;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_004fdec0(gptr<Object_004fdec0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r7_1 = 0;
    u32 r0_9 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_3 = 0;
    u32 r0_13 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    arg0->word_0 = u32(0x902fa8u);  // (from the original)
    r0_1 = r5 + 4u;
    call_002fbb30(r0_1, r1, 0x88u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0x8cu) = u32(0u);  // (from the original)
    *gptr<u32>(r5 + 0xa4u) = u32(0u);  // (from the original)
    r0_2 = r5 + 0x90u;  // (from the original)
    r0_3 = call_002f825c(r0_2, 0x11u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r1_1 = *gptr<u32>(r5 + 8u);
    if (r1_1 != 0) {
        r0_4 = r5 + 0x90u;  // (from the original)
        r0_3 = call_00150bc0(r0_4, r1_1, 0x10u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
    }
    r0_5 = call_00569d50(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = *gptr<u32>(r0_5 + 4u);
    r0_6 = *gptr<u32>(r5 + 4u) << 2;
    r0_7 = call_00131280(r0_6, r1_2, 4u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0xa4u) = u32(r0_7);  // (from the original)
    r0_8 = *gptr<u32>(r5 + 4u);
    r4 = 0u;
    if (r0_8 == 0 || r0_8 >> 0x1f != (r0_8 & (r0_8 ^ r0_8)) >> 0x1f) {  // (from the original)
        goto L_4fdfb4;
    }
L_4fdf3c:;
    r7_1 = r5 + (r4 << 2);
    r0_9 = *gptr<u32>(r7_1 + 0xcu);  // (from the original)
    if (r0_9 == 0) {
        r6_1 = 0u;
        goto L_4fdf58;
    }
    r0_9 = call_00100834(r0_9, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6_1 = r0_9;
L_4fdf58:;
    r0_10 = call_00569d50(r0_9, r1, r2, guest::cpu()->r[3]);
    r1_3 = *gptr<u32>(r0_10 + 4u);
    r0_11 = (r6_1 << 1) + 2u;
    r0_12 = call_00131280(r0_11, r1_3, 4u, guest::cpu()->r[3]);
    r2_3 = r6_1 + 1u;
    *gptr<u32>(*gptr<u32>(r5 + 0xa4u) + (r4 << 2)) = u32(r0_12);  // (from the original)
    call_0010193a(r0_12, 0u, r2_3, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = *gptr<u32>(r7_1 + 0xcu);  // (from the original)
    if (r1 != 0) {
        r0_13 = *gptr<u32>(*gptr<u32>(r5 + 0xa4u) + (r4 << 2));  // (from the original)
        call_00101800(r0_13, r1, r6_1, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r4 = r4 + 1u;
    if (s32(*gptr<u32>(r5 + 4u)) > s32(r4)) {
        guest::preempt();
        goto L_4fdf3c;
    }
L_4fdfb4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_004fdec0
GUEST_EXPORT(0x004fdec0, d_004fdec0::f_004fdec0);

// f_004fe28c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe28c {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004fdec0, u32(u32, u32, u32, u32)> call_004fdec0;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_004fe28c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r1_4 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004fdec0(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r4 = r0_1;
    *gptr<u32>(r4) = u32(0x903014u);  // (from the original)
    r0_2 = r4 + 0xa8u;  // (from the original)
    call_002fbb30(r0_2, r1, 0xccu, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x174u) = u32(0u);  // (from the original)
    r0_3 = call_00569d50(0u, r1_1, r2_1, r3_2);
    r3_3 = guest::cpu()->r[3];
    r1_2 = *gptr<u32>(r0_3 + 4u);
    r0_4 = *gptr<u32>(r4 + 0xa8u) << 1;  // (from the original)
    r0_5 = call_00131280(r0_4, r1_2, 4u, r3_3);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x174u) = u32(r0_5);  // (from the original)
    r0_6 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    if (r0_6 == 0 || r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        goto L_4fe308;
    }
    r0 = r0_6 & 1u;
    if (r0 != 1u) {
        goto L_4fe308;
    }
    r2 = u32(*gptr<u16>(0x134u + r4));  // (from the original)
    *gptr<u16>(r0_5) = u16(r2);
L_4fe308:;
    r1_3 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    res_1 = r1_3 - r0;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r1_3 ^ r0) & (r1_3 ^ res_1)) >> 0x1f;  // (from the original)
    if (!zf_1 && nf_1 == vf_1) {
        r2 = 2u;
    }
    if (zf_1 || nf_1 != vf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r4;
    }
    do {
L_4fe318:;
        r1_4 = r4 + (r0 << 1) + 0x100u;  // (from the original)
        r12_1 = r2 + (r0 << 1);
        *gptr<u16>(*gptr<u32>(r4 + 0x174u) + (r0 << 1)) = u16(u32(*gptr<u16>(r1_4 + 0x34u)));  // (from the original)
        r0 = r0 + 2u;
        *gptr<u16>(*gptr<u32>(r4 + 0x174u) + r12_1) = u16(u32(*gptr<u16>(r1_4 + 0x36u)));  // (from the original)
        r1_3 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
        guest::preempt();
    } while (s32(r1_3) > s32(r0));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r4;
}

}  // namespace d_004fe28c
GUEST_EXPORT(0x004fe28c, d_004fe28c::f_004fe28c);

// f_004fe440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe440 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_004fe440(u32 r0) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r4_2 = 0;
    u32 r0_2 = 0;
    u32 r4_3 = 0;
    u32 r0_3 = 0;
    u32 r4_4 = 0;
    u32 r0_4 = 0;
    u32 r4_5 = 0;
    u32 r0_5 = 0;
    u32 r4_6 = 0;
    u32 r0_6 = 0;
    u32 r4_7 = 0;
    u32 r0_7 = 0;
    u32 r4_8 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *global_0094fd3c;
    r0_1 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        goto L_4fe470;
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 0x208u));  // (from the original)
    if (r0_1 != 0) {
        goto L_4fe470;
    }
    r0_1 = *gptr<u32>(r4_1 + 0x154u);  // (from the original)
    if ((r0_1 & 0x400u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe470:;
    r4_2 = *global_0094fd3c;
    r0_2 = call_005ce6dc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        goto L_4fe49c;
    }
    r0_2 = u32(*gptr<u8>(r4_2 + 0x208u));  // (from the original)
    if (r0_2 != 0) {
        goto L_4fe49c;
    }
    r0_2 = *gptr<u32>(r4_2 + 0x154u);  // (from the original)
    if ((r0_2 & 0x4000u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe49c:;
    r4_3 = *global_0094fd3c;
    r0_3 = call_005ce6dc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 != 0) {
        goto L_4fe4c8;
    }
    r0_3 = u32(*gptr<u8>(r4_3 + 0x208u));  // (from the original)
    if (r0_3 != 0) {
        goto L_4fe4c8;
    }
    r0_3 = *gptr<u32>(r4_3 + 0x154u);  // (from the original)
    if ((r0_3 & 0x800u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe4c8:;
    r4_4 = *global_0094fd3c;
    r0_4 = call_005ce6dc(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_4 != 0) {
        goto L_4fe4f4;
    }
    r0_4 = u32(*gptr<u8>(r4_4 + 0x208u));  // (from the original)
    if (r0_4 != 0) {
        goto L_4fe4f4;
    }
    r0_4 = *gptr<u32>(r4_4 + 0x154u);  // (from the original)
    if ((r0_4 & 0x10000u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe4f4:;
    r4_5 = *global_0094fd3c;
    r0_5 = call_005ce6dc(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 != 0) {
        goto L_4fe520;
    }
    r0_5 = u32(*gptr<u8>(r4_5 + 0x208u));  // (from the original)
    if (r0_5 != 0) {
        goto L_4fe520;
    }
    r0_5 = *gptr<u32>(r4_5 + 0x154u);  // (from the original)
    if ((r0_5 & 0x1000u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe520:;
    r4_6 = *global_0094fd3c;
    r0_6 = call_005ce6dc(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 != 0) {
        goto L_4fe54c;
    }
    r0_6 = u32(*gptr<u8>(r4_6 + 0x208u));  // (from the original)
    if (r0_6 != 0) {
        goto L_4fe54c;
    }
    r0_6 = *gptr<u32>(r4_6 + 0x154u);  // (from the original)
    if ((r0_6 & 0x20000u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe54c:;
    r4_7 = *global_0094fd3c;
    r0_7 = call_005ce6dc(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_7 != 0) {
        goto L_4fe578;
    }
    r0_7 = u32(*gptr<u8>(r4_7 + 0x208u));  // (from the original)
    if (r0_7 != 0) {
        goto L_4fe578;
    }
    r0_7 = *gptr<u32>(r4_7 + 0x154u);  // (from the original)
    if ((r0_7 & 0x2000u) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 1u;
    }
L_4fe578:;
    r4_8 = *global_0094fd3c;
    r0_8 = call_005ce6dc(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    if (u32(*gptr<u8>(r4_8 + 0x208u)) != 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    if ((*gptr<u32>(r4_8 + 0x154u) & 0x40000u) == 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 1u;
}

}  // namespace d_004fe440
GUEST_EXPORT(0x004fe440, d_004fe440::f_004fe440);

// f_004fe5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe5b8 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;  // (from the original)
inline constexpr guest::Function<0x006d40d4, u32(u32, u32, u32, u32)> call_006d40d4;  // (from the original)

u32 f_004fe5b8() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = *global_0094fd3c;
    r0_2 = call_006d40d4(r0_1, 0x400u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = *global_0094fd3c;
    r0_4 = call_006d40d4(r0_3, 0x4000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_5 = *global_0094fd3c;
    r0_6 = call_006d40d4(r0_5, 0x800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r0_7 = *global_0094fd3c;
    r0_8 = call_006d40d4(r0_7, 0x10000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_8 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r0_9 = *global_0094fd3c;
    r0_10 = call_006d40d4(r0_9, 0x1000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    if (r0_10 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r0_11 = *global_0094fd3c;
    r0_12 = call_006d40d4(r0_11, 0x20000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    if (r0_12 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    r0_13 = *global_0094fd3c;
    r0_14 = call_006d40d4(r0_13, 0x2000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_7;
        return 1u;
    }
    r0_15 = *global_0094fd3c;
    r0_16 = call_006d40d4(r0_15, 0x40000u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_8;
        return r0_16;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_8;
    return 1u;
}

}  // namespace d_004fe5b8
GUEST_EXPORT(0x004fe5b8, d_004fe5b8::f_004fe5b8);

// f_004fe6c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe6c8 {

inline guest::global<u32, 0x0095e10c> global_0095e10c;  // (from the original)
inline guest::global<u32, 0x0095e180> global_0095e180;  // (from the original)

void f_004fe6c8(u32 r0, u32 r1) {
    *global_0095e10c = u32(r0);
    *global_0095e180 = u32(r1);
    return;
}

}  // namespace d_004fe6c8
GUEST_EXPORT(0x004fe6c8, d_004fe6c8::f_004fe6c8);

// f_004fe968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe968 {

inline constexpr guest::Function<0x004fe9f4, u32(u32, u32, u32, u32)> call_004fe9f4;  // (from the original)
inline constexpr guest::Function<0x004fef54, u32(u32, u32, u32, u32)> call_004fef54;  // (from the original)

u32 f_004fe968(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_004fef54(r0, r1, r0, r3);
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_004fe9f4(r2_1, r1, r2_1, r0_1);
    r3_1 = guest::cpu()->r[3];
    r2 = r0_2;
    r0 = 1u;
    if (r3_1 == 0) {
        goto L_4fe9b4;
    }
    r0_3 = *gptr<u32>(r3_1 + 0x14u);  // (from the original)
    if (r0_3 != 2u) {
        if (r0_3 == 1u) {
            r0 = 0u;
            goto L_4fe9b4;
        }
    }
    r0 = 1u;
L_4fe9b4:;
    r1 = 0u;
L_4fe9b8:;
    r3_2 = *gptr<u32>(r2 + (r1 << 2));
    if (r3_2 == 0) {
        goto L_4fe9e4;
    }
    r3_3 = *gptr<u32>(r3_2 + 0x14u);  // (from the original)
    if (r3_3 != 2u) {
        if (r3_3 == 1u) {
            r3_4 = 0u;
            goto L_4fe9e0;
        }
    }
    r3_4 = 1u;
L_4fe9e0:;
    r0 = r0 & r3_4;
L_4fe9e4:;
    r1 = r1 + 1u;
    if (s32(r1) < s32(5u)) {
        guest::preempt();
        goto L_4fe9b8;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004fe968
GUEST_EXPORT(0x004fe968, d_004fe968::f_004fe968);

// f_004fed2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fed2c {

struct __attribute__((packed)) Object_004fed2c_0 {
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
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
};
GUEST_OFFSET(Object_004fed2c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_004fed2c_0, word_e4, 0xe4);  // (from the original)


void f_004fed2c(gptr<Object_004fed2c_0> arg0) {
    u32 r2_1 = 0;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(r2_1);
    arg0->word_20 = u32(r2_1);
    arg0->word_24 = u32(r2_1);
    arg0->word_34 = u32(0u);
    arg0->word_28 = u32(r2_1);
    arg0->word_d8 = u32(0u);
    arg0->word_dc = u32(0u);
    arg0->word_e0 = u32(0u);
    arg0->word_e4 = u32(0u);
    arg0->word_38 = u32(0u);
    arg0->word_3c = u32(0u);
    arg0->word_40 = u32(0u);
    arg0->word_44 = u32(0u);
    arg0->word_48 = u32(0u);
    arg0->word_4c = u32(0u);
    arg0->word_50 = u32(0u);
    arg0->word_54 = u32(0u);
    arg0->word_58 = u32(0u);
    arg0->word_5c = u32(0u);
    arg0->word_60 = u32(0u);
    arg0->word_64 = u32(0u);
    arg0->word_68 = u32(0u);
    arg0->word_6c = u32(0u);
    arg0->word_70 = u32(0u);
    arg0->word_74 = u32(0u);
    arg0->word_78 = u32(0u);
    arg0->word_7c = u32(0u);
    arg0->word_80 = u32(0u);
    arg0->word_84 = u32(0u);
    arg0->word_88 = u32(0u);
    arg0->word_8c = u32(0u);
    arg0->word_90 = u32(0u);
    arg0->word_94 = u32(0u);
    arg0->word_98 = u32(0u);
    arg0->word_9c = u32(0u);
    arg0->word_a0 = u32(0u);
    arg0->word_a4 = u32(0u);
    arg0->word_a8 = u32(0u);
    arg0->word_ac = u32(0u);
    arg0->word_b0 = u32(0u);
    arg0->word_b4 = u32(0u);
    arg0->word_b8 = u32(0u);
    arg0->word_bc = u32(0u);
    arg0->word_c0 = u32(0u);
    arg0->word_c4 = u32(0u);
    arg0->word_c8 = u32(0u);
    arg0->word_cc = u32(0u);
    arg0->word_d0 = u32(0u);
    arg0->word_d4 = u32(0u);
    arg0->word_2c = u32(r2_1);
    arg0->word_30 = u32(~0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_004fed2c
GUEST_EXPORT(0x004fed2c, d_004fed2c::f_004fed2c);

// f_004ff388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ff388 {

inline guest::global<u32, 0x00ad6618> global_00ad6618;  // (from the original)
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004ff388(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x90306cu);  // (from the original)
    r0_2 = r0_1 + 0x30u;  // (from the original)
    call_002fbb30(r0_2, r1, 0xe8u, guest::cpu()->r[3]);  // (from the original)
    r2_1 = *gptr<u32>(r0_1 + 0x4cu);  // (from the original)
    r0_3 = 1u;
    *gptr<u8>(r0_1 + 0x118u) = u8(r0_3);  // (from the original)
    zf_1 = r2_1 + 0x64u == 0;  // (from the original)
    if (zf_1) {
        r0_3 = *global_00ad6618;
    }
    if (zf_1) {
        *gptr<u32>(r0_1 + 0x4cu) = u32(r0_3);  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x50u) = u32(*gptr<u32>(0xad6618u + 4u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x54u) = u32(*gptr<u32>(0xad6618u + 8u));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x58u) = u32(*gptr<u32>(0xad6618u + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r0_1 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r0_1 + 0x5cu) = u32(*gptr<u32>(0xad6618u + 0x10u));  // (from the original)
    }
    *gptr<u32>(r0_1 + 0x18u) = u32(r0_1 + 0x30u);  // (from the original)
    r1_1 = *gptr<u32>(r0_1 + 0x34u);  // (from the original)
    r0_4 = r0_1 + 0x1cu;  // (from the original)
    call_00150bc0(r0_4, r1_1, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_004ff388
GUEST_EXPORT(0x004ff388, d_004ff388::f_004ff388);
