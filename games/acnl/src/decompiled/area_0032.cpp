// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00320450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320450 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;
inline constexpr guest::Function<0x001323b4, u32(u32)> call_001323b4;
inline constexpr guest::Function<0x002f6c78, u32(u32)> call_002f6c78;
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> call_004b6dc8;

u32 f_00320450(gptr<LetterDragWindowBase> arg0, u32 r1) {
    call_00132364(arg0.addr() + 0x10u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f6c78(arg0.addr() + 0x201cu);  // (from the original)
    call_001323b4(arg0.addr() + 0x258u);  // (from the original)
    u32 r0_4 = arg0->word_3d0;
    if (r0_4 != 0) {
        r0_4 = call_004b6dc8(r0_4, arg0->word_278);
    }
    arg0->word_3d0 = 0;
    return r0_4;
}

}  // namespace d_00320450
GUEST_EXPORT_FRAMED(0x00320450, d_00320450::f_00320450, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00320490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320490 {

inline constexpr guest::Function<0x0029b6f8, u32(u32, u32, u32, u32)> call_0029b6f8;

u32 f_00320490(u32 r0) {
    return call_0029b6f8(r0 + 0x201cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00320490
GUEST_EXPORT(0x00320490, d_00320490::f_00320490);

// f_0032049c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032049c {

struct __attribute__((packed)) Object_0032049c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0032049c_0, word_c, 0xc);


u32 f_0032049c(gptr<Object_0032049c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_c;
    if (r2_1 > r1) {
        return arg0.addr() + 0x3d4u;  // (from the original)
    }
    if (r1 >= r2_1 + 0xau) {  // (from the original)
        return arg0.addr() + 0x3d4u;  // (from the original)
    }
    return arg0.addr() + ((r1 - r2_1) * 0xadu << 2) + 0x3d4u;  // (from the original)
}

}  // namespace d_0032049c
GUEST_EXPORT(0x0032049c, d_0032049c::f_0032049c);

// f_003204d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003204d8 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;

u32 f_003204d8(u32 r0) {
    return call_00567e24(r0 + 0x10u, 0x3204e4u);  // (from the original)
}

}  // namespace d_003204d8
GUEST_EXPORT(0x003204d8, d_003204d8::f_003204d8);

// f_00320500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320500 {

struct __attribute__((packed)) Object_00320500_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320500_0, word_c, 0xc);


void f_00320500(gptr<Object_00320500_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2_1 = arg0->word_c;
    if (r2_1 > r1) {
        u32 r0_1 = arg0.addr() + 0x3d4u;  // (from the original)
        u32 r2_2 = *gptr<u32>(*gptr<u32>(r0_1) + 0x4cu);  // (from the original)
        // virtual function 19 of r0_1
        guest::call_address<u32>(r2_2, r0_1, 1u, r2_2, r3);
        return;
    }
    if (r1 >= r2_1 + 0xau) {  // (from the original)
        u32 r0_2 = arg0.addr() + 0x3d4u;  // (from the original)
        u32 r2_3 = *gptr<u32>(*gptr<u32>(r0_2) + 0x4cu);  // (from the original)
        // virtual function 19 of r0_2
        guest::call_address<u32>(r2_3, r0_2, 1u, r2_3, r1);
        return;
    }
    u32 r0_3 = arg0.addr() + (r1 - r2_1) * 0x2b4u + 0x3d4u;  // (from the original)
    u32 r2_4 = *gptr<u32>(*gptr<u32>(r0_3) + 0x4cu);  // (from the original)
    // virtual function 19 of r0_3
    guest::call_address<u32>(r2_4, r0_3, 1u, r2_4, r1);
}

}  // namespace d_00320500
GUEST_EXPORT(0x00320500, d_00320500::f_00320500);

// f_00320548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320548 {

struct __attribute__((packed)) Object_00320548_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320548_0, word_c, 0xc);


u32 f_00320548(gptr<Object_00320548_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_c;
    if (r2_1 > r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    if (r1 >= r2_1 + 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    u32 r1_1 = (r1 - r2_1) * 0xadu;  // (from the original)
    u32 r0_1 = *gptr<u32>(arg0.addr() + (r1_1 << 2) + 0x684u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00320548
GUEST_EXPORT(0x00320548, d_00320548::f_00320548);

// f_00320584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320584 {

struct __attribute__((packed)) Object_00320584_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320584_0, word_c, 0xc);

inline constexpr guest::Function<0x002b6d20, u32(u32, u32)> call_002b6d20;

void f_00320584(gptr<Object_00320584_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r3_1 = arg0->word_c;
    if (r3_1 <= r1) {
        if (r1 < r3_1 + 0xau) {  // (from the original)
            frame.release();
            call_002b6d20(arg0.addr() + (r1 - r3_1) * 0x2b4u + 0x3d4u, r2);  // (from the original)
            return;
        }
    }
    frame.release();
    call_002b6d20(arg0.addr() + 0x3d4u, r2);  // (from the original)
    return;
}

}  // namespace d_00320584
GUEST_EXPORT(0x00320584, d_00320584::f_00320584);

// f_003205cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003205cc {

struct __attribute__((packed)) Object_003205cc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_003205cc_0, word_c, 0xc);


void f_003205cc(gptr<Object_003205cc_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->word_c;
    if (r3_1 <= r1) {
        if (r1 < r3_1 + 0xau) {  // (from the original)
            u32 r1_1 = (r1 - r3_1) * 0xadu;  // (from the original)
            *gptr<u8>((arg0.addr() + (r1_1 << 2) + 0x3d4u) + 0xd9u) = u8(r2);  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return;
        }
    }
    *gptr<u8>((arg0.addr() + 0x3d4u) + 0xd9u) = u8(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_003205cc
GUEST_EXPORT_FRAMED(0x003205cc, d_003205cc::f_003205cc, 0x10);  // pushes {r4} first, as the original

// f_00320614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320614 {

struct __attribute__((packed)) Local_00320614_r1_3 {
    u8 unknown_0[0x134];  // (not used here)
    u8 byte_134;
    u8 unknown_135[0x3];  // (not used here)
    u32 word_138;
};
GUEST_OFFSET(Local_00320614_r1_3, byte_134, 0x134);
GUEST_OFFSET(Local_00320614_r1_3, word_138, 0x138);

inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;
inline constexpr guest::Function<0x00125aec, u32(u32)> call_00125aec;
inline constexpr guest::Function<0x00125e3c, u32(u32)> call_00125e3c;
inline constexpr guest::Function<0x0029b7c0, u32(u32)> call_0029b7c0;
inline constexpr guest::Function<0x002f915c, u32(u32)> call_002f915c;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;

u32 f_00320614(gptr<LetterDragWindowBase> arg0, u32 r1_unused, u32 r2, u32 r3) {
    arg0->word_0 = vtable_LetterDragWindowBase;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r0_2 = call_001207d8((arg0.addr() + 0xcu) + 4u, 0x8f4828u, r2, r3);  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x248u);  // (from the original)
    u32 ea_2 = r0_4 + 0x14cu;  // (from the original)
    *gptr<u32>(ea_2) = 0;
    call_00125aec(ea_2 + 4u);
    u32 ea_3 = ea_2 + 0x2cu;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_7 = call_00301d0c(ea_3 + 4u, 0x2e37acu, 0x2b4u, 0xau);  // (from the original)
    call_002f915c(r0_7 + 0x1b08u);  // (from the original)
    call_0029b7c0(r0_7 + 0x1c48u);  // (from the original)
    gptr<Local_00320614_r1_3> r1_3 = gptr<Local_00320614_r1_3>(r0_7 + 0x1c2cu);  // (from the original)
    r1_3->byte_134 = 0;
    r1_3->word_138 = 0;
    return r0_7 - 0x3d4u;  // (from the original)
}

}  // namespace d_00320614
GUEST_EXPORT_FRAMED(0x00320614, d_00320614::f_00320614, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032069c {

struct __attribute__((packed)) Object_0032069c_0 {
    u8 unknown_0[0x280];  // (not used here)
    u32 word_280;
};
GUEST_OFFSET(Object_0032069c_0, word_280, 0x280);

struct __attribute__((packed)) Local_0032069c_r0_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_0032069c_r0_1, byte_b7, 0xb7);


u32 f_0032069c(gptr<Object_0032069c_0> arg0, u32 r1) {
    gptr<Local_0032069c_r0_1> r0_1 = gptr<Local_0032069c_r0_1>(arg0->word_280);
    if (r0_1.addr() == 0) {
        return r0_1.addr();
    }
    u32 r1_1 = r1 | u32(r0_1->byte_b7) & 0xfeu;  // (from the original)
    r0_1->byte_b7 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return r0_1.addr();
}

}  // namespace d_0032069c
GUEST_EXPORT(0x0032069c, d_0032069c::f_0032069c);

// f_003207d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003207d8 {

struct __attribute__((packed)) Object_003207d8_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_003207d8_0, word_150, 0x150);

struct __attribute__((packed)) Local_003207d8_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_003207d8_r2_1, byte_b7, 0xb7);

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;

void f_003207d8(gptr<Object_003207d8_0> arg0, u32 r1) {
    gptr<Local_003207d8_r2_1> r2_1 = gptr<Local_003207d8_r2_1>(arg0->word_150);
    u32 r3_1 = u32(r2_1->byte_b7) & 0xfeu;  // (from the original)
    u32 r1_1 = r1 | r3_1;
    r2_1->byte_b7 = u8(r1_1);
    call_00568c10(arg0.addr() + 0x130u, r1_1, r2_1.addr(), r3_1);  // (from the original)
}

}  // namespace d_003207d8
GUEST_EXPORT(0x003207d8, d_003207d8::f_003207d8);

// f_00320a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320a4c {


void f_00320a4c(gptr<MyDesignDragIconNode> arg0, u32 r1) {
    u32 zf_1 = r1 == 0;
    if (r1 == 0) {
        r1 = 0x1000403u;  // (from the original)
    }
    arg0->word_d0 = 0x100040d;  // (from the original)
    arg0->byte_db = 1;
    if (!zf_1) {
        r1 = 0x10003f7u;  // (from the original)
    }
    arg0->byte_dc = 1;
    arg0->word_cc = r1;
    arg0->byte_da = 1;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00320a4c
GUEST_EXPORT(0x00320a4c, d_00320a4c::f_00320a4c);

// f_00321944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321944 {

struct __attribute__((packed)) Local_00321944_r1_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00321944_r1_3, word_0, 0x0);
GUEST_OFFSET(Local_00321944_r1_3, word_4, 0x4);

struct __attribute__((packed)) Local_00321944_r4_1 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_00321944_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_00321944_r4_1, word_c, 0xc);

inline constexpr u32 vtable_ObjectResource = 0x008ef578u;
inline constexpr guest::Function<0x002f747c, u32(u32)> call_002f747c;
inline constexpr guest::Function<0x00317dec, u32(u32)> call_00317dec;
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32)> call_004ecf70;
inline constexpr guest::Function<0x004edd84, u32(u32)> call_004edd84;

