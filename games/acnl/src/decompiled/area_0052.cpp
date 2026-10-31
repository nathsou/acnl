// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"

#include <bit>

using guest::gptr;

// f_00520ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520ce8 {


u32 f_00520ce8(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0x975294u;  // (from the original)
    r1 = *gptr<u32>(r2 + 8u);
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r0 >= r1) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(r2);
    r0 = r1 + (r0 + (r0 << 1) << 2);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00520ce8
GUEST_EXPORT(0x00520ce8, d_00520ce8::f_00520ce8);

// f_00520d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d1c {


u32 f_00520d1c(u32 r0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(0x975298u);  // (from the original)
    r0 = *gptr<u32>(r1 + (r0 << 3));
    return guest::call_address<u32>(r0, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00520d1c
GUEST_EXPORT(0x00520d1c, d_00520d1c::f_00520d1c);

// f_00520d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d30 {


u32 f_00520d30(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = *gptr<u32>(*gptr<u32>(0x975298u) + (r0 << 3) + 4u);  // (from the original)
    r0 = r1;
    return guest::call_address<u32>(r2, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00520d30
GUEST_EXPORT(0x00520d30, d_00520d30::f_00520d30);

// f_00520d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d5c {

struct __attribute__((packed)) Object_00520d5c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00520d5c_1, word_4, 0x4);  // (from the original)


u32 f_00520d5c(u32 r0, gptr<Object_00520d5c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    if (r1 == 0) {
        r0 = 0u;
        return r0;
    }
    r2 = *gptr<u32>(r0);
    if (r2 == 0) {
        *gptr<u32>(r0 + 4u) = u32(r1);
    } else {
        *gptr<u32>(r2) = u32(r1);
        arg1->word_4 = u32(*gptr<u32>(r0));
    }
    *gptr<u32>(r0) = u32(r1);
    r0 = 1u;
    return r0;
}

}  // namespace d_00520d5c
GUEST_EXPORT(0x00520d5c, d_00520d5c::f_00520d5c);

// f_00520df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520df4 {

struct __attribute__((packed)) Object_00520df4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520df4_1, word_0, 0x0);  // (from the original)


u32 f_00520df4(u32 r0, gptr<Object_00520df4_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    if (r1 == 0) {
        r0 = 0u;
        return r0;
    }
    r2 = *gptr<u32>(r0 + 4u);
    if (r2 == 0) {
        *gptr<u32>(r0) = u32(r1);
    } else {
        *gptr<u32>(r2 + 4u) = u32(r1);
        arg1->word_0 = u32(*gptr<u32>(r0 + 4u));
    }
    *gptr<u32>(r0 + 4u) = u32(r1);
    r0 = 1u;
    return r0;
}

}  // namespace d_00520df4
GUEST_EXPORT(0x00520df4, d_00520df4::f_00520df4);

// f_00521000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521000 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521000() {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8a3af8u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    ea = r1 + 0x10u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    ea = r1 + 0xcu;  // (from the original)
    r2 = *gptr<u32>(ea);
    ea = r13;
    *gptr<u32>(ea) = u32(r2);
    ea = r1;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521000
GUEST_EXPORT(0x00521000, d_00521000::f_00521000);

// f_00521030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521030 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521030() {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8a3af8u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    ea = r1 + 0x28u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    ea = r13;
    *gptr<u32>(ea) = u32(*gptr<u32>(r1 + 0x24u));  // (from the original)
    ea = r1 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521030
GUEST_EXPORT(0x00521030, d_00521030::f_00521030);

// f_00521070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521070 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521070() {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8a3af8u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    ea = r1 + 0x40u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    ea = r13;
    *gptr<u32>(ea) = u32(*gptr<u32>(r1 + 0x3cu));  // (from the original)
    ea = r1 + 0x30u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521070
GUEST_EXPORT(0x00521070, d_00521070::f_00521070);

// f_005210a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005210a8 {

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x005204c8, u32(u32, u32, u32, u32)> call_005204c8;  // (from the original)

u32 f_005210a8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0051fe30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    return call_005204c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005210a8
GUEST_EXPORT(0x005210a8, d_005210a8::f_005210a8);

// f_00521a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a48 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521a48() {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8a3af8u;  // (from the original)
    r13 = r13 - 0x10u;  // (from the original)
    ea = r1 + 0x58u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r3);
    ea = r13;
    *gptr<u32>(ea) = u32(*gptr<u32>(r1 + 0x54u));  // (from the original)
    ea = r1 + 0x48u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521a48
GUEST_EXPORT(0x00521a48, d_00521a48::f_00521a48);

// f_00521a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a8c {

struct __attribute__((packed)) Object_00521a8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
};
GUEST_OFFSET(Object_00521a8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_12, 0x12);  // (from the original)

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00747944, u32(u32, u32, u32, u32)> call_00747944;  // (from the original)

