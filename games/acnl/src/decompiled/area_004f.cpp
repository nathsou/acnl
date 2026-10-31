// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"

#include <bit>

using guest::gptr;

// f_004f027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f027c {

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;  // (from the original)
inline constexpr guest::Function<0x004ee2b0, u32(u32, u32, u32, u32)> call_004ee2b0;  // (from the original)

u32 f_004f027c(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004ed26c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f02c8u));  // (from the original)
    *gptr<u32>(*gptr<u32>(r4 + 0x114u) + 0xb8u) = u32(1u);  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    r1 = r13;
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004ee2b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004f027c
GUEST_EXPORT(0x004f027c, d_004f027c::f_004f027c);

// f_004f0310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0310 {

inline constexpr guest::Function<0x0024ebc0, u32(u32, u32, u32, u32)> call_0024ebc0;  // (from the original)

u32 f_004f0310(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x952a20u;  // (from the original)
    r0 = *gptr<u32>(0x94edd8u);  // (from the original)
    if (r0 != 0) {
        r1 = r0 + 0x300u;  // (from the original)
        *gptr<u32>(r0 + 0x1a8u) = u32(r1);  // (from the original)
    }
    r0 = 1u;
    *gptr<u8>(r4) = u8(r0);
    r0 = call_0024ebc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r0 + 0x168u));  // (from the original)
    *gptr<u8>(r4 + 1u) = u8(r0);
    r0 = call_0024ebc0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 1u;
    *gptr<u8>(r0 + 0x168u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f0310
GUEST_EXPORT(0x004f0310, d_004f0310::f_004f0310);

// f_004f0568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0568 {


u32 f_004f0568(u32 r0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0u;
    ea = *gptr<u32>(*gptr<u32>(0x952a40u) + 8u) + 0x40u;  // (from the original)
    r2 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 == 0) {
        r2 = r1;
    } else {
        r2 = r2 + r3;
    }
    if (r2 == 0) {
        r1 = 0u;
        goto L_4f05a4;
    }
    ea = r2 + (r0 << 4) + 0x28u;  // (from the original)
    r0 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 != 0) {
        r1 = r2 + r0;
    }
