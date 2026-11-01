// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00770060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770060 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x005361a8, u32(u32)> call_005361a8;
inline constexpr guest::Function<0x00768da0, u32(u32)> call_00768da0;

u32 f_00770060(u32 r0, u32 r1, u32 r2, float S0, float S1, float S2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r7 = r0;
    u32 r8 = r1;
    u32 r9 = r2;
    call_002fcbb0(frame.at(0).addr(), 0x2000u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = call_005361a8(frame.at(0).addr());
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    u32 r5 = r0_3;
    if (r0_3 != 0) {
        u32 r10 = 0x172bu;  // (from the original)
        u32 r6 = 0u;
        u32 r4 = r6;
        do {
            u32 res_1 = u32(*gptr<u8>(r5 + 0x1cu)) << 0x1b;  // (from the original)
            if (u32(*gptr<u8>(r5 + 0x1cu)) & 0x10u) {  // (from the original)
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                call_002fcbb0(frame.at(4).addr(), uxth(r4 + 0x2000u), r2, guest::cpu()->r[3]);  // (from the original)
                u32 r0_6 = call_00768da0(frame.at(4).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                if (s32(r0_6) >= 0) {
                    r1 = s32(r0_6) >> 5;
                    if (r1 < 0xbau) {  // (from the original)
                        r1 = *gptr<u32>(r7 + (r1 << 2));
                        if (((r1 >> (r0_6 & 0x1fu)) & 1u) != 0) {  // (from the original)
                            r6 += 1u;
                        }
                    }
                }
            }
            r4 += 1u;
            r5 += 0x1eu;  // (from the original)
            guest::preempt();
        } while (r10 > r4);
        if (r9 != 0) {
            *gptr<u32>(r9) = 0xe86;  // (from the original)
        }
        if (r8 != 0) {
            *gptr<u32>(r8) = r6;
        }
        if (r6 != 0) {
            if (0xe86u > r6) {  // (from the original)
                float S1_3 = 3718.0f;
                float S0_3 = float(std::bit_cast<u32>(std::bit_cast<float>(r6))) * 100.0f / S1_3;
                if (s32(std::bit_cast<u32>(S0_3)) < 0x3f800000) {  // (from the original)
                    guest::cpu()->r[1] = r1;
                    guest::cpu()->s[0] = S0_3;
                    guest::cpu()->s[1] = S1_3;
                    return 1u;
                }
                float S0_4 = std::bit_cast<float>(vcvt_uz_f(S0_3));
                guest::cpu()->r[1] = r1;
                guest::cpu()->s[0] = S0_4;
                guest::cpu()->s[1] = S1_3;
                return std::bit_cast<u32>(S0_4);
            }
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return 0x64u;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00770060
GUEST_EXPORT_FRAMED(0x00770060, d_00770060::f_00770060, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0077025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077025c {

struct __attribute__((packed)) Object_0077025c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0077025c_0, byte_0, 0x0);

inline constexpr guest::Function<0x005359fc, u32(u32, u32)> call_005359fc;
inline constexpr guest::Function<0x006b9b30, u32(u32, u32)> call_006b9b30;

u32 f_0077025c(gptr<Object_0077025c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->byte_0;
    if (r0_1 == r1) {
        u32 r0_2 = call_005359fc(r0_1, r1);
        r1 = guest::cpu()->r[1];
        if (*gptr<u32>(r0_2 + 4u) >= r2) {
            u32 r1_1 = *gptr<u32>(arg0.addr() + (r2 << 2) + 4u);
            u32 r0_3 = arg0->byte_0;
            frame.release();
            return call_006b9b30(r0_3, r1_1);
        }
    }
    guest::cpu()->r[1] = r1;
    return 0x7ffeu;  // (from the original)
}

}  // namespace d_0077025c
GUEST_EXPORT(0x0077025c, d_0077025c::f_0077025c);

// f_007702a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007702a4 {

struct __attribute__((packed)) Object_007702a4_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_007702a4_0, byte_0, 0x0);

inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;

u32 f_007702a4(gptr<Object_007702a4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r0_1 = arg0->byte_0;
    if (r0_1 == 0x9bu) {  // (from the original)
        r0_2 = 0u;
    } else {
        u32 r4 = 0u;
        u32 r0_3 = call_005359fc(r0_1, r1, r2, guest::cpu()->r[3]);
        u32 r1_1 = r0 + (*gptr<u32>(r0_3 + 4u) << 2);
        r0 += 4u;
        r1 = r1_1 + 4u;
        if (r1 > r0) {
            do {
                if (*gptr<u32>(r0) + 1u == 0) {
                    goto L_7702f8;
                }
                r0 += 4u;
                r4 += 1u;
                guest::preempt();
            } while (r1 > r0);
        }
L_7702f8:;
        r0_2 = r4;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_007702a4
GUEST_EXPORT_FRAMED(0x007702a4, d_007702a4::f_007702a4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00770300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770300 {

struct __attribute__((packed)) Object_00770300_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x1];  // (not used here)
    u8 byte_9;
};
GUEST_OFFSET(Object_00770300_0, word_0, 0x0);
GUEST_OFFSET(Object_00770300_0, word_4, 0x4);
GUEST_OFFSET(Object_00770300_0, byte_9, 0x9);


u32 f_00770300(gptr<Object_00770300_0> arg0) {
    u32 r1_1 = arg0->word_4;
    u32 r2_1 = arg0->word_0;
    if (r1_1 >= 1u) {
        if (!u32((u64(0xffu) + ~r1_1 + u32(~0u >= r2_1)) >> 0x20)) {  // (from the original)
            r1_1 &= 0xffu;  // (from the original)
        }
    }
    u32 r3_1 = arg0->byte_9;
    guest::cpu()->r[1] = uxth(u32(u64(r1_1) + (r3_1 << 8) + u32(r2_1 < r2_1)));
    return r2_1;
}

}  // namespace d_00770300
GUEST_EXPORT_FRAMED(0x00770300, d_00770300::f_00770300, 0x30);  // pushes {r4, r5} first, as the original

// f_007703c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007703c8 {

struct __attribute__((packed)) Object_007703c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_007703c8_0, word_0, 0x0);


u32 f_007703c8(gptr<Object_007703c8_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 1u) {
        return r0_1;
    }
    if (r1 != 0) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_007703c8
GUEST_EXPORT(0x007703c8, d_007703c8::f_007703c8);

// f_00770934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770934 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;

u32 f_00770934(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 + (r4 << 2) << 7);
        u32 r0_2 = call_00758104(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 != 0) {
            return r4;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    return ~0u;
}

}  // namespace d_00770934
GUEST_EXPORT_FRAMED(0x00770934, d_00770934::f_00770934, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00770974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770974 {

inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;

u32 f_00770974(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = r5 + (r4 + (r4 << 2) << 7);
        u32 r0_2 = call_00758104(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            return 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0xau);  // (from the original)
    return 0u;
}

}  // namespace d_00770974
GUEST_EXPORT_FRAMED(0x00770974, d_00770974::f_00770974, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007709b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007709b4 {

struct __attribute__((packed)) Object_007709b4_0 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_007709b4_0, byte_8, 0x8);
GUEST_OFFSET(Object_007709b4_0, byte_9, 0x9);


u32 f_007709b4(gptr<Object_007709b4_0> arg0) {
    float S3_1 = 0.003921569f;
    float S4_1 = 0.5f;
    float S2_1 = 1.25f - S4_1;
    float S1_1 = S2_1 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_9))));
    float S0_1 = S4_1 + S1_1 * S3_1;
    if (std::bit_cast<u32>(S0_1) + 0xc0a66665u > 0x266665u) {  // (from the original)
        guest::cpu()->r[1] = 0x88f97cu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S1_2 = 0.5f;
    float S1_3 = S1_2 + S2_1 * float(std::bit_cast<u32>(std::bit_cast<float>(u32(arg0->byte_8)))) * S3_1;
    if (0x4ccccdu >= std::bit_cast<u32>(S1_3 / S0_1) + 0xc0cccccdu) {  // (from the original)
        guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_3;
        return 1u;
    }
    guest::cpu()->r[1] = 0xc0cccccdu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_3;
    return 0u;
}

}  // namespace d_007709b4
GUEST_EXPORT(0x007709b4, d_007709b4::f_007709b4);

// f_00770b68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770b68 {

struct __attribute__((packed)) Object_00770b68_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00770b68_0, word_c, 0xc);
GUEST_OFFSET(Object_00770b68_0, word_10, 0x10);