u32 f_00321944(gptr<ResourceLoadAsyncSkeletal> arg0, u32 r1) {
    u32 r5_1 = 0;
    gptr<Local_00321944_r4_1> r4_1 = gptr<Local_00321944_r4_1>(r1);
    if (r1 == 0) {
        r4_1 = gptr<Local_00321944_r4_1>(0x8f4a6cu);  // (from the original)
        r5_1 = 1u;
    } else {
        r5_1 = 0u;
    }
    u32 r1_1 = r4_1->word_0;
    arg0->word_0 = r1_1;
    u32 r1_2 = *gptr<u32>(r1_1 - 0xcu);  // (from the original)
    u32 r2_1 = r4_1->word_c;
    *gptr<u32>(arg0.addr() + r1_2) = r2_1;
    u32 r0_1 = arg0.addr() + 0x30u;  // (from the original)
    call_00317e2c(r0_1, r1_2, r2_1, guest::cpu()->r[3]);
    gptr<Local_00321944_r1_3> r1_3 = gptr<Local_00321944_r1_3>(r4_1.addr() + 4u);
    if (r1_3.addr() == 0) {
        r1_3 = gptr<Local_00321944_r1_3>(0x8f427cu);  // (from the original)
    }
    u32 r2_2 = r1_3->word_0;
    arg0->word_0 = r2_2;
    u32 r2_3 = *gptr<u32>(r2_2 - 0xcu);  // (from the original)
    u32 r1_4 = r1_3->word_4;
    *gptr<u32>(r0_1 - 0x30u + r2_3) = r1_4;  // (from the original)
    call_004ecf70(r0_1 - 0x20u, r1_4, r2_3);  // (from the original)
    call_004edd84(r0_1 - 0x2cu);  // (from the original)
    u32 r0_5 = r0_1 - 0x30u;  // (from the original)
    if (r5_1 != 0) {
        u32 r4_2 = r0_5 + 0x138u;  // (from the original)
        arg0->word_138 = vtable_ObjectResource;
        if (arg0->word_140 != 0) {
            call_002f747c(r4_2 + 4u);
        }
        call_00317dec(r4_2 + 4u);
        r0_5 = r4_2 - 0x138u;  // (from the original)
    }
    return r0_5;
}

}  // namespace d_00321944
GUEST_EXPORT_FRAMED(0x00321944, d_00321944::f_00321944, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_003219e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003219e8 {

struct __attribute__((packed)) Local_003219e8_r0_2 {
    u32 word_0;
    u32 word_4;
    u16 half_8;
};
GUEST_OFFSET(Local_003219e8_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_003219e8_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_003219e8_r0_2, half_8, 0x8);

struct __attribute__((packed)) Local_003219e8_r5_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u16 half_c;
};
GUEST_OFFSET(Local_003219e8_r5_1, word_4, 0x4);
GUEST_OFFSET(Local_003219e8_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_003219e8_r5_1, half_c, 0xc);

inline constexpr guest::Function<0x0033f5d0, u32(u32, u32, u32, u32)> call_0033f5d0;
inline constexpr guest::Function<0x004cce74, u32(u32, u32, u32)> call_004cce74;

void f_003219e8(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r4 = 0u;
    u32 r8 = 0x9827b0u;  // (from the original)
    u32 r7 = 0x94ccc0u;  // (from the original)
    u32 r6 = r8 - 0x70u;  // (from the original)
    goto L_321a4c;
L_321a00:;
    if (r4 != 0) {
        gptr<Local_003219e8_r5_1> r5_1 = gptr<Local_003219e8_r5_1>(r6 + (r4 << 4));
        call_004cce74(0xae3fc0u, r4 + 0x40u, r5_1.addr());  // (from the original)
        r2 = guest::cpu()->r[2];
        u32 r0_1 = r4 * 5u;
        r4 += 1u;
        gptr<Local_003219e8_r0_2> r0_2 = gptr<Local_003219e8_r0_2>(r7 + (r0_1 << 1));
        r5_1->word_4 = r0_2->word_0;
        r5_1->word_8 = r0_2->word_4;
        r5_1->half_c = u16(u32(r0_2->half_8));
        if (s32(r4) < 7) {
            guest::preempt();
            goto L_321a00;
        }
        return;
    }
L_321a4c:;
    call_0033f5d0(r8, r4, r2, guest::cpu()->r[3]);
    call_004cce74(0xae3fc0u, 0x40u, r8);  // (from the original)
    r2 = guest::cpu()->r[2];
    r4 = 1u;
    guest::preempt();
    goto L_321a00;
}

}  // namespace d_003219e8
GUEST_EXPORT_FRAMED(0x003219e8, d_003219e8::f_003219e8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00321ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321ae8 {

inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00766e64, u32(u32, u32)> call_00766e64;

u32 f_00321ae8() {
    return call_00766e64(*global_0094d080, guest::cpu()->r[1]);
}

}  // namespace d_00321ae8
GUEST_EXPORT(0x00321ae8, d_00321ae8::f_00321ae8);

// f_00321af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321af8 {

inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x0013c1d4, u32(u32, u32, u32)> call_0013c1d4;

void f_00321af8() {
    call_0013c1d4(*global_0094d080, guest::cpu()->r[1], guest::cpu()->r[2]);
}

}  // namespace d_00321af8
GUEST_EXPORT(0x00321af8, d_00321af8::f_00321af8);

// f_00321c84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321c84 {

inline constexpr u32 vtable_SoundMelodyPlayerPos = 0x008f4a94u;
inline constexpr guest::Function<0x0012ec48, u32(u32)> call_0012ec48;

u32 f_00321c84(gptr<SoundMelodyPlayerPos> arg0) {
    call_0012ec48(arg0.addr());
    float S0_1 = 0.0f;
    arg0->word_4c = 0;
    arg0->word_0 = vtable_SoundMelodyPlayerPos;
    arg0->word_50 = std::bit_cast<u32>(S0_1);
    arg0->word_54 = std::bit_cast<u32>(S0_1);
    arg0->word_58 = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
    return arg0.addr();
}

}  // namespace d_00321c84
GUEST_EXPORT_FRAMED(0x00321c84, d_00321c84::f_00321c84, 0x4010);  // pushes {r4, lr} first, as the original

// f_003232a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003232a8 {


u32 f_003232a8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    if (r1 >= 0x10u) {  // (from the original)
        r0_1 = 0u;
    } else {
        *gptr<u8>(r0 + r1 + 0x40u) = u8(r2);  // (from the original)
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_003232a8
GUEST_EXPORT(0x003232a8, d_003232a8::f_003232a8);

// f_003232c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003232c0 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x00322e98, u32(u32, u32, u32, u32)> call_00322e98;
inline constexpr guest::Function<0x006b9858, u32(u32, u32, u32)> call_006b9858;
inline constexpr guest::Function<0x00769840, u32(u32, u32, u32, u32)> call_00769840;
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;

struct __attribute__((packed)) Frame_003232c0 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_003232c0, word_0, 0x0);
GUEST_SIZE(Frame_003232c0, 0x10);