u32 f_00521a8c(gptr<Object_00521a8c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = 0x9036c4u;  // (from the original)
    r4 = r0;
    r0 = 0u;
    r2 = ~0u;
    arg0->word_8 = u32(r0);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->half_c = u16(r0);
    arg0->byte_e = u8(r0);
    arg0->byte_f = u8(r0);
    arg0->byte_10 = u8(r0);
    arg0->byte_11 = u8(r0);
    arg0->byte_12 = u8(r0);
    r0 = call_0051fe30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_00747944(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 4u) = u32(r0);
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00521a8c
GUEST_EXPORT(0x00521a8c, d_00521a8c::f_00521a8c);

// f_00521ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ddc {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521ddc(u32 r0, u32 r1, float S0) {
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        if ((*gptr<u32>(0x953af4u) & 1u) != 0) {  // (from the original)
            r0 = 0x953b04u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = 0x953af4u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            r0 = 0x953b04u;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = 0x953b04u;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x521e64u));  // (from the original)
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
        r0 = 0x953b04u;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = *gptr<u32>(0x9752d4u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (cf && !zf) {
        r0 = *gptr<u32>(*gptr<u32>(r0 + 0xd8u));  // (from the original)
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if ((r1 & 1u) == 0) {
        r0 = 0x9752c4u;  // (from the original)
    } else {
        r0 = r0 + 0x114u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00521ddc
GUEST_EXPORT(0x00521ddc, d_00521ddc::f_00521ddc);

// f_00521e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521e74 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521e74(u32 r0, u32 r1, float S0) {
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 != 0) {
        if ((*gptr<u32>(0x953af0u) & 1u) != 0) {  // (from the original)
            r0 = 0x953afcu;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = 0x953af0u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_002fe7dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r0 == 0) {
            r0 = 0x953afcu;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            return r0;
        }
        r0 = 0x953afcu;  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(0x521eecu));  // (from the original)
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
        r0 = 0x953afcu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r0 = *gptr<u32>(0x9752d4u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (cf && !zf) {
        r0 = *gptr<u32>(*gptr<u32>(r0 + 0xd8u));  // (from the original)
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    r0 = r0 + 0x11cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00521e74
GUEST_EXPORT(0x00521e74, d_00521e74::f_00521e74);

// f_00521ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ef8 {

inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521ef8(u32 r0, u32 r1, u32 r2) {
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_005ce6dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        if ((*gptr<u32>(0x953af8u) & 1u) != 0) {  // (from the original)
            r0 = 0x953b0cu;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r0 = 0x953af8u;  // (from the original)
        r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r0 = 0x953b0cu;  // (from the original)
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = 0x80000000u;  // (from the original)
        *gptr<u32>(0x953b0cu) = u32(r1);  // (from the original)
        *gptr<u32>(0x953b0cu + 4) = u32(r1);  // (from the original)
        r0 = 0x953b0cu;  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(0x9752d4u);  // (from the original)
    r1 = *gptr<u32>(r0 + 0xd0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (cf && !zf) {
        r0 = *gptr<u32>(*gptr<u32>(r0 + 0xd8u));  // (from the original)
    }
    if (!cf || zf) {
        r0 = 0u;
    }
    r1 = *gptr<u32>(r0 + 0x10u);  // (from the original)
    if ((r1 & 1u) == 0) {
        r0 = 0x9752ccu;  // (from the original)
    } else {
        r0 = r0 + 0x14u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00521ef8
GUEST_EXPORT(0x00521ef8, d_00521ef8::f_00521ef8);

// f_00522168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522168 {

inline constexpr guest::Function<0x005221d8, u32(u32, u32, u32, u32)> call_005221d8;  // (from the original)

u32 f_00522168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 nf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_005221d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = r5 + 1u;
    r0 = r4;
    r0 = call_005221d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r0 - 1u;
        goto L_5221b0;
    }
    r1 = r5;
    r0 = r4;
    r0 = call_005221d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    nf = r0 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r0 = *gptr<u32>(r4 + 8u);
    }
    if (nf != vf) {
        r1 = ~0u;
    }
    if (nf == vf) {
        r1 = *gptr<u32>(r0 + 8u);
    }
L_5221b0:;
    if (r6 + 1u == 0) {
        r0 = ~0u;
        goto L_5221d4;
    }
    r0 = r1 - r6 + 1u;
    if (*gptr<u32>(*gptr<u32>(r4 + 8u) + 8u) == r1) {
        r0 = r0 - 1u;
    }
L_5221d4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00522168
GUEST_EXPORT(0x00522168, d_00522168::f_00522168);

// f_005221d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005221d8 {

struct __attribute__((packed)) Object_005221d8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005221d8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005221d8_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005221d8(gptr<Object_005221d8_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res = r1;
    r4 = res;
    if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_52222c;
    }
    r1 = arg0->word_4 - 1u;
    if (s32(r1) < s32(r4)) {
        goto L_52222c;
    }
    r5 = r0;
    if (s32(r4) >= s32(arg0->word_10)) {
        r1 = r4;
        r0 = r5;
        r0 = call_005224e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    r0 = u32(*gptr<u16>(r1 + (r4 << 1)));
    if (r4 == 0) {
        goto L_522230;
    }
    res = r0;
    if (!u32(res == 0) && res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_522230;
    }
L_52222c:;
    r0 = ~0u;
L_522230:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005221d8
GUEST_EXPORT(0x005221d8, d_005221d8::f_005221d8);

// f_005224bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005224bc {

struct __attribute__((packed)) Object_005224bc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005224bc_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005224bc(gptr<Object_005224bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (s32(arg0->word_10) <= s32(r5)) {
        r0 = r4;
        r0 = call_005224e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = u32(*gptr<u16>(*gptr<u32>(r4 + 0xcu) + (r5 << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_005224bc
GUEST_EXPORT(0x005224bc, d_005224bc::f_005224bc);

// f_00522ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522ae0 {

inline constexpr guest::Function<0x0052296c, u32(u32, u32, u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00522ae0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r4 = r0;
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005234d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052296c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r5 != 0) {
        ea = r4 + 0x14u;  // (from the original)
        r1 = *gptr<u32>(ea);
        ea = r4 + 0x20u;  // (from the original)
        *gptr<u8>(ea) = u8(0u);
        ea = r4 + 0x1cu;  // (from the original)
        *gptr<u32>(ea) = u32(r1);
        *gptr<u32>(ea + 0x74u) = u32(~0u);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00522ae0
GUEST_EXPORT(0x00522ae0, d_00522ae0::f_00522ae0);

// f_00523020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523020 {

struct __attribute__((packed)) Object_00523020_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00523020_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0052296c, u32(u32, u32, u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00523020(gptr<Object_00523020_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r7 = ~0u;
    r6 = r3;
    r1 = 1u;
    if (r2 != 0) {
        arg0->word_18 = u32(r7);
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005234d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005234d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052296c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    ea = r4 + 8u;
    r0 = *gptr<u32>(ea);
    res = r5;
    if (res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        r5 = 0u;
    }
    if (s32(r0) < s32(r5)) {
        r5 = r0;
    }
    zf = r6 == 0;
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    ea = r4 + 0x14u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    ea = r4 + 0x20u;  // (from the original)
    *gptr<u8>(ea) = u8(r0);
    if (!zf) {
        ea = r4 + 0x1cu;  // (from the original)
        *gptr<u32>(ea) = u32(r5);
        *gptr<u32>(ea + 0x74u) = u32(r7);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00523020
GUEST_EXPORT(0x00523020, d_00523020::f_00523020);

// f_005235e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005235e8 {

struct __attribute__((packed)) Object_005235e8_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_005235e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005235e8_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> call_005230d4;  // (from the original)

u32 f_005235e8(gptr<Object_005235e8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 8;
    r1 = arg0->word_1c;
    r4 = r0;
    r0 = arg0->word_14;
    res = r1 - r0;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (zf || nf != vf) {
        r2 = r0;
    }
    if (!zf && nf == vf) {
        r2 = r1;
    }
    if (zf || nf != vf) {
        r3 = r1;
    }
    if (!zf && nf == vf) {
        r3 = r0;
    }
    r2 = r2 - r3;
    res = r2;
    if (!(u32(res == 0) || res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f)) {  // (from the original)
        res = r1 - r0;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r1 ^ r0) & (r1 ^ res)) >> 0x1f;  // (from the original)
        if (!zf && nf == vf) {
            r2 = r1;
        }
        if (zf || nf != vf) {
            r3 = r1;
            r2 = r0;
        }
        if (!zf && nf == vf) {
            r3 = r0;
            r1 = r0;
        }
        r2 = r2 - r3;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_005230d4(r0, r1, r2, r3);
    }
    ea = r4 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r4 + 0x20u;  // (from the original)
    *gptr<u8>(ea) = u8(0u);
    ea = r4 + 0x1cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r1 = ~0u;
    *gptr<u32>(ea + 0x74u) = u32(r1);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005235e8
GUEST_EXPORT(0x005235e8, d_005235e8::f_005235e8);

// f_00523658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523658 {

struct __attribute__((packed)) Object_00523658_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00523658_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32, u32)> call_0010181c;  // (from the original)
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32, u32)> call_00522074;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00523658(gptr<Object_00523658_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r1;
    arg0->word_18 = u32(~0u);
    r5 = r2;
    r1 = 1u;
    r0 = r4;
    r0 = call_005234d8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0u;
    if (r6 != 0) {
        res = r5;
        if (res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r6;
            r0 = call_00100834(r0, r1, r2, guest::cpu()->r[3]);
            r5 = r0;
        }
        r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        r1 = r6;
        if (s32(r0) < s32(r5)) {
            r5 = r0;
        }
        r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        r2 = r5;
        r0 = call_0010181c(r0, r1, r2, guest::cpu()->r[3]);
        *gptr<u16>(*gptr<u32>(r4 + 0x10u) + (r5 << 1)) = u16(r7);  // (from the original)
        *gptr<u32>(r4 + 8u) = u32(r5);
    } else {
        *gptr<u16>(*gptr<u32>(r4 + 0x10u)) = u16(r7);  // (from the original)
        *gptr<u32>(r4 + 8u) = u32(r7);
    }
    *gptr<u32>(r4 + 0x24u) = u32(r7);  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r7);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r7);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r7);  // (from the original)
    r5 = *gptr<u32>(r4 + 4u);
    r1 = r7;
    r2 = 0u;
    r0 = r5;
    r0 = call_00522074(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5 + 0x10u) = u32(r0);  // (from the original)
    r0 = 1u;
    *gptr<u8>(r4 + 0x96u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00523658
GUEST_EXPORT(0x00523658, d_00523658::f_00523658);

// f_0052370c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052370c {

struct __attribute__((packed)) Object_0052370c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u8 byte_20;
    u8 unknown_21[0x73];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(Object_0052370c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x004dac10, u32(u32, u32, u32, u32)> call_004dac10;  // (from the original)
inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> call_005230d4;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)
inline constexpr guest::Function<0x005235e8, u32(u32, u32, u32, u32)> call_005235e8;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_0052370c(gptr<Object_0052370c_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r8 = 0x10003dbu;  // (from the original)
    zf = u32(arg0->byte_94) == 1u;
    if (zf) {
        zf = u32(arg0->byte_20) == 0;
    }
    if (!zf) {
        r7 = ~0u;
        r1 = 0u;
        r0 = r4;
        arg0->word_18 = u32(r7);
        r0 = call_005234d8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r6 = 0u;
        if (u32(*gptr<u8>(r4 + 0x20u)) == 0) {  // (from the original)
            goto L_5237ac;
        }
        r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
        r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        res = r0 - r1;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r0 ^ r1) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (!zf && nf == vf) {
            r2 = r0;
        }
        if (zf || nf != vf) {
            r2 = r1;
        }
        if (!zf && nf == vf) {
            r0 = r1;
        }
        r0 = r2 - r0;
        res = r0;
        if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
            goto L_5237ac;
        }
        r0 = r4;
        r0 = call_005235e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        goto L_5237e4;
    }
    if (r1 != 0) {
        goto L_5237cc;
    }
L_52378c:;
    r0 = *gptr<u32>(r4 + 0x9cu);  // (from the original)
    r0 = call_004dac10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r8;
    r0 = call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_5237cc;
L_5237ac:;
    r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    res = r1;
    if (!u32(res == 0) && res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5237d4;
    }
    *gptr<u8>(r4 + 0x20u) = u8(r6);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r7);  // (from the original)
    if (r5 == 0) {
        guest::preempt();
        goto L_52378c;
    }
L_5237cc:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5237d4:;
    r0 = r4;
    r1 = r1 - 1u;
    r2 = 1u;
    r0 = call_005230d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_5237e4:;
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r7);  // (from the original)
    *gptr<u8>(r4 + 0x20u) = u8(r6);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x9cu);  // (from the original)
    r0 = call_004dac10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 0x10003dau;  // (from the original)
    r0 = call_0058d3b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x95u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052370c
GUEST_EXPORT(0x0052370c, d_0052370c::f_0052370c);

// f_0052389c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052389c {


u32 f_0052389c() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95e0fcu);  // (from the original)
    if (r0 != 0) {
        r0 = *gptr<u32>(r0 + 4u);
    }
    return r0;
}

}  // namespace d_0052389c
GUEST_EXPORT(0x0052389c, d_0052389c::f_0052389c);

// f_005238b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005238b4 {


u32 f_005238b4(u32 r0) {
    u32 r1 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r1 = 0xad6140u;  // (from the original)
    if ((*gptr<u32>(r1 + 0x18u) & 1u) == 0) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(r1 + 0x24u));  // (from the original)
    if (r1 != 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r0 - 0xff10u;  // (from the original)
        zf = r1 == 9u;
        cf = r1 >= 9u;
    }
    if (!cf || zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x2070u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r0 - 0x2080u;  // (from the original)
        zf = r1 == 9u;
        cf = r1 >= 9u;
    }
    if (!cf || zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x2160u;  // (from the original)
    zf = r1 == 0xbu;  // (from the original)
    cf = r1 >= 0xbu;  // (from the original)
    if (cf && !zf) {
        r1 = r0 - 0x2170u;  // (from the original)
        zf = r1 == 0xbu;  // (from the original)
        cf = r1 >= 0xbu;  // (from the original)
    }
    if (!cf || zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x2460u;  // (from the original)
    zf = r1 == 0x13u;  // (from the original)
    cf = r1 >= 0x13u;  // (from the original)
    if (cf && !zf) {
        r1 = r0 - 0x2474u;  // (from the original)
        zf = r1 == 0x13u;  // (from the original)
        cf = r1 >= 0x13u;  // (from the original)
    }
    if (!cf || zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x2488u;  // (from the original)
    zf = r1 == 0x13u;  // (from the original)
    cf = r1 >= 0x13u;  // (from the original)
    if (cf && !zf) {
        r1 = r0 - 0x2776u;  // (from the original)
        zf = r1 == 9u;
        cf = r1 >= 9u;
    }
    if (!cf || zf) {
        r0 = 1u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0 - 0x2780u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r0 = r0 - 0x278au;  // (from the original)
        zf = r0 == 9u;
        cf = r0 >= 9u;
    }
    if (cf && !zf) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005238b4
GUEST_EXPORT(0x005238b4, d_005238b4::f_005238b4);

// f_00523b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523b6c {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00523b6c() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r0 = 0xad6368u;  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea = r0 + 0x234u;  // (from the original)
    r4 = *gptr<u32>(ea);
    ea = r0 + 0x228u;  // (from the original)
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x218u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    ea = r0 + 0x1f4u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x1e8u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r0 + 0x1d8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    r1 = r0 + 0x238u;  // (from the original)
    r0 = r0 + 0x1f8u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1c));  // (from the original)
    r5 = 0u;
    r4 = 0xad6540u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r0 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r0 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r0 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r0 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r0 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r0 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 == 0) {
        *gptr<u32>(r4 + 0x10u) = u32(r5);  // (from the original)
    } else {
        *gptr<u32>(r4 + 0x10u) = u32(2u);  // (from the original)
    }
    if (*gptr<u32>(r4 + 8u) == 2u) {
        *gptr<u32>(r4 + 8u) = u32(1u);
    }
    r0 = *gptr<u32>(r4 + 4u);
    if (r0 == 2u) {
        r0 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
        *gptr<u32>(r4 + 4u) = u32(r0);
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00523b6c
GUEST_EXPORT(0x00523b6c, d_00523b6c::f_00523b6c);

// f_00523d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523d60 {


u32 f_00523d60(u32 r0, u32 r1) {
    u32 zf = 0;
    zf = r0 == 0;
    if (!zf) {
        zf = r1 + 1u == 0;
    }
    *gptr<u8>(0x95e0c9u) = u8(r0);  // (from the original)
    if (zf) {
        return r0;
    } else {
        r0 = 0xad6140u;  // (from the original)
        *gptr<u32>(r0 + 0x138u) = u32(r1);  // (from the original)
    }
    return r0;
}

}  // namespace d_00523d60
GUEST_EXPORT(0x00523d60, d_00523d60::f_00523d60);

// f_005242b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005242b8 {


u32 f_005242b8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95e0fcu);  // (from the original)
    if (r0 != 0) {
        r1 = 0u;
        *gptr<u8>(r0 + 0x99u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005242b8
GUEST_EXPORT(0x005242b8, d_005242b8::f_005242b8);

// f_00524320: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524320 {

inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x00159a0c, u32(u32, u32, u32, u32)> call_00159a0c;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00524320() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    float S7 = 0;
    r0 = 0x8970c8u;  // (from the original)
    r13 = r13 - 0xd8u;  // (from the original)
    r1 = r0 + 0x170u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1c));  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(ea + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(ea + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(ea + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    ea = r0 + 0x190u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r12 = *gptr<u32>(ea + 0xc);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(r0 + 0x1a0u));  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    *gptr<u32>(r0 + 8) = u32(r3);
    *gptr<u32>(r0 + 0xc) = u32(r12);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_005d46dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r6 = 0x95e0c8u;  // (from the original)
    r4 = r0;
    r5 = r13;
    *gptr<u32>(r6 + 0x1cu) = u32(0u);  // (from the original)
    r2 = *gptr<u32>(r13 + (r4 << 2));
    r1 = 0x524428u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r2 = *gptr<u32>(r5 + (r4 << 2));
    r1 = 0x52444cu;  // (from the original)
    r0 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00100ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00569d50(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r5 = *gptr<u32>(r0 + 4u);
    r4 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r13 + 0x3cu) = u32(r13 + 0x40u);  // (from the original)
    r0 = 0xad5f68u;  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    r3 = 0x80u;  // (from the original)
    r2 = r5;
    *gptr<u32>(r13 + 0x38u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 == 0) {
        goto L_524418;
    }
    *gptr<u32>(r13 + 0x3cu) = u32(r13 + 0x80u);  // (from the original)
    r0 = 0xad6054u;  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    r3 = 0x80u;  // (from the original)
    r2 = r5;
    *gptr<u32>(r13 + 0x38u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 == 0) {
        goto L_524418;
    }
    r0 = *gptr<u32>(0xad6038u);  // (from the original)
    r1 = *gptr<u32>(0xad6124u);  // (from the original)
    *gptr<u32>(r6 + 0x1cu) = u32(r1);  // (from the original)
    if (r0 == 0) {
        goto L_524414;
    }
    r1 = *gptr<u32>(r6 + 0x18u);  // (from the original)
    if (r1 != 0) {
        goto L_524414;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00159a0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r6 + 0x18u) = u32(r0);  // (from the original)
L_524414:;
    r0 = 1u;
L_524418:;
    r13 = r13 + 0xd8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00524320
GUEST_EXPORT(0x00524320, d_00524320::f_00524320);

// f_00524478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524478 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> call_00139724;  // (from the original)

u32 f_00524478() {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    r4 = 0x95e0c8u;  // (from the original)
    r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    if (r0 != 0) {
        r0 = call_00139724(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0x18u) = u32(r5);  // (from the original)
    }
    r0 = 0xad5f68u;  // (from the original)
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0xad6054u;  // (from the original)
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_00524478
GUEST_EXPORT(0x00524478, d_00524478::f_00524478);

// f_005244c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005244c0 {

inline constexpr guest::Function<0x0015982c, u32(u32, u32, u32, u32)> call_0015982c;  // (from the original)

u32 f_005244c0(u32 r0) {
    u32 r1 = 0;
    r1 = r0;
    r0 = *gptr<u32>(0x95e0e0u);  // (from the original)
    return call_0015982c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005244c0
GUEST_EXPORT(0x005244c0, d_005244c0::f_005244c0);

// f_00524528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524528 {

struct __attribute__((packed)) Object_00524528_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524528_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_c, 0xc);  // (from the original)


void f_00524528(gptr<Object_00524528_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    arg0->byte_8 = u8(r2);
    arg0->byte_9 = u8(r2);
    arg0->byte_a = u8(r2);
    arg0->word_c = u32(r2);
    return;
}

}  // namespace d_00524528
GUEST_EXPORT(0x00524528, d_00524528::f_00524528);

// f_00524598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524598 {

struct __attribute__((packed)) Object_00524598_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524598_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_c, 0xc);  // (from the original)


void f_00524598(gptr<Object_00524598_0> arg0, u32 r1) {
    u32 r2 = 0;
    r2 = 0u;
    arg0->word_0 = u32(r2);
    arg0->byte_8 = u8(1u);
    arg0->byte_9 = u8(r2);
    arg0->byte_a = u8(r2);
    arg0->word_c = u32(r2);
    arg0->word_4 = u32(r1);
    return;
}

}  // namespace d_00524598
GUEST_EXPORT(0x00524598, d_00524598::f_00524598);

// f_00524838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524838 {

inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32, u32)> call_0011dc88;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00524838(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = 1u;
    if (r0 >= 0xau) {  // (from the original)
        goto L_5248e4;
    }
    ea = 0x890530u + (r0 << 1);  // (from the original)
    r2 = u32(*gptr<u8>(ea));
    *gptr<u8>(r4 + 0x4cu) = u8(r2);  // (from the original)
    r1 = u32(*gptr<u8>(ea + 1u));
    *gptr<u8>(r4 + 0x4du) = u8(r1);  // (from the original)
    if (r0 == 4u) {
        goto L_524890;
    }
    if (r0 != 1u) {
        goto L_52488c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0011dc88(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 9u) {
        goto L_52488c;
    }
    r0 = 0xeu;  // (from the original)
    *gptr<u8>(r4 + 0x4cu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x4du) = u8(r5);  // (from the original)
L_52488c:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_524890:;
    guest::cpu()->r[13] = r13;
    r0 = call_0011dc88(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 4u;
    if (r0 != 8u) {
        if (r0 == 9u) {
            goto L_5248d4;
        }
        if (r0 != 0xau) {  // (from the original)
            guest::preempt();
            goto L_52488c;
        }
        r0 = 0xdu;  // (from the original)
        *gptr<u8>(r4 + 0x4cu) = u8(r0);  // (from the original)
        *gptr<u8>(r4 + 0x4du) = u8(r1);  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 9u;
    *gptr<u8>(r4 + 0x4cu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x4du) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5248d4:;
    r0 = 0xcu;  // (from the original)
    *gptr<u8>(r4 + 0x4cu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x4du) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5248e4:;
    r0 = 0u;
    *gptr<u8>(r4 + 0x4cu) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x4du) = u8(r5);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00524838
GUEST_EXPORT(0x00524838, d_00524838::f_00524838);

// f_00524a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524a54 {

struct __attribute__((packed)) Object_00524a54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00524a54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x003e0f14, u32(u32, u32, u32, u32)> call_003e0f14;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00524a54(gptr<Object_00524a54_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x890528u;  // (from the original)
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_0 = u32(r4);
    r3 = *gptr<u32>(r1);
    r2 = r0 + 8u;
    arg0->word_10 = u32(*gptr<u32>(r1 + 4u));
    r1 = 0x905eb4u;  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r0);
    arg0->word_c = u32(r3);
    r0 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003e0f14(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14u;  // (from the original)
    r2 = 0x100u;  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x4cu) = u16(r4);  // (from the original)
    r0 = r0 + 0x50u;  // (from the original)
    r1 = r0 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x909dc8u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x200u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r1 = r4 + 0x16u;  // (from the original)
    r0 = 0x80u;  // (from the original)
    do {
L_524acc:;
        res = r0 - 1u;
        r0 = res;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r1 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r1 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r1 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = 0x11u;  // (from the original)
    *gptr<u8>(r4 - 4u) = u8(r1);
    r0 = r4 - 0x50u;  // (from the original)
    *gptr<u8>(r4 - 3u) = u8(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00524a54
GUEST_EXPORT(0x00524a54, d_00524a54::f_00524a54);

// f_00524b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524b80 {


u32 f_00524b80(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r8 = 1u;
    r7 = 0u;
    r9 = r8 + u32(s32(*gptr<u32>(0x8906f4u) - 0x890754u) >> 2);  // (from the original)
L_524ba0:;
    r5 = u32(*gptr<u16>(r0));
    r2 = u32(*gptr<u16>(r1));
    zf = r5 == 0xau;  // (from the original)
    if (!zf) {
        zf = r5 == 0;
    }
    if (!zf) {
        r3 = r2 - 0x3041u;  // (from the original)
        *gptr<u16>(r13) = u16(r2);
        if (!u32(r3 >= 0x55u) || u32(r3 == 0x55u)) {  // (from the original)
            goto L_524ce0;
        }
        if (r2 >= 0x61u) {  // (from the original)
            if (!u32(r2 >= 0x7au) || u32(r2 == 0x7au)) {  // (from the original)
                goto L_524ce0;
            }
        }
        r3 = r2 - 0x30a1u;  // (from the original)
        if (!u32(r3 >= 0x55u) || u32(r3 == 0x55u)) {  // (from the original)
            *gptr<u16>(r13) = u16(r2 - 0x60u);  // (from the original)
            goto L_524ce0;
        }
        r10 = r13;
        r6 = 0u;
        if (r2 >= 0x41u) {  // (from the original)
            if (!u32(r2 >= 0x5au) || u32(r2 == 0x5au)) {  // (from the original)
                goto L_524c70;
            }
        }
        r3 = r2 - 0xff21u;  // (from the original)
        if (!u32(r3 >= 0x19u) || u32(r3 == 0x19u)) {  // (from the original)
            goto L_524c70;
        }
        if (r2 != 0xd7u) {  // (from the original)
            r3 = r2 - 0xc0u;  // (from the original)
            if (!u32(r3 >= 0x1eu) || u32(r3 == 0x1eu)) {  // (from the original)
                goto L_524c70;
            }
        }
        r3 = r2 - 0x391u;  // (from the original)
        zf = r3 == 0x18u;  // (from the original)
        cf = r3 >= 0x18u;  // (from the original)
        if (cf && !zf) {
            r3 = r2 - 0x410u;  // (from the original)
            zf = r3 == 0x1fu;  // (from the original)
            cf = r3 >= 0x1fu;  // (from the original)
        }
        if (!cf || zf) {
            goto L_524c70;
        }
        r3 = r2 - 0x100u;  // (from the original)
        if (u32(r3 >= 0x77u) && !u32(r3 == 0x77u)) {  // (from the original)
            goto L_524c7c;
        }
        if ((r2 & 1u) == 0) {
            r2 = r2 + 1u;
            goto L_524c74;
        }
        goto L_524ce0;
    }
    if (r7 != 0) {
        goto L_524d00;
    }
L_524c68:;
    r8 = 0u;
    goto L_524d00;
L_524c70:;
    r2 = r2 + 0x20u;  // (from the original)
L_524c74:;
    r6 = uxth(r2);
    goto L_524cd8;
L_524c7c:;
    r3 = 0x890754u;  // (from the original)
    res = r9 - 1u;
    r12 = 1u;
    if (u32(res == 0) || res >> 0x1f != ((r9 ^ 1u) & (r9 ^ res)) >> 0x1f) {  // (from the original)
        goto L_524cbc;
    }
    do {
L_524c8c:;
        if (!(u32(*gptr<u16>(r3 + 2u)) != r2)) {
            r6 = u32(*gptr<u16>(r3));
            goto L_524cd8;
        }
        if (u32(*gptr<u16>(r3)) == r2) {
            goto L_524cd8;
        }
        r12 = r12 + 1u;
        res = r9 - r12;
        r3 = r3 + 4u;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r9 ^ r12) & (r9 ^ res)) >> 0x1f);  // (from the original)
L_524cbc:;
    r3 = r2 - 0x179u;  // (from the original)
    if (u32(r3 >= 5u) && !u32(r3 == 5u)) {
        goto L_524cd8;
    }
    if ((r2 & 1u) != 0) {
        r6 = uxth(r2 + 1u);
    }
L_524cd8:;
    if (r6 != 0) {
        *gptr<u16>(r10) = u16(r6);
    }
L_524ce0:;
    if (r5 != u32(*gptr<u16>(r13))) {
        guest::preempt();
        goto L_524c68;
    }
    r7 = r7 + 1u;
    res = r7 - 3u;
    r0 = r0 + 2u;
    r1 = r1 + 2u;
    if (res >> 0x1f != ((r7 ^ 3u) & (r7 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_524ba0;
    }
L_524d00:;
    r0 = r8;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00524b80
GUEST_EXPORT(0x00524b80, d_00524b80::f_00524b80);

// f_00524d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524d58 {

struct __attribute__((packed)) Object_00524d58_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00524d58_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524d58_0, word_1c, 0x1c);  // (from the original)


u32 f_00524d58(gptr<Object_00524d58_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 - 8;
    res = u32(*gptr<u16>(r13 + 4u)) & ~*gptr<u32>(arg0->word_1c + 0x188u);  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = arg0->word_8;
        r13 = r13 + 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    nf = r1 >> 0x1f;  // (from the original)
    zf = r1 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r0 = *gptr<u32>(*gptr<u32>(r0 + 0x10u));  // (from the original)
    }
    if (zf || nf != vf) {
        r0 = 0u;
    }
    r13 = r13 + 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00524d58
GUEST_EXPORT(0x00524d58, d_00524d58::f_00524d58);

// f_00525ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00525ae4 {

struct __attribute__((packed)) Object_00525ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00525ae4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002026e4, u32(u32, u32, u32, u32)> call_002026e4;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x0080d59c, u32(u32, u32, u32, u32)> call_0080d59c;  // (from the original)

u32 f_00525ae4(u32 r0, gptr<Object_00525ae4_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r3 = u32(arg1->byte_c);
    r1 = arg1->word_4;
    r2 = arg1->word_8;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002026e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_525be4;
    }
    r6 = r0;
    r1 = r0;
    r7 = *gptr<u32>(r5);
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_525bb4;
    }
L_525b40:;
    r5 = r13 + 8u;
    r0 = r4;
    if (r4 == 0) {
        goto L_525b94;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = *gptr<u32>(r5);
    r2 = *gptr<u32>(r5 + 4);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_525b94;
    }
    r2 = *gptr<u32>(r5 + 4);
    r1 = u32(*gptr<u16>(r7 + (r2 * r6 + *gptr<u32>(r5) << 1)));
    *gptr<u16>(r0) = u16(r1);
L_525b94:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_525b40;
    }
L_525bb4:;
    r0 = r4;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0080d59c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
L_525be4:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00525ae4
GUEST_EXPORT(0x00525ae4, d_00525ae4::f_00525ae4);

// f_005269e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005269e8 {

struct __attribute__((packed)) Object_005269e8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005269e8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005269e8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32, u32, u32)> call_0052f0f0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0052f2a8, u32(u32, u32, u32, u32)> call_0052f2a8;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_005269e8(gptr<Object_005269e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
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
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0xc0u;  // (from the original)
    r11 = r2;
    r2 = 0u;
    r10 = *gptr<u32>(r13 + 0xc0u);  // (from the original)
    r1 = r2;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    *gptr<u32>(r13 + 0x8cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(0u);  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x40u;  // (from the original)
    r1 = r13 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006fa1fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
L_526a28:;
    r4 = r13 + 0x18u;  // (from the original)
    r5 = r10;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_00748310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r1 = r11;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r6 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(u64(r0) * r6 >> 0x20);  // (from the original)
    r6 = r8;
    *gptr<u32>(r4) = u32(*gptr<u32>(r4) + r1);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r4 + 4u) + u32(u64(r0) * r6 >> 0x20));  // (from the original)
    r0 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0f0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00526ea0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_526d88;
    }
    r1 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x40u;  // (from the original)
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074818c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_526d80;
    }
    r2 = 1u;
    r0 = r13 + 0x80u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 4) = u32(r2);
    r5 = r0;
    r2 = ~0u;
    r0 = r13 + 0x78u;  // (from the original)
    *gptr<u32>(r0) = u32(r2);
    *gptr<u32>(r0 + 4) = u32(r2);
    r1 = r0;
    r2 = r5;
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r0 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f2a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r13 + 0x50u;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1 = r5;
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x68u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_526c48;
    }
L_526b7c:;
    r0 = r13 + 8u;
    r6 = r0;
    if (r4 != 0) {
        r1 = r0;
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052edfc(r0, r1, r2, r3);
        r3 = r13 + 0x30u;  // (from the original)
        r0 = r4;
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_0075291c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        if (r0 != 0) {
            r1 = r6;
            r0 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_0052ed04(r0, r1, r2, r3);
            r3 = r13 + 0x20u;  // (from the original)
            r0 = r5;
            r1 = *gptr<u32>(r3);
            r2 = *gptr<u32>(r3 + 4);
            guest::cpu()->r[13] = r13;
            r0 = call_0075d608(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            zf = r0 == 0x14u;  // (from the original)
            if (!zf) {
                zf = r0 == 0x31u;  // (from the original)
            }
            if (zf) {
                goto L_526c10;
            }
            zf = r0 == 0x32u;  // (from the original)
            if (!zf) {
                zf = r0 == 0x33u;  // (from the original)
            }
            if (zf) {
                goto L_526c10;
            }
        }
    }
    goto L_526d18;
L_526c10:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x68u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_526b7c;
    }
L_526c48:;
    r4 = r13 + 0x50u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_526d40;
    }
L_526c94:;
    r4 = r13 + 0x28u;  // (from the original)
    r0 = r5;
    if (r5 == 0) {
        goto L_526d20;
    }
    r6 = 0u;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r7 = r6;
    r3 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r8 = r0;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = r5;
    r3 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r8 != 0) {
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r6 = 1u;
        }
    }
    if (r4 != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r7 = 1u;
        }
    }
    res = r6 | r7;
    if (res == 0) {
        goto L_526d20;
    }