inline guest::global<u32, 0x00890210> global_00890210;
inline guest::global<u32, 0x00890214> global_00890214;
inline guest::global<u32, 0x00890218> global_00890218;
inline guest::global<u32, 0x0089021c> global_0089021c;

u32 f_00770b68(gptr<Object_00770b68_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_0089021c;
    if (r3_1 == *global_00890218) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_770ba8;
        }
        if (arg0->word_10 != r1_1) {
            goto L_770bb0;
        }
L_770ba8:;
        r4_1 = 1u;
        goto L_770bb4;
    }
L_770bb0:;
    r4_1 = 0u;
L_770bb4:;
    u32 r1_2 = *global_00890214;
    if (r3_1 == *global_00890210) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_2) & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return 1u | r4_1;
        }
        if (arg0->word_10 != r1_2) {
            guest::cpu()->r[1] = r1_2;
            return 0u | r4_1;
        }
        guest::cpu()->r[1] = r1_2;
        return 1u | r4_1;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u | r4_1;
}

}  // namespace d_00770b68
GUEST_EXPORT_FRAMED(0x00770b68, d_00770b68::f_00770b68, 0x10);  // pushes {r4} first, as the original

// f_00770c04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770c04 {

struct __attribute__((packed)) Object_00770c04_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00770c04_0, word_c, 0xc);


