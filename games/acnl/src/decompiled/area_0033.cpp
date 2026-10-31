// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00331550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331550 {

inline constexpr guest::Function<0x00112e09, u32(u32, u32, u32, u32)> call_00112e08;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)

u32 f_00331550(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb310(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_2 = u32(s32(s8(*gptr<u8>(r0 + 2u))));
    r0_3 = r0_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003058c8(r0_3, r1_2, guest::cpu()->r[2], r3_2);
    r1_3 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r1_4 = u32(*gptr<u16>(r0));
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, r1_4, guest::cpu()->r[2], r3_3);
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00112e08(r0_4, r0_6, guest::cpu()->r[2], r3_4);
    r1_5 = guest::cpu()->r[1];
    r0_7 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_00331550
GUEST_EXPORT(0x00331550, d_00331550::f_00331550);

// f_00331778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331778 {

struct __attribute__((packed)) Object_00331778_0 {
    u8 unknown_0[0x4e4];  // (not used here)
    u32 word_4e4;
    u8 unknown_4e8[0x4];  // (not used here)
    u16 half_4ec;
    u8 byte_4ee;
};
GUEST_OFFSET(Object_00331778_0, word_4e4, 0x4e4);  // (from the original)
GUEST_OFFSET(Object_00331778_0, half_4ec, 0x4ec);  // (from the original)
GUEST_OFFSET(Object_00331778_0, byte_4ee, 0x4ee);  // (from the original)


void f_00331778(gptr<Object_00331778_0> arg0) {
    u32 r1_1 = 0;
    r1_1 = u32(*gptr<u16>(arg0->word_4e4 + 0x2eu));  // (from the original)
    arg0->half_4ec = u16(r1_1);
    arg0->byte_4ee = u8(1u);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_00331778
GUEST_EXPORT(0x00331778, d_00331778::f_00331778);

// f_003317b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003317b4 {

inline guest::global<u32, 0x0095385c> global_0095385c;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_003317b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_0095385c;
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = call_00131280(0x18u, r0, 4u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1;
    if (r0_1 == 0) {
        *gptr<u32>(0x95385cu + 4u) = u32(r4_1);  // (from the original)
        goto L_331824;
    }
    r0_2 = call_001320cc(r0_1, r0, 3u, r3_1);
    *gptr<u32>(r0_2) = u32(0x8faafcu);  // (from the original)
    *gptr<u32>(0x95385cu + 4u) = u32(r0_2);  // (from the original)
    r1 = 0u;
    *gptr<u8>(r4_1 + 0x10u) = u8(r1);  // (from the original)
    *gptr<u8>(r4_1 + 0x11u) = u8(r1);  // (from the original)
    *gptr<u8>(r4_1 + 0x12u) = u8(4u);  // (from the original)
    *gptr<u8>(r4_1 + 0x13u) = u8(0x3fu);  // (from the original)
    r0_1 = r4_1;
    *gptr<u32>(r4_1 + 0x14u) = u32(r1);  // (from the original)
L_331824:;
    *global_0095385c = u32(r0_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_003317b4
GUEST_EXPORT(0x003317b4, d_003317b4::f_003317b4);

// f_003319e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003319e8 {

struct __attribute__((packed)) Object_003319e8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
};
GUEST_OFFSET(Object_003319e8_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_003319e8_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_003319e8_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_003319e8_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_003319e8_0, word_14, 0x14);  // (from the original)


void f_003319e8(gptr<Object_003319e8_0> arg0) {
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0u);
    arg0->byte_12 = u8(4u);
    arg0->byte_13 = u8(0x3fu);  // (from the original)
    arg0->word_14 = u32(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_003319e8
GUEST_EXPORT(0x003319e8, d_003319e8::f_003319e8);

// f_00331a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a0c {

struct __attribute__((packed)) Object_00331a0c_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_00331a0c_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00331a0c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00331a0c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00331a0c_0, half_c, 0xc);  // (from the original)


u32 f_00331a0c(gptr<Object_00331a0c_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    arg0->half_0 = u16(r1);
    arg0->half_c = u16(r1);
    r0_1 = r0 + 4u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    return r0_1;
}

}  // namespace d_00331a0c
GUEST_EXPORT(0x00331a0c, d_00331a0c::f_00331a0c);

// f_00331a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a20 {

struct __attribute__((packed)) Object_00331a20_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_00331a20_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00331a20_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00331a20_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00331a20_0, half_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00331a3c> global_00331a3c;  // (from the original)

void f_00331a20(gptr<Object_00331a20_0> arg0) {
    float S0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00331a3c);
    arg0->half_0 = u16(0u);
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S0_1));
    arg0->half_c = u16(0u);
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_00331a20
GUEST_EXPORT(0x00331a20, d_00331a20::f_00331a20);

// f_00331a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a40 {

struct __attribute__((packed)) Object_00331a40_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x7];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_00331a40_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00331a40_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x002d1f40, u32(u32, u32, u32, u32)> call_002d1f40;  // (from the original)

