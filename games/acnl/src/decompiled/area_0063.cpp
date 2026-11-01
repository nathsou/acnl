// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00630148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00630148 {


u32 f_00630148(u32 r0) {
    if (r0 >= 7u) {
        r0 = 0u;
    }
    u32 r0_1 = (r0 << 2) + 0x89515cu;  // (from the original)
    float S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    guest::cpu()->r[1] = 0x89515cu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_00630148
GUEST_EXPORT(0x00630148, d_00630148::f_00630148);

// f_006310c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006310c0 {

struct __attribute__((packed)) Object_006310c0_0 {
    u8 unknown_0[0x308];  // (not used here)
    u8 byte_308;
};
GUEST_OFFSET(Object_006310c0_0, byte_308, 0x308);

inline constexpr guest::Function<0x005707f0, u32(u32, u32, u32, u32)> call_005707f0;

void f_006310c0(gptr<Object_006310c0_0> arg0) {
    arg0->byte_308 = 1;
    float S0_1 = -10.0f;
    guest::cpu()->s[0] = S0_1;
    call_005707f0(arg0.addr(), 0x1fu, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_006310c0
GUEST_EXPORT(0x006310c0, d_006310c0::f_006310c0);

// f_00631cc0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00631cc0 {

struct __attribute__((packed)) Object_00631cc0_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00631cc0_1, word_68, 0x68);


u32 f_00631cc0(u32 r0_unused, gptr<Object_00631cc0_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r0 = *gptr<u16>(arg1->word_68 + 0x70u);  // (from the original)
    if (r2 >= 7u) {
        r2 = 0x842614u;  // (from the original)
        r1 = 0u;
        u32 r3 = r2 + 0xeu;  // (from the original)
        for (;;) {
            r1 += 1u;
            r2 += 2u;
            r3 += 2u;
            if (!(s32(r1) < 7)) {
                break;
            }
            if (r1 != 0 && (*gptr<u16>(r2) == r0 || *gptr<u16>(r3) == r0)) {
                guest::cpu()->r[1] = r1;
                return 1u;
            }
            guest::preempt();
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = *gptr<u16>((r2 << 1) + 0x842614u);  // (from the original)
    if (r1_1 == r0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r1_2 = *gptr<u16>((r2 << 1) + 0x842622u);  // (from the original)
    if (r1_2 != r0) {
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00631cc0
GUEST_EXPORT(0x00631cc0, d_00631cc0::f_00631cc0);

// f_00631d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00631d5c {

struct __attribute__((packed)) Local_00631d5c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00631d5c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00631d5c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_00631d5c_r0_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Local_00631d5c_r0_1, word_4, 0x4);

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32)> call_00632904;

u32 f_00631d5c(u32 r0, gptr<AcNpcNml> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r6_1 = r1;
    gptr<Local_00631d5c_r0_1> r0_1 = gptr<Local_00631d5c_r0_1>(arg1->word_102c);
    if (r0_1.addr() != 0) {
        r0_1 = gptr<Local_00631d5c_r0_1>(call_00318944(r0_1.addr() + 0x28u, r1, r2, r3));  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r4_1 = r0_1.addr();
        if (r0_1.addr() != 0) {
            r0_1 = gptr<Local_00631d5c_r0_1>(call_00632904(r0, r6_1, r0_1.addr()));
            r1 = guest::cpu()->r[1];
            if (r4_1 < 7u) {
                u32 ea_1 = (r4_1 << 3) + 0x842630u;  // (from the original)
                r0_1 = gptr<Local_00631d5c_r0_1>(ea_1);
                r1 = *gptr<u32>(ea_1);
                if (r1 == 0) {
                    u32 r2_1 = r0_1->word_4;
                    if ((r2_1 & 1u) == 0 || r2_1 == 0) {
                        guest::cpu()->r[1] = r1;
                        return r0_1.addr();
                    }
                }
                u32 r2_2 = r0_1->word_4;
                r0_1 = gptr<Local_00631d5c_r0_1>(0u);
                gptr<Local_00631d5c_ea_2> ea_2 = gptr<Local_00631d5c_ea_2>(r0 + 0x14u);  // (from the original)
                ea_2->word_0 = r1;
                ea_2->word_4 = r2_2;
                *gptr<u8>(r0 + 0x38u) = u8(r0_1.addr());  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1.addr();
}

}  // namespace d_00631d5c
GUEST_EXPORT_FRAMED(0x00631d5c, d_00631d5c::f_00631d5c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006322a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006322a0 {

struct __attribute__((packed)) Object_006322a0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u8 byte_3c;
};
GUEST_OFFSET(Object_006322a0_0, byte_3c, 0x3c);

inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> call_00632428;

u32 f_006322a0(gptr<Object_006322a0_0> arg0, u32 r1) {
    if (arg0->byte_3c != 0) {
        call_00632428(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    arg0->byte_3c = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_006322a0
GUEST_EXPORT_FRAMED(0x006322a0, d_006322a0::f_006322a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006323d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006323d8 {

inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;
inline constexpr guest::Function<0x00632488, u32(u32, u32, u32, u32)> call_00632488;

u32 f_006323d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = r1;
    u32 r0_1 = call_00632488(r0, r1, r2, r3);
    if (r0_1 == 0) {
        r5_1 = 0u;
    }
    call_0051ddb8(r0, r5_1, 0xffffu & (r2 << 8) - ((r2 << 5) - r2) << 3, r3);  // (from the original)
    *gptr<u8>(r0 + 0x39u) = 1;  // (from the original)
    return 1u;
}

}  // namespace d_006323d8
GUEST_EXPORT_FRAMED(0x006323d8, d_006323d8::f_006323d8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00632428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632428 {

struct __attribute__((packed)) Object_00632428_0 {
    u8 unknown_0[0x28];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_00632428_0, word_28, 0x28);
GUEST_OFFSET(Object_00632428_0, word_2c, 0x2c);
GUEST_OFFSET(Object_00632428_0, word_34, 0x34);

inline constexpr guest::Function<0x002e5b08, u32(u32, u32)> call_002e5b08;
inline constexpr guest::Function<0x002e6450, u32(u32, u32, u32, u32)> call_002e6450;
inline constexpr guest::Function<0x0072079c, u32(u32, u32, u32, u32)> call_0072079c;

u32 f_00632428(gptr<Object_00632428_0> arg0, u32 r1) {
    u32 r0_2 = 0;
    u32 r5_1 = ~0u;
    if (r1 == 0) {
        r0_2 = call_0072079c(arg0.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_4 = call_002e5b08(arg0.addr() + 0x1cu, r1);  // (from the original)
            arg0->word_34 = r5_1;
            return r0_4;
        }
    } else {
        r0_2 = arg0->word_28;
        if (r0_2 != 0) {
            r1 = arg0->word_2c;
            r0_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
            if (r1 == r0_2) {
                r0_2 = call_002e6450(arg0.addr() + 0x1cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
            }
        }
        arg0->word_34 = r5_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00632428
GUEST_EXPORT_FRAMED(0x00632428, d_00632428::f_00632428, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00632488: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632488 {

inline guest::global<u8, 0x0094daac> global_0094daac;
inline guest::global<u8, 0x0094daad> global_0094daad;
inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x0011a391, u32(u32)> call_0011a390;
inline constexpr guest::Function<0x0011a7df, u32(u32, u32)> call_0011a7de;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> call_002ff8b0;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;
inline constexpr guest::Function<0x00305f2c, u32(u32, u32)> call_00305f2c;
inline constexpr guest::Function<0x00313440, u32(u32)> call_00313440;

u32 f_00632488(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = *global_0094daac;
    if (r1_1 != 0) {
        r0_1 = s8(*global_0094daad);
    } else {
        r1_1 = 0u;
        *global_0094daac = 1;
        *global_0094daad = u8(r1_1);
        u32 r0_2 = *gptr<u8>(r0 + 0x3bu);  // (from the original)
        if (r0_2 == 0) {
            u32 r0_3 = call_002fc900(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 == 0) {
                u32 r0_4 = call_00305f2c(r0_3, r1_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 3u) {
                    u32 r4_1 = *global_00aaf14c;
                    if (r4_1 == 0) {
                        *global_0094daad = 1;
                        return 1u;
                    }
                    u32 r0_5 = call_002f74c8(0xaaef18u, r1_1);  // (from the original)
                    u32 r0_6 = call_00313440(r0_5);
                    u32 r0_7 = call_002fb328(r0_6);
                    u32 r0_9 = call_003009a8(r0_7 + 0x292a4u, r0_6);  // (from the original)
                    if (r0_9 != 0) {
                        u32 r0_10 = call_0011a390(r0_9);
                        r1_1 = guest::cpu()->r[1];
                        if (r0_10 != 0) {
                            *global_0094daad = 1;
                            return 1u;
                        }
                    }
                    u32 r0_11 = *gptr<u8>((r4_1 + 0x8f77u) + 0x11u);  // (from the original)
                    r1_1 = r0_11 << 0x19;  // (from the original)
                    if (r1_1 >> 0x1f) {  // (from the original)
                        u32 res_1 = r0_11 >> 7;
                        u32 zf_1 = res_1 == 0;
                        r1_1 = res_1;
                        if (zf_1) {
                            zf_1 = r0_6 == (r0_11 >> 2u & 0xfu);  // (from the original)
                        }
                        if (zf_1) {
                            *global_0094daad = 1;
                            guest::cpu()->r[1] = r1_1;
                            return 1u;
                        }
                    }
                    if (u32(*gptr<u8>(r4_1 + 0x5705u)) & 4u || r0_9 == 0) {  // (from the original)
                        *global_0094daad = 1;
                        guest::cpu()->r[1] = r1_1;
                        return 1u;
                    }
                    u32 r0_12 = call_002ff8b0(4u);
                    u32 r0_13 = call_0011a7de(r0_9, r0_12);
                    r1_1 = guest::cpu()->r[1];
                    if (r0_13 == 0) {
                        *global_0094daad = 1;
                        return 1u;
                    }
                }
            }
        }
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00632488
GUEST_EXPORT_FRAMED(0x00632488, d_00632488::f_00632488, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00632594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632594 {

struct __attribute__((packed)) Object_00632594_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_00632594_1, word_68, 0x68);

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;
inline constexpr guest::Function<0x002e66c0, u32(u32, u32, u32, u32)> call_002e66c0;
inline constexpr guest::Function<0x0070ac68, u32(u32, u32, u32, u32)> call_0070ac68;

struct __attribute__((packed)) Frame_00632594 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00632594, word_0, 0x0);
GUEST_OFFSET(Frame_00632594, word_4, 0x4);
GUEST_OFFSET(Frame_00632594, word_8, 0x8);
GUEST_SIZE(Frame_00632594, 0x1c);

void f_00632594(u32 r0, gptr<Object_00632594_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_00632594> frame;  // the original's stack frame
    u32 r0_1 = arg1->word_68;
    u32 r0_2 = call_0070ac68(r0_1, frame.at(0xc).addr(), *gptr<u32>(r0_1 + 0xb4u), 1u);  // (from the original)
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = *gptr<u32>(r0 + 0x28u);  // (from the original)
    if (r0_3 != 0 && *gptr<u32>(r0 + 0x2cu) == *gptr<u32>(r0_3 + 0xcu) && *gptr<u32>(r0 + 0x34u) == r2) {  // (from the original)
        frame->word_0 = 1;
        call_002e66c0(r0 + 0x1cu, frame.at(0xc).addr(), 0x975beeu, 0xae5664u);  // (from the original)
        return;
    }
    frame->word_8 = 0;
    frame->word_4 = 1;
    frame->word_0 = 0xae5664;  // (from the original)
    call_002073dc(r0 + 0x1cu, r2, frame.at(0xc).addr(), 0x975beeu);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = r2;  // (from the original)
}

}  // namespace d_00632594
GUEST_EXPORT_FRAMED(0x00632594, d_00632594::f_00632594, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00632648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00632648 {

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;
inline constexpr guest::Function<0x00632428, u32(u32, u32, u32, u32)> call_00632428;
inline constexpr guest::Function<0x00632904, u32(u32, u32, u32)> call_00632904;

u32 f_00632648(u32 r0, gptr<AcNpcNml> arg1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4_1 = r1;
    u32 r0_1 = arg1->word_102c;
    if (r0_1 != 0) {
        r0_1 = call_00318944(r0_1 + 0x28u, r1, r2, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            call_00632904(r0, r4_1, 0u);
            frame.release();
            return call_00632428(r0, r2, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00632648
GUEST_EXPORT(0x00632648, d_00632648::f_00632648);

// f_00636bf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00636bf0 {

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;
inline constexpr guest::Function<0x005e3550, u32(u32, u32, u32, u32)> call_005e3550;
inline constexpr guest::Function<0x00603a28, u32(u32, u32, u32)> call_00603a28;

struct __attribute__((packed)) Frame_00636bf0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00636bf0, word_0, 0x0);
GUEST_OFFSET(Frame_00636bf0, word_4, 0x4);
GUEST_OFFSET(Frame_00636bf0, word_8, 0x8);
GUEST_SIZE(Frame_00636bf0, 0x34);

u32 f_00636bf0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00636bf0> frame;  // the original's stack frame
    u32 r0_1 = call_002ff6f8(3u, r1, r2, r3);
    frame->word_0 = 0;
    frame->word_4 = 8;
    frame->word_8 = 0;
    call_005e3550(frame.at(0x10).addr(), 0x841c7cu, r0_1 + 0x1au, 0u);  // (from the original)
    u32 r0_3 = *gptr<u32>(r0 + 4u);
    u32 r1_1 = *gptr<u32>(r1);
    *gptr<u32>(r1) = r1_1 + 1u;
    call_00603a28(r0_3, r1_1, frame.at(0x10).addr());  // (from the original)
    return frame.at(0x10).addr();  // (from the original)
}

}  // namespace d_00636bf0
GUEST_EXPORT_FRAMED(0x00636bf0, d_00636bf0::f_00636bf0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0063ca1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063ca1c {

struct __attribute__((packed)) Object_0063ca1c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x181];  // (not used here)
    u8 byte_275;
};
GUEST_OFFSET(Object_0063ca1c_0, word_f0, 0xf0);
GUEST_OFFSET(Object_0063ca1c_0, byte_275, 0x275);

struct __attribute__((packed)) Local_0063ca1c_r4_1 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_3, 0x3);
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_4, 0x4);
GUEST_OFFSET(Local_0063ca1c_r4_1, byte_5, 0x5);

struct __attribute__((packed)) Local_0063ca1c_r6_2 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_0063ca1c_r6_2, half_0, 0x0);
GUEST_OFFSET(Local_0063ca1c_r6_2, byte_4, 0x4);
GUEST_OFFSET(Local_0063ca1c_r6_2, byte_5, 0x5);

inline constexpr guest::Function<0x0011ac4d, u32(u32, u32, u32, u32)> call_0011ac4c;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x00318fbc, u32(u32, u32, u32)> call_00318fbc;
inline constexpr guest::Function<0x004e3a7c, u32(u32, u32, u32, u32)> call_004e3a7c;

struct __attribute__((packed)) Frame_0063ca1c {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x38];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0063ca1c, word_0, 0x0);
GUEST_OFFSET(Frame_0063ca1c, word_4, 0x4);
GUEST_OFFSET(Frame_0063ca1c, word_8, 0x8);
GUEST_OFFSET(Frame_0063ca1c, word_c, 0xc);
GUEST_OFFSET(Frame_0063ca1c, word_10, 0x10);
GUEST_SIZE(Frame_0063ca1c, 0x4c);

u32 f_0063ca1c(gptr<Object_0063ca1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0063ca1c> frame;  // the original's stack frame
    u32 r5_2 = 0;
    u32 r5_1 = r1;
    if (r1 < 0x10u) {  // (from the original)
        gptr<Local_0063ca1c_r4_1> r4_1 = gptr<Local_0063ca1c_r4_1>(arg0.addr() + 0x270u);  // (from the original)
        arg0->byte_275 = 4;
        u32 r0_1 = arg0->word_f0;
        if (r0_1 == 0) {
        } else {
            u32 r0_2 = r0_1 + 0x1000u;  // (from the original)
            u32 r6_1 = *gptr<u32>(r0_2 + 0x28u);  // (from the original)
            u32 r0_3 = call_002fb94c(r0_2, 4u, r2, r3);
            r1 = guest::cpu()->r[1];
            u32 zf_1 = r6_1 == 0;
            if (!zf_1) {
                zf_1 = r0_3 == 0;
            }
            if (zf_1) {
                return 0u;
            }
            if (s32(r5_1) >= 0xc) {  // (from the original)
                frame->word_4 = 1;
                frame->word_0 = r5_1;
                u32 r0_4 = call_0011ac4c(r6_1, frame.at(8).addr(), frame.at(0xc).addr(), frame.at(0x10).addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                if (r0_4 == 0) {
                    return 0u;
                }
                r4_1->byte_3 = u8(frame->word_8);
                r4_1->byte_4 = u8(frame->word_c);
                r4_1->byte_5 = u8(frame->word_10);
                return 1u;
            }
            u32 r2_2 = *gptr<s8>(r6_1 + 0x24f0u);  // (from the original)
            call_00318fbc(frame.at(0).addr(), 0x48u, r2_2);  // (from the original)
            gptr<Local_0063ca1c_r6_2> r6_2 = gptr<Local_0063ca1c_r6_2>(frame.at(0).addr() + (r5_1 + (r5_1 << 1) << 1));
            u32 r0_6 = r6_2->half_0;
            if (r0_6 == 0x6000u) {  // (from the original)
                r5_2 = 1u;
            } else {
                u32 r0_7 = r0_6 - 0x6001u;  // (from the original)
                r5_2 = r0_7 == 0 ? 3u : r0_7 == 1u ? 0u : r0_7 == 2u ? 2u : 4u;
            }
            u32 r2_3 = r6_2->byte_5;
            u32 r1_2 = r6_2->byte_4;
            u32 r0_9 = call_004e3a7c(r0_3 + 0x8d78u, r1_2, r2_3, r5_2);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_9 == 0) {
                return 0u;
            }
            r4_1->byte_3 = u8(u32(r6_2->byte_4));
            r4_1->byte_4 = u8(u32(r6_2->byte_5));
            r4_1->byte_5 = u8(r5_2);
            return 1u;
        }
        call_002fb94c(r0_1, 4u, r2, r3);
        r1 = guest::cpu()->r[1];
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0063ca1c
GUEST_EXPORT_FRAMED(0x0063ca1c, d_0063ca1c::f_0063ca1c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0063cb74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063cb74 {

struct __attribute__((packed)) Object_0063cb74_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x44];  // (not used here)
    u8 byte_138;
    u8 unknown_139[0x141];  // (not used here)
    u8 byte_27a;
    u8 unknown_27b[0x5];  // (not used here)
    u8 byte_280;
};
GUEST_OFFSET(Object_0063cb74_0, word_f0, 0xf0);
GUEST_OFFSET(Object_0063cb74_0, byte_138, 0x138);
GUEST_OFFSET(Object_0063cb74_0, byte_27a, 0x27a);
GUEST_OFFSET(Object_0063cb74_0, byte_280, 0x280);

struct __attribute__((packed)) Local_0063cb74_r6_1 {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Local_0063cb74_r6_1, half_70, 0x70);

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;
inline constexpr guest::Function<0x0030b6b8, u32(u32)> call_0030b6b8;
inline constexpr guest::Function<0x0030f594, u32(u32)> call_0030f594;
inline constexpr guest::Function<0x00335214, u32(u32, u32, u32)> call_00335214;
inline constexpr guest::Function<0x0051ca3c, u32(u32, u32, u32, u32)> call_0051ca3c;
inline constexpr guest::Function<0x005be180, u32(u32, u32)> call_005be180;
inline constexpr guest::Function<0x007d0f40, u32(u32, u32)> call_007d0f40;

u32 f_0063cb74(gptr<Object_0063cb74_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_280;
    gptr<Local_0063cb74_r6_1> r6_1 = gptr<Local_0063cb74_r6_1>(arg0.addr() + 0x200u);  // (from the original)
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            u32 r0_2 = call_0051ca3c(r0_1, r1, r2, r3);
            call_005be180(r0_2, 4u);
            u32 r1_1 = r6_1->half_70;
            call_002fcbb0(frame.at(0).addr(), r1_1);
            u32 r0_5 = call_0030f594(frame.at(0).addr());
            if (r0_5 != 0) {
                call_00304f30(frame.at(0).addr(), 1u, *gptr<u32>(arg0->word_f0 + 0x1030u), 0u);  // (from the original)
            }
            call_002fc8e8(arg0.addr() + 0x130u, frame.at(0).addr());  // (from the original)
            r1 = guest::cpu()->r[1];
            arg0->byte_138 = 0;
            arg0->byte_27a = 0;
            u32 r0_8 = arg0->word_f0;
            if (r0_8 != 0) {
                u32 r0_9 = *gptr<u32>(r0_8 + 0x1028u);  // (from the original)
                if (r0_9 != 0) {
                    call_002fc8e8(r0_9 + 0x249au, frame.at(0).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    u32 r0_11 = arg0->word_f0;
                    if (r0_11 != 0) {
                        u32 r0_13 = call_00335214(frame.at(4).addr(), frame.at(0).addr(), *gptr<u32>(r0_11 + 0x1030u));  // (from the original)
                        r1 = guest::cpu()->r[1];
                        if (r0_13 != 0) {
                            call_007d0f40(4u, frame.at(4).addr());
                            r1 = guest::cpu()->r[1];
                        }
                    }
                }
            }
            r0_1 = frame.at(0).addr();
        }
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    u32 r0_14 = call_0051ca3c(r0_1, r1, r2, r3);
    u32 r0_15 = arg0->word_f0;
    if (r0_15 != 0) {
        u32 r0_16 = *gptr<u32>(r0_15 + 0x1028u);  // (from the original)
        if (r0_16 != 0) {
            u32 r1_7 = r0_16 + 0x249au;  // (from the original)
            call_002fc934(frame.at(0).addr(), r1_7);
            u32 r0_19 = call_0030b6b8(frame.at(0).addr());
            r6_1->half_70 = u16(r0_19);
            call_002fc8e8(r1_7, r0_14 + 0x6cu);  // (from the original)
            u32 r0_20 = arg0->word_f0;
            if (r0_20 != 0) {
                u32 r0_22 = call_00335214(frame.at(4).addr(), r0_14 + 0x6cu, *gptr<u32>(r0_20 + 0x1030u));  // (from the original)
                if (r0_22 != 0) {
                    call_007d0f40(4u, frame.at(4).addr());
                }
            }
        }
    }
    call_005be180(r0_14, 3u);
    arg0->byte_27a = 1;
    u32 r0_24 = call_002fc8e8(arg0.addr() + 0x130u, r0_14 + 0x6cu);  // (from the original)
    arg0->byte_138 = 0;
    return r0_24;
}

}  // namespace d_0063cb74
GUEST_EXPORT_FRAMED(0x0063cb74, d_0063cb74::f_0063cb74, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063cd2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063cd2c {

struct __attribute__((packed)) Object_0063cd2c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0063cd2c_0, word_f0, 0xf0);

struct __attribute__((packed)) Local_0063cd2c_r0_6 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0063cd2c_r0_6, byte_0, 0x0);
GUEST_OFFSET(Local_0063cd2c_r0_6, byte_1, 0x1);

inline constexpr guest::Function<0x00118e25, u32(u32, u32)> call_00118e24;
inline constexpr guest::Function<0x0011a1c9, u32(u32)> call_0011a1c8;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002fb378, u32(u32)> call_002fb378;
inline constexpr guest::Function<0x00757c74, u32(u32, u32, u32)> call_00757c74;

u32 f_0063cd2c(gptr<Object_0063cd2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r0_5 = 0;
    gptr<Local_0063cd2c_r0_6> r0_6 = gptr<Local_0063cd2c_r0_6>(0u);
    u32 r1_3 = 0;
    u32 r5 = r3;
    u32 r7 = r1;
    u32 r0_1 = arg0->word_f0;
    u32 r8 = r2;
    if (r0_1 != 0) {
        u32 r0_2 = r0_1 + 0x1000u;  // (from the original)
        u32 r4_1 = *gptr<u32>(r0_2 + 0x28u);  // (from the original)
        if (r4_1 != 0) {
            u32 r0_3 = call_002fb328(r0_2, r1, r2, r3);
            u32 r6_1 = r0_3 + 0x292a4u;  // (from the original)
            u32 r0_4 = call_00118e24(r6_1, r4_1);
            if (r0_4 != 0 && *gptr<u8>(r6_1 + 0x1739fu) < 3u) {  // (from the original)
                r0 = 0u;
                goto L_63cda0;
            }
            r0_5 = call_0011a1c8(r4_1);
            if (r0_5 == 0) {
                goto L_63cdc8;
            } else {
                r0 = 1u;
            }
L_63cda0:;
            r0_6 = gptr<Local_0063cd2c_r0_6>((r0 << 1) + 0x841a0du);  // (from the original)
            r1_3 = u32(s8(r0_6->byte_0)) + r5;
            *gptr<u32>(r7) = r1_3;
            *gptr<u32>(r8) = u32(s8(r0_6->byte_1)) + r5;
            guest::cpu()->r[1] = r1_3;
            return 1u;
L_63cdc8:;
            u32 r0_7 = call_002fb378(r0_5);
            u32 r0_9 = call_00757c74(r4_1 + 0x250au, r0_7, 1u);  // (from the original)
            if (s32(r0_9) >= 7) {
                if (s32(r0_9) < 0xe) {  // (from the original)
                    r0 = 3u;
                    guest::preempt();
                    goto L_63cda0;
                }
                r0 = s32(r0_9) < 0x1e ? 4u : 5u;  // (from the original)
                guest::preempt();
                goto L_63cda0;
            }
            r0 = 2u;
            guest::preempt();
            goto L_63cda0;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0063cd2c
GUEST_EXPORT_FRAMED(0x0063cd2c, d_0063cd2c::f_0063cd2c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063d364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063d364 {

struct __attribute__((packed)) Local_0063d364_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0063d364_r4_1, word_0, 0x0);

inline constexpr guest::Function<0x0024b7b8, u32(u32, u32)> call_0024b7b8;
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x005b96a8, u32(u32, u32)> call_005b96a8;
inline constexpr guest::Function<0x005bb2a0, u32(u32, u32)> call_005bb2a0;
inline constexpr guest::Function<0x006f0130, u32(u32, u32)> call_006f0130;
inline constexpr guest::Function<0x007241b0, u32(u32, u32)> call_007241b0;
inline constexpr guest::Function<0x007559ac, u32(u32, u32, u32, u32)> call_007559ac;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> call_00755a98;

u32 f_0063d364(u32 r0, u32 r1, u32 r2) {
    u32 r0_3 = 0;
    u32 r5_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    gptr<Local_0063d364_r4_1> r4_1 = gptr<Local_0063d364_r4_1>(r1);
    u32 r5_1 = 0u;
    u32 r0_1 = call_007559ac(r2, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0x60u) {  // (from the original)
        u32 r0_2 = call_00755a98(r2, r1);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 1u) {
            if (r0_2 == 2u) {
                if (*gptr<u8>(r0 + 0x272u) != 2u) {  // (from the original)
                    goto L_63d410;
                }
                goto L_63d3e0;
            }
            if (r0_2 == 3u) {
                r0_3 = 0xaaef18u;  // (from the original)
                r5_2 = *gptr<u32>(r0_3 + 0x234u);  // (from the original)
                if (r5_2 == 0) {
                    goto L_63d418;
                }
                r0_3 = call_007241b0(r5_2 + 0x6bd0u, r1);  // (from the original)
                r1 = guest::cpu()->r[1];
                if (s32(r0_3) < 0) {
                    goto L_63d418;
                }
                goto L_63d410;
            }
            if (r0_2 != 4u) {
                guest::cpu()->r[1] = r1;
                return r5_1;
            }
            goto L_63d46c;
        }
        if (*gptr<u8>(r0 + 0x272u) != 0) {  // (from the original)
            goto L_63d410;
        }
        goto L_63d3e0;
L_63d3cc:;
        guest::cpu()->r[1] = r1;
        return 1u;
L_63d3e0:;
        r4_1->word_0 = 1;
        guest::preempt();
        goto L_63d3cc;
L_63d410:;
        r4_1->word_0 = 0;
        guest::preempt();
        goto L_63d3cc;
L_63d418:;
        r4_1->word_0 = 1;
        r0_5 = call_002fae84(r0_3, r1);
        r0_6 = call_002fb310(r0_5);
        r1_2 = *gptr<u8>(r0 + 0x270u);  // (from the original)
        r0_7 = r0_6 + 0x1744cu;  // (from the original)
        r0_8 = call_005bb2a0(r0_7, r1_2);
        r1_3 = r5_2 + 0x55a6u;  // (from the original)
        call_005b96a8(r0_8, r1_3);
        call_006f0130(0xfu, 1u);  // (from the original)
        call_0024b7b8(0x16u, 1u);  // (from the original)
        r1 = guest::cpu()->r[1];
        guest::preempt();
        goto L_63d3cc;
L_63d46c:;
        u32 r0_9 = *gptr<u8>(r0 + 0x274u);  // (from the original)
        r5_1 = 1u;
        if (r0_9 != 0) {
            r0_9 = 1u;
        }
        r4_1->word_0 = r0_9;
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_0063d364
GUEST_EXPORT_FRAMED(0x0063d364, d_0063d364::f_0063d364, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0063da4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0063da4c {

struct __attribute__((packed)) Object_0063da4c_0 {
    u8 unknown_0[0x270];  // (not used here)
    u16 half_270;
    u8 unknown_272[0x2];  // (not used here)
    u8 byte_274;
};
GUEST_OFFSET(Object_0063da4c_0, half_270, 0x270);
GUEST_OFFSET(Object_0063da4c_0, byte_274, 0x274);

struct __attribute__((packed)) Object_0063da4c_2 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0063da4c_2, byte_0, 0x0);

inline constexpr guest::Function<0x00116ebf, u32(u32, u32, u32, u32)> call_00116ebe;
inline constexpr guest::Function<0x002390f8, u32(u32, u32, u32)> call_002390f8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe419, u32(u32)> call_002fe418;

void f_0063da4c(gptr<Object_0063da4c_0> arg0, u32 r1, gptr<Object_0063da4c_2> arg2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r2 = arg2.addr();
    arg0->half_270 = 0x7ffe;  // (from the original)
    arg0->byte_274 = u8(r1);
    if (r1 == 0 || r1 != 1u && r1 != 2u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 zf_1 = r2 == 0;
    if (!zf_1) {
        r2 = arg2->byte_0;
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1;
        return;
    }
    call_00116ebe(frame.at(0).addr(), 5u, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_002fe418(frame.at(0).addr());
    if (r0_3 >= 5u) {
        return;
    }
    u32 r1_3 = *gptr<u16>((r0_3 << 1) + 0x841980u);  // (from the original)
    *gptr<u16>(arg0.addr() + 0x270u) = u16(r1_3);  // (from the original)
    u32 r0_5 = call_002fcbb0(frame.at(0xc).addr(), r1_3);  // (from the original)
    call_002390f8(arg0.addr(), r0_5, 0u);
}

}  // namespace d_0063da4c
GUEST_EXPORT_FRAMED(0x0063da4c, d_0063da4c::f_0063da4c, 0x4030);  // pushes {r4, r5, lr} first, as the original
