// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001c0810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0810 {

struct __attribute__((packed)) Object_001c0810_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_001c0810_0, byte_e8, 0xe8);

inline constexpr guest::Function<0x001d9c9c, u32(u32, u32, u32)> SoundObjNpc__virtual_2;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;

u32 f_001c0810(gptr<Object_001c0810_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    SoundObjNpc__virtual_2(arg0.addr(), r1, frame.at(0).addr());
    arg0->byte_e8 = 1;
    return 1u;
}

}  // namespace d_001c0810
GUEST_EXPORT_FRAMED(0x001c0810, d_001c0810::f_001c0810, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001c0c1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0c1c {

inline constexpr guest::Function<0x001d9e44, u32(u32, u32, u32)> SoundObjNpc__virtual_4;
inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;

u32 f_001c0c1c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    call_001e5894(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = SoundObjNpc__virtual_4(r0, r1, frame.at(0).addr());
    return r0_2;
}

}  // namespace d_001c0c1c
GUEST_EXPORT_FRAMED(0x001c0c1c, d_001c0c1c::f_001c0c1c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001c0f3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0f3c {

struct __attribute__((packed)) Object_001c0f3c_0 {
    u8 unknown_0[0xe8];  // (not used here)
    u8 byte_e8;
};
GUEST_OFFSET(Object_001c0f3c_0, byte_e8, 0xe8);

inline constexpr guest::Function<0x001d9fb0, u32(u32, u32, u32, u32)> SoundObjNpc__virtual_3;

u32 f_001c0f3c(gptr<Object_001c0f3c_0> arg0) {
    u32 r0_1 = arg0->byte_e8;
    if (r0_1 == 0) {
        return r0_1;
    }
    SoundObjNpc__virtual_3(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_e8 = 0;
    return 0u;
}

}  // namespace d_001c0f3c
GUEST_EXPORT_FRAMED(0x001c0f3c, d_001c0f3c::f_001c0f3c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c0f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0f64 {

struct __attribute__((packed)) Object_001c0f64_0 {
    u8 unknown_0[0x94];  // (not used here)
    u8 byte_94;
    u8 unknown_95[0x33];  // (not used here)
    u8 byte_c8;
};
GUEST_OFFSET(Object_001c0f64_0, byte_94, 0x94);
GUEST_OFFSET(Object_001c0f64_0, byte_c8, 0xc8);


u32 f_001c0f64(gptr<Object_001c0f64_0> arg0) {
    u32 r1_1 = s8(arg0->byte_c8);
    arg0->byte_94 = 1;
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_001c0f64
GUEST_EXPORT(0x001c0f64, d_001c0f64::f_001c0f64);

// f_001c0fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c0fdc {

struct __attribute__((packed)) Local_001c0fdc_r0_1 {
    u8 unknown_0[0xe4];  // (not used here)
    float float_e4;
    u8 byte_e8;
};
GUEST_OFFSET(Local_001c0fdc_r0_1, float_e4, 0xe4);
GUEST_OFFSET(Local_001c0fdc_r0_1, byte_e8, 0xe8);

inline constexpr guest::Function<0x001da01c, u32(u32, u32, u32, u32)> SoundObj_2___SoundObj_001da01c;

u32 f_001c0fdc(u32 r0, u32 r1, float S0) {
    gptr<Local_001c0fdc_r0_1> r0_1 = gptr<Local_001c0fdc_r0_1>(SoundObj_2___SoundObj_001da01c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]));
    float S0_1 = 1.0f;
    r0_1->float_e4 = S0_1;
    r0_1->byte_e8 = 0;
    guest::cpu()->r[1] = 0u;
    guest::cpu()->s[0] = S0_1;
    return r0_1.addr();
}

}  // namespace d_001c0fdc
GUEST_EXPORT_FRAMED(0x001c0fdc, d_001c0fdc::f_001c0fdc, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c1e54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1e54 {

struct __attribute__((packed)) Object_001c1e54_0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(Object_001c1e54_0, word_1bc, 0x1bc);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;

struct __attribute__((packed)) Frame_001c1e54 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c1e54, word_0, 0x0);
GUEST_OFFSET(Frame_001c1e54, word_4, 0x4);
GUEST_SIZE(Frame_001c1e54, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_001c1e54(gptr<Object_001c1e54_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_001c1e54> frame;  // the original's stack frame
    u32 r1_1 = arg0->word_1bc;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    frame->word_4 = 0x1c1ea0;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = call_0056aa98(arg0.addr() + 0xecu, frame.at(0).addr(), r1, 4u);  // (from the original)
    return r0_2 == 0 ? r0_2 : 1u;
}

}  // namespace d_001c1e54
GUEST_EXPORT_FRAMED(0x001c1e54, d_001c1e54::sead__SafeStringBase_char___SafeStringBase_001c1e54, 0x4000);  // pushes {lr} first, as the original

// f_001c1eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1eb8 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr u32 global_00952c4c_address = 0x00952c4cu;
inline guest::global<u32, 0x00952c4c> global_00952c4c;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_001c1eb8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c1eb8, word_0, 0x0);
GUEST_OFFSET(Frame_001c1eb8, word_4, 0x4);
GUEST_SIZE(Frame_001c1eb8, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_001c1eb8(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_001c1eb8> frame;  // the original's stack frame
    u32 r2_1 = *global_00952c4c;
    if (r2_1 == 0) {
        return 1u;
    }
    frame->word_4 = 0x1c1f04;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_1 = load_split_start(r0, frame.at(0).addr(), r2_1, 4u);
    return r0_1;
}

}  // namespace d_001c1eb8
GUEST_EXPORT_FRAMED(0x001c1eb8, d_001c1eb8::sead__SafeStringBase_char___SafeStringBase_001c1eb8, 0x4000);  // pushes {lr} first, as the original

// f_001c1f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f1c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> load_split_start;

struct __attribute__((packed)) Frame_001c1f1c {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c1f1c, word_0, 0x0);
GUEST_OFFSET(Frame_001c1f1c, word_4, 0x4);
GUEST_SIZE(Frame_001c1f1c, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_001c1f1c(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_001c1f1c> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    frame->word_4 = 0x1c1f5c;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = load_split_start(r0 + 0xecu, frame.at(0).addr(), r1, 4u);  // (from the original)
    return r0_2;
}

}  // namespace d_001c1f1c
GUEST_EXPORT_FRAMED(0x001c1f1c, d_001c1f1c::sead__SafeStringBase_char___SafeStringBase_001c1f1c, 0x4000);  // pushes {lr} first, as the original

// f_001c1f74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1f74 {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline constexpr guest::Function<0x0056a758, u32(u32, u32, u32, u32)> call_0056a758;

struct __attribute__((packed)) Frame_001c1f74 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c1f74, word_0, 0x0);
GUEST_OFFSET(Frame_001c1f74, word_4, 0x4);
GUEST_SIZE(Frame_001c1f74, 0xc);

u32 sead__SafeStringBase_char___SafeStringBase_001c1f74(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_001c1f74> frame;  // the original's stack frame
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    frame->word_4 = 0x1c1fb4;  // (from the original)
    frame->word_0 = vtable_sead__SafeStringBase_char_;
    u32 r0_2 = call_0056a758(r0 + 0xecu, frame.at(0).addr(), r1, 4u);  // (from the original)
    return r0_2;
}

}  // namespace d_001c1f74
GUEST_EXPORT_FRAMED(0x001c1f74, d_001c1f74::sead__SafeStringBase_char___SafeStringBase_001c1f74, 0x4000);  // pushes {lr} first, as the original

// f_001c1fcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c1fcc {

struct __attribute__((packed)) Object_001c1fcc_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0xe8];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(Object_001c1fcc_0, word_d0, 0xd0);
GUEST_OFFSET(Object_001c1fcc_0, word_1bc, 0x1bc);

inline constexpr guest::Function<0x006055f0, u32(u32, u32)> call_006055f0;
inline constexpr guest::Function<0x00605600, u32(u32, u32)> call_00605600;

u32 f_001c1fcc(gptr<Object_001c1fcc_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r5_1 = r1 * 5u;
    if (r1 <= 0x108u) {  // (from the original)
        u32 r0_1 = call_006055f0(r1, r1);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 != 0 && arg0->word_d0 != 0) {
            return arg0->word_d0 + (r5_1 << 9);
        }
        return 0u;
    }
    u32 r0_3 = call_00605600(r1, r1);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == 0 || arg0->word_1bc == 0) {
        return 0u;
    }
    r1_1 = (r5_1 << 9) + 0xfff5a600u;  // (from the original)
    r0_2 = arg0->word_1bc + r1_1;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c1fcc