u32 f_00331a40(gptr<Object_00331a40_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r12_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    if (u32(arg0->byte_34) != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0;
    }
    arg0->word_3c = u32(9u);
    *gptr<u32>(r13) = u32(r12_1);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002d1f40(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00331a40
GUEST_EXPORT(0x00331a40, d_00331a40::f_00331a40);

// f_00331a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a68 {

inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;  // (from the original)

u32 f_00331a68(u32 r0) {
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r0 + 8u;
    r0_1 = 0x94d548u;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        if (*gptr<u32>(r4_1 + 0x794u) == r5_1) {  // (from the original)
            call_0012eb50(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r0_1 = *gptr<u32>(r4_1 + 0x794u);  // (from the original)
        if (r0_1 == r5_1) {
            r0_1 = 0u;
            *gptr<u32>(r4_1 + 0x794u) = u32(r0_1);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_00331a68
GUEST_EXPORT(0x00331a68, d_00331a68::f_00331a68);

// f_00331ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331ab0 {

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)
inline constexpr guest::Function<0x003220e0, u32(u32, u32, u32, u32)> call_003220e0;  // (from the original)

u32 f_00331ab0() {
    u32 r0_1 = 0;
    r0_1 = *global_0094d548;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_003220e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331ab0
GUEST_EXPORT(0x00331ab0, d_00331ab0::f_00331ab0);

// f_00331ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331ad4 {

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)
inline constexpr guest::Function<0x0032245c, u32(u32, u32, u32, u32)> call_0032245c;  // (from the original)

u32 f_00331ad4(u32 r0) {
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    r2_1 = r0 + 8u;
    r0_1 = *global_0094d548;
    if (r0_1 == 0) {
        return r0_1;
    }
    *gptr<u32>(r0_1 + 0x794u) = u32(r2_1);  // (from the original)
    return call_0032245c(r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00331ad4
GUEST_EXPORT(0x00331ad4, d_00331ad4::f_00331ad4);

// f_00331c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331c1c {

struct __attribute__((packed)) Object_00331c1c_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_00331c1c_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;  // (from the original)
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)

u32 f_00331c1c(gptr<Object_00331c1c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_34);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_1 = 0x94d548u;  // (from the original)
    r4_1 = *gptr<u32>(r0_1);
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (*gptr<u32>(r4_1 + 0x794u) == r0) {  // (from the original)
        call_0012eb50(r4_1, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r4_1 + 0x794u) == r0) {  // (from the original)
            *gptr<u32>(r4_1 + 0x794u) = u32(0u);  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002d27e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331c1c
GUEST_EXPORT(0x00331c1c, d_00331c1c::f_00331c1c);

// f_00331c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331c7c {

inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;  // (from the original)

u32 f_00331c7c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002d2a4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f5bb0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x8f5bb0u;  // (from the original)
    return r0_1;
}

}  // namespace d_00331c7c
GUEST_EXPORT(0x00331c7c, d_00331c7c::f_00331c7c);

// f_00331d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331d0c {

struct __attribute__((packed)) Object_00331d0c_0 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_00331d0c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00331d0c_0, byte_34, 0x34);  // (from the original)

inline guest::global<u32, 0x0094d548> global_0094d548;  // (from the original)
inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;  // (from the original)
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;  // (from the original)

u32 f_00331d0c(gptr<Object_00331d0c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x8f5bb0u);  // (from the original)
    if (u32(arg0->byte_34) == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002d2b90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5_1 = *global_0094d548;
    if (r5_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002d2b90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1_1 = *gptr<u32>(r5_1 + 0x794u);  // (from the original)
    if (r1_1 == r0) {
        call_0012eb50(r5_1, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = *gptr<u32>(r5_1 + 0x794u);  // (from the original)
        if (r1_1 == r0) {
            *gptr<u32>(r5_1 + 0x794u) = u32(0u);  // (from the original)
        }
    }
    call_002d27e0(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002d2b90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331d0c
GUEST_EXPORT(0x00331d0c, d_00331d0c::f_00331d0c);

// f_003324bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003324bc {

struct __attribute__((packed)) Object_003324bc_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_003324bc_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_003324bc_0, word_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_003324bc(gptr<Object_003324bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = arg0->word_90;
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = arg0->word_94;
    if (r0_2 != 0) {
        call_00136e58(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1_1 = ~0u;
    *gptr<u32>(r0 + 0x98u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0 + 0xa0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x9cu) = u32(r1_1);  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x90u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_003324bc
GUEST_EXPORT(0x003324bc, d_003324bc::f_003324bc);

// f_0033254c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033254c {

inline guest::global<u32, 0x003325b4> global_003325b4;  // (from the original)
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;  // (from the original)

u32 f_0033254c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    float S0_1 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_002d2a4c(r0, r1, r2, r3);
    r3_1 = ~0u;
    *gptr<u32>(r0_1) = u32(0x8f5bf8u);  // (from the original)
    ea_1 = r0_1 + 0x90u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_1 + 0x94u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    *gptr<u32>(r0_1 + 0xa0u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x9cu) = u32(r3_1);  // (from the original)
    *gptr<u32>(r0_1 + 0xa4u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0xa8u) = u32(0x78u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_003325b4);
    *gptr<u32>(r0_1 + 0xacu) = u32(0x8eb474u);  // (from the original)
    *gptr<u32>(r0_1 + 0xb0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xb4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xb8u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xbcu) = u32(r3_1);  // (from the original)
    *gptr<u32>(r0_1 + 0xc0u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0xc4u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 4u) = u32(4u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0033254c
GUEST_EXPORT(0x0033254c, d_0033254c::f_0033254c);

// f_00332628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332628 {

struct __attribute__((packed)) Object_00332628_0 {
    u32 word_0;
    u8 unknown_4[0x8c];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_00332628_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00332628_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_00332628_0, word_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;  // (from the original)

u32 f_00332628(gptr<Object_00332628_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8f5bf8u);  // (from the original)
    if (arg0->word_90 != 0) {
        r0_1 = arg0->word_94;
        if (r0_1 != 0) {
            call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r1 = ~0u;
        *gptr<u32>(r0 + 0x98u) = u32(r1);  // (from the original)
        *gptr<u32>(r0 + 0xa0u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x9cu) = u32(r1);  // (from the original)
        *gptr<u32>(r0 + 0xa4u) = u32(0u);  // (from the original)
        *gptr<u32>(r0 + 0x90u) = u32(0u);  // (from the original)
    }
    r0_2 = r0 + 0x94u;  // (from the original)
    call_00136cc8(r0_2, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    return call_002d2b90(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00332628
GUEST_EXPORT(0x00332628, d_00332628::f_00332628);

// f_00332688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332688 {

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32, u32)> call_001e4348;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32, u32)> call_007105d4;  // (from the original)

u32 f_00332688(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 r0_5 = 0;
    u32 r5_2 = 0;
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r7 = r0;
    r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_3327dc;
    }
    r0_2 = call_002fb918(r0_1, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5_1 = r0_2 + 0xa400u;  // (from the original)
    r0_3 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
    r8 = 0u;
    r5 = r5_1 + 0xf8u;  // (from the original)
    r9 = r7 + 0xc80u;  // (from the original)
    r4 = r8;
    if (r0_3 < 0u || r0_3 == 0) {
        goto L_3326f8;
    }
    do {
L_3326c0:;
        r0_4 = call_007105d4(r5, r1, r2, guest::cpu()->r[3]);
        r1 = r0_4;
        if (r0_4 + 1u == 0) {
            goto L_3326f8;
        }
        r2_2 = r7 + (r4 + (r4 << 2) << 7);
        call_001e4348(r5, r1, r2_2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        r8 = r8 + 1u;
        guest::preempt();
    } while (*gptr<u32>(r7 + 0xc80u) > r4);  // (from the original)
L_3326f8:;
    r0_1 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
    zf_1 = r0_1 == r8;
    if (zf_1) {
        r0_1 = 0u;
        *gptr<u32>(r7 + 0xc80u) = u32(r0_1);  // (from the original)
    } else {
        zf_1 = r8 == 0;
    }
    if (zf_1) {
        goto L_3327dc;
    }
    r6 = r8;
    zf_2 = r0_1 == r6;
    cf_1 = r0_1 >= r6;
    if (cf_1 && !zf_2) {
        r10 = 0x182u;  // (from the original)
    }
    if (!cf_1 || zf_2) {
        goto L_3327d4;
    }
    do {
L_332720:;
        r0_5 = r6 - r8;
        r5_2 = r7 + (r6 + (r6 << 2) << 7);
        r4_1 = r7 + (r0_5 + (r0_5 << 2) << 7);
        call_002fbb30(r4_1, r5_2, 0x31u, guest::cpu()->r[3]);  // (from the original)
        r1_1 = r5_2 + 0x34u;  // (from the original)
        r0_6 = r4_1 + 0x34u;  // (from the original)
        call_002fbb30(r0_6, r1_1, 0x31u, guest::cpu()->r[3]);  // (from the original)
        r1_2 = r5_2 + 0x68u;  // (from the original)
        r0_7 = r4_1 + 0x68u;  // (from the original)
        call_002fbb30(r0_7, r1_2, 0x42u, guest::cpu()->r[3]);  // (from the original)
        r1_3 = r5_2 + 0xaau;  // (from the original)
        r0_8 = r4_1 + 0xaau;  // (from the original)
        call_002f8574(r0_8, r1_3, r10, guest::cpu()->r[3]);
        r1_4 = r5_2 + 0x22cu;  // (from the original)
        r0_9 = r4_1 + 0x22cu;  // (from the original)
        call_002fbb30(r0_9, r1_4, 0x42u, guest::cpu()->r[3]);  // (from the original)
        r2_3 = guest::cpu()->r[2];
        r1_5 = r5_2 + 0x274u;  // (from the original)
        *gptr<u8>(r4_1 + 0x26eu) = u8(u32(*gptr<u8>(r5_2 + 0x26eu)));  // (from the original)
        *gptr<u8>(r4_1 + 0x26fu) = u8(u32(*gptr<u8>(r5_2 + 0x26fu)));  // (from the original)
        *gptr<u8>(r4_1 + 0x270u) = u8(u32(*gptr<u8>(r5_2 + 0x270u)));  // (from the original)
        *gptr<u8>(r4_1 + 0x271u) = u8(u32(*gptr<u8>(r5_2 + 0x271u)));  // (from the original)
        *gptr<u8>(r4_1 + 0x272u) = u8(u32(*gptr<u8>(r5_2 + 0x272u)));  // (from the original)
        r0_10 = r4_1 + 0x274u;  // (from the original)
        call_002fc8e8(r0_10, r1_5, r2_3, guest::cpu()->r[3]);
        r2_4 = guest::cpu()->r[2];
        r1_6 = r5_2 + 0x278u;  // (from the original)
        r0_11 = r4_1 + 0x278u;  // (from the original)
        call_00311c70(r0_11, r1_6, r2_4, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0_1 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
        r6 = r6 + 1u;
        guest::preempt();
    } while (r0_1 > r6);
L_3327d4:;
    r0_1 = r0_1 - r8;
    *gptr<u32>(r9) = u32(r0_1);
L_3327dc:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00332688
GUEST_EXPORT(0x00332688, d_00332688::f_00332688);

// f_003327e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003327e8 {

struct __attribute__((packed)) Object_003327e8_0 {
    u8 unknown_0[0xc80];  // (not used here)
    u32 word_c80;
};
GUEST_OFFSET(Object_003327e8_0, word_c80, 0xc80);  // (from the original)

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005cc2f4, u32(u32, u32, u32, u32)> call_005cc2f4;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_003327e8(gptr<Object_003327e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    r5_1 = r0 + 0xc80u;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    if (arg0->word_c80 >= 5u) {
        r0_1 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x225au, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(9u);
    *gptr<u32>(r13 + 8) = u32(0x3327e4u);  // (from the original)
    r0_3 = *gptr<u32>(r0 + 0xc80u);  // (from the original)
    r0_4 = r0 + (r0_3 + (r0_3 << 2) << 7);
    guest::cpu()->r[13] = r13;
    call_005cc2f4(r0_4, 0x332888u, 3u, r1);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_5 = *gptr<u32>(r5_1);
    r0_6 = r0 + (r0_5 + (r0_5 << 2) << 7);
    guest::cpu()->r[13] = r13;
    call_00768138(r0_6, r2, 0u, r3_1);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5_1) = u32(*gptr<u32>(r5_1) + 1u);
    r0_1 = 1u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_003327e8
GUEST_EXPORT(0x003327e8, d_003327e8::f_003327e8);

// f_003328ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003328ec {


u32 f_003328ec() {
    return guest::call_address<u32>(0x301d0du, guest::cpu()->r[0], 0x2ff368u, 0x280u, 5u);  // (from the original)
}

}  // namespace d_003328ec
GUEST_EXPORT(0x003328ec, d_003328ec::f_003328ec);

// f_00332900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332900 {

inline guest::global<u32, 0x0014fbb8> global_0014fbb8;  // (from the original)
inline guest::global<u32, 0x0094ddcc> global_0094ddcc;  // (from the original)
inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_00332900(u32 r0) {
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r3_5 = 0;
    u32 r2_2 = 0;
    u32 r3_6 = 0;
    u32 r2_3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    goto L_332900;
L_332900:;
    guest::cpu()->r[13] -= 8u;
    r1_1 = *global_0095386c;
    r3_1 = u32(*gptr<u8>(r1_1)) & ~3u | u32(*gptr<u8>(r0)) & 3u;
    *gptr<u8>(r1_1) = u8(r3_1);
    r3_2 = r3_1 & ~0x3cu | (u32(*gptr<u8>(r0 + 1u)) & 0xfu) << 2;  // (from the original)
    *gptr<u8>(r1_1) = u8(r3_2);
    r2_1 = u32(*gptr<u8>(r0 + 2u));
    *gptr<u8>(r1_1) = u8(r3_2 & ~0x80u | r2_1 << 7);  // (from the original)
    r3_3 = u32(*gptr<u8>(r1_1 + 1u)) & ~3u | (r2_1 & 6u) >> 1;
    *gptr<u8>(r1_1 + 1u) = u8(r3_3);
    r3_4 = r3_3 & ~0xcu | (u32(*gptr<u8>(r0 + 3u)) & 3u) << 2;  // (from the original)
    *gptr<u8>(r1_1 + 1u) = u8(r3_4);
    r3_5 = r3_4 & ~0x70u | (u32(*gptr<u8>(r0 + 4u)) & 7u) << 4;  // (from the original)
    *gptr<u8>(r1_1 + 1u) = u8(r3_5);
    r2_2 = u32(*gptr<u16>(r0 + 6u));
    *gptr<u8>(r1_1 + 1u) = u8(r3_5 & ~0x80u | r2_2 << 7);  // (from the original)
    *gptr<u8>(r1_1 + 2u) = u8(r2_2 >> 1);
    *gptr<u8>(r1_1 + 3u) = u8(r2_2 >> 9);
    *gptr<u8>(r1_1 + 4u) = u8(0u | r2_2 >> 0x11);  // (from the original)
    r3_6 = u32(*gptr<u8>(r1_1 + 5u)) & ~0x7fu;  // (from the original)
    r2_3 = r3_6 | r2_2 >> 0x19;  // (from the original)
    *gptr<u8>(r1_1 + 5u) = u8(r2_3);
    r0_1 = u32(*gptr<u8>(r0 + 1u));
    if (r0_1 != 3u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = *global_0094ddcc;
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_2;
    }
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(*global_0014fbb8, r0_2, r1_1, r2_3, r3_6);
}

}  // namespace d_00332900
GUEST_EXPORT(0x00332900, d_00332900::f_00332900);

// f_00333310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00333310 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_00333310(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_0095386c;
    if (r0_1 != 0) {
        r1 = 1u;
        *gptr<u8>(r0_1 + 0xb2u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00333310
GUEST_EXPORT(0x00333310, d_00333310::f_00333310);

// f_0033527c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033527c {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x0030f594, u32(u32, u32, u32, u32)> call_0030f594;  // (from the original)

u32 f_0033527c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r2_6 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = u32(s32(s8(*gptr<u8>(r0 + 2u))));
    r0_3 = r0_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003058c8(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    r1_4 = u32(*gptr<u16>(r0));
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_5, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0030f594(r0_6, r1_5, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_7 != 0) {
        r2_6 = u32(s32(s8(*gptr<u8>(r0 + 2u))));
        r0_8 = r13;
        guest::cpu()->r[13] = r13;
        call_00304f30(r0_8, 1u, r2_6, 0u);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
    }
    r1_6 = r13;
    r0_9 = r0_4 + 0x249au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_9, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r0_10 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0033527c
GUEST_EXPORT(0x0033527c, d_0033527c::f_0033527c);

// f_003352f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003352f0 {

struct __attribute__((packed)) Object_003352f0_0 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Object_003352f0_0, byte_eb, 0xeb);  // (from the original)

inline constexpr guest::Function<0x0056a9bc, u32(u32, u32, u32, u32)> call_0056a9bc;  // (from the original)

u32 f_003352f0(gptr<Object_003352f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    if (u32(arg0->byte_eb) == 0) {
        guest::cpu()->r[13] += 8u;
        return 1u;
    }
    r0_1 = call_0056a9bc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    *gptr<u8>(r0 + 0xebu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    return 1u;
}

}  // namespace d_003352f0
GUEST_EXPORT(0x003352f0, d_003352f0::f_003352f0);

// f_00335328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335328 {

struct __attribute__((packed)) Object_00335328_0 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Object_00335328_0, byte_eb, 0xeb);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;  // (from the original)
inline constexpr guest::Function<0x0056a4a4, u32(u32, u32, u32, u32)> call_0056a4a4;  // (from the original)
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> call_0056a94c;  // (from the original)

u32 f_00335328(gptr<Object_00335328_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 zf_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0xa0u;  // (from the original)
    r4_1 = r0;
    r5_1 = r2;
    if (r1 != 0) {
        if (u32(arg0->byte_eb) < 3u) {
            goto L_335358;
        }
    }
    r0 = 1u;
    r13 = r13 + 0xa0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_335358:;
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea_1 + 4) = u32(0x80u);  // (from the original)
    r3_1 = 0x80u;  // (from the original)
    *gptr<u8>(r3_1 + (*gptr<u32>(r13 + 4u) - 1u)) = u8(u32(*global_008c9f1c));
    *gptr<u8>(r13 + 0xcu) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r13) = u32(0x904860u);  // (from the original)
    r0_1 = u32(*gptr<u8>(r4_1 + 0xebu));  // (from the original)
    if (r0_1 != 0) {
        if (r0_1 == 2u) {
            goto L_3353dc;
        }
        goto L_3353ec;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_0030f48c(r0_2, 0x881094u, r1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_0056a4a4(r0_3, r1_1, r2_1, r3_2);
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_4 == 0;
    if (zf_1) {
        r0_1 = 2u;
    } else {
        r0_1 = 1u;
    }
    *gptr<u8>(r4_1 + 0xebu) = u8(r0_1);  // (from the original)
    if (!zf_1) {
        goto L_3353ec;
    }
L_3353dc:;
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0030f48c(r0_5, 0x881094u, 0x88108cu, r3_1);  // (from the original)
    r3_1 = guest::cpu()->r[3];
L_3353ec:;
    zf_2 = r5_1 == 0;
    if (zf_2) {
        r0_1 = 0x952c3cu;  // (from the original)
    }
    r1_2 = r13;
    if (zf_2) {
        r5_1 = *gptr<u32>(r0_1);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0056a94c(r4_1, r1_2, r5_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0xa0u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u8>(r4_1 + 0xebu) = u8(3u);  // (from the original)
    r13 = r13 + 0xa0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00335328
GUEST_EXPORT(0x00335328, d_00335328::f_00335328);

// f_0033543c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033543c {

inline constexpr guest::Function<0x001b5d74, u32(u32, u32, u32, u32)> call_001b5d74;  // (from the original)
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;  // (from the original)
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32, u32)> call_00335328;  // (from the original)

u32 f_0033543c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r2;
    r7 = r3;
    r0_1 = call_001b5d94(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_335484;
    }
    r0_2 = call_001b5d74(r1, r1_1, r2_1, r3_1);
    r1 = r0_2;
    if (r0_2 == 0) {
        goto L_335484;
    }
L_335470:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_00335328(r5, r1, r6, r7);
L_335484:;
    r1 = 0x33548cu;  // (from the original)
    guest::preempt();
    goto L_335470;
}

}  // namespace d_0033543c
GUEST_EXPORT(0x0033543c, d_0033543c::f_0033543c);

// f_00335494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335494 {

inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)

u32 f_00335494(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0012ca7c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f6224u);  // (from the original)
    *gptr<u8>(r0_1 + 0xebu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_00335494
GUEST_EXPORT(0x00335494, d_00335494::f_00335494);

// f_003354c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003354c8 {

inline constexpr guest::Function<0x00130ed8, u32(u32, u32, u32, u32)> call_00130ed8;  // (from the original)
inline constexpr guest::Function<0x002d24e0, u32(u32, u32, u32, u32)> call_002d24e0;  // (from the original)
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;  // (from the original)
inline constexpr guest::Function<0x0073e780, u32(u32, u32, u32, u32)> call_0073e780;  // (from the original)

u32 f_003354c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    call_002d24e0(r0, r1, r2, r3);
    r1 = r4 + 0x44u;  // (from the original)
    r3 = *gptr<u32>(*gptr<u32>(r4 + 0x7cu) + 8u);  // (from the original)
    r0 = 0u;
    r5 = r0;
    do {
L_3354ec:;
        if (r0 >= 2u) {
            r2_1 = r1;
        } else {
            r2_1 = r1 + (r0 << 2);
        }
        r2_2 = *gptr<u32>(r2_1);
        if (r2_2 == 0) {
            r2_3 = ~0u;
        } else {
            r2_3 = *gptr<u32>(r2_2 + 0xb0u);  // (from the original)
        }
        if (!(r2_3 != r3)) {
            if (r0 < 2u) {
                r1 = r1 + (r0 << 2);
            }
            if (r1 == 0) {
                *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
                r13 = r13 + 0x18u;  // (from the original)
                guest::cpu()->r[1] = r1;
                guest::cpu()->r[13] = r13;
                return r0;
            }
            r0_1 = r13;
            guest::cpu()->r[13] = r13;
            call_004c331c(r0_1, r1, r2_3, r3);
            r3_1 = guest::cpu()->r[3];
            r0_2 = *gptr<u32>(r13);
            r2_4 = r13 + 4u;
            r1_1 = 0xdu;  // (from the original)
            *gptr<u16>(r13 + 4u) = u16(r5);
            if (r0_2 != 0) {
                guest::cpu()->r[13] = r13;
                call_0073e780(r0_2, r1_1, r2_4, r3_1);
                r1_1 = guest::cpu()->r[1];
                r2_4 = guest::cpu()->r[2];
                r3_1 = guest::cpu()->r[3];
            }
            r0_3 = u32(s32(s16(*gptr<u16>(r13 + 4u))));
            nf_1 = r0_3 >> 0x1f;  // (from the original)
            zf_1 = r0_3 == 0;
            if (!zf_1 && nf_1 == 0u) {
                *gptr<u8>(r4 + 0x90u) = u8(1u);  // (from the original)
            }
            r0_4 = r13;
            if (zf_1 || nf_1 != 0u) {
                *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
            }
            guest::cpu()->r[13] = r13;
            r0_5 = call_00130ed8(r0_4, r1_1, r2_4, r3_1);
            r1_2 = guest::cpu()->r[1];
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_5;
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(2u));
    *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_003354c8
GUEST_EXPORT(0x003354c8, d_003354c8::f_003354c8);

// f_0033557c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033557c {

inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;  // (from the original)

u32 f_0033557c(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002d2a4c(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = u32(0x8f623cu);  // (from the original)
    *gptr<u8>(r0_1 + 0x90u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0033557c
GUEST_EXPORT(0x0033557c, d_0033557c::f_0033557c);

// f_00335634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335634 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_00335634() {
    return call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], 0x7dc8u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00335634
GUEST_EXPORT(0x00335634, d_00335634::f_00335634);

// f_00335640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335640 {

inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> call_0020c500;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)

u32 f_00335640(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x1238u;  // (from the original)
    call_0020c500(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x7dc0u;  // (from the original)
    call_006bc04c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 8u) = u32(0u);
    *gptr<u32>(r0 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(0u);
    *gptr<u32>(r0) = u32(0u);
    guest::cpu()->r[13] += 8u;
    return 0u;
}

}  // namespace d_00335640
GUEST_EXPORT(0x00335640, d_00335640::f_00335640);

// f_00335678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335678 {

inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> call_0020c500;  // (from the original)
inline constexpr guest::Function<0x0020cbf0, u32(u32, u32, u32, u32)> call_0020cbf0;  // (from the original)
inline constexpr guest::Function<0x0024dcc0, u32(u32, u32, u32, u32)> call_0024dcc0;  // (from the original)
inline constexpr guest::Function<0x006bc04c, u32(u32, u32, u32, u32)> call_006bc04c;  // (from the original)

u32 f_00335678(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    r0_1 = r0 + 0x10u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_0024dcc0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 + 0x1228u;  // (from the original)
    r0_4 = call_0020cbf0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x6b88u;  // (from the original)
    r4_1 = r0_5 - 0x7dc0u;  // (from the original)
    r0_6 = r0_5 - 0x6b88u;  // (from the original)
    call_0020c500(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = r4_1 + 0x7dc0u;  // (from the original)
    call_006bc04c(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4_1 + 8u) = u32(0u);
    *gptr<u32>(r4_1 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r4_1 + 4u) = u32(0u);
    *gptr<u32>(r4_1) = u32(0u);
    guest::cpu()->r[13] += 8u;
    return r4_1;
}

}  // namespace d_00335678
GUEST_EXPORT(0x00335678, d_00335678::f_00335678);

// f_003356dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003356dc {

inline constexpr guest::Function<0x00134fa4, u32(u32, u32, u32, u32)> call_00134fa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_003356dc(u32 r0) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x6928u;  // (from the original)
    r4_1 = r0_1 - 0x56f0u;  // (from the original)
    r0_2 = r0_1 - 0x1acu;  // (from the original)
    call_002f76ac(r0_2, 0x2f7744u, 0x18u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r4_1 + 0xffffedd8u;  // (from the original)
    r0_4 = call_00134fa4(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = r0_4 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_003356dc
GUEST_EXPORT(0x003356dc, d_003356dc::f_003356dc);

// f_003357cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003357cc {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;  // (from the original)

u32 f_003357cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0023bbe4(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0x7cu) = u32(0x8f6284u + 0x128u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8f6284u);  // (from the original)
    *gptr<u32>(r0_1 + 0x108u) = u32(r0_1 + 0x110u);  // (from the original)
    r1_1 = r0_1 + 0x104u;  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = u32(0x90558cu);  // (from the original)
    *gptr<u32>(r0_1 + 0x10cu) = u32(0x20u);  // (from the original)
    *gptr<u8>(0x20u + (*gptr<u32>(r0_1 + 0x108u) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = u32(0x905120u);  // (from the original)
    *gptr<u8>(*gptr<u32>(r0_1 + 0x108u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r1_1) = u32(0x9048ecu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_003357cc
GUEST_EXPORT(0x003357cc, d_003357cc::f_003357cc);

// f_00335ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335ecc {

struct __attribute__((packed)) Object_00335ecc_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u32 word_1ac;
};
GUEST_OFFSET(Object_00335ecc_0, word_1ac, 0x1ac);  // (from the original)

inline guest::global<u32, 0x00335ef0> global_00335ef0;  // (from the original)

void f_00335ecc(gptr<Object_00335ecc_0> arg0, u32 r1, float S0_unused, float S1) {
    float S0_1 = 0;
    float S1_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00335ef0);
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        arg0->word_1ac = u32(std::bit_cast<u32>(S0_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    arg0->word_1ac = u32(std::bit_cast<u32>(S0_1 / S1_1));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00335ecc
GUEST_EXPORT(0x00335ecc, d_00335ecc::f_00335ecc);

// f_00335ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335ef4 {

struct __attribute__((packed)) Object_00335ef4_0 {
    u8 unknown_0[0x1a8];  // (not used here)
    u32 word_1a8;
    u32 word_1ac;
    u32 word_1b0;
    u32 word_1b4;
};
GUEST_OFFSET(Object_00335ef4_0, word_1a8, 0x1a8);  // (from the original)
GUEST_OFFSET(Object_00335ef4_0, word_1ac, 0x1ac);  // (from the original)
GUEST_OFFSET(Object_00335ef4_0, word_1b0, 0x1b0);  // (from the original)
GUEST_OFFSET(Object_00335ef4_0, word_1b4, 0x1b4);  // (from the original)

inline guest::global<u32, 0x00335f40> global_00335f40;  // (from the original)
inline guest::global<u32, 0x00335f44> global_00335f44;  // (from the original)

void f_00335ef4(gptr<Object_00335ef4_0> arg0, u32 r1, u32 r2) {
    float S0_1 = 0;
    float S1_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00335f40);
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        arg0->word_1ac = u32(std::bit_cast<u32>(S0_1));
        goto L_335f14;
    }
    arg0->word_1ac = u32(std::bit_cast<u32>(S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))))));
L_335f14:;
    S1_1 = std::bit_cast<float>(*global_00335f44);
    arg0->word_1a8 = u32(std::bit_cast<u32>(S1_1));
    if (r2 == 0 || r2 >> 0x1f != (r2 & (r2 ^ r2)) >> 0x1f) {  // (from the original)
        arg0->word_1b4 = u32(std::bit_cast<u32>(S0_1));
        arg0->word_1b0 = u32(std::bit_cast<u32>(S1_1));
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->word_1b4 = u32(std::bit_cast<u32>(S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2))))));
    arg0->word_1b0 = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_00335ef4
GUEST_EXPORT(0x00335ef4, d_00335ef4::f_00335ef4);

// f_00335f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335f48 {

inline guest::global<u32, 0x00335f74> global_00335f74;  // (from the original)
inline guest::global<u32, 0x0095bf68> global_0095bf68;  // (from the original)
inline constexpr guest::Function<0x001c25d8, u32(u32, u32, u32, u32)> call_001c25d8;  // (from the original)

u32 f_00335f48(u32 r0) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_00335f74);
    r1_1 = u32(*gptr<u8>(*global_0095bf68 + 0x11eu));  // (from the original)
    r2_1 = r0 + ((r1_1 << 3) - r1_1 << 3) + 0x100u;  // (from the original)
    r1_2 = r0 + 0xc8u;  // (from the original)
    r0_1 = r0 + 0x90u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return call_001c25d8(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00335f48
GUEST_EXPORT(0x00335f48, d_00335f48::f_00335f48);

// f_00338d10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00338d10 {

struct __attribute__((packed)) Object_00338d10_0 {
    u8 unknown_0[0x8c2c];  // (not used here)
    u32 word_8c2c;
    u32 word_8c30;
    u32 word_8c34;
    u32 word_8c38;
    u32 word_8c3c;
    u32 word_8c40;
    u32 word_8c44;
    u32 word_8c48;
};
GUEST_OFFSET(Object_00338d10_0, word_8c2c, 0x8c2c);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c30, 0x8c30);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c34, 0x8c34);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c38, 0x8c38);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c3c, 0x8c3c);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c40, 0x8c40);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c44, 0x8c44);  // (from the original)
GUEST_OFFSET(Object_00338d10_0, word_8c48, 0x8c48);  // (from the original)


u32 f_00338d10(gptr<Object_00338d10_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 r3_2 = 0;
    u32 ea_3 = 0;
    u32 r3_3 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x8c00u;  // (from the original)
    ea_1 = 0x847d90u + 0xa4u;  // (from the original)
    r3_1 = *gptr<u32>(ea_1 + 4);
    arg0->word_8c3c = u32(*gptr<u32>(ea_1));
    arg0->word_8c40 = u32(r3_1);
    ea_2 = 0x847d90u + 0xa4u;  // (from the original)
    r3_2 = *gptr<u32>(ea_2 + 4);
    arg0->word_8c44 = u32(*gptr<u32>(ea_2));
    arg0->word_8c48 = u32(r3_2);
    ea_3 = 0x847d90u + 0xa4u;  // (from the original)
    r3_3 = *gptr<u32>(ea_3 + 4);
    arg0->word_8c2c = u32(*gptr<u32>(ea_3));
    arg0->word_8c30 = u32(r3_3);
    r2_1 = *gptr<u32>(0x847d90u + 0xa8u);  // (from the original)
    r1_1 = *gptr<u32>(0x847d90u + 0xa4u);  // (from the original)
    arg0->word_8c34 = u32(r1_1);
    arg0->word_8c38 = u32(r2_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00338d10
GUEST_EXPORT(0x00338d10, d_00338d10::f_00338d10);

// f_00338d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00338d48 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00338d48(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
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
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x88u;  // (from the original)
    r6 = r0;
    r0_1 = r13 + 8u;
    r1_1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x28u, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x90a030u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r5);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0x50u, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0_6 = r4_1 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0_6 - 2u;
    r1 = 0x14u;  // (from the original)
    do {
L_338d94:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    *gptr<u32>(r13) = u32(r4);
    r0_8 = *global_0095decc;
    r1_3 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_8, r1_3, 0x8480ecu, 0xc9u);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_9, 0u, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_10 = r6 + 0x8b44u;  // (from the original)
    r1_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005e2e50(r0_10, r1_4, r2_4, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005e2f94(r0_10, r1_5, r2_5, r3_7);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0_11 = r13 + 8u;
    r13 = r13 + 0x88u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00338d48
GUEST_EXPORT(0x00338d48, d_00338d48::f_00338d48);

// f_0033a7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033a7a4 {

struct __attribute__((packed)) Object_0033a7a4_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_0033a7a4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0033a7a4_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)
inline constexpr guest::Function<0x006b0b74, u32(u32, u32, u32, u32)> call_006b0b74;  // (from the original)

u32 f_0033a7a4(gptr<Object_0033a7a4_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r4_3 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_4 = 0;
    u32 r0_14 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r4_5 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r4_6 = 0;
    u32 r0_20 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_8 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_10 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_11 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_12 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_31 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = 0x8f66a8u + 0x6cu;  // (from the original)
    arg0->word_0 = u32(0x8f66a8u);  // (from the original)
    arg0->word_28 = u32(r2_1);
    r0_1 = r0 + 0x8b44u;  // (from the original)
    r0_2 = call_005e3194(r0_1, 0x8f66a8u, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x6ba8u;  // (from the original)
    r0_4 = call_006b0b74(r0_3, r1_1, r2_2, r3_1);
    r4_1 = r0_4 + 0xfffff638u;  // (from the original)
    *gptr<u32>(r4_1) = u32(0x8ee218u);  // (from the original)
    r4_2 = r4_1 + 0x398u;  // (from the original)
    *gptr<u32>(r4_2 + 0xe4u) = u32(0x8ef22cu + 0x44u);  // (from the original)
    *gptr<u32>(r4_2) = u32(0x8ef22cu);  // (from the original)
    r0_5 = r4_2 + 0x118u;  // (from the original)
    call_002f76ac(r0_5, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = call_002f770c(r4_2, r1_2, r2_3, r3_2);
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 - 0x398u) = u32(0x8f18f4u);  // (from the original)
    r0_7 = r0_6 - 0x248u;  // (from the original)
    r0_8 = call_00567ef0(r0_7, 0x8f18f4u, r2_4, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 0x14cu;  // (from the original)
    r0_10 = call_005bf744(r0_9, r1_3, r2_5, r3_4);
    r4_3 = r0_10 - 0x15d8u;  // (from the original)
    r0_11 = r0_10 - 0x2a4u;  // (from the original)
    call_002f76ac(r0_11, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_12 = r4_3 + 0x1250u;  // (from the original)
    r0_13 = call_002f7710(r0_12, r1_4, r2_6, r3_5);
    r4_4 = r0_13 - 0x1250u;  // (from the original)
    r0_14 = r0_13 - 0x2a0u;  // (from the original)
    call_002f76ac(r0_14, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_15 = r4_4 + 0xeccu;  // (from the original)
    r0_16 = call_002f7710(r0_15, r1_5, r2_7, r3_6);
    r4_5 = r0_16 - 0xeccu;  // (from the original)
    r0_17 = r0_16 - 0x2a0u;  // (from the original)
    call_002f76ac(r0_17, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_18 = r4_5 + 0xb48u;  // (from the original)
    r0_19 = call_002f7710(r0_18, r1_6, r2_8, r3_7);
    r4_6 = r0_19 - 0xb48u;  // (from the original)
    r0_20 = r0_19 - 0x6f0u;  // (from the original)
    call_002f76ac(r0_20, 0x2d5744u, 0x250u, 3u);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_21 = r4_6 + 0x430u;  // (from the original)
    r0_22 = call_0056988c(r0_21, r1_7, r2_9, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_23 = r0_22 - 0x28u;  // (from the original)
    r0_24 = call_0056988c(r0_23, r1_8, r2_10, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x28u;  // (from the original)
    r0_26 = call_0056988c(r0_25, r1_9, r2_11, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_27 = r0_26 - 0x14cu;  // (from the original)
    r0_28 = call_005bf744(r0_27, r1_10, r2_12, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_29 = r0_28 - 0x248u;  // (from the original)
    r0_30 = call_00567ef0(r0_29, r1_11, r2_13, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0_31 = r0_30 - 0x4cu;  // (from the original)
    return call_006aaa30(r0_31, r1_12, r2_14, r3_13);
}

}  // namespace d_0033a7a4
GUEST_EXPORT(0x0033a7a4, d_0033a7a4::f_0033a7a4);

// f_0033b748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033b748 {

inline guest::global<u32, 0x0033b7c0> global_0033b7c0;  // (from the original)
inline guest::global<u32, 0x00853c28> global_00853c28;  // (from the original)
inline guest::global<u32, 0x0095008c> global_0095008c;  // (from the original)
inline constexpr guest::Function<0x006b1a64, u32(u32, u32, u32, u32)> call_006b1a64;  // (from the original)
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32, u32)> call_006b1aa0;  // (from the original)
inline constexpr guest::Function<0x007259d4, u32(u32, u32, u32, u32)> call_007259d4;  // (from the original)
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32, u32)> call_0081b648;  // (from the original)

u32 f_0033b748(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r5_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    float S1_3 = 0;
    float S0_3 = 0;
    u32 r1_3 = 0;
    float S1_4 = 0;
    u32 r0_2 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_007259d4(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    r5_1 = r0 + (r0_1 + (r0_1 << 3) + (r0_1 << 4) << 5) + 0x1234u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_006b1a64(r5_1, r1, r2_1, guest::cpu()->r[3]);
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_1 = *global_00853c28;
    r2_2 = *gptr<u32>(0x853c28u + 4);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0081b648(r5_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    S1_3 = std::bit_cast<float>(*global_0033b7c0);
    S0_3 = S1_3 - std::bit_cast<float>(*global_0095008c);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_006b1aa0(r5_1, r1_2, r2_3, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    S1_4 = std::bit_cast<float>(*global_0095008c);
    r0_2 = r0 + 0x3800u;  // (from the original)
    S0_4 = std::bit_cast<float>(*gptr<u32>(0x95008cu + 8u)) + S1_4;  // (from the original)
    *gptr<u32>(r0_2 + 0x354u) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    return r0_2;
}

}  // namespace d_0033b748
GUEST_EXPORT(0x0033b748, d_0033b748::f_0033b748);

// f_0033d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033d150 {

inline guest::global<u32, 0x0033d2a8> global_0033d2a8;  // (from the original)
inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32, u32)> call_005f1224;  // (from the original)
inline constexpr guest::Function<0x006b1a64, u32(u32, u32, u32, u32)> call_006b1a64;  // (from the original)
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32, u32)> call_006b1aa0;  // (from the original)
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32, u32)> call_0081b648;  // (from the original)
inline constexpr guest::Function<0x0081e020, u32(u32, u32, u32, u32)> call_0081e020;  // (from the original)

u32 f_0033d150(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    float S0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_5 = 0;
    float S0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_6 = 0;
    u32 r2_3 = 0;
    u32 r0_8 = 0;
    u32 r12_1 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    u32 r6_1 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_4 = 0;
    u32 r1_7 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    float S0_8 = 0;
    float S0_9 = 0;
    u32 r0_13 = 0;
    r13 = r13 - 0x90u;  // (from the original)
    r5 = r0;
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_0081e020(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    r0_2 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_005ea8f8(r0_2, 0u, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r0_3 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_1 = u32(*gptr<u16>(r1));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    call_005f1224(r0_3, r1_1, 0u, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_4 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_2 = u32(*gptr<u8>(r1 + 2u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    call_00300914(r0_4, r1_2, 0u, r3_3);
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_5 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_3 = u32(*gptr<u8>(r1 + 3u));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_00300924(r0_5, r1_3, 0u, r3_4);
    S0_5 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(0u);
    r0_6 = *global_0095decc;
    r1_4 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    call_005ea964(r0_6, r1_4, 0x33d298u, 7u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    call_005ea8dc(r0_7, 0u, r2_2, r3_5);
    S0 = guest::cpu()->s[0];
    r6 = 0x853c20u;  // (from the original)
    r1 = 0u;
    do {
L_33d1e4:;
        r3_6 = *gptr<u32>(r6);
        r2_3 = r5 + (r1 + (r1 << 3) + (r1 << 4) << 5) + 0x294u;  // (from the original)
        r0_8 = *gptr<u32>(r6 + 4u);
        r12_1 = *gptr<u32>(r2_3 + 0xcu);  // (from the original)
        if (!(r12_1 != r3_6)) {
            if (!(r12_1 != 0)) {
                r3_6 = *gptr<u32>(r2_3 + 0x10u) | r0_8;  // (from the original)
                if ((r3_6 & 1u) == 0) {
                    goto L_33d23c;
                }
            }
            r2_3 = *gptr<u32>(r2_3 + 0x10u);  // (from the original)
            if (r2_3 == r0_8) {
                goto L_33d23c;
            }
        }
        r1 = r1 + 1u;
        guest::preempt();
    } while (s32(r1) < s32(5u));
    r1 = ~0u;
L_33d23c:;
    r0_9 = r1 + (r1 << 3) + (r1 << 4);
    r1_5 = r13 + 4u;
    r4_1 = r5 + (r0_9 << 5);
    r0_10 = r4_1 + 0x294u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_006b1a64(r0_10, r1_5, r2_3, r3_6);
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r6_1 = r6 + 8u;
    r0_11 = r4_1 + 0x294u;  // (from the original)
    r1_6 = *gptr<u32>(r6_1);
    r2_4 = *gptr<u32>(r6_1 + 4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    call_0081b648(r0_11, r1_6, r2_4, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_12 = r4_1 + 0x294u;  // (from the original)
    S0_8 = std::bit_cast<float>(*global_0033d2a8);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    call_006b1aa0(r0_12, r1_7, r2_5, r3_8);
    S0_9 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 4u) = u32(0x90a148u);  // (from the original)
    r0_13 = r13 + 4u;
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = 0x90a148u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_9;
    return r0_13;
}

}  // namespace d_0033d150
GUEST_EXPORT(0x0033d150, d_0033d150::f_0033d150);

// f_0033dab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033dab8 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0033dab8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
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
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r3_7 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_8 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r0_12 = 0;
    r13 = r13 - 0xf0u;  // (from the original)
    r5 = r0;
    r6 = r1 - 1u;
    r0_1 = r13 + 4u;
    r1_1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003083bc(r0_1, r1_1, 0x5eu, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r7 = 0x90a3b0u;  // (from the original)
    *gptr<u32>(r0_2) = u32(r7);
    r0_3 = r0_2 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_005f4bfc(r0_3, r1_2, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4_1 = r0_4 - 0xcu;  // (from the original)
    r0_5 = r0_4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_5, 0xbcu, r2_2, r3_2);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r0_6 = r4_1 + 0x18u;  // (from the original)
    r4 = 0u;
    r0 = r0_6 - 2u;
    r1 = 0x2fu;  // (from the original)
    do {
L_33db08:;
        r3_3 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_3);
        r3_4 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_7 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_7, 0u, r2, r3_4);
    *gptr<u32>(r13) = u32(r4);
    r0_8 = *global_0095decc;
    r3_5 = r6 & 0xffu;  // (from the original)
    r1_3 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_8, r1_3, 0x879f60u, r3_5);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_9, 0u, r2_3, r3_6);
    r2_4 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_4 = r13 + 4u;
    r0_10 = r5 + 0x1dcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_10, r1_4, r2_4, r3_7);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_11 = r5 + 0x1dcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_11, r1_5, r2_5, r3_8);
    r1_6 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 4u) = u32(r7);
    r0_12 = r13 + 4u;
    r13 = r13 + 0xf0u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_12;
}

}  // namespace d_0033dab8
GUEST_EXPORT(0x0033dab8, d_0033dab8::f_0033dab8);

// f_0033db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033db9c {

inline guest::global<u32, 0x0033dca8> global_0033dca8;  // (from the original)
inline guest::global<u32, 0x0033dcac> global_0033dcac;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x0033d9d0, u32(u32, u32, u32, u32)> call_0033d9d0;  // (from the original)
inline constexpr guest::Function<0x0033dab8, u32(u32, u32, u32, u32)> call_0033dab8;  // (from the original)
inline constexpr guest::Function<0x0033dcb0, u32(u32, u32, u32, u32)> call_0033dcb0;  // (from the original)
inline constexpr guest::Function<0x0033de44, u32(u32, u32, u32, u32)> call_0033de44;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x007159b0, u32(u32, u32, u32, u32)> call_007159b0;  // (from the original)
inline constexpr guest::Function<0x00715b88, u32(u32, u32, u32, u32)> call_00715b88;  // (from the original)
inline constexpr guest::Function<0x00715c98, u32(u32, u32, u32, u32)> call_00715c98;  // (from the original)

u32 f_0033db9c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    u32 r2_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    u32 r0_4 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    u32 r1_2 = 0;
    u32 r2_8 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    float S0_9 = 0;
    float S1_9 = 0;
    u32 zf_1 = 0;
    u32 r0_6 = 0;
    float S0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    float S0_11 = 0;
    float S1_10 = 0;
    u32 r0_7 = 0;
    float S0_12 = 0;
    float S1_11 = 0;
    u32 r2_11 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_12 = 0;
    u32 r3_10 = 0;
    float S0_13 = 0;
    float S1_12 = 0;
    u32 r0_9 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    if (r0_1 == 0) {
        goto L_33dca4;
    }
    r5_1 = r0_1 + 0x8ae0u;  // (from the original)
    *gptr<u32>(r0 + 0x5c0u) = u32(r1);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_007159b0(r5_1, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0033dab8(r0, r0_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    r0_3 = call_00715b88(r5_1, r0_2, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    call_0033de44(r0, r0_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    call_0033dcb0(r0, r0_2, r2_5, r3_5);
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    r2_6 = *gptr<u32>(r5_1 + (r0_2 << 2) + 0x1cu);  // (from the original)
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    call_0033d9d0(r0, r0_2, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    r0_4 = call_00715c98(r5_1, r0_2, r2_7, r3_7);
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    if (r0_4 != 0) {
        if ((u32(*gptr<u8>(r5_1 + r0_2 + 0x1b4u)) & 2u) == 0) {  // (from the original)
            r1_2 = 1u;
            r0_4 = 0u;
            goto L_33dc44;
        }
    }
    r1_2 = 0u;
L_33dc44:;
    *gptr<u8>(r0 + 0x5c4u) = u8(r1_2);  // (from the original)
    r2_8 = *gptr<u32>(r0 + 0x1d8u);  // (from the original)
    r1_3 = r0 + 0x1b0u;  // (from the original)
    r0_5 = r0 + 4u;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    call_00568630(r0_5, r1_3, r2_8, 0u);
    r1_4 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_9 = guest::cpu()->s[0];
    S1_9 = guest::cpu()->s[1];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        S0_9 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1b4u));  // (from the original)
        S1_9 = std::bit_cast<float>(*global_0033dca8);
    }
    r0_6 = r0 + 0x1b0u;  // (from the original)
    if (zf_1) {
        S0_10 = std::bit_cast<float>(*global_0033dcac);
    } else {
        S0_10 = S0_9 - S1_9;
    }
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1_9;
    call_005697e0(r0_6, r1_4, r2_9, r3_8);
    r1_5 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_11 = guest::cpu()->s[0];
    S1_10 = guest::cpu()->s[1];
    r0_7 = r0 + 4u;
    guest::cpu()->s[0] = S0_11;
    guest::cpu()->s[1] = S1_10;
    call_00568c10(r0_7, r1_5, r2_10, r3_9);
    S0_12 = guest::cpu()->s[0];
    S1_11 = guest::cpu()->s[1];
    r2_11 = *gptr<u32>(r0 + 0x1d8u);  // (from the original)
    r1_6 = r0 + 0x1b0u;  // (from the original)
    r0_8 = r0 + 4u;
    guest::cpu()->s[0] = S0_12;
    guest::cpu()->s[1] = S1_11;
    call_00568984(r0_8, r1_6, r2_11, 0u);
    r1_7 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_13 = guest::cpu()->s[0];
    S1_12 = guest::cpu()->s[1];
    r0_9 = r0 + 4u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0_13;
    guest::cpu()->s[1] = S1_12;
    return call_00568c10(r0_9, r1_7, r2_12, r3_10);
L_33dca4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0033db9c
GUEST_EXPORT(0x0033db9c, d_0033db9c::f_0033db9c);

// f_0033dcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033dcb0 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_0033dcb0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r3_6 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r3_7 = 0;
    u32 ea_2 = 0;
    u32 r0_12 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r3_9 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r3_10 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r3_11 = 0;
    u32 r1_8 = 0;
    u32 r2_5 = 0;
    u32 r3_12 = 0;
    u32 r0_18 = 0;
    u32 r2_6 = 0;
    u32 r3_13 = 0;
    u32 r1_9 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r2_7 = 0;
    u32 r3_14 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r2_8 = 0;
    u32 r3_15 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    r5 = r0;
    r13 = r13 - 0x258u;  // (from the original)
    r8 = r1 - 1u;
    r0_1 = r1 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0029b88c(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312bd0(r0_3, r1_1, r2_1, r3_1);
    *gptr<u32>(r13) = u32(4u);
    r1_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
    r0_4 = r13 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00312c4c(r0_4, r1_2, 0xau, 0xau);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb94c(r0_5, r1_3, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r6 = r0_6;
    r0_7 = r13 + 8u;
    r1_4 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003083bc(r0_7, r1_4, 0xbcu, r3_3);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r7 = 0x909b98u;  // (from the original)
    *gptr<u32>(r0_8) = u32(r7);
    r0_9 = r0_8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_005f4bfc(r0_9, r1_5, r2_3, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_1 = r0_10 - 0xcu;  // (from the original)
    r0_11 = r0_10 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_11, 0x178u, r2_4, r3_5);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r9 = 0u;
    r0 = r4_1 + 0x16u;  // (from the original)
    r1 = 0x5eu;  // (from the original)
    do {
L_33dd34:;
        r3_6 = u32(*gptr<u16>(r2));
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r3_6);
        r3_7 = u32(*gptr<u16>(r2));
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_7);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_12 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8f8(r0_12, 0u, r2, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_13 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    r1_6 = r13 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00312ca0(r0_13, r1_6, 0u, r3_8);
    r3_9 = guest::cpu()->r[3];
    if (r6 != 0) {
        r1_7 = r6 + 0xa47au;  // (from the original)
        r0_14 = r13 + 0x1dcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_002fe7f4(r0_14, r1_7, 0u, r3_9);
        r3_10 = guest::cpu()->r[3];
        r0_16 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fe874(r0_16, r0_15, 0u, r3_10);
        *gptr<u32>(r13 + 0x1dcu) = u32(0x909f18u);  // (from the original)
    }
    *gptr<u32>(r13) = u32(r9);
    r0_17 = *global_0095decc;
    r3_11 = r8 & 0xffu;  // (from the original)
    r1_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_005ea964(r0_17, r1_8, 0x879f9cu, r3_11);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_18 = *global_0095decc;
    guest::cpu()->r[13] = r13;
    call_005ea8dc(r0_18, 0u, r2_5, r3_12);
    r2_6 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r1_9 = r13 + 8u;
    r0_19 = r5 + 0x3a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6cc0(r0_19, r1_9, r2_6, r3_13);
    r1_10 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_20 = r5 + 0x3a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005d6d28(r0_20, r1_10, r2_7, r3_14);
    r1_11 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r7);
    r0_21 = r13 + 0x198u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_00312cb0(r0_21, r1_11, r2_8, r3_15);
    r1_12 = guest::cpu()->r[1];
    r13 = r13 + 0x258u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_22;
}

}  // namespace d_0033dcb0
GUEST_EXPORT(0x0033dcb0, d_0033dcb0::f_0033dcb0);

// f_0033e040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e040 {

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32, u32)> call_00112ff4;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x0030878d, u32(u32, u32, u32, u32)> call_0030878c;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> call_005c4e5c;  // (from the original)

u32 f_0033e040(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 zf_1 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r3_5 = 0;
    goto L_33e040;
L_33e040:;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = u32(s32(s8(*gptr<u8>(r4_1))));
    r0_3 = r0_2 + 4u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_003058c8(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7 = r0_4;
    guest::cpu()->r[13] = r13;
    r0 = call_005c4e5c(r1, r1_3, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    zf_1 = r7 == 0;
    if (!zf_1) {
        zf_1 = r0 == 0;
    }
    if (zf_1) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1_4 = r0 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_00309f84(r7, r1_4, r2_4, r3_4);
    r1_5 = u32(*gptr<u8>(r4_1 + 1u));
    r6 = r0_5;
    r4 = r1_5 & 1u;
    r3_5 = (r1_5 & 2u) >> 1;
    if (r0_5 == 0) {
        goto L_33e0e0;
    }
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0 = call_0030878c(r6, r0, r4, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_33e0c4:;
    if (r4 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return guest::call_address<u32>(0x113ecdu, r6, r7, r2, r3);  // (from the original)
L_33e0e0:;
    guest::cpu()->r[13] = r13;
    r0 = call_00112ff4(r7, r0, r4, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    guest::preempt();
    goto L_33e0c4;
}

}  // namespace d_0033e040
GUEST_EXPORT(0x0033e040, d_0033e040::f_0033e040);

// f_0033e104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e104 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)

u32 f_0033e104(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe8a8(r1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1 = u32(*gptr<u8>(r0 + 2u));
    r4 = r0_1 + 0x8d6cu;  // (from the original)
    if (r1 == 0) {
        goto L_33e13c;
    } else {
        r0 = 1u;
    }
    *gptr<u8>(r4 + 9u) = u8(r0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_33e13c:;
    r1_2 = u32(*gptr<u16>(r0));
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcbb0(r0_2, r1_2, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_4 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_4, r0_3, guest::cpu()->r[2], r3_2);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    *gptr<u8>(r4 + 9u) = u8(r0);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0033e104
GUEST_EXPORT(0x0033e104, d_0033e104::f_0033e104);

// f_0033e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e230 {

struct __attribute__((packed)) Object_0033e230_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0033e230_0, half_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_0033e230(gptr<Object_0033e230_0> arg0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    r0_1 = u32(arg0->half_0);
    r1_1 = *global_0095386c;
    *gptr<u16>(r1_1 + 0xa8u) = u16(r0_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0033e230
GUEST_EXPORT(0x0033e230, d_0033e230::f_0033e230);

// f_0033e60c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e60c {

struct __attribute__((packed)) Object_0033e60c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0033e60c_0, byte_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0094d090> global_0094d090;  // (from the original)
inline constexpr guest::Function<0x001426b0, u32(u32, u32, u32, u32)> call_001426b0;  // (from the original)

u32 f_0033e60c(gptr<Object_0033e60c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(arg0->byte_0);
    zf_1 = r0_1 == 3u;
    if (!zf_1) {
        zf_1 = r0_1 == 4u;
    }
    if (!zf_1) {
        zf_1 = r0_1 == 5u;
    }
    if (!zf_1) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = *gptr<u32>(*global_0094d090 + 0x28u);  // (from the original)
    call_001426b0(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0x5f0u) = u32(0u);  // (from the original)
    *gptr<u8>(r0) = u8(2u);
    *gptr<u32>(r0 + 4u) = u32(0u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 2u;
    return 0u;
}

}  // namespace d_0033e60c
GUEST_EXPORT(0x0033e60c, d_0033e60c::f_0033e60c);

// f_0033e8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e8cc {

struct __attribute__((packed)) Object_0033e8cc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0033e8cc_0, byte_0, 0x0);  // (from the original)


u32 f_0033e8cc(gptr<Object_0033e8cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    ea_1 = 0x83b46cu + (u32(arg0->byte_0) << 3);  // (from the original)
    r1_1 = *gptr<u32>(ea_1);
    r2_1 = *gptr<u32>(ea_1 + 4);
    r0_1 = r0 + u32(s32(r2_1) >> 1);
    if ((r2_1 & 1u) == 0) {
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    r2_2 = *gptr<u32>(r0_1);
    r1_2 = *gptr<u32>(r2_2 + r1_1);
    return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0033e8cc
GUEST_EXPORT(0x0033e8cc, d_0033e8cc::f_0033e8cc);

// f_0033e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e960 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;  // (from the original)

u32 f_0033e960(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0023bbe4(r0, r1, r2, r3);
    *gptr<u32>(r0_1 + 0x7cu) = u32(0x8f68a0u + 0x128u);  // (from the original)
    *gptr<u32>(r0_1) = u32(0x8f68a0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x108u) = u32(r0_1 + 0x110u);  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = u32(0x90558cu);  // (from the original)
    *gptr<u32>(r0_1 + 0x10cu) = u32(0x20u);  // (from the original)
    *gptr<u8>(0x20u + (*gptr<u32>(r0_1 + 0x108u) - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = u32(0x905120u);  // (from the original)
    *gptr<u8>(*gptr<u32>(r0_1 + 0x108u)) = u8(u32(*global_008c9f1c));  // (from the original)
    *gptr<u32>(r0_1 + 0x104u) = u32(0x9048ecu);  // (from the original)
    *gptr<u32>(r0_1 + 0x130u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0033e960
GUEST_EXPORT(0x0033e960, d_0033e960::f_0033e960);

// f_0033f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033f2c4 {

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32, u32)> call_00112ff4;  // (from the original)
inline constexpr guest::Function<0x00113469, u32(u32, u32, u32, u32)> call_00113468;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> call_005c4e5c;  // (from the original)

u32 f_0033f2c4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 zf_1 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_2 = u32(s32(s8(*gptr<u8>(r0))));
    r0_3 = r0_2 + 4u;
    r0_4 = call_003058c8(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_5 = call_005c4e5c(r1, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = r0_5 == 0;
    }
    if (!zf_1) {
        r1_5 = r0_5 + 0x55a6u;  // (from the original)
        r0_6 = call_00309f84(r0_4, r1_5, r2_4, guest::cpu()->r[3]);
        r2_5 = guest::cpu()->r[2];
        r4_1 = r0_6;
        if (r0_6 == 0) {
            r0_7 = call_00112ff4(r0_4, r0_5, 1u, guest::cpu()->r[3]);
            r2_5 = guest::cpu()->r[2];
            r4_1 = r0_7;
        }
        r0_8 = r0_4 + 0x2510u;  // (from the original)
        r1_6 = *gptr<u32>(r0_8) & ~0x600u | 0x200u;  // (from the original)
        *gptr<u32>(r0_8) = u32(r1_6);
        r0_5 = call_00113468(r0_4, r1_6, r2_5, guest::cpu()->r[3]);
        *gptr<u8>(r4_1 + 0xbcu) = u8(u32(*gptr<u8>(r4_1 + 0xbcu)) | 0x20u);  // (from the original)
        r1_4 = u32(*gptr<u8>(r4_1 + 0xb8u)) | 4u;  // (from the original)
        *gptr<u8>(r4_1 + 0xb8u) = u8(r1_4);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return r0_5;
}

}  // namespace d_0033f2c4
GUEST_EXPORT(0x0033f2c4, d_0033f2c4::f_0033f2c4);

// f_0033f368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033f368 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32, u32, u32)> call_001139fc;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00697f60, u32(u32, u32, u32, u32)> call_00697f60;  // (from the original)

u32 f_0033f368(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002fb310(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r1_2 = u32(s32(s8(*gptr<u8>(r0))));
    r0_3 = r0_2 + 4u;
    r0_4 = call_003058c8(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return r0_4;
    }
    r1_4 = u32(*gptr<u8>(r0 + 1u));
    if (r1_4 != 0) {
        if (r1_4 == 1u) {
            goto L_33f3e0;
        }
        if (r1_4 != 2u) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_4;
            return r0_4;
        }
        call_001139fc(r0_4, 0u, r2_3, guest::cpu()->r[3]);
        r0_5 = u32(s32(s8(*gptr<u8>(r0))));
        guest::cpu()->r[13] += 8u;
        return call_00697f60(r0_5, 1u, 0u, guest::cpu()->r[3]);
    }
    call_001139fc(r0_4, 0x17u, r2_3, guest::cpu()->r[3]);  // (from the original)
    r0_6 = u32(s32(s8(*gptr<u8>(r0))));
    guest::cpu()->r[13] += 8u;
    return call_00697f60(r0_6, 1u, 0u, guest::cpu()->r[3]);
L_33f3e0:;
    call_001139fc(r0_4, 2u, r2_3, guest::cpu()->r[3]);
    r0_7 = u32(s32(s8(*gptr<u8>(r0))));
    guest::cpu()->r[13] += 8u;
    return call_00697f60(r0_7, 0u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0033f368
GUEST_EXPORT(0x0033f368, d_0033f368::f_0033f368);

// f_0033fb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033fb8c {

struct __attribute__((packed)) Object_0033fb8c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0033fb8c_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)

u32 f_0033fb8c(gptr<Object_0033fb8c_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    r0_2 = *global_0095386c;
    r1_1 = u32(*gptr<u8>(r0_2)) & ~0x40u;  // (from the original)
    *gptr<u8>(r0_2) = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0033fb8c
GUEST_EXPORT(0x0033fb8c, d_0033fb8c::f_0033fb8c);

// f_0033fbb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033fbb4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

u32 f_0033fbb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 nf_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    if (r1 != 0) {
        r1_1 = 0x23c3u - 0x17cu;  // (from the original)
        r0_1 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r0_1, r1_1, r2, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_2 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r0_2, 0x23c3u, r2_1, r3_1);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        nf_1 = u32(*gptr<u8>(0x5700u + r1)) << 0x1b >> 0x1f;  // (from the original)
        *gptr<u32>(r13) = u32(r13 + 0xcu);  // (from the original)
        *gptr<u32>(r13 + 4) = u32(4u);
        *gptr<u32>(r13 + 8) = u32(0u);
        if (nf_1 != 0u) {
            r2_2 = 1u;
        }
        if (nf_1 == 0u) {
            r2_2 = 2u;
        }
        r3_2 = r1 + 0x55a6u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00306354(r0, 0x33fc4cu, r2_2, r3_2);  // (from the original)
        r3_3 = guest::cpu()->r[3];
        r1_2 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00768138(r0, r1_2, 0u, r3_3);
        r1 = guest::cpu()->r[1];
        r0 = r13 + 0xcu;  // (from the original)
    }
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0033fbb4
GUEST_EXPORT(0x0033fbb4, d_0033fbb4::f_0033fbb4);