L_4f05a4:;
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x80000002u & ~*gptr<u32>(r1);  // (from the original)
    if (res == 0) {
        r0 = r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f0568
GUEST_EXPORT(0x004f0568, d_004f0568::f_004f0568);

// f_004f05cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f05cc {

inline constexpr guest::Function<0x00495474, u32(u32, u32, u32, u32)> call_00495474;  // (from the original)

u32 f_004f05cc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = r0;
    r1 = 0x107u;  // (from the original)
    r0 = *gptr<u32>(0x952a38u);  // (from the original)
    return call_00495474(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_004f05cc
GUEST_EXPORT(0x004f05cc, d_004f05cc::f_004f05cc);

// f_004f0818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0818 {

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;  // (from the original)
inline constexpr guest::Function<0x0056a378, u32(u32, u32, u32, u32)> call_0056a378;  // (from the original)

u32 f_004f0818(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004ed26c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f0874u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x4f0878u));  // (from the original)
    *gptr<u32>(*gptr<u32>(r4 + 0x114u) + 0xb8u) = u32(r1);  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0056a378(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    ea = r4 + 0x118u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    ea = r0 + 0x17cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x180u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f0818
GUEST_EXPORT(0x004f0818, d_004f0818::f_004f0818);

// f_004f0b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0b90 {

inline constexpr guest::Function<0x004a455c, u32(u32, u32, u32, u32)> call_004a455c;  // (from the original)
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;  // (from the original)

u32 f_004f0b90(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    if (r1 == 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r1 = r0;
    }
    r5 = 1u;
    r2 = 0u;
    r3 = r13 + 8u;
    *gptr<u8>(r13) = u8(r5);
    *gptr<u8>(r13 + 1u) = u8(r5);
    *gptr<u32>(r13 + 4u) = u32(r2);
    r0 = r13;
    *gptr<u32>(r3) = u32(r2);
    *gptr<u32>(r3 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004a455c(r0, r1, r2, r3);
    r1 = r0;
    r0 = *gptr<u32>(r0 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f0c34u));  // (from the original)
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r0);
    r0 = r0 + 0xb4u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    ea = r4 + 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f0c38u));  // (from the original)
    ea = *gptr<u32>(ea) + 0xc8u;  // (from the original)
    r0 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r0 = 0u;
    } else {
        r0 = r0 + r2;
    }
    *gptr<u32>(r0) = u32(r5);
    *gptr<u32>(r0 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(0x4f0c3cu))));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f0c40u));  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0 = 1u;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = *gptr<u32>(arg0->word_4 + 0x28u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = call_0048b4dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 1u;
    r0 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x28u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0048b4dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x120u;  // (from the original)
    r5 = 0u;
    r1 = arg0->word_4;
    r2 = *gptr<u32>(r1 + 0x174u);  // (from the original)
    r4 = *gptr<u32>(r1 + 0x170u);  // (from the original)
    if (r4 == r2) {
        ea = *gptr<u32>(r1 + 8u) + 0xb8u;  // (from the original)
        r1 = ea;
        r2 = *gptr<u32>(ea);
        if (r2 == 0) {
            r4 = r5;
        } else {
            r4 = r2 + r1;
        }
    }
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004f0f80(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    res = r0;
    r1 = r13;
    r2 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_4f0f48;
    }
L_4f0f04:;
    r7 = r2 + 1u;
    r6 = r0 - r7;
    nf = r6 >> 0x1f;  // (from the original)
    zf = r6 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r3 = 0u;
    }
    if (zf || nf != vf) {
        goto L_4f0f3c;
    }
    do {
L_4f0f18:;
        r12 = r7 + r3;
        r8 = *gptr<u32>(r1 + (r2 << 2));
        r9 = *gptr<u32>(r1 + (r12 << 2));
        r3 = r3 + 1u;
        if (u32(r8 >= r9) && !u32(r8 == r9)) {
            *gptr<u32>(r1 + (r2 << 2)) = u32(r9);
            *gptr<u32>(r1 + (r12 << 2)) = u32(r8);
        }
        res = r6 - 1u;
        r6 = res;
        guest::preempt();
    } while (res != 0);
L_4f0f3c:;
    r2 = r2 + 1u;
    res = r0 - r2;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r2) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_4f0f04;
    }
L_4f0f48:;
    res = r0;
    r2 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_4f0f78;
    }
    do {
L_4f0f54:;
        r12 = *gptr<u32>(r1 + (r2 << 2));
        r3 = r4 + (r2 << 2);
        r2 = r2 + 1u;
        if (r12 == 0) {
            *gptr<u32>(r3) = u32(r5);
        } else {
            *gptr<u32>(r3) = u32(r12 - r3);
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
    u32 b = 0;
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    float S0 = 0;
    r2 = arg0->word_4;
    S0 = std::bit_cast<float>(arg1->word_8);
    r3 = 0u;
    r0 = *gptr<u32>(r2 + 0x150u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    ea = r2 + 0x28u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 0x12cu);  // (from the original)
    res = r1;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    b = *gptr<u32>(r0 + 0xcu);  // (from the original)
    b = u32(s32(*gptr<u32>(r0 + 0x10u) - b) >> 2);  // (from the original)
    if (s32(r1) >= s32(b)) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r2 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    res = r2;
    if (u32(res == 0) || res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = r1 * r2 + r3;
    r0 = *gptr<u32>(r0 + 0x1cu) + (r1 << 2);  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
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
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_4 != 0) {
        r0 = r4;
        r0 = call_004f0eb8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r2 = 0u;
    ea = r0 + 0xe0u;  // (from the original)
    r0 = ea;
    r3 = arg0->word_e0;
    r4 = r1;
    r5 = r13;
    if (r3 == 0) {
        r0 = r2;
    } else {
        r0 = r0 + r3;
    }
    ea = r0 + 0x1cu;  // (from the original)
    r0 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 != 0) {
        r2 = r3 + r0;
    }
    zf = r2 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    *gptr<u32>(r13) = u32(r2);
    if (zf) {
        goto L_4f1580;
    }
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_4f1580;
    }
    r1 = *gptr<u32>(r13);
    r0 = u32(s32(r0 - r1 - 0x1cu) >> 4);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_4f1580:;
    r0 = ~0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
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

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32, u32)> call_00736a1c;  // (from the original)

