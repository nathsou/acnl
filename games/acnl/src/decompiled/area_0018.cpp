// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00186d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00186d7c {


void f_00186d7c(float S0, float S1, float S2, float S3) {
    float S0_1 = fabsf(S0 - S2);
    float S2_1 = fabsf(S1 - S3);
    float S0_2 = sqrtf(S0_1 * S0_1 + S2_1 * S2_1);
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_00186d7c
GUEST_EXPORT(0x00186d7c, d_00186d7c::f_00186d7c);

// f_00188850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00188850 {

inline guest::global<u32, 0x00ae5724> global_00ae5724;
inline guest::global<u32, 0x00ae5728> global_00ae5728;
inline guest::global<u32, 0x00ae572c> global_00ae572c;

u32 f_00188850(u32 r0, u32 r1) {
    if (s32(r0) < 0) {
        return 0u;
    }
    u32 r12_1 = *global_00ae5724;
    u32 res_1 = r12_1 - r0;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r12_1 ^ r0) & (r12_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r1 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 == vf_1) {
        u32 r4_1 = *global_00ae5728;
        u32 res_2 = r4_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r4_1 ^ r1) & (r4_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r0_1 = r1 * r12_1 + r0;
    u32 r1_2 = gptr<u32>(*global_00ae572c)[r0_1 >> 5];
    if ((r1_2 & (1u << (r0_1 & 0x1fu))) != 0) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_00188850
GUEST_EXPORT_FRAMED(0x00188850, d_00188850::f_00188850, 0x10);  // pushes {r4} first, as the original

// f_001888ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001888ac {

inline guest::global<u32, 0x00ae5724> global_00ae5724;
inline guest::global<u32, 0x00ae5728> global_00ae5728;
inline guest::global<u32, 0x00ae572c> global_00ae572c;

u32 f_001888ac(u32 r0, u32 r1) {
    if (s32(r0) < 0) {
        return 1u;
    }
    u32 r3_1 = *global_00ae5724;
    u32 res_1 = r3_1 - r0;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r3_1 ^ r0) & (r3_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        nf_1 = r1 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 == vf_1) {
        u32 r12_1 = *global_00ae5728;
        u32 res_2 = r12_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r12_1 ^ r1) & (r12_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    u32 r0_1 = r1 * r3_1 + r0;
    if ((gptr<u32>(*global_00ae572c)[r0_1 >> 5] & (1u << (r0_1 & 0x1fu))) != 0) {  // (from the original)
        guest::cpu()->r[1] = 1u;
        return 0u;
    }
    guest::cpu()->r[1] = 1u;
    return 1u;
}

}  // namespace d_001888ac
GUEST_EXPORT(0x001888ac, d_001888ac::f_001888ac);

// f_001889b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001889b8 {

struct __attribute__((packed)) Local_001889b8_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001889b8_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_001889b8_r0_1, float_4, 0x4);

struct __attribute__((packed)) Local_001889b8_r0_2 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001889b8_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001889b8_r0_2, float_4, 0x4);

struct __attribute__((packed)) Local_001889b8_r0_3 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001889b8_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_001889b8_r0_3, float_4, 0x4);

inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;
inline constexpr guest::Function<0x001279b4, u32(u32)> call_001279b4;
inline constexpr guest::Function<0x00172398, u32(u32, u32, u32, u32)> call_00172398;

struct __attribute__((packed)) Frame_001889b8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u8 unknown_1c[0x8];  // (not read or written by name)
    float float_24;
    float float_28;
    u8 unknown_2c[0x8];  // (not read or written by name)
    float float_34;
    u8 unknown_38[0x8];  // (not read or written by name)
    u32 word_40;
};
GUEST_OFFSET(Frame_001889b8, word_0, 0x0);
GUEST_OFFSET(Frame_001889b8, word_4, 0x4);
GUEST_OFFSET(Frame_001889b8, word_8, 0x8);
GUEST_OFFSET(Frame_001889b8, word_c, 0xc);
GUEST_OFFSET(Frame_001889b8, float_10, 0x10);
GUEST_OFFSET(Frame_001889b8, float_14, 0x14);
GUEST_OFFSET(Frame_001889b8, float_18, 0x18);
GUEST_OFFSET(Frame_001889b8, float_24, 0x24);
GUEST_OFFSET(Frame_001889b8, float_28, 0x28);
GUEST_OFFSET(Frame_001889b8, float_34, 0x34);
GUEST_OFFSET(Frame_001889b8, word_40, 0x40);
GUEST_SIZE(Frame_001889b8, 0x44);