L_526d18:;
    goto L_526d78;
L_526d20:;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_526c94;
    }
L_526d40:;
    ea = r13;
    *gptr<u32>(ea) = u32(0u);
    ea = r13 + 0x8cu;  // (from the original)
    ea = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    r0 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x98u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x64u) = u32(1u);  // (from the original)
L_526d78:;
L_526d80:;
L_526d88:;
    r0 = 0x1388u;  // (from the original)
    r9 = r9 + 1u;
    zf = r9 == r0;
    if (!u32(r9 >= r0) || zf) {
        zf = *gptr<u32>(r13 + 0x64u) == 0;  // (from the original)
    }
    if (zf) {
        guest::preempt();
        goto L_526a28;
    }
    r0 = r13 + 0x40u;  // (from the original)
    r13 = r13 + 0x9cu;  // (from the original)
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
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005269e8
GUEST_EXPORT(0x005269e8, d_005269e8::f_005269e8);

// f_00526ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00526ea0 {

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00526ea0(u32 r0, gptr<GridPoint> arg1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r13 = r13 - 0x38u;  // (from the original)
    r2 = u32(arg1->y) + 1u;
    ea = r13;
    *gptr<u32>(ea) = u32(u32(arg1->x));
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = u32(arg1->y) + 2u;
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(u32(arg1->x));
    *gptr<u32>(ea + 4) = u32(r2);
    r7 = r13;
    r4 = r5;
    r1 = r7;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_526f40;
    }
    r1 = r7;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x18u;  // (from the original)
    r0 = r6;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0x14u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x31u;  // (from the original)
    }
    if (zf) {
        goto L_526f54;
    }
    zf = r0 == 0x32u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x33u;  // (from the original)
    }
    if (zf) {
        goto L_526f54;
    }