u32 f_00770c04(gptr<Object_00770c04_0> arg0) {
    return arg0->word_c;
}

}  // namespace d_00770c04
GUEST_EXPORT(0x00770c04, d_00770c04::f_00770c04);

// f_00770c10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00770c10 {

struct __attribute__((packed)) Object_00770c10_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00770c10_0, word_4, 0x4);


u32 f_00770c10(gptr<Object_00770c10_0> arg0) {
    return arg0->word_4 >= 0x64u;  // (from the original)
}

}  // namespace d_00770c10
GUEST_EXPORT(0x00770c10, d_00770c10::f_00770c10);

// f_00779500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779500 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;

u32 f_00779500(u32 r0) {
    return call_00131294(0u, r0, 4u, 0u);
}

}  // namespace d_00779500
GUEST_EXPORT(0x00779500, d_00779500::f_00779500);

// f_00779704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779704 {

struct __attribute__((packed)) Local_00779704_r12_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00779704_r12_1, word_0, 0x0);
GUEST_OFFSET(Local_00779704_r12_1, word_4, 0x4);

inline guest::global<u32, 0x00974a7c> global_00974a7c;
inline guest::global<u32, 0x00974a80> global_00974a80;

void f_00779704(u32 r0, u32 r1) {
    gptr<Local_00779704_r12_1> r12_1 = gptr<Local_00779704_r12_1>(*global_00974a7c);
    u32 r3_1 = *global_00974a80;
    if (r12_1.addr() + (r1 << 2) + 8u >= r3_1) {
        *global_00974a7c = r3_1;
    } else if (r1 != 0) {
        u32 r1_1 = r1 - 1u;
        r12_1->word_0 = 0;
        r12_1->word_4 = r0 | r1_1 << 0x14;  // (from the original)
        u32 r0_1 = r12_1.addr() + 8u;
        if ((r1_1 & 1u) != 0) {
            r1_1 += 1u;
        }
        *global_00974a7c = r0_1;
        *global_00974a7c = r0_1 + (r1_1 << 2);
    }
}

}  // namespace d_00779704
GUEST_EXPORT_FRAMED(0x00779704, d_00779704::f_00779704, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00779764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779764 {


void f_00779764(u32 r0, u32 r1, u32 r2) {
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r6 = 0x974a7cu;  // (from the original)
    u32 r3 = *gptr<u32>(r6);
    u32 r12_1 = *gptr<u32>(r6 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r6) = r12_1;
    } else {
        u32 r5 = 0u;
        if (r1 >= 0u && r1 != 0) {
            u32 r7 = r5 - 0x100000u;  // (from the original)
            do {
                u32 r12_2 = r2 + (r5 << 2);
                u32 r8_1 = r1 - r5;
                u32 v_1 = *gptr<u32>(r12_2);
                u32 r12 = r12_2 + 4u;
                if (r8_1 > 0x80u) {  // (from the original)
                    r8_1 = 0x80u;  // (from the original)
                }
                *gptr<u32>(r3) = v_1;
                u32 r3_1 = r3 + 4u;
                u32 r4 = r8_1 >> 1;
                u32 res_1 = r4 + 0x80000001u;  // (from the original)
                *gptr<u32>(r3_1) = r7 + (r8_1 << 0x14) | r0 + r5 | 0x80000000u | 0xf0000u;  // (from the original)
                r3 = r3_1 + 4u;
                if (res_1 < r4 && res_1 != 0) {
                    do {
                        u32 v_2 = *gptr<u32>(r12);
                        u32 r12_3 = r12 + 4u;
                        res_2 = r4 - 1u;
                        r4 = res_2;
                        *gptr<u32>(r3) = v_2;
                        u32 r3_2 = r3 + 4u;
                        r12 = r12_3 + 4u;
                        *gptr<u32>(r3_2) = *gptr<u32>(r12_3);
                        r3 = r3_2 + 4u;
                        guest::preempt();
                    } while (res_2 != 0);
                } else {
                    u32 r9_1 = r4 << 1;
                    if (s32(r9_1) > 0) {
                        r12 -= 4u;
                        u32 r8 = r3 - 4u;
                        u32 r9 = s32(r9_1) >> 1;
                        do {
                            res_3 = r9 - 1u;
                            r9 = res_3;
                            *gptr<u32>(r8 + 4u) = *gptr<u32>(r12 + 4u);
                            u32 ea_3 = r12 + 8u;
                            r12 = ea_3;
                            u32 r10_2 = *gptr<u32>(ea_3);
                            u32 ea_4 = r8 + 8u;
                            *gptr<u32>(ea_4) = r10_2;
                            r8 = ea_4;
                            guest::preempt();
                        } while (res_3 != 0);
                        r3 += (r4 << 3);
                    }
                }
                r5 += 0x80u;  // (from the original)
                guest::preempt();
            } while (r5 < r1);
        }
        *gptr<u32>(r6) = r3;
    }
}

}  // namespace d_00779764
GUEST_EXPORT_FRAMED(0x00779764, d_00779764::f_00779764, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_00779848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779848 {

inline guest::global<u32, 0x0097d46c> global_0097d46c;

u32 f_00779848() {
    return *gptr<u32>(*gptr<u32>(*global_0097d46c + 8u) + 0xcu);  // (from the original)
}

}  // namespace d_00779848
GUEST_EXPORT(0x00779848, d_00779848::f_00779848);

// f_00779860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00779860 {

inline guest::global<u32, 0x0097d46c> global_0097d46c;

u32 f_00779860() {
    return *gptr<u32>(*gptr<u32>(*global_0097d46c + 8u) + 0x1cu);  // (from the original)
}

}  // namespace d_00779860
GUEST_EXPORT(0x00779860, d_00779860::f_00779860);

