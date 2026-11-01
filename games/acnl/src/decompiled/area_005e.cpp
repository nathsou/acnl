// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_005e1974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e1974 {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005e1974(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    *frame.at<u32>(4) = r1;
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0013cd00(r0 + 0x20u, frame.at(0).addr(), ~0u, 0x9047f8u);  // (from the original)
    return r0_2;
}

}  // namespace d_005e1974
GUEST_EXPORT_FRAMED(0x005e1974, d_005e1974::f_005e1974, 0x4000);  // pushes {lr} first, as the original

// f_005e19a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e19a8 {

struct __attribute__((packed)) Object_005e19a8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005e19a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e19a8_0, word_4, 0x4);  // (from the original)


void f_005e19a8(gptr<Object_005e19a8_0> arg0, u32 r1) {
    arg0->word_4 = r1;
    arg0->word_0 = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_005e19a8
GUEST_EXPORT(0x005e19a8, d_005e19a8::f_005e19a8);

// f_005e1a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e1a00 {

struct __attribute__((packed)) Object_005e1a00_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005e1a00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e1a00_0, word_8, 0x8);  // (from the original)


void f_005e1a00(gptr<Object_005e1a00_0> arg0, u32 r1) {
    arg0->word_8 = r1;
    arg0->word_0 = 2;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_005e1a00
GUEST_EXPORT(0x005e1a00, d_005e1a00::f_005e1a00);

// f_005e3128: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3128 {

struct __attribute__((packed)) Local_005e3128_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e3128_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e3128_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005e3128_r0_4 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u8 byte_c0;
};
GUEST_OFFSET(Local_005e3128_r0_4, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Local_005e3128_r0_4, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Local_005e3128_r0_4, byte_c0, 0xc0);  // (from the original)

inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32)> call_00601a20;  // (from the original)

