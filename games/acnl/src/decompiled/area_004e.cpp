// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_004e0288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0288 {

inline constexpr guest::Function<0x001531b8, u32(u32, u32, u32, u32)> call_001531b8;

u32 f_004e0288(u32 r0) {
    u32 r0_1 = call_001531b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_004e0288
GUEST_EXPORT_FRAMED(0x004e0288, d_004e0288::f_004e0288, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e029c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e029c {

struct __attribute__((packed)) Local_004e029c_r3_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Local_004e029c_r3_1, word_10, 0x10);
GUEST_OFFSET(Local_004e029c_r3_1, word_14, 0x14);
GUEST_OFFSET(Local_004e029c_r3_1, byte_18, 0x18);

inline constexpr guest::Function<0x004dfb58, u32(u32, u32, u32, u32)> call_004dfb58;

struct __attribute__((packed)) Frame_004e029c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e029c, word_0, 0x0);
GUEST_OFFSET(Frame_004e029c, word_4, 0x4);
GUEST_OFFSET(Frame_004e029c, word_8, 0x8);
GUEST_OFFSET(Frame_004e029c, float_c, 0xc);
GUEST_SIZE(Frame_004e029c, 0x14);

u32 f_004e029c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e029c> frame;  // the original's stack frame
    u32 r12_3 = 0;
    u32 r0_5 = 0;
    u32 r0_8 = 0;
    float S0_1 = r3 == 0 ? 1.0f : 0.0f;
    frame->float_c = S0_1;
    guest::cpu()->s[0] = S0_1;
    call_004dfb58(frame.at(0).addr(), r0, r1, r3);
    u32 r0_2 = frame->word_0;
    u32 r1_1 = frame->word_4;
    u32 r2_1 = frame->word_8;
    gptr<Local_004e029c_r3_1> r3_1 = gptr<Local_004e029c_r3_1>((r2 * 3u + (r2 << 3) << 2) + 0x9aae90u + 4u);  // (from the original)
    u32 r12_1 = r0_2 & ~0x80000000u;  // (from the original)
    if (r12_1 != 0) {
        u32 r12_2 = (r0_2 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        r12_3 = s32(r12_2) < 0 ? r0_2 >> 0x1f << 0xf : uxth((r0_2 & ~0x1f800000u) >> 0xd | r12_2 << 0xa | r0_2 >> 0x1f << 0xf);  // (from the original)
    } else {
        r12_3 = uxth((r0_2 & ~0x1f800000u) >> 0xd | r12_1 << 0xa | r0_2 >> 0x1f << 0xf);  // (from the original)
    }
    u32 r0_3 = r1_1 & ~0x80000000u;  // (from the original)
    if (r0_3 != 0) {
        u32 r0_4 = (r1_1 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        if (s32(r0_4) < 0) {
            r0_5 = r1_1 >> 0x1f << 0xf;  // (from the original)
        } else {
            u32 r5_1 = r1_1 & ~0x1f800000u;  // (from the original)
            r1_1 >>= 0x1f;  // (from the original)
            r0_5 = uxth(r5_1 >> 0xd | r0_4 << 0xa | r1_1 << 0xf);  // (from the original)
        }
    } else {
        u32 r5_2 = r1_1 & ~0x1f800000u;  // (from the original)
        r1_1 >>= 0x1f;  // (from the original)
        r0_5 = uxth(r5_2 >> 0xd | r0_3 << 0xa | r1_1 << 0xf);  // (from the original)
    }
    r3_1->word_10 = r12_3 | r0_5 << 0x10;  // (from the original)
    u32 r0_6 = r2_1 & ~0x80000000u;  // (from the original)
    if (r0_6 != 0) {
        u32 r0_7 = (r2_1 >> 0x17u & 0xffu) - 0x70u;  // (from the original)
        if (s32(r0_7) < 0) {
            r0_8 = r2_1 >> 0x1f << 0xf;  // (from the original)
        } else {
            r1_1 = (r2_1 & ~0x1f800000u) >> 0xd;  // (from the original)
            r0_8 = uxth(r1_1 | r0_7 << 0xa | r2_1 >> 0x1f << 0xf);  // (from the original)
        }
    } else {
        r1_1 = (r2_1 & ~0x1f800000u) >> 0xd;  // (from the original)
        r0_8 = uxth(r1_1 | r0_6 << 0xa | r2_1 >> 0x1f << 0xf);  // (from the original)
    }
    r3_1->word_14 = r0_8;
    r3_1->byte_18 = u8(r3);
    guest::cpu()->r[1] = r1_1;
    return r0_8;
}

}  // namespace d_004e029c
GUEST_EXPORT_FRAMED(0x004e029c, d_004e029c::f_004e029c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e0960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0960 {

struct __attribute__((packed)) Object_004e0960_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    float float_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(Object_004e0960_0, word_c, 0xc);
GUEST_OFFSET(Object_004e0960_0, float_10, 0x10);
GUEST_OFFSET(Object_004e0960_0, word_14, 0x14);
GUEST_OFFSET(Object_004e0960_0, word_18, 0x18);
GUEST_OFFSET(Object_004e0960_0, half_1c, 0x1c);
GUEST_OFFSET(Object_004e0960_0, half_1e, 0x1e);
GUEST_OFFSET(Object_004e0960_0, half_20, 0x20);


void f_004e0960(gptr<Object_004e0960_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    float S0_1 = std::bit_cast<float>(*gptr<u32>(guest::cpu()->r[13] + 0xcu));  // (from the original)
    arg0->word_c = r1;
    arg0->word_14 = 5;
    arg0->half_20 = 0;
    arg0->word_18 = r2;
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r12_1);
    arg0->float_10 = S0_1;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004e0960
GUEST_EXPORT_FRAMED(0x004e0960, d_004e0960::f_004e0960, 0x30);  // pushes {r4, r5} first, as the original

// f_004e0998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0998 {

struct __attribute__((packed)) Object_004e0998_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
};
GUEST_OFFSET(Object_004e0998_0, word_c, 0xc);
GUEST_OFFSET(Object_004e0998_0, word_10, 0x10);
GUEST_OFFSET(Object_004e0998_0, word_14, 0x14);
GUEST_OFFSET(Object_004e0998_0, word_18, 0x18);
GUEST_OFFSET(Object_004e0998_0, half_1c, 0x1c);
GUEST_OFFSET(Object_004e0998_0, half_1e, 0x1e);
GUEST_OFFSET(Object_004e0998_0, half_20, 0x20);

struct __attribute__((packed)) Local_004e0998_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e0998_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e0998_ea_1, word_4, 0x4);


void f_004e0998(gptr<Object_004e0998_0> arg0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_004e0998_ea_1> ea_1 = gptr<Local_004e0998_ea_1>(guest::cpu()->r[13] + 8u);
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    arg0->word_c = r1;
    arg0->word_10 = 0;
    arg0->word_18 = r2;
    arg0->word_14 = 0;
    arg0->half_1c = u16(r3);
    arg0->half_1e = u16(r4_1);
    arg0->half_20 = u16(r5_1);
}

}  // namespace d_004e0998
GUEST_EXPORT_FRAMED(0x004e0998, d_004e0998::f_004e0998, 0x30);  // pushes {r4, r5} first, as the original

// f_004e09c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e09c8 {

inline constexpr guest::Function<0x00138920, u32(u32, u32)> call_00138920;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;

void f_004e09c8(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_00138920(0x9aae5cu, r0);  // (from the original)
    if (r0_1 != 0) {
        return;
    }
    frame.release();
    call_0013f134(0x9aae5cu, r0);
    return;  // (from the original)
}

}  // namespace d_004e09c8
GUEST_EXPORT(0x004e09c8, d_004e09c8::f_004e09c8);

// f_004e0a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0a48 {

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> call_004ee364;

void f_004e0a48() {
    call_004ee364(0x951530u, 0u);
    return;  // (from the original)
}

}  // namespace d_004e0a48
GUEST_EXPORT(0x004e0a48, d_004e0a48::f_004e0a48);

// f_004e0cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e0cbc {

inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;