// f_0077a214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a214 {


u32 f_0077a214(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = std::bit_cast<u32>(S0);
    u32 r1_1 = (r0_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= 0x17) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    float S2_1 = 0.0f;
    float S1_1 = S0 + 1e30f;
    if (s32(r1_1) < 0) {
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            float S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        u32 res_1 = r0_1;
        u32 vf_1 = (r0_1 & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 != 0 && s32(r0_1) >= 0) {
            r0_1 = 0x3f800000u;  // (from the original)
        }
        if (res_1 >> 0x1f != vf_1) {  // (from the original)
            r0_1 = 0x80000000u;  // (from the original)
        }
        float S0_2 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1_1, S2_1);  // (from the original)
    if (fpsr_1 >> 0x1e & 1 || fpsr_1 >> 0x1f != (fpsr_1 >> 0x1c & 1)) {  // (from the original)
        float S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (s32(r0_1) <= 0) {
        u32 r0_2 = r0_1 & ~r2_1;
        float S0_4 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    u32 r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    u32 r0_4 = (r0_1 + r1_2) & ~r2_1;
    float S0_5 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a214
GUEST_EXPORT(0x0077a214, d_0077a214::f_0077a214);

// f_0077a2a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a2a4 {

inline constexpr guest::Function<0x00101a13, u32(u32, u32)> call_00101a12;
inline constexpr guest::Function<0x0077b710, u32(u32, u32)> call_0077b710;

struct __attribute__((packed)) Frame_0077a2a4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0077a2a4, word_0, 0x0);
GUEST_SIZE(Frame_0077a2a4, 0x4);

u32 f_0077a2a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0077a2a4> frame;  // the original's stack frame
    u32 r1_1 = std::bit_cast<u32>(S0);
    frame->word_0 = r3;
    if (0x7e921fb6u > (r1_1 << 1)) {  // (from the original)
        u32 r0_2 = 0x73000000u;  // (from the original)
        u32 b_2 = r1_1 << 1;
        u32 zf_1 = r0_2 == b_2;
        u32 cf_1 = r0_2 >= b_2;
        if (r0_2 > b_2) {
            r0_2 = ~0u;
        }
        if (!cf_1 || zf_1) {
            r0_2 = 0u;
        }
        frame->word_0 = r0_2;
    } else if (0x46490e49u > (r1_1 & ~0x80000000u)) {  // (from the original)
        float S4_1 = 0.0004837513f;
        float S3_1 = 2.563344e-12f;
        float S2_1 = S0 * 0.63661975f;
        float S1_1 = 8388608.0f;
        float S1_2 = (r1_1 & 0x80000000u) == 0 ? S2_1 + S1_1 - S1_1 : S2_1 - S1_1 + S1_1;  // (from the original)
        float S0_1 = S0 - S1_2 * 1.5703125f;
        float S2_2 = 7.5495336e-8f;
        frame->word_0 = std::bit_cast<u32>(std::bit_cast<float>(vcvt_sz_f(S1_2))) & 3u;
        S0 = S0_1 - S1_2 * S4_1 - S1_2 * S2_2 - S1_2 * S3_1;
    } else {
        guest::cpu()->s[0] = S0;
        call_0077b710(frame.at(0).addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    u32 r0_3 = frame->word_0;
    float S0_2 = 1.0f;
    if (s32(r0_3) < 0) {
        u32 r0_4 = std::bit_cast<u32>(S0) << 1;
        if (r0_4 > 0xff000000u) {  // (from the original)
            S0_2 = S0 + S0;
        }
        if (r0_4 < 0xff000000u || r0_4 != 0xff000000u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S0;
            return r0_4;
        }
        u32 r0_5 = call_00101a12(1u, r1_1);
        float S1_3 = 0.0f;
        float S0_3 = S1_3 / S1_3;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        return r0_5;
    }
    if ((r0_3 & 1u) != 0) {
        float S2_3 = S0 * S0;
        float S0_4 = S0 + S0 * ((-0.16666651f + S2_3 * (0.008331979f - S2_3 * 0.00019495636f)) * S2_3);
        if ((r0_3 & 2u) != 0) {
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_4;
            guest::cpu()->s[1] = S0;
            return r0_3;
        }
        float S0_5 = -S0_4;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S0;
        return r0_3;
    }
    float S1_4 = S0 * S0;
    float S0_6 = S0_2 + S1_4 * (-0.49999896f + S1_4 * (0.041656293f + S1_4 * -0.0013597823f));
    if ((r0_3 & 2u) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return r0_3;
    }
    float S0_7 = -S0_6;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_4;
    return r0_3;
}

}  // namespace d_0077a2a4
GUEST_EXPORT_FRAMED(0x0077a2a4, d_0077a2a4::f_0077a2a4, 0x4000);  // pushes {lr} first, as the original

// f_0077a650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077a650 {


u32 f_0077a650(float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r0_1 = std::bit_cast<u32>(S0);
    u32 r1_1 = (r0_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r1_1) >= 0x17) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r0_1;
    }
    float S2_1 = 0.0f;
    float S1_1 = S0 + 1e30f;
    if (s32(r1_1) < 0) {
        if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
            float S0_1 = std::bit_cast<float>(r0_1);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_1;
        }
        if (s32(r0_1) >= 0) {
            float S0_2 = std::bit_cast<float>(0u);
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_2;
            guest::cpu()->s[1] = S1_1;
            return 0u;
        }
        if (r0_1 != 0x80000000u) {  // (from the original)
            r0_1 = 0xbf800000u;  // (from the original)
        }
        float S0_3 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    u32 r2_1 = lsr_r(0x7fffffu, r1_1 & 0xff);  // (from the original)
    if ((r0_1 & r2_1) == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if ((fpsr & 0xfffffffu | vfp_cmpf(S2_1, S1_1)) >> 0x1d & 1) {  // (from the original)
        float S0_4 = std::bit_cast<float>(r0_1);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_1;
        return r0_1;
    }
    if (s32(r0_1) >= 0) {
        u32 r0_2 = r0_1 & ~r2_1;
        float S0_5 = std::bit_cast<float>(r0_2);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_5;
        guest::cpu()->s[1] = S1_1;
        return r0_2;
    }
    u32 r1_2 = lsr_r(0x800000u, r1_1 & 0xff);  // (from the original)
    u32 r0_4 = (r0_1 + r1_2) & ~r2_1;
    float S0_6 = std::bit_cast<float>(r0_4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_1;
    return r0_4;
}

}  // namespace d_0077a650
GUEST_EXPORT(0x0077a650, d_0077a650::f_0077a650);

// f_0077ab5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077ab5c {

struct __attribute__((packed)) Object_0077ab5c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0077ab5c_0, word_0, 0x0);

