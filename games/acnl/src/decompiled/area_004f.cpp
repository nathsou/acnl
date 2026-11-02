// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "graphics/hemisphere_light.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_004f027c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f027c {

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;
inline constexpr guest::Function<0x004ee2b0, u32(u32, u32)> call_004ee2b0;

struct __attribute__((packed)) Frame_004f027c {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f027c, float_0, 0x0);
GUEST_OFFSET(Frame_004f027c, float_4, 0x4);
GUEST_OFFSET(Frame_004f027c, float_8, 0x8);
GUEST_SIZE(Frame_004f027c, 0x10);

u32 f_004f027c(gptr<g3d__PointFragmentLight> arg0, u32 r1, float S0) {
    guest::StackFrameOf<Frame_004f027c> frame;  // the original's stack frame
    u32 r0_1 = call_004ed26c(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        return r0_1;
    }
    float S0_2 = 0.0f;
    *gptr<u32>(arg0->word_114 + 0xb8u) = 1;  // (from the original)
    frame->float_0 = S0_2;
    frame->float_4 = S0_2;
    frame->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    call_004ee2b0(arg0.addr(), frame.at(0).addr());
    return 1u;
}

}  // namespace d_004f027c
GUEST_EXPORT_FRAMED(0x004f027c, d_004f027c::f_004f027c, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0310 {

inline guest::global<u32, 0x0094edd8> global_0094edd8;
inline guest::global<u8, 0x00952a20> global_00952a20;
inline guest::global<u8, 0x00952a21> global_00952a21;
inline constexpr guest::Function<0x0024ebc0, u32(u32)> call_0024ebc0;

u32 f_004f0310() {
    u32 r0_1 = *global_0094edd8;
    if (r0_1 != 0) {
        *gptr<u32>(r0_1 + 0x1a8u) = r0_1 + 0x300u;  // (from the original)
    }
    *global_00952a20 = 1;
    u32 r0_2 = call_0024ebc0(1u);
    u32 r0_3 = *gptr<u8>(r0_2 + 0x168u);  // (from the original)
    *global_00952a21 = u8(r0_3);
    u32 r0_4 = call_0024ebc0(r0_3);
    *gptr<u8>(r0_4 + 0x168u) = 1;  // (from the original)
    guest::cpu()->r[1] = 1u;
    return r0_4;
}

}  // namespace d_004f0310
GUEST_EXPORT_FRAMED(0x004f0310, d_004f0310::f_004f0310, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0568 {

inline guest::global<u32, 0x00952a40> global_00952a40;

u32 f_004f0568(u32 r0) {
    u32 r1_1 = 0u;
    u32 ea_1 = *gptr<u32>(*global_00952a40 + 8u) + 0x40u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r1_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        r1_1 = 0u;
    } else {
        u32 ea_2 = r2_1 + (r0 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        if (r2_2 != 0) {
            r1_1 = r2_2 + ea_2;
        }
    }
    if (r1_1 == 0) {
        return 0u;
    }
    if ((0x80000002u & ~*gptr<u32>(r1_1)) == 0) {  // (from the original)
        return r1_1;
    }
    return 0u;
}

}  // namespace d_004f0568
GUEST_EXPORT(0x004f0568, d_004f0568::f_004f0568);

// f_004f05cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f05cc {

inline guest::global<u32, 0x00952a38> global_00952a38;
inline constexpr guest::Function<0x00495474, u32(u32, u32, u32, u32)> call_00495474;

u32 f_004f05cc(u32 r0) {
    return call_00495474(*global_00952a38, 0x107u, r0, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_004f05cc
GUEST_EXPORT(0x004f05cc, d_004f05cc::f_004f05cc);

// f_004f0818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0818 {

struct __attribute__((packed)) Local_004f0818_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_004f0818_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f0818_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f0818_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_004f0818_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f0818_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_004f0818_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x004ed26c, u32(u32, u32, u32, u32)> call_004ed26c;
inline constexpr guest::Function<0x0056a378, u32(u32)> call_0056a378;

struct __attribute__((packed)) Frame_004f0818 {
    float float_0;
    float float_4;
    float float_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f0818, float_0, 0x0);
GUEST_OFFSET(Frame_004f0818, float_4, 0x4);
GUEST_OFFSET(Frame_004f0818, float_8, 0x8);
GUEST_SIZE(Frame_004f0818, 0x10);

u32 f_004f0818(gptr<g3d__DirectionalFragmentLight> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f0818> frame;  // the original's stack frame
    u32 r0_1 = call_004ed26c(arg0.addr(), r1, r2, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    float S0_2 = -0.40824828f;
    float S1_2 = -0.81649655f;
    *gptr<u32>(arg0->word_114 + 0xb8u) = 0;  // (from the original)
    frame->float_0 = S0_2;
    frame->float_4 = S1_2;
    frame->float_8 = S0_2;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_0056a378(frame.at(0).addr());
    u32 r0_3 = arg0->word_118;
    gptr<Local_004f0818_ea_1> ea_1 = gptr<Local_004f0818_ea_1>(frame.at(0).addr());
    u32 r1_2 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r3_1 = ea_1->word_8;
    *gptr<u32>(r0_3 + 0x17cu) = r1_2;  // (from the original)
    gptr<Local_004f0818_ea_3> ea_3 = gptr<Local_004f0818_ea_3>(r0_3 + 0x180u);  // (from the original)
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r3_1;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_004f0818
GUEST_EXPORT_FRAMED(0x004f0818, d_004f0818::f_004f0818, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f0b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0b90 {

struct __attribute__((packed)) Local_004f0b90_r0_5 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004f0b90_r0_5, float_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r0_5, float_4, 0x4);
GUEST_OFFSET(Local_004f0b90_r0_5, float_8, 0x8);
GUEST_OFFSET(Local_004f0b90_r0_5, float_c, 0xc);

struct __attribute__((packed)) Local_004f0b90_r0_6 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_004f0b90_r0_6, word_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r0_6, float_4, 0x4);
GUEST_OFFSET(Local_004f0b90_r0_6, float_8, 0x8);
GUEST_OFFSET(Local_004f0b90_r0_6, float_c, 0xc);

struct __attribute__((packed)) Local_004f0b90_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f0b90_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004f0b90_r3_1, word_4, 0x4);

inline constexpr guest::Function<0x004a455c, u32(u32, u32, u32, u32)> call_004a455c;
inline constexpr guest::Function<0x004f000c, u32(u32, u32, u32, u32)> call_004f000c;

struct __attribute__((packed)) Frame_004f0b90 {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not read or written by name)
    u32 word_4;
    u8 unknown_8[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f0b90, byte_0, 0x0);
GUEST_OFFSET(Frame_004f0b90, byte_1, 0x1);
GUEST_OFFSET(Frame_004f0b90, word_4, 0x4);
GUEST_SIZE(Frame_004f0b90, 0x14);

u32 f_004f0b90(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_004f0b90> frame;  // the original's stack frame
    if (r1 == 0) {
        u32 r0_1 = call_004f000c(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r1 = r0_1;
    }
    gptr<Local_004f0b90_r3_1> r3_1 = gptr<Local_004f0b90_r3_1>(frame.at(8).addr());
    frame->byte_0 = 1;
    frame->byte_1 = 1;
    frame->word_4 = 0;
    r3_1->word_0 = 0;
    r3_1->word_4 = 1;
    guest::cpu()->s[0] = S0;
    u32 r0_3 = call_004a455c(frame.at(0).addr(), r1, 0u, r3_1.addr());
    u32 r0_4 = *gptr<u32>(r0_3 + 8u);
    float S0_1 = 1.0f;
    *gptr<u32>(r0 + 8u) = r0_4;
    gptr<Local_004f0b90_r0_5> r0_5 = gptr<Local_004f0b90_r0_5>(r0_4 + 0xb4u);  // (from the original)
    r0_5->float_0 = S0_1;
    r0_5->float_4 = S0_1;
    r0_5->float_8 = S0_1;
    r0_5->float_c = S0_1;
    float S0_2 = 10.0f;
    u32 ea_3 = *gptr<u32>(r0 + 8u) + 0xc8u;  // (from the original)
    u32 r2_1 = *gptr<u32>(ea_3);
    gptr<Local_004f0b90_r0_6> r0_6 = gptr<Local_004f0b90_r0_6>(r2_1 == 0 ? 0u : ea_3 + r2_1);
    r0_6->word_0 = 1;
    r0_6->float_c = S0_2;
    r0_6->float_4 = 100.0f;
    float S0_3 = 1000.0f;
    r0_6->float_8 = S0_3;
    *gptr<u32>(r0 + 4u) = r0_3;
    guest::cpu()->r[1] = r0_3;
    guest::cpu()->s[0] = S0_3;
    return 1u;
}

}  // namespace d_004f0b90
GUEST_EXPORT_FRAMED(0x004f0b90, d_004f0b90::f_004f0b90, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004f0c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0c4c {

inline constexpr guest::Function<0x004ee4b8, u32(u32, u32, u32, u32)> call_004ee4b8;

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
GUEST_OFFSET(Object_004f0de0_0, word_4, 0x4);

inline constexpr guest::Function<0x0048b4dc, u32(u32, u32, u32, u32)> call_0048b4dc;

u32 f_004f0de0(gptr<Object_004f0de0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *gptr<u32>(arg0->word_4 + 0x28u);  // (from the original)
    if (r0_1 == 0) {
        return r0_1;
    }
    call_0048b4dc(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = *gptr<u32>(arg0->word_4 + 0x28u);  // (from the original)
    frame.release();
    return call_0048b4dc(r0_2, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f0de0
GUEST_EXPORT(0x004f0de0, d_004f0de0::f_004f0de0);

// f_004f0eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0eb8 {

struct __attribute__((packed)) Local_004f0eb8_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0eb8_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_004f0eb8_r1_1, word_170, 0x170);
GUEST_OFFSET(Local_004f0eb8_r1_1, word_174, 0x174);

struct __attribute__((packed)) Local_004f0eb8_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_004f0eb8_r3_1, word_0, 0x0);

inline constexpr guest::Function<0x004f0f80, u32(u32, u32, u32, u32)> call_004f0f80;

void f_004f0eb8(gptr<g3d__Model> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x104);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = 0u;
    gptr<Local_004f0eb8_r1_1> r1_1 = gptr<Local_004f0eb8_r1_1>(arg0->word_4);
    u32 r2_1 = r1_1->word_174;
    u32 r4 = r1_1->word_170;
    if (r4 == r2_1) {
        u32 ea_1 = r1_1->word_8 + 0xb8u;  // (from the original)
        r2_1 = *gptr<u32>(ea_1);
        r4 = r2_1 == 0 ? r5 : r2_1 + ea_1;
    }
    r0 = call_004f0f80(r0, frame.at(0).addr(), r2_1, r3);
    r3 = guest::cpu()->r[3];
    u32 r1 = frame.at(0).addr();
    u32 r2 = 0u;
    if (s32(r0) > 0) {
        do {
            u32 r7 = r2 + 1u;
            u32 r6 = r0 - r7;
            if (r6 != 0 && s32(r6) >= 0) {
                r3 = 0u;
            }
            if (s32(r6) > 0) {
                do {
                    u32 r12_1 = r7 + r3;
                    u32 r8_1 = *gptr<u32>(r1 + (r2 << 2));
                    u32 r9_1 = *gptr<u32>(r1 + (r12_1 << 2));
                    r3 += 1u;
                    if (r8_1 > r9_1) {
                        *gptr<u32>(r1 + (r2 << 2)) = r9_1;
                        *gptr<u32>(r1 + (r12_1 << 2)) = r8_1;
                    }
                    r6 -= 1u;
                    guest::preempt();
                } while (r6 != 0);
            }
            r2 += 1u;
            guest::preempt();
        } while (s32(r0) > s32(r2));
    }
    r2 = 0u;
    if (s32(r0) > 0) {
        do {
            u32 r12_2 = *gptr<u32>(r1 + (r2 << 2));
            gptr<Local_004f0eb8_r3_1> r3_1 = gptr<Local_004f0eb8_r3_1>(r4 + (r2 << 2));
            r2 += 1u;
            if (r12_2 == 0) {
                r3_1->word_0 = r5;
            } else {
                r3_1->word_0 = r12_2 - r3_1.addr();
            }
            guest::preempt();
        } while (s32(r2) < s32(r0));
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004f0eb8
GUEST_EXPORT_FRAMED(0x004f0eb8, d_004f0eb8::f_004f0eb8, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_004f0f80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f0f80 {

struct __attribute__((packed)) Local_004f0f80_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0f80_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_004f0f80_r0_1, word_170, 0x170);
GUEST_OFFSET(Local_004f0f80_r0_1, word_174, 0x174);

struct __attribute__((packed)) Local_004f0f80_r0_2 {
    u8 unknown_0[0xb4];  // (not used here)
    u32 word_b4;
    u32 word_b8;
};
GUEST_OFFSET(Local_004f0f80_r0_2, word_b4, 0xb4);
GUEST_OFFSET(Local_004f0f80_r0_2, word_b8, 0xb8);

struct __attribute__((packed)) Local_004f0f80_r2_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x164];  // (not used here)
    u32 word_170;
    u32 word_174;
};
GUEST_OFFSET(Local_004f0f80_r2_2, word_8, 0x8);
GUEST_OFFSET(Local_004f0f80_r2_2, word_170, 0x170);
GUEST_OFFSET(Local_004f0f80_r2_2, word_174, 0x174);


u32 f_004f0f80(gptr<g3d__Model> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_004f0f80_r0_1> r0_1 = gptr<Local_004f0f80_r0_1>(arg0->word_4);
    u32 r5 = 0u;
    u32 r2_1 = r0_1->word_174;
    u32 r12_1 = r0_1->word_170;
    if (r12_1 == r2_1) {
        gptr<Local_004f0f80_r0_2> r0_2 = gptr<Local_004f0f80_r0_2>(r0_1->word_8);
        u32 r12_2 = r0_2->word_b8;
        r12_1 = r12_2 == 0 ? r5 : r12_2 + (r0_2.addr() + 0xb8u);  // (from the original)
        r2_1 = r12_1 + (r0_2->word_b4 << 2);
    }
    gptr<Local_004f0f80_r2_2> r2_2 = gptr<Local_004f0f80_r2_2>(*gptr<u32>(r0 + 4u));
    r0 = (r2_1 - r12_1) >> 2;
    u32 r3 = r2_2->word_170;
    if (r3 == r2_2->word_174) {
        u32 ea_1 = r2_2->word_8 + 0xb8u;  // (from the original)
        u32 r3_1 = *gptr<u32>(ea_1);
        r3 = r3_1 == 0 ? r5 : r3_1 + ea_1;
    }
    u32 r2 = 0u;
    if (s32(r0) <= 0) {
        return r0;
    }
    do {
        u32 r12_3 = r3 + (r2 << 2);
        u32 r4_1 = *gptr<u32>(r12_3);
        *gptr<u32>(r1 + (r2 << 2)) = r4_1 == 0 ? r5 : r12_3 + r4_1;
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < s32(r0));
    return r0;
}

}  // namespace d_004f0f80
GUEST_EXPORT_FRAMED(0x004f0f80, d_004f0f80::f_004f0f80, 0x30);  // pushes {r4, r5} first, as the original

// f_004f1164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1164 {

struct __attribute__((packed)) Object_004f1164_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_004f1164_0, word_4, 0x4);

struct __attribute__((packed)) Object_004f1164_1 {
    u8 unknown_0[0x8];  // (not used here)
    float float_8;
};
GUEST_OFFSET(Object_004f1164_1, float_8, 0x8);

struct __attribute__((packed)) Local_004f1164_ea_1 {
    u32 word_0;
    u8 unknown_4[0x128];  // (not used here)
    u32 word_12c;
};
GUEST_OFFSET(Local_004f1164_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f1164_ea_1, word_12c, 0x12c);

struct __attribute__((packed)) Local_004f1164_r0_2 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Local_004f1164_r0_2, word_c, 0xc);
GUEST_OFFSET(Local_004f1164_r0_2, word_10, 0x10);
GUEST_OFFSET(Local_004f1164_r0_2, word_1c, 0x1c);
GUEST_OFFSET(Local_004f1164_r0_2, word_28, 0x28);


u32 f_004f1164(gptr<Object_004f1164_0> arg0, gptr<Object_004f1164_1> arg1) {
    u32 r2_1 = arg0->word_4;
    float S0_1 = arg1->float_8;
    u32 r0_1 = *gptr<u32>(r2_1 + 0x150u);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = arg1.addr();
        guest::cpu()->s[0] = S0_1;
        return r0_1;
    }
    gptr<Local_004f1164_ea_1> ea_1 = gptr<Local_004f1164_ea_1>(r2_1 + 0x28u);  // (from the original)
    gptr<Local_004f1164_r0_2> r0_2 = gptr<Local_004f1164_r0_2>(ea_1->word_0);
    u32 r1_1 = ea_1->word_12c;
    if (s32(r1_1) < 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 b_2 = s32(r0_2->word_10 - r0_2->word_c) >> 2;
    if (s32(r1_1) >= s32(b_2)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 r2_2 = r0_2->word_28;
    if (s32(r2_2) <= 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return r0_2.addr();
    }
    u32 r1_2 = r1_1 * r2_2;
    u32 r0_3 = r0_2->word_1c + (r1_2 << 2);
    *gptr<u32>(r0_3) = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_004f1164
GUEST_EXPORT(0x004f1164, d_004f1164::f_004f1164);

// f_004f1270: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1270 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;
inline constexpr guest::Function<0x004f0eb8, u32(u32, u32, u32, u32)> call_004f0eb8;

u32 f_004f1270(gptr<g3d__Model> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_4 != 0) {
        call_004f0eb8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    frame.release();
    return call_004ee39c(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_004f1270
GUEST_EXPORT(0x004f1270, d_004f1270::f_004f1270);

// f_004f14ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f14ac {

inline constexpr guest::Function<0x004ee514, u32(u32, u32)> call_004ee514;

u32 f_004f14ac() {
    return call_004ee514(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_004f14ac
GUEST_EXPORT(0x004f14ac, d_004f14ac::f_004f14ac);

// f_004f1510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1510 {

struct __attribute__((packed)) Object_004f1510_0 {
    u8 unknown_0[0xe0];  // (not used here)
    u32 word_e0;
};
GUEST_OFFSET(Object_004f1510_0, word_e0, 0xe0);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32)> call_002fa9d0;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_004f1510 {
    u32 word_0;
};
GUEST_OFFSET(Frame_004f1510, word_0, 0x0);
GUEST_SIZE(Frame_004f1510, 0x4);

u32 f_004f1510(gptr<Object_004f1510_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_004f1510> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r2_1 = 0u;
    u32 r3_1 = arg0->word_e0;
    u32 ea_2 = (r3_1 == 0 ? r2_1 : (arg0.addr() + 0xe0u) + r3_1) + 0x1cu;  // (from the original)
    u32 r3_2 = *gptr<u32>(ea_2);
    if (r3_2 != 0) {
        r2_1 = r3_2 + ea_2;
    }
    frame->word_0 = r2_1;
    if (r2_1 != 0 && r1 != 0) {
        u32 r0_1 = call_002fa9d0(r1, r1, r2_1);
        u32 r0_2 = call_00736a1c(frame.at(0).addr(), r1, r0_1);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r1_1 = frame->word_0;
            guest::cpu()->r[1] = r1_1;
            return s32(r0_2 - r1_1 - 0x1cu) >> 4;  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_004f1510
GUEST_EXPORT_FRAMED(0x004f1510, d_004f1510::f_004f1510, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_004f1648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1648 {

struct __attribute__((packed)) Object_004f1648_0 {
    u8 unknown_0[0xc0];  // (not used here)
    u32 word_c0;
};
GUEST_OFFSET(Object_004f1648_0, word_c0, 0xc0);

struct __attribute__((packed)) Local_004f1648_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_004f1648_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f1648_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f1648_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_004f1648_r4_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f1648_r4_1, float_0, 0x0);
GUEST_OFFSET(Local_004f1648_r4_1, float_4, 0x4);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;
inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_004f1648 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1648, word_0, 0x0);
GUEST_OFFSET(Frame_004f1648, float_4, 0x4);
GUEST_OFFSET(Frame_004f1648, float_8, 0x8);
GUEST_OFFSET(Frame_004f1648, float_c, 0xc);
GUEST_SIZE(Frame_004f1648, 0x14);

u32 f_004f1648(gptr<Object_004f1648_0> arg0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f1648> frame;  // the original's stack frame
    u32 r0_4 = 0;
    u32 r11_1 = 0u;
    gptr<Local_004f1648_ea_1> ea_1 = gptr<Local_004f1648_ea_1>(frame.at(0x38).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r2_1 = arg0->word_c0;
    u32 r0_1 = r2_1 == 0 ? r11_1 : (arg0.addr() + 0xc0u) + r2_1;  // (from the original)
    frame->word_0 = r0_1;
    if (r0_1 != 0 && r1 != 0) {
        u32 r0_2 = call_002fa9d0(r1, r1, r2_1, r3);
        u32 r0_3 = call_00736a1c(frame.at(0).addr(), r1, r0_2);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if (r0_3 != 0) {
            u32 ea_3 = r0_3 + 0xcu;  // (from the original)
            r1 = *gptr<u32>(ea_3);
            if (r1 != 0) {
                r11_1 = r1 + ea_3;
            }
        } else {
            r11_1 = 0u;
        }
    } else {
        r11_1 = 0u;
    }
    if (r11_1 == 0) {
        r0_4 = 0u;
    } else {
        gptr<Local_004f1648_r4_1> r4_1 = gptr<Local_004f1648_r4_1>(frame.at(8).addr());
        float S0_2 = 0.0f;
        float S1_2 = 1.0f;
        frame->word_0 = std::bit_cast<u32>(S0_2);
        frame->float_4 = S0_2;
        r4_1->float_0 = S0_2;
        r4_1->float_4 = S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_004f2b8c(frame.at(0).addr(), r11_1, r2, r11_1);
        u32 r3_2 = guest::cpu()->r[3];
        float S1_3 = guest::cpu()->s[1];
        float S0_3 = 0.003921569f;
        if (r3 < 0x100u) {  // (from the original)
            S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3)))) * S0_3;
            frame->word_0 = std::bit_cast<u32>(S1_3);
        }
        if (r5_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r5_1)))) * S0_3;
            frame->float_4 = S1_3;
        }
        if (r6_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1)))) * S0_3;
            frame->float_8 = S1_3;
        }
        if (r7_1 < 0x100u) {  // (from the original)
            S1_3 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7_1))));
            S0_3 = S1_3 * S0_3;
            frame->float_c = S0_3;
        }
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        call_004f2c10(r3_2, frame.at(0).addr(), r2, r3_2);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0_4 = 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
}

}  // namespace d_004f1648
GUEST_EXPORT_FRAMED(0x004f1648, d_004f1648::f_004f1648, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_004f1b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1b64 {

inline constexpr guest::Function<0x004f1918, u32(u32, u32)> call_004f1918;

struct __attribute__((packed)) Frame_004f1b64 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1b64, float_0, 0x0);
GUEST_OFFSET(Frame_004f1b64, float_4, 0x4);
GUEST_OFFSET(Frame_004f1b64, float_8, 0x8);
GUEST_OFFSET(Frame_004f1b64, float_c, 0xc);
GUEST_SIZE(Frame_004f1b64, 0x14);

u32 f_004f1b64(float S0) {
    guest::StackFrameOf<Frame_004f1b64> frame;  // the original's stack frame
    frame->float_c = S0;
    frame->float_8 = S0;
    frame->float_4 = S0;
    frame->float_0 = S0;
    guest::cpu()->s[0] = S0;
    call_004f1918(guest::cpu()->r[0], frame.at(0).addr());
    return guest::cpu()->r[0];
}

}  // namespace d_004f1b64
GUEST_EXPORT_FRAMED(0x004f1b64, d_004f1b64::f_004f1b64, 0x4000);  // pushes {lr} first, as the original

