// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00331550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331550 {

inline constexpr guest::Function<0x00112e09, u32(u32, u32)> call_00112e08;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;

struct __attribute__((packed)) Frame_00331550 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00331550, word_0, 0x0);
GUEST_SIZE(Frame_00331550, 0x4);

u32 f_00331550(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00331550> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], r3);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = *gptr<s8>(r0 + 2u);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r1_4 = *gptr<u16>(r0);
    u32 r0_6 = call_002fcbb0(frame.at(0).addr(), r1_4);
    call_00112e08(r0_4, r0_6);
    return frame.at(0).addr();
}

}  // namespace d_00331550
GUEST_EXPORT_FRAMED(0x00331550, d_00331550::f_00331550, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00331778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331778 {

struct __attribute__((packed)) Object_00331778_0 {
    u8 unknown_0[0x4e4];  // (not used here)
    u32 word_4e4;
    u8 unknown_4e8[0x4];  // (not used here)
    u16 half_4ec;
    u8 byte_4ee;
};
GUEST_OFFSET(Object_00331778_0, word_4e4, 0x4e4);
GUEST_OFFSET(Object_00331778_0, half_4ec, 0x4ec);
GUEST_OFFSET(Object_00331778_0, byte_4ee, 0x4ee);


void f_00331778(gptr<Object_00331778_0> arg0) {
    u32 r1_1 = *gptr<u16>(arg0->word_4e4 + 0x2eu);  // (from the original)
    arg0->half_4ec = u16(r1_1);
    arg0->byte_4ee = 1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00331778
GUEST_EXPORT(0x00331778, d_00331778::f_00331778);

// f_003317b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003317b4 {

struct __attribute__((packed)) Local_003317b4_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u32 word_14;
};
GUEST_OFFSET(Local_003317b4_r4_1, byte_10, 0x10);
GUEST_OFFSET(Local_003317b4_r4_1, byte_11, 0x11);
GUEST_OFFSET(Local_003317b4_r4_1, byte_12, 0x12);
GUEST_OFFSET(Local_003317b4_r4_1, byte_13, 0x13);
GUEST_OFFSET(Local_003317b4_r4_1, word_14, 0x14);

inline constexpr u32 vtable_NpcLockPlayerPermitBit__SingletonDisposer_ = 0x008faafcu;
inline guest::global<u32, 0x0095385c> global_0095385c;
inline guest::global<u32, 0x00953860> global_00953860;
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;

void f_003317b4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    if (*global_0095385c == 0) {
        u32 r0_1 = call_00131280(0x18u, r0, 4u, r3);  // (from the original)
        gptr<Local_003317b4_r4_1> r4_1 = gptr<Local_003317b4_r4_1>(r0_1);
        if (r0_1 == 0) {
            *global_00953860 = r4_1.addr();
        } else {
            u32 r0_2 = call_001320cc(r0_1, r0, 3u);
            *gptr<u32>(r0_2) = vtable_NpcLockPlayerPermitBit__SingletonDisposer_;
            *global_00953860 = r0_2;
            r4_1->byte_10 = 0;
            r4_1->byte_11 = 0;
            r4_1->byte_12 = 4;
            r4_1->byte_13 = 0x3f;  // (from the original)
            r0_1 = r4_1.addr();
            r4_1->word_14 = 0;
        }
        *global_0095385c = r0_1;
    }
}

}  // namespace d_003317b4
GUEST_EXPORT_FRAMED(0x003317b4, d_003317b4::f_003317b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
GUEST_OFFSET(Object_003319e8_0, byte_10, 0x10);
GUEST_OFFSET(Object_003319e8_0, byte_11, 0x11);
GUEST_OFFSET(Object_003319e8_0, byte_12, 0x12);
GUEST_OFFSET(Object_003319e8_0, byte_13, 0x13);
GUEST_OFFSET(Object_003319e8_0, word_14, 0x14);


void f_003319e8(gptr<Object_003319e8_0> arg0) {
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    arg0->byte_12 = 4;
    arg0->byte_13 = 0x3f;  // (from the original)
    arg0->word_14 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_003319e8
GUEST_EXPORT(0x003319e8, d_003319e8::f_003319e8);

// f_00331a0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a0c {

struct __attribute__((packed)) Object_00331a0c_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    u16 half_c;
};
GUEST_OFFSET(Object_00331a0c_0, half_0, 0x0);
GUEST_OFFSET(Object_00331a0c_0, float_4, 0x4);
GUEST_OFFSET(Object_00331a0c_0, float_8, 0x8);
GUEST_OFFSET(Object_00331a0c_0, half_c, 0xc);


void f_00331a0c(gptr<Object_00331a0c_0> arg0, u32 r1, float S0, float S1) {
    arg0->half_0 = u16(r1);
    arg0->half_c = u16(r1);
    arg0->float_4 = S0;
    arg0->float_8 = S1;
}

}  // namespace d_00331a0c
GUEST_EXPORT(0x00331a0c, d_00331a0c::f_00331a0c);

// f_00331a20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a20 {

struct __attribute__((packed)) Object_00331a20_0 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    float float_4;
    float float_8;
    u16 half_c;
};
GUEST_OFFSET(Object_00331a20_0, half_0, 0x0);
GUEST_OFFSET(Object_00331a20_0, float_4, 0x4);
GUEST_OFFSET(Object_00331a20_0, float_8, 0x8);
GUEST_OFFSET(Object_00331a20_0, half_c, 0xc);