GUEST_EXPORT_FRAMED(0x001c1fcc, d_001c1fcc::f_001c1fcc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c2040: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2040 {

struct __attribute__((packed)) Object_001c2040_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_001c2040_0, word_d0, 0xd0);

inline constexpr guest::Function<0x006055f0, u32(u32, u32)> call_006055f0;

u32 f_001c2040(gptr<Object_001c2040_0> arg0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_1 = call_006055f0(r1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0 || arg0->word_d0 == 0) {
        r0_2 = 0u;
    } else {
        r1_1 = r1 * 5u;
        r0_2 = arg0->word_d0 + (r1_1 << 9);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001c2040
GUEST_EXPORT_FRAMED(0x001c2040, d_001c2040::f_001c2040, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c2074: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2074 {

struct __attribute__((packed)) Object_001c2074_0 {
    u8 unknown_0[0x1bc];  // (not used here)
    u32 word_1bc;
};
GUEST_OFFSET(Object_001c2074_0, word_1bc, 0x1bc);

inline constexpr guest::Function<0x00605600, u32(u32)> call_00605600;

u32 f_001c2074(gptr<Object_001c2074_0> arg0, u32 r1) {
    u32 r0_1 = call_00605600(r1);
    return (r0_1 == 0 || arg0->word_1bc == 0) ? 0u : arg0->word_1bc + (r1 * 0xa00u + 0xfff5a600u);  // (from the original)
}

}  // namespace d_001c2074
GUEST_EXPORT_FRAMED(0x001c2074, d_001c2074::f_001c2074, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c23b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c23b0 {

struct __attribute__((packed)) Object_001c23b0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    float float_14;
};
GUEST_OFFSET(Object_001c23b0_0, word_0, 0x0);
GUEST_OFFSET(Object_001c23b0_0, word_4, 0x4);
GUEST_OFFSET(Object_001c23b0_0, word_8, 0x8);
GUEST_OFFSET(Object_001c23b0_0, word_c, 0xc);
GUEST_OFFSET(Object_001c23b0_0, word_10, 0x10);
GUEST_OFFSET(Object_001c23b0_0, float_14, 0x14);

struct __attribute__((packed)) Object_001c23b0_1 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
};
GUEST_OFFSET(Object_001c23b0_1, word_0, 0x0);
GUEST_OFFSET(Object_001c23b0_1, float_4, 0x4);
GUEST_OFFSET(Object_001c23b0_1, float_8, 0x8);
GUEST_OFFSET(Object_001c23b0_1, float_c, 0xc);
GUEST_OFFSET(Object_001c23b0_1, float_10, 0x10);
GUEST_OFFSET(Object_001c23b0_1, float_14, 0x14);

struct __attribute__((packed)) Object_001c23b0_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    float float_8;
    float float_c;
    float float_10;
};
GUEST_OFFSET(Object_001c23b0_2, word_4, 0x4);
GUEST_OFFSET(Object_001c23b0_2, float_8, 0x8);
GUEST_OFFSET(Object_001c23b0_2, float_c, 0xc);
GUEST_OFFSET(Object_001c23b0_2, float_10, 0x10);

struct __attribute__((packed)) Local_001c23b0_r0_1 {
    u32 word_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_001c23b0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_001c23b0_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001c23b0_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_001c23b0_r0_1, float_c, 0xc);

struct __attribute__((packed)) Local_001c23b0_r3_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
};
GUEST_OFFSET(Local_001c23b0_r3_1, float_0, 0x0);
GUEST_OFFSET(Local_001c23b0_r3_1, float_4, 0x4);
GUEST_OFFSET(Local_001c23b0_r3_1, float_8, 0x8);
GUEST_OFFSET(Local_001c23b0_r3_1, float_c, 0xc);

inline guest::global<u32, 0x008a3bbc> global_008a3bbc;
inline guest::global<u32, 0x008a3bc0> global_008a3bc0;
inline constexpr guest::Function<0x0055d634, u32(u32, u32, u32)> call_0055d634;

struct __attribute__((packed)) Frame_001c23b0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c23b0, word_0, 0x0);
GUEST_OFFSET(Frame_001c23b0, word_4, 0x4);
GUEST_OFFSET(Frame_001c23b0, word_8, 0x8);
GUEST_OFFSET(Frame_001c23b0, word_c, 0xc);
GUEST_SIZE(Frame_001c23b0, 0x30);

u32 f_001c23b0(gptr<Object_001c23b0_0> arg0, gptr<Object_001c23b0_1> arg1, gptr<Object_001c23b0_2> arg2) {
    guest::StackFrameOf<Frame_001c23b0> frame;  // the original's stack frame
    float S2_1 = arg1->float_4;
    float S3_1 = arg1->float_8;
    float S4_1 = arg1->float_c;
    float S5_1 = arg1->float_10;
    float S6_1 = arg1->float_14;
    arg0->word_0 = arg1->word_0;
    arg0->word_4 = std::bit_cast<u32>(S2_1);
    arg0->word_8 = std::bit_cast<u32>(S3_1);
    arg0->word_c = std::bit_cast<u32>(S4_1);
    arg0->word_10 = std::bit_cast<u32>(S5_1);
    arg0->float_14 = S6_1;
    frame->word_0 = *global_008a3bc0;
    frame->word_4 = *global_008a3bc0;
    gptr<Local_001c23b0_r3_1> r3_1 = gptr<Local_001c23b0_r3_1>(frame.at(0x10).addr());  // (from the original)
    frame->word_8 = *global_008a3bc0;
    frame->word_c = *global_008a3bbc;
    gptr<Local_001c23b0_r0_1> r0_1 = gptr<Local_001c23b0_r0_1>(frame.at(0x20).addr());  // (from the original)
    float S2_2 = arg2->float_8;
    float S3_2 = arg2->float_c;
    float S4_2 = arg2->float_10;
    r0_1->word_0 = arg2->word_4;
    r0_1->float_4 = S2_2;
    r0_1->float_8 = S3_2;
    r0_1->float_c = S4_2;
    float S1_1 = arg1->float_4;
    float S2_3 = arg1->float_8;
    float S3_3 = arg1->float_c;
    float S4_3 = arg1->float_10;
    r3_1->float_0 = S1_1;
    r3_1->float_4 = S2_3;
    r3_1->float_8 = S3_3;
    r3_1->float_c = S4_3;
    guest::cpu()->s[1] = S1_1;
    call_0055d634(frame.at(0).addr(), r3_1.addr(), r0_1.addr());
    arg0->word_4 = frame->word_0;
    arg0->word_8 = frame->word_4;
    arg0->word_c = frame->word_8;
    u32 r0_3 = frame->word_c;
    arg0->word_10 = r0_3;
    return r0_3;
}

}  // namespace d_001c23b0
GUEST_EXPORT_FRAMED(0x001c23b0, d_001c23b0::f_001c23b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c2764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c2764 {

inline constexpr u32 vtable_BsLightBase = 0x008eb7fcu;
inline constexpr guest::Function<0x00521a8c, u32(u32)> construct_process;

u32 BsLightBase__BsLightBase(gptr<BsLightBase> arg0) {
    construct_process(arg0.addr());
    arg0->word_14 = 0;
    arg0->word_0 = vtable_BsLightBase;
    return arg0.addr();
}

}  // namespace d_001c2764
GUEST_EXPORT_FRAMED(0x001c2764, d_001c2764::BsLightBase__BsLightBase, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c4bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bc8 {

struct __attribute__((packed)) Object_001c4bc8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001c4bc8_0, word_0, 0x0);

struct __attribute__((packed)) Local_001c4bc8_r0_2 {
    u16 half_0;
};
GUEST_OFFSET(Local_001c4bc8_r0_2, half_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;

void f_001c4bc8(gptr<Object_001c4bc8_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = call_00757aa0(arg0.addr(), r1, guest::cpu()->r[2], r3);
    gptr<Local_001c4bc8_r0_2> r0_2 = gptr<Local_001c4bc8_r0_2>(arg0->word_0 + (r0_1 << 1));
    u32 r1_1 = u32(r0_2->half_0) & 0xfu | r3;  // (from the original)
    r0_2->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001c4bc8
GUEST_EXPORT_FRAMED(0x001c4bc8, d_001c4bc8::f_001c4bc8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c4bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4bf4 {

struct __attribute__((packed)) Object_001c4bf4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001c4bf4_0, word_0, 0x0);

inline constexpr guest::Function<0x00757aa0, u32(u32, u32, u32, u32)> call_00757aa0;

void f_001c4bf4(gptr<Object_001c4bf4_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = call_00757aa0(arg0.addr(), r1, guest::cpu()->r[2], r3);
    u32 r1_1 = arg0->word_0;
    *gptr<u16>(r1_1 + (r0_1 << 1)) = u16(r3);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001c4bf4
GUEST_EXPORT_FRAMED(0x001c4bf4, d_001c4bf4::f_001c4bf4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c4c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c4c14 {

inline constexpr guest::Function<0x005bf518, u32(u32, u32)> call_005bf518;

void f_001c4c14(u32 r0_unused, u32 r1) {
    call_005bf518(guest::cpu()->r[0], r1);
}

}  // namespace d_001c4c14
GUEST_EXPORT_FRAMED(0x001c4c14, d_001c4c14::f_001c4c14, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c50e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c50e0 {

struct __attribute__((packed)) Object_001c50e0_0 {
    u8 unknown_0[0x164];  // (not used here)
    u8 byte_164;
    u8 unknown_165[0x3];  // (not used here)
    float float_168;
    float float_16c;
    float float_170;
    float float_174;
    u8 unknown_178[0xa0];  // (not used here)
    u32 word_218;
};
GUEST_OFFSET(Object_001c50e0_0, byte_164, 0x164);
GUEST_OFFSET(Object_001c50e0_0, float_168, 0x168);
GUEST_OFFSET(Object_001c50e0_0, float_16c, 0x16c);
GUEST_OFFSET(Object_001c50e0_0, float_170, 0x170);
GUEST_OFFSET(Object_001c50e0_0, float_174, 0x174);
GUEST_OFFSET(Object_001c50e0_0, word_218, 0x218);

struct __attribute__((packed)) Local_001c50e0_r1_2 {
    u8 unknown_0[0xc];  // (not used here)
    float float_c;
    u8 unknown_10[0xc];  // (not used here)
    float float_1c;
};
GUEST_OFFSET(Local_001c50e0_r1_2, float_c, 0xc);
GUEST_OFFSET(Local_001c50e0_r1_2, float_1c, 0x1c);

struct __attribute__((packed)) Local_001c50e0_r2_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_001c50e0_r2_1, float_0, 0x0);
GUEST_OFFSET(Local_001c50e0_r2_1, float_4, 0x4);


u32 f_001c50e0(gptr<Object_001c50e0_0> arg0) {
    u32 r1_1 = arg0->word_218;
    float S4_1 = 0.5f;
    float S5_1 = 160.0f;
    gptr<Local_001c50e0_r2_1> r2_1 = gptr<Local_001c50e0_r2_1>(r1_1 + 0x48u);  // (from the original)
    gptr<Local_001c50e0_r1_2> r1_2 = gptr<Local_001c50e0_r1_2>(r1_1 + 0x80u);  // (from the original)
    float S2_1 = r2_1->float_0;
    float S3_1 = r2_1->float_4;
    float S6_1 = 120.0f;
    float S0_1 = r1_2->float_c + S2_1 * S4_1;
    float S1_1 = r1_2->float_1c - S3_1 * S4_1;
    arg0->byte_164 = 1;
    float S4_2 = S5_1 - S0_1;
    float S0_2 = S1_1 + S6_1;
    arg0->float_168 = S4_2;
    arg0->float_16c = S0_2;
    arg0->float_170 = S2_1;
    arg0->float_174 = S3_1;
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 0x170u;  // (from the original)
}

}  // namespace d_001c50e0
GUEST_EXPORT(0x001c50e0, d_001c50e0::f_001c50e0);

// f_001c53b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53b8 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 CatalogBase__virtual_5(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = Layout__virtual_3(r0 + 0x2cu, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = read_global_975c20(r0_2);
    frame.release();
    return call_00569e6c(r0_3, r0 + 0x2cu, 1u);  // (from the original)
}

}  // namespace d_001c53b8
GUEST_EXPORT(0x001c53b8, d_001c53b8::CatalogBase__virtual_5);

// f_001c53dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c53dc {

inline guest::global<u32, 0x0087a024> global_0087a024;
inline guest::global<u32, 0x0087a028> global_0087a028;
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32)> call_00816b18;

u32 f_001c53dc() {
    call_00816b18(guest::cpu()->r[0], *global_0087a024, *global_0087a028);
    return guest::cpu()->r[0];
}

}  // namespace d_001c53dc
GUEST_EXPORT_FRAMED(0x001c53dc, d_001c53dc::f_001c53dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c551c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c551c {

inline guest::global<u32, 0x0087a02c> global_0087a02c;
inline guest::global<u32, 0x0087a030> global_0087a030;
inline constexpr guest::Function<0x00816b18, u32(u32, u32, u32)> call_00816b18;

u32 f_001c551c() {
    call_00816b18(guest::cpu()->r[0], *global_0087a02c, *global_0087a030);
    return guest::cpu()->r[0];
}

}  // namespace d_001c551c
GUEST_EXPORT_FRAMED(0x001c551c, d_001c551c::f_001c551c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c55b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c55b0 {

struct __attribute__((packed)) Local_001c55b0_ea_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001c55b0_ea_13, word_0, 0x0);
GUEST_OFFSET(Local_001c55b0_ea_13, word_4, 0x4);
GUEST_OFFSET(Local_001c55b0_ea_13, word_8, 0x8);

struct __attribute__((packed)) Local_001c55b0_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001c55b0_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_001c55b0_ea_7, word_4, 0x4);

inline constexpr u32 vtable_CatalogBase = 0x008eb984u;
inline guest::global<u32, 0x0087a044> global_0087a044;
inline guest::global<u32, 0x0087a048> global_0087a048;
inline guest::global<u32, 0x0087a04c> global_0087a04c;
inline guest::global<u32, 0x0087a050> global_0087a050;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;
inline constexpr guest::Function<0x00299b30, u32(u32, u32)> CommonScrollBar__CommonScrollBar;

u32 CatalogBase__CatalogBase(gptr<CatalogBase> arg0, float S0) {
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_0087a050;
    arg0->word_c = *global_0087a04c;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = vtable_CatalogBase;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0x87a0f0;  // (from the original)
    u32 r0_2 = Layout__Layout(((arg0.addr() + 0x24u) + 4u) + 4u, 0x87a0f0u, r2_1, arg0.addr() + 0xcu);  // (from the original)
    u32 r0_3 = r0_2 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    construct_layout_animation(r0_4);
    u32 r0_5 = r0_4 + 0x28u;  // (from the original)
    construct_layout_animation(r0_5);
    u32 r0_6 = r0_5 + 0x28u;  // (from the original)
    construct_layout_animation(r0_6);
    *gptr<u32>(r0_6 + 0x28u) = 0;  // (from the original)
    *gptr<u32>(r0_6 + 0x2cu) = 0;  // (from the original)
    u32 ea_5 = r0_6 + 0x30u;  // (from the original)
    *gptr<u32>(ea_5) = 0;
    u32 r0_8 = CommonScrollBar__CommonScrollBar(ea_5 + 4u, r0_6 - 0x1f0u);  // (from the original)
    u32 r0_9 = r0_8 - 0x224u;  // (from the original)
    *gptr<u8>(r0_9 + 0x9bcu) = 2;  // (from the original)
    gptr<Local_001c55b0_ea_7> ea_7 = gptr<Local_001c55b0_ea_7>(r0_9 + 0x9c0u);  // (from the original)
    ea_7->word_0 = ~0u;
    ea_7->word_4 = 0;
    float S0_6 = 0.0f;
    *gptr<u32>(r0_9 + 0x9c8u) = 0;  // (from the original)
    *gptr<u32>(r0_9 + 0x9ccu) = std::bit_cast<u32>(S0_6);  // (from the original)
    *gptr<u8>(r0_9 + 0x9d0u) = 0;  // (from the original)
    *gptr<u8>(r0_9 + 0x9d1u) = 1;  // (from the original)
    *gptr<u8>(r0_9 + 0x9d2u) = 0;  // (from the original)
    *gptr<u8>(r0_9 + 0x9d3u) = 1;  // (from the original)
    u32 r1_6 = *global_0087a044;
    u32 r2_7 = *global_0087a048;
    gptr<Local_001c55b0_ea_13> ea_13 = gptr<Local_001c55b0_ea_13>(r0_9 + 0x9d4u);  // (from the original)
    ea_13->word_0 = r1_6;
    ea_13->word_4 = r2_7;
    ea_13->word_8 = 0;
    guest::cpu()->s[0] = S0_6;
    return r0_9;
}

}  // namespace d_001c55b0
GUEST_EXPORT_FRAMED(0x001c55b0, d_001c55b0::CatalogBase__CatalogBase, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c6748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c6748 {

struct __attribute__((packed)) Local_001c6748_r4_2 {
    u32 word_0;
    u8 unknown_4[0x220];  // (not used here)
    u32 word_224;
};
GUEST_OFFSET(Local_001c6748_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_001c6748_r4_2, word_224, 0x224);

inline constexpr u32 vtable_CatalogBase = 0x008eb984u;
inline constexpr u32 vtable_CatalogList = 0x008eb9f0u;
inline constexpr u32 vtable_InstCatalog_8_ = 0x008ebba0u;
inline constexpr u32 vtable_CommonScrollBar = 0x008f0888u;
inline constexpr u32 vtable_Tab_4_ = 0x008f727cu;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> destroy_button_action_control;
inline constexpr guest::Function<0x00567ef0, u32(u32)> ssys__ma__lyt__ArcResAccReader__virtual_0;
inline constexpr guest::Function<0x0056988c, u32(u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;

u32 CatalogList__virtual_0(gptr<CatalogList> arg0) {
    arg0->word_0 = vtable_CatalogList;
    destroy_array_elements(arg0.addr() + 0xa44cu, 0x3009ccu, 0x2cu, 0x21u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x92c4u, 0x3009ccu, 0x2cu, 0x66u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x8664u, 0x3009ccu, 0x2cu, 0x48u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x7ae0u, 0x3009ccu, 0x2cu, 0x43u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x6f04u, 0x1cbb00u, 0x5cu, 0x21u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x4a5cu, 0x1cbb00u, 0x5cu, 0x66u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x307cu, 0x1cbb00u, 0x5cu, 0x48u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x1868u, 0x1cbb00u, 0x5cu, 0x43u);  // (from the original)
    destroy_array_elements(arg0.addr() + 0x172cu, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    u32 r0_10 = arg0.addr() + 0x1620u;  // (from the original)
    arg0->word_ac0 = vtable_Tab_4_;
    destroy_button_action_control(r0_10, vtable_Tab_4_);
    u32 r4_1 = r0_10 - 0xb60u;  // (from the original)
    destroy_array_elements(r0_10 - 0x380u, 0x31c92cu, 0xe0u, 4u);  // (from the original)
    destroy_array_elements(r4_1 + 0x740u, 0x56988cu, 0x28u, 4u);  // (from the original)
    destroy_array_elements(r4_1 + 0x6a0u, 0x56988cu, 0x28u, 4u);  // (from the original)
    destroy_array_elements(r4_1 + 0x170u, 0x5bf744u, 0x14cu, 4u);  // (from the original)
    u32 r0_16 = Layout__virtual_0(r4_1 + 0x24u);  // (from the original)
    gptr<Local_001c6748_r4_2> r4_2 = gptr<Local_001c6748_r4_2>(r0_16 - 0xae4u);  // (from the original)
    *gptr<u32>(r0_16 - 0xae4u) = vtable_InstCatalog_8_;  // (from the original)
    destroy_array_elements(r0_16 - 0x104u, 0x1c81ccu, 0x1cu, 8u);  // (from the original)
    u32 r0_18 = r4_2.addr() + 0x82cu;  // (from the original)
    r4_2->word_0 = vtable_CatalogBase;
    r4_2->word_224 = vtable_CommonScrollBar;
    destroy_button_action_control(r0_18, vtable_CommonScrollBar);
    destroy_array_elements(r0_18 - 0x1c0u, 0x2b6ef8u, 0xe0u, 2u);  // (from the original)
    u32 r0_20 = (r0_18 - 0x608u) + 0x410u;  // (from the original)
    destroy_animation(r0_20);
    u32 r0_21 = r0_20 - 0x28u;  // (from the original)
    destroy_animation(r0_21);
    u32 r0_22 = r0_21 - 0x28u;  // (from the original)
    destroy_animation(r0_22);
    u32 r0_23 = r0_22 - 0x28u;  // (from the original)
    destroy_animation(r0_23);
    u32 r0_25 = Layout__virtual_0(r0_23 - 0x14cu);  // (from the original)
    u32 r0_27 = ssys__ma__lyt__ArcResAccReader__virtual_0(r0_25 - 0x248u);  // (from the original)
    u32 r0_28 = r0_27 - 0x38u;  // (from the original)
    destroy_animation(r0_28);
    u32 r0_29 = r0_28 - 0x28u;  // (from the original)
    destroy_animation(r0_29);
    u32 r0_30 = r0_29 - 0x28u;  // (from the original)
    destroy_animation(r0_30);
    u32 r0_31 = r0_30 - 0x28u;  // (from the original)
    destroy_animation(r0_31);
    u32 r0_33 = Layout__virtual_0(r0_31 - 0x14cu);  // (from the original)
    return r0_33 - 0x2cu;  // (from the original)
}

}  // namespace d_001c6748
GUEST_EXPORT_FRAMED(0x001c6748, d_001c6748::CatalogList__virtual_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001c8cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c8cd4 {

struct __attribute__((packed)) Local_001c8cd4_ea_1 {
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
};
GUEST_OFFSET(Local_001c8cd4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_24, 0x24);
GUEST_OFFSET(Local_001c8cd4_ea_1, word_28, 0x28);

struct __attribute__((packed)) Local_001c8cd4_ea_6 {
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
GUEST_OFFSET(Local_001c8cd4_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_14, 0x14);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_18, 0x18);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_1c, 0x1c);
GUEST_OFFSET(Local_001c8cd4_ea_6, word_20, 0x20);

struct __attribute__((packed)) Local_001c8cd4_r0_16 {
    u8 unknown_0[0x1e58];  // (not used here)
    u32 word_1e58;
    u32 word_1e5c;
    u8 byte_1e60;
};
GUEST_OFFSET(Local_001c8cd4_r0_16, word_1e58, 0x1e58);
GUEST_OFFSET(Local_001c8cd4_r0_16, word_1e5c, 0x1e5c);
GUEST_OFFSET(Local_001c8cd4_r0_16, byte_1e60, 0x1e60);

struct __attribute__((packed)) Local_001c8cd4_r2_6 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_1, 0x1);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_2, 0x2);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_3, 0x3);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_r2_6, byte_5, 0x5);

struct __attribute__((packed)) Local_001c8cd4_r3_7 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_1, 0x1);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_2, 0x2);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_3, 0x3);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_4, 0x4);
GUEST_OFFSET(Local_001c8cd4_r3_7, byte_5, 0x5);