L_526f38:;
L_526f40:;
    goto L_527068;
L_526f54:;
    r1 = *gptr<u32>(r13);
    r2 = *gptr<u32>(r13 + 4);
    r3 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fccdc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 4u;
        if (!zf) {
            zf = r0 == 8u;
        }
        if (!zf) {
            zf = r0 == 6u;
        }
        if (zf) {
            goto L_527068;
        }
    }
    r6 = r13 + 8u;
    if (r4 == 0) {
        goto L_527068;
    }
    r1 = r6;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x10u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_526f40;
    }
    r1 = r6;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x18u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0x14u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x31u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x32u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x33u;  // (from the original)
        }
        if (!zf) {
            guest::preempt();
            goto L_526f38;
        }
    }
    r4 = r13 + 8u;
    r3 = 0u;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fccdc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        zf = r0 == 4u;
        if (!zf) {
            zf = r0 == 8u;
        }
        if (!zf) {
            zf = r0 == 6u;
        }
        if (zf) {
            goto L_527068;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_527068:;
    r0 = 1u;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00526ea0
GUEST_EXPORT(0x00526ea0, d_00526ea0::f_00526ea0);

// f_00527088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527088 {

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00527088(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x80u;  // (from the original)
    r6 = r3;
    r8 = r1;
    r11 = 0u;
    r0 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x30u;  // (from the original)
    r1 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006fa1fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_5270c0:;
    r4 = r13 + 8u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_007482bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00748310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r1 = r8;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f0c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r7 = r9;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(u64(r0) * r7 >> 0x20);  // (from the original)
    r7 = r10;
    *gptr<u32>(r4) = u32(*gptr<u32>(r4) + r1);
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 4u) = u32(u32(u64(r0) * r7 >> 0x20) + *gptr<u32>(r4 + 4u));  // (from the original)
    r0 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00526ea0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_52729c;
    }
    r1 = r13 + 8u;
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074818c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_527294;
    }
    r4 = r13 + 8u;
    if (*gptr<u32>(r13 + 0x28u) == 0) {  // (from the original)
        goto L_527294;
    }
    r1 = r4;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    if (r0 != 0) {
        r1 = r4;
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052ed04(r0, r1, r2, r3);
        r3 = r13 + 0x10u;  // (from the original)
        r0 = r7;
        r1 = *gptr<u32>(r3);
        r2 = *gptr<u32>(r3 + 4);
        guest::cpu()->r[13] = r13;
        r0 = call_0075d608(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0x14u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x31u;  // (from the original)
        }
        if (zf) {
            goto L_5271f0;
        }
        zf = r0 == 0x32u;  // (from the original)
        if (!zf) {
            zf = r0 == 0x33u;  // (from the original)
        }
        if (zf) {
            goto L_5271f0;
        }
    }
    goto L_527294;
L_5271f0:;
    r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (r0 != 0) {
        r9 = r13 + 8u;
        r4 = 0u;
        r1 = *gptr<u32>(r9);
        r2 = *gptr<u32>(r9 + 4);
        r7 = r4;
        r3 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002feb00(r0, r1, r2, r3);
        r10 = r0;
        r1 = *gptr<u32>(r9);
        r2 = *gptr<u32>(r9 + 4);
        r3 = 1u;
        r0 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002feb00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r9 = r0;
        if (r10 != 0) {
            r0 = r10;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcaf4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                r4 = 1u;
            }
        }
        if (r9 != 0) {
            r0 = r9;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcaf4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 == 0) {
                r7 = 1u;
            }
        }
        res = r4 | r7;
        if (res != 0) {
            goto L_527294;
        }
    }
    ea = r13;
    *gptr<u32>(ea) = u32(0u);
    ea = r13 + 0x4cu;  // (from the original)
    r0 = *gptr<u32>(ea);
    ea = r13 + 0x54u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r13 + 8u;
    r2 = *gptr<u32>(ea);
    r3 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 1u;
L_527294:;
L_52729c:;
    r5 = r5 + 1u;
    if (!u32(r5 >= 0x1388u) || u32(r5 == 0x1388u)) {  // (from the original)
        if (r11 == 0) {
            guest::preempt();
            goto L_5270c0;
        }
    }
    r0 = r13 + 0x30u;  // (from the original)
    r13 = r13 + 0x5cu;  // (from the original)
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
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00527088
GUEST_EXPORT(0x00527088, d_00527088::f_00527088);

// f_00527528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527528 {

inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_00527528(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x98u;  // (from the original)
    r8 = r0;
    r9 = r1;
    r4 = r2;
    r5 = 0u;
L_527540:;
    r1 = 0xab7df4u;  // (from the original)
    r0 = r5 & 0xffu;  // (from the original)
    if (r0 < 0xeu) {  // (from the original)
        r1 = r1 + (r0 << 2);
    }
    r0 = r13 + 0x60u;  // (from the original)
    r6 = *gptr<u32>(r1);
    r1 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00314a1c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    r1 = r6;
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00314a9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x60u;  // (from the original)
    r7 = r13 + 0x18u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    r6 = r13 + 0x48u;  // (from the original)
    r1 = r7;
    r0 = r6;
    *gptr<u32>(r7) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r7 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r7 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r7 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r7 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r7 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00314b04(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0 == 0) {
        goto L_5275e0;
    }
    do {
L_527598:;
        r1 = u32(*gptr<u8>(r6 + 0x10u));  // (from the original)
        if (!(r4 != r1)) {
            ea = r13 + 0x48u;  // (from the original)
            r1 = *gptr<u32>(ea + 4);
            r2 = *gptr<u32>(ea + 8);
            r3 = *gptr<u32>(ea + 0xc);  // (from the original)
            r6 = *gptr<u32>(ea + 0x10);  // (from the original)
            r12 = *gptr<u32>(ea + 0x14);  // (from the original)
            r7 = r13 + 0x30u;  // (from the original)
            *gptr<u32>(r7) = u32(*gptr<u32>(ea));
            *gptr<u32>(r7 + 4) = u32(r1);
            *gptr<u32>(r7 + 8) = u32(r2);
            *gptr<u32>(r7 + 0xc) = u32(r3);  // (from the original)
            *gptr<u32>(r7 + 0x10) = u32(r6);  // (from the original)
            *gptr<u32>(r7 + 0x14) = u32(r12);  // (from the original)
            goto L_5275f0;
        }
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        r0 = call_00314b58(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        r1 = r7;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        r0 = call_00314b04(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        guest::preempt();
    } while (r0 != 0);
L_5275e0:;
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = *gptr<u32>(ea + 0xc);  // (from the original)
    r6 = *gptr<u32>(ea + 0x10);  // (from the original)
    r12 = *gptr<u32>(ea + 0x14);  // (from the original)
    r7 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r7) = u32(*gptr<u32>(ea));
    *gptr<u32>(r7 + 4) = u32(r1);
    *gptr<u32>(r7 + 8) = u32(r2);
    *gptr<u32>(r7 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(r7 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(r7 + 0x14) = u32(r12);  // (from the original)
L_5275f0:;
    r1 = r13 + 0x60u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0 = call_00314b04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    zf = r0 == 0;
    r0 = r13 + 0x30u;  // (from the original)
    if (!zf) {
        *gptr<u32>(r8) = u32(*gptr<u32>(r0 + 8u));
        *gptr<u32>(r9) = u32(*gptr<u32>(r13 + 0x3cu));  // (from the original)
        r0 = 1u;
        r13 = r13 + 0x98u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r5 = r5 + 1u;
    if (r5 < 0xeu) {  // (from the original)
        guest::preempt();
        goto L_527540;
    }
    r0 = 0u;
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00527528
GUEST_EXPORT(0x00527528, d_00527528::f_00527528);

// f_00527a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527a2c {

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

u32 f_00527a2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    if (r3 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r9 = r1;
    r10 = r2;
    r8 = *gptr<u32>(r13 + 0x70u);  // (from the original)
    r6 = r3;
    r2 = r3;
    r1 = r10;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1208(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_527c28;
    }
    r0 = 0xab7de4u;  // (from the original)
    r2 = r10;
    if (r4 < 4u) {
        r0 = r0 + (r4 << 2);
    }
    r1 = r9;
    r7 = *gptr<u32>(r0);
    r0 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r9 = r0;
    r4 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f224(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 7u;
    ea = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = r13 + 0x48u;  // (from the original)
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00748324(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r9;
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074836c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_527c08;
    }
L_527b1c:;
    r0 = *gptr<u32>(r13 + 8u);
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_527be8;
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_527be8;
    }
    r0 = *gptr<u32>(r13 + 0xcu) - *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = r5 + (r0 + (r0 << 2) << 5);
    r9 = *gptr<u32>(r13 + 8u);
    r0 = r9 - *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4 = u32(*gptr<u8>(r4 + (r0 + (r0 << 2) << 1) + 8u));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_006cc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        zf = r4 == 0;
        if (!zf) {
            zf = r4 == 0xa1u;  // (from the original)
        }
        if (zf) {
            goto L_527be8;
        }
    } else {
        if (r4 == 0) {
            goto L_527be8;
        }
    }
    r4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r3 = r8;
    r2 = r4;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002e5a4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_527be8:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_527b1c;
    }
L_527c08:;
    r0 = r13 + 0x10u;  // (from the original)
L_527c28:;
    r13 = r13 + 0x50u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00527a2c
GUEST_EXPORT(0x00527a2c, d_00527a2c::f_00527a2c);

// f_005284b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005284b8 {

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

u32 f_005284b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r8 = r1;
    r9 = r2;
    r13 = r13 - 0x70u;  // (from the original)
    r7 = r3;
    r2 = r3;
    r1 = r9;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_001b1208(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_5286ac;
    }
    r0 = 0xab7de4u;  // (from the original)
    r2 = r9;
    if (r4 < 4u) {
        r0 = r0 + (r4 << 2);
    }
    r1 = r8;
    r6 = *gptr<u32>(r0);
    r0 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r8 = r0;
    r4 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f224(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 7u;
    ea = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r2);
    r2 = r13 + 0x48u;  // (from the original)
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00748324(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r8;
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074836c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_52868c;
    }
L_52859c:;
    r0 = *gptr<u32>(r13 + 8u);
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_52866c;
    }
    r0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_52866c;
    }
    r0 = *gptr<u32>(r13 + 0xcu) - *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = r5 + (r0 + (r0 << 2) << 5);
    r8 = *gptr<u32>(r13 + 8u);
    r0 = r8 - *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4 = u32(*gptr<u8>(r4 + (r0 + (r0 << 2) << 1) + 8u));
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_006cc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_528664;
    }
    if (r4 != 0xa1u) {  // (from the original)
        goto L_52866c;
    }
L_528630:;
    r4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1 = *gptr<u32>(r13 + 8u);
    r3 = ~0u;
    r2 = r4;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002e5a4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_52866c;
L_528664:;
    if (r4 != 0) {
        guest::preempt();
        goto L_528630;
    }
L_52866c:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_52859c;
    }
L_52868c:;
    r0 = r13 + 0x10u;  // (from the original)
L_5286ac:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005284b8
GUEST_EXPORT(0x005284b8, d_005284b8::f_005284b8);

// f_00528924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528924 {


