// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002d00bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d00bc {

inline constexpr u32 vtable_PartsDragIconNode = 0x008f2a90u;
inline constexpr guest::Function<0x001ff92c, u32(u32)> call_001ff92c;

u32 f_002d00bc(gptr<PartsDragIconNode> arg0) {
    call_001ff92c(arg0.addr());
    arg0->word_0 = vtable_PartsDragIconNode;
    guest::cpu()->r[1] = 0x8f2a90u;  // (from the original)
    return arg0.addr();
}

}  // namespace d_002d00bc
GUEST_EXPORT_FRAMED(0x002d00bc, d_002d00bc::f_002d00bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d0998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0998 {

struct __attribute__((packed)) Object_002d0998_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002d0998_0, byte_0, 0x0);

inline constexpr guest::Function<0x002d0920, u32(u32, u32, u32, u32)> call_002d0920;

u32 f_002d0998(gptr<Object_002d0998_0> arg0) {
    u32 r0_1 = arg0->byte_0;
    u32 r0_2 = call_002d0920(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0) {
        r0_2 += 0x668u;  // (from the original)
    }
    return r0_2;
}

}  // namespace d_002d0998
GUEST_EXPORT_FRAMED(0x002d0998, d_002d0998::f_002d0998, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d0ba8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0ba8 {

inline constexpr guest::Function<0x004ecb2c, u32(u32, u32, u32, u32)> call_004ecb2c;
inline constexpr guest::Function<0x004ecec8, u32(u32, u32, u32, u32)> call_004ecec8;
inline constexpr guest::Function<0x004f1270, u32(u32, u32, u32, u32)> call_004f1270;

u32 f_002d0ba8(gptr<ResourceGetSklMat> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_1 = arg0.addr() + 0xcu;  // (from the original)
    if (*gptr<u32>(*gptr<u32>(*gptr<u32>(*gptr<u32>(arg0->word_0 - 0xcu) + r1_1) + 8u) + 0x6cu) != 0) {  // (from the original)
        call_004ecb2c(arg0.addr() + 0x30u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    call_004ecec8(arg0.addr() + 0x10u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_004f1270(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d0ba8
GUEST_EXPORT(0x002d0ba8, d_002d0ba8::f_002d0ba8);

// f_002d0cf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d0cf8 {

struct __attribute__((packed)) Object_002d0cf8_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 byte_2c;
    u8 byte_2d;
};
GUEST_OFFSET(Object_002d0cf8_0, word_0, 0x0);
GUEST_OFFSET(Object_002d0cf8_0, word_28, 0x28);
GUEST_OFFSET(Object_002d0cf8_0, byte_2c, 0x2c);
GUEST_OFFSET(Object_002d0cf8_0, byte_2d, 0x2d);

struct __attribute__((packed)) Object_002d0cf8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_002d0cf8_1, word_0, 0x0);
GUEST_OFFSET(Object_002d0cf8_1, word_4, 0x4);
GUEST_OFFSET(Object_002d0cf8_1, word_8, 0x8);
GUEST_OFFSET(Object_002d0cf8_1, word_c, 0xc);

inline constexpr guest::Function<0x004ecb80, u32(u32, u32)> call_004ecb80;
inline constexpr guest::Function<0x004ecf18, u32(u32)> call_004ecf18;
inline constexpr guest::Function<0x004edd3c, u32(u32)> call_004edd3c;

u32 f_002d0cf8(gptr<Object_002d0cf8_0> arg0, gptr<Object_002d0cf8_1> arg1) {
    u32 r1_1 = arg1->word_4;
    arg0->word_0 = r1_1;
    *gptr<u32>(arg0.addr() + *gptr<u32>(r1_1 - 0xcu)) = arg1->word_8;  // (from the original)
    u32 r0_1 = arg0.addr() + 4u;
    call_004edd3c(r0_1);
    call_004ecf18(r0_1 + 0xcu);  // (from the original)
    arg0->word_28 = 0x16;  // (from the original)
    arg0->byte_2c = 1;
    arg0->byte_2d = 1;
    u32 r1_2 = arg1->word_0;
    arg0->word_0 = r1_2;
    u32 r1_3 = *gptr<u32>(r1_2 - 0xcu);  // (from the original)
    *gptr<u32>(r0_1 - 4u + r1_3) = arg1->word_c;
    call_004ecb80(r0_1 + 0x2cu, r1_3);  // (from the original)
    return r0_1 - 4u;
}

}  // namespace d_002d0cf8
GUEST_EXPORT_FRAMED(0x002d0cf8, d_002d0cf8::f_002d0cf8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d13e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d13e0 {

struct __attribute__((packed)) Object_002d13e0_0 {
    u8 unknown_0[0x36c];  // (not used here)
    u32 word_36c;
};
GUEST_OFFSET(Object_002d13e0_0, word_36c, 0x36c);

struct __attribute__((packed)) Local_002d13e0_r1_6 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002d13e0_r1_6, word_4, 0x4);

struct __attribute__((packed)) Local_002d13e0_r1_9 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002d13e0_r1_9, word_4, 0x4);

inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x0013c1d4, u32(u32, u32, u32, u32)> call_0013c1d4;
inline constexpr guest::Function<0x002d1b3c, u32(u32, u32)> call_002d1b3c;

struct __attribute__((packed)) Frame_002d13e0 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002d13e0, word_c, 0xc);
GUEST_SIZE(Frame_002d13e0, 0x1c);

u32 f_002d13e0(gptr<Object_002d13e0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002d13e0> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r14 = 0;
    u32 r0_8 = 0;
    u32 r12_5 = 0;
    u32 r12_6 = 0;
    u32 r12_7 = 0;
    u32 r0_11 = 0;
    u32 r3_2 = 0;
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_1 = r0 + 0x10u;  // (from the original)
    u32 r6 = r0_1 + (r5 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0_1 = r6;
    }
    u32 r0_2 = *gptr<u32>(r0_1);
    u32 r7 = r2;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
    u32 r0_3 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_3 = r6;
    }
    *gptr<u32>(r0_3 + 4u) = r7;
    call_0013c1d4(*global_0094d080, frame.at(0).addr(), r7, r3);
    u32 r0_5 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_5 = r6;
    }
    r2 = 1u;
    *gptr<u32>(r0_5 + 8u) = frame->word_c;
    u32 r0_6 = arg0->word_36c + 1u;
    arg0->word_36c = r0_6;
    if (r0_6 > 3u) {
        r3 = 0u;
        r12 = ~0u;
        r0 = r3;
        do {
            u32 r1_2 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1_2 += (r0 << 3);
            }
            if (*gptr<u32>(r1_2 + 4u) > r3) {
                u32 r1_3 = r4 + 0x350u;  // (from the original)
                if (r0 < 3u) {
                    r1_3 += (r0 << 3);
                }
                r3 = *gptr<u32>(r1_3 + 4u);
                u32 r1_4 = r4 + 0x350u;  // (from the original)
                if (r0 < 3u) {
                    r1_4 += (r0 << 3);
                }
                r12 = *gptr<u32>(r1_4);
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 3);
        r1 = r12;
        if (!(r3 >= 2u)) {
            r0 = 0u;
            do {
                u32 r3_1 = r4 + 0x350u;  // (from the original)
                if (r0 < 3u) {
                    r3_1 += (r0 << 3);
                }
                if (*gptr<u32>(r3_1) == r7) {
                    r1 = r7;
                    goto L_2d1500;
                }
                r0 += 1u;
                guest::preempt();
            } while (s32(r0) < 3);
        }
        goto L_2d1500;
    }
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        goto L_2d1784;
    }
    r6 = r0;
    goto L_2d1784;
L_2d1500:;
    r3 = ~0u;
    r14 = 2u;
    if (r1 + 1u == 0) {
        r1 = 0u;
        u32 r8 = 0x7fu;  // (from the original)
        r0 = r1;
        do {
            u32 r12_1 = r4 + 0x10u;  // (from the original)
            if (r0 < 0x34u) {  // (from the original)
                r12_1 += (r0 << 4);
            }
            if (*gptr<u8>(r12_1 + 0xcu) == 1u) {  // (from the original)
                u32 r12_2 = r4 + 0x10u;  // (from the original)
                if (r0 < 0x34u) {  // (from the original)
                    r12_2 += (r0 << 4);
                }
                if (s32(*gptr<u32>(r12_2 + 8u)) < s32(r8)) {
                    u32 r12_3 = r4 + 0x10u;  // (from the original)
                    if (r0 < 0x34u) {  // (from the original)
                        r12_3 += (r0 << 4);
                    }
                    r1 = r0;
                    r8 = *gptr<u32>(r12_3 + 8u);
                }
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 0x34);  // (from the original)
        u32 r0_7 = r4 + 0x10u;  // (from the original)
        if (r5 < 0x34u) {  // (from the original)
            r0_7 = r6;
        }
        if (s32(*gptr<u32>(r0_7 + 8u)) < s32(r8)) {
            r0_8 = r4 + 0x10u;  // (from the original)
            if (r5 >= 0x34u) {  // (from the original)
                r6 = r0_8;
                *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
                guest::cpu()->r[1] = r1;
                return 2u;
            }
            *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
            guest::cpu()->r[1] = r1;
            return 2u;
        }
        u32 r0_9 = r4 + 0x10u;  // (from the original)
        if (r1 < 0x34u) {  // (from the original)
            r0_9 += (r1 << 4);
        }
        *gptr<u8>(r0_9 + 0xcu) = u8(r14);  // (from the original)
        u32 r0_10 = r4 + 0x10u;  // (from the original)
        if (r1 < 0x34u) {  // (from the original)
            r0_10 += (r1 << 4);
        }
        r12 = *gptr<u32>(r0_10 + 4u);
        r0 = 0u;
        do {
            u32 r1_5 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1_5 += (r0 << 3);
            }
            if (*gptr<u32>(r1_5) == r12) {
                gptr<Local_002d13e0_r1_6> r1_6 = gptr<Local_002d13e0_r1_6>(r4 + 0x350u);  // (from the original)
                if (r0 < 3u) {
                    r1_6 = gptr<Local_002d13e0_r1_6>(r1_6.addr() + (r0 << 3));
                }
                u32 r12_4 = r4 + 0x350u;  // (from the original)
                if (r0 < 3u) {
                    r12_4 += (r0 << 3);
                }
                r1_6->word_4 = r1_6->word_4 - 1u;
                if (*gptr<u32>(r12_4 + 4u) != 0) {
                    goto L_2d1778;
                }
                u32 r1_7 = r4 + 0x350u;  // (from the original)
                if (r0 < 3u) {
                    r1_7 += (r0 << 3);
                }
                *gptr<u32>(r1_7) = r3;
                goto L_2d1778;
            }
            r0 += 1u;
            guest::preempt();
        } while (s32(r0) < 3);
        goto L_2d1778;
    } else {
        r0 = 0u;
    }
L_2d1514:;
    r12_5 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_5 += (r0 << 4);
    }
    if (*gptr<u8>(r12_5 + 0xcu) != 1u) {  // (from the original)
        goto L_2d1660;
    }
    r12_6 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_6 += (r0 << 4);
    }
    if (*gptr<u32>(r12_6 + 4u) != r1) {
        goto L_2d1660;
    }
    r12_7 = r4 + 0x10u;  // (from the original)
    if (r0 < 0x34u) {  // (from the original)
        r12_7 += (r0 << 4);
    }
    r0 = 0u;
    *gptr<u8>(r12_7 + 0xcu) = u8(r14);  // (from the original)
    r12 = r1;
    do {
        u32 r1_8 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1_8 += (r0 << 3);
        }
        if (*gptr<u32>(r1_8) == r12) {
            gptr<Local_002d13e0_r1_9> r1_9 = gptr<Local_002d13e0_r1_9>(r4 + 0x350u);  // (from the original)
            if (r0 < 3u) {
                r1_9 = gptr<Local_002d13e0_r1_9>(r1_9.addr() + (r0 << 3));
            }
            u32 r12_8 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r12_8 += (r0 << 3);
            }
            r1_9->word_4 = r1_9->word_4 - 1u;
            if (*gptr<u32>(r12_8 + 4u) != 0) {
                break;
            }
            u32 r1_10 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r1_10 += (r0 << 3);
            }
            *gptr<u32>(r1_10) = r3;
            break;
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 3);
    r0_11 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        r0_11 = r6;
    }
    r1 = ~0x80000000u;  // (from the original)
    *gptr<u8>(r0_11 + 0xcu) = u8(r2);  // (from the original)
    r0 = 0u;