struct __attribute__((packed)) Local_0077ab5c_ea_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0077ab5c_ea_2, float_0, 0x0);
GUEST_OFFSET(Local_0077ab5c_ea_2, float_4, 0x4);


struct __attribute__((packed)) Frame_0077ab5c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
};
GUEST_OFFSET(Frame_0077ab5c, word_0, 0x0);
GUEST_OFFSET(Frame_0077ab5c, word_8, 0x8);
GUEST_SIZE(Frame_0077ab5c, 0xc);

void f_0077ab5c(gptr<Object_0077ab5c_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_0077ab5c> frame;  // the original's stack frame
    frame->word_8 = arg0.addr();
    gptr<Local_0077ab5c_ea_2> ea_2 = gptr<Local_0077ab5c_ea_2>(frame.at(0).addr());
    ea_2->float_0 = S0;
    ea_2->float_4 = S1;
    u32 r1_1 = frame->word_0;
    if (0xff000000u < r1_1 << 1) {  // (from the original)
        arg0->word_0 = r1_1;
        float S0_1 = std::bit_cast<float>(frame->word_0);
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r3_1 = r1_1 & 0x80000000u;  // (from the original)
    u32 r2_1 = (r1_1 >> 0x17u & 0xffu) - 0x7fu;  // (from the original)
    if (s32(r2_1) < 0x17) {  // (from the original)
        if (s32(r2_1) < 0) {
            u32 r1_2 = r1_1 & 0x80000000u;  // (from the original)
            arg0->word_0 = r1_2;
            float S0_2 = std::bit_cast<float>(frame->word_0);
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_2;
            return;
        }
        u32 r2_2 = lsr_r(0x7fffffu, r2_1 & 0xff);  // (from the original)
        if ((r1_1 & r2_2) != 0) {
            u32 r1_3 = r1_1 & ~r2_2;
            arg0->word_0 = r1_3;
            float S1_1 = std::bit_cast<float>(frame->word_0);
            float S0_3 = S1_1 - std::bit_cast<float>(r1_3);
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->s[0] = S0_3;
            return;
        }
    }
    arg0->word_0 = r1_1;
    float S0_4 = std::bit_cast<float>(r3_1);
    frame->word_0 = r3_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_4;
}

}  // namespace d_0077ab5c
GUEST_EXPORT(0x0077ab5c, d_0077ab5c::f_0077ab5c);