u32 f_00528924(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x14;  // (from the original)
    r6 = 0u;
    r4 = r1;
    r5 = r6;
    r2 = r2 - 1u;
    goto L_5289cc;
L_52893c:;
    r12 = r3 & 0xffu;  // (from the original)
    if (r12 < 0x80u) {  // (from the original)
        r2 = r2 - 1u;
        *gptr<u16>(r4) = u16(sxtb(r12));
        r4 = r4 + 2u;
        goto L_5289c4;
    }
    r7 = r12 - 0xc2u;  // (from the original)
    if (!(u32(r7 >= 0x1du) && !u32(r7 == 0x1du))) {  // (from the original)
        ea = r0 + 1u;
        r0 = ea;
        r2 = r2 - 1u;
        *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea)) & 0xffu) + ((r3 << 0x18 >> 0x12) - 0x3000u) - 0x80u);  // (from the original)
        r4 = r4 + 2u;
        goto L_5289c4;
    }
    r7 = r12 - 0xe0u;  // (from the original)
    if (u32(r7 >= 0xfu) && !u32(r7 == 0xfu)) {  // (from the original)
        goto L_5289e8;
    }
    ea = r0 + 1u;
    r12 = u32(*gptr<u8>(ea));
    ea = r0 + 2u;
    r0 = ea;
    r2 = r2 - 1u;
    *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea)) & 0xffu) + ((r3 << 0xc) - 0xe0000u + ((r12 & 0xffu) << 6)) - 0x2080u);  // (from the original)
    r4 = r4 + 2u;
L_5289c4:;
    r6 = r6 + 1u;
L_5289c8:;
    r0 = r0 + 1u;
L_5289cc:;
    r3 = u32(s32(s8(*gptr<u8>(r0))));
    zf = r3 == 0;
    if (!zf) {
        zf = r2 == 0;
    }
    if (zf) {
        goto L_528a24;
    }
    if (r5 == 0) {
        guest::preempt();
        goto L_52893c;
    }
    goto L_528a30;
L_5289e8:;
    r3 = r12 - 0xf0u;  // (from the original)
    zf = r3 == 4u;
    cf = r3 >= 4u;
    if (cf && !zf) {
        r3 = r12 - 0xc0u;  // (from the original)
        zf = r3 == 1u;
        cf = r3 >= 1u;
    }
    if (!cf || zf) {
        goto L_528a1c;
    }
    r3 = r12 - 0xf5u;  // (from the original)
    zf = r3 == 2u;
    cf = r3 >= 2u;
    if (cf && !zf) {
        r3 = r12 - 0xf8u;  // (from the original)
        zf = r3 == 3u;
        cf = r3 >= 3u;
    }
    if (!cf || zf) {
        goto L_528a1c;
    }
L_528a1c:;
    r5 = 1u;
    guest::preempt();
    goto L_5289c8;
L_528a24:;
    if (r5 == 0) {
        r0 = r6 + 1u;
        goto L_528a38;
    }
L_528a30:;
    r4 = r1;
    r0 = ~0u;
L_528a38:;
    r1 = 0u;
    *gptr<u16>(r4) = u16(r1);
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00528924
GUEST_EXPORT(0x00528924, d_00528924::f_00528924);

// f_00528b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528b00 {

inline constexpr guest::Function<0x001509dc, u32(u32, u32, u32, u32)> call_001509dc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_00528b00(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    if (r0 == 0x9du) {  // (from the original)
        goto L_528b84;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0x9eu) {  // (from the original)
        goto L_528bc0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    zf = r0 == 0;
    ea = r4 + 0xcu;  // (from the original)
    r4 = ea;
    r0 = *gptr<u32>(ea);
    if (zf) {
        goto L_528bec;
    }
    if (r0 == 0) {
        r4 = r5;
    } else {
        r4 = r4 + r0;
    }
    r2 = 2u;
    r1 = r4;
    r0 = 0x528c54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001509dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_528c4c;
    }
    r1 = r4;
    r0 = *gptr<u32>(0x950468u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_528c4c;
    } else {
        r0 = 0u;
    }
L_528b80:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_528b84:;
    ea = r4 + 0xcu;  // (from the original)
    r4 = ea;
    r0 = *gptr<u32>(ea);
    r6 = 0x950474u;  // (from the original)
    if (r0 != 0) {
        r5 = r0 + r4;
    }
    r4 = 0u;
    do {
L_528b98:;
        r1 = r5;
        r0 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_002fa90c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            guest::preempt();
            goto L_528b80;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xfu);  // (from the original)
    goto L_528c4c;
L_528bc0:;
    ea = r4 + 0xcu;  // (from the original)
    r4 = ea;
    r0 = *gptr<u32>(ea);
    if (r0 != 0) {
        r5 = r0 + r4;
    }
    r1 = r5;
    r0 = *gptr<u32>(0x950464u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_528b80;
    }
    goto L_528c4c;
L_528bec:;
    r6 = 0x9504b0u;  // (from the original)
    if (r0 != 0) {
        r5 = r0 + r4;
    }
    r4 = 0u;
    do {
L_528bfc:;
        r1 = r5;
        r0 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_002fa90c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            guest::preempt();
            goto L_528b80;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x3eu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 1u) {
        goto L_528c4c;
    }
    r1 = r5;
    r0 = *gptr<u32>(0x95046cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_528b80;
    }
L_528c4c:;
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00528b00
GUEST_EXPORT(0x00528b00, d_00528b00::f_00528b00);

// f_00528c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528c6c {

struct __attribute__((packed)) Object_00528c6c_1 {
    u8 unknown_0[0x854107];  // (not used here)
    u8 byte_854107;
    u8 unknown_854108[0x3];  // (not used here)
    u8 byte_85410b;
    u8 unknown_85410c[0x3];  // (not used here)
    u8 byte_85410f;
    u8 unknown_854110[0x3];  // (not used here)
    u8 byte_854113;
};
GUEST_OFFSET(Object_00528c6c_1, byte_854107, 0x854107);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410b, 0x85410b);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410f, 0x85410f);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_854113, 0x854113);  // (from the original)