u32 f_004f1648(gptr<Object_004f1648_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
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
    u32 zf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r1;
    r9 = r2;
    r11 = 0u;
    ea = r13 + 0x38u;  // (from the original)
    r5 = *gptr<u32>(ea);
    r6 = *gptr<u32>(ea + 4);
    r7 = *gptr<u32>(ea + 8);
    r8 = r3;
    ea = r0 + 0xc0u;  // (from the original)
    r0 = ea;
    r2 = arg0->word_c0;
    r10 = r13;
    if (r2 == 0) {
        r0 = r11;
    } else {
        r0 = r0 + r2;
    }
    zf = r0 == 0;
    if (!zf) {
        zf = r4 == 0;
    }
    *gptr<u32>(r13) = u32(r0);
    if (zf) {
        goto L_4f16bc;
    }
    r0 = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = r0;
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00736a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        goto L_4f16bc;
    }
    ea = r0 + 0xcu;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r11 = r1 + r0;
    }
    goto L_4f16c0;
L_4f16bc:;
    r11 = 0u;
L_4f16c0:;
    r3 = r11;
    if (r11 == 0) {
        r0 = 0u;
        goto L_4f176c;
    }
    r4 = r13 + 8u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f1774u));  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x4f1778u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    r2 = r9;
    r1 = r11;
    r0 = r13;
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004f2b8c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S1 = guest::cpu()->s[1];
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f177cu));  // (from the original)
    if (r8 < 0x100u) {  // (from the original)
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r8)))) * S0;
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1));
    }
    if (r5 < 0x100u) {  // (from the original)
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5)))) * S0;
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S1));
    }
    if (r6 < 0x100u) {  // (from the original)
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6)))) * S0;
        *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
    }
    if (r7 < 0x100u) {  // (from the original)
        S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7))));
        S0 = S1 * S0;
        *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    r2 = r9;
    r1 = r13;
    r0 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_004f2c10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
L_4f176c:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f1648
GUEST_EXPORT(0x004f1648, d_004f1648::f_004f1648);

// f_004f1b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1b64 {

inline constexpr guest::Function<0x004f1918, u32(u32, u32, u32, u32)> call_004f1918;  // (from the original)

u32 f_004f1b64(float S0) {
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r1 = r13;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_004f1918(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_004f1b64
GUEST_EXPORT(0x004f1b64, d_004f1b64::f_004f1b64);

// f_004f1cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1cdc {

inline constexpr guest::Function<0x004f1b8c, u32(u32, u32, u32, u32)> call_004f1b8c;  // (from the original)

u32 f_004f1cdc(float S0) {
    u32 r1 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r1 = r13;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_004f1b8c(guest::cpu()->r[0], r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_004f1cdc
GUEST_EXPORT(0x004f1cdc, d_004f1cdc::f_004f1cdc);

// f_004f1e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1e44 {

struct __attribute__((packed)) Object_004f1e44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f1e44_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0056a1d4, u32(u32, u32, u32, u32)> call_0056a1d4;  // (from the original)
inline constexpr guest::Function<0x0056a224, u32(u32, u32, u32, u32)> call_0056a224;  // (from the original)

u32 f_004f1e44(gptr<Object_004f1e44_0> arg0, gptr<Float4> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    r4 = r0;
    r0 = arg0->word_8;
    r13 = r13 - 0x20u;  // (from the original)
    S1 = arg1->v[1];
    S2 = arg1->v[2];
    r1 = r0 + 0xcu;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(arg1->v[0]));
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f1ec8u));  // (from the original)
    r6 = r3;
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S2));
    r0 = r13;
    S1 = std::bit_cast<float>(*gptr<u32>(0x4f1eccu));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r13 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    *gptr<u16>(r13 + 0xcu) = u16(r2);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0056a1d4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u16>(r13 + 0xcu) = u16(r6);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0056a224(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    *gptr<u16>(r13 + 0xcu) = u16(r5);  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_0056a1d4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = *gptr<u32>(r4 + 8u);
    r3 = *gptr<u32>(r13 + 4);
    r12 = *gptr<u32>(r13 + 8);
    r1 = r0 + 0x18u;  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r1) = u32(r3);
    *gptr<u32>(r1 + 4) = u32(r12);
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f1e44
GUEST_EXPORT(0x004f1e44, d_004f1e44::f_004f1e44);