inline constexpr guest::Function<0x001435b4, u32(u32, u32, u32, u32)> translate_address;
inline constexpr guest::Function<0x00170514, u32(u32, u32, u32)> call_00170514;
inline constexpr guest::Function<0x001f9684, u32(u32, u32, u32, u32)> read_u32_0x0094f350_;
inline constexpr guest::Function<0x0034a784, u32(u32, u32, u32, u32)> call_0034a784;

struct __attribute__((packed)) Frame_001c8cd4 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x28];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c8cd4, word_0, 0x0);
GUEST_OFFSET(Frame_001c8cd4, word_4, 0x4);
GUEST_SIZE(Frame_001c8cd4, 0x30);

void f_001c8cd4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001c8cd4> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_13 = 0;
    gptr<Local_001c8cd4_r2_6> r2_6 = gptr<Local_001c8cd4_r2_6>(0u);
    gptr<Local_001c8cd4_r3_7> r3_7 = gptr<Local_001c8cd4_r3_7>(0u);
    gptr<Local_001c8cd4_ea_1> ea_1 = gptr<Local_001c8cd4_ea_1>(frame.at(4).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    u32 r0_1 = read_u32_0x0094f350_(r0, r1, r2, r3);
    u32 r0_2 = r0_1 + 0x24u;  // (from the original)
    r4 = r0_2;
    call_00170514(frame->word_4 + 0x1e70u, r0_2, r1);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    r9 = frame->word_4 + 0x27b8u;  // (from the original)
    do {
        u32 r1_1 = r5 + (r5 << 1);
        u32 r7_1 = frame->word_4 + (r1_1 << 7);
        u32 r8_1 = r7_1 + 0x1eb8u;  // (from the original)
        u32 r0_4 = translate_address(r8_1, r1_1, r2, r3);
        u32 r1_2 = *gptr<u32>(r4 + 4u);
        u32 r6_1 = frame->word_4 + ((r5 << 7) - ((r5 << 3) - r5) << 4);
        call_0034a784(r6_1 + 0x18u, r1_2, r0_4, 0xbu);  // (from the original)
        u32 r0_7 = translate_address(r7_1 + 0x21b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_0034a784(r6_1 + 0x18u, *gptr<u32>(r4 + 8u), r0_7, 0xbu);  // (from the original)
        u32 r0_9 = translate_address(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0034a784(r6_1 + 0x18u, *gptr<u32>(r4 + 0x14u), r0_9, 7u);  // (from the original)
        u32 r0_11 = translate_address(r8_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r6_2 = r6_1 + 0xf38u;  // (from the original)
        call_0034a784(r6_2, *gptr<u32>(r4 + 4u), r0_11, 0xbu);  // (from the original)
        u32 r0_13 = translate_address(r7_1 + 0x24b8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_0034a784(r6_2, *gptr<u32>(r4 + 8u), r0_13, 0xbu);  // (from the original)
        u32 r0_14 = translate_address(r9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0034a784(r6_2, *gptr<u32>(r4 + 0x14u), r0_14, 7u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 2);
    r11 = 0u;
    r0 = frame->word_4 + 0x28b8u;  // (from the original)
    r4 = frame->word_4 + 0x28eeu;  // (from the original)
    r10 = r11;
    frame->word_0 = r4;
    do {
        r7 = 0u;
        u32 r12 = r7;
        do {
            r1_13 = r12 + (r10 << 2);
            u32 r6_3 = r11 + r7;
            r2_6 = gptr<Local_001c8cd4_r2_6>(r6_3 + r4);
            *gptr<u8>(r4 + r6_3) = u8(r1_13);
            r2_6->byte_1 = u8(r1_13 + 1u);
            r2_6->byte_2 = u8(r1_13 + 5u);
            r2_6->byte_3 = u8(r1_13 + 5u);
            r2_6->byte_4 = u8(r1_13 + 4u);
            r3_7 = gptr<Local_001c8cd4_r3_7>(r6_3 + r0);
            r2_6->byte_5 = u8(r1_13);
            *gptr<u8>(r0 + r6_3) = u8(r1_13 + 1u);
            r3_7->byte_1 = u8(r1_13);
            r3_7->byte_2 = u8(r1_13 + 5u);
            r3_7->byte_3 = u8(r1_13 + 4u);
            r12 += 1u;
            r3_7->byte_4 = u8(r1_13 + 5u);
            r7 += 6u;
            r3_7->byte_5 = u8(r1_13);
            guest::preempt();
        } while (s32(r12) < 3);
        r10 += 1u;
        r11 += 0x12u;  // (from the original)
        guest::preempt();
    } while (s32(r10) < 3);
    u32 r0_15 = translate_address(r0, r1_13, r2_6.addr(), r3_7.addr());
    gptr<Local_001c8cd4_r0_16> r0_16 = gptr<Local_001c8cd4_r0_16>(frame->word_4);
    r0_16->word_1e58 = r0_15;
    r0_16->word_1e5c = 0x36;  // (from the original)
    r0_16->byte_1e60 = 1;
    u32 r0_18 = translate_address(frame->word_0, r0_15, r2_6.addr(), r3_7.addr());
    u32 r0_19 = frame->word_4;
    *gptr<u32>(r0_19 + 0x1e64u) = r0_18;  // (from the original)
    *gptr<u32>(r0_19 + 0x1e68u) = 0x36;  // (from the original)
    *gptr<u8>(r0_19 + 0x1e6cu) = 1;  // (from the original)
    gptr<Local_001c8cd4_ea_6> ea_6 = gptr<Local_001c8cd4_ea_6>(frame.at(0xc).addr());  // (from the original)
    u32 r4_1 = ea_6->word_0;
    u32 r5_2 = ea_6->word_4;
    u32 r6_4 = ea_6->word_8;
    u32 r7_2 = ea_6->word_c;
    u32 r8_3 = ea_6->word_10;
    u32 r9_2 = ea_6->word_14;
    u32 r10_1 = ea_6->word_18;
    u32 r11_1 = ea_6->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_001c8cd4
GUEST_EXPORT(0x001c8cd4, d_001c8cd4::f_001c8cd4);

// f_001c98d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c98d8 {

struct __attribute__((packed)) Object_001c98d8_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_001c98d8_0, word_44, 0x44);

struct __attribute__((packed)) Local_001c98d8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001c98d8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001c98d8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_001c98d8_ea_1, word_8, 0x8);

inline guest::global<u32, 0x00ae5658> global_00ae5658;
inline guest::global<u32, 0x00ae565c> global_00ae565c;
inline guest::global<u32, 0x00ae5660> global_00ae5660;
inline constexpr guest::Function<0x0014f3cc, u32(u32, u32, u32)> apply_matrix;
inline constexpr guest::Function<0x001cb118, u32(u32, u32, u32)> call_001cb118;
inline constexpr guest::Function<0x0052e3ec, u32(u32, u32)> call_0052e3ec;
inline constexpr guest::Function<0x0070ab44, u32(u32, u32, u32, u32)> call_0070ab44;
inline constexpr guest::Function<0x00718a58, u32(u32, u32, u32, u32)> call_00718a58;

struct __attribute__((packed)) Frame_001c98d8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x44];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001c98d8, word_0, 0x0);
GUEST_OFFSET(Frame_001c98d8, word_4, 0x4);
GUEST_OFFSET(Frame_001c98d8, word_8, 0x8);
GUEST_SIZE(Frame_001c98d8, 0x50);

void f_001c98d8(gptr<Object_001c98d8_0> arg0, u32 r1) {
    guest::StackFrameOf<Frame_001c98d8> frame;  // the original's stack frame
    u32 r5_1 = arg0->word_44;
    if (r5_1 != 0) {
        u32 r0_1 = *gptr<u32>(r5_1 + 0x68u);  // (from the original)
        u32 r0_2 = call_0070ab44(r0_1, frame.at(0x10).addr(), *gptr<u32>(r0_1 + 0xb4u), 0u);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = call_00718a58(r5_1 + 0xb4u, frame.at(0).addr(), 0x846fa8u, 0u);  // (from the original)
            if (r0_4 == 0) {
                frame->word_0 = *global_00ae5658;
                frame->word_4 = *global_00ae565c;
                frame->word_8 = *global_00ae5660;
            }
            u32 r0_5 = frame.at(0).addr();
            apply_matrix(r0_5, frame.at(0x10).addr(), r0_5);  // (from the original)
            call_0052e3ec(frame.at(0x40).addr(), frame.at(0).addr());  // (from the original)
            gptr<Local_001c98d8_ea_1> ea_1 = gptr<Local_001c98d8_ea_1>(arg0.addr() + 0xcu);  // (from the original)
            u32 r1_5 = ea_1->word_4;
            u32 r2_2 = ea_1->word_8;
            frame->word_0 = ea_1->word_0;
            frame->word_4 = r1_5;
            frame->word_8 = r2_2;
            call_001cb118(arg0.addr(), frame.at(0).addr(), *gptr<u32>(arg0.addr() + 0x3cu));  // (from the original)
            r1 = guest::cpu()->r[1];
            u32 r0_6 = *gptr<u32>(arg0.addr() + 0x3cu);  // (from the original)
            if (r0_6 != 0 && s32(r0_6) >= 0) {
                *gptr<u32>(arg0.addr() + 0x3cu) = r0_6 - 1u;  // (from the original)
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001c98d8
GUEST_EXPORT_FRAMED(0x001c98d8, d_001c98d8::f_001c98d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001c9f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001c9f88 {

struct __attribute__((packed)) Object_001c9f88_0 {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x8];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_001c9f88_0, word_24, 0x24);
GUEST_OFFSET(Object_001c9f88_0, word_28, 0x28);
GUEST_OFFSET(Object_001c9f88_0, word_2c, 0x2c);
GUEST_OFFSET(Object_001c9f88_0, word_38, 0x38);
GUEST_OFFSET(Object_001c9f88_0, word_40, 0x40);


u32 f_001c9f88(gptr<Object_001c9f88_0> arg0, float S0, float S1) {
    u32 r1_1 = arg0->word_38;
    if (s32(r1_1) < 0) {
        arg0->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        return 0u;
    }
    float S0_1 = 1.125f;
    if (s32(r1_1) <= 0xe) {  // (from the original)
        float S1_1 = float(s32(r1_1)) * 0.071428575f;
        float S0_2 = 0.0f + std::bit_cast<float>(arg0->word_40) * S0_1 * S1_1;
        arg0->word_24 = std::bit_cast<u32>(S0_2);
        arg0->word_28 = std::bit_cast<u32>(S0_2);
        arg0->word_2c = std::bit_cast<u32>(S0_2);
        arg0->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_1;
        return 0u;
    }
    float S1_2 = 0.33333334f;
    float S3_1 = 0.875f;
    if (s32(r1_1) <= 0x11) {  // (from the original)
        float S1_3 = (float(s32(r1_1)) - 14.0f) * S1_2;
        float S2_1 = std::bit_cast<float>(arg0->word_40);
        float S0_3 = S2_1 * S0_1;
        float S0_4 = S0_3 + (S2_1 * S3_1 - S0_3) * S1_3;
        arg0->word_24 = std::bit_cast<u32>(S0_4);
        arg0->word_28 = std::bit_cast<u32>(S0_4);
        arg0->word_2c = std::bit_cast<u32>(S0_4);
        arg0->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        return 0u;
    }
    if (s32(r1_1) <= 0x14) {  // (from the original)
        float S2_2 = std::bit_cast<float>(arg0->word_40);
        float S1_4 = (float(s32(r1_1)) - 17.0f) * S1_2;
        float S0_5 = S2_2 * S3_1;
        float S0_6 = S0_5 + (S2_2 - S0_5) * S1_4;
        arg0->word_24 = std::bit_cast<u32>(S0_6);
        arg0->word_28 = std::bit_cast<u32>(S0_6);
        arg0->word_2c = std::bit_cast<u32>(S0_6);
        arg0->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_4;
        return 0u;
    }
    u32 r1_6 = arg0->word_40;
    arg0->word_24 = r1_6;
    arg0->word_28 = r1_6;
    arg0->word_2c = r1_6;
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001c9f88
GUEST_EXPORT(0x001c9f88, d_001c9f88::f_001c9f88);

// f_001ca2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ca2c0 {

struct __attribute__((packed)) Object_001ca2c0_0 {
    u8 unknown_0[0x24];  // (not used here)
    float float_24;
    float float_28;
    float float_2c;
    u8 unknown_30[0x8];  // (not used here)
    u32 word_38;
    u8 unknown_3c[0x4];  // (not used here)
    float float_40;
};
GUEST_OFFSET(Object_001ca2c0_0, float_24, 0x24);
GUEST_OFFSET(Object_001ca2c0_0, float_28, 0x28);
GUEST_OFFSET(Object_001ca2c0_0, float_2c, 0x2c);
GUEST_OFFSET(Object_001ca2c0_0, word_38, 0x38);
GUEST_OFFSET(Object_001ca2c0_0, float_40, 0x40);


u32 f_001ca2c0(gptr<Object_001ca2c0_0> arg0, float S0, float S1) {
    u32 r1_1 = arg0->word_38;
    if (s32(r1_1) < 0) {
        arg0->word_38 = r1_1 + 1u;
        guest::cpu()->r[1] = r1_1 + 1u;
        return 0u;
    }
    if (s32(r1_1) > 9) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    float S1_1 = float(s32(r1_1)) * 0.11111111f;
    float S0_1 = arg0->float_40;
    float S0_2 = S0_1 + -S0_1 * S1_1;
    arg0->float_24 = S0_2;
    arg0->float_28 = S0_2;
    arg0->float_2c = S0_2;
    arg0->word_38 = r1_1 + 1u;
    guest::cpu()->r[1] = r1_1 + 1u;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    return 0u;
}

}  // namespace d_001ca2c0
GUEST_EXPORT(0x001ca2c0, d_001ca2c0::f_001ca2c0);

// f_001cb474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb474 {

struct __attribute__((packed)) Object_001cb474_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u8 unknown_1a4[0x4];  // (not used here)
    u32 word_1a8;
};
GUEST_OFFSET(Object_001cb474_0, word_1a0, 0x1a0);
GUEST_OFFSET(Object_001cb474_0, word_1a8, 0x1a8);

inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;
inline constexpr guest::Function<0x00568c10, u32(u32)> Layout__virtual_3;
inline constexpr guest::Function<0x00569544, u32(u32)> FrameControl__advance;
inline constexpr guest::Function<0x0074fdd0, u32(u32, u32, u32, u32)> button_slot_check;

u32 f_001cb474(gptr<Object_001cb474_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = arg0->word_1a0;
    if (r0_1 == 0) {
        return 1u;
    }
    u32 r0_2 = button_slot_check(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        u32 r1_2 = arg0->word_1a0;
        if (*gptr<u8>(r1_2 + 0x1cu) != 0) {  // (from the original)
            notify_list_objects(r0_2, r1_2, arg0->word_1a8, 0u);
            r1_2 = guest::cpu()->r[1];
        }
        arg0->word_1a0 = 0;
        arg0->word_1a8 = 0;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    FrameControl__advance(arg0->word_1a0);
    Layout__virtual_3(arg0.addr() + 4u);
    return 0u;
}

}  // namespace d_001cb474
GUEST_EXPORT_FRAMED(0x001cb474, d_001cb474::f_001cb474, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb690 {

inline constexpr guest::Function<0x001323bc, u32(u32)> read_global_975c20;
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;

u32 AmiiboPhotoBG__virtual_5(gptr<InOutWindow> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_1ad;
    if (r0_1 != 0) {
        u32 r0_2 = read_global_975c20(r0_1);
        frame.release();
        return call_00569e6c(r0_2, arg0.addr() + 4u, 0u);
    }
    u32 r0_3 = read_global_975c20(r0_1);
    frame.release();
    return call_00569e6c(r0_3, arg0.addr() + 4u, 1u);
}

}  // namespace d_001cb690
GUEST_EXPORT(0x001cb690, d_001cb690::AmiiboPhotoBG__virtual_5);

// f_001cb78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb78c {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;
inline constexpr guest::Function<0x001fa354, u32(u32)> call_001fa354;
inline constexpr guest::Function<0x006d1e64, u32(u32)> get_state_30;

u32 AmiiboPhotoBG__virtual_6(gptr<InOutWindow> arg0) {
    call_001323b4(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_1ac = 0;
    u32 r0_2 = get_state_30(0u);
    call_001fa354(*gptr<u32>(r0_2 + 0x1f4u));  // (from the original)
    return 1u;
}

}  // namespace d_001cb78c
GUEST_EXPORT_FRAMED(0x001cb78c, d_001cb78c::AmiiboPhotoBG__virtual_6, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb7ec {

struct __attribute__((packed)) Object_001cb7ec_0 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
};
GUEST_OFFSET(Object_001cb7ec_0, word_1a0, 0x1a0);
GUEST_OFFSET(Object_001cb7ec_0, word_1a4, 0x1a4);
GUEST_OFFSET(Object_001cb7ec_0, word_1a8, 0x1a8);

inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> notify_objects_of_list;
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> notify_list_objects;

u32 f_001cb7ec(gptr<Object_001cb7ec_0> arg0, u32 r1, float S0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1_1 = arg0->word_1a0;
    if (r1_1 != 0 && *gptr<u8>(r1_1 + 0x1cu) != 0) {  // (from the original)
        u32 r2_1 = arg0->word_1a8;
        notify_list_objects(arg0.addr() + 4u, r1_1, r2_1, 0u);
        S0 = guest::cpu()->s[0];
    }
    if (r1 != 0) {
        if (r1 == 1u) {
            arg0->word_1a8 = arg0->word_1a4;
            arg0->word_1a0 = arg0.addr() + 0x178u;  // (from the original)
        }
    } else {
        arg0->word_1a8 = arg0->word_1a4;
        arg0->word_1a0 = arg0.addr() + 0x150u;  // (from the original)
    }
    u32 r1_2 = arg0->word_1a0;
    u32 r2_2 = arg0->word_1a8;
    guest::cpu()->s[0] = S0;
    notify_objects_of_list(arg0.addr() + 4u, r1_2, r2_2, 0u);
    u32 r0_3 = arg0->word_1a0;
    float S0_1 = 0.0f;
    u32 r1_3 = *gptr<u32>(*gptr<u32>(r0_3) + 8u);
    // virtual function 2 of r0_3
    guest::cpu()->s[0] = S0_1;
    frame.release();
    return guest::call_address<u32>(r1_3, r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001cb7ec
GUEST_EXPORT(0x001cb7ec, d_001cb7ec::f_001cb7ec);

// f_001cb884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb884 {

struct __attribute__((packed)) Local_001cb884_r0_5 {
    u8 unknown_0[0x1a0];  // (not used here)
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u8 byte_1ac;
    u8 byte_1ad;
};
GUEST_OFFSET(Local_001cb884_r0_5, word_1a0, 0x1a0);
GUEST_OFFSET(Local_001cb884_r0_5, word_1a4, 0x1a4);
GUEST_OFFSET(Local_001cb884_r0_5, word_1a8, 0x1a8);
GUEST_OFFSET(Local_001cb884_r0_5, byte_1ac, 0x1ac);
GUEST_OFFSET(Local_001cb884_r0_5, byte_1ad, 0x1ad);

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr guest::Function<0x00125aec, u32(u32)> construct_layout_animation;
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> Layout__Layout;

u32 InOutWindow__InOutWindow_001cb884(gptr<InOutWindow> arg0, u32 r1_unused, u32 r2) {
    arg0->word_0 = vtable_InOutWindow;
    u32 r0_2 = Layout__Layout(arg0.addr() + 4u, vtable_InOutWindow, r2, guest::cpu()->r[3]);
    u32 r0_3 = r0_2 + 0x14cu;  // (from the original)
    construct_layout_animation(r0_3);
    u32 r0_4 = r0_3 + 0x28u;  // (from the original)
    construct_layout_animation(r0_4);
    gptr<Local_001cb884_r0_5> r0_5 = gptr<Local_001cb884_r0_5>(r0_4 - 0x178u);  // (from the original)
    r0_5->word_1a0 = 0;
    r0_5->word_1a4 = 0;
    r0_5->word_1a8 = 0;
    r0_5->byte_1ac = 0;
    r0_5->byte_1ad = 1;
    guest::cpu()->r[1] = 0u;
    return r0_5.addr();
}

}  // namespace d_001cb884
GUEST_EXPORT_FRAMED(0x001cb884, d_001cb884::InOutWindow__InOutWindow_001cb884, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cb8fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cb8fc {

inline constexpr u32 vtable_InOutWindow = 0x008ebb64u;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> destroy_animation;
inline constexpr guest::Function<0x005bf744, u32(u32)> Layout__virtual_0;

u32 InOutWindow__virtual_0(gptr<InOutWindow> arg0) {
    arg0->word_0 = vtable_InOutWindow;
    u32 r0_1 = arg0.addr() + 0x178u;  // (from the original)
    destroy_animation(r0_1, vtable_InOutWindow, guest::cpu()->r[2], guest::cpu()->r[3]);
    destroy_animation(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = Layout__virtual_0(r0_1 - 0x174u);  // (from the original)
    return r0_4 - 4u;
}

}  // namespace d_001cb8fc
GUEST_EXPORT_FRAMED(0x001cb8fc, d_001cb8fc::InOutWindow__virtual_0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001cbb20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cbb20 {

struct __attribute__((packed)) Object_001cbb20_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x30];  // (not used here)
    float float_4c;
};
GUEST_OFFSET(Object_001cbb20_0, word_18, 0x18);
GUEST_OFFSET(Object_001cbb20_0, float_4c, 0x4c);

struct __attribute__((packed)) Local_001cbb20_r0_1 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
};
GUEST_OFFSET(Local_001cbb20_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_001cbb20_r0_1, float_4, 0x4);
GUEST_OFFSET(Local_001cbb20_r0_1, float_8, 0x8);
GUEST_OFFSET(Local_001cbb20_r0_1, float_c, 0xc);
GUEST_OFFSET(Local_001cbb20_r0_1, float_10, 0x10);
GUEST_OFFSET(Local_001cbb20_r0_1, float_14, 0x14);
GUEST_OFFSET(Local_001cbb20_r0_1, float_18, 0x18);
GUEST_OFFSET(Local_001cbb20_r0_1, float_1c, 0x1c);
GUEST_OFFSET(Local_001cbb20_r0_1, float_20, 0x20);
GUEST_OFFSET(Local_001cbb20_r0_1, float_24, 0x24);
GUEST_OFFSET(Local_001cbb20_r0_1, float_28, 0x28);
GUEST_OFFSET(Local_001cbb20_r0_1, float_2c, 0x2c);

struct __attribute__((packed)) Local_001cbb20_r0_2 {
    float float_0;
    float float_4;
    float float_8;
};
GUEST_OFFSET(Local_001cbb20_r0_2, float_0, 0x0);
GUEST_OFFSET(Local_001cbb20_r0_2, float_4, 0x4);
GUEST_OFFSET(Local_001cbb20_r0_2, float_8, 0x8);

inline constexpr guest::Function<0x0014ef20, u32(u32, u32, u32)> multiply;
inline constexpr guest::Function<0x004edd20, u32(u32)> escape__MapCloudModel__virtual_2;
inline constexpr guest::Function<0x004ee3e8, u32(u32, u32)> TransformNode__set_scale;
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32)> TransformNode__update_transform;
inline constexpr guest::Function<0x00745f10, u32(u32, u32, u32, u32)> call_00745f10;

struct __attribute__((packed)) Frame_001cbb20 {
    float float_0;
    float float_4;
    float float_8;
    float float_c;
    float float_10;
    float float_14;
    float float_18;
    float float_1c;
    float float_20;
    float float_24;
    float float_28;
    float float_2c;
    u8 unknown_30[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001cbb20, float_0, 0x0);
GUEST_OFFSET(Frame_001cbb20, float_4, 0x4);
GUEST_OFFSET(Frame_001cbb20, float_8, 0x8);
GUEST_OFFSET(Frame_001cbb20, float_c, 0xc);
GUEST_OFFSET(Frame_001cbb20, float_10, 0x10);
GUEST_OFFSET(Frame_001cbb20, float_14, 0x14);
GUEST_OFFSET(Frame_001cbb20, float_18, 0x18);
GUEST_OFFSET(Frame_001cbb20, float_1c, 0x1c);
GUEST_OFFSET(Frame_001cbb20, float_20, 0x20);
GUEST_OFFSET(Frame_001cbb20, float_24, 0x24);
GUEST_OFFSET(Frame_001cbb20, float_28, 0x28);
GUEST_OFFSET(Frame_001cbb20, float_2c, 0x2c);
GUEST_SIZE(Frame_001cbb20, 0x40);

u32 f_001cbb20(gptr<Object_001cbb20_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7, float S8, float S9, float S10, float S11) {
    guest::StackFrameOf<Frame_001cbb20> frame;  // the original's stack frame
    u32 r1_1 = arg0->word_18;
    gptr<Local_001cbb20_r0_1> r0_1 = gptr<Local_001cbb20_r0_1>(call_00745f10(r1, r1_1, r2, guest::cpu()->r[3]));
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    float S0_2 = r0_1->float_0;
    float S1_2 = r0_1->float_4;
    float S2_1 = r0_1->float_8;
    float S3_1 = r0_1->float_c;
    float S4_1 = r0_1->float_10;
    float S5_1 = r0_1->float_14;
    float S6_1 = r0_1->float_18;
    float S7_1 = r0_1->float_1c;
    float S8_1 = r0_1->float_20;
    float S9_1 = r0_1->float_24;
    float S10_1 = r0_1->float_28;
    float S11_1 = r0_1->float_2c;
    gptr<Local_001cbb20_r0_2> r0_2 = gptr<Local_001cbb20_r0_2>(frame.at(0x30).addr());  // (from the original)
    frame->float_0 = S0_2;
    frame->float_4 = S1_2;
    frame->float_8 = S2_1;
    frame->float_c = S3_1;
    frame->float_10 = S4_1;
    frame->float_14 = S5_1;
    frame->float_18 = S6_1;
    frame->float_1c = S7_1;
    frame->float_20 = S8_1;
    frame->float_24 = S9_1;
    frame->float_28 = S10_1;
    frame->float_2c = S11_1;
    float S0_3 = arg0->float_4c;
    r0_2->float_0 = S0_3;
    r0_2->float_4 = S0_3;
    r0_2->float_8 = S0_3;
    u32 r0_3 = frame.at(0).addr();
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_3;
    guest::cpu()->s[2] = S0_3;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    guest::cpu()->s[8] = S8_1;
    guest::cpu()->s[9] = S9_1;
    guest::cpu()->s[10] = S10_1;
    guest::cpu()->s[11] = S11_1;
    multiply(r0_3, r0_3, arg0.addr() + 0x1cu);  // (from the original)
    TransformNode__update_transform(arg0.addr(), frame.at(0).addr());
    TransformNode__set_scale(arg0.addr(), frame.at(0x30).addr());  // (from the original)
    u32 r0_4 = escape__MapCloudModel__virtual_2(arg0.addr());
    return r0_4;
}

}  // namespace d_001cbb20
GUEST_EXPORT_FRAMED(0x001cbb20, d_001cbb20::f_001cbb20, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ccb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccb14 {

inline constexpr u32 vtable_BankTable_NpcTopsBank__10u_ = 0x008f8ef8u;
inline constexpr u32 vtable_BankTable_HumanResTextureAnimBank__10u_ = 0x008f9060u;
inline constexpr u32 vtable_BankTable_Bank_10240u__1u__false__BankVramConfig_0u__0u__0u__0u__false____10u_ = 0x008f90d8u;
inline constexpr u32 vtable_BankTable_ToolBank__10u_ = 0x008f91a0u;
inline constexpr guest::Function<0x002134a0, u32(u32, u32, u32, u32)> construct_bank_table_base;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x00810f00, u32(u32, u32)> construct_buffered_string_20;

u32 f_001ccb14(gptr<BankTable_HumanResTextureAnimBank__10u_> arg0, u32 r1, u32 r2, u32 r3) {
    construct_bank_table_base(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_BankTable_HumanResTextureAnimBank__10u_;
    u32 r0_2 = for_each_element(arg0.addr() + 0xcu, 0x334e10u, 0x14u, 0xau);  // (from the original)
    u32 r0_3 = r0_2 - 0xcu;  // (from the original)
    *gptr<u16>(r0_3 + 0xd4u) = 0;  // (from the original)
    u32 r0_4 = r0_3 + 0xd8u;  // (from the original)
    construct_bank_table_base(r0_4, r0_3 + 0xd4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_4) = vtable_BankTable_HumanResTextureAnimBank__10u_;
    u32 r0_6 = for_each_element(r0_4 + 0xcu, 0x334e10u, 0x14u, 0xau);  // (from the original)
    u32 r1_2 = r0_6 - 0xcu;  // (from the original)
    *gptr<u16>(r0_6 + 0xc8u) = 0;  // (from the original)
    u32 r0_7 = r1_2 + 0xd8u;  // (from the original)
    construct_bank_table_base(r0_7, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_7) = vtable_BankTable_NpcTopsBank__10u_;
    u32 r0_9 = for_each_element(r0_7 + 0xcu, 0x1cdbc4u, 0x260u, 0xau);  // (from the original)
    u32 r1_3 = r0_9 - 0xcu;  // (from the original)
    *gptr<u16>(r0_9 + 0x17c0u) = 0;  // (from the original)
    u32 r0_10 = r1_3 + 0x17d0u;  // (from the original)
    construct_bank_table_base(r0_10, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_10) = vtable_BankTable_ToolBank__10u_;
    u32 r0_12 = for_each_element(r0_10 + 0xcu, 0x6c32f8u, 0x8a8u, 0xau);  // (from the original)
    u32 r1_4 = r0_12 - 0xcu;  // (from the original)
    *gptr<u16>(r0_12 + 0x5690u) = 0;  // (from the original)
    u32 r0_13 = r1_4 + 0x56a0u;  // (from the original)
    construct_bank_table_base(r0_13, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_13) = vtable_BankTable_Bank_10240u__1u__false__BankVramConfig_0u__0u__0u__0u__false____10u_;
    u32 r0_15 = for_each_element(r0_13 + 0xcu, 0x7f3f98u, 0x14u, 0xau);  // (from the original)
    u32 r1_5 = r0_15 - 0xcu;  // (from the original)
    *gptr<u16>(r0_15 + 0xc8u) = 0;  // (from the original)
    u32 r0_16 = r1_5 + 0xdcu;  // (from the original)
    *gptr<u32>(r1_5 + 0xd8u) = 0;  // (from the original)
    construct_buffered_string_20(r0_16, r1_5);
    u32 r0_17 = r0_16 + 0x2cu;  // (from the original)
    construct_buffered_string_20(r0_17, guest::cpu()->r[1]);
    u32 r0_18 = r0_17 + 0x2cu;  // (from the original)
    construct_buffered_string_20(r0_18, guest::cpu()->r[1]);
    u32 r0_19 = r0_18 + 0x2cu;  // (from the original)
    construct_buffered_string_20(r0_19, guest::cpu()->r[1]);
    u32 r0_20 = r0_19 + 0x2cu;  // (from the original)
    construct_buffered_string_20(r0_20, guest::cpu()->r[1]);
    u32 r0_21 = r0_20 + 0x2cu;  // (from the original)
    construct_buffered_string_20(r0_21, guest::cpu()->r[1]);
    return r0_21 - 0x71d8u;  // (from the original)
}

}  // namespace d_001ccb14
GUEST_EXPORT_FRAMED(0x001ccb14, d_001ccb14::f_001ccb14, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001cce78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cce78 {

struct __attribute__((packed)) Object_001cce78_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001cce78_0, word_8, 0x8);
GUEST_OFFSET(Object_001cce78_0, word_c, 0xc);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001cce78 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001cce78, word_0, 0x0);
GUEST_SIZE(Frame_001cce78, 0x4);

u32 f_001cce78(gptr<Object_001cce78_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001cce78> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_1 = call_001ccc58(arg0.addr(), 5u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = arg0->word_8;
    u32 r1_2 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r0_2)) >> 0x20;  // (from the original)
    u32 r1_3 = ~0x27u + (u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f)) * 0x28u;  // (from the original)
    *gptr<u32>(r0_2 + r1_3 + 4u) = r2;
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_001cce78
GUEST_EXPORT_FRAMED(0x001cce78, d_001cce78::f_001cce78, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001ccee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ccee0 {

struct __attribute__((packed)) Object_001ccee0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001ccee0_0, word_8, 0x8);
GUEST_OFFSET(Object_001ccee0_0, word_c, 0xc);

struct __attribute__((packed)) Object_001ccee0_2 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Object_001ccee0_2, float_0, 0x0);
GUEST_OFFSET(Object_001ccee0_2, word_4, 0x4);
GUEST_OFFSET(Object_001ccee0_2, float_8, 0x8);

struct __attribute__((packed)) Local_001ccee0_r0_4 {
    float float_0;
    u32 word_4;
    float float_8;
};
GUEST_OFFSET(Local_001ccee0_r0_4, float_0, 0x0);
GUEST_OFFSET(Local_001ccee0_r0_4, word_4, 0x4);
GUEST_OFFSET(Local_001ccee0_r0_4, float_8, 0x8);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001ccee0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001ccee0, word_0, 0x0);
GUEST_SIZE(Frame_001ccee0, 0x4);

u32 f_001ccee0(gptr<Object_001ccee0_0> arg0, u32 r1, gptr<Object_001ccee0_2> arg2, u32 r3, float S0, float S1) {
    guest::StackFrameOf<Frame_001ccee0> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_1 = call_001ccc58(arg0.addr(), 2u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = arg0->word_8;
    float S1_2 = arg2->float_0;
    float S0_2 = arg2->float_8;
    u32 r1_2 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r0_2)) >> 0x20;  // (from the original)
    u32 r0_3 = r0_2 + (~0x27u + (u32(s32(r1_2) >> 4) - u32(s32(r1_2) >> 0x1f)) * 0x28u);  // (from the original)
    u32 r1_3 = arg2->word_4;
    gptr<Local_001ccee0_r0_4> r0_4 = gptr<Local_001ccee0_r0_4>(r0_3 + 0x10u);  // (from the original)
    r0_4->float_0 = S1_2;
    r0_4->word_4 = r1_3;
    r0_4->float_8 = S0_2;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return 1u;
}

}  // namespace d_001ccee0
GUEST_EXPORT_FRAMED(0x001ccee0, d_001ccee0::f_001ccee0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001cd538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd538 {

struct __attribute__((packed)) Object_001cd538_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001cd538_0, word_8, 0x8);
GUEST_OFFSET(Object_001cd538_0, word_c, 0xc);

inline guest::global<u16, 0x00868474> global_00868474;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001cd538 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001cd538, word_0, 0x0);
GUEST_SIZE(Frame_001cd538, 0x4);

u32 f_001cd538(gptr<Object_001cd538_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001cd538> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*global_00868474));
    u32 r3_1 = s16(*global_00868474);
    u32 r0_1 = call_001ccc58(arg0.addr(), 4u, r1, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r2_1 = arg0->word_8;
        u32 r1_2 = ~0x27u;  // (from the original)
        u32 r3_2 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r2_1)) >> 0x20;  // (from the original)
        u32 r3_3 = u32(s32(r3_2) >> 4) - u32(s32(r3_2) >> 0x1f);  // (from the original)
        *gptr<u16>(r2_1 + (r1_2 + (r3_3 + (r3_3 << 2) << 3)) + 0x20u) = u16(r2);  // (from the original)
        u32 r2_2 = arg0->word_8;
        u32 r3_4 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r2_2)) >> 0x20;  // (from the original)
        u32 r3_5 = u32(s32(r3_4) >> 4) - u32(s32(r3_4) >> 0x1f);  // (from the original)
        *gptr<u16>(r2_2 + (r1_2 + (r3_5 + (r3_5 << 2) << 3)) + 0x1eu) = u16(r3);  // (from the original)
        u32 r2_3 = arg0->word_8;
        u32 r0_2 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r2_3)) >> 0x20;  // (from the original)
        u32 r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);  // (from the original)
        r1_1 = 0u;
        *gptr<u16>((r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_3) + 0x1cu) = u16(r1_1);  // (from the original)
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001cd538
GUEST_EXPORT_FRAMED(0x001cd538, d_001cd538::f_001cd538, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001cd668: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd668 {

inline guest::global<u16, 0x00868474> global_00868474;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001cd668 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001cd668, word_0, 0x0);
GUEST_SIZE(Frame_001cd668, 0x4);

u32 f_001cd668(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001cd668> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*global_00868474));
    u32 r3_1 = s16(*global_00868474);
    call_001ccc58(guest::cpu()->r[0], 0u, r1, r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_001cd668
GUEST_EXPORT_FRAMED(0x001cd668, d_001cd668::f_001cd668, 0x4000);  // pushes {lr} first, as the original

// f_001cd690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd690 {

inline guest::global<u16, 0x00868474> global_00868474;
inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001cd690 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001cd690, word_0, 0x0);
GUEST_SIZE(Frame_001cd690, 0x4);

