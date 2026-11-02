// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002306c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002306c4 {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> call_00312ca0;
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;

struct __attribute__((packed)) Frame_002306c4 {
    u32 word_0;
    u8 unknown_4[0x44];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002306c4, word_0, 0x0);
GUEST_SIZE(Frame_002306c4, 0x48);

u32 f_002306c4(gptr<NpcSpTalkRecept> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_002306c4> frame;  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x60);  // (from the original)
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            call_00312bd0(frame.at(4).addr(), r1, r2, r3);
            frame->word_0 = 4;
            call_00312c4c(frame.at(4).addr(), r1, r3, r5_1);
            call_00312ca0(r0_2, frame.at(4).addr(), r2);
            call_00312cb0(frame.at(4).addr());
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002306c4
GUEST_EXPORT_FRAMED(0x002306c4, d_002306c4::f_002306c4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00231ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00231ad4 {

struct __attribute__((packed)) Object_00231ad4_0 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Object_00231ad4_0, byte_20, 0x20);

struct __attribute__((packed)) Object_00231ad4_1 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_00231ad4_1, word_f0, 0xf0);

inline guest::global<u32, 0x0094f3bc> global_0094f3bc;
inline constexpr guest::Function<0x0018fb98, u32(u32, u32, u32, u32)> call_0018fb98;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x00305f44, u32(u32)> call_00305f44;

struct __attribute__((packed)) Frame_00231ad4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00231ad4, word_0, 0x0);
GUEST_SIZE(Frame_00231ad4, 0x4);

void f_00231ad4(gptr<Object_00231ad4_0> arg0, gptr<Object_00231ad4_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00231ad4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r6_1 = arg1->word_f0;
    u32 r0_1 = arg0.addr() + 0x18u;  // (from the original)
    call_002fc8e8(r0_1, r2);
    arg0->byte_20 = u8(r3);
    u32 r0_2 = call_00305f44(r0_1);
    frame->word_0 = r3;
    call_0018fb98(*global_0094f3bc, r0_2, r6_1, r2);
}

}  // namespace d_00231ad4
GUEST_EXPORT_FRAMED(0x00231ad4, d_00231ad4::f_00231ad4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00236ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236ca4 {

struct __attribute__((packed)) Local_00236ca4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00236ca4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00236ca4_ea_2, word_4, 0x4);

inline guest::global<u32, 0x008812e4> global_008812e4;
inline guest::global<u32, 0x008812e8> global_008812e8;

u32 f_00236ca4(gptr<NpcTalkRecept> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r3_1 = arg0->word_1fc;
    if (r3_1 == 0) {
        u32 r0_1 = arg0->word_200;
        if ((r0_1 & 1u) == 0 || r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r2_1 = *global_008812e4;
    u32 r12_1 = *global_008812e8;
    u32 r0_2 = *gptr<u32>(arg0.addr() + 0x200u);  // (from the original)
    gptr<Local_00236ca4_ea_2> ea_2 = gptr<Local_00236ca4_ea_2>(arg0.addr() + 0x1fcu);  // (from the original)
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r12_1;
    u32 zf_1 = (r0_2 & 1u) == 0;
    u32 r0_3 = arg0.addr() + u32(s32(r0_2) >> 1);
    if (!zf_1) {
        r3_1 = *gptr<u32>(*gptr<u32>(r0_3) + r3_1);
    }
    frame.release();
    return guest::call_address<u32>(r3_1, r0_3, r1, r2, r3_1);
}

}  // namespace d_00236ca4
GUEST_EXPORT(0x00236ca4, d_00236ca4::f_00236ca4);

// f_00236d18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236d18 {

struct __attribute__((packed)) Local_00236d18_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00236d18_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00236d18_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00236d18_ea_2 {
    u32 word_0;
};
GUEST_OFFSET(Local_00236d18_ea_2, word_0, 0x0);

struct __attribute__((packed)) Local_00236d18_r0_2 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xa0];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x47];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x460];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_00236d18_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_00236d18_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_00236d18_r0_2, byte_a8, 0xa8);
GUEST_OFFSET(Local_00236d18_r0_2, word_f0, 0xf0);
GUEST_OFFSET(Local_00236d18_r0_2, byte_554, 0x554);

struct __attribute__((packed)) Local_00236d18_r0_4 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_00236d18_r0_4, byte_a8, 0xa8);
GUEST_OFFSET(Local_00236d18_r0_4, byte_554, 0x554);

inline constexpr guest::Function<0x0023a440, u32(u32, u32, u32, u32)> call_0023a440;
inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32)> call_006eb990;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32, u32)> call_00813b30;