u32 f_004e0cbc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_007457e8(0x9c7ad4u, r0, r1, r2);  // (from the original)
    return !(r0_1 + 1u == 0);
}

}  // namespace d_004e0cbc
GUEST_EXPORT_FRAMED(0x004e0cbc, d_004e0cbc::f_004e0cbc, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e10ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e10ac {


void f_004e10ac() {
    float S1_1 = 2.0f;
    float S0_1 = 32.0f * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_004e10ac
GUEST_EXPORT(0x004e10ac, d_004e10ac::f_004e10ac);

// f_004e1204: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1204 {

inline guest::global<u8, 0x009529d5> global_009529d5;
inline guest::global<u8, 0x009529d6> global_009529d6;
inline guest::global<u8, 0x009529d7> global_009529d7;
inline constexpr guest::Function<0x004e1668, u32(u32, u32, u32, u32)> call_004e1668;

u32 f_004e1204(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    u32 r4 = 0u;
    *global_009529d5 = u8(r4);
    *global_009529d6 = u8(r4);
    *global_009529d7 = u8(r4);
    call_004e1668(0x9c8fd4u, r1, r2, r3);  // (from the original)
    u32 r14 = 0x9c7ad4u;  // (from the original)
    u32 r0 = 0u;
    r2 = ~0u;
    do {
        r1 = 0u;
        r3 = 0x50u;  // (from the original)
        u32 r12 = r14 + r0 * 0x50u;  // (from the original)
        u32 r5 = r14 + (r0 << 4);
        do {
            *gptr<u8>(r12 + r1) = u8(r2);
            if (r1 < 0x10u && r0 < 0x10u) {  // (from the original)
                *gptr<u8>(r5 + r1 + 0x1400u) = u8(r2);  // (from the original)
            }
            res_1 = r3 - 1u;
            r3 = res_1;
            r1 += 1u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x40u);  // (from the original)
    r2 = 0x9c7a14u;  // (from the original)
    r1 = 0u;
    r0 = r1;
    do {
        r0 += 2u;
        *gptr<u32>(r2 + (r1 << 2)) = r4;
        u32 r1_1 = r1 + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = r4;
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e1204
GUEST_EXPORT_FRAMED(0x004e1204, d_004e1204::f_004e1204, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e12b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e12b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;

u32 f_004e12b4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_2 = 0;
    u32 r0_1 = call_004e1768(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r4 = *gptr<u32>(r0_1);
        zf_1 = r4 + 1u == 0;
    }
    if (zf_1) {
        r0_2 = 0u;
    } else {
        u32 r0_3 = call_002f74c8(r0_1);
        u32 r0_4 = call_005b42fc(r0_3);
        u32 cf_1 = r0_4 >= 0x30u;  // (from the original)
        if (!cf_1 || r0_4 == 0x30u) {  // (from the original)
            cf_1 = r4 >= r0_4;
        }
        r0_2 = cf_1 ? 0u : *gptr<u32>((r4 << 2) + 0x9c7a14u);  // (from the original)
    }
    return r0_2;
}

}  // namespace d_004e12b4
GUEST_EXPORT_FRAMED(0x004e12b4, d_004e12b4::f_004e12b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e13d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e13d0 {

struct __attribute__((packed)) Local_004e13d0_r0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_004e13d0_r0_2, byte_4, 0x4);

inline constexpr guest::Function<0x004e12b4, u32(u32, u32)> call_004e12b4;
inline constexpr guest::Function<0x004e1768, u32(u32, u32)> call_004e1768;
inline constexpr guest::Function<0x00573aac, u32(u32)> call_00573aac;
inline constexpr guest::Function<0x00750eb4, u32(u32)> call_00750eb4;
inline constexpr guest::Function<0x00751990, u32(u32)> call_00751990;
inline constexpr guest::Function<0x007519d8, u32(u32)> call_007519d8;

u32 f_004e13d0(u32 r0) {
    u32 r0_1 = call_004e12b4(r0, 0u);
    gptr<Local_004e13d0_r0_2> r0_2 = gptr<Local_004e13d0_r0_2>(call_004e1768(r0, 0u));
    u32 r0_3 = call_004e12b4(r0, 1u);
    u32 r0_4 = call_004e1768(r0, 1u);
    if (r0_1 != 0 && r0_2.addr() != 0) {
        u32 r0_5 = call_007519d8(r0_1);
        if (r0_5 == 0) {
            u32 r0_6 = call_00751990(r0_1);
            if (r0_6 == 0) {
                goto L_4e146c;
            }
        }
        u32 r0_7 = call_00750eb4(r0_1);
        if (r0_7 == 0 || r0_2->byte_4 == 0) {
            u32 r0_8 = call_00573aac(r0_1);
            if (r0_8 != 0) {
                return r0_1;
            }
        }
    }
L_4e146c:;
    if (r0_3 != 0 && r0_4 != 0) {
        u32 r0_9 = call_00750eb4(r0_3);
        if (r0_9 == 0 || *gptr<u8>(r0_4 + 4u) == 0) {
            u32 r0_10 = call_00573aac(r0_3);
            if (r0_10 != 0) {
                return r0_3;
            }
        }
    }
    if (r0_1 == 0 || r0_2.addr() == 0) {
        return 0u;
    }
    u32 r0_12 = call_00750eb4(r0_1);
    if (r0_12 != 0 && r0_2->byte_4 != 0) {
        return 0u;
    }
    u32 r0_13 = call_00573aac(r0_1);
    return r0_13 == 0 ? 0u : r0_1;
}

}  // namespace d_004e13d0
GUEST_EXPORT_FRAMED(0x004e13d0, d_004e13d0::f_004e13d0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e14ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e14ec {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e1768, u32(u32, u32, u32, u32)> call_004e1768;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x00751870, u32(u32, u32)> call_00751870;

u32 f_004e14ec(u32 r0) {
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 cf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r4 = 1u;
    u32 r7 = r0;
    do {
        u32 r0_1 = call_004e1768(r7, r4 & 0xffu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_4e1560;
        }
        r5_1 = *gptr<u32>(r0_1);
        if (s32(r5_1) < 0) {
            goto L_4e1560;
        }
        r0_2 = call_002f74c8(r0_1, r1);
        r0_3 = call_005b42fc(r0_2);
        r1 = guest::cpu()->r[1];
        cf_1 = r0_3 >= 0x30u;  // (from the original)
        if (!cf_1 || r0_3 == 0x30u) {  // (from the original)
            cf_1 = r5_1 >= r0_3;
        }
        if (cf_1) {
            goto L_4e1560;
        }
        r0_4 = *gptr<u32>((r5_1 << 2) + 0x9c7a14u);  // (from the original)
        if (r0_4 == 0) {
            goto L_4e1560;
        }
        r0_5 = call_00751870(r0_4, r1);
        r1 = guest::cpu()->r[1];
        if (r0_5 == 0x2du) {  // (from the original)
            return 1u;
        }
        return 0u;
L_4e1560:;
        r4 -= 1u;
        if (r4 >> 0x1f) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_004e14ec
GUEST_EXPORT_FRAMED(0x004e14ec, d_004e14ec::f_004e14ec, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e1668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1668 {


void f_004e1668(u32 r0, float S0) {
    u32 r1 = r0 + 0x80u;  // (from the original)
    if (r0 >= r1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r12 = 0u;
    S0 = 0.0f;
    u32 r3 = ~0u;
    u32 r2 = 4u;
    do {
        *gptr<u32>(r0) = r3;
        *gptr<u8>(r0 + 4u) = u8(r2);
        *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0);
        *gptr<u32>(r0 + 0xcu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x10u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x14u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x18u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x1cu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x20u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x24u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x28u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x30u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u32>(r0 + 0x34u) = std::bit_cast<u32>(S0);  // (from the original)
        *gptr<u16>(r0 + 0x38u) = u16(r12);  // (from the original)
        *gptr<u32>(r0 + 0x3cu) = std::bit_cast<u32>(S0);  // (from the original)
        r0 += 0x40u;  // (from the original)
        guest::preempt();
    } while (r0 < r1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_004e1668
GUEST_EXPORT(0x004e1668, d_004e1668::f_004e1668);

// f_004e1a7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a7c {

inline guest::global<u8, 0x009529d4> global_009529d4;

u32 f_004e1a7c() {
    return *global_009529d4;
}

}  // namespace d_004e1a7c
GUEST_EXPORT(0x004e1a7c, d_004e1a7c::f_004e1a7c);

// f_004e1a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1a90 {

inline guest::global<u8, 0x009529d4> global_009529d4;

u32 f_004e1a90() {
    return *global_009529d4;
}

}  // namespace d_004e1a90
GUEST_EXPORT(0x004e1a90, d_004e1a90::f_004e1a90);

// f_004e1aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1aa4 {

inline constexpr guest::Function<0x004e1174, u32(u32, u32, u32, u32)> call_004e1174;

u32 f_004e1aa4() {
    u32 r0_1 = call_004e1174(0x572258u, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_004e1aa4
GUEST_EXPORT_FRAMED(0x004e1aa4, d_004e1aa4::f_004e1aa4, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e1ac4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e1ac4 {

inline guest::global<u32, 0x00975338> global_00975338;
inline guest::global<u32, 0x009c79c8> global_009c79c8;
inline constexpr guest::Function<0x00125b38, u32(u32, u32, u32, u32)> call_00125b38;
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;

void f_004e1ac4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (*global_009c79c8 != 0) {
        return;
    }
    u32 r0_2 = call_003045a8(*global_00975338, r1, r2, r3);
    frame.release();
    call_00125b38(0x9c79c4u, 0x4e1b04u, r0_2, 0u);
    return;  // (from the original)
}

}  // namespace d_004e1ac4
GUEST_EXPORT(0x004e1ac4, d_004e1ac4::f_004e1ac4);

// f_004e240c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e240c {

struct __attribute__((packed)) Local_004e240c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e240c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e240c_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;
inline constexpr guest::Function<0x006904b4, u32(u32)> call_006904b4;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;

struct __attribute__((packed)) Frame_004e240c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e240c, word_0, 0x0);
GUEST_OFFSET(Frame_004e240c, word_4, 0x4);
GUEST_OFFSET(Frame_004e240c, word_8, 0x8);
GUEST_SIZE(Frame_004e240c, 0x18);

u32 f_004e240c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e240c> frame;  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5_1 = *frame.at<u32>(0x38);  // (from the original)
    gptr<Local_004e240c_ea_2> ea_2 = gptr<Local_004e240c_ea_2>(frame.at(0x3c).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r0_1 = call_007457e8(0x9c7ad4u, r1, r2, r5_1);  // (from the original)
    if (r0_1 + 1u != 0) {
        r0_2 = 0u;
    } else {
        u32 zf_1 = r4_1 == 0;
        u32 r4_2 = 0u;
        if (!zf_1) {
            r4_2 = 1u;
        }
        u32 zf_2 = r6_1 == 0;
        if (zf_2) {
            zf_2 = r4_2 == 0;
        } else {
            r4_2 = 4u;
        }
        if (zf_2) {
            u32 r0_3 = call_002f74c8(r0_1);
            frame->word_0 = r0_3;
            call_00319aa4(r1, r2, r5_1, 1u);
        }
        call_002fc20c(frame.at(0xc).addr());  // (from the original)
        frame->word_8 = r4_2;
        frame->word_4 = r5_1;
        frame->word_0 = r3;
        call_00691544(frame.at(0xc).addr(), r0, r1, r2);  // (from the original)
        call_006904b4(frame.at(0xc).addr());  // (from the original)
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_004e240c
GUEST_EXPORT_FRAMED(0x004e240c, d_004e240c::f_004e240c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e24d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e24d0 {

inline guest::global<u8, 0x009529d4> global_009529d4;

u32 f_004e24d0() {
    return *global_009529d4;
}

}  // namespace d_004e24d0
GUEST_EXPORT(0x004e24d0, d_004e24d0::f_004e24d0);

// f_004e2504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2504 {

struct __attribute__((packed)) Local_004e2504_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e2504_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_004e2504_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x00303c98, u32(u32)> call_00303c98;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;

struct __attribute__((packed)) Frame_004e2504 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_004e2504, word_0, 0x0);
GUEST_OFFSET(Frame_004e2504, word_8, 0x8);
GUEST_SIZE(Frame_004e2504, 0xc);

u32 f_004e2504(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e2504> frame;  // the original's stack frame
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    frame->word_8 = r0_1;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r10 = 0x865628u;  // (from the original)
    u32 r4 = 0u;
    u32 r11 = r4;
L_4e2530:;
    gptr<Local_004e2504_r0_2> r0_2 = gptr<Local_004e2504_r0_2>(r10 + (r4 << 3));
    u32 r8_1 = r0_2->word_0 + r5;
    u32 r9_1 = r0_2->word_4 + r6;
    u32 r0_4 = call_002feb00(frame->word_8, r8_1, r9_1, 0u);
    if (r0_4 == 0) {
        goto L_4e25e8;
    }
    r0_5 = call_002fcaf4(r0_4);
    if (r0_5 != 0) {
        goto L_4e25e8;
    }
    r0_6 = frame.at(4).addr();
    call_002fc934(r0_6, r0_4);
    r0_7 = frame.at(4).addr();
    r0_8 = call_002fe574(r0_7, 0x95bfe0u);  // (from the original)
    if (r0_8 != 0) {
        u32 r3_5 = frame->word_8;
        frame->word_0 = r11;
        u32 r0_9 = call_004e0cec(r8_1, r9_1, 0u, r3_5);
        call_002fc8e8(frame.at(4).addr(), r0_9);
    }
    r0_11 = frame.at(4).addr();
    r0_12 = call_00303c98(r0_11);
    if (r0_12 == 0) {
        goto L_4e25e0;
    }
    return 1u;
L_4e25e0:;
L_4e25e8:;
    r4 += 1u;
    if (r4 >= 4u) {
        return 0u;
    }
    guest::preempt();
    goto L_4e2530;
}

}  // namespace d_004e2504
GUEST_EXPORT_FRAMED(0x004e2504, d_004e2504::f_004e2504, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_004e263c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e263c {

struct __attribute__((packed)) Local_004e263c_r12_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_004e263c_r12_1, byte_8, 0x8);

struct __attribute__((packed)) Local_004e263c_r1_1 {
    u16 half_0;
    u8 unknown_2[0xa];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_004e263c_r1_1, half_0, 0x0);
GUEST_OFFSET(Local_004e263c_r1_1, half_c, 0xc);


void f_004e263c(u32 r0) {
    gptr<Local_004e263c_r1_1> r1_1 = gptr<Local_004e263c_r1_1>(0u);
    u32 r2 = 0u;
    u32 r4 = r2;
    u32 r5 = 0xa5u;  // (from the original)
    do {
        gptr<Local_004e263c_r12_1> r12_1 = gptr<Local_004e263c_r12_1>(r0 + r2);
        r1_1 = gptr<Local_004e263c_r1_1>(u32(r12_1->byte_8));
        if (r1_1.addr() < 0xa5u) {  // (from the original)
            r1_1 = gptr<Local_004e263c_r1_1>(r0 + (r2 << 1));
            u32 r3_1 = r1_1->half_0;
            if (r3_1 != 0) {
                if (r3_1 >= 1u) {
                    r1_1->half_0 = u16(r3_1 - 1u);
                } else {
                    r1_1->half_0 = u16(r4);
                }
            }
            if (r1_1->half_0 == 0) {
                r12_1->byte_8 = u8(r5);
                r1_1->half_c = u16(r4);
            }
        }
        r2 += 1u;
        guest::preempt();
    } while (r2 < 4u);
    guest::cpu()->r[1] = r1_1.addr();
}

}  // namespace d_004e263c
GUEST_EXPORT_FRAMED(0x004e263c, d_004e263c::f_004e263c, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_004e26a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26a0 {

struct __attribute__((packed)) Object_004e26a0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Object_004e26a0_0, word_0, 0x0);
GUEST_OFFSET(Object_004e26a0_0, word_4, 0x4);
GUEST_OFFSET(Object_004e26a0_0, word_8, 0x8);
GUEST_OFFSET(Object_004e26a0_0, byte_c, 0xc);
GUEST_OFFSET(Object_004e26a0_0, byte_d, 0xd);


void f_004e26a0(gptr<Object_004e26a0_0> arg0) {
    arg0->word_8 = 0;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_d = 0;
    arg0->byte_c = 0;
}

}  // namespace d_004e26a0
GUEST_EXPORT(0x004e26a0, d_004e26a0::f_004e26a0);

// f_004e26bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e26bc {

struct __attribute__((packed)) Local_004e26bc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e26bc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e26bc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64_ = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x004ee55c, u32(u32, u32, u32, u32)> call_004ee55c;
inline constexpr guest::Function<0x00536060, u32(u32)> call_00536060;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> call_00544a20;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> call_00544d8c;
inline constexpr guest::Function<0x00544f18, u32(u32)> call_00544f18;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> call_00544fec;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> call_0054a644;
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> call_00768b6c;
inline constexpr guest::Function<0x0076bf68, u32(u32)> call_0076bf68;
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> call_0076c648;

struct __attribute__((packed)) Frame_004e26bc {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x3f];  // (not read or written by name)
    u32 word_4c;
    u8 byte_50;
    u8 unknown_51[0x43];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e26bc, word_0, 0x0);
GUEST_OFFSET(Frame_004e26bc, word_4, 0x4);
GUEST_OFFSET(Frame_004e26bc, byte_c, 0xc);
GUEST_OFFSET(Frame_004e26bc, word_4c, 0x4c);
GUEST_OFFSET(Frame_004e26bc, byte_50, 0x50);
GUEST_SIZE(Frame_004e26bc, 0x94);

u32 f_004e26bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e26bc> frame;  // the original's stack frame
    u32 r0_8 = 0;
    u32 r0_1 = call_0076c648(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_00536060(r1);
        if (r0_2 != 0) {
            u32 r0_3 = call_00536060(r1);
            gptr<Local_004e26bc_ea_1> ea_1 = gptr<Local_004e26bc_ea_1>(frame.at(4).addr());
            ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
            ea_1->word_4 = 0x40;  // (from the original)
            u32 r3_3 = *global_008c9f1c;
            u32 r1_2 = frame->word_4 - 1u;
            *gptr<u8>(r1_2 + 0x40u) = u8(r3_3);  // (from the original)
            frame->byte_c = u8(u32(*global_008c9f1c));
            frame->word_0 = vtable_sead__FixedSafeString_64_;
            u32 r0_4 = call_00768b6c(r1, r1_2, 0x40u, r3_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = frame.at(0x70).addr();  // (from the original)
                call_0054a644(r0_5, frame.at(0).addr());
                call_00544fec(r0_5, 0x4e27f4u);  // (from the original)
                call_00544fec(r0_5, r0_3);
                u32 r0_6 = call_0076bf68(r1);
                frame->word_4c = r0_6;
                u32 r0_7 = call_00544a20(r0_5, frame.at(0x50).addr());  // (from the original)
                if (r0_7 != 0) {
                    u32 r2_9 = *gptr<u32>(r0_5 + 4u);
                    call_00544d8c(frame.at(0x4c).addr(), frame->byte_50 == 0 ? 0u : frame.at(0x50).addr(), r2_9);  // (from the original)
                }
                call_00544f18(r0_5);
                r0_8 = call_004ee55c(r0, frame.at(0).addr(), r2, 0x80u);  // (from the original)
                if (!(r0_8 == 0)) {
                    r0_8 = 1u;
                }
            } else {
                r0_8 = 1u;
            }
            return r0_8;
        }
    }
    return 0u;
}

}  // namespace d_004e26bc
GUEST_EXPORT_FRAMED(0x004e26bc, d_004e26bc::f_004e26bc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e2cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e2cfc {

struct __attribute__((packed)) Local_004e2cfc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e2cfc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e2cfc_ea_1, word_4, 0x4);

inline constexpr u32 vtable_sead__FixedSafeString_64_ = 0x00904950u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;
inline constexpr guest::Function<0x00536060, u32(u32)> call_00536060;
inline constexpr guest::Function<0x00544a20, u32(u32, u32)> call_00544a20;
inline constexpr guest::Function<0x00544d8c, u32(u32, u32, u32)> call_00544d8c;
inline constexpr guest::Function<0x00544f18, u32(u32)> call_00544f18;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> call_00544fec;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> call_0054a644;
inline constexpr guest::Function<0x00768b6c, u32(u32, u32, u32, u32)> call_00768b6c;
inline constexpr guest::Function<0x0076bf68, u32(u32)> call_0076bf68;
inline constexpr guest::Function<0x0076c648, u32(u32, u32, u32, u32)> call_0076c648;

struct __attribute__((packed)) Frame_004e2cfc {
    u8 unknown_0[0x8];  // (not read or written by name)
    u8 byte_8;
    u8 unknown_9[0x1f];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x4];  // (not read or written by name)
    u32 word_30;
    u8 byte_34;
    u8 unknown_35[0x3f];  // (not read or written by name)
    u32 word_74;
    u8 unknown_78[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e2cfc, byte_8, 0x8);
GUEST_OFFSET(Frame_004e2cfc, word_28, 0x28);
GUEST_OFFSET(Frame_004e2cfc, word_30, 0x30);
GUEST_OFFSET(Frame_004e2cfc, byte_34, 0x34);
GUEST_OFFSET(Frame_004e2cfc, word_74, 0x74);
GUEST_SIZE(Frame_004e2cfc, 0x98);

u32 f_004e2cfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e2cfc> frame;  // the original's stack frame
    u32 r0_1 = call_0076c648(r1, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_00536060(r1);
        if (r0_2 != 0) {
            u32 r0_3 = call_00536060(r1);
            gptr<Local_004e2cfc_ea_1> ea_1 = gptr<Local_004e2cfc_ea_1>(frame.at(0x2c).addr());  // (from the original)
            ea_1->word_0 = frame.at(0x34).addr();  // (from the original)
            ea_1->word_4 = 0x40;  // (from the original)
            u32 r2_3 = frame->word_30;
            u32 r4_1 = 1u;
            u32 r3_3 = *global_008c9f1c;
            *gptr<u8>(r2_3 + frame.at(0x33).addr()) = u8(r3_3);  // (from the original)
            frame->byte_34 = u8(u32(*global_008c9f1c));
            frame->word_28 = vtable_sead__FixedSafeString_64_;
            u32 r0_4 = call_00768b6c(r1, 0x8c9f1cu, r2_3, r3_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = frame.at(0x78).addr();  // (from the original)
                call_0054a644(r0_5, frame.at(0x28).addr());  // (from the original)
                call_00544fec(r0_5, 0x4e2e2cu);  // (from the original)
                call_00544fec(r0_5, r0_3);
                u32 r0_6 = call_0076bf68(r1);
                frame->word_74 = r0_6;
                u32 r0_7 = call_00544a20(r0_5, frame.at(8).addr());
                if (r0_7 != 0) {
                    call_00544d8c(frame.at(0x74).addr(), frame->byte_8 == 0 ? 0u : frame.at(8).addr(), *gptr<u32>(r0_5 + 4u));  // (from the original)
                }
                call_00544f18(r0_5);
                u32 r0_8 = call_00317a50(r0, frame.at(0x28).addr(), r2, 0x80u);  // (from the original)
                r4_1 = r0_8;
            }
            return r4_1;
        }
    }
    return 1u;
}

}  // namespace d_004e2cfc
GUEST_EXPORT_FRAMED(0x004e2cfc, d_004e2cfc::f_004e2cfc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e3354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3354 {

struct __attribute__((packed)) Local_004e3354_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e3354_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_004e3354_r6_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e8ed4, u32(u32, u32, u32, u32)> call_004e8ed4;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x00746f24, u32(u32, u32, u32, u32)> call_00746f24;
inline constexpr guest::Function<0x00750090, u32(u32, u32, u32, u32)> call_00750090;
inline constexpr guest::Function<0x00751990, u32(u32, u32, u32, u32)> call_00751990;

struct __attribute__((packed)) Frame_004e3354 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e3354, word_0, 0x0);
GUEST_SIZE(Frame_004e3354, 0x10);

u32 f_004e3354(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e3354> frame;  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    r0 = call_005b42fc(r0_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r6 = r0;
    u32 r4 = 0u;
    if (r0 >= 0u && r0 != 0) {
        do {
            u32 r0_2 = call_002f74c8(r0, r1, r2, r3);
            r0 = call_005b42fc(r0_2);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            u32 cf_1 = r0 >= 0x30u;  // (from the original)
            if (!cf_1 || r0 == 0x30u) {  // (from the original)
                cf_1 = r4 >= r0;
            }
            if (!cf_1) {
                u32 r5_1 = *gptr<u32>((r4 << 2) + 0x9c7a14u);  // (from the original)
                if (r5_1 != 0) {
                    r0 = call_00751990(r5_1, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0 != 0) {
                        r0 = call_00750090(r5_1, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0 != 0) {
                            u32 r0_3 = call_00746f24(0xa22020u, r1, r2, r3);  // (from the original)
                            gptr<Local_004e3354_r6_1> r6_1 = gptr<Local_004e3354_r6_1>(frame.at(4).addr());
                            frame->word_0 = 0x95bfdc;  // (from the original)
                            r6_1->word_0 = 0x95bfdc;  // (from the original)
                            r6_1->word_4 = 1;
                            u32 r0_4 = call_004e8ed4(r5_1, 0u, r0_3, guest::cpu()->r[1]);
                            return r0_4;
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < r6);
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004e3354
GUEST_EXPORT_FRAMED(0x004e3354, d_004e3354::f_004e3354, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e35f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e35f0 {

inline guest::global<u8, 0x009529d4> global_009529d4;

u32 f_004e35f0() {
    return *global_009529d4;
}

}  // namespace d_004e35f0
GUEST_EXPORT(0x004e35f0, d_004e35f0::f_004e35f0);

// f_004e3604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3604 {

inline guest::global<u8, 0x009529d4> global_009529d4;
inline guest::global<u8, 0x009c79d4> global_009c79d4;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

u32 f_004e3604(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *global_009529d4 = 0;
    u32 r0_1 = call_00300904(0x9529d4u, r1, r2, r3);  // (from the original)
    if (r0_1 != 0) {
        u32 r0_2 = call_0030b6c4(r0_1);
        if (r0_2 == 0) {
            frame.release();
            return call_006249b0(0x5bu, 0u, 0u, 0u);  // (from the original)
        }
    }
    *global_009c79d4 = 0;
    return 0x9c79d4u;  // (from the original)
}

}  // namespace d_004e3604
GUEST_EXPORT(0x004e3604, d_004e3604::f_004e3604);

// f_004e36c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e36c0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x00751d34, u32(u32)> call_00751d34;

u32 f_004e36c0(u32 r0, u32 r1) {
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_002f74e0(8u, r0_1);
    if (r0_2 != 0) {
        u32 r0_3 = call_006a5e34(r0_2);
        u32 r0_4 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
        u32 zf_1 = r0_3 == 0;
        if (!zf_1) {
            zf_1 = r0_4 == 0;
        }
        if (!zf_1) {
            u32 r0_5 = call_002feb00(r0_3, r0, r1, 1u);
            u32 r0_6 = call_00751d34(r0_4);
            if (r0_6 == 1u && r0_5 != 0) {
                u32 r0_7 = call_002fe574(r0_5, 0x95bfdcu);  // (from the original)
                if (r0_7 != 0) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e36c0
GUEST_EXPORT_FRAMED(0x004e36c0, d_004e36c0::f_004e36c0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e3768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3768 {

inline guest::global<u8, 0x009529d4> global_009529d4;

u32 f_004e3768() {
    return *global_009529d4;
}

}  // namespace d_004e3768
GUEST_EXPORT(0x004e3768, d_004e3768::f_004e3768);

// f_004e39c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e39c4 {

struct __attribute__((packed)) Local_004e39c4_r0_3 {
    u8 unknown_0[0x64];  // (not used here)
    u16 half_64;
};
GUEST_OFFSET(Local_004e39c4_r0_3, half_64, 0x64);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;

void f_004e39c4(u32 r0, u32 r1) {
    u32 r0_1 = call_002f74c8(r0, r1);
    if (r0_1 == 0x35u) {  // (from the original)
        u32 r0_2 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
        if (r0_2 != 0) {
            gptr<Local_004e39c4_r0_3> r0_3 = gptr<Local_004e39c4_r0_3>(r0_2 + 0x700u);  // (from the original)
            u32 r1_2 = u32(r0_3->half_64) | 0x20u;  // (from the original)
            r0_3->half_64 = u16(r1_2);
            guest::cpu()->r[1] = r1_2;
            return;
        }
    }
}

}  // namespace d_004e39c4
GUEST_EXPORT_FRAMED(0x004e39c4, d_004e39c4::f_004e39c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e3a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3a1c {

inline guest::global<u32, 0x0094f310> global_0094f310;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x00750894, u32(u32)> call_00750894;
inline constexpr guest::Function<0x00750994, u32(u32)> call_00750994;

u32 f_004e3a1c(u32 r0, u32 r1) {
    if (*global_0094f310 == 0) {
        return 0xffu;  // (from the original)
    }
    u32 r0_1 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    if (r0_1 == 0) {
        return 0xffu;  // (from the original)
    }
    u32 r0_2 = call_00750894(r0_1);
    if (r0_2 == 0) {
        return 0xffu;  // (from the original)
    }
    u32 r0_3 = call_00750994(r0_1);
    if (r0_3 != 0) {
        return r0_3;
    }
    return 0xffu;  // (from the original)
}

}  // namespace d_004e3a1c
GUEST_EXPORT_FRAMED(0x004e3a1c, d_004e3a1c::f_004e3a1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e3f8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e3f8c {

inline guest::global<u32, 0x009529f4> global_009529f4;
inline guest::global<u32, 0x009c79b8> global_009c79b8;
inline guest::global<u32, 0x009c79bc> global_009c79bc;
inline guest::global<u32, 0x009c79c0> global_009c79c0;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;
inline constexpr guest::Function<0x00751840, u32(u32)> call_00751840;

struct __attribute__((packed)) Frame_004e3f8c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_004e3f8c, word_0, 0x0);
GUEST_OFFSET(Frame_004e3f8c, word_4, 0x4);
GUEST_SIZE(Frame_004e3f8c, 0x8);

u32 f_004e3f8c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_004e3f8c> frame;  // the original's stack frame
    u32 r6_1 = r1;
    u32 r8_1 = r2;
    u32 r0_1 = *global_009529f4;
    if ((r0_1 & 1u) == 0) {
        r0_1 = call_002fe7dc(0x9529f4u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_1 != 0) {
            S1 = 0.0f;
            S2 = S1;
            S0 = 32.0f;
            *global_009c79b8 = std::bit_cast<u32>(S0);
            *global_009c79bc = std::bit_cast<u32>(S1);
            *global_009c79c0 = std::bit_cast<u32>(S2);
            r0_1 = 0x9529f4u;  // (from the original)
        }
    }
    u32 r5_1 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    u32 r0_3 = call_002f74e0(4u, r0_2);
    if (r0_3 != 0) {
        r5_1 = 0u;
    }
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r6_1);
    u32 r0_5 = call_004e9a28(0x9c7ad4u, frame->word_0, frame->word_4, 0u);  // (from the original)
    if (r0_5 != 0) {
        u32 r0_6 = call_00751840(r0_5);
        if (r0_6 != 0) {
            frame->word_4 = r5_1;
            frame->word_0 = 0x9c79b8;  // (from the original)
            u32 r0_7 = call_006311a4(r0_5, r0, r6_1, r8_1);
            return r0_7;
        }
    }
    return 1u;
}

}  // namespace d_004e3f8c
GUEST_EXPORT_FRAMED(0x004e3f8c, d_004e3f8c::f_004e3f8c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e408c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e408c {

inline guest::global<u8, 0x009529d4> global_009529d4;
inline guest::global<u8, 0x009c79d4> global_009c79d4;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

u32 f_004e408c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *global_009529d4 = 0;
    u32 r0_1 = call_00300904(0x9529d4u, r1, r2, r3);  // (from the original)
    if (r0_1 != 0) {
        u32 r0_2 = call_0030b6c4(r0_1);
        if (r0_2 == 0) {
            frame.release();
            return call_006249b0(0x5bu, 0u, 0u, 0u);  // (from the original)
        }
    }
    *global_009c79d4 = 0;
    return 0x9c79d4u;  // (from the original)
}

}  // namespace d_004e408c
GUEST_EXPORT(0x004e408c, d_004e408c::f_004e408c);

// f_004e440c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e440c {

inline guest::global<u32, 0x009529f0> global_009529f0;
inline guest::global<u32, 0x009c79ac> global_009c79ac;
inline guest::global<u32, 0x009c79b0> global_009c79b0;
inline guest::global<u32, 0x009c79b4> global_009c79b4;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x006311a4, u32(u32, u32, u32, u32)> call_006311a4;
inline constexpr guest::Function<0x00751840, u32(u32)> call_00751840;

struct __attribute__((packed)) Frame_004e440c {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_004e440c, word_0, 0x0);
GUEST_OFFSET(Frame_004e440c, word_4, 0x4);
GUEST_SIZE(Frame_004e440c, 0x8);

u32 f_004e440c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2) {
    guest::StackFrameOf<Frame_004e440c> frame;  // the original's stack frame
    u32 r6_1 = r1;
    u32 r8_1 = r2;
    u32 r0_1 = *global_009529f0;
    if ((r0_1 & 1u) == 0) {
        r0_1 = call_002fe7dc(0x9529f0u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        if (r0_1 != 0) {
            S1 = 0.0f;
            S2 = S1;
            S0 = -32.0f;
            *global_009c79ac = std::bit_cast<u32>(S0);
            *global_009c79b0 = std::bit_cast<u32>(S1);
            *global_009c79b4 = std::bit_cast<u32>(S2);
            r0_1 = 0x9529f0u;  // (from the original)
        }
    }
    u32 r5_1 = 1u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    u32 r0_2 = call_002f74c8(r0_1, r1, r2, r3);
    u32 r0_3 = call_002f74e0(4u, r0_2);
    if (r0_3 != 0) {
        r5_1 = 0u;
    }
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r6_1);
    u32 r0_5 = call_004e9a28(0x9c7ad4u, frame->word_0, frame->word_4, 0u);  // (from the original)
    if (r0_5 != 0) {
        u32 r0_6 = call_00751840(r0_5);
        if (r0_6 != 0) {
            frame->word_4 = r5_1;
            frame->word_0 = 0x9c79ac;  // (from the original)
            u32 r0_7 = call_006311a4(r0_5, r0, r6_1, r8_1);
            return r0_7;
        }
    }
    return 1u;
}

}  // namespace d_004e440c
GUEST_EXPORT_FRAMED(0x004e440c, d_004e440c::f_004e440c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e4510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e4510 {

inline constexpr guest::Function<0x00284ee4, u32(u32, u32, u32, u32)> call_00284ee4;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32)> call_002fcb10;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x0030b654, u32(u32, u32)> call_0030b654;
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;
inline constexpr guest::Function<0x00768174, u32(u32, u32)> call_00768174;
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> call_0076936c;

struct __attribute__((packed)) Frame_004e4510 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e4510, word_0, 0x0);
GUEST_OFFSET(Frame_004e4510, word_4, 0x4);
GUEST_OFFSET(Frame_004e4510, word_8, 0x8);
GUEST_OFFSET(Frame_004e4510, word_c, 0xc);
GUEST_SIZE(Frame_004e4510, 0x14);

u32 f_004e4510(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e4510> frame;  // the original's stack frame
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_14 = 0;
    u32 r0_1 = call_006f9638(r0, r1, r2, r3);
    u32 r0_2 = call_002fe7cc(r0_1);
    r1 = guest::cpu()->r[1];
    u32 r9 = r0_2;
    if (r0_2 == 0) {
        return 0u;
    }
    u32 r0_4 = call_006f9638(r0 - 1u & 0xffu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = call_002fe7cc(r0_4);
    r1 = guest::cpu()->r[1];
    u32 r8 = r0_5;
    if (r0_5 == 0) {
        return 0u;
    }
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_0 = 0;
    frame->word_4 = 0;
    call_00284ee4(frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0).addr(), frame.at(4).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r7 = frame->word_c;
    if (s32(r7) > s32(frame->word_4)) {
        return 1u;
    }
L_4e457c:;
    u32 r4 = frame->word_8;
    if (s32(r4) > s32(frame->word_0)) {
        goto L_4e467c;
    }
L_4e458c:;
    r0_7 = call_002feb00(r8, r4, r7, 0u);
    r0_8 = call_002feb00(r9, r4, r7, 0u);
    r1 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        u32 r0_9 = call_0030b654(r0_7, r1);
        r1 = guest::cpu()->r[1];
        if (r0_9 != 0) {
            if (r0_8 == 0) {
                return 0u;
            }
            u32 r0_10 = call_0030b654(r0_8, r1);
            r1 = guest::cpu()->r[1];
            if (r0_10 == 0) {
                return 0u;
            }
            u32 r0_11 = call_002fe574(r0_7, r0_8);
            r1 = guest::cpu()->r[1];
            if (r0_11 == 0) {
                return 0u;
            }
            u32 r0_12 = call_0076936c(r0_7, r1);
            u32 r0_13 = call_0076936c(r0_8, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
            if (r0_12 == r0_13) {
                goto L_4e466c;
            }
            return 0u;
        }
    }
    if (r0_8 == 0) {
        goto L_4e466c;
    }
    r0_14 = call_002fcb10(r0_8, r1);
    r1 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        u32 r0_15 = call_00768174(r0_8, r1);
        r1 = guest::cpu()->r[1];
        if (r0_15 == 0) {
            goto L_4e466c;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_4e466c:;
    r4 += 1u;
    if (s32(r4) <= s32(frame->word_0)) {
        guest::preempt();
        goto L_4e458c;
    }
L_4e467c:;
    r7 += 1u;
    if (s32(r7) <= s32(frame->word_4)) {
        guest::preempt();
        goto L_4e457c;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004e4510
GUEST_EXPORT_FRAMED(0x004e4510, d_004e4510::f_004e4510, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e49fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e49fc {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x005ce300, u32(u32, u32, u32)> call_005ce300;
inline constexpr guest::Function<0x006c778c, u32(u32, u32, u32)> call_006c778c;
inline constexpr guest::Function<0x006c8928, u32(u32, u32, u32, u32)> call_006c8928;
inline constexpr guest::Function<0x006f9638, u32(u32)> call_006f9638;
inline constexpr guest::Function<0x007500b4, u32(u32)> call_007500b4;
inline constexpr guest::Function<0x00750894, u32(u32)> call_00750894;

u32 f_004e49fc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r7_1 = r1;
    u32 r0_1 = call_006c8928(r0, r1, 0u, r3);
    r1 = guest::cpu()->r[1];
    if (r0_1 + 1u == 0) {
        u32 r0_2 = call_004e9a28(0x9c7ad4u, r0, r7_1, 0u);  // (from the original)
        if (r0_2 != 0) {
            r0_3 = call_00750894(r0_2);
            if (r0_3 == 0) {
                goto L_4e4a64;
            }
        }
        r0_4 = call_005ce300(r0, r7_1, 0u);
        r1 = guest::cpu()->r[1];
        return r0_4 == 0 ? r0_4 : 1u;
L_4e4a64:;
        u32 r0_5 = call_002f74c8(r0_3);
        u32 r0_6 = call_006f9638(r0_5);
        u32 r0_7 = call_007500b4(r0_2);
        r1 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            u32 r0_8 = call_006c778c(r0, r7_1, r0_6);
            r1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                return 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_004e49fc
GUEST_EXPORT_FRAMED(0x004e49fc, d_004e49fc::f_004e49fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e4ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e4ab8 {

inline constexpr guest::Function<0x004e40e8, u32(u32, u32, u32, u32)> call_004e40e8;

void f_004e4ab8(u32 r0_unused, u32 r1) {
    call_004e40e8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e4ab8
GUEST_EXPORT(0x004e4ab8, d_004e4ab8::f_004e4ab8);

// f_004e54a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e54a4 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e21e0, u32(u32, u32, u32, u32)> call_004e21e0;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x00751a30, u32(u32)> call_00751a30;
inline constexpr guest::Function<0x00751a4c, u32(u32)> call_00751a4c;

struct __attribute__((packed)) Frame_004e54a4 {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e54a4, word_4, 0x4);
GUEST_SIZE(Frame_004e54a4, 0xc);

u32 f_004e54a4(u32 r0_unused, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004e54a4> frame;  // the original's stack frame
    u32 r0_3 = 0;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, r3);
    u32 r0_2 = call_004e9a28(0x9c7ad4u, *frame.at<u32>(0), frame->word_4, 0u);  // (from the original)
    if (r0_2 == 0) {
        r0_3 = 4u;
    } else {
        u32 r0_4 = call_00751a30(r0_2);
        if (r0_4 == 0) {
            u32 r0_5 = call_00751a4c(r0_2);
            if (r0_5 == 0) {
                u32 r4_1 = 1u;
                u32 r0_6 = call_002f74c8(r0_5);
                u32 r0_7 = call_002f74e0(4u, r0_6);
                *frame.at<u16>(0) = u16(r2);
                if (r0_7 != 0) {
                    r4_1 = 0u;
                }
                u32 r1_4 = *frame.at<u32>(0);
                float S0_4 = 32.0f;
                guest::cpu()->s[0] = S0_4;
                u32 r0_8 = call_004e21e0(r1, r1_4, 0u, r4_1);
                if (r0_8 != 0) {
                    r0_8 = 2u;
                }
                return r0_8;
            }
        }
        r0_3 = 3u;
    }
    return r0_3;
}

}  // namespace d_004e54a4
GUEST_EXPORT_FRAMED(0x004e54a4, d_004e54a4::f_004e54a4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e5818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5818 {

struct __attribute__((packed)) Local_004e5818_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e5818_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5818_ea_2, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> call_0057456c;
inline constexpr guest::Function<0x006904b4, u32(u32)> call_006904b4;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x00768758, u32(u32)> call_00768758;
inline constexpr guest::Function<0x0076c5b0, u32(u32)> call_0076c5b0;

struct __attribute__((packed)) Frame_004e5818 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5818, word_0, 0x0);
GUEST_SIZE(Frame_004e5818, 0x18);

u32 f_004e5818(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e5818> frame;  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    if (r0_1 == 0x2bu) {  // (from the original)
        u32 r0_2 = call_00768758(r0);
        if (r0_2 != 0) {
            u32 r0_3 = call_006a5e34(r0_2);
            if (r0_3 == 0) {
                return 0u;
            }
            call_0076c5b0(r0);
            u32 r0_4 = call_002feb00(r0_3, r1, r2, 0u);
            if (r0_4 == 0) {
                return 0u;
            }
            u32 r0_5 = call_002fcaf4(r0_4);
            if (r0_5 == 0) {
                return 0u;
            }
            call_002fc20c(frame.at(0xc).addr());  // (from the original)
            frame->word_0 = 0;
            gptr<Local_004e5818_ea_2> ea_2 = gptr<Local_004e5818_ea_2>(frame.at(4).addr());
            ea_2->word_0 = 0;
            ea_2->word_4 = 1;
            call_00691544(frame.at(0xc).addr(), r0, r1, r2);  // (from the original)
            u32 r0_9 = call_006904b4(frame.at(0xc).addr());  // (from the original)
            if (r0_9 != 0) {
                call_0057456c(r0_9, r3);
            }
            r0_2 = 1u;
        }
        return r0_2;
    }
    return 0u;
}

}  // namespace d_004e5818
GUEST_EXPORT_FRAMED(0x004e5818, d_004e5818::f_004e5818, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e5924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5924 {

struct __attribute__((packed)) Local_004e5924_ea_1 {
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
};
GUEST_OFFSET(Local_004e5924_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e5924_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e5924_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e5924_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e5924_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004e5924_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004e5924_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_004e5924_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5924_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_004e5924_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_004e5924_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_004e5924_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_004e5924_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_004e5924_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004e5924_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5924_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e5924_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e5924_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_004e5924_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_004e5924_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_004e5924_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_004e5924_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5924_ea_2, word_20, 0x20);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> call_00300904;
inline constexpr guest::Function<0x00305570, u32(u32, u32)> call_00305570;
inline constexpr guest::Function<0x00319aa4, u32(u32, u32, u32, u32)> call_00319aa4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x006f9638, u32(u32, u32)> call_006f9638;
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> call_0076936c;

struct __attribute__((packed)) Frame_004e5924 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not read or written by name)
    u32 word_24;
    u8 unknown_28[0x30];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5924, word_0, 0x0);
GUEST_OFFSET(Frame_004e5924, half_4, 0x4);
GUEST_OFFSET(Frame_004e5924, word_c, 0xc);
GUEST_OFFSET(Frame_004e5924, word_1c, 0x1c);
GUEST_OFFSET(Frame_004e5924, word_24, 0x24);
GUEST_SIZE(Frame_004e5924, 0x58);

u32 f_004e5924(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e5924> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r0_15 = 0;
    u32 cf_1 = 0;
    gptr<Local_004e5924_ea_1> ea_1 = gptr<Local_004e5924_ea_1>(frame.at(0x24).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r6 = r3;
    r7 = r1;
    r8 = r2;
    u32 r1_1 = frame->word_24;
    u32 r4_1 = *frame.at<u32>(0x5c);  // (from the original)
    u32 r0_1 = call_002f74e0(8u, r1_1, r2, r3);
    if (r0_1 == 0) {
        r0_2 = call_002f74e0(0x10000000u, frame->word_24, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_4e5b60;
        }
    }
    r0_3 = frame.at(0x1c).addr();  // (from the original)
    call_002fc934(r0_3, r4_1);
    r0_4 = call_002f74c8(r0_3);
    r1_5 = frame->word_24;
    if (r0_4 == r1_5) {
        r0_5 = call_006a5e34(r0_4, r1_5);
        r1_3 = guest::cpu()->r[1];
    } else {
        u32 r0_6 = call_006f9638(r1_5, r1_5);
        r0_5 = call_002fe7cc(r0_6);
        r1_3 = guest::cpu()->r[1];
    }
    frame->word_c = r0_5;
    if (r0_5 != 0) {
        u32 r5_1 = frame.at(0x1c).addr();  // (from the original)
        u32 r0_7 = call_00305570(r5_1, r1_3);
        u32 r1_7 = r4_1 & ~0xffu;  // (from the original)
        u32 r0_8 = call_0076936c(r5_1, r1_7);
        r1_3 = (r1_7 | r0_7) & ~0xff00u;  // (from the original)
        r5 = r1_3 | r0_8 << 8 & 0xff00u;  // (from the original)
        u32 r0_9 = r5 & 0xffu;  // (from the original)
        r4 = 0u;
        if (r0_9 < 5u) {
            r11 = 0x9529fcu;  // (from the original)
            u32 r0_10 = *gptr<u8>(*gptr<u32>(r11 + (r0_9 << 2)) + 0x10u);  // (from the original)
            if (r0_10 >= 0u && r0_10 != 0) {
                do {
                    u32 r0_11 = r5 & 0xffu;  // (from the original)
                    u32 r1_8 = (r0_11 >= 5u ? 0u : u32(*gptr<u8>(*gptr<u32>(r11 + (r0_11 << 2)) + 0x10u))) <= r4 ? 0x865620u : *gptr<u32>(*gptr<u32>(r11 + (r0_11 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
                    u32 r9_1 = *gptr<u32>(r1_8) + r7;
                    u32 r0_12 = (r0_11 >= 5u ? 0u : u32(*gptr<u8>(*gptr<u32>(r11 + (r0_11 << 2)) + 0x10u))) <= r4 ? 0x865620u : *gptr<u32>(*gptr<u32>(r11 + (r0_11 << 2)) + ((r5 & 0x300u) >> 6)) + (r4 << 3);  // (from the original)
                    u32 r10_1 = *gptr<u32>(r0_12 + 4u) + r8;
                    u32 r0_13 = frame->word_c;
                    frame->word_0 = r6;
                    u32 r0_14 = call_002fc994(r0_13, r4 == 0 ? frame.at(0x1c).addr() : 0x95bfe0u, r9_1, r10_1);  // (from the original)
                    r1_3 = guest::cpu()->r[1];
                    if (r0_14 == 0) {
                        goto L_4e5b58;
                    }
                    u32 r3_8 = *frame.at<u32>(0x58);  // (from the original)
                    frame->word_0 = frame->word_24;
                    call_00319aa4(r9_1, r10_1, r6, r3_8);
                    r1_3 = guest::cpu()->r[1];
                    r0_15 = r5 & 0xffu;  // (from the original)
                    cf_1 = r0_15 >= 5u;
                    if (r0_15 < 5u) {
                        r0_15 = *gptr<u32>(r11 + (r0_15 << 2));
                    }
                    r4 += 1u;
                    guest::preempt();
                } while ((cf_1 ? 0u : u32(*gptr<u8>(r0_15 + 0x10u))) > r4);  // (from the original)
            }
        }
        u32 r0_16 = *frame.at<u32>(0x60);  // (from the original)
        if (r0_16 != 0) {
            u32 r0_17 = call_00300904(r0_16, r1_3);
            r1_3 = guest::cpu()->r[1];
            if (r0_17 != 0) {
                u32 r2_8 = frame->half_4;
                frame->word_0 = frame->word_1c;
                u32 r1_10 = (((r7 & 0xfu | r2_8 & ~0xfu) & ~0xf0u | 0xf0u & r8 << 4) & ~0x100u | 0x100u & r6 << 8) & ~0x200u;  // (from the original)
                frame->half_4 = u16(r1_10 | *frame.at<u32>(0x58) << 9);  // (from the original)
                call_006249b0(0x4fu, 4u, frame.at(0).addr(), 8u);  // (from the original)
                r1_3 = guest::cpu()->r[1];
            }
        }
    }
L_4e5b58:;
    r0_2 = frame.at(0x1c).addr();  // (from the original)
L_4e5b60:;
    gptr<Local_004e5924_ea_2> ea_2 = gptr<Local_004e5924_ea_2>(frame.at(0x34).addr());  // (from the original)
    u32 r4_3 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_2 = ea_2->word_14;
    u32 r10_2 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_3;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return r0_2;
}

}  // namespace d_004e5924
GUEST_EXPORT(0x004e5924, d_004e5924::f_004e5924);

// f_004e5b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e5b74 {

struct __attribute__((packed)) Local_004e5b74_ea_1 {
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
};
GUEST_OFFSET(Local_004e5b74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_004e5b74_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_004e5b74_ea_1, word_28, 0x28);
GUEST_OFFSET(Local_004e5b74_ea_1, word_2c, 0x2c);
GUEST_OFFSET(Local_004e5b74_ea_1, word_30, 0x30);

struct __attribute__((packed)) Local_004e5b74_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004e5b74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_2, word_20, 0x20);

struct __attribute__((packed)) Local_004e5b74_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e5b74_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_004e5b74_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004e5b74_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_5, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_5, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_5, word_20, 0x20);

struct __attribute__((packed)) Local_004e5b74_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004e5b74_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_004e5b74_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_004e5b74_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_004e5b74_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_004e5b74_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_004e5b74_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_004e5b74_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_004e5b74_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_004e5b74_ea_6, word_20, 0x20);

inline guest::global<u32, 0x0094f310> global_0094f310;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> call_0057456c;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x006904b4, u32(u32)> call_006904b4;
inline constexpr guest::Function<0x00691544, u32(u32, u32, u32, u32)> call_00691544;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x00769634, u32(u32)> call_00769634;
inline constexpr guest::Function<0x0076c5b0, u32(u32)> call_0076c5b0;

struct __attribute__((packed)) Frame_004e5b74 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not read or written by name)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not read or written by name)
    u32 word_28;
    u8 unknown_2c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e5b74, word_0, 0x0);
GUEST_OFFSET(Frame_004e5b74, word_1c, 0x1c);
GUEST_OFFSET(Frame_004e5b74, word_28, 0x28);
GUEST_SIZE(Frame_004e5b74, 0x50);

u32 f_004e5b74(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e5b74> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    gptr<Local_004e5b74_ea_2> ea_2 = gptr<Local_004e5b74_ea_2>(0u);
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    gptr<Local_004e5b74_ea_1> ea_1 = gptr<Local_004e5b74_ea_1>(frame.at(0x1c).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    if (r0_1 == 0x2bu) {  // (from the original)
        u32 r0_3 = call_00769634(frame->word_1c);
        if (r0_3 == 0) {
            u32 r0_4 = call_006a5e34(r0_3);
            if (r0_4 != 0) {
                u32 r0_5 = *global_0094f310;
                if (r0_5 != 0) {
                    if ((u32(*gptr<u8>(r0_5 + 0x13u)) >> 1u & 1u) != 0) {  // (from the original)
                        r4_1 = r2;
                        u32 r0_7 = call_0076c5b0(frame->word_1c);
                        if (r0_7 != 0) {
                            r4_1 += 1u;
                        }
                        r0_8 = call_002feb00(r0_4, r1, r4_1, 0u);
                        if (r0_8 == 0) {
                            goto L_4e5cec;
                        }
                        u32 r0_9 = call_002fcaf4(r0_8);
                        if (r0_9 == 0) {
                            u32 r0_10 = call_002fcb84(r0_8, 0x2085u);  // (from the original)
                            if (r0_10 == 0) {
                                goto L_4e5cec;
                            }
                            goto L_4e5c54;
                        }
                        goto L_4e5c54;
                    }
                }
                r1_2 = frame->word_1c;
                frame->word_0 = 0;
                call_002fc994(r0_4, r1_2, r1, r2);
                ea_2 = gptr<Local_004e5b74_ea_2>(frame.at(0x2c).addr());  // (from the original)
                r4_2 = ea_2->word_0;
                r5_1 = ea_2->word_4;
                r6_1 = ea_2->word_8;
                r7_1 = ea_2->word_c;
                r8_1 = ea_2->word_10;
                r9_1 = ea_2->word_14;
                r10_1 = ea_2->word_18;
                r11_1 = ea_2->word_1c;
                guest::cpu()->r[4] = r4_2;
                guest::cpu()->r[5] = r5_1;
                guest::cpu()->r[6] = r6_1;
                guest::cpu()->r[7] = r7_1;
                guest::cpu()->r[8] = r8_1;
                guest::cpu()->r[9] = r9_1;
                guest::cpu()->r[10] = r10_1;
                guest::cpu()->r[11] = r11_1;
                return 0u;
L_4e5c54:;
                u32 r0_11 = call_002fcb84(r0_8, 0x2085u);  // (from the original)
                if (r0_11 != 0) {
                    frame->word_0 = 0;
                    call_002fc994(r0_4, 0x95bfdcu, r1, r4_1);  // (from the original)
                    call_0059e65c(r1, r4_1, 1u);
                }
                call_002fc20c(frame.at(0xc).addr());  // (from the original)
                frame->word_0 = 0;
                gptr<Local_004e5b74_ea_4> ea_4 = gptr<Local_004e5b74_ea_4>(frame.at(4).addr());
                ea_4->word_0 = 0;
                ea_4->word_4 = 1;
                call_00691544(frame.at(0xc).addr(), frame->word_1c, r1, r2);  // (from the original)
                u32 r0_15 = call_006904b4(frame.at(0xc).addr());  // (from the original)
                if (r0_15 != 0) {
                    call_0057456c(r0_15, frame->word_28);
                }
                gptr<Local_004e5b74_ea_5> ea_5 = gptr<Local_004e5b74_ea_5>(frame.at(0x2c).addr());  // (from the original)
                u32 r4_3 = ea_5->word_0;
                u32 r5_2 = ea_5->word_4;
                u32 r6_2 = ea_5->word_8;
                u32 r7_2 = ea_5->word_c;
                u32 r8_2 = ea_5->word_10;
                u32 r9_2 = ea_5->word_14;
                u32 r10_2 = ea_5->word_18;
                u32 r11_2 = ea_5->word_1c;
                guest::cpu()->r[4] = r4_3;
                guest::cpu()->r[5] = r5_2;
                guest::cpu()->r[6] = r6_2;
                guest::cpu()->r[7] = r7_2;
                guest::cpu()->r[8] = r8_2;
                guest::cpu()->r[9] = r9_2;
                guest::cpu()->r[10] = r10_2;
                guest::cpu()->r[11] = r11_2;
                return 1u;
            }
        }
    }
L_4e5cec:;
    gptr<Local_004e5b74_ea_6> ea_6 = gptr<Local_004e5b74_ea_6>(frame.at(0x2c).addr());  // (from the original)
    u32 r4_4 = ea_6->word_0;
    u32 r5_3 = ea_6->word_4;
    u32 r6_3 = ea_6->word_8;
    u32 r7_3 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_3 = ea_6->word_14;
    u32 r10_3 = ea_6->word_18;
    u32 r11_3 = ea_6->word_1c;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_3;
    guest::cpu()->r[11] = r11_3;
    return 0u;
}

}  // namespace d_004e5b74
GUEST_EXPORT(0x004e5b74, d_004e5b74::f_004e5b74);

// f_004e6200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6200 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x00751058, u32(u32)> call_00751058;

struct __attribute__((packed)) Frame_004e6200 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6200, word_0, 0x0);
GUEST_OFFSET(Frame_004e6200, word_4, 0x4);
GUEST_SIZE(Frame_004e6200, 0x20);

void f_004e6200(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6200> frame;  // the original's stack frame
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(0x20u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1);
        u32 r0_4 = call_004e9a28(0x9c7ad4u, frame->word_0, frame->word_4, 0u);  // (from the original)
        if (r0_4 != 0) {
            u32 r0_5 = call_00751058(r0_4);
            frame.release();
            call_002fc934(r0, r0_5);
            return;
        }
    }
    frame.release();
    call_002fc934(r0, 0x95bfdcu);
    return;
}

}  // namespace d_004e6200
GUEST_EXPORT(0x004e6200, d_004e6200::f_004e6200);

// f_004e628c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e628c {

struct __attribute__((packed)) Object_004e628c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_004e628c_0, word_0, 0x0);
GUEST_OFFSET(Object_004e628c_0, word_4, 0x4);
GUEST_OFFSET(Object_004e628c_0, word_8, 0x8);
GUEST_OFFSET(Object_004e628c_0, word_c, 0xc);
GUEST_OFFSET(Object_004e628c_0, word_10, 0x10);
GUEST_OFFSET(Object_004e628c_0, word_14, 0x14);

struct __attribute__((packed)) Local_004e628c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004e628c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e628c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e628c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e628c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004e628c_ea_1, word_10, 0x10);

struct __attribute__((packed)) Local_004e628c_r7_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e628c_r7_2, word_0, 0x0);
GUEST_OFFSET(Local_004e628c_r7_2, word_4, 0x4);

inline constexpr guest::Function<0x001746f4, u32(u32, u32, u32, u32)> call_001746f4;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> call_006bbd54;

struct __attribute__((packed)) Frame_004e628c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e628c, word_0, 0x0);
GUEST_OFFSET(Frame_004e628c, word_4, 0x4);
GUEST_SIZE(Frame_004e628c, 0x2c);

u32 f_004e628c(gptr<Object_004e628c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e628c> frame;  // the original's stack frame
    u32 r6_1 = arg0->word_0;
    u32 r0_1 = arg0->word_10;
    u32 r5_1 = arg0->word_4;
    u32 r7_1 = arg0->word_8;
    u32 r8_1 = arg0->word_c;
    if ((r0_1 & 0x200000u) != 0) {  // (from the original)
        call_002fc934(frame.at(0x20).addr(), 0x95bfdcu, r2, r3);  // (from the original)
        if (r7_1 < 0x5bu) {  // (from the original)
            call_006bbd54(frame.at(0).addr(), 0x2fu, r7_1);  // (from the original)
            call_002fc8e8(frame.at(0x20).addr(), frame.at(0).addr());  // (from the original)
        }
        call_002fc934(frame.at(0x24).addr(), 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r8_1 < 0x5bu) {  // (from the original)
            call_006bbd54(frame.at(0).addr(), 0x2fu, r8_1);  // (from the original)
            call_002fc8e8(frame.at(0x24).addr(), frame.at(0).addr());  // (from the original)
        }
        u32 r1_3 = frame.at(0x24).addr();  // (from the original)
        frame->word_0 = frame.at(0x20).addr();  // (from the original)
        frame->word_4 = r1_3;
        call_001746f4(r0_1 & 0xffu, r1_3, r6_1, r5_1);  // (from the original)
        u32 r0_9 = arg0->word_0;
        u32 r1_4 = arg0->word_4;
        u32 r2_4 = arg0->word_8;
        u32 r3_5 = arg0->word_c;
        u32 r12_1 = arg0->word_10;
        u32 r4_1 = arg0->word_14;
        gptr<Local_004e628c_ea_1> ea_1 = gptr<Local_004e628c_ea_1>(frame.at(8).addr());
        ea_1->word_0 = r0_9;
        ea_1->word_4 = r1_4;
        ea_1->word_8 = r2_4;
        ea_1->word_c = r3_5;
        ea_1->word_10 = r12_1;
        gptr<Local_004e628c_r7_2> r7_2 = gptr<Local_004e628c_r7_2>(frame.at(0x18).addr());  // (from the original)
        r7_2->word_0 = r12_1 & ~0x200000u;  // (from the original)
        r7_2->word_4 = r4_1;
        u32 r0_10 = call_006249b0(0x52u, 4u, frame.at(8).addr(), 0x18u);  // (from the original)
        return r0_10;
    }
    call_002fc934(frame.at(8).addr(), 0x95bfdcu, r2, r3);  // (from the original)
    if (r7_1 < 0x5bu) {  // (from the original)
        call_006bbd54(frame.at(0).addr(), 0x2fu, r7_1);  // (from the original)
        call_002fc8e8(frame.at(8).addr(), frame.at(0).addr());
    }
    call_002fc934(frame.at(0xc).addr(), 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r8_1 < 0x5bu) {  // (from the original)
        call_006bbd54(frame.at(0).addr(), 0x2fu, r8_1);  // (from the original)
        call_002fc8e8(frame.at(0xc).addr(), frame.at(0).addr());  // (from the original)
    }
    u32 r1_8 = frame.at(0xc).addr();  // (from the original)
    frame->word_0 = frame.at(8).addr();
    frame->word_4 = r1_8;
    call_001746f4(r0_1 & 0xffu, r1_8, r6_1, r5_1);  // (from the original)
    return frame.at(8).addr();
}

}  // namespace d_004e628c
GUEST_EXPORT_FRAMED(0x004e628c, d_004e628c::f_004e628c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e645c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e645c {

struct __attribute__((packed)) Object_004e645c_0 {
    float float_0;
    float float_4;
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_004e645c_0, float_0, 0x0);
GUEST_OFFSET(Object_004e645c_0, float_4, 0x4);
GUEST_OFFSET(Object_004e645c_0, word_8, 0x8);
GUEST_OFFSET(Object_004e645c_0, half_c, 0xc);

struct __attribute__((packed)) Local_004e645c_r0_2 {
    float float_0;
    float float_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_004e645c_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_004e645c_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_004e645c_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_004e645c_r0_2, byte_c, 0xc);
GUEST_OFFSET(Local_004e645c_r0_2, byte_d, 0xd);

inline constexpr guest::Function<0x00203660, u32(u32, u32, u32, u32)> call_00203660;

u32 f_004e645c(gptr<Object_004e645c_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    u32 r0_1 = u32(arg0->half_c) >> 8;
    gptr<Local_004e645c_r0_2> r0_2 = gptr<Local_004e645c_r0_2>(call_00203660(r0_1, r1, r2, r3));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    u32 r2_1 = arg0->half_c;
    u32 r1_2 = arg0->word_8;
    float S0_2 = arg0->float_0;
    float S1_2 = arg0->float_4;
    r0_2->word_8 = r1_2;
    r0_2->float_0 = S0_2;
    r0_2->float_4 = S1_2;
    r0_2->byte_c = u8(r2_1 & 0xfu);  // (from the original)
    r0_2->byte_d = u8(r2_1 >> 4u & 0xfu);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_2.addr();
}

}  // namespace d_004e645c
GUEST_EXPORT_FRAMED(0x004e645c, d_004e645c::f_004e645c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e64a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e64a4 {

struct __attribute__((packed)) Object_004e64a4_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e64a4_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e64a4_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e64a4_0, byte_2, 0x2);

inline constexpr guest::Function<0x001796e0, u32(u32, u32, u32)> call_001796e0;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;
inline constexpr guest::Function<0x004e3354, u32(u32, u32)> call_004e3354;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x006bc388, u32(u32, u32, u32)> call_006bc388;
inline constexpr guest::Function<0x006f9638, u32(u32, u32)> call_006f9638;
inline constexpr guest::Function<0x006f9c08, u32(u32)> call_006f9c08;
inline constexpr guest::Function<0x006f9db4, u32(u32)> call_006f9db4;
inline constexpr guest::Function<0x00720328, u32(u32, u32)> call_00720328;

u32 f_004e64a4(gptr<Object_004e64a4_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_7 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 r2_1 = arg0->byte_0;
    call_006bbd54(frame.at(0).addr(), 0x2fu, r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_002fcb34(frame.at(0).addr());
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 == 0x2fu) {  // (from the original)
        u32 r0_4 = call_002f74c8(r0_3, r1_2);
        r1_2 = arg0->byte_1;
        if (r1_2 != r0_4) {
            u32 r0_5 = call_002f74e0(0x80u, r0_4);  // (from the original)
            if (r0_5 != 0) {
                u32 r0_6 = call_006f9c08(r0_4);
                r1_2 = guest::cpu()->r[1];
                if (r0_6 == 0) {
                    goto L_4e6620;
                }
                u32 r5_1 = 0u;
                r0_7 = call_00720328(r0_6, r1_2);
                r1_2 = guest::cpu()->r[1];
                if (r0_7 == 0) {
                    call_002fc934(frame.at(4).addr(), r0_6 + 0x2fau);  // (from the original)
                    r5_1 = 1u;
                    r0_7 = call_002fe574(frame.at(4).addr(), frame.at(0).addr());
                    r1_2 = guest::cpu()->r[1];
                    r6_1 = !(r0_7 == 0);
                } else {
                    r6_1 = 1u;
                }
                if (r5_1 != 0) {
                    r0_7 = frame.at(4).addr();
                }
                if (r6_1 == 0) {
                    goto L_4e6620;
                }
            } else {
                u32 r0_10 = call_002f74e0(0x2000u, r0_4);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                if (r0_10 == 0) {
                    goto L_4e6620;
                }
                u32 r0_11 = call_006f9638(r0_4, r1_2);
                u32 r0_12 = call_006f9db4(r0_11);
                u32 r0_13 = call_002fae84(r0_12);
                u32 r0_15 = call_006bc388(r0_13 - 0xfff951c8u, r0_12, 0xfff951c8u);  // (from the original)
                u32 r5_2 = 0u;
                r0_7 = call_00720328(r0_15 + 2u, guest::cpu()->r[1]);
                r1_2 = guest::cpu()->r[1];
                if (r0_7 == 0) {
                    call_002fc934(frame.at(4).addr(), r0_15 + 0x2fcu);  // (from the original)
                    r5_2 = 1u;
                    r0_7 = call_002fe574(frame.at(4).addr(), frame.at(0).addr());
                    r1_2 = guest::cpu()->r[1];
                    r6_2 = !(r0_7 == 0);
                } else {
                    r6_2 = 1u;
                }
                if (r5_2 != 0) {
                    r0_7 = frame.at(4).addr();
                }
                if (r6_2 == 0) {
                    goto L_4e6620;
                }
            }
            call_004e3354(r0_7, r1_2);
            r1_2 = guest::cpu()->r[1];
        }
L_4e6620:;
        u32 r0_19 = arg0->byte_2;
        if (r0_19 < 4u) {
            call_001796e0(r0_19, r0_4, frame.at(0).addr());
            r1_2 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_2;
    return frame.at(0).addr();
}

}  // namespace d_004e64a4
GUEST_EXPORT_FRAMED(0x004e64a4, d_004e64a4::f_004e64a4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e664c {

struct __attribute__((packed)) Object_004e664c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e664c_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e664c_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e664c_0, byte_2, 0x2);

inline constexpr guest::Function<0x0017d2ac, u32(u32, u32, u32, u32)> call_0017d2ac;
inline constexpr guest::Function<0x0017fc48, u32(u32, u32, u32, u32)> call_0017fc48;

struct __attribute__((packed)) Frame_004e664c {
    u32 word_0;
};
GUEST_OFFSET(Frame_004e664c, word_0, 0x0);
GUEST_SIZE(Frame_004e664c, 0x4);

u32 f_004e664c(gptr<Object_004e664c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_004e664c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = arg0->byte_1;
    u32 r3_1 = arg0->byte_2;
    u32 r0_1 = arg0->byte_0;
    u32 zf_1 = (r3_1 & 2u) == 0;
    u32 r2_1 = r1_1 >> 4;
    u32 r3_2 = r3_1 & 1u;
    u32 r1_2 = r1_1 & 0xfu;  // (from the original)
    frame->word_0 = 1;
    if (!zf_1) {
        u32 r0_2 = call_0017d2ac(r0_1, r1_2, r2_1, r3_2);
        return r0_2;
    }
    u32 r0_3 = call_0017fc48(r0_1, r1_2, r2_1, r3_2);
    return r0_3;
}

}  // namespace d_004e664c
GUEST_EXPORT_FRAMED(0x004e664c, d_004e664c::f_004e664c, 0x4000);  // pushes {lr} first, as the original

// f_004e668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e668c {

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> call_003081b4;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;

struct __attribute__((packed)) Frame_004e668c {
    u8 unknown_0[0x1];  // (not read or written by name)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x1];  // (not read or written by name)
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u16 half_8;
    u8 unknown_a[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e668c, byte_1, 0x1);
GUEST_OFFSET(Frame_004e668c, byte_2, 0x2);
GUEST_OFFSET(Frame_004e668c, byte_3, 0x3);
GUEST_OFFSET(Frame_004e668c, byte_5, 0x5);
GUEST_OFFSET(Frame_004e668c, byte_6, 0x6);
GUEST_OFFSET(Frame_004e668c, byte_7, 0x7);
GUEST_OFFSET(Frame_004e668c, half_8, 0x8);
GUEST_SIZE(Frame_004e668c, 0x10);

u32 f_004e668c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e668c> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r0_1 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (!(r0_1 == 0)) {
        u32 r4 = 1u;
        do {
            if (r4 != r6) {
                u32 r0_3 = call_00624f00(r4 & 0xffu, r1, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_3 != 0) {
                    *frame.at<u32>(0) = *gptr<u32>(r5);
                    *frame.at<u32>(4) = *gptr<u32>(r5 + 4u);
                    frame->half_8 = u16(u32(*gptr<u16>(r5 + 8u)));
                    call_006249b0(0x55u, r4 & 0xffu, frame.at(0).addr(), 0xau);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 4u);
    }
    u32 r0_4 = *gptr<u8>(r5 + 8u);
    u32 r0_5 = call_00203558(r0_4, r1, r2, r3);
    if (r0_5 != 0) {
        *frame.at<u8>(0) = u8(u32(*gptr<u8>(r5)));
        frame->byte_1 = u8(u32(*gptr<u8>(r5 + 1u)));
        frame->byte_2 = u8(u32(*gptr<u8>(r5 + 2u)));
        frame->byte_3 = u8(u32(*gptr<u8>(r5 + 3u)));
        *frame.at<u8>(4) = u8(u32(*gptr<u8>(r5 + 4u)));
        frame->byte_5 = u8(u32(*gptr<u8>(r5 + 5u)));
        frame->byte_6 = u8(u32(*gptr<u8>(r5 + 6u)));
        frame->byte_7 = u8(u32(*gptr<u8>(r5 + 7u)));
        r0_5 = call_003081b4(*gptr<u8>(r5 + 9u) == 0 ? r0_5 + 0x12u : r0_5 + 0xau, frame.at(0).addr());  // (from the original)
    }
    return r0_5;
}

}  // namespace d_004e668c
GUEST_EXPORT_FRAMED(0x004e668c, d_004e668c::f_004e668c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e6774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6774 {

struct __attribute__((packed)) Object_004e6774_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e6774_0, word_0, 0x0);

struct __attribute__((packed)) Local_004e6774_r0_2 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e6774_r0_2, byte_0, 0x0);
GUEST_OFFSET(Local_004e6774_r0_2, byte_1, 0x1);
GUEST_OFFSET(Local_004e6774_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_004e6774_r0_2, word_8, 0x8);
GUEST_OFFSET(Local_004e6774_r0_2, word_c, 0xc);

inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x006b14cc, u32(u32, u32, u32, u32)> call_006b14cc;

struct __attribute__((packed)) Frame_004e6774 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6774, word_0, 0x0);
GUEST_OFFSET(Frame_004e6774, word_4, 0x4);
GUEST_OFFSET(Frame_004e6774, word_8, 0x8);
GUEST_SIZE(Frame_004e6774, 0x10);

u32 f_004e6774(gptr<Object_004e6774_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_004e6774> frame;  // the original's stack frame
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    float S0_1 = 0.0f;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S0_1);
    frame->word_8 = std::bit_cast<u32>(S0_1);
    frame->word_0 = std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 & 0xfffu))));  // (from the original)
    float S0_2 = float(std::bit_cast<u32>(std::bit_cast<float>(arg0->word_0 >> 0xcu & 0xfffu)));  // (from the original)
    frame->word_8 = std::bit_cast<u32>(S0_2);
    u32 r5_1 = arg0->word_0 >> 0x18;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    u32 r0_1 = call_006b14cc(0x9c79d4u, r1, r5_1, frame.at(0).addr());  // (from the original)
    if (r0_1 != 0) {
        if (r1 < 4u) {
            gptr<Local_004e6774_r0_2> r0_2 = gptr<Local_004e6774_r0_2>((r1 << 4) + 0x9c79d4u);  // (from the original)
            r0_2->byte_0 = 1;
            r0_2->byte_1 = u8(r5_1);
            r0_2->word_4 = frame->word_0;
            r0_2->word_8 = frame->word_4;
            r0_2->word_c = frame->word_8;
        }
        r2_1 = 0u;
        r1_1 = r1;
        r0_3 = 0x59u;  // (from the original)
    } else {
        r2_1 = 0u;
        r1_1 = r1;
        r0_3 = 0x5au;  // (from the original)
    }
    u32 r0_4 = call_006249b0(r0_3, r1_1, r2_1, 0u);
    return r0_4;
}

}  // namespace d_004e6774
GUEST_EXPORT_FRAMED(0x004e6774, d_004e6774::f_004e6774, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e6a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6a3c {

struct __attribute__((packed)) Object_004e6a3c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_004e6a3c_0, byte_0, 0x0);
GUEST_OFFSET(Object_004e6a3c_0, byte_1, 0x1);
GUEST_OFFSET(Object_004e6a3c_0, byte_2, 0x2);

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32)> call_002d50b8;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32)> call_006bbd54;
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;

struct __attribute__((packed)) Frame_004e6a3c {
    u16 half_0;
    u8 byte_2;
    u8 unknown_3[0x9];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6a3c, half_0, 0x0);
GUEST_OFFSET(Frame_004e6a3c, byte_2, 0x2);
GUEST_SIZE(Frame_004e6a3c, 0xc);

u32 f_004e6a3c(gptr<Object_004e6a3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6a3c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r6 = arg0->byte_1;
    u32 r5 = arg0->byte_2;
    u32 r7 = arg0->byte_0;
    if (r6 < 0x5bu && r5 < 0x5bu) {  // (from the original)
        r0 = call_00203558(r7, r1, r2, r3);
        r1 = r0;
        if (r0 != 0) {
            r3 = r1 + 0x12u;  // (from the original)
            r0 = r1 + 0xau;  // (from the original)
            r2 = sxtb(r6);
            if (r3 > r0) {
                do {
                    if (u32(*gptr<s8>(r0)) == r2) {
                        *gptr<u8>(r1 + 8u) = u8(r2);
                        break;
                    }
                    r0 += 1u;
                    guest::preempt();
                } while (r3 > r0);
            }
            *gptr<u8>(r1 + 9u) = u8(r5);
            r0 = call_006f9c08(r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                call_006bbd54(frame.at(0).addr(), 0x2fu, r6);  // (from the original)
                call_006bbd54(frame.at(4).addr(), 0x2fu, r5);  // (from the original)
                call_002d50b8(r0, frame.at(0).addr(), frame.at(4).addr());
                r0 = call_0030b6c4(frame.at(0).addr());
                r1 = guest::cpu()->r[1];
                if (r0 != 0) {
                    frame->half_0 = u16(u32(*gptr<u16>(r4)));
                    frame->byte_2 = u8(u32(*gptr<u8>(r4 + 2u)));
                    r0 = call_006249b0(0x56u, 4u, frame.at(0).addr(), 3u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004e6a3c
GUEST_EXPORT_FRAMED(0x004e6a3c, d_004e6a3c::f_004e6a3c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e6b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6b48 {

struct __attribute__((packed)) Object_004e6b48_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_004e6b48_0, word_0, 0x0);
GUEST_OFFSET(Object_004e6b48_0, word_4, 0x4);
GUEST_OFFSET(Object_004e6b48_0, byte_8, 0x8);
GUEST_OFFSET(Object_004e6b48_0, word_c, 0xc);

struct __attribute__((packed)) Local_004e6b48_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e6b48_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_004e6b48_r0_2, word_4, 0x4);

inline constexpr guest::Function<0x00203558, u32(u32, u32, u32, u32)> call_00203558;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

struct __attribute__((packed)) Frame_004e6b48 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_004e6b48, word_0, 0x0);
GUEST_OFFSET(Frame_004e6b48, word_4, 0x4);
GUEST_OFFSET(Frame_004e6b48, word_8, 0x8);
GUEST_OFFSET(Frame_004e6b48, word_c, 0xc);
GUEST_SIZE(Frame_004e6b48, 0x10);

u32 f_004e6b48(gptr<Object_004e6b48_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6b48> frame;  // the original's stack frame
    u32 r0_1 = arg0->byte_8;
    gptr<Local_004e6b48_r0_2> r0_2 = gptr<Local_004e6b48_r0_2>(call_00203558(r0_1, r1, r2, r3));
    if (r0_2.addr() == 0) {
        return r0_2.addr();
    }
    u32 r1_2 = arg0->word_0;
    u32 r2_1 = arg0->word_4;
    r0_2->word_0 = r1_2;
    r0_2->word_4 = r2_1;
    u32 r0_3 = call_0030b6c4(r0_2.addr(), r1_2, r2_1);
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r1_4 = arg0->word_4;
    u32 r2_2 = *gptr<u32>(arg0.addr() + 8u);
    u32 r3_2 = arg0->word_c;
    frame->word_0 = arg0->word_0;
    frame->word_4 = r1_4;
    frame->word_8 = r2_2;
    frame->word_c = r3_2;
    u32 r0_4 = call_006249b0(0x53u, 4u, frame.at(0).addr(), 0x10u);  // (from the original)
    return r0_4;
}

}  // namespace d_004e6b48
GUEST_EXPORT_FRAMED(0x004e6b48, d_004e6b48::f_004e6b48, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e6b9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6b9c {

struct __attribute__((packed)) Object_004e6b9c_1 {
    u32 word_0;
    u16 half_4;
};
GUEST_OFFSET(Object_004e6b9c_1, word_0, 0x0);
GUEST_OFFSET(Object_004e6b9c_1, half_4, 0x4);

inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> call_004e5924;
inline constexpr guest::Function<0x006bba14, u32(u32, u32, u32, u32)> call_006bba14;

struct __attribute__((packed)) Frame_004e6b9c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6b9c, word_0, 0x0);
GUEST_OFFSET(Frame_004e6b9c, word_4, 0x4);
GUEST_OFFSET(Frame_004e6b9c, word_8, 0x8);
GUEST_SIZE(Frame_004e6b9c, 0x14);

u32 f_004e6b9c(u32 r0, gptr<Object_004e6b9c_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6b9c> frame;  // the original's stack frame
    call_006bba14(frame.at(0xc).addr(), arg1->word_0, r2, r3);  // (from the original)
    u32 r0_2 = arg1->half_4;
    frame->word_8 = 0;
    frame->word_0 = (r0_2 & 0x200u) >> 9;  // (from the original)
    frame->word_4 = frame.at(0xc).addr();  // (from the original)
    call_004e5924(r0, r0_2 & 0xfu, r0_2 >> 4u & 0xfu, r0_2 >> 8u & 1u);  // (from the original)
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_004e6b9c
GUEST_EXPORT_FRAMED(0x004e6b9c, d_004e6b9c::f_004e6b9c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e6c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6c70 {

struct __attribute__((packed)) Object_004e6c70_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_004e6c70_1, word_0, 0x0);
GUEST_OFFSET(Object_004e6c70_1, byte_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x006f9638, u32(u32)> call_006f9638;

struct __attribute__((packed)) Frame_004e6c70 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e6c70, word_0, 0x0);
GUEST_SIZE(Frame_004e6c70, 0x8);

u32 f_004e6c70(u32 r0, gptr<Object_004e6c70_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e6c70> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_1 = frame.at(4).addr();
    call_002fc20c(r0_1, arg1.addr(), r2, r3);
    u32 r1_1 = arg1->word_0;
    *gptr<u32>(r0_1) = r1_1;
    u32 r0_2 = arg1->byte_4;
    u32 r6_1 = r0_2 & 0xfu;  // (from the original)
    u32 r7_1 = r0_2 >> 4;
    u32 r0_3 = call_002f74c8(r0_2, r1_1);
    u32 r0_4 = call_002f74e0(8u, r0);
    if (r0_4 != 0) {
        u32 r0_5 = call_002f74e0(8u, r0_3);
        if (r0_5 != 0 && r0 == r0_3) {
            r0_6 = call_006a5e34(r0_5);
        } else {
            u32 r0_7 = call_006f9638(r0);
            r0_6 = call_002fe7cc(r0_7);
        }
        if (r0_6 != 0) {
            frame->word_0 = 1;
            u32 r0_8 = call_002fc994(r0_6, frame.at(4).addr(), r6_1, r7_1);
            if (r0_8 != 0) {
                call_0059e65c(r6_1, r7_1, 1u);
            }
        }
    }
    return frame.at(4).addr();
}

}  // namespace d_004e6c70
GUEST_EXPORT_FRAMED(0x004e6c70, d_004e6c70::f_004e6c70, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e6e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e6e84 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x005b49e0, u32(u32)> call_005b49e0;
inline constexpr guest::Function<0x006c4280, u32(u32)> call_006c4280;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> call_006e0b2c;

u32 f_004e6e84(u32 r0) {
    u32 r0_1 = call_006e0b2c(r0);
    if (r0_1 != 0) {
        u32 r4_1 = *global_0095c6d0;
        if (r4_1 != 0) {
            u32 r0_2 = call_005b49e0(r0);
            if (r0_2 != 0) {
                u32 r0_3 = *gptr<s8>(r4_1 + 0x1cu);  // (from the original)
                u32 r0_4 = call_006c4280(r0_3);
                if (r0_4 == 9u) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e6e84
GUEST_EXPORT_FRAMED(0x004e6e84, d_004e6e84::f_004e6e84, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e7234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7234 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fe7cc, u32(u32)> call_002fe7cc;
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32)> call_0059e65c;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x006f9638, u32(u32)> call_006f9638;

struct __attribute__((packed)) Frame_004e7234 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x7];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e7234, word_0, 0x0);
GUEST_OFFSET(Frame_004e7234, byte_4, 0x4);
GUEST_SIZE(Frame_004e7234, 0xc);

void f_004e7234(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e7234> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r4_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_002f74e0(8u, r0);
    if (r0_2 != 0) {
        u32 r0_3 = call_002f74e0(8u, r0_1);
        if (r0_3 != 0 && r0 == r0_1) {
            r0_4 = call_006a5e34(r0_3);
        } else {
            u32 r0_5 = call_006f9638(r0);
            r0_4 = call_002fe7cc(r0_5);
        }
        if (r0_4 != 0) {
            frame->word_0 = 1;
            u32 r0_6 = call_002fc994(r0_4, r1, r2, r3);
            if (r0_6 != 0) {
                u32 r0_7 = call_0059e65c(r2, r3, 1u);
                if (r4_1 != 0) {
                    u32 r0_8 = call_00300904(r0_7);
                    if (r0_8 != 0) {
                        frame->word_0 = *gptr<u32>(r1);
                        frame->byte_4 = u8((r2 & 0xfu | u32(frame->byte_4) & ~0xfu) & ~0xf0u | 0xf0u & r3 << 4);  // (from the original)
                        call_006249b0(0x4eu, 4u, frame.at(0).addr(), 5u);  // (from the original)
                    }
                }
            }
        }
    }
}

}  // namespace d_004e7234
GUEST_EXPORT_FRAMED(0x004e7234, d_004e7234::f_004e7234, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e7344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7344 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;
inline constexpr guest::Function<0x005b49b4, u32(u32)> call_005b49b4;
inline constexpr guest::Function<0x006c4280, u32(u32)> call_006c4280;
inline constexpr guest::Function<0x006e0b2c, u32(u32)> call_006e0b2c;

u32 f_004e7344(u32 r0) {
    u32 r0_1 = call_006e0b2c(r0);
    if (r0_1 != 0) {
        u32 r4_1 = *global_0095c6d0;
        if (r4_1 != 0) {
            u32 r0_2 = call_005b49b4(r0);
            if (r0_2 != 0) {
                u32 r0_3 = *gptr<s8>(r4_1 + 0x1cu);  // (from the original)
                u32 r0_4 = call_006c4280(r0_3);
                if (r0_4 == 9u) {
                    return 1u;
                }
            }
        }
    }
    return 0u;
}

}  // namespace d_004e7344
GUEST_EXPORT_FRAMED(0x004e7344, d_004e7344::f_004e7344, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e74d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e74d8 {

struct __attribute__((packed)) Local_004e74d8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e74d8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e74d8_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_004e74d8_r12_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e74d8_r12_2, word_0, 0x0);
GUEST_OFFSET(Local_004e74d8_r12_2, word_4, 0x4);

struct __attribute__((packed)) Local_004e74d8_r1_30 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e74d8_r1_30, word_0, 0x0);
GUEST_OFFSET(Local_004e74d8_r1_30, word_4, 0x4);

struct __attribute__((packed)) Local_004e74d8_r1_42 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e74d8_r1_42, word_0, 0x0);
GUEST_OFFSET(Local_004e74d8_r1_42, word_4, 0x4);

inline constexpr guest::Function<0x00167960, u32(u32)> call_00167960;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00303acc, u32(u32)> call_00303acc;
inline constexpr guest::Function<0x00305570, u32(u32)> call_00305570;
inline constexpr guest::Function<0x003055b4, u32(u32, u32)> call_003055b4;
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;
inline constexpr guest::Function<0x004e1668, u32(u32, u32, u32, u32)> call_004e1668;
inline constexpr guest::Function<0x004e2504, u32(u32, u32, u32)> call_004e2504;
inline constexpr guest::Function<0x004e5924, u32(u32, u32, u32, u32)> call_004e5924;
inline constexpr guest::Function<0x00581428, u32(u32, u32, u32, u32)> call_00581428;
inline constexpr guest::Function<0x00582b1c, u32(u32, u32, u32, u32)> call_00582b1c;
inline constexpr guest::Function<0x006a5e34, u32(u32)> call_006a5e34;
inline constexpr guest::Function<0x006a6e90, u32(u32, u32, u32, u32)> call_006a6e90;
inline constexpr guest::Function<0x007482b8, u32(u32, u32)> call_007482b8;
inline constexpr guest::Function<0x0074830c, u32(u32)> call_0074830c;
inline constexpr guest::Function<0x00752b44, u32(u32, u32, u32, u32)> call_00752b44;
inline constexpr guest::Function<0x0076936c, u32(u32, u32)> call_0076936c;

struct __attribute__((packed)) Frame_004e74d8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x4];  // (not read or written by name)
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
    u32 word_34;
    u8 unknown_38[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e74d8, word_0, 0x0);
GUEST_OFFSET(Frame_004e74d8, word_4, 0x4);
GUEST_OFFSET(Frame_004e74d8, word_8, 0x8);
GUEST_OFFSET(Frame_004e74d8, word_c, 0xc);
GUEST_OFFSET(Frame_004e74d8, word_18, 0x18);
GUEST_OFFSET(Frame_004e74d8, word_1c, 0x1c);
GUEST_OFFSET(Frame_004e74d8, word_20, 0x20);
GUEST_OFFSET(Frame_004e74d8, word_24, 0x24);
GUEST_OFFSET(Frame_004e74d8, word_2c, 0x2c);
GUEST_OFFSET(Frame_004e74d8, word_34, 0x34);
GUEST_SIZE(Frame_004e74d8, 0x3c);

u32 f_004e74d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e74d8> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r7 = guest::cpu()->r[7];
    u32 r9 = guest::cpu()->r[9];
    u32 r11 = 0;
    u32 cf_1 = 0;
    u32 zf_2 = 0;
    u32 cf_3 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r6_3 = 0;
    u32 r5_1 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_9 = 0;
    u32 r1_10 = 0;
    u32 r0_22 = 0;
    u32 nf_3 = 0;
    u32 vf_1 = 0;
    u32 nf_4 = 0;
    u32 vf_2 = 0;
    u32 nf_5 = 0;
    u32 vf_3 = 0;
    u32 nf_6 = 0;
    u32 vf_4 = 0;
    u32 cf_4 = 0;
    gptr<Local_004e74d8_r1_30> r1_30 = gptr<Local_004e74d8_r1_30>(0u);
    gptr<Local_004e74d8_r1_42> r1_42 = gptr<Local_004e74d8_r1_42>(0u);
    u32 nf_9 = 0;
    u32 vf_6 = 0;
    u32 nf_10 = 0;
    u32 vf_7 = 0;
    u32 nf_11 = 0;
    u32 vf_8 = 0;
    u32 r0_58 = 0;
    u32 r1_45 = 0;
    u32 nf_12 = 0;
    u32 vf_9 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    frame->word_18 = r0_1;
    r0 = call_002f74e0(0x10000u, r0_1);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 zf_1 = r0 == 0;
    if (zf_1) {
        r2 = 0x9c7a14u;  // (from the original)
        r0 = 0u;
        r1 = r0;
        r11 = r0;
        do {
            *gptr<u32>(r2 + (r0 << 2)) = r11;
            u32 r0_2 = r0 + 1u;
            r1 += 2u;
            *gptr<u32>(r2 + (r0_2 << 2)) = r11;
            cf_1 = r1 >= 0x30u;  // (from the original)
            r0 = r0_2 + 1u;
            guest::preempt();
        } while (!cf_1);
        u32 r5 = 0x9c7ad4u;  // (from the original)
        r1 = 0u;
        r2 = ~0u;
        do {
            r0 = 0u;
            r4 = r5 + ((r1 + (r1 << 2)) << 4);
            r3 = 0x50u;  // (from the original)
            u32 r12 = r5 + (r1 << 4);
            do {
                u32 cf_2 = r0 >= 0x10u || r1 >= 0x10u;  // (from the original)
                *gptr<u8>(r4 + r0) = u8(r2);
                if (r0 < 0x10u && r1 < 0x10u) {  // (from the original)
                    *gptr<u8>((r12 + r0) + 0x1400u) = u8(r2);  // (from the original)
                }
                u32 res_1 = r3 - 1u;
                zf_2 = res_1 == 0;
                r3 = res_1;
                r0 += 1u;
                guest::preempt();
            } while (!zf_2);
            r1 += 1u;
            cf_3 = r1 >= 0x40u;  // (from the original)
            guest::preempt();
        } while (!cf_3);
        call_004e1668(0x9c8fd4u, r1, r2, r3);  // (from the original)
        r0_3 = call_002f74e0(4u, frame->word_18);
        u32 zf_3 = r0_3 == 0;
        if (zf_3) {
            goto L_4e7784;
        }
        r0 = call_006a5e34(r0_3);
        r1 = guest::cpu()->r[1];
        u32 zf_4 = r0 == 0;
        r4_1 = r0;
        if (!zf_4) {
            r0 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x2069u;  // (from the original)
            u32 zf_5 = r0 == 0xa0u;  // (from the original)
            r6_3 = r1 + 1u;
            r5_1 = r1 - 3u;
            if (zf_5) {
                goto L_4e76a8;
            }
            u32 zf_6 = r0 == 0x9fu;  // (from the original)
            if (zf_6) {
                call_002fcbb0(frame.at(0x10).addr(), r1);  // (from the original)
                frame->word_0 = r11;
                call_002fc994(r4_1, frame.at(0x10).addr(), 6u, 5u);  // (from the original)
                call_002fcbb0(frame.at(0x14).addr(), r6_3);  // (from the original)
                frame->word_0 = r11;
                call_002fc994(r4_1, frame.at(0x14).addr(), 8u, 0xeu);  // (from the original)
                call_002fcbb0(frame.at(8).addr(), r5_1);
                call_003055b4(frame.at(8).addr(), 3u);
                call_002fcbb0(frame.at(0xc).addr(), r5_1);  // (from the original)
                call_003055b4(frame.at(0xc).addr(), 0u);  // (from the original)
                frame->word_0 = r11;
                call_002fc994(r4_1, frame.at(8).addr(), 0xbu, 0xbu);  // (from the original)
                frame->word_0 = r11;
                call_002fc994(r4_1, frame.at(0xc).addr(), 8u, 9u);  // (from the original)
                r1 = guest::cpu()->r[1];
                r0 = frame.at(0x10).addr();  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
L_4e76a8:;
    r0_10 = frame.at(0x10).addr();  // (from the original)
    call_002fcbb0(r0_10, r1);
    r1_7 = frame.at(0x10).addr();  // (from the original)
    frame->word_0 = r11;
    call_002fc994(r4_1, r1_7, 7u, 5u);
    r0_11 = frame.at(0x14).addr();  // (from the original)
    call_002fcbb0(r0_11, r6_3);
    r1_8 = frame.at(0x14).addr();  // (from the original)
    frame->word_0 = r11;
    call_002fc994(r4_1, r1_8, 7u, 0xeu);  // (from the original)
    r0_12 = frame.at(8).addr();
    call_002fcbb0(r0_12, r5_1);
    r0_13 = frame.at(8).addr();
    call_003055b4(r0_13, 1u);
    r0_14 = frame.at(0xc).addr();  // (from the original)
    call_002fcbb0(r0_14, r5_1);
    r0_15 = frame.at(0xc).addr();  // (from the original)
    call_003055b4(r0_15, 0u);
    r1_9 = frame.at(8).addr();
    frame->word_0 = r11;
    call_002fc994(r4_1, r1_9, 4u, 0xcu);  // (from the original)
    r1_10 = frame.at(0xc).addr();  // (from the original)
    frame->word_0 = r11;
    call_002fc994(r4_1, r1_10, 6u, 9u);
    return frame.at(0x10).addr();  // (from the original)
L_4e7784:;
    u32 r0_17 = call_00167960(r0_3);
    r0 = call_006a5e34(r0_17);
    r1 = guest::cpu()->r[1];
    u32 zf_7 = r0 == 0;
    frame->word_20 = r0;
    if (zf_7) {
        return r0;
    }
    u32 r0_18 = call_007482b8(r0, r1);
    u32 r10 = r0_18;
    u32 r0_20 = call_0074830c(frame->word_20);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r8 = 0u;
    frame->word_24 = r0_20;
    do {
        u32 r0_21 = frame->word_24;
        u32 zf_8 = r0_21 == 0;
        r0_22 = 0u;
        frame->word_1c = r0_22;
        if (!zf_8 && (r0_21 >> 0x1f) == 0u) {  // (from the original)
            do {
                u32 zf_9 = r10 == 0;
                r9 = 0u;
                if (!zf_9 && (r10 >> 0x1f) == 0u) {  // (from the original)
                    do {
                        r7 = 0u;
                        do {
                            r4 = 0u;
                            do {
                                u32 r6_4 = r8 & 0xffu;  // (from the original)
                                u32 r0_23 = frame->word_20;
                                u32 r2_19 = frame->word_1c;
                                frame->word_4 = r6_4;
                                frame->word_0 = r7;
                                u32 r0_24 = call_00752b44(r0_23, r9, r2_19, r4);
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                u32 zf_10 = r0_24 == 0;
                                if (!zf_10) {
                                    u32 r0_25 = call_0030b654(r0_24, guest::cpu()->r[1], r2, r3);
                                    r2 = guest::cpu()->r[2];
                                    r3 = guest::cpu()->r[3];
                                    u32 zf_11 = r0_25 == 0;
                                    if (!zf_11) {
                                        frame->word_0 = r4;
                                        frame->word_4 = r7;
                                        call_006a6e90(frame.at(0x30).addr(), frame.at(0x34).addr(), r9, frame->word_1c);  // (from the original)
                                        u32 r3_20 = frame->word_18;
                                        gptr<Local_004e74d8_ea_2> ea_2 = gptr<Local_004e74d8_ea_2>(frame.at(0x30).addr());  // (from the original)
                                        u32 r0_28 = call_00582b1c(ea_2->word_0, ea_2->word_4, r6_4, r3_20);
                                        frame->word_0 = r0_28;
                                        frame->word_4 = r0_24;
                                        frame->word_8 = r11;
                                        gptr<Local_004e74d8_r12_2> r12_2 = gptr<Local_004e74d8_r12_2>(frame.at(0x30).addr());  // (from the original)
                                        call_004e5924(frame->word_18, r12_2->word_0, r12_2->word_4, r6_4);
                                        r2 = guest::cpu()->r[2];
                                        r3 = guest::cpu()->r[3];
                                    }
                                }
                                r4 += 1u;
                                u32 res_2 = r4 - 0x10u;  // (from the original)
                                nf_3 = res_2 >> 0x1f;  // (from the original)
                                vf_1 = ((r4 ^ 0x10u) & (r4 ^ res_2)) >> 0x1f;  // (from the original)
                                guest::preempt();
                            } while (nf_3 != vf_1);
                            r7 += 1u;
                            u32 res_3 = r7 - 0x10u;  // (from the original)
                            nf_4 = res_3 >> 0x1f;  // (from the original)
                            vf_2 = ((r7 ^ 0x10u) & (r7 ^ res_3)) >> 0x1f;  // (from the original)
                            guest::preempt();
                        } while (nf_4 != vf_2);
                        r9 += 1u;
                        u32 res_4 = r9 - r10;
                        nf_5 = res_4 >> 0x1f;  // (from the original)
                        vf_3 = ((r9 ^ r10) & (r9 ^ res_4)) >> 0x1f;  // (from the original)
                        guest::preempt();
                    } while (nf_5 != vf_3);
                }
                r1 = frame->word_24;
                r0_22 = frame->word_1c + 1u;
                u32 res_5 = r0_22 - r1;
                nf_6 = res_5 >> 0x1f;  // (from the original)
                vf_4 = ((r0_22 ^ r1) & (r0_22 ^ res_5)) >> 0x1f;  // (from the original)
                frame->word_1c = r0_22;
                guest::preempt();
            } while (nf_6 != vf_4);
        }
        r8 += 1u;
        cf_4 = r8 >= 2u;
        guest::preempt();
    } while (!cf_4);
    u32 r0_31 = call_002f74c8(r0_22, r1, r2, r3);
    r0 = call_002f74e0(0x40u, r0_31);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 zf_12 = r0 == 0;
    if (zf_12) {
        return r0;
    }
    u32 r0_32 = frame->word_24;
    u32 zf_13 = r0_32 == 0;
    u32 vf_5 = (r0_32 & (r0_32 ^ r0_32)) >> 0x1f;  // (from the original)
    if (r0_32 != 0 && s32(r0_32) >= 0) {
        r9 = 0x9529fcu;  // (from the original)
    }
    r0 = 0u;
    if (r0_32 != 0 && r0_32 >> 0x1f == vf_5) {  // (from the original)
        r8 = r11;
    }
    frame->word_c = r0;
    if (zf_13 || (r0_32 >> 0x1f) != vf_5) {  // (from the original)
        return r0;
    }
    do {
        u32 zf_14 = r10 == 0;
        r11 = 0u;
        if (!zf_14 && (r10 >> 0x1f) == 0u) {  // (from the original)
            do {
                u32 r6 = 0u;
                do {
                    r4 = 0u;
                    do {
                        frame->word_0 = r6;
                        frame->word_4 = r8;
                        u32 r0_34 = call_00752b44(frame->word_20, r11, frame->word_c, r4);
                        u32 zf_15 = r0_34 == 0;
                        if (!zf_15) {
                            u32 r0_35 = call_002fcaf4(r0_34);
                            u32 zf_16 = r0_35 == 0;
                            if (zf_16) {
                                u32 r0_36 = call_00303acc(r0_34);
                                u32 zf_17 = r0_36 == 0;
                                if (!zf_17) {
                                    frame->word_0 = r4;
                                    frame->word_4 = r6;
                                    call_006a6e90(frame.at(0x2c).addr(), frame.at(0x1c).addr(), r11, frame->word_c);  // (from the original)
                                    u32 r0_39 = call_004e2504(frame->word_2c, frame->word_1c, guest::cpu()->r[2]);
                                    u32 zf_18 = r0_39 == 0;
                                    if (zf_18) {
                                        u32 r0_40 = call_00305570(r0_34);
                                        u32 zf_19 = r0_40 == 1u;
                                        if (!zf_19) {
                                            goto L_4e7ac4;
                                        }
                                        u32 r0_41 = call_00305570(r0_34);
                                        u32 r1_24 = r7 & ~0xffu;  // (from the original)
                                        r7 = r1_24 | r0_41;
                                        u32 r0_42 = call_0076936c(r0_34, r1_24);
                                        u32 r1_28 = (((r0_42 << 8) & 0xff00u) | r7) & 0xffu;  // (from the original)
                                        u32 cf_5 = r1_28 >= 5u;
                                        if (!cf_5) {
                                            u32 r1_29 = *gptr<u32>(r9 + (r1_28 << 2));
                                            u32 r2_29 = *gptr<u8>(r1_29 + 0x10u);  // (from the original)
                                            u32 zf_20 = r2_29 == 1u;
                                            u32 cf_6 = r2_29 >= 1u;
                                            if (!!cf_6 && !zf_20) {
                                                r1_30 = gptr<Local_004e74d8_r1_30>(*gptr<u32>(r1_29 + ((r0_42 & 3u) << 2)) + 8u);
                                                goto L_4e79d4;
                                            }
                                        }
                                        r1_30 = gptr<Local_004e74d8_r1_30>(0x865620u);  // (from the original)
L_4e79d4:;
                                        u32 r0_45 = r1_30->word_0;
                                        u32 r2_31 = frame->word_2c;
                                        u32 r0_47 = call_004e2504(r0_45 + r2_31, r1_30->word_4 + frame->word_1c, r2_31);
                                        u32 zf_21 = r0_47 == 0;
                                        if (zf_21) {
                                            goto L_4e7ac4;
                                        }
                                    }
                                    u32 r0_48 = frame.at(0x30).addr();  // (from the original)
                                    call_002fc934(r0_48, r0_34);
                                    u32 r0_49 = call_006a5e34(r0_48);
                                    frame->word_34 = r0_49;
                                    frame->word_0 = r4;
                                    frame->word_4 = r6;
                                    frame->word_8 = r8;
                                    call_00581428(r0_49, 0x95bfdcu, r11, frame->word_c);  // (from the original)
                                    u32 r0_51 = call_00305570(frame.at(0x30).addr());  // (from the original)
                                    u32 zf_22 = r0_51 == 1u;
                                    if (zf_22) {
                                        r7 = frame.at(0x30).addr();  // (from the original)
                                        u32 r0_52 = call_00305570(r7);
                                        u32 r1_36 = r0_34 & ~0xffu;  // (from the original)
                                        u32 r0_53 = call_0076936c(r7, r1_36);
                                        u32 r1_40 = (((r0_53 << 8) & 0xff00u) | (r1_36 | r0_52)) & 0xffu;  // (from the original)
                                        u32 cf_7 = r1_40 >= 5u;
                                        if (!cf_7) {
                                            u32 r1_41 = *gptr<u32>(r9 + (r1_40 << 2));
                                            u32 r2_36 = *gptr<u8>(r1_41 + 0x10u);  // (from the original)
                                            u32 zf_23 = r2_36 == 1u;
                                            u32 cf_8 = r2_36 >= 1u;
                                            if (!!cf_8 && !zf_23) {
                                                r1_42 = gptr<Local_004e74d8_r1_42>(*gptr<u32>(r1_41 + ((r0_53 & 3u) << 2)) + 8u);
                                                goto L_4e7a98;
                                            }
                                        }
                                        r1_42 = gptr<Local_004e74d8_r1_42>(0x865620u);  // (from the original)
L_4e7a98:;
                                        u32 r0_56 = r1_42->word_0;
                                        u32 r1_43 = r1_42->word_4;
                                        u32 r2_37 = frame->word_1c;
                                        frame->word_0 = r8;
                                        call_002fc994(frame->word_34, 0x95bfdcu, r0_56 + frame->word_2c, r1_43 + r2_37);  // (from the original)
                                    }
                                }
                            }
                        }
L_4e7ac4:;
                        r4 += 1u;
                        u32 res_6 = r4 - 0x10u;  // (from the original)
                        nf_9 = res_6 >> 0x1f;  // (from the original)
                        vf_6 = ((r4 ^ 0x10u) & (r4 ^ res_6)) >> 0x1f;  // (from the original)
                        guest::preempt();
                    } while (nf_9 != vf_6);
                    r6 += 1u;
                    u32 res_7 = r6 - 0x10u;  // (from the original)
                    nf_10 = res_7 >> 0x1f;  // (from the original)
                    vf_7 = ((r6 ^ 0x10u) & (r6 ^ res_7)) >> 0x1f;  // (from the original)
                    guest::preempt();
                } while (nf_10 != vf_7);
                r11 += 1u;
                u32 res_8 = r11 - r10;
                nf_11 = res_8 >> 0x1f;  // (from the original)
                vf_8 = ((r11 ^ r10) & (r11 ^ res_8)) >> 0x1f;  // (from the original)
                guest::preempt();
            } while (nf_11 != vf_8);
        }
        r0_58 = frame->word_c;
        r1_45 = frame->word_24;
        u32 res_9 = r0_58 + 1u - r1_45;
        nf_12 = res_9 >> 0x1f;  // (from the original)
        vf_9 = ((r0_58 + 1u ^ r1_45) & (r0_58 + 1u ^ res_9)) >> 0x1f;  // (from the original)
        frame->word_c = r0_58 + 1u;
        guest::preempt();
    } while (nf_12 != vf_9);
    guest::cpu()->r[1] = r1_45;
    return r0_58 + 1u;
}

}  // namespace d_004e74d8
GUEST_EXPORT_FRAMED(0x004e74d8, d_004e74d8::f_004e74d8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_004e7bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7bb0 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x005708e8, u32(u32)> call_005708e8;
inline constexpr guest::Function<0x0057456c, u32(u32, u32)> call_0057456c;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x0061402c, u32(u32)> call_0061402c;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;

u32 f_004e7bb0(u32 r0, u32 r1, u32 r2) {
    u32 r1_5 = 0;
    u32 r0_1 = call_007457e8(0x9c7ad4u, r0, r1, r2);  // (from the original)
    if (s32(r0_1) >= 0) {
        u32 r0_2 = call_002f74c8(r0_1);
        u32 r0_3 = call_005b42fc(r0_2);
        if (r0_1 <= r0_3) {
            u32 r0_4 = call_002f74c8(r0_3);
            u32 r0_5 = call_005b42fc(r0_4);
            u32 cf_1 = r0_5 >= 0x30u;  // (from the original)
            if (!cf_1 || r0_5 == 0x30u) {  // (from the original)
                cf_1 = r0_1 >= r0_5;
            }
            r1_5 = 0u;
            if (!cf_1) {
                u32 r4_1 = *gptr<u32>((r0_1 << 2) + 0x9c7a14u);  // (from the original)
                if (r4_1 != 0) {
                    u32 r0_6 = call_0057456c(r4_1, 0u);
                    u32 r0_7 = call_002f74c8(r0_6);
                    if (r0_7 == 0x2bu) {  // (from the original)
                        call_0061402c(r0_7);
                    }
                    u32 r0_8 = call_005708e8(r4_1);
                    r1_5 = r0_8;
                }
            }
        } else {
            r1_5 = 0u;
        }
    } else {
        r1_5 = 0u;
    }
    guest::cpu()->r[1] = r1_5;
    return r1_5;
}

}  // namespace d_004e7bb0
GUEST_EXPORT_FRAMED(0x004e7bb0, d_004e7bb0::f_004e7bb0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004e7c54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7c54 {

struct __attribute__((packed)) Local_004e7c54_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e7c54_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_004e7c54_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;
inline constexpr guest::Function<0x007500b4, u32(u32)> call_007500b4;
inline constexpr guest::Function<0x00750894, u32(u32)> call_00750894;

u32 f_004e7c54(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r7 = r1;
    u32 r4 = 0u;
    u32 r9 = 0x865648u;  // (from the original)
    do {
        gptr<Local_004e7c54_r0_1> r0_1 = gptr<Local_004e7c54_r0_1>(r9 + (r4 << 3));
        u32 r0_2 = call_007457e8(0x9c7ad4u, r0_1->word_0 + r6, r0_1->word_4 + r7, 0u);  // (from the original)
        u32 r0_3 = call_002f74c8(r0_2);
        u32 r0_4 = call_002f74e0(8u, r0_3);
        if (r0_2 + 1u != 0) {
            u32 r0_5 = call_002f74c8(r0_4);
            u32 r0_6 = call_005b42fc(r0_5);
            if (r0_6 <= 0x30u && r0_6 > r0_2) {  // (from the original)
                u32 r5_1 = *gptr<u32>((r0_2 << 2) + 0x9c7a14u);  // (from the original)
                if (r5_1 != 0) {
                    u32 r0_7 = call_007500b4(r5_1);
                    if (r0_7 != 0) {
                        u32 r0_8 = call_00750894(r5_1);
                        if (r0_8 == 0) {
                            return 1u;
                        }
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    return 0u;
}

}  // namespace d_004e7c54
GUEST_EXPORT_FRAMED(0x004e7c54, d_004e7c54::f_004e7c54, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e7d38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7d38 {


void f_004e7d38(u32 r0) {
    if (r0 >= 4u) {
        guest::cpu()->r[1] = 0x9c79d4u;  // (from the original)
        return;
    }
    *gptr<u8>((r0 << 4) + 0x9c79d4u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x9c79d4u;  // (from the original)
}

}  // namespace d_004e7d38
GUEST_EXPORT(0x004e7d38, d_004e7d38::f_004e7d38);

// f_004e7d54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e7d54 {

struct __attribute__((packed)) Local_004e7d54_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004e7d54_r0_4, word_0, 0x0);
GUEST_OFFSET(Local_004e7d54_r0_4, word_4, 0x4);

inline constexpr guest::Function<0x00203558, u32(u32)> call_00203558;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

struct __attribute__((packed)) Frame_004e7d54 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0xb];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e7d54, word_0, 0x0);
GUEST_OFFSET(Frame_004e7d54, word_4, 0x4);
GUEST_OFFSET(Frame_004e7d54, byte_8, 0x8);
GUEST_SIZE(Frame_004e7d54, 0x14);

void f_004e7d54(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e7d54> frame;  // the original's stack frame
    u32 r0_3 = 0;
    gptr<Local_004e7d54_r0_4> r0_4 = gptr<Local_004e7d54_r0_4>(0u);
    u32 r0_1 = call_002f74e0(0x80u, r0, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        r0_1 = call_002f74e0(0x2000u, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_1 == 0) {
            return;
        }
    }
    u32 r0_2 = call_00300904(r0_1);
    if (r0_2 != 0) {
        r0_3 = call_00300904(r0_2);
        if (r0_3 == 0) {
            goto L_4e7e00;
        }
        r0_3 = call_0030b6c4(r0_3);
        if (r0_3 == 0) {
            goto L_4e7e00;
        }
    }
    r0_4 = gptr<Local_004e7d54_r0_4>(call_00203558(r0));
    if (r0_4.addr() != 0) {
        r0_4->word_0 = r2;
        r0_4->word_4 = r3;
        r0_4 = gptr<Local_004e7d54_r0_4>(call_00300904(r0_4.addr()));
        if (r0_4.addr() == 0) {
            return;
        }
    }
    r0_3 = call_00300904(r0_4.addr());
    if (r0_3 == 0) {
        return;
    }
L_4e7e00:;
    u32 r7_1 = 0u;
    frame->word_0 = r2;
    frame->word_4 = r3;
    frame->byte_8 = u8(r0);
    u32 r0_5 = call_0030b6c4(r0_3);
    if (r0_5 != 0) {
        r7_1 = 4u;
    }
    call_006249b0(0x53u, r7_1, frame.at(0).addr(), 0x10u);  // (from the original)
}

}  // namespace d_004e7d54
GUEST_EXPORT_FRAMED(0x004e7d54, d_004e7d54::f_004e7d54, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004e82b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e82b4 {

inline constexpr guest::Function<0x0024b448, u32(u32, u32, u32)> call_0024b448;
inline constexpr guest::Function<0x002fb94c, u32(u32)> call_002fb94c;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> call_0030b6b8;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;

void f_004e82b4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = *gptr<u8>(r0_1 + 0xau);  // (from the original)
    if (r0_2 >= 0x9bu || r0_2 != 0x93u && r0_2 != 0x94u) {  // (from the original)
        u32 r0_3 = call_0030b6b8(r0);
        r0_2 = r0_3 - 0x33b5u;  // (from the original)
        if (r0_2 > 6u) {
            return;
        }
    }
    u32 r0_4 = call_002fb94c(r0_2);
    if (r0_4 == 0) {
        return;
    }
    u32 r0_5 = r0_4 + 0x8ae0u;  // (from the original)
    call_0024b448(r0_5, 1u, 1u);
    call_0024b448(r0_5, 0x64u, 1u);  // (from the original)
}

}  // namespace d_004e82b4
GUEST_EXPORT_FRAMED(0x004e82b4, d_004e82b4::f_004e82b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_004e8868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e8868 {

inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;
inline constexpr guest::Function<0x002fb94c, u32(u32)> call_002fb94c;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;
inline constexpr guest::Function<0x00304ef0, u32(u32, u32)> call_00304ef0;
inline constexpr guest::Function<0x00313124, u32(u32)> call_00313124;
inline constexpr guest::Function<0x006bb358, u32(u32, u32)> call_006bb358;
inline constexpr guest::Function<0x006bb3bc, u32(u32, u32)> call_006bb3bc;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;
inline constexpr guest::Function<0x0076c288, u32(u32, u32, u32, u32)> call_0076c288;

struct __attribute__((packed)) Frame_004e8868 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x4];  // (not read or written by name)
    u8 byte_1c;
    u8 unknown_1d[0x3];  // (not read or written by name)
    u32 word_20;
};
GUEST_OFFSET(Frame_004e8868, word_0, 0x0);
GUEST_OFFSET(Frame_004e8868, word_14, 0x14);
GUEST_OFFSET(Frame_004e8868, byte_1c, 0x1c);
GUEST_OFFSET(Frame_004e8868, word_20, 0x20);
GUEST_SIZE(Frame_004e8868, 0x24);

u32 f_004e8868(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e8868> frame;  // the original's stack frame
    u32 r0_1 = call_002ff8b0(4u, r1, r2, r3);
    u32 r0_2 = call_002fb94c(r0_1);
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r9 = 0x33a7u;  // (from the original)
        u32 r4 = 0u;
        u32 r5 = r0_2 + 0x6bd0u;  // (from the original)
        u32 r7 = r4;
        u32 r8 = 0xau;  // (from the original)
        u32 r6 = 1u;
        do {
            u32 r0_3 = call_00724424(r5, r4, 0u, r3);
            call_002fc934(frame.at(0xc).addr(), r0_3);  // (from the original)
            call_002fc934(frame.at(0x10).addr(), frame.at(0xc).addr());  // (from the original)
            u32 r0_7 = call_00313124(frame.at(0xc).addr());  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_7 != 0) {
                frame->byte_1c = u8(r7);
                frame->word_20 = r6;
                frame->word_14 = r8;
                call_0076c288(frame.at(0xc).addr(), frame.at(0x1c).addr(), frame.at(0x20).addr(), frame.at(0x14).addr());  // (from the original)
                if (frame->byte_1c != 0 && frame->word_14 < 0xau) {  // (from the original)
                    call_002fcbb0(frame.at(0x18).addr(), r9);  // (from the original)
                    call_00304ef0(frame.at(0x18).addr(), frame->word_14);  // (from the original)
                    call_006bb3bc(frame.at(0x10).addr(), frame.at(0x18).addr());  // (from the original)
                    frame->word_0 = r6;
                    call_002bf9cc(r5, r4, frame.at(0x10).addr(), 0u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                } else {
                    call_006bb358(frame.at(0x10).addr(), 0u);  // (from the original)
                    r3 = guest::cpu()->r[3];
                }
            }
            r0_2 = frame.at(0xc).addr();  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
    }
    return r0_2;
}

}  // namespace d_004e8868
GUEST_EXPORT_FRAMED(0x004e8868, d_004e8868::f_004e8868, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e8b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e8b00 {

inline constexpr guest::Function<0x00203558, u32(u32)> call_00203558;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00300904, u32(u32)> call_00300904;
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;
inline constexpr guest::Function<0x0061a788, u32(u32)> call_0061a788;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;

u32 f_004e8b00(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 res_2 = 0;
    u32 r3_7 = 0;
    u32 res_3 = 0;
    u32 r3_9 = 0;
    u32 r6 = r0;
    r13 -= 0x28u;  // (from the original)
    u32 r4 = r2;
    u32 r5 = r1;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002f74e0(0x80u, r1, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_002f74e0(0x2000u, r5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_1 == 0) {
            r13 += 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_00300904(r0_1);
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_3 = call_0030b6c4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 == 0) {
            guest::cpu()->r[13] = r13;
            u32 r0_4 = call_0061a788(r5);
            if (r0_4 == 0) {
                goto L_4e8c18;
            }
        }
    } else {
        guest::cpu()->r[13] = r13;
        r0_1 = call_00203558(r5);
        r12 = r0_1;
        if (r0_1 == 0) {
            r13 += 0x28u;  // (from the original)
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        r2 = 4u;
        r0 = r6 - 4u;
        r1 = r13 - 1u;
        do {
            res_1 = r2 - 1u;
            r2 = res_1;
            *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
            u32 ea_3 = r0 + 8u;
            r0 = ea_3;
            r3_5 = *gptr<u32>(ea_3);
            u32 ea_4 = r1 + 2u;
            *gptr<u8>(ea_4) = u8(r3_5);
            r1 = ea_4;
            guest::preempt();
        } while (res_1 != 0);
        guest::cpu()->r[13] = r13;
        call_003081b4(r4 == 0 ? r12 + 0x12u : r12 + 0xau, r13, r2, r3_5);  // (from the original)
        r13 += 0x28u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_00203558(r5);
    r12 = r0_6;
    if (r0_6 != 0) {
        r2 = 4u;
        r0 = r6 - 4u;
        r1 = r13 + 0xfu;  // (from the original)
        do {
            res_2 = r2 - 1u;
            r2 = res_2;
            *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
            u32 ea_7 = r0 + 8u;
            r0 = ea_7;
            r3_7 = *gptr<u32>(ea_7);
            u32 ea_8 = r1 + 2u;
            *gptr<u8>(ea_8) = u8(r3_7);
            r1 = ea_8;
            guest::preempt();
        } while (res_2 != 0);
        guest::cpu()->r[13] = r13;
        call_003081b4(r4 == 0 ? r12 + 0x12u : r12 + 0xau, r13 + 0x10u, r2, r3_7);  // (from the original)
    }
L_4e8c18:;
    r2 = 4u;
    r0 = r6 - 4u;
    r1 = r13 - 1u;
    do {
        res_3 = r2 - 1u;
        r2 = res_3;
        *gptr<u8>(r1 + 1u) = u8(*gptr<u32>(r0 + 4u));
        u32 ea_11 = r0 + 8u;
        r0 = ea_11;
        r3_9 = *gptr<u32>(ea_11);
        u32 ea_12 = r1 + 2u;
        *gptr<u8>(ea_12) = u8(r3_9);
        r1 = ea_12;
        guest::preempt();
    } while (res_3 != 0);
    *gptr<u8>(r13 + 8u) = u8(r5);
    *gptr<u8>(r13 + 9u) = u8(r4);
    u32 r4_1 = 0u;
    guest::cpu()->r[13] = r13;
    u32 r0_8 = call_0030b6c4(r0, r1, r2, r3_9);
    if (r0_8 != 0) {
        r4_1 = 4u;
    }
    guest::cpu()->r[13] = r13;
    call_006249b0(0x55u, r4_1, r13, 0xau);  // (from the original)
    r13 += 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_004e8b00
GUEST_EXPORT(0x004e8b00, d_004e8b00::f_004e8b00);

// f_004e93d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e93d8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x00303acc, u32(u32)> call_00303acc;
inline constexpr guest::Function<0x004e0cec, u32(u32, u32, u32, u32)> call_004e0cec;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x00768d60, u32(u32)> call_00768d60;

struct __attribute__((packed)) Frame_004e93d8 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e93d8, word_0, 0x0);
GUEST_SIZE(Frame_004e93d8, 0x8);

u32 f_004e93d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e93d8> frame;  // the original's stack frame
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    frame->word_0 = 0;
    u32 r0_2 = call_004e0cec(r0, r1, 0u, r0_1);
    call_002fc934(frame.at(4).addr(), r0_2);
    if (r2 == 0) {
        u32 r0_5 = call_00303acc(frame.at(4).addr());
        if (r0_5 != 0) {
            return 0u;
        }
    }
    u32 r0_7 = call_00768d60(frame.at(4).addr());
    return r0_7 ^ 1u;
}

}  // namespace d_004e93d8
GUEST_EXPORT_FRAMED(0x004e93d8, d_004e93d8::f_004e93d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e95f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e95f0 {

inline guest::global<u8, 0x009529d5> global_009529d5;
inline guest::global<u8, 0x009529d6> global_009529d6;
inline guest::global<u8, 0x009529d7> global_009529d7;

u32 f_004e95f0() {
    *global_009529d5 = 0;
    *global_009529d6 = 0;
    *global_009529d7 = 0;
    guest::cpu()->r[1] = 0u;
    return 0x9529d4u;  // (from the original)
}

}  // namespace d_004e95f0
GUEST_EXPORT(0x004e95f0, d_004e95f0::f_004e95f0);

// f_004e960c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e960c {

struct __attribute__((packed)) Object_004e960c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_0, word_0, 0x0);

struct __attribute__((packed)) Object_004e960c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_004e960c_1, word_0, 0x0);

struct __attribute__((packed)) Local_004e960c_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_004e960c_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x00613718, u32(u32, u32)> call_00613718;

u32 f_004e960c(gptr<Object_004e960c_0> arg0, gptr<Object_004e960c_1> arg1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = r0 == 0;
    gptr<Local_004e960c_r5_1> r5_1 = gptr<Local_004e960c_r5_1>(r1);
    if (!zf_1) {
        zf_1 = r5_1.addr() == 0;
    }
    u32 r6_1 = *gptr<u32>(guest::cpu()->r[13] + 0x20u);  // (from the original)
    if (!zf_1) {
        if (r6_1 == 0) {
            r1 = 0x40u;  // (from the original)
            arg0->word_0 = r1;
            r0_1 = 0x50u;  // (from the original)
        } else {
            r0_1 = 0x10u;  // (from the original)
            arg0->word_0 = r0_1;
        }
        arg1->word_0 = r0_1;
        u32 r0_2 = call_002f74c8(r0_1, r1, r2, r3);
        u32 r0_3 = call_002f74e0(8u, r0_2);
        r1 = guest::cpu()->r[1];
        if (r0_3 != 0) {
            u32 nf_1 = r2 - 0x10u >> 0x1f;  // (from the original)
            u32 vf_1 = ((r2 ^ 0x10u) & (r2 ^ r2 - 0x10u)) >> 0x1f;  // (from the original)
            if (nf_1 != vf_1) {
                nf_1 = r3 - 0x10u >> 0x1f;  // (from the original)
                vf_1 = ((r3 ^ 0x10u) & (r3 ^ r3 - 0x10u)) >> 0x1f;  // (from the original)
            }
            if (nf_1 != vf_1) {
                goto L_4e96a0;
            }
        }
        r0_4 = call_002f74e0(0x200u, r0_2);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            u32 r0_5 = call_002f74e0(0x10000000u, r0_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                u32 r0_6 = call_002f74e0(0x20u, r0_2);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    u32 r0_7 = call_00613718(r2, r3);
                    r1 = guest::cpu()->r[1];
                    if (r0_7 != 0) {
                        r1 = r2 - 0x10u;  // (from the original)
                        arg0->word_0 = r3 - 0x10u;  // (from the original)
                        r5_1->word_0 = r1;
                    }
                }
                goto L_4e96ec;
            }
        }
L_4e96a0:;
        arg0->word_0 = r3;
        r5_1->word_0 = r2;
L_4e96ec:;
        if (r6_1 != 0) {
            if (r6_1 == 1u) {
                goto L_4e971c;
            }
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        if (arg0->word_0 >= 0x40u || r5_1->word_0 >= 0x50u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        guest::cpu()->r[1] = r1;
        return 1u;
L_4e971c:;
        if (arg0->word_0 < 0x10u && r5_1->word_0 < 0x10u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_004e960c
GUEST_EXPORT_FRAMED(0x004e960c, d_004e960c::f_004e960c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e9738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9738 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;
inline constexpr guest::Function<0x005b41e8, u32(u32)> call_005b41e8;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> call_007529d8;

struct __attribute__((packed)) Frame_004e9738 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9738, word_0, 0x0);
GUEST_OFFSET(Frame_004e9738, word_4, 0x4);
GUEST_OFFSET(Frame_004e9738, word_c, 0xc);
GUEST_SIZE(Frame_004e9738, 0x14);

void f_004e9738(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e9738> frame;  // the original's stack frame
    u32 r1_5 = 0;
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8 = r2;
    u32 r9 = r3;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    u32 r0_2 = call_002f74c8(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_005b41e8(r0_2);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0 && r0_3 < 2u && r0_3 >= r6) {
        u32 r0_4 = call_007529d8(r0_1, r8, r9);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r5 = 0x9c7a14u;  // (from the original)
            u32 r0_5 = call_002f74c8(r0_4, r1);
            u32 r0_6 = call_005b42fc(r0_5);
            r1 = r0_6;
            if (r0_6 != 0) {
                r2 = r1 & 1u;
                r0 = 0u;
                if (r2 >= 0u && r2 != 0) {
                    do {
                        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
                            goto L_4e97fc;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (r2 > r0);
                }
                r0 = r2;
                if (r2 >= r1) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
L_4e97dc:;
                if (*gptr<u32>(r5 + (r0 << 2)) != r4) {
                    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
                        r0 += 2u;
                        if (r1 > r0) {
                            guest::preempt();
                            goto L_4e97dc;
                        }
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                    r0 += 1u;
                }
L_4e97fc:;
                if (r0 + 1u != 0) {
                    frame->word_c = 0;
                    u32 r4_1 = sxtb(r0);
                    frame->word_4 = 0;
                    frame->word_0 = r6;
                    u32 r0_8 = call_004e960c(frame.at(0xc).addr(), frame.at(4).addr(), r8, r9);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        u32 r0_9 = frame->word_c;
                        if (r6 == 1u) {
                            r1_5 = frame->word_4;
                            *gptr<u8>(r7 + (r0_9 << 4) + r1_5 + 0x1400u) = u8(r4_1);  // (from the original)
                        } else {
                            r1_5 = frame->word_4;
                            *gptr<u8>(r7 + r0_9 * 0x50u + r1_5) = u8(r4_1);  // (from the original)
                        }
                        guest::cpu()->r[1] = r1_5;
                        return;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004e9738
GUEST_EXPORT_FRAMED(0x004e9738, d_004e9738::f_004e9738, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004e9894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9894 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e960c, u32(u32, u32, u32, u32)> call_004e960c;
inline constexpr guest::Function<0x005b41e8, u32(u32)> call_005b41e8;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;
inline constexpr guest::Function<0x007529d8, u32(u32, u32, u32)> call_007529d8;

struct __attribute__((packed)) Frame_004e9894 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9894, word_0, 0x0);
GUEST_OFFSET(Frame_004e9894, word_4, 0x4);
GUEST_OFFSET(Frame_004e9894, word_8, 0x8);
GUEST_SIZE(Frame_004e9894, 0x10);

void f_004e9894(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e9894> frame;  // the original's stack frame
    u32 r1_5 = 0;
    u32 r7 = r0;
    u32 r4 = r1;
    u32 r6 = *frame.at<u32>(0x30);  // (from the original)
    u32 r8 = r2;
    u32 r9 = r3;
    u32 r0_1 = call_006a5e34(r0, r1, r2, r3);
    u32 r0_2 = call_002f74c8(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_005b41e8(r0_2);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0 && r0_3 < 2u && r0_3 >= r6) {
        u32 r0_4 = call_007529d8(r0_1, r8, r9);
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r5 = 0x9c7a14u;  // (from the original)
            u32 r0_5 = call_002f74c8(r0_4, r1);
            u32 r0_6 = call_005b42fc(r0_5);
            r1 = r0_6;
            u32 r10 = ~0u;
            if (r0_6 != 0) {
                r2 = r1 & 1u;
                r0 = 0u;
                if (r2 >= 0u && r2 != 0) {
                    do {
                        if (*gptr<u32>(r5 + (r0 << 2)) == r4) {
                            goto L_4e995c;
                        }
                        r0 += 1u;
                        guest::preempt();
                    } while (r2 > r0);
                }
                r0 = r2;
                if (r2 >= r1) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
L_4e993c:;
                if (*gptr<u32>(r5 + (r0 << 2)) != r4) {
                    if (*gptr<u32>(r5 + (r0 << 2) + 4u) != r4) {
                        r0 += 2u;
                        if (r1 > r0) {
                            guest::preempt();
                            goto L_4e993c;
                        }
                        guest::cpu()->r[1] = r1;
                        return;
                    }
                    r0 += 1u;
                }
L_4e995c:;
                if (r0 + 1u != 0) {
                    frame->word_4 = 0;
                    frame->word_8 = 0;
                    frame->word_0 = r6;
                    u32 r0_8 = call_004e960c(frame.at(4).addr(), frame.at(8).addr(), r8, r9);
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        u32 r0_9 = frame->word_4;
                        if (r6 == 1u) {
                            r1_5 = frame->word_8;
                            *gptr<u8>(r7 + (r0_9 << 4) + r1_5 + 0x1400u) = u8(r10);  // (from the original)
                        } else {
                            r1_5 = frame->word_8;
                            *gptr<u8>(r7 + r0_9 * 0x50u + r1_5) = u8(r10);  // (from the original)
                        }
                        guest::cpu()->r[1] = r1_5;
                        return;
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004e9894
GUEST_EXPORT_FRAMED(0x004e9894, d_004e9894::f_004e9894, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_004e99f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e99f0 {

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;

struct __attribute__((packed)) Frame_004e99f0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e99f0, word_0, 0x0);
GUEST_OFFSET(Frame_004e99f0, word_4, 0x4);
GUEST_SIZE(Frame_004e99f0, 0xc);

u32 f_004e99f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004e99f0> frame;  // the original's stack frame
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r1, r3);
    u32 r0_2 = call_004e9a28(r0, frame->word_0, frame->word_4, r2);
    return r0_2;
}

}  // namespace d_004e99f0
GUEST_EXPORT_FRAMED(0x004e99f0, d_004e99f0::f_004e99f0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004e9a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9a28 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x005b42fc, u32(u32)> call_005b42fc;
inline constexpr guest::Function<0x007457e8, u32(u32, u32, u32, u32)> call_007457e8;

u32 f_004e9a28(u32 r0, u32 r1) {
    u32 r0_6 = 0;
    u32 r0_1 = call_007457e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_002f74c8(r0_1, r1);
    u32 r0_3 = call_002f74e0(8u, r0_2);
    if (r0_1 + 1u != 0) {
        u32 r0_4 = call_002f74c8(r0_3, guest::cpu()->r[1]);
        u32 r0_5 = call_005b42fc(r0_4);
        r0_6 = r0_5 <= 0x30u && r0_1 < r0_5 ? *gptr<u32>((r0_1 << 2) + 0x9c7a14u) : 0u;  // (from the original)
    } else {
        r0_6 = 0u;
    }
    return r0_6;
}

}  // namespace d_004e9a28
GUEST_EXPORT_FRAMED(0x004e9a28, d_004e9a28::f_004e9a28, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004e9dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9dc8 {

struct __attribute__((packed)) Local_004e9dc8_r0_1 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004e9dc8_r0_1, byte_0, 0x0);
GUEST_OFFSET(Local_004e9dc8_r0_1, byte_1, 0x1);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004e9dc8_r0_1, float_c, 0xc);

inline guest::global<u32, 0x0094f310> global_0094f310;
inline guest::global<u8, 0x0094f340> global_0094f340;
inline constexpr guest::Function<0x0018a390, u32(u32)> call_0018a390;
inline constexpr guest::Function<0x00582464, u32(u32, u32, u32, u32)> call_00582464;
inline constexpr guest::Function<0x00691538, u32(u32)> call_00691538;
inline constexpr guest::Function<0x00693570, u32(u32, u32, u32, u32)> call_00693570;
inline constexpr guest::Function<0x00693778, u32(u32)> call_00693778;
inline constexpr guest::Function<0x0077957c, u32(u32)> call_0077957c;

u32 f_004e9dc8() {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 res_1 = 0;
    u32 r4 = 0u;
    u32 r1 = r4;
    u32 r5 = 0x9529d4u;  // (from the original)
    u32 r2 = 0x9c79d4u;  // (from the original)
    float S0 = 0.0f;
    u32 r3 = 0xa5u;  // (from the original)
    *gptr<u8>(r5) = u8(r4);
    do {
        gptr<Local_004e9dc8_r0_1> r0_1 = gptr<Local_004e9dc8_r0_1>(r2 + (r1 << 4));
        r1 += 1u;
        r0_1->byte_0 = u8(r4);
        r0_1->byte_1 = u8(r3);
        r0_1->float_4 = S0;
        r0_1->float_8 = S0;
        r0_1->float_c = S0;
        guest::preempt();
    } while (r1 < 4u);
    r2 = 0x9c7a14u;  // (from the original)
    r1 = 0u;
    u32 r0 = r1;
    do {
        r0 += 2u;
        *gptr<u32>(r2 + (r1 << 2)) = r4;
        u32 r1_1 = r1 + 1u;
        *gptr<u32>(r2 + (r1_1 << 2)) = r4;
        r1 = r1_1 + 1u;
        guest::preempt();
    } while (r0 < 0x30u);  // (from the original)
    u32 r14 = 0x9c7ad4u;  // (from the original)
    r0 = 0u;
    r2 = ~0u;
    do {
        r1 = 0u;
        r3 = 0x50u;  // (from the original)
        u32 r12 = r14 + r0 * 0x50u;  // (from the original)
        u32 r6 = r14 + (r0 << 4);
        do {
            *gptr<u8>(r12 + r1) = u8(r2);
            if (r1 < 0x10u && r0 < 0x10u) {  // (from the original)
                *gptr<u8>(r6 + r1 + 0x1400u) = u8(r2);  // (from the original)
            }
            res_1 = r3 - 1u;
            r3 = res_1;
            r1 += 1u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x40u);  // (from the original)
    *gptr<u8>(r5 + 1u) = u8(r4);
    *gptr<u8>(r5 + 2u) = u8(r4);
    *gptr<u8>(r5 + 3u) = u8(r4);
    *global_0094f310 = r4;
    *global_0094f340 = u8(r4);
    guest::cpu()->s[0] = S0;
    u32 r0_2 = call_00693570(0x94f340u, r1, r2, r3);  // (from the original)
    u32 r0_3 = call_00693778(r0_2);
    u32 r0_4 = call_00691538(r0_3);
    u32 r0_5 = call_0077957c(r0_4);
    u32 r0_6 = call_0018a390(r0_5);
    frame.release();
    return call_00582464(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004e9dc8
GUEST_EXPORT(0x004e9dc8, d_004e9dc8::f_004e9dc8);

// f_004e9f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9f74 {

struct __attribute__((packed)) Local_004e9f74_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_004e9f74_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_004e9f74_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004e9f74_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_004e9f74_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_004e9f74_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_004e9f74_ea_3, word_c, 0xc);

inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;
inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> call_006c602c;
inline constexpr guest::Function<0x00750894, u32(u32)> call_00750894;
inline constexpr guest::Function<0x00751d00, u32(u32)> call_00751d00;

struct __attribute__((packed)) Frame_004e9f74 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004e9f74, word_0, 0x0);
GUEST_OFFSET(Frame_004e9f74, word_4, 0x4);
GUEST_SIZE(Frame_004e9f74, 0x18);

void f_004e9f74(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004e9f74> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    float S0_4 = 0;
    gptr<Local_004e9f74_ea_1> ea_1 = gptr<Local_004e9f74_ea_1>(frame.at(8).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    call_003171b4(frame.at(0).addr(), frame.at(4).addr(), r0, r3);
    u32 r5_1 = frame->word_4;
    u32 r6_1 = frame->word_0;
    u32 r0_2 = call_004e9a28(0x9c7ad4u, r6_1, r5_1, 0u);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_3 = call_00750894(r0_2);
        if (r0_3 == 0) {
            call_00751d00(r0_2);
            S0_4 = guest::cpu()->s[0];
        } else {
            S0_4 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x18u));  // (from the original)
        }
        gptr<Local_004e9f74_ea_2> ea_2 = gptr<Local_004e9f74_ea_2>(frame.at(8).addr());
        u32 r4_1 = ea_2->word_0;
        u32 r5_2 = ea_2->word_4;
        u32 r6_2 = ea_2->word_8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->s[0] = S0_4;
        return;
    }
    call_006c602c(r6_1, r5_1, 0u);
    gptr<Local_004e9f74_ea_3> ea_3 = gptr<Local_004e9f74_ea_3>(frame.at(8).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_3 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
}

}  // namespace d_004e9f74
GUEST_EXPORT(0x004e9f74, d_004e9f74::f_004e9f74);

// f_004e9fe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004e9fe8 {

inline constexpr guest::Function<0x004e9a28, u32(u32, u32, u32, u32)> call_004e9a28;
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32)> call_006c602c;
inline constexpr guest::Function<0x00750894, u32(u32)> call_00750894;
inline constexpr guest::Function<0x00751d00, u32(u32, u32)> call_00751d00;

u32 f_004e9fe8(u32 r0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_004e9a28(0x9c7ad4u, r0, r1, 0u);  // (from the original)
    if (r0_1 != 0) {
        u32 r0_2 = call_00750894(r0_1);
        if (r0_2 != 0) {
            float S0_3 = std::bit_cast<float>(*gptr<u32>(r0_1 + 0x18u));  // (from the original)
            guest::cpu()->s[0] = S0_3;
            return r0_2;
        }
        frame.release();
        return call_00751d00(r0_1, guest::cpu()->r[1]);
    }
    frame.release();
    return call_006c602c(r0, r1, 0u);
}

}  // namespace d_004e9fe8
GUEST_EXPORT(0x004e9fe8, d_004e9fe8::f_004e9fe8);

// f_004ea054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ea054 {

inline constexpr guest::Function<0x00536060, u32(u32)> call_00536060;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;
inline constexpr guest::Function<0x00544f18, u32(u32)> call_00544f18;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> call_00544fec;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> call_0054a644;
inline constexpr guest::Function<0x0076b5dc, u32(u32)> call_0076b5dc;
inline constexpr guest::Function<0x0076c648, u32(u32)> call_0076c648;

u32 f_004ea054(u32 r0, u32 r1) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r0_1 = call_005361a8(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u8>(r0_1 + 0x11u);  // (from the original)
        if (r0_2 < 0x56u && r0_2 == 0x22u) {  // (from the original)
            u32 r0_3 = frame.at(0).addr();
            call_0054a644(r0_3, r0);
            call_00544fec(r0_3, 0x865670u);  // (from the original)
            call_00544f18(r0_3);
            return 1u;
        }
    }
    r0_4 = call_00536060(r1);
    if (r0_4 != 0) {
        u32 r0_5 = frame.at(0).addr();
        call_0054a644(r0_5, r0);
        call_00544fec(r0_5, 0x865698u);  // (from the original)
        call_00544fec(r0_5, r0_4);
        call_00544f18(r0_5);
        u32 r0_6 = call_0076c648(r1);
        if (r0_6 == 0) {
            return 1u;
        }
        u32 r0_7 = call_0076b5dc(r1);
        if (r0_7 == 2u) {
            u32 r0_8 = frame.at(0).addr();
            call_0054a644(r0_8, r0);
            call_00544fec(r0_8, 0x8656acu);  // (from the original)
            call_00544fec(r0_8, r0_4);
            call_00544f18(r0_8);
            return 1u;
        }
        if (r0_7 == 4u) {
            u32 r0_9 = frame.at(0).addr();
            call_0054a644(r0_9, r0);
            call_00544fec(r0_9, 0x8656c4u);  // (from the original)
            call_00544fec(r0_9, r0_4);
            call_00544f18(r0_9);
            return 1u;
        }
        return 1u;
    }
    return r0_4;
}

}  // namespace d_004ea054
GUEST_EXPORT_FRAMED(0x004ea054, d_004ea054::f_004ea054, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ea4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ea4a0 {

inline guest::global<u32, 0x00950440> global_00950440;
inline guest::global<u32, 0x00952a38> global_00952a38;
inline guest::global<u32, 0x00952a4c> global_00952a4c;
inline guest::global<u32, 0x009c90c0> global_009c90c0;
inline constexpr guest::Function<0x00264668, u32(u32, u32)> call_00264668;
inline constexpr guest::Function<0x00264698, u32(u32, u32, u32, u32)> call_00264698;
inline constexpr guest::Function<0x004ec574, u32(u32, u32)> call_004ec574;

void f_004ea4a0(u32 r0_unused, u32 r1) {
    u32 r4_1 = *global_00950440;
    if (r4_1 != 0) {
        call_00264698(r4_1, *global_00952a38, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(*global_00952a38 + 0xa4u);  // (from the original)
        *global_00952a4c = r1_2;
        call_004ec574(*global_009c90c0, r1_2);
        call_00264668(r4_1, *global_00952a38);
        r1 = guest::cpu()->r[1];
        *global_00952a4c = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004ea4a0
GUEST_EXPORT_FRAMED(0x004ea4a0, d_004ea4a0::f_004ea4a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004eabd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eabd0 {

inline guest::global<u32, 0x00952a38> global_00952a38;

u32 f_004eabd0() {
    u32 r0_1 = *global_00952a38;
    *gptr<u8>(r0_1 + 0xecu) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_004eabd0
GUEST_EXPORT(0x004eabd0, d_004eabd0::f_004eabd0);

// f_004eabe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eabe8 {

struct __attribute__((packed)) Object_004eabe8_0 {
    u8 unknown_0[0x220];  // (not used here)
    u32 word_220;
};
GUEST_OFFSET(Object_004eabe8_0, word_220, 0x220);

inline guest::global<u32, 0x00952a2c> global_00952a2c;
inline guest::global<u32, 0x00952a30> global_00952a30;
inline guest::global<u32, 0x00952a4c> global_00952a4c;
inline constexpr guest::Function<0x00737f20, u32(u32, u32, u32, u32)> call_00737f20;

void f_004eabe8(gptr<Object_004eabe8_0> arg0) {
    u32 r3_1 = *global_00952a4c;
    if (r3_1 == 0) {
        return;
    }
    call_00737f20(*global_00952a2c, arg0->word_220, *global_00952a30, r3_1);
}

}  // namespace d_004eabe8
GUEST_EXPORT(0x004eabe8, d_004eabe8::f_004eabe8);

// f_004ead50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ead50 {

inline guest::global<u8, 0x00952a20> global_00952a20;
inline guest::global<u32, 0x00952a38> global_00952a38;
inline constexpr guest::Function<0x004efb0c, u32(u32, u32)> call_004efb0c;
inline constexpr guest::Function<0x005ce368, u32(u32, u32, u32, u32)> call_005ce368;

void f_004ead50(u32 r0, u32 r1) {
    u32 r0_1 = *global_00952a20;
    if (r0_1 == 1u) {
        u32 r0_2 = call_005ce368(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            call_004efb0c(r0, 1u);
            r1 = 0u;
            *gptr<u32>(*gptr<u32>(*global_00952a38 + 0xc0u)) = r1;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004ead50
GUEST_EXPORT_FRAMED(0x004ead50, d_004ead50::f_004ead50, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ead98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ead98 {

struct __attribute__((packed)) Object_004ead98_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_004ead98_0, word_10, 0x10);
GUEST_OFFSET(Object_004ead98_0, word_14, 0x14);
GUEST_OFFSET(Object_004ead98_0, word_18, 0x18);


u32 f_004ead98(gptr<Object_004ead98_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_10 = r1;
    arg0->word_14 = r2;
    arg0->word_18 = r3;
    return arg0.addr() + 0x10u;  // (from the original)
}

}  // namespace d_004ead98
GUEST_EXPORT(0x004ead98, d_004ead98::f_004ead98);

// f_004eae74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eae74 {

struct __attribute__((packed)) Object_004eae74_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004eae74_0, word_8, 0x8);


u32 f_004eae74(gptr<Object_004eae74_0> arg0) {
    u32 r0 = arg0.addr();
    r0 = 0u;
    u32 r3 = arg0->word_8;
    u32 r2 = r0;
    u32 r4 = *gptr<u32>(r3 + 0x64u);  // (from the original)
    if (r4 >= 0u && r4 != 0) {
        u32 r12 = *gptr<u32>(r3 + 0x68u);  // (from the original)
        u32 r5 = 0u;
        do {
            u32 r1_1 = r12 == 0 ? r5 : r3 + 0x68u + r12;  // (from the original)
            if (r1_1 != 0) {
                u32 ea_1 = r1_1 + (r2 << 4) + 0x28u;  // (from the original)
                u32 r6_1 = *gptr<u32>(ea_1);
                r1_1 = r6_1 == 0 ? r5 : ea_1 + r6_1;
            }
            r2 += 1u;
            u32 r1_2 = *gptr<u32>(r1_1 + 0x18u);  // (from the original)
            if (r1_2 > r0) {
                r0 = r1_2;
            }
            guest::preempt();
        } while (r4 > r2);
    }
    return r0;
}

}  // namespace d_004eae74
GUEST_EXPORT_FRAMED(0x004eae74, d_004eae74::f_004eae74, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_004eb148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb148 {

struct __attribute__((packed)) Local_004eb148_r0_10 {
    u8 unknown_0[0xac];  // (not used here)
    u32 word_ac;
    u32 word_b0;
};
GUEST_OFFSET(Local_004eb148_r0_10, word_ac, 0xac);
GUEST_OFFSET(Local_004eb148_r0_10, word_b0, 0xb0);

struct __attribute__((packed)) Local_004eb148_r0_11 {
    u8 unknown_0[0x4c];  // (not used here)
    u32 word_4c;
    u32 word_50;
};
GUEST_OFFSET(Local_004eb148_r0_11, word_4c, 0x4c);
GUEST_OFFSET(Local_004eb148_r0_11, word_50, 0x50);

struct __attribute__((packed)) Local_004eb148_r0_12 {
    u8 unknown_0[0x5c];  // (not used here)
    u32 word_5c;
    u32 word_60;
};
GUEST_OFFSET(Local_004eb148_r0_12, word_5c, 0x5c);
GUEST_OFFSET(Local_004eb148_r0_12, word_60, 0x60);

struct __attribute__((packed)) Local_004eb148_r0_13 {
    u8 unknown_0[0xbc];  // (not used here)
    u32 word_bc;
    u32 word_c0;
};
GUEST_OFFSET(Local_004eb148_r0_13, word_bc, 0xbc);
GUEST_OFFSET(Local_004eb148_r0_13, word_c0, 0xc0);

struct __attribute__((packed)) Local_004eb148_r0_14 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u32 word_d0;
};
GUEST_OFFSET(Local_004eb148_r0_14, word_cc, 0xcc);
GUEST_OFFSET(Local_004eb148_r0_14, word_d0, 0xd0);

struct __attribute__((packed)) Local_004eb148_r0_15 {
    u8 unknown_0[0xdc];  // (not used here)
    u32 word_dc;
    u32 word_e0;
};
GUEST_OFFSET(Local_004eb148_r0_15, word_dc, 0xdc);
GUEST_OFFSET(Local_004eb148_r0_15, word_e0, 0xe0);

struct __attribute__((packed)) Local_004eb148_r0_16 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
    u32 word_f0;
};
GUEST_OFFSET(Local_004eb148_r0_16, word_ec, 0xec);
GUEST_OFFSET(Local_004eb148_r0_16, word_f0, 0xf0);

struct __attribute__((packed)) Local_004eb148_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004eb148_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_004eb148_r0_2, word_10, 0x10);

struct __attribute__((packed)) Local_004eb148_r0_3 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_004eb148_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_004eb148_r0_3, word_20, 0x20);

struct __attribute__((packed)) Local_004eb148_r0_4 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Local_004eb148_r0_4, word_2c, 0x2c);
GUEST_OFFSET(Local_004eb148_r0_4, word_30, 0x30);

struct __attribute__((packed)) Local_004eb148_r0_5 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Local_004eb148_r0_5, word_3c, 0x3c);
GUEST_OFFSET(Local_004eb148_r0_5, word_40, 0x40);

struct __attribute__((packed)) Local_004eb148_r0_6 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
    u32 word_70;
};
GUEST_OFFSET(Local_004eb148_r0_6, word_6c, 0x6c);
GUEST_OFFSET(Local_004eb148_r0_6, word_70, 0x70);

struct __attribute__((packed)) Local_004eb148_r0_7 {
    u8 unknown_0[0x7c];  // (not used here)
    u32 word_7c;
    u32 word_80;
};
GUEST_OFFSET(Local_004eb148_r0_7, word_7c, 0x7c);
GUEST_OFFSET(Local_004eb148_r0_7, word_80, 0x80);

struct __attribute__((packed)) Local_004eb148_r0_8 {
    u8 unknown_0[0x8c];  // (not used here)
    u32 word_8c;
    u32 word_90;
};
GUEST_OFFSET(Local_004eb148_r0_8, word_8c, 0x8c);
GUEST_OFFSET(Local_004eb148_r0_8, word_90, 0x90);

struct __attribute__((packed)) Local_004eb148_r0_9 {
    u8 unknown_0[0x9c];  // (not used here)
    u32 word_9c;
    u32 word_a0;
};
GUEST_OFFSET(Local_004eb148_r0_9, word_9c, 0x9c);
GUEST_OFFSET(Local_004eb148_r0_9, word_a0, 0xa0);

inline constexpr guest::Function<0x0049a0f0, u32(u32, u32, u32, u32)> call_0049a0f0;
inline constexpr guest::Function<0x004edd88, u32(u32, u32)> call_004edd88;
inline constexpr guest::Function<0x004eedbc, u32(u32, u32)> call_004eedbc;

void f_004eb148() {
    gptr<Local_004eb148_r0_16> r0_16 = gptr<Local_004eb148_r0_16>(0u);
    u32 r1_2 = 0;
    u32 r4 = 0u;
    u32 r5 = 0x9c90b8u;  // (from the original)
    u32 r6 = r5 + 0xcu;  // (from the original)
    do {
        call_0049a0f0(*gptr<u32>(r6 + (r4 << 2)), *gptr<u32>(r5 + (r4 << 2)), guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_004eb148_r0_2> r0_2 = gptr<Local_004eb148_r0_2>(*gptr<u32>(r5 + (r4 << 2)));
        r0_2->word_10 = r0_2->word_c;
        gptr<Local_004eb148_r0_3> r0_3 = gptr<Local_004eb148_r0_3>(*gptr<u32>(r5 + (r4 << 2)));
        r0_3->word_20 = r0_3->word_1c;
        gptr<Local_004eb148_r0_4> r0_4 = gptr<Local_004eb148_r0_4>(*gptr<u32>(r5 + (r4 << 2)));
        r0_4->word_30 = r0_4->word_2c;
        gptr<Local_004eb148_r0_5> r0_5 = gptr<Local_004eb148_r0_5>(*gptr<u32>(r5 + (r4 << 2)));
        r0_5->word_40 = r0_5->word_3c;
        gptr<Local_004eb148_r0_6> r0_6 = gptr<Local_004eb148_r0_6>(*gptr<u32>(r5 + (r4 << 2)));
        r0_6->word_70 = r0_6->word_6c;
        gptr<Local_004eb148_r0_7> r0_7 = gptr<Local_004eb148_r0_7>(*gptr<u32>(r5 + (r4 << 2)));
        r0_7->word_80 = r0_7->word_7c;
        gptr<Local_004eb148_r0_8> r0_8 = gptr<Local_004eb148_r0_8>(*gptr<u32>(r5 + (r4 << 2)));
        r0_8->word_90 = r0_8->word_8c;
        gptr<Local_004eb148_r0_9> r0_9 = gptr<Local_004eb148_r0_9>(*gptr<u32>(r5 + (r4 << 2)));
        r0_9->word_a0 = r0_9->word_9c;
        gptr<Local_004eb148_r0_10> r0_10 = gptr<Local_004eb148_r0_10>(*gptr<u32>(r5 + (r4 << 2)));
        r0_10->word_b0 = r0_10->word_ac;
        gptr<Local_004eb148_r0_11> r0_11 = gptr<Local_004eb148_r0_11>(*gptr<u32>(r5 + (r4 << 2)));
        r0_11->word_50 = r0_11->word_4c;
        gptr<Local_004eb148_r0_12> r0_12 = gptr<Local_004eb148_r0_12>(*gptr<u32>(r5 + (r4 << 2)));
        r0_12->word_60 = r0_12->word_5c;
        gptr<Local_004eb148_r0_13> r0_13 = gptr<Local_004eb148_r0_13>(*gptr<u32>(r5 + (r4 << 2)));
        r0_13->word_c0 = r0_13->word_bc;
        gptr<Local_004eb148_r0_14> r0_14 = gptr<Local_004eb148_r0_14>(*gptr<u32>(r5 + (r4 << 2)));
        r0_14->word_d0 = r0_14->word_cc;
        gptr<Local_004eb148_r0_15> r0_15 = gptr<Local_004eb148_r0_15>(*gptr<u32>(r5 + (r4 << 2)));
        r0_15->word_e0 = r0_15->word_dc;
        r0_16 = gptr<Local_004eb148_r0_16>(*gptr<u32>(r5 + (r4 << 2)));
        r4 += 1u;
        r1_2 = r0_16->word_ec;
        r0_16->word_f0 = r1_2;
        guest::preempt();
    } while (s32(r4) < 3);
    u32 r0_17 = call_004eedbc(r0_16.addr(), r1_2);
    u32 r1 = guest::cpu()->r[1];
    r5 = r0_17 + 0x80u;  // (from the original)
    r4 = r0_17;
    if (r0_17 < r5) {
        do {
            call_004edd88(r4, r1);
            r1 = guest::cpu()->r[1];
            r4 += 0x40u;  // (from the original)
            guest::preempt();
        } while (r4 < r5);
    }
}

}  // namespace d_004eb148
GUEST_EXPORT_FRAMED(0x004eb148, d_004eb148::f_004eb148, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004eb254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb254 {


u32 f_004eb254(u32 r0) {
    guest::cpu()->r[1] = 0x9c9198u;  // (from the original)
    return r0 * 0x108u + 0x9c9198u;  // (from the original)
}

}  // namespace d_004eb254
GUEST_EXPORT(0x004eb254, d_004eb254::f_004eb254);

// f_004eb3a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3a0 {

struct __attribute__((packed)) Object_004eb3a0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_004eb3a0_0, word_4, 0x4);
GUEST_OFFSET(Object_004eb3a0_0, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32, u32, u32)> call_002b5fc4;
inline constexpr guest::Function<0x004eb858, u32(u32, u32, u32, u32)> call_004eb858;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> call_0071cc4c;

void f_004eb3a0(gptr<Object_004eb3a0_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002b5fc4(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_002b5fc4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r4_1 = arg0.addr() + 4u;
        u32 r0_3 = call_0071cc4c(r0_2, arg0->word_4, arg0->word_8);
        if (r0_3 != 0) {
            frame.release();
            call_004eb858(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            return;
        }
    }
}

}  // namespace d_004eb3a0
GUEST_EXPORT(0x004eb3a0, d_004eb3a0::f_004eb3a0);

// f_004eb3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb3e0 {

struct __attribute__((packed)) Object_004eb3e0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_004eb3e0_0, word_4, 0x4);
GUEST_OFFSET(Object_004eb3e0_0, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> call_002b5fc4;
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32)> call_004eb9d4;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> call_0071cc4c;

u32 f_004eb3e0(gptr<Object_004eb3e0_0> arg0, u32 r1) {
    u32 r0_1 = call_002b5fc4(arg0.addr(), r1);
    if (r0_1 == 0) {
        return 0u;
    }
    u32 r0_2 = call_002b5fc4(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_0071cc4c(r0_2, arg0->word_4, arg0->word_8);
    if (r0_3 == 0) {
        return 0u;
    }
    u32 r0_4 = call_004eb9d4(r0_3, 0xau);  // (from the original)
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r0_5 = ~0u;
    arg0->word_4 = r0_5;
    arg0->word_8 = r0_5;
    return 1u;
}

}  // namespace d_004eb3e0
GUEST_EXPORT_FRAMED(0x004eb3e0, d_004eb3e0::f_004eb3e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eb438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb438 {

struct __attribute__((packed)) Object_004eb438_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_004eb438_0, word_4, 0x4);
GUEST_OFFSET(Object_004eb438_0, word_8, 0x8);

inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> call_002b5fc4;
inline constexpr guest::Function<0x004ee4c0, u32(u32, u32)> call_004ee4c0;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> call_0071cc4c;

u32 f_004eb438(gptr<Object_004eb438_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002b5fc4(arg0.addr(), r1);
    if (r0_1 != 0) {
        u32 r0_2 = call_002b5fc4(r0_1, guest::cpu()->r[1]);
        u32 r4_1 = arg0.addr() + 4u;
        r0_1 = call_0071cc4c(r0_2, arg0->word_4, arg0->word_8);
        if (r0_1 != 0) {
            frame.release();
            return call_004ee4c0(r0_1, r1);
        }
    }
    return r0_1;
}

}  // namespace d_004eb438
GUEST_EXPORT(0x004eb438, d_004eb438::f_004eb438);

// f_004eb478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb478 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectHandle = 0x009028acu;

void f_004eb478(gptr<g3d__modelEffect__ModelEffectHandle> arg0) {
    u32 r1_1 = ~0u;
    arg0->word_4 = r1_1;
    arg0->word_0 = vtable_g3d__modelEffect__ModelEffectHandle;
    arg0->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_004eb478
GUEST_EXPORT(0x004eb478, d_004eb478::f_004eb478);

// f_004eb5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb5b4 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectHandle = 0x009028acu;
inline constexpr guest::Function<0x002b5fc4, u32(u32, u32)> call_002b5fc4;
inline constexpr guest::Function<0x004eb9d4, u32(u32, u32)> call_004eb9d4;
inline constexpr guest::Function<0x0071cc4c, u32(u32, u32, u32)> call_0071cc4c;
inline constexpr guest::Function<0x0074599c, u32(u32)> call_0074599c;

u32 f_004eb5b4(gptr<g3d__modelEffect__ModelEffectHandle> arg0, u32 r1) {
    arg0->word_0 = vtable_g3d__modelEffect__ModelEffectHandle;
    u32 r0_1 = call_002b5fc4(0x9028acu, r1);  // (from the original)
    if (r0_1 == 0) {
        return arg0.addr();
    }
    u32 r0_2 = call_002b5fc4(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_0071cc4c(r0_2, arg0->word_4, arg0->word_8);
    if (r0_3 == 0) {
        return arg0.addr();
    }
    u32 r0_4 = call_0074599c(r0_3);
    if (r0_4 == 0) {
        return arg0.addr();
    }
    u32 r0_5 = call_002b5fc4(r0_4, guest::cpu()->r[1]);
    if (r0_5 == 0) {
        return arg0.addr();
    }
    u32 r0_6 = call_002b5fc4(r0_5, guest::cpu()->r[1]);
    u32 r0_7 = call_0071cc4c(r0_6, arg0->word_4, arg0->word_8);
    if (r0_7 == 0) {
        return arg0.addr();
    }
    u32 r0_8 = call_004eb9d4(r0_7, 0xau);  // (from the original)
    if (r0_8 == 0) {
        return arg0.addr();
    }
    u32 r0_9 = ~0u;
    arg0->word_4 = r0_9;
    arg0->word_8 = r0_9;
    return arg0.addr();
}

}  // namespace d_004eb5b4
GUEST_EXPORT_FRAMED(0x004eb5b4, d_004eb5b4::f_004eb5b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eb9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb9d4 {

struct __attribute__((packed)) Object_004eb9d4_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u8 byte_2c;
    u8 unknown_2d[0x3];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_004eb9d4_0, byte_2c, 0x2c);
GUEST_OFFSET(Object_004eb9d4_0, word_30, 0x30);
GUEST_OFFSET(Object_004eb9d4_0, word_34, 0x34);


u32 f_004eb9d4(gptr<Object_004eb9d4_0> arg0, u32 r1) {
    if (arg0->byte_2c != 0) {
        return 0u;
    }
    arg0->word_34 = r1;
    arg0->byte_2c = 1;
    arg0->word_30 = r1;
    return 1u;
}

}  // namespace d_004eb9d4
GUEST_EXPORT(0x004eb9d4, d_004eb9d4::f_004eb9d4);

// f_004eb9fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eb9fc {

struct __attribute__((packed)) Object_004eb9fc_0 {
    u8 unknown_0[0x2d];  // (not used here)
    u8 byte_2d;
};
GUEST_OFFSET(Object_004eb9fc_0, byte_2d, 0x2d);

inline constexpr guest::Function<0x004eb254, u32(u32, u32, u32, u32)> call_004eb254;
inline constexpr guest::Function<0x004ebbec, u32(u32, u32, u32, u32)> call_004ebbec;

struct __attribute__((packed)) Frame_004eb9fc {
    u32 word_0;
};
GUEST_OFFSET(Frame_004eb9fc, word_0, 0x0);
GUEST_SIZE(Frame_004eb9fc, 0x4);

u32 f_004eb9fc(gptr<Object_004eb9fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004eb9fc> frame;  // the original's stack frame
    frame->word_0 = r3;
    arg0->byte_2d = u8(r1);
    u32 r0_1 = call_004eb254(r1, r1, r2, r3);
    frame->word_0 = r3;
    u32 r0_2 = call_004ebbec(arg0.addr(), r0_1, 0u, r2);
    return r0_2;
}

}  // namespace d_004eb9fc
GUEST_EXPORT_FRAMED(0x004eb9fc, d_004eb9fc::f_004eb9fc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_004ec374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec374 {

inline constexpr u32 vtable_g3d__modelEffect__ModelEffectContainer = 0x009028bcu;
inline guest::global<u32, 0x00952ad4> global_00952ad4;
inline constexpr guest::Function<0x005673c8, u32(u32)> call_005673c8;

u32 f_004ec374(gptr<g3d__modelEffect__ModelEffectContainer> arg0, u32 r1) {
    arg0->word_0 = vtable_g3d__modelEffect__ModelEffectContainer;
    arg0->word_4 = r1;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 ea_1 = arg0.addr() + 0x20u;  // (from the original)
    arg0->word_20 = 0;
    call_005673c8(ea_1 + 4u);
    arg0->byte_2c = 0;
    arg0->byte_2d = 0xd;  // (from the original)
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    *global_00952ad4 = *global_00952ad4 + 1u;
    guest::cpu()->r[1] = 0x952ad4u;  // (from the original)
    return ea_1 - 0x20u;  // (from the original)
}

}  // namespace d_004ec374
GUEST_EXPORT_FRAMED(0x004ec374, d_004ec374::f_004ec374, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ec7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec7ec {

struct __attribute__((packed)) Object_004ec7ec_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_004ec7ec_0, word_c, 0xc);

struct __attribute__((packed)) Object_004ec7ec_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Object_004ec7ec_1, float_0, 0x0);
GUEST_OFFSET(Object_004ec7ec_1, float_4, 0x4);
GUEST_OFFSET(Object_004ec7ec_1, float_8, 0x8);
GUEST_OFFSET(Object_004ec7ec_1, float_c, 0xc);

struct __attribute__((packed)) Local_004ec7ec_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ec7ec_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004ec7ec_r0_1, float_c, 0xc);

inline constexpr guest::Function<0x00736914, u32(u32)> call_00736914;

u32 f_004ec7ec(gptr<Object_004ec7ec_0> arg0, gptr<Object_004ec7ec_1> arg1) {
    u32 r4_1 = arg0.addr() + 0xcu;  // (from the original)
    float S0_1 = arg1->float_0;
    float S1_1 = arg1->float_4;
    float S2_1 = arg1->float_8;
    float S3_1 = arg1->float_c;
    gptr<Local_004ec7ec_r0_1> r0_1 = gptr<Local_004ec7ec_r0_1>(arg0->word_c + 0xb8u);  // (from the original)
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_1;
    r0_1->float_8 = S2_1;
    r0_1->float_c = S3_1;
    u32 r0_2 = arg0->word_c + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_3 = call_00736914(r0_2);
    u32 r1_1 = arg0->word_c;
    *gptr<u32>(r1_1 + 0xc8u) = r0_3;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_004ec7ec
GUEST_EXPORT_FRAMED(0x004ec7ec, d_004ec7ec::f_004ec7ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ec820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ec820 {

struct __attribute__((packed)) Local_004ec820_r0_5 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004ec820_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_004ec820_r0_5, float_4, 0x4);

struct __attribute__((packed)) Local_004ec820_r0_6 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004ec820_r0_6, float_0, 0x0);
GUEST_OFFSET(Local_004ec820_r0_6, float_4, 0x4);

struct __attribute__((packed)) Local_004ec820_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004ec820_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004ec820_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x0048d4d4, u32(u32, u32, u32, u32)> call_0048d4d4;
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;
inline constexpr guest::Function<0x00736914, u32(u32)> call_00736914;

struct __attribute__((packed)) Frame_004ec820 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004ec820, byte_0, 0x0);
GUEST_OFFSET(Frame_004ec820, byte_1, 0x1);
GUEST_OFFSET(Frame_004ec820, word_4, 0x4);
GUEST_SIZE(Frame_004ec820, 0x14);

u32 f_004ec820(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004ec820> frame;  // the original's stack frame
    if (r1 == 0) {
        u32 r0_1 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r0_1;
    }
    gptr<Local_004ec820_r3_1> r3_1 = gptr<Local_004ec820_r3_1>(frame.at(8).addr());
    frame->byte_0 = 1;
    frame->byte_1 = 1;
    r3_1->word_0 = 0;
    r3_1->word_4 = 1;
    frame->word_4 = 0;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    u32 r0_3 = call_0048d4d4(frame.at(0).addr(), r1, 0u, r3_1.addr());
    *gptr<u32>(r0 + 0x10u) = r0_3;  // (from the original)
    *gptr<u32>(r0 + 4u) = r0_3;
    u32 r0_4 = *gptr<u32>(r0_3 + 8u);
    float S0_1 = 0.2f;
    float S1_1 = 1.0f;
    *gptr<u32>(r0 + 0xcu) = r0_4;  // (from the original)
    *gptr<u8>(r0_4 + 0xb4u) = 1;  // (from the original)
    gptr<Local_004ec820_r0_5> r0_5 = gptr<Local_004ec820_r0_5>(*gptr<u32>(r0 + 0xcu) + 0xb8u);  // (from the original)
    r0_5->float_0 = S0_1;
    r0_5->float_4 = S0_1;
    gptr<Local_004ec820_r0_6> r0_6 = gptr<Local_004ec820_r0_6>(r0_5.addr() + 8u);
    r0_6->float_0 = S0_1;
    r0_6->float_4 = S1_1;
    u32 r0_7 = *gptr<u32>(r0 + 0xcu) + 0xb8u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_8 = call_00736914(r0_7);
    u32 r1_1 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    *gptr<u32>(r1_1 + 0xc8u) = r0_8;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_004ec820
GUEST_EXPORT_FRAMED(0x004ec820, d_004ec820::f_004ec820, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004ecbe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ecbe0 {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;

u32 f_004ecbe0(gptr<g3d__BaseAnim> arg0) {
    arg0->word_0 = vtable_g3d__BaseAnim;
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004ecbe0
GUEST_EXPORT_FRAMED(0x004ecbe0, d_004ecbe0::f_004ecbe0, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed168 {

struct __attribute__((packed)) Object_004ed168_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_004ed168_0, word_114, 0x114);

inline constexpr guest::Function<0x004a7064, u32(u32, u32)> call_004a7064;

void f_004ed168(gptr<Object_004ed168_0> arg0, float S0) {
    *gptr<u32>(arg0->word_114 + 0x124u) = std::bit_cast<u32>(S0);  // (from the original)
    u32 r1_1 = arg0->word_114;
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x120u));  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S0;
    call_004a7064(arg0.addr() + 0x114u, r1_1);  // (from the original)
}

}  // namespace d_004ed168
GUEST_EXPORT_FRAMED(0x004ed168, d_004ed168::f_004ed168, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed18c {

struct __attribute__((packed)) Object_004ed18c_0 {
    u8 unknown_0[0x114];  // (not used here)
    u32 word_114;
};
GUEST_OFFSET(Object_004ed18c_0, word_114, 0x114);

inline constexpr guest::Function<0x004a7064, u32(u32, u32)> call_004a7064;

void f_004ed18c(gptr<Object_004ed18c_0> arg0, float S0) {
    *gptr<u32>(arg0->word_114 + 0x120u) = std::bit_cast<u32>(S0);  // (from the original)
    u32 r1_1 = arg0->word_114;
    float S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x124u));  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    call_004a7064(arg0.addr() + 0x114u, r1_1);  // (from the original)
}

}  // namespace d_004ed18c
GUEST_EXPORT_FRAMED(0x004ed18c, d_004ed18c::f_004ed18c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ed3dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3dc {

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;
inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;

u32 f_004ed3dc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_002f73b8(r0 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_004ee39c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3dc
GUEST_EXPORT(0x004ed3dc, d_004ed3dc::f_004ed3dc);

// f_004ed3f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed3f8 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;

u32 f_004ed3f8() {
    return call_004ee4b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ed3f8
GUEST_EXPORT(0x004ed3f8, d_004ed3f8::f_004ed3f8);

// f_004ed454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ed454 {

inline constexpr u32 vtable_g3d__FragmentLight = 0x00902938u;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;
inline constexpr guest::Function<0x004ee514, u32(u32, u32)> call_004ee514;

u32 f_004ed454(gptr<g3d__FragmentLight> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_g3d__FragmentLight;
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    call_00317e2c(r0_1, 0x902938u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_004ee514(r0_1 - 0xcu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_004ed454
GUEST_EXPORT(0x004ed454, d_004ed454::f_004ed454);

// f_004eddd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eddd4 {

struct __attribute__((packed)) Object_004eddd4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Object_004eddd4_1, word_8, 0x8);
GUEST_OFFSET(Object_004eddd4_1, word_170, 0x170);
GUEST_OFFSET(Object_004eddd4_1, word_174, 0x174);

struct __attribute__((packed)) Local_004eddd4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_004eddd4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_004eddd4_r12_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_r12_2, word_4, 0x4);

struct __attribute__((packed)) Local_004eddd4_r2_2 {
    u8 unknown_0[0xb4];  // (not used here)
    u32 word_b4;
    u32 word_b8;
};
GUEST_OFFSET(Local_004eddd4_r2_2, word_b4, 0xb4);
GUEST_OFFSET(Local_004eddd4_r2_2, word_b8, 0xb8);

struct __attribute__((packed)) Local_004eddd4_r2_5 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Local_004eddd4_r2_5, word_1c, 0x1c);
GUEST_OFFSET(Local_004eddd4_r2_5, byte_24, 0x24);

struct __attribute__((packed)) Local_004eddd4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004eddd4_r5_1, word_0, 0x0);
GUEST_OFFSET(Local_004eddd4_r5_1, word_4, 0x4);

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> call_004ee364;

u32 f_004eddd4(u32 r0, gptr<Object_004eddd4_1> arg1) {
    u32 r1 = arg1.addr();
    gptr<Local_004eddd4_r5_1> r5_1 = gptr<Local_004eddd4_r5_1>(0u);
    gptr<Local_004eddd4_r12_2> r12_2 = gptr<Local_004eddd4_r12_2>(0u);
    u32 r4 = r0;
    u32 r14 = 0u;
    r0 = arg1->word_170;
    if (r0 == arg1->word_174) {
        u32 ea_1 = arg1->word_8 + 0xb8u;  // (from the original)
        u32 r2_1 = *gptr<u32>(ea_1);
        r0 = r2_1 == 0 ? r14 : ea_1 + r2_1;
    }
    gptr<Local_004eddd4_ea_2> ea_2 = gptr<Local_004eddd4_ea_2>(r1 + 0x170u);  // (from the original)
    u32 r3 = ea_2->word_4;
    if (ea_2->word_0 == r3) {
        gptr<Local_004eddd4_r2_2> r2_2 = gptr<Local_004eddd4_r2_2>(*gptr<u32>(r1 + 8u));
        u32 r12_1 = r2_2->word_b8;
        r3 = (r12_1 == 0 ? r14 : r2_2.addr() + 0xb8u + r12_1) + (r2_2->word_b4 << 2);  // (from the original)
    }
    u32 r2_3 = *gptr<u32>(r4 + 0x24u);  // (from the original)
    if (r2_3 != 0) {
        *gptr<u32>(r2_3) = r1;
    }
    *gptr<u32>(r4 + 0x24u) = *gptr<u32>(r4 + 0x24u) + 4u;  // (from the original)
    if (r0 != r3) {
        do {
            u32 r2_4 = *gptr<u32>(r0);
            gptr<Local_004eddd4_r2_5> r2_5 = gptr<Local_004eddd4_r2_5>(r2_4 == 0 ? r14 : r2_4 + r0);
            if (r2_5->byte_24 != 0) {
                if ((*gptr<u32>(*gptr<u32>(*gptr<u32>(*gptr<u32>(r1 + 0x164u) + (r2_5->word_1c << 2)) + 8u) + 0x20u) & 0xffu) == 0) {  // (from the original)
                    r5_1 = gptr<Local_004eddd4_r5_1>(*gptr<u32>(r4 + 0xcu));  // (from the original)
                    r12_2 = gptr<Local_004eddd4_r12_2>(r4 + 8u);
                    if (r5_1.addr() != 0) {
                        goto L_4ede9c;
                    }
                    goto L_4edeb4;
                }
                r5_1 = gptr<Local_004eddd4_r5_1>(*gptr<u32>(r4 + 0x18u));  // (from the original)
                r12_2 = gptr<Local_004eddd4_r12_2>(r4 + 0x14u);  // (from the original)
                if (r5_1.addr() == 0) {
                    goto L_4edeb4;
                }
L_4ede9c:;
                r5_1->word_0 = r1;
                r5_1->word_4 = r2_5.addr();
L_4edeb4:;
                r12_2->word_4 = r12_2->word_4 + 8u;
            }
            r0 += 4u;
            guest::preempt();
        } while (r0 != r3);
    }
    if (*gptr<u8>(r4 + 0x3cu) == 0) {  // (from the original)
        call_004ee364(r4, 0u);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x3cu) = 1;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_004eddd4
GUEST_EXPORT_FRAMED(0x004eddd4, d_004eddd4::f_004eddd4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004ee2dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee2dc {

struct __attribute__((packed)) Object_004ee2dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee2dc_0, word_4, 0x4);

struct __attribute__((packed)) Object_004ee2dc_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004ee2dc_1, word_4, 0x4);

struct __attribute__((packed)) Local_004ee2dc_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r0_1, float_1c, 0x1c);

struct __attribute__((packed)) Local_004ee2dc_r12_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ee2dc_r12_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r12_2, float_c, 0xc);

struct __attribute__((packed)) Local_004ee2dc_r1_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r1_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r1_2, float_1c, 0x1c);

struct __attribute__((packed)) Local_004ee2dc_r2_1 {
    u8 unknown_0[0x8c];  // (not used here)
    float float_8c;
    float float_90;
    float float_94;
    float float_98;
    float float_9c;
    float float_a0;
    float float_a4;
    float float_a8;
};
GUEST_OFFSET(Local_004ee2dc_r2_1, float_8c, 0x8c);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_90, 0x90);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_94, 0x94);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_98, 0x98);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_9c, 0x9c);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a0, 0xa0);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a4, 0xa4);
GUEST_OFFSET(Local_004ee2dc_r2_1, float_a8, 0xa8);

struct __attribute__((packed)) Local_004ee2dc_r2_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004ee2dc_r2_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r2_2, float_c, 0xc);

struct __attribute__((packed)) Local_004ee2dc_r2_4 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_004ee2dc_r2_4, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r2_4, float_18, 0x18);

struct __attribute__((packed)) Local_004ee2dc_r3_2 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
};
GUEST_OFFSET(Local_004ee2dc_r3_2, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r3_2, float_18, 0x18);

struct __attribute__((packed)) Local_004ee2dc_r3_3 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
};
GUEST_OFFSET(Local_004ee2dc_r3_3, float_0, 0x0);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_4, 0x4);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_8, 0x8);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_c, 0xc);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_10, 0x10);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_14, 0x14);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_18, 0x18);
GUEST_OFFSET(Local_004ee2dc_r3_3, float_1c, 0x1c);


void f_004ee2dc(gptr<Object_004ee2dc_0> arg0, gptr<Object_004ee2dc_1> arg1) {
    gptr<Local_004ee2dc_r2_1> r2_1 = gptr<Local_004ee2dc_r2_1>(arg1->word_4);
    u32 r3_1 = arg0->word_4;
    float S1_1 = r2_1->float_90;
    float S2_1 = r2_1->float_94;
    float S3_1 = r2_1->float_98;
    float S4_1 = r2_1->float_9c;
    float S5_1 = r2_1->float_a0;
    float S6_1 = r2_1->float_a4;
    float S7_1 = r2_1->float_a8;
    *gptr<u32>(r3_1 + 0x8cu) = std::bit_cast<u32>(r2_1->float_8c);  // (from the original)
    gptr<Local_004ee2dc_r3_2> r3_2 = gptr<Local_004ee2dc_r3_2>(r3_1 + 0x90u);  // (from the original)
    gptr<Local_004ee2dc_r2_2> r2_2 = gptr<Local_004ee2dc_r2_2>(r2_1.addr() + 0xacu);  // (from the original)
    r3_2->float_0 = S1_1;
    r3_2->float_4 = S2_1;
    r3_2->float_8 = S3_1;
    r3_2->float_c = S4_1;
    r3_2->float_10 = S5_1;
    r3_2->float_14 = S6_1;
    r3_2->float_18 = S7_1;
    gptr<Local_004ee2dc_r12_2> r12_2 = gptr<Local_004ee2dc_r12_2>((r3_1 + 0x8cu) + 0x20u);  // (from the original)
    float S1_2 = r2_2->float_4;
    float S2_2 = r2_2->float_8;
    float S3_2 = r2_2->float_c;
    r12_2->float_0 = r2_2->float_0;
    r12_2->float_4 = S1_2;
    r12_2->float_8 = S2_2;
    r12_2->float_c = S3_2;
    u32 r1_1 = arg1->word_4;
    u32 r2_3 = arg0->word_4;
    gptr<Local_004ee2dc_r3_3> r3_3 = gptr<Local_004ee2dc_r3_3>(r1_1 + 0xbcu);  // (from the original)
    float S1_3 = r3_3->float_4;
    float S2_3 = r3_3->float_8;
    float S3_3 = r3_3->float_c;
    float S4_2 = r3_3->float_10;
    float S5_2 = r3_3->float_14;
    float S6_2 = r3_3->float_18;
    float S7_2 = r3_3->float_1c;
    gptr<Local_004ee2dc_r1_2> r1_2 = gptr<Local_004ee2dc_r1_2>(r1_1 + 0xdcu);  // (from the original)
    gptr<Local_004ee2dc_r0_1> r0_1 = gptr<Local_004ee2dc_r0_1>(r2_3 + 0xdcu);  // (from the original)
    *gptr<u32>(r2_3 + 0xbcu) = std::bit_cast<u32>(r3_3->float_0);  // (from the original)
    gptr<Local_004ee2dc_r2_4> r2_4 = gptr<Local_004ee2dc_r2_4>(r2_3 + 0xc0u);  // (from the original)
    r2_4->float_0 = S1_3;
    r2_4->float_4 = S2_3;
    r2_4->float_8 = S3_3;
    r2_4->float_c = S4_2;
    r2_4->float_10 = S5_2;
    r2_4->float_14 = S6_2;
    r2_4->float_18 = S7_2;
    float S0_1 = r1_2->float_0;
    float S1_4 = r1_2->float_4;
    float S2_4 = r1_2->float_8;
    float S3_4 = r1_2->float_c;
    float S4_3 = r1_2->float_10;
    float S5_3 = r1_2->float_14;
    float S6_3 = r1_2->float_18;
    float S7_3 = r1_2->float_1c;
    r0_1->float_0 = S0_1;
    r0_1->float_4 = S1_4;
    r0_1->float_8 = S2_4;
    r0_1->float_c = S3_4;
    r0_1->float_10 = S4_3;
    r0_1->float_14 = S5_3;
    r0_1->float_18 = S6_3;
    r0_1->float_1c = S7_3;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_004ee2dc
GUEST_EXPORT(0x004ee2dc, d_004ee2dc::f_004ee2dc);

// f_004ee4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee4b8 {

inline constexpr guest::Function<0x004f03d0, u32(u32, u32, u32, u32)> call_004f03d0;

u32 f_004ee4b8(gptr<g3d__TransformNode> arg0) {
    return call_004f03d0(arg0->word_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004ee4b8
GUEST_EXPORT(0x004ee4b8, d_004ee4b8::f_004ee4b8);

// f_004ee534: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee534 {

inline constexpr guest::Function<0x0056aab8, u32(u32)> call_0056aab8;
inline constexpr guest::Function<0x0056acfc, u32(u32)> call_0056acfc;

u32 f_004ee534(u32 r0) {
    u32 r0_2 = call_0056aab8(r0 + 0x1cu);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = call_0056acfc(r0 + 0x1cu);  // (from the original)
    return r0_4 ^ 1u;
}

}  // namespace d_004ee534
GUEST_EXPORT_FRAMED(0x004ee534, d_004ee534::f_004ee534, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ee55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee55c {

struct __attribute__((packed)) Object_004ee55c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xe0];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_004ee55c_0, word_4, 0x4);
GUEST_OFFSET(Object_004ee55c_0, word_8, 0x8);
GUEST_OFFSET(Object_004ee55c_0, word_ec, 0xec);

inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;

u32 f_004ee55c(gptr<Object_004ee55c_0> arg0, u32 r1) {
    u32 r0_2 = call_0056aa98(arg0.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0 || arg0->word_4 != 0) {
        guest::cpu()->r[1] = r0_2;
        return r0_2;
    }
    u32 r0_3 = arg0->word_ec;
    arg0->word_4 = r0_3;
    arg0->word_8 = r0_3;
    guest::cpu()->r[1] = r0_2;
    return r0_2;
}

}  // namespace d_004ee55c
GUEST_EXPORT_FRAMED(0x004ee55c, d_004ee55c::f_004ee55c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ee8c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ee8c0 {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;

u32 f_004ee8c0(gptr<g3d__BaseAnim> arg0) {
    arg0->word_0 = vtable_g3d__BaseAnim;
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004ee8c0
GUEST_EXPORT_FRAMED(0x004ee8c0, d_004ee8c0::f_004ee8c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_004eebd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eebd4 {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;

u32 f_004eebd4() {
    return call_004ee4b8(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004eebd4
GUEST_EXPORT(0x004eebd4, d_004eebd4::f_004eebd4);

// f_004eec1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eec1c {

inline constexpr guest::Function<0x004ee514, u32(u32, u32)> call_004ee514;

u32 f_004eec1c() {
    return call_004ee514(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_004eec1c
GUEST_EXPORT(0x004eec1c, d_004eec1c::f_004eec1c);

// f_004eee9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004eee9c {

struct __attribute__((packed)) Object_004eee9c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004eee9c_0, word_8, 0x8);

struct __attribute__((packed)) Local_004eee9c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_004eee9c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004eee9c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004eee9c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004eee9c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_004eee9c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_004eee9c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_004eee9c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_004eee9c_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_004eee9c_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_004eee9c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_004eee9c_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_004eee9c_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_004eee9c_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_004eee9c_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_004eee9c_ea_5, word_14, 0x14);
GUEST_OFFSET(Local_004eee9c_ea_5, word_18, 0x18);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32)> call_002fa9d0;
inline constexpr guest::Function<0x004ed570, u32(u32, u32, u32, u32)> call_004ed570;
inline constexpr guest::Function<0x004eef60, u32(u32, u32, u32, u32)> call_004eef60;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_004eee9c {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004eee9c, word_0, 0x0);
GUEST_SIZE(Frame_004eee9c, 0x20);

u32 f_004eee9c(gptr<Object_004eee9c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004eee9c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    gptr<Local_004eee9c_ea_1> ea_1 = gptr<Local_004eee9c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r8;
    ea_1->word_18 = r9;
    ea_1->word_1c = r14;
    u32 r0_2 = call_004ed570(arg0->word_8, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r0_3 = *gptr<u32>(r0_2 + 8u);
    if (r0_3 != 0) {
        r2_1 = 0x40000092u;  // (from the original)
        if ((r2_1 & ~*gptr<u32>(r0_3)) != 0) {
            r0_3 = 0u;
        }
    }
    u32 ea_2 = r0_3 + 0xe0u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_2);
    u32 ea_3 = (r1_1 == 0 ? 0u : ea_2 + r1_1) + 0x1cu;  // (from the original)
    u32 r1_2 = *gptr<u32>(ea_3);
    u32 r0_4 = r1_2 == 0 ? 0u : ea_3 + r1_2;
    frame->word_0 = r0_4;
    if (r0_4 != 0 && r2 != 0) {
        u32 r0_5 = call_002fa9d0(r2, r1_2, r2_1);
        u32 r0_6 = call_00736a1c(frame.at(0).addr(), r2, r0_5);
        if (r0_6 != 0) {
            u32 ea_4 = r0_6 + 0xcu;  // (from the original)
            u32 r1_3 = *gptr<u32>(ea_4);
            r2_2 = r1_3 == 0 ? 0u : r1_3 + ea_4;
        } else {
            r2_2 = 0u;
        }
    } else {
        r2_2 = 0u;
    }
    gptr<Local_004eee9c_ea_5> ea_5 = gptr<Local_004eee9c_ea_5>(frame.at(4).addr());
    u32 r4_1 = ea_5->word_0;
    u32 r5_1 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_1 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    r14 = ea_5->word_18;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    frame.release();
    return call_004eef60(arg0.addr(), r1, r2_2, 0u);
}

}  // namespace d_004eee9c
GUEST_EXPORT(0x004eee9c, d_004eee9c::f_004eee9c);

// f_004ef50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef50c {

inline constexpr u32 vtable_g3d__GroupSkeletalAnim = 0x009029e0u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00317dec, u32(u32)> call_00317dec;

u32 f_004ef50c(gptr<g3d__GroupSkeletalAnim> arg0) {
    arg0->word_0 = vtable_g3d__GroupSkeletalAnim;
    call_002f76ac(arg0.addr() + 0x14u, 0x4efa0cu, 0x18u, 4u);  // (from the original)
    call_00317dec(arg0.addr() + 0xcu);  // (from the original)
    return arg0.addr();
}

}  // namespace d_004ef50c
GUEST_EXPORT_FRAMED(0x004ef50c, d_004ef50c::f_004ef50c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004ef9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ef9a4 {

inline constexpr guest::Function<0x004ef77c, u32(u32, u32, u32, u32)> call_004ef77c;

u32 f_004ef9a4() {
    float S0_1 = 0.0f;
    guest::cpu()->s[0] = S0_1;
    return call_004ef77c(guest::cpu()->r[0], guest::cpu()->r[1], 0u, guest::cpu()->r[3]);
}

}  // namespace d_004ef9a4
GUEST_EXPORT(0x004ef9a4, d_004ef9a4::f_004ef9a4);

// f_004efa0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004efa0c {

inline constexpr u32 vtable_g3d__BaseAnim = 0x00902b5cu;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;

u32 f_004efa0c(gptr<g3d__BaseAnim> arg0) {
    arg0->word_0 = vtable_g3d__BaseAnim;
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    call_00317dec(r0_1, 0x902b5cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_1 - 0xcu;  // (from the original)
}

}  // namespace d_004efa0c
GUEST_EXPORT_FRAMED(0x004efa0c, d_004efa0c::f_004efa0c, 0x4010);  // pushes {r4, lr} first, as the original