// f_004f2198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2198 {

inline constexpr guest::Function<0x004ee4ec, u32(u32, u32, u32, u32)> call_004ee4ec;  // (from the original)
inline constexpr guest::Function<0x0054a9f0, u32(u32, u32, u32, u32)> call_0054a9f0;  // (from the original)

u32 f_004f2198(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_004ee4ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = 0u;
    *gptr<u32>(r2) = u32(0x902b34u);  // (from the original)
    r0 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r2 + 8u) = u32(r1);
    r0 = call_0054a9f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f2198
GUEST_EXPORT(0x004f2198, d_004f2198::f_004f2198);

// f_004f220c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f220c {


u32 f_004f220c(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
L_4f220c:;
    r2 = *gptr<u32>(r0);
    if (r2 == 0x20000002u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r2 != 0x20000004u) {  // (from the original)
        if (r2 == 0x20000009u) {  // (from the original)
            r1 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        res = r2 - 0x20000011u;  // (from the original)
        if (res != 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 == 0) {
            r1 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        res = 0x20000011u & ~*gptr<u32>(r0);  // (from the original)
        if (res != 0) {
            r0 = 0u;
        }
        r1 = r1 | 0x2000000u;  // (from the original)
        *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r0 + 0x1cu;  // (from the original)
    r2 = r0;
    r12 = *gptr<u32>(r3);
    r0 = 0u;
    if (r12 == 0) {
        r3 = r0;
    } else {
        r3 = r3 + r12;
    }
    if (r3 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = r2 + 0x1cu;  // (from the original)
    if (r12 != 0) {
        r0 = r12 + r2;
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


u32 f_004f2638(gptr<Object_004f2638_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = *gptr<u32>(arg0->word_8 + 0x24u) + (r1 << 2);  // (from the original)
    r1 = *gptr<u32>(0x8a29a8u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f2638
GUEST_EXPORT(0x004f2638, d_004f2638::f_004f2638);

// f_004f2d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2d48 {

inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)

u32 f_004f2d48(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r0;
    ea = r13 + 0x28u;  // (from the original)
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r8 = r1;
    r4 = r2;
    if (r0 != 0) {
        r2 = r1;
        S0 = std::bit_cast<float>(*gptr<u32>(0x4f2e0cu));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(0x4f2e10u));  // (from the original)
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
        r12 = r13 + 8u;
        r1 = r0;
        r0 = r13;
        *gptr<u32>(r12) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r12 + 4) = u32(std::bit_cast<u32>(S1));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004f2b8c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        S1 = guest::cpu()->s[1];
        S0 = std::bit_cast<float>(*gptr<u32>(0x4f2e14u));  // (from the original)
        if (r4 < 0x100u) {  // (from the original)
            S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r4)))) * S0;
            *gptr<u32>(r13) = u32(std::bit_cast<u32>(S1));
        }
        if (r3 < 0x100u) {  // (from the original)
            S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) * S0;
            *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S1));
        }
        if (r6 < 0x100u) {  // (from the original)
            S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6)))) * S0;
            *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1));
        }
        if (r7 < 0x100u) {  // (from the original)
            S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7))));
            S0 = S1 * S0;
            *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
        }
        r2 = r8;
        r1 = r13;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_004f2c10(r0, r1, r2, r3);
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
    u32 ea = 0;
    u32 v = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r0 = *gptr<u32>(r13);
    if (r0 == 0) {
        r13 = r13 + 0xcu;  // (from the original)
        v = *gptr<u32>(r13);
        r13 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_004a5b04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0xcu;  // (from the original)
    v = *gptr<u32>(r13);
    r13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_004f2ef0
GUEST_EXPORT(0x004f2ef0, d_004f2ef0::f_004f2ef0);

// f_004f2f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f48 {


u32 f_004f2f48(u32 r0) {
    u32 res = 0;
    u32 zf = 0;
    float S0 = 0;
    res = r0;
    zf = res == 0;
    if (!zf) {
        res = r0 + 0x104u;  // (from the original)
        zf = res == 0;
        r0 = res;
    }
    if (zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x4f2f5cu));  // (from the original)
    } else {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004f2f48
GUEST_EXPORT(0x004f2f48, d_004f2f48::f_004f2f48);

// f_004f2f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f60 {


u32 f_004f2f60(u32 r0, u32 r1) {
    u32 res = 0;
    u32 zf = 0;
    float S0 = 0;
    res = r0;
    zf = res == 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x4f2f80u));  // (from the original)
    if (!zf) {
        res = r0 + 0x104u;  // (from the original)
        zf = res == 0;
        r0 = res;
    }
    if (zf) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r1 = *gptr<u32>(r0);
    if ((r1 & 1u) != 0) {
        S0 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_004f2f60
GUEST_EXPORT(0x004f2f60, d_004f2f60::f_004f2f60);

// f_004f3068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3068 {

inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> call_004efb0c;  // (from the original)
inline constexpr guest::Function<0x006ef650, u32(u32, u32, u32, u32)> call_006ef650;  // (from the original)

u32 f_004f3068(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x952a20u;  // (from the original)
    r1 = u32(*gptr<u8>(r4));
    if (r1 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_006ef650(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0u;
    r0 = call_004efb0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = *gptr<u32>(*gptr<u32>(r4 + 0x18u) + 0xc0u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    r2 = r4 + 4u;
    arg0->word_0 = u32(0x903054u);  // (from the original)
    arg0->word_4 = u32(r5);
    r0 = 0xad662cu;  // (from the original)
    arg0->word_8 = u32(r5);
    arg0->byte_c = u8(r5);
    r1 = *gptr<u32>(r0 + 4u);
    r0 = call_0013e7d8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4) = u32(0x902bc8u);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(1u);  // (from the original)
    r1 = 0x11u;  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r5);  // (from the original)
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f33dc
GUEST_EXPORT(0x004f33dc, d_004f33dc::f_004f33dc);

// f_004f3a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3a64 {


u32 f_004f3a64(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r0 = r1 - 0xau;  // (from the original)
    zf = r0 == 5u;
    cf = r0 >= 5u;
    if (!cf || zf) {
        r0 = 1u;
    }
    if (cf && !zf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_004f3a64
GUEST_EXPORT(0x004f3a64, d_004f3a64::f_004f3a64);

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
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    r2 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r2);
    arg0->word_34 = u32(r1);
    arg0->word_28 = u32(r2);
    arg0->word_38 = u32(r1);
    arg0->word_3c = u32(r1);
    arg0->word_2c = u32(r2);
    arg0->word_30 = u32(~0u);
    arg0->byte_40 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004f76a8
GUEST_EXPORT(0x004f76a8, d_004f76a8::f_004f76a8);

// f_004f778c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f778c {

inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004f778c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r0 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r0;
    r2 = 0x44u;  // (from the original)
    r1 = r5;
    *gptr<u32>(r4) = u32(0x902d20u);  // (from the original)
    r0 = r4 + 0x30u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xad6638u;  // (from the original)
    r2 = *gptr<u32>(r4 + 0x4cu);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x74u) = u8(r0);  // (from the original)
    zf = r2 + 0x64u == 0;  // (from the original)
    if (zf) {
        r0 = *gptr<u32>(r1);
    }
    r2 = 0x10u;  // (from the original)
    if (zf) {
        *gptr<u32>(r4 + 0x4cu) = u32(r0);  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x50u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x54u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x58u) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x5cu) = u32(*gptr<u32>(r1 + 0x10u));  // (from the original)
    }
    *gptr<u32>(r4 + 0x18u) = u32(r4 + 0x30u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00150bc0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004f778c
GUEST_EXPORT(0x004f778c, d_004f778c::f_004f778c);

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
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    r2 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    r3 = ~0u;
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r2);
    arg0->word_34 = u32(r1);
    arg0->word_28 = u32(r2);
    arg0->word_2c = u32(r2);
    arg0->word_30 = u32(r3);
    arg0->word_38 = u32(r1);
    arg0->word_3c = u32(0xau);  // (from the original)
    arg0->word_40 = u32(3u);
    arg0->byte_44 = u8(1u);
    arg0->word_48 = u32(r3);
    arg0->word_4c = u32(r3);
    arg0->byte_50 = u8(r1);
    arg0->half_52 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004f9f9c
GUEST_EXPORT(0x004f9f9c, d_004f9f9c::f_004f9f9c);

// f_004fa0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa0fc {

inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004fa0fc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r0 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r0;
    r2 = 0x54u;  // (from the original)
    r1 = r5;
    *gptr<u32>(r4) = u32(0x902d94u);  // (from the original)
    r0 = r4 + 0x30u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xad664cu;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x4cu);  // (from the original)
    r2 = 0u;
    *gptr<u32>(r4 + 0x84u) = u32(r2);  // (from the original)
    zf = r0 + 0x64u == 0;  // (from the original)
    *gptr<u8>(r4 + 0x88u) = u8(r2);  // (from the original)
    if (zf) {
        r0 = *gptr<u32>(r1);
    }
    r2 = 0x10u;  // (from the original)
    if (zf) {
        *gptr<u32>(r4 + 0x4cu) = u32(r0);  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x50u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x54u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x58u) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x5cu) = u32(*gptr<u32>(r1 + 0x10u));  // (from the original)
    }
    *gptr<u32>(r4 + 0x18u) = u32(r4 + 0x30u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00150bc0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->byte_14 = u8(r1);
    arg0->byte_15 = u8(r1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r1);
    arg0->word_28 = u32(r1);
    r1 = 0x902dd8u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->byte_14 = u8(r1);
    arg0->byte_15 = u8(r1);
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r1);
    arg0->word_28 = u32(r1);
    r1 = 0x902e8cu;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004fae8c