u32 f_001cd690(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001cd690> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = u32(s16(*global_00868474));
    u32 r3_1 = s16(*global_00868474);
    call_001ccc58(guest::cpu()->r[0], 1u, r1, r3_1);
    return guest::cpu()->r[0];
}

}  // namespace d_001cd690
GUEST_EXPORT_FRAMED(0x001cd690, d_001cd690::f_001cd690, 0x4000);  // pushes {lr} first, as the original

// f_001cd6b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd6b8 {

struct __attribute__((packed)) Object_001cd6b8_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001cd6b8_0, word_8, 0x8);
GUEST_OFFSET(Object_001cd6b8_0, word_c, 0xc);

inline constexpr guest::Function<0x001ccc58, u32(u32, u32, u32, u32)> call_001ccc58;

struct __attribute__((packed)) Frame_001cd6b8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_001cd6b8, word_0, 0x0);
GUEST_SIZE(Frame_001cd6b8, 0x4);

u32 f_001cd6b8(gptr<Object_001cd6b8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001cd6b8> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = *frame.at<u32>(0x10);  // (from the original)
    u32 r0_1 = call_001ccc58(arg0.addr(), 3u, r1, r3);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r2_1 = arg0->word_8;
    u32 r1_2 = ~0x27u;  // (from the original)
    u32 r3_1 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r2_1)) >> 0x20;  // (from the original)
    u32 r3_2 = u32(s32(r3_1) >> 4) - u32(s32(r3_1) >> 0x1f);  // (from the original)
    *gptr<u8>(r2_1 + (r1_2 + (r3_2 + (r3_2 << 2) << 3)) + 2u) = u8(r2);
    u32 r2_2 = arg0->word_8;
    u32 r0_2 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r2_2)) >> 0x20;  // (from the original)
    u32 r0_3 = u32(s32(r0_2) >> 4) - u32(s32(r0_2) >> 0x1f);  // (from the original)
    *gptr<u16>((r1_2 + (r0_3 + (r0_3 << 2) << 3) + r2_2) + 0x1cu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return 1u;
}

}  // namespace d_001cd6b8
GUEST_EXPORT_FRAMED(0x001cd6b8, d_001cd6b8::f_001cd6b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001cd744: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd744 {

struct __attribute__((packed)) Object_001cd744_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_001cd744_0, word_8, 0x8);
GUEST_OFFSET(Object_001cd744_0, word_c, 0xc);
GUEST_OFFSET(Object_001cd744_0, word_10, 0x10);

struct __attribute__((packed)) Local_001cd744_r1_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd744_r1_3, byte_0, 0x0);
GUEST_OFFSET(Local_001cd744_r1_3, byte_1, 0x1);
GUEST_OFFSET(Local_001cd744_r1_3, byte_2, 0x2);
GUEST_OFFSET(Local_001cd744_r1_3, word_4, 0x4);
GUEST_OFFSET(Local_001cd744_r1_3, word_8, 0x8);
GUEST_OFFSET(Local_001cd744_r1_3, word_c, 0xc);
GUEST_OFFSET(Local_001cd744_r1_3, word_10, 0x10);
GUEST_OFFSET(Local_001cd744_r1_3, word_14, 0x14);
GUEST_OFFSET(Local_001cd744_r1_3, word_18, 0x18);
GUEST_OFFSET(Local_001cd744_r1_3, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd744_r1_3, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd744_r1_3, half_20, 0x20);
GUEST_OFFSET(Local_001cd744_r1_3, half_22, 0x22);
GUEST_OFFSET(Local_001cd744_r1_3, half_24, 0x24);