L_2d15d8:;
    r3_2 = r4 + 0x350u;  // (from the original)
    if (r0 < 3u) {
        r3_2 += (r0 << 3);
    }
    if (*gptr<u32>(r3_2) == r7) {
        r1 = r4 + 0x350u;  // (from the original)
        if (r0 < 3u) {
            r1 += (r0 << 3);
        }
        *gptr<u32>(r1 + 4u) = *gptr<u32>(r1 + 4u) + 1u;
    } else {
        if (r1 + 0x80000001u == 0) {  // (from the original)
            u32 r3_3 = r4 + 0x350u;  // (from the original)
            if (r0 < 3u) {
                r3_3 += (r0 << 3);
            }
            if (*gptr<u32>(r3_3) + 1u == 0) {
                r1 = r0;
            }
        }
        r0 += 1u;
        if (s32(r0) < 3) {
            guest::preempt();
            goto L_2d15d8;
        }
        u32 r0_12 = r4 + 0x350u;  // (from the original)
        if (r1 < 3u) {
            r0_12 += (r1 << 3);
        }
        *gptr<u32>(r0_12) = r7;
        u32 r0_13 = r4 + 0x350u;  // (from the original)
        if (r1 < 3u) {
            r0_13 += (r1 << 3);
        }
        *gptr<u32>(r0_13 + 4u) = r2;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_2d1660:;
    r0 += 1u;
    if (s32(r0) < 0x34) {  // (from the original)
        guest::preempt();
        goto L_2d1514;
    }
    r0_8 = r4 + 0x10u;  // (from the original)
    if (r5 < 0x34u) {  // (from the original)
        *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
        guest::cpu()->r[1] = r1;
        return 2u;
    }
    r6 = r0_8;
    *gptr<u8>(r6 + 0xcu) = u8(r14);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 2u;
L_2d1778:;
    r0 = r4 + 0x10u;  // (from the original)
    if (r5 >= 0x34u) {  // (from the original)
        r6 = r0;
    }
L_2d1784:;
    *gptr<u8>(r6 + 0xcu) = u8(r2);  // (from the original)
    call_002d1b3c(r4, r7);
    return 1u;
}

}  // namespace d_002d13e0
GUEST_EXPORT_FRAMED(0x002d13e0, d_002d13e0::f_002d13e0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002d17c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d17c0 {

struct __attribute__((packed)) Object_002d17c0_0 {
    u8 unknown_0[0x368];  // (not used here)
    u32 word_368;
};
GUEST_OFFSET(Object_002d17c0_0, word_368, 0x368);


u32 f_002d17c0(gptr<Object_002d17c0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = r0;
    if (arg0->word_368 >= 0x34u) {  // (from the original)
        return 0x35u;  // (from the original)
    } else {
        r0 = 0u;
    }
    do {
        u32 r3_1 = r2 + 0x10u;  // (from the original)
        if (r0 < 0x34u) {  // (from the original)
            r3_1 += (r0 << 4);
        }
        if (*gptr<u32>(r3_1) == 0) {
            u32 r3_2 = r2 + 0x10u;  // (from the original)
            if (r0 < 0x34u) {  // (from the original)
                r3_2 += (r0 << 4);
            }
            *gptr<u32>(r3_2) = r1;
            u32 r3_3 = r2 + 0x10u;  // (from the original)
            if (r0 < 0x34u) {  // (from the original)
                r3_3 += (r0 << 4);
            }
            u32 r1_1 = r2 + 0x10u;  // (from the original)
            *gptr<u32>(r3_3 + 4u) = ~0u;
            if (r0 < 0x34u) {  // (from the original)
                r1_1 += (r0 << 4);
            }
            u32 r3_4 = r2 + 0x10u;  // (from the original)
            if (r0 < 0x34u) {  // (from the original)
                r3_4 += (r0 << 4);
            }
            *gptr<u32>(r1_1 + 8u) = 0;
            *gptr<u8>(r3_4 + 0xcu) = 0;  // (from the original)
            *gptr<u32>(r2 + 0x368u) = *gptr<u32>(r2 + 0x368u) + 1u;  // (from the original)
            return r0;
        }
        r0 += 1u;
        guest::preempt();
    } while (r0 < 0x34u);  // (from the original)
    return 0x35u;  // (from the original)
}

}  // namespace d_002d17c0
GUEST_EXPORT_FRAMED(0x002d17c0, d_002d17c0::f_002d17c0, 0x10);  // pushes {r4} first, as the original

// f_002d1a70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1a70 {

struct __attribute__((packed)) Object_002d1a70_0 {
    u8 unknown_0[0x368];  // (not used here)
    u32 word_368;
};
GUEST_OFFSET(Object_002d1a70_0, word_368, 0x368);

inline constexpr guest::Function<0x002d1858, u32(u32, u32, u32, u32)> call_002d1858;

void f_002d1a70(gptr<Object_002d1a70_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + 0x10u;  // (from the original)
    u32 r4_1 = r0_1 + (r1 << 4);
    if (r1 < 0x34u) {  // (from the original)
        r0_1 = r4_1;
    }
    if (*gptr<u32>(r0_1) != 0) {
        call_002d1858(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r1 >= 0x34u) {  // (from the original)
            r4_1 = arg0.addr() + 0x10u;  // (from the original)
        }
        *gptr<u32>(r4_1) = 0;
        arg0->word_368 = arg0->word_368 - 1u;
    }
}

}  // namespace d_002d1a70
GUEST_EXPORT_FRAMED(0x002d1a70, d_002d1a70::f_002d1a70, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d1b3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1b3c {

struct __attribute__((packed)) Local_002d1b3c_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_002d1b3c_r0_1, word_4, 0x4);


void f_002d1b3c(u32 r0, u32 r1) {
    u32 r3 = ~0x80000000u;  // (from the original)
    u32 r2 = 0u;
    do {
        u32 r12_1 = r0 + 0x350u;  // (from the original)
        if (r2 < 3u) {
            r12_1 += (r2 << 3);
        }
        if (*gptr<u32>(r12_1) == r1) {
            gptr<Local_002d1b3c_r0_1> r0_1 = gptr<Local_002d1b3c_r0_1>(r0 + 0x350u);  // (from the original)
            if (r2 < 3u) {
                r0_1 = gptr<Local_002d1b3c_r0_1>(r0_1.addr() + (r2 << 3));
            }
            u32 r1_1 = r0_1->word_4 + 1u;
            r0_1->word_4 = r1_1;
            guest::cpu()->r[1] = r1_1;
            return;
        }
        if (r3 + 0x80000001u == 0) {  // (from the original)
            u32 r12_2 = r0 + 0x350u;  // (from the original)
            if (r2 < 3u) {
                r12_2 += (r2 << 3);
            }
            if (*gptr<u32>(r12_2) + 1u == 0) {
                r3 = r2;
            }
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 3);
    u32 r2_1 = r0 + 0x350u;  // (from the original)
    if (r3 < 3u) {
        r2_1 += (r3 << 3);
    }
    u32 r0_2 = r0 + 0x350u;  // (from the original)
    *gptr<u32>(r2_1) = r1;
    if (r3 < 3u) {
        r0_2 += (r3 << 3);
    }
    *gptr<u32>(r0_2 + 4u) = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_002d1b3c
GUEST_EXPORT_FRAMED(0x002d1b3c, d_002d1b3c::f_002d1b3c, 0x10);  // pushes {r4} first, as the original

// f_002d1c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1c1c {

struct __attribute__((packed)) Object_002d1c1c_0 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    float float_1c;
};
GUEST_OFFSET(Object_002d1c1c_0, word_0, 0x0);
GUEST_OFFSET(Object_002d1c1c_0, float_1c, 0x1c);

inline constexpr guest::Function<0x001b0544, u32(u32, u32, u32, u32)> call_001b0544;

u32 f_002d1c1c(gptr<Object_002d1c1c_0> arg0, u32 r1, u32 r2, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r1;
    u32 cf_1 = r1 >= 2u;
    if (r1 < 2u) {
        r1 = r5_1 * 5u;
    }
    u32 r0_1 = arg0.addr() + 0x74u;  // (from the original)
    if (!cf_1) {
        r0_1 += (r1 << 2);
    }
    call_001b0544(r0_1, r2, r2, guest::cpu()->r[3]);
    if (r2 == 0) {
        float S0_2 = arg0->float_1c;
        u32 r2_1 = *gptr<u32>(arg0->word_0 + 0x34u);  // (from the original)
        // virtual function 13 of arg0.addr()
        guest::cpu()->s[0] = S0_2;
        frame.release();
        return guest::call_address<u32>(r2_1, arg0.addr(), r5_1, r2_1, guest::cpu()->r[3]);
    }
    return r0_1;
}

}  // namespace d_002d1c1c
GUEST_EXPORT(0x002d1c1c, d_002d1c1c::f_002d1c1c);

// f_002d1db0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1db0 {

inline constexpr u32 vtable_SoundObjExtVolume = 0x008f2c8cu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_002d1db0(gptr<SoundObj_2_> arg0, u32 r1, u32 r2, u32 r3) {
    call_0020af18(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_SoundObj_2_;
    u32 r0_2 = call_00301d0c(arg0.addr() + 0x44u, 0x131800u, 4u, 2u);  // (from the original)
    u32 r0_4 = call_00301d0c(r0_2 + 8u, 0x1287a8u, 0x14u, 2u);  // (from the original)
    *gptr<u32>(r0_4 - 0x4cu) = vtable_SoundObjExtVolume;  // (from the original)
    u32 r0_6 = call_00301d0c(r0_4 + 0x28u, 0x12e818u, 0x14u, 2u);  // (from the original)
    return r0_6 - 0x74u;  // (from the original)
}

}  // namespace d_002d1db0
GUEST_EXPORT_FRAMED(0x002d1db0, d_002d1db0::f_002d1db0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d1f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d1f40 {

inline guest::global<u32, 0x0094cfec> global_0094cfec;
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;
inline constexpr guest::Function<0x002d17c0, u32(u32, u32)> call_002d17c0;

u32 f_002d1f40(gptr<SoundObjFurniture> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    r0 = arg0->byte_34;
    u32 r5 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);  // (from the original)
    if (r0 != 0) {
        return r0;
    }
    call_0020a4cc(r4, r1, r2, r3);
    u32 r0_2 = call_002d17c0(*global_0094cfec, r4);
    arg0->word_74 = r0_2;
    r0 = 0u;
    if (r3 > 0x198u) {  // (from the original)
        arg0->word_7c = 0x83bec0;  // (from the original)
        arg0->half_7a = u16(r0);
    } else {
        u32 r1_1 = (r3 << 4) + 0x83bec0u;  // (from the original)
        arg0->half_7a = u16(r3);
        arg0->word_7c = r1_1;
        u32 r1_2 = *gptr<u8>(r1_1 + 0xcu);  // (from the original)
        if (r1_2 != 0) {
            arg0->word_80 = r1_2 * 0x50u + 0x83d850u;  // (from the original)
        }
    }
    if (r3 == 0xc9u || r3 == 0xcau) {  // (from the original)
        *gptr<u8>(r4 + 0x8du) = 1;  // (from the original)
        goto L_2d1fd0;
    }
    if (r3 == 0xeau) {  // (from the original)
        *gptr<u8>(r4 + 0x8du) = 1;  // (from the original)
    } else {
        *gptr<u8>(r4 + 0x8du) = u8(r0);  // (from the original)
    }
L_2d1fd0:;
    r1 = *gptr<u8>(r4 + 0x8du);  // (from the original)
    S0 = 0.0f;
    if (r1 == 0) {
        *gptr<u8>(r4 + 0x78u) = u8(r5);  // (from the original)
    }
    *gptr<u32>(r4 + 0x84u) = r0;  // (from the original)
    *gptr<u32>(r4 + 0x88u) = std::bit_cast<u32>(S0);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002d1f40
GUEST_EXPORT_FRAMED(0x002d1f40, d_002d1f40::f_002d1f40, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d23d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d23d4 {

inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline guest::global<u32, 0x0094cfec> global_0094cfec;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x002d13e0, u32(u32, u32, u32)> call_002d13e0;
inline constexpr guest::Function<0x0071d2d4, u32(u32, u32, u32, u32)> call_0071d2d4;
inline constexpr guest::Function<0x00820578, u32(u32, u32, u32, u32)> call_00820578;

u32 f_002d23d4(gptr<SoundObjFurniture> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r6 = r1;
    u32 r4 = r0;
    arg0->byte_8c = 1;
    u32 r0_1 = arg0->word_74;
    u32 r5_1 = *global_0094cfec;
    u32 r1_1 = r5_1 + 0x10u;  // (from the original)
    if (r0_1 < 0x34u) {  // (from the original)
        r1_1 += (r0_1 << 4);
    }
    r1 = *gptr<u8>(r1_1 + 0xcu);  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2d24a4;
        }
    } else {
        r0 = call_0071d2d4(*global_0094cd20, r6, 1u, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            return r0;
        }
        u32 r0_3 = call_002d13e0(r5_1, *gptr<u32>(r4 + 0x74u), r6);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_3 == 1u) {
            goto L_2d2460;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_2d2460:;
    r0 = 0u;
    if (*gptr<u8>(r4 + 0x8fu) == 0) {  // (from the original)
        r2 = *gptr<u32>(*global_0094d080 + 0xcbcu);  // (from the original)
        r1 = r2 >= *gptr<u32>(r4 + 0x74u) << 1;  // (from the original)
        *gptr<u8>(r4 + 0x8fu) = u8(r1);  // (from the original)
        if (r1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
L_2d2494:;
    r0_4 = call_00820578(r4, r6, r2, guest::cpu()->r[3]);
    return r0_4;
L_2d24a4:;
    if (*gptr<u8>(r4 + 0x8fu) == 0) {  // (from the original)
        r1 = *gptr<u32>(*global_0094d080 + 0xcbcu);  // (from the original)
        u32 r0_5 = r1 >= r0_1 << 1;
        *gptr<u8>(r4 + 0x8fu) = u8(r0_5);  // (from the original)
        if (r0_5 != 0) {
            guest::preempt();
            goto L_2d2494;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::preempt();
    goto L_2d2494;
}

}  // namespace d_002d23d4
GUEST_EXPORT_FRAMED(0x002d23d4, d_002d23d4::f_002d23d4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d27e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d27e0 {

inline guest::global<u32, 0x0094cfec> global_0094cfec;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> call_0020aedc;
inline constexpr guest::Function<0x002d1a70, u32(u32, u32, u32, u32)> call_002d1a70;

u32 f_002d27e0(gptr<SoundObjFurniture> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r6 = 0;
    u32 cf = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r4 = r0;
    u32 r0_1 = arg0->byte_34;
    if (r0_1 != 0) {
        u32 r0_2 = arg0->word_7c;
        u32 r5 = 0u;
        if (r0_2 == 0) {
            goto L_2d28fc;
        }
        r2 = *gptr<u32>(r0_2);
        r3 = r4 + 0x44u;  // (from the original)
        r1 = 0u;
        goto L_2d281c;
L_2d2814:;
        if (cf) {
            goto L_2d2820;
        }
L_2d281c:;
        r0 = r3 + (r1 << 2);
L_2d2820:;
        r0_3 = *gptr<u32>(r0);
        if ((r0_3 == 0 ? ~0u : *gptr<u32>(r0_3 + 0xb0u)) != r2) {  // (from the original)
            goto L_2d295c;
        }
        if (r1 < 2u) {
            r3 += (r1 << 2);
        }
        if (r3 != 0) {
            u32 r0_4 = *gptr<u32>(r3);
            if (r0_4 != 0) {
                call_00136e58(r0_4, 0u, r2, r3);
            }
        }
L_2d2858:;
        r1 = 0u;
        r3 = *gptr<u32>(*gptr<u32>(r4 + 0x7cu) + 4u);  // (from the original)
        r0 = r4 + 0x44u;  // (from the original)
L_2d2868:;
        r2_1 = *gptr<u32>(r1 >= 2u ? r0 : r0 + (r1 << 2));
        r2_2 = r2_1 == 0 ? ~0u : *gptr<u32>(r2_1 + 0xb0u);  // (from the original)
        if (r2_2 != r3) {
            goto L_2d2970;
        }
        if (r1 < 2u) {
            r0 += (r1 << 2);
        }
        if (r0 != 0) {
            u32 r0_5 = *gptr<u32>(r0);
            if (r0_5 != 0) {
                call_00136e58(r0_5, 0u, r2_2, r3);
            }
        }
L_2d28ac:;
        r3 = *gptr<u32>(r4 + 0x84u);  // (from the original)
        r0 = r4 + 0x44u;  // (from the original)
        r2 = 0u;
L_2d28b8:;
        r1_1 = *gptr<u32>(r2 >= 2u ? r0 : r0 + (r2 << 2));
        if ((r1_1 == 0 ? ~0u : *gptr<u32>(r1_1 + 0xb0u)) != r3) {  // (from the original)
            goto L_2d2980;
        }
        if (r2 < 2u) {
            r0 += (r2 << 2);
        }
        if (r0 != 0) {
            u32 r0_6 = *gptr<u32>(r0);
            if (r0_6 != 0) {
                call_00136e58(r0_6, 0u, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
L_2d28fc:;
        *gptr<u8>(r4 + 0x8du) = u8(r5);  // (from the original)
        *gptr<u8>(r4 + 0x78u) = 0;  // (from the original)
        *gptr<u32>(r4 + 0x80u) = r5;  // (from the original)
        *gptr<u32>(r4 + 0x7cu) = r5;  // (from the original)
        r1_2 = *gptr<u32>(r4 + 0x74u);  // (from the original)
        r0_7 = *global_0094cfec;
        call_002d1a70(r0_7, r1_2, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r4;
        r5 = r4 + 0x44u;  // (from the original)
        *gptr<u32>(r4 + 0x74u) = ~0u;  // (from the original)
        r4 = 0u;
        do {
            u32 r0_8 = r5;
            if (r4 < 2u) {
                r0_8 = r5 + (r4 << 2);
            }
            call_00136cc8(r0_8, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 2);
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0020aedc(r6, r1);
L_2d295c:;
        r1 += 1u;
        cf = r1 >= 2u;
        if (s32(r1) < 2) {
            r0 = r3;
            guest::preempt();
            goto L_2d2814;
        }
        guest::preempt();
        goto L_2d2858;
L_2d2970:;
        r1 += 1u;
        if (s32(r1) < 2) {
            guest::preempt();
            goto L_2d2868;
        }
        guest::preempt();
        goto L_2d28ac;
L_2d2980:;
        r2 += 1u;
        if (s32(r2) >= 2) {
            guest::preempt();
            goto L_2d28fc;
        }
        guest::preempt();
        goto L_2d28b8;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002d27e0
GUEST_EXPORT(0x002d27e0, d_002d27e0::f_002d27e0);

// f_002d2a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2a4c {

struct __attribute__((packed)) Local_002d2a4c_ea_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x70];  // (not used here)
    u8 byte_78;
    u8 byte_79;
    u16 half_7a;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    float float_88;
    u8 byte_8c;
    u8 byte_8d;
    u8 byte_8e;
    u8 byte_8f;
};
GUEST_OFFSET(Local_002d2a4c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002d2a4c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_78, 0x78);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_79, 0x79);
GUEST_OFFSET(Local_002d2a4c_ea_2, half_7a, 0x7a);
GUEST_OFFSET(Local_002d2a4c_ea_2, word_7c, 0x7c);
GUEST_OFFSET(Local_002d2a4c_ea_2, word_80, 0x80);
GUEST_OFFSET(Local_002d2a4c_ea_2, word_84, 0x84);
GUEST_OFFSET(Local_002d2a4c_ea_2, float_88, 0x88);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_8c, 0x8c);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_8d, 0x8d);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_8e, 0x8e);
GUEST_OFFSET(Local_002d2a4c_ea_2, byte_8f, 0x8f);

inline constexpr u32 vtable_SoundObjFurniture = 0x008f2cccu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_002d2a4c(gptr<SoundObj_2_> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    call_0020af18(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_SoundObj_2_;
    u32 r0_2 = call_00301d0c(arg0.addr() + 0x44u, 0x131800u, 4u, 2u);  // (from the original)
    u32 r0_4 = call_00301d0c(r0_2 + 8u, 0x1287a8u, 0x14u, 2u);  // (from the original)
    *gptr<u32>(r0_4 + 0x28u) = ~0u;  // (from the original)
    gptr<Local_002d2a4c_ea_2> ea_2 = gptr<Local_002d2a4c_ea_2>(r0_4 - 0x4cu);  // (from the original)
    ea_2->word_0 = vtable_SoundObjFurniture;
    ea_2->byte_78 = 0;
    ea_2->byte_79 = 0;
    ea_2->half_7a = 0;
    ea_2->word_7c = 0;
    float S0_3 = 0.0f;
    ea_2->word_80 = 0;
    ea_2->word_84 = 0;
    ea_2->float_88 = S0_3;
    ea_2->byte_8c = 0;
    ea_2->byte_8d = 0;
    ea_2->byte_8e = 0;
    ea_2->byte_8f = 0;
    ea_2->word_4 = 2;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_3;
    return ea_2.addr();
}

}  // namespace d_002d2a4c
GUEST_EXPORT_FRAMED(0x002d2a4c, d_002d2a4c::f_002d2a4c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d2b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2b90 {

inline constexpr u32 vtable_SoundObjFurniture = 0x008f2cccu;
inline constexpr u32 vtable_SoundObj_2_ = 0x008f8dc8u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;

u32 f_002d2b90(gptr<SoundObj_2_> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 cf_1 = 0;
    u32 r6 = r0;
    arg0->word_0 = vtable_SoundObjFurniture;
    call_002d27e0(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r6 + 0x44u;  // (from the original)
    u32 r4 = 0u;
    arg0->word_0 = vtable_SoundObj_2_;
    do {
        u32 r0_1 = r5;
        if (r4 < 2u) {
            r0_1 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    call_0020aedc(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r6 + 0x44u;  // (from the original)
    r4 = 0u;
    r0 = r5;
    do {
        r0 += (r4 << 2);
        do {
            call_00136cc8(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            cf_1 = r4 >= 2u;
            r0 = r5;
            if (s32(r4) >= 2) {
                call_002f76ac(r0, 0x137d74u, 4u, 2u);  // (from the original)
                return r5 - 0x44u;  // (from the original)
            }
            guest::preempt();
        } while (cf_1);
        guest::preempt();
    } while (1);
}

}  // namespace d_002d2b90
GUEST_EXPORT_FRAMED(0x002d2b90, d_002d2b90::f_002d2b90, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d2e80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d2e80 {

inline constexpr guest::Function<0x00130ed8, u32(u32)> call_00130ed8;
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;
inline constexpr guest::Function<0x004c7500, u32(u32, u32, u32)> call_004c7500;

struct __attribute__((packed)) Frame_002d2e80 {
    u32 word_0;
};
GUEST_OFFSET(Frame_002d2e80, word_0, 0x0);
GUEST_SIZE(Frame_002d2e80, 0x4);

u32 f_002d2e80(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002d2e80> frame;  // the original's stack frame
    u32 r0_2 = 0;
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r6 = r2;
    u32 r9 = r3;
    u32 r8 = *frame.at<u32>(0x28);  // (from the original)
    u32 r4 = 0u;
    u32 r10 = ~0u;
    if (r8 + 1u == 0) {
        r8 = 0xfu;  // (from the original)
    }
    do {
        if (r4 < 4u) {
            r1 = r4 * 3u;
        }
        u32 r0_1 = r5 + 0x10u;  // (from the original)
        if (r4 < 4u) {
            r0_1 += (r1 << 2);
        }
        r0_2 = *gptr<u32>(r0_1 + 4u);
        if (r0_2 == r6) {
            if (r4 < 4u) {
                r1 = r4 * 3u;
            }
            u32 r0_3 = r5 + 0x10u;  // (from the original)
            if (r4 < 4u) {
                r0_3 += (r1 << 2);
            }
            r0_2 = *gptr<u32>(r0_3 + 8u);
            if (r0_2 == r7) {
                if (r4 < 4u) {
                    r1 = r4 * 3u;
                }
                u32 r0_4 = r5 + 0x10u;  // (from the original)
                if (r4 < 4u) {
                    r0_4 += (r1 << 2);
                }
                r0_2 = *gptr<u32>(r0_4);
                r1 = r0_2 + 0x44u;  // (from the original)
                if (r1 != 0) {
                    u32 r0_5 = *gptr<u32>(r1);
                    r0_2 = r0_5 == 0 ? r10 : *gptr<u32>(r0_5 + 0xb0u);  // (from the original)
                    if (r0_2 == r7) {
                        call_004c331c(frame.at(0).addr(), r1, r2, r3);
                        u32 r0_7 = frame->word_0;
                        if (r0_7 != 0) {
                            call_004c7500(r0_7, r8, r9);
                        }
                        r0_2 = call_00130ed8(frame.at(0).addr());
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_002d2e80
GUEST_EXPORT_FRAMED(0x002d2e80, d_002d2e80::f_002d2e80, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002d31ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d31ec {

struct __attribute__((packed)) Local_002d31ec_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002d31ec_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_002d31ec_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;

struct __attribute__((packed)) Frame_002d31ec {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Frame_002d31ec, float_0, 0x0);
GUEST_OFFSET(Frame_002d31ec, word_4, 0x4);
GUEST_OFFSET(Frame_002d31ec, float_8, 0x8);
GUEST_SIZE(Frame_002d31ec, 0xc);

u32 f_002d31ec() {
    guest::StackFrameOf<Frame_002d31ec> frame;  // the original's stack frame
    gptr<Local_002d31ec_r12_1> r12_1 = gptr<Local_002d31ec_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    frame->float_0 = S0_1;
    frame->word_4 = ~0u;
    frame->float_8 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_002d31ec
GUEST_EXPORT_FRAMED(0x002d31ec, d_002d31ec::f_002d31ec, 0x4000);  // pushes {lr} first, as the original

// f_002d3218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3218 {

struct __attribute__((packed)) Local_002d3218_r12_1 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_002d3218_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_002d3218_r12_1, float_4, 0x4);
GUEST_OFFSET(Local_002d3218_r12_1, float_8, 0x8);

inline constexpr guest::Function<0x002d2d60, u32(u32, u32, u32, u32)> call_002d2d60;

struct __attribute__((packed)) Frame_002d3218 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Frame_002d3218, float_0, 0x0);
GUEST_OFFSET(Frame_002d3218, float_4, 0x4);
GUEST_OFFSET(Frame_002d3218, float_8, 0x8);
GUEST_SIZE(Frame_002d3218, 0xc);

u32 f_002d3218() {
    guest::StackFrameOf<Frame_002d3218> frame;  // the original's stack frame
    gptr<Local_002d3218_r12_1> r12_1 = gptr<Local_002d3218_r12_1>(frame.at(0x10).addr());  // (from the original)
    float S0_1 = r12_1->float_0;
    float S1_1 = r12_1->float_4;
    float S2_1 = r12_1->float_8;
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->float_8 = S2_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_002d2d60(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_002d3218
GUEST_EXPORT_FRAMED(0x002d3218, d_002d3218::f_002d3218, 0x4000);  // pushes {lr} first, as the original

// f_002d3404: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3404 {


u32 f_002d3404(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0u;
    do {
        if (r12 < 4u) {
            r5 = r12 * 3u;
        }
        u32 r4_1 = r0 + 0x10u;  // (from the original)
        if (r12 < 4u) {
            r4_1 += (r5 << 2);
        }
        if (*gptr<u32>(r4_1 + 4u) == r3) {
            if (r12 < 4u) {
                r3 = r12 * 3u;
            }
            u32 r0_1 = r0 + 0x10u;  // (from the original)
            if (r12 < 4u) {
                r0_1 += (r3 << 2);
            }
            u32 r0_2 = *gptr<u32>(r0_1);
            u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_2) + 0x10u);  // (from the original)
            // virtual function 4 of r0_2
            frame.release();
            return guest::call_address<u32>(r3_1, r0_2, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
        }
        r12 += 1u;
        guest::preempt();
    } while (s32(r12) < 4);
    return r0;
}

}  // namespace d_002d3404
GUEST_EXPORT(0x002d3404, d_002d3404::f_002d3404);

// f_002d39a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d39a8 {

struct __attribute__((packed)) Object_002d39a8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_002d39a8_0, word_0, 0x0);
GUEST_OFFSET(Object_002d39a8_0, word_4, 0x4);
GUEST_OFFSET(Object_002d39a8_0, word_8, 0x8);
GUEST_OFFSET(Object_002d39a8_0, word_c, 0xc);
GUEST_OFFSET(Object_002d39a8_0, word_10, 0x10);
GUEST_OFFSET(Object_002d39a8_0, word_14, 0x14);


void f_002d39a8(gptr<Object_002d39a8_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002d39a8
GUEST_EXPORT(0x002d39a8, d_002d39a8::f_002d39a8);

// f_002d3a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3a14 {

struct __attribute__((packed)) Local_002d3a14_r1_1 {
    u8 unknown_0[0xc4];  // (not used here)
    u16 half_c4;
};
GUEST_OFFSET(Local_002d3a14_r1_1, half_c4, 0xc4);


u32 f_002d3a14(u32 r0, u32 r1) {
    u32 r0_1 = r0 + (r1 << 3);
    gptr<Local_002d3a14_r1_1> r1_1 = gptr<Local_002d3a14_r1_1>(r0_1 + 0xb00u);  // (from the original)
    u32 r2_1 = r1_1->half_c4;
    u32 zf_1 = r2_1 == 0;
    if (!zf_1) {
        r0_1 = *gptr<u32>(r0_1 + 0xbc0u);  // (from the original)
        zf_1 = r0_1 == 0;
    }
    if (zf_1) {
        r0_1 = 0u;
    } else {
        r1_1->half_c4 = u16(r2_1 - 1u);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0_1;
}

}  // namespace d_002d3a14
GUEST_EXPORT(0x002d3a14, d_002d3a14::f_002d3a14);

// f_002d3f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3f18 {

struct __attribute__((packed)) Object_002d3f18_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xba0];  // (not used here)
    u32 word_bb8;
    u32 word_bbc;
    u8 unknown_bc0[0x20];  // (not used here)
    u16 half_be0;
    u8 byte_be2;
    u8 byte_be3;
    u8 byte_be4;
};
GUEST_OFFSET(Object_002d3f18_0, word_c, 0xc);
GUEST_OFFSET(Object_002d3f18_0, word_10, 0x10);
GUEST_OFFSET(Object_002d3f18_0, word_14, 0x14);
GUEST_OFFSET(Object_002d3f18_0, word_bb8, 0xbb8);
GUEST_OFFSET(Object_002d3f18_0, word_bbc, 0xbbc);
GUEST_OFFSET(Object_002d3f18_0, half_be0, 0xbe0);
GUEST_OFFSET(Object_002d3f18_0, byte_be2, 0xbe2);
GUEST_OFFSET(Object_002d3f18_0, byte_be3, 0xbe3);
GUEST_OFFSET(Object_002d3f18_0, byte_be4, 0xbe4);


void f_002d3f18(gptr<Object_002d3f18_0> arg0) {
    arg0->word_bb8 = 0;
    arg0->word_bbc = 0;
    arg0->half_be0 = 1;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->byte_be2 = 0;
    arg0->byte_be3 = 0;
    arg0->byte_be4 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_002d3f18
GUEST_EXPORT(0x002d3f18, d_002d3f18::f_002d3f18);

// f_002d3f6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3f6c {

struct __attribute__((packed)) Local_002d3f6c_r0_3 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xba0];  // (not used here)
    u32 word_bb8;
    u32 word_bbc;
    u8 unknown_bc0[0x22];  // (not used here)
    u8 byte_be2;
    u8 byte_be3;
    u8 byte_be4;
};
GUEST_OFFSET(Local_002d3f6c_r0_3, word_c, 0xc);
GUEST_OFFSET(Local_002d3f6c_r0_3, word_10, 0x10);
GUEST_OFFSET(Local_002d3f6c_r0_3, word_14, 0x14);
GUEST_OFFSET(Local_002d3f6c_r0_3, word_bb8, 0xbb8);
GUEST_OFFSET(Local_002d3f6c_r0_3, word_bbc, 0xbbc);
GUEST_OFFSET(Local_002d3f6c_r0_3, byte_be2, 0xbe2);
GUEST_OFFSET(Local_002d3f6c_r0_3, byte_be3, 0xbe3);
GUEST_OFFSET(Local_002d3f6c_r0_3, byte_be4, 0xbe4);

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_002d3f6c(u32 r0) {
    u32 r0_2 = call_00301d0c(r0 + 0x18u, 0x6efbc4u, 0x2e8u, 4u);  // (from the original)
    gptr<Local_002d3f6c_r0_3> r0_3 = gptr<Local_002d3f6c_r0_3>(r0_2 - 0x18u);  // (from the original)
    r0_3->word_bb8 = 0;
    r0_3->word_bbc = 0;
    *gptr<u16>(r0_3.addr() + 0xbe0u) = 1;  // (from the original)
    r0_3->word_c = 0;
    r0_3->word_10 = 0;
    r0_3->word_14 = 0;
    r0_3->byte_be2 = 0;
    r0_3->byte_be3 = 0;
    r0_3->byte_be4 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_3.addr();
}

}  // namespace d_002d3f6c
GUEST_EXPORT_FRAMED(0x002d3f6c, d_002d3f6c::f_002d3f6c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d3fc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d3fc0 {

struct __attribute__((packed)) Object_002d3fc0_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
    u32 word_7dcc;
    u8 unknown_7dd0[0x2];  // (not used here)
    u8 byte_7dd2;
    u8 byte_7dd3;
    u8 byte_7dd4;
    u8 byte_7dd5;
    u8 byte_7dd6;
};
GUEST_OFFSET(Object_002d3fc0_0, word_7dc8, 0x7dc8);
GUEST_OFFSET(Object_002d3fc0_0, word_7dcc, 0x7dcc);
GUEST_OFFSET(Object_002d3fc0_0, byte_7dd2, 0x7dd2);
GUEST_OFFSET(Object_002d3fc0_0, byte_7dd3, 0x7dd3);
GUEST_OFFSET(Object_002d3fc0_0, byte_7dd4, 0x7dd4);
GUEST_OFFSET(Object_002d3fc0_0, byte_7dd5, 0x7dd5);
GUEST_OFFSET(Object_002d3fc0_0, byte_7dd6, 0x7dd6);

struct __attribute__((packed)) Object_002d3fc0_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_002d3fc0_2, word_0, 0x0);

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;

void f_002d3fc0(gptr<Object_002d3fc0_0> arg0, u32 r1, gptr<Object_002d3fc0_2> arg2, u32 r3) {
    u32 r5_1 = *gptr<u32>(guest::cpu()->r[13] + 0x18u);  // (from the original)
    call_00335634(arg0.addr(), r1, arg2.addr(), r3);
    arg0->word_7dc8 = r3;
    arg0->word_7dcc = arg2->word_0;
    u32 r1_1 = u32(arg0->byte_7dd6) & ~2u | 1u;
    arg0->byte_7dd6 = u8(r1_1);
    arg0->byte_7dd6 = u8(r5_1 == 0 ? r1_1 & ~4u : r1_1 | 4u);
    arg0->byte_7dd2 = u8(u32(arg0->byte_7dd2) | 0xfu);  // (from the original)
    arg0->byte_7dd3 = u8(u32(arg0->byte_7dd3) | 0xfu);  // (from the original)
    arg0->byte_7dd4 = u8(u32(arg0->byte_7dd4) | 0xfu);  // (from the original)
    arg0->byte_7dd5 = u8(u32(arg0->byte_7dd5) | 0xfu);  // (from the original)
}

}  // namespace d_002d3fc0
GUEST_EXPORT_FRAMED(0x002d3fc0, d_002d3fc0::f_002d3fc0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d406c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d406c {

struct __attribute__((packed)) Object_002d406c_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
    u32 word_7dcc;
    u8 unknown_7dd0[0x2];  // (not used here)
    u8 byte_7dd2;
    u8 byte_7dd3;
    u8 byte_7dd4;
    u8 byte_7dd5;
    u8 byte_7dd6;
};
GUEST_OFFSET(Object_002d406c_0, word_7dc8, 0x7dc8);
GUEST_OFFSET(Object_002d406c_0, word_7dcc, 0x7dcc);
GUEST_OFFSET(Object_002d406c_0, byte_7dd2, 0x7dd2);
GUEST_OFFSET(Object_002d406c_0, byte_7dd3, 0x7dd3);
GUEST_OFFSET(Object_002d406c_0, byte_7dd4, 0x7dd4);
GUEST_OFFSET(Object_002d406c_0, byte_7dd5, 0x7dd5);
GUEST_OFFSET(Object_002d406c_0, byte_7dd6, 0x7dd6);

struct __attribute__((packed)) Object_002d406c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_002d406c_2, word_0, 0x0);

inline constexpr guest::Function<0x00335634, u32(u32, u32, u32, u32)> call_00335634;

void f_002d406c(gptr<Object_002d406c_0> arg0, u32 r1, gptr<Object_002d406c_2> arg2, u32 r3) {
    call_00335634(arg0.addr(), r1, arg2.addr(), r3);
    arg0->word_7dc8 = r3;
    arg0->word_7dcc = arg2->word_0;
    arg0->byte_7dd6 = u8(u32(arg0->byte_7dd6) & ~2u);
    arg0->byte_7dd2 = u8(u32(arg0->byte_7dd2) | 0xau);  // (from the original)
    arg0->byte_7dd3 = u8(u32(arg0->byte_7dd3) | 0xau);  // (from the original)
    arg0->byte_7dd4 = u8(u32(arg0->byte_7dd4) | 0xau);  // (from the original)
    arg0->byte_7dd5 = u8(u32(arg0->byte_7dd5) | 0xau);  // (from the original)
}

}  // namespace d_002d406c
GUEST_EXPORT_FRAMED(0x002d406c, d_002d406c::f_002d406c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d4100: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4100 {

struct __attribute__((packed)) Object_002d4100_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
    u16 half_7dcc;
    u8 byte_7dce;
    u8 byte_7dcf;
};
GUEST_OFFSET(Object_002d4100_0, word_7dc8, 0x7dc8);
GUEST_OFFSET(Object_002d4100_0, half_7dcc, 0x7dcc);
GUEST_OFFSET(Object_002d4100_0, byte_7dce, 0x7dce);
GUEST_OFFSET(Object_002d4100_0, byte_7dcf, 0x7dcf);

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;

u32 f_002d4100(gptr<Object_002d4100_0> arg0, u32 r1, u32 r2, u32 r3) {
    call_00335640(arg0.addr(), r1, r2, r3);
    arg0->word_7dc8 = 0;
    arg0->half_7dcc = 0;
    arg0->byte_7dce = 0;
    arg0->byte_7dcf = 0;
    *gptr<u16>(arg0.addr() + 0x7dd0u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd2u) = 0;  // (from the original)
    *gptr<u8>((0x7dd0u | u32(s32(0x7dd0u) >> 0xd)) + arg0.addr()) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd4u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd5u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd6u) = 0;  // (from the original)
    u32 r0_1 = 0x7dd6u | u32(s32(0x7dd6u) >> 0xc);  // (from the original)
    *gptr<u8>(r0_1 + arg0.addr()) = 4;
    guest::cpu()->r[1] = 4u;
    return r0_1;
}

}  // namespace d_002d4100
GUEST_EXPORT_FRAMED(0x002d4100, d_002d4100::f_002d4100, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d4174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4174 {

struct __attribute__((packed)) Local_002d4174_r0_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_002d4174_r0_1, byte_0, 0x0);


void f_002d4174(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    gptr<Local_002d4174_r0_1> r0_1 = gptr<Local_002d4174_r0_1>(r0 + r1 + 0x7dd2u);  // (from the original)
    u32 r1_1 = u32(r0_1->byte_0) & ~0xcu;  // (from the original)
    r0_1->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002d4174
GUEST_EXPORT(0x002d4174, d_002d4174::f_002d4174);

// f_002d4198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4198 {

struct __attribute__((packed)) Object_002d4198_0 {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(Object_002d4198_0, byte_7dd7, 0x7dd7);


u32 f_002d4198(gptr<Object_002d4198_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_7dd7;
    u32 r0_1 = arg0.addr() + r1 + 0x7dd2u;  // (from the original)
    u32 zf_1 = r3_1 == r1;
    if (r3_1 == r1) {
        r3_1 = 4u;
    }
    if (zf_1) {
        arg0->byte_7dd7 = u8(r3_1);
    }
    *gptr<u8>(r0_1) = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d4198
GUEST_EXPORT(0x002d4198, d_002d4198::f_002d4198);

// f_002d41c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d41c8 {

struct __attribute__((packed)) Object_002d41c8_0 {
    u8 unknown_0[0x7dc8];  // (not used here)
    u32 word_7dc8;
    u16 half_7dcc;
    u8 byte_7dce;
    u8 byte_7dcf;
    u8 unknown_7dd0[0x7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(Object_002d41c8_0, word_7dc8, 0x7dc8);
GUEST_OFFSET(Object_002d41c8_0, half_7dcc, 0x7dcc);
GUEST_OFFSET(Object_002d41c8_0, byte_7dce, 0x7dce);
GUEST_OFFSET(Object_002d41c8_0, byte_7dcf, 0x7dcf);
GUEST_OFFSET(Object_002d41c8_0, byte_7dd7, 0x7dd7);

inline constexpr guest::Function<0x00335640, u32(u32, u32, u32, u32)> call_00335640;

void f_002d41c8(gptr<Object_002d41c8_0> arg0, u32 r1, u32 r2, u32 r3) {
    call_00335640(arg0.addr(), r1, r2, r3);
    arg0->word_7dc8 = 0;
    arg0->half_7dcc = 0;
    arg0->byte_7dce = 0;
    arg0->byte_7dcf = 0;
    *gptr<u16>(arg0.addr() + 0x7dd0u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd2u) = 0;  // (from the original)
    *gptr<u8>((0x7dd2u | u32(s32(0x7dd2u) >> 0xd)) + arg0.addr()) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd4u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd5u) = 0;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x7dd6u) = 0;  // (from the original)
    arg0->byte_7dd7 = 4;
}

}  // namespace d_002d41c8
GUEST_EXPORT_FRAMED(0x002d41c8, d_002d41c8::f_002d41c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d453c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d453c {

struct __attribute__((packed)) Object_002d453c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x7d0];  // (not used here)
    u16 half_7f0;
};
GUEST_OFFSET(Object_002d453c_0, word_4, 0x4);
GUEST_OFFSET(Object_002d453c_0, word_8, 0x8);
GUEST_OFFSET(Object_002d453c_0, word_c, 0xc);
GUEST_OFFSET(Object_002d453c_0, word_10, 0x10);
GUEST_OFFSET(Object_002d453c_0, word_14, 0x14);
GUEST_OFFSET(Object_002d453c_0, word_18, 0x18);
GUEST_OFFSET(Object_002d453c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_002d453c_0, half_7f0, 0x7f0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;

void f_002d453c(gptr<Object_002d453c_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_1c = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    *gptr<u16>(arg0.addr() + 0x7ecu) = 0;  // (from the original)
    *gptr<u16>(arg0.addr() + 0x7eeu) = 0;  // (from the original)
    arg0->half_7f0 = 0;
    *gptr<u16>(arg0.addr() + 0x7f2u) = 0;  // (from the original)
    call_002f825c(arg0.addr() + 0x6cu, 0x780u);  // (from the original)
    return;  // (from the original)
}

}  // namespace d_002d453c
GUEST_EXPORT(0x002d453c, d_002d453c::f_002d453c);

// f_002d4594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4594 {

struct __attribute__((packed)) Object_002d4594_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x7d0];  // (not used here)
    u16 half_7f0;
};
GUEST_OFFSET(Object_002d4594_0, word_4, 0x4);
GUEST_OFFSET(Object_002d4594_0, word_8, 0x8);
GUEST_OFFSET(Object_002d4594_0, word_c, 0xc);
GUEST_OFFSET(Object_002d4594_0, word_10, 0x10);
GUEST_OFFSET(Object_002d4594_0, word_14, 0x14);
GUEST_OFFSET(Object_002d4594_0, word_18, 0x18);
GUEST_OFFSET(Object_002d4594_0, word_1c, 0x1c);
GUEST_OFFSET(Object_002d4594_0, half_7f0, 0x7f0);

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;

u32 f_002d4594(gptr<Object_002d4594_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_1c = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    *gptr<u16>(arg0.addr() + 0x7ecu) = 0;  // (from the original)
    *gptr<u16>(arg0.addr() + 0x7eeu) = 0;  // (from the original)
    arg0->half_7f0 = 0;
    *gptr<u16>(arg0.addr() + 0x7f2u) = 0;  // (from the original)
    call_002f825c(arg0.addr() + 0x6cu, 0x780u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_002d4594
GUEST_EXPORT_FRAMED(0x002d4594, d_002d4594::f_002d4594, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d4a38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4a38 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32)> call_002fcb10;
inline constexpr guest::Function<0x003232c0, u32(u32, u32, u32, u32)> call_003232c0;
inline constexpr guest::Function<0x006ba118, u32(u32)> call_006ba118;
inline constexpr guest::Function<0x00768174, u32(u32, u32, u32)> call_00768174;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32)> call_0076aff4;

u32 f_002d4a38(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r6_1 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    call_003232c0(r0 + 0xa0u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r8 = 0x95bfdcu;  // (from the original)
    u32 r4 = 0u;
    do {
        if (r4 >= 0x28u) {  // (from the original)
            r6_1 = 0x95bfdcu;  // (from the original)
        } else {
            r6_1 = r5 + (r4 << 2);
            u32 r0_2 = call_002fcaf4(r6_1, r1, r2);
            r2 = guest::cpu()->r[2];
            if (r0_2 == 0) {
                u32 r0_3 = call_002fcb10(r6_1, guest::cpu()->r[1], r2);
                r2 = guest::cpu()->r[2];
                if (r0_3 == 0) {
                    u32 r0_4 = call_00768174(r6_1, guest::cpu()->r[1], r2);
                    r2 = guest::cpu()->r[2];
                    if (r0_4 == 0) {
                        r6_1 = r8;
                    }
                }
            }
        }
        call_002fc934(frame.at(8).addr(), r6_1, r2);
        u32 r0_7 = call_002fcaf4(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_7 == 0) {
            call_0076aff4(frame.at(0xc).addr(), frame.at(8).addr(), r7);  // (from the original)
            r2 = guest::cpu()->r[2];
            r1 = frame.at(0xc).addr();  // (from the original)
            if (r4 < 0x28u) {  // (from the original)
                call_002fc934(frame.at(4).addr(), r1, r2);
                u32 r0_11 = call_006ba118(frame.at(4).addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_11 != 0) {
                    call_002fc8e8(r5 + (r4 << 2), frame.at(4).addr(), r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                }
            }
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x28u);  // (from the original)
    call_0076aff4(frame.at(0).addr(), r5 + 0xf0u, r7);  // (from the original)
    call_002fc8e8(r5 + 0xf0u, frame.at(0).addr(), guest::cpu()->r[2]);  // (from the original)
    call_0076aff4(frame.at(0).addr(), r5 + 0xf4u, r7);  // (from the original)
    call_002fc8e8(r5 + 0xf4u, frame.at(0).addr(), r7);  // (from the original)
    return frame.at(0).addr();
}

}  // namespace d_002d4a38
GUEST_EXPORT_FRAMED(0x002d4a38, d_002d4a38::f_002d4a38, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d4bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4bb4 {

struct __attribute__((packed)) Local_002d4bb4_r0_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_002d4bb4_r0_1, half_0, 0x0);


void f_002d4bb4(u32 r0, u32 r1, u32 r2) {
    if (s32(r2) < 0) {
        return;
    }
    gptr<Local_002d4bb4_r0_1> r0_1 = gptr<Local_002d4bb4_r0_1>(r0 + (r1 << 1));
    if (u32(s16(r0_1->half_0)) != r2) {
        r0_1->half_0 = u16(r2);
    }
}

}  // namespace d_002d4bb4
GUEST_EXPORT(0x002d4bb4, d_002d4bb4::f_002d4bb4);

// f_002d4bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4bd0 {

struct __attribute__((packed)) Object_002d4bd0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u16 half_18;
};
GUEST_OFFSET(Object_002d4bd0_0, word_0, 0x0);
GUEST_OFFSET(Object_002d4bd0_0, word_4, 0x4);
GUEST_OFFSET(Object_002d4bd0_0, word_8, 0x8);
GUEST_OFFSET(Object_002d4bd0_0, word_c, 0xc);
GUEST_OFFSET(Object_002d4bd0_0, word_10, 0x10);
GUEST_OFFSET(Object_002d4bd0_0, word_14, 0x14);
GUEST_OFFSET(Object_002d4bd0_0, half_18, 0x18);

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;

void f_002d4bd0(gptr<Object_002d4bd0_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->half_18 = 0;
    call_002d4bf4(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d4bd0
GUEST_EXPORT(0x002d4bd0, d_002d4bd0::f_002d4bd0);

// f_002d4d00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d00 {

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;

void f_002d4d00() {
    call_002d4bf4(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002d4d00
GUEST_EXPORT(0x002d4d00, d_002d4d00::f_002d4d00);

// f_002d4d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d04 {

struct __attribute__((packed)) Local_002d4d04_r1_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_002d4d04_r1_1, half_0, 0x0);

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;

u32 f_002d4d04(u32 r0, u32 r1) {
    gptr<Local_002d4d04_r1_1> r1_1 = gptr<Local_002d4d04_r1_1>(r0 + (r1 << 1));
    u32 r2_1 = u32(r1_1->half_0) + 1u;
    r1_1->half_0 = u16(r2_1);
    return call_002d4bf4(r0, r1_1.addr(), r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002d4d04
GUEST_EXPORT(0x002d4d04, d_002d4d04::f_002d4d04);

// f_002d4d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d18 {

struct __attribute__((packed)) Local_002d4d18_r1_1 {
    u16 half_0;
};
GUEST_OFFSET(Local_002d4d18_r1_1, half_0, 0x0);

inline constexpr guest::Function<0x002d4bf4, u32(u32, u32, u32, u32)> call_002d4bf4;

u32 f_002d4d18(u32 r0, u32 r1) {
    gptr<Local_002d4d18_r1_1> r1_1 = gptr<Local_002d4d18_r1_1>(r0 + (r1 << 1));
    u32 r2_1 = s16(r1_1->half_0);
    if (r2_1 != 0 && s32(r2_1) >= 0) {
        r2_1 -= 1u;
        r1_1->half_0 = u16(r2_1);
    }
    return call_002d4bf4(r0, r1_1.addr(), r2_1, guest::cpu()->r[3]);
}

}  // namespace d_002d4d18
GUEST_EXPORT(0x002d4d18, d_002d4d18::f_002d4d18);

// f_002d4d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d30 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_002d4d30(u32 r0) {
    return call_002fc8e8(r0 + 0x2f2u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002d4d30
GUEST_EXPORT(0x002d4d30, d_002d4d30::f_002d4d30);

// f_002d4d3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4d3c {

struct __attribute__((packed)) Local_002d4d3c_r0_11 {
    u16 half_0;
};
GUEST_OFFSET(Local_002d4d3c_r0_11, half_0, 0x0);

struct __attribute__((packed)) Local_002d4d3c_r0_22 {
    u16 half_0;
};
GUEST_OFFSET(Local_002d4d3c_r0_22, half_0, 0x0);

inline constexpr guest::Function<0x002d4bb4, u32(u32, u32, u32, u32)> call_002d4bb4;
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;
inline constexpr guest::Function<0x00752bd0, u32(u32, u32, u32, u32)> call_00752bd0;
inline constexpr guest::Function<0x00768524, u32(u32, u32, u32, u32)> call_00768524;

struct __attribute__((packed)) Frame_002d4d3c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002d4d3c, word_0, 0x0);
GUEST_OFFSET(Frame_002d4d3c, word_4, 0x4);
GUEST_OFFSET(Frame_002d4d3c, word_8, 0x8);
GUEST_OFFSET(Frame_002d4d3c, word_c, 0xc);
GUEST_OFFSET(Frame_002d4d3c, word_10, 0x10);
GUEST_SIZE(Frame_002d4d3c, 0x18);

void f_002d4d3c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002d4d3c> frame;  // the original's stack frame
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r7 = r0;
    u32 r6 = 0u;
    u32 r8 = frame.at(0).addr();
    frame->word_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    frame->word_c = 0;
    frame->word_10 = 0;
    do {
        r4 = 0u;
        r5 = r7 + r6 * 0x28u;  // (from the original)
        do {
            call_002fc934(frame.at(0x14).addr(), r5 + (r4 << 2) + 0x62u, r2, r3);  // (from the original)
            u32 r0_3 = call_002fcaf4(frame.at(0x14).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                u32 r0_5 = call_005361a8(frame.at(0x14).addr(), guest::cpu()->r[1], r2, r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    u32 r0_6 = u32(*gptr<u8>(r0_5 + 0x1bu)) >> 4u & 3u;  // (from the original)
                    if (r0_6 < 4u && r0_6 != 0 && r7 + 0x22u != 0) {  // (from the original)
                        u32 r0_8 = call_00752bd0(r7 + 0x22u, r4 + 3u, r6 + 4u, 0u);  // (from the original)
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_8 != 0) {
                            u32 r0_10 = call_00768524(frame.at(0x14).addr(), guest::cpu()->r[1], r2, r3);  // (from the original)
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_10 < 0xau) {  // (from the original)
                                gptr<Local_002d4d3c_r0_11> r0_11 = gptr<Local_002d4d3c_r0_11>(r8 + (r0_10 << 1));
                                r0_11->half_0 = u16(u32(r0_11->half_0) + 1u);
                            }
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xau);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0xau);  // (from the original)
    r6 = 0u;
    do {
        r4 = 0u;
        r5 = r7 + (r6 << 5);
        do {
            call_002fc934(frame.at(0x14).addr(), r5 + (r4 << 2) + 0x1f2u, r2, r3);  // (from the original)
            u32 r0_14 = call_002fcaf4(frame.at(0x14).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_14 == 0) {
                u32 r0_16 = call_005361a8(frame.at(0x14).addr(), guest::cpu()->r[1], r2, r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_16 != 0) {
                    u32 r0_17 = u32(*gptr<u8>(r0_16 + 0x1bu)) >> 4u & 3u;  // (from the original)
                    if (r0_17 < 4u && r0_17 != 0 && r7 + 0x22u != 0) {  // (from the original)
                        u32 r0_19 = call_00752bd0(r7 + 0x22u, r4 + 4u, r6 + 5u, 1u);  // (from the original)
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_19 != 0) {
                            u32 r0_21 = call_00768524(frame.at(0x14).addr(), guest::cpu()->r[1], r2, r3);  // (from the original)
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_21 < 0xau) {  // (from the original)
                                gptr<Local_002d4d3c_r0_22> r0_22 = gptr<Local_002d4d3c_r0_22>(r8 + (r0_21 << 1));
                                r0_22->half_0 = u16(u32(r0_22->half_0) + 1u);
                            }
                        }
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 8u);
    r4 = 0u;
    do {
        u32 r2_5 = *gptr<s16>(r8 + (r4 << 1));
        call_002d4bb4(r7, r4 & 0xffu, r2_5, r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
}

}  // namespace d_002d4d3c
GUEST_EXPORT_FRAMED(0x002d4d3c, d_002d4d3c::f_002d4d3c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d4f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d4f3c {

struct __attribute__((packed)) Object_002d4f3c_0 {
    u8 unknown_0[0x1e];  // (not used here)
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Object_002d4f3c_0, byte_1e, 0x1e);
GUEST_OFFSET(Object_002d4f3c_0, byte_1f, 0x1f);

inline constexpr guest::Function<0x002d4bd0, u32(u32, u32, u32, u32)> call_002d4bd0;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00582aa4, u32(u32)> call_00582aa4;

struct __attribute__((packed)) Frame_002d4f3c {
    u32 word_0;
};
GUEST_OFFSET(Frame_002d4f3c, word_0, 0x0);
GUEST_SIZE(Frame_002d4f3c, 0x4);

void f_002d4f3c(gptr<Object_002d4f3c_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002d4f3c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r5 = 0;
    frame->word_0 = r3;
    u32 r7 = r0;
    call_002d4bd0(r0, r1, guest::cpu()->r[2], r3);
    arg0->byte_1e = 1;
    u32 r8 = 0u;
    arg0->byte_1f = u8(r8);
    call_00582aa4(r7 + 0x22u);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r6 = 0u;
    do {
        r4 = 0u;
        r5 = r7 + r6 * 0x28u;  // (from the original)
        do {
            call_002fc8e8(r5 + (r4 << 2) + 0x62u, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xau);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0xau);  // (from the original)
    r6 = 0u;
    do {
        r4 = 0u;
        r5 = r7 + (r6 << 5);
        do {
            call_002fc8e8(r5 + (r4 << 2) + 0x1f2u, 0x95bfdcu, guest::cpu()->r[2], r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 8u);
    u32 r0_4 = frame.at(0).addr();
    call_002fcbb0(r0_4, 0x23a0u, guest::cpu()->r[2], r3);  // (from the original)
    call_002fc8e8(r7 + 0x2f2u, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = frame.at(0).addr();
    call_002fcbb0(r0_6, 0x243du, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r7 + 0x2f6u, r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r7 + 0x20u) = u8(r8);  // (from the original)
    *gptr<u8>(r7 + 0x21u) = u8(r8);  // (from the original)
    call_002fc8e8(r7 + 0x2fau, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r7 + 0x2feu, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_002d4f3c
GUEST_EXPORT_FRAMED(0x002d4f3c, d_002d4f3c::f_002d4f3c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002d5058: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5058 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_002d5058(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = *gptr<u32>(r13);
    if (r12_1 != 0) {
        if (r12_1 != 1u) {
            return r0;
        }
        u32 cf_1 = r2 >= 8u;
        if (!cf_1) {
            r12_1 = r3;
            cf_1 = r3 >= 8u;
        }
        if (cf_1) {
            return r0;
        }
        return call_002fc8e8(r0 + (r12_1 << 5) + (r2 << 2) + 0x1f2u, guest::cpu()->r[1]);  // (from the original)
    }
    u32 cf_2 = r2 >= 0xau;  // (from the original)
    if (!cf_2) {
        r12_1 = r3;
        cf_2 = r3 >= 0xau;  // (from the original)
    }
    if (cf_2) {
        return r0;
    }
    return call_002fc8e8(r0 + r12_1 * 0x28u + (r2 << 2) + 0x62u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002d5058
GUEST_EXPORT(0x002d5058, d_002d5058::f_002d5058);

// f_002d5184: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5184 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

u32 f_002d5184(u32 r0) {
    return call_002fc8e8(r0 + 0x2f6u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002d5184
GUEST_EXPORT(0x002d5184, d_002d5184::f_002d5184);

// f_002d5190: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5190 {

inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;

u32 f_002d5190(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = 0;
    u32 r5 = 0;
    u32 r7 = r0;
    u32 r8 = r2;
    u32 r6 = 0u;
    do {
        r4 = 0u;
        r5 = r7 + r6 * 0x28u;  // (from the original)
        do {
            call_0076aff4(frame.at(4).addr(), r5 + (r4 << 2) + 0x62u, r8, guest::cpu()->r[3]);  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xau);  // (from the original)
        r6 += 1u;
        guest::preempt();
    } while (r6 < 0xau);  // (from the original)
    r6 = 0u;
    do {
        r4 = 0u;
        r5 = r7 + (r6 << 5);
        do {
            call_0076aff4(frame.at(4).addr(), r5 + (r4 << 2) + 0x1f2u, r8, guest::cpu()->r[3]);  // (from the original)
            r4 += 1u;
            guest::preempt();
        } while (r4 < 8u);
        r6 += 1u;
        guest::preempt();
    } while (r6 < 8u);
    call_0076aff4(frame.at(0).addr(), r7 + 0x2f2u, r8, guest::cpu()->r[3]);  // (from the original)
    call_0076aff4(frame.at(0).addr(), r7 + 0x2f6u, r8, guest::cpu()->r[3]);  // (from the original)
    return frame.at(0).addr();
}

}  // namespace d_002d5190
GUEST_EXPORT_FRAMED(0x002d5190, d_002d5190::f_002d5190, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d5278: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5278 {

inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x00582aa4, u32(u32)> call_00582aa4;

u32 f_002d5278(u32 r0) {
    u32 r0_2 = call_00301d0c(r0 + 0x22u, 0x582b08u, 0x20u, 2u);  // (from the original)
    call_00582aa4(r0_2);
    u32 r0_4 = call_00301d0c(r0_2 + 0x40u, 0x2fc20cu, 4u, 0x64u);  // (from the original)
    u32 r0_6 = call_00301d0c(r0_4 + 0x190u, 0x2fc20cu, 4u, 0x40u);  // (from the original)
    call_002fc20c(r0_6 + 0x100u);  // (from the original)
    call_002fc20c(r0_6 + 0x104u);  // (from the original)
    call_002fc20c(r0_6 + 0x108u);  // (from the original)
    call_002fc20c(r0_6 + 0x10cu);  // (from the original)
    return r0_6 - 0x1f2u;  // (from the original)
}

}  // namespace d_002d5278
GUEST_EXPORT_FRAMED(0x002d5278, d_002d5278::f_002d5278, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d546c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d546c {

struct __attribute__((packed)) Local_002d546c_r0_3 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_002d546c_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_002d546c_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_002d546c_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_002d546c_r0_3, word_24, 0x24);

inline constexpr u32 vtable_script__WordFix_8u_ = 0x0090a378u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_002d546c {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x24];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002d546c, word_0, 0x0);
GUEST_OFFSET(Frame_002d546c, word_8, 0x8);
GUEST_SIZE(Frame_002d546c, 0x30);

void f_002d546c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002d546c> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r4 = r0;
    u32 r6 = r1;
    u32 r0_1 = frame.at(8).addr();
    call_003083bc(r0_1, frame.at(0x20).addr(), 8u, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_8u_;
    *gptr<u32>(r0_1) = r5;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    call_005f4bfc(r0_2);
    gptr<Local_002d546c_r0_3> r0_3 = gptr<Local_002d546c_r0_3>(r0_2 - 0xcu);  // (from the original)
    u32 r7 = 0u;
    r0_3->word_18 = r7;
    r0_3->word_1c = r7;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_3->word_20 = r7;
    r0_3->word_24 = r7;
    r1 = 4u;
    r0 = r0_3.addr() + 0x16u;  // (from the original)
    do {
        u32 r3_2 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_2);
        r3_3 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_3);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_3);
    frame->word_0 = r7;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x2d555cu, r6 == 0 ? 0x1b2u : 0x1b3u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005e2e50(r4 + 0x18cu, frame.at(8).addr());  // (from the original)
    call_005e2f94(r4 + 0x18cu);  // (from the original)
    frame->word_8 = r5;
}

}  // namespace d_002d546c
GUEST_EXPORT_FRAMED(0x002d546c, d_002d546c::f_002d546c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002d5770: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5770 {


u32 f_002d5770(u32 r0) {
    guest::cpu()->r[1] = 0x985a10u;  // (from the original)
    return (r0 << 2) + 0x985a10u;  // (from the original)
}

}  // namespace d_002d5770
GUEST_EXPORT(0x002d5770, d_002d5770::f_002d5770);

// f_002d5848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5848 {

inline guest::global<u32, 0x0084515c> global_0084515c;
inline guest::global<u32, 0x00845160> global_00845160;
inline guest::global<u32, 0x00845164> global_00845164;
inline guest::global<u32, 0x00845168> global_00845168;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;

struct __attribute__((packed)) Frame_002d5848 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002d5848, word_0, 0x0);
GUEST_OFFSET(Frame_002d5848, word_4, 0x4);
GUEST_OFFSET(Frame_002d5848, word_8, 0x8);
GUEST_OFFSET(Frame_002d5848, word_c, 0xc);
GUEST_SIZE(Frame_002d5848, 0x18);

void f_002d5848() {
    guest::StackFrameOf<Frame_002d5848> frame;  // the original's stack frame
    u32 r5 = 0x985a10u;  // (from the original)
    u32 r1_1 = *global_00845160;
    u32 r2 = *global_00845164;
    u32 r3 = *global_00845168;
    u32 r4 = 0u;
    u32 r6 = frame.at(0).addr();
    frame->word_0 = *global_0084515c;
    frame->word_4 = r1_1;
    frame->word_8 = r2;
    frame->word_c = r3;
    do {
        u32 r1_2 = gptr<u16>(r6)[r4];
        u32 r0_1 = frame.at(0x10).addr();  // (from the original)
        call_002fcbb0(r0_1, r1_2, r2, r3);
        u32 r2_1 = r5 + (r4 << 2);
        call_002fc8e8(r2_1, r0_1, r2_1);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
}

}  // namespace d_002d5848
GUEST_EXPORT_FRAMED(0x002d5848, d_002d5848::f_002d5848, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d5920: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5920 {

struct __attribute__((packed)) Object_002d5920_0 {
    u32 word_0;
    u8 unknown_4[0x33];  // (not used here)
    u8 byte_37;
};
GUEST_OFFSET(Object_002d5920_0, word_0, 0x0);
GUEST_OFFSET(Object_002d5920_0, byte_37, 0x37);


void f_002d5920(gptr<Object_002d5920_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    for (;;) {
        if (!(1)) {
            break;
        }
        u32 r2_1 = s8(arg0->byte_37);
        if (r2_1 == r1) {
            guest::cpu()->r[1] = r1;
            return;
        }
        arg0->byte_37 = u8(r1);
        u32 r1_1 = *gptr<u32>(arg0->word_0 + 0x18u);  // (from the original)
        // virtual function 6 of arg0.addr()
        guest::call_address<u32>(r1_1, r0, r1_1, r2_1, guest::cpu()->r[3]);
        return;
        guest::preempt();
    }
}

}  // namespace d_002d5920
GUEST_EXPORT(0x002d5920, d_002d5920::f_002d5920);

// f_002d596c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d596c {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002e8bf4, u32(u32, u32, u32)> call_002e8bf4;

u32 f_002d596c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002e8bf4(r0, r1, frame.at(0).addr());
    return r0_2;
}

}  // namespace d_002d596c
GUEST_EXPORT_FRAMED(0x002d596c, d_002d596c::f_002d596c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002d59a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59a4 {

struct __attribute__((packed)) Object_002d59a4_0 {
    u8 unknown_0[0x68];  // (not used here)
    u8 byte_68;
};
GUEST_OFFSET(Object_002d59a4_0, byte_68, 0x68);

inline constexpr guest::Function<0x00136cc8, u32(u32)> call_00136cc8;
inline constexpr guest::Function<0x0020aedc, u32(u32)> call_0020aedc;

u32 f_002d59a4(gptr<Object_002d59a4_0> arg0) {
    u32 r0_1 = arg0->byte_68;
    if (r0_1 == 0) {
        return r0_1;
    } else {
    }
    call_00136cc8(arg0.addr() + 0x44u);  // (from the original)
    call_0020aedc(arg0.addr());
    arg0->byte_68 = 0;
    return 0u;
}

}  // namespace d_002d59a4
GUEST_EXPORT_FRAMED(0x002d59a4, d_002d59a4::f_002d59a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d59d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59d4 {

inline constexpr guest::Function<0x002e8ce8, u32(u32, u32, u32, u32)> call_002e8ce8;

u32 f_002d59d4(u32 r0, u32 r1) {
    u32 r0_1 = call_002e8ce8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0x68u) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d59d4
GUEST_EXPORT_FRAMED(0x002d59d4, d_002d59d4::f_002d59d4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d59e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d59e8 {

inline constexpr u32 vtable_SoundObj_1_ = 0x008f8d88u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;
inline constexpr guest::Function<0x0020aedc, u32(u32)> call_0020aedc;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;

u32 f_002d59e8(gptr<SoundObj_1_> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_0 = vtable_SoundObj_1_;
    call_00136cc8(arg0.addr() + 0x44u, r1, r2, r3);  // (from the original)
    call_0020aedc(arg0.addr());
    call_00136cc8(arg0.addr() + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(arg0.addr() + 0x44u, 0x137d74u, 4u, 1u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_002d59e8
GUEST_EXPORT_FRAMED(0x002d59e8, d_002d59e8::f_002d59e8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002d5b40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5b40 {

struct __attribute__((packed)) Object_002d5b40_0 {
    u8 unknown_0[0xdc];  // (not used here)
    u8 byte_dc;
};
GUEST_OFFSET(Object_002d5b40_0, byte_dc, 0xdc);

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002e9118, u32(u32, u32, u32)> call_002e9118;

u32 f_002d5b40(gptr<Object_002d5b40_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    call_002e9118(arg0.addr(), r1, frame.at(0).addr());
    arg0->byte_dc = 1;
    return 1u;
}

}  // namespace d_002d5b40
GUEST_EXPORT_FRAMED(0x002d5b40, d_002d5b40::f_002d5b40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002d5d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5d48 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x002e9194, u32(u32, u32, u32)> call_002e9194;

u32 f_002d5d48(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002e9194(r0, r1, frame.at(0).addr());
    return r0_2;
}

}  // namespace d_002d5d48
GUEST_EXPORT_FRAMED(0x002d5d48, d_002d5d48::f_002d5d48, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002d5f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5f68 {

struct __attribute__((packed)) Object_002d5f68_0 {
    u8 unknown_0[0xdc];  // (not used here)
    u8 byte_dc;
};
GUEST_OFFSET(Object_002d5f68_0, byte_dc, 0xdc);

inline constexpr guest::Function<0x002e9268, u32(u32, u32, u32, u32)> call_002e9268;

u32 f_002d5f68(gptr<Object_002d5f68_0> arg0) {
    u32 r0_1 = arg0->byte_dc;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_002e9268(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_dc = 0;
    return 0u;
}

}  // namespace d_002d5f68
GUEST_EXPORT_FRAMED(0x002d5f68, d_002d5f68::f_002d5f68, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d5f90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d5f90 {

inline constexpr guest::Function<0x002e92b0, u32(u32, u32, u32, u32)> call_002e92b0;

u32 f_002d5f90(u32 r0, u32 r1) {
    u32 r0_1 = call_002e92b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0_1 + 0xdcu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002d5f90
GUEST_EXPORT_FRAMED(0x002d5f90, d_002d5f90::f_002d5f90, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d70b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d70b8 {

struct __attribute__((packed)) Object_002d70b8_0 {
    u32 word_0;
    u8 unknown_4[0x14];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xc];  // (not used here)
    u16 half_28;
    u8 byte_2a;
    u8 byte_2b;
    u8 unknown_2c[0x30];  // (not used here)
    u16 half_5c;
    u16 half_5e;
    u32 word_60;
    u32 word_64;
    u8 byte_68;
    u8 byte_69;
    u8 byte_6a;
    u8 byte_6b;
    u32 word_6c;
    float float_70;
    float float_74;
    float float_78;
    float float_7c;
    float float_80;
    float float_84;
    float float_88;
    float float_8c;
    float float_90;
    float float_94;
    float float_98;
    float float_9c;
    float float_a0;
    float float_a4;
    u8 unknown_a8[0xc];  // (not used here)
    u32 word_b4;
    u8 unknown_b8[0x118];  // (not used here)
    u8 byte_1d0;
};
GUEST_OFFSET(Object_002d70b8_0, word_0, 0x0);
GUEST_OFFSET(Object_002d70b8_0, word_18, 0x18);
GUEST_OFFSET(Object_002d70b8_0, half_28, 0x28);
GUEST_OFFSET(Object_002d70b8_0, byte_2a, 0x2a);
GUEST_OFFSET(Object_002d70b8_0, byte_2b, 0x2b);
GUEST_OFFSET(Object_002d70b8_0, half_5c, 0x5c);
GUEST_OFFSET(Object_002d70b8_0, half_5e, 0x5e);
GUEST_OFFSET(Object_002d70b8_0, word_60, 0x60);
GUEST_OFFSET(Object_002d70b8_0, word_64, 0x64);
GUEST_OFFSET(Object_002d70b8_0, byte_68, 0x68);
GUEST_OFFSET(Object_002d70b8_0, byte_69, 0x69);
GUEST_OFFSET(Object_002d70b8_0, byte_6a, 0x6a);
GUEST_OFFSET(Object_002d70b8_0, byte_6b, 0x6b);
GUEST_OFFSET(Object_002d70b8_0, word_6c, 0x6c);
GUEST_OFFSET(Object_002d70b8_0, float_70, 0x70);
GUEST_OFFSET(Object_002d70b8_0, float_74, 0x74);
GUEST_OFFSET(Object_002d70b8_0, float_78, 0x78);
GUEST_OFFSET(Object_002d70b8_0, float_7c, 0x7c);
GUEST_OFFSET(Object_002d70b8_0, float_80, 0x80);
GUEST_OFFSET(Object_002d70b8_0, float_84, 0x84);
GUEST_OFFSET(Object_002d70b8_0, float_88, 0x88);
GUEST_OFFSET(Object_002d70b8_0, float_8c, 0x8c);
GUEST_OFFSET(Object_002d70b8_0, float_90, 0x90);
GUEST_OFFSET(Object_002d70b8_0, float_94, 0x94);
GUEST_OFFSET(Object_002d70b8_0, float_98, 0x98);
GUEST_OFFSET(Object_002d70b8_0, float_9c, 0x9c);
GUEST_OFFSET(Object_002d70b8_0, float_a0, 0xa0);
GUEST_OFFSET(Object_002d70b8_0, float_a4, 0xa4);
GUEST_OFFSET(Object_002d70b8_0, word_b4, 0xb4);
GUEST_OFFSET(Object_002d70b8_0, byte_1d0, 0x1d0);

inline constexpr u32 vtable_BsLightDiffuseBase = 0x008f2fc0u;
inline constexpr u32 vtable_BsLightDiffuseBase__DiffuseLightHioNode = 0x008faa14u;
inline constexpr u32 vtable_g3d__DirectionalFragmentLight = 0x00902a8cu;
inline guest::global<u32, 0x00847248> global_00847248;
inline guest::global<u32, 0x0084724c> global_0084724c;
inline guest::global<u32, 0x00847250> global_00847250;
inline guest::global<u32, 0x00847254> global_00847254;
inline guest::global<u32, 0x00847258> global_00847258;
inline guest::global<u32, 0x0084725c> global_0084725c;
inline guest::global<u32, 0x00847260> global_00847260;
inline guest::global<u32, 0x00847264> global_00847264;
inline guest::global<u32, 0x0084726c> global_0084726c;
inline guest::global<u32, 0x00847270> global_00847270;
inline guest::global<u32, 0x00847274> global_00847274;
inline guest::global<u32, 0x00847278> global_00847278;
inline guest::global<u32, 0x0084727c> global_0084727c;
inline guest::global<u32, 0x00847280> global_00847280;
inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;
inline constexpr guest::Function<0x004ed3fc, u32(u32)> call_004ed3fc;

u32 f_002d70b8(gptr<Object_002d70b8_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    call_001c2764(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_18 = vtable_BsLightDiffuseBase__DiffuseLightHioNode;
    arg0->word_0 = vtable_BsLightDiffuseBase;
    arg0->word_64 = 0;
    arg0->byte_68 = 0;
    arg0->byte_69 = 0;
    arg0->byte_6a = 1;
    arg0->byte_6b = 0;
    arg0->half_28 = 0;
    arg0->byte_2a = 0;
    arg0->byte_2b = 0;
    arg0->half_5c = 0;
    arg0->half_5e = 0;
    arg0->word_60 = 0;
    call_004ed3fc(arg0.addr() + 0xb4u);  // (from the original)
    arg0->word_b4 = vtable_g3d__DirectionalFragmentLight;
    float S1_1 = std::bit_cast<float>(*global_0084724c);
    float S2_1 = std::bit_cast<float>(*global_00847250);
    float S3_1 = std::bit_cast<float>(*global_00847254);
    float S4_1 = std::bit_cast<float>(*global_00847258);
    float S5_1 = std::bit_cast<float>(*global_0084725c);
    float S6_1 = std::bit_cast<float>(*global_00847260);
    float S7_1 = std::bit_cast<float>(*global_00847264);
    arg0->word_6c = *global_00847248;
    arg0->float_70 = S1_1;
    arg0->float_74 = S2_1;
    arg0->float_78 = S3_1;
    arg0->float_7c = S4_1;
    arg0->float_80 = S5_1;
    arg0->float_84 = S6_1;
    arg0->float_88 = S7_1;
    float S0_1 = 1.0f;
    float S1_2 = std::bit_cast<float>(*global_0084726c);
    float S2_2 = std::bit_cast<float>(*global_00847270);
    float S3_2 = std::bit_cast<float>(*global_00847274);
    float S4_2 = std::bit_cast<float>(*global_00847278);
    float S5_2 = std::bit_cast<float>(*global_0084727c);
    float S6_2 = std::bit_cast<float>(*global_00847280);
    arg0->float_8c = S0_1;
    arg0->float_90 = S1_2;
    arg0->float_94 = S2_2;
    arg0->float_98 = S3_2;
    arg0->float_9c = S4_2;
    arg0->float_a0 = S5_2;
    arg0->float_a4 = S6_2;
    arg0->byte_1d0 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return arg0.addr();
}

}  // namespace d_002d70b8
GUEST_EXPORT_FRAMED(0x002d70b8, d_002d70b8::f_002d70b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002d7ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d7ad4 {

struct __attribute__((packed)) Local_002d7ad4_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002d7ad4_r0_1, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002d7ad4_r0_16 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002d7ad4_r0_16, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002d7ad4_r0_26 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002d7ad4_r0_26, byte_b7, 0xb7);

struct __attribute__((packed)) Local_002d7ad4_r8_1 {
    u8 unknown_0[0xae8];  // (not used here)
    u32 word_ae8;
};
GUEST_OFFSET(Local_002d7ad4_r8_1, word_ae8, 0xae8);

struct __attribute__((packed)) Local_002d7ad4_r9_2 {
    u8 unknown_0[0xae8];  // (not used here)
    u32 word_ae8;
};
GUEST_OFFSET(Local_002d7ad4_r9_2, word_ae8, 0xae8);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002b7d4c, u32(u32, u32, u32, u32)> call_002b7d4c;
inline constexpr guest::Function<0x002c4544, u32(u32, u32, u32, u32)> call_002c4544;
inline constexpr guest::Function<0x002fcaf4, u32(u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;

struct __attribute__((packed)) Frame_002d7ad4 {
    u32 word_0;
    u8 unknown_4[0x60];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002d7ad4, word_0, 0x0);
GUEST_SIZE(Frame_002d7ad4, 0x64);

u32 f_002d7ad4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002d7ad4> frame;  // the original's stack frame
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r8 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r2_1 = *gptr<u32>(r5 + (r4 << 2) + 0xae8u);  // (from the original)
        gptr<Local_002d7ad4_r0_1> r0_1 = gptr<Local_002d7ad4_r0_1>(*gptr<u32>(r2_1 + 0x150u));  // (from the original)
        u32 r1_1 = u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
        r0_1->byte_b7 = u8(r1_1);
        call_00568c10(r2_1 + 4u, r1_1, r2_1, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 9);
    u32 r0_3 = *gptr<u32>(r5 + 0xad4u);  // (from the original)
    u32 r10 = vtable_script__WordFix_33u_;
    r4 = 0u;
    u32 r11 = r5 + 0xa00u;  // (from the original)
    if (r0_3 == 0) {
        r7 = 3u;
        r6 = 0u;
        goto L_2d7cb0;
    }
    r8 = r0_3 - 3u;
    r6 = 0u;
    if (s32(r8) > 0) {
        do {
            call_002c4544(frame.at(0).addr(), r4, r2, r3);
            u32 r0_6 = call_002fcaf4(frame.at(0).addr());
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_6 == 0) {
                r6 += 1u;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r6) < s32(r8));
    }
    r7 = 0u;
    r6 = *gptr<u32>(r5 + 0xad4u) - 3u;  // (from the original)
L_2d7b84:;
    r0_7 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (r0_7 <= r6) {
        guest::cpu()->r[1] = r1;
        return r0_7;
    }
    r0_8 = frame.at(0x5c).addr();  // (from the original)
    call_002c4544(r0_8, r4, r2, r3);
    r0_9 = frame.at(0x5c).addr();  // (from the original)
    r0_10 = call_002fcaf4(r0_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        call_002fe7f4(frame.at(0).addr(), frame.at(0x5c).addr(), 0u, r3);  // (from the original)
        gptr<Local_002d7ad4_r8_1> r8_1 = gptr<Local_002d7ad4_r8_1>(r5 + (r7 << 2));
        u32 r9_1 = r8_1->word_ae8;
        call_005e2e50(r9_1 + 0x154u, frame.at(0).addr());  // (from the original)
        call_005e2f94(r9_1 + 0x154u);  // (from the original)
        call_00568c10(r9_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r8_1->word_ae8 + 0x218u) = r4;  // (from the original)
        u32 r3_6 = *gptr<s8>(r11 + 0xe4u);  // (from the original)
        call_002b7d4c(r8_1->word_ae8, r5 + 0x310u, frame.at(0x5c).addr(), r3_6);  // (from the original)
        u32 r1_9 = r8_1->word_ae8;
        gptr<Local_002d7ad4_r0_16> r0_16 = gptr<Local_002d7ad4_r0_16>(*gptr<u32>(r1_9 + 0x150u));  // (from the original)
        u32 r2_8 = u32(r0_16->byte_b7) & 0xfeu | 1u;  // (from the original)
        r0_16->byte_b7 = u8(r2_8);
        call_00568c10(r1_9 + 4u, r1_9, r2_8, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 += 1u;
        r6 += 1u;
        frame->word_0 = r10;
        r0_7 = frame.at(0x5c).addr();  // (from the original)
        goto L_2d7d64;
    }
    r0_7 = frame.at(0x5c).addr();  // (from the original)
    goto L_2d7d64;
L_2d7cb0:;
    r0_7 = *gptr<u32>(r5 + 0xad0u);  // (from the original)
    if (r0_7 <= r6) {
        guest::cpu()->r[1] = r1;
        return r0_7;
    }
    r0_18 = frame.at(0x5c).addr();  // (from the original)
    call_002c4544(r0_18, r4, r2, r3);
    r0_19 = frame.at(0x5c).addr();  // (from the original)
    r0_20 = call_002fcaf4(r0_19);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_20 != 0) {
        r0_7 = frame.at(0x5c).addr();  // (from the original)
    } else {
        call_002fe7f4(frame.at(0).addr(), frame.at(0x5c).addr(), 0u, r3);  // (from the original)
        gptr<Local_002d7ad4_r9_2> r9_2 = gptr<Local_002d7ad4_r9_2>(r5 + (r7 << 2));
        u32 r8_2 = r9_2->word_ae8;
        call_005e2e50(r8_2 + 0x154u, frame.at(0).addr());  // (from the original)
        call_005e2f94(r8_2 + 0x154u);  // (from the original)
        call_00568c10(r8_2 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r9_2->word_ae8 + 0x218u) = r4;  // (from the original)
        u32 r3_12 = *gptr<s8>(r11 + 0xe4u);  // (from the original)
        call_002b7d4c(r9_2->word_ae8, r5 + 0x310u, frame.at(0x5c).addr(), r3_12);  // (from the original)
        u32 r1_16 = r9_2->word_ae8;
        gptr<Local_002d7ad4_r0_26> r0_26 = gptr<Local_002d7ad4_r0_26>(*gptr<u32>(r1_16 + 0x150u));  // (from the original)
        u32 r2_14 = u32(r0_26->byte_b7) & 0xfeu | 1u;  // (from the original)
        r0_26->byte_b7 = u8(r2_14);
        call_00568c10(r1_16 + 4u, r1_16, r2_14, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 += 1u;
        r6 += 1u;
        frame->word_0 = r10;
        r0_7 = frame.at(0x5c).addr();  // (from the original)
    }
    r4 += 1u;
    if (s32(r7) >= 9) {
        guest::cpu()->r[1] = r1;
        return r0_7;
    }
    guest::preempt();
    goto L_2d7cb0;
L_2d7d64:;
    r4 += 1u;
    if (s32(r7) < 9) {
        guest::preempt();
        goto L_2d7b84;
    }
    guest::cpu()->r[1] = r1;
    return r0_7;
}

}  // namespace d_002d7ad4
GUEST_EXPORT_FRAMED(0x002d7ad4, d_002d7ad4::f_002d7ad4, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002d7d7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d7d7c {

struct __attribute__((packed)) Object_002d7d7c_0 {
    u8 unknown_0[0x25e8];  // (not used here)
    u32 word_25e8;
};
GUEST_OFFSET(Object_002d7d7c_0, word_25e8, 0x25e8);

struct __attribute__((packed)) Local_002d7d7c_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002d7d7c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_002d7d7c_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_002d7d7c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002d7d7c_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_002d7d7c_ea_11, word_4, 0x4);

struct __attribute__((packed)) Local_002d7d7c_ea_9 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002d7d7c_ea_9, float_0, 0x0);
GUEST_OFFSET(Local_002d7d7c_ea_9, float_4, 0x4);

struct __attribute__((packed)) Local_002d7d7c_r0_10 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_002d7d7c_r0_10, word_d0, 0xd0);
GUEST_OFFSET(Local_002d7d7c_r0_10, byte_db, 0xdb);
GUEST_OFFSET(Local_002d7d7c_r0_10, byte_dc, 0xdc);

struct __attribute__((packed)) Local_002d7d7c_r0_9 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x7];  // (not used here)
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Local_002d7d7c_r0_9, word_d0, 0xd0);
GUEST_OFFSET(Local_002d7d7c_r0_9, byte_db, 0xdb);
GUEST_OFFSET(Local_002d7d7c_r0_9, byte_dc, 0xdc);

struct __attribute__((packed)) Local_002d7d7c_r4_1 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u16 half_e4;
};
GUEST_OFFSET(Local_002d7d7c_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_002d7d7c_r4_1, half_e4, 0xe4);

struct __attribute__((packed)) Local_002d7d7c_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002d7d7c_r9_1, word_0, 0x0);
GUEST_OFFSET(Local_002d7d7c_r9_1, word_4, 0x4);
GUEST_OFFSET(Local_002d7d7c_r9_1, word_8, 0x8);
GUEST_OFFSET(Local_002d7d7c_r9_1, word_c, 0xc);
GUEST_OFFSET(Local_002d7d7c_r9_1, word_10, 0x10);
GUEST_OFFSET(Local_002d7d7c_r9_1, word_14, 0x14);

inline guest::global<u32, 0x0084a228> global_0084a228;
inline guest::global<u32, 0x0084a22c> global_0084a22c;
inline guest::global<u32, 0x0084a230> global_0084a230;
inline guest::global<u32, 0x0084a234> global_0084a234;
inline guest::global<u32, 0x0084a398> global_0084a398;
inline guest::global<u32, 0x0084a39c> global_0084a39c;
inline guest::global<u32, 0x0084a3a0> global_0084a3a0;
inline guest::global<u32, 0x0084a3a4> global_0084a3a4;
inline guest::global<u32, 0x0084a3a8> global_0084a3a8;
inline guest::global<u32, 0x0084a3ac> global_0084a3ac;
inline guest::global<u32, 0x0084a3b0> global_0084a3b0;
inline constexpr guest::Function<0x002b6a00, u32(u32, u32)> call_002b6a00;
inline constexpr guest::Function<0x002f6a30, u32(u32, u32)> call_002f6a30;
inline constexpr guest::Function<0x002f6e98, u32(u32, u32, u32, u32)> call_002f6e98;
inline constexpr guest::Function<0x002f7508, u32(u32, u32, u32)> call_002f7508;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;

struct __attribute__((packed)) Frame_002d7d7c {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x14];  // (not read or written by name)
    u32 word_40;
    u32 word_44;
    u8 unknown_48[0x18];  // (not read or written by name)
    u32 word_60;
};
GUEST_OFFSET(Frame_002d7d7c, word_0, 0x0);
GUEST_OFFSET(Frame_002d7d7c, word_10, 0x10);
GUEST_OFFSET(Frame_002d7d7c, word_14, 0x14);
GUEST_OFFSET(Frame_002d7d7c, word_18, 0x18);
GUEST_OFFSET(Frame_002d7d7c, word_1c, 0x1c);
GUEST_OFFSET(Frame_002d7d7c, word_20, 0x20);
GUEST_OFFSET(Frame_002d7d7c, word_24, 0x24);
GUEST_OFFSET(Frame_002d7d7c, word_28, 0x28);
GUEST_OFFSET(Frame_002d7d7c, word_40, 0x40);
GUEST_OFFSET(Frame_002d7d7c, word_44, 0x44);
GUEST_OFFSET(Frame_002d7d7c, word_60, 0x60);
GUEST_SIZE(Frame_002d7d7c, 0x64);

void f_002d7d7c(gptr<Object_002d7d7c_0> arg0, float S0, float S1) {
    guest::StackFrameOf<Frame_002d7d7c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r0_1 = r0 + 0x908u;  // (from the original)
    gptr<Local_002d7d7c_r9_1> r9_1 = gptr<Local_002d7d7c_r9_1>(frame.at(0x48).addr());  // (from the original)
    u32 r1_1 = *global_0084a398;
    frame->word_0 = r0_1;
    u32 r3_1 = *global_0084a39c;
    u32 r6_1 = *global_0084a3a0;
    u32 r7_1 = *global_0084a3a4;
    u32 r8_1 = *global_0084a3a8;
    u32 r12_1 = *global_0084a3ac;
    r9_1->word_0 = r1_1;
    r9_1->word_4 = r3_1;
    r9_1->word_8 = r6_1;
    r9_1->word_c = r7_1;
    r9_1->word_10 = r8_1;
    r9_1->word_14 = r12_1;
    u32 r1_2 = *global_0084a3b0;
    frame->word_44 = r0_1;
    u32 r0_2 = r5 + 0x2514u;  // (from the original)
    frame->word_40 = r0 + 0xc8u;  // (from the original)
    frame->word_60 = r1_2;
    u32 r7 = r0_2;
    call_002f6e98(r0_2, frame.at(0x40).addr(), 0u, r3_1);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    S0 = 0.0f;
    arg0->word_25e8 = arg0->word_25e8 | 0x40u;  // (from the original)
    frame->word_10 = r9;
    frame->word_14 = r9;
    S1 = -60.0f;
    frame->word_18 = r9;
    frame->word_1c = r9;
    frame->word_20 = r9;
    frame->word_24 = r9;
    frame->word_28 = r9;
    u32 r8 = 1u;
    gptr<Local_002d7d7c_ea_9> ea_9 = gptr<Local_002d7d7c_ea_9>(frame.at(0x18).addr());  // (from the original)
    ea_9->float_0 = S0;
    ea_9->float_4 = S1;
    u32 r10 = frame.at(0x30).addr();  // (from the original)
    u32 r0_3 = *global_0084a228;
    u32 r1_4 = *global_0084a22c;
    u32 r11 = frame.at(0x38).addr();  // (from the original)
    gptr<Local_002d7d7c_ea_10> ea_10 = gptr<Local_002d7d7c_ea_10>(frame.at(0x30).addr());  // (from the original)
    ea_10->word_0 = r0_3;
    ea_10->word_4 = r1_4;
    u32 r0_4 = *global_0084a230;
    u32 r1_5 = *global_0084a234;
    u32 r4 = r9;
    gptr<Local_002d7d7c_ea_11> ea_11 = gptr<Local_002d7d7c_ea_11>(frame.at(0x38).addr());  // (from the original)
    ea_11->word_0 = r0_4;
    ea_11->word_4 = r1_5;
    do {
        u32 r1_6 = gptr<u32>(r10)[r4];
        u32 r0_5 = frame->word_0;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        u32 r0_6 = call_0056878c(r0_5, r1_6, r2, r3);
        frame->word_10 = r0_6;
        u32 r0_8 = call_004b4fc0(frame->word_0, gptr<u32>(r11)[r4], 1u);
        frame->word_14 = r0_8;
        u32 r6_2 = r5 + r4 * 0xe0u + 0x2354u;  // (from the original)
        frame->word_24 = r4;
        frame->word_20 = r9;
        call_002b6a00(r6_2, frame.at(0x10).addr());  // (from the original)
        call_002f7508(r7, r6_2, 1u);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    gptr<Local_002d7d7c_r4_1> r4_1 = gptr<Local_002d7d7c_r4_1>(r5 + 0x2500u);  // (from the original)
    *gptr<u32>(r5 + 0x2420u) = 0x1000480;  // (from the original)
    *gptr<u8>(r5 + 0x242eu) = u8(r8);  // (from the original)
    u32 r1_9 = 0x1000480u - u32(s32(0x2420u) >> 0xc);  // (from the original)
    gptr<Local_002d7d7c_r0_9> r0_9 = gptr<Local_002d7d7c_r0_9>(r5 + 0x2354u);  // (from the original)
    r0_9->word_d0 = r1_9;
    r0_9->byte_db = u8(r8);
    r0_9->byte_dc = u8(r8);
    r4_1->word_0 = r1_9 | u32(s32(r1_9) >> 0x18);  // (from the original)
    *gptr<u8>(r5 + 0x250eu) = u8(r8);  // (from the original)
    gptr<Local_002d7d7c_r0_10> r0_10 = gptr<Local_002d7d7c_r0_10>(r5 + 0x2434u);  // (from the original)
    r0_10->word_d0 = r1_9;
    r0_10->byte_db = u8(r8);
    r0_10->byte_dc = u8(r8);
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_002f6a30(r7, 0u);
    *gptr<u32>(r7 + 0xd4u) = *gptr<u32>(r7 + 0xd4u) & ~8u;  // (from the original)
    r4_1->half_e4 = 3;
}

}  // namespace d_002d7d7c
GUEST_EXPORT_FRAMED(0x002d7d7c, d_002d7d7c::f_002d7d7c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002d9aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002d9aa0 {

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuExplainPlate = 0x008f3030u;
inline constexpr u32 vtable_BsMenuExplainPlate_at_28 = 0x008f30a0u;
inline constexpr u32 vtable_BsMenuExplainPlate_at_a4 = 0x008f31a4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x003170d0, u32(u32)> call_003170d0;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_002d9aa0(gptr<BsMenuExplainPlate> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_a4 = vtable_BsMenuExplainPlate_at_a4;
    arg0->word_0 = vtable_BsMenuExplainPlate;
    arg0->word_28 = vtable_BsMenuExplainPlate_at_28;
    u32 r4_1 = arg0.addr() + 0x2990u;  // (from the original)
    arg0->word_25f8 = vtable_ComButton1Lyt;
    arg0->word_2a74 = vtable_Control1Button_at_e4;
    arg0->word_2990 = vtable_Control1Button;
    call_002f76ac(arg0.addr() + 0x2aa8u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    call_002f770c(r4_1);
    arg0->word_25f8 = vtable_ComButtonLytBase;
    u32 r0_3 = call_00567ef0(r4_1 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_5 = call_005bf744(r0_3 - 0x14cu);  // (from the original)
    call_002f7710(r0_5 - 0xe8u);  // (from the original)
    call_002f76ac(r0_5 - 0x2a8u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    call_002f76ac(r0_5 - 0xe48u, 0x200a2cu, 0x3e0u, 3u);  // (from the original)
    call_002f76ac(r0_5 - 0x1af0u, 0x2b7f50u, 0x21cu, 6u);  // (from the original)
    call_0056988c(r0_5 - 0x1b80u);  // (from the original)
    call_0056988c(r0_5 - 0x1ba8u);  // (from the original)
    u32 r0_13 = call_005bf744(r0_5 - 0x1cf4u);  // (from the original)
    call_0056988c(r0_13 - 0x28u);  // (from the original)
    call_0056988c(r0_13 - 0x50u);  // (from the original)
    u32 r0_17 = call_005bf744(r0_13 - 0x19cu);  // (from the original)
    call_0056988c(r0_17 - 0x28u);  // (from the original)
    call_0056988c(r0_17 - 0x50u);  // (from the original)
    call_0056988c(r0_17 - 0x78u);  // (from the original)
    call_0056988c(r0_17 - 0xa0u);  // (from the original)
    call_0056988c(r0_17 - 0xc8u);  // (from the original)
    u32 r0_24 = call_005bf744(r0_17 - 0x214u);  // (from the original)
    u32 r0_26 = call_00567ef0(r0_24 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    u32 r0_28 = call_00567ef0(r0_26 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    call_003170d0(r0_28 - 0xa0u);  // (from the original)
    frame.release();
    return call_006aaa30(r0_28 - 0xc8u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002d9aa0
GUEST_EXPORT(0x002d9aa0, d_002d9aa0::f_002d9aa0);

// f_002da33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002da33c {

struct __attribute__((packed)) Object_002da33c_0 {
    u8 unknown_0[0x6b4];  // (not used here)
    u32 word_6b4;
    u8 unknown_6b8[0xee];  // (not used here)
    u8 byte_7a6;
    u8 byte_7a7;
    u8 byte_7a8;
};
GUEST_OFFSET(Object_002da33c_0, word_6b4, 0x6b4);
GUEST_OFFSET(Object_002da33c_0, byte_7a6, 0x7a6);
GUEST_OFFSET(Object_002da33c_0, byte_7a7, 0x7a7);
GUEST_OFFSET(Object_002da33c_0, byte_7a8, 0x7a8);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568c10, u32(u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;

u32 f_002da33c(gptr<Object_002da33c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0_2 = call_004b4fc0(arg0.addr() + 0x50u, 0x2da3a0u, 1u, r3);  // (from the original)
    call_00568630(arg0.addr() + 0x50u, arg0.addr() + 0x3e4u, r0_2, 0u);  // (from the original)
    float S0_2 = 0.0f;
    guest::cpu()->s[0] = S0_2;
    call_005697e0(arg0.addr() + 0x3e4u);  // (from the original)
    call_00568c10(arg0.addr() + 0x50u);  // (from the original)
    arg0->word_6b4 = arg0->word_6b4 | 8u;
    arg0->byte_7a6 = 0;
    arg0->byte_7a8 = 1;
    arg0->byte_7a7 = 1;
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_002da33c
GUEST_EXPORT_FRAMED(0x002da33c, d_002da33c::f_002da33c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002da424: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002da424 {

struct __attribute__((packed)) Object_002da424_0 {
    u8 unknown_0[0x7a7];  // (not used here)
    u8 byte_7a7;
    u8 byte_7a8;
};
GUEST_OFFSET(Object_002da424_0, byte_7a7, 0x7a7);
GUEST_OFFSET(Object_002da424_0, byte_7a8, 0x7a8);

inline constexpr guest::Function<0x002f6b14, u32(u32)> call_002f6b14;
inline constexpr guest::Function<0x002f6e14, u32(u32)> call_002f6e14;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00569544, u32(u32, u32)> call_00569544;
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> call_0074fdd0;

void f_002da424(gptr<Object_002da424_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_7 = 0;
    u32 r0_9 = 0;
    u32 r1_1 = arg0->byte_7a7;
    if (r1_1 != 0) {
        if (arg0->byte_7a8 == 1u) {
            u32 r0_2 = call_0074fdd0(r0 + 0x3e4u, r1_1, r2, r3);  // (from the original)
            if (r0_2 != 0) {
                u32 r0_4 = call_004b4fc0(r0 + 0x50u, 0x84ac28u, 1u);  // (from the original)
                call_00568984(r0_4, r0 + 0x3e4u, r0_4, 0u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                goto L_2da49c;
            }
            frame.release();
            call_00569544(r0 + 0x3e4u, guest::cpu()->r[1]);
            return;  // (from the original)
        }
        r0_7 = call_0074fdd0(r0 + 0x40cu, r1_1, r2, r3);  // (from the original)
        if (r0_7 == 0) {
            frame.release();
            call_00569544(r0 + 0x40cu, guest::cpu()->r[1]);
            return;  // (from the original)
        }
        r0_9 = call_004b4fc0(r0 + 0x50u, 0x84ac28u, 1u);  // (from the original)
        call_00568984(r0 + 0x50u, r0 + 0x40cu, r0_9, 0u);  // (from the original)
        call_002f6e14(r0 + 0x5e0u);  // (from the original)
        call_002f6b14(r0 + 0x5e0u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
L_2da49c:;
        *gptr<u32>(r0 + 0x6b4u) = *gptr<u32>(r0 + 0x6b4u) & ~8u;  // (from the original)
        *gptr<u8>(r0 + 0x7a6u) = 1;  // (from the original)
        *gptr<u8>(r0 + 0x7a7u) = 0;  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_002da424
GUEST_EXPORT(0x002da424, d_002da424::f_002da424);

// f_002db05c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db05c {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x002f7804, u32(u32, u32, u32, u32)> call_002f7804;
inline constexpr guest::Function<0x0032069c, u32(u32, u32)> call_0032069c;
inline constexpr guest::Function<0x003206bc, u32(u32, u32, u32)> call_003206bc;
inline constexpr guest::Function<0x0070bd30, u32(u32)> call_0070bd30;
inline constexpr guest::Function<0x0070bd74, u32(u32, u32, u32)> call_0070bd74;
inline constexpr guest::Function<0x00712838, u32(u32, u32)> call_00712838;
inline constexpr guest::Function<0x00712850, u32(u32, u32)> call_00712850;
inline constexpr guest::Function<0x0072382c, u32(u32, u32, u32, u32)> call_0072382c;

u32 f_002db05c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r0 + 0x20acu;  // (from the original)
    u32 r0_2 = call_0072382c(r0_1, r1, r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        frame.release();
        return call_002f7804(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    if (s32(r1) >= 0 && r1 < 0xau) {  // (from the original)
        u32 r6_1 = *global_00aaf14c + 0x2cu;  // (from the original)
        u32 r0_3 = call_00712850(r6_1, r1 & 0xffu);  // (from the original)
        u32 r0_4 = call_00712838(r6_1, r0_3);
        u32 r4_1 = r0 + (r1 * 9u + (r1 << 5) << 4);
        u32 r1_3 = *gptr<u32>(r4_1 + 0x988u);  // (from the original)
        call_0070bd74(r0_4, r1_3, 1u);
        u32 r4_2 = r4_1 + 0x70cu;  // (from the original)
        call_003206bc(r4_2, r1_3, 1u);
        u32 r0_5 = call_0070bd30(r0_4);
        frame.release();
        return call_0032069c(r4_2, r0_5);
    }
    return r0_2;
}

}  // namespace d_002db05c
GUEST_EXPORT(0x002db05c, d_002db05c::f_002db05c);

// f_002db118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db118 {

struct __attribute__((packed)) Local_002db118_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002db118_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_002db118_ea_2, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_21u_ = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32)> call_0056d5dc;
inline constexpr guest::Function<0x005d4a68, u32(u32)> call_005d4a68;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> call_005e49c0;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> call_005e8498;
inline constexpr guest::Function<0x0071af38, u32(u32, u32, u32, u32)> call_0071af38;
inline constexpr guest::Function<0x00720448, u32(u32, u32)> call_00720448;

struct __attribute__((packed)) Frame_002db118 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x40];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0x28];  // (not read or written by name)
    u32 word_7c;
    u8 unknown_80[0x8c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002db118, word_0, 0x0);
GUEST_OFFSET(Frame_002db118, word_4, 0x4);
GUEST_OFFSET(Frame_002db118, word_8, 0x8);
GUEST_OFFSET(Frame_002db118, word_c, 0xc);
GUEST_OFFSET(Frame_002db118, word_50, 0x50);
GUEST_OFFSET(Frame_002db118, word_7c, 0x7c);
GUEST_SIZE(Frame_002db118, 0x10c);

void f_002db118(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002db118> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r0_2 = call_0071af38(r0 + 0x4b4u, r1, r2, r3);  // (from the original)
    u32 r0_3 = call_00720448(r5, r0_2);
    call_0056d5dc(frame.at(0xc).addr(), r0_3);  // (from the original)
    call_005e8498(r5 + 0x5000u, frame.at(0xc).addr());  // (from the original)
    call_00301d0c(frame.at(0xa8).addr(), 0x5e35dcu, 0x20u, 3u);  // (from the original)
    u32 r4 = 0u;
    frame->word_8 = 7;
    frame->word_0 = r4;
    frame->word_4 = r4;
    call_005e34c4(frame.at(0xa8).addr(), 0x852400u, 0x34u, r4);  // (from the original)
    frame->word_8 = 9;
    u32 r6 = frame.at(0xa8).addr();  // (from the original)
    frame->word_0 = r4;
    frame->word_4 = 1;
    call_005e34c4(frame.at(0xc8).addr(), 0x852400u, 0x33u, 0u);  // (from the original)
    frame->word_0 = r4;
    gptr<Local_002db118_ea_2> ea_2 = gptr<Local_002db118_ea_2>(frame.at(4).addr());
    ea_2->word_0 = 2;
    ea_2->word_4 = 1;
    call_005e34c4(r6 + 0x40u, 0x852400u, 0xbu, 0u);  // (from the original)
    call_005e49c0(r5 + 0x5000u, 3u, 2u);  // (from the original)
    r3 = guest::cpu()->r[3];
    do {
        call_005e4994(r5 + 0x5000u, r4, r6 + (r4 << 5), r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 3u);
    call_005e4988(r5 + 0x5000u, guest::cpu()->r[1], guest::cpu()->r[2], r3);  // (from the original)
    call_005d4a68(r5 + 0x5000u);  // (from the original)
    call_005d4a78(r5 + 0x5000u, 0u, 0u, 0u);  // (from the original)
    call_002f76ac(frame.at(0xa8).addr(), 0x5e3618u, 0x20u, 3u);  // (from the original)
    frame->word_7c = vtable_script__WordFix_9u_;
    frame->word_50 = vtable_script__WordFix_9u_;
    frame->word_c = vtable_script__WordFix_21u_;
}

}  // namespace d_002db118
GUEST_EXPORT_FRAMED(0x002db118, d_002db118::f_002db118, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002db340: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002db340 {

inline constexpr u32 vtable_script__WordFix_21u_ = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32)> call_0056d5dc;
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32)> call_005e49c0;
inline constexpr guest::Function<0x005e8498, u32(u32, u32)> call_005e8498;
inline constexpr guest::Function<0x00720448, u32(u32, u32)> call_00720448;
inline constexpr guest::Function<0x0072355c, u32(u32, u32, u32, u32)> call_0072355c;

struct __attribute__((packed)) Frame_002db340 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x40];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0x28];  // (not read or written by name)
    u32 word_7c;
    u8 unknown_80[0x68];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002db340, word_0, 0x0);
GUEST_OFFSET(Frame_002db340, word_4, 0x4);
GUEST_OFFSET(Frame_002db340, word_8, 0x8);
GUEST_OFFSET(Frame_002db340, word_c, 0xc);
GUEST_OFFSET(Frame_002db340, word_50, 0x50);
GUEST_OFFSET(Frame_002db340, word_7c, 0x7c);
GUEST_SIZE(Frame_002db340, 0xe8);

void f_002db340(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002db340> frame;  // the original's stack frame
    u32 r5 = r0;
    u32 r0_2 = call_0072355c(r0 + 0x4b4u, r1, r2, r3);  // (from the original)
    u32 r0_3 = call_00720448(r5, r0_2);
    call_0056d5dc(frame.at(0xc).addr(), r0_3);  // (from the original)
    call_005e8498(r5 + 0x5000u, frame.at(0xc).addr());  // (from the original)
    call_00301d0c(frame.at(0xa8).addr(), 0x5e35dcu, 0x20u, 2u);  // (from the original)
    u32 r4 = 0u;
    frame->word_8 = 7;
    frame->word_0 = r4;
    frame->word_4 = r4;
    call_005e34c4(frame.at(0xa8).addr(), 0x852400u, 0x54u, r4);  // (from the original)
    frame->word_4 = 1;
    frame->word_8 = 1;
    u32 r6 = frame.at(0xa8).addr();  // (from the original)
    frame->word_0 = r4;
    call_005e34c4(frame.at(0xc8).addr(), 0x852400u, 0xbu, 0u);  // (from the original)
    call_005e49c0(r5 + 0x5000u, 2u, 1u);  // (from the original)
    r3 = guest::cpu()->r[3];
    do {
        call_005e4994(r5 + 0x5000u, r4, r6 + (r4 << 5), r3);  // (from the original)
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    call_005e4988(r5 + 0x5000u, guest::cpu()->r[1], guest::cpu()->r[2], r3);  // (from the original)
    call_005d4a78(r5 + 0x5000u, 0u, 0u, 0u);  // (from the original)
    call_002f76ac(frame.at(0xa8).addr(), 0x5e3618u, 0x20u, 2u);  // (from the original)
    frame->word_7c = vtable_script__WordFix_9u_;
    frame->word_50 = vtable_script__WordFix_9u_;
    frame->word_c = vtable_script__WordFix_21u_;
}

}  // namespace d_002db340
GUEST_EXPORT_FRAMED(0x002db340, d_002db340::f_002db340, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002dc90c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dc90c {

struct __attribute__((packed)) Local_002dc90c_r0_12 {
    u32 word_0;
    u8 unknown_4[0xa3c];  // (not used here)
    u32 word_a40;
};
GUEST_OFFSET(Local_002dc90c_r0_12, word_0, 0x0);
GUEST_OFFSET(Local_002dc90c_r0_12, word_a40, 0xa40);

struct __attribute__((packed)) Local_002dc90c_r4_3 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002dc90c_r4_3, word_0, 0x0);
GUEST_OFFSET(Local_002dc90c_r4_3, word_c, 0xc);

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_BsMenuMyDesignKeep = 0x008f32a4u;
inline constexpr u32 vtable_BsMenuMyDesignKeep_at_28 = 0x008f3310u;
inline constexpr u32 vtable_BsMenuMyDesignKeep_at_a4 = 0x008f3414u;
inline constexpr u32 vtable_ChangeStockMyDesign = 0x008f3ef4u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_a40 = 0x008f3f20u;
inline constexpr u32 vtable_ChangeStockMyDesign_at_1888 = 0x008f3f34u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x002684c0, u32(u32)> call_002684c0;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x003170d0, u32(u32)> call_003170d0;
inline constexpr guest::Function<0x00317dec, u32(u32)> call_00317dec;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_002dc90c(gptr<BsMenuMyDesignKeep> arg0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->word_28 = vtable_BsMenuMyDesignKeep_at_28;
    arg0->word_0 = vtable_BsMenuMyDesignKeep;
    arg0->word_a4 = vtable_BsMenuMyDesignKeep_at_a4;
    u32 r0_2 = call_005e8a7c(arg0.addr() + 0x5000u, 0x8f3310u, 0x8f32a4u, 0x8f3414u);  // (from the original)
    *gptr<u32>(r0_2 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_3 = r0_2 - 0xd4u;  // (from the original)
    call_005e3194(r0_3, 0x8f47a0u);  // (from the original)
    u32 r0_4 = r0_3 - 0x28u;  // (from the original)
    call_0056988c(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    call_0056988c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_005bf744(r0_5 - 0x15cu);  // (from the original)
    u32 r0_9 = call_00567ef0(r0_7 - 0x24cu);  // (from the original)
    call_002f76ac(r0_9 - 0x568u, 0x2b6ef8u, 0xe0u, 6u);  // (from the original)
    u32 r0_11 = (r0_9 - 0x4b34u) + 0x44e8u;  // (from the original)
    call_002f7710(r0_11, guest::cpu()->r[1]);
    gptr<Local_002dc90c_r0_12> r0_12 = gptr<Local_002dc90c_r0_12>(r0_11 - 0x243cu);  // (from the original)
    r0_12->word_a40 = vtable_ChangeStockMyDesign_at_a40;
    r0_12->word_0 = vtable_ChangeStockMyDesign;
    *gptr<u32>(r0_12.addr() + 0x1888u) = vtable_ChangeStockMyDesign_at_1888;  // (from the original)
    u32 r0_13 = r0_12.addr() + 0x22f4u;  // (from the original)
    *gptr<u32>(r0_13) = vtable_DragIconGroup;
    u32 r0_14 = r0_13 + 0xcu;  // (from the original)
    *gptr<u32>(r0_14) = vtable_DragIconGroup_at_c;
    u32 r0_15 = r0_14 + 0x108u;  // (from the original)
    call_0056988c(r0_15, 0x1888u, 0x8f3f20u, 0x8f3ef4u);  // (from the original)
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    call_0056988c(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    call_0056988c(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    call_0056988c(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    call_0056988c(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    call_0056988c(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x2cu;  // (from the original)
    call_0056988c(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f76ac(r0_21 - 0xa60u, 0x320b0cu, 0x290u, 4u);  // (from the original)
    u32 r0_23 = (r0_21 - 0x2314u) + 0x18acu;  // (from the original)
    call_00317dec(r0_23);
    u32 r0_25 = call_002684c0(r0_23 - 0x18acu);  // (from the original)
    call_002f76ac(r0_25 - 0x19a0u, 0x320b0cu, 0x290u, 0xau);  // (from the original)
    gptr<Local_002dc90c_r4_3> r4_3 = gptr<Local_002dc90c_r4_3>(r0_25 - 0x1ae0u);  // (from the original)
    u32 r0_27 = r4_3.addr() + 0x114u;  // (from the original)
    r4_3->word_0 = vtable_DragIconGroup;
    r4_3->word_c = vtable_DragIconGroup_at_c;
    call_0056988c(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_28 = r0_27 - 0x28u;  // (from the original)
    call_0056988c(r0_28, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_29 = r0_28 - 0x28u;  // (from the original)
    call_0056988c(r0_29, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_30 = r0_29 - 0x28u;  // (from the original)
    call_0056988c(r0_30, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_31 = r0_30 - 0x28u;  // (from the original)
    call_0056988c(r0_31, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_32 = r0_31 - 0x28u;  // (from the original)
    call_0056988c(r0_32, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_33 = r0_32 - 0x2cu;  // (from the original)
    call_0056988c(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 ea_1 = r0_33 - 0x138u;  // (from the original)
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    call_002f7710(ea_1, 0x8f08acu);  // (from the original)
    u32 r0_34 = ea_1 - 0x28u;  // (from the original)
    call_0056988c(r0_34, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_35 = r0_34 - 0x28u;  // (from the original)
    call_0056988c(r0_35, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_36 = r0_35 - 8u;
    call_00317dec(r0_36);
    u32 r0_38 = call_005bf744(r0_36 - 0x14cu);  // (from the original)
    u32 r0_40 = call_00567ef0(r0_38 - 0x248u);  // (from the original)
    u32 r0_41 = r0_40 - 0xa0u;  // (from the original)
    call_003170d0(r0_41);
    frame.release();
    return call_006aaa30(r0_41 - 0x28u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002dc90c
GUEST_EXPORT(0x002dc90c, d_002dc90c::f_002dc90c);

// f_002ddbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ddbac {

inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_ChangeStockRental = 0x008f270cu;
inline constexpr u32 vtable_ItemDragIconGroup = 0x008f2a0cu;
inline constexpr u32 vtable_ItemDragIconGroup_at_c = 0x008f2a1cu;
inline constexpr u32 vtable_BsMenuRentalHaniwa = 0x008f3428u;
inline constexpr u32 vtable_BsMenuRentalHaniwa_at_28 = 0x008f3494u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr guest::Function<0x0022c5d8, u32(u32)> call_0022c5d8;
inline constexpr guest::Function<0x0026fe3c, u32(u32)> call_0026fe3c;
inline constexpr guest::Function<0x002b79e8, u32(u32)> call_002b79e8;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_002ddbac(gptr<BsMenuRentalHaniwa> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuRentalHaniwa;
    arg0->word_28 = vtable_BsMenuRentalHaniwa_at_28;
    arg0->word_ad54 = vtable_ItemSelectNameWindow;
    u32 r0_1 = arg0.addr() + 0xb170u;  // (from the original)
    call_005e3194(r0_1, 0x8f47a0u, 0x8f3494u, r3);  // (from the original)
    u32 r0_2 = r0_1 - 0x28u;  // (from the original)
    call_0056988c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_3 = r0_2 - 0x28u;  // (from the original)
    call_0056988c(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_5 = call_005bf744(r0_3 - 0x15cu);  // (from the original)
    u32 r0_7 = call_00567ef0(r0_5 - 0x24cu);  // (from the original)
    u32 ea_1 = r0_7 - 0x13cu;  // (from the original)
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    call_002f7710(ea_1, 0x8f08acu);  // (from the original)
    u32 r0_9 = call_0026fe3c(ea_1 - 0x8468u);  // (from the original)
    u32 r0_10 = r0_9 - 0x2788u;  // (from the original)
    *gptr<u32>(r0_10) = vtable_ChangeStockRental;
    u32 r0_11 = r0_10 + 0x25a0u;  // (from the original)
    *gptr<u32>(r0_11) = vtable_ItemDragIconGroup;
    u32 r0_12 = r0_11 + 0xcu;  // (from the original)
    *gptr<u32>(r0_12) = vtable_ItemDragIconGroup_at_c;
    u32 r0_13 = r0_12 + 0x1acu;  // (from the original)
    call_0056988c(r0_13, 0x8f2a1cu, 0x8f2a0cu);  // (from the original)
    u32 r0_14 = r0_13 - 0x28u;  // (from the original)
    call_0056988c(r0_14, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_15 = r0_14 - 0x28u;  // (from the original)
    call_0056988c(r0_15, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_16 = r0_15 - 0x28u;  // (from the original)
    call_0056988c(r0_16, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_17 = r0_16 - 0x140u;  // (from the original)
    call_0022c5d8(r0_17);
    call_002f76ac(r0_17 - (0x36cu << 3), 0x2b950cu, 0x36cu, 8u);  // (from the original)
    u32 r0_19 = call_002b79e8(r0_17 - 0x25a0u);  // (from the original)
    frame.release();
    return call_006aaa30(r0_19 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002ddbac
GUEST_EXPORT(0x002ddbac, d_002ddbac::f_002ddbac);

// f_002dfa20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dfa20 {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_BsMenuSendMailLand = 0x008f3514u;
inline constexpr u32 vtable_BsMenuSendMailLand_at_28 = 0x008f3580u;
inline constexpr u32 vtable_ItemSelectNameWindow = 0x008f47a0u;
inline constexpr u32 vtable_LetterDragPostWindow = 0x008f47ecu;
inline constexpr u32 vtable_LetterDragPostWindow_at_213c = 0x008f4814u;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x0027460c, u32(u32)> call_0027460c;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;

u32 f_002dfa20(gptr<BsMenuSendMailLand> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuSendMailLand;
    arg0->word_28 = vtable_BsMenuSendMailLand_at_28;
    u32 r0_2 = call_005e8a7c(arg0.addr() + 0x5420u, 0x8f3514u, 0x8f3580u, r3);  // (from the original)
    *gptr<u32>(r0_2 - 0x4f0u) = vtable_ItemSelectNameWindow;  // (from the original)
    u32 r0_3 = r0_2 - 0xd4u;  // (from the original)
    call_005e3194(r0_3, 0x8f47a0u);  // (from the original)
    u32 r0_4 = r0_3 - 0x28u;  // (from the original)
    call_0056988c(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x28u;  // (from the original)
    call_0056988c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_005bf744(r0_5 - 0x15cu);  // (from the original)
    u32 r0_9 = call_00567ef0(r0_7 - 0x24cu);  // (from the original)
    u32 ea_1 = r0_9 - 0x13cu;  // (from the original)
    *gptr<u32>(ea_1) = vtable_DragIconControl_rec;
    call_002f7710(ea_1, guest::cpu()->r[1]);
    u32 r0_10 = ea_1 - 0x21d8u;  // (from the original)
    *gptr<u32>(r0_10) = vtable_LetterDragPostWindow;
    *gptr<u32>(r0_10 + 0x213cu) = vtable_LetterDragPostWindow_at_213c;  // (from the original)
    u32 r0_11 = r0_10 + 0x21b0u;  // (from the original)
    call_0056988c(r0_11, 0x8f47ecu, 0x8f4814u, 0x213cu);  // (from the original)
    u32 r0_12 = r0_11 - 0x28u;  // (from the original)
    call_0056988c(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = r0_12 - 0x28u;  // (from the original)
    call_0056988c(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 - 0x2160u;  // (from the original)
    *gptr<u32>(r0_14) = vtable_LetterDragWindowBase;
    u32 r0_15 = r0_14 + 0x201cu;  // (from the original)
    *gptr<u32>(r0_15) = vtable_DragIconControl_rec;
    call_002f7710(r0_15, 0x8f4828u);  // (from the original)
    *gptr<u32>(r0_15 - 0x134u) = vtable_DragIconGroup_at_c;  // (from the original)
    *gptr<u32>(r0_15 - 0x140u) = vtable_DragIconGroup;  // (from the original)
    u32 r0_16 = r0_15 - 0x2cu;  // (from the original)
    call_0056988c(r0_16, 0x8ee258u, 0x8ee248u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_17 = r0_16 - 0x28u;  // (from the original)
    call_0056988c(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = r0_17 - 0x28u;  // (from the original)
    call_0056988c(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = r0_18 - 0x28u;  // (from the original)
    call_0056988c(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = r0_19 - 0x28u;  // (from the original)
    call_0056988c(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    call_0056988c(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = r0_21 - 0x2cu;  // (from the original)
    call_0056988c(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f76ac(r0_22 - 0x1b28u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    u32 r0_24 = r0_22 - 0x1b54u;  // (from the original)
    call_0056988c(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = call_005bf744(r0_24 - 0x150u);  // (from the original)
    u32 r0_28 = call_00567ef0(r0_26 - 0x248u);  // (from the original)
    u32 r0_30 = call_0027460c(r0_28 - 0x2c04u);  // (from the original)
    frame.release();
    return call_006aaa30(r0_30 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_002dfa20
GUEST_EXPORT(0x002dfa20, d_002dfa20::f_002dfa20);

// f_002dfbf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002dfbf0 {


u32 f_002dfbf0(gptr<ButtonActionNodeEx> arg0) {
    u32 r3_1 = *gptr<u32>(arg0->word_0 + 0x1cu);  // (from the original)
    // virtual function 7 of arg0.addr() (ButtonActionNodeEx)
    return guest::call_address<u32>(r3_1, arg0.addr(), 0u, 0u, r3_1);
}

}  // namespace d_002dfbf0
GUEST_EXPORT(0x002dfbf0, d_002dfbf0::f_002dfbf0);