u32 f_00236d18(gptr<NpcTalkRecept> arg0, u32 r1, u32 r2, float S0) {
    u32 r0 = arg0.addr();
    gptr<Local_00236d18_r0_2> r0_2 = gptr<Local_00236d18_r0_2>(0u);
    if ((u32(arg0->byte_226) >> 2u & 1u) == 0) {
        r0_2 = gptr<Local_00236d18_r0_2>(call_0023a440(r0 + 0xf4u, r1, r2, guest::cpu()->r[3]));  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    } else {
        guest::cpu()->s[0] = S0;
        r0_2 = gptr<Local_00236d18_r0_2>(call_00813b30(r0 + 0x224u, 0x12u, 0u, guest::cpu()->r[3]));  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
    gptr<Local_00236d18_ea_1> ea_1 = gptr<Local_00236d18_ea_1>(r0 + 0x228u);  // (from the original)
    u32 r6 = ea_1->word_0;
    u32 r7 = ea_1->word_4;
    if (!(r6 == r7)) {
        u32 r8 = 0x88069cu;  // (from the original)
        do {
            gptr<Local_00236d18_ea_2> ea_2 = gptr<Local_00236d18_ea_2>(*gptr<u32>(r6) + 0xf4u);  // (from the original)
            gptr<Local_00236d18_r0_4> r0_4 = gptr<Local_00236d18_r0_4>(*gptr<u32>(ea_2->word_0 + 0xf0u));  // (from the original)
            r1 = r0_4->byte_a8;
            u32 zf_1 = r1 == 0xcu;  // (from the original)
            if (zf_1) {
                r1 = r0_4->byte_554;
                zf_1 = r1 == 0;
            }
            if (zf_1) {
                float S0_1 = std::bit_cast<float>(*gptr<u32>(r8));
                guest::cpu()->s[0] = S0_1;
                call_006eb990(r0_4.addr() + 0x78u, 0u, 0u);  // (from the original)
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
            }
            r0_2 = gptr<Local_00236d18_r0_2>(ea_2->word_0 + 0x228u);  // (from the original)
            u32 r4 = r0_2->word_0;
            u32 r5 = r0_2->word_4;
            if (r4 != r5) {
                do {
                    r0_2 = gptr<Local_00236d18_r0_2>(*gptr<u32>(r4));
                    if (r0_2.addr() != 0) {
                        r0_2 = gptr<Local_00236d18_r0_2>(r0_2->word_f0);
                        r1 = r0_2->byte_a8;
                        if (r1 == 0xcu) {  // (from the original)
                            r1 = r0_2->byte_554;
                            if (r1 == 0) {
                                float S0_2 = std::bit_cast<float>(*gptr<u32>(r8));
                                guest::cpu()->s[0] = S0_2;
                                r0_2 = gptr<Local_00236d18_r0_2>(call_006eb990(r0_2.addr() + 0x78u, 0u, 0u));  // (from the original)
                                r1 = guest::cpu()->r[1];
                                S0 = guest::cpu()->s[0];
                            }
                        }
                    }
                    r4 += 4u;
                    guest::preempt();
                } while (r4 != r5);
            }
            r6 += 4u;
            guest::preempt();
        } while (r6 != r7);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_2.addr();
}

}  // namespace d_00236d18
GUEST_EXPORT_FRAMED(0x00236d18, d_00236d18::f_00236d18, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00236f78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00236f78 {

inline constexpr guest::Function<0x002bfadc, u32(u32, u32)> call_002bfadc;
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32)> call_002bfcfc;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fd068, u32(u32)> call_002fd068;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> call_006b7380;
inline constexpr guest::Function<0x006b8918, u32(u32, u32)> call_006b8918;

u32 f_00236f78(gptr<NpcTalkRecept> arg0, u32 r1) {
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = arg0->half_220;
    if (r0_1 == 1u) {
        u32 r0_2 = call_002fb94c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 nf_1 = r0_2 >> 0x1f;  // (from the original)
        u32 zf_1 = r0_2 == 0;
        if (!zf_1) {
            r6 = arg0->word_21c;
            nf_1 = r6 >> 0x1f;  // (from the original)
            zf_1 = r6 == 0;
        }
        if (!zf_1) {
            if (!zf_1 && nf_1 == 0u) {
                u32 r0_4 = call_002bfadc(r0_2 + 0x6bd0u, r6);  // (from the original)
                u32 r0_5 = call_002fd068(r0_4);
                call_006b7380(r0_5, r6);
            } else {
                u32 r6_1 = 0u - r6;
                u32 r0_7 = call_002bfcfc(r0_2 + 0x6bd0u, r6_1);  // (from the original)
                u32 r0_8 = call_002fd068(r0_7);
                call_006b8918(r0_8, r6_1);
            }
        }
        r1 = 0u;
        r0_1 = 2u;
        arg0->word_21c = r1;
        *gptr<u16>((arg0.addr() + 0x200u) + 0x20u) = u16(r0_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00236f78
GUEST_EXPORT_FRAMED(0x00236f78, d_00236f78::f_00236f78, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237008: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237008 {


u32 f_00237008(gptr<NpcTalkRecept> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    arg0->word_214 = r1;
    r1 = arg0->word_228;
    u32 r2 = arg0->word_22c;
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        return (r0 + 0x214u) + 0x14u;  // (from the original)
    }
    do {
        r0_2 = *gptr<u32>(*gptr<u32>(r1) + 0xf0u);  // (from the original)
        if (r0_2 != 0) {
            u32 ea_2 = r0_2 + 0xb06u;  // (from the original)
            r0_2 = ea_2;
            *gptr<u8>(r0_2) = u8(u32(*gptr<u8>(ea_2)) | 0x80u);  // (from the original)
        }
        r1 += 4u;
        guest::preempt();
    } while (r1 != r2);
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00237008
GUEST_EXPORT(0x00237008, d_00237008::f_00237008);

// f_00237a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237a1c {

inline constexpr guest::Function<0x002bfadc, u32(u32, u32)> call_002bfadc;
inline constexpr guest::Function<0x002bfcfc, u32(u32, u32)> call_002bfcfc;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fd068, u32(u32)> call_002fd068;
inline constexpr guest::Function<0x006b7380, u32(u32, u32)> call_006b7380;
inline constexpr guest::Function<0x006b8918, u32(u32, u32)> call_006b8918;

u32 f_00237a1c(gptr<NpcTalkRecept> arg0, u32 r1) {
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = arg0->half_220;
    if (r0_1 == 0) {
        u32 r0_2 = call_002fb94c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 nf_1 = r0_2 >> 0x1f;  // (from the original)
        u32 zf_1 = r0_2 == 0;
        if (!zf_1) {
            r6 = arg0->word_21c;
            nf_1 = r6 >> 0x1f;  // (from the original)
            zf_1 = r6 == 0;
        }
        if (!zf_1) {
            if (!zf_1 && nf_1 == 0u) {
                u32 r0_4 = call_002bfadc(r0_2 + 0x6bd0u, r6);  // (from the original)
                u32 r0_5 = call_002fd068(r0_4);
                call_006b7380(r0_5, r6);
            } else {
                u32 r6_1 = 0u - r6;
                u32 r0_7 = call_002bfcfc(r0_2 + 0x6bd0u, r6_1);  // (from the original)
                u32 r0_8 = call_002fd068(r0_7);
                call_006b8918(r0_8, r6_1);
            }
        }
        r1 = 0u;
        r0_1 = 2u;
        arg0->word_21c = r1;
        *gptr<u16>((arg0.addr() + 0x200u) + 0x20u) = u16(r0_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00237a1c
GUEST_EXPORT_FRAMED(0x00237a1c, d_00237a1c::f_00237a1c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237d58 {

struct __attribute__((packed)) Object_00237d58_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u32 word_1ac;
    u8 unknown_1b0[0x5f];  // (not used here)
    u8 byte_20f;
};
GUEST_OFFSET(Object_00237d58_0, word_1ac, 0x1ac);
GUEST_OFFSET(Object_00237d58_0, byte_20f, 0x20f);

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;

u32 f_00237d58(gptr<Object_00237d58_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = 0;
    if (arg0->byte_20f != 0) {
        r0_1 = 0u;
    } else {
        arg0->byte_20f = 1;
        call_0013cd00(arg0.addr() + 0x180u, guest::cpu()->r[1], ~0u, guest::cpu()->r[3]);  // (from the original)
        r0_1 = 1u;
        arg0->word_1ac = r2;
    }
    return r0_1;
}

}  // namespace d_00237d58
GUEST_EXPORT_FRAMED(0x00237d58, d_00237d58::f_00237d58, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00237dd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00237dd0 {

struct __attribute__((packed)) Object_00237dd0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00237dd0_0, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_21u_ = 0x00909d20u;
inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;
inline constexpr guest::Function<0x005f1344, u32(u32, u32)> call_005f1344;

struct __attribute__((packed)) Frame_00237dd0 {
    u32 word_0;
    u8 unknown_4[0x40];  // (not read or written by name)
    u32 word_44;
    u8 unknown_48[0x28];  // (not read or written by name)
    u32 word_70;
    u8 unknown_74[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00237dd0, word_0, 0x0);
GUEST_OFFSET(Frame_00237dd0, word_44, 0x44);
GUEST_OFFSET(Frame_00237dd0, word_70, 0x70);
GUEST_SIZE(Frame_00237dd0, 0x9c);

u32 f_00237dd0(gptr<Object_00237dd0_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_00237dd0> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            call_0056d5dc(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            call_005f1344(r0_2, frame.at(0).addr());
            frame->word_70 = vtable_script__WordFix_9u_;
            frame->word_44 = vtable_script__WordFix_9u_;
            frame->word_0 = vtable_script__WordFix_21u_;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00237dd0
GUEST_EXPORT_FRAMED(0x00237dd0, d_00237dd0::f_00237dd0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002383c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002383c0 {

struct __attribute__((packed)) Object_002383c0_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
    u8 unknown_e4[0x88];  // (not used here)
    u32 word_16c;
    u32 word_170;
    u8 unknown_174[0x8];  // (not used here)
    u32 word_17c;
    u8 unknown_180[0xcc];  // (not used here)
    u32 word_24c;
};
GUEST_OFFSET(Object_002383c0_0, word_e0, 0xe0);
GUEST_OFFSET(Object_002383c0_0, word_16c, 0x16c);
GUEST_OFFSET(Object_002383c0_0, word_170, 0x170);
GUEST_OFFSET(Object_002383c0_0, word_17c, 0x17c);
GUEST_OFFSET(Object_002383c0_0, word_24c, 0x24c);

struct __attribute__((packed)) Local_002383c0_r12_1 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(Local_002383c0_r12_1, word_e0, 0xe0);

struct __attribute__((packed)) Local_002383c0_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_002383c0_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_002383c0_r4_1, float_4, 0x4);

inline constexpr guest::Function<0x00236644, u32(u32, u32, u32, u32)> call_00236644;

struct __attribute__((packed)) Frame_002383c0 {
    float float_0;
    float float_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002383c0, float_0, 0x0);
GUEST_OFFSET(Frame_002383c0, float_4, 0x4);
GUEST_OFFSET(Frame_002383c0, word_8, 0x8);
GUEST_SIZE(Frame_002383c0, 0x10);

u32 f_002383c0(gptr<Object_002383c0_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_002383c0> frame;  // the original's stack frame
    gptr<Local_002383c0_r12_1> r12_1 = gptr<Local_002383c0_r12_1>(arg0->word_24c);
    gptr<Local_002383c0_r4_1> r4_1 = gptr<Local_002383c0_r4_1>(frame.at(0x18).addr());  // (from the original)
    float S0_1 = r4_1->float_0;
    float S1_1 = r4_1->float_4;
    if ((r12_1.addr() == 0 ? arg0->word_e0 : r12_1->word_e0) == 0) {
        arg0->word_16c = r3;
        arg0->word_17c = 0;
        arg0->word_170 = arg0.addr();
        u32 r3_1 = (r12_1.addr() == 0 ? arg0->word_e0 : r12_1->word_e0) + 1u;
        if (r12_1.addr() == 0) {
            arg0->word_e0 = r3_1;
        } else {
            r12_1->word_e0 = r3_1;
        }
    }
    frame->float_0 = S0_1;
    frame->float_4 = S1_1;
    frame->word_8 = 1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_1 = call_00236644(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], arg0.addr() + 0x168u);  // (from the original)
    return r0_1;
}

}  // namespace d_002383c0
GUEST_EXPORT_FRAMED(0x002383c0, d_002383c0::f_002383c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002389f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002389f8 {

struct __attribute__((packed)) Object_002389f8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002389f8_0, word_4, 0x4);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005f12b4, u32(u32, u32, u32)> call_005f12b4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;

u32 f_002389f8(gptr<Object_002389f8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 == 0) {
    } else {
        if (r1 >= 0xbu) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_1 = arg0->word_4;
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r5_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r5_1 == 0;
        }
        if (zf_1) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        call_005fcfd8(frame.at(0).addr(), r1, r2, r3);
        call_0075be20(r5_1, frame.at(0).addr(), 0x238a84u, r1 - 1u);  // (from the original)
        call_005f12b4(r0_2, frame.at(0).addr(), 0x238a84u);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_002389f8
GUEST_EXPORT_FRAMED(0x002389f8, d_002389f8::f_002389f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00238e10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238e10 {

struct __attribute__((packed)) Object_00238e10_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00238e10_0, word_4, 0x4);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005ca3b0, u32(u32)> call_005ca3b0;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_005f12e4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> call_0075c400;

void f_00238e10(gptr<Object_00238e10_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            call_005fcfd8(frame.at(0).addr(), r1, r2, r3);
            u32 r0_4 = call_005ca3b0(r1);
            call_0075c400(r4_1, frame.at(0).addr(), 0x238e9cu, r0_4);  // (from the original)
            call_005f12e4(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00238e10
GUEST_EXPORT_FRAMED(0x00238e10, d_00238e10::f_00238e10, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00238eac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238eac {

struct __attribute__((packed)) Object_00238eac_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00238eac_0, word_4, 0x4);

struct __attribute__((packed)) Object_00238eac_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u16 half_2c;
};
GUEST_OFFSET(Object_00238eac_1, half_2c, 0x2c);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x00a83af0> global_00a83af0;
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> call_0056d874;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_005f1294;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_00238eac {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u16 half_2c;
    u8 unknown_2e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00238eac, word_0, 0x0);
GUEST_OFFSET(Frame_00238eac, half_2c, 0x2c);
GUEST_SIZE(Frame_00238eac, 0x30);

u32 f_00238eac(gptr<Object_00238eac_0> arg0, gptr<Object_00238eac_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_00238eac> frame;  // the original's stack frame
    u32 r0_1 = call_00301e20(arg1.addr(), arg1.addr(), r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        u32 r1_2 = arg1->half_2c;
        frame->half_2c = u16(r1_2);
        u32 r0_2 = arg0->word_4;
        if (r0_2 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_3 = *gptr<u32>(r0_2 + 0x354u);  // (from the original)
        if (r0_3 == 0) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_4 = frame->half_2c;
        r1_2 = *global_00a83af0;
        u32 zf_1 = r1_2 == 0;
        u32 cf_1 = r1_2 >= 0u;
        if (!zf_1) {
            r2_1 = 0x18fu;  // (from the original)
            zf_1 = r2_1 == r0_4;
            cf_1 = r2_1 >= r0_4;
        }
        if (!cf_1 || zf_1) {
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        if ((r1_2 + r0_4 * 0x22u) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return 0u;
        }
        u32 r0_6 = call_0081e8d0(frame.at(0).addr(), r1_2, r2_1);
        call_0056d874(r0_6, frame.at(0x2c).addr());  // (from the original)
        call_005f1294(r0_3, frame.at(0).addr(), r2);
        r1_1 = vtable_script__WordFix_9u_;
        frame->word_0 = r1_1;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00238eac
GUEST_EXPORT_FRAMED(0x00238eac, d_00238eac::f_00238eac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00238f7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00238f7c {

struct __attribute__((packed)) Object_00238f7c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00238f7c_0, word_4, 0x4);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005ca3c8, u32(u32)> call_005ca3c8;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_005f12e4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075c400, u32(u32, u32, u32, u32)> call_0075c400;

void f_00238f7c(gptr<Object_00238f7c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            call_005fcfd8(frame.at(0).addr(), r1, r2, r3);
            u32 r0_4 = call_005ca3c8(r1);
            call_0075c400(r4_1, frame.at(0).addr(), 0x239008u, r0_4);  // (from the original)
            call_005f12e4(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
}

}  // namespace d_00238f7c
GUEST_EXPORT_FRAMED(0x00238f7c, d_00238f7c::f_00238f7c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002390f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002390f8 {

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_002fe874;

struct __attribute__((packed)) Frame_002390f8 {
    u32 word_0;
    u8 unknown_4[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002390f8, word_0, 0x0);
GUEST_SIZE(Frame_002390f8, 0x60);

u32 f_002390f8(gptr<AcNpcSpShop__ShopNpcTalkRecept> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_002390f8> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = call_002fe7f4(frame.at(0).addr(), r1, 0u, guest::cpu()->r[3]);
            call_002fe874(r0_2, r0_4, r2);
            frame->word_0 = vtable_script__WordFix_33u_;
            guest::cpu()->r[1] = 0x909f18u;  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002390f8
GUEST_EXPORT_FRAMED(0x002390f8, d_002390f8::f_002390f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239174 {

struct __attribute__((packed)) Object_00239174_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00239174_0, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x00a83af0> global_00a83af0;
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;
inline constexpr guest::Function<0x003009a9, u32(u32, u32)> call_003009a8;
inline constexpr guest::Function<0x00301e20, u32(u32, u32)> call_00301e20;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> call_0056d874;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_005f1294;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_00239174 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not read or written by name)
    u16 half_2c;
    u8 unknown_2e[0x2];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00239174, word_0, 0x0);
GUEST_OFFSET(Frame_00239174, half_2c, 0x2c);
GUEST_SIZE(Frame_00239174, 0x30);

u32 f_00239174(gptr<Object_00239174_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00239174> frame;  // the original's stack frame
    u32 r0_1 = call_002fb328(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_003009a8(r0_1 + 0x292a4u, r1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        u32 r4_1 = r0_3;
        r0_3 = call_00301e20(r0_3, r1_1);
        r1_1 = guest::cpu()->r[1];
        u32 r2_3 = guest::cpu()->r[2];
        if (r0_3 != 0) {
            u32 r1_2 = *gptr<u16>(r4_1 + 0x2cu);  // (from the original)
            frame->half_2c = u16(r1_2);
            u32 r0_4 = arg0->word_4;
            if (r0_4 == 0) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_5 = *gptr<u32>(r0_4 + 0x354u);  // (from the original)
            if (r0_5 == 0) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_6 = frame->half_2c;
            r1_2 = *global_00a83af0;
            u32 zf_1 = r1_2 == 0;
            u32 cf_1 = r1_2 >= 0u;
            if (!zf_1) {
                r2_3 = 0x18fu;  // (from the original)
                zf_1 = r2_3 == r0_6;
                cf_1 = r2_3 >= r0_6;
            }
            if (!cf_1 || zf_1) {
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            if ((r1_2 + r0_6 * 0x22u) == 0) {  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            u32 r0_8 = call_0081e8d0(frame.at(0).addr(), r1_2, r2_3);
            call_0056d874(r0_8, frame.at(0x2c).addr());  // (from the original)
            call_005f1294(r0_5, frame.at(0).addr(), r2);
            r1_1 = vtable_script__WordFix_9u_;
            frame->word_0 = r1_1;
            r0_3 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_00239174
GUEST_EXPORT_FRAMED(0x00239174, d_00239174::f_00239174, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239260: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239260 {

struct __attribute__((packed)) Object_00239260_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00239260_0, word_4, 0x4);

struct __attribute__((packed)) Local_00239260_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00239260_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00239260_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00239260_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00239260_ea_1, word_18, 0x18);

struct __attribute__((packed)) Local_00239260_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00239260_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_00239260_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00239260_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_00239260_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_00239260_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_00239260_ea_3, word_c, 0xc);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline guest::global<u32, 0x00a83af0> global_00a83af0;
inline constexpr guest::Function<0x0056d874, u32(u32, u32)> call_0056d874;
inline constexpr guest::Function<0x005f1294, u32(u32, u32, u32)> call_005f1294;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_00239260 {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not read or written by name)
    u16 half_30;
    u8 unknown_32[0x16];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00239260, word_0, 0x0);
GUEST_OFFSET(Frame_00239260, half_30, 0x30);
GUEST_SIZE(Frame_00239260, 0x48);

u32 f_00239260(gptr<Object_00239260_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00239260> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00239260_ea_1> ea_1 = gptr<Local_00239260_ea_1>(frame.at(0x2c).addr());  // (from the original)
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r14;
    u32 r6_1 = r2;
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_3 = frame->half_30;
            r1 = *global_00a83af0;
            u32 zf_1 = r1 == 0;
            u32 cf_1 = r1 >= 0u;
            if (!zf_1) {
                r2 = 0x18fu;  // (from the original)
                zf_1 = r2 == r0_3;
                cf_1 = r2 >= r0_3;
            }
            if (!!cf_1 && !zf_1) {
                if ((r1 + r0_3 * 0x22u) != 0) {  // (from the original)
                    u32 r0_5 = call_0081e8d0(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
                    call_0056d874(r0_5, frame.at(0x30).addr());  // (from the original)
                    call_005f1294(r0_2, frame.at(0).addr(), r6_1);
                    frame->word_0 = vtable_script__WordFix_9u_;
                    gptr<Local_00239260_ea_2> ea_2 = gptr<Local_00239260_ea_2>(frame.at(0x38).addr());  // (from the original)
                    u32 r4_1 = ea_2->word_0;
                    u32 r5_2 = ea_2->word_4;
                    u32 r6_2 = ea_2->word_8;
                    guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
                    guest::cpu()->r[4] = r4_1;
                    guest::cpu()->r[5] = r5_2;
                    guest::cpu()->r[6] = r6_2;
                    return 1u;
                }
            }
        }
    }
    gptr<Local_00239260_ea_3> ea_3 = gptr<Local_00239260_ea_3>(frame.at(0x38).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_3 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    return 0u;
}

}  // namespace d_00239260
GUEST_EXPORT(0x00239260, d_00239260::f_00239260);

// f_0023930c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023930c {

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x0056e04c, u32(u32, u32)> call_0056e04c;
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32)> call_005f12f4;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_0023930c {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0023930c, word_0, 0x0);
GUEST_SIZE(Frame_0023930c, 0x30);

u32 f_0023930c(gptr<NpcTalkRecept> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0023930c> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = call_0081e8d0(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
            call_0056e04c(r0_4, r1);
            call_005f12f4(r0_2, frame.at(0).addr(), r2);
            frame->word_0 = vtable_script__WordFix_9u_;
            guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023930c
GUEST_EXPORT_FRAMED(0x0023930c, d_0023930c::f_0023930c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239738: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239738 {

struct __attribute__((packed)) Object_00239738_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00239738_0, word_4, 0x4);

struct __attribute__((packed)) Object_00239738_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_00239738_1, byte_14, 0x14);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32)> call_005f1324;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;

u32 f_00239738(gptr<Object_00239738_0> arg0, gptr<Object_00239738_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            call_005fcfd8(frame.at(0).addr(), arg1.addr(), r2, r3);
            call_0075be20(r4_1, frame.at(0).addr(), (u32(arg1->byte_14) & 1u) == 0 ? 0x2397ccu : 0x2397dcu, r2);  // (from the original)
            call_005f1324(r0_2, frame.at(0).addr(), r3);
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_00239738
GUEST_EXPORT_FRAMED(0x00239738, d_00239738::f_00239738, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002397ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002397ec {

struct __attribute__((packed)) Object_002397ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002397ec_0, word_4, 0x4);

struct __attribute__((packed)) Object_002397ec_1 {
    u8 unknown_0[0x55ba];  // (not used here)
    u8 byte_55ba;
};
GUEST_OFFSET(Object_002397ec_1, byte_55ba, 0x55ba);

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005f1324, u32(u32, u32, u32)> call_005f1324;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;
inline constexpr guest::Function<0x007703ac, u32(u32)> call_007703ac;

void f_002397ec(gptr<Object_002397ec_0> arg0, gptr<Object_002397ec_1> arg1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            call_005fcfd8(frame.at(0).addr(), arg1.addr(), r2, r3);
            u32 r0_4 = call_007703ac(arg1.addr());
            u32 r5_1 = arg1.addr() + 0x55bau;  // (from the original)
            call_0075be20(r4_1, frame.at(0).addr(), (u32(arg1->byte_55ba) & 1u) == 0 ? 0x23988cu : 0x23989cu, r0_4);  // (from the original)
            call_005f1324(r0_2, frame.at(0).addr(), r2);
            return;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
}

}  // namespace d_002397ec
GUEST_EXPORT_FRAMED(0x002397ec, d_002397ec::f_002397ec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002398ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002398ac {

struct __attribute__((packed)) Object_002398ac_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_002398ac_1, byte_14, 0x14);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> call_00300a64;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_002398ac {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_002398ac, word_0, 0x0);
GUEST_SIZE(Frame_002398ac, 0x30);

u32 f_002398ac(gptr<NpcSpTalkRecept> arg0, gptr<Object_002398ac_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_002398ac> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = call_0081e8d0(frame.at(0).addr(), arg1.addr(), r2, guest::cpu()->r[3]);
            call_0056d488(r0_4, arg1.addr() + 2u, u32(arg1->byte_14) & 1u);
            call_00300a64(r0_2, frame.at(0).addr(), r2);
            frame->word_0 = vtable_script__WordFix_9u_;
            guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_002398ac
GUEST_EXPORT_FRAMED(0x002398ac, d_002398ac::f_002398ac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00239cd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00239cd0 {

struct __attribute__((packed)) Object_00239cd0_0 {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(Object_00239cd0_0, word_0, 0x0);
GUEST_OFFSET(Object_00239cd0_0, byte_e, 0xe);
GUEST_OFFSET(Object_00239cd0_0, half_10, 0x10);
GUEST_OFFSET(Object_00239cd0_0, half_12, 0x12);
GUEST_OFFSET(Object_00239cd0_0, byte_17, 0x17);

inline guest::global<u16, 0x009537c2> global_009537c2;
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;

u32 f_00239cd0(gptr<Object_00239cd0_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    call_0023a680(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (arg0->byte_e != 4u) {
        r0_1 = 0u;
    } else {
        arg0->byte_e = 3;
        arg0->half_12 = u16(u32(*global_009537c2));
        arg0->half_10 = u16(u32(*gptr<u16>(*gptr<u32>(arg0->word_0 + 0xf0u) + 0x2eu)));  // (from the original)
        r0_1 = 1u;
        arg0->byte_17 = u8(r1);
    }
    return r0_1;
}

}  // namespace d_00239cd0
GUEST_EXPORT_FRAMED(0x00239cd0, d_00239cd0::f_00239cd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a200 {

struct __attribute__((packed)) Object_0023a200_0 {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(Object_0023a200_0, word_0, 0x0);
GUEST_OFFSET(Object_0023a200_0, byte_e, 0xe);
GUEST_OFFSET(Object_0023a200_0, half_10, 0x10);
GUEST_OFFSET(Object_0023a200_0, half_12, 0x12);
GUEST_OFFSET(Object_0023a200_0, byte_17, 0x17);

inline guest::global<u16, 0x009537c2> global_009537c2;
inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;

u32 f_0023a200(gptr<Object_0023a200_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    call_0023a680(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (arg0->byte_e != 4u) {
        r0_1 = 0u;
    } else {
        arg0->byte_e = 1;
        arg0->half_12 = u16(u32(*global_009537c2));
        arg0->half_10 = u16(u32(*gptr<u16>(*gptr<u32>(arg0->word_0 + 0xf0u) + 0x2eu)));  // (from the original)
        r0_1 = 1u;
        arg0->byte_17 = u8(r1);
    }
    return r0_1;
}

}  // namespace d_0023a200
GUEST_EXPORT_FRAMED(0x0023a200, d_0023a200::f_0023a200, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a254: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a254 {

struct __attribute__((packed)) Object_0023a254_0 {
    u32 word_0;
    u8 unknown_4[0xa];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u16 half_10;
    u16 half_12;
    u8 unknown_14[0x3];  // (not used here)
    u8 byte_17;
};
GUEST_OFFSET(Object_0023a254_0, word_0, 0x0);
GUEST_OFFSET(Object_0023a254_0, byte_e, 0xe);
GUEST_OFFSET(Object_0023a254_0, half_10, 0x10);
GUEST_OFFSET(Object_0023a254_0, half_12, 0x12);
GUEST_OFFSET(Object_0023a254_0, byte_17, 0x17);

inline constexpr guest::Function<0x0023a680, u32(u32, u32, u32, u32)> call_0023a680;
inline constexpr guest::Function<0x007521a4, u32(u32, u32, u32)> call_007521a4;

u32 f_0023a254(gptr<Object_0023a254_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    call_0023a680(arg0.addr(), r1, r2, r3);
    u32 r0_1 = 0u;
    if (arg0->byte_e == 4u) {
        arg0->byte_e = u8(r0_1);
        arg0->half_12 = u16(r2);
        u32 r0_3 = call_007521a4(*gptr<u32>(arg0->word_0 + 0xf0u), r1, r2);  // (from the original)
        *frame.at<u32>(0) = r0_3;
        arg0->half_10 = u16(u32(*frame.at<u16>(0)));
        r0_1 = 1u;
        arg0->byte_17 = u8(r0_1);
    }
    return r0_1;
}

}  // namespace d_0023a254
GUEST_EXPORT_FRAMED(0x0023a254, d_0023a254::f_0023a254, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023a440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a440 {

struct __attribute__((packed)) Object_0023a440_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0023a440_0, word_0, 0x0);

struct __attribute__((packed)) Local_0023a440_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a440_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0023a440_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0023a440_r0_1 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_0023a440_r0_1, byte_a8, 0xa8);
GUEST_OFFSET(Local_0023a440_r0_1, byte_554, 0x554);

struct __attribute__((packed)) Local_0023a440_r0_4 {
    u8 unknown_0[0xa8];  // (not used here)
    u8 byte_a8;
    u8 unknown_a9[0x4ab];  // (not used here)
    u8 byte_554;
};
GUEST_OFFSET(Local_0023a440_r0_4, byte_a8, 0xa8);
GUEST_OFFSET(Local_0023a440_r0_4, byte_554, 0x554);

inline constexpr guest::Function<0x006eb990, u32(u32, u32, u32, u32)> call_006eb990;

u32 f_0023a440(gptr<Object_0023a440_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r6 = 0x88069cu;  // (from the original)
    u32 r1 = 0u;
    gptr<Local_0023a440_r0_1> r0_1 = gptr<Local_0023a440_r0_1>(*gptr<u32>(arg0->word_0 + 0xf0u));  // (from the original)
    if (r0_1->byte_a8 == 0xcu && r0_1->byte_554 == 0) {  // (from the original)
        float S0_1 = std::bit_cast<float>(*gptr<u32>(r6));
        guest::cpu()->s[0] = S0_1;
        call_006eb990(r0_1.addr() + 0x78u, 0u, 0u, guest::cpu()->r[3]);  // (from the original)
        S0 = guest::cpu()->s[0];
        r1 = 1u;
    }
    gptr<Local_0023a440_ea_1> ea_1 = gptr<Local_0023a440_ea_1>(*gptr<u32>(r0) + 0x228u);  // (from the original)
    u32 r4 = ea_1->word_0;
    u32 r5 = ea_1->word_4;
    if (r4 != r5) {
        do {
            u32 r0_3 = *gptr<u32>(r4);
            if (r0_3 != 0) {
                gptr<Local_0023a440_r0_4> r0_4 = gptr<Local_0023a440_r0_4>(*gptr<u32>(r0_3 + 0xf0u));  // (from the original)
                if (r0_4->byte_a8 == 0xcu && r0_4->byte_554 == 0) {  // (from the original)
                    float S0_2 = std::bit_cast<float>(*gptr<u32>(r6));
                    guest::cpu()->s[0] = S0_2;
                    call_006eb990(r0_4.addr() + 0x78u, 0u, 0u, guest::cpu()->r[3]);  // (from the original)
                    S0 = guest::cpu()->s[0];
                    r1 = 1u;
                }
            }
            r4 += 4u;
            guest::preempt();
        } while (r4 != r5);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r1;
}

}  // namespace d_0023a440
GUEST_EXPORT_FRAMED(0x0023a440, d_0023a440::f_0023a440, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023a9dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023a9dc {

struct __attribute__((packed)) Local_0023a9dc_ea_18 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_18, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_18, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_35 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_35, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_35, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_36 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_36, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_36, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_37 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_37, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_37, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_ea_44 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_ea_44, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_ea_44, word_4, 0x4);

struct __attribute__((packed)) Local_0023a9dc_r0_12 {
    u16 half_0;
    u8 byte_2;
};
GUEST_OFFSET(Local_0023a9dc_r0_12, half_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_12, byte_2, 0x2);

struct __attribute__((packed)) Local_0023a9dc_r0_13 {
    u32 word_0;
    u8 unknown_4[0x20];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 byte_30;
    u8 unknown_31[0x3];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Local_0023a9dc_r0_13, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_24, 0x24);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_28, 0x28);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_2c, 0x2c);
GUEST_OFFSET(Local_0023a9dc_r0_13, byte_30, 0x30);
GUEST_OFFSET(Local_0023a9dc_r0_13, word_34, 0x34);

struct __attribute__((packed)) Local_0023a9dc_r0_15 {
    u8 unknown_0[0xec];  // (not used here)
    u16 half_ec;
    u16 half_ee;
};
GUEST_OFFSET(Local_0023a9dc_r0_15, half_ec, 0xec);
GUEST_OFFSET(Local_0023a9dc_r0_15, half_ee, 0xee);

struct __attribute__((packed)) Local_0023a9dc_r0_3 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x10];  // (not used here)
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x2];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Local_0023a9dc_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r0_3, word_4, 0x4);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_18, 0x18);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_19, 0x19);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1a, 0x1a);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1b, 0x1b);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1c, 0x1c);
GUEST_OFFSET(Local_0023a9dc_r0_3, byte_1d, 0x1d);
GUEST_OFFSET(Local_0023a9dc_r0_3, word_20, 0x20);

struct __attribute__((packed)) Local_0023a9dc_r0_9 {
    u32 word_0;
};
GUEST_OFFSET(Local_0023a9dc_r0_9, word_0, 0x0);

struct __attribute__((packed)) Local_0023a9dc_r1_1 {
    u32 word_0;
    u8 unknown_4[0x78];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x70];  // (not used here)
    u32 word_f0;
    u8 unknown_f4[0x8];  // (not used here)
    u32 word_fc;
    u8 byte_100;
    u8 byte_101;
    u8 byte_102;
    u8 unknown_103[0x5];  // (not used here)
    u8 byte_108;
    u8 byte_109;
    u8 byte_10a;
    u8 byte_10b;
};
GUEST_OFFSET(Local_0023a9dc_r1_1, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r1_1, word_7c, 0x7c);
GUEST_OFFSET(Local_0023a9dc_r1_1, word_f0, 0xf0);
GUEST_OFFSET(Local_0023a9dc_r1_1, word_fc, 0xfc);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_100, 0x100);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_101, 0x101);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_102, 0x102);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_108, 0x108);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_109, 0x109);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_10a, 0x10a);
GUEST_OFFSET(Local_0023a9dc_r1_1, byte_10b, 0x10b);

struct __attribute__((packed)) Local_0023a9dc_r4_1 {
    u8 unknown_0[0x1c4];  // (not used here)
    u32 word_1c4;
    u8 unknown_1c8[0x28];  // (not used here)
    u8 byte_1f0;
    u8 byte_1f1;
    u8 byte_1f2;
    u8 unknown_1f3[0x2f];  // (not used here)
    u16 half_222;
    u16 half_224;
    u8 byte_226;
};
GUEST_OFFSET(Local_0023a9dc_r4_1, word_1c4, 0x1c4);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f0, 0x1f0);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f1, 0x1f1);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_1f2, 0x1f2);
GUEST_OFFSET(Local_0023a9dc_r4_1, half_222, 0x222);
GUEST_OFFSET(Local_0023a9dc_r4_1, half_224, 0x224);
GUEST_OFFSET(Local_0023a9dc_r4_1, byte_226, 0x226);

struct __attribute__((packed)) Local_0023a9dc_r8_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0023a9dc_r8_3, word_0, 0x0);
GUEST_OFFSET(Local_0023a9dc_r8_3, word_4, 0x4);

inline constexpr u32 vtable_NpcTalkRecept = 0x008ee3a0u;
inline constexpr u32 vtable_NpcTalkRecept_at_7c = 0x008ee4e8u;
inline constexpr u32 vtable_NpcTalkRecept__AsyncSaveHandleHook = 0x008fa34cu;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u32, 0x0088069c> global_0088069c;
inline guest::global<u32, 0x00881374> global_00881374;
inline guest::global<u32, 0x00881378> global_00881378;
inline guest::global<u32, 0x0088137c> global_0088137c;
inline guest::global<u32, 0x00881380> global_00881380;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;
inline constexpr guest::Function<0x003166a8, u32(u32, u32, u32, u32)> call_003166a8;
inline constexpr guest::Function<0x005dd230, u32(u32, u32)> call_005dd230;
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> call_005dd69c;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32)> call_00813b30;

u32 f_0023a9dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005dd69c(r0, r1, r2, r3);
    u32 r0_2 = r0_1 + 0x7cu;  // (from the original)
    call_005dd230(r0_2, r0_1);
    gptr<Local_0023a9dc_r1_1> r1_1 = gptr<Local_0023a9dc_r1_1>(r0_2 - 0x7cu);  // (from the original)
    r1_1->word_7c = vtable_NpcTalkRecept_at_7c;
    r1_1->word_0 = vtable_NpcTalkRecept;
    gptr<Local_0023a9dc_r0_3> r0_3 = gptr<Local_0023a9dc_r0_3>(r1_1.addr() + 0xf4u);  // (from the original)
    r1_1->word_f0 = r1;
    r0_3->word_0 = r1_1.addr();
    r0_3->word_4 = 0;
    r1_1->word_fc = 0;
    r1_1->byte_100 = 0;
    r1_1->byte_101 = 4;
    r1_1->byte_102 = 4;
    *gptr<u16>(r1_1.addr() + 0x104u) = 0;  // (from the original)
    *gptr<u16>((0x104u | u32(s32(0x104u) >> 7)) + r1_1.addr()) = 0;  // (from the original)
    r1_1->byte_108 = 0;
    r1_1->byte_109 = 0;
    r1_1->byte_10a = 0;
    r1_1->byte_10b = 1;
    r0_3->byte_18 = 0;
    r0_3->byte_19 = 0;
    r0_3->byte_1a = 0;
    r0_3->byte_1b = 0;
    r0_3->byte_1c = 5;
    r0_3->byte_1d = 2;
    u32 r2_2 = *global_0088069c;
    r0_3->word_20 = r2_2;
    u32 r0_4 = r1_1.addr() + 0x118u;  // (from the original)
    call_003166a8(r0_4, r1_1.addr(), r2_2, 5u);
    u32 r0_5 = r0_4 + 0x18u;  // (from the original)
    call_002fc934(r0_5, 0x95bfdcu);  // (from the original)
    u32 r0_6 = r0_5 + 4u;
    call_002fc934(r0_6, 0x95bfdcu);  // (from the original)
    u32 r0_7 = r0_6 - 0x1cu;  // (from the original)
    *gptr<u8>(r0_7 + 0x20u) = 0;  // (from the original)
    *gptr<u8>(r0_7 + 0x21u) = 0;  // (from the original)
    *gptr<u32>(r0_7 + 0x24u) = 0x67;  // (from the original)
    *gptr<u16>(r0_7 + 0x28u) = 0x1a;  // (from the original)
    *gptr<u16>(r0_7 + 0x2au) = 0;  // (from the original)
    *gptr<u16>(r0_7 + 0x2cu) = 0;  // (from the original)
    *gptr<u16>(r0_7 + 0x2eu) = 0;  // (from the original)
    *gptr<u16>(r0_7 + 0x30u) = 0;  // (from the original)
    *gptr<u8>(r0_7 + 0x32u) = 0;  // (from the original)
    *gptr<u8>(r0_7 + 0x33u) = 0;  // (from the original)
    u32 r1_2 = r0_7 - 0x118u;  // (from the original)
    *gptr<u32>(r0_7 + 0x34u) = 0;  // (from the original)
    u32 ea_12 = r0_7 + 0x38u;  // (from the original)
    *gptr<u8>(ea_12) = 0x17;  // (from the original)
    *gptr<u32>(ea_12 + 4u) = 0;
    *gptr<u32>(r1_2 + 0x158u) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x15cu) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x160u) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x164u) = 0;  // (from the original)
    gptr<Local_0023a9dc_ea_18> ea_18 = gptr<Local_0023a9dc_ea_18>(r1_2 + 0x168u);  // (from the original)
    ea_18->word_0 = vtable_NpcTalkRecept__AsyncSaveHandleHook;
    ea_18->word_4 = 0;
    *gptr<u32>(r1_2 + 0x170u) = 0;  // (from the original)
    *gptr<u8>(r1_2 + 0x174u) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x178u) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x17cu) = 0;  // (from the original)
    *gptr<u32>(r1_2 + 0x184u) = r1_2 + 0x18cu;  // (from the original)
    *gptr<u32>(r1_2 + 0x188u) = 0x20;  // (from the original)
    *gptr<u32>(r1_2 + 0x180u) = vtable_sead__BufferedSafeStringBase_char_;  // (from the original)
    u32 r14 = *gptr<u32>(r1_2 + 0x184u);  // (from the original)
    u32 r0_8 = r1_2 + 0x180u;  // (from the original)
    *gptr<u8>(r14 + 0x1fu) = u8(u32(*global_008c9f1c));  // (from the original)
    r14 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u32>(r1_2 + 0x180u) = r14;  // (from the original)
    *gptr<u8>(*gptr<u32>(r1_2 + 0x184u)) = u8(u32(*global_008c9f1c));  // (from the original)
    u32 r3_4 = ~0u;
    *gptr<u32>(r0_8) = vtable_sead__FixedSafeString_32_;
    gptr<Local_0023a9dc_r0_9> r0_9 = gptr<Local_0023a9dc_r0_9>(r0_8 + 0x40u);  // (from the original)
    *gptr<u32>(r1_2 + 0x1acu) = r3_4;  // (from the original)
    *gptr<u32>(r0_9.addr() + 4u) = r0_9.addr() + 0xcu;  // (from the original)
    r0_9->word_0 = vtable_sead__BufferedSafeStringBase_char_;
    *gptr<u32>(r0_9.addr() + 8u) = 0x20;  // (from the original)
    u32 r8_2 = *global_008c9f1c;
    *gptr<u8>(r0_9.addr() + 0xbu + 0x20u) = u8(r8_2);  // (from the original)
    r0_9->word_0 = r14;
    r14 = *gptr<u32>(r0_9.addr() + 4u);
    u32 r12_1 = *global_008c9f1c;
    *gptr<u8>(r14) = u8(r12_1);
    r0_9->word_0 = vtable_sead__FixedSafeString_32_;
    u32 r0_10 = r0_9.addr() - 0x1c0u;  // (from the original)
    u32 r12_2 = *global_00881374;
    r14 = *global_00881378;
    gptr<Local_0023a9dc_ea_35> ea_35 = gptr<Local_0023a9dc_ea_35>(r0_10 + 0x1f4u);  // (from the original)
    ea_35->word_0 = r12_2;
    ea_35->word_4 = r14;
    u32 r12_3 = *global_0088137c;
    r14 = *global_00881380;
    u32 r1_3 = r0_10 + 0x200u;  // (from the original)
    gptr<Local_0023a9dc_ea_36> ea_36 = gptr<Local_0023a9dc_ea_36>(r0_10 + 0x204u);  // (from the original)
    ea_36->word_0 = r3_4;
    ea_36->word_4 = 0;
    gptr<Local_0023a9dc_ea_37> ea_37 = gptr<Local_0023a9dc_ea_37>(r0_10 + 0x1fcu);  // (from the original)
    ea_37->word_0 = r12_3;
    ea_37->word_4 = r14;
    gptr<Local_0023a9dc_r8_3> r8_3 = gptr<Local_0023a9dc_r8_3>(r0_10 + 0x214u);  // (from the original)
    *gptr<u8>(r0_10 + 0x20cu) = 0;  // (from the original)
    *gptr<u8>(r0_10 + 0x20du) = 0;  // (from the original)
    *gptr<u8>(r0_10 + 0x20eu) = 0;  // (from the original)
    *gptr<u8>(r0_10 + 0x20fu) = 0;  // (from the original)
    *gptr<u8>(r0_10 + 0x210u) = 0;  // (from the original)
    *gptr<u16>(r1_3 + 0x12u) = 0;  // (from the original)
    *gptr<u32>(r0_10 + 0x21cu) = 0;  // (from the original)
    r14 = 6u;
    r8_3->word_0 = 8;
    r8_3->word_4 = r14;
    u32 r0_11 = r0_10 + 0x222u;  // (from the original)
    *gptr<u16>(r1_3 + 0x20u) = 2;  // (from the original)
    *gptr<u16>(r0_11) = 0;
    gptr<Local_0023a9dc_r0_12> r0_12 = gptr<Local_0023a9dc_r0_12>(r0_11 + 2u);
    r0_12->half_0 = 0;
    r0_12->byte_2 = 0;
    gptr<Local_0023a9dc_r0_13> r0_13 = gptr<Local_0023a9dc_r0_13>(r0_12.addr() + 4u);
    u32 r1_4 = r0_13.addr() + 0xcu;  // (from the original)
    r0_13->word_0 = r1_4;
    gptr<Local_0023a9dc_ea_44> ea_44 = gptr<Local_0023a9dc_ea_44>(r0_13.addr() + 4u);
    ea_44->word_0 = r1_4;
    ea_44->word_4 = r14;
    gptr<Local_0023a9dc_r4_1> r4_1 = gptr<Local_0023a9dc_r4_1>(r0_13.addr() - 0x228u);  // (from the original)
    r0_13->word_24 = 0;
    r0_13->word_28 = 0;
    r0_13->word_2c = 0;
    r0_13->byte_30 = 4;
    r0_13->word_34 = 0;
    *gptr<u32>(r0_13.addr() - 0x78u) = 0;  // (from the original)
    *gptr<u32>(r0_13.addr() - 0x70u) = r3_4;  // (from the original)
    *gptr<u32>(r0_13.addr() - 0x74u) = 0;  // (from the original)
    *gptr<u32>(r0_13.addr() - 0x6cu) = r3_4;  // (from the original)
    u32 r0_14 = *global_008c9f1c;
    *gptr<u8>(r4_1->word_1c4) = u8(r0_14);
    gptr<Local_0023a9dc_r0_15> r0_15 = gptr<Local_0023a9dc_r0_15>(r4_1.addr() + 0x100u);  // (from the original)
    r0_15->half_ee = 0;
    r0_15->half_ec = 0;
    r4_1->byte_1f0 = 0;
    r4_1->byte_1f1 = 0;
    r4_1->byte_1f2 = 0;
    r4_1->half_224 = 0;
    r4_1->byte_226 = 0;
    call_00813b30(r4_1.addr() + 0x224u, 0u, 0u);  // (from the original)
    call_00813b30(r4_1.addr() + 0x224u, 1u, 1u);  // (from the original)
    call_00813b30(r4_1.addr() + 0x224u, 2u, 1u);  // (from the original)
    call_00813b30(r4_1.addr() + 0x224u, 3u, 0u);  // (from the original)
    call_00813b30(r4_1.addr() + 0x224u, 0xau, 1u);  // (from the original)
    r4_1->half_222 = 0;
    return r4_1.addr();
}

}  // namespace d_0023a9dc
GUEST_EXPORT_FRAMED(0x0023a9dc, d_0023a9dc::f_0023a9dc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0023ad1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023ad1c {

inline constexpr u32 vtable_NpcTalkRecept = 0x008ee3a0u;
inline constexpr u32 vtable_NpcTalkRecept_at_7c = 0x008ee4e8u;
inline constexpr guest::Function<0x00292ca8, u32(u32)> call_00292ca8;
inline constexpr guest::Function<0x002e6944, u32(u32, u32)> call_002e6944;
inline constexpr guest::Function<0x003170d0, u32(u32, u32)> call_003170d0;
inline constexpr guest::Function<0x005dd284, u32(u32)> call_005dd284;
inline constexpr guest::Function<0x00813b30, u32(u32, u32, u32)> call_00813b30;

u32 f_0023ad1c(gptr<NpcTalkRecept> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = vtable_NpcTalkRecept_at_7c;
    arg0->word_0 = vtable_NpcTalkRecept;
    arg0->word_7c = r1_1;
    if ((u32(arg0->byte_224) >> 7) != 0) {
        call_00813b30(arg0.addr() + 0x224u, 7u, 0u);  // (from the original)
        call_00292ca8(arg0.addr() + 0x224u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if ((u32(arg0->byte_225) & 1u) != 0) {
        call_00813b30(arg0.addr() + 0x224u, 8u, 0u);  // (from the original)
        call_00292ca8(arg0.addr() + 0x224u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    call_002e6944(arg0.addr() + 0x118u, r1_1);  // (from the original)
    call_005dd284(arg0.addr() + 0x7cu);  // (from the original)
    frame.release();
    return call_003170d0(arg0.addr(), guest::cpu()->r[1]);
}

}  // namespace d_0023ad1c
GUEST_EXPORT(0x0023ad1c, d_0023ad1c::f_0023ad1c);

// f_0023adbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023adbc {

inline constexpr guest::Function<0x00290cfc, u32(u32)> call_00290cfc;
inline constexpr guest::Function<0x00292bac, u32(u32, u32)> call_00292bac;
inline constexpr guest::Function<0x00292ca8, u32(u32)> call_00292ca8;
inline constexpr guest::Function<0x005d908c, u32(u32, u32, u32, u32)> call_005d908c;
inline constexpr guest::Function<0x0075596c, u32(u32, u32)> call_0075596c;
inline constexpr guest::Function<0x00755a98, u32(u32, u32)> call_00755a98;
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32)> call_00813b80;

u32 f_0023adbc(gptr<ObjTalkRecept> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_2 = call_005d908c(r0 + 0x7cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r5_1 = r0_2;
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r0_3 = call_0075596c(r2, r1);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0x13u) {  // (from the original)
        return r5_1;
    }
    u32 r0_4 = call_00755a98(r2, r1);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_23ae28;
    }
    res_1 = u32(arg0->byte_100) >> 2u & 1u;
    if (res_1 != 0) {
        u32 r0_6 = call_00813b80(r0 + 0x100u, 2u, 0u);  // (from the original)
        call_00292ca8(r0_6);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_23ae28:;
    u32 r0_7 = call_00292bac(r0_4, r1);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        call_00813b80(r0 + 0x100u, 2u, 1u);  // (from the original)
        call_00290cfc(1u);
        r1 = guest::cpu()->r[1];
        return 1u;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_0023adbc
GUEST_EXPORT_FRAMED(0x0023adbc, d_0023adbc::f_0023adbc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023ae64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023ae64 {

struct __attribute__((packed)) Object_0023ae64_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x7c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x4];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(Object_0023ae64_0, word_0, 0x0);
GUEST_OFFSET(Object_0023ae64_0, word_4, 0x4);
GUEST_OFFSET(Object_0023ae64_0, word_84, 0x84);
GUEST_OFFSET(Object_0023ae64_0, word_8c, 0x8c);

struct __attribute__((packed)) Local_0023ae64_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0023ae64_r5_1, word_14, 0x14);
GUEST_OFFSET(Local_0023ae64_r5_1, word_18, 0x18);

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline guest::global<u32, 0x0095deac> global_0095deac;
inline constexpr guest::Function<0x005ffd94, u32(u32, u32, u32, u32)> call_005ffd94;
inline constexpr guest::Function<0x006001f0, u32(u32, u32, u32)> call_006001f0;
inline constexpr guest::Function<0x00602144, u32(u32, u32, u32, u32)> call_00602144;
inline constexpr guest::Function<0x00602938, u32(u32, u32)> call_00602938;
inline constexpr guest::Function<0x00813b80, u32(u32, u32, u32)> call_00813b80;

u32 f_0023ae64(gptr<Object_0023ae64_0> arg0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_0023ae64_r5_1> r5_1 = gptr<Local_0023ae64_r5_1>(*global_0095deac);
    if (u32(*gptr<s8>(arg0->word_8c)) == u32(s8(*global_008c9f1c))) {
        call_00602144(r5_1->word_14, arg0.addr(), r2, guest::cpu()->r[3]);
        call_00602938(arg0->word_4, 1u);
        call_00813b80(arg0.addr() + 0x100u, 1u, 1u);  // (from the original)
    } else {
        call_005ffd94(r5_1->word_18, arg0.addr() + 0x7cu, r5_1->word_14, guest::cpu()->r[3]);  // (from the original)
        call_006001f0(arg0->word_84, 0u, 0u);
    }
    u32 r1_2 = *gptr<u32>(arg0->word_0 + 0x11cu);  // (from the original)
    // virtual function 71 of arg0.addr()
    frame.release();
    return guest::call_address<u32>(r1_2, arg0.addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0023ae64
GUEST_EXPORT(0x0023ae64, d_0023ae64::f_0023ae64);

// f_0023b0d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b0d4 {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;

u32 f_0023b0d4(gptr<PosterTalkRecept> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r6_1 = *frame.at<u32>(0x28);  // (from the original)
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r4_1 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            call_005fcfd8(frame.at(0).addr(), r1, r2, r3);
            call_0075be20(r4_1, frame.at(0).addr(), r1, r2);
            call_005f11b4(r0_2, frame.at(0).addr(), r3, r6_1);
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b0d4
GUEST_EXPORT_FRAMED(0x0023b0d4, d_0023b0d4::f_0023b0d4, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0023b164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b164 {

inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;

void f_0023b164(gptr<PosterTalkRecept> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            call_005f11b4(r0_2, r1, r2, r3);
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b164
GUEST_EXPORT_FRAMED(0x0023b164, d_0023b164::f_0023b164, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b1b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b1b4 {

struct __attribute__((packed)) Object_0023b1b4_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x7c];  // (not used here)
    u32 word_84;
    u8 unknown_88[0x78];  // (not used here)
    u8 byte_100;
};
GUEST_OFFSET(Object_0023b1b4_0, word_4, 0x4);
GUEST_OFFSET(Object_0023b1b4_0, word_84, 0x84);
GUEST_OFFSET(Object_0023b1b4_0, byte_100, 0x100);

inline constexpr guest::Function<0x0075cd14, u32(u32, u32, u32, u32)> call_0075cd14;
inline constexpr guest::Function<0x0075d0f0, u32(u32)> call_0075d0f0;

u32 f_0023b1b4(gptr<Object_0023b1b4_0> arg0) {
    u32 r0_1 = arg0->word_84;
    if (r0_1 != 0) {
        u32 r0_2 = call_0075cd14(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            return 1u;
        }
    }
    if ((u32(arg0->byte_100) >> 1u & 1u) != 0) {
        return 1u;
    }
    u32 r0_3 = arg0->word_4;
    if (r0_3 == 0) {
        return r0_3;
    }
    u32 r0_4 = call_0075d0f0(r0_3);
    return r0_4 == 0;
}

}  // namespace d_0023b1b4
GUEST_EXPORT_FRAMED(0x0023b1b4, d_0023b1b4::f_0023b1b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023b248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b248 {

inline constexpr guest::Function<0x005dd570, u32(u32, u32, u32)> call_005dd570;
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;

u32 f_0023b248(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = 0x95debcu;  // (from the original)
    u32 r4_1 = *gptr<u32>(r0_1);
    if (r4_1 != 0) {
        call_005fcfd8(frame.at(0).addr(), r1, r2, r3);
        call_0075be20(r4_1, frame.at(0).addr(), r1, r2);
        call_005dd570(r0, frame.at(0).addr(), r3);
        r1 = guest::cpu()->r[1];
        r0_1 = frame.at(0).addr();
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0023b248
GUEST_EXPORT_FRAMED(0x0023b248, d_0023b248::f_0023b248, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0023b480: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b480 {

inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> call_00312ca0;
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;
inline constexpr guest::Function<0x005e32a0, u32(u32, u32, u32)> call_005e32a0;

u32 f_0023b480(gptr<DonationBoxTalkRecept> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r0_3 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            call_00312bd0(frame.at(0).addr(), r1, r2, r3);
            call_005e32a0(frame.at(0).addr(), r1, r3);
            call_00312ca0(r0_2, frame.at(0).addr(), r2);
            call_00312cb0(frame.at(0).addr());
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b480
GUEST_EXPORT_FRAMED(0x0023b480, d_0023b480::f_0023b480, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023b50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b50c {

inline constexpr u32 vtable_script__WordFix_38u_ = 0x00909fc0u;
inline guest::global<u32, 0x0095debc> global_0095debc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x0056d9cc, u32(u32, u32, u32, u32)> call_0056d9cc;
inline constexpr guest::Function<0x005f12e4, u32(u32, u32, u32)> call_005f12e4;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_0023b50c {
    u32 word_0;
    u8 unknown_4[0x64];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0023b50c, word_0, 0x0);
GUEST_SIZE(Frame_0023b50c, 0x68);

void f_0023b50c(gptr<DonationBoxTalkRecept> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0023b50c> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r8 = r2;
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        u32 zf_1 = r0_2 == 0;
        u32 r7 = r0_2;
        u32 r0_3 = *global_0095debc;
        if (!zf_1) {
            zf_1 = r0_3 == 0;
        }
        if (!zf_1) {
            u32 r0_4 = frame.at(0).addr();
            u32 r6 = r1;
            call_003083bc(r0_4, frame.at(0x18).addr(), 0x26u, r3);  // (from the original)
            u32 r5 = vtable_script__WordFix_38u_;
            *gptr<u32>(r0_4) = r5;
            u32 r0_5 = r0_4 + 0xcu;  // (from the original)
            call_005f4bfc(r0_5);
            u32 r4 = r0_5 - 0xcu;  // (from the original)
            call_002f825c(r0_5 + 0xcu, 0x4cu);  // (from the original)
            r2 = 0x8906ecu;  // (from the original)
            r0 = r4 + 0x16u;  // (from the original)
            r1 = 0x13u;  // (from the original)
            do {
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r3_3 = *gptr<u16>(r2);
                *gptr<u16>(r0 + 2u) = u16(r3_3);
                r3_4 = *gptr<u16>(r2);
                u32 ea_2 = r0 + 4u;
                *gptr<u16>(ea_2) = u16(r3_4);
                r0 = ea_2;
                guest::preempt();
            } while (res_1 != 0);
            call_0056d9cc(r4, r6, r2, r3_4);
            call_005f12e4(r7, frame.at(0).addr(), r8);
            frame->word_0 = r5;
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b50c
GUEST_EXPORT_FRAMED(0x0023b50c, d_0023b50c::f_0023b50c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0023b5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b5ec {

struct __attribute__((packed)) Object_0023b5ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b5ec_0, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_002fe874;

struct __attribute__((packed)) Frame_0023b5ec {
    u32 word_0;
    u8 unknown_4[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0023b5ec, word_0, 0x0);
GUEST_SIZE(Frame_0023b5ec, 0x60);

u32 f_0023b5ec(gptr<Object_0023b5ec_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0023b5ec> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = call_002fe7f4(frame.at(0).addr(), r1, 0u, guest::cpu()->r[3]);
            call_002fe874(r0_2, r0_4, r2);
            frame->word_0 = vtable_script__WordFix_33u_;
            guest::cpu()->r[1] = 0x909f18u;  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0023b5ec
GUEST_EXPORT_FRAMED(0x0023b5ec, d_0023b5ec::f_0023b5ec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b87c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b87c {

struct __attribute__((packed)) Object_0023b87c_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_0023b87c_1, byte_14, 0x14);

inline constexpr u32 vtable_script__WordFix_9u_ = 0x0090a3e8u;
inline constexpr guest::Function<0x00300a64, u32(u32, u32, u32)> call_00300a64;
inline constexpr guest::Function<0x0056d488, u32(u32, u32, u32)> call_0056d488;
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;

struct __attribute__((packed)) Frame_0023b87c {
    u32 word_0;
    u8 unknown_4[0x2c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0023b87c, word_0, 0x0);
GUEST_SIZE(Frame_0023b87c, 0x30);

u32 f_0023b87c(gptr<PosterTalkRecept> arg0, gptr<Object_0023b87c_1> arg1, u32 r2) {
    guest::StackFrameOf<Frame_0023b87c> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_4 = call_0081e8d0(frame.at(0).addr(), arg1.addr(), r2, guest::cpu()->r[3]);
            call_0056d488(r0_4, arg1.addr() + 2u, u32(arg1->byte_14) & 1u);
            call_00300a64(r0_2, frame.at(0).addr(), r2);
            frame->word_0 = vtable_script__WordFix_9u_;
            guest::cpu()->r[1] = 0x90a3e8u;  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = arg1.addr();
    return 0u;
}

}  // namespace d_0023b87c
GUEST_EXPORT_FRAMED(0x0023b87c, d_0023b87c::f_0023b87c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0023b900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023b900 {

struct __attribute__((packed)) Object_0023b900_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0023b900_0, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_002fe874;
inline constexpr guest::Function<0x006fad7c, u32(u32)> call_006fad7c;

struct __attribute__((packed)) Frame_0023b900 {
    u32 word_0;
    u8 unknown_4[0x58];  // (not read or written by name)
    u32 word_5c;
    u8 unknown_60[0x5c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0023b900, word_0, 0x0);
GUEST_OFFSET(Frame_0023b900, word_5c, 0x5c);
GUEST_SIZE(Frame_0023b900, 0xbc);

void f_0023b900(gptr<Object_0023b900_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_0023b900> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        u32 r0_2 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
        if (r0_2 != 0) {
            u32 r0_3 = call_002f74c8(r0_2, r1, r2, guest::cpu()->r[3]);
            u32 r0_4 = call_002f74e0(0x4000u, r0_3);  // (from the original)
            if (r0_4 != 0) {
                u32 r0_5 = call_006fad7c(r0_4);
                u32 r0_7 = call_002fe7f4(frame.at(0x5c).addr(), r1, r0_5);  // (from the original)
                call_002fe874(r0_2, r0_7, r2);
                frame->word_5c = vtable_script__WordFix_33u_;
                return;
            }
            u32 r0_9 = call_002fe7f4(frame.at(0).addr(), r1, 0u);
            call_002fe874(r0_2, r0_9, r2);
            frame->word_0 = vtable_script__WordFix_33u_;
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0023b900
GUEST_EXPORT_FRAMED(0x0023b900, d_0023b900::f_0023b900, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023bbe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023bbe4 {

struct __attribute__((packed)) Local_0023bbe4_r0_2 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_0023bbe4_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0023bbe4_r0_2, word_74, 0x74);

struct __attribute__((packed)) Local_0023bbe4_r0_3 {
    u32 word_0;
    u8 unknown_4[0xf0];  // (not used here)
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u8 byte_100;
};
GUEST_OFFSET(Local_0023bbe4_r0_3, word_0, 0x0);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_f4, 0xf4);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_f8, 0xf8);
GUEST_OFFSET(Local_0023bbe4_r0_3, word_fc, 0xfc);
GUEST_OFFSET(Local_0023bbe4_r0_3, byte_100, 0x100);

inline constexpr u32 vtable_ObjTalkRecept = 0x008ee528u;
inline constexpr u32 vtable_ObjTalkRecept_at_7c = 0x008ee650u;
inline constexpr guest::Function<0x005dd230, u32(u32, u32)> call_005dd230;
inline constexpr guest::Function<0x005dd69c, u32(u32, u32, u32, u32)> call_005dd69c;

u32 f_0023bbe4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_005dd69c(r0, r1, r2, r3);
    gptr<Local_0023bbe4_r0_2> r0_2 = gptr<Local_0023bbe4_r0_2>(r0_1 + 0x7cu);  // (from the original)
    call_005dd230(r0_2.addr(), r0_1);
    r0_2->word_74 = 0;
    r0_2->word_0 = vtable_ObjTalkRecept_at_7c;
    gptr<Local_0023bbe4_r0_3> r0_3 = gptr<Local_0023bbe4_r0_3>(r0_2.addr() - 0x7cu);  // (from the original)
    r0_3->word_0 = vtable_ObjTalkRecept;
    r0_3->word_f4 = 0;
    r0_3->word_fc = 0;
    r0_3->word_f8 = r1;
    r0_3->byte_100 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_3.addr();
}

}  // namespace d_0023bbe4
GUEST_EXPORT_FRAMED(0x0023bbe4, d_0023bbe4::f_0023bbe4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023bf10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023bf10 {

inline constexpr guest::Function<0x0035084c, u32(u32, u32, u32, u32)> call_0035084c;

u32 f_0023bf10(u32 r0) {
    u32 r0_1 = call_0035084c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 ^ 1u;
}

}  // namespace d_0023bf10
GUEST_EXPORT_FRAMED(0x0023bf10, d_0023bf10::f_0023bf10, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c544 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> call_003507b0;

u32 f_0023c544(u32 r0) {
    u32 r0_1 = call_003507b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 1u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0023c544
GUEST_EXPORT_FRAMED(0x0023c544, d_0023c544::f_0023c544, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c5e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c5e4 {

inline constexpr guest::Function<0x00350778, u32(u32, u32, u32, u32)> call_00350778;

u32 f_0023c5e4(u32 r0) {
    u32 r0_1 = call_00350778(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 ^ 1u;
}

}  // namespace d_0023c5e4
GUEST_EXPORT_FRAMED(0x0023c5e4, d_0023c5e4::f_0023c5e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c634 {

inline constexpr guest::Function<0x003507b0, u32(u32, u32, u32, u32)> call_003507b0;

u32 f_0023c634(u32 r0) {
    u32 r0_1 = call_003507b0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 == 0;
}

}  // namespace d_0023c634
GUEST_EXPORT_FRAMED(0x0023c634, d_0023c634::f_0023c634, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c65c {

inline guest::global<u8, 0x00953b14> global_00953b14;
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;
inline constexpr guest::Function<0x003508ac, u32(u32, u32, u32, u32)> call_003508ac;
inline constexpr guest::Function<0x0070f56c, u32(u32)> call_0070f56c;

u32 f_0023c65c(u32 r0) {
    u32 r0_1 = call_003508ac(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if ((r0_1 ^ 1u) != 0) {
        return 1u;
    }
    u32 r0_2 = *global_00953b14;
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = call_002fb328(r0_2);
    u32 r0_4 = *gptr<u16>(r0_3 + 0x71922u);  // (from the original)
    if ((r0_4 & 1u) == 0) {
        return 0u;
    }
    u32 r0_5 = call_002fb328(r0_4);
    u32 r0_7 = call_0070f56c(r0_5 + 0x71900u);  // (from the original)
    return r0_7 != 0;
}

}  // namespace d_0023c65c
GUEST_EXPORT_FRAMED(0x0023c65c, d_0023c65c::f_0023c65c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c6c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c6c0 {

inline constexpr guest::Function<0x0048a1b4, u32(u32, u32, u32, u32)> call_0048a1b4;

u32 f_0023c6c0(u32 r0) {
    u32 r0_1 = call_0048a1b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1 ^ 1u;
}

}  // namespace d_0023c6c0
GUEST_EXPORT_FRAMED(0x0023c6c0, d_0023c6c0::f_0023c6c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0023c730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c730 {

struct __attribute__((packed)) Object_0023c730_0 {
    u8 unknown_0[0x3e0];  // (not used here)
    u8 byte_3e0;
};
GUEST_OFFSET(Object_0023c730_0, byte_3e0, 0x3e0);

inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00568c10, u32(u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;

void f_0023c730(gptr<Object_0023c730_0> arg0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = u32(arg0->byte_3e0) - 1u;
    if (r0_1 <= 2u) {
        u32 r0_2 = r0_1 & 0xffu;  // (from the original)
        arg0->byte_3e0 = u8(r0_2);
        u32 r1_1 = gptr<u32>(0x953f0cu)[r0_2];  // (from the original)
        u32 r0_4 = call_004b4fc0(arg0.addr() + 0x24u, r1_1, 1u, r3);  // (from the original)
        call_00568630(arg0.addr() + 0x24u, arg0.addr() + 0x3b8u, r0_4, 0u);  // (from the original)
        float S0_2 = 1.0f;
        guest::cpu()->s[0] = S0_2;
        call_005697e0(arg0.addr() + 0x3b8u);  // (from the original)
        call_00568c10(arg0.addr() + 0x24u);  // (from the original)
        u32 r0_9 = call_004b4fc0(arg0.addr() + 0x24u, gptr<u32>(0x953f0cu)[u32(arg0->byte_3e0)], 1u, guest::cpu()->r[3]);  // (from the original)
        frame.release();
        call_00568984(r0_9, arg0.addr() + 0x3b8u, r0_9, 0u);
        return;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
}

}  // namespace d_0023c730
GUEST_EXPORT(0x0023c730, d_0023c730::f_0023c730);

// f_0023c860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c860 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

void f_0023c860(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_001323bc(r0);
    frame.release();
    call_00569e6c(r0_1, r0 + 0x24u, 0u);
    return;  // (from the original)
}

}  // namespace d_0023c860
GUEST_EXPORT(0x0023c860, d_0023c860::f_0023c860);

// f_0023c9c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c9c8 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;

void f_0023c9c8(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_001323b4(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    call_00132364(r0 + 0x170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0023c9c8
GUEST_EXPORT(0x0023c9c8, d_0023c9c8::f_0023c9c8);

// f_0023c9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023c9e4 {

inline constexpr guest::Function<0x00568690, u32(u32, u32, u32, u32)> call_00568690;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;

void f_0023c9e4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00568c10(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    call_00568690(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0023c9e4
GUEST_EXPORT(0x0023c9e4, d_0023c9e4::f_0023c9e4);

// f_0023cb48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023cb48 {

struct __attribute__((packed)) Object_0023cb48_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x4b7];  // (not used here)
    u32 word_4dc;
};
GUEST_OFFSET(Object_0023cb48_0, byte_24, 0x24);
GUEST_OFFSET(Object_0023cb48_0, word_4dc, 0x4dc);

struct __attribute__((packed)) Local_0023cb48_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0023cb48_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_0023cb48_r2_2, word_c, 0xc);
GUEST_OFFSET(Local_0023cb48_r2_2, word_1c, 0x1c);

inline constexpr guest::Function<0x001ce934, u32(u32, u32, u32, u32)> call_001ce934;
inline constexpr guest::Function<0x00712c28, u32(u32, u32, u32, u32)> call_00712c28;

struct __attribute__((packed)) Frame_0023cb48 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0023cb48, word_0, 0x0);
GUEST_SIZE(Frame_0023cb48, 0x4);

u32 f_0023cb48(gptr<Object_0023cb48_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0023cb48> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r1_1 = arg0->word_4dc;
    if (r1_1 != 0) {
        u32 r3_1 = arg0->byte_24;
        u32 r5_1 = 0u;
        u32 r2_1 = r3_1 & 1u;
        gptr<Local_0023cb48_r2_2> r2_2 = gptr<Local_0023cb48_r2_2>(r2_1 >= 2u ? arg0.addr() + 0x6cu : arg0.addr() + (r2_1 * 5u + (r2_1 << 6) << 2) + 0x6cu);  // (from the original)
        u32 zf_1 = r2_2->word_c + 1u == 0;
        if (!zf_1) {
            r2_2 = gptr<Local_0023cb48_r2_2>(r2_2->word_8);
            zf_1 = r2_2.addr() == 0;
        }
        if (!zf_1) {
            zf_1 = r2_2->word_1c == 0;
        }
        if (!zf_1) {
            u32 r3_2 = (r3_1 & 1u) * 5u;
            u32 ea_1 = r2_2.addr() + 0x20u;  // (from the original)
            u32 r2_3 = ea_1;
            u32 r0_1 = *gptr<u32>(ea_1);
            u32 r0_2 = r0_1 == 0 ? r5_1 : r0_1 + r2_3;
            if (r0_2 == 0) {
                r5_1 = 0u;
            } else {
                u32 ea_2 = r0_2 + 0x28u;  // (from the original)
                r2_3 = *gptr<u32>(ea_2);
                if (r2_3 != 0) {
                    r5_1 = r2_3 + ea_2;
                }
            }
            u32 r0_3 = call_00712c28(r1_1, r1_1, r2_3, r3_2);
            frame->word_0 = 2;
            call_001ce934(r5_1, *gptr<u32>((arg0.addr() + (r3_2 << 2) + 0x40u) + 0x10u), r0_3, r1);  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0023cb48
GUEST_EXPORT_FRAMED(0x0023cb48, d_0023cb48::f_0023cb48, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0023d5ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023d5ec {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;
inline constexpr guest::Function<0x0023d74c, u32(u32, u32, u32, u32)> call_0023d74c;
inline constexpr guest::Function<0x0023d99c, u32(u32, u32, u32, u32)> call_0023d99c;
inline constexpr guest::Function<0x0023e254, u32(u32, u32)> call_0023e254;
inline constexpr guest::Function<0x002fcb10, u32(u32, u32, u32, u32)> call_002fcb10;
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x00724424, u32(u32, u32, u32, u32)> call_00724424;

u32 f_0023d5ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    u32 r4 = 0u;
    u32 r8 = 0x953f68u;  // (from the original)
    u32 r0_1 = *global_00aaf14c;
    if (r0_1 != 0 && (u32(*gptr<u8>(r0_1 + 0x5712u)) & 1u) != 0) {  // (from the original)
        u32 r0_2 = call_0023d74c(r5, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r8 + 1u) = u8(r0_2);
        *gptr<u8>(r8) = u8(r0_2);
        u32 r6 = r5 + 0x6bd0u;  // (from the original)
        *gptr<u8>(r8 + 2u) = u8(r4);
        do {
            u32 r0_3 = call_00724424(r6, r4, frame.at(0).addr(), r3);
            r3 = guest::cpu()->r[3];
            if (*frame.at<u8>(0) == 0) {
                u32 r0_4 = call_002fcb10(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 r0_5 = call_002fcb34(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], r3);
                    r3 = guest::cpu()->r[3];
                    if (r0_5 == 0x98u) {  // (from the original)
                        r0_6 = *gptr<u8>(r8);
                        r1_2 = 1u;
                        if (r0_6 >= 0xau) {  // (from the original)
                            guest::cpu()->r[1] = r1_2;
                            return r0_6;
                        }
                        if ((r0_6 & 1u) != 0) {
                            r0_6 -= 1u;
                        }
                        *gptr<u8>(r8) = u8(r0_6);
                        *gptr<u8>(r8 + 2u) = u8(r1_2);
                        guest::cpu()->r[1] = r1_2;
                        return r0_6;
                    }
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        u32 r0_7 = call_0023d99c(r5, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        r1_2 = guest::cpu()->r[1];
        if (r0_7 == 0) {
            u32 r0_8 = call_0023e254(r5, r1_2);
            r1_2 = guest::cpu()->r[1];
            u32 zf_1 = r0_8 == 0;
            r0_6 = *gptr<u8>(r8);
            if (zf_1) {
                if ((r0_6 & 1u) == 0) {
                    r0_6 = 0xau;  // (from the original)
                }
                *gptr<u8>(r8) = u8(r0_6);
                return r0_6;
            }
            if (r0_6 < 0xau) {  // (from the original)
                if ((r0_6 & 1u) != 0) {
                    r0_6 -= 1u;
                }
                *gptr<u8>(r8) = u8(r0_6);
                *gptr<u8>(r8 + 2u) = 3;
                guest::cpu()->r[1] = 3u;
                return r0_6;
            }
        } else {
            r0_6 = *gptr<u8>(r8);
            if (r0_6 < 0xau) {  // (from the original)
                if ((r0_6 & 1u) != 0) {
                    r0_6 -= 1u;
                }
                r1_2 = 2u;
                *gptr<u8>(r8) = u8(r0_6);
                *gptr<u8>(r8 + 2u) = u8(r1_2);
            }
        }
        guest::cpu()->r[1] = r1_2;
        return r0_6;
    }
    *gptr<u8>(r8) = 0xa;  // (from the original)
    *gptr<u8>(r8 + 1u) = 0xa;  // (from the original)
    *gptr<u8>(r8 + 2u) = u8(r4);
    guest::cpu()->r[1] = r1;
    return 0xau;  // (from the original)
}

}  // namespace d_0023d5ec
GUEST_EXPORT_FRAMED(0x0023d5ec, d_0023d5ec::f_0023d5ec, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0023f704: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023f704 {

struct __attribute__((packed)) Local_0023f704_r0_4 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f704_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_0023f704_r0_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0023f704_r0_6 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f704_r0_6, word_18, 0x18);
GUEST_OFFSET(Local_0023f704_r0_6, word_1c, 0x1c);

inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> call_001b3300;
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32)> call_001c4c14;
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> call_0070bcdc;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;

void f_0023f704(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r8 = r1;
    u32 r0_1 = call_0070bcdc(0x98b2b8u, 0u, r2, r3);  // (from the original)
    u32 r9 = r0_1;
    u32 ea_1 = r0 + r8 * 0x21u * 0x14u + 0x7f4u;  // (from the original)
    u32 r6 = ea_1;
    call_001c4c14(frame.at(0).addr(), *gptr<u32>(ea_1));
    u32 ea_2 = r0 + r2 * 0x21u * 0x14u + 0x7f4u;  // (from the original)
    u32 r7 = ea_2;
    call_001c4c14(frame.at(0xc).addr(), *gptr<u32>(ea_2));  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r5 = 0u;
    do {
        u32 r4 = 0u;
        do {
            gptr<Local_0023f704_r0_4> r0_4 = gptr<Local_0023f704_r0_4>(*gptr<u32>(r6));
            u32 r1_3 = r0_4->word_1c;
            u32 zf_1 = r1_3 == r5;
            u32 cf_1 = r1_3 >= r5;
            if (cf_1 && !zf_1) {
                u32 r0_5 = r0_4->word_18;
                zf_1 = r0_5 == r4;
                cf_1 = r0_5 >= r4;
            }
            if (!!cf_1 && !zf_1) {
                gptr<Local_0023f704_r0_6> r0_6 = gptr<Local_0023f704_r0_6>(*gptr<u32>(r7));
                u32 r1_4 = r0_6->word_1c;
                u32 zf_2 = r1_4 == r5;
                u32 cf_2 = r1_4 >= r5;
                if (cf_2 && !zf_2) {
                    u32 r0_7 = r0_6->word_18;
                    zf_2 = r0_7 == r4;
                    cf_2 = r0_7 >= r4;
                }
                if (!!cf_2 && !zf_2) {
                    u32 r0_9 = call_0070d904(frame.at(0xc).addr(), r5, r4, r3);  // (from the original)
                    call_001c4bf4(frame.at(0).addr(), r5, r4, r0_9);
                    r3 = guest::cpu()->r[3];
                } else {
                    call_001c4bf4(frame.at(0).addr(), r5, r4, r9);
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x40u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    call_001b3300(0x98b2b8u, *gptr<u32>(r6), r8 & 0xffu, r3);  // (from the original)
}

}  // namespace d_0023f704
GUEST_EXPORT_FRAMED(0x0023f704, d_0023f704::f_0023f704, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0023f820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023f820 {

struct __attribute__((packed)) Local_0023f820_r0_4 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f820_r0_4, word_18, 0x18);
GUEST_OFFSET(Local_0023f820_r0_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0023f820_r0_6 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0023f820_r0_6, word_18, 0x18);
GUEST_OFFSET(Local_0023f820_r0_6, word_1c, 0x1c);

inline constexpr guest::Function<0x001b3300, u32(u32, u32, u32, u32)> call_001b3300;
inline constexpr guest::Function<0x001c4bf4, u32(u32, u32, u32, u32)> call_001c4bf4;
inline constexpr guest::Function<0x001c4c14, u32(u32, u32)> call_001c4c14;
inline constexpr guest::Function<0x0070bcdc, u32(u32, u32, u32, u32)> call_0070bcdc;
inline constexpr guest::Function<0x0070d904, u32(u32, u32, u32, u32)> call_0070d904;

void f_0023f820(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r3_4 = 0;
    u32 r2_3 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r8 = r1;
    u32 r9 = r2;
    u32 r0_1 = call_0070bcdc(0x98b2b8u, 0u, r2, r3);  // (from the original)
    u32 r11 = r0_1;
    u32 ea_1 = r0 + r8 * 0x21u * 0x14u + 0x7f4u;  // (from the original)
    u32 r7 = ea_1;
    call_001c4c14(frame.at(0).addr(), *gptr<u32>(ea_1));
    u32 ea_2 = r0 + r9 * 0x21u * 0x14u + 0x7f4u;  // (from the original)
    u32 r6 = ea_2;
    call_001c4c14(frame.at(0xc).addr(), *gptr<u32>(ea_2));  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r5 = 0u;
    do {
        u32 r4 = 0u;
        do {
            gptr<Local_0023f820_r0_4> r0_4 = gptr<Local_0023f820_r0_4>(*gptr<u32>(r7));
            u32 r1_3 = r0_4->word_1c;
            u32 zf_1 = r1_3 == r5;
            u32 cf_1 = r1_3 >= r5;
            if (cf_1 && !zf_1) {
                u32 r0_5 = r0_4->word_18;
                zf_1 = r0_5 == r4;
                cf_1 = r0_5 >= r4;
            }
            gptr<Local_0023f820_r0_6> r0_6 = gptr<Local_0023f820_r0_6>(*gptr<u32>(r6));
            u32 r1_4 = r0_6->word_1c;
            if (!!cf_1 && !zf_1) {
                u32 zf_2 = r1_4 == r5;
                u32 cf_2 = r1_4 >= r5;
                if (cf_2 && !zf_2) {
                    u32 r0_7 = r0_6->word_18;
                    zf_2 = r0_7 == r4;
                    cf_2 = r0_7 >= r4;
                }
                if (!!cf_2 && !zf_2) {
                    u32 r0_9 = call_0070d904(frame.at(0).addr(), r5, r4, r3);
                    u32 r0_11 = call_0070d904(frame.at(0xc).addr(), r5, r4, guest::cpu()->r[3]);  // (from the original)
                    call_001c4bf4(frame.at(0).addr(), r5, r4, r0_11);
                    call_001c4bf4(frame.at(0xc).addr(), r5, r4, r0_9);  // (from the original)
                    r3 = guest::cpu()->r[3];
                    goto L_23f93c;
                }
                r3_4 = r11;
                r2_3 = r4;
                r1_5 = r5;
                r0_14 = frame.at(0).addr();
            } else {
                u32 zf_3 = r1_4 == r5;
                u32 cf_3 = r1_4 >= r5;
                if (cf_3 && !zf_3) {
                    u32 r0_15 = r0_6->word_18;
                    zf_3 = r0_15 == r4;
                    cf_3 = r0_15 >= r4;
                }
                if (!cf_3 || zf_3) {
                    goto L_23f93c;
                }
                r3_4 = r11;
                r2_3 = r4;
                r1_5 = r5;
                r0_14 = frame.at(0xc).addr();  // (from the original)
            }
            call_001c4bf4(r0_14, r1_5, r2_3, r3_4);
            r3 = guest::cpu()->r[3];
L_23f93c:;
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x40u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x20u);  // (from the original)
    call_001b3300(0x98b2b8u, *gptr<u32>(r7), r8 & 0xffu, r3);  // (from the original)
    call_001b3300(0x98b2b8u, *gptr<u32>(r6), r9 & 0xffu, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0023f820
GUEST_EXPORT_FRAMED(0x0023f820, d_0023f820::f_0023f820, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0023fa30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0023fa30 {

struct __attribute__((packed)) Local_0023fa30_r0_13 {
    u8 unknown_0[0xfc8];  // (not used here)
    u32 word_fc8;
    u32 word_fcc;
    u8 unknown_fd0[0x10];  // (not used here)
    u32 word_fe0;
    u32 word_fe4;
    u32 word_fe8;
    u32 word_fec;
    u32 word_ff0;
    u32 word_ff4;
    u32 word_ff8;
    u32 word_ffc;
};
GUEST_OFFSET(Local_0023fa30_r0_13, word_fc8, 0xfc8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fcc, 0xfcc);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe0, 0xfe0);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe4, 0xfe4);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fe8, 0xfe8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_fec, 0xfec);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff0, 0xff0);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff4, 0xff4);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ff8, 0xff8);
GUEST_OFFSET(Local_0023fa30_r0_13, word_ffc, 0xffc);

struct __attribute__((packed)) Local_0023fa30_r1_9 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
};
GUEST_OFFSET(Local_0023fa30_r1_9, word_0, 0x0);
GUEST_OFFSET(Local_0023fa30_r1_9, word_4, 0x4);
GUEST_OFFSET(Local_0023fa30_r1_9, word_8, 0x8);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_c, 0xc);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_d, 0xd);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_e, 0xe);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_f, 0xf);
GUEST_OFFSET(Local_0023fa30_r1_9, byte_10, 0x10);

inline constexpr u32 vtable_ProButtonNode_rec = 0x008ee6ecu;
inline constexpr u32 vtable_ProButtonNode_rec_at_e0 = 0x008ee738u;
inline guest::global<u32, 0x008490d8> global_008490d8;
inline guest::global<u32, 0x008490dc> global_008490dc;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32)> call_00125e3c;
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;
inline constexpr guest::Function<0x0029b7c0, u32(u32)> call_0029b7c0;
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;
inline constexpr guest::Function<0x005e8934, u32(u32, u32, u32)> call_005e8934;

u32 f_0023fa30(gptr<ProButtonNode_rec> arg0, u32 r1, u32 r2, u32 r3) {
    call_002b6de0(arg0.addr(), r1, r2, r3);
    arg0->word_e4 = 0;
    arg0->byte_e8 = 0;
    u32 r3_1 = *global_008490dc;
    arg0->word_ec = *global_008490d8;
    arg0->word_f0 = r3_1;
    arg0->word_f4 = 0;
    arg0->byte_f8 = 0;
    arg0->word_fc = 0;
    arg0->word_0 = vtable_ProButtonNode_rec;
    arg0->word_e0 = vtable_ProButtonNode_rec_at_e0;
    arg0->word_100 = 0;
    u32 r0_1 = arg0.addr() + 0x104u;  // (from the original)
    call_005673c8(r0_1, 0x8ee6ecu, 0x8ee738u, r3_1);  // (from the original)
    u32 r0_3 = call_00125e3c(r0_1 + 8u);
    u32 r0_4 = r0_3 + 0x14cu;  // (from the original)
    call_00125aec(r0_4);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    call_00125aec(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    call_00125aec(r0_6);
    u32 r0_7 = r0_6 + 0x28u;  // (from the original)
    call_00125aec(r0_7);
    u32 r0_8 = r0_7 + 0x28u;  // (from the original)
    call_00125aec(r0_8);
    u32 r0_9 = r0_8 + 0x28u;  // (from the original)
    call_0029b7c0(r0_9);
    u32 r0_10 = r0_9 + 0x118u;  // (from the original)
    call_0022c53c(r0_10);
    u32 r0_12 = call_00301d0c(r0_10 + 0x140u, 0x335154u, 0x294u, 4u);  // (from the original)
    gptr<Local_0023fa30_r0_13> r0_13 = gptr<Local_0023fa30_r0_13>(r0_12 - 0x578u);  // (from the original)
    gptr<Local_0023fa30_r1_9> r1_9 = gptr<Local_0023fa30_r1_9>(r0_13.addr() + 0x1000u);  // (from the original)
    r0_13->word_fc8 = 0;
    r0_13->word_fcc = 0;
    r0_13->word_fe0 = 0;
    r0_13->word_fe4 = 0;
    r0_13->word_fe8 = 0;
    r0_13->word_fec = 0;
    r0_13->word_ff0 = 0;
    r0_13->word_ff4 = 0;
    r0_13->word_ff8 = 0;
    r0_13->word_ffc = 0;
    u32 r2_9 = ~0u;
    r1_9->word_0 = 0;
    r1_9->word_8 = r2_9;
    r1_9->word_4 = 0;
    r1_9->byte_c = 0;
    r1_9->byte_d = 0;
    r1_9->byte_e = 0;
    r1_9->byte_f = 0;
    r1_9->byte_10 = 0;
    u32 r0_15 = call_005e8934(r0_13.addr() + 0x1014u, r1_9.addr(), r2_9);  // (from the original)
    u32 r0_16 = r0_15 - 0x1014u;  // (from the original)
    *gptr<u32>(r0_16 + 0x1cu) = r0_16 + 0x10cu;  // (from the original)
    return r0_16;
}

}  // namespace d_0023fa30
GUEST_EXPORT_FRAMED(0x0023fa30, d_0023fa30::f_0023fa30, 0x4010);  // pushes {r4, lr} first, as the original