void f_003232c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003232c0> frame;  // the original's stack frame
    u32 r5 = guest::cpu()->r[5];
    u32 r7_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_5 = 0;
    u32 r4 = 0u;
    u32 r6 = r0;
    u32 r10 = 0x95bfdcu;  // (from the original)
    u32 r8 = r1;
    u32 r9 = r4;
    do {
        if (r4 < 0x10u) {  // (from the original)
            u32 r2_1 = r6 + r4;
            r7_1 = r6 + (r4 << 2);
            r5 = *gptr<u8>(r2_1 + 0x40u);  // (from the original)
            u32 r0_1 = call_002fcaf4(r7_1, r1, r2_1, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 != 0) {
                goto L_32331c;
            }
            u32 r0_2 = call_00769840(r7_1, guest::cpu()->r[1], r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                goto L_32331c;
            }
        }
        r7_1 = r10;
L_32331c:;
        call_002fc934(frame.at(4).addr(), r7_1, r2, r3);
        u32 r0_5 = call_002fcaf4(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_5 == 0) {
            u32 r0_7 = call_002fcb34(frame.at(4).addr());
            if (r0_7 == 0x50u) {  // (from the original)
                if (r4 < 0x10u) {  // (from the original)
                    r5 = r6 + (r4 << 2);
                    u32 r0_8 = call_002fcaf4(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_8 != 0) {
                        goto L_3233b4;
                    }
                    u32 r0_9 = call_00769840(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    if (r0_9 != 0) {
                        goto L_3233b4;
                    }
                }
                r5 = r10;
                goto L_3233b4;
            }
        }
        r0_10 = r5 & 0xffu;  // (from the original)
        if (r0_10 == 2u || r0_10 == 3u) {
            frame->word_0 = r9;
            call_00322e98(r6, r4, 0x95bfdcu, 0u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            goto L_323470;
        }
        r0_11 = frame.at(4).addr();
        r0_12 = call_002fcaf4(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12 == 0) {
            call_0076aff4(frame.at(8).addr(), frame.at(4).addr(), r8, r3);
            frame->word_0 = r9;
            call_00322e98(r6, r4, frame.at(8).addr(), r5 & 0xffu);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            goto L_323470;
        }
        goto L_323470;
L_3233b4:;
        r0_14 = frame.at(8).addr();
        call_002fc934(r0_14, r5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_15 = frame.at(8).addr();
        call_006b9858(r0_15, 0x50u, 0x51u);  // (from the original)
        frame->word_0 = r9;
        call_00322e98(r6, r4, 0x95bfdcu, 0u);  // (from the original)
        r2_5 = frame.at(8).addr();
        frame->word_0 = r9;
        call_00322e98(r6, r4, r2_5, 0u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
L_323470:;
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1;
}

}  // namespace d_003232c0
GUEST_EXPORT_FRAMED(0x003232c0, d_003232c0::f_003232c0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00324934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00324934 {


u32 f_00324934(u32 r0_unused, u32 r1) {
    u32 r1_1 = *gptr<u32>((r1 << 2) + 0x845304u);  // (from the original)
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, 0x845304u, guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00324934
GUEST_EXPORT(0x00324934, d_00324934::f_00324934);

// f_00325578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00325578 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;
inline constexpr guest::Function<0x00521a2c, u32(u32)> call_00521a2c;

u32 f_00325578(u32 r0) {
    u32 r0_1 = r0 + 0x7cu;  // (from the original)
    call_004ee39c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00521a2c(r0_1);
    return 2u;
}

}  // namespace d_00325578
GUEST_EXPORT_FRAMED(0x00325578, d_00325578::f_00325578, 0x4010);  // pushes {r4, lr} first, as the original

// f_003255b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003255b4 {

inline constexpr u32 vtable_BsLightHemiSphereBase_rec = 0x008f4f40u;
inline constexpr u32 vtable_BsLightHemiSphereBase__HemiSphereLightHioNode = 0x008faae0u;
inline guest::global<u32, 0x008a3bbc> global_008a3bbc;
inline guest::global<u32, 0x008a3bc0> global_008a3bc0;
inline constexpr guest::Function<0x001c2764, u32(u32)> call_001c2764;
inline constexpr guest::Function<0x004eebd8, u32(u32)> call_004eebd8;

u32 f_003255b4(gptr<BsLightHemiSphereBase_rec> arg0) {
    call_001c2764(arg0.addr());
    arg0->word_0 = vtable_BsLightHemiSphereBase_rec;
    arg0->word_18 = vtable_BsLightHemiSphereBase__HemiSphereLightHioNode;
    arg0->byte_54 = 1;
    arg0->byte_55 = 0;
    arg0->word_58 = *global_008a3bc0;
    arg0->word_5c = *global_008a3bc0;
    arg0->word_60 = *global_008a3bc0;
    arg0->word_64 = *global_008a3bbc;
    arg0->word_68 = *global_008a3bc0;
    arg0->word_6c = *global_008a3bc0;
    arg0->word_70 = *global_008a3bc0;
    u32 r2_1 = *global_008a3bbc;
    u32 ea_1 = arg0.addr() + 0x74u;  // (from the original)
    arg0->word_74 = r2_1;
    call_004eebd8(ea_1 + 8u);
    float S0_1 = 0.5f;
    arg0->half_90 = 0;
    arg0->byte_92 = 0;
    arg0->byte_93 = 0;
    arg0->word_b4 = std::bit_cast<u32>(S0_1);
    arg0->word_c4 = 0;
    guest::cpu()->s[0] = S0_1;
    return ea_1 - 0x74u;  // (from the original)
}

}  // namespace d_003255b4
GUEST_EXPORT_FRAMED(0x003255b4, d_003255b4::f_003255b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00325ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00325ff0 {

struct __attribute__((packed)) Local_00325ff0_r0_3 {
    u8 unknown_0[0x18];  // (not used here)
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
};
GUEST_OFFSET(Local_00325ff0_r0_3, word_18, 0x18);
GUEST_OFFSET(Local_00325ff0_r0_3, word_1c, 0x1c);
GUEST_OFFSET(Local_00325ff0_r0_3, word_20, 0x20);
GUEST_OFFSET(Local_00325ff0_r0_3, word_24, 0x24);
GUEST_OFFSET(Local_00325ff0_r0_3, word_28, 0x28);
GUEST_OFFSET(Local_00325ff0_r0_3, word_2c, 0x2c);
GUEST_OFFSET(Local_00325ff0_r0_3, word_30, 0x30);
GUEST_OFFSET(Local_00325ff0_r0_3, word_34, 0x34);
GUEST_OFFSET(Local_00325ff0_r0_3, word_38, 0x38);
GUEST_OFFSET(Local_00325ff0_r0_3, word_3c, 0x3c);
GUEST_OFFSET(Local_00325ff0_r0_3, word_40, 0x40);
GUEST_OFFSET(Local_00325ff0_r0_3, word_44, 0x44);
GUEST_OFFSET(Local_00325ff0_r0_3, word_48, 0x48);
GUEST_OFFSET(Local_00325ff0_r0_3, word_4c, 0x4c);
GUEST_OFFSET(Local_00325ff0_r0_3, word_50, 0x50);

inline constexpr u32 vtable_script__WordFix_30u_ = 0x00909ea8u;
inline constexpr u32 vtable_script__WordFix_33u_ = 0x00909f18u;
inline guest::global<u32, 0x0095decc> global_0095decc;
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32)> call_002fe7f4;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;
inline constexpr guest::Function<0x005e2e50, u32(u32, u32)> call_005e2e50;
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;
inline constexpr guest::Function<0x005f4bfc, u32(u32)> call_005f4bfc;
inline constexpr guest::Function<0x0076ec7c, u32(u32, u32, u32, u32)> call_0076ec7c;

struct __attribute__((packed)) Frame_00325ff0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x50];  // (not read or written by name)
    u32 word_58;
    u8 unknown_5c[0x58];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00325ff0, word_0, 0x0);
GUEST_OFFSET(Frame_00325ff0, word_4, 0x4);
GUEST_OFFSET(Frame_00325ff0, word_58, 0x58);
GUEST_SIZE(Frame_00325ff0, 0xb4);

void f_00325ff0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_00325ff0> frame;  // the original's stack frame
    u32 r8 = guest::cpu()->r[8];
    u32 res_1 = 0;
    u32 r3_3 = 0;
    u32 r4 = r0;
    u32 r0_1 = frame.at(4).addr();
    call_003083bc(r0_1, frame.at(0x1c).addr(), 0x1eu, r3);  // (from the original)
    u32 r10 = vtable_script__WordFix_30u_;
    *gptr<u32>(r0_1) = r10;
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    call_005f4bfc(r0_2);
    gptr<Local_00325ff0_r0_3> r0_3 = gptr<Local_00325ff0_r0_3>(r0_2 - 0xcu);  // (from the original)
    u32 r5 = 0u;
    r0_3->word_18 = r5;
    r0_3->word_1c = r5;
    r0_3->word_20 = r5;
    r0_3->word_24 = r5;
    r0_3->word_28 = r5;
    r0_3->word_2c = r5;
    r0_3->word_30 = r5;
    r0_3->word_34 = r5;
    r0_3->word_38 = r5;
    r0_3->word_3c = r5;
    r0_3->word_40 = r5;
    r0_3->word_44 = r5;
    r0_3->word_48 = r5;
    u32 r2 = 0x8906ecu;  // (from the original)
    r0_3->word_4c = r5;
    r0_3->word_50 = r5;
    u32 r1 = 0xfu;  // (from the original)
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
    frame->word_0 = r5;
    call_005ea964(*global_0095decc, frame.at(4).addr(), 0x848840u, 0x137u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u);
    u32 r0_7 = r4 + 0x458u;  // (from the original)
    call_005e2e50(r0_7, frame.at(4).addr());
    call_005e2f94(r0_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r11 = 0x95c6d0u;  // (from the original)
    r0 = 3u;
    u32 r7 = r0;
    if (r7 != 0 && s32(r0) >= 0) {
        r8 = vtable_script__WordFix_33u_;
    }
    r5 = r4 + 0x51cu;  // (from the original)
    r4 = 0u;
    if (s32(r0) > 0) {
        do {
            u32 r6_1 = *gptr<u32>(r11);
            u32 r0_8 = call_00305f44(r0, r1, r2, r3);
            call_0076ec7c(frame.at(0).addr(), r6_1 + 0x10u, r0_8, r4);  // (from the original)
            call_002fe7f4(frame.at(0x58).addr(), frame.at(0).addr(), 0u);  // (from the original)
            call_005e2e50(r5, frame.at(0x58).addr());  // (from the original)
            call_005e2f94(r5);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            frame->word_58 = r8;
            r0 = frame.at(0).addr();
            r4 += 1u;
            r5 += 0xc4u;  // (from the original)
            guest::preempt();
        } while (s32(r7) > s32(r4));
    }
    frame->word_4 = r10;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00325ff0
GUEST_EXPORT_FRAMED(0x00325ff0, d_00325ff0::f_00325ff0, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00326360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00326360 {

inline constexpr guest::Function<0x0018e3fc, u32(u32, u32, u32, u32)> call_0018e3fc;
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32)> call_004b4fc0;
inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;
inline constexpr guest::Function<0x0056878c, u32(u32, u32)> call_0056878c;
inline constexpr guest::Function<0x00569184, u32(u32, u32, u32, u32)> call_00569184;
inline constexpr guest::Function<0x005695e4, u32(u32, u32, u32)> call_005695e4;

void f_00326360(gptr<BsMenuRoomLightSwitch> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r1_2 = 0;
    u32 r0_24 = 0;
    u32 r4 = r0;
    arg0->word_124 = r0 + 0x184u;  // (from the original)
    call_00569184(r4 + 0x38u, 0x852f08u, 0u, 0x1800u);  // (from the original)
    arg0->byte_44 = 0x87;  // (from the original)
    call_005695e4(r4 + 0x3ccu, 0x852ef4u, r4 + 0x184u);  // (from the original)
    call_005695e4(r4 + 0x3f4u, 0x852ee0u, r4 + 0x184u);  // (from the original)
    call_005695e4(r4 + 0x41cu, 0x852eccu, r4 + 0x184u);  // (from the original)
    call_005695e4(r4 + 0x444u, 0x852eb8u, r4 + 0x184u);  // (from the original)
    u32 r0_7 = call_0056878c(r4 + 0x38u, 0x852eacu);  // (from the original)
    arg0->word_46c = r0_7;
    u32 r0_9 = call_0056878c(r4 + 0x38u, 0x852ea0u);  // (from the original)
    arg0->word_470 = r0_9;
    u32 r0_11 = call_0056878c(r4 + 0x38u, 0x852e94u);  // (from the original)
    arg0->word_474 = r0_11;
    u32 r0_13 = call_0056878c(r4 + 0x38u, 0x852e88u);  // (from the original)
    arg0->word_478 = r0_13;
    u32 r0_15 = call_0056878c(r4 + 0x38u, 0x852e78u);  // (from the original)
    arg0->word_47c = r0_15;
    u32 r0_17 = call_0056878c(r4 + 0x38u, 0x852e68u);  // (from the original)
    arg0->word_480 = r0_17;
    u32 r0_19 = call_004b4fc0(r4 + 0x38u, 0x852e5cu, 1u);  // (from the original)
    arg0->word_484 = r0_19;
    u32 r0_21 = call_004b4fc0(r4 + 0x38u, 0x852e50u, 1u);  // (from the original)
    u32 r5 = 0u;
    u32 r10 = r5;
    arg0->word_488 = r0_21;
L_326464:;
    u32 r0_22 = r5 + (r5 << 5);
    u32 r7 = r4 + 0x184u;  // (from the original)
    u32 r0_23 = r5 & 0xffu;  // (from the original)
    u32 r9 = r4 + ((r0_22 + (r0_22 << 1)) << 3);
    u32 r6 = r9 + 0x48cu;  // (from the original)
    *gptr<u32>(r9 + 0x578u) = r7;  // (from the original)
    u32 r8 = 0x87u;  // (from the original)
    if (r0_23 >= 2u) {
        *gptr<u8>(r6 + 0x314u) = u8(r10);  // (from the original)
        goto L_3264ec;
    }
    *gptr<u8>(r6 + 0x314u) = u8(r0_23);  // (from the original)
    if (r0_23 == 0) {
        goto L_3264ec;
    }
    call_00569184(r6, 0x852e28u, 0u, 0x1000u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_3264b4:;
    *gptr<u8>(r6 + 0xcu) = u8(r8);  // (from the original)
    *gptr<u32>(r6 + 0x14cu) = *gptr<u32>(r6 + 0x20u);  // (from the original)
    call_0018e3fc(r6, r7, r2, r3);
    r1_2 = *gptr<u32>(r9 + 0x5d8u);  // (from the original)
    r0_24 = *gptr<u32>(r4 + (r5 << 2) + 0x47cu);  // (from the original)
    call_004b6d74(r0_24, r1_2);
    r5 += 1u;
    if (s32(r5) < 2) {
        guest::preempt();
        goto L_326464;
    }
    return;
L_3264ec:;
    call_00569184(r6, 0x852e18u, 0u, 0x1000u);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_3264b4;
}

}  // namespace d_00326360
GUEST_EXPORT_FRAMED(0x00326360, d_00326360::f_00326360, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00327ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00327ce8 {

struct __attribute__((packed)) Object_00327ce8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x18];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x24];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x24];  // (not used here)
    u32 word_78;
    u8 unknown_7c[0x24];  // (not used here)
    u32 word_a0;
    u8 unknown_a4[0x58];  // (not used here)
    u32 word_fc;
    u8 unknown_100[0x24];  // (not used here)
    u32 word_124;
    u8 unknown_128[0x24];  // (not used here)
    u32 word_14c;
    u8 unknown_150[0x24];  // (not used here)
    u32 word_174;
};
GUEST_OFFSET(Object_00327ce8_0, word_c, 0xc);
GUEST_OFFSET(Object_00327ce8_0, word_28, 0x28);
GUEST_OFFSET(Object_00327ce8_0, word_50, 0x50);
GUEST_OFFSET(Object_00327ce8_0, word_78, 0x78);
GUEST_OFFSET(Object_00327ce8_0, word_a0, 0xa0);
GUEST_OFFSET(Object_00327ce8_0, word_fc, 0xfc);
GUEST_OFFSET(Object_00327ce8_0, word_124, 0x124);
GUEST_OFFSET(Object_00327ce8_0, word_14c, 0x14c);
GUEST_OFFSET(Object_00327ce8_0, word_174, 0x174);

struct __attribute__((packed)) Local_00327ce8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00327ce8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00327ce8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00327ce8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00327ce8_ea_1, word_c, 0xc);

inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;
inline constexpr guest::Function<0x002dfe08, u32(u32, u32, u32, u32)> call_002dfe08;

struct __attribute__((packed)) Frame_00327ce8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x20];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00327ce8, word_0, 0x0);
GUEST_OFFSET(Frame_00327ce8, word_4, 0x4);
GUEST_SIZE(Frame_00327ce8, 0x28);