// f_0077b6e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b6e8 {

inline guest::global<u32, 0x0077b6fc> global_0077b6fc;

void f_0077b6e8() {
    float S0_1 = 0.0f;
    float S1_1 = std::bit_cast<float>(*global_0077b6fc);
    double dset_0_1 = D2F(S0_1, S1_1) * D2F(S0_1, S1_1);
    float S0_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1)));
    float S1_2 = std::bit_cast<float>(u32(std::bit_cast<u64>(dset_0_1) >> 0x20u));  // (from the original)
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
}

}  // namespace d_0077b6e8
GUEST_EXPORT(0x0077b6e8, d_0077b6e8::f_0077b6e8);

// f_0077b700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b700 {


void f_0077b700() {
    float S0_1 = 2.524355e-29f;
    float S0_2 = S0_1 * S0_1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0077b700
GUEST_EXPORT(0x0077b700, d_0077b700::f_0077b700);

// f_0077b854: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077b854 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;

void f_0077b854(u32 r0, u32 r1, u32 r2) {
    if (r2 == 0) {
        return;
    }
    call_002f8574(r1, r0, r2, r1);
}

}  // namespace d_0077b854
GUEST_EXPORT(0x0077b854, d_0077b854::f_0077b854);

// f_0077f2ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0077f2ac {