u32 f_001889b8(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4) {
    guest::StackFrameOf<Frame_001889b8> frame;  // the original's stack frame
    u32 zf_1 = r0 == 0;
    u32 r4_1 = r0;
    gptr<Local_001889b8_r0_1> r0_1 = gptr<Local_001889b8_r0_1>(frame.at(0x1c).addr());  // (from the original)
    frame->float_10 = S0;
    frame->float_14 = S2;
    frame->float_18 = S4;
    frame->float_24 = S4;
    r0_1->float_0 = S1;
    r0_1->float_4 = S2;
    gptr<Local_001889b8_r0_2> r0_2 = gptr<Local_001889b8_r0_2>(frame.at(0x2c).addr());  // (from the original)
    frame->float_28 = S1;
    frame->float_34 = S0;
    r0_2->float_0 = S3;
    r0_2->float_4 = S4;
    gptr<Local_001889b8_r0_3> r0_3 = gptr<Local_001889b8_r0_3>(frame.at(0x38).addr());  // (from the original)
    r0_3->float_0 = S3;
    r0_3->float_4 = S4;
    if (zf_1) {
        frame->word_40 = 5;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        call_001277dc(0x208u, frame.at(0).addr(), r2, r3);  // (from the original)
        u32 r0_4 = frame->word_0;
        frame->word_0 = 0x9751ac;  // (from the original)
        frame->word_4 = frame.at(0x10).addr();  // (from the original)
        frame->word_8 = 0;
        frame->word_c = r3 == 0 ? 0u : 0x975248u;  // (from the original)
        u32 r0_5 = call_00172398(r0_4, r1, frame->word_40, 4u);
        call_001279b4(r0_5 - r0_4 & ~3u);
    } else {
        frame->word_4 = frame.at(0x10).addr();  // (from the original)
        frame->word_8 = 0;
        frame->word_c = r3 != 0 ? 0x975248u : 0u;  // (from the original)
        frame->word_0 = 0x9751ac;  // (from the original)
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        u32 r0_7 = call_00172398(r4_1, r1, 5u, 4u);
        r4_1 = r0_7;
    }
    return r4_1;
}

}  // namespace d_001889b8
GUEST_EXPORT_FRAMED(0x001889b8, d_001889b8::f_001889b8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00189e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00189e2c {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x00203554, u32(u32)> call_00203554;
inline constexpr guest::Function<0x002fc288, u32(u32)> call_002fc288;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32)> call_002fe9dc;
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;
inline constexpr guest::Function<0x002ffad8, u32(u32)> call_002ffad8;
inline constexpr guest::Function<0x00302944, u32(u32, u32)> call_00302944;
inline constexpr guest::Function<0x00303094, u32(u32, u32)> call_00303094;
inline constexpr guest::Function<0x006f86a4, u32(u32)> call_006f86a4;
inline constexpr guest::Function<0x00745948, u32(u32, u32, u32, u32)> call_00745948;

void f_00189e2c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2f0);  // the original's stack frame
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u64 t_3 = 0;
    u64 t_5 = 0;
    u32 r6 = r1;
    call_0013fac4(r6, 0x20u, ~0u, r3);  // (from the original)
    u32 r4 = 0u;
    u32 r0_1 = call_00203554(r2);
    u32 r8 = r0_1;
    u32 r0_2 = call_006f86a4(r2);
    u32 zf_1 = r8 == 0;
    if (!zf_1) {
        zf_1 = r0_2 == 0;
    }
    if (!zf_1) {
        u32 r7 = r0_2 + 0x8f9cu;  // (from the original)
        if (r7 != 0) {
            r1 = 0u;
            u32 r5 = r1;
            r3 = r1;
L_189e8c:;
            u32 r0 = 0u;
            r2 = gptr<u32>(r7)[r3];
L_189e94:;
            r1 += 1u;
            if ((lsr_r(r2, r0 & 0xff) & 1u) != 0) {  // (from the original)
                r5 += 1u;
            }
            if (r1 < 0x5bu) {  // (from the original)
                r0 += 1u;
                if (r0 < 0x20u) {  // (from the original)
                    guest::preempt();
                    goto L_189e94;
                }
                r3 += 1u;
                if (r3 < 3u) {
                    guest::preempt();
                    goto L_189e8c;
                }
            }
            if (u32((0ull + ~0u + u32(8u >= r5)) >> 0x20)) {  // (from the original)
                u32 r0_3 = call_00745948(r8, r5 - 1u, 1u, r3);
                r3 = guest::cpu()->r[3];
                r4 = 1u;
                *gptr<u32>(r6) = r0_3;
                if (r5 > 1u) {
                    do {
                        u32 r0_4 = call_00745948(r8, r4 - 1u, 1u, r3);
                        r3 = guest::cpu()->r[3];
                        *gptr<u32>(r6 + (r4 << 2)) = r0_4;
                        r4 += 1u;
                        guest::preempt();
                    } while (r5 > r4);
                }
            } else {
                u32 r0_5 = call_00745948(r8, 7u, 1u, r3);
                if (r0_5 + 1u != 0) {
                    *gptr<u32>(r6) = r0_5;
                    r4 += 1u;
                    call_002fc288(frame.at(0).addr());
                    call_00302944(frame.at(0).addr(), 0x2fu);  // (from the original)
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r5 = 0u;
                    do {
                        if (r5 <= 0x5au) {  // (from the original)
                            r2 = gptr<u32>(r7)[r5 >> 5];
                            if ((r2 >> (r5 & 0x1fu) & 1u) != 0) {  // (from the original)
                                goto L_189fa0;
                            }
                        }
                        r1_6 = uxth(r5 + 0x212bu);  // (from the original)
                        r0_9 = frame.at(0x2e8).addr();  // (from the original)
                        call_002fcbb0(r0_9, r1_6, r2, r3);
                        r1_7 = frame.at(0x2e8).addr();  // (from the original)
                        r0_10 = frame.at(0).addr();
                        call_002fe9dc(r0_10, r1_7);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
L_189fa0:;
                        r5 += 1u;
                        guest::preempt();
                    } while (r5 < 0x5bu);  // (from the original)
                    r5 = 0u;
                    if (!u32((0ull + ~0u + u32(0u >= 8u)) >> 0x20)) {  // (from the original)
                        do {
                            u32 r0_11 = call_00745948(r8, r5, 1u, r3);
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_11 + 1u != 0) {
                                call_002fcbb0(frame.at(0x2e8).addr(), uxth(r0_11 + 0x212bu), r2, r3);  // (from the original)
                                call_002fe9dc(frame.at(0).addr(), frame.at(0x2e8).addr());  // (from the original)
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                            }
                            r5 += 1u;
                            t_3 = 0ull + ~0u + u32(r5 >= 8u);
                            guest::preempt();
                        } while (!u32(t_3 >> 0x20));  // (from the original)
                    }
                    if (!u32((0ull + ~0u + u32(r4 >= 8u)) >> 0x20)) {  // (from the original)
                        do {
                            call_002fea2c(frame.at(0x2e8).addr(), frame.at(0).addr(), r2, r3);  // (from the original)
                            u32 r0_16 = call_002ffad8(frame.at(0x2e8).addr());  // (from the original)
                            *gptr<u32>(r6 + (r4 << 2)) = r0_16;
                            r4 += 1u;
                            u32 r1_12 = r4 - 2u;
                            if (!(r1_12 >> 0x1f)) {  // (from the original)
                                u32 r0_17 = call_00745948(r8, r1_12, 1u, guest::cpu()->r[3]);
                                call_002fcbb0(frame.at(0x2ec).addr(), uxth(r0_17 + 0x212bu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                call_00303094(frame.at(0).addr(), frame.at(0x2ec).addr());  // (from the original)
                            }
                            call_002fe9dc(frame.at(0).addr(), frame.at(0x2e8).addr());  // (from the original)
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            t_5 = 0ull + ~0u + u32(r4 >= 8u);
                            guest::preempt();
                        } while (!u32(t_5 >> 0x20));  // (from the original)
                    }
                    return;
                }
            }
        }
    }
}

}  // namespace d_00189e2c
GUEST_EXPORT_FRAMED(0x00189e2c, d_00189e2c::f_00189e2c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0018a390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018a390 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_0018a390() {
    return call_002fc8e8(0x94d748u, 0x95bfdcu);  // (from the original)
}

}  // namespace d_0018a390
GUEST_EXPORT(0x0018a390, d_0018a390::f_0018a390);