u32 f_00327ce8(gptr<Object_00327ce8_0> arg0, u32 r1, u32 r2) {
    guest::StackFrameOf<Frame_00327ce8> frame;  // the original's stack frame
    if (r2 != 0) {
        u32 r1_1 = arg0->word_14c;
        u32 r2_1 = arg0->word_174;
        u32 r3_1 = arg0->word_c;
        gptr<Local_00327ce8_ea_1> ea_1 = gptr<Local_00327ce8_ea_1>(frame.at(8).addr());
        ea_1->word_0 = arg0->word_124;
        ea_1->word_4 = r1_1;
        ea_1->word_8 = r2_1;
        ea_1->word_c = r3_1;
        u32 r1_2 = arg0->word_fc;
        frame->word_0 = arg0->word_a0;
        frame->word_4 = r1_2;
        call_002dfe08(r1, arg0->word_28, arg0->word_50, arg0->word_78);
    }
    frame.release();
    return call_0013f134(arg0.addr(), r1);
}

}  // namespace d_00327ce8
GUEST_EXPORT(0x00327ce8, d_00327ce8::f_00327ce8);

// f_003288a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003288a4 {

inline constexpr u32 vtable_DragIconGroup = 0x008ee248u;
inline constexpr u32 vtable_DragIconGroup_at_c = 0x008ee258u;
inline constexpr u32 vtable_DragIconControl_rec = 0x008f08acu;
inline constexpr u32 vtable_LetterDragWindowBase = 0x008f4828u;
inline constexpr u32 vtable_LetterDragStockWindow = 0x008f52b0u;
inline constexpr u32 vtable_LetterDragStockWindow_at_213c = 0x008f52d4u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x002f7710, u32(u32, u32)> call_002f7710;
inline constexpr guest::Function<0x00567ef0, u32(u32)> call_00567ef0;
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;
inline constexpr guest::Function<0x005bf744, u32(u32)> call_005bf744;

u32 f_003288a4(gptr<LetterDragWindowBase> arg0) {
    arg0->word_0 = vtable_LetterDragStockWindow;
    *gptr<u32>(arg0.addr() + 0x213cu) = vtable_LetterDragStockWindow_at_213c;  // (from the original)
    u32 r0_1 = arg0.addr() + 0x2188u;  // (from the original)
    call_0056988c(r0_1, 0x8f52b0u, 0x8f52d4u, 0x213cu);  // (from the original)
    call_0056988c(r0_1 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_0 = vtable_LetterDragWindowBase;
    arg0->word_201c = vtable_DragIconControl_rec;
    call_002f7710(r0_1 - 0x16cu, 0x8f08acu);  // (from the original)
    arg0->word_1ee8 = vtable_DragIconGroup_at_c;
    arg0->word_1edc = vtable_DragIconGroup;
    call_0056988c(r0_1 - 0x198u, 0x8ee248u, 0x8ee258u, guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x1c0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x1e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x210u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x238u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x260u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0056988c(r0_1 - 0x28cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_1 - 0x1db4u, 0x2e3854u, 0x2b4u, 0xau);  // (from the original)
    call_0056988c(r0_1 - 0x1de0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_005bf744(r0_1 - 0x1f30u);  // (from the original)
    u32 r0_16 = call_00567ef0(r0_14 - 0x248u);  // (from the original)
    return r0_16 - 0x10u;  // (from the original)
}

}  // namespace d_003288a4
GUEST_EXPORT_FRAMED(0x003288a4, d_003288a4::f_003288a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_003289a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003289a8 {

struct __attribute__((packed)) Object_003289a8_0 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_003289a8_0, half_0, 0x0);
GUEST_OFFSET(Object_003289a8_0, byte_2, 0x2);
GUEST_OFFSET(Object_003289a8_0, byte_3, 0x3);

inline constexpr guest::Function<0x00112d35, u32(u32, u32, u32, u32)> call_00112d34;
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;
inline constexpr guest::Function<0x002fcb34, u32(u32)> call_002fcb34;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32)> call_002fcbb0;
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;

struct __attribute__((packed)) Frame_003289a8 {
    u32 word_0;
};
GUEST_OFFSET(Frame_003289a8, word_0, 0x0);
GUEST_SIZE(Frame_003289a8, 0x4);

u32 f_003289a8(gptr<Object_003289a8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_003289a8> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_002fae84(arg0.addr(), r1, r2, r3);
    u32 r0_2 = call_002fb310(r0_1);
    u32 r1_2 = s8(arg0->byte_2);
    u32 r0_4 = call_003058c8(r0_2 + 4u, r1_2);
    if (r0_4 == 0) {
        return r0_4;
    }
    u32 r1_4 = arg0->half_0;
    call_002fcbb0(frame.at(0).addr(), r1_4);
    u32 r0_7 = call_002fcb34(frame.at(0).addr());
    if (r0_7 != 0x2fu || u32(s8(arg0->byte_3)) + 1u != 0) {  // (from the original)
        u32 r1_6 = s8(arg0->byte_3);
        call_00112d34(r0_4, r1_6, frame.at(0).addr(), 0u);
        return frame.at(0).addr();
    }
    call_002fc8e8(r0_4 + 0x249eu, frame.at(0).addr());  // (from the original)
    return frame.at(0).addr();
}

}  // namespace d_003289a8
GUEST_EXPORT_FRAMED(0x003289a8, d_003289a8::f_003289a8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0032a174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032a174 {

struct __attribute__((packed)) Local_0032a174_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0032a174_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0032a174_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0032a174_r0_4 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2];  // (not used here)
    u32 word_c;
    u16 half_10;
    u16 half_12;
    u16 half_14;
    u16 half_16;
    u8 byte_18;
    u8 byte_19;
    u8 unknown_1a[0x2];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_0032a174_r0_4, byte_8, 0x8);
GUEST_OFFSET(Local_0032a174_r0_4, byte_9, 0x9);
GUEST_OFFSET(Local_0032a174_r0_4, word_c, 0xc);
GUEST_OFFSET(Local_0032a174_r0_4, half_10, 0x10);
GUEST_OFFSET(Local_0032a174_r0_4, half_12, 0x12);
GUEST_OFFSET(Local_0032a174_r0_4, half_14, 0x14);
GUEST_OFFSET(Local_0032a174_r0_4, half_16, 0x16);
GUEST_OFFSET(Local_0032a174_r0_4, byte_18, 0x18);
GUEST_OFFSET(Local_0032a174_r0_4, byte_19, 0x19);
GUEST_OFFSET(Local_0032a174_r0_4, word_1c, 0x1c);

struct __attribute__((packed)) Local_0032a174_r0_5 {
    u8 unknown_0[0x108];  // (not used here)
    u8 byte_108;
    u8 byte_109;
    u8 byte_10a;
};
GUEST_OFFSET(Local_0032a174_r0_5, byte_108, 0x108);
GUEST_OFFSET(Local_0032a174_r0_5, byte_109, 0x109);
GUEST_OFFSET(Local_0032a174_r0_5, byte_10a, 0x10a);

inline constexpr u32 vtable_NpcDemoDollTalkRecept = 0x008f532cu;
inline constexpr u32 vtable_NpcDemoDollTalkRecept_at_7c = 0x008f5490u;
inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> call_0023a9dc;
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;

u32 f_0032a174(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r0_1 = call_0023a9dc(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x7cu) = vtable_NpcDemoDollTalkRecept_at_7c;  // (from the original)
    *gptr<u32>(r0_1) = vtable_NpcDemoDollTalkRecept;
    *gptr<u32>(r0_1 + 0x260u) = 0;  // (from the original)
    u32 ea_3 = r0_1 + 0x264u;  // (from the original)
    *gptr<u32>(ea_3) = 0;
    u32 r0_2 = ea_3 + 4u;
    call_002fc934(r0_2, 0x95bfdcu);  // (from the original)
    u32 r0_3 = r0_2 + 4u;
    call_002fc934(r0_3, 0x95bfdcu);  // (from the original)
    gptr<Local_0032a174_r0_4> r0_4 = gptr<Local_0032a174_r0_4>(r0_3 - 4u);
    r0_4->byte_8 = 0;
    r0_4->byte_9 = 0;
    r0_4->word_c = 0;
    r0_4->half_10 = 0;
    r0_4->half_12 = 0;
    r0_4->half_14 = 0;
    r0_4->half_16 = 0;
    r0_4->byte_18 = 0;
    r0_4->byte_19 = 0;
    r0_4->word_1c = 0;
    gptr<Local_0032a174_r0_5> r0_5 = gptr<Local_0032a174_r0_5>(r0_4.addr() - 0x268u);  // (from the original)
    *gptr<u16>(r0_5.addr() + 0x288u) = 0;  // (from the original)
    gptr<Local_0032a174_ea_4> ea_4 = gptr<Local_0032a174_ea_4>(r0_5.addr() + 0x28cu);  // (from the original)
    ea_4->word_0 = ~0u;
    ea_4->word_4 = 0;
    r0_5->byte_108 = 1;
    r0_5->byte_109 = 1;
    r0_5->byte_10a = 1;
    guest::cpu()->r[1] = 1u;
    return r0_5.addr();
}

}  // namespace d_0032a174
GUEST_EXPORT_FRAMED(0x0032a174, d_0032a174::f_0032a174, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032a3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032a3c8 {

struct __attribute__((packed)) Object_0032a3c8_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
};
GUEST_OFFSET(Object_0032a3c8_0, byte_0, 0x0);
GUEST_OFFSET(Object_0032a3c8_0, word_4, 0x4);
GUEST_OFFSET(Object_0032a3c8_0, word_8, 0x8);
GUEST_OFFSET(Object_0032a3c8_0, byte_10, 0x10);
GUEST_OFFSET(Object_0032a3c8_0, byte_11, 0x11);
GUEST_OFFSET(Object_0032a3c8_0, byte_12, 0x12);
GUEST_OFFSET(Object_0032a3c8_0, byte_13, 0x13);

struct __attribute__((packed)) Object_0032a3c8_1 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
};
GUEST_OFFSET(Object_0032a3c8_1, byte_0, 0x0);
GUEST_OFFSET(Object_0032a3c8_1, word_4, 0x4);
GUEST_OFFSET(Object_0032a3c8_1, word_8, 0x8);
GUEST_OFFSET(Object_0032a3c8_1, byte_10, 0x10);
GUEST_OFFSET(Object_0032a3c8_1, byte_11, 0x11);
GUEST_OFFSET(Object_0032a3c8_1, byte_12, 0x12);
GUEST_OFFSET(Object_0032a3c8_1, byte_13, 0x13);