u32 f_00528c6c(u32 r0, gptr<Object_00528c6c_1> arg1) {
    u32 res = 0;
    if (r0 == 0x1400u) {  // (from the original)
        r0 = u32(arg1->byte_854107);
        return r0;
    }
    res = r0 - 0x1401u;  // (from the original)
    r0 = res;
    if (res == 0) {
        r0 = u32(arg1->byte_85410b);
        return r0;
    }
    if (r0 == 1u) {
        r0 = u32(arg1->byte_85410f);
        return r0;
    }
    if (r0 == 5u) {
        r0 = u32(arg1->byte_854113);
    } else {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00528c6c
GUEST_EXPORT(0x00528c6c, d_00528c6c::f_00528c6c);

// f_00528ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528ce0 {


u32 f_00528ce0(u32 r0_unused, u32 r1_unused, u32 r2, float S0, float S1, float S2) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    S1 = (S2 + S0 * S1) * std::bit_cast<float>(*gptr<u32>(0x528d44u));  // (from the original)
    S0 = S1 * std::bit_cast<float>(*gptr<u32>(0x528d48u));  // (from the original)
    r0 = std::bit_cast<u32>(S0);
    res = r0 & ~0x80000000u;  // (from the original)
    r1 = res;
    if (res != 0) {
        r1 = (r0 << 1 >> 0x18) - 0x40u;  // (from the original)
        res = r1;
        if (res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r0 >> 0x1f << 0x17;  // (from the original)
            goto L_528d30;
        }
    }
    r0 = r0 << 9 >> 0x10 | r1 << 0x10 | r0 >> 0x1f << 0x17;  // (from the original)
L_528d30:;
    r1 = 0xf004eu;  // (from the original)
    *gptr<u32>(r2) = u32(r0);
    r2 = r2 + 4u;
    r0 = r2 + 4u;
    *gptr<u32>(r2) = u32(r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00528ce0
GUEST_EXPORT(0x00528ce0, d_00528ce0::f_00528ce0);

// f_00528d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528d60 {

struct __attribute__((packed)) Object_00528d60_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00528d60_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00528d60_3 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_00528d60_3, word_ec, 0xec);  // (from the original)

inline constexpr guest::Function<0x00201ff4, u32(u32, u32, u32, u32)> call_00201ff4;  // (from the original)
inline constexpr guest::Function<0x00202078, u32(u32, u32, u32, u32)> call_00202078;  // (from the original)
inline constexpr guest::Function<0x002021d4, u32(u32, u32, u32, u32)> call_002021d4;  // (from the original)
inline constexpr guest::Function<0x00202370, u32(u32, u32, u32, u32)> call_00202370;  // (from the original)
inline constexpr guest::Function<0x00202740, u32(u32, u32, u32, u32)> call_00202740;  // (from the original)
inline constexpr guest::Function<0x002029fc, u32(u32, u32, u32, u32)> call_002029fc;  // (from the original)
inline constexpr guest::Function<0x00202c78, u32(u32, u32, u32, u32)> call_00202c78;  // (from the original)
inline constexpr guest::Function<0x00202ef4, u32(u32, u32, u32, u32)> call_00202ef4;  // (from the original)
inline constexpr guest::Function<0x002ee864, u32(u32, u32, u32, u32)> call_002ee864;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x00613734, u32(u32, u32, u32, u32)> call_00613734;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00528d60(gptr<Object_00528d60_0> arg0, u32 r1, u32 r2, gptr<Object_00528d60_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r6 = r1;
    r13 = r13 - 0x90u;  // (from the original)
    r7 = r3;
    r8 = r0;
    r4 = r2;
    r1 = r2;
    arg0->byte_0 = u8(r1);
    r5 = arg3->word_ec;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = u32(u64(r0) * r5 >> 0x20);  // (from the original)
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002ee864(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r4 == 0) {
        goto L_528e48;
    }
    r2 = 0x894ef6u;  // (from the original)
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202078(r0, r1, r2, r3);
L_528dbc:;
    *gptr<u8>(r13 + 0xau) = u8(4u);  // (from the original)
    r3 = r6;
    r2 = 1u;
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202370(r0, r1, r2, r3);
    r3 = r6;
    r2 = 2u;
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202370(r0, r1, r2, r3);
    r3 = r6;
    r2 = 3u;
    r1 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202370(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202740(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202c78(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6;
    r0 = r13;
    if (r4 == 0) {
        goto L_528e64;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002029fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_528e2c:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002021d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((*gptr<u32>(0x9825ecu) & 1u) != 0) {  // (from the original)
        goto L_528edc;
    }
    goto L_528e78;
L_528e48:;
    r2 = 0x894eccu;  // (from the original)
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00202078(r0, r1, r2, r3);
    guest::preempt();
    goto L_528dbc;
L_528e64:;
    guest::cpu()->r[13] = r13;
    r0 = call_00202ef4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_528e2c;
L_528e78:;
    r0 = 0x9825ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_528edc;
    }
    r2 = 5u;
    r1 = 6u;
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0xaf8484u;  // (from the original)
    r2 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x100000u;  // (from the original)
L_528edc:;
    r4 = 0xaf8484u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x40u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_528f94;
    } else {
        r5 = r13;
    }
    do {
L_528f10:;
        r4 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
        r1 = *gptr<u32>(r13 + 0x38u);  // (from the original)
        r2 = r4;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00613734(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r7 = *gptr<u32>(r13 + 0x38u);  // (from the original)
        r0 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
        r1 = r6;
        r0 = u32(*gptr<u8>(r7 + ((r0 << 3) - r0 + r5)));
        guest::cpu()->r[13] = r13;
        r0 = call_00201ff4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        *gptr<u16>(r4) = u16(r1);
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x40u;  // (from the original)
        r0 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_528f94:;
    r0 = r13 + 0x40u;  // (from the original)
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00528d60
GUEST_EXPORT(0x00528d60, d_00528d60::f_00528d60);

// f_00529334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529334 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_00529334(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r1 = 0x23ebu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = 0u;
    *gptr<u8>(r4 + 4u) = u8(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_006f9c08(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0;
        if (r0 == 0) {
            goto L_529524;
        }
        goto L_529500;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_00313440(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5;
        r0 = r0 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = r13 + 4u;
        r1 = r0 + 0x24a6u;  // (from the original)
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13 + 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        goto L_529524;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r0 - 0x56u;  // (from the original)
        r5 = r0 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r6 = 0xfff951c8u;  // (from the original)
        r1 = r5;
        r0 = r0 + 0x80u - r6;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0076ce3c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r0 + 2u;
        guest::cpu()->r[13] = r13;
        r0 = call_007203f0(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r0;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5;
        r0 = r0 + 0x80u - r6;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0076ce3c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 4u) = u8(u32(*gptr<u8>(r0 + 0x23u)));  // (from the original)
        goto L_529524;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_529524;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 == 0) {
        goto L_529524;
    }
L_529500:;
    guest::cpu()->r[13] = r13;
    r0 = call_007203f0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 4u) = u8(u32(*gptr<u8>(r5 + 0x21u)));  // (from the original)
L_529524:;
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00529334
GUEST_EXPORT(0x00529334, d_00529334::f_00529334);

// f_0052953c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052953c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_0052953c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r1 = 0x234cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = 0u;
    *gptr<u8>(r4 + 4u) = u8(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_006f9c08(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0;
        if (r0 == 0) {
            goto L_5296f8;
        }
        goto L_5296d4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_00313440(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_002fb310(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r5;
        r0 = r0 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_003058c8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = r13 + 4u;
        r1 = r0 + 0x24a2u;  // (from the original)
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13 + 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 4u) = u8(r6);
        goto L_5296f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x2000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r0 - 0x56u;  // (from the original)
        r5 = r0 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
        r2 = 0xfff951c8u;  // (from the original)
        r1 = r5;
        r0 = r0 + 0x80u - r2;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0076ce3c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r0 + 2u;
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_0072031c(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r0;
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r5;
        goto L_5296d4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x4000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5296f8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_006f9c08(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 == 0) {
        goto L_5296f8;
    }
L_5296d4:;
    guest::cpu()->r[13] = r13;
    r0 = call_0072031c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 4u) = u8(u32(*gptr<u8>(r5 + 0x20u)));  // (from the original)
L_5296f8:;
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052953c
GUEST_EXPORT(0x0052953c, d_0052953c::f_0052953c);

// f_00529c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529c80 {

inline constexpr guest::Function<0x0051fc48, u32(u32, u32, u32, u32)> call_0051fc48;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529c80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r6 = r1;
    r7 = r2;
    r5 = r3;
    r0 = u32(*gptr<u16>(0x887402u));  // (from the original)
    if (r4 >= r0) {
        r0 = 0u;
        goto L_529ce8;
    }
    r8 = 0x94e476u;  // (from the original)
    *gptr<u16>(r8) = u16(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_0051fe30(r0, r1, r2, r3);
    r3 = r7;
    r2 = r6;
    r1 = r4;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0051fc48(r0, r1, r2, r3);
    r1 = ~0u;
    r4 = r0;
    *gptr<u16>(r8) = u16(r1);
    if (r0 != 0) {
        if (u32(s32(s8(*gptr<u8>(r0 + 0xfu)))) != 0) {  // (from the original)
            r4 = 0u;
        }
    }
    r0 = r4;
L_529ce8:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00529c80
GUEST_EXPORT(0x00529c80, d_00529c80::f_00529c80);

// f_00529cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529cf4 {


u32 f_00529cf4() {
    u32 r0 = 0;
    r0 = 1u;
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00529cf4
GUEST_EXPORT(0x00529cf4, d_00529cf4::f_00529cf4);

// f_00529d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d08 {

inline constexpr guest::Function<0x0051fc14, u32(u32, u32, u32, u32)> call_0051fc14;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529d08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r0 = u32(*gptr<u16>(0x887402u));  // (from the original)
    if (r4 < r0) {
        r7 = 0x94e476u;  // (from the original)
        *gptr<u16>(r7) = u16(r4);
        r0 = call_0051fe30(r0, r1, r2, r3);
        r3 = r6;
        r2 = r5;
        r1 = r4;
        r0 = call_0051fc14(r0, r1, r2, r3);
        r1 = ~0u;
        r4 = r0;
        *gptr<u16>(r7) = u16(r1);
        if (r0 == 0) {
            goto L_529d68;
        }
        if (u32(s32(s8(*gptr<u8>(r0 + 0xfu)))) == 0) {  // (from the original)
            goto L_529d68;
        }
    }
    r0 = 0u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_529d68:;
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00529d08
GUEST_EXPORT(0x00529d08, d_00529d08::f_00529d08);

// f_00529d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d78 {


u32 f_00529d78() {
    u32 r0 = 0;
    r0 = 1u;
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00529d78
GUEST_EXPORT(0x00529d78, d_00529d78::f_00529d78);

// f_00529d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d8c {


u32 f_00529d8c() {
    u32 r0 = 0;
    r0 = 1u;
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00529d8c
GUEST_EXPORT(0x00529d8c, d_00529d8c::f_00529d8c);

// f_00529da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529da0 {


u32 f_00529da0() {
    u32 r0 = 0;
    r0 = 1u;
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_00529da0
GUEST_EXPORT(0x00529da0, d_00529da0::f_00529da0);

// f_00529ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529ddc {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_00529ddc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = call_00779500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 != 0) {
        r1 = r5;
        r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00529ddc
GUEST_EXPORT(0x00529ddc, d_00529ddc::f_00529ddc);

// f_0052a3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a3b8 {

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052a5ac, u32(u32, u32, u32, u32)> call_0052a5ac;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052a3b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569d50(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 4u;
    r1 = *gptr<u32>(r0 + 4u);
    r4 = r0;
    r8 = r2 + 0x480u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r9 = 0x85eda4u;  // (from the original)
    r7 = 0u;
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r7);
    ea = r6 + 8u;
    *gptr<u8>(ea) = u8(r7);
    ea = r9 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = r6 + 0xcu;  // (from the original)
    r5 = 0x8f74e0u;  // (from the original)
    r0 = r6 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r3 + 8) = u32(r7);
    *gptr<u8>(r6 + 0x18u) = u8(r7);  // (from the original)
    *gptr<u32>(r6 + 0x1cu) = u32(r7);  // (from the original)
    *gptr<u32>(r6) = u32(r5);
    *gptr<u32>(r6 + 0x20u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x952638u;  // (from the original)
    r0 = r0 - 0x458u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r6) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0052a5ac(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 4u);
    r2 = 4u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r9 = r9 + 0x28u;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r7);
    *gptr<u8>(r4 + 8u) = u8(r7);
    r1 = *gptr<u32>(r9);
    r2 = *gptr<u32>(r9 + 4);
    r3 = r4 + 0xcu;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r3 + 8) = u32(r7);
    *gptr<u8>(r4 + 0x18u) = u8(r7);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r7);  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    *gptr<u32>(r4 + 0x20u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x458u;  // (from the original)
    *gptr<u32>(r6 + 4u) = u32(r0);
    r13 = r13 + 0x20;  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    return call_0052a5ac(r0, r1, r2, r3);
}

}  // namespace d_0052a3b8
GUEST_EXPORT(0x0052a3b8, d_0052a3b8::f_0052a3b8);

// f_0052a508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a508 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0052a508(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 1u;
    r1 = 0x52a590u;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = std::bit_cast<float>(*gptr<u32>(0x52a59cu));  // (from the original)
    r0 = r4 + 0x3b8u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = 1u;
    r1 = 0x52a590u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x52a5a0u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    return call_00568c10(r0, r1, r2, r3);
}

}  // namespace d_0052a508
GUEST_EXPORT(0x0052a508, d_0052a508::f_0052a508);

// f_0052a870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a870 {

struct __attribute__((packed)) Object_0052a870_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052a870_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052a870_0, word_10, 0x10);  // (from the original)


u32 f_0052a870(gptr<Object_0052a870_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x85eda4u;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x24u);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x20u)) {  // (from the original)
        goto L_52a8b8;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_52a8b0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_52a8b8;
    }
L_52a8b0:;
    r4 = 1u;
    goto L_52a8bc;
L_52a8b8:;
    r4 = 0u;
L_52a8bc:;
    ea = r12 + 0x10u;  // (from the original)
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_52a8f8;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_52a8f0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_52a8f8;
    }
L_52a8f0:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52a8f8:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052a870
GUEST_EXPORT(0x0052a870, d_0052a870::f_0052a870);

// f_0052ab60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ab60 {

inline constexpr guest::Function<0x0011493d, u32(u32, u32, u32, u32)> call_0011493c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)

u32 f_0052ab60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0u;
    *gptr<u8>(r4 + 0x16u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x17u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x18u) = u8(r0);  // (from the original)
    *gptr<u16>(r4 + 0xeu) = u16(r0);  // (from the original)
    r0 = 5u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = 0x33u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0011493c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052ab60
GUEST_EXPORT(0x0052ab60, d_0052ab60::f_0052ab60);

// f_0052abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052abd8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005291b0, u32(u32, u32, u32, u32)> call_005291b0;  // (from the original)
inline constexpr guest::Function<0x0052984c, u32(u32, u32, u32, u32)> call_0052984c;  // (from the original)
inline constexpr guest::Function<0x007ca090, u32(u32, u32, u32, u32)> call_007ca090;  // (from the original)

u32 f_0052abd8(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r8 = 0u;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r3 = r8 << 0x10 & 0xff0000u;  // (from the original)
    r2 = (0xc8u << 8 & 0xff00u | (0xc8u | r2 & ~0xffu) & ~0xff00u) & ~0xff0000u;  // (from the original)
    r5 = r1;
    r0 = r13 + 8u;
    r4 = r2 | r3;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    r2 = r4 << 0x10 >> 0x18;  // (from the original)
    r3 = r4 << 8 >> 0x18;  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(r2);  // (from the original)
    r1 = r0;
    *gptr<u8>(r0 + 0xeu) = u8(r3);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007ca090(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r0 = r4;
    if (r4 != 2u) {
        if (r0 == 1u) {
            r7 = 4u;
            r4 = 0u;
            goto L_52ad14;
        }
        goto L_52ad48;
    }
    r1 = u32(*gptr<u8>(r6 + 0x24u)) & 1u;  // (from the original)
    if (r1 >= 2u) {
        r8 = r6 + 0x60u;  // (from the original)
        goto L_52aca8;
    }
    r8 = r6 + (r1 + (r1 << 2) + (r1 << 6) << 2) + 0x60u;  // (from the original)
L_52aca8:;
    r7 = 4u;
    r4 = 0u;
    do {
L_52acb0:;
        r0 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0 = r0 + (r4 << 6);
        }
        *gptr<u32>(r13) = u32(r0 + 0x34u);  // (from the original)
        r3 = 0x8464b4u;  // (from the original)
        r1 = r8;
        r2 = r5;
        r0 = r0 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005291b0(r0, r1, r2, r3);
        r0 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0 = r0 + (r4 << 6);
        }
        r1 = u32(*gptr<u8>(r5 + 4u));
        r2 = 0x8464b4u;  // (from the original)
        r3 = r5;
        r0 = r0 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052984c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        res = r4 - 4u;
        if (!u32(res == 0) && res >> 0x1f == ((r4 ^ 4u) & (r4 ^ res)) >> 0x1f) {  // (from the original)
            r4 = 4u;
        }
        guest::preempt();
    } while (r4 != r7);
    r8 = 1u;
    goto L_52ad48;
L_52ad14:;
    r0 = r6 + 0x28cu;  // (from the original)
    if (r4 < 4u) {
        r0 = r0 + (r4 << 6);
    }
    r1 = u32(*gptr<u8>(r5 + 4u));
    r2 = 0x8464b4u;  // (from the original)
    r3 = r5;
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052984c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r4 + 1u;
    res = r4 - 4u;
    if (!u32(res == 0) && res >> 0x1f == ((r4 ^ 4u) & (r4 ^ res)) >> 0x1f) {  // (from the original)
        r4 = 4u;
    }
    if (r4 != r7) {
        guest::preempt();
        goto L_52ad14;
    }
L_52ad48:;
    r0 = r8;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052abd8
GUEST_EXPORT(0x0052abd8, d_0052abd8::f_0052abd8);

// f_0052b818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b818 {

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052b9ec, u32(u32, u32, u32, u32)> call_0052b9ec;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052b818(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569d50(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 4u;
    r1 = *gptr<u32>(r0 + 4u);
    r4 = r0;
    r8 = r2 + 0x430u;  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r9 = 0x895ba0u;  // (from the original)
    r7 = 0u;
    ea = r6 + 4u;
    *gptr<u32>(ea) = u32(r7);
    ea = r6 + 8u;
    *gptr<u8>(ea) = u8(r7);
    ea = r9 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = r6 + 0xcu;  // (from the original)
    r5 = 0x8f74f4u;  // (from the original)
    r0 = r6 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r3 + 8) = u32(r7);
    *gptr<u8>(r6 + 0x18u) = u8(r7);  // (from the original)
    *gptr<u32>(r6 + 0x1cu) = u32(r7);  // (from the original)
    *gptr<u32>(r6) = u32(r5);
    *gptr<u32>(r6 + 0x20u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x95e0b4u;  // (from the original)
    r0 = r0 - 0x408u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r6) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_0052b9ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 4u);
    r2 = 4u;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fd108(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r9 = r9 + 0x18u;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r7);
    *gptr<u8>(r4 + 8u) = u8(r7);
    r1 = *gptr<u32>(r9);
    r2 = *gptr<u32>(r9 + 4);
    r3 = r4 + 0xcu;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r3) = u32(r1);
    *gptr<u32>(r3 + 4) = u32(r2);
    *gptr<u32>(r3 + 8) = u32(r7);
    *gptr<u8>(r4 + 0x18u) = u8(r7);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r7);  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    *gptr<u32>(r4 + 0x20u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x408u;  // (from the original)
    *gptr<u32>(r6 + 4u) = u32(r0);
    r13 = r13 + 0x20;  // (from the original)
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    return call_0052b9ec(r0, r1, r2, r3);
}

}  // namespace d_0052b818
GUEST_EXPORT(0x0052b818, d_0052b818::f_0052b818);

// f_0052b948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b948 {

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0052b948(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 1u;
    r1 = 0x52b9d0u;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = std::bit_cast<float>(*gptr<u32>(0x52b9dcu));  // (from the original)
    r0 = r4 + 0x3b8u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568c10(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = 1u;
    r1 = 0x52b9d0u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    r3 = 0u;
    r1 = r4 + 0x3b8u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568984(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = 0x52b9e0u;  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r4 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    return call_00568c10(r0, r1, r2, r3);
}

}  // namespace d_0052b948
GUEST_EXPORT(0x0052b948, d_0052b948::f_0052b948);

// f_0052bb0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bb0c {

struct __attribute__((packed)) Object_0052bb0c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052bb0c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052bb0c_0, word_10, 0x10);  // (from the original)


u32 f_0052bb0c(gptr<Object_0052bb0c_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r12 = 0x895ba0u;  // (from the original)
    r13 = r13 - 4u;
    r3 = arg0->word_c;
    r1 = *gptr<u32>(r12 + 0x14u);  // (from the original)
    if (r3 != *gptr<u32>(r12 + 0x10u)) {  // (from the original)
        goto L_52bb54;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            goto L_52bb4c;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_52bb54;
    }
L_52bb4c:;
    r4 = 1u;
    goto L_52bb58;
L_52bb54:;
    r4 = 0u;
L_52bb58:;
    ea = r12 + 8u;
    r1 = *gptr<u32>(ea + 4u);
    if (r3 != *gptr<u32>(ea)) {
        goto L_52bb94;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1) & 1u) == 0) {  // (from the original)
            goto L_52bb8c;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        goto L_52bb94;
    }