GUEST_EXPORT(0x004fae8c, d_004fae8c::f_004fae8c);

// f_004fb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fb304 {


u32 f_004fb304(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = r1;
    if (r1 == 3u) {
        r0 = 2u;
        return r0;
    }
    if (r0 == 5u) {
        r0 = 4u;
    }
    return r0;
}

}  // namespace d_004fb304
GUEST_EXPORT(0x004fb304, d_004fb304::f_004fb304);

// f_004fe440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe440 {

inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_004fe440(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0x94fd3cu;  // (from the original)
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe470;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe470;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x400u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe470:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe49c;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe49c;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x4000u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe49c:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe4c8;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe4c8;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x800u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe4c8:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe4f4;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe4f4;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x10000u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe4f4:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe520;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe520;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x1000u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe520:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe54c;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe54c;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x20000u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe54c:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe578;
    }
    r0 = u32(*gptr<u8>(r4 + 0x208u));  // (from the original)
    if (r0 != 0) {
        goto L_4fe578;
    }
    r0 = *gptr<u32>(r4 + 0x154u);  // (from the original)
    if ((r0 & 0x2000u) != 0) {  // (from the original)
        goto L_4fe5a4;
    }
L_4fe578:;
    r4 = *gptr<u32>(r5);
    r0 = call_005ce6dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        goto L_4fe5ac;
    }
    if (u32(*gptr<u8>(r4 + 0x208u)) != 0) {  // (from the original)
        goto L_4fe5ac;
    }
    if ((*gptr<u32>(r4 + 0x154u) & 0x40000u) == 0) {  // (from the original)
        goto L_4fe5ac;
    }