// f_004f1cdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1cdc {

inline constexpr guest::Function<0x004f1b8c, u32(u32, u32)> call_004f1b8c;

struct __attribute__((packed)) Frame_004f1cdc {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    u8 unknown_10[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1cdc, float_0, 0x0);
GUEST_OFFSET(Frame_004f1cdc, float_4, 0x4);
GUEST_OFFSET(Frame_004f1cdc, float_8, 0x8);
GUEST_OFFSET(Frame_004f1cdc, float_c, 0xc);
GUEST_SIZE(Frame_004f1cdc, 0x14);

u32 f_004f1cdc(float S0) {
    guest::StackFrameOf<Frame_004f1cdc> frame;  // the original's stack frame
    frame->float_c = S0;
    frame->float_8 = S0;
    frame->float_4 = S0;
    frame->float_0 = S0;
    guest::cpu()->s[0] = S0;
    call_004f1b8c(guest::cpu()->r[0], frame.at(0).addr());
    return guest::cpu()->r[0];
}

}  // namespace d_004f1cdc
GUEST_EXPORT_FRAMED(0x004f1cdc, d_004f1cdc::f_004f1cdc, 0x4000);  // pushes {lr} first, as the original

// f_004f1d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1d6c {

struct __attribute__((packed)) Object_004f1d6c_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_004f1d6c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_004f1d6c_0, word_30, 0x30);