struct __attribute__((packed)) Local_0077f2ac_r0_1 {
    u8 unknown_0[0xe38];  // (not used here)
    u32 word_e38;
    u8 unknown_e3c[0x38];  // (not used here)
    u8 byte_e74;
};
GUEST_OFFSET(Local_0077f2ac_r0_1, word_e38, 0xe38);
GUEST_OFFSET(Local_0077f2ac_r0_1, byte_e74, 0xe74);

struct __attribute__((packed)) Local_0077f2ac_r0_3 {
    u32 word_0;
    u8 unknown_4[0x176c];  // (not used here)
    u32 word_1770;
};
GUEST_OFFSET(Local_0077f2ac_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0077f2ac_r0_3, word_1770, 0x1770);

struct __attribute__((packed)) Local_0077f2ac_r1_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0077f2ac_r1_1, word_0, 0x0);

struct __attribute__((packed)) Local_0077f2ac_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0077f2ac_r1_2, word_0, 0x0);
GUEST_OFFSET(Local_0077f2ac_r1_2, word_4, 0x4);

inline guest::global<u32, 0x00974a7c> global_00974a7c;
inline guest::global<u32, 0x00974a80> global_00974a80;
inline guest::global<u32, 0x0097d478> global_0097d478;
inline constexpr guest::Function<0x0079fb70, u32(u32, u32, u32, u32)> call_0079fb70;

void f_0077f2ac() {
    gptr<Local_0077f2ac_r0_1> r0_1 = gptr<Local_0077f2ac_r0_1>(*gptr<u32>(*global_0097d478));
    if (r0_1.addr() == 0) {
        return;
    }
    u32 r3_1 = *global_0097d478;
    gptr<Local_0077f2ac_r1_1> r1_1 = gptr<Local_0077f2ac_r1_1>(r3_1 + 0x1770u);  // (from the original)
    if (r0_1->word_e38 == 0x6051u) {  // (from the original)
        if (r1_1->word_0 != 0x6051u) {  // (from the original)
            gptr<Local_0077f2ac_r1_2> r1_2 = gptr<Local_0077f2ac_r1_2>(*global_00974a7c);
            if (*global_00974a80 > r1_2.addr()) {
                r1_2->word_0 = 0;
                r1_2->word_4 = 0xf0125;  // (from the original)
                *global_00974a7c = r1_2.addr() + 8u;
            }
        }
    } else {
        u32 r1_3 = r1_1->word_0;
        if (r1_3 == 0x6051u) {  // (from the original)
            u32 r0_2 = r0_1->byte_e74;
            if (r0_2 != 0) {
                call_0079fb70(r0_2, r1_3, 0x6051u, r3_1);  // (from the original)
            }
        }
    }
    gptr<Local_0077f2ac_r0_3> r0_3 = gptr<Local_0077f2ac_r0_3>(*global_0097d478);
    r0_3->word_1770 = *gptr<u32>(r0_3->word_0 + 0xe38u);  // (from the original)
}

}  // namespace d_0077f2ac
GUEST_EXPORT_FRAMED(0x0077f2ac, d_0077f2ac::f_0077f2ac, 0x4010);  // pushes {r4, lr} first, as the original