L_4fe5a4:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
L_4fe5ac:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_004fe440
GUEST_EXPORT(0x004fe440, d_004fe440::f_004fe440);

// f_004fe5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe5b8 {

inline constexpr guest::Function<0x006d40d4, u32(u32, u32, u32, u32)> call_006d40d4;  // (from the original)

u32 f_004fe5b8() {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x94fd3cu;  // (from the original)
    r1 = 0x400u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x4000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x800u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x10000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x1000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x20000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x2000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r4);
    r1 = 0x40000u;  // (from the original)
    r0 = call_006d40d4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004fe5b8
GUEST_EXPORT(0x004fe5b8, d_004fe5b8::f_004fe5b8);

// f_004fe6c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe6c8 {


void f_004fe6c8(u32 r0, u32 r1) {
    *gptr<u32>(0x95e10cu) = u32(r0);  // (from the original)
    *gptr<u32>(0x95e180u) = u32(r1);  // (from the original)
    return;
}

}  // namespace d_004fe6c8
GUEST_EXPORT(0x004fe6c8, d_004fe6c8::f_004fe6c8);

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
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    r2 = ~0x63u;  // (from the original)
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r2);
    arg0->word_34 = u32(r1);
    arg0->word_28 = u32(r2);
    arg0->word_d8 = u32(r1);
    arg0->word_dc = u32(r1);
    arg0->word_e0 = u32(r1);
    arg0->word_e4 = u32(r1);
    arg0->word_38 = u32(r1);
    arg0->word_3c = u32(r1);
    arg0->word_40 = u32(r1);
    arg0->word_44 = u32(r1);
    arg0->word_48 = u32(r1);
    arg0->word_4c = u32(r1);
    arg0->word_50 = u32(r1);
    arg0->word_54 = u32(r1);
    arg0->word_58 = u32(r1);
    arg0->word_5c = u32(r1);
    arg0->word_60 = u32(r1);
    arg0->word_64 = u32(r1);
    arg0->word_68 = u32(r1);
    arg0->word_6c = u32(r1);
    arg0->word_70 = u32(r1);
    arg0->word_74 = u32(r1);
    arg0->word_78 = u32(r1);
    arg0->word_7c = u32(r1);
    arg0->word_80 = u32(r1);
    arg0->word_84 = u32(r1);
    arg0->word_88 = u32(r1);
    arg0->word_8c = u32(r1);
    arg0->word_90 = u32(r1);
    arg0->word_94 = u32(r1);
    arg0->word_98 = u32(r1);
    arg0->word_9c = u32(r1);
    arg0->word_a0 = u32(r1);
    arg0->word_a4 = u32(r1);
    arg0->word_a8 = u32(r1);
    arg0->word_ac = u32(r1);
    arg0->word_b0 = u32(r1);
    arg0->word_b4 = u32(r1);
    arg0->word_b8 = u32(r1);
    arg0->word_bc = u32(r1);
    arg0->word_c0 = u32(r1);
    arg0->word_c4 = u32(r1);
    arg0->word_c8 = u32(r1);
    arg0->word_cc = u32(r1);
    arg0->word_d0 = u32(r1);
    arg0->word_d4 = u32(r1);
    arg0->word_2c = u32(r2);
    arg0->word_30 = u32(~0u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_004fed2c
GUEST_EXPORT(0x004fed2c, d_004fed2c::f_004fed2c);

// f_004ff388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ff388 {

inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32, u32)> call_00150bc0;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;  // (from the original)

