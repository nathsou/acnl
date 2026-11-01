// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_001e00c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e00c8 {

inline constexpr guest::Function<0x001df69c, u32(u32)> call_001df69c;  // (from the original)
inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_001e00c8(u32 r0) {
    call_00779548(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001df69c(r0);
    return r0;
}

}  // namespace d_001e00c8
GUEST_EXPORT_FRAMED(0x001e00c8, d_001e00c8::f_001e00c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e00e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e00e4 {

inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)

u32 f_001e00e4(u32 r0) {
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        u32 r0_1 = (r4 << 4) - r4;
        r0_3 = call_001b3f24(r5 + (r0_1 + (r0_1 << 3) << 4), 0x16u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 8u);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_001e00e4
GUEST_EXPORT_FRAMED(0x001e00e4, d_001e00e4::f_001e00e4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e0114: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0114 {

struct __attribute__((packed)) Local_001e0114_r4_1 {
    u8 unknown_0[0x67];  // (not used here)
    u8 byte_67;
    u8 byte_68;
    u8 unknown_69[0x803];  // (not used here)
    u8 byte_86c;
};
GUEST_OFFSET(Local_001e0114_r4_1, byte_67, 0x67);  // (from the original)
GUEST_OFFSET(Local_001e0114_r4_1, byte_68, 0x68);  // (from the original)
GUEST_OFFSET(Local_001e0114_r4_1, byte_86c, 0x86c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32)> call_003052f0;  // (from the original)

void f_001e0114(u32 r0) {
    u32 r5 = 0u;
    u32 r6 = r0;
    u32 r7 = r5;
    do {
        u32 r0_1 = (r5 << 4) - r5;
        gptr<Local_001e0114_r4_1> r4_1 = gptr<Local_001e0114_r4_1>(r6 + (r0_1 + (r0_1 << 3) << 4));
        call_002f825c(r4_1.addr(), 0x2au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_003052f0(r4_1.addr() + 0x2au, guest::cpu()->r[1]);  // (from the original)
        call_002f825c(r4_1.addr() + 0x58u, 0xfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4_1->byte_67 = u8(r7);
        r4_1->byte_68 = u8(r7);
        call_002f825c(r4_1.addr() + 0x6cu, 0x800u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5 += 1u;
        r4_1->byte_86c = u8(r7);
        guest::preempt();
    } while (r5 < 8u);
}

}  // namespace d_001e0114
GUEST_EXPORT_FRAMED(0x001e0114, d_001e0114::f_001e0114, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_001e0220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0220 {

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;  // (from the original)

u32 f_001e0220(u32 r0, u32 r1) {
    u32 r0_1 = call_003506c8(0x863u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0 + 8u) = r0_1;
    *gptr<u32>(r0 + 4u) = guest::cpu()->r[1];
    u32 r0_2 = u32(*gptr<u16>(r0 + 0x22u)) | 1u;  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r0_2);  // (from the original)
    return r0_2;
}

}  // namespace d_001e0220
GUEST_EXPORT_FRAMED(0x001e0220, d_001e0220::f_001e0220, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e025c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e025c {

inline constexpr guest::Function<0x001e0220, u32(u32, u32, u32, u32)> call_001e0220;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)

void f_001e025c(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (r0 != 0) {
        u32 r0_1 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        frame.release();
        call_001e0220(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_2 = call_002fb918(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_2 + 4u) = 0;
    *gptr<u32>(r0_2 + 8u) = 0;
    u32 r1_2 = u32(*gptr<u16>(r0_2 + 0x22u)) & ~1u;  // (from the original)
    *gptr<u16>(r0_2 + 0x22u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e025c
GUEST_EXPORT(0x001e025c, d_001e025c::f_001e025c);

// f_001e02b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e02b4 {

inline constexpr guest::Function<0x001e02a4, u32(u32, u32)> call_001e02a4;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32)> call_002fb918;  // (from the original)

void f_001e02b4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (r0 != 0) {
        u32 r0_1 = call_002fb918(r0, r1);
        frame.release();
        call_001e02a4(r0_1, guest::cpu()->r[1]);
        return;
    }
    u32 r0_2 = call_002fb918(r0, r1);
    u32 r1_2 = u32(*gptr<u16>(r0_2 + 0x22u)) & ~0x100u;  // (from the original)
    *gptr<u16>(r0_2 + 0x22u) = u16(r1_2);  // (from the original)
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e02b4
GUEST_EXPORT(0x001e02b4, d_001e02b4::f_001e02b4);

// f_001e02f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e02f0 {

struct __attribute__((packed)) Object_001e02f0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x16];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_001e02f0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e02f0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001e02f0_0, half_22, 0x22);  // (from the original)

inline constexpr guest::Function<0x0027a48c, u32(u32)> call_0027a48c;  // (from the original)

u32 f_001e02f0(gptr<Object_001e02f0_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    u32 r0_2 = call_0027a48c((arg0.addr() + 8u) + 4u);
    arg0->half_22 = 0;
    return r0_2;
}

}  // namespace d_001e02f0
GUEST_EXPORT_FRAMED(0x001e02f0, d_001e02f0::f_001e02f0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e0318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0318 {

struct __attribute__((packed)) Object_001e0318_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x16];  // (not used here)
    u16 half_22;
};
GUEST_OFFSET(Object_001e0318_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001e0318_0, half_22, 0x22);  // (from the original)

inline constexpr guest::Function<0x0027a48c, u32(u32)> call_0027a48c;  // (from the original)

u32 f_001e0318(gptr<Object_001e0318_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    u32 r0_1 = (arg0.addr() + 8u) + 4u;
    arg0->half_22 = 0;
    arg0->word_4 = 0;
    u32 r4_1 = r0_1 - 0xcu;  // (from the original)
    arg0->word_8 = 0;
    call_0027a48c(r0_1);
    *gptr<u16>(r4_1 + 0x22u) = 0;  // (from the original)
    return r4_1;
}

}  // namespace d_001e0318
GUEST_EXPORT_FRAMED(0x001e0318, d_001e0318::f_001e0318, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e0354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e0354 {


u32 f_001e0354(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = r0 + (r2 << 4);
    u32 r2_1 = *gptr<u8>(r0_1 + r1);
    if (r2_1 < 0xffu) {  // (from the original)
        *gptr<u8>(r0_1 + r1) = u8(r2_1 + 1u);
    }
    return r0_1;
}

}  // namespace d_001e0354
GUEST_EXPORT(0x001e0354, d_001e0354::f_001e0354);

// f_001e17fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e17fc {

struct __attribute__((packed)) Object_001e17fc_0 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
    u8 byte_19;
};
GUEST_OFFSET(Object_001e17fc_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001e17fc_0, byte_19, 0x19);  // (from the original)


void f_001e17fc(gptr<Object_001e17fc_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_18;
    u32 r2_1 = (r3_1 >> 5) + ((u32(arg0->byte_19) & 1u) << 3) + r1;
    if (r2_1 <= 0xeu) {  // (from the original)
        u32 r1_1 = u32(arg0->byte_19) & ~1u | (r2_1 & 8u) >> 3;
        arg0->byte_18 = u8(r3_1 & ~0xe0u | r2_1 << 5);  // (from the original)
        arg0->byte_19 = u8(r1_1);
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xeu;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = u32(arg0->byte_19) & ~1u | (r2_1 & 8u) >> 3;
    arg0->byte_18 = u8(r3_1 & ~0xe0u | r2_1 << 5);  // (from the original)
    arg0->byte_19 = u8(r1_2);
}

}  // namespace d_001e17fc
GUEST_EXPORT(0x001e17fc, d_001e17fc::f_001e17fc);

// f_001e18ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e18ac {

struct __attribute__((packed)) Object_001e18ac_0 {
    u8 unknown_0[0x17];  // (not used here)
    u8 byte_17;
    u8 byte_18;
};
GUEST_OFFSET(Object_001e18ac_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_001e18ac_0, byte_18, 0x18);  // (from the original)


void f_001e18ac(gptr<Object_001e18ac_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_17;
    u32 r2_1 = (r3_1 >> 7) + ((u32(arg0->byte_18) & 7u) << 1) + r1;
    if (r2_1 <= 0xfu) {  // (from the original)
        u32 r1_1 = u32(arg0->byte_18) & ~7u | (r2_1 & 0xeu) >> 1;  // (from the original)
        arg0->byte_17 = u8(r3_1 & ~0x80u | r2_1 << 7);  // (from the original)
        arg0->byte_18 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xfu;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = u32(arg0->byte_18) & ~7u | (r2_1 & 0xeu) >> 1;  // (from the original)
    arg0->byte_17 = u8(r3_1 & ~0x80u | r2_1 << 7);  // (from the original)
    arg0->byte_18 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e18ac
GUEST_EXPORT(0x001e18ac, d_001e18ac::f_001e18ac);

// f_001e1b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1b84 {

struct __attribute__((packed)) Object_001e1b84_0 {
    u8 unknown_0[0x11];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_001e1b84_0, byte_11, 0x11);  // (from the original)


void f_001e1b84(gptr<Object_001e1b84_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_11;
    u32 r2_1 = r1 + (r3_1 >> 4);
    if (r2_1 <= 0xeu) {  // (from the original)
        u32 r1_1 = r3_1 & ~0xf0u | r2_1 << 4;  // (from the original)
        arg0->byte_11 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xeu;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0xf0u | r2_1 << 4;  // (from the original)
    arg0->byte_11 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e1b84
GUEST_EXPORT(0x001e1b84, d_001e1b84::f_001e1b84);

// f_001e1bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1bb0 {

struct __attribute__((packed)) Object_001e1bb0_0 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Object_001e1bb0_0, byte_1, 0x1);  // (from the original)


void f_001e1bb0(gptr<Object_001e1bb0_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_1;
    u32 r2_1 = r1 + (r3_1 >> 3);
    if (r2_1 <= 0x1fu) {  // (from the original)
        arg0->byte_1 = u8(r3_1 & ~0xf8u | r2_1 << 3);  // (from the original)
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0x1fu;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    arg0->byte_1 = u8(r3_1 & ~0xf8u | r2_1 << 3);  // (from the original)
}

}  // namespace d_001e1bb0
GUEST_EXPORT(0x001e1bb0, d_001e1bb0::f_001e1bb0);

// f_001e1bf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1bf4 {

struct __attribute__((packed)) Object_001e1bf4_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_001e1bf4_0, byte_10, 0x10);  // (from the original)


void f_001e1bf4(gptr<Object_001e1bf4_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_10;
    u32 r2_1 = r1 + (r3_1 >> 3u & 0xfu);  // (from the original)
    if (r2_1 <= 0xau) {  // (from the original)
        u32 r1_1 = r3_1 & ~0x78u | (r2_1 & 0xfu) << 3;  // (from the original)
        arg0->byte_10 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 0xau;  // (from the original)
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0x78u | (r2_1 & 0xfu) << 3;  // (from the original)
    arg0->byte_10 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e1bf4
GUEST_EXPORT(0x001e1bf4, d_001e1bf4::f_001e1bf4);

// f_001e1c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1c28 {

struct __attribute__((packed)) Object_001e1c28_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_001e1c28_0, byte_a, 0xa);  // (from the original)


void f_001e1c28(gptr<Object_001e1c28_0> arg0, u32 r1) {
    u32 r1_1 = u32(arg0->byte_a) & ~0x3cu | (r1 & 0xfu) << 2;  // (from the original)
    arg0->byte_a = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001e1c28
GUEST_EXPORT(0x001e1c28, d_001e1c28::f_001e1c28);

// f_001e1c58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e1c58 {

struct __attribute__((packed)) Object_001e1c58_0 {
    u8 unknown_0[0x25];  // (not used here)
    u8 byte_25;
};
GUEST_OFFSET(Object_001e1c58_0, byte_25, 0x25);  // (from the original)


void f_001e1c58(gptr<Object_001e1c58_0> arg0, u32 r1) {
    u32 r3_1 = arg0->byte_25;
    u32 r2_1 = r1 + (r3_1 >> 5);
    if (r2_1 <= 7u) {
        u32 r1_1 = r3_1 & ~0xe0u | r2_1 << 5;  // (from the original)
        arg0->byte_25 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if (r1 != 0 && s32(r1) >= 0) {
        r2_1 = 7u;
    }
    if (s32(r1) <= 0) {
        r2_1 = 0u;
    }
    u32 r1_2 = r3_1 & ~0xe0u | r2_1 << 5;  // (from the original)
    arg0->byte_25 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_001e1c58
GUEST_EXPORT(0x001e1c58, d_001e1c58::f_001e1c58);

// f_001e4214: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4214 {

struct __attribute__((packed)) Local_001e4214_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001e4214_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001e4214_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e4214_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e4214_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e4214_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001e4214_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e4214_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e4214_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e4214_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4214_ea_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001e4294, u32(u32, u32, u32, u32)> call_001e4294;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x007595bc, u32(u32, u32, u32, u32)> call_007595bc;  // (from the original)

u32 f_001e4214(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_7 = 0;
    gptr<Local_001e4214_ea_1> ea_1 = gptr<Local_001e4214_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r14;
    u32 r0_2 = call_002fb338(r0 + 0xc800u, r1, r2, r3);  // (from the original)
    if (r0_2 != 0) {
        u32 r0_4 = call_007595bc(r0 + 0xc800u, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_4 + 1u != 0) {
            u32 r0_6 = call_007595bc(r0 + 0xc808u, frame.at(4).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r1_3 = guest::cpu()->r[1];
            if (s32(r0_6) < 0) {
                r0_7 = 0u;
            } else {
                gptr<Local_001e4214_ea_2> ea_2 = gptr<Local_001e4214_ea_2>(frame.at(4).addr());
                call_001e4294(r0, ea_2->word_0, ea_2->word_4, ea_2->word_8);
                r1_3 = guest::cpu()->r[1];
                r0_7 = 1u;
            }
            gptr<Local_001e4214_ea_3> ea_3 = gptr<Local_001e4214_ea_3>(frame.at(0x10).addr());  // (from the original)
            u32 r4_1 = ea_3->word_0;
            guest::cpu()->r[1] = r1_3;
            guest::cpu()->r[4] = r4_1;
            return r0_7;
        }
    }
    gptr<Local_001e4214_ea_4> ea_4 = gptr<Local_001e4214_ea_4>(frame.at(4).addr());
    call_001e4294(r0, ea_4->word_0, ea_4->word_4, ea_4->word_8);
    gptr<Local_001e4214_ea_5> ea_5 = gptr<Local_001e4214_ea_5>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_5->word_0;
    guest::cpu()->r[4] = r4_2;
    return 0u;
}

}  // namespace d_001e4214
GUEST_EXPORT(0x001e4214, d_001e4214::f_001e4214);

// f_001e4294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4294 {

struct __attribute__((packed)) Local_001e4294_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001e4294_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_001e4294_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e4294_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4294_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001e4294_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e4294_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4294_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4294_r3_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x0056cbe8, u32(u32, u32, u32, u32)> call_0056cbe8;  // (from the original)
inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x0056ce84, u32(u32, u32, u32, u32)> call_0056ce84;  // (from the original)
inline constexpr guest::Function<0x0056cedc, u32(u32, u32, u32, u32)> call_0056cedc;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

void f_001e4294(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    gptr<Local_001e4294_ea_1> ea_1 = gptr<Local_001e4294_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r14;
    call_005cddb4(r0 + 0xc800u, frame.at(0x14).addr(), r2, r3);  // (from the original)
    gptr<Local_001e4294_r3_1> r3_1 = gptr<Local_001e4294_r3_1>(frame.at(0x14).addr());  // (from the original)
    u32 r1_2 = r3_1->word_4;
    u32 r2_1 = r3_1->word_8;
    *frame.at<u32>(0) = r3_1->word_0;
    *frame.at<u32>(4) = r1_2;
    *frame.at<u32>(8) = r2_1;
    u32 r0_2 = s8(*frame.at<u8>(7));
    if (s32(r0_2) < 9) {
        call_0056cce4(frame.at(0).addr(), 9u, r2_1, r3_1.addr());
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else if (s32(r0_2) < 0x11) {  // (from the original)
        call_0056cce4(frame.at(0).addr(), 0x11u, r2_1, r3_1.addr());  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_0056cce4(frame.at(0).addr(), 9u, r2_1, r3_1.addr());
        call_003014b4(frame.at(0).addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    call_0056ce84(frame.at(0).addr(), 0u, r2_2, r3_2);
    call_0056cedc(frame.at(0).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    call_0056cbe8(frame.at(0).addr(), 0u, r2_5, r3_5);
    call_005cddb4(r0 + 0xc808u, frame.at(0).addr(), r2_5, r3_5);  // (from the original)
    gptr<Local_001e4294_ea_2> ea_2 = gptr<Local_001e4294_ea_2>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_2->word_0;
    guest::cpu()->r[4] = r4_1;
}

}  // namespace d_001e4294
GUEST_EXPORT(0x001e4294, d_001e4294::f_001e4294);

// f_001e4348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4348 {

struct __attribute__((packed)) Local_001e4348_r5_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_001e4348_r5_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_001e4348_r5_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_001e4348_r5_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_001e4348_r5_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_001e4348_r5_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32)> call_00311c70;  // (from the original)

u32 f_001e4348(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_001e4348_r5_1> r5_1 = gptr<Local_001e4348_r5_1>(r0 + (r1 + (r1 << 2) << 7));
    call_002fbb30(r5_1.addr(), r2, 0x31u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x34u, r2 + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x68u, r2 + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
    call_002f8574(r5_1.addr() + 0xaau, r2 + 0xaau, 0x182u);  // (from the original)
    call_002fbb30(r5_1.addr() + 0x22cu, r2 + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
    r5_1->byte_26e = u8(u32(*gptr<u8>(r2 + 0x26eu)));  // (from the original)
    r5_1->byte_26f = u8(u32(*gptr<u8>(r2 + 0x26fu)));  // (from the original)
    r5_1->byte_270 = u8(u32(*gptr<u8>(r2 + 0x270u)));  // (from the original)
    r5_1->byte_271 = u8(u32(*gptr<u8>(r2 + 0x271u)));  // (from the original)
    r5_1->byte_272 = u8(u32(*gptr<u8>(r2 + 0x272u)));  // (from the original)
    call_002fc8e8(r5_1.addr() + 0x274u, r2 + 0x274u);  // (from the original)
    frame.release();
    return call_00311c70(r5_1.addr() + 0x278u, r2 + 0x278u);  // (from the original)
}

}  // namespace d_001e4348
GUEST_EXPORT(0x001e4348, d_001e4348::f_001e4348);

// f_001e43f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e43f0 {

inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32)> call_00303cdc;  // (from the original)

void f_001e43f0(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_002ff408(r5 + (r4 + (r4 << 2) << 7), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x50u);  // (from the original)
    call_00303cdc(r5 + 0xc800u, guest::cpu()->r[1]);  // (from the original)
    frame.release();
    call_00303cdc((r5 + 0xc800u) + 8u, guest::cpu()->r[1]);  // (from the original)
    return;
}

}  // namespace d_001e43f0
GUEST_EXPORT(0x001e43f0, d_001e43f0::f_001e43f0);

// f_001e442c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e442c {

struct __attribute__((packed)) Local_001e442c_r0_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_001e442c_r0_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_001e442c_r0_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_001e442c_r0_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_001e442c_r0_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_001e442c_r0_1, byte_272, 0x272);  // (from the original)

struct __attribute__((packed)) Local_001e442c_r6_1 {
    u8 unknown_0[0x26e];  // (not used here)
    u8 byte_26e;
    u8 byte_26f;
    u8 byte_270;
    u8 byte_271;
    u8 byte_272;
};
GUEST_OFFSET(Local_001e442c_r6_1, byte_26e, 0x26e);  // (from the original)
GUEST_OFFSET(Local_001e442c_r6_1, byte_26f, 0x26f);  // (from the original)
GUEST_OFFSET(Local_001e442c_r6_1, byte_270, 0x270);  // (from the original)
GUEST_OFFSET(Local_001e442c_r6_1, byte_271, 0x271);  // (from the original)
GUEST_OFFSET(Local_001e442c_r6_1, byte_272, 0x272);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00311c70, u32(u32, u32, u32, u32)> call_00311c70;  // (from the original)
inline constexpr guest::Function<0x00758104, u32(u32, u32, u32, u32)> call_00758104;  // (from the original)

u32 f_001e442c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r7 = 0u;
    u32 r8 = r0;
    u32 r9 = 0x182u;  // (from the original)
    u32 r4 = r7;
    do {
        gptr<Local_001e442c_r0_1> r0_1 = gptr<Local_001e442c_r0_1>(r8 + (r4 + (r4 << 2) << 7));
        u32 r0_2 = call_00758104(r0_1.addr(), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            if (r4 != r7) {
                gptr<Local_001e442c_r6_1> r6_1 = gptr<Local_001e442c_r6_1>(r8 + (r7 + (r7 << 2) << 7));
                call_002fbb30(r6_1.addr(), r0_1.addr(), 0x31u, r3);  // (from the original)
                call_002fbb30(r6_1.addr() + 0x34u, r0_1.addr() + 0x34u, 0x31u, guest::cpu()->r[3]);  // (from the original)
                call_002fbb30(r6_1.addr() + 0x68u, r0_1.addr() + 0x68u, 0x42u, guest::cpu()->r[3]);  // (from the original)
                call_002f8574(r6_1.addr() + 0xaau, r0_1.addr() + 0xaau, r9, guest::cpu()->r[3]);  // (from the original)
                call_002fbb30(r6_1.addr() + 0x22cu, r0_1.addr() + 0x22cu, 0x42u, guest::cpu()->r[3]);  // (from the original)
                u32 r2_1 = r0_1->byte_26f;
                u32 r0_7 = r0_1->byte_270;
                u32 r1_5 = r0_1->byte_271;
                u32 r3_5 = r0_1->byte_272;
                r6_1->byte_26e = u8(u32(r0_1->byte_26e));
                r6_1->byte_26f = u8(r2_1);
                r6_1->byte_270 = u8(r0_7);
                r6_1->byte_271 = u8(r1_5);
                r6_1->byte_272 = u8(r3_5);
                call_002fc8e8(r6_1.addr() + 0x274u, r0_1.addr() + 0x274u, r2_1, r3_5);  // (from the original)
                call_00311c70(r6_1.addr() + 0x278u, r0_1.addr() + 0x278u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                call_002ff408(r0_1.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            r7 += 1u;
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x50);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r7;
}

}  // namespace d_001e442c
GUEST_EXPORT_FRAMED(0x001e442c, d_001e442c::f_001e442c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_001e4524: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4524 {

struct __attribute__((packed)) Local_001e4524_r0_2 {
    u8 unknown_0[0x3];  // (not used here)
    u8 byte_3;
};
GUEST_OFFSET(Local_001e4524_r0_2, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> call_003035a4;  // (from the original)

void f_001e4524(u32 r0, u32 r1, u32 r2) {
    u32 r4_1 = r1;
    if (r1 != 0 && r4_1 == 1u) {
        u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
        gptr<Local_001e4524_r0_2> r0_2 = gptr<Local_001e4524_r0_2>(r0_1 + 0x6214fu);  // (from the original)
        u32 r1_1 = u32(r0_2->byte_3) | 0x20u;  // (from the original)
        r0_2->byte_3 = u8(r1_1);
        u32 r0_3 = call_002fae84(r0_2.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003035a4(r0_3 + 0x7170cu, 6u);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r0) = u8(r4_1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001e4524
GUEST_EXPORT_FRAMED(0x001e4524, d_001e4524::f_001e4524, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e4578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e4578 {

struct __attribute__((packed)) Local_001e4578_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001e4578_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_001e4578_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e4578_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001e4578_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001e4578_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001e4578_ea_3, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_001e4578_r4_1 {
    u8 unknown_0[0x4a];  // (not used here)
    u8 byte_4a;
};
GUEST_OFFSET(Local_001e4578_r4_1, byte_4a, 0x4a);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

u32 f_001e4578(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    if (r2 >= 0x12u) {  // (from the original)
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        return r0;
    }
    gptr<Local_001e4578_ea_1> ea_1 = gptr<Local_001e4578_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r14;
    gptr<Local_001e4578_r4_1> r4_1 = gptr<Local_001e4578_r4_1>(r0 + r2);
    gptr<Local_001e4578_ea_2> ea_2 = gptr<Local_001e4578_ea_2>(frame.at(0x30).addr());  // (from the original)
    u32 r7_1 = ea_2->word_0;
    u32 r8_1 = ea_2->word_4;
    u32 r1_1 = r4_1->byte_4a;
    u32 r6_1 = frame.at(4).addr();
    u32 r0_1 = r0 + (r2 << 2);
    if (r1_1 != 0) {
        u32 r0_3 = call_00303acc(r0_1 + 2u, r1_1, r2, r3);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            call_002fcbb0(r6_1, 0x2084u, r2_1, r3_1);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
        } else {
            call_002fcbb0(r6_1, 0x2087u, r2_1, r3_1);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
        }
    } else {
        call_002fc934(r6_1, r0_1 + 2u, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (r4_1->byte_4a == 0) {
        r4_1->byte_4a = 1;
        u32 r0_4 = call_002f74c8(1u, r1_2, r2_2, r3_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == r1) {
            u32 r0_6 = call_0030b654(frame.at(4).addr(), r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_5 = guest::cpu()->r[1];
            u32 r2_4 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_6 != 0) {
                u32 r0_8 = call_00303acc(frame.at(4).addr(), r1_5, r2_4, r3_4);
                if (r0_8 != 0) {
                    call_004e9a78(r3, r7_1, 4u, r8_1);
                    r1_2 = guest::cpu()->r[1];
                } else {
                    call_004e9a78(r3, r7_1, 3u, r8_1);
                    r1_2 = guest::cpu()->r[1];
                }
            } else {
                u32 r0_9 = call_006a5e34(r0_6, r1_5, r2_4, r3_4);
                r1_2 = guest::cpu()->r[1];
                if (r0_9 != 0) {
                    u32 r0_11 = call_002fcbb0(frame.at(8).addr(), 0x2084u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    *frame.at<u32>(0) = 0;
                    call_002fc994(r0_9, r0_11, r3, r7_1);
                    call_0059e65c(r3, r7_1, 1u, guest::cpu()->r[3]);
                    r1_2 = guest::cpu()->r[1];
                }
            }
        }
    }
    gptr<Local_001e4578_ea_3> ea_3 = gptr<Local_001e4578_ea_3>(frame.at(0x10).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_2 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    return frame.at(4).addr();
}

}  // namespace d_001e4578
GUEST_EXPORT(0x001e4578, d_001e4578::f_001e4578);

// f_001e46e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e46e8 {

struct __attribute__((packed)) Local_001e46e8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_001e46e8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_001e46e8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e46e8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001e46e8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_001e46e8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001e46e8_ea_3, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_001e46e8_r4_1 {
    u8 unknown_0[0x2a];  // (not used here)
    u8 byte_2a;
};
GUEST_OFFSET(Local_001e46e8_r4_1, byte_2a, 0x2a);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303acc, u32(u32, u32, u32, u32)> call_00303acc;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x004e9a78, u32(u32, u32, u32, u32)> call_004e9a78;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)

void f_001e46e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    if (r2 >= 6u) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        return;
    }
    gptr<Local_001e46e8_ea_1> ea_1 = gptr<Local_001e46e8_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r14;
    gptr<Local_001e46e8_r4_1> r4_1 = gptr<Local_001e46e8_r4_1>(r0 + r2);
    gptr<Local_001e46e8_ea_2> ea_2 = gptr<Local_001e46e8_ea_2>(frame.at(0x28).addr());  // (from the original)
    u32 r6_1 = ea_2->word_0;
    u32 r7_1 = ea_2->word_4;
    u32 r3_1 = frame.at(4).addr();
    if (r4_1->byte_2a != 0) {
        call_002fcbb0(r3_1, 0x2083u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_002fc934(r3_1, r0 + (r2 << 2) + 0x12u, r2, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    if (r4_1->byte_2a == 0) {
        r4_1->byte_2a = 1;
        u32 r0_1 = call_002f74c8(1u, r1_1, r2_1, r3_2);
        if (r0_1 == r1) {
            u32 r0_3 = call_0030b654(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_4 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_3 != 0) {
                u32 r0_5 = call_00303acc(frame.at(4).addr(), r1_4, r2_3, r3_4);
                if (r0_5 != 0) {
                    call_004e9a78(r3, r6_1, 2u, r7_1);
                } else {
                    call_004e9a78(r3, r6_1, 1u, r7_1);
                }
            } else {
                u32 r0_6 = call_006a5e34(r0_3, r1_4, r2_3, r3_4);
                if (r0_6 != 0) {
                    u32 r0_8 = call_002fcbb0(frame.at(8).addr(), 0x2083u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    *frame.at<u32>(0) = 0;
                    call_002fc994(r0_6, r0_8, r3, r6_1);
                    call_0059e65c(r3, r6_1, 1u, guest::cpu()->r[3]);
                }
            }
        }
    }
    gptr<Local_001e46e8_ea_3> ea_3 = gptr<Local_001e46e8_ea_3>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_2 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_1 = ea_3->word_14;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
}

}  // namespace d_001e46e8
GUEST_EXPORT(0x001e46e8, d_001e46e8::f_001e46e8);

// f_001e546c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e546c {

struct __attribute__((packed)) Local_001e546c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e546c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e546c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e546c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e546c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e546c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e546c_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e546c_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e546c_ea_4, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x001e51f0, u32(u32, u32, u32, u32)> call_001e51f0;  // (from the original)
inline constexpr guest::Function<0x001e5600, u32(u32, u32, u32, u32)> call_001e5600;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x003036dc, u32(u32, u32, u32, u32)> call_003036dc;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00314cec, u32(u32, u32, u32, u32)> call_00314cec;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)
inline constexpr guest::Function<0x005cde64, u32(u32, u32, u32, u32)> call_005cde64;  // (from the original)
inline constexpr guest::Function<0x007111b4, u32(u32, u32, u32, u32)> call_007111b4;  // (from the original)

void f_001e546c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r1_13 = 0;
    u32 r2_10 = 0;
    u32 r3_7 = 0;
    u32 r0_1 = call_001e51f0(r0, r1, r2, r3);
    if (r1 != 0) {
        u32 r0_2 = call_002fb328(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        u32 r1_2 = 0x6214fu;  // (from the original)
        if ((u32(*gptr<u8>(r0_2 + 0x80u + r1_2)) & 1u) == 0) {  // (from the original)
            u32 r1_3 = *gptr<u32>(r0 + 4);
            *frame.at<u32>(0) = *gptr<u32>(r0);
            *frame.at<u32>(4) = r1_3;
            u32 r0_4 = call_002fb338(frame.at(0).addr(), r1_3, r2_2, r3_2);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                call_00300650(frame.at(0x14).addr(), r1_2, r2_2, r3_2);  // (from the original)
                gptr<Local_001e546c_ea_1> ea_1 = gptr<Local_001e546c_ea_1>(frame.at(0x14).addr());  // (from the original)
                u32 r0_6 = ea_1->word_0;
                u32 r1_4 = ea_1->word_4;
                u32 r2_3 = ea_1->word_8;
                gptr<Local_001e546c_ea_2> ea_2 = gptr<Local_001e546c_ea_2>(frame.at(8).addr());
                ea_2->word_0 = r0_6;
                ea_2->word_4 = r1_4;
                ea_2->word_8 = r2_3;
                u32 r1_5 = *gptr<u32>(r0 + 4);
                *frame.at<u32>(0) = *gptr<u32>(r0);
                *frame.at<u32>(4) = r1_5;
                u32 r0_8 = call_003036dc(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
                r1_2 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                if (r0_8 + 1u == 0) {
                    goto L_1e557c;
                }
            }
            u32 r0_9 = call_007111b4(r0, r1_2, r2_2, r3_2);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            if (r0_9 == 0) {
                u32 r1_7 = *gptr<u32>(r0 + 4);
                *frame.at<u32>(0) = *gptr<u32>(r0);
                *frame.at<u32>(4) = r1_7;
                u32 r0_11 = call_002fb338(frame.at(0).addr(), r1_7, r2_2, r3_2);
                r1_2 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                if (r0_11 != 0) {
                    call_00300650(frame.at(0x14).addr(), r1_2, r2_2, r3_2);  // (from the original)
                    gptr<Local_001e546c_ea_3> ea_3 = gptr<Local_001e546c_ea_3>(frame.at(0x14).addr());  // (from the original)
                    u32 r0_13 = ea_3->word_0;
                    u32 r1_8 = ea_3->word_4;
                    u32 r2_4 = ea_3->word_8;
                    gptr<Local_001e546c_ea_4> ea_4 = gptr<Local_001e546c_ea_4>(frame.at(8).addr());
                    ea_4->word_0 = r0_13;
                    ea_4->word_4 = r1_8;
                    ea_4->word_8 = r2_4;
                    u32 r1_9 = *gptr<u32>(r0 + 4);
                    *frame.at<u32>(0) = *gptr<u32>(r0);
                    *frame.at<u32>(4) = r1_9;
                    u32 r0_15 = call_003036dc(frame.at(0).addr(), frame.at(8).addr(), 1u, 1u);
                    r1_2 = guest::cpu()->r[1];
                    r2_2 = guest::cpu()->r[2];
                    r3_2 = guest::cpu()->r[3];
                    if (r0_15 == 1u) {
                        goto L_1e557c;
                    }
                }
                u32 r0_16 = call_002ff6f8(0xau, r1_2, r2_2, r3_2);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                r2_2 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
                if (r0_16 == 5u) {
                    u32 r5_1 = frame.at(8).addr();
                    u32 r0_17 = call_002fb378(r0_16, r1_2, r2_2, r3_2);
                    call_005cddb4(r5_1, r0_17, guest::cpu()->r[2], guest::cpu()->r[3]);
                    call_003081b4(r0 + 8u, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                    call_00314cec(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r0_20 = call_002ff6f8(4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    *frame.at<u32>(0) = 0;
                    call_005cde64(r0 + 8u, 0u, r0_20 + 0xau & 0xffu, 0u);  // (from the original)
                    r1_13 = guest::cpu()->r[1];
                    r2_10 = guest::cpu()->r[2];
                    r3_7 = guest::cpu()->r[3];
                    frame.release();
                    call_001e5600(r0, r1_13, r2_10, r3_7);
                    return;
                }
            }
        }
L_1e557c:;
        call_00303cdc(r0 + 8u, r1_2, r2_2, r3_2);
        r1_13 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        frame.release();
        call_001e5600(r0, r1_13, r2_10, r3_7);
        return;
    }
}

}  // namespace d_001e546c
GUEST_EXPORT(0x001e546c, d_001e546c::f_001e546c);

// f_001e57e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e57e8 {

struct __attribute__((packed)) Local_001e57e8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001e57e8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e57e8_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)

void f_001e57e8(u32 r0, u32 r1) {
    call_005cd270(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_001e57e8_ea_1> ea_1 = gptr<Local_001e57e8_ea_1>(r0 + 8u);
    ea_1->word_0 = 0x20001800;  // (from the original)
    ea_1->word_4 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001e57e8
GUEST_EXPORT_FRAMED(0x001e57e8, d_001e57e8::f_001e57e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e5820: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5820 {

inline guest::global<u32, 0x00982008> global_00982008;  // (from the original)
inline guest::global<u8, 0x00982014> global_00982014;  // (from the original)
inline guest::global<u32, 0x00982018> global_00982018;  // (from the original)
inline constexpr guest::Function<0x002be76c, u32(u32, u32, u32, u32)> call_002be76c;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32)> call_002ffb64;  // (from the original)

void f_001e5820(u32 r0_unused, u32 r1, u32 r2) {
    if (*global_00982014 != 0) {
        u32 r0_1 = *global_00982018;
        if (r0_1 != 0) {
            u32 r0_2 = call_002be76c(r0_1, r1, r2, guest::cpu()->r[3]);
            call_002ffb64(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        }
        r1 = 4u;
        *global_00982018 = 0;
        *global_00982008 = r1;
        *global_00982014 = 0;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_001e5820
GUEST_EXPORT_FRAMED(0x001e5820, d_001e5820::f_001e5820, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e5894: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5894 {

struct __attribute__((packed)) Object_001e5894_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001e5894_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001e5894_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001e5894_0, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x001e58c8> global_001e58c8;  // (from the original)
inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x00148710, u32(u32, u32, u32)> call_00148710;  // (from the original)

u32 f_001e5894(gptr<Object_001e5894_0> arg0, u32 r1, float S0) {
    u32 r3_1 = *global_0094edd8;
    if (r3_1 != 0) {
        return call_00148710(arg0.addr(), r3_1 + 0x29cu, r1);  // (from the original)
    }
    float S0_1 = std::bit_cast<float>(*global_001e58c8);
    arg0->word_0 = std::bit_cast<u32>(S0_1);
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_1;
    return arg0.addr();
}

}  // namespace d_001e5894
GUEST_EXPORT(0x001e5894, d_001e5894::f_001e5894);

// f_001e5ba0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5ba0 {

struct __attribute__((packed)) Local_001e5ba0_r7_1 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_001e5ba0_r7_1, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Local_001e5ba0_r7_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_001e5ba0_r7_1, byte_3, 0x3);  // (from the original)

inline constexpr guest::Function<0x001ba7c0, u32(u32, u32)> call_001ba7c0;  // (from the original)
inline constexpr guest::Function<0x00228f74, u32(u32, u32, u32, u32)> call_00228f74;  // (from the original)
inline constexpr guest::Function<0x0022a250, u32(u32, u32)> call_0022a250;  // (from the original)
inline constexpr guest::Function<0x00265d54, u32(u32, u32)> call_00265d54;  // (from the original)
inline constexpr guest::Function<0x0029598c, u32(u32, u32)> call_0029598c;  // (from the original)
inline constexpr guest::Function<0x00615904, u32(u32, u32)> call_00615904;  // (from the original)

u32 f_001e5ba0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = call_00228f74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_0022a250(r0_1, guest::cpu()->r[1]);
    u32 r0_3 = call_00265d54(r0_2, guest::cpu()->r[1]);
    u32 r0_4 = call_0029598c(r0_3, guest::cpu()->r[1]);
    u32 r0_5 = call_001ba7c0(r0_4, guest::cpu()->r[1]);
    u32 r0_6 = call_00615904(r0_5, guest::cpu()->r[1]);
    r1 = guest::cpu()->r[1];
    if (r0_6 == 0) {
    } else {
        u32 r11 = 0x9ab6b8u;  // (from the original)
        u32 r6 = 0u;
        do {
            u32 r10 = 0u;
            do {
                u32 r4 = 0u;
                u32 r8 = r10 + (r10 << 1);
                u32 r0_7 = r6 + (r8 << 3);
                r0 = (r0_7 << 3) - r0_7;
                u32 r5 = r0 + (r0 << 2);
                do {
                    u32 r0_8 = call_00615904(r0, r1);
                    u32 r1_6 = r4 + (r4 << 3);
                    u32 r1_7 = r11 + (r1_6 + (r1_6 << 1) << 5);
                    u32 r0_9 = *gptr<u8>(r0_8 + (r5 << 2) + (r4 << 2) + 0x10u);  // (from the original)
                    u32 r9_1 = r1_7 + (r8 << 5);
                    gptr<Local_001e5ba0_r7_1> r7_1 = gptr<Local_001e5ba0_r7_1>(r9_1 + (r6 << 2));
                    r7_1->byte_3 = u8(r0_9);
                    u32 r0_10 = call_00615904(r0_9, r1_7);
                    u32 r0_11 = *gptr<u8>(r0_10 + (r5 << 2) + (r4 << 2) + 0x11u);  // (from the original)
                    r7_1->byte_2 = u8(r0_11);
                    u32 r0_12 = call_00615904(r0_11, guest::cpu()->r[1]);
                    u32 r0_13 = *gptr<u8>(r0_12 + (r5 << 2) + (r4 << 2) + 0x12u);  // (from the original)
                    r7_1->byte_1 = u8(r0_13);
                    u32 r0_14 = call_00615904(r0_13, guest::cpu()->r[1]);
                    r1 = guest::cpu()->r[1];
                    u32 r0_15 = r0_14 + (r5 << 2) + (r4 << 2);
                    r4 += 1u;
                    r0 = *gptr<u8>(r0_15 + 0x13u);  // (from the original)
                    *gptr<u8>(r9_1 + (r6 << 2)) = u8(r0);
                    guest::preempt();
                } while (s32(r4) < 0x16);  // (from the original)
                u32 r0_16 = call_00615904(r0, r1);
                u32 r1_10 = *gptr<u32>(r0_16 + (r5 << 2) + 0x68u);  // (from the original)
                u32 r0_17 = 0x9b00f8u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_17 + (r6 << 2)) = r1_10;
                u32 r0_18 = call_00615904(r0_17, r1_10);
                u32 r1_11 = *gptr<u32>(r0_18 + (r5 << 2) + 0x8cu);  // (from the original)
                u32 r0_19 = 0x9b0458u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_19 + (r6 << 2)) = r1_11;
                u32 r0_20 = call_00615904(r0_19, r1_11);
                u32 r1_12 = *gptr<u32>(r0_20 + (r5 << 2) + 0x90u);  // (from the original)
                u32 r0_21 = 0x9b07b8u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_21 + (r6 << 2)) = r1_12;
                u32 r0_22 = call_00615904(r0_21, r1_12);
                u32 r1_13 = *gptr<u32>(r0_22 + (r5 << 2) + 0x94u);  // (from the original)
                u32 r0_23 = 0x9b0b18u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_23 + (r6 << 2)) = r1_13;
                u32 r0_24 = call_00615904(r0_23, r1_13);
                u32 r1_14 = *gptr<u32>(r0_24 + (r5 << 2) + 0x98u);  // (from the original)
                u32 r0_25 = 0x9b0e78u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_25 + (r6 << 2)) = r1_14;
                u32 r0_26 = call_00615904(r0_25, r1_14);
                u32 r1_15 = *gptr<u32>(r0_26 + (r5 << 2) + 0x6cu);  // (from the original)
                u32 r0_27 = 0x9b11d8u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_27 + (r6 << 2)) = r1_15;
                u32 r0_28 = call_00615904(r0_27, r1_15);
                u32 r1_16 = *gptr<u32>(r0_28 + (r5 << 2) + 0x70u);  // (from the original)
                u32 r0_29 = 0x9b1538u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_29 + (r6 << 2)) = r1_16;
                u32 r0_30 = call_00615904(r0_29, r1_16);
                u32 r1_17 = *gptr<u32>(r0_30 + (r5 << 2) + 0x78u);  // (from the original)
                u32 r0_31 = 0x9b1898u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_31 + (r6 << 2)) = r1_17;
                u32 r0_32 = call_00615904(r0_31, r1_17);
                u32 r1_18 = *gptr<u32>(r0_32 + (r5 << 2) + 0x7cu);  // (from the original)
                u32 r0_33 = 0x9b1bf8u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_33 + (r6 << 2)) = r1_18;
                u32 r0_34 = call_00615904(r0_33, r1_18);
                u32 r1_19 = *gptr<u32>(r0_34 + (r5 << 2) + 0x80u);  // (from the original)
                u32 r0_35 = 0x9b1f58u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_35 + (r6 << 2)) = r1_19;
                u32 r0_36 = call_00615904(r0_35, r1_19);
                u32 r1_20 = *gptr<u32>(r0_36 + (r5 << 2) + 0x84u);  // (from the original)
                u32 r0_37 = 0x9b22b8u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_37 + (r6 << 2)) = r1_20;
                u32 r0_38 = call_00615904(r0_37, r1_20);
                r1 = *gptr<u32>(r0_38 + (r5 << 2) + 0x88u);  // (from the original)
                r10 += 1u;
                r0_6 = 0x9b2618u + (r8 << 5);  // (from the original)
                *gptr<u32>(r0_6 + (r6 << 2)) = r1;
                guest::preempt();
            } while (s32(r10) < 9);
            r6 += 1u;
            guest::preempt();
        } while (s32(r6) < 0x18);  // (from the original)
    }
    return r0_6;
}

}  // namespace d_001e5ba0
GUEST_EXPORT_FRAMED(0x001e5ba0, d_001e5ba0::f_001e5ba0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001e5dc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5dc8 {

inline guest::global<u8, 0x009520c6> global_009520c6;  // (from the original)
inline guest::global<u32, 0x0095210c> global_0095210c;  // (from the original)

u32 f_001e5dc8() {
    *global_0095210c = 1;
    *global_009520c6 = 1;
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e5dc8
GUEST_EXPORT(0x001e5dc8, d_001e5dc8::f_001e5dc8);

// f_001e5de0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5de0 {

inline guest::global<u32, 0x0095210c> global_0095210c;  // (from the original)

void f_001e5de0(u32 r0) {
    *global_0095210c = r0 + 1u;
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
}

}  // namespace d_001e5de0
GUEST_EXPORT(0x001e5de0, d_001e5de0::f_001e5de0);

// f_001e5df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e5df4 {

struct __attribute__((packed)) Local_001e5df4_r2_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e5df4_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e5df4_r2_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e5df4_r2_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e5df4_r2_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> call_001e58fc;  // (from the original)
inline constexpr guest::Function<0x005601b8, u32(u32)> call_005601b8;  // (from the original)

u32 f_001e5df4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_001e58fc(frame.at(8).addr(), r1, r2, r3);
    *frame.at<u8>(0) = 0xff;  // (from the original)
    *frame.at<u8>(1) = 0;
    *frame.at<u8>(2) = 0;
    gptr<Local_001e5df4_r2_1> r2_1 = gptr<Local_001e5df4_r2_1>(frame.at(8).addr());
    *frame.at<u8>(3) = 0;
    float S0_1 = std::bit_cast<float>(r2_1->word_0);
    float S1_1 = std::bit_cast<float>(r2_1->word_4);
    float S2_1 = std::bit_cast<float>(r2_1->word_8);
    float S3_1 = std::bit_cast<float>(r2_1->word_c);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    call_005601b8(frame.at(0).addr());
    u32 r1_1 = *frame.at<u32>(0);
    u32 r0_3 = r1_1 << 0x10;  // (from the original)
    *gptr<u8>(r0 + 1u) = u8(r0_3 >> 0x18);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r1_1 >> 0x10u & 0xffu);  // (from the original)
    *gptr<u8>(r0) = u8(r1_1);
    *gptr<u8>(r0 + 3u) = u8(r1_1 >> 0x18);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_001e5df4
GUEST_EXPORT_FRAMED(0x001e5df4, d_001e5df4::f_001e5df4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e62dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e62dc {

struct __attribute__((packed)) Local_001e62dc_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_001e62dc_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r4_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_001e62dc_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_001e62dc_r6_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r6_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r6_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r6_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r6_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_001e62dc_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_001e62dc_r7_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r7_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r7_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r7_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001e62dc_r7_1, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x0095210c> global_0095210c;  // (from the original)
inline guest::global<u8, 0x00952134> global_00952134;  // (from the original)
inline guest::global<u8, 0x00952135> global_00952135;  // (from the original)
inline guest::global<u8, 0x00952136> global_00952136;  // (from the original)
inline guest::global<u8, 0x00952137> global_00952137;  // (from the original)
inline guest::global<u8, 0x00952138> global_00952138;  // (from the original)
inline guest::global<u32, 0x009ab638> global_009ab638;  // (from the original)
inline guest::global<u32, 0x009ab63c> global_009ab63c;  // (from the original)
inline guest::global<u32, 0x009ab640> global_009ab640;  // (from the original)
inline guest::global<u32, 0x009ab644> global_009ab644;  // (from the original)
inline guest::global<u32, 0x009ab648> global_009ab648;  // (from the original)

u32 f_001e62dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    gptr<Local_001e62dc_r6_1> r6_1 = gptr<Local_001e62dc_r6_1>(0x9ab64cu);  // (from the original)
    gptr<Local_001e62dc_r7_1> r7_1 = gptr<Local_001e62dc_r7_1>(0x9ab660u);  // (from the original)
    gptr<Local_001e62dc_r4_1> r4_1 = gptr<Local_001e62dc_r4_1>(0x9ab674u);  // (from the original)
    if (*global_009ab638 != 0) {
        if (*global_009ab63c == 0) {
            *global_00952135 = u8(r0);
            r6_1->word_4 = r1;
            r7_1->word_4 = r2;
            r4_1->word_4 = r3;
        } else if (*global_009ab640 == 0) {
            *global_00952136 = u8(r0);
            r6_1->word_8 = r1;
            r7_1->word_8 = r2;
            r4_1->word_8 = r3;
        } else if (*global_009ab644 == 0) {
            *global_00952137 = u8(r0);
            r6_1->word_c = r1;
            r7_1->word_c = r2;
            r4_1->word_c = r3;
        } else if (*global_009ab648 == 0) {
            *global_00952138 = u8(r0);
            r6_1->word_10 = r1;
            r7_1->word_10 = r2;
            r4_1->word_10 = r3;
        }
    } else {
        *global_00952134 = u8(r0);
        r6_1->word_0 = r1;
        r7_1->word_0 = r2;
        r4_1->word_0 = r3;
    }
    *global_0095210c = 1;
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
    return 1u;
}

}  // namespace d_001e62dc
GUEST_EXPORT_FRAMED(0x001e62dc, d_001e62dc::f_001e62dc, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_001e6df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6df4 {

struct __attribute__((packed)) Local_001e6df4_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e6df4_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001e6df4_r0_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e6df4_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_3, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001e6df4_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e6df4_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r0_4, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001e6df4_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e6df4_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001e6df4_r1_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e6df4_r1_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e6df4_r1_3, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x009b2bb4> global_009b2bb4;  // (from the original)
inline guest::global<u32, 0x009b2bb8> global_009b2bb8;  // (from the original)
inline guest::global<u32, 0x009b2bbc> global_009b2bbc;  // (from the original)
inline guest::global<u32, 0x009b2bc0> global_009b2bc0;  // (from the original)
inline constexpr guest::Function<0x001e6fb8, u32(u32, u32, u32, u32)> call_001e6fb8;  // (from the original)
inline constexpr guest::Function<0x002d4d18, u32(u32, u32, u32, u32)> call_002d4d18;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00625690, u32(u32, u32, u32, u32)> call_00625690;  // (from the original)
inline constexpr guest::Function<0x006a9a40, u32(u32, u32, u32, u32)> call_006a9a40;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)

u32 f_001e6df4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == r2) {
        r2_1 = 0x9ab688u;  // (from the original)
        r0_1 = *gptr<u32>(r2_1 + (r0 << 2));
        if (s32(r0_1) > 0) {
            gptr<Local_001e6df4_r0_2> r0_2 = gptr<Local_001e6df4_r0_2>(0x9b2b84u);  // (from the original)
            r0_2->word_0 = *global_009b2bb4;
            r0_2->word_4 = *global_009b2bb8;
            r0_2->word_8 = *global_009b2bbc;
            r0_2->word_c = *global_009b2bc0;
            gptr<Local_001e6df4_r1_2> r1_2 = gptr<Local_001e6df4_r1_2>(r0_2.addr() + 0x40u);  // (from the original)
            gptr<Local_001e6df4_r0_3> r0_3 = gptr<Local_001e6df4_r0_3>(r1_2.addr() - 0x30u);  // (from the original)
            r0_3->word_0 = r1_2->word_0;
            r0_3->word_4 = r1_2->word_4;
            r0_3->word_8 = r1_2->word_8;
            r0_3->word_c = r1_2->word_c;
            gptr<Local_001e6df4_r1_3> r1_3 = gptr<Local_001e6df4_r1_3>(r0_3.addr() + 0x40u);  // (from the original)
            gptr<Local_001e6df4_r0_4> r0_4 = gptr<Local_001e6df4_r0_4>(r1_3.addr() - 0x30u);  // (from the original)
            r0_4->word_0 = r1_3->word_0;
            r0_4->word_4 = r1_3->word_4;
            u32 r3_2 = r1_3->word_8;
            r0_4->word_8 = r3_2;
            r0_4->word_c = r1_3->word_c;
            *gptr<u32>(r2_1 + (r0 << 2)) = *gptr<u32>(r2_1 + (r0 << 2)) - 1u;
            u32 r0_5 = call_006a9a40(0x9b2b68u, r1 ^ 1u, r2_1, r3_2);  // (from the original)
            r0_1 = call_001e6fb8(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
        }
    }
    if (r1 == 0) {
        r0_1 = call_002f74e0(0x80u, r2, r2_1, r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        u32 r2_3 = guest::cpu()->r[2];
        u32 r3_4 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            r0_1 = call_006f9c08(r2, r1_1, r2_3, r3_4);
            r1_1 = guest::cpu()->r[1];
            r2_3 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            if (r0_1 != 0) {
                r0_1 = call_002d4d18(r0_1, r0, r2_3, r3_4);
                r1_1 = guest::cpu()->r[1];
                r2_3 = guest::cpu()->r[2];
                r3_4 = guest::cpu()->r[3];
            }
        }
        if (r3 != 0) {
            r0_1 = call_00300904(r0_1, r1_1, r2_3, r3_4);
            r1_1 = guest::cpu()->r[1];
            if (r0_1 != 0) {
                r0_1 = call_00625690(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_1 = guest::cpu()->r[1];
                if (r0_1 > 1u) {
                    *frame.at<u8>(0) = u8(r2);
                    *frame.at<u16>(0) = u16((u32(*frame.at<u16>(0)) & ~0x7f00u | 0x7f00u & r0 << 8) & ~0x8000u);  // (from the original)
                    r0_1 = call_006249b0(0x46u, 4u, frame.at(0).addr(), 2u);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                }
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001e6df4
GUEST_EXPORT_FRAMED(0x001e6df4, d_001e6df4::f_001e6df4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001e6f58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f58 {

inline constexpr guest::Function<0x001e6df4, u32(u32, u32, u32, u32)> call_001e6df4;  // (from the original)

void f_001e6f58(u32 r0, u32 r1) {
    if (r1 == 5u || r1 == 0xbu || r1 == 0x11u || r1 == 0x17u) {  // (from the original)
        call_001e6df4(0xau, r0, r1, 1u);
        return;  // (from the original)
    }
    if (r1 != 0x94u) {  // (from the original)
        call_001e6df4(0xbu, r0, r1, 1u);
        return;  // (from the original)
    }
    call_001e6df4(0xau, r0, r1, 1u);
    return;  // (from the original)
}

}  // namespace d_001e6f58
GUEST_EXPORT(0x001e6f58, d_001e6f58::f_001e6f58);

// f_001e6f98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e6f98 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

void f_001e6f98(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 1;
    call_001e601c(0xau, r0, r1, 1u);  // (from the original)
}

}  // namespace d_001e6f98
GUEST_EXPORT_FRAMED(0x001e6f98, d_001e6f98::f_001e6f98, 0x4000);  // pushes {lr} first, as the original

// f_001e74b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74b0 {

inline constexpr guest::Function<0x001e601c, u32(u32, u32, u32, u32)> call_001e601c;  // (from the original)

void f_001e74b0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 0;
    call_001e601c(0xbu, r0, r1, 1u);  // (from the original)
}

}  // namespace d_001e74b0
GUEST_EXPORT_FRAMED(0x001e74b0, d_001e74b0::f_001e74b0, 0x4000);  // pushes {lr} first, as the original

// f_001e74d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e74d4 {

inline guest::global<u32, 0x001e74fc> global_001e74fc;  // (from the original)
inline guest::global<u8, 0x009520bf> global_009520bf;  // (from the original)
inline guest::global<u8, 0x009520c0> global_009520c0;  // (from the original)
inline guest::global<u32, 0x009520d8> global_009520d8;  // (from the original)

void f_001e74d4(u32 r0) {
    float S1_1 = std::bit_cast<float>(*global_001e74fc);
    *global_009520bf = 1;
    *global_009520c0 = u8(r0);
    float S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1_1;
    *global_009520d8 = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = 0x9520bcu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_001e74d4
GUEST_EXPORT(0x001e74d4, d_001e74d4::f_001e74d4);

// f_001e7504: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e7504 {

inline guest::global<u32, 0x009ab6b0> global_009ab6b0;  // (from the original)
inline guest::global<u32, 0x009ab6b4> global_009ab6b4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x007202d8, u32(u32, u32)> call_007202d8;  // (from the original)

u32 f_001e7504(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == r0) {
        r0_2 = *global_009ab6b0;
    } else {
        r0_2 = call_002f74e0(0x80u, r0);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_1e7558;
        }
        r0_2 = call_006f9c08(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            goto L_1e7558;
        }
        r0_2 = call_007202d8(r0_2, 0xau);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if (s32(r0_2) > 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
L_1e7558:;
    u32 r0_3 = call_002f74c8(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 == r0) {
        r0_4 = *global_009ab6b4;
    } else {
        u32 r0_5 = call_002f74e0(0x80u, r0);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_5 == 0) {
            return 0u;
        }
        u32 r0_6 = call_006f9c08(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            return 0u;
        }
        r0_4 = call_007202d8(r0_6, 0xbu);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if (s32(r0_4) <= 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_001e7504
GUEST_EXPORT_FRAMED(0x001e7504, d_001e7504::f_001e7504, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001e8364: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8364 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b3f88, u32(u32)> call_005b3f88;  // (from the original)

u32 f_001e8364(u32 r0) {
    u32 r0_1 = call_002f74c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_005b3f88(r0_1);
    if (r0_2 == 5u) {
        return 3u;
    }
    u32 r0_3 = call_002f74c8(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = call_005b3f88(r0_3);
    if (r0_4 == 6u) {
        return 3u;
    }
    u32 r0_5 = call_002f74c8(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_005b3f88(r0_5);
    if (r0_6 == 7u) {
        return 3u;
    }
    u32 r0_7 = call_002f74c8(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_005b3f88(r0_7);
    if (r0_8 == 8u) {
        return 3u;
    }
    u32 r0_9 = call_002f74c8(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = call_005b3f88(r0_9);
    if (r0_10 == 9u) {
        return 3u;
    }
    u32 r0_11 = call_002f74c8(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_005b3f88(r0_11);
    if (r0_12 == 0xau) {  // (from the original)
        return 3u;
    }
    u32 r0_13 = call_002f74c8(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_005b3f88(r0_13);
    if (r0_14 != 0xbu) {  // (from the original)
        return 0u;
    }
    return 3u;
}

}  // namespace d_001e8364
GUEST_EXPORT_FRAMED(0x001e8364, d_001e8364::f_001e8364, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e83e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e83e4 {

struct __attribute__((packed)) Local_001e83e4_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e83e4_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r0_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_001e83e4_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001e83e4_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r1_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001e83e4_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001e83e4_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r3_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001e83e4_r3_1, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x001e8474> global_001e8474;  // (from the original)
inline constexpr guest::Function<0x005601b8, u32(u32)> call_005601b8;  // (from the original)

void f_001e83e4(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    gptr<Local_001e83e4_r1_1> r1_1 = gptr<Local_001e83e4_r1_1>(0x85e504u + (r2 + (r2 << 3) << 2) + (r1 + (r1 << 1) << 2) - 0x12cu);  // (from the original)
    float S1_1 = std::bit_cast<float>(r1_1->word_4);
    float S2_1 = std::bit_cast<float>(r1_1->word_8);
    gptr<Local_001e83e4_r0_1> r0_1 = gptr<Local_001e83e4_r0_1>(frame.at(8).addr());
    float S3_1 = std::bit_cast<float>(*global_001e8474);
    r0_1->word_0 = std::bit_cast<u32>(std::bit_cast<float>(r1_1->word_0));
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    r0_1->word_c = std::bit_cast<u32>(S3_1);
    *frame.at<u8>(0) = 0xff;  // (from the original)
    *frame.at<u8>(1) = 0;
    *frame.at<u8>(2) = 0;
    gptr<Local_001e83e4_r3_1> r3_1 = gptr<Local_001e83e4_r3_1>(frame.at(8).addr());
    *frame.at<u8>(3) = 0;
    float S0_1 = std::bit_cast<float>(r3_1->word_0);
    float S1_2 = std::bit_cast<float>(r3_1->word_4);
    float S2_2 = std::bit_cast<float>(r3_1->word_8);
    float S3_2 = std::bit_cast<float>(r3_1->word_c);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    call_005601b8(frame.at(0).addr());
    u32 r1_2 = *frame.at<u32>(0);
    *gptr<u8>(r0) = u8(r1_2);
    *gptr<u8>(r0 + 1u) = u8(r1_2 >> 8u & 0xffu);  // (from the original)
    *gptr<u8>(r0 + 2u) = u8(r1_2 >> 0x10u & 0xffu);  // (from the original)
    *gptr<u8>(r0 + 3u) = u8(r1_2 >> 0x18);  // (from the original)
}

}  // namespace d_001e83e4
GUEST_EXPORT_FRAMED(0x001e83e4, d_001e83e4::f_001e83e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e848c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e848c {

inline guest::global<u8, 0x009520c4> global_009520c4;  // (from the original)
inline guest::global<u32, 0x0095210c> global_0095210c;  // (from the original)

u32 f_001e848c() {
    *global_009520c4 = 0;
    *global_0095210c = 1;
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e848c
GUEST_EXPORT(0x001e848c, d_001e848c::f_001e848c);

// f_001e84c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e84c8 {

inline guest::global<u8, 0x009520c4> global_009520c4;  // (from the original)
inline guest::global<u32, 0x0095210c> global_0095210c;  // (from the original)

u32 f_001e84c8() {
    *global_009520c4 = 1;
    *global_0095210c = 1;
    guest::cpu()->r[1] = 1u;
    return 0x9520bcu;  // (from the original)
}

}  // namespace d_001e84c8
GUEST_EXPORT(0x001e84c8, d_001e84c8::f_001e84c8);

// f_001e8ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8ba4 {

inline constexpr guest::Function<0x00346090, u32(u32, u32, u32, u32)> call_00346090;  // (from the original)

u32 f_001e8ba4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    r0 = call_00346090(r0, 0u, r2, r3);
    u32 r1_1 = r0 & 0x80000000u;  // (from the original)
    if (!(r1_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1 = r0 & 0x3fc00u;  // (from the original)
    r3 = 0x952630u;  // (from the original)
    u32 r2_1 = r1 >> 0xa;  // (from the original)
    if (r2_1 != 0x11u) {  // (from the original)
        goto L_1e8c08;
    }
    r1 = r0 & 0x3ffu;  // (from the original)
    if (s32(r1) < 0x64 || s32(r1) > 0xb3) {  // (from the original)
        goto L_1e8c08;
    }
    if (s32(r1) < 0x82) {  // (from the original)
        *gptr<u32>(r3 + 4u) = r0;
        guest::cpu()->r[1] = r1;
        return 4u;
    }
L_1e8bf0:;
    *gptr<u32>(r3 + 4u) = r0;
    guest::cpu()->r[1] = r1;
    return 1u;
L_1e8c08:;
    if (r2_1 != 0x11u) {  // (from the original)
        *gptr<u32>(r3 + 4u) = r0;
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    r1 = r0 & 0x3ffu;  // (from the original)
    u32 res_1 = r1 - 0x118u;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1 ^ 0x118u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        u32 res_2 = 0x14eu - r1;  // (from the original)
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((0x14eu ^ r1) & (0x14eu ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        *gptr<u32>(r3 + 4u) = r0;
        guest::cpu()->r[1] = r1;
        return 4u;
    }
    guest::preempt();
    goto L_1e8bf0;
}

}  // namespace d_001e8ba4
GUEST_EXPORT_FRAMED(0x001e8ba4, d_001e8ba4::f_001e8ba4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e8c34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e8c34 {

inline guest::global<u32, 0x00952630> global_00952630;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32)> call_00135520;  // (from the original)
inline constexpr guest::Function<0x00345f60, u32(u32, u32, u32, u32)> call_00345f60;  // (from the original)

u32 f_001e8c34(u32 r0) {
    u32 r0_2 = call_00345f60(*global_00952630, guest::cpu()->r[1], r0, 0u);
    if (s32(r0_2) < 0) {
        return 0u;
    }
    call_00135520(*global_00952630);
    return 1u;
}

}  // namespace d_001e8c34
GUEST_EXPORT_FRAMED(0x001e8c34, d_001e8c34::f_001e8c34, 0x4010);  // pushes {r4, lr} first, as the original

// f_001e90e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001e90e4 {

inline constexpr guest::Function<0x001f4fec, u32(u32, u32, u32, u32)> call_001f4fec;  // (from the original)

u32 f_001e90e4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_001f4fec(r0, r1 + 4u, r2, r3);
    u32 r2_1 = *gptr<u32>(r1);
    *gptr<u32>(r0_1) = r2_1;
    *gptr<u32>(r0_1 + *gptr<u32>(r2_1 - 0xcu)) = *gptr<u32>(r1 + 0xcu);  // (from the original)
    *gptr<u8>(r0_1 + 0xc9u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0xcau) = 0;  // (from the original)
    *gptr<u16>(r0_1 + 0xccu) = 0;  // (from the original)
    *gptr<u16>(r0_1 + 0xceu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_001e90e4
GUEST_EXPORT_FRAMED(0x001e90e4, d_001e90e4::f_001e90e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001eb754: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001eb754 {

struct __attribute__((packed)) Local_001eb754_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_001eb754_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_001eb754_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_001eb754_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001eb754_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001eb754_r0_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001eb754_r0_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001eb754_r3_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001eb754_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001eb754_r3_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001eb754_r3_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0083e5e4> global_0083e5e4;  // (from the original)
inline guest::global<u32, 0x0083e5e8> global_0083e5e8;  // (from the original)
inline guest::global<u32, 0x0083e5ec> global_0083e5ec;  // (from the original)
inline guest::global<u32, 0x0083e5f0> global_0083e5f0;  // (from the original)
inline guest::global<u32, 0x0083e5f4> global_0083e5f4;  // (from the original)
inline guest::global<u32, 0x0083e5f8> global_0083e5f8;  // (from the original)
inline guest::global<u32, 0x0083e5fc> global_0083e5fc;  // (from the original)
inline guest::global<u32, 0x0083e600> global_0083e600;  // (from the original)
inline constexpr guest::Function<0x001e90bc, u32(u32, u32, u32, u32)> call_001e90bc;  // (from the original)
inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x006c81f8, u32(u32, u32, u32, u32)> call_006c81f8;  // (from the original)
inline constexpr guest::Function<0x007207d8, u32(u32, u32, u32, u32)> call_007207d8;  // (from the original)

u32 f_001eb754(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    guest::StackFrame frame(0x4c);  // the original's stack frame
    u32 r0_2 = call_007207d8(r0 + 0x1e8u, r1, r2, r3);  // (from the original)
    if (r0_2 != 0) {
        return r0_2;
    }
    u32 r1_2 = *gptr<u32>(r1 + 4);
    u32 r2_1 = *gptr<u32>(r1 + 8);
    gptr<Local_001eb754_r3_1> r3_1 = gptr<Local_001eb754_r3_1>(frame.at(0x30).addr());  // (from the original)
    r3_1->word_0 = *gptr<u32>(r1);
    r3_1->word_4 = r1_2;
    r3_1->word_8 = r2_1;
    call_006c81f8(frame.at(0x30).addr(), 0u, r2_1, r3_1.addr());  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    float S0_2 = guest::cpu()->s[0];
    *frame.at<u32>(0x34) = std::bit_cast<u32>(S0_2);  // (from the original)
    u32 r0_4 = *gptr<u8>(r0 + 0xc9u);  // (from the original)
    guest::cpu()->s[0] = S0_2;
    u32 r0_5 = call_001e90bc(r0_4, r1_3, r2_2, r3_2);
    float S1_3 = std::bit_cast<float>(*global_0083e5e8);
    float S2_3 = std::bit_cast<float>(*global_0083e5ec);
    float S3_3 = std::bit_cast<float>(*global_0083e5f0);
    float S4_3 = std::bit_cast<float>(*global_0083e5f4);
    float S5_3 = std::bit_cast<float>(*global_0083e5f8);
    float S6_3 = std::bit_cast<float>(*global_0083e5fc);
    float S7_3 = std::bit_cast<float>(*global_0083e600);
    gptr<Local_001eb754_ea_1> ea_1 = gptr<Local_001eb754_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = std::bit_cast<u32>(std::bit_cast<float>(*global_0083e5e4));
    ea_1->word_4 = std::bit_cast<u32>(S1_3);
    ea_1->word_8 = std::bit_cast<u32>(S2_3);
    ea_1->word_c = std::bit_cast<u32>(S3_3);
    ea_1->word_10 = std::bit_cast<u32>(S4_3);
    ea_1->word_14 = std::bit_cast<u32>(S5_3);
    ea_1->word_18 = std::bit_cast<u32>(S6_3);
    ea_1->word_1c = std::bit_cast<u32>(S7_3);
    float S0_3 = std::bit_cast<float>(*gptr<u32>(frame.at(0x10).addr() + (r0_5 << 2)));  // (from the original)
    gptr<Local_001eb754_r0_6> r0_6 = gptr<Local_001eb754_r0_6>(frame.at(0x3c).addr());  // (from the original)
    r0_6->word_0 = std::bit_cast<u32>(S0_3);
    r0_6->word_4 = std::bit_cast<u32>(S0_3);
    r0_6->word_8 = std::bit_cast<u32>(S0_3);
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0) = r0_6.addr();
    *frame.at<u32>(4) = 1;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S0_3;
    guest::cpu()->s[2] = S0_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    u32 r0_8 = call_002073dc(r0 + 0x1e8u, 0x1fau, frame.at(0x30).addr(), 0x975beeu);  // (from the original)
    return r0_8;
}

}  // namespace d_001eb754
GUEST_EXPORT_FRAMED(0x001eb754, d_001eb754::f_001eb754, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001ed4a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed4a4 {

inline constexpr guest::Function<0x002706ec, u32(u32, u32, u32, u32)> call_002706ec;  // (from the original)
inline constexpr guest::Function<0x0027dd00, u32(u32, u32, u32, u32)> call_0027dd00;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)

u32 f_001ed4a4(gptr<AcFsFdShadow> arg0, u32 r1) {
    u32 r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x8ebf88u;  // (from the original)
    }
    u32 r5_1 = r1 == 0;
    u32 r1_1 = *gptr<u32>(r4_1);
    arg0->word_0 = r1_1;
    u32 r3_1 = *gptr<u32>(r4_1 + 0x28u);  // (from the original)
    *gptr<u32>(arg0.addr() + *gptr<u32>(r1_1 - 0xcu)) = r3_1;  // (from the original)
    u32 r1_2 = *gptr<u32>(r4_1 + 0x2cu);  // (from the original)
    arg0->word_d0 = r1_2;
    arg0->word_18c = 0x8ebf24;  // (from the original)
    u32 r0_2 = call_002e6944(((arg0.addr() + 0xd0u) + 0xbcu) + 0x5cu, r1_2, 0x8ebf24u, r3_1);  // (from the original)
    u32 r0_4 = call_002e6944(r0_2 - 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_0027dd00(r0_4 - 0x1d0u, r4_1 + 4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    if (r5_1 != 0) {
        u32 r0_8 = call_002706ec(r0_6 + 0x20cu, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r0_6 = r0_8 - 0x20cu;  // (from the original)
    }
    guest::cpu()->r[1] = r1_5;
    return r0_6;
}

}  // namespace d_001ed4a4
GUEST_EXPORT_FRAMED(0x001ed4a4, d_001ed4a4::f_001ed4a4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001ed520: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed520 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32)> call_002fb96c;  // (from the original)

u32 f_001ed520(u32 r0, u32 r1) {
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_1 = call_002fae84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x6214fu;  // (from the original)
    u32 r5 = r0_1 + r1;
    u32 r0_2 = u32(*gptr<u8>(r5 + 6u)) >> 7;
    if (r0_2 == 0) {
        r4 = 0u;
        r6 = 0xau;  // (from the original)
    } else {
        guest::cpu()->r[1] = r1;
        return r0_2;
    }
L_1ed544:;
    u32 r0_4 = call_002fb96c(r4 & 0xffu, r1);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_1ed580;
    }
    r0_4 = u32(*gptr<u8>(r0_4 + 0x5710u)) << 0x19;  // (from the original)
    if (r6 != r0_4 >> 0x1c) {  // (from the original)
        goto L_1ed580;
    }
    r0_2 = u32(*gptr<u8>(r5 + 6u)) | 0x80u;  // (from the original)
    *gptr<u8>(r5 + 6u) = u8(r0_2);
    return r0_2;
L_1ed580:;
    r4 += 1u;
    if (s32(r4) >= 4) {
        guest::cpu()->r[1] = r1;
        return r0_4;
    }
    guest::preempt();
    goto L_1ed544;
}

}  // namespace d_001ed520
GUEST_EXPORT_FRAMED(0x001ed520, d_001ed520::f_001ed520, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001ed594: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed594 {

inline guest::global<u8, 0x0094ddc0> global_0094ddc0;  // (from the original)
inline guest::global<u8, 0x0094ddc1> global_0094ddc1;  // (from the original)
inline guest::global<u8, 0x0094ddc2> global_0094ddc2;  // (from the original)
inline guest::global<u32, 0x0094ddc8> global_0094ddc8;  // (from the original)

void f_001ed594() {
    *global_0094ddc8 = 0;
    *global_0094ddc0 = 0;
    *global_0094ddc1 = 0;
    *global_0094ddc2 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001ed594
GUEST_EXPORT(0x001ed594, d_001ed594::f_001ed594);

// f_001ed5b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ed5b4 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005c5aa8, u32(u32, u32, u32, u32)> call_005c5aa8;  // (from the original)

u32 f_001ed5b4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 1u;
    u32 r0_1 = *global_00aaf14c;
    if (r0_1 != 0) {
        r4_1 = 1u & ~u32(*gptr<u8>(r0_1 + 0x55bau));  // (from the original)
        if (r4_1 == 0) {
            call_002fcbb0(frame.at(0xc).addr(), 0x2866u, r2, r3);  // (from the original)
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            goto L_1ed610;
        }
    }
    r0_3 = frame.at(0xc).addr();  // (from the original)
    call_002fcbb0(r0_3, 0x286du, r2, r3);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r4_1 != 0) {
        r1_1 = 0x25dcu;  // (from the original)
        goto L_1ed614;
    }
L_1ed610:;
    r1_1 = 0x25dbu;  // (from the original)
L_1ed614:;
    call_002fcbb0(frame.at(0x10).addr(), r1_1, r2_1, r3_1);  // (from the original)
    call_002fcbb0(frame.at(0x14).addr(), r4_1 == 0 ? 0x2768u : 0x2769u, r2_1, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0x95bfdc;  // (from the original)
    *frame.at<u32>(4) = 0x95bfdc;  // (from the original)
    *frame.at<u32>(8) = 0x95bfdc;  // (from the original)
    call_005c5aa8(frame.at(0xc).addr(), 0x95bfdcu, frame.at(0x10).addr(), frame.at(0x14).addr());  // (from the original)
    return frame.at(0xc).addr();  // (from the original)
}

}  // namespace d_001ed5b4
GUEST_EXPORT_FRAMED(0x001ed5b4, d_001ed5b4::f_001ed5b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001ee1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ee1c0 {

struct __attribute__((packed)) Local_001ee1c0_r0_4 {
    u8 unknown_0[0x12];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Local_001ee1c0_r0_4, byte_12, 0x12);  // (from the original)

struct __attribute__((packed)) Local_001ee1c0_r2_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ee1c0_r2_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ee1c0_r2_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001df140, u32(u32, u32, u32)> call_001df140;  // (from the original)
inline constexpr guest::Function<0x001edaec, u32(u32, u32, u32, u32)> call_001edaec;  // (from the original)
inline constexpr guest::Function<0x00237048, u32(u32, u32, u32, u32)> call_00237048;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005f3d70, u32(u32, u32, u32)> call_005f3d70;  // (from the original)
inline constexpr guest::Function<0x00759b24, u32(u32, u32, u32, u32)> call_00759b24;  // (from the original)
inline constexpr guest::Function<0x0075ce84, u32(u32, u32, u32, u32)> call_0075ce84;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)

u32 f_001ee1c0(gptr<AcNpcSpHonma__TalkRecept> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x50);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    gptr<Local_001ee1c0_r0_4> r0_4 = gptr<Local_001ee1c0_r0_4>(0u);
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    gptr<Local_001ee1c0_r2_2> r2_2 = gptr<Local_001ee1c0_r2_2>(0u);
    u32 r1_2 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_4 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r4 = r0;
    if (r1 == 0) {
        frame.release();
        return call_001edaec(r0, r1, r2, guest::cpu()->r[3]);
    }
    if (r1 == 1u) {
        goto L_1ee22c;
    }
    if (r1 == 2u) {
        goto L_1ee3d8;
    }
    if (r1 != 3u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    arg0->word_260 = 0x19;  // (from the original)
    r0_2 = call_00237048(r4, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_002fb94c(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r0_4 = gptr<Local_001ee1c0_r0_4>(r0_3 + 0x5700u);  // (from the original)
    r1 = u32(r0_4->byte_12) | 4u;
    r0_4->byte_12 = u8(r1);
    guest::cpu()->r[1] = r1;
    return 1u;
L_1ee22c:;
    r0_5 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r5_1 = 0u;
    r0_6 = r0_5 == 0 ? *gptr<u32>(r4 + 0xe0u) : *gptr<u32>(r0_5 + 0xe0u);  // (from the original)
    if (r0_6 != 0) {
        if (r0_6 == 1u) {
            goto L_1ee324;
        }
        if (r0_6 != 2u) {
            guest::cpu()->r[1] = r1;
            return r5_1;
        }
        goto L_1ee3b8;
    }
    r0_7 = *gptr<u32>(*gptr<u32>(r4 + 4u) + 0x34cu);  // (from the original)
    r0_8 = call_00759b24(r0_7, r1, r2, guest::cpu()->r[3]);
    r0_9 = *gptr<u32>(r0_8 + 0xa8u);  // (from the original)
    r2_2 = gptr<Local_001ee1c0_r2_2>(r4 + 0x280u);  // (from the original)
    r2_2->word_0 = r0_9;
    r2_2->word_4 = r0_9 + 0xdu;  // (from the original)
    *frame.at<u32>(0x3c) = 0x1ee428;  // (from the original)
    r1_2 = frame.at(0x38).addr();  // (from the original)
    r0_10 = frame.at(8).addr();
    *frame.at<u32>(0x38) = 0x9047f8;  // (from the original)
    call_00810e14(r0_10, r1_2, r2_2.addr(), guest::cpu()->r[3]);
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) != 0) {  // (from the original)
        call_005f3d70(*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u), frame.at(8).addr(), *gptr<u32>(r4 + 0x284u));  // (from the original)
    }
    *gptr<u8>(r4 + 0x27cu) = 1;  // (from the original)
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r0 = (r1 == 0 ? *gptr<u32>(r4 + 0xe0u) : *gptr<u32>(r1 + 0xe0u)) + 1u;  // (from the original)
    if (r1 == 0) {
        goto L_1ee31c;
    }
L_1ee314:;
    *gptr<u32>(r1 + 0xe0u) = r0;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 2u;
L_1ee31c:;
    *gptr<u32>(r4 + 0xe0u) = r0;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 2u;
L_1ee324:;
    *frame.at<u32>(0xc) = 0x1ee428;  // (from the original)
    r1_4 = frame.at(8).addr();
    r0_12 = frame.at(0x10).addr();  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    call_00810e14(r0_12, r1_4, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (*gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u) == 0) {  // (from the original)
        return r5_1;
    }
    r0_13 = *gptr<u32>(*gptr<u32>(r4 + 0x84u) + 0x18u);  // (from the original)
    r2_4 = *gptr<u32>(r4 + 0x284u);  // (from the original)
    r1_5 = frame.at(0x10).addr();  // (from the original)
    r0_14 = call_005f3d70(r0_13, r1_5, r2_4);
    r1 = guest::cpu()->r[1];
    r5_1 = r0_14;
    if (r0_14 != 1u) {
        return r5_1;
    }
    r1 = *gptr<u32>(r4 + 0x24cu);  // (from the original)
    r0 = (r1 == 0 ? *gptr<u32>(r4 + 0xe0u) : *gptr<u32>(r1 + 0xe0u)) + 1u;  // (from the original)
    if (r1 == 0) {
        guest::preempt();
        goto L_1ee31c;
    }
    guest::preempt();
    goto L_1ee314;
L_1ee3b8:;
    r0_15 = *gptr<u32>(r4 + 4u);
    if (r0_15 != 0) {
        call_0075ce84(r0_15, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 2u;
L_1ee3d8:;
    u32 r0_16 = call_002fb94c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_6 = *gptr<u32>(r4 + 0x280u);  // (from the original)
    if (r1_6 == 0) {
        call_001df140(r0_16 + 0x56c4u, r1_6, guest::cpu()->r[2]);  // (from the original)
        r1 = guest::cpu()->r[1];
        return 1u;
    }
    r1 = r1_6 - 1u & 0xffu;  // (from the original)
    *gptr<u8>(r0_16 + 0x56d8u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_001ee1c0
GUEST_EXPORT(0x001ee1c0, d_001ee1c0::f_001ee1c0);

// f_001ee438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001ee438 {

struct __attribute__((packed)) Local_001ee438_r2_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001ee438_r2_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001ee438_r2_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline constexpr guest::Function<0x001df140, u32(u32, u32)> call_001df140;  // (from the original)
inline constexpr guest::Function<0x001edaec, u32(u32, u32, u32, u32)> call_001edaec;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005f11f4, u32(u32, u32, u32)> call_005f11f4;  // (from the original)
inline constexpr guest::Function<0x005f3d70, u32(u32, u32, u32, u32)> call_005f3d70;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x00759b24, u32(u32, u32, u32, u32)> call_00759b24;  // (from the original)
inline constexpr guest::Function<0x0075be20, u32(u32, u32, u32, u32)> call_0075be20;  // (from the original)
inline constexpr guest::Function<0x0075ce84, u32(u32, u32, u32, u32)> call_0075ce84;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)

u32 f_001ee438(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x50);  // the original's stack frame
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r1_8 = 0;
    if (r1 != 0) {
        if (r1 == 1u) {
            u32 r0_1 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
            r5_1 = 0u;
            u32 r0_2 = r0_1 == 0 ? *gptr<u32>(r0 + 0xe0u) : *gptr<u32>(r0_1 + 0xe0u);  // (from the original)
            if (r0_2 != 0) {
                if (r0_2 == 1u) {
                    *frame.at<u32>(0xc) = 0x1ee748;  // (from the original)
                    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
                    call_00810e14(frame.at(0x10).addr(), frame.at(8).addr(), r2, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    u32 r3_1 = guest::cpu()->r[3];
                    if (*gptr<u32>(*gptr<u32>(r0 + 0x84u) + 0x18u) == 0) {  // (from the original)
                        return r5_1;
                    }
                    u32 r0_4 = *gptr<u32>(*gptr<u32>(r0 + 0x84u) + 0x18u);  // (from the original)
                    u32 r0_5 = call_005f3d70(r0_4, frame.at(0x10).addr(), *gptr<u32>(r0 + 0x284u), r3_1);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r5_1 = r0_5;
                    if (r0_5 != 1u) {
                        return r5_1;
                    }
                    r1 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
                    r0_6 = (r1 == 0 ? *gptr<u32>(r0 + 0xe0u) : *gptr<u32>(r1 + 0xe0u)) + 1u;  // (from the original)
                    if (r1 == 0) {
                        *gptr<u32>(r0 + 0xe0u) = r0_6;  // (from the original)
                        guest::cpu()->r[1] = r1;
                        return 2u;
                    }
                    goto L_1ee580;
                }
                if (r0_2 != 2u) {
                    guest::cpu()->r[1] = r1;
                    return r5_1;
                }
                r5_1 = 2u;
                u32 r0_7 = *gptr<u32>(r0 + 4u);
                if (r0_7 != 0) {
                    u32 r0_8 = call_0075ce84(r0_7, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    if (r0_8 != 0) {
                        u32 r6_1 = *gptr<u32>(r0 + 0x280u) + 0x20u;  // (from the original)
                        u32 r0_9 = *gptr<u32>(r0 + 4u);
                        if (r0_9 != 0) {
                            u32 r0_10 = *gptr<u32>(r0_9 + 0x354u);  // (from the original)
                            u32 zf_1 = r0_10 == 0;
                            u32 r4_1 = *global_0095debc;
                            if (!zf_1) {
                                zf_1 = r4_1 == 0;
                            }
                            if (!zf_1) {
                                call_005fcfd8(frame.at(4).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
                                call_0075be20(r4_1, frame.at(4).addr(), 0x1ee764u, r6_1);  // (from the original)
                                call_005f11f4(r0_10, frame.at(4).addr(), 0x11u);  // (from the original)
                                r1 = guest::cpu()->r[1];
                            }
                        }
                        r5_1 = 1u;
                    }
                }
                guest::cpu()->r[1] = r1;
                return r5_1;
            }
            u32 r0_13 = call_00759b24(*gptr<u32>(*gptr<u32>(r0 + 4u) + 0x34cu), r1, r2, r3);  // (from the original)
            u32 r0_14 = *gptr<u32>(r0_13 + 0xa8u);  // (from the original)
            gptr<Local_001ee438_r2_3> r2_3 = gptr<Local_001ee438_r2_3>(r0 + 0x280u);  // (from the original)
            r2_3->word_0 = r0_14;
            r2_3->word_4 = r0_14 + 0xdu;  // (from the original)
            *frame.at<u32>(0x3c) = 0x1ee748;  // (from the original)
            *frame.at<u32>(0x38) = 0x9047f8;  // (from the original)
            call_00810e14(frame.at(8).addr(), frame.at(0x38).addr(), r2_3.addr(), guest::cpu()->r[3]);  // (from the original)
            if (*gptr<u32>(*gptr<u32>(r0 + 0x84u) + 0x18u) != 0) {  // (from the original)
                u32 r0_16 = *gptr<u32>(*gptr<u32>(r0 + 0x84u) + 0x18u);  // (from the original)
                call_005f3d70(r0_16, frame.at(8).addr(), *gptr<u32>(r0 + 0x284u), guest::cpu()->r[3]);  // (from the original)
            }
            *gptr<u8>(r0 + 0x27cu) = 1;  // (from the original)
            r1 = *gptr<u32>(r0 + 0x24cu);  // (from the original)
            r0_6 = (r1 == 0 ? *gptr<u32>(r0 + 0xe0u) : *gptr<u32>(r1 + 0xe0u)) + 1u;  // (from the original)
            if (r1 == 0) {
                *gptr<u32>(r0 + 0xe0u) = r0_6;  // (from the original)
                guest::cpu()->r[1] = r1;
                return 2u;
            }
            goto L_1ee580;
        }
        if (r1 != 2u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_18 = call_002fb94c(r0, r1);
        u32 r1_7 = guest::cpu()->r[1];
        u32 r0_19 = u32(*gptr<u8>(0x8ac3u + r0_18)) & 0x80u;  // (from the original)
        if (*gptr<u32>(r0 + 0x280u) == 0) {  // (from the original)
            if (r0_19 == 0) {
                r1_7 = u32(*gptr<u8>(r0_18 + 0x56d8u)) | 0x80u;  // (from the original)
                *gptr<u8>(0x8ac3u + r0_18) = u8(r1_7);  // (from the original)
            }
            call_001df140(r0_18 + 0x56c4u, r1_7);  // (from the original)
            r1_8 = guest::cpu()->r[1];
            return 1u;
        }
        if (r0_19 == 0) {
            u32 r0_21 = *gptr<u8>(r0_18 + 0x56d8u);  // (from the original)
            if ((u32(*gptr<u8>(0x56d9u + r0_18)) & 2u) == 0) {  // (from the original)
                r0_21 = 8u;
            }
            *gptr<u8>(0x8ac3u + r0_18) = u8(r0_21 | 0x80u);  // (from the original)
            r1_8 = *gptr<u32>(r0 + 0x280u) - 1u & 0xffu;  // (from the original)
            *gptr<u8>(r0_18 + 0x56d8u) = u8(r1_8);  // (from the original)
            guest::cpu()->r[1] = r1_8;
            return 1u;
        }
        r1_8 = *gptr<u32>(r0 + 0x280u) - 1u & 0xffu;  // (from the original)
        *gptr<u8>(r0_18 + 0x56d8u) = u8(r1_8);  // (from the original)
        guest::cpu()->r[1] = r1_8;
        return 1u;
    }
    frame.release();
    return call_001edaec(r0, r1, r2, r3);
L_1ee580:;
    *gptr<u32>(r1 + 0xe0u) = r0_6;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 2u;
}

}  // namespace d_001ee438
GUEST_EXPORT(0x001ee438, d_001ee438::f_001ee438);