struct __attribute__((packed)) Object_0032a3c8_3 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0032a3c8_3, byte_0, 0x0);
GUEST_OFFSET(Object_0032a3c8_3, byte_1, 0x1);
GUEST_OFFSET(Object_0032a3c8_3, byte_2, 0x2);

inline constexpr guest::Function<0x002fc20c, u32(u32)> call_002fc20c;
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;

void f_0032a3c8(gptr<Object_0032a3c8_0> arg0, gptr<Object_0032a3c8_1> arg1, u32 r2, gptr<Object_0032a3c8_3> arg3) {
    u32 r0_1 = arg0.addr() + 0xcu;  // (from the original)
    call_002fc20c(r0_1);
    arg0->byte_11 = 0xc8;  // (from the original)
    arg0->byte_12 = 0xc8;  // (from the original)
    arg0->byte_13 = 0;
    arg0->byte_0 = u8(u32(arg1->byte_0));
    arg0->word_4 = arg1->word_4;
    arg0->word_8 = arg1->word_8;
    arg0->byte_11 = u8(u32(arg1->byte_11));
    arg0->byte_12 = u8(u32(arg1->byte_12));
    arg0->byte_13 = u8(u32(arg1->byte_13));
    u32 r0_2 = arg1->byte_10;
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    arg0->byte_10 = u8(r0_2);
    call_002fc8e8(r0_1, arg1.addr() + 0xcu);  // (from the original)
    call_002fc8e8(r0_1, r2);
    arg0->byte_11 = u8(u32(arg3->byte_0));
    arg0->byte_12 = u8(u32(arg3->byte_1));
    arg0->byte_13 = u8(u32(arg3->byte_2));
}

}  // namespace d_0032a3c8
GUEST_EXPORT_FRAMED(0x0032a3c8, d_0032a3c8::f_0032a3c8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0032af5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032af5c {

struct __attribute__((packed)) Object_0032af5c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x1eb3];  // (not used here)
    u32 word_1ec4;
};
GUEST_OFFSET(Object_0032af5c_0, byte_10, 0x10);
GUEST_OFFSET(Object_0032af5c_0, word_1ec4, 0x1ec4);

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;

u32 f_0032af5c(gptr<Object_0032af5c_0> arg0) {
    u32 r0_1 = arg0->word_1ec4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    arg0->byte_10 = 0;
    *gptr<u8>(arg0.addr() + 0x1ebeu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0x1ebeu;  // (from the original)
    return 0u;
}

}  // namespace d_0032af5c
GUEST_EXPORT_FRAMED(0x0032af5c, d_0032af5c::f_0032af5c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032b7d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032b7d0 {

struct __attribute__((packed)) Object_0032b7d0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x1];  // (not used here)
    u16 half_12;
    u16 half_14;
    u16 half_16;
    u32 word_18;
    u8 unknown_1c[0xfa0];  // (not used here)
    u32 word_fbc;
    u32 word_fc0;
    u32 word_fc4;
    u32 word_fc8;
    u8 unknown_fcc[0x230];  // (not used here)
    u32 word_11fc;
    u32 word_1200;
    u32 word_1204;
    u32 word_1208;
    u8 unknown_120c[0xca8];  // (not used here)
    u16 half_1eb4;
    u16 half_1eb6;
    u16 half_1eb8;
    u8 byte_1eba;
    u8 byte_1ebb;
    u8 byte_1ebc;
    u8 byte_1ebd;
    u8 byte_1ebe;
    u8 byte_1ebf;
    u8 byte_1ec0;
    u8 byte_1ec1;
    u8 byte_1ec2;
    u8 unknown_1ec3[0x1];  // (not used here)
    u32 word_1ec4;
};
GUEST_OFFSET(Object_0032b7d0_0, byte_10, 0x10);
GUEST_OFFSET(Object_0032b7d0_0, half_12, 0x12);
GUEST_OFFSET(Object_0032b7d0_0, half_14, 0x14);
GUEST_OFFSET(Object_0032b7d0_0, half_16, 0x16);
GUEST_OFFSET(Object_0032b7d0_0, word_18, 0x18);
GUEST_OFFSET(Object_0032b7d0_0, word_fbc, 0xfbc);
GUEST_OFFSET(Object_0032b7d0_0, word_fc0, 0xfc0);
GUEST_OFFSET(Object_0032b7d0_0, word_fc4, 0xfc4);
GUEST_OFFSET(Object_0032b7d0_0, word_fc8, 0xfc8);
GUEST_OFFSET(Object_0032b7d0_0, word_11fc, 0x11fc);
GUEST_OFFSET(Object_0032b7d0_0, word_1200, 0x1200);
GUEST_OFFSET(Object_0032b7d0_0, word_1204, 0x1204);
GUEST_OFFSET(Object_0032b7d0_0, word_1208, 0x1208);
GUEST_OFFSET(Object_0032b7d0_0, half_1eb4, 0x1eb4);
GUEST_OFFSET(Object_0032b7d0_0, half_1eb6, 0x1eb6);
GUEST_OFFSET(Object_0032b7d0_0, half_1eb8, 0x1eb8);
GUEST_OFFSET(Object_0032b7d0_0, byte_1eba, 0x1eba);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebb, 0x1ebb);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebc, 0x1ebc);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebd, 0x1ebd);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebe, 0x1ebe);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebf, 0x1ebf);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec0, 0x1ec0);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec1, 0x1ec1);
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec2, 0x1ec2);
GUEST_OFFSET(Object_0032b7d0_0, word_1ec4, 0x1ec4);


u32 f_0032b7d0(gptr<Object_0032b7d0_0> arg0) {
    u32 r2_1 = ~0u;
    arg0->byte_10 = 0;
    arg0->half_12 = u16(r2_1);
    arg0->half_14 = u16(r2_1);
    arg0->half_16 = 0;
    arg0->word_18 = 0;
    u32 ea_1 = arg0.addr() + 0xfbcu;  // (from the original)
    arg0->word_fbc = 0;
    arg0->word_fc0 = 0;
    arg0->word_fc4 = 0;
    arg0->word_fc8 = 0;
    if (ea_1 + 0x10u != 0) {  // (from the original)
        arg0->word_fbc = ea_1 + 0x10u;  // (from the original)
        arg0->word_fc0 = 0x46;  // (from the original)
    }
    arg0->word_11fc = 0;
    arg0->word_1200 = 0;
    arg0->word_1204 = 0;
    arg0->word_1208 = 0;
    if (ea_1 + 0x250u != 0) {  // (from the original)
        arg0->word_11fc = ea_1 + 0x250u;  // (from the original)
        arg0->word_1200 = 0x10e;  // (from the original)
    }
    arg0->half_1eb4 = u16(r2_1);
    arg0->half_1eb6 = u16(r2_1);
    arg0->half_1eb8 = 0;
    arg0->byte_1eba = 0;
    arg0->byte_1ebb = 0;
    arg0->byte_1ebc = 0;
    arg0->byte_1ebd = 0;
    arg0->byte_1ebe = 0;
    arg0->byte_1ebf = 0;
    arg0->byte_1ec0 = 0;
    arg0->byte_1ec1 = 0xff;  // (from the original)
    arg0->byte_1ec2 = 0xff;  // (from the original)
    arg0->word_1ec4 = 0;
    return ea_1 - 0xfbcu;  // (from the original)
}

}  // namespace d_0032b7d0
GUEST_EXPORT(0x0032b7d0, d_0032b7d0::f_0032b7d0);

// f_0032ba1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032ba1c {

struct __attribute__((packed)) Object_0032ba1c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    float float_8;
    u32 word_c;
    u32 word_10;
    float float_14;
    float float_18;
    u16 half_1c;
    u16 half_1e;
    u16 half_20;
    u16 half_22;
    u8 byte_24;
    u8 unknown_25[0x3];  // (not used here)
    u32 word_28;
    u32 word_2c;
    float float_30;
    u32 word_34;
    float float_38;
    float float_3c;
    u8 byte_40;
    u8 byte_41;
    u8 unknown_42[0x2];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x1];  // (not used here)
    u8 byte_49;
};
GUEST_OFFSET(Object_0032ba1c_0, word_4, 0x4);
GUEST_OFFSET(Object_0032ba1c_0, float_8, 0x8);
GUEST_OFFSET(Object_0032ba1c_0, word_c, 0xc);
GUEST_OFFSET(Object_0032ba1c_0, word_10, 0x10);
GUEST_OFFSET(Object_0032ba1c_0, float_14, 0x14);
GUEST_OFFSET(Object_0032ba1c_0, float_18, 0x18);
GUEST_OFFSET(Object_0032ba1c_0, half_1c, 0x1c);
GUEST_OFFSET(Object_0032ba1c_0, half_1e, 0x1e);
GUEST_OFFSET(Object_0032ba1c_0, half_20, 0x20);
GUEST_OFFSET(Object_0032ba1c_0, half_22, 0x22);
GUEST_OFFSET(Object_0032ba1c_0, byte_24, 0x24);
GUEST_OFFSET(Object_0032ba1c_0, word_28, 0x28);
GUEST_OFFSET(Object_0032ba1c_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0032ba1c_0, float_30, 0x30);
GUEST_OFFSET(Object_0032ba1c_0, word_34, 0x34);
GUEST_OFFSET(Object_0032ba1c_0, float_38, 0x38);
GUEST_OFFSET(Object_0032ba1c_0, float_3c, 0x3c);
GUEST_OFFSET(Object_0032ba1c_0, byte_40, 0x40);
GUEST_OFFSET(Object_0032ba1c_0, byte_41, 0x41);
GUEST_OFFSET(Object_0032ba1c_0, word_44, 0x44);
GUEST_OFFSET(Object_0032ba1c_0, byte_49, 0x49);

inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline guest::global<u32, 0x0094d080> global_0094d080;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x002bc94c, u32(u32, u32, u32, u32)> call_002bc94c;

u32 f_0032ba1c(gptr<Object_0032ba1c_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 r0_1 = 0;
    if (arg0->byte_24 != 0) {
        r0_1 = arg0->byte_49;
        if (r0_1 == 0) {
            return r0_1;
        }
        r0_1 = arg0->word_44;
        if (r0_1 + 1u != 0) {
            return r0_1;
        }
        u32 r0_2 = arg0->word_4;
        if (r0_2 != 0) {
            call_00136e58(r0_2, 0u, r2, guest::cpu()->r[3]);
        }
        arg0->byte_24 = 0;
    }
    float S1_1 = -1.0f;
    u32 r0_3 = ~0u;
    arg0->float_14 = S1_1;
    arg0->float_18 = S1_1;
    arg0->half_1c = u16(r0_3);
    arg0->half_1e = u16(r0_3);
    arg0->half_20 = u16(r0_3);
    float S2_1 = 1.0f;
    arg0->half_22 = u16(~0x63u);  // (from the original)
    arg0->float_8 = S2_1;
    arg0->word_28 = r0_3;
    float S0_1 = 0.0f;
    arg0->word_2c = r0_3;
    arg0->float_30 = S0_1;
    arg0->word_34 = 0;
    arg0->float_38 = S0_1;
    arg0->float_3c = S0_1;
    arg0->byte_40 = 0;
    arg0->byte_41 = 0;
    arg0->word_10 = r1;
    u32 r0_4 = *global_0094cd20;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    r0_1 = call_002bc94c(r0_4, r1, 0u, guest::cpu()->r[3]);
    r1 = 1u;
    if (r0_1 + 1u == 0) {
        arg0->byte_49 = u8(r1);
    } else {
        arg0->word_44 = r0_1;
        arg0->byte_49 = 0;
    }
    if (r2 == 0) {
        r0_1 = *global_0094d080 + 0x738u;  // (from the original)
        arg0->word_c = r0_1;
    } else {
        arg0->word_c = r2;
    }
    arg0->byte_24 = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_0032ba1c
GUEST_EXPORT_FRAMED(0x0032ba1c, d_0032ba1c::f_0032ba1c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0032bcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032bcf8 {

struct __attribute__((packed)) Object_0032bcf8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x1c];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x1f];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_0032bcf8_0, word_4, 0x4);
GUEST_OFFSET(Object_0032bcf8_0, byte_24, 0x24);
GUEST_OFFSET(Object_0032bcf8_0, word_44, 0x44);

inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> call_0013d4f0;

void f_0032bcf8(gptr<Object_0032bcf8_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
    }
    if (arg0->word_44 + 1u != 0) {
        u32 r0_2 = *global_0094cd20;
        if (r0_2 != 0) {
            u32 r0_3 = call_00138c2c(r0_2, 0u, r2, guest::cpu()->r[3]);
            u32 r1_1 = arg0->word_44;
            if (s32(r1_1) <= s32(r0_3)) {
                u32 r0_5 = call_0013d4f0(*global_0094cd20, r1_1, 0u);
                if (r0_5 != 0) {
                    arg0->word_44 = ~0u;
                }
            }
        }
    }
    arg0->byte_24 = 0;
}

}  // namespace d_0032bcf8
GUEST_EXPORT_FRAMED(0x0032bcf8, d_0032bcf8::f_0032bcf8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0032bd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032bd68 {

struct __attribute__((packed)) Object_0032bd68_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u16 half_1c;
    u8 unknown_1e[0xa];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x10];  // (not used here)
    u8 byte_40;
    u8 byte_41;
};
GUEST_OFFSET(Object_0032bd68_0, half_1c, 0x1c);
GUEST_OFFSET(Object_0032bd68_0, word_28, 0x28);
GUEST_OFFSET(Object_0032bd68_0, word_2c, 0x2c);
GUEST_OFFSET(Object_0032bd68_0, byte_40, 0x40);
GUEST_OFFSET(Object_0032bd68_0, byte_41, 0x41);

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32)> call_002ff6f8;

u32 f_0032bd68(gptr<Object_0032bd68_0> arg0, u32 r1) {
    u32 r0_3 = 0;
    if (arg0->byte_40 == 0) {
        u32 r0_1 = s16(arg0->half_1c);
        arg0->byte_40 = 1;
        if (r0_1 != 1u) {
            if (r0_1 == 2u) {
                if (arg0->byte_41 != 0) {
                    arg0->byte_41 = 0;
                    return s8(arg0->byte_41);
                }
                u32 r0_2 = call_002ff6f8(2u, r1);
                r1 = guest::cpu()->r[1];
                if (r0_2 != 0) {
                    arg0->byte_41 = 0;
                    return s8(arg0->byte_41);
                }
                goto L_32be08;
            }
            if (r0_1 != 3u) {
                arg0->byte_41 = 0;
                r0_3 = s8(arg0->byte_41);
                guest::cpu()->r[1] = r1;
                return r0_3;
            }
        } else {
            if (arg0->byte_41 != 0) {
                arg0->byte_41 = 0;
                r0_3 = s8(arg0->byte_41);
                guest::cpu()->r[1] = r1;
                return r0_3;
            }
            if ((arg0->word_28 & 1u) != 0) {
                r0_3 = s8(arg0->byte_41);
                guest::cpu()->r[1] = r1;
                return r0_3;
            }
            goto L_32be08;
        }
        r1 = *gptr<u32>((arg0->word_28 << 2) + 0x83b32cu);  // (from the original)
        if (s32(arg0->word_2c) < s32(r1)) {
            goto L_32be08;
        }
        arg0->byte_41 = 0;
        r0_3 = s8(arg0->byte_41);
        guest::cpu()->r[1] = r1;
        return r0_3;
L_32be08:;
        arg0->byte_41 = 1;
    }
    r0_3 = s8(arg0->byte_41);
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_0032bd68
GUEST_EXPORT_FRAMED(0x0032bd68, d_0032bd68::f_0032bd68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0032be18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032be18 {


u32 f_0032be18(u32 r0, u32 r1) {
    u32 res_1 = r0 - 0xau;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r0 ^ 0xau) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        u32 res_2 = r1 - 0x13u;  // (from the original)
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r1 ^ 0x13u) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        return 0u;
    }
    return *gptr<s16>((r0 * 3u + (r0 << 4) << 1) + 0x83b1b0u + (r1 << 1));  // (from the original)
}

}  // namespace d_0032be18
GUEST_EXPORT(0x0032be18, d_0032be18::f_0032be18);

// f_0032c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c348 {

struct __attribute__((packed)) Object_0032c348_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x1c];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x1f];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_0032c348_0, word_4, 0x4);
GUEST_OFFSET(Object_0032c348_0, byte_24, 0x24);
GUEST_OFFSET(Object_0032c348_0, word_44, 0x44);

inline guest::global<u32, 0x0094cd20> global_0094cd20;
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> call_0013d4f0;

void f_0032c348(gptr<Object_0032c348_0> arg0, u32 r1, u32 r2) {
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (arg0->word_44 + 1u != 0) {
        u32 r0_2 = *global_0094cd20;
        if (r0_2 != 0) {
            u32 r0_3 = call_00138c2c(r0_2, 0u, r2, guest::cpu()->r[3]);
            r1 = arg0->word_44;
            if (s32(r1) <= s32(r0_3)) {
                u32 r0_5 = call_0013d4f0(*global_0094cd20, r1, 0u);
                r1 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    arg0->word_44 = ~0u;
                }
            }
        }
    }
    arg0->byte_24 = 0;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0032c348
GUEST_EXPORT_FRAMED(0x0032c348, d_0032c348::f_0032c348, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0032c654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c654 {

struct __attribute__((packed)) Object_0032c654_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0032c654_0, byte_0, 0x0);
GUEST_OFFSET(Object_0032c654_0, byte_1, 0x1);


void f_0032c654(gptr<Object_0032c654_0> arg0) {
    if (arg0->byte_0 == 0) {
        return;
    }
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
}

}  // namespace d_0032c654
GUEST_EXPORT(0x0032c654, d_0032c654::f_0032c654);

// f_0032c72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c72c {

inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;
inline constexpr guest::Function<0x002e9954, u32(u32, u32, u32, u32)> call_002e9954;