L_52bb8c:;
    r0 = 1u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52bb94:;
    r0 = 0u;
    r0 = r0 | r4;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052bb0c
GUEST_EXPORT(0x0052bb0c, d_0052bb0c::f_0052bb0c);

// f_0052be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052be5c {

inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)

u32 f_0052be5c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0x9ab170u;  // (from the original)
    r0 = call_0052c32c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = 0x9516a0u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1);
    *gptr<u32>(r0 + 8u) = u32(r1);
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    if (r4 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r0) = u8(r1);
    *gptr<u32>(r0 + 0x14u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052be5c
GUEST_EXPORT(0x0052be5c, d_0052be5c::f_0052be5c);

// f_0052bf90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bf90 {


u32 f_0052bf90() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9516a0u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) | 4u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052bf90
GUEST_EXPORT(0x0052bf90, d_0052bf90::f_0052bf90);

// f_0052bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bfa8 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052bfa8() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = 4u;
    r4 = 0xdu;  // (from the original)
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r9 = 0u;
    if (r0 == 0) {
        goto L_52c010;
    }
    r7 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r6 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c010;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r5);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_52c010:;
    r0 = r9;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052bfa8
GUEST_EXPORT(0x0052bfa8, d_0052bfa8::f_0052bfa8);

// f_0052c01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c01c {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c01c(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r4 = r0;
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        goto L_52c09c;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52c09c;
    }
    r5 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r6 = 7u;
    r7 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c09c;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r6);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r7);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52c09c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052c01c
GUEST_EXPORT(0x0052c01c, d_0052c01c::f_0052c01c);

// f_0052c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c0a4 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c0a4() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        goto L_52c124;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52c124;
    }
    r4 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r6 = 0u;
    r0 = 0x9ab170u;  // (from the original)
    r5 = 4u;
    r7 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c124;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r6);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52c124:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052c0a4
GUEST_EXPORT(0x0052c0a4, d_0052c0a4::f_0052c0a4);

// f_0052c1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c1a0 {

struct __attribute__((packed)) Object_0052c1a0_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c1a0_0, word_54, 0x54);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)

u32 f_0052c1a0(gptr<Object_0052c1a0_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = 0u;
    r4 = arg0->word_54;
    r0 = 0x9ab170u;  // (from the original)
    r6 = 1u;
    r7 = 3u;
    r8 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 != 0) {
        r9 = 1u;
        ea = r1 + 0x10u;  // (from the original)
        *gptr<u32>(ea) = u32(r4);
        *gptr<u32>(ea + 4) = u32(r5);
        *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
        *gptr<u8>(r1 + 0x19u) = u8(r6);  // (from the original)
        *gptr<u8>(r1 + 0xcu) = u8(r7);  // (from the original)
        r0 = 0x9ab170u;  // (from the original)
        *gptr<u8>(r1 + 0x1bu) = u8(r8);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r9;
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052c1a0
GUEST_EXPORT(0x0052c1a0, d_0052c1a0::f_0052c1a0);

// f_0052c268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c268 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32, u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c268() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0u;
    r0 = 1u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r1 = 0u;
        r0 = 2u;
        r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = 0x9516a0u;  // (from the original)
    r0 = *gptr<u32>(r1 + 8u);
    if (r0 == 0) {
        r0 = *gptr<u32>(r1 + 4u);
        guest::cpu()->r[13] += 8u;
        return call_006e46c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 8u;
    return call_006e46c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052c268
GUEST_EXPORT(0x0052c268, d_0052c268::f_0052c268);

// f_0052c2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c2c0 {


u32 f_0052c2c0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0x9516a0u;  // (from the original)
    r1 = u32(*gptr<u8>(r0)) & ~4u;
    *gptr<u8>(r0) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c2c0
GUEST_EXPORT(0x0052c2c0, d_0052c2c0::f_0052c2c0);

// f_0052c3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c3e0 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c3e0() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r5 = 4u;
    r4 = 0xbu;  // (from the original)
    r1 = 0u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r9 = 0u;
    if (r0 == 0) {
        goto L_52c448;
    }
    r7 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r6 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c448;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r7);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r5);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_52c448:;
    r0 = r9;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052c3e0
GUEST_EXPORT(0x0052c3e0, d_0052c3e0::f_0052c3e0);

// f_0052c454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c454 {

inline constexpr guest::Function<0x00240fdc, u32(u32, u32, u32, u32)> call_00240fdc;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)
inline constexpr guest::Function<0x0052ce18, u32(u32, u32, u32, u32)> call_0052ce18;  // (from the original)

u32 f_0052c454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0 = call_0052ce18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x9ab170u;  // (from the original)
    r0 = call_0052c32c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x9516a0u;  // (from the original)
    r6 = 0u;
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u32>(r5 + 0xcu) = u32(r6);  // (from the original)
    *gptr<u32>(r5 + 4u) = u32(r6);
    *gptr<u32>(r5 + 8u) = u32(r6);
    *gptr<u32>(r5 + 0x10u) = u32(r6);  // (from the original)
    r0 = call_0052c2d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_00240fdc(r0, r1, r2, r3);
    r2 = 3u;
    *gptr<u32>(r4 + 0x14u) = u32(r6);  // (from the original)
    r1 = r0;
    *gptr<u8>(r4 + 0x18u) = u8(r2);  // (from the original)
    *gptr<u8>(r4 + 0x1au) = u8(4u);  // (from the original)
    *gptr<u8>(r4 + 0xcu) = u8(2u);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r1);  // (from the original)
    if (r0 == 0) {
        r0 = 5u;
        *gptr<u8>(r4 + 0x19u) = u8(r6);  // (from the original)
    } else {
        *gptr<u8>(r4 + 0x19u) = u8(r2);  // (from the original)
        r0 = 8u;
    }
    *gptr<u8>(r4 + 0x1au) = u8(r0);  // (from the original)
    *gptr<u32>(r5 + 0xcu) = u32(r4);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c454
GUEST_EXPORT(0x0052c454, d_0052c454::f_0052c454);

// f_0052c4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c4d8 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c4d8(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r1 = 0u;
    r0 = 4u;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52c54c;
    }
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r7 = *gptr<u32>(r4 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r4 = 2u;
    r5 = 3u;
    r6 = 0u;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c54c;
    }
    *gptr<u32>(r1 + 0x14u) = u32(r7);  // (from the original)
    r9 = 1u;
    *gptr<u32>(r1 + 0x10u) = u32(r8);  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r5);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r6);  // (from the original)
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52c54c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c4d8
GUEST_EXPORT(0x0052c4d8, d_0052c4d8::f_0052c4d8);

// f_0052c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c584 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c584() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0u;
    r0 = 6u;
    guest::cpu()->r[13] -= 4u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0x9516acu);  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1 + 0x1au) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c584
GUEST_EXPORT(0x0052c584, d_0052c584::f_0052c584);

// f_0052c648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c648 {


u32 f_0052c648() {
    u32 r0 = 0;
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r0 = *gptr<u32>(0x9516b0u);  // (from the original)
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf && nf == vf) {
        r0 = 1u;
    }
    if (zf || nf != vf) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_0052c648
GUEST_EXPORT(0x0052c648, d_0052c648::f_0052c648);

// f_0052c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c790 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c790(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x8000000u;  // (from the original)
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 1u;
    r0 = call_003170f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r1 = 0u;
        r0 = 2u;
        r0 = call_003170f8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(0x9516acu);  // (from the original)
    if (*gptr<u32>(r4 + 0x54u) == *gptr<u32>(r1 + 0x14u)) {  // (from the original)
        r0 = 1u;
        *gptr<u8>(r1 + 0x1au) = u8(r0);  // (from the original)
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c790
GUEST_EXPORT(0x0052c790, d_0052c790::f_0052c790);

// f_0052c82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c82c {

struct __attribute__((packed)) Object_0052c82c_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c82c_0, word_54, 0x54);  // (from the original)


u32 f_0052c82c(gptr<Object_0052c82c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r0 = arg0->word_54;
    r1 = 0x9516a0u;  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c82c
GUEST_EXPORT(0x0052c82c, d_0052c82c::f_0052c82c);

// f_0052c844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c844 {


u32 f_0052c844(u32 r0) {
    if (r0 == 2u) {
        r0 = 1u;
        return r0;
    }
    if (r0 == 4u) {
        r0 = 3u;
        return r0;
    }
    if (r0 == 6u) {
        r0 = 5u;
        return r0;
    }
    if (r0 == 8u) {
        r0 = 7u;
        return r0;
    }
    r0 = 1u;
    return r0;
}

}  // namespace d_0052c844
GUEST_EXPORT(0x0052c844, d_0052c844::f_0052c844);

// f_0052c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c878 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32, u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c878() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0u;
    r0 = 1u;
    guest::cpu()->r[13] -= 8u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r1 = 0u;
        r0 = 2u;
        r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = *gptr<u32>(0x9516a4u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_006e46c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052c878
GUEST_EXPORT(0x0052c878, d_0052c878::f_0052c878);

// f_0052c8c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c8c4 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c8c4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r1 = 0u;
    r0 = 4u;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52c938;
    }
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r7 = *gptr<u32>(r4 + 0x54u);  // (from the original)
    r5 = 3u;
    r0 = 0x9ab170u;  // (from the original)
    r4 = 2u;
    r6 = r5;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c938;
    }
    *gptr<u32>(r1 + 0x14u) = u32(r7);  // (from the original)
    r9 = 1u;
    *gptr<u32>(r1 + 0x10u) = u32(r8);  // (from the original)
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r4);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r5);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r6);  // (from the original)
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52c938:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052c8c4
GUEST_EXPORT(0x0052c8c4, d_0052c8c4::f_0052c8c4);

// f_0052c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c974 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c974() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        goto L_52c9f4;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52c9f4;
    }
    r4 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r5 = 8u;
    r6 = 4u;
    r7 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52c9f4;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r6);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52c9f4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052c974
GUEST_EXPORT(0x0052c974, d_0052c974::f_0052c974);

// f_0052cc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc5c {


u32 f_0052cc5c() {
    u32 r0 = 0;
    r0 = u32(*gptr<u8>(0x9516a0u)) << 0x1e >> 0x1f;  // (from the original)
    return r0;
}

}  // namespace d_0052cc5c
GUEST_EXPORT(0x0052cc5c, d_0052cc5c::f_0052cc5c);

// f_0052cc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc74 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052cc74() {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r1 = 0u;
    r0 = 0xeu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        goto L_52ccf4;
    }
    r1 = 0u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c33cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_52ccf4;
    }
    r4 = 0u;
    r8 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    r5 = 6u;
    r6 = 1u;
    r7 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052c2d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    if (r0 == 0) {
        goto L_52ccf4;
    }
    r9 = 1u;
    ea = r1 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r8);
    *gptr<u8>(r1 + 0x18u) = u8(r9);  // (from the original)
    *gptr<u8>(r1 + 0x19u) = u8(r5);  // (from the original)
    *gptr<u8>(r1 + 0xcu) = u8(r6);  // (from the original)
    r0 = 0x9ab170u;  // (from the original)
    *gptr<u8>(r1 + 0x1bu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125ca4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r9;
L_52ccf4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052cc74
GUEST_EXPORT(0x0052cc74, d_0052cc74::f_0052cc74);

// f_0052ccfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ccfc {


u32 f_0052ccfc(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9516a0u;  // (from the original)
    if (*gptr<u32>(r1 + 0x14u) == 0) {  // (from the original)
        *gptr<u32>(r1 + 0x14u) = u32(r0);  // (from the original)
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052ccfc
GUEST_EXPORT(0x0052ccfc, d_0052ccfc::f_0052ccfc);

// f_0052cd58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cd58 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052cd58(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0x10u;  // (from the original)
    r0 = call_002f74e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0u;
    r0 = 1u;
    r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r1 = 0u;
        r0 = 2u;
        r0 = call_003170f8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = *gptr<u32>(r4 + 0x54u);  // (from the original)
    r4 = 0x9516a0u;  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r4 + 0xcu) + 0x14u);  // (from the original)
    if (r0 != r1) {
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
    r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    *gptr<u8>(r1 + 0x1au) = u8(3u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052cd58
GUEST_EXPORT(0x0052cd58, d_0052cd58::f_0052cd58);

// f_0052ce18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ce18 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052ce18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x9ab598u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    do {
L_52ce28:;
        r1 = r2 + (r0 << 3);
        r0 = r0 + 1u;
        *gptr<u32>(r1 + 0x30u) = u32(r4);  // (from the original)
        *gptr<u32>(r1 + 0x34u) = u32(r4);  // (from the original)
        guest::preempt();
    } while (r0 < 6u);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_52ce6c;
        }
    }
    r0 = 0x9ab588u;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52ce6c:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r3 = r0;
    *gptr<u8>(r13) = u8(r0);
    r1 = 0u;
    r2 = r13;
    r0 = 0x39u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052ce18