struct __attribute__((packed)) Local_001cd744_r2_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd744_r2_1, byte_0, 0x0);
GUEST_OFFSET(Local_001cd744_r2_1, byte_1, 0x1);
GUEST_OFFSET(Local_001cd744_r2_1, byte_2, 0x2);
GUEST_OFFSET(Local_001cd744_r2_1, word_4, 0x4);
GUEST_OFFSET(Local_001cd744_r2_1, word_8, 0x8);
GUEST_OFFSET(Local_001cd744_r2_1, word_c, 0xc);
GUEST_OFFSET(Local_001cd744_r2_1, word_10, 0x10);
GUEST_OFFSET(Local_001cd744_r2_1, word_14, 0x14);
GUEST_OFFSET(Local_001cd744_r2_1, word_18, 0x18);
GUEST_OFFSET(Local_001cd744_r2_1, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd744_r2_1, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd744_r2_1, half_20, 0x20);
GUEST_OFFSET(Local_001cd744_r2_1, half_22, 0x22);
GUEST_OFFSET(Local_001cd744_r2_1, half_24, 0x24);


void f_001cd744(gptr<Object_001cd744_0> arg0) {
    u32 r3_1 = arg0->word_8;
    gptr<Local_001cd744_r2_1> r2_1 = gptr<Local_001cd744_r2_1>(arg0->word_c);
    u32 r1_1 = u64(s64(s32(0x66666667u)) * s32(r2_1.addr() - r3_1)) >> 0x20;  // (from the original)
    u32 r1_2 = u32(s32(r1_1) >> 4) - u32(s32(r1_1) >> 0x1f);  // (from the original)
    if (r1_2 == arg0->word_10) {
        return;
    }
    gptr<Local_001cd744_r1_3> r1_3 = gptr<Local_001cd744_r1_3>(~0x27u + (r1_2 + (r1_2 << 2) << 3) + r3_1);  // (from the original)
    if (r2_1.addr() == 0) {
        arg0->word_c = arg0->word_c + 0x28u;  // (from the original)
        return;
    }
    r2_1->byte_0 = r1_3->byte_0;
    r2_1->byte_1 = r1_3->byte_1;
    r2_1->byte_2 = r1_3->byte_2;
    r2_1->word_4 = r1_3->word_4;
    r2_1->word_8 = r1_3->word_8;
    r2_1->word_c = r1_3->word_c;
    r2_1->word_10 = r1_3->word_10;
    r2_1->word_14 = r1_3->word_14;
    r2_1->word_18 = r1_3->word_18;
    r2_1->half_1c = r1_3->half_1c;
    r2_1->half_1e = r1_3->half_1e;
    r2_1->half_20 = r1_3->half_20;
    r2_1->half_22 = r1_3->half_22;
    r2_1->half_24 = r1_3->half_24;
    arg0->word_c = arg0->word_c + 0x28u;  // (from the original)
}

}  // namespace d_001cd744
GUEST_EXPORT_FRAMED(0x001cd744, d_001cd744::f_001cd744, 0x10);  // pushes {r4} first, as the original