u32 f_004ff388(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r0 = call_004f33dc(r0, r1, r2, guest::cpu()->r[3]);
    r4 = r0;
    r2 = 0xe8u;  // (from the original)
    r1 = r5;
    *gptr<u32>(r4) = u32(0x90306cu);  // (from the original)
    r0 = r4 + 0x30u;  // (from the original)
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xad6618u;  // (from the original)
    r2 = *gptr<u32>(r4 + 0x4cu);  // (from the original)
    r0 = 1u;
    *gptr<u8>(r4 + 0x118u) = u8(r0);  // (from the original)
    zf = r2 + 0x64u == 0;  // (from the original)
    if (zf) {
        r0 = *gptr<u32>(r1);
    }
    r2 = 0x10u;  // (from the original)
    if (zf) {
        *gptr<u32>(r4 + 0x4cu) = u32(r0);  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x50u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x50u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x54u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x54u) = u32(*gptr<u32>(r1 + 8u));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x58u) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x58u) = u32(*gptr<u32>(r1 + 0xcu));  // (from the original)
    }
    if (*gptr<u32>(r4 + 0x5cu) + 0x64u == 0) {  // (from the original)
        *gptr<u32>(r4 + 0x5cu) = u32(*gptr<u32>(r1 + 0x10u));  // (from the original)
    }
    *gptr<u32>(r4 + 0x18u) = u32(r4 + 0x30u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_00150bc0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004ff388
GUEST_EXPORT(0x004ff388, d_004ff388::f_004ff388);