u32 f_0032c72c(gptr<SoundObjFurnitureInst> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (arg0->word_98 != 0) {
        call_002e9954(arg0.addr() + 0x90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    frame.release();
    return call_002d27e0(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0032c72c
GUEST_EXPORT(0x0032c72c, d_0032c72c::f_0032c72c);

// f_0032c78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c78c {

inline constexpr u32 vtable_SoundObjFurnitureInst = 0x008f54e4u;
inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;
inline constexpr guest::Function<0x002e99d0, u32(u32, u32)> call_002e99d0;

u32 f_0032c78c(u32 r0, u32 r1) {
    u32 r0_1 = call_002d2a4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = vtable_SoundObjFurnitureInst;
    u32 r0_2 = r0_1 + 0x90u;  // (from the original)
    call_002e99d0(r0_2, 0x8f54e4u);  // (from the original)
    return r0_2 - 0x90u;  // (from the original)
}

}  // namespace d_0032c78c
GUEST_EXPORT_FRAMED(0x0032c78c, d_0032c78c::f_0032c78c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032c804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c804 {

inline constexpr u32 vtable_SoundObjFurnitureInst = 0x008f54e4u;
inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;
inline constexpr guest::Function<0x002e9954, u32(u32, u32, u32, u32)> call_002e9954;
inline constexpr guest::Function<0x002e9a14, u32(u32, u32, u32, u32)> call_002e9a14;

u32 f_0032c804(gptr<SoundObjFurnitureInst> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_SoundObjFurnitureInst;
    if (arg0->byte_34 != 0) {
        if (arg0->word_98 != 0) {
            call_002e9954(arg0.addr() + 0x90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        }
        call_002d27e0(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_002e9a14(arg0.addr() + 0x90u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    frame.release();
    return call_002d2b90(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0032c804
GUEST_EXPORT(0x0032c804, d_0032c804::f_0032c804);

// f_0032c850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c850 {

struct __attribute__((packed)) Local_0032c850_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0032c850_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0032c850_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0032c850_ea_1, word_8, 0x8);

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;
inline constexpr guest::Function<0x00300650, u32(u32)> call_00300650;
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;
inline constexpr guest::Function<0x005cddb4, u32(u32, u32)> call_005cddb4;
inline constexpr guest::Function<0x007596ac, u32(u32, u32)> call_007596ac;
inline constexpr guest::Function<0x00779548, u32(u32)> call_00779548;

struct __attribute__((packed)) Frame_0032c850 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0032c850, word_0, 0x0);
GUEST_OFFSET(Frame_0032c850, word_4, 0x4);
GUEST_OFFSET(Frame_0032c850, word_8, 0x8);
GUEST_SIZE(Frame_0032c850, 0x18);

u32 f_0032c850(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0032c850> frame;  // the original's stack frame
    u32 r2_2 = 0;
    u32 r0_1 = call_002fb338(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_007596ac(r0, 1u);
        if (r0_2 != 0) {
            goto L_32c8a0;
        }
    }
    call_00303cdc(r0);
    r2_2 = ~0u;
    call_0013fac4(r0 + 8u, 0xau, r2_2);  // (from the original)
    call_00779548(r0 + 0x12u);  // (from the original)
L_32c8a0:;
    call_00300650(frame.at(0xc).addr());  // (from the original)
    gptr<Local_0032c850_ea_1> ea_1 = gptr<Local_0032c850_ea_1>(frame.at(0xc).addr());  // (from the original)
    u32 r1_3 = ea_1->word_4;
    u32 r2_4 = ea_1->word_8;
    frame->word_0 = ea_1->word_0;
    frame->word_4 = r1_3;
    frame->word_8 = r2_4;
    call_005cddb4(r0, frame.at(0).addr());
    return r0;
}

}  // namespace d_0032c850
GUEST_EXPORT_FRAMED(0x0032c850, d_0032c850::f_0032c850, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032c8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c8c8 {

struct __attribute__((packed)) Local_0032c8c8_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x9];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Local_0032c8c8_r1_1, byte_8, 0x8);
GUEST_OFFSET(Local_0032c8c8_r1_1, byte_12, 0x12);

struct __attribute__((packed)) Local_0032c8c8_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u8 byte_8;
    u8 unknown_9[0x9];  // (not used here)
    u8 byte_12;
};
GUEST_OFFSET(Local_0032c8c8_r5_1, byte_8, 0x8);
GUEST_OFFSET(Local_0032c8c8_r5_1, byte_12, 0x12);


void f_0032c8c8(u32 r0, u32 r1) {
    u32 r2 = 0u;
    u32 r12 = r2;
    u32 r4 = ~0u;
    do {
        gptr<Local_0032c8c8_r5_1> r5_1 = gptr<Local_0032c8c8_r5_1>(r0 + r2);
        u32 r3_1 = s8(r5_1->byte_8);
        if (r3_1 < 4u && r3_1 == r1) {
            r5_1->byte_8 = u8(r4);
            r5_1->byte_12 = u8(r12);
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
    r2 = 0u;
    do {
        u32 r5 = r0 + r2;
        if (u32(*gptr<s8>(r5 + 8u)) >= 4u) {
            r1 = r2 + 1u;
            if (s32(r1) < 0xa) {  // (from the original)
                do {
                    if (u32(*gptr<s8>(r0 + r1 + 8u)) < 4u) {
                        gptr<Local_0032c8c8_r1_1> r1_1 = gptr<Local_0032c8c8_r1_1>(r1 + r0);
                        *gptr<u8>(r5 + 8u) = u8(u32(r1_1->byte_8));
                        *gptr<u8>(r5 + 0x12u) = u8(u32(r1_1->byte_12));  // (from the original)
                        r1_1->byte_8 = u8(r4);
                        r1_1->byte_12 = u8(r12);
                        break;
                    }
                    r1 += 1u;
                    guest::preempt();
                } while (s32(r1) < 0xa);  // (from the original)
            }
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0xa);  // (from the original)
}

}  // namespace d_0032c8c8
GUEST_EXPORT_FRAMED(0x0032c8c8, d_0032c8c8::f_0032c8c8, 0x30);  // pushes {r4, r5} first, as the original

// f_0032cb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cb6c {

struct __attribute__((packed)) Object_0032cb6c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x8];  // (not used here)
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 unknown_11[0x1];  // (not used here)
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
};
GUEST_OFFSET(Object_0032cb6c_0, byte_4, 0x4);
GUEST_OFFSET(Object_0032cb6c_0, byte_d, 0xd);
GUEST_OFFSET(Object_0032cb6c_0, byte_e, 0xe);
GUEST_OFFSET(Object_0032cb6c_0, byte_f, 0xf);
GUEST_OFFSET(Object_0032cb6c_0, byte_10, 0x10);
GUEST_OFFSET(Object_0032cb6c_0, byte_12, 0x12);
GUEST_OFFSET(Object_0032cb6c_0, byte_13, 0x13);
GUEST_OFFSET(Object_0032cb6c_0, byte_14, 0x14);
GUEST_OFFSET(Object_0032cb6c_0, byte_15, 0x15);


void f_0032cb6c(gptr<Object_0032cb6c_0> arg0, u32 r1) {
    u32 r2_1 = arg0->byte_4;
    arg0->byte_d = u8(r1);
    if (r2_1 != 0 || r1 != 1u) {
        return;
    }
    arg0->byte_e = 0;
    arg0->byte_f = 0;
    arg0->byte_10 = 0;
    arg0->byte_12 = 0;
    arg0->byte_14 = 1;
    arg0->byte_15 = 0;
    arg0->byte_13 = 1;
}

}  // namespace d_0032cb6c
GUEST_EXPORT(0x0032cb6c, d_0032cb6c::f_0032cb6c);

// f_0032cbec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cbec {

struct __attribute__((packed)) Object_0032cbec_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
};
GUEST_OFFSET(Object_0032cbec_0, byte_0, 0x0);
GUEST_OFFSET(Object_0032cbec_0, byte_1, 0x1);
GUEST_OFFSET(Object_0032cbec_0, byte_2, 0x2);
GUEST_OFFSET(Object_0032cbec_0, byte_3, 0x3);
GUEST_OFFSET(Object_0032cbec_0, byte_4, 0x4);
GUEST_OFFSET(Object_0032cbec_0, byte_5, 0x5);
GUEST_OFFSET(Object_0032cbec_0, byte_6, 0x6);
GUEST_OFFSET(Object_0032cbec_0, byte_7, 0x7);
GUEST_OFFSET(Object_0032cbec_0, byte_8, 0x8);


void f_0032cbec(gptr<Object_0032cbec_0> arg0) {
    arg0->byte_0 = 0;
    arg0->byte_1 = 0;
    arg0->byte_2 = 0;
    arg0->byte_3 = 1;
    arg0->byte_4 = 1;
    arg0->byte_5 = 1;
    arg0->byte_6 = 0;
    arg0->byte_7 = 1;
    arg0->byte_8 = 0xb;  // (from the original)
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_0032cbec
GUEST_EXPORT(0x0032cbec, d_0032cbec::f_0032cbec);

// f_0032cc20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cc20 {

struct __attribute__((packed)) Object_0032cc20_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
    u32 word_d;
    u32 word_11;
    u8 byte_15;
};
GUEST_OFFSET(Object_0032cc20_0, byte_4, 0x4);
GUEST_OFFSET(Object_0032cc20_0, byte_5, 0x5);
GUEST_OFFSET(Object_0032cc20_0, byte_6, 0x6);
GUEST_OFFSET(Object_0032cc20_0, byte_7, 0x7);
GUEST_OFFSET(Object_0032cc20_0, byte_8, 0x8);
GUEST_OFFSET(Object_0032cc20_0, byte_9, 0x9);
GUEST_OFFSET(Object_0032cc20_0, byte_a, 0xa);
GUEST_OFFSET(Object_0032cc20_0, byte_b, 0xb);
GUEST_OFFSET(Object_0032cc20_0, byte_c, 0xc);
GUEST_OFFSET(Object_0032cc20_0, word_d, 0xd);
GUEST_OFFSET(Object_0032cc20_0, word_11, 0x11);
GUEST_OFFSET(Object_0032cc20_0, byte_15, 0x15);


void f_0032cc20(gptr<Object_0032cc20_0> arg0) {
    arg0->byte_4 = 0;
    arg0->byte_5 = 0;
    arg0->byte_6 = 0;
    arg0->byte_7 = 1;
    arg0->byte_8 = 1;
    arg0->byte_9 = 1;
    arg0->byte_a = 0;
    arg0->byte_b = 1;
    arg0->byte_c = 0xb;  // (from the original)
    arg0->word_d = *gptr<u32>(arg0.addr() + 4u);
    u32 r1_1 = *gptr<u32>(arg0.addr() + 8u);
    arg0->word_11 = r1_1;
    arg0->byte_15 = 0xb;  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0032cc20
GUEST_EXPORT(0x0032cc20, d_0032cc20::f_0032cc20);

// f_0032cc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cc68 {

struct __attribute__((packed)) Object_0032cc68_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 byte_b;
    u8 byte_c;
    u32 word_d;
    u32 word_11;
    u8 byte_15;
};
GUEST_OFFSET(Object_0032cc68_0, byte_4, 0x4);
GUEST_OFFSET(Object_0032cc68_0, byte_5, 0x5);
GUEST_OFFSET(Object_0032cc68_0, byte_6, 0x6);
GUEST_OFFSET(Object_0032cc68_0, byte_7, 0x7);
GUEST_OFFSET(Object_0032cc68_0, byte_8, 0x8);
GUEST_OFFSET(Object_0032cc68_0, byte_9, 0x9);
GUEST_OFFSET(Object_0032cc68_0, byte_a, 0xa);
GUEST_OFFSET(Object_0032cc68_0, byte_b, 0xb);
GUEST_OFFSET(Object_0032cc68_0, byte_c, 0xc);
GUEST_OFFSET(Object_0032cc68_0, word_d, 0xd);
GUEST_OFFSET(Object_0032cc68_0, word_11, 0x11);
GUEST_OFFSET(Object_0032cc68_0, byte_15, 0x15);


void f_0032cc68(gptr<Object_0032cc68_0> arg0) {
    arg0->byte_4 = 0;
    arg0->byte_5 = 0;
    arg0->byte_6 = 0;
    arg0->byte_7 = 1;
    arg0->byte_8 = 1;
    arg0->byte_9 = 1;
    arg0->byte_a = 0;
    arg0->byte_b = 1;
    arg0->byte_c = 0xb;  // (from the original)
    arg0->word_d = *gptr<u32>(arg0.addr() + 4u);
    arg0->word_11 = *gptr<u32>(arg0.addr() + 8u);
    arg0->byte_15 = 0xb;  // (from the original)
}

}  // namespace d_0032cc68
GUEST_EXPORT(0x0032cc68, d_0032cc68::f_0032cc68);

// f_0032ccb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032ccb0 {

struct __attribute__((packed)) Object_0032ccb0_0 {
    u8 unknown_0[0xd];  // (not used here)
    u32 word_d;
    u32 word_11;
    u8 byte_15;
};
GUEST_OFFSET(Object_0032ccb0_0, word_d, 0xd);
GUEST_OFFSET(Object_0032ccb0_0, word_11, 0x11);
GUEST_OFFSET(Object_0032ccb0_0, byte_15, 0x15);

inline constexpr guest::Function<0x007795bc, u32(u32)> call_007795bc;

u32 f_0032ccb0(gptr<Object_0032ccb0_0> arg0) {
    call_007795bc(arg0.addr() + 4u);
    arg0->word_d = 0;
    arg0->word_11 = 0;
    arg0->byte_15 = 0;
    return arg0.addr();
}

}  // namespace d_0032ccb0
GUEST_EXPORT_FRAMED(0x0032ccb0, d_0032ccb0::f_0032ccb0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032cef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cef4 {

inline guest::global<u32, 0x009525d0> global_009525d0;
inline constexpr guest::Function<0x002fc900, u32(u32)> call_002fc900;
inline constexpr guest::Function<0x0030b6c4, u32(u32)> call_0030b6c4;
inline constexpr guest::Function<0x00565bec, u32(u32, u32, u32, u32)> call_00565bec;
inline constexpr guest::Function<0x007d0c84, u32(u32, u32)> call_007d0c84;

struct __attribute__((packed)) Frame_0032cef4 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0032cef4, word_0, 0x0);
GUEST_SIZE(Frame_0032cef4, 0x4);

void f_0032cef4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0032cef4> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r0_1 = call_00565bec(r0, r1, guest::cpu()->r[2], r3);
    *global_009525d0 = r0_1;
    u32 r0_2 = call_002fc900(r0_1);
    if (r0_2 == 0) {
        return;
    }
    u32 r0_3 = call_0030b6c4(r0_2);
    if (r0_3 == 0) {
        return;
    }
    frame->word_0 = *global_009525d0;
    call_007d0c84(4u, frame.at(0).addr());
}

}  // namespace d_0032cef4
GUEST_EXPORT_FRAMED(0x0032cef4, d_0032cef4::f_0032cef4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0032d638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d638 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;
inline constexpr guest::Function<0x00331a40, u32(u32, u32, u32, u32)> call_00331a40;

struct __attribute__((packed)) Frame_0032d638 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0032d638, word_0, 0x0);
GUEST_SIZE(Frame_0032d638, 0x14);

u32 f_0032d638(gptr<AudioObjFurnitureAudio> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0032d638> frame;  // the original's stack frame
    call_001e5894(frame.at(4).addr(), r1, r2, r3);
    frame->word_0 = r3;
    call_00331a40(arg0.addr() + 8u, r1, frame.at(4).addr(), r2);
    arg0->byte_5 = 1;
    return 1u;
}

}  // namespace d_0032d638
GUEST_EXPORT_FRAMED(0x0032d638, d_0032d638::f_0032d638, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0032d774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d774 {

inline constexpr guest::Function<0x00331c1c, u32(u32, u32, u32, u32)> call_00331c1c;

u32 f_0032d774(gptr<AudioObjFurnitureAudio> arg0) {
    u32 r0_1 = arg0->byte_5;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_00331c1c(arg0.addr() + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->byte_5 = 0;
    return 0u;
}

}  // namespace d_0032d774
GUEST_EXPORT_FRAMED(0x0032d774, d_0032d774::f_0032d774, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d7c8 {

inline constexpr u32 vtable_AudioObjFurnitureAudio = 0x008f56a8u;
inline constexpr guest::Function<0x00331c7c, u32(u32, u32, u32, u32)> call_00331c7c;

u32 f_0032d7c8(gptr<AudioObjFurnitureAudio> arg0) {
    arg0->byte_4 = 1;
    arg0->byte_5 = 0;
    arg0->word_0 = vtable_AudioObjFurnitureAudio;
    u32 r0_2 = call_00331c7c(arg0.addr() + 8u, 0x8f56a8u, 0u, guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 8u;
}

}  // namespace d_0032d7c8
GUEST_EXPORT_FRAMED(0x0032d7c8, d_0032d7c8::f_0032d7c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032d818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d818 {

inline constexpr u32 vtable_AudioObjFurnitureAudio = 0x008f56a8u;
inline constexpr guest::Function<0x00331d0c, u32(u32, u32, u32, u32)> call_00331d0c;

u32 f_0032d818(u32 r0) {
    *gptr<u32>(r0) = vtable_AudioObjFurnitureAudio;
    u32 r0_2 = call_00331d0c(r0 + 8u, 0x8f56a8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 8u;
}

}  // namespace d_0032d818
GUEST_EXPORT_FRAMED(0x0032d818, d_0032d818::f_0032d818, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032f240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f240 {

struct __attribute__((packed)) Object_0032f240_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0032f240_1, word_0, 0x0);
GUEST_OFFSET(Object_0032f240_1, word_4, 0x4);
GUEST_OFFSET(Object_0032f240_1, word_8, 0x8);
GUEST_OFFSET(Object_0032f240_1, word_c, 0xc);

struct __attribute__((packed)) Local_0032f240_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0032f240_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_0032f240_r0_1, word_4, 0x4);

inline guest::global<u8, 0x009503e0> global_009503e0;

u32 f_0032f240(u32 r0_unused, gptr<Object_0032f240_1> arg1, float S0) {
    float S1_1 = 0.0f;
    arg1->word_0 = 1;
    arg1->word_4 = 0xf006d;  // (from the original)
    arg1->word_8 = 0xbf0000;  // (from the original)
    arg1->word_c = 0xf004d;  // (from the original)
    gptr<Local_0032f240_r0_1> r0_1 = gptr<Local_0032f240_r0_1>(arg1.addr() + 0x10u);  // (from the original)
    float S2_1 = -1.0f;
    if (*global_009503e0 != 0) {
        S0 = S2_1 * S0 * 128.0f / 16777215.0f;
        S1_1 = S1_1 - S0;
    }
    u32 r1_1 = std::bit_cast<u32>(S1_1);
    u32 r2_1 = r1_1 & ~0x80000000u;  // (from the original)
    if (r2_1 != 0) {
        r2_1 = (r1_1 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
        if (s32(r2_1) < 0) {
            u32 r1_2 = r1_1 >> 0x1f << 0x17;  // (from the original)
            r0_1->word_0 = r1_2;
            r0_1->word_4 = 0xf004e;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1_1;
            return r0_1.addr() + 8;
        }
    }
    u32 r1_3 = r1_1 >> 7u & 0xffffu | r2_1 << 0x10 | r1_1 >> 0x1f << 0x17;  // (from the original)
    r0_1->word_0 = r1_3;
    r0_1->word_4 = 0xf004e;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1_1;
    return r0_1.addr() + 8;
}

}  // namespace d_0032f240
GUEST_EXPORT(0x0032f240, d_0032f240::f_0032f240);

// f_0032f2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f2f4 {

inline constexpr guest::Function<0x0020714c, u32(u32, u32, u32, u32)> call_0020714c;
inline constexpr guest::Function<0x004ee364, u32(u32, u32)> call_004ee364;
inline constexpr guest::Function<0x0054f994, u32(u32, u32)> call_0054f994;

u32 f_0032f2f4(u32 r0, u32 r1) {
    u32 r0_1 = call_0020714c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_0020714c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<s8>(r0_2 + 0x22u);  // (from the original)
        if (r0_1 != 0) {
            return 2u;
        }
    }
    u32 r0_3 = call_0020714c(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_4 = *gptr<u32>(r0_3 + 4u);
    u32 r1_2 = *gptr<u8>(r0 + 0x40u);  // (from the original)
    u32 r0_5 = call_0054f994(r0_4, r1_2);
    if (r0_5 == 0) {
        u32 r0_6 = call_0020714c(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_4 = *gptr<u8>(r0 + 0x40u);  // (from the original)
        if (*gptr<u32>(*gptr<u32>(r0_6 + 4u) + (r1_4 << 2) + 0x42cu) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1_4;
            return 2u;
        }
    }
    call_004ee364(r0 + 0x1cu, 0u);  // (from the original)
    return 2u;
}

}  // namespace d_0032f2f4
GUEST_EXPORT_FRAMED(0x0032f2f4, d_0032f2f4::f_0032f2f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032f808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f808 {

inline constexpr u32 vtable_BsSeadParticleDrawBase = 0x008f5910u;
inline constexpr guest::Function<0x004f0d90, u32(u32)> call_004f0d90;
inline constexpr guest::Function<0x00521a8c, u32(u32)> call_00521a8c;
inline constexpr guest::Function<0x005673c8, u32(u32)> call_005673c8;

u32 f_0032f808(gptr<BsSeadParticleDrawBase> arg0) {
    call_00521a8c(arg0.addr());
    arg0->word_0 = vtable_BsSeadParticleDrawBase;
    call_005673c8(arg0.addr() + 0x14u);  // (from the original)
    call_004f0d90(arg0.addr() + 0x1cu);  // (from the original)
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->byte_40 = 0;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    return arg0.addr();
}

}  // namespace d_0032f808
GUEST_EXPORT_FRAMED(0x0032f808, d_0032f808::f_0032f808, 0x4010);  // pushes {r4, lr} first, as the original

// f_0032f884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f884 {

inline constexpr u32 vtable_BsSeadParticleDrawBase = 0x008f5910u;
inline constexpr guest::Function<0x00317dec, u32(u32)> call_00317dec;
inline constexpr guest::Function<0x004f0dd0, u32(u32, u32, u32, u32)> call_004f0dd0;
inline constexpr guest::Function<0x00521ae0, u32(u32, u32)> call_00521ae0;

u32 f_0032f884(gptr<BsSeadParticleDrawBase> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_BsSeadParticleDrawBase;
    u32 r0_1 = arg0.addr() + 0x1cu;  // (from the original)
    call_004f0dd0(r0_1, 0x8f5910u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00317dec(r0_1 - 8u);
    frame.release();
    return call_00521ae0(r0_1 - 0x1cu, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0032f884
GUEST_EXPORT(0x0032f884, d_0032f884::f_0032f884);

// f_0032fd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032fd1c {

inline constexpr u32 vtable_ItemMultiDragIconGroup = 0x008f59acu;
inline constexpr u32 vtable_ItemMultiDragIconGroup_at_c = 0x008f59bcu;
inline constexpr guest::Function<0x0022c53c, u32(u32)> call_0022c53c;

u32 f_0032fd1c(gptr<ItemMultiDragIconGroup> arg0) {
    call_0022c53c(arg0.addr());
    arg0->word_0 = vtable_ItemMultiDragIconGroup;
    arg0->word_c = vtable_ItemMultiDragIconGroup_at_c;
    return arg0.addr();
}

}  // namespace d_0032fd1c
GUEST_EXPORT_FRAMED(0x0032fd1c, d_0032fd1c::f_0032fd1c, 0x4010);  // pushes {r4, lr} first, as the original