struct __attribute__((packed)) Local_004f1d6c_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_004f1d6c_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_004f1d6c_r1_1, word_10, 0x10);


void f_004f1d6c(gptr<Object_004f1d6c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = r1 | 0x2000000u;  // (from the original)
    u32 r10 = 0u;
    u32 r9 = arg0->word_2c;
    if (r9 != 0 && s32(r9) >= 0) {
        r8 = 0u;
    }
    if (s32(r9) > 0) {
        do {
            u32 r2_1 = arg0->word_30;
            u32 ea_1 = (r2_1 == 0 ? r8 : r0 + 0x30u + r2_1) + (r10 << 2);  // (from the original)
            u32 r2_2 = *gptr<u32>(ea_1);
            gptr<Local_004f1d6c_r1_1> r1_1 = gptr<Local_004f1d6c_r1_1>(r2_2 == 0 ? r8 : ea_1 + r2_2);
            u32 r3_1 = r1_1->word_10;
            r1 = r1_1->word_c;
            u32 r6 = r3_1 == 0 ? r8 : r3_1 + (r1_1.addr() + 0x10u);  // (from the original)
            u32 r7 = r6 + (r1 << 2);
            if (r6 != r7) {
                do {
                    u32 r1_2 = *gptr<u32>(r6);
                    u32 r3 = 0u;
                    r1 = r1_2 == 0 ? r8 : r1_2 + r6;
                    u32 r4 = *gptr<u32>(r1);
                    if (r4 >= 0u && r4 != 0) {
                        do {
                            u32 r5_1 = *gptr<u32>(r1 + 4u);
                            u32 ea_3 = (r5_1 == 0 ? r8 : r1 + 4u + r5_1) + (r3 << 2);
                            u32 r5_2 = *gptr<u32>(ea_3);
                            r3 += 1u;
                            *gptr<u32>((r5_2 == 0 ? r8 : ea_3 + r5_2) + 0x14u) = r12;  // (from the original)
                            guest::preempt();
                        } while (r3 < r4);
                    }
                    r6 += 4u;
                    guest::preempt();
                } while (r6 != r7);
            }
            r10 += 1u;
            guest::preempt();
        } while (s32(r10) < s32(r9));
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_004f1d6c
GUEST_EXPORT_FRAMED(0x004f1d6c, d_004f1d6c::f_004f1d6c, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_004f1e44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f1e44 {

struct __attribute__((packed)) Object_004f1e44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f1e44_0, word_8, 0x8);

struct __attribute__((packed)) Local_004f1e44_r1_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f1e44_r1_1, float_0, 0x0);
GUEST_OFFSET(Local_004f1e44_r1_1, float_4, 0x4);

struct __attribute__((packed)) Local_004f1e44_r1_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f1e44_r1_5, word_0, 0x0);
GUEST_OFFSET(Local_004f1e44_r1_5, word_4, 0x4);

inline constexpr guest::Function<0x0056a1d4, u32(u32, u32, u32, u32)> call_0056a1d4;
inline constexpr guest::Function<0x0056a224, u32(u32, u32)> call_0056a224;

struct __attribute__((packed)) Frame_004f1e44 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_004f1e44, word_0, 0x0);
GUEST_OFFSET(Frame_004f1e44, word_4, 0x4);
GUEST_OFFSET(Frame_004f1e44, word_8, 0x8);
GUEST_SIZE(Frame_004f1e44, 0x10);

void f_004f1e44(gptr<Object_004f1e44_0> arg0, gptr<Float4> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_004f1e44> frame;  // the original's stack frame
    u32 r0_1 = arg0->word_8;
    float S1_1 = arg1->v[1];
    float S2_1 = arg1->v[2];
    gptr<Local_004f1e44_r1_1> r1_1 = gptr<Local_004f1e44_r1_1>(r0_1 + 0xcu);  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x20);  // (from the original)
    *gptr<u32>(r0_1 + 8u) = std::bit_cast<u32>(arg1->v[0]);
    float S0_1 = 0.0f;
    r1_1->float_0 = S1_1;
    r1_1->float_4 = S2_1;
    float S1_2 = 1.0f;
    frame->word_0 = std::bit_cast<u32>(S0_1);
    frame->word_4 = std::bit_cast<u32>(S1_2);
    frame->word_8 = std::bit_cast<u32>(S0_1);
    *frame.at<u16>(0xc) = u16(r2);  // (from the original)
    u32 r1_2 = *frame.at<u32>(0xc);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_1;
    call_0056a1d4(frame.at(0).addr(), r1_2, r2, r3);
    *frame.at<u16>(0xc) = u16(r3);  // (from the original)
    call_0056a224(frame.at(0).addr(), *frame.at<u32>(0xc));  // (from the original)
    *frame.at<u16>(0xc) = u16(r5_1);  // (from the original)
    call_0056a1d4(frame.at(0).addr(), *frame.at<u32>(0xc), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = arg0->word_8;
    u32 r3_2 = frame->word_4;
    u32 r12_1 = frame->word_8;
    gptr<Local_004f1e44_r1_5> r1_5 = gptr<Local_004f1e44_r1_5>(r0_5 + 0x18u);  // (from the original)
    *gptr<u32>(r0_5 + 0x14u) = frame->word_0;  // (from the original)
    r1_5->word_0 = r3_2;
    r1_5->word_4 = r12_1;
    guest::cpu()->r[1] = r1_5.addr();
}

}  // namespace d_004f1e44
GUEST_EXPORT_FRAMED(0x004f1e44, d_004f1e44::f_004f1e44, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f2198: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2198 {

inline constexpr u32 vtable_g3d__Camera = 0x00902b34u;
inline constexpr guest::Function<0x004ee4ec, u32(u32, u32, u32, u32)> call_004ee4ec;
inline constexpr guest::Function<0x0054a9f0, u32(u32, u32, u32)> call_0054a9f0;

u32 f_004f2198(gptr<g3d__Camera> arg0, u32 r1, u32 r2) {
    call_004ee4ec(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_0 = vtable_g3d__Camera;
    arg0->word_8 = 0;
    call_0054a9f0(arg0.addr() + 0x10u, 0u, arg0.addr());  // (from the original)
    return arg0.addr();
}

}  // namespace d_004f2198
GUEST_EXPORT_FRAMED(0x004f2198, d_004f2198::f_004f2198, 0x4010);  // pushes {r4, lr} first, as the original

// f_004f220c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f220c {


u32 f_004f220c(u32 r0, u32 r1) {
    do {
        u32 r2_1 = *gptr<u32>(r0);
        if (r2_1 == 0x20000002u) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r2_1 != 0x20000004u) {  // (from the original)
            if (r2_1 == 0x20000009u) {  // (from the original)
                u32 r1_1 = r1 | 0x2000000u;  // (from the original)
                *gptr<u32>(r0 + 0x30u) = r1_1;  // (from the original)
                guest::cpu()->r[1] = r1_1;
                return r0;
            }
            if (r2_1 + 0xdfffffefu != 0) {  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0;
            }
            if (r0 == 0) {
                u32 r1_2 = r1 | 0x2000000u;  // (from the original)
                *gptr<u32>(r0 + 0x30u) = r1_2;  // (from the original)
                guest::cpu()->r[1] = r1_2;
                return r0;
            }
            if ((0x20000011u & ~*gptr<u32>(r0)) != 0) {  // (from the original)
                r0 = 0u;
            }
            u32 r1_3 = r1 | 0x2000000u;  // (from the original)
            *gptr<u32>(r0 + 0x30u) = r1_3;  // (from the original)
            guest::cpu()->r[1] = r1_3;
            return r0;
        }
        u32 r3_1 = r0 + 0x1cu;  // (from the original)
        u32 r2_2 = r0;
        u32 r12_1 = *gptr<u32>(r3_1);
        r0 = 0u;
        if ((r12_1 == 0 ? r0 : r3_1 + r12_1) == 0) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        if (r12_1 != 0) {
            r0 = r12_1 + (r2_2 + 0x1cu);  // (from the original)
        }
        guest::preempt();
    } while (1);
}

}  // namespace d_004f220c
GUEST_EXPORT(0x004f220c, d_004f220c::f_004f220c);

// f_004f2638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2638 {

struct __attribute__((packed)) Object_004f2638_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_004f2638_0, word_8, 0x8);