// f_0018ac84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ac84 {

struct __attribute__((packed)) Object_0018ac84_0 {
    u8 unknown_0[0x8dd];  // (not used here)
    u8 byte_8dd;
    u8 byte_8de;
};
GUEST_OFFSET(Object_0018ac84_0, byte_8dd, 0x8dd);
GUEST_OFFSET(Object_0018ac84_0, byte_8de, 0x8de);

inline constexpr guest::Function<0x00203554, u32(u32)> call_00203554;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x006f86a4, u32(u32)> call_006f86a4;
inline constexpr guest::Function<0x00745900, u32(u32, u32)> call_00745900;
inline constexpr guest::Function<0x00745948, u32(u32, u32, u32, u32)> call_00745948;

u32 f_0018ac84(gptr<Object_0018ac84_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r7 = guest::cpu()->r[7];
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4 = r0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_00203554(r0_1);
    u32 r8 = r0_2;
    u32 r0_3 = call_006f86a4(r0_1);
    r1 = guest::cpu()->r[1];
    u32 zf_1 = r8 == 0 || r0_3 == 0;
    if (!zf_1) {
        zf_1 = r0_3 + 0x8f9cu == 0;  // (from the original)
        r7 = r0_3 + 0x8f9cu;  // (from the original)
    }
    if (zf_1) {
        return 0u;
    }
    u32 r6 = r4 + 0x800u;  // (from the original)
    u32 r1_3 = s8(arg0->byte_8dd);
    u32 r0_4 = call_00745900(r8, r1_3);
    if (r0_4 + 1u == 0) {
        goto L_18ad48;
    }
    r0_5 = call_00745948(r8, r0_4 + 1u, 1u, guest::cpu()->r[3]);
    if (r0_5 + 1u == 0) {
        goto L_18ad94;
    }
    r0_6 = call_00745948(r8, r0_4 + 1u, 1u, guest::cpu()->r[3]);
    arg0->byte_8dd = u8(r0_6);
    r0_7 = call_00745948(r8, r0_4 + 2u, 1u, guest::cpu()->r[3]);
    if (r0_7 + 1u == 0) {
        goto L_18adc0;
    }
    r0_8 = call_00745948(r8, r0_4 + 2u, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    arg0->byte_8de = u8(r0_8);
L_18ad2c:;
    r0_9 = *gptr<s8>(r6 + 0xdeu);  // (from the original)
    if (s32(r0_9) >= 0x5b || r0_9 + 1u == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_18ad48:;
    r1_8 = *gptr<s8>(r6 + 0xdeu);  // (from the original)
    r0_10 = call_00745900(r8, r1_8);
    r1 = guest::cpu()->r[1];
    if (r0_10 + 1u != 0) {
        *gptr<u8>(r4 + 0x8ddu) = u8(u32(*gptr<u8>(r6 + 0xdeu)));  // (from the original)
        u32 r0_11 = call_00745948(r8, r0_10 + 1u, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x8deu) = u8(r0_11);  // (from the original)
        if (s32(r0_11) < 0x5b && r0_11 + 1u != 0) {  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_18ad94:;
    r0_12 = call_00745948(r8, 0u, 1u, guest::cpu()->r[3]);
    *gptr<u8>(r4 + 0x8ddu) = u8(r0_12);  // (from the original)
    r0_13 = call_00745948(r8, 1u, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x8deu) = u8(r0_13);  // (from the original)
    return 1u;
L_18adc0:;
    r2 = 0u;
    r0 = r2;
    u32 r12 = r2;
L_18adcc:;
    r1 = 0u;
    r3 = gptr<u32>(r7)[r12];
L_18add4:;
    r2 += 1u;
    if ((lsr_r(r3, r1 & 0xff) & 1u) != 0) {  // (from the original)
        r0 += 1u;
    }
    if (r2 < 0x5bu) {  // (from the original)
        r1 += 1u;
        if (r1 < 0x20u) {  // (from the original)
            guest::preempt();
            goto L_18add4;
        }
        r12 += 1u;
        if (r12 < 3u) {
            guest::preempt();
            goto L_18adcc;
        }
    }
    if (u32((0ull + ~0u + u32(8u >= r0)) >> 0x20)) {  // (from the original)
        u32 r0_14 = call_00745948(r8, 0u, 0u, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r4 + 0x8deu) = u8(r0_14);  // (from the original)
        guest::preempt();
        goto L_18ad2c;
    }
    u32 r0_15 = call_00745948(r8, 1u, 0u, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x8deu) = u8(r0_15);  // (from the original)
    guest::preempt();
    goto L_18ad2c;
}

}  // namespace d_0018ac84
GUEST_EXPORT_FRAMED(0x0018ac84, d_0018ac84::f_0018ac84, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0018c1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018c1c0 {

struct __attribute__((packed)) Local_0018c1c0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0018c1c0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0018c1c0_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0018c1c0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0018c1c0_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0018c1c0_ea_2, word_4, 0x4);

inline guest::global<u32, 0x0094f310> global_0094f310;
inline constexpr guest::Function<0x00203554, u32(u32, u32, u32, u32)> call_00203554;
inline constexpr guest::Function<0x002d50b8, u32(u32, u32, u32)> call_002d50b8;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x004e9f00, u32(u32, u32, u32, u32)> call_004e9f00;
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32, u32)> call_005359fc;
inline constexpr guest::Function<0x00584074, u32(u32, u32)> call_00584074;
inline constexpr guest::Function<0x0058aee8, u32(u32, u32, u32, u32)> call_0058aee8;
inline constexpr guest::Function<0x006f9c08, u32(u32)> call_006f9c08;

struct __attribute__((packed)) Frame_0018c1c0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0018c1c0, word_0, 0x0);
GUEST_OFFSET(Frame_0018c1c0, word_4, 0x4);
GUEST_SIZE(Frame_0018c1c0, 0xc);

void f_0018c1c0(gptr<AcFtrAudio> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0018c1c0> frame;  // the original's stack frame
    u32 r5_1 = r1;
    u32 r8_1 = ~0u;
    if (arg0->byte_8dc != 0) {
        u32 r0_1 = call_005359fc(0x2fu, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_2 = *gptr<u32>(r0_1 + 4u);
        if (r0_2 > r5_1) {
            u32 r0_3 = call_00584074(r0_2, r1);
            frame->word_0 = 0;
            frame->word_4 = 0;
            u32 r0_4 = call_0058aee8(r0_3, 0xdu, r5_1, 5u);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r2 != 0) {
                u32 r0_5 = call_002f74c8(r0_4, r1);
                u32 r0_6 = call_006f9c08(r0_5);
                r1 = guest::cpu()->r[1];
                if (r0_6 != 0) {
                    call_002d50b8(r0_6, 0x95bfdcu, 0x95bfdcu);  // (from the original)
                    u32 r1_2 = guest::cpu()->r[1];
                    u32 r2_4 = guest::cpu()->r[2];
                    u32 r3_5 = guest::cpu()->r[3];
                    u32 r0_7 = *global_0094f310;
                    if (r0_7 != 0) {
                        r3_5 = ~0u;
                        gptr<Local_0018c1c0_ea_1> ea_1 = gptr<Local_0018c1c0_ea_1>(r0_7 + 0x850u);  // (from the original)
                        ea_1->word_0 = r3_5;
                        ea_1->word_4 = r3_5;
                        r1_2 = 0u;
                        *gptr<u8>(r0_7 + 0x860u) = u8(r1_2);  // (from the original)
                        r2_4 = r1_2;
                        gptr<Local_0018c1c0_ea_2> ea_2 = gptr<Local_0018c1c0_ea_2>(r0_7 + 0x858u);  // (from the original)
                        ea_2->word_0 = r1_2;
                        ea_2->word_4 = r2_4;
                    }
                    u32 r0_8 = call_00203554(r0_5, r1_2, r2_4, r3_5);
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        frame->word_0 = 0x95bfdc;  // (from the original)
                        call_004e9f00(r0_8, r1, 0u, 0u);
                        r1 = guest::cpu()->r[1];
                        *gptr<u8>(r0_8 + 9u) = u8(r8_1);
                    }
                }
            }
            *gptr<u8>(arg0.addr() + 0x8dcu) = 0;  // (from the original)
        }
    }
    if (r3 != 0) {
        *gptr<u8>(arg0.addr() + 0x8ddu) = u8(r8_1);  // (from the original)
        *gptr<u8>(arg0.addr() + 0x8deu) = u8(r8_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0018c1c0
GUEST_EXPORT_FRAMED(0x0018c1c0, d_0018c1c0::f_0018c1c0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0018caf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018caf0 {

struct __attribute__((packed)) Object_0018caf0_0 {
    u8 unknown_0[0x308];  // (not used here)
    u8 byte_308;
};
GUEST_OFFSET(Object_0018caf0_0, byte_308, 0x308);

inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> call_005707f0;

void f_0018caf0(gptr<Object_0018caf0_0> arg0) {
    arg0->byte_308 = 1;
    float S0_1 = -10.0f;
    guest::cpu()->s[0] = S0_1;
    call_005707f0(arg0.addr(), 0x1fu, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0018caf0
GUEST_EXPORT(0x0018caf0, d_0018caf0::f_0018caf0);

// f_0018d284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018d284 {

struct __attribute__((packed)) Object_0018d284_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0018d284_0, word_4, 0x4);
GUEST_OFFSET(Object_0018d284_0, word_8, 0x8);

inline constexpr guest::Function<0x00116e31, u32(u32, u32)> call_00116e30;
inline constexpr guest::Function<0x001198e9, u32(u32, u32)> call_001198e8;
inline constexpr guest::Function<0x00119fcd, u32(u32, u32)> call_00119fcc;
inline constexpr guest::Function<0x0011a7c5, u32(u32, u32)> call_0011a7c4;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;
inline constexpr guest::Function<0x00309865, u32(u32, u32)> call_00309864;

u32 f_0018d284(gptr<Object_0018d284_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r7 = r0;
    arg0->word_4 = 0;
    u32 r10 = r1;
    arg0->word_8 = 0;
    r0 = call_002fe8a8(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    u32 r4_1 = r0;
    if (r0 != 0) {
        u32 r0_1 = call_002fb328(r0, r1);
        u32 r9 = r0_1 + 0x292a4u;  // (from the original)
        r0 = call_00309864(r9, 0u);
        r1 = guest::cpu()->r[1];
        u32 r5 = r0;
        u32 r8 = r4_1 + 0x55a6u;  // (from the original)
        u32 r4 = 0u;
        do {
            if (r4 != r5) {
                r0 = call_003009a8(r9, r4);
                r1 = guest::cpu()->r[1];
                u32 r6_1 = r0;
                if (r0 != 0) {
                    r0 = call_001198e8(r0, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0 == 0) {
                        r0 = call_00119fcc(r6_1, r1);
                        r1 = guest::cpu()->r[1];
                        if (r0 == 0) {
                            if (r10 != 0) {
                                r0 = call_0011a7c4(r6_1, r8);
                                r1 = guest::cpu()->r[1];
                                if (r0 == 0) {
                                    goto L_18d340;
                                }
                            }
                            r0 = call_00116e30(r7, r4);
                            r1 = guest::cpu()->r[1];
                        }
                    }
                }
            }
L_18d340:;
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0018d284
GUEST_EXPORT_FRAMED(0x0018d284, d_0018d284::f_0018d284, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0018d350: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018d350 {

struct __attribute__((packed)) Local_0018d350_r0_1 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not used here)
    u16 half_2c;
    u8 unknown_2e[0x6c];  // (not used here)
    u8 byte_9a;
};
GUEST_OFFSET(Local_0018d350_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0018d350_r0_1, half_2c, 0x2c);
GUEST_OFFSET(Local_0018d350_r0_1, byte_9a, 0x9a);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x0095386c> global_0095386c;
inline guest::global<u32, 0x00a83af0> global_00a83af0;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> call_00300914;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> call_00300924;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_005f1294;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;
inline constexpr guest::Function<0x005fcfd8, u32(u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;

struct __attribute__((packed)) Frame_0018d350 {
    u32 word_0;
    u8 unknown_4[0x34];  // (not read or written by name)
    u16 half_38;
    u8 unknown_3a[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0018d350, word_0, 0x0);
GUEST_OFFSET(Frame_0018d350, half_38, 0x38);
GUEST_SIZE(Frame_0018d350, 0x3c);

u32 f_0018d350(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0018d350> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_6 = 0;
    u32 zf_1 = r0 == 0;
    u32 r8 = r0;
    gptr<Local_0018d350_r0_1> r0_1 = gptr<Local_0018d350_r0_1>(0x95debcu);  // (from the original)
    u32 r6 = r0_1->word_0;
    if (!zf_1) {
        zf_1 = r6 == 0;
    }
    if (!zf_1) {
        r0_1 = gptr<Local_0018d350_r0_1>(*global_0095386c);
        u32 r4_1 = s8(r0_1->byte_9a);
        if (s32(r4_1) >= 0) {
            u32 r0_2 = call_002fb328(r0_1.addr(), r1, r2, r3);
            r0_1 = gptr<Local_0018d350_r0_1>(call_003009a8(r0_2 + 0x292a4u, r4_1));  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_1.addr() != 0) {
                r0_1 = gptr<Local_0018d350_r0_1>(u32(r0_1->half_2c));
                r1 = *global_00a83af0;
                u32 zf_2 = r1 == 0;
                u32 cf_1 = r1 >= 0u;
                if (!zf_2) {
                    zf_2 = 0x18fu == r0_1.addr();  // (from the original)
                    cf_1 = 0x18fu >= r0_1.addr();  // (from the original)
                }
                if (!!cf_1 && !zf_2) {
                    r0_1 = gptr<Local_0018d350_r0_1>(r0_1.addr() * 0x11u);  // (from the original)
                    u32 r4 = r1 + (r0_1.addr() << 1);
                    if (r4 != 0) {
                        u32 r0_4 = frame.at(0).addr();
                        u32 r9 = frame.at(0x38).addr();  // (from the original)
                        frame->half_38 = u16(u32(*gptr<u16>(r4)));
                        call_003083bc(r0_4, frame.at(0x18).addr(), 9u);  // (from the original)
                        u32 r7 = vtable_script__WordFix_9u_;
                        *gptr<u32>(r0_4) = r7;
                        u32 r0_5 = r0_4 + 0xcu;  // (from the original)
                        call_005f4bfc(r0_5);
                        u32 r5 = r0_5 - 0xcu;  // (from the original)
                        call_002f825c(r0_5 + 0xcu, 0x12u);  // (from the original)
                        r1 = 0x8906ecu;  // (from the original)
                        r0 = r5 + 0x18u;  // (from the original)
                        *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
                        r2 = 4u;
                        do {
                            u32 r3_5 = *gptr<u16>(r1);
                            res_1 = r2 - 1u;
                            r2 = res_1;
                            *gptr<u16>(r0 + 2u) = u16(r3_5);
                            r3_6 = *gptr<u16>(r1);
                            u32 ea_2 = r0 + 4u;
                            *gptr<u16>(ea_2) = u16(r3_6);
                            r0 = ea_2;
                            guest::preempt();
                        } while (res_1 != 0);
                        call_0056d874(r5, r9, r2, r3_6);
                        call_005f1294(r8, frame.at(0).addr(), 0u);
                        call_00300914(r8, u32(*gptr<u8>(r4 + 0x1du)) >> 4, 0u);  // (from the original)
                        u32 r1_5 = *gptr<s8>(r4 + 3u);
                        call_00300924(r8, r1_5, 0u);
                        call_005fcfd8(frame.at(0x2c).addr());  // (from the original)
                        *gptr<u8>(r4 + 0x13u) = 0;  // (from the original)
                        call_0075c348(r6, frame.at(0x2c).addr(), 0x18d540u, r4 + 0x10u);  // (from the original)
                        call_005f11b4(r8, frame.at(0x2c).addr(), 0xcu, 0u);  // (from the original)
                        *gptr<u8>(r4 + 0x1bu) = 0;  // (from the original)
                        call_0075c348(r6, frame.at(0x2c).addr(), 0x18d550u, r4 + 0x18u);  // (from the original)
                        call_005f11b4(r8, frame.at(0x2c).addr(), 0xau, 0u);  // (from the original)
                        *gptr<u8>(r4 + 0x17u) = 0;  // (from the original)
                        call_0075c348(r6, frame.at(0x2c).addr(), 0x18d560u, r4 + 0x14u);  // (from the original)
                        call_005f11b4(r8, frame.at(0x2c).addr(), 0xbu, 0u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        frame->word_0 = r7;
                        r0_1 = gptr<Local_0018d350_r0_1>(frame.at(0).addr());
                    }
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_0018d350
GUEST_EXPORT_FRAMED(0x0018d350, d_0018d350::f_0018d350, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0018e6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6bc {


u32 f_0018e6bc(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = r0 + 8u;
    if (r2 < 7u) {
        r0_1 += r2 * 0x21u * 0x38u;  // (from the original)
    }
    if (r1 < 7u) {
        r1 = r1 * 0x21u;  // (from the original)
        r0_1 += (r1 << 3);
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0018e6bc
GUEST_EXPORT(0x0018e6bc, d_0018e6bc::f_0018e6bc);

// f_0018e6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e6e4 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;

struct __attribute__((packed)) Frame_0018e6e4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_0018e6e4, word_0, 0x0);
GUEST_OFFSET(Frame_0018e6e4, word_4, 0x4);
GUEST_OFFSET(Frame_0018e6e4, word_8, 0x8);
GUEST_OFFSET(Frame_0018e6e4, word_c, 0xc);
GUEST_SIZE(Frame_0018e6e4, 0x10);

u32 f_0018e6e4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0018e6e4> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    frame->word_c = 0x18e730;  // (from the original)
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_0 = 1;
    frame->word_4 = 0;
    u32 r0_1 = call_0031758c(r0, r2, r1, frame.at(8).addr());
    return r0_1;
}

}  // namespace d_0018e6e4
GUEST_EXPORT_FRAMED(0x0018e6e4, d_0018e6e4::f_0018e6e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018e944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e944 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;

u32 f_0018e944(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_005673c8(r0, r1, r2, r3);
    u32 r0_2 = call_00301d0c(r0 + 8u, 0x561f0cu, 0x738u, 7u);  // (from the original)
    return r0_2 - 8u;
}

}  // namespace d_0018e944
GUEST_EXPORT_FRAMED(0x0018e944, d_0018e944::f_0018e944, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018e970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e970 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;

u32 f_0018e970(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_002f76ac(r0 + 8u, 0x561f20u, 0x738u, 7u);  // (from the original)
    frame.release();
    return call_00317dec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0018e970
GUEST_EXPORT(0x0018e970, d_0018e970::f_0018e970);

// f_0018e9ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018e9ac {

struct __attribute__((packed)) Object_0018e9ac_0 {
    u8 unknown_0[0x31c];  // (not used here)
    u8 byte_31c;
};
GUEST_OFFSET(Object_0018e9ac_0, byte_31c, 0x31c);

inline guest::global<u32, 0x00845f48> global_00845f48;
inline guest::global<u32, 0x00845f4c> global_00845f4c;
inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32)> call_008161b8;

u32 f_0018e9ac(gptr<Object_0018e9ac_0> arg0) {
    arg0->byte_31c = 1;
    u32 r0_1 = call_008161b8(arg0.addr(), *global_00845f48, *global_00845f4c);
    return r0_1;
}

}  // namespace d_0018e9ac
GUEST_EXPORT_FRAMED(0x0018e9ac, d_0018e9ac::f_0018e9ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018eab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018eab0 {

inline guest::global<u32, 0x00845f50> global_00845f50;
inline guest::global<u32, 0x00845f54> global_00845f54;
inline constexpr guest::Function<0x008161b8, u32(u32, u32, u32)> call_008161b8;

void f_0018eab0() {
    call_008161b8(guest::cpu()->r[0], *global_00845f50, *global_00845f54);
}

}  // namespace d_0018eab0
GUEST_EXPORT_FRAMED(0x0018eab0, d_0018eab0::f_0018eab0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018ebd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ebd4 {

struct __attribute__((packed)) Object_0018ebd4_0 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
    u8 byte_31c;
};
GUEST_OFFSET(Object_0018ebd4_0, word_318, 0x318);
GUEST_OFFSET(Object_0018ebd4_0, byte_31c, 0x31c);

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;
inline constexpr guest::Function<0x002b7cb0, u32(u32, u32, u32, u32)> call_002b7cb0;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_0018ebd4(gptr<Object_0018ebd4_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_31c;
    if (r0_1 != 1u) {
        return;
    }
    u32 r0_2 = call_001323bc(r0_1, r1, r2, guest::cpu()->r[3]);
    call_00569e6c(r0_2, arg0.addr() + 0x24u, 1u);  // (from the original)
    u32 r0_3 = arg0->word_318;
    frame.release();
    call_002b7cb0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0018ebd4
GUEST_EXPORT(0x0018ebd4, d_0018ebd4::f_0018ebd4);

// f_0018ef38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ef38 {

struct __attribute__((packed)) Object_0018ef38_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0018ef38_0, word_c, 0xc);
GUEST_OFFSET(Object_0018ef38_0, word_10, 0x10);

inline guest::global<u32, 0x00845f38> global_00845f38;
inline guest::global<u32, 0x00845f3c> global_00845f3c;

u32 f_0018ef38(gptr<Object_0018ef38_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_00845f38;
    u32 r1_1 = *global_00845f3c;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0018ef38
GUEST_EXPORT(0x0018ef38, d_0018ef38::f_0018ef38);

// f_0018ef88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018ef88 {

struct __attribute__((packed)) Local_0018ef88_r0_6 {
    u8 unknown_0[0x318];  // (not used here)
    u32 word_318;
    u8 byte_31c;
    u8 byte_31d;
};
GUEST_OFFSET(Local_0018ef88_r0_6, word_318, 0x318);
GUEST_OFFSET(Local_0018ef88_r0_6, byte_31c, 0x31c);
GUEST_OFFSET(Local_0018ef88_r0_6, byte_31d, 0x31d);

inline constexpr u32 vtable_BlackToBtn = 0x008eaca8u;
inline guest::global<u32, 0x00845f58> global_00845f58;
inline guest::global<u32, 0x00845f5c> global_00845f5c;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;
inline constexpr guest::Function<0x00569ab8, u32(u32)> call_00569ab8;

u32 f_0018ef88(gptr<BlackToBtn> arg0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00845f5c;
    arg0->word_c = *global_00845f58;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_BlackToBtn;
    arg0->word_20 = 0;
    u32 r0_2 = call_00125e3c(arg0.addr() + 0x24u, 0x8eaca8u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_3 = r0_2 + 0x14cu;  // (from the original)
    call_00569ab8(r0_3);
    u32 r0_4 = r0_3 + 0x158u;  // (from the original)
    call_00125aec(r0_4);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    call_00125aec(r0_5);
    gptr<Local_0018ef88_r0_6> r0_6 = gptr<Local_0018ef88_r0_6>(r0_5 - 0x2f0u);  // (from the original)
    r0_6->word_318 = 0;
    r0_6->byte_31c = 0;
    r0_6->byte_31d = 0;
    return r0_6.addr();
}

}  // namespace d_0018ef88
GUEST_EXPORT_FRAMED(0x0018ef88, d_0018ef88::f_0018ef88, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018f64c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f64c {

struct __attribute__((packed)) Local_0018f64c_r4_1 {
    u8 unknown_0[0x30];  // (not used here)
    u8 byte_30;
    u8 unknown_31[0x13];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x2a];  // (not used here)
    u8 byte_72;
};
GUEST_OFFSET(Local_0018f64c_r4_1, byte_30, 0x30);
GUEST_OFFSET(Local_0018f64c_r4_1, word_44, 0x44);
GUEST_OFFSET(Local_0018f64c_r4_1, byte_72, 0x72);

inline constexpr guest::Function<0x00825aa4, u32(u32)> call_00825aa4;

void f_0018f64c(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 4u) {
        return;
    }
    gptr<Local_0018f64c_r4_1> r4_1 = gptr<Local_0018f64c_r4_1>(r0 + 0x14u + r1 * 0x78u);  // (from the original)
    if (r4_1->word_44 != r2) {
        return;
    }
    r4_1->byte_30 = 0x13;  // (from the original)
    call_00825aa4(r4_1.addr() + 0x44u);  // (from the original)
    call_00825aa4(r4_1.addr() + 0x4cu);  // (from the original)
    r4_1->byte_72 = 0;
}

}  // namespace d_0018f64c
GUEST_EXPORT_FRAMED(0x0018f64c, d_0018f64c::f_0018f64c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018f6a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6a0 {

inline constexpr guest::Function<0x001c987c, u32(u32, u32, u32, u32)> call_001c987c;

void f_0018f6a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_1 = r0 + 0x14u + r1 * 0x78u;  // (from the original)
    u32 r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 != r2) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_001c987c(r0_1, r3, r2, r3);
}

}  // namespace d_0018f6a0
GUEST_EXPORT_FRAMED(0x0018f6a0, d_0018f6a0::f_0018f6a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018f6dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f6dc {

struct __attribute__((packed)) Local_0018f6dc_r0_1 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x28];  // (not used here)
    u8 byte_70;
};
GUEST_OFFSET(Local_0018f6dc_r0_1, word_44, 0x44);
GUEST_OFFSET(Local_0018f6dc_r0_1, byte_70, 0x70);


u32 f_0018f6dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0018f6dc_r0_1> r0_1 = gptr<Local_0018f6dc_r0_1>(r0 + 0x14u + r1 * 0x78u);  // (from the original)
    u32 r1_1 = r0_1->word_44;
    if (r1_1 == r2) {
        r0_1->byte_70 = u8(r3);
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0018f6dc
GUEST_EXPORT(0x0018f6dc, d_0018f6dc::f_0018f6dc);

// f_0018f898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f898 {

inline constexpr guest::Function<0x002b8090, u32(u32, u32, u32)> call_002b8090;

void f_0018f898(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 8u);
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_1 = r0 + 0x14u + r1 * 0x78u;  // (from the original)
    u32 r1_1 = *gptr<u32>(r0_1 + 0x44u);  // (from the original)
    if (r1_1 != r2) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_002b8090(r0_1 + 0x5cu, r3, r12_1);  // (from the original)
}

}  // namespace d_0018f898
GUEST_EXPORT_FRAMED(0x0018f898, d_0018f898::f_0018f898, 0x4010);  // pushes {r4, lr} first, as the original

// f_0018f8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018f8e0 {

struct __attribute__((packed)) Local_0018f8e0_r0_1 {
    u8 unknown_0[0x31];  // (not used here)
    u8 byte_31;
    u8 unknown_32[0x12];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Local_0018f8e0_r0_1, byte_31, 0x31);
GUEST_OFFSET(Local_0018f8e0_r0_1, word_44, 0x44);


u32 f_0018f8e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0018f8e0_r0_1> r0_1 = gptr<Local_0018f8e0_r0_1>(r0 + 0x14u + r1 * 0x78u);  // (from the original)
    u32 r1_1 = r0_1->word_44;
    if (r1_1 == r2) {
        r0_1->byte_31 = u8(r3);
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0018f8e0
GUEST_EXPORT(0x0018f8e0, d_0018f8e0::f_0018f8e0);

// f_0018fb98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0018fb98 {

struct __attribute__((packed)) Local_0018fb98_r4_1 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x28];  // (not used here)
    u8 byte_70;
};
GUEST_OFFSET(Local_0018fb98_r4_1, word_44, 0x44);
GUEST_OFFSET(Local_0018fb98_r4_1, byte_70, 0x70);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

void f_0018fb98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    if (r1 < 4u) {
        r1 = r1 * 0xfu;  // (from the original)
        gptr<Local_0018fb98_r4_1> r4_1 = gptr<Local_0018fb98_r4_1>(r0 + 0x14u + (r1 << 3));  // (from the original)
        if (r4_1->word_44 == r2) {
            call_002fc8e8(r4_1.addr() + 0x6cu, r3);  // (from the original)
            r4_1->byte_70 = u8(r5_1);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0018fb98
GUEST_EXPORT_FRAMED(0x0018fb98, d_0018fb98::f_0018fb98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