// f_001cd810: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd810 {

struct __attribute__((packed)) Object_001cd810_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001cd810_0, word_4, 0x4);


void f_001cd810(gptr<Object_001cd810_0> arg0, u32 r1) {
    arg0->word_4 = r1;
}

}  // namespace d_001cd810
GUEST_EXPORT(0x001cd810, d_001cd810::f_001cd810);

// f_001cd81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd81c {

struct __attribute__((packed)) Object_001cd81c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_001cd81c_0, word_4, 0x4);
GUEST_OFFSET(Object_001cd81c_0, word_8, 0x8);
GUEST_OFFSET(Object_001cd81c_0, word_c, 0xc);

struct __attribute__((packed)) Local_001cd81c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001cd81c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001cd81c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001cd81c_r1_1 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
    u8 unknown_6c[0x7bc];  // (not used here)
    u32 word_828;
};
GUEST_OFFSET(Local_001cd81c_r1_1, word_68, 0x68);
GUEST_OFFSET(Local_001cd81c_r1_1, word_828, 0x828);


void f_001cd81c(gptr<Object_001cd81c_0> arg0) {
    gptr<Local_001cd81c_r1_1> r1_1 = gptr<Local_001cd81c_r1_1>(arg0->word_4);
    u32 r3_1 = ~0x27u;  // (from the original)
    *gptr<u32>(r1_1->word_68 + 0x58u) = r1_1->word_828;  // (from the original)
    u32 r1_2 = arg0->word_8;
    u32 r2_1 = u64(s64(s32(0x66666667u)) * s32(arg0->word_c - r1_2)) >> 0x20;  // (from the original)
    gptr<Local_001cd81c_ea_1> ea_1 = gptr<Local_001cd81c_ea_1>((u32(*gptr<u8>(r3_1 + (u32(s32(r2_1) >> 4) - u32(s32(r2_1) >> 0x1f)) * 0x28u + r1_2)) << 3) + 0x881128u);  // (from the original)
    u32 r1_3 = ea_1->word_0;
    u32 r2_2 = ea_1->word_4;
    u32 r0_1 = arg0.addr() + u32(s32(r2_2) >> 1);
    if ((r2_2 & 1u) == 0) {
        guest::call_address<u32>(r1_3, r0_1, r1_3, r2_2, r3_1);
        return;
    }
    u32 r2_3 = *gptr<u32>(r0_1);
    u32 r1_4 = *gptr<u32>(r2_3 + r1_3);
    guest::call_address<u32>(r1_4, r0_1, r1_4, r2_3, r3_1);
}

}  // namespace d_001cd81c
GUEST_EXPORT(0x001cd81c, d_001cd81c::f_001cd81c);