inline guest::global<u32, 0x008a29a8> global_008a29a8;

void f_004f2638(gptr<Object_004f2638_0> arg0, u32 r1) {
    *gptr<u32>(*gptr<u32>(arg0->word_8 + 0x24u) + (r1 << 2)) = *global_008a29a8;  // (from the original)
}

}  // namespace d_004f2638
GUEST_EXPORT(0x004f2638, d_004f2638::f_004f2638);

// f_004f2a18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2a18 {

inline guest::global<u32, 0x00952a38> global_00952a38;
inline guest::global<u32, 0x00952a48> global_00952a48;
inline constexpr guest::Function<0x00495534, u32(u32)> call_00495534;
inline constexpr guest::Function<0x0049a0e4, u32(u32, u32, u32, u32)> call_0049a0e4;
inline constexpr guest::Function<0x004eb148, u32(u32, u32)> call_004eb148;
inline constexpr guest::Function<0x007b1038, u32(u32)> call_007b1038;

void f_004f2a18(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r4 = 0u;
    u32 r5 = 0x9c90c4u;  // (from the original)
    do {
        r0_1 = *gptr<u32>(r5 + (r4 << 2));
        call_0049a0e4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
    call_004eb148(r0_1, r1);
    call_00495534(*global_00952a38);
    call_007b1038(0x3fffu);  // (from the original)
    *gptr<u32>(*gptr<u32>(*global_00952a38 + 0xc0u)) = 0;  // (from the original)
    *global_00952a48 = 1u - *global_00952a48;
}

}  // namespace d_004f2a18
GUEST_EXPORT_FRAMED(0x004f2a18, d_004f2a18::f_004f2a18, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f2d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2d48 {

struct __attribute__((packed)) Local_004f2d48_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_004f2d48_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f2d48_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_004f2d48_r12_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_004f2d48_r12_1, float_0, 0x0);
GUEST_OFFSET(Local_004f2d48_r12_1, float_4, 0x4);

inline constexpr guest::Function<0x004f2b8c, u32(u32, u32, u32, u32)> call_004f2b8c;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;

struct __attribute__((packed)) Frame_004f2d48 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Frame_004f2d48, float_0, 0x0);
GUEST_OFFSET(Frame_004f2d48, float_4, 0x4);
GUEST_OFFSET(Frame_004f2d48, float_8, 0x8);
GUEST_OFFSET(Frame_004f2d48, float_c, 0xc);
GUEST_SIZE(Frame_004f2d48, 0x10);

u32 f_004f2d48(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_004f2d48> frame;  // the original's stack frame
    gptr<Local_004f2d48_ea_1> ea_1 = gptr<Local_004f2d48_ea_1>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_1->word_0;
    u32 r7_1 = ea_1->word_4;
    if (r0 != 0) {
        float S0_1 = 0.0f;
        float S1_1 = 1.0f;
        frame->float_0 = S0_1;
        frame->float_4 = S0_1;
        gptr<Local_004f2d48_r12_1> r12_1 = gptr<Local_004f2d48_r12_1>(frame.at(8).addr());
        r12_1->float_0 = S0_1;
        r12_1->float_4 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_004f2b8c(frame.at(0).addr(), r0, r1, r3);
        u32 r3_1 = guest::cpu()->r[3];
        float S1_2 = guest::cpu()->s[1];
        float S0_2 = 0.003921569f;
        if (r2 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2)))) * S0_2;
            frame->float_0 = S1_2;
        }
        if (r3_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r3_1)))) * S0_2;
            frame->float_4 = S1_2;
        }
        if (r6_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r6_1)))) * S0_2;
            frame->float_8 = S1_2;
        }
        if (r7_1 < 0x100u) {  // (from the original)
            S1_2 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r7_1))));
            S0_2 = S1_2 * S0_2;
            frame->float_c = S0_2;
        }
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        call_004f2c10(r0, frame.at(0).addr(), r1, r3_1);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_004f2d48
GUEST_EXPORT_FRAMED(0x004f2d48, d_004f2d48::f_004f2d48, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004f2ef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2ef0 {

struct __attribute__((packed)) Local_004f2ef0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_004f2ef0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_004f2ef0_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x004a5b04, u32(u32, u32, u32, u32)> call_004a5b04;

struct __attribute__((packed)) Frame_004f2ef0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
};
GUEST_OFFSET(Frame_004f2ef0, word_0, 0x0);
GUEST_OFFSET(Frame_004f2ef0, word_c, 0xc);
GUEST_SIZE(Frame_004f2ef0, 0x10);

u32 f_004f2ef0(u32 r0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_004f2ef0> frame;  // the original's stack frame
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_004f2ef0_ea_1> ea_1 = gptr<Local_004f2ef0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r14;
    u32 r0_1 = frame->word_0;
    if (r0_1 == 0) {
        u32 v_1 = frame->word_c;
        return r0_1;
    }
    call_004a5b04(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 v_2 = frame->word_c;
    return 1u;
}

}  // namespace d_004f2ef0
GUEST_EXPORT(0x004f2ef0, d_004f2ef0::f_004f2ef0);

// f_004f2f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f48 {


void f_004f2f48(u32 r0) {
    u32 zf_1 = r0 == 0;
    if (!zf_1) {
        u32 res_1 = r0 + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        r0 = res_1;
    }
    float S0_1 = zf_1 ? 0.0f : std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004f2f48
GUEST_EXPORT(0x004f2f48, d_004f2f48::f_004f2f48);

// f_004f2f60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f2f60 {


void f_004f2f60(u32 r0) {
    u32 zf_1 = r0 == 0;
    float S0_1 = 0.0f;
    if (!zf_1) {
        u32 res_1 = r0 + 0x104u;  // (from the original)
        zf_1 = res_1 == 0;
        r0 = res_1;
    }
    if (zf_1) {
        guest::cpu()->s[0] = S0_1;
        return;
    }
    if ((*gptr<u32>(r0) & 1u) != 0) {
        S0_1 = std::bit_cast<float>(*gptr<u32>(r0 + 8u));
    }
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_004f2f60
GUEST_EXPORT(0x004f2f60, d_004f2f60::f_004f2f60);

// f_004f3068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3068 {

inline guest::global<u8, 0x00952a20> global_00952a20;
inline guest::global<u32, 0x00952a38> global_00952a38;
inline constexpr guest::Function<0x004efb0c, u32(u32, u32, u32, u32)> call_004efb0c;
inline constexpr guest::Function<0x006ef650, u32(u32, u32)> call_006ef650;

u32 f_004f3068(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = *global_00952a20;
    if (r1_1 != 0) {
        frame.release();
        return call_006ef650(r0, r1_1);
    }
    call_004efb0c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = *gptr<u32>(*global_00952a38 + 0xc0u);  // (from the original)
    *gptr<u32>(r0_1) = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_004f3068
GUEST_EXPORT(0x004f3068, d_004f3068::f_004f3068);

// f_004f33dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f33dc {

inline constexpr u32 vtable_gui__ButtonBase = 0x00902bc8u;
inline constexpr u32 vtable_gui__Widget = 0x00903054u;
inline guest::global<u32, 0x00ad6630> global_00ad6630;
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> call_0013e7d8;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;

u32 f_004f33dc(gptr<gui__ButtonBase> arg0) {
    arg0->word_0 = vtable_gui__Widget;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->byte_c = 0;
    call_0013e7d8(0xad662cu, *global_00ad6630, arg0.addr() + 4u);  // (from the original)
    arg0->word_0 = vtable_gui__ButtonBase;
    arg0->word_10 = 0;
    arg0->byte_14 = 1;
    arg0->word_18 = 0;
    call_002f825c(arg0.addr() + 0x1cu, 0x11u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_004f33dc
GUEST_EXPORT_FRAMED(0x004f33dc, d_004f33dc::f_004f33dc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f3a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3a64 {


u32 f_004f3a64(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1 - 0xau;  // (from the original)
    u32 zf_1 = r0_1 == 5u;
    u32 cf_1 = r0_1 >= 5u;
    if (r0_1 <= 5u) {
        r0_1 = 1u;
    }
    if (cf_1 && !zf_1) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_004f3a64
GUEST_EXPORT(0x004f3a64, d_004f3a64::f_004f3a64);

// f_004f3b48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f3b48 {

struct __attribute__((packed)) Local_004f3b48_r3_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_004f3b48_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_004f3b48_r3_1, word_8, 0x8);


u32 f_004f3b48(u32 r0_unused, u32 r1) {
    u32 r2 = 0x896f28u;  // (from the original)
    u32 r0 = 0u;
    do {
        gptr<Local_004f3b48_r3_1> r3_1 = gptr<Local_004f3b48_r3_1>(r2 + (r0 << 3));
        if (r3_1->word_0 == r1) {
            return *gptr<u32>(r2 + (r0 << 3) + 4u);
        }
        if (r3_1->word_8 == r1) {
            return *gptr<u32>(r2 + (r0 << 3) + 0xcu);  // (from the original)
        }
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 6);
    return ~0u;
}

}  // namespace d_004f3b48
GUEST_EXPORT(0x004f3b48, d_004f3b48::f_004f3b48);

// f_004f4e58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f4e58 {

inline constexpr u32 vtable_gui__GridKeySet = 0x00902c58u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;

u32 f_004f4e58(gptr<gui__GridKeySet> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    arg0->word_0 = vtable_gui__KeySet;
    arg0->word_104 = r7;
    arg0->byte_108 = u8(r7);
    arg0->word_10c = r1;
    call_002f825c(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_gui__GridKeySet;
    arg0->word_110 = r7;
    arg0->word_a14 = r7;
    arg0->word_a18 = ~0u;
    arg0->word_a1c = r7;
    u32 r4_1 = r5 + 0xa14u;  // (from the original)
    call_002f825c(r5 + 0x114u, 0x100u, r5 + 0xa18u, guest::cpu()->r[3]);  // (from the original)
    arg0->word_a14 = 0x28;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r6_1 = r5 + (r4 << 4);
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = r7;  // (from the original)
        call_0013fac4(r6_1 + 0x214u, 0x10u, 1u);  // (from the original)
        call_0013fac4(r6_1 + 0x614u, 0x10u, 1u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0xa14u)) > s32(r4));  // (from the original)
    return r5;
}

}  // namespace d_004f4e58
GUEST_EXPORT_FRAMED(0x004f4e58, d_004f4e58::f_004f4e58, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004f524c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f524c {

struct __attribute__((packed)) Local_004f524c_r1_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_004f524c_r1_1, word_10, 0x10);
GUEST_OFFSET(Local_004f524c_r1_1, word_14, 0x14);

struct __attribute__((packed)) Local_004f524c_r1_3 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
    u8 unknown_4[0x6];  // (not used here)
    u16 half_a;
};
GUEST_OFFSET(Local_004f524c_r1_3, half_2, 0x2);
GUEST_OFFSET(Local_004f524c_r1_3, half_a, 0xa);

struct __attribute__((packed)) Local_004f524c_r1_4 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x6];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Local_004f524c_r1_4, half_4, 0x4);
GUEST_OFFSET(Local_004f524c_r1_4, half_c, 0xc);

struct __attribute__((packed)) Local_004f524c_r1_5 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0x6];  // (not used here)
    u16 half_e;
};
GUEST_OFFSET(Local_004f524c_r1_5, half_6, 0x6);
GUEST_OFFSET(Local_004f524c_r1_5, half_e, 0xe);

struct __attribute__((packed)) Local_004f524c_r1_6 {
    u8 unknown_0[0x6];  // (not used here)
    u16 half_6;
    u8 unknown_8[0x6];  // (not used here)
    u16 half_e;
};
GUEST_OFFSET(Local_004f524c_r1_6, half_6, 0x6);
GUEST_OFFSET(Local_004f524c_r1_6, half_e, 0xe);

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;
inline constexpr guest::Function<0x004dae58, u32(u32, u32, u32, u32)> call_004dae58;
inline constexpr guest::Function<0x004f5144, u32(u32, u32, u32, u32)> call_004f5144;

void f_004f524c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r5 = 0u;
    u32 r6 = r5;
    u32 r10 = r0;
    u32 r7 = r5;
    gptr<Local_004f524c_r1_1> r1_1 = gptr<Local_004f524c_r1_1>(*global_0095e0fc);
    u32 r0_1 = r1_1->word_14;
    if (s32(r0_1) > 0) {
        u32 r1_2 = r1_1->word_10;
        u32 r2_1 = ~1u;
        u32 r4 = *gptr<u16>(r1_2 + (r2_1 + (r0_1 << 1)));
        u32 r0_2 = call_004dae58(r4, r1_2, r2_1, r3);
        gptr<Local_004f524c_r1_3> r1_3 = gptr<Local_004f524c_r1_3>(guest::cpu()->r[1]);
        u32 r2 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        u32 zf_1 = r0_2 == 0;
        if (r0_2 != 0) {
            r0_2 = *gptr<u16>(r0_2 + 2u);
        }
        u32 r8 = 0x896f58u;  // (from the original)
        if (!zf_1) {
            zf_1 = r0_2 == 0;
        }
        if (zf_1) {
            r0_2 = r4;
        }
        u32 r9 = r8 + 0x170u;  // (from the original)
        if (r0_2 == r4) {
            r0 = r4 - 0x3041u;  // (from the original)
            u32 zf_2 = r0 == 0x52u;  // (from the original)
            u32 cf_1 = r0 >= 0x52u;  // (from the original)
            if (r0 <= 0x52u) {  // (from the original)
                r0 = 0u;
            }
            if (!cf_1 || !!zf_2) {
                do {
                    r1_3 = gptr<Local_004f524c_r1_3>(r8 + (r0 << 3));
                    r3_1 = r1_3->half_2;
                    u32 zf_3 = r3_1 == r4;
                    if (!zf_3) {
                        r2 = r1_3->half_a;
                        zf_3 = r2 == r4;
                    }
                    if (zf_3) {
                        goto L_4f5324;
                    }
                    r0 += 2u;
                    guest::preempt();
                } while (s32(r0) < 0x2e);  // (from the original)
                goto L_4f5328;
            }
            r0 = r4 - 0x30a1u;  // (from the original)
            u32 zf_4 = r0 == 0x55u;  // (from the original)
            u32 cf_2 = r0 >= 0x55u;  // (from the original)
            if (r0 <= 0x55u) {  // (from the original)
                r0 = 0u;
            }
            if (cf_2 && !zf_4) {
                goto L_4f5328;
            }
            do {
                r1_3 = gptr<Local_004f524c_r1_3>(r9 + (r0 << 3));
                r3_1 = r1_3->half_2;
                u32 zf_5 = r3_1 == r4;
                if (!zf_5) {
                    r2 = r1_3->half_a;
                    zf_5 = r2 == r4;
                }
                if (zf_5) {
                    goto L_4f5324;
                }
                r0 += 2u;
                guest::preempt();
            } while (s32(r0) < 0x2e);  // (from the original)
            goto L_4f5328;
        }
L_4f5324:;
        r5 = 1u;
L_4f5328:;
        u32 r0_3 = call_004dae58(r4, r1_3.addr(), r2, r3_1);
        gptr<Local_004f524c_r1_4> r1_4 = gptr<Local_004f524c_r1_4>(guest::cpu()->r[1]);
        r2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        u32 zf_6 = r0_3 == 0;
        if (!zf_6) {
            r0_3 = *gptr<u16>(r0_3 + 4u);
            zf_6 = r0_3 == 0;
        }
        if (zf_6) {
            r0_3 = r4;
        }
        if (r0_3 == r4) {
            r0 = r4 - 0x3041u;  // (from the original)
            u32 zf_7 = r0 == 0x52u;  // (from the original)
            u32 cf_3 = r0 >= 0x52u;  // (from the original)
            if (r0 <= 0x52u) {  // (from the original)
                r0 = 0u;
            }
            if (!cf_3 || !!zf_7) {
                do {
                    r1_4 = gptr<Local_004f524c_r1_4>(r8 + (r0 << 3));
                    r3_2 = r1_4->half_4;
                    u32 zf_8 = r3_2 == r4;
                    if (!zf_8) {
                        r2 = r1_4->half_c;
                        zf_8 = r2 == r4;
                    }
                    if (zf_8) {
                        goto L_4f53c0;
                    }
                    r0 += 2u;
                    guest::preempt();
                } while (s32(r0) < 0x2e);  // (from the original)
                goto L_4f53c4;
            }
            r0 = r4 - 0x30a1u;  // (from the original)
            u32 zf_9 = r0 == 0x55u;  // (from the original)
            u32 cf_4 = r0 >= 0x55u;  // (from the original)
            if (r0 <= 0x55u) {  // (from the original)
                r0 = 0u;
            }
            if (cf_4 && !zf_9) {
                goto L_4f53c4;
            }
            do {
                r1_4 = gptr<Local_004f524c_r1_4>(r9 + (r0 << 3));
                r3_2 = r1_4->half_4;
                u32 zf_10 = r3_2 == r4;
                if (!zf_10) {
                    r2 = r1_4->half_c;
                    zf_10 = r2 == r4;
                }
                if (zf_10) {
                    goto L_4f53c0;
                }
                r0 += 2u;
                guest::preempt();
            } while (s32(r0) < 0x2e);  // (from the original)
            goto L_4f53c4;
        }
L_4f53c0:;
        r6 = 1u;
L_4f53c4:;
        u32 r0_4 = call_004dae58(r4, r1_4.addr(), r2, r3_2);
        u32 zf_11 = r0_4 == 0;
        if (!zf_11) {
            r0_4 = *gptr<u16>(r0_4 + 6u);
            zf_11 = r0_4 == 0;
        }
        if (zf_11) {
            r0_4 = r4;
        }
        if (r0_4 == r4) {
            r0 = r4 - 0x3041u;  // (from the original)
            u32 zf_12 = r0 == 0x52u;  // (from the original)
            u32 cf_5 = r0 >= 0x52u;  // (from the original)
            if (r0 <= 0x52u) {  // (from the original)
                r0 = 0u;
            }
            if (!cf_5 || !!zf_12) {
                do {
                    gptr<Local_004f524c_r1_5> r1_5 = gptr<Local_004f524c_r1_5>(r8 + (r0 << 3));
                    if (r1_5->half_6 == r4 || r1_5->half_e == r4) {
                        goto L_4f545c;
                    }
                    r0 += 2u;
                    guest::preempt();
                } while (s32(r0) < 0x2e);  // (from the original)
                frame.release();
                call_004f5144(r10, r5, r6, r7);
                return;
            }
            r0 = r4 - 0x30a1u;  // (from the original)
            u32 zf_13 = r0 == 0x55u;  // (from the original)
            u32 cf_6 = r0 >= 0x55u;  // (from the original)
            if (r0 <= 0x55u) {  // (from the original)
                r0 = 0u;
            }
            if (cf_6 && !zf_13) {
                frame.release();
                call_004f5144(r10, r5, r6, r7);
                return;
            }
            do {
                gptr<Local_004f524c_r1_6> r1_6 = gptr<Local_004f524c_r1_6>(r9 + (r0 << 3));
                if (r1_6->half_6 == r4 || r1_6->half_e == r4) {
                    goto L_4f545c;
                }
                r0 += 2u;
                guest::preempt();
            } while (s32(r0) < 0x2e);  // (from the original)
            frame.release();
            call_004f5144(r10, r5, r6, r7);
            return;
        }
L_4f545c:;
        r7 = 1u;
    }
    frame.release();
    call_004f5144(r10, r5, r6, r7);
    return;
}

}  // namespace d_004f524c
GUEST_EXPORT(0x004f524c, d_004f524c::f_004f524c);