void f_00331a20(gptr<Object_00331a20_0> arg0) {
    float S0_1 = 0.0f;
    arg0->half_0 = 0;
    arg0->float_4 = S0_1;
    arg0->float_8 = S0_1;
    arg0->half_c = 0;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00331a20
GUEST_EXPORT(0x00331a20, d_00331a20::f_00331a20);

// f_00331a40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a40 {

inline constexpr guest::Function<0x002d1f40, u32(u32, u32, u32, u32)> call_002d1f40;

struct __attribute__((packed)) Frame_00331a40 {
    u32 word_0;
};
GUEST_OFFSET(Frame_00331a40, word_0, 0x0);
GUEST_SIZE(Frame_00331a40, 0x4);

u32 f_00331a40(gptr<SoundObjFurnitureAudio> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00331a40> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = *frame.at<u32>(0x10);  // (from the original)
    if (arg0->byte_34 != 0) {
        return arg0.addr();
    }
    arg0->word_3c = 9;
    frame->word_0 = r12_1;
    u32 r0_1 = call_002d1f40(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    return r0_1;
}

}  // namespace d_00331a40
GUEST_EXPORT_FRAMED(0x00331a40, d_00331a40::f_00331a40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00331a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331a68 {

struct __attribute__((packed)) Local_00331a68_r4_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331a68_r4_1, word_794, 0x794);

inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;

u32 f_00331a68(u32 r0) {
    u32 r5_1 = r0 + 8u;
    u32 r0_1 = 0x94d548u;  // (from the original)
    gptr<Local_00331a68_r4_1> r4_1 = gptr<Local_00331a68_r4_1>(*gptr<u32>(r0_1));
    if (r4_1.addr() != 0) {
        if (r4_1->word_794 == r5_1) {
            call_0012eb50(r4_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r0_1 = r4_1->word_794;
        if (r0_1 == r5_1) {
            r0_1 = 0u;
            r4_1->word_794 = r0_1;
        }
    }
    return r0_1;
}

}  // namespace d_00331a68
GUEST_EXPORT_FRAMED(0x00331a68, d_00331a68::f_00331a68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00331ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331ab0 {

inline guest::global<u32, 0x0094d548> global_0094d548;
inline constexpr guest::Function<0x003220e0, u32(u32, u32, u32, u32)> call_003220e0;

u32 f_00331ab0() {
    u32 r0_1 = *global_0094d548;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_003220e0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331ab0
GUEST_EXPORT(0x00331ab0, d_00331ab0::f_00331ab0);

// f_00331ad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331ad4 {

inline guest::global<u32, 0x0094d548> global_0094d548;
inline constexpr guest::Function<0x0032245c, u32(u32, u32, u32, u32)> call_0032245c;

u32 f_00331ad4(u32 r0) {
    u32 r2_1 = r0 + 8u;
    u32 r0_1 = *global_0094d548;
    if (r0_1 == 0) {
        return r0_1;
    }
    *gptr<u32>(r0_1 + 0x794u) = r2_1;  // (from the original)
    return call_0032245c(r0_1, guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00331ad4
GUEST_EXPORT(0x00331ad4, d_00331ad4::f_00331ad4);

// f_00331c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331c1c {

struct __attribute__((packed)) Local_00331c1c_r4_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331c1c_r4_1, word_794, 0x794);

inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;

u32 f_00331c1c(gptr<SoundObjFurnitureAudio> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0->byte_34;
    if (r0_1 != 0) {
        r0_1 = 0x94d548u;  // (from the original)
        gptr<Local_00331c1c_r4_1> r4_1 = gptr<Local_00331c1c_r4_1>(*gptr<u32>(r0_1));
        if (r4_1.addr() != 0) {
            if (r4_1->word_794 == arg0.addr()) {
                call_0012eb50(r4_1.addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                if (r4_1->word_794 == arg0.addr()) {
                    r4_1->word_794 = 0;
                }
            }
            frame.release();
            return call_002d27e0(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00331c1c
GUEST_EXPORT(0x00331c1c, d_00331c1c::f_00331c1c);

// f_00331c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331c7c {

inline constexpr u32 vtable_SoundObjFurnitureAudio = 0x008f5bb0u;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;

u32 f_00331c7c(u32 r0, u32 r1) {
    u32 r0_1 = call_002d2a4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_SoundObjFurnitureAudio;
    guest::cpu()->r[1] = 0x8f5bb0u;  // (from the original)
    return r0_1;
}

}  // namespace d_00331c7c
GUEST_EXPORT_FRAMED(0x00331c7c, d_00331c7c::f_00331c7c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00331d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00331d0c {

struct __attribute__((packed)) Local_00331d0c_r5_1 {
    u8 unknown_0[0x794];  // (not used here)
    u32 word_794;
};
GUEST_OFFSET(Local_00331d0c_r5_1, word_794, 0x794);

inline constexpr u32 vtable_SoundObjFurnitureAudio = 0x008f5bb0u;
inline guest::global<u32, 0x0094d548> global_0094d548;
inline constexpr guest::Function<0x0012eb50, u32(u32, u32, u32, u32)> call_0012eb50;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;

u32 f_00331d0c(gptr<SoundObjFurnitureAudio> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    arg0->word_0 = vtable_SoundObjFurnitureAudio;
    if (arg0->byte_34 != 0) {
        gptr<Local_00331d0c_r5_1> r5_1 = gptr<Local_00331d0c_r5_1>(*global_0094d548);
        if (r5_1.addr() != 0) {
            u32 r1_1 = r5_1->word_794;
            if (r1_1 == arg0.addr()) {
                call_0012eb50(r5_1.addr(), 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_1 = r5_1->word_794;
                if (r1_1 == arg0.addr()) {
                    r5_1->word_794 = 0;
                }
            }
            call_002d27e0(arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
    }
    frame.release();
    return call_002d2b90(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00331d0c
GUEST_EXPORT(0x00331d0c, d_00331d0c::f_00331d0c);

// f_003324bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003324bc {

struct __attribute__((packed)) Object_003324bc_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
};
GUEST_OFFSET(Object_003324bc_0, word_90, 0x90);
GUEST_OFFSET(Object_003324bc_0, word_94, 0x94);
GUEST_OFFSET(Object_003324bc_0, word_98, 0x98);
GUEST_OFFSET(Object_003324bc_0, word_9c, 0x9c);
GUEST_OFFSET(Object_003324bc_0, word_a0, 0xa0);
GUEST_OFFSET(Object_003324bc_0, word_a4, 0xa4);

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;

u32 f_003324bc(gptr<Object_003324bc_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_90;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = arg0->word_94;
    if (r0_2 != 0) {
        call_00136e58(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    u32 r1_1 = ~0u;
    arg0->word_98 = r1_1;
    arg0->word_a0 = 0;
    arg0->word_9c = r1_1;
    arg0->word_a4 = 0;
    arg0->word_90 = 0;
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_003324bc
GUEST_EXPORT_FRAMED(0x003324bc, d_003324bc::f_003324bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033254c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033254c {

struct __attribute__((packed)) Local_0033254c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033254c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0033254c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0033254c_r0_1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x94];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u32 word_ac;
    float float_b0;
    float float_b4;
    float float_b8;
    u32 word_bc;
    float float_c0;
    float float_c4;
};
GUEST_OFFSET(Local_0033254c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0033254c_r0_1, word_4, 0x4);
GUEST_OFFSET(Local_0033254c_r0_1, word_9c, 0x9c);
GUEST_OFFSET(Local_0033254c_r0_1, word_a0, 0xa0);
GUEST_OFFSET(Local_0033254c_r0_1, word_a4, 0xa4);
GUEST_OFFSET(Local_0033254c_r0_1, word_a8, 0xa8);
GUEST_OFFSET(Local_0033254c_r0_1, word_ac, 0xac);
GUEST_OFFSET(Local_0033254c_r0_1, float_b0, 0xb0);
GUEST_OFFSET(Local_0033254c_r0_1, float_b4, 0xb4);
GUEST_OFFSET(Local_0033254c_r0_1, float_b8, 0xb8);
GUEST_OFFSET(Local_0033254c_r0_1, word_bc, 0xbc);
GUEST_OFFSET(Local_0033254c_r0_1, float_c0, 0xc0);
GUEST_OFFSET(Local_0033254c_r0_1, float_c4, 0xc4);

inline constexpr u32 vtable_SoundFader_rec = 0x008eb474u;
inline constexpr u32 vtable_SoundObjFurnitureOrgel = 0x008f5bf8u;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;

u32 f_0033254c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    gptr<Local_0033254c_r0_1> r0_1 = gptr<Local_0033254c_r0_1>(call_002d2a4c(r0, r1, r2, r3));
    u32 r3_1 = ~0u;
    r0_1->word_0 = vtable_SoundObjFurnitureOrgel;
    *gptr<u32>(r0_1.addr() + 0x90u) = 0;  // (from the original)
    gptr<Local_0033254c_ea_2> ea_2 = gptr<Local_0033254c_ea_2>(r0_1.addr() + 0x94u);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r3_1;
    r0_1->word_a0 = 0;
    r0_1->word_9c = r3_1;
    r0_1->word_a4 = 0;
    r0_1->word_a8 = 0x78;  // (from the original)
    float S0_1 = 0.0f;
    r0_1->word_ac = vtable_SoundFader_rec;
    r0_1->float_b0 = S0_1;
    r0_1->float_b4 = S0_1;
    r0_1->float_b8 = S0_1;
    r0_1->word_bc = r3_1;
    r0_1->float_c0 = S0_1;
    r0_1->float_c4 = S0_1;
    r0_1->word_4 = 4;
    guest::cpu()->r[1] = 4u;
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_0033254c
GUEST_EXPORT_FRAMED(0x0033254c, d_0033254c::f_0033254c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00332628: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332628 {

struct __attribute__((packed)) Object_00332628_0 {
    u32 word_0;
    u8 unknown_4[0x8c];  // (not used here)
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
};
GUEST_OFFSET(Object_00332628_0, word_0, 0x0);
GUEST_OFFSET(Object_00332628_0, word_90, 0x90);
GUEST_OFFSET(Object_00332628_0, word_94, 0x94);
GUEST_OFFSET(Object_00332628_0, word_98, 0x98);
GUEST_OFFSET(Object_00332628_0, word_9c, 0x9c);
GUEST_OFFSET(Object_00332628_0, word_a0, 0xa0);
GUEST_OFFSET(Object_00332628_0, word_a4, 0xa4);

inline constexpr u32 vtable_SoundObjFurnitureOrgel = 0x008f5bf8u;
inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;

u32 f_00332628(gptr<Object_00332628_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_SoundObjFurnitureOrgel;
    if (arg0->word_90 != 0) {
        u32 r0_1 = arg0->word_94;
        if (r0_1 != 0) {
            call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r1 = ~0u;
        arg0->word_98 = r1;
        arg0->word_a0 = 0;
        arg0->word_9c = r1;
        arg0->word_a4 = 0;
        arg0->word_90 = 0;
    }
    call_00136cc8(arg0.addr() + 0x94u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_002d2b90(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00332628
GUEST_EXPORT(0x00332628, d_00332628::f_00332628);

// f_00332688: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332688 {

struct __attribute__((packed)) Local_00332688_r4_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_00332688_r4_1, byte_26e, 0x26e);
GUEST_OFFSET(Local_00332688_r4_1, byte_26f, 0x26f);
GUEST_OFFSET(Local_00332688_r4_1, byte_270, 0x270);
GUEST_OFFSET(Local_00332688_r4_1, byte_271, 0x271);
GUEST_OFFSET(Local_00332688_r4_1, byte_272, 0x272);

struct __attribute__((packed)) Local_00332688_r5_2 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_00332688_r5_2, byte_26e, 0x26e);
GUEST_OFFSET(Local_00332688_r5_2, byte_26f, 0x26f);
GUEST_OFFSET(Local_00332688_r5_2, byte_270, 0x270);
GUEST_OFFSET(Local_00332688_r5_2, byte_271, 0x271);
GUEST_OFFSET(Local_00332688_r5_2, byte_272, 0x272);

inline constexpr guest::Function<0x001e4348, u32(u32, u32, u32)> call_001e4348;
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;
inline constexpr guest::Function<0x002fb918, u32(u32)> call_002fb918;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32)> call_002fbb30;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> call_00311c70;
inline constexpr guest::Function<0x007105d4, u32(u32, u32, u32)> call_007105d4;

void f_00332688(u32 r0, u32 r1, u32 r2) {
    u32 r7 = r0;
    u32 r0_1 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_002fb918(r0_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 r0_3 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
        u32 r8 = 0u;
        u32 r5 = (r0_2 + 0xa400u) + 0xf8u;  // (from the original)
        u32 r9 = r7 + 0xc80u;  // (from the original)
        u32 r4 = r8;
        if (r0_3 >= 0u && r0_3 != 0) {
            do {
                u32 r0_4 = call_007105d4(r5, r1, r2);
                if (r0_4 + 1u == 0) {
                    goto L_3326f8;
                }
                call_001e4348(r5, r0_4, r7 + (r4 + (r4 << 2) << 7));
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r4 += 1u;
                r8 += 1u;
                guest::preempt();
            } while (*gptr<u32>(r7 + 0xc80u) > r4);  // (from the original)
        }
L_3326f8:;
        u32 r0_5 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
        u32 zf_1 = r0_5 == r8;
        if (zf_1) {
            r0_5 = 0u;
            *gptr<u32>(r7 + 0xc80u) = r0_5;  // (from the original)
        } else {
            zf_1 = r8 == 0;
        }
        if (!zf_1) {
            u32 r6 = r8;
            if (r0_5 > r6) {
                u32 r10 = 0x182u;  // (from the original)
                do {
                    u32 r0_6 = r6 - r8;
                    gptr<Local_00332688_r5_2> r5_2 = gptr<Local_00332688_r5_2>(r7 + (r6 + (r6 << 2) << 7));
                    gptr<Local_00332688_r4_1> r4_1 = gptr<Local_00332688_r4_1>(r7 + (r0_6 + (r0_6 << 2) << 7));
                    call_002fbb30(r4_1.addr(), r5_2.addr(), 0x31u);  // (from the original)
                    call_002fbb30(r4_1.addr() + 0x34u, r5_2.addr() + 0x34u, 0x31u);  // (from the original)
                    call_002fbb30(r4_1.addr() + 0x68u, r5_2.addr() + 0x68u, 0x42u);  // (from the original)
                    call_002f8574(r4_1.addr() + 0xaau, r5_2.addr() + 0xaau, r10);  // (from the original)
                    call_002fbb30(r4_1.addr() + 0x22cu, r5_2.addr() + 0x22cu, 0x42u);  // (from the original)
                    r4_1->byte_26e = u8(u32(r5_2->byte_26e));
                    r4_1->byte_26f = u8(u32(r5_2->byte_26f));
                    r4_1->byte_270 = u8(u32(r5_2->byte_270));
                    r4_1->byte_271 = u8(u32(r5_2->byte_271));
                    r4_1->byte_272 = u8(u32(r5_2->byte_272));
                    call_002fc8e8(r4_1.addr() + 0x274u, r5_2.addr() + 0x274u);  // (from the original)
                    call_00311c70(r4_1.addr() + 0x278u, r5_2.addr() + 0x278u);  // (from the original)
                    r0_5 = *gptr<u32>(r7 + 0xc80u);  // (from the original)
                    r6 += 1u;
                    guest::preempt();
                } while (r0_5 > r6);
            }
            *gptr<u32>(r9) = r0_5 - r8;
        }
    }
}

}  // namespace d_00332688
GUEST_EXPORT_FRAMED(0x00332688, d_00332688::f_00332688, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_003327e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003327e8 {

struct __attribute__((packed)) Object_003327e8_0 {
    u8 unknown_0[0xc80];  // (not used here)
    u32 word_c80;
};
GUEST_OFFSET(Object_003327e8_0, word_c80, 0xc80);

struct __attribute__((packed)) Local_003327e8_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_003327e8_r5_1, word_0, 0x0);

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x005cc2f4, u32(u32, u32, u32, u32)> call_005cc2f4;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> call_00768138;

struct __attribute__((packed)) Frame_003327e8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_003327e8, word_0, 0x0);
GUEST_OFFSET(Frame_003327e8, word_4, 0x4);
GUEST_OFFSET(Frame_003327e8, word_8, 0x8);
GUEST_SIZE(Frame_003327e8, 0x14);

u32 f_003327e8(gptr<Object_003327e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003327e8> frame;  // the original's stack frame
    u32 r0_1 = 0;
    gptr<Local_003327e8_r5_1> r5_1 = gptr<Local_003327e8_r5_1>(arg0.addr() + 0xc80u);  // (from the original)
    if (arg0->word_c80 >= 5u) {
        r0_1 = 0u;
    } else {
        call_002fcbb0(frame.at(0xc).addr(), 0x225au, r2, r3);  // (from the original)
        frame->word_0 = frame.at(0xc).addr();  // (from the original)
        frame->word_4 = 9;
        frame->word_8 = 0x3327e4;  // (from the original)
        u32 r0_3 = arg0->word_c80;
        call_005cc2f4(arg0.addr() + (r0_3 + (r0_3 << 2) << 7), 0x332888u, 3u, r1);  // (from the original)
        u32 r0_5 = r5_1->word_0;
        call_00768138(arg0.addr() + (r0_5 + (r0_5 << 2) << 7), r2, 0u);
        r1 = guest::cpu()->r[1];
        r5_1->word_0 = r5_1->word_0 + 1u;
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_003327e8
GUEST_EXPORT_FRAMED(0x003327e8, d_003327e8::f_003327e8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_003328ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003328ec {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_003328ec() {
    return call_00301d0c(guest::cpu()->r[0], 0x2ff368u, 0x280u, 5u);  // (from the original)
}

}  // namespace d_003328ec
GUEST_EXPORT(0x003328ec, d_003328ec::f_003328ec);

// f_00332900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00332900 {

struct __attribute__((packed)) Object_00332900_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 unknown_5[0x1];  // (not used here)
    u16 half_6;
};
GUEST_OFFSET(Object_00332900_0, byte_0, 0x0);
GUEST_OFFSET(Object_00332900_0, byte_1, 0x1);
GUEST_OFFSET(Object_00332900_0, byte_2, 0x2);
GUEST_OFFSET(Object_00332900_0, byte_3, 0x3);
GUEST_OFFSET(Object_00332900_0, byte_4, 0x4);
GUEST_OFFSET(Object_00332900_0, half_6, 0x6);

struct __attribute__((packed)) Local_00332900_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_00332900_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_00332900_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_00332900_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_00332900_r1_1, byte_3, 0x3);
GUEST_OFFSET(Local_00332900_r1_1, byte_4, 0x4);
GUEST_OFFSET(Local_00332900_r1_1, byte_5, 0x5);

inline guest::global<u32, 0x0014fbb8> global_0014fbb8;
inline guest::global<u32, 0x0094ddcc> global_0094ddcc;
inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_00332900(gptr<Object_00332900_0> r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00332900_r1_1> r1_1 = gptr<Local_00332900_r1_1>(*global_0095386c);
    u32 r3_1 = u32(r1_1->byte_0) & ~3u | u32(r0->byte_0) & 3u;
    r1_1->byte_0 = u8(r3_1);
    u32 r3_2 = r3_1 & ~0x3cu | (u32(r0->byte_1) & 0xfu) << 2;  // (from the original)
    r1_1->byte_0 = u8(r3_2);
    u32 r2_1 = r0->byte_2;
    r1_1->byte_0 = u8(r3_2 & ~0x80u | r2_1 << 7);  // (from the original)
    u32 r3_3 = u32(r1_1->byte_1) & ~3u | (r2_1 & 6u) >> 1;
    r1_1->byte_1 = u8(r3_3);
    u32 r3_4 = r3_3 & ~0xcu | (u32(r0->byte_3) & 3u) << 2;  // (from the original)
    r1_1->byte_1 = u8(r3_4);
    u32 r3_5 = r3_4 & ~0x70u | (u32(r0->byte_4) & 7u) << 4;  // (from the original)
    r1_1->byte_1 = u8(r3_5);
    u32 r2_2 = r0->half_6;
    r1_1->byte_1 = u8(r3_5 & ~0x80u | r2_2 << 7);  // (from the original)
    r1_1->byte_2 = u8(r2_2 >> 1);
    r1_1->byte_3 = u8(r2_2 >> 9);
    r1_1->byte_4 = u8(0u | r2_2 >> 0x11);  // (from the original)
    u32 r3_6 = u32(r1_1->byte_5) & ~0x7fu;  // (from the original)
    u32 r2_3 = r3_6 | r2_2 >> 0x19;  // (from the original)
    r1_1->byte_5 = u8(r2_3);
    u32 r0_1 = r0->byte_1;
    if (r0_1 != 3u) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_1;
    }
    u32 r0_2 = *global_0094ddcc;
    if (r0_2 == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return r0_2;
    }
    frame.release();
    return guest::call_address<u32>(*global_0014fbb8, r0_2, r1_1.addr(), r2_3, r3_6);
}

}  // namespace d_00332900
GUEST_EXPORT(0x00332900, d_00332900::f_00332900);

// f_00333310: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00333310 {

inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_00333310(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_0095386c;
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

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;
inline constexpr guest::Function<0x0030f594, u32(u32)> call_0030f594;

struct __attribute__((packed)) Frame_0033527c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0033527c, word_0, 0x0);
GUEST_SIZE(Frame_0033527c, 0x4);

u32 f_0033527c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0033527c> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = *gptr<s8>(r0 + 2u);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r1_4 = *gptr<u16>(r0);
    call_002fcbb0(frame.at(0).addr(), r1_4);
    u32 r0_7 = call_0030f594(frame.at(0).addr());
    if (r0_7 != 0) {
        u32 r2_5 = *gptr<s8>(r0 + 2u);
        call_00304f30(frame.at(0).addr(), 1u, r2_5, 0u);
    }
    call_002fc8e8(r0_4 + 0x249au, frame.at(0).addr());  // (from the original)
    return frame.at(0).addr();
}

}  // namespace d_0033527c
GUEST_EXPORT_FRAMED(0x0033527c, d_0033527c::f_0033527c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_003352f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003352f0 {

struct __attribute__((packed)) Object_003352f0_0 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Object_003352f0_0, byte_eb, 0xeb);

inline constexpr guest::Function<0x0056a9bc, u32(u32)> call_0056a9bc;

u32 f_003352f0(gptr<Object_003352f0_0> arg0) {
    if (arg0->byte_eb == 0) {
        return 1u;
    }
    u32 r0_1 = call_0056a9bc(arg0.addr());
    if (r0_1 == 0) {
        return r0_1;
    }
    arg0->byte_eb = 0;
    return 1u;
}

}  // namespace d_003352f0
GUEST_EXPORT_FRAMED(0x003352f0, d_003352f0::f_003352f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335328 {

struct __attribute__((packed)) Object_00335328_0 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Object_00335328_0, byte_eb, 0xeb);

struct __attribute__((packed)) Local_00335328_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00335328_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00335328_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_00335328_r4_1 {
    u8 unknown_0[0xeb];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Local_00335328_r4_1, byte_eb, 0xeb);

inline constexpr u32 vtable_sead__FixedSafeString_128_ = 0x00904860u;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0030f48c, u32(u32, u32, u32, u32)> call_0030f48c;
inline constexpr guest::Function<0x0056a4a4, u32(u32)> call_0056a4a4;
inline constexpr guest::Function<0x0056a94c, u32(u32, u32, u32, u32)> call_0056a94c;

struct __attribute__((packed)) Frame_00335328 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
    u8 byte_c;
    u8 unknown_d[0x83];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00335328, word_0, 0x0);
GUEST_OFFSET(Frame_00335328, word_4, 0x4);
GUEST_OFFSET(Frame_00335328, byte_c, 0xc);
GUEST_SIZE(Frame_00335328, 0x90);

u32 f_00335328(gptr<Object_00335328_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00335328> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_5 = 0;
    gptr<Local_00335328_r4_1> r4_1 = gptr<Local_00335328_r4_1>(r0);
    u32 r5_1 = r2;
    if (r1 != 0 && arg0->byte_eb < 3u) {
        gptr<Local_00335328_ea_1> ea_1 = gptr<Local_00335328_ea_1>(frame.at(4).addr());
        ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
        ea_1->word_4 = 0x80;  // (from the original)
        r3_1 = 0x80u;  // (from the original)
        *gptr<u8>(r3_1 + (frame->word_4 - 1u)) = u8(u32(*global_008c9f1c));
        frame->byte_c = u8(u32(*global_008c9f1c));
        frame->word_0 = vtable_sead__FixedSafeString_128_;
        r0_1 = r4_1->byte_eb;
        if (r0_1 != 0) {
            if (r0_1 == 2u) {
                goto L_3353dc;
            }
            goto L_3353ec;
        }
        call_0030f48c(frame.at(0).addr(), 0x881094u, r1, r3_1);  // (from the original)
        u32 r0_4 = call_0056a4a4(frame.at(0).addr());
        r3_1 = guest::cpu()->r[3];
        u32 zf_1 = r0_4 == 0;
        r0_1 = r0_4 == 0 ? 2u : 1u;
        r4_1->byte_eb = u8(r0_1);
        if (!zf_1) {
            goto L_3353ec;
        }
        goto L_3353dc;
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_3353dc:;
    r0_5 = frame.at(0).addr();
    r0_1 = call_0030f48c(r0_5, 0x881094u, 0x88108cu, r3_1);  // (from the original)
    r3_1 = guest::cpu()->r[3];
L_3353ec:;
    if (r5_1 == 0) {
        r0_1 = 0x952c3cu;  // (from the original)
    }
    if (r5_1 == 0) {
        r5_1 = *gptr<u32>(r0_1);
    }
    r0 = call_0056a94c(r4_1.addr(), frame.at(0).addr(), r5_1, r3_1);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r4_1->byte_eb = 3;
        return 1u;
    }
    return r0;
}

}  // namespace d_00335328
GUEST_EXPORT_FRAMED(0x00335328, d_00335328::f_00335328, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033543c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033543c {

inline constexpr guest::Function<0x001b5d74, u32(u32)> call_001b5d74;
inline constexpr guest::Function<0x001b5d94, u32(u32, u32, u32, u32)> call_001b5d94;
inline constexpr guest::Function<0x00335328, u32(u32, u32, u32, u32)> call_00335328;

u32 f_0033543c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r6 = r2;
    u32 r7 = r3;
    u32 r0_1 = call_001b5d94(r1, r1, r2, r3);
    if (r0_1 == 0) {
        goto L_335484;
    }
    r0_2 = call_001b5d74(r1);
    r1 = r0_2;
    if (r0_2 == 0) {
        goto L_335484;
    }
    frame.release();
    return call_00335328(r5, r1, r6, r7);
L_335484:;
    r1 = 0x33548cu;  // (from the original)
    frame.release();
    return call_00335328(r5, r1, r6, r7);
}

}  // namespace d_0033543c
GUEST_EXPORT(0x0033543c, d_0033543c::f_0033543c);

// f_00335494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335494 {

struct __attribute__((packed)) Local_00335494_r0_1 {
    u32 word_0;
    u8 unknown_4[0xe7];  // (not used here)
    u8 byte_eb;
};
GUEST_OFFSET(Local_00335494_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_00335494_r0_1, byte_eb, 0xeb);

inline constexpr u32 vtable_NpcCampingCarInfoLoader = 0x008f6224u;
inline constexpr guest::Function<0x0012ca7c, u32(u32)> call_0012ca7c;

u32 f_00335494(u32 r0) {
    gptr<Local_00335494_r0_1> r0_1 = gptr<Local_00335494_r0_1>(call_0012ca7c(r0));
    r0_1->word_0 = vtable_NpcCampingCarInfoLoader;
    r0_1->byte_eb = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_00335494
GUEST_EXPORT_FRAMED(0x00335494, d_00335494::f_00335494, 0x4010);  // pushes {r4, lr} first, as the original

// f_003354c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003354c8 {

inline constexpr guest::Function<0x00130ed8, u32(u32, u32)> call_00130ed8;
inline constexpr guest::Function<0x002d24e0, u32(u32, u32, u32, u32)> call_002d24e0;
inline constexpr guest::Function<0x004c331c, u32(u32, u32, u32, u32)> call_004c331c;
inline constexpr guest::Function<0x0073e780, u32(u32, u32, u32)> call_0073e780;

struct __attribute__((packed)) Frame_003354c8 {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x6];  // (not read or written by name)
};
GUEST_OFFSET(Frame_003354c8, word_0, 0x0);
GUEST_OFFSET(Frame_003354c8, half_4, 0x4);
GUEST_SIZE(Frame_003354c8, 0xc);

u32 f_003354c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003354c8> frame;  // the original's stack frame
    u32 r4 = r0;
    call_002d24e0(r0, r1, r2, r3);
    r1 = r4 + 0x44u;  // (from the original)
    r3 = *gptr<u32>(*gptr<u32>(r4 + 0x7cu) + 8u);  // (from the original)
    r0 = 0u;
    u32 r5 = r0;
    do {
        u32 r2_1 = *gptr<u32>(r0 >= 2u ? r1 : r1 + (r0 << 2));
        u32 r2_2 = r2_1 == 0 ? ~0u : *gptr<u32>(r2_1 + 0xb0u);  // (from the original)
        if (r2_2 == r3) {
            if (r0 < 2u) {
                r1 += (r0 << 2);
            }
            if (r1 == 0) {
                *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
                guest::cpu()->r[1] = r1;
                return r0;
            }
            call_004c331c(frame.at(0).addr(), r1, r2_2, r3);
            u32 r0_2 = frame->word_0;
            u32 r1_1 = 0xdu;  // (from the original)
            frame->half_4 = u16(r5);
            if (r0_2 != 0) {
                call_0073e780(r0_2, r1_1, frame.at(4).addr());
                r1_1 = guest::cpu()->r[1];
            }
            u32 r0_3 = s16(frame->half_4);
            if (r0_3 != 0 && s32(r0_3) >= 0) {
                *gptr<u8>(r4 + 0x90u) = 1;  // (from the original)
            }
            if (r0_3 == 0 || r0_3 >> 0x1f != ((r0_3 & (r0_3 ^ r0_3)) >> 0x1f)) {  // (from the original)
                *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
            }
            u32 r0_5 = call_00130ed8(frame.at(0).addr(), r1_1);
            return r0_5;
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 2);
    *gptr<u8>(r4 + 0x90u) = u8(r5);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_003354c8
GUEST_EXPORT_FRAMED(0x003354c8, d_003354c8::f_003354c8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0033557c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033557c {

struct __attribute__((packed)) Local_0033557c_r0_1 {
    u32 word_0;
    u8 unknown_4[0x8c];  // (not used here)
    u8 byte_90;
};
GUEST_OFFSET(Local_0033557c_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0033557c_r0_1, byte_90, 0x90);

inline constexpr u32 vtable_SoundObjFurnitureInsect = 0x008f623cu;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;

u32 f_0033557c(u32 r0, u32 r1, u32 r2) {
    gptr<Local_0033557c_r0_1> r0_1 = gptr<Local_0033557c_r0_1>(call_002d2a4c(r0, r1, r2, guest::cpu()->r[3]));
    r0_1->word_0 = vtable_SoundObjFurnitureInsect;
    r0_1->byte_90 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_0033557c
GUEST_EXPORT_FRAMED(0x0033557c, d_0033557c::f_0033557c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335634 {

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;

void f_00335634() {
    call_002fbb30(guest::cpu()->r[0], guest::cpu()->r[1], 0x7dc8u, guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00335634
GUEST_EXPORT(0x00335634, d_00335634::f_00335634);

// f_00335640: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335640 {

inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> call_0020c500;
inline constexpr guest::Function<0x006bc04c, u32(u32)> call_006bc04c;

u32 f_00335640(u32 r0) {
    call_0020c500(r0 + 0x1238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_006bc04c(r0 + 0x7dc0u);  // (from the original)
    *gptr<u32>(r0 + 8u) = 0;
    *gptr<u32>(r0 + 0xcu) = 0;  // (from the original)
    *gptr<u32>(r0 + 4u) = 0;
    *gptr<u32>(r0) = 0;
    return 0u;
}

}  // namespace d_00335640
GUEST_EXPORT_FRAMED(0x00335640, d_00335640::f_00335640, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335678 {

struct __attribute__((packed)) Local_00335678_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00335678_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00335678_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_00335678_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_00335678_r4_1, word_c, 0xc);

inline constexpr guest::Function<0x0020c500, u32(u32)> call_0020c500;
inline constexpr guest::Function<0x0020cbf0, u32(u32)> call_0020cbf0;
inline constexpr guest::Function<0x0024dcc0, u32(u32, u32, u32, u32)> call_0024dcc0;
inline constexpr guest::Function<0x006bc04c, u32(u32)> call_006bc04c;

u32 f_00335678(u32 r0) {
    u32 r0_2 = call_0024dcc0(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_0020cbf0(r0_2 + 0x1228u);  // (from the original)
    u32 r0_5 = r0_4 + 0x6b88u;  // (from the original)
    gptr<Local_00335678_r4_1> r4_1 = gptr<Local_00335678_r4_1>(r0_5 - 0x7dc0u);  // (from the original)
    call_0020c500(r0_5 - 0x6b88u);  // (from the original)
    call_006bc04c(r4_1.addr() + 0x7dc0u);  // (from the original)
    r4_1->word_8 = 0;
    r4_1->word_c = 0;
    r4_1->word_4 = 0;
    r4_1->word_0 = 0;
    return r4_1.addr();
}

}  // namespace d_00335678
GUEST_EXPORT_FRAMED(0x00335678, d_00335678::f_00335678, 0x4010);  // pushes {r4, lr} first, as the original

// f_003356dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003356dc {

inline constexpr guest::Function<0x00134fa4, u32(u32)> call_00134fa4;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;

u32 f_003356dc(u32 r0) {
    u32 r0_1 = r0 + 0x6928u;  // (from the original)
    call_002f76ac(r0_1 - 0x1acu, 0x2f7744u, 0x18u, 4u);  // (from the original)
    u32 r0_4 = call_00134fa4((r0_1 - 0x56f0u) + 0xffffedd8u);  // (from the original)
    return r0_4 - 0x10u;  // (from the original)
}

}  // namespace d_003356dc
GUEST_EXPORT_FRAMED(0x003356dc, d_003356dc::f_003356dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_003357cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003357cc {

struct __attribute__((packed)) Local_003357cc_r0_1 {
    u32 word_0;
    u8 unknown_4[0x78];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x84];  // (not used here)
    u32 word_104;
    u32 word_108;
    u32 word_10c;
};
GUEST_OFFSET(Local_003357cc_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_003357cc_r0_1, word_7c, 0x7c);
GUEST_OFFSET(Local_003357cc_r0_1, word_104, 0x104);
GUEST_OFFSET(Local_003357cc_r0_1, word_108, 0x108);
GUEST_OFFSET(Local_003357cc_r0_1, word_10c, 0x10c);

inline constexpr u32 vtable_VersatileFlowTalkRecept = 0x008f6284u;
inline constexpr u32 vtable_VersatileFlowTalkRecept_at_7c = 0x008f63acu;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;

u32 f_003357cc(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    gptr<Local_003357cc_r0_1> r0_1 = gptr<Local_003357cc_r0_1>(call_0023bbe4(r0, r1, r2, r3));
    r0_1->word_7c = vtable_VersatileFlowTalkRecept_at_7c;
    r0_1->word_0 = vtable_VersatileFlowTalkRecept;
    r0_1->word_108 = r0_1.addr() + 0x110u;  // (from the original)
    r0_1->word_104 = vtable_sead__BufferedSafeStringBase_char_;
    r0_1->word_10c = 0x20;  // (from the original)
    *gptr<u8>(r0_1->word_108 - 1u + 0x20u) = u8(u32(*global_008c9f1c));  // (from the original)
    r0_1->word_104 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u8>(r0_1->word_108) = u8(u32(*global_008c9f1c));
    r0_1->word_104 = vtable_sead__FixedSafeString_32_;
    return r0_1.addr();
}

}  // namespace d_003357cc
GUEST_EXPORT_FRAMED(0x003357cc, d_003357cc::f_003357cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00335ecc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335ecc {

struct __attribute__((packed)) Object_00335ecc_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    float float_1ac;
};
GUEST_OFFSET(Object_00335ecc_0, float_1ac, 0x1ac);


void f_00335ecc(gptr<Object_00335ecc_0> arg0, u32 r1, float S0_unused, float S1) {
    float S0_1 = -1.0f;
    if (s32(r1) <= 0) {
        arg0->float_1ac = S0_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    arg0->float_1ac = S0_1 / S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00335ecc
GUEST_EXPORT(0x00335ecc, d_00335ecc::f_00335ecc);

// f_00335ef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335ef4 {

struct __attribute__((packed)) Object_00335ef4_0 {
    u8 unknown_0[0x1a8];  // (not used here)
    float float_1a8;
    float float_1ac;
    float float_1b0;
    float float_1b4;
};
GUEST_OFFSET(Object_00335ef4_0, float_1a8, 0x1a8);
GUEST_OFFSET(Object_00335ef4_0, float_1ac, 0x1ac);
GUEST_OFFSET(Object_00335ef4_0, float_1b0, 0x1b0);
GUEST_OFFSET(Object_00335ef4_0, float_1b4, 0x1b4);


void f_00335ef4(gptr<Object_00335ef4_0> arg0, u32 r1, u32 r2) {
    float S0_1 = 1.0f;
    if (s32(r1) <= 0) {
        arg0->float_1ac = S0_1;
    } else {
        arg0->float_1ac = S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    }
    float S1_1 = 0.0f;
    arg0->float_1a8 = S1_1;
    if (s32(r2) <= 0) {
        arg0->float_1b4 = S0_1;
        arg0->float_1b0 = S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    arg0->float_1b4 = S0_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2))));
    arg0->float_1b0 = S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00335ef4
GUEST_EXPORT(0x00335ef4, d_00335ef4::f_00335ef4);

// f_00335f48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00335f48 {

inline guest::global<u32, 0x0095bf68> global_0095bf68;
inline constexpr guest::Function<0x001c25d8, u32(u32, u32, u32)> call_001c25d8;

u32 f_00335f48(u32 r0) {
    float S0_1 = 1.0f;
    u32 r1_1 = *gptr<u8>(*global_0095bf68 + 0x11eu);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return call_001c25d8(r0 + 0x90u, r0 + 0xc8u, r0 + ((r1_1 << 3) - r1_1 << 3) + 0x100u);  // (from the original)
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
GUEST_OFFSET(Object_00338d10_0, word_8c2c, 0x8c2c);
GUEST_OFFSET(Object_00338d10_0, word_8c30, 0x8c30);
GUEST_OFFSET(Object_00338d10_0, word_8c34, 0x8c34);
GUEST_OFFSET(Object_00338d10_0, word_8c38, 0x8c38);
GUEST_OFFSET(Object_00338d10_0, word_8c3c, 0x8c3c);
GUEST_OFFSET(Object_00338d10_0, word_8c40, 0x8c40);
GUEST_OFFSET(Object_00338d10_0, word_8c44, 0x8c44);
GUEST_OFFSET(Object_00338d10_0, word_8c48, 0x8c48);

inline guest::global<u32, 0x00847e34> global_00847e34;
inline guest::global<u32, 0x00847e38> global_00847e38;

u32 f_00338d10(gptr<Object_00338d10_0> arg0) {
    u32 r3_1 = *global_00847e38;
    arg0->word_8c3c = *global_00847e34;
    arg0->word_8c40 = r3_1;
    u32 r3_2 = *global_00847e38;
    arg0->word_8c44 = *global_00847e34;
    arg0->word_8c48 = r3_2;
    u32 r3_3 = *global_00847e38;
    arg0->word_8c2c = *global_00847e34;
    arg0->word_8c30 = r3_3;
    u32 r2_1 = *global_00847e38;
    u32 r1_1 = *global_00847e34;
    arg0->word_8c34 = r1_1;
    arg0->word_8c38 = r2_1;
    guest::cpu()->r[1] = r1_1;
    return arg0.addr() + 0x8c00u;  // (from the original)
}

}  // namespace d_00338d10
GUEST_EXPORT(0x00338d10, d_00338d10::f_00338d10);

// f_00338d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00338d48 {

inline constexpr u32 vtable_script__WordFix_40u_ = 0x0090a030u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_00338d48 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x68];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00338d48, word_0, 0x0);
GUEST_OFFSET(Frame_00338d48, word_8, 0x8);
GUEST_SIZE(Frame_00338d48, 0x74);

void f_00338d48(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00338d48> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r6 = r0;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0x28u, r3);  // (from the original)
    u32 r5 = vtable_script__WordFix_40u_;
    *gptr<u32>(r0_2) = r5;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x50u);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    u32 r1 = 0x14u;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    frame->word_0 = r4;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x8480ecu, 0xc9u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    u32 r0_10 = r6 + 0x8b44u;  // (from the original)
    call_005e2e50(r0_10, frame.at(8).addr());
    call_005e2f94(r0_10);
    frame->word_8 = r5;
}

}  // namespace d_00338d48
GUEST_EXPORT_FRAMED(0x00338d48, d_00338d48::f_00338d48, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0033a7a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033a7a4 {

struct __attribute__((packed)) Local_0033a7a4_r4_2 {
    u32 word_0;
    u8 unknown_4[0xe0];  // (not used here)
    u32 word_e4;
};
GUEST_OFFSET(Local_0033a7a4_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_0033a7a4_r4_2, word_e4, 0xe4);

inline constexpr u32 vtable_ComButton1Lyt = 0x008ee218u;
inline constexpr u32 vtable_Control1Button = 0x008ef22cu;
inline constexpr u32 vtable_Control1Button_at_e4 = 0x008ef270u;
inline constexpr u32 vtable_ComButtonLytBase = 0x008f18f4u;
inline constexpr u32 vtable_BsMenuBestFriendRegister = 0x008f66a8u;
inline constexpr u32 vtable_BsMenuBestFriendRegister_at_28 = 0x008f6714u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f770c, u32(u32)> call_002f770c;
inline constexpr guest::Function<0x002f7710, u32(u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32, u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;
inline constexpr guest::Function<0x006aaa30, u32(u32, u32)> call_006aaa30;
inline constexpr guest::Function<0x006b0b74, u32(u32)> call_006b0b74;

u32 f_0033a7a4(gptr<BsMenuBestFriendRegister> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsMenuBestFriendRegister;
    arg0->word_28 = vtable_BsMenuBestFriendRegister_at_28;
    u32 r0_2 = call_005e3194(arg0.addr() + 0x8b44u, 0x8f66a8u, 0x8f6714u, r3);  // (from the original)
    u32 r0_4 = call_006b0b74(r0_2 - 0x6ba8u);  // (from the original)
    u32 r4_1 = r0_4 + 0xfffff638u;  // (from the original)
    *gptr<u32>(r4_1) = vtable_ComButton1Lyt;
    gptr<Local_0033a7a4_r4_2> r4_2 = gptr<Local_0033a7a4_r4_2>(r4_1 + 0x398u);  // (from the original)
    r4_2->word_e4 = vtable_Control1Button_at_e4;
    r4_2->word_0 = vtable_Control1Button;
    call_002f76ac(r4_2.addr() + 0x118u, 0x2e0b3cu, 0x518u, 1u);  // (from the original)
    u32 r0_6 = call_002f770c(r4_2.addr());
    *gptr<u32>(r0_6 - 0x398u) = vtable_ComButtonLytBase;  // (from the original)
    u32 r0_8 = call_00567ef0(r0_6 - 0x248u, 0x8f18f4u);  // (from the original)
    u32 r0_10 = call_005bf744(r0_8 - 0x14cu);  // (from the original)
    call_002f76ac(r0_10 - 0x2a4u, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    u32 r0_13 = call_002f7710((r0_10 - 0x15d8u) + 0x1250u);  // (from the original)
    call_002f76ac(r0_13 - 0x2a0u, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    u32 r0_16 = call_002f7710((r0_13 - 0x1250u) + 0xeccu);  // (from the original)
    call_002f76ac(r0_16 - 0x2a0u, 0x2b6ef8u, 0xe0u, 3u);  // (from the original)
    u32 r0_19 = call_002f7710((r0_16 - 0xeccu) + 0xb48u);  // (from the original)
    call_002f76ac(r0_19 - 0x6f0u, 0x2d5744u, 0x250u, 3u);  // (from the original)
    u32 r0_22 = call_0056988c((r0_19 - 0xb48u) + 0x430u);  // (from the original)
    u32 r0_24 = call_0056988c(r0_22 - 0x28u);  // (from the original)
    u32 r0_26 = call_0056988c(r0_24 - 0x28u);  // (from the original)
    u32 r0_28 = call_005bf744(r0_26 - 0x14cu);  // (from the original)
    u32 r0_30 = call_00567ef0(r0_28 - 0x248u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    return call_006aaa30(r0_30 - 0x4cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0033a7a4
GUEST_EXPORT(0x0033a7a4, d_0033a7a4::f_0033a7a4);

// f_0033b748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033b748 {

inline guest::global<u32, 0x00853c28> global_00853c28;
inline guest::global<u32, 0x00853c2c> global_00853c2c;
inline guest::global<u32, 0x0095008c> global_0095008c;
inline guest::global<u32, 0x00950094> global_00950094;
inline constexpr guest::Function<0x006b1a64, u32(u32, u32)> call_006b1a64;
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32)> call_006b1aa0;
inline constexpr guest::Function<0x007259d4, u32(u32, u32, u32, u32)> call_007259d4;
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32)> call_0081b648;

void f_0033b748(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0_1 = call_007259d4(r0, r1, r2, guest::cpu()->r[3]);
    u32 r5_1 = r0 + (r0_1 + (r0_1 << 3) + (r0_1 << 4) << 5) + 0x1234u;  // (from the original)
    call_006b1a64(r5_1, r1);
    u32 r1_1 = *global_00853c28;
    u32 r2_2 = *global_00853c2c;
    call_0081b648(r5_1, r1_1, r2_2);
    float S1_3 = -125.0f;
    float S0_3 = S1_3 - std::bit_cast<float>(*global_0095008c);
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    call_006b1aa0(r5_1, r1_1, r2_2);
    float S1_4 = std::bit_cast<float>(*global_0095008c);
    float S0_4 = std::bit_cast<float>(*global_00950094) + S1_4;
    *gptr<u32>(r0 + 0x3b54u) = std::bit_cast<u32>(S0_4);  // (from the original)
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
}

}  // namespace d_0033b748
GUEST_EXPORT_FRAMED(0x0033b748, d_0033b748::f_0033b748, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033d150 {

struct __attribute__((packed)) Local_0033d150_r2_3 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0033d150_r2_3, word_c, 0xc);
GUEST_OFFSET(Local_0033d150_r2_3, word_10, 0x10);

struct __attribute__((packed)) Local_0033d150_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033d150_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_0033d150_r6_1, word_4, 0x4);

inline constexpr u32 vtable_script__WordFix_50u_ = 0x0090a148u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32)> call_00300914;
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32)> call_00300924;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f1224, u32(u32, u32, u32)> call_005f1224;
inline constexpr guest::Function<0x006b1a64, u32(u32, u32, u32, u32)> call_006b1a64;
inline constexpr guest::Function<0x006b1aa0, u32(u32, u32, u32)> call_006b1aa0;
inline constexpr guest::Function<0x0081b648, u32(u32, u32, u32)> call_0081b648;
inline constexpr guest::Function<0x0081e020, u32(u32, u32, u32, u32)> call_0081e020;

struct __attribute__((packed)) Frame_0033d150 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x78];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0033d150, word_0, 0x0);
GUEST_OFFSET(Frame_0033d150, word_4, 0x4);
GUEST_SIZE(Frame_0033d150, 0x80);

void f_0033d150(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::StackFrameOf<Frame_0033d150> frame;  // the original's stack frame
    u32 r3_6 = 0;
    gptr<Local_0033d150_r2_3> r2_3 = gptr<Local_0033d150_r2_3>(0u);
    u32 r5 = r0;
    call_0081e020(frame.at(4).addr(), r1, r2, r3);
    call_005ea8f8(*global_0095decc, 0u);
    u32 r0_3 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    u32 r1_1 = *gptr<u16>(r1);
    call_005f1224(r0_3, r1_1, 0u);
    u32 r0_4 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    u32 r1_2 = *gptr<u8>(r1 + 2u);
    call_00300914(r0_4, r1_2, 0u);
    u32 r0_5 = *gptr<u32>(*global_0095decc + 0x14u);  // (from the original)
    u32 r1_3 = *gptr<u8>(r1 + 3u);
    call_00300924(r0_5, r1_3, 0u);
    frame->word_0 = 0;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x33d298u, 7u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    S0 = guest::cpu()->s[0];
    u32 r6 = 0x853c20u;  // (from the original)
    r1 = 0u;
    do {
        r3_6 = *gptr<u32>(r6);
        r2_3 = gptr<Local_0033d150_r2_3>(r5 + (r1 + (r1 << 3) + (r1 << 4) << 5) + 0x294u);  // (from the original)
        u32 r0_8 = *gptr<u32>(r6 + 4u);
        u32 r12_1 = r2_3->word_c;
        if (r12_1 == r3_6) {
            if (r12_1 == 0) {
                r3_6 = r2_3->word_10 | r0_8;
                if ((r3_6 & 1u) == 0) {
                    goto L_33d23c;
                }
            }
            r2_3 = gptr<Local_0033d150_r2_3>(r2_3->word_10);
            if (r2_3.addr() == r0_8) {
                goto L_33d23c;
            }
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 5);
    r1 = ~0u;
L_33d23c:;
    u32 r4_1 = r5 + ((r1 + (r1 << 3) + (r1 << 4)) << 5);
    guest::cpu()->s[0] = S0;
    call_006b1a64(r4_1 + 0x294u, frame.at(4).addr(), r2_3.addr(), r3_6);  // (from the original)
    gptr<Local_0033d150_r6_1> r6_1 = gptr<Local_0033d150_r6_1>(r6 + 8u);
    u32 r1_6 = r6_1->word_0;
    u32 r2_4 = r6_1->word_4;
    call_0081b648(r4_1 + 0x294u, r1_6, r2_4);  // (from the original)
    float S0_8 = -125.0f;
    guest::cpu()->s[0] = S0_8;
    call_006b1aa0(r4_1 + 0x294u, r1_6, r2_4);  // (from the original)
    frame->word_4 = vtable_script__WordFix_50u_;
    guest::cpu()->r[1] = 0x90a148u;  // (from the original)
}

}  // namespace d_0033d150
GUEST_EXPORT_FRAMED(0x0033d150, d_0033d150::f_0033d150, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033dab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033dab8 {

inline constexpr u32 vtable_script__WordFix_94u_ = 0x0090a3b0u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> call_005d6cc0;
inline constexpr guest::Function<0x005d6d28, u32(u32)> call_005d6d28;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_0033dab8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0xd0];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0033dab8, word_0, 0x0);
GUEST_OFFSET(Frame_0033dab8, word_4, 0x4);
GUEST_SIZE(Frame_0033dab8, 0xd8);

void f_0033dab8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0033dab8> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r6 = r1 - 1u;
    u32 r0_2 = call_003083bc(frame.at(4).addr(), frame.at(0x1c).addr(), 0x5eu, r3);  // (from the original)
    u32 r7 = vtable_script__WordFix_94u_;
    *gptr<u32>(r0_2) = r7;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu);  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0xbcu);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r4 = 0u;
    r0 = ((r0_4 - 0xcu) + 0x18u) - 2u;  // (from the original)
    r1 = 0x2fu;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    frame->word_0 = r4;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x879f60u, r6 & 0xffu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005d6cc0(r5 + 0x1dcu, frame.at(4).addr());  // (from the original)
    call_005d6d28(r5 + 0x1dcu);  // (from the original)
    frame->word_4 = r7;
}

}  // namespace d_0033dab8
GUEST_EXPORT_FRAMED(0x0033dab8, d_0033dab8::f_0033dab8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0033db9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033db9c {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;
inline constexpr guest::Function<0x0033d9d0, u32(u32, u32, u32)> call_0033d9d0;
inline constexpr guest::Function<0x0033dab8, u32(u32, u32)> call_0033dab8;
inline constexpr guest::Function<0x0033dcb0, u32(u32, u32)> call_0033dcb0;
inline constexpr guest::Function<0x0033de44, u32(u32, u32)> call_0033de44;
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;
inline constexpr guest::Function<0x007159b0, u32(u32, u32)> call_007159b0;
inline constexpr guest::Function<0x00715b88, u32(u32, u32)> call_00715b88;
inline constexpr guest::Function<0x00715c98, u32(u32, u32)> call_00715c98;

void f_0033db9c(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r0_1 = call_002fb94c(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r5_1 = r0_1 + 0x8ae0u;  // (from the original)
        *gptr<u32>(r0 + 0x5c0u) = r1;  // (from the original)
        u32 r0_2 = call_007159b0(r5_1, r1);
        call_0033dab8(r0, r0_2);
        u32 r0_3 = call_00715b88(r5_1, r0_2);
        call_0033de44(r0, r0_3);
        call_0033dcb0(r0, r0_2);
        call_0033d9d0(r0, r0_2, *gptr<u32>(r5_1 + (r0_2 << 2) + 0x1cu));  // (from the original)
        u32 r0_4 = call_00715c98(r5_1, r0_2);
        if (r0_4 != 0 && (u32(*gptr<u8>(r5_1 + r0_2 + 0x1b4u)) & 2u) == 0) {  // (from the original)
            r1_2 = 1u;
            r0_4 = 0u;
            goto L_33dc44;
        }
        r1_2 = 0u;
L_33dc44:;
        *gptr<u8>(r0 + 0x5c4u) = u8(r1_2);  // (from the original)
        call_00568630(r0 + 4u, r0 + 0x1b0u, *gptr<u32>(r0 + 0x1d8u), 0u);  // (from the original)
        float S0_9 = guest::cpu()->s[0];
        float S1_9 = guest::cpu()->s[1];
        if (r0_4 != 0) {
            S0_9 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1b4u));  // (from the original)
            S1_9 = 1.0f;
        }
        float S0_10 = r0_4 == 0 ? 0.0f : S0_9 - S1_9;
        guest::cpu()->s[0] = S0_10;
        guest::cpu()->s[1] = S1_9;
        call_005697e0(r0 + 0x1b0u);  // (from the original)
        call_00568c10(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00568984(r0 + 4u, r0 + 0x1b0u, *gptr<u32>(r0 + 0x1d8u), 0u);  // (from the original)
        frame.release();
        call_00568c10(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
}

}  // namespace d_0033db9c
GUEST_EXPORT(0x0033db9c, d_0033db9c::f_0033db9c);

// f_0033dcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033dcb0 {

inline constexpr u32 vtable_script__WordFix_188u_ = 0x00909b98u;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x0029b88c, u32(u32, u32, u32, u32)> call_0029b88c;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x002fb94c, u32(u32)> call_002fb94c;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32)> call_002fe874;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x00312bd0, u32(u32)> call_00312bd0;
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32)> call_00312ca0;
inline constexpr guest::Function<0x00312cb0, u32(u32)> call_00312cb0;
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32)> call_005d6cc0;
inline constexpr guest::Function<0x005d6d28, u32(u32)> call_005d6d28;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;

struct __attribute__((packed)) Frame_0033dcb0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not read or written by name)
    u32 word_8;
    u8 unknown_c[0x1d0];  // (not read or written by name)
    u32 word_1dc;
    u8 unknown_1e0[0x58];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0033dcb0, word_0, 0x0);
GUEST_OFFSET(Frame_0033dcb0, word_8, 0x8);
GUEST_OFFSET(Frame_0033dcb0, word_1dc, 0x1dc);
GUEST_SIZE(Frame_0033dcb0, 0x238);

void f_0033dcb0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0033dcb0> frame;  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_7 = 0;
    u32 r5 = r0;
    u32 r8 = r1 - 1u;
    u32 r0_2 = call_0029b88c(r1 & 0xffu, r1, r2, r3);  // (from the original)
    call_00312bd0(frame.at(0x198).addr());  // (from the original)
    frame->word_0 = 4;
    u32 r0_5 = call_00312c4c(frame.at(0x198).addr(), *gptr<u32>(r0_2 + 0xcu), 0xau, 0xau);  // (from the original)
    u32 r0_6 = call_002fb94c(r0_5);
    u32 r6 = r0_6;
    u32 r0_8 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0xbcu);  // (from the original)
    u32 r7 = vtable_script__WordFix_188u_;
    *gptr<u32>(r0_8) = r7;
    u32 r0_10 = call_005f4bfc(r0_8 + 0xcu);  // (from the original)
    call_002f825c(r0_10 + 0xcu, 0x178u);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    u32 r9 = 0u;
    r0 = (r0_10 - 0xcu) + 0x16u;  // (from the original)
    r1 = 0x5eu;  // (from the original)
    do {
        u32 r3_6 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_6);
        r3_7 = *gptr<u16>(r2);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_7);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_7);
    call_00312ca0(*gptr<u32>(*global_0095decc + 0x14u), frame.at(0x198).addr(), 0u);  // (from the original)
    if (r6 != 0) {
        u32 r0_15 = call_002fe7f4(frame.at(0x1dc).addr(), r6 + 0xa47au, 0u);  // (from the original)
        call_002fe874(*gptr<u32>(*global_0095decc + 0x14u), r0_15, 0u);  // (from the original)
        frame->word_1dc = vtable_script__WordFix_33u_;
    }
    frame->word_0 = r9;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x879f9cu, r8 & 0xffu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    call_005d6cc0(r5 + 0x3a0u, frame.at(8).addr());  // (from the original)
    call_005d6d28(r5 + 0x3a0u);  // (from the original)
    frame->word_8 = r7;
    call_00312cb0(frame.at(0x198).addr());  // (from the original)
}

}  // namespace d_0033dcb0
GUEST_EXPORT_FRAMED(0x0033dcb0, d_0033dcb0::f_0033dcb0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0033e040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e040 {

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32, u32)> call_00112ff4;
inline constexpr guest::Function<0x00113ecd, u32(u32, u32, u32, u32)> call_00113ecc;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;
inline constexpr guest::Function<0x0030878d, u32(u32, u32, u32, u32)> call_0030878c;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> call_00309f84;
inline constexpr guest::Function<0x005c4e5c, u32(u32)> call_005c4e5c;

struct __attribute__((packed)) Frame_0033e040 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0033e040, word_0, 0x0);
GUEST_OFFSET(Frame_0033e040, word_4, 0x4);
GUEST_SIZE(Frame_0033e040, 0x20);

u32 f_0033e040(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0033e040> frame;  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = *gptr<s8>(r0);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    u32 r0_5 = call_005c4e5c(r1);
    u32 zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = r0_5 == 0;
    }
    if (!zf_1) {
        u32 r0_6 = call_00309f84(r0_4, r0_5 + 0x55a6u);  // (from the original)
        u32 r1_6 = *gptr<u8>(r0 + 1u);
        u32 r6_1 = r0_6;
        u32 r4_1 = r1_6 & 1u;
        u32 r3_5 = (r1_6 & 2u) >> 1;
        if (r0_6 == 0) {
            r0_5 = call_00112ff4(r0_4, r0_5, r4_1, r3_5);
            r6_1 = r0_5;
        } else {
            frame->word_0 = 0;
            frame->word_4 = 0;
            r0_5 = call_0030878c(r6_1, r0_5, r4_1, r3_5);
        }
        if (r4_1 != 0) {
            frame.release();
            return call_00113ecc(r6_1, r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
    return r0_5;
}

}  // namespace d_0033e040
GUEST_EXPORT(0x0033e040, d_0033e040::f_0033e040);

// f_0033e104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e104 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;

struct __attribute__((packed)) Frame_0033e104 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0033e104, word_0, 0x0);
GUEST_SIZE(Frame_0033e104, 0x4);

u32 f_0033e104(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0033e104> frame;  // the original's stack frame
    u32 r0_5 = 0;
    frame->word_0 = r3;
    u32 r0_1 = call_002fe8a8(r1, r1, guest::cpu()->r[2], r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_2 = *gptr<u8>(r0 + 2u);
    u32 r4_1 = r0_1 + 0x8d6cu;  // (from the original)
    if (r1_2 == 0) {
        u32 r1_3 = *gptr<u16>(r0);
        u32 r0_3 = call_002fcbb0(frame.at(0).addr(), r1_3);
        call_002fc8e8(r4_1 + 0xcu, r0_3);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r0_5 = 2u;
    } else {
        r0_5 = 1u;
    }
    *gptr<u8>(r4_1 + 9u) = u8(r0_5);
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_0033e104
GUEST_EXPORT_FRAMED(0x0033e104, d_0033e104::f_0033e104, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0033e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e230 {

struct __attribute__((packed)) Object_0033e230_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0033e230_0, half_0, 0x0);

inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_0033e230(gptr<Object_0033e230_0> arg0) {
    u32 r0_1 = arg0->half_0;
    u32 r1_1 = *global_0095386c;
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
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x5e8];  // (not used here)
    u32 word_5f0;
};
GUEST_OFFSET(Object_0033e60c_0, byte_0, 0x0);
GUEST_OFFSET(Object_0033e60c_0, word_4, 0x4);
GUEST_OFFSET(Object_0033e60c_0, word_5f0, 0x5f0);

inline guest::global<u32, 0x0094d090> global_0094d090;
inline constexpr guest::Function<0x001426b0, u32(u32, u32, u32, u32)> call_001426b0;

void f_0033e60c(gptr<Object_0033e60c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_0;
    if (r0_1 != 3u && r0_1 != 4u && r0_1 != 5u) {
        return;
    }
    call_001426b0(*gptr<u32>(*global_0094d090 + 0x28u), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_5f0 = 0;
    arg0->byte_0 = 2;
    arg0->word_4 = 0;
    guest::cpu()->r[1] = 2u;
}

}  // namespace d_0033e60c
GUEST_EXPORT_FRAMED(0x0033e60c, d_0033e60c::f_0033e60c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033e8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e8cc {

struct __attribute__((packed)) Object_0033e8cc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_0033e8cc_0, byte_0, 0x0);

struct __attribute__((packed)) Local_0033e8cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0033e8cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0033e8cc_ea_1, word_4, 0x4);


void f_0033e8cc(gptr<Object_0033e8cc_0> arg0) {
    gptr<Local_0033e8cc_ea_1> ea_1 = gptr<Local_0033e8cc_ea_1>((u32(arg0->byte_0) << 3) + 0x83b46cu);  // (from the original)
    u32 r1_1 = ea_1->word_0;
    u32 r2_1 = ea_1->word_4;
    u32 r0_1 = arg0.addr() + u32(s32(r2_1) >> 1);
    if ((r2_1 & 1u) == 0) {
        guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r2_2 = *gptr<u32>(r0_1);
    u32 r1_2 = *gptr<u32>(r2_2 + r1_1);
    guest::call_address<u32>(r1_2, r0_1, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0033e8cc
GUEST_EXPORT(0x0033e8cc, d_0033e8cc::f_0033e8cc);

// f_0033e960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033e960 {

struct __attribute__((packed)) Local_0033e960_r0_1 {
    u32 word_0;
    u8 unknown_4[0x78];  // (not used here)
    u32 word_7c;
    u8 unknown_80[0x84];  // (not used here)
    u32 word_104;
    u32 word_108;
    u32 word_10c;
    u8 unknown_110[0x20];  // (not used here)
    u32 word_130;
};
GUEST_OFFSET(Local_0033e960_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0033e960_r0_1, word_7c, 0x7c);
GUEST_OFFSET(Local_0033e960_r0_1, word_104, 0x104);
GUEST_OFFSET(Local_0033e960_r0_1, word_108, 0x108);
GUEST_OFFSET(Local_0033e960_r0_1, word_10c, 0x10c);
GUEST_OFFSET(Local_0033e960_r0_1, word_130, 0x130);

inline constexpr u32 vtable_VersatilePlateTalkRecept = 0x008f68a0u;
inline constexpr u32 vtable_VersatilePlateTalkRecept_at_7c = 0x008f69c8u;
inline constexpr u32 vtable_sead__FixedSafeString_32_ = 0x009048ecu;
inline constexpr u32 vtable_sead__FixedSafeStringBase_char__32_ = 0x00905120u;
inline constexpr u32 vtable_sead__BufferedSafeStringBase_char_ = 0x0090558cu;
inline guest::global<u8, 0x008c9f1c> global_008c9f1c;
inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;

u32 f_0033e960(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    gptr<Local_0033e960_r0_1> r0_1 = gptr<Local_0033e960_r0_1>(call_0023bbe4(r0, r1, r2, r3));
    r0_1->word_7c = vtable_VersatilePlateTalkRecept_at_7c;
    r0_1->word_0 = vtable_VersatilePlateTalkRecept;
    r0_1->word_108 = r0_1.addr() + 0x110u;  // (from the original)
    r0_1->word_104 = vtable_sead__BufferedSafeStringBase_char_;
    r0_1->word_10c = 0x20;  // (from the original)
    *gptr<u8>(r0_1->word_108 - 1u + 0x20u) = u8(u32(*global_008c9f1c));  // (from the original)
    r0_1->word_104 = vtable_sead__FixedSafeStringBase_char__32_;
    *gptr<u8>(r0_1->word_108) = u8(u32(*global_008c9f1c));
    r0_1->word_104 = vtable_sead__FixedSafeString_32_;
    r0_1->word_130 = 0;
    return r0_1.addr();
}

}  // namespace d_0033e960
GUEST_EXPORT_FRAMED(0x0033e960, d_0033e960::f_0033e960, 0x4010);  // pushes {r4, lr} first, as the original

// f_0033f2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033f2c4 {

struct __attribute__((packed)) Local_0033f2c4_r0_8 {
    u32 word_0;
};
GUEST_OFFSET(Local_0033f2c4_r0_8, word_0, 0x0);

struct __attribute__((packed)) Local_0033f2c4_r4_1 {
    u8 unknown_0[0xb8];  // (not used here)
    u8 byte_b8;
    u8 unknown_b9[0x3];  // (not used here)
    u8 byte_bc;
};
GUEST_OFFSET(Local_0033f2c4_r4_1, byte_b8, 0xb8);
GUEST_OFFSET(Local_0033f2c4_r4_1, byte_bc, 0xbc);

inline constexpr guest::Function<0x00112ff5, u32(u32, u32, u32)> call_00112ff4;
inline constexpr guest::Function<0x00113469, u32(u32, u32)> call_00113468;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;
inline constexpr guest::Function<0x00309f85, u32(u32, u32)> call_00309f84;
inline constexpr guest::Function<0x005c4e5c, u32(u32)> call_005c4e5c;

u32 f_0033f2c4(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = *gptr<s8>(r0);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    u32 r0_5 = call_005c4e5c(r1);
    u32 r1_4 = guest::cpu()->r[1];
    u32 zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = r0_5 == 0;
    }
    if (!zf_1) {
        u32 r0_6 = call_00309f84(r0_4, r0_5 + 0x55a6u);  // (from the original)
        gptr<Local_0033f2c4_r4_1> r4_1 = gptr<Local_0033f2c4_r4_1>(r0_6);
        if (r0_6 == 0) {
            u32 r0_7 = call_00112ff4(r0_4, r0_5, 1u);
            r4_1 = gptr<Local_0033f2c4_r4_1>(r0_7);
        }
        gptr<Local_0033f2c4_r0_8> r0_8 = gptr<Local_0033f2c4_r0_8>(r0_4 + 0x2510u);  // (from the original)
        u32 r1_6 = r0_8->word_0 & ~0x600u | 0x200u;  // (from the original)
        r0_8->word_0 = r1_6;
        r0_5 = call_00113468(r0_4, r1_6);
        r4_1->byte_bc = u8(u32(r4_1->byte_bc) | 0x20u);  // (from the original)
        r1_4 = u32(r4_1->byte_b8) | 4u;
        r4_1->byte_b8 = u8(r1_4);
    }
    guest::cpu()->r[1] = r1_4;
    return r0_5;
}

}  // namespace d_0033f2c4
GUEST_EXPORT_FRAMED(0x0033f2c4, d_0033f2c4::f_0033f2c4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0033f368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033f368 {

inline constexpr guest::Function<0x001139fd, u32(u32, u32)> call_001139fc;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;
inline constexpr guest::Function<0x00697f60, u32(u32, u32, u32, u32)> call_00697f60;

u32 f_0033f368(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = *gptr<s8>(r0);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r1_4 = *gptr<u8>(r0 + 1u);
    if (r1_4 != 0) {
        if (r1_4 == 1u) {
            call_001139fc(r0_4, 2u);
            u32 r0_5 = *gptr<s8>(r0);
            frame.release();
            return call_00697f60(r0_5, 0u, 0u, guest::cpu()->r[3]);
        }
        if (r1_4 != 2u) {
            guest::cpu()->r[1] = r1_4;
            return r0_4;
        }
        call_001139fc(r0_4, 0u);
        u32 r0_6 = *gptr<s8>(r0);
        frame.release();
        return call_00697f60(r0_6, 1u, 0u, guest::cpu()->r[3]);
    }
    call_001139fc(r0_4, 0x17u);  // (from the original)
    u32 r0_7 = *gptr<s8>(r0);
    frame.release();
    return call_00697f60(r0_7, 1u, 0u, guest::cpu()->r[3]);
}

}  // namespace d_0033f368
GUEST_EXPORT(0x0033f368, d_0033f368::f_0033f368);

// f_0033fb8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033fb8c {

struct __attribute__((packed)) Object_0033fb8c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0033fb8c_0, word_0, 0x0);

struct __attribute__((packed)) Local_0033fb8c_r0_2 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0033fb8c_r0_2, byte_0, 0x0);

inline guest::global<u32, 0x0095386c> global_0095386c;

u32 f_0033fb8c(gptr<Object_0033fb8c_0> arg0, u32 r1) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 != 0) {
        return r0_1;
    }
    gptr<Local_0033fb8c_r0_2> r0_2 = gptr<Local_0033fb8c_r0_2>(*global_0095386c);
    u32 r1_1 = u32(r0_2->byte_0) & ~0x40u;  // (from the original)
    r0_2->byte_0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_2.addr();
}

}  // namespace d_0033fb8c
GUEST_EXPORT(0x0033fb8c, d_0033fb8c::f_0033fb8c);

// f_0033fbb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0033fbb4 {

inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32)> call_00768138;

struct __attribute__((packed)) Frame_0033fbb4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0033fbb4, word_0, 0x0);
GUEST_OFFSET(Frame_0033fbb4, word_4, 0x4);
GUEST_OFFSET(Frame_0033fbb4, word_8, 0x8);
GUEST_SIZE(Frame_0033fbb4, 0x18);

void f_0033fbb4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0033fbb4> frame;  // the original's stack frame
    if (r1 != 0) {
        call_002fcbb0(frame.at(0xc).addr(), 0x2247u, r2, r3);  // (from the original)
        call_002fcbb0(frame.at(0x10).addr(), 0x23c3u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_3 = u32(*gptr<u8>(r1 + 0x5700u)) << 0x1b;  // (from the original)
        frame->word_0 = frame.at(0xc).addr();  // (from the original)
        frame->word_4 = 4;
        frame->word_8 = 0;
        call_00306354(r0, 0x33fc4cu, r0_3 >> 0x1f != 0u ? 1u : 2u, r1 + 0x55a6u);  // (from the original)
        call_00768138(r0, frame.at(0x10).addr(), 0u);  // (from the original)
    }
}

}  // namespace d_0033fbb4
GUEST_EXPORT_FRAMED(0x0033fbb4, d_0033fbb4::f_0033fbb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original