GUEST_EXPORT(0x0052ce18, d_0052ce18::f_0052ce18);

// f_0052ceb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ceb8 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0052d420, u32(u32, u32, u32, u32)> call_0052d420;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052ceb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_52cefc;
        }
    }
    r1 = r4;
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052d420(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = 2u;
    } else {
        r0 = 1u;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52cefc:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0u;
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r3 = 5u;
    *gptr<u8>(0x9516b8u) = u8(r0);  // (from the original)
    *gptr<u8>(r13) = u8(r0);
    *gptr<u8>(r13 + 1u) = u8(r4);
    *gptr<u8>(r13 + 2u) = u8(r4 >> 8);
    *gptr<u8>(r13 + 3u) = u8(r4 >> 0x10);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r4 >> 0x18);  // (from the original)
    r2 = r13;
    r1 = 0u;
    r0 = 0x39u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052ceb8
GUEST_EXPORT(0x0052ceb8, d_0052ceb8::f_0052ceb8);

// f_0052d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0b8 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_0052d0b8(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fc900(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0061a7a0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0052d0b8
GUEST_EXPORT(0x0052d0b8, d_0052d0b8::f_0052d0b8);

// f_0052d0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0dc {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052d0dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_52d108;
        }
    }
    r1 = 0x9ab588u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r1) = u32(r0);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52d108:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 1u;
    r3 = r0;
    *gptr<u8>(r13) = u8(r0);
    r1 = 0u;
    r2 = r13;
    r0 = 0x39u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052d0dc
GUEST_EXPORT(0x0052d0dc, d_0052d0dc::f_0052d0dc);

// f_0052d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d150 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052d150(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r3 = 6u;
        *gptr<u8>(0x9516b8u) = u8(0u);  // (from the original)
        *gptr<u8>(r13) = u8(r6);
        *gptr<u8>(r13 + 1u) = u8(r4);
        *gptr<u8>(r13 + 2u) = u8(r4 >> 8);
        *gptr<u8>(r13 + 4u) = u8(r4 >> 0x18);  // (from the original)
        *gptr<u8>(r13 + 3u) = u8(r4 >> 0x10);  // (from the original)
        r2 = r13;
        r1 = 5u;
        r0 = 0x39u;  // (from the original)
        *gptr<u8>(r13 + 5u) = u8(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_006249b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052d150
GUEST_EXPORT(0x0052d150, d_0052d150::f_0052d150);

// f_0052d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d220 {


u32 f_0052d220(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0x9ab598u;  // (from the original)
    r1 = 0u;
    do {
L_52d228:;
        r3 = r2 + (r1 << 3);
        if (!(*gptr<u32>(r3) != r0)) {
            r0 = *gptr<u32>(r2 + (r1 << 3) + 4u);
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (!(*gptr<u32>(r3 + 8u) != r0)) {
            r0 = *gptr<u32>(r2 + (r1 << 3) + 0xcu);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(6u));
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0052d220
GUEST_EXPORT(0x0052d220, d_0052d220::f_0052d220);

// f_0052d550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d550 {

struct __attribute__((packed)) Object_0052d550_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
};
GUEST_OFFSET(Object_0052d550_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1c, 0x1c);  // (from the original)


void f_0052d550(gptr<Object_0052d550_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->byte_18 = u8(r1);
    arg0->byte_19 = u8(0xeu);  // (from the original)
    arg0->byte_1a = u8(r1);
    arg0->byte_1b = u8(r1);
    arg0->byte_1c = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0052d550
GUEST_EXPORT(0x0052d550, d_0052d550::f_0052d550);

// f_0052db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052db0c {

inline constexpr guest::Function<0x0060c560, u32(u32, u32, u32, u32)> call_0060c560;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)

u32 f_0052db0c(u32 r0, float S0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x9516c0u;  // (from the original)
    r0 = r0 + (r0 << 1);
    r2 = r1 + 0x3cu;  // (from the original)
    r1 = r1 + (r0 << 2);
    r0 = r2 + (r0 << 2);
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r1));
    r2 = *gptr<u32>(r1 + 4u);
    *gptr<u32>(r13 + 4u) = u32(r2);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r1 + 8u));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0));  // (from the original)
    r1 = *gptr<u32>(r0 + 4u);
    *gptr<u32>(r13 + 0x10u) = u32(r1);  // (from the original)
    r0 = *gptr<u32>(r0 + 8u);
    *gptr<u32>(r13 + 0x14u) = u32(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0060c5c4(r0, r1, r2, guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x52db78u));  // (from the original)
    r2 = r13 + 0xcu;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0060c560(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_0052db0c
GUEST_EXPORT(0x0052db0c, d_0052db0c::f_0052db0c);

// f_0052ddf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ddf8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d2f8, u32(u32, u32, u32, u32)> call_0075d2f8;  // (from the original)

u32 f_0052ddf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r0;
    r4 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b4c94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r1 = r0;
    r0 = 0u;
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_0060c5c4(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = r4;
        r1 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0075d2f8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r13) = u32(r0);
        r0 = u32(*gptr<u16>(r13));
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r5) = u32(*gptr<u32>(r4));
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r4 + 4u));
    r1 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r5 + 8u) = u32(r1);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052ddf8
GUEST_EXPORT(0x0052ddf8, d_0052ddf8::f_0052ddf8);

// f_0052de50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052de50 {

inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052de50(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052ddf8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = std::bit_cast<float>(*gptr<u32>(0x52dee0u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x52dee4u));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S1));
    r1 = r0;
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    if (sxth(r1) != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0056747c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r0 = sxth(r5);
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00567580(r0, r1, r2, guest::cpu()->r[3]);
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

}  // namespace d_0052de50
GUEST_EXPORT(0x0052de50, d_0052de50::f_0052de50);

// f_0052e038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e038 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d378, u32(u32, u32, u32, u32)> call_0075d378;  // (from the original)

u32 f_0052e038(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_52e09c;
    }
    if (r4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0060c5c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r2 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0075d378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(*gptr<u32>(r13));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 4u));
    r0 = *gptr<u32>(r13 + 8u);
L_52e090:;
    *gptr<u32>(r4 + 8u) = u32(r0);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52e09c:;
    *gptr<u32>(r4) = u32(*gptr<u32>(r5));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r5 + 4u));
    r0 = *gptr<u32>(r5 + 8u);
    guest::preempt();
    goto L_52e090;
}

}  // namespace d_0052e038
GUEST_EXPORT(0x0052e038, d_0052e038::f_0052e038);

// f_0052e0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e0b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d4b0, u32(u32, u32, u32, u32)> call_0075d4b0;  // (from the original)

u32 f_0052e0b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b4c94(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    zf = r0 == 0;
    r1 = r0;
    r0 = 0u;
    if (zf) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0060c5c4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0075d4b0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r0);
    r0 = u32(*gptr<u16>(r13));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052e0b4
GUEST_EXPORT(0x0052e0b4, d_0052e0b4::f_0052e0b4);

// f_0052e1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e1ec {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d178, u32(u32, u32, u32, u32)> call_0075d178;  // (from the original)

u32 f_0052e1ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r1;
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005b4c94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0u;
    if (r0 == 0) {
        goto L_52e270;
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
    if (r0 != 0) {
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0052ddf8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r13) = u32(r0);
        r0 = u32(*gptr<u16>(r13));
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x94edd8u;  // (from the original)
    r5 = *gptr<u32>(r0);
    if (r5 == 0) {
        goto L_52e270;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0060c5c4(r0, r1, r2, r3);
    r2 = r4;
    r3 = *gptr<u32>(r5 + 0x1a4u) + 0x24u;  // (from the original)
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0075d178(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r0);
    r0 = u32(*gptr<u16>(r13));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52e270:;
    *gptr<u32>(r6) = u32(*gptr<u32>(r4));
    *gptr<u32>(r6 + 4u) = u32(*gptr<u32>(r4 + 4u));
    *gptr<u32>(r6 + 8u) = u32(*gptr<u32>(r4 + 8u));
    r0 = r7;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052e1ec
GUEST_EXPORT(0x0052e1ec, d_0052e1ec::f_0052e1ec);

// f_0052e294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e294 {

inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052e294(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052e1ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = std::bit_cast<float>(*gptr<u32>(0x52e324u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x52e328u));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S1));
    r1 = r0;
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    if (sxth(r1) != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0056747c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r0 = sxth(r5);
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00567580(r0, r1, r2, guest::cpu()->r[3]);
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

}  // namespace d_0052e294
GUEST_EXPORT(0x0052e294, d_0052e294::f_0052e294);

// f_0052e32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e32c {

inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052e32c(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0052e1ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S1 = std::bit_cast<float>(*gptr<u32>(0x52e3e4u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x52e3e8u));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S1));
    r1 = r0;
    *gptr<u32>(r4 + 4u) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S0));
    r0 = r4 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = r4 + 0x24u;  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 0xcu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    if (sxth(r1) != 0) {
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0056747c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    if (u32(*gptr<u16>(r5 + 2u)) != 0) {
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(r5 + 2u)));
        r1 = *gptr<u32>(r13);
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00567580(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r0 = u32(*gptr<u16>(r5));
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r5)));
    r1 = *gptr<u32>(r13);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0056747c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0052e32c
GUEST_EXPORT(0x0052e32c, d_0052e32c::f_0052e32c);

// f_0052e5ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e5ac {

struct __attribute__((packed)) Object_0052e5ac_0 {
    u8 unknown_0[0x808];  // (not used here)
    u8 byte_808;
};
GUEST_OFFSET(Object_0052e5ac_0, byte_808, 0x808);  // (from the original)


u32 f_0052e5ac(gptr<Object_0052e5ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 zf = 0;
    r2 = r0 + 0x670u;  // (from the original)
    r1 = 0x86537cu + (u32(arg0->byte_808) << 3);  // (from the original)
    r0 = *gptr<u32>(r1 + 4u);
    r1 = *gptr<u32>(r1);
    if (r1 == 0) {
        if ((r0 & 1u) == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r0 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    zf = (r0 & 1u) == 0;
    r0 = r2 + u32(s32(r0) >> 1);
    if (zf) {
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    r2 = *gptr<u32>(r0);
    r1 = *gptr<u32>(r2 + r1);
    return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0052e5ac
GUEST_EXPORT(0x0052e5ac, d_0052e5ac::f_0052e5ac);

// f_0052ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ed04 {

struct __attribute__((packed)) Object_0052ed04_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0052ed04_1, word_0, 0x0);  // (from the original)


void f_0052ed04(gptr<GridPoint> arg0, gptr<Object_0052ed04_1> arg1) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r2 = arg1->word_0;
    res = r2;
    if (res >> 0x1f == (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r2 = r2 - (r2 + (u32(s32(r2) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
    } else {
        r2 = r2 + 1u;
        r2 = r2 - (r2 + (u32(s32(r2) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    }
    r1 = *gptr<u32>(r1 + 4u);
    res = r1;
    if (res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r1 - (r1 + (u32(s32(r1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
        arg0->y = s32(u32(r1));
        arg0->x = s32(u32(r2));
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 + 1u;
    r1 = r1 - (r1 + (u32(s32(r1) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    arg0->y = s32(u32(r1));
    arg0->x = s32(u32(r2));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0052ed04
GUEST_EXPORT(0x0052ed04, d_0052ed04::f_0052ed04);

// f_0052ef44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef44 {

struct __attribute__((packed)) Object_0052ef44_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0052ef44_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0052ef44_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef44_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_1, word_4, 0x4);  // (from the original)


u32 f_0052ef44(gptr<Object_0052ef44_0> arg0, gptr<Object_0052ef44_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    float S0 = 0;
    float S1 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x52ef88u));  // (from the original)
    r1 = arg1->word_0 * *gptr<u32>(0x85f2c4u);  // (from the original)
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *gptr<u32>(0x85f2c8u)))));  // (from the original)
    arg0->word_0 = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))))));
    r0 = r0 + 4u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0));
    arg0->word_8 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0052ef44
GUEST_EXPORT(0x0052ef44, d_0052ef44::f_0052ef44);

// f_0052ef8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef8c {

struct __attribute__((packed)) Object_0052ef8c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef8c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef8c_1, word_4, 0x4);  // (from the original)


void f_0052ef8c(gptr<GridRect> arg0, gptr<Object_0052ef8c_1> arg1) {
    u32 r1 = arg1.addr();
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x52eff4u));  // (from the original)
    r1 = arg1->word_0 * *gptr<u32>(0x85f2e0u) + *gptr<u32>(0x85f2e8u);  // (from the original)
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    S2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *gptr<u32>(0x85f2e4u) + *gptr<u32>(0x85f2ecu)))));  // (from the original)
    arg0->min.x = s32(u32(std::bit_cast<u32>(S1)));
    arg0->min.y = s32(u32(std::bit_cast<u32>(S0)));
    arg0->max.x = s32(u32(std::bit_cast<u32>(S2)));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0052ef8c
GUEST_EXPORT(0x0052ef8c, d_0052ef8c::f_0052ef8c);