// f_001cd888: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cd888 {

struct __attribute__((packed)) Local_001cd888_r1_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 unknown_3[0x1];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    float float_10;
    float float_14;
    float float_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u16 half_24;
};
GUEST_OFFSET(Local_001cd888_r1_1, byte_0, 0x0);
GUEST_OFFSET(Local_001cd888_r1_1, byte_1, 0x1);
GUEST_OFFSET(Local_001cd888_r1_1, byte_2, 0x2);
GUEST_OFFSET(Local_001cd888_r1_1, word_4, 0x4);
GUEST_OFFSET(Local_001cd888_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_001cd888_r1_1, word_c, 0xc);
GUEST_OFFSET(Local_001cd888_r1_1, float_10, 0x10);
GUEST_OFFSET(Local_001cd888_r1_1, float_14, 0x14);
GUEST_OFFSET(Local_001cd888_r1_1, float_18, 0x18);
GUEST_OFFSET(Local_001cd888_r1_1, half_1c, 0x1c);
GUEST_OFFSET(Local_001cd888_r1_1, half_1e, 0x1e);
GUEST_OFFSET(Local_001cd888_r1_1, half_20, 0x20);
GUEST_OFFSET(Local_001cd888_r1_1, half_22, 0x22);
GUEST_OFFSET(Local_001cd888_r1_1, half_24, 0x24);

inline constexpr u32 vtable_NpcHeadCtrl = 0x008ebc0cu;
inline guest::global<u16, 0x00868474> global_00868474;
inline guest::global<u16, 0x00868476> global_00868476;

void NpcHeadCtrl__NpcHeadCtrl(gptr<NpcHeadCtrl> arg0, float S0) {
    u32 r3_1 = arg0.addr() + 0x14u;  // (from the original)
    arg0->word_0 = vtable_NpcHeadCtrl;
    arg0->word_4 = 0;
    arg0->word_8 = r3_1;
    arg0->word_c = r3_1;
    arg0->word_10 = 3;
    arg0->byte_8c = 0;
    gptr<Local_001cd888_r1_1> r1_1 = gptr<Local_001cd888_r1_1>(arg0->word_c);
    if (r1_1.addr() == 0) {
        u32 r1_2 = arg0->word_c + 0x28u;  // (from the original)
        arg0->word_c = r1_2;
        guest::cpu()->r[1] = r1_2;
        return;
    }
    r1_1->byte_0 = 0;
    r1_1->byte_1 = 0;
    r1_1->half_1c = 0;
    r1_1->half_1e = 0x200;  // (from the original)
    r1_1->half_20 = 0;
    r1_1->byte_2 = 4;
    r1_1->word_4 = 0;
    r1_1->word_8 = 0;
    float S0_1 = 0.0f;
    r1_1->word_c = 0;
    r1_1->float_10 = S0_1;
    r1_1->float_14 = S0_1;
    r1_1->float_18 = S0_1;
    r1_1->half_22 = *global_00868474;
    r1_1->half_24 = *global_00868476;
    u32 r1_3 = arg0->word_c + 0x28u;  // (from the original)
    arg0->word_c = r1_3;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_001cd888
GUEST_EXPORT(0x001cd888, d_001cd888::NpcHeadCtrl__NpcHeadCtrl);

// f_001cda40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cda40 {

struct __attribute__((packed)) Object_001cda40_0 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Object_001cda40_0, byte_24, 0x24);

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> string_length;
inline constexpr guest::Function<0x004f2ef0, u32(u32, u32, u32, u32)> call_004f2ef0;
inline constexpr guest::Function<0x00736a1c, u32(u32, u32, u32)> call_00736a1c;

struct __attribute__((packed)) Frame_001cda40 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001cda40, word_0, 0x0);
GUEST_SIZE(Frame_001cda40, 0x20);

u32 f_001cda40(gptr<Object_001cda40_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_001cda40> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    frame->word_0 = r3;
    u32 r8_1 = 0u;
    u32 r2_1 = u32(arg0->byte_24) & 1u;
    if (r2_1 >= 2u) {
        r0_1 = r0 + 0x38u;  // (from the original)
    } else {
        r3 = r2_1 * 5u;
        r0_1 = r0 + (r3 + (r2_1 << 6) << 2) + 0x38u;  // (from the original)
    }
    if (r0_1 != 0 && r1 != 0) {
        u32 ea_1 = *gptr<u32>(r0_1 + 8u) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_1);
        u32 r0_2 = r2_2 == 0 ? r8_1 : ea_1 + r2_2;
        if (r0_2 == 0) {
            r4_1 = 0u;
        } else {
            u32 ea_2 = r0_2 + 0x28u;  // (from the original)
            r2_2 = *gptr<u32>(ea_2);
            r4_1 = r2_2 == 0 ? r8_1 : r2_2 + ea_2;
        }
        u32 ea_3 = r1 + 0xc0u;  // (from the original)
        r1 = ea_3;
        u32 r0_3 = *gptr<u32>(ea_3);
        u32 r0_4 = r0_3 == 0 ? r8_1 : r0_3 + r1;
        frame->word_0 = r0_4;
        if (r0_4 != 0) {
            u32 r0_5 = string_length(0x1cdb28u, r1, r2_2, r3);  // (from the original)
            u32 r0_6 = call_00736a1c(frame.at(0).addr(), 0x1cdb28u, r0_5);  // (from the original)
            r1 = guest::cpu()->r[1];
            if (r0_6 != 0) {
                u32 ea_4 = r0_6 + 0xcu;  // (from the original)
                r1 = *gptr<u32>(ea_4);
                if (r1 != 0) {
                    r8_1 = r1 + ea_4;
                }
                goto L_1cdb08;
            }
        }
        r8_1 = 0u;
L_1cdb08:;
        u32 zf_1 = r8_1 == 0;
        r0_1 = r8_1;
        if (!zf_1) {
            zf_1 = r4_1 == 0;
        }
        if (!zf_1) {
            u32 r3_2 = frame->word_0;
            frame.release();
            return call_004f2ef0(r0_1, 0x1cdb28u, r4_1, r3_2);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_001cda40
GUEST_EXPORT(0x001cda40, d_001cda40::f_001cda40);

// f_001cddc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cddc4 {

struct __attribute__((packed)) Object_001cddc4_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_001cddc4_0, byte_e, 0xe);


void f_001cddc4(gptr<Object_001cddc4_0> arg0, u32 r1) {
    arg0->byte_e = u8(u32(arg0->byte_e) & ~0x30u | (r1 & 3u) << 4);  // (from the original)
}

}  // namespace d_001cddc4
GUEST_EXPORT(0x001cddc4, d_001cddc4::f_001cddc4);

// f_001cde00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde00 {

struct __attribute__((packed)) Object_001cde00_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_001cde00_0, word_8, 0x8);
GUEST_OFFSET(Object_001cde00_0, half_c, 0xc);


void f_001cde00(gptr<Object_001cde00_0> arg0) {
    u32 r1_1 = arg0->word_8 & 0xff000000u;  // (from the original)
    u32 r2_1 = u32(arg0->half_c) & ~0xffu;  // (from the original)
    arg0->word_8 = r1_1;
    arg0->half_c = u16(r2_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cde00
GUEST_EXPORT(0x001cde00, d_001cde00::f_001cde00);

// f_001cde1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde1c {

struct __attribute__((packed)) Object_001cde1c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cde1c_0, word_8, 0x8);


void f_001cde1c(gptr<Object_001cde1c_0> arg0) {
    arg0->word_8 = arg0->word_8 & ~0xc0000000u;  // (from the original)
}

}  // namespace d_001cde1c
GUEST_EXPORT(0x001cde1c, d_001cde1c::f_001cde1c);