u32 f_005e3128(u32 r0, u32 r1) {
    u32 r0_1 = call_005d6868(r0, r1, 0u, 0u);
    u32 r0_3 = call_00601a20(r0_1 + 0x44u);  // (from the original)
    *gptr<u32>(r0_3 + 0x68u) = 0;  // (from the original)
    *gptr<u32>(r0_3) = 0x908f2c;  // (from the original)
    *gptr<u32>(r0_3 + 0x6cu) = 0;  // (from the original)
    *gptr<u32>(r0_3 + 0x70u) = 0;  // (from the original)
    gptr<Local_005e3128_ea_4> ea_4 = gptr<Local_005e3128_ea_4>(r0_3 + 0x60u);  // (from the original)
    ea_4->word_0 = r0_1;
    ea_4->word_4 = 0;
    gptr<Local_005e3128_r0_4> r0_4 = gptr<Local_005e3128_r0_4>(r0_3 - 0x44u);  // (from the original)
    r0_4->word_b8 = 0;
    r0_4->word_bc = 0;
    r0_4->byte_c0 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_4.addr();
}

}  // namespace d_005e3128
GUEST_EXPORT_FRAMED(0x005e3128, d_005e3128::f_005e3128, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e3238: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3238 {

inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)
inline constexpr guest::Function<0x005f723c, u32(u32, u32, u32, u32)> call_005f723c;  // (from the original)

u32 f_005e3238(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r4_1 = r1 >= 0x3cu ? 0u : r1;  // (from the original)
    u32 r0_2 = call_005f723c(frame.at(8).addr(), r1, r2, r3);
    u32 r0_3 = call_00301484(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = (r0_3 == 1u || r0_3 == 2u) ? 6u : 0u;
    *frame.at<u32>(4) = 4;
    call_005f6eb0(frame.at(8).addr(), r0, r4_1, 2u);
    *gptr<u32>(r0 + 0x40u) = r4_1;  // (from the original)
    *gptr<u8>(r0 + 0x3eu) = 3;  // (from the original)
    return 3u;
}

}  // namespace d_005e3238
GUEST_EXPORT_FRAMED(0x005e3238, d_005e3238::f_005e3238, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e32a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e32a0 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)
inline constexpr guest::Function<0x005f6eb0, u32(u32, u32, u32, u32)> call_005f6eb0;  // (from the original)
inline constexpr guest::Function<0x005f723c, u32(u32, u32, u32, u32)> call_005f723c;  // (from the original)

u32 f_005e32a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r0_2 = call_005f723c(frame.at(8).addr(), r1, r2, r3);
    u32 r0_3 = call_005d46dc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_3 == 8u;
    u32 r0_4 = 4u;
    if (zf_1) {
        r0_4 = 1u;
    }
    *frame.at<u32>(0) = 0xa;  // (from the original)
    *frame.at<u32>(4) = r0_4;
    call_005f6eb0(frame.at(8).addr(), r0, r1, r2);
    *gptr<u32>(r0 + 0x40u) = r1;  // (from the original)
    *gptr<u8>(r0 + 0x3eu) = 5;  // (from the original)
    return 5u;
}

}  // namespace d_005e32a0
GUEST_EXPORT_FRAMED(0x005e32a0, d_005e32a0::f_005e32a0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005e3344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3344 {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_005e3344(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r14 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = call_005d46dc(r0, r1, r2, r3);
    if (r0_1 == 6u || r0_1 == 3u) {
        r2_1 = 1u;
    } else {
        r2_1 = 0u;
        if (r0_1 == 7u) {
            r3_1 = 1u;
            goto L_5e3384;
        }
    }
    r3_1 = 0u;
    if (r0_1 == 8u) {
        r12_1 = 1u;
        goto L_5e3398;
    }
L_5e3384:;
    r12_1 = 0u;
    if (r0_1 == 5u || r0_1 == 2u) {
        r14 = 1u;
        goto L_5e33ac;
    }
L_5e3398:;
    r14 = 0u;
    if (r0_1 == 1u || r0_1 == 4u) {
        r1_1 = 1u;
        goto L_5e33b0;
    }
L_5e33ac:;
    r1_1 = 0u;
L_5e33b0:;
    if (r1 != 0) {
        if (r1 == 1u) {
            if (r1_1 != 0) {
                *gptr<u8>(r0 + 0x1du) = 1;  // (from the original)
                *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
            }
            r1_1 = r3_1 | r12_1;
            if (r1_1 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u8>(r0 + 0x1fu) = 1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (r1 == 2u || r1 == 3u) {
            if ((r1_1 | r2_1) != 0) {
                *gptr<u8>(r0 + 0x1du) = 1;  // (from the original)
                *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
            }
            r1_1 = r3_1 | r12_1;
            if (r1_1 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u8>(r0 + 0x1fu) = 1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (r1 == 4u) {
            r1_1 |= (r2_1 | r3_1);
            if (r1_1 != 0) {
                *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
            }
            if (r12_1 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u8>(r0 + 0x1fu) = 1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (r1 == 5u) {
            if ((r14 | r2_1 | r3_1 | r1_1) != 0) {
                *gptr<u8>(r0 + 0x1du) = 1;  // (from the original)
            }
            if ((r1_1 | r2_1) != 0) {
                *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
            }
            r1_1 = r3_1 | r12_1;
            if (r1_1 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u8>(r0 + 0x1fu) = 1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (r1 == 6u) {
            r1_1 = r1_1 | r2_1 | r3_1 | r12_1;
            if (r1_1 == 0) {
                guest::cpu()->r[1] = r1_1;
                return 1u;
            }
            *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        if (r1 != 7u) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        r1_1 |= r2_1;
        if (r1_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if ((r14 | r2_1 | r3_1 | r1_1) != 0) {
        *gptr<u8>(r0 + 0x1du) = 1;  // (from the original)
    }
    if ((r1_1 | r2_1) != 0) {
        *gptr<u8>(r0 + 0x1eu) = 1;  // (from the original)
    }
    r1_1 = r3_1 | r12_1;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    *gptr<u8>(r0 + 0x1fu) = 1;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_005e3344
GUEST_EXPORT_FRAMED(0x005e3344, d_005e3344::f_005e3344, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e34c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e34c4 {

struct __attribute__((packed)) Object_005e34c4_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e34c4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e34c4_0, byte_1f, 0x1f);  // (from the original)

struct __attribute__((packed)) Local_005e34c4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e34c4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e34c4_ea_1, word_4, 0x4);  // (from the original)


void f_005e34c4(gptr<Object_005e34c4_0> arg0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005e34c4_ea_1> ea_1 = gptr<Local_005e34c4_ea_1>(guest::cpu()->r[13] + 8u);
    float S0_1 = std::bit_cast<float>(ea_1->word_0);
    float S1_1 = std::bit_cast<float>(ea_1->word_4);
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    arg0->byte_0 = 1;
    arg0->word_4 = 0;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->byte_1f = 0;
    arg0->word_8 = r1;
    arg0->word_c = r2;
    arg0->word_10 = r3;
    arg0->word_14 = std::bit_cast<u32>(S0_1);
    arg0->word_18 = std::bit_cast<u32>(S1_1);
    arg0->byte_1c = u8(r4_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_005e34c4
GUEST_EXPORT_FRAMED(0x005e34c4, d_005e34c4::f_005e34c4, 0x30);  // pushes {r4, r5} first, as the original

// f_005e350c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e350c {

struct __attribute__((packed)) Object_005e350c_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e350c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e350c_0, byte_1f, 0x1f);  // (from the original)


void f_005e350c(gptr<Object_005e350c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0xcu);  // (from the original)
    float S0_1 = std::bit_cast<float>(*gptr<u32>(guest::cpu()->r[13] + 8u));
    arg0->byte_0 = 0;
    arg0->word_c = ~0u;
    arg0->word_8 = 0;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->byte_1f = 0;
    arg0->word_4 = r1;
    arg0->word_10 = r2;
    arg0->word_14 = r3;
    arg0->word_18 = std::bit_cast<u32>(S0_1);
    arg0->byte_1c = u8(r4_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_005e350c
GUEST_EXPORT_FRAMED(0x005e350c, d_005e350c::f_005e350c, 0x30);  // pushes {r4, r5} first, as the original

// f_005e3550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3550 {

struct __attribute__((packed)) Object_005e3550_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e3550_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e3550_0, byte_1f, 0x1f);  // (from the original)

struct __attribute__((packed)) Local_005e3550_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e3550_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e3550_ea_1, word_4, 0x4);  // (from the original)


void f_005e3550(gptr<Object_005e3550_0> arg0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_005e3550_ea_1> ea_1 = gptr<Local_005e3550_ea_1>(guest::cpu()->r[13] + 8u);
    float S0_1 = std::bit_cast<float>(ea_1->word_0);
    float S1_1 = std::bit_cast<float>(ea_1->word_4);
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    arg0->byte_0 = 1;
    arg0->word_4 = 0;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->byte_1f = 0;
    arg0->word_8 = r1;
    arg0->word_c = r2;
    arg0->word_10 = r3;
    arg0->word_14 = std::bit_cast<u32>(S0_1);
    arg0->word_18 = std::bit_cast<u32>(S1_1);
    arg0->byte_1c = u8(r4_1);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_005e3550
GUEST_EXPORT_FRAMED(0x005e3550, d_005e3550::f_005e3550, 0x30);  // pushes {r4, r5} first, as the original

// f_005e35dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e35dc {

struct __attribute__((packed)) Object_005e35dc_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_005e35dc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_005e35dc_0, byte_1f, 0x1f);  // (from the original)


void f_005e35dc(gptr<Object_005e35dc_0> arg0) {
    arg0->byte_0 = 2;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = ~0u;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 0;
    arg0->byte_1d = 0;
    arg0->byte_1e = 0;
    arg0->byte_1f = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005e35dc
GUEST_EXPORT(0x005e35dc, d_005e35dc::f_005e35dc);

// f_005e3ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e3ae4 {


void f_005e3ae4(gptr<script__ReplaceEngine> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_0 = 0x90905c;  // (from the original)
    arg0->byte_c = 0;
    arg0->half_e = 0;
    arg0->half_10 = 0;
}

}  // namespace d_005e3ae4
GUEST_EXPORT(0x005e3ae4, d_005e3ae4::f_005e3ae4);

// f_005e49c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e49c0 {

inline constexpr guest::Function<0x005e4a28, u32(u32, u32, u32, u32)> call_005e4a28;  // (from the original)

u32 f_005e49c0(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    call_005e4a28(r0, r1, r2, guest::cpu()->r[3]);
    u32 nf_1 = r2 >> 0x1f;  // (from the original)
    u32 vf_1 = (r2 & (r2 ^ r2)) >> 0x1f;  // (from the original)
    *gptr<u8>(r0 + 4u) = 4;
    if (nf_1 == vf_1) {
        u32 res_1 = r1 - r2;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ r2) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    }
    *gptr<u32>(r0 + 8u) = r1;
    if (nf_1 != vf_1) {
        r0_1 = 0u;
    } else {
        r0_1 = 2u;
        *gptr<u32>(r0 + 0xc0u) = r2;  // (from the original)
    }
    *gptr<u8>(r0 + 0xc4u) = u8(r0_1);  // (from the original)
    *gptr<u8>(r0 + 0xc9u) = 1;  // (from the original)
    return 1u;
}

}  // namespace d_005e49c0
GUEST_EXPORT_FRAMED(0x005e49c0, d_005e49c0::f_005e49c0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e4bd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e4bd4 {

struct __attribute__((packed)) Local_005e4bd4_r0_6 {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
    u8 byte_c4;
    u8 byte_c5;
    u8 byte_c6;
    u8 byte_c7;
    u8 byte_c8;
    u8 byte_c9;
    u8 unknown_ca[0x2];  // (not used here)
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
};
GUEST_OFFSET(Local_005e4bd4_r0_6, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c5, 0xc5);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c6, 0xc6);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c7, 0xc7);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, byte_c9, 0xc9);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r0_6, word_d4, 0xd4);  // (from the original)

struct __attribute__((packed)) Local_005e4bd4_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e4bd4_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005e4bd4_r8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e4bd4_r8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e4bd4_r8_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4edc, u32(u32, u32, u32, u32)> call_005d4edc;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_005e4bd4(gptr<script__ChoiceStandard> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2_1 = r1 * 0x2bu;  // (from the original)
    arg0->word_0 = 0x909080;  // (from the original)
    arg0->byte_5 = 5;
    arg0->byte_4 = 0;
    arg0->byte_6 = 0;
    arg0->word_8 = 0;
    u32 r0_2 = call_00779500(8u + (r2_1 << 2), r1, r2_1, r3);
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = r0_2 + 8u;
        gptr<Local_005e4bd4_r8_1> r8_1 = gptr<Local_005e4bd4_r8_1>(r0_3 - 8u);
        r8_1->word_0 = 0xac;  // (from the original)
        r8_1->word_4 = r1;
        r0_2 = call_00301d0c(r0_3, 0x5d4edcu, 0xacu, r1);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    gptr<Local_005e4bd4_r1_1> r1_1 = gptr<Local_005e4bd4_r1_1>(arg0.addr() + 0xcu);  // (from the original)
    r1_1->word_0 = r0_2;
    r1_1->word_4 = r1;
    u32 r0_5 = call_005d4edc(arg0.addr() + 0x14u, r1_1.addr(), r2_2, r3_1);  // (from the original)
    gptr<Local_005e4bd4_r0_6> r0_6 = gptr<Local_005e4bd4_r0_6>(r0_5 - 0x14u);  // (from the original)
    u32 r1_2 = ~0u;
    r0_6->word_c0 = r1_2;
    r0_6->byte_c4 = 0;
    r0_6->byte_c5 = 5;
    r0_6->byte_c6 = 0;
    r0_6->byte_c7 = 0;
    r0_6->byte_c8 = 0;
    r0_6->byte_c9 = 0;
    r0_6->word_cc = 0;
    r0_6->word_d0 = 0;
    r0_6->word_d4 = 0;
    guest::cpu()->r[1] = r1_2;
    return r0_6.addr();
}

}  // namespace d_005e4bd4
GUEST_EXPORT_FRAMED(0x005e4bd4, d_005e4bd4::f_005e4bd4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005e626c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e626c {

struct __attribute__((packed)) Object_005e626c_0 {
    u8 unknown_0[0x60];  // (not used here)
    u32 word_60;
    u8 byte_64;
    u8 unknown_65[0x3];  // (not used here)
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u8 byte_74;
};
GUEST_OFFSET(Object_005e626c_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, byte_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005e626c_0, byte_74, 0x74);  // (from the original)

struct __attribute__((packed)) Object_005e626c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005e626c_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_005e626c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e626c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e626c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0060184c, u32(u32, u32, u32, u32)> call_0060184c;  // (from the original)
inline constexpr guest::Function<0x006019b0, u32(u32, u32, u32, u32)> call_006019b0;  // (from the original)

u32 f_005e626c(gptr<Object_005e626c_0> arg0, gptr<Object_005e626c_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    gptr<Local_005e626c_ea_1> ea_1 = gptr<Local_005e626c_ea_1>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    u32 r0_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    u32 r5_1 = arg0->word_60;
    arg0->byte_64 = u8(r2);
    arg0->word_70 = 0;
    u32 zf_1 = r5_1 == 0;
    u32 r5_2 = arg0.addr() + 0x68u;  // (from the original)
    arg0->word_68 = r0_1;
    arg0->word_6c = r12_1;
    arg0->byte_74 = u8(r3);
    if (!zf_1 && r2 <= 0xau && arg1->word_0 != 0) {  // (from the original)
        call_006019b0(arg0.addr(), r1, 0x95df14u, r3);  // (from the original)
        call_0060184c(arg0.addr(), 0x95df14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    u32 r0_2 = arg0->word_70;
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_005e626c
GUEST_EXPORT_FRAMED(0x005e626c, d_005e626c::f_005e626c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e6bf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e6bf8 {

struct __attribute__((packed)) Object_005e6bf8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_005e6bf8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005e6bf8_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005e6bf8(gptr<Object_005e6bf8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 b_1 = 0;
    u32 r6 = 0u;
    arg0->word_0 = r1;
    arg0->word_4 = r6;
    u32 r4 = r0;
    arg0->word_8 = r6;
    arg0->word_c = 0x90a910;  // (from the original)
    arg0->word_10 = r6;
    arg0->word_14 = r6;
    arg0->word_18 = r6;
    arg0->word_1c = r6;
    call_002f825c(r4 + 0x20u, 0xa0u, r2, guest::cpu()->r[3]);  // (from the original)
    r0 = r4 + 0x1eu;  // (from the original)
    r1 = 0x28u;  // (from the original)
    do {
        *gptr<u16>(r0 + 2u) = u16(r6);
        res_1 = r1 - 1u;
        r1 = res_1;
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    u32 r2_1 = r4 + 0x240u;  // (from the original)
    r0 = r4 + 0xc0u;  // (from the original)
    r1 = 0u;
    u32 r5 = r2_1 > r0 ? r6 : 0u;
    r2 = r2_1 - r0;
    do {
        *gptr<u32>(r0 + (r1 << 2)) = r6;
        u32 r1_1 = r1 + 1u;
        r5 += 2u;
        *gptr<u32>(r0 + (r1_1 << 2)) = r6;
        b_1 = s32(r2) >> 2;
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(b_1));
    return r4;
}

}  // namespace d_005e6bf8
GUEST_EXPORT_FRAMED(0x005e6bf8, d_005e6bf8::f_005e6bf8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e7984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e7984 {

struct __attribute__((packed)) Local_005e7984_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005e7984_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e7984_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005e7984_r0_4 {
    u8 unknown_0[0x274];  // (not used here)
    u32 word_274;
    u32 word_278;
    u32 word_27c;
    u32 word_280;
    u32 word_284;
    u32 word_288;
};
GUEST_OFFSET(Local_005e7984_r0_4, word_274, 0x274);  // (from the original)
GUEST_OFFSET(Local_005e7984_r0_4, word_278, 0x278);  // (from the original)
GUEST_OFFSET(Local_005e7984_r0_4, word_27c, 0x27c);  // (from the original)
GUEST_OFFSET(Local_005e7984_r0_4, word_280, 0x280);  // (from the original)
GUEST_OFFSET(Local_005e7984_r0_4, word_284, 0x284);  // (from the original)
GUEST_OFFSET(Local_005e7984_r0_4, word_288, 0x288);  // (from the original)

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x00209c98, u32(u32, u32, u32, u32)> call_00209c98;  // (from the original)
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> call_005d6168;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x005e4bd4, u32(u32, u32, u32, u32)> call_005e4bd4;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_005e7984(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = call_005e4bd4(r0, 8u, r2, r3);
    u32 r10 = 0u;
    *gptr<u32>(r0_1) = 0x909228;  // (from the original)
    *gptr<u8>(r0_1 + 0xd8u) = u8(r10);  // (from the original)
    *gptr<u8>(r0_1 + 0xd9u) = u8(r10);  // (from the original)
    u32 r0_3 = call_00209c98(r0_1 + 0xdcu, 0x909228u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r0_3 - 0xdcu;  // (from the original)
    gptr<Local_005e7984_r0_4> r0_4 = gptr<Local_005e7984_r0_4>(r0_3 + 0xf24u);  // (from the original)
    u32 r9 = 0x90886cu;  // (from the original)
    r0_4->word_274 = r10;
    r0_4->word_278 = r10;
    r0_4->word_27c = r10;
    u32 r8 = 0x908f2cu;  // (from the original)
    r0_4->word_280 = r10;
    r0_4->word_284 = r10;
    u32 r4 = 0u;
    r0_4->word_288 = r10;
    do {
        u32 r0_5 = call_001391d8(0x100u, r1, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            u32 r0_6 = call_005d6868(r0_5, 0x41u, 0xau, 0u);  // (from the original)
            u32 r0_8 = call_005d6168(r0_6 + 0x44u, 0x41u, 0u, guest::cpu()->r[3]);  // (from the original)
            *gptr<u32>(r0_8) = r9;
            gptr<Local_005e7984_ea_1> ea_1 = gptr<Local_005e7984_ea_1>(r0_8 + 0x2cu);  // (from the original)
            ea_1->word_0 = r0_6;
            ea_1->word_4 = r10;
            u32 r1_1 = r0_8 + 0x34u;  // (from the original)
            u32 r0_9 = call_00601a20(r1_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r3 = guest::cpu()->r[3];
            r2 = r0_9 + 0x64u;  // (from the original)
            *gptr<u32>(r0_9 + 0x60u) = r0_8 - 0x44u;  // (from the original)
            *gptr<u32>(r0_9) = r8;
            *gptr<u32>(r2) = r0_8;
            *gptr<u32>(r2 + 4) = r10;
            *gptr<u32>(r0_9 + 0x6cu) = r10;  // (from the original)
            *gptr<u32>(r0_9 + 0x70u) = r10;  // (from the original)
            *gptr<u32>(r0_9 + 0x74u) = r10;  // (from the original)
            *gptr<u32>(r0_9 + 0x78u) = r10;  // (from the original)
            *gptr<u32>(r0_9 + 0x7cu) = r10;  // (from the original)
            *gptr<u32>(r0_9 + 0x80u) = r10;  // (from the original)
            r0_5 = r0_9 - 0x78u;  // (from the original)
            *gptr<u8>(r0_5 + 0xfcu) = u8(r10);  // (from the original)
        }
        r1 = r5 + (r4 << 2) + 0x1000u;  // (from the original)
        r4 += 1u;
        *gptr<u32>(r1 + 0x274u) = r0_5;  // (from the original)
        guest::preempt();
    } while (s32(r4) < 6);
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_005e7984
GUEST_EXPORT_FRAMED(0x005e7984, d_005e7984::f_005e7984, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005e7dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e7dc4 {

struct __attribute__((packed)) Object_005e7dc4_0 {
    u8 unknown_0[0x98];  // (not used here)
    u8 byte_98;
    u8 byte_99;
};
GUEST_OFFSET(Object_005e7dc4_0, byte_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_005e7dc4_0, byte_99, 0x99);  // (from the original)

inline constexpr guest::Function<0x00301484, u32(u32, u32, u32, u32)> call_00301484;  // (from the original)
inline constexpr guest::Function<0x0056b038, u32(u32, u32, u32)> call_0056b038;  // (from the original)

u32 f_005e7dc4(gptr<Object_005e7dc4_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->byte_99;
    u32 r4_1 = r1;
    if (r0_1 == 0) {
        r0_1 = r4_1 - 0x3041u;  // (from the original)
        u32 zf_1 = r0_1 == 0x55u;  // (from the original)
        u32 cf_1 = r0_1 >= 0x55u;  // (from the original)
        if (cf_1 && !zf_1) {
            r0_1 = r4_1 - 0x30a1u;  // (from the original)
            zf_1 = r0_1 == 0x55u;  // (from the original)
            cf_1 = r0_1 >= 0x55u;  // (from the original)
        }
        if (!!cf_1 && !zf_1) {
            if (r4_1 >= 0x41u && r4_1 <= 0x5au) {  // (from the original)
                goto L_5e7e94;
            }
            if (r4_1 >= 0x61u && r4_1 <= 0x7au) {  // (from the original)
                goto L_5e7e94;
            }
            u32 r0_2 = call_00301484(r0_1, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if (r0_2 != 3u) {
                if (r0_2 == 1u || r0_2 == 2u) {
                    if (r4_1 != 0xd7u) {  // (from the original)
                        r0_1 = r4_1 - 0xc0u;  // (from the original)
                        if (r0_1 <= 0x1eu) {  // (from the original)
                            goto L_5e7e94;
                        }
                    }
                    if (r4_1 != 0xf7u) {  // (from the original)
                        r0_1 = r4_1 - 0xe0u;  // (from the original)
                        if (r0_1 <= 0x1eu) {  // (from the original)
                            goto L_5e7e94;
                        }
                    }
                    goto L_5e7ec4;
                }
                goto L_5e7ec4;
            }
            r0_1 = call_0056b038(r4_1, 0xac00u, 0xd7a3u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_1 == 0) {
                r0_1 = call_0056b038(r4_1, 0x1100u, 0x11f9u);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_1 == 0) {
                    r0_1 = call_0056b038(r4_1, 0x3131u, 0x318eu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_1 == 0) {
                        goto L_5e7ec4;
                    }
                }
            }
        }
L_5e7e94:;
        arg0->byte_99 = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
L_5e7ec4:;
    u32 r0_3 = arg0->byte_99;
    if (r0_3 == 0) {
        arg0->byte_98 = 1;
    }
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_005e7dc4
GUEST_EXPORT_FRAMED(0x005e7dc4, d_005e7dc4::f_005e7dc4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e8498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e8498 {

struct __attribute__((packed)) Object_005e8498_0 {
    u8 unknown_0[0xc04];  // (not used here)
    u32 word_c04;
};
GUEST_OFFSET(Object_005e8498_0, word_c04, 0xc04);  // (from the original)


void f_005e8498(gptr<Object_005e8498_0> arg0) {
    u32 r2_1 = *gptr<u32>(arg0->word_c04 + 0x14u);  // (from the original)
    // virtual function 5 of arg0.addr() + 0xc04u
    guest::call_address<u32>(r2_1, arg0.addr() + 0xc04u, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005e8498
GUEST_EXPORT(0x005e8498, d_005e8498::f_005e8498);

// f_005e8934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e8934 {

struct __attribute__((packed)) Local_005e8934_ea_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_005e8934_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005e8934_ea_7, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005e8934_ea_7, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x002bab00, u32(u32, u32, u32, u32)> call_002bab00;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x005e4bd4, u32(u32, u32, u32, u32)> call_005e4bd4;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)
inline constexpr guest::Function<0x0081d8c0, u32(u32, u32, u32, u32)> call_0081d8c0;  // (from the original)

u32 f_005e8934(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r10 = guest::cpu()->r[10];
    u32 r0_1 = call_005e4bd4(r0, 6u, r2, r3);
    u32 r9 = 0u;
    *gptr<u32>(r0_1) = 0x9092bc;  // (from the original)
    *gptr<u8>(r0_1 + 0xd8u) = u8(r9);  // (from the original)
    u32 r0_3 = call_002bab00(r0_1 + 0xdcu, 0x9092bcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = r0_3 - 0xdcu;  // (from the original)
    *gptr<u32>(r0_4 + 0xbecu) = r9;  // (from the original)
    *gptr<u32>(r0_4 + 0xbf0u) = r9;  // (from the original)
    *gptr<u32>(r0_4 + 0xbf4u) = r9;  // (from the original)
    *gptr<u32>(r0_4 + 0xbf8u) = r9;  // (from the original)
    *gptr<u32>(r0_4 + 0xbfcu) = r9;  // (from the original)
    u32 ea_6 = r0_4 + 0xc00u;  // (from the original)
    *gptr<u32>(ea_6) = r9;
    u32 r0_6 = call_0081d8c0(ea_6 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0x908f2cu;  // (from the original)
    u32 r5 = r0_6 - 0xc04u;  // (from the original)
    u32 r4 = 0u;
    *gptr<u32>(r0_6 + 0x5cu) = r9;  // (from the original)
    do {
        u32 r0_7 = call_001391d8(0xc4u, r1, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_7 != 0) {
            u32 r0_8 = call_005d6868(r0_7, 0x14u, 0u, 0u);  // (from the original)
            u32 r0_10 = call_00601a20(r0_8 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            *gptr<u32>(r0_10) = r8;
            gptr<Local_005e8934_ea_7> ea_7 = gptr<Local_005e8934_ea_7>(r0_10 + 0x60u);  // (from the original)
            ea_7->word_0 = r0_8;
            ea_7->word_4 = 0;
            ea_7->word_8 = r9;
            *gptr<u32>(r0_10 + 0x6cu) = r9;  // (from the original)
            *gptr<u32>(r0_10 + 0x70u) = r9;  // (from the original)
            *gptr<u32>(r0_10 + 0x74u) = r9;  // (from the original)
            *gptr<u32>(r0_10 + 0x78u) = r9;  // (from the original)
            r0_7 = r0_10 - 0x44u;  // (from the original)
            *gptr<u8>(r0_7 + 0xc0u) = u8(r9);  // (from the original)
        }
        r1 = r5 + (r4 << 2);
        r4 += 1u;
        *gptr<u32>(r1 + 0xbecu) = r0_7;  // (from the original)
        guest::preempt();
    } while (s32(r4) < 6);
    u32 r0_11 = call_001391d8(0xc4u, r10, r2, r3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    if (r0_11 != 0) {
        u32 r0_12 = call_005d6868(r0_11, 0x21u, 0u, 0u);  // (from the original)
        u32 r0_14 = call_00601a20(r0_12 + 0x44u, 0x21u, 0u, 0u);  // (from the original)
        r1_3 = r0_14 + 0x60u;  // (from the original)
        *gptr<u32>(r0_14) = r8;
        *gptr<u32>(r1_3) = r0_12;
        *gptr<u32>(r1_3 + 4) = 0;
        *gptr<u32>(r1_3 + 8) = r9;
        *gptr<u32>(r0_14 + 0x6cu) = r9;  // (from the original)
        *gptr<u32>(r0_14 + 0x70u) = r9;  // (from the original)
        *gptr<u32>(r0_14 + 0x74u) = r9;  // (from the original)
        *gptr<u32>(r0_14 + 0x78u) = r9;  // (from the original)
        r0_11 = r0_14 - 0x44u;  // (from the original)
        *gptr<u8>(r0_11 + 0xc0u) = u8(r9);  // (from the original)
    }
    *gptr<u32>(r5 + 0xc60u) = r0_11;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r5;
}

}  // namespace d_005e8934
GUEST_EXPORT_FRAMED(0x005e8934, d_005e8934::f_005e8934, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_005e915c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e915c {

struct __attribute__((packed)) Object_005e915c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005e915c_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005e915c_1, word_8, 0x8);  // (from the original)


void f_005e915c(gptr<script__WordCPtr> arg0, gptr<Object_005e915c_1> arg1) {
    arg0->word_0 = 0x90a910;  // (from the original)
    arg0->word_4 = arg1->word_4;
    arg0->word_8 = arg1->word_8;
    arg0->word_c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_005e915c
GUEST_EXPORT(0x005e915c, d_005e915c::f_005e915c);

// f_005e9848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9848 {

struct __attribute__((packed)) Local_005e9848_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_005e9848_r4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005e9848_r4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005e9848_r4_1, word_18, 0x18);  // (from the original)

inline guest::global<u32, 0x0095deac> global_0095deac;  // (from the original)
inline guest::global<u32, 0x0095deb0> global_0095deb0;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_005e9848(u32 r0, u32 r1) {
    if (*global_0095deac == 0) {
        u32 r0_1 = call_00131280(0x1cu, r0, 4u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        gptr<Local_005e9848_r4_1> r4_1 = gptr<Local_005e9848_r4_1>(r0_1);
        if (r0_1 == 0) {
            *global_0095deb0 = r4_1.addr();
            r4_1 = gptr<Local_005e9848_r4_1>(0u);
        } else {
            u32 r0_2 = call_001320cc(r0_1, r0, 3u);
            r1 = 0x9093f0u;  // (from the original)
            *gptr<u32>(r0_2) = r1;
            *global_0095deb0 = r0_2;
            r4_1->word_10 = 0;
            r4_1->word_14 = 0;
            r4_1->word_18 = 0;
        }
        *global_0095deac = r4_1.addr();
    }
    u32 r0_3 = *global_0095deac;
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_005e9848
GUEST_EXPORT_FRAMED(0x005e9848, d_005e9848::f_005e9848, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005e9974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9974 {

struct __attribute__((packed)) Object_005e9974_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_005e9974_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_005e9974_r4_1 {
    u8 unknown_0[0x340];  // (not used here)
    u32 word_340;
    u8 unknown_344[0x8];  // (not used here)
    u32 word_34c;
    u8 unknown_350[0x14];  // (not used here)
    u32 word_364;
};
GUEST_OFFSET(Local_005e9974_r4_1, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_005e9974_r4_1, word_34c, 0x34c);  // (from the original)
GUEST_OFFSET(Local_005e9974_r4_1, word_364, 0x364);  // (from the original)

inline constexpr guest::Function<0x0020933c, u32(u32, u32)> call_0020933c;  // (from the original)
inline constexpr guest::Function<0x006c8c5c, u32(u32)> call_006c8c5c;  // (from the original)

void f_005e9974(gptr<Object_005e9974_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_005e9974_r4_1> r4_1 = gptr<Local_005e9974_r4_1>(arg0->word_14);
    if (r4_1->word_364 == 0) {
        return;
    }
    call_006c8c5c(r4_1->word_340 + 0x14u);  // (from the original)
    frame.release();
    call_0020933c(r4_1->word_34c + 0xdcu, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_005e9974
GUEST_EXPORT(0x005e9974, d_005e9974::f_005e9974);

// f_005e9d64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9d64 {

struct __attribute__((packed)) Object_005e9d64_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005e9d64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e9d64_0, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001594c8, u32(u32, u32)> call_001594c8;  // (from the original)

void f_005e9d64(gptr<Object_005e9d64_0> arg0, u32 r1, u32 r2) {
    arg0->word_0 = 0;
    arg0->byte_4 = 0x27;  // (from the original)
    u32 r0_2 = call_001594c8(r1 + 0x32cu, r2);  // (from the original)
    arg0->word_0 = r0_2;
}

}  // namespace d_005e9d64
GUEST_EXPORT_FRAMED(0x005e9d64, d_005e9d64::f_005e9d64, 0x4010);  // pushes {r4, lr} first, as the original

// f_005e9d90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005e9d90 {

struct __attribute__((packed)) Object_005e9d90_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_005e9d90_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005e9d90_0, byte_4, 0x4);  // (from the original)


void f_005e9d90(gptr<Object_005e9d90_0> arg0) {
    arg0->word_0 = 0;
    arg0->byte_4 = 0x27;  // (from the original)
}

}  // namespace d_005e9d90
GUEST_EXPORT(0x005e9d90, d_005e9d90::f_005e9d90);

// f_005ea158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea158 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

void f_005ea158(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0_2 = call_0054a644(frame.at(8).addr(), r0, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_00544fec(r0_2, 0x894b7cu, guest::cpu()->r[2]);  // (from the original)
    *frame.at<u32>(0x48) = r1;  // (from the original)
    u32 r0_4 = call_00544a20(r0_3, frame.at(0x28).addr(), guest::cpu()->r[2]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        u32 r2_4 = *gptr<u32>(r0_3 + 4u);
        call_00544d08(frame.at(0x48).addr(), *frame.at<u8>(0x28) == 0 ? 0u : frame.at(0x28).addr(), r2_4);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
    call_00544f18(r0_3, r1_2, r2_3);
}

}  // namespace d_005ea158
GUEST_EXPORT_FRAMED(0x005ea158, d_005ea158::f_005ea158, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_005ea21c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea21c {

struct __attribute__((packed)) Object_005ea21c_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005ea21c_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ea21c_2, word_c, 0xc);  // (from the original)


u32 f_005ea21c(u32 r0, u32 r1, gptr<Object_005ea21c_2> arg2) {
    u32 r2_1 = arg2->word_4;
    u32 r3_1 = arg2->word_c >> 1;
    if (r3_1 != 1u) {
        if (r3_1 == 2u) {
            u32 r3_2 = *gptr<u32>(r0) + 4u;
            if (r3_2 > *gptr<u32>(r1)) {
                guest::cpu()->r[1] = 0u;
                return 0u;
            }
            *gptr<u32>(*gptr<u32>(r0)) = r2_1;
            *gptr<u32>(r0) = r3_2;
            guest::cpu()->r[1] = 1u;
            return 1u;
        }
        guest::cpu()->r[1] = 0u;
        return 0u;
    }
    u32 r3_3 = *gptr<u32>(r0) + 2u;
    if (r3_3 > *gptr<u32>(r1)) {
        guest::cpu()->r[1] = 0u;
        return 0u;
    }
    *gptr<u16>(*gptr<u32>(r0)) = u16(r2_1);
    *gptr<u32>(r0) = r3_3;
    guest::cpu()->r[1] = 1u;
    return 1u;
}

}  // namespace d_005ea21c
GUEST_EXPORT(0x005ea21c, d_005ea21c::f_005ea21c);

// f_005ea294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea294 {

struct __attribute__((packed)) Object_005ea294_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_005ea294_0, half_0, 0x0);  // (from the original)

inline guest::global<u32, 0x008906f4> global_008906f4;  // (from the original)

u32 f_005ea294(gptr<Object_005ea294_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r5 = 0;
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r4 = r0;
    r0 = arg0->half_0;
    u32 r2 = 0u;
    if (r0 >= 0x61u && r0 <= 0x7au) {  // (from the original)
        goto L_5ea304;
    }
    r1 = r0 - 0xff41u;  // (from the original)
    if (r1 > 0x19u) {  // (from the original)
        if (r0 != 0xf7u) {  // (from the original)
            r1 = r0 - 0xe0u;  // (from the original)
            if (r1 <= 0x1eu) {  // (from the original)
                goto L_5ea304;
            }
        }
        if (r0 - 0x3b1u <= 0x18u) {  // (from the original)
            r1 = r0 - 0x3c2u;  // (from the original)
            if (r1 != 0) {
                goto L_5ea304;
            }
            goto L_5ea310;
        }
        r1 = r0 - 0x430u;  // (from the original)
        if (r1 > 0x1fu) {  // (from the original)
            goto L_5ea310;
        }
    }
L_5ea304:;
    r0 -= 0x20u;  // (from the original)
L_5ea308:;
    r2 = uxth(r0);
    goto L_5ea398;
L_5ea310:;
    r1 = r0 - 0x100u;  // (from the original)
    if (r1 <= 0x77u) {  // (from the original)
        if ((r0 & 1u) != 0) {
            r0 -= 1u;
            guest::preempt();
            goto L_5ea308;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r1 = 0x890754u;  // (from the original)
    r5_1 = *global_008906f4;
    r3 = 1u;
    r5 = 1u + u32(s32(r5_1 - r1) >> 2);
    if (s32(r5) > 1) {
        do {
            if (*gptr<u16>(r1) == r0) {
                r2 = *gptr<u16>(r1 + 2u);
                goto L_5ea398;
            }
            if (*gptr<u16>(r1 + 2u) == r0) {
                goto L_5ea398;
            }
            r3 += 1u;
            r1 += 4u;
            guest::preempt();
        } while (s32(r5) > s32(r3));
    }
    r1 = r0 - 0x179u;  // (from the original)
    zf_1 = r1 == 5u;
    if (r1 < 5u || zf_1) {
        zf_1 = (r0 & 1u) == 0;
    }
    if (zf_1) {
        r2 = uxth(r0 - 1u);
    }
L_5ea398:;
    if (r2 != 0) {
        *gptr<u16>(r4) = u16(r2);
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_005ea294
GUEST_EXPORT_FRAMED(0x005ea294, d_005ea294::f_005ea294, 0x30);  // pushes {r4, r5} first, as the original

// f_005ea540: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ea540 {

struct __attribute__((packed)) Local_005ea540_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005ea540_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005ea540_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095defc> global_0095defc;  // (from the original)
inline guest::global<u32, 0x00ad5748> global_00ad5748;  // (from the original)
inline guest::global<u8, 0x00ad5754> global_00ad5754;  // (from the original)
inline guest::global<u32, 0x00ad5758> global_00ad5758;  // (from the original)
inline guest::global<u32, 0x00ad575c> global_00ad575c;  // (from the original)
inline guest::global<u16, 0x00ad5760> global_00ad5760;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> call_002fe7dc;  // (from the original)

u32 f_005ea540(u32 r0_unused, u32 r1) {
    if ((*global_0095defc & 1u) != 0) {
        return 0xad5748u;  // (from the original)
    }
    u32 r0_1 = call_002fe7dc(0x95defcu, r1);  // (from the original)
    if (r0_1 == 0) {
        return 0xad5748u;  // (from the original)
    }
    gptr<Local_005ea540_ea_1> ea_1 = gptr<Local_005ea540_ea_1>(0xad574cu);  // (from the original)
    ea_1->word_0 = 0xad5760;  // (from the original)
    ea_1->word_4 = 1;
    u32 r2_1 = ~0u;
    *global_00ad5748 = 0x909cb0;  // (from the original)
    *global_00ad5754 = 4;
    *global_00ad5758 = r2_1;
    *global_00ad575c = r2_1;
    *global_00ad5760 = 0;
    guest::cpu()->r[1] = 0x81d0c0u;  // (from the original)
    return 0xad5748u;  // (from the original)
}

}  // namespace d_005ea540
GUEST_EXPORT_FRAMED(0x005ea540, d_005ea540::f_005ea540, 0x4010);  // pushes {r4, lr} first, as the original

// f_005ec990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ec990 {

struct __attribute__((packed)) Object_005ec990_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005ec990_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005ec990_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_005ec990_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005ec990_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ec990_1, half_2, 0x2);  // (from the original)


void f_005ec990(gptr<Object_005ec990_0> arg0, gptr<Object_005ec990_1> arg1) {
    arg0->word_0 = arg1.addr();
    arg0->word_4 = 0;
    u32 r12_1 = 2u;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r2_1 = arg1->half_0;
    u32 r3_1 = r2_1;
    if (r2_1 >= 0xd800u && r2_1 - 0xe000u >= 0x2000u) {  // (from the original)
        r12_1 = 4u;
        r2_1 = u32(arg1->half_2) | r2_1 << 0x10;  // (from the original)
        u32 r1_1 = r2_1 >> 6;
        r3_1 = r2_1 & 0x3ffu | r1_1 & 0xfc00u | r1_1 + 0x10000u & 0xf0000u;  // (from the original)
    }
    arg0->word_4 = r2_1;
    arg0->word_8 = r3_1;
    arg0->word_c = r12_1;
}

}  // namespace d_005ec990
GUEST_EXPORT_FRAMED(0x005ec990, d_005ec990::f_005ec990, 0x10);  // pushes {r4} first, as the original