// f_004f6674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f6674 {

struct __attribute__((packed)) Local_004f6674_r3_2 {
    u8 unknown_0[0x214];  // (not used here)
    u8 byte_214;
    u8 byte_215;
    u8 unknown_216[0x7e];  // (not used here)
    u8 byte_294;
    u8 byte_295;
};
GUEST_OFFSET(Local_004f6674_r3_2, byte_214, 0x214);
GUEST_OFFSET(Local_004f6674_r3_2, byte_215, 0x215);
GUEST_OFFSET(Local_004f6674_r3_2, byte_294, 0x294);
GUEST_OFFSET(Local_004f6674_r3_2, byte_295, 0x295);

inline constexpr u32 vtable_gui__KanaKeySet = 0x00902c84u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;

u32 f_004f6674(gptr<gui__KanaKeySet> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 r5 = 0u;
    arg0->word_0 = vtable_gui__KeySet;
    arg0->word_104 = r5;
    arg0->byte_108 = u8(r5);
    arg0->word_10c = r1;
    call_002f825c(r4 + 4u, 0x100u, r2, r3);  // (from the original)
    u32 r0_2 = ~0u;
    arg0->word_0 = vtable_gui__KanaKeySet;
    arg0->word_110 = r5;
    arg0->word_318 = r0_2;
    arg0->word_314 = r5;
    arg0->word_31c = r0_2;
    arg0->word_320 = r0_2;
    arg0->word_324 = r0_2;
    arg0->word_328 = r0_2;
    arg0->word_32c = r5;
    call_002f825c(r4 + 0x114u, 0x100u, r4 + 0x328u, guest::cpu()->r[3]);  // (from the original)
    r0 = 0x3bu;  // (from the original)
    r1 = 0u;
    r2 = 1u;
    arg0->word_314 = r0;
    do {
        gptr<Local_004f6674_r3_2> r3_2 = gptr<Local_004f6674_r3_2>(r4 + (r1 << 1));
        *gptr<u32>(r4 + (r1 << 2) + 0x114u) = r5;  // (from the original)
        r3_2->byte_214 = u8(r2);
        r3_2->byte_294 = u8(r2);
        r3_2->byte_215 = u8(r2);
        res_1 = r0 - 1u;
        r0 = res_1;
        r1 += 1u;
        r3_2->byte_295 = u8(r2);
        guest::preempt();
    } while (res_1 != 0);
    return r4;
}

}  // namespace d_004f6674
GUEST_EXPORT_FRAMED(0x004f6674, d_004f6674::f_004f6674, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
GUEST_OFFSET(Object_004f76a8_0, word_0, 0x0);
GUEST_OFFSET(Object_004f76a8_0, word_4, 0x4);
GUEST_OFFSET(Object_004f76a8_0, word_8, 0x8);
GUEST_OFFSET(Object_004f76a8_0, word_c, 0xc);
GUEST_OFFSET(Object_004f76a8_0, word_10, 0x10);
GUEST_OFFSET(Object_004f76a8_0, word_14, 0x14);
GUEST_OFFSET(Object_004f76a8_0, word_18, 0x18);
GUEST_OFFSET(Object_004f76a8_0, word_1c, 0x1c);
GUEST_OFFSET(Object_004f76a8_0, word_20, 0x20);
GUEST_OFFSET(Object_004f76a8_0, word_24, 0x24);
GUEST_OFFSET(Object_004f76a8_0, word_28, 0x28);
GUEST_OFFSET(Object_004f76a8_0, word_2c, 0x2c);
GUEST_OFFSET(Object_004f76a8_0, word_30, 0x30);
GUEST_OFFSET(Object_004f76a8_0, word_34, 0x34);
GUEST_OFFSET(Object_004f76a8_0, word_38, 0x38);
GUEST_OFFSET(Object_004f76a8_0, word_3c, 0x3c);
GUEST_OFFSET(Object_004f76a8_0, byte_40, 0x40);


void f_004f76a8(gptr<Object_004f76a8_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = r2_1;
    arg0->word_20 = r2_1;
    arg0->word_24 = r2_1;
    arg0->word_34 = 0;
    arg0->word_28 = r2_1;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_2c = r2_1;
    arg0->word_30 = ~0u;
    arg0->byte_40 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_004f76a8
GUEST_EXPORT(0x004f76a8, d_004f76a8::f_004f76a8);

// f_004f778c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f778c {

inline constexpr u32 vtable_gui__RadioButton = 0x00902d20u;
inline guest::global<u32, 0x00ad6638> global_00ad6638;
inline guest::global<u32, 0x00ad663c> global_00ad663c;
inline guest::global<u32, 0x00ad6640> global_00ad6640;
inline guest::global<u32, 0x00ad6644> global_00ad6644;
inline guest::global<u32, 0x00ad6648> global_00ad6648;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> call_00150bc0;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;

u32 f_004f778c(gptr<gui__RadioButton> arg0, u32 r1, u32 r2) {
    call_004f33dc(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_0 = vtable_gui__RadioButton;
    call_002fbb30(arg0.addr() + 0x30u, r1, 0x44u);  // (from the original)
    u32 r2_1 = arg0->word_4c;
    u32 r0_2 = 0u;
    arg0->byte_74 = u8(r0_2);
    u32 zf_1 = r2_1 + 0x64u == 0;  // (from the original)
    if (r2_1 + 0x64u == 0) {  // (from the original)
        r0_2 = *global_00ad6638;
    }
    if (zf_1) {
        arg0->word_4c = r0_2;
    }
    if (arg0->word_50 + 0x64u == 0) {  // (from the original)
        arg0->word_50 = *global_00ad663c;
    }
    if (arg0->word_54 + 0x64u == 0) {  // (from the original)
        arg0->word_54 = *global_00ad6640;
    }
    if (arg0->word_58 + 0x64u == 0) {  // (from the original)
        arg0->word_58 = *global_00ad6644;
    }
    if (arg0->word_5c + 0x64u == 0) {  // (from the original)
        arg0->word_5c = *global_00ad6648;
    }
    arg0->word_18 = arg0.addr() + 0x30u;  // (from the original)
    call_00150bc0(arg0.addr() + 0x1cu, arg0->word_34, 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_004f778c
GUEST_EXPORT_FRAMED(0x004f778c, d_004f778c::f_004f778c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004f9650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004f9650 {

inline constexpr u32 vtable_gui__QwertyKeySet = 0x00902d64u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;
inline constexpr guest::Function<0x007796a0, u32(u32, u32, u32)> call_007796a0;

u32 f_004f9650(gptr<gui__QwertyKeySet> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    arg0->word_0 = vtable_gui__KeySet;
    arg0->word_104 = r7;
    arg0->byte_108 = u8(r7);
    arg0->word_10c = r1;
    call_002f825c(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r5 + 0x614u;  // (from the original)
    arg0->word_0 = vtable_gui__QwertyKeySet;
    u32 r9 = ~0u;
    arg0->word_110 = r7;
    arg0->word_614 = r7;
    arg0->word_618 = r9;
    arg0->word_62c = r7;
    arg0->word_61c = r9;
    arg0->word_630 = r7;
    call_002f825c(r5 + 0x114u, 0x100u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_614 = 0x35;  // (from the original)
    u32 r4 = 0u;
    u32 r8 = 1u;
    do {
        u32 r2_2 = r5 + (r4 << 2);
        u32 r6_1 = r5 + (r4 << 3);
        *gptr<u32>(r2_2 + 0x114u) = r7;  // (from the original)
        call_007796a0(r6_1 + 0x214u, r8, r2_2);  // (from the original)
        call_007796a0(r6_1 + 0x414u, r8, guest::cpu()->r[2]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x614u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x620u) = r9;  // (from the original)
    *gptr<u32>(r5 + 0x624u) = r9;  // (from the original)
    *gptr<u32>(r5 + 0x628u) = r9;  // (from the original)
    return r5;
}

}  // namespace d_004f9650
GUEST_EXPORT_FRAMED(0x004f9650, d_004f9650::f_004f9650, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

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
GUEST_OFFSET(Object_004f9f9c_0, word_0, 0x0);
GUEST_OFFSET(Object_004f9f9c_0, word_4, 0x4);
GUEST_OFFSET(Object_004f9f9c_0, word_8, 0x8);
GUEST_OFFSET(Object_004f9f9c_0, word_c, 0xc);
GUEST_OFFSET(Object_004f9f9c_0, word_10, 0x10);
GUEST_OFFSET(Object_004f9f9c_0, word_14, 0x14);
GUEST_OFFSET(Object_004f9f9c_0, word_18, 0x18);
GUEST_OFFSET(Object_004f9f9c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_004f9f9c_0, word_20, 0x20);
GUEST_OFFSET(Object_004f9f9c_0, word_24, 0x24);
GUEST_OFFSET(Object_004f9f9c_0, word_28, 0x28);
GUEST_OFFSET(Object_004f9f9c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_004f9f9c_0, word_30, 0x30);
GUEST_OFFSET(Object_004f9f9c_0, word_34, 0x34);
GUEST_OFFSET(Object_004f9f9c_0, word_38, 0x38);
GUEST_OFFSET(Object_004f9f9c_0, word_3c, 0x3c);
GUEST_OFFSET(Object_004f9f9c_0, word_40, 0x40);
GUEST_OFFSET(Object_004f9f9c_0, byte_44, 0x44);
GUEST_OFFSET(Object_004f9f9c_0, word_48, 0x48);
GUEST_OFFSET(Object_004f9f9c_0, word_4c, 0x4c);
GUEST_OFFSET(Object_004f9f9c_0, byte_50, 0x50);
GUEST_OFFSET(Object_004f9f9c_0, half_52, 0x52);


void f_004f9f9c(gptr<Object_004f9f9c_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = r2_1;
    u32 r3_1 = ~0u;
    arg0->word_20 = r2_1;
    arg0->word_24 = r2_1;
    arg0->word_34 = 0;
    arg0->word_28 = r2_1;
    arg0->word_2c = r2_1;
    arg0->word_30 = r3_1;
    arg0->word_38 = 0;
    arg0->word_3c = 0xa;  // (from the original)
    arg0->word_40 = 3;
    arg0->byte_44 = 1;
    arg0->word_48 = r3_1;
    arg0->word_4c = r3_1;
    arg0->byte_50 = 0;
    arg0->half_52 = 0;
}

}  // namespace d_004f9f9c
GUEST_EXPORT_FRAMED(0x004f9f9c, d_004f9f9c::f_004f9f9c, 0x10);  // pushes {r4} first, as the original

// f_004fa0fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa0fc {

inline constexpr u32 vtable_gui__RepeatButton = 0x00902d94u;
inline guest::global<u32, 0x00ad664c> global_00ad664c;
inline guest::global<u32, 0x00ad6650> global_00ad6650;
inline guest::global<u32, 0x00ad6654> global_00ad6654;
inline guest::global<u32, 0x00ad6658> global_00ad6658;
inline guest::global<u32, 0x00ad665c> global_00ad665c;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> call_00150bc0;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;

u32 f_004fa0fc(gptr<gui__RepeatButton> arg0, u32 r1, u32 r2) {
    call_004f33dc(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_0 = vtable_gui__RepeatButton;
    call_002fbb30(arg0.addr() + 0x30u, r1, 0x54u);  // (from the original)
    u32 r0_2 = arg0->word_4c;
    arg0->word_84 = 0;
    u32 zf_1 = r0_2 + 0x64u == 0;  // (from the original)
    arg0->byte_88 = 0;
    if (r0_2 + 0x64u == 0) {  // (from the original)
        r0_2 = *global_00ad664c;
    }
    if (zf_1) {
        arg0->word_4c = r0_2;
    }
    if (arg0->word_50 + 0x64u == 0) {  // (from the original)
        arg0->word_50 = *global_00ad6650;
    }
    if (arg0->word_54 + 0x64u == 0) {  // (from the original)
        arg0->word_54 = *global_00ad6654;
    }
    if (arg0->word_58 + 0x64u == 0) {  // (from the original)
        arg0->word_58 = *global_00ad6658;
    }
    if (arg0->word_5c + 0x64u == 0) {  // (from the original)
        arg0->word_5c = *global_00ad665c;
    }
    arg0->word_18 = arg0.addr() + 0x30u;  // (from the original)
    call_00150bc0(arg0.addr() + 0x1cu, arg0->word_34, 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_004fa0fc
GUEST_EXPORT_FRAMED(0x004fa0fc, d_004fa0fc::f_004fa0fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fa674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fa674 {

inline constexpr u32 vtable_gui__TextAreaMail = 0x00902dd8u;

void f_004fa674(gptr<gui__TextAreaMail> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_18 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_0 = vtable_gui__TextAreaMail;
}

}  // namespace d_004fa674
GUEST_EXPORT(0x004fa674, d_004fa674::f_004fa674);

// f_004fae8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fae8c {

inline constexpr u32 vtable_gui__TextAreaBoard = 0x00902e8cu;

void f_004fae8c(gptr<gui__TextAreaBoard> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_18 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_0 = vtable_gui__TextAreaBoard;
}

}  // namespace d_004fae8c
GUEST_EXPORT(0x004fae8c, d_004fae8c::f_004fae8c);

// f_004fb304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fb304 {


u32 f_004fb304(u32 r0_unused, u32 r1) {
    u32 r0_1 = r1;
    if (r1 == 3u) {
        return 2u;
    }
    if (r0_1 == 5u) {
        r0_1 = 4u;
    }
    return r0_1;
}

}  // namespace d_004fb304
GUEST_EXPORT(0x004fb304, d_004fb304::f_004fb304);

// f_004fd458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fd458 {

inline constexpr u32 vtable_gui__CellPhoneKeySet = 0x00902ef4u;
inline constexpr u32 vtable_gui__KeySet = 0x00902fc8u;
inline guest::global<u32, 0x00ad6540> global_00ad6540;
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00779598, u32(u32)> call_00779598;

u32 f_004fd458(gptr<gui__CellPhoneKeySet> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5 = r0;
    u32 r7 = 0u;
    arg0->word_0 = vtable_gui__KeySet;
    arg0->word_104 = r7;
    arg0->byte_108 = u8(r7);
    arg0->word_10c = r1;
    call_002f825c(r5 + 4u, 0x100u, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r5 + 0x754u;  // (from the original)
    arg0->word_0 = vtable_gui__CellPhoneKeySet;
    u32 r8 = ~0u;
    arg0->word_110 = r7;
    arg0->word_754 = r7;
    arg0->word_758 = r8;
    arg0->word_76c = r7;
    arg0->word_770 = r7;
    arg0->word_774 = r7;
    arg0->word_778 = r7;
    arg0->word_77c = *global_00ad6540;
    call_002f825c(r5 + 0x114u, 0x100u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_754 = 0x19;  // (from the original)
    u32 r4 = 0u;
    do {
        *gptr<u32>(r5 + (r4 << 2) + 0x114u) = r7;  // (from the original)
        u32 r6_1 = r4 * 7u + r5;
        call_0013fac4(r6_1 + 0x214u, 7u, 1u);  // (from the original)
        call_0013fac4(r6_1 + 0x3d4u, 7u, 1u);  // (from the original)
        call_00779598(r6_1 + 0x594u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(*gptr<u32>(r5 + 0x754u)) > s32(r4));  // (from the original)
    *gptr<u32>(r5 + 0x75cu) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x760u) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x764u) = r8;  // (from the original)
    *gptr<u32>(r5 + 0x768u) = r8;  // (from the original)
    return r5;
}

}  // namespace d_004fd458
GUEST_EXPORT_FRAMED(0x004fd458, d_004fd458::f_004fd458, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004fdec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fdec0 {

struct __attribute__((packed)) Local_004fdec0_r7_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_004fdec0_r7_1, word_c, 0xc);

inline constexpr u32 vtable_gui__Key = 0x00902fa8u;
inline constexpr guest::Function<0x00100835, u32(u32, u32, u32)> call_00100834;
inline constexpr guest::Function<0x00101801, u32(u32, u32, u32)> call_00101800;
inline constexpr guest::Function<0x0010193b, u32(u32, u32, u32)> call_0010193a;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> call_00131280;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> call_00150bc0;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32)> call_00569d50;

u32 f_004fdec0(gptr<gui__Key> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r6_1 = 0;
    u32 r5 = r0;
    arg0->word_0 = vtable_gui__Key;
    call_002fbb30(r5 + 4u, r1, 0x88u, guest::cpu()->r[3]);  // (from the original)
    arg0->word_8c = 0;
    arg0->word_a4 = 0;
    u32 r0_3 = call_002f825c(r5 + 0x90u, 0x11u);  // (from the original)
    u32 r1_1 = arg0->word_8;
    if (r1_1 != 0) {
        r0_3 = call_00150bc0(r5 + 0x90u, r1_1, 0x10u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    u32 r0_5 = call_00569d50(r0_3, r1_1, guest::cpu()->r[2]);
    u32 r0_7 = call_00131280(*gptr<u32>(r5 + 4u) << 2, *gptr<u32>(r0_5 + 4u), 4u);
    r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    *gptr<u32>(r5 + 0xa4u) = r0_7;  // (from the original)
    u32 r4 = 0u;
    if (s32(*gptr<u32>(r5 + 4u)) > 0) {
        do {
            gptr<Local_004fdec0_r7_1> r7_1 = gptr<Local_004fdec0_r7_1>(r5 + (r4 << 2));
            u32 r0_8 = r7_1->word_c;
            if (r0_8 == 0) {
                r6_1 = 0u;
            } else {
                r0_8 = call_00100834(r0_8, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r6_1 = r0_8;
            }
            u32 r0_9 = call_00569d50(r0_8, r1, r2);
            u32 r0_11 = call_00131280((r6_1 << 1) + 2u, *gptr<u32>(r0_9 + 4u), 4u);
            *gptr<u32>(*gptr<u32>(r5 + 0xa4u) + (r4 << 2)) = r0_11;  // (from the original)
            call_0010193a(r0_11, 0u, r6_1 + 1u);
            r2 = guest::cpu()->r[2];
            r1 = r7_1->word_c;
            if (r1 != 0) {
                call_00101800(*gptr<u32>(*gptr<u32>(r5 + 0xa4u) + (r4 << 2)), r1, r6_1);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(*gptr<u32>(r5 + 4u)) > s32(r4));
    }
    return r5;
}

}  // namespace d_004fdec0
GUEST_EXPORT_FRAMED(0x004fdec0, d_004fdec0::f_004fdec0, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_004fe28c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe28c {

struct __attribute__((packed)) Local_004fe28c_r1_4 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
};
GUEST_OFFSET(Local_004fe28c_r1_4, half_34, 0x34);
GUEST_OFFSET(Local_004fe28c_r1_4, half_36, 0x36);

inline constexpr u32 vtable_gui__NrmKey = 0x00903014u;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> call_00131280;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004fdec0, u32(u32, u32, u32, u32)> call_004fdec0;
inline constexpr guest::Function<0x00569d50, u32(u32)> call_00569d50;

u32 f_004fe28c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_004fdec0(r0, r1, r2, r3);
    u32 r4 = r0_1;
    *gptr<u32>(r4) = vtable_gui__NrmKey;
    call_002fbb30(r4 + 0xa8u, r1, 0xccu);  // (from the original)
    *gptr<u32>(r4 + 0x174u) = 0;  // (from the original)
    u32 r0_3 = call_00569d50(0u);
    u32 r0_5 = call_00131280(*gptr<u32>(r4 + 0xa8u) << 1, *gptr<u32>(r0_3 + 4u), 4u);  // (from the original)
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r4 + 0x174u) = r0_5;  // (from the original)
    u32 r0_6 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    if (s32(r0_6) <= 0) {
        r0 = 0u;
    } else {
        r0 = r0_6 & 1u;
        if (r0 == 1u) {
            r2 = *gptr<u16>(r4 + 0x134u);  // (from the original)
            *gptr<u16>(r0_5) = u16(r2);
        }
    }
    u32 r1_3 = *gptr<u32>(r4 + 0xa8u);  // (from the original)
    if (r1_3 != r0 && s32(r1_3) >= s32(r0)) {
        r2 = 2u;
    }
    if (s32(r1_3) > s32(r0)) {
        do {
            gptr<Local_004fe28c_r1_4> r1_4 = gptr<Local_004fe28c_r1_4>(r4 + (r0 << 1) + 0x100u);  // (from the original)
            u32 r12_1 = r2 + (r0 << 1);
            *gptr<u16>(*gptr<u32>(r4 + 0x174u) + (r0 << 1)) = u16(u32(r1_4->half_34));  // (from the original)
            r0 += 2u;
            *gptr<u16>(*gptr<u32>(r4 + 0x174u) + r12_1) = u16(u32(r1_4->half_36));  // (from the original)
            guest::preempt();
        } while (s32(*gptr<u32>(r4 + 0xa8u)) > s32(r0));  // (from the original)
    }
    return r4;
}

}  // namespace d_004fe28c
GUEST_EXPORT_FRAMED(0x004fe28c, d_004fe28c::f_004fe28c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fe440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe440 {

struct __attribute__((packed)) Local_004fe440_r4_1 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_1, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_1, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_2 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_2, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_2, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_3 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_3, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_3, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_4 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_4, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_4, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_5 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_5, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_5, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_6 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_6, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_6, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_7 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_7, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_7, byte_208, 0x208);

struct __attribute__((packed)) Local_004fe440_r4_8 {
    u8 unknown_0[0x154];  // (not used here)
    u32 word_154;
    u8 unknown_158[0xb0];  // (not used here)
    u8 byte_208;
};
GUEST_OFFSET(Local_004fe440_r4_8, word_154, 0x154);
GUEST_OFFSET(Local_004fe440_r4_8, byte_208, 0x208);

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline constexpr guest::Function<0x005ce6dc, u32(u32)> call_005ce6dc;

u32 f_004fe440(u32 r0) {
    gptr<Local_004fe440_r4_1> r4_1 = gptr<Local_004fe440_r4_1>(*global_0094fd3c);
    u32 r0_1 = call_005ce6dc(r0);
    if (r0_1 == 0) {
        r0_1 = r4_1->byte_208;
        if (r0_1 == 0) {
            r0_1 = r4_1->word_154;
            if ((r0_1 & 0x400u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_2> r4_2 = gptr<Local_004fe440_r4_2>(*global_0094fd3c);
    u32 r0_2 = call_005ce6dc(r0_1);
    if (r0_2 == 0) {
        r0_2 = r4_2->byte_208;
        if (r0_2 == 0) {
            r0_2 = r4_2->word_154;
            if ((r0_2 & 0x4000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_3> r4_3 = gptr<Local_004fe440_r4_3>(*global_0094fd3c);
    u32 r0_3 = call_005ce6dc(r0_2);
    if (r0_3 == 0) {
        r0_3 = r4_3->byte_208;
        if (r0_3 == 0) {
            r0_3 = r4_3->word_154;
            if ((r0_3 & 0x800u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_4> r4_4 = gptr<Local_004fe440_r4_4>(*global_0094fd3c);
    u32 r0_4 = call_005ce6dc(r0_3);
    if (r0_4 == 0) {
        r0_4 = r4_4->byte_208;
        if (r0_4 == 0) {
            r0_4 = r4_4->word_154;
            if ((r0_4 & 0x10000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_5> r4_5 = gptr<Local_004fe440_r4_5>(*global_0094fd3c);
    u32 r0_5 = call_005ce6dc(r0_4);
    if (r0_5 == 0) {
        r0_5 = r4_5->byte_208;
        if (r0_5 == 0) {
            r0_5 = r4_5->word_154;
            if ((r0_5 & 0x1000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_6> r4_6 = gptr<Local_004fe440_r4_6>(*global_0094fd3c);
    u32 r0_6 = call_005ce6dc(r0_5);
    if (r0_6 == 0) {
        r0_6 = r4_6->byte_208;
        if (r0_6 == 0) {
            r0_6 = r4_6->word_154;
            if ((r0_6 & 0x20000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_7> r4_7 = gptr<Local_004fe440_r4_7>(*global_0094fd3c);
    u32 r0_7 = call_005ce6dc(r0_6);
    if (r0_7 == 0) {
        r0_7 = r4_7->byte_208;
        if (r0_7 == 0) {
            r0_7 = r4_7->word_154;
            if ((r0_7 & 0x2000u) != 0) {  // (from the original)
                return 1u;
            }
        }
    }
    gptr<Local_004fe440_r4_8> r4_8 = gptr<Local_004fe440_r4_8>(*global_0094fd3c);
    u32 r0_8 = call_005ce6dc(r0_7);
    if (r0_8 != 0 || r4_8->byte_208 != 0 || (r4_8->word_154 & 0x40000u) == 0) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_004fe440
GUEST_EXPORT_FRAMED(0x004fe440, d_004fe440::f_004fe440, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_004fe5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe5b8 {

inline guest::global<u32, 0x0094fd3c> global_0094fd3c;
inline constexpr guest::Function<0x006d40d4, u32(u32, u32)> call_006d40d4;

u32 f_004fe5b8() {
    u32 r0_2 = call_006d40d4(*global_0094fd3c, 0x400u);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_4 = call_006d40d4(*global_0094fd3c, 0x4000u);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_6 = call_006d40d4(*global_0094fd3c, 0x800u);  // (from the original)
    if (r0_6 != 0) {
        return 1u;
    }
    u32 r0_8 = call_006d40d4(*global_0094fd3c, 0x10000u);  // (from the original)
    if (r0_8 != 0) {
        return 1u;
    }
    u32 r0_10 = call_006d40d4(*global_0094fd3c, 0x1000u);  // (from the original)
    if (r0_10 != 0) {
        return 1u;
    }
    u32 r0_12 = call_006d40d4(*global_0094fd3c, 0x20000u);  // (from the original)
    if (r0_12 != 0) {
        return 1u;
    }
    u32 r0_14 = call_006d40d4(*global_0094fd3c, 0x2000u);  // (from the original)
    if (r0_14 != 0) {
        return 1u;
    }
    u32 r0_16 = call_006d40d4(*global_0094fd3c, 0x40000u);  // (from the original)
    return r0_16 == 0 ? r0_16 : 1u;
}

}  // namespace d_004fe5b8
GUEST_EXPORT_FRAMED(0x004fe5b8, d_004fe5b8::f_004fe5b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_004fe6c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe6c8 {

inline guest::global<u32, 0x0095e10c> global_0095e10c;
inline guest::global<u32, 0x0095e180> global_0095e180;

void f_004fe6c8(u32 r0, u32 r1) {
    *global_0095e10c = r0;
    *global_0095e180 = r1;
}

}  // namespace d_004fe6c8
GUEST_EXPORT(0x004fe6c8, d_004fe6c8::f_004fe6c8);

// f_004fe968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004fe968 {

inline constexpr guest::Function<0x004fe9f4, u32(u32, u32, u32, u32)> call_004fe9f4;
inline constexpr guest::Function<0x004fef54, u32(u32, u32, u32, u32)> call_004fef54;

u32 f_004fe968(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = call_004fef54(r0, r1, r0, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r0_2 = call_004fe9f4(r2_1, r1, r2_1, r0_1);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r2 = r0_2;
    r0 = 1u;
    if (r3_1 != 0) {
        r0 = !(*gptr<u32>(r3_1 + 0x14u) == 1u);  // (from the original)
    }
    r1 = 0u;
    do {
        u32 r3_2 = *gptr<u32>(r2 + (r1 << 2));
        if (r3_2 != 0) {
            u32 r3_4 = !(*gptr<u32>(r3_2 + 0x14u) == 1u);  // (from the original)
            r0 &= r3_4;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 5);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_004fe968
GUEST_EXPORT_FRAMED(0x004fe968, d_004fe968::f_004fe968, 0x4010);  // pushes {r4, lr} first, as the original

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
GUEST_OFFSET(Object_004fed2c_0, word_0, 0x0);
GUEST_OFFSET(Object_004fed2c_0, word_4, 0x4);
GUEST_OFFSET(Object_004fed2c_0, word_8, 0x8);
GUEST_OFFSET(Object_004fed2c_0, word_c, 0xc);
GUEST_OFFSET(Object_004fed2c_0, word_10, 0x10);
GUEST_OFFSET(Object_004fed2c_0, word_14, 0x14);
GUEST_OFFSET(Object_004fed2c_0, word_18, 0x18);
GUEST_OFFSET(Object_004fed2c_0, word_1c, 0x1c);
GUEST_OFFSET(Object_004fed2c_0, word_20, 0x20);
GUEST_OFFSET(Object_004fed2c_0, word_24, 0x24);
GUEST_OFFSET(Object_004fed2c_0, word_28, 0x28);
GUEST_OFFSET(Object_004fed2c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_004fed2c_0, word_30, 0x30);
GUEST_OFFSET(Object_004fed2c_0, word_34, 0x34);
GUEST_OFFSET(Object_004fed2c_0, word_38, 0x38);
GUEST_OFFSET(Object_004fed2c_0, word_3c, 0x3c);
GUEST_OFFSET(Object_004fed2c_0, word_40, 0x40);
GUEST_OFFSET(Object_004fed2c_0, word_44, 0x44);
GUEST_OFFSET(Object_004fed2c_0, word_48, 0x48);
GUEST_OFFSET(Object_004fed2c_0, word_4c, 0x4c);
GUEST_OFFSET(Object_004fed2c_0, word_50, 0x50);
GUEST_OFFSET(Object_004fed2c_0, word_54, 0x54);
GUEST_OFFSET(Object_004fed2c_0, word_58, 0x58);
GUEST_OFFSET(Object_004fed2c_0, word_5c, 0x5c);
GUEST_OFFSET(Object_004fed2c_0, word_60, 0x60);
GUEST_OFFSET(Object_004fed2c_0, word_64, 0x64);
GUEST_OFFSET(Object_004fed2c_0, word_68, 0x68);
GUEST_OFFSET(Object_004fed2c_0, word_6c, 0x6c);
GUEST_OFFSET(Object_004fed2c_0, word_70, 0x70);
GUEST_OFFSET(Object_004fed2c_0, word_74, 0x74);
GUEST_OFFSET(Object_004fed2c_0, word_78, 0x78);
GUEST_OFFSET(Object_004fed2c_0, word_7c, 0x7c);
GUEST_OFFSET(Object_004fed2c_0, word_80, 0x80);
GUEST_OFFSET(Object_004fed2c_0, word_84, 0x84);
GUEST_OFFSET(Object_004fed2c_0, word_88, 0x88);
GUEST_OFFSET(Object_004fed2c_0, word_8c, 0x8c);
GUEST_OFFSET(Object_004fed2c_0, word_90, 0x90);
GUEST_OFFSET(Object_004fed2c_0, word_94, 0x94);
GUEST_OFFSET(Object_004fed2c_0, word_98, 0x98);
GUEST_OFFSET(Object_004fed2c_0, word_9c, 0x9c);
GUEST_OFFSET(Object_004fed2c_0, word_a0, 0xa0);
GUEST_OFFSET(Object_004fed2c_0, word_a4, 0xa4);
GUEST_OFFSET(Object_004fed2c_0, word_a8, 0xa8);
GUEST_OFFSET(Object_004fed2c_0, word_ac, 0xac);
GUEST_OFFSET(Object_004fed2c_0, word_b0, 0xb0);
GUEST_OFFSET(Object_004fed2c_0, word_b4, 0xb4);
GUEST_OFFSET(Object_004fed2c_0, word_b8, 0xb8);
GUEST_OFFSET(Object_004fed2c_0, word_bc, 0xbc);
GUEST_OFFSET(Object_004fed2c_0, word_c0, 0xc0);
GUEST_OFFSET(Object_004fed2c_0, word_c4, 0xc4);
GUEST_OFFSET(Object_004fed2c_0, word_c8, 0xc8);
GUEST_OFFSET(Object_004fed2c_0, word_cc, 0xcc);
GUEST_OFFSET(Object_004fed2c_0, word_d0, 0xd0);
GUEST_OFFSET(Object_004fed2c_0, word_d4, 0xd4);
GUEST_OFFSET(Object_004fed2c_0, word_d8, 0xd8);
GUEST_OFFSET(Object_004fed2c_0, word_dc, 0xdc);
GUEST_OFFSET(Object_004fed2c_0, word_e0, 0xe0);
GUEST_OFFSET(Object_004fed2c_0, word_e4, 0xe4);


void f_004fed2c(gptr<Object_004fed2c_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    u32 r2_1 = ~0x63u;  // (from the original)
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = r2_1;
    arg0->word_20 = r2_1;
    arg0->word_24 = r2_1;
    arg0->word_34 = 0;
    arg0->word_28 = r2_1;
    arg0->word_d8 = 0;
    arg0->word_dc = 0;
    arg0->word_e0 = 0;
    arg0->word_e4 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->word_60 = 0;
    arg0->word_64 = 0;
    arg0->word_68 = 0;
    arg0->word_6c = 0;
    arg0->word_70 = 0;
    arg0->word_74 = 0;
    arg0->word_78 = 0;
    arg0->word_7c = 0;
    arg0->word_80 = 0;
    arg0->word_84 = 0;
    arg0->word_88 = 0;
    arg0->word_8c = 0;
    arg0->word_90 = 0;
    arg0->word_94 = 0;
    arg0->word_98 = 0;
    arg0->word_9c = 0;
    arg0->word_a0 = 0;
    arg0->word_a4 = 0;
    arg0->word_a8 = 0;
    arg0->word_ac = 0;
    arg0->word_b0 = 0;
    arg0->word_b4 = 0;
    arg0->word_b8 = 0;
    arg0->word_bc = 0;
    arg0->word_c0 = 0;
    arg0->word_c4 = 0;
    arg0->word_c8 = 0;
    arg0->word_cc = 0;
    arg0->word_d0 = 0;
    arg0->word_d4 = 0;
    arg0->word_2c = r2_1;
    arg0->word_30 = ~0u;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_004fed2c
GUEST_EXPORT(0x004fed2c, d_004fed2c::f_004fed2c);

// f_004ff388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_004ff388 {

inline constexpr u32 vtable_gui__ButtonEx = 0x0090306cu;
inline guest::global<u32, 0x00ad6618> global_00ad6618;
inline guest::global<u32, 0x00ad661c> global_00ad661c;
inline guest::global<u32, 0x00ad6620> global_00ad6620;
inline guest::global<u32, 0x00ad6624> global_00ad6624;
inline guest::global<u32, 0x00ad6628> global_00ad6628;
inline constexpr guest::Function<0x00150bc0, u32(u32, u32, u32)> call_00150bc0;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x004f33dc, u32(u32, u32, u32, u32)> call_004f33dc;

u32 f_004ff388(gptr<gui__ButtonEx> arg0, u32 r1, u32 r2) {
    call_004f33dc(arg0.addr(), r1, r2, guest::cpu()->r[3]);
    arg0->word_0 = vtable_gui__ButtonEx;
    call_002fbb30(arg0.addr() + 0x30u, r1, 0xe8u);  // (from the original)
    u32 r2_1 = arg0->word_4c;
    u32 r0_2 = 1u;
    arg0->byte_118 = u8(r0_2);
    u32 zf_1 = r2_1 + 0x64u == 0;  // (from the original)
    if (r2_1 + 0x64u == 0) {  // (from the original)
        r0_2 = *global_00ad6618;
    }
    if (zf_1) {
        arg0->word_4c = r0_2;
    }
    if (arg0->word_50 + 0x64u == 0) {  // (from the original)
        arg0->word_50 = *global_00ad661c;
    }
    if (arg0->word_54 + 0x64u == 0) {  // (from the original)
        arg0->word_54 = *global_00ad6620;
    }
    if (arg0->word_58 + 0x64u == 0) {  // (from the original)
        arg0->word_58 = *global_00ad6624;
    }
    if (arg0->word_5c + 0x64u == 0) {  // (from the original)
        arg0->word_5c = *global_00ad6628;
    }
    arg0->word_18 = arg0.addr() + 0x30u;  // (from the original)
    call_00150bc0(arg0.addr() + 0x1cu, arg0->word_34, 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_004ff388
GUEST_EXPORT_FRAMED(0x004ff388, d_004ff388::f_004ff388, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