// f_001cde2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde2c {

struct __attribute__((packed)) Object_001cde2c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_001cde2c_0, half_c, 0xc);


void f_001cde2c(gptr<Object_001cde2c_0> arg0, u32 r1) {
    u32 r1_1 = (r1 == 0 ? 0u : 0x8000u) | u32(arg0->half_c) & ~0x8000u;  // (from the original)
    arg0->half_c = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cde2c
GUEST_EXPORT(0x001cde2c, d_001cde2c::f_001cde2c);

// f_001cde9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cde9c {

struct __attribute__((packed)) Object_001cde9c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cde9c_0, word_8, 0x8);


void f_001cde9c(gptr<Object_001cde9c_0> arg0) {
    arg0->word_8 = arg0->word_8 & ~0x3c000000u;  // (from the original)
}

}  // namespace d_001cde9c
GUEST_EXPORT(0x001cde9c, d_001cde9c::f_001cde9c);

// f_001cdf18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf18 {

struct __attribute__((packed)) Object_001cdf18_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf18_0, word_8, 0x8);


void f_001cdf18(gptr<Object_001cdf18_0> arg0) {
    arg0->word_8 = arg0->word_8 & ~0xc0000000u & ~0x7800000u;  // (from the original)
}

}  // namespace d_001cdf18
GUEST_EXPORT(0x001cdf18, d_001cdf18::f_001cdf18);

// f_001cdf2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf2c {

struct __attribute__((packed)) Object_001cdf2c_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf2c_0, word_8, 0x8);


void f_001cdf2c(gptr<Object_001cdf2c_0> arg0, u32 r1) {
    arg0->word_8 = arg0->word_8 & ~0x7800000u | (r1 & 0xfu) << 0x17;  // (from the original)
}

}  // namespace d_001cdf2c
GUEST_EXPORT(0x001cdf2c, d_001cdf2c::f_001cdf2c);

// f_001cdf44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf44 {

struct __attribute__((packed)) Object_001cdf44_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Object_001cdf44_0, word_8, 0x8);
GUEST_OFFSET(Object_001cdf44_0, half_c, 0xc);


u32 f_001cdf44(gptr<Object_001cdf44_0> arg0, u32 r1) {
    if (r1 != 0) {
        u32 r1_1 = (r1 << 3) - 8u;
        u32 r0_1 = lsr_r(arg0->word_8, r1_1 & 0xff) & 0x7fu;  // (from the original)
        if (r0_1 > 0x63u) {  // (from the original)
            r0_1 = 0x63u;  // (from the original)
        }
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    u32 r0_2 = u32(arg0->half_c) & ~0xc000u;  // (from the original)
    if (r0_2 > 0x270fu) {  // (from the original)
        r0_2 = 0x270fu;  // (from the original)
    }
    guest::cpu()->r[1] = 0x270fu;  // (from the original)
    return r0_2;
}

}  // namespace d_001cdf44
GUEST_EXPORT(0x001cdf44, d_001cdf44::f_001cdf44);

// f_001cdf88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf88 {

struct __attribute__((packed)) Object_001cdf88_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_001cdf88_0, word_8, 0x8);


void f_001cdf88(gptr<Object_001cdf88_0> arg0) {
    u32 r1_1 = arg0->word_8 & ~0x7800000u;  // (from the original)
    arg0->word_8 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cdf88
GUEST_EXPORT(0x001cdf88, d_001cdf88::f_001cdf88);

// f_001cdf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001cdf98 {

struct __attribute__((packed)) Object_001cdf98_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_001cdf98_0, byte_e, 0xe);


void f_001cdf98(gptr<Object_001cdf98_0> arg0, u32 r1) {
    u32 r1_1 = r1 & 0xfu | u32(arg0->byte_e) & 0xf0u;  // (from the original)
    arg0->byte_e = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001cdf98
GUEST_EXPORT(0x001cdf98, d_001cdf98::f_001cdf98);

// f_001ce934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ce934 {

struct __attribute__((packed)) Object_001ce934_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_001ce934_3, byte_0, 0x0);
GUEST_OFFSET(Object_001ce934_3, byte_1, 0x1);
GUEST_OFFSET(Object_001ce934_3, byte_2, 0x2);

struct __attribute__((packed)) Local_001ce934_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_14, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_14, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_16 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_16, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_16, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_001ce934_r5_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ce934_r5_2, word_0, 0x0);
GUEST_OFFSET(Local_001ce934_r5_2, word_4, 0x4);

inline constexpr guest::Function<0x0020cd9c, u32(u32, u32)> call_0020cd9c;
inline constexpr guest::Function<0x0020cde4, u32(u32, u32, u32, u32)> call_0020cde4;
inline constexpr guest::Function<0x004f1648, u32(u32, u32, u32, u32)> call_004f1648;

struct __attribute__((packed)) Frame_001ce934 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u8 byte_c;
    u8 byte_d;
    u8 byte_e;
    u8 unknown_f[0x1];  // (not read or written by name)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 unknown_13[0x1];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001ce934, word_0, 0x0);
GUEST_OFFSET(Frame_001ce934, byte_c, 0xc);
GUEST_OFFSET(Frame_001ce934, byte_d, 0xd);
GUEST_OFFSET(Frame_001ce934, byte_e, 0xe);
GUEST_OFFSET(Frame_001ce934, byte_10, 0x10);
GUEST_OFFSET(Frame_001ce934, byte_11, 0x11);
GUEST_OFFSET(Frame_001ce934, byte_12, 0x12);
GUEST_SIZE(Frame_001ce934, 0x14);

u32 f_001ce934(u32 r0, u32 r1, u32 r2, gptr<Object_001ce934_3> arg3) {
    guest::StackFrameOf<Frame_001ce934> frame;  // the original's stack frame
    frame->byte_c = 0xc8;  // (from the original)
    frame->byte_10 = 0xc8;  // (from the original)
    frame->byte_d = 0xc8;  // (from the original)
    frame->byte_11 = 0xc8;  // (from the original)
    frame->byte_e = 0;
    frame->byte_12 = 0;
    u32 r3_1 = u32(arg3->byte_1) << 8;
    u32 r2_1 = r3_1 & 0xff00u;  // (from the original)
    u32 r4_1 = ((u32(arg3->byte_0) | ((0xc8u | r0 & ~0xffu) & ~0xff00u | 0xc8u << 8 & 0xff00u) & ~0xff0000u & ~0xffu) & ~0xff00u | r2_1) & ~0xff0000u | u32(arg3->byte_2) << 0x10 & 0xff0000u;  // (from the original)
    u32 r5_1 = *frame.at<u32>(0x28);  // (from the original)
    call_0020cde4(frame.at(0xc).addr(), r1, r2_1, r3_1);  // (from the original)
    u32 r0_3 = call_0020cd9c(frame.at(0x10).addr(), r2);  // (from the original)
    u32 r7_1 = ~0u;
    if ((r5_1 & 1u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;  // (from the original)
        gptr<Local_001ce934_ea_2> ea_2 = gptr<Local_001ce934_ea_2>(frame.at(4).addr());
        ea_2->word_0 = r4_1 >> 0x10u & 0xffu;  // (from the original)
        ea_2->word_4 = r7_1;
        r0_3 = call_004f1648(r0, 0x1ceb5cu, 0u, r4_1 & 0xffu);  // (from the original)
    }
    if ((r5_1 & 2u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;  // (from the original)
        gptr<Local_001ce934_ea_4> ea_4 = gptr<Local_001ce934_ea_4>(frame.at(4).addr());
        ea_4->word_0 = r4_1 >> 0x10u & 0xffu;  // (from the original)
        ea_4->word_4 = r7_1;
        call_004f1648(r0, 0x1ceb60u, 0u, r4_1 & 0xffu);  // (from the original)
        u32 r1_2 = frame->byte_d;
        u32 r0_4 = frame->byte_e;
        frame->word_0 = r1_2;
        gptr<Local_001ce934_ea_8> ea_8 = gptr<Local_001ce934_ea_8>(frame.at(4).addr());
        ea_8->word_0 = r0_4;
        ea_8->word_4 = r7_1;
        u32 r3_5 = frame->byte_c;
        r0_3 = call_004f1648(r0, 0x1ceb60u, 1u, r3_5);  // (from the original)
    }
    if ((r5_1 & 4u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;  // (from the original)
        gptr<Local_001ce934_ea_10> ea_10 = gptr<Local_001ce934_ea_10>(frame.at(4).addr());
        ea_10->word_0 = r4_1 >> 0x10u & 0xffu;  // (from the original)
        ea_10->word_4 = r7_1;
        call_004f1648(r0, 0x1ceb64u, 0u, r4_1 & 0xffu);  // (from the original)
        u32 r1_3 = frame->byte_11;
        u32 r0_5 = frame->byte_12;
        frame->word_0 = r1_3;
        gptr<Local_001ce934_ea_14> ea_14 = gptr<Local_001ce934_ea_14>(frame.at(4).addr());
        ea_14->word_0 = r0_5;
        ea_14->word_4 = r7_1;
        u32 r3_7 = frame->byte_10;
        r0_3 = call_004f1648(r0, 0x1ceb64u, 1u, r3_7);  // (from the original)
    }
    if ((r5_1 & 8u) != 0) {
        frame->word_0 = r4_1 >> 8u & 0xffu;  // (from the original)
        gptr<Local_001ce934_ea_16> ea_16 = gptr<Local_001ce934_ea_16>(frame.at(4).addr());
        ea_16->word_0 = r4_1 >> 0x10u & 0xffu;  // (from the original)
        ea_16->word_4 = r7_1;
        r0_3 = call_004f1648(r0, 0x1ceb68u, 0u, r4_1 & 0xffu);  // (from the original)
    }
    if ((r5_1 & 0x10u) != 0) {  // (from the original)
        gptr<Local_001ce934_r5_2> r5_2 = gptr<Local_001ce934_r5_2>(frame.at(4).addr());
        frame->word_0 = r4_1 >> 8u & 0xffu;  // (from the original)
        r5_2->word_0 = r4_1 >> 0x10u & 0xffu;  // (from the original)
        r5_2->word_4 = r7_1;
        r0_3 = call_004f1648(r0, 0x1ceb70u, 0u, r4_1 & 0xffu);  // (from the original)
    }
    return r0_3;
}

}  // namespace d_001ce934
GUEST_EXPORT_FRAMED(0x001ce934, d_001ce934::f_001ce934, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001ceb78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ceb78 {

struct __attribute__((packed)) Object_001ceb78_1 {
    u8 unknown_0[0x55ba];  // (not used here)
    u8 byte_55ba;
};
GUEST_OFFSET(Object_001ceb78_1, byte_55ba, 0x55ba);

struct __attribute__((packed)) Local_001ceb78_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ceb78_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_001ceb78_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_001ceb78_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ceb78_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_001ceb78_ea_3, word_4, 0x4);

inline constexpr guest::Function<0x001cebc0, u32(u32, u32, u32, u32)> call_001cebc0;

struct __attribute__((packed)) Frame_001ceb78 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_001ceb78, word_0, 0x0);
GUEST_SIZE(Frame_001ceb78, 0x10);

u32 f_001ceb78(u32 r0_unused, gptr<Object_001ceb78_1> arg1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_001ceb78> frame;  // the original's stack frame
    gptr<Local_001ceb78_ea_1> ea_1 = gptr<Local_001ceb78_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r12_1 = ea_1->word_4;
    frame->word_0 = r3;
    gptr<Local_001ceb78_ea_3> ea_3 = gptr<Local_001ceb78_ea_3>(frame.at(4).addr());
    ea_3->word_0 = r2_1;
    ea_3->word_4 = r12_1;
    call_001cebc0(guest::cpu()->r[0], arg1.addr() + 4u, 1u & ~u32(arg1->byte_55ba), r2);
    return guest::cpu()->r[0];
}

}  // namespace d_001ceb78
GUEST_EXPORT_FRAMED(0x001ceb78, d_001ceb78::f_001ceb78, 0x4010);  // pushes {r4, lr} first, as the original
