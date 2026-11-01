// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00520bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520bec {

inline guest::global<u32, 0x0097528c> global_0097528c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00520f54, u32(u32, u32, u32, u32)> call_00520f54;  // (from the original)
inline constexpr guest::Function<0x00521bec, u32(u32, u32, u32, u32)> call_00521bec;  // (from the original)

u32 f_00520bec(u32 r0) {
    u32 r2_9 = 0;
    u32 r0_1 = call_00301d0c(r0, 0x521c2cu, 0x14u, 0x400u);  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x5000u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 0x4000u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    u32 r0_7 = call_00521bec(r0_5 + 0x4000u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = call_00520f54(r0_7 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = call_00520f54(r0_9 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_13 = call_00520f54(r0_11 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_15 = call_00520f54(r0_13 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = call_00301d0c(r0_15 + 8u, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    u32 r0_19 = call_00520f54(r0_17 + 0x4000u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = r0_19 - 0x11024u;  // (from the original)
    u32 r3 = 0u;
    *gptr<u8>(0x1142cu + r0) = 1;  // (from the original)
    u32 r1 = r3;
    *gptr<u8>((0x1142cu | u32(s32(0x1142cu) >> 0x10)) + r0) = u8(r3);  // (from the original)
    do {
        if (r1 >= 0x400u) {  // (from the original)
            u32 r2_8 = r1 & 0x3ffu;  // (from the original)
            if (s32(r2_8) < 0x200) {  // (from the original)
                r2_9 = r2_8 + 0x200u;  // (from the original)
                goto L_520cb4;
            }
        }
        r2_9 = r1 & 0x3ffu;  // (from the original)
L_520cb4:;
        r1 += 1u;
        *gptr<u8>(r2_9 + r0 + 0x1102cu) = u8(r3);  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0x400);  // (from the original)
    *global_0097528c = r0;
    guest::cpu()->r[1] = 0x97528cu;  // (from the original)
    return r0;
}

}  // namespace d_00520bec
GUEST_EXPORT_FRAMED(0x00520bec, d_00520bec::f_00520bec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00520ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520ce8 {

inline guest::global<u32, 0x00975294> global_00975294;  // (from the original)
inline guest::global<u32, 0x0097529c> global_0097529c;  // (from the original)

u32 f_00520ce8(u32 r0) {
    u32 r1_1 = *global_0097529c;
    if (s32(r1_1) <= 0 || r0 >= r1_1) {
        return 0u;
    }
    return *global_00975294 + (r0 + (r0 << 1) << 2);
}

}  // namespace d_00520ce8
GUEST_EXPORT(0x00520ce8, d_00520ce8::f_00520ce8);

// f_00520d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d1c {

inline guest::global<u32, 0x00975298> global_00975298;  // (from the original)

u32 f_00520d1c(u32 r0) {
    u32 r1_1 = *global_00975298;
    u32 r0_1 = *gptr<u32>(r1_1 + (r0 << 3));
    return guest::call_address<u32>(r0_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00520d1c
GUEST_EXPORT(0x00520d1c, d_00520d1c::f_00520d1c);

// f_00520d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d30 {

inline guest::global<u32, 0x00975298> global_00975298;  // (from the original)

void f_00520d30(u32 r0, u32 r1) {
    u32 r2_1 = *gptr<u32>(*global_00975298 + (r0 << 3) + 4u);
    guest::call_address<u32>(r2_1, r1, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00520d30
GUEST_EXPORT(0x00520d30, d_00520d30::f_00520d30);

// f_00520d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d5c {

struct __attribute__((packed)) Object_00520d5c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00520d5c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00520d5c_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_00520d5c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00520d5c_1, word_4, 0x4);  // (from the original)


void f_00520d5c(gptr<Object_00520d5c_0> arg0, gptr<Object_00520d5c_1> arg1) {
    if (arg1.addr() == 0) {
        return;
    }
    u32 r2_1 = arg0->word_0;
    if (r2_1 == 0) {
        arg0->word_4 = arg1.addr();
    } else {
        *gptr<u32>(r2_1) = arg1.addr();
        arg1->word_4 = arg0->word_0;
    }
    arg0->word_0 = arg1.addr();
}

}  // namespace d_00520d5c
GUEST_EXPORT(0x00520d5c, d_00520d5c::f_00520d5c);

// f_00520df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520df4 {

struct __attribute__((packed)) Object_00520df4_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00520df4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00520df4_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_00520df4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520df4_1, word_0, 0x0);  // (from the original)


void f_00520df4(gptr<Object_00520df4_0> arg0, gptr<Object_00520df4_1> arg1) {
    if (arg1.addr() == 0) {
        return;
    }
    u32 r2_1 = arg0->word_4;
    if (r2_1 == 0) {
        arg0->word_0 = arg1.addr();
    } else {
        *gptr<u32>(r2_1 + 4u) = arg1.addr();
        arg1->word_0 = arg0->word_4;
    }
    arg0->word_4 = arg1.addr();
}

}  // namespace d_00520df4
GUEST_EXPORT(0x00520df4, d_00520df4::f_00520df4);

// f_00520e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520e24 {

struct __attribute__((packed)) Object_00520e24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520e24_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00520e24_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_00520e24_1, half_c, 0xc);  // (from the original)


void f_00520e24(gptr<Object_00520e24_0> arg0, gptr<Object_00520e24_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5 = r1;
    u32 r4 = r0;
    u32 r6 = arg0->word_0;
    if (r1 != 0) {
        if (r6 != 0) {
            if (*gptr<u16>(r6 + 0xcu) <= arg1->half_c) {  // (from the original)
                goto L_520e98;
            }
            r0_1 = arg0->word_0;
            if (r0_1 != 0) {
                goto L_520f34;
            }
            goto L_520f44;
        }
        r0_2 = *gptr<u32>(r4 + 4u);
        if (r0_2 == 0) {
            *gptr<u32>(r4) = r5;
        } else {
            *gptr<u32>(r0_2 + 4u) = r5;
            *gptr<u32>(r5) = *gptr<u32>(r4 + 4u);
        }
L_520e84:;
        *gptr<u32>(r4 + 4u) = r5;
        return;
L_520e98:;
        if (*gptr<u32>(r6 + 4u) != 0 && *gptr<u16>(*gptr<u32>(r6 + 4u) + 0xcu) <= *gptr<u16>(r5 + 0xcu)) {  // (from the original)
            r6 = *gptr<u32>(r6 + 4u);
            guest::preempt();
            goto L_520e98;
        }
        if (r6 != 0) {
            if (r5 == 0) {
                return;
            }
            *gptr<u32>(r5 + 4u) = *gptr<u32>(r6 + 4u);
            *gptr<u32>(r5) = r6;
            *gptr<u32>(r6 + 4u) = r5;
            u32 r0_3 = *gptr<u32>(r5 + 4u);
            if (r0_3 != 0) {
                *gptr<u32>(r0_3) = r5;
                return;
            }
            guest::preempt();
            goto L_520e84;
        }
        if (r5 == 0) {
            return;
        }
        r0_1 = *gptr<u32>(r4);
        if (r0_1 == 0) {
            goto L_520f44;
        }
L_520f34:;
        *gptr<u32>(r0_1) = r5;
        *gptr<u32>(r5 + 4u) = *gptr<u32>(r4);
        *gptr<u32>(r4) = r5;
        return;
L_520f44:;
        *gptr<u32>(r4 + 4u) = r5;
        *gptr<u32>(r4) = r5;
        return;
    }
}

}  // namespace d_00520e24
GUEST_EXPORT_FRAMED(0x00520e24, d_00520e24::f_00520e24, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00521000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521000 {

struct __attribute__((packed)) Local_00521000_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521000_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521000_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521000_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521000_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521000_ea_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x008a3af8> global_008a3af8;  // (from the original)
inline guest::global<u32, 0x008a3afc> global_008a3afc;  // (from the original)
inline guest::global<u32, 0x008a3b00> global_008a3b00;  // (from the original)
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521000() {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00521000_ea_1> ea_1 = gptr<Local_00521000_ea_1>(0x8a3b08u);  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r3_1 = ea_1->word_4;
    gptr<Local_00521000_ea_2> ea_2 = gptr<Local_00521000_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    *frame.at<u32>(0) = *gptr<u32>(0x8a3b04u);  // (from the original)
    call_00520f7c(guest::cpu()->r[0], *global_008a3af8, *global_008a3afc, *global_008a3b00);
    return guest::cpu()->r[0];
}

}  // namespace d_00521000
GUEST_EXPORT_FRAMED(0x00521000, d_00521000::f_00521000, 0x4000);  // pushes {lr} first, as the original

// f_00521030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521030 {

struct __attribute__((packed)) Local_00521030_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521030_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521030_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521030_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521030_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521030_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521030_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00521030_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521030_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00521030_ea_4, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008a3b1c> global_008a3b1c;  // (from the original)
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521030() {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00521030_ea_1> ea_1 = gptr<Local_00521030_ea_1>(0x8a3b20u);  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r3_1 = ea_1->word_4;
    gptr<Local_00521030_ea_2> ea_2 = gptr<Local_00521030_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    *frame.at<u32>(0) = *global_008a3b1c;
    gptr<Local_00521030_ea_4> ea_4 = gptr<Local_00521030_ea_4>(0x8a3b10u);  // (from the original)
    call_00520f7c(guest::cpu()->r[0], ea_4->word_0, ea_4->word_4, ea_4->word_8);
    return guest::cpu()->r[0];
}

}  // namespace d_00521030
GUEST_EXPORT_FRAMED(0x00521030, d_00521030::f_00521030, 0x4000);  // pushes {lr} first, as the original

// f_00521070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521070 {

struct __attribute__((packed)) Local_00521070_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521070_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521070_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521070_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521070_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521070_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521070_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00521070_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521070_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00521070_ea_4, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008a3b34> global_008a3b34;  // (from the original)
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

void f_00521070() {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00521070_ea_1> ea_1 = gptr<Local_00521070_ea_1>(0x8a3b38u);  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r3_1 = ea_1->word_4;
    gptr<Local_00521070_ea_2> ea_2 = gptr<Local_00521070_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    *frame.at<u32>(0) = *global_008a3b34;
    gptr<Local_00521070_ea_4> ea_4 = gptr<Local_00521070_ea_4>(0x8a3b28u);  // (from the original)
    call_00520f7c(guest::cpu()->r[0], ea_4->word_0, ea_4->word_4, ea_4->word_8);
}

}  // namespace d_00521070
GUEST_EXPORT_FRAMED(0x00521070, d_00521070::f_00521070, 0x4000);  // pushes {lr} first, as the original

// f_005210a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005210a8 {

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x005204c8, u32(u32, u32, u32, u32)> call_005204c8;  // (from the original)

u32 f_005210a8(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0051fe30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_005204c8(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005210a8
GUEST_EXPORT(0x005210a8, d_005210a8::f_005210a8);

// f_00521a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a48 {

struct __attribute__((packed)) Local_00521a48_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521a48_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521a48_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521a48_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00521a48_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521a48_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00521a48_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00521a48_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00521a48_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00521a48_ea_4, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x008a3b4c> global_008a3b4c;  // (from the original)
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

void f_00521a48() {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00521a48_ea_1> ea_1 = gptr<Local_00521a48_ea_1>(0x8a3b50u);  // (from the original)
    u32 r2_1 = ea_1->word_0;
    u32 r3_1 = ea_1->word_4;
    gptr<Local_00521a48_ea_2> ea_2 = gptr<Local_00521a48_ea_2>(frame.at(4).addr());
    ea_2->word_0 = r2_1;
    ea_2->word_4 = r3_1;
    *frame.at<u32>(0) = *global_008a3b4c;
    gptr<Local_00521a48_ea_4> ea_4 = gptr<Local_00521a48_ea_4>(0x8a3b40u);  // (from the original)
    call_00520f7c(guest::cpu()->r[0], ea_4->word_0, ea_4->word_4, ea_4->word_8);
}

}  // namespace d_00521a48
GUEST_EXPORT_FRAMED(0x00521a48, d_00521a48::f_00521a48, 0x4000);  // pushes {lr} first, as the original

// f_00521a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a8c {

inline constexpr guest::Function<0x0051fe30, u32(u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00747944, u32(u32, u32)> call_00747944;  // (from the original)

u32 f_00521a8c(gptr<oml__framework__Process> arg0) {
    arg0->word_8 = 0;
    arg0->word_0 = 0x9036c4;  // (from the original)
    arg0->word_4 = ~0u;
    arg0->half_c = 0;
    arg0->byte_e = 0;
    arg0->byte_f = 0;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    arg0->byte_12 = 0;
    u32 r0_1 = call_0051fe30(0u, 0x9036c4u);  // (from the original)
    u32 r0_2 = call_00747944(r0_1, guest::cpu()->r[1]);
    arg0->word_4 = r0_2;
    return arg0.addr();
}

}  // namespace d_00521a8c
GUEST_EXPORT_FRAMED(0x00521a8c, d_00521a8c::f_00521a8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ae4 {

struct __attribute__((packed)) Object_00521ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00521ae4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00521ae4_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_00521ae4_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00521ae4_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00521ae4_r0_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00521ae4_r0_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00521ae4_r2_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_00521ae4_r2_1, word_10, 0x10);  // (from the original)


void f_00521ae4(u32 r0, gptr<Object_00521ae4_1> arg1, gptr<Object_00521ae4_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    if (r1 == 0) {
        return;
    }
    if (r2 != 0) {
        arg1->word_4 = r2;
        gptr<Local_00521ae4_r0_1> r0_1 = gptr<Local_00521ae4_r0_1>(arg2->word_8);
        if (r0_1.addr() == 0) {
            arg2->word_8 = r1;
            return;
        }
        r2 = r0_1->word_10;
        if (r2 == 0) {
            r0_1->word_10 = r1;
            arg1->word_c = r0_1.addr();
            return;
        }
        do {
            r0_2 = r2;
            r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
            guest::preempt();
        } while (r2 != 0);
        *gptr<u32>(r0_2 + 0x10u) = r1;  // (from the original)
        arg1->word_c = r0_2;
        return;
    }
    gptr<Local_00521ae4_r2_1> r2_1 = gptr<Local_00521ae4_r2_1>(*gptr<u32>(r0));
    if (r2_1.addr() == 0) {
        *gptr<u32>(r0) = r1;
        return;
    }
    r0 = r2_1->word_10;
    if (r0 == 0) {
        r2_1->word_10 = r1;
        arg1->word_c = r2_1.addr();
        return;
    }
    do {
        r2_2 = r0;
        r0 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    *gptr<u32>(r2_2 + 0x10u) = r1;  // (from the original)
    arg1->word_c = r2_2;
}

}  // namespace d_00521ae4
GUEST_EXPORT(0x00521ae4, d_00521ae4::f_00521ae4);

// f_00521ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ddc {

struct __attribute__((packed)) Local_00521ddc_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521ddc_r0_3, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_00521ddc_r0_3, word_d8, 0xd8);  // (from the original)

inline guest::global<u32, 0x00521e64> global_00521e64;  // (from the original)
inline guest::global<u32, 0x00953af4> global_00953af4;  // (from the original)
inline guest::global<u32, 0x00953b04> global_00953b04;  // (from the original)
inline guest::global<u32, 0x00953b08> global_00953b08;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521ddc(u32 r0, u32 r1, float S0) {
    u32 r0_1 = call_005ce6dc(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        if ((*global_00953af4 & 1u) != 0) {
            return 0x953b04u;  // (from the original)
        }
        u32 r0_2 = call_002fe7dc(0x953af4u, r1_1);  // (from the original)
        if (r0_2 == 0) {
            return 0x953b04u;  // (from the original)
        }
        float S0_3 = std::bit_cast<float>(*global_00521e64);
        *global_00953b04 = std::bit_cast<u32>(S0_3);
        *global_00953b08 = std::bit_cast<u32>(S0_3);
        guest::cpu()->s[0] = S0_3;
        return 0x953b04u;  // (from the original)
    }
    gptr<Local_00521ddc_r0_3> r0_3 = gptr<Local_00521ddc_r0_3>(*global_009752d4);
    u32 r1_3 = r0_3->word_d0;
    u32 r0_4 = r1_3 >= 0u && r1_3 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u;
    u32 r1_4 = *gptr<u32>(r0_4 + 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_1;
    return (r1_4 & 1u) == 0 ? 0x9752c4u : r0_4 + 0x114u;  // (from the original)
}

}  // namespace d_00521ddc
GUEST_EXPORT_FRAMED(0x00521ddc, d_00521ddc::f_00521ddc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521e74 {

struct __attribute__((packed)) Local_00521e74_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521e74_r0_3, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_00521e74_r0_3, word_d8, 0xd8);  // (from the original)

inline guest::global<u32, 0x00521eec> global_00521eec;  // (from the original)
inline guest::global<u32, 0x00953af0> global_00953af0;  // (from the original)
inline guest::global<u32, 0x00953afc> global_00953afc;  // (from the original)
inline guest::global<u32, 0x00953b00> global_00953b00;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521e74(u32 r0, u32 r1, float S0) {
    u32 r0_1 = call_005ce6dc(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        if ((*global_00953af0 & 1u) != 0) {
            return 0x953afcu;  // (from the original)
        }
        u32 r0_2 = call_002fe7dc(0x953af0u, r1_1);  // (from the original)
        if (r0_2 == 0) {
            return 0x953afcu;  // (from the original)
        }
        float S0_3 = std::bit_cast<float>(*global_00521eec);
        *global_00953afc = std::bit_cast<u32>(S0_3);
        *global_00953b00 = std::bit_cast<u32>(S0_3);
        guest::cpu()->s[0] = S0_3;
        return 0x953afcu;  // (from the original)
    }
    gptr<Local_00521e74_r0_3> r0_3 = gptr<Local_00521e74_r0_3>(*global_009752d4);
    u32 r1_3 = r0_3->word_d0;
    u32 r0_4 = (r1_3 >= 0u && r1_3 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u) + 0x11cu;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    return r0_4;
}

}  // namespace d_00521e74
GUEST_EXPORT_FRAMED(0x00521e74, d_00521e74::f_00521e74, 0x4010);  // pushes {r4, lr} first, as the original

// f_00521ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ef8 {

struct __attribute__((packed)) Local_00521ef8_r0_3 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u8 unknown_d4[0x4];  // (not used here)
    u32 word_d8;
};
GUEST_OFFSET(Local_00521ef8_r0_3, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Local_00521ef8_r0_3, word_d8, 0xd8);  // (from the original)

inline guest::global<u32, 0x00953af8> global_00953af8;  // (from the original)
inline guest::global<u32, 0x00953b0c> global_00953b0c;  // (from the original)
inline guest::global<u32, 0x00953b10> global_00953b10;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32)> call_005ce6dc;  // (from the original)

u32 f_00521ef8(u32 r0) {
    u32 r0_1 = call_005ce6dc(r0);
    if (r0_1 != 0) {
        if ((*global_00953af8 & 1u) != 0) {
            return 0x953b0cu;  // (from the original)
        }
        u32 r0_2 = call_002fe7dc(0x953af8u);  // (from the original)
        if (r0_2 == 0) {
            return 0x953b0cu;  // (from the original)
        }
        *global_00953b0c = 0x80000000;  // (from the original)
        *global_00953b10 = 0x80000000;  // (from the original)
        return 0x953b0cu;  // (from the original)
    }
    gptr<Local_00521ef8_r0_3> r0_3 = gptr<Local_00521ef8_r0_3>(*global_009752d4);
    u32 r1_1 = r0_3->word_d0;
    u32 r0_4 = r1_1 >= 0u && r1_1 != 0 ? *gptr<u32>(r0_3->word_d8) : 0u;
    return (*gptr<u32>(r0_4 + 0x10u) & 1u) == 0 ? 0x9752ccu : r0_4 + 0x14u;  // (from the original)
}

}  // namespace d_00521ef8
GUEST_EXPORT_FRAMED(0x00521ef8, d_00521ef8::f_00521ef8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00522168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522168 {

inline constexpr guest::Function<0x005221d8, u32(u32, u32, u32, u32)> call_005221d8;  // (from the original)

u32 f_00522168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_1 = call_005221d8(r0, r1, r2, r3);
    u32 r0_2 = call_005221d8(r0, r1 + 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (s32(r0_2) >= 0) {
        r1_2 = r0_2 - 1u;
    } else {
        u32 r0_3 = call_005221d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = s32(r0_3) >= 0 ? *gptr<u32>(*gptr<u32>(r0 + 8u) + 8u) : ~0u;
    }
    if (r0_1 + 1u == 0) {
        r0_4 = ~0u;
    } else {
        r0_4 = r1_2 - r0_1 + 1u;
        if (*gptr<u32>(*gptr<u32>(r0 + 8u) + 8u) == r1_2) {
            r0_4 -= 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00522168
GUEST_EXPORT_FRAMED(0x00522168, d_00522168::f_00522168, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005221d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005221d8 {

struct __attribute__((packed)) Object_005221d8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005221d8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005221d8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005221d8_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005221d8(gptr<Object_005221d8_0> arg0, u32 r1) {
    u32 r0_1 = 0;
    u32 r4_1 = r1;
    if (s32(r1) >= 0) {
        r1 = arg0->word_4 - 1u;
        if (s32(r1) >= s32(r4_1)) {
            if (s32(r4_1) >= s32(arg0->word_10)) {
                call_005224e8(arg0.addr(), r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
            }
            r1 = arg0->word_c;
            r0_1 = *gptr<u16>(r1 + (r4_1 << 1));
            if (r4_1 == 0 || s32(r0_1) > 0) {
                guest::cpu()->r[1] = r1;
                return r0_1;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_005221d8
GUEST_EXPORT_FRAMED(0x005221d8, d_005221d8::f_005221d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005224bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005224bc {

struct __attribute__((packed)) Object_005224bc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005224bc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005224bc_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005224bc(gptr<Object_005224bc_0> arg0, u32 r1) {
    if (s32(arg0->word_10) <= s32(r1)) {
        call_005224e8(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return *gptr<u16>(arg0->word_c + (r1 << 1));
}

}  // namespace d_005224bc
GUEST_EXPORT_FRAMED(0x005224bc, d_005224bc::f_005224bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00522ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522ae0 {

struct __attribute__((packed)) Local_00522ae0_ea_3 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_00522ae0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00522ae0_ea_3, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x0052296c, u32(u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00522ae0(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_005234d8(r0, 1u, r2, r3);
    u32 r0_1 = call_0052296c(r0, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r1 != 0) {
        r1_1 = *gptr<u32>(r0 + 0x14u);  // (from the original)
        *gptr<u8>(r0 + 0x20u) = 0;  // (from the original)
        gptr<Local_00522ae0_ea_3> ea_3 = gptr<Local_00522ae0_ea_3>(r0 + 0x1cu);  // (from the original)
        ea_3->word_0 = r1_1;
        ea_3->word_74 = ~0u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00522ae0
GUEST_EXPORT_FRAMED(0x00522ae0, d_00522ae0::f_00522ae0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00523020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523020 {

struct __attribute__((packed)) Object_00523020_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00523020_0, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_00523020_ea_4 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_00523020_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00523020_ea_4, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x0052296c, u32(u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00523020(gptr<Object_00523020_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r5_1 = r1;
    u32 r7_1 = ~0u;
    if (r2 != 0) {
        arg0->word_18 = r7_1;
    }
    call_005234d8(arg0.addr(), 1u, r2, r3);
    call_005234d8(arg0.addr(), 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0052296c(arg0.addr(), 0u);
    u32 r0_1 = *gptr<u32>(arg0.addr() + 8u);
    if (s32(r5_1) < 0) {
        r5_1 = 0u;
    }
    if (s32(r0_1) < s32(r5_1)) {
        r5_1 = r0_1;
    }
    u32 r0_2 = r3 == 0;
    *gptr<u32>(arg0.addr() + 0x14u) = r5_1;  // (from the original)
    *gptr<u8>(arg0.addr() + 0x20u) = u8(r0_2);  // (from the original)
    if (r3 != 0) {
        gptr<Local_00523020_ea_4> ea_4 = gptr<Local_00523020_ea_4>(arg0.addr() + 0x1cu);  // (from the original)
        ea_4->word_0 = r5_1;
        ea_4->word_74 = r7_1;
    }
    return r0_2;
}

}  // namespace d_00523020
GUEST_EXPORT_FRAMED(0x00523020, d_00523020::f_00523020, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005235e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005235e8 {

struct __attribute__((packed)) Object_005235e8_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_005235e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005235e8_0, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_005235e8_ea_3 {
    u32 word_0;
    u8 unknown_4[0x70];  // (not used here)
    u32 word_74;
};
GUEST_OFFSET(Local_005235e8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005235e8_ea_3, word_74, 0x74);  // (from the original)

inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> call_005230d4;  // (from the original)

void f_005235e8(gptr<Object_005235e8_0> arg0) {
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = arg0->word_1c;
    u32 r0_1 = arg0->word_14;
    if (s32(r1_1) <= s32(r0_1)) {
        r2_1 = r0_1;
        r3_1 = r1_1;
    } else {
        r2_1 = r1_1;
        r3_1 = r0_1;
    }
    u32 r2_2 = r2_1 - r3_1;
    if (s32(r2_2) > 0) {
        if (r1_1 != r0_1 && s32(r1_1) >= s32(r0_1)) {
            r2_2 = r1_1;
        }
        if (s32(r1_1) <= s32(r0_1)) {
            r3_2 = r1_1;
            r2_2 = r0_1;
        } else {
            r3_2 = r0_1;
            r1_1 = r0_1;
        }
        call_005230d4(arg0.addr(), r1_1, r2_2 - r3_2, r3_2);
    }
    u32 r0_2 = *gptr<u32>(arg0.addr() + 0x14u);  // (from the original)
    *gptr<u8>(arg0.addr() + 0x20u) = 0;  // (from the original)
    gptr<Local_005235e8_ea_3> ea_3 = gptr<Local_005235e8_ea_3>(arg0.addr() + 0x1cu);  // (from the original)
    ea_3->word_0 = r0_2;
    u32 r1_2 = ~0u;
    ea_3->word_74 = r1_2;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_005235e8
GUEST_EXPORT_FRAMED(0x005235e8, d_005235e8::f_005235e8, 0x4010);  // pushes {r4, lr} first, as the original

// f_00523658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523658 {

struct __attribute__((packed)) Object_00523658_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x6a];  // (not used here)
    u8 byte_96;
};
GUEST_OFFSET(Object_00523658_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00523658_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00523658_0, byte_96, 0x96);  // (from the original)

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32)> call_0010181c;  // (from the original)
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32)> call_00522074;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

void f_00523658(gptr<Object_00523658_0> arg0, u32 r1, u32 r2) {
    arg0->word_18 = ~0u;
    u32 r5_1 = r2;
    call_005234d8(arg0.addr(), 1u, r2, guest::cpu()->r[3]);
    if (r1 != 0) {
        if (s32(r5_1) < 0) {
            u32 r0_1 = call_00100834(r1, guest::cpu()->r[1], guest::cpu()->r[2]);
            r5_1 = r0_1;
        }
        u32 r0_2 = arg0->word_c;
        if (s32(r0_2) < s32(r5_1)) {
            r5_1 = r0_2;
        }
        call_0010181c(arg0->word_10, r1, r5_1);
        *gptr<u16>(arg0->word_10 + (r5_1 << 1)) = 0;
        arg0->word_8 = r5_1;
    } else {
        *gptr<u16>(arg0->word_10) = 0;
        arg0->word_8 = 0;
    }
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_14 = 0;
    arg0->word_1c = 0;
    u32 r5_2 = arg0->word_4;
    u32 r0_4 = call_00522074(r5_2, 0u, 0u);
    *gptr<u32>(r5_2 + 0x10u) = r0_4;  // (from the original)
    arg0->byte_96 = 1;
}

}  // namespace d_00523658
GUEST_EXPORT_FRAMED(0x00523658, d_00523658::f_00523658, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0052370c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052370c {

struct __attribute__((packed)) Object_0052370c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u8 byte_20;
    u8 unknown_21[0x73];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(Object_0052370c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x004dac10, u32(u32, u32, u32, u32)> call_004dac10;  // (from the original)
inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32)> call_005230d4;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)
inline constexpr guest::Function<0x005235e8, u32(u32, u32, u32)> call_005235e8;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_0052370c(gptr<Object_0052370c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r7_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r4 = r0;
    u32 r5_1 = r1;
    u32 r8 = 0x10003dbu;  // (from the original)
    if (arg0->byte_94 != 1u || arg0->byte_20 != 0) {
        r7_1 = ~0u;
        arg0->word_18 = r7_1;
        call_005234d8(r4, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (*gptr<u8>(r4 + 0x20u) == 0) {  // (from the original)
            goto L_5237ac;
        }
        u32 r0_1 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
        u32 r1_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        if (r0_1 != r1_1 && s32(r0_1) >= s32(r1_1)) {
            r2 = r0_1;
        }
        if (s32(r0_1) <= s32(r1_1)) {
            r2 = r1_1;
        } else {
            r0_1 = r1_1;
        }
        if (s32(r2 - r0_1) <= 0) {
            goto L_5237ac;
        }
        call_005235e8(r4, r1_1, r2);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        goto L_5237e4;
    }
    if (r1 != 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_52378c:;
    r0_2 = *gptr<u32>(r4 + 0x9cu);  // (from the original)
    call_004dac10(r0_2, r1, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    call_0058d3b4(r8, r1_3, r2);
    r1 = guest::cpu()->r[1];
    return 0u;
L_5237ac:;
    r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (s32(r1) > 0) {
        call_005230d4(r4, r1 - 1u, 1u);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        goto L_5237e4;
    }
    *gptr<u8>(r4 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = r1;  // (from the original)
    *gptr<u32>(r4 + 0x90u) = r7_1;  // (from the original)
    if (r5_1 == 0) {
        guest::preempt();
        goto L_52378c;
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_5237e4:;
    *gptr<u32>(r4 + 0x1cu) = *gptr<u32>(r4 + 0x14u);  // (from the original)
    *gptr<u32>(r4 + 0x90u) = r7_1;  // (from the original)
    *gptr<u8>(r4 + 0x20u) = 0;  // (from the original)
    call_004dac10(*gptr<u32>(r4 + 0x9cu), r1_2, r2_1, guest::cpu()->r[3]);  // (from the original)
    call_0058d3b4(0x10003dau, guest::cpu()->r[1], r2_1);  // (from the original)
    *gptr<u8>(r4 + 0x95u) = 0;  // (from the original)
    return 1u;
}

}  // namespace d_0052370c
GUEST_EXPORT_FRAMED(0x0052370c, d_0052370c::f_0052370c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0052389c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052389c {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)

u32 f_0052389c() {
    u32 r0_1 = *global_0095e0fc;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_0052389c
GUEST_EXPORT(0x0052389c, d_0052389c::f_0052389c);

// f_005238b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005238b4 {

inline guest::global<u32, 0x00ad6158> global_00ad6158;  // (from the original)
inline guest::global<u16, 0x00ad6164> global_00ad6164;  // (from the original)

u32 f_005238b4(u32 r0) {
    if ((*global_00ad6158 & 1u) == 0) {
        guest::cpu()->r[1] = 0xad6140u;  // (from the original)
        return 0u;
    }
    u32 r1_1 = *global_00ad6164;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r1_2 = r0 - 0x30u;  // (from the original)
    u32 zf_1 = r1_2 == 9u;
    u32 cf_1 = r1_2 >= 9u;
    if (cf_1 && !zf_1) {
        r1_2 = r0 - 0xff10u;  // (from the original)
        zf_1 = r1_2 == 9u;
        cf_1 = r1_2 >= 9u;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r1_3 = r0 - 0x2070u;  // (from the original)
    u32 zf_2 = r1_3 == 9u;
    u32 cf_2 = r1_3 >= 9u;
    if (cf_2 && !zf_2) {
        r1_3 = r0 - 0x2080u;  // (from the original)
        zf_2 = r1_3 == 9u;
        cf_2 = r1_3 >= 9u;
    }
    if (!cf_2 || zf_2) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    u32 r1_4 = r0 - 0x2160u;  // (from the original)
    u32 zf_3 = r1_4 == 0xbu;  // (from the original)
    u32 cf_3 = r1_4 >= 0xbu;  // (from the original)
    if (cf_3 && !zf_3) {
        r1_4 = r0 - 0x2170u;  // (from the original)
        zf_3 = r1_4 == 0xbu;  // (from the original)
        cf_3 = r1_4 >= 0xbu;  // (from the original)
    }
    if (!cf_3 || zf_3) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    u32 r1_5 = r0 - 0x2460u;  // (from the original)
    u32 zf_4 = r1_5 == 0x13u;  // (from the original)
    u32 cf_4 = r1_5 >= 0x13u;  // (from the original)
    if (cf_4 && !zf_4) {
        r1_5 = r0 - 0x2474u;  // (from the original)
        zf_4 = r1_5 == 0x13u;  // (from the original)
        cf_4 = r1_5 >= 0x13u;  // (from the original)
    }
    if (!cf_4 || zf_4) {
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    u32 r1_6 = r0 - 0x2488u;  // (from the original)
    u32 zf_5 = r1_6 == 0x13u;  // (from the original)
    u32 cf_5 = r1_6 >= 0x13u;  // (from the original)
    if (cf_5 && !zf_5) {
        r1_6 = r0 - 0x2776u;  // (from the original)
        zf_5 = r1_6 == 9u;
        cf_5 = r1_6 >= 9u;
    }
    if (!cf_5 || zf_5) {
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    u32 r1_7 = r0 - 0x2780u;  // (from the original)
    u32 zf_6 = r1_7 == 9u;
    u32 cf_6 = r1_7 >= 9u;
    if (cf_6 && !zf_6) {
        u32 r0_1 = r0 - 0x278au;  // (from the original)
        zf_6 = r0_1 == 9u;
        cf_6 = r0_1 >= 9u;
    }
    if (cf_6 && !zf_6) {
        guest::cpu()->r[1] = r1_7;
        return 0u;
    }
    guest::cpu()->r[1] = r1_7;
    return 1u;
}

}  // namespace d_005238b4
GUEST_EXPORT(0x005238b4, d_005238b4::f_005238b4);

// f_00523b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523b6c {

struct __attribute__((packed)) Local_00523b6c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00523b6c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00523b6c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00523b6c_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00523b6c_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00523b6c_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00523b6c_ea_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00523b6c_ea_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00523b6c_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00523b6c_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r0_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00523b6c_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00523b6c_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00523b6c_r1_2, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x00ad6544> global_00ad6544;  // (from the original)
inline guest::global<u32, 0x00ad6548> global_00ad6548;  // (from the original)
inline guest::global<u32, 0x00ad654c> global_00ad654c;  // (from the original)
inline guest::global<u32, 0x00ad6550> global_00ad6550;  // (from the original)
inline guest::global<u32, 0x00ad6554> global_00ad6554;  // (from the original)
inline guest::global<u32, 0x00ad6558> global_00ad6558;  // (from the original)
inline guest::global<u32, 0x00ad655c> global_00ad655c;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00523b6c() {
    u32 r4_1 = *gptr<u32>(0xad659cu);  // (from the original)
    u32 r12_1 = *gptr<u32>(0xad6590u);  // (from the original)
    gptr<Local_00523b6c_ea_3> ea_3 = gptr<Local_00523b6c_ea_3>(0xad6580u);  // (from the original)
    u32 r1_1 = ea_3->word_0;
    u32 r2_1 = ea_3->word_4;
    u32 r3_1 = ea_3->word_8;
    *gptr<u32>(0xad655cu) = r4_1;  // (from the original)
    *gptr<u32>(0xad6550u) = r12_1;  // (from the original)
    gptr<Local_00523b6c_ea_6> ea_6 = gptr<Local_00523b6c_ea_6>(0xad6540u);  // (from the original)
    ea_6->word_0 = r1_1;
    ea_6->word_4 = r2_1;
    ea_6->word_8 = r3_1;
    gptr<Local_00523b6c_r1_2> r1_2 = gptr<Local_00523b6c_r1_2>(0xad65a0u);  // (from the original)
    gptr<Local_00523b6c_r0_1> r0_1 = gptr<Local_00523b6c_r0_1>(0xad6560u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r1_2->word_0);
    float S1_1 = std::bit_cast<float>(r1_2->word_4);
    float S2_1 = std::bit_cast<float>(r1_2->word_8);
    float S3_1 = std::bit_cast<float>(r1_2->word_c);
    float S4_1 = std::bit_cast<float>(r1_2->word_10);
    float S5_1 = std::bit_cast<float>(r1_2->word_14);
    float S6_1 = std::bit_cast<float>(r1_2->word_18);
    float S7_1 = std::bit_cast<float>(r1_2->word_1c);
    r0_1->word_0 = std::bit_cast<u32>(S0_1);
    r0_1->word_4 = std::bit_cast<u32>(S1_1);
    r0_1->word_8 = std::bit_cast<u32>(S2_1);
    r0_1->word_c = std::bit_cast<u32>(S3_1);
    r0_1->word_10 = std::bit_cast<u32>(S4_1);
    r0_1->word_14 = std::bit_cast<u32>(S5_1);
    r0_1->word_18 = std::bit_cast<u32>(S6_1);
    r0_1->word_1c = std::bit_cast<u32>(S7_1);
    *global_00ad654c = 0;
    *global_00ad6554 = 0;
    *global_00ad6558 = 0;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    u32 r0_2 = call_005d46dc(r0_1.addr(), r1_2.addr(), r2_1, r3_1);
    if (r0_2 == 0) {
        *global_00ad6550 = 0;
    } else {
        *global_00ad6550 = 2;
    }
    if (*global_00ad6548 == 2u) {
        *global_00ad6548 = 1;
    }
    u32 r0_3 = *global_00ad6544;
    if (r0_3 == 2u) {
        r0_3 = *global_00ad655c;
        *global_00ad6544 = r0_3;
    }
    return r0_3;
}

}  // namespace d_00523b6c
GUEST_EXPORT_FRAMED(0x00523b6c, d_00523b6c::f_00523b6c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00523d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523d60 {

inline guest::global<u8, 0x0095e0c9> global_0095e0c9;  // (from the original)
inline guest::global<u32, 0x00ad6278> global_00ad6278;  // (from the original)

void f_00523d60(u32 r0, u32 r1) {
    *global_0095e0c9 = u8(r0);
    if (r0 == 0 || r1 + 1u == 0) {
        return;
    } else {
        *global_00ad6278 = r1;
    }
}

}  // namespace d_00523d60
GUEST_EXPORT(0x00523d60, d_00523d60::f_00523d60);

// f_005242b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005242b8 {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)

void f_005242b8(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_0095e0fc;
    if (r0_1 != 0) {
        r1 = 0u;
        *gptr<u8>(r0_1 + 0x99u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_005242b8
GUEST_EXPORT(0x005242b8, d_005242b8::f_005242b8);

// f_00524320: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524320 {

struct __attribute__((packed)) Local_00524320_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00524320_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00524320_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00524320_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00524320_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00524320_r0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00524320_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524320_r0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00524320_r0_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00524320_r0_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00524320_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00524320_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00524320_r1_1, word_1c, 0x1c);  // (from the original)

inline guest::global<u32, 0x00897268> global_00897268;  // (from the original)
inline guest::global<u32, 0x0095e0e0> global_0095e0e0;  // (from the original)
inline guest::global<u32, 0x0095e0e4> global_0095e0e4;  // (from the original)
inline guest::global<u32, 0x00ad6038> global_00ad6038;  // (from the original)
inline guest::global<u32, 0x00ad6124> global_00ad6124;  // (from the original)
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x00159a0c, u32(u32, u32, u32, u32)> call_00159a0c;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00524320() {
    guest::StackFrame frame(0xc8);  // the original's stack frame
    gptr<Local_00524320_r1_1> r1_1 = gptr<Local_00524320_r1_1>(0x897238u);  // (from the original)
    float S0_1 = std::bit_cast<float>(r1_1->word_0);
    float S1_1 = std::bit_cast<float>(r1_1->word_4);
    float S2_1 = std::bit_cast<float>(r1_1->word_8);
    float S3_1 = std::bit_cast<float>(r1_1->word_c);
    float S4_1 = std::bit_cast<float>(r1_1->word_10);
    float S5_1 = std::bit_cast<float>(r1_1->word_14);
    float S6_1 = std::bit_cast<float>(r1_1->word_18);
    float S7_1 = std::bit_cast<float>(r1_1->word_1c);
    gptr<Local_00524320_ea_1> ea_1 = gptr<Local_00524320_ea_1>(frame.at(0).addr());
    ea_1->word_0 = std::bit_cast<u32>(S0_1);
    ea_1->word_4 = std::bit_cast<u32>(S1_1);
    ea_1->word_8 = std::bit_cast<u32>(S2_1);
    ea_1->word_c = std::bit_cast<u32>(S3_1);
    ea_1->word_10 = std::bit_cast<u32>(S4_1);
    ea_1->word_14 = std::bit_cast<u32>(S5_1);
    ea_1->word_18 = std::bit_cast<u32>(S6_1);
    ea_1->word_1c = std::bit_cast<u32>(S7_1);
    gptr<Local_00524320_ea_2> ea_2 = gptr<Local_00524320_ea_2>(0x897258u);  // (from the original)
    u32 r1_2 = ea_2->word_0;
    u32 r2_1 = ea_2->word_4;
    u32 r3_1 = ea_2->word_8;
    u32 r12_1 = ea_2->word_c;
    *frame.at<u32>(0x30) = *global_00897268;  // (from the original)
    gptr<Local_00524320_r0_1> r0_1 = gptr<Local_00524320_r0_1>(frame.at(0x20).addr());  // (from the original)
    r0_1->word_0 = r1_2;
    r0_1->word_4 = r2_1;
    r0_1->word_8 = r3_1;
    r0_1->word_c = r12_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    u32 r0_2 = call_005d46dc(r0_1.addr(), r1_2, r2_1, r3_1);
    u32 r3_2 = guest::cpu()->r[3];
    *global_0095e0e4 = 0;
    u32 r2_2 = *gptr<u32>(frame.at(0).addr() + (r0_2 << 2));
    call_00100ef8(frame.at(0x40).addr(), 0x524428u, r2_2, r3_2);  // (from the original)
    u32 r3_3 = guest::cpu()->r[3];
    u32 r2_3 = *gptr<u32>(frame.at(0).addr() + (r0_2 << 2));
    u32 r0_5 = call_00100ef8(frame.at(0x80).addr(), 0x52444cu, r2_3, r3_3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_6 = call_00569d50(r0_5, r1_3, r2_4, r3_4);
    u32 r5_2 = *gptr<u32>(r0_6 + 4u);
    *frame.at<u32>(0x3c) = frame.at(0x40).addr();  // (from the original)
    *frame.at<u32>(0x38) = 0x9047f8;  // (from the original)
    u32 r0_7 = call_0056a974(0xad5f68u, frame.at(0x38).addr(), r5_2, 0x80u);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    float S0_6 = guest::cpu()->s[0];
    float S1_6 = guest::cpu()->s[1];
    if (r0_7 != 0) {
        *frame.at<u32>(0x3c) = frame.at(0x80).addr();  // (from the original)
        *frame.at<u32>(0x38) = 0x9047f8;  // (from the original)
        r0_7 = call_0056a974(0xad6054u, frame.at(0x38).addr(), r5_2, 0x80u);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        u32 r2_5 = guest::cpu()->r[2];
        u32 r3_5 = guest::cpu()->r[3];
        S0_6 = guest::cpu()->s[0];
        S1_6 = guest::cpu()->s[1];
        if (r0_7 != 0) {
            u32 r0_8 = *global_00ad6038;
            r1_5 = *global_00ad6124;
            *global_0095e0e4 = r1_5;
            if (r0_8 != 0) {
                r1_5 = *global_0095e0e0;
                if (r1_5 == 0) {
                    u32 r0_9 = call_00159a0c(r0_8, r1_5, r2_5, r3_5);
                    r1_5 = guest::cpu()->r[1];
                    S0_6 = guest::cpu()->s[0];
                    S1_6 = guest::cpu()->s[1];
                    *global_0095e0e0 = r0_9;
                }
            }
            r0_7 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return r0_7;
}

}  // namespace d_00524320
GUEST_EXPORT_FRAMED(0x00524320, d_00524320::f_00524320, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00524478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524478 {

inline guest::global<u32, 0x0095e0e0> global_0095e0e0;  // (from the original)
inline guest::global<u32, 0x0095e0e4> global_0095e0e4;  // (from the original)
inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> call_00139724;  // (from the original)

u32 f_00524478() {
    u32 r0_1 = *global_0095e0e0;
    if (r0_1 != 0) {
        call_00139724(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *global_0095e0e0 = 0;
    }
    call_00138744(0xad5f68u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = call_00138744(0xad6054u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *global_0095e0e4 = 0;
    return r0_2;
}

}  // namespace d_00524478
GUEST_EXPORT_FRAMED(0x00524478, d_00524478::f_00524478, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005244c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005244c0 {

inline guest::global<u32, 0x0095e0e0> global_0095e0e0;  // (from the original)
inline constexpr guest::Function<0x0015982c, u32(u32, u32, u32, u32)> call_0015982c;  // (from the original)

u32 f_005244c0(u32 r0) {
    return call_0015982c(*global_0095e0e0, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005244c0
GUEST_EXPORT(0x005244c0, d_005244c0::f_005244c0);

// f_00524528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524528 {

struct __attribute__((packed)) Object_00524528_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524528_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_c, 0xc);  // (from the original)


void f_00524528(gptr<Object_00524528_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->byte_9 = 0;
    arg0->byte_a = 0;
    arg0->word_c = 0;
}

}  // namespace d_00524528
GUEST_EXPORT(0x00524528, d_00524528::f_00524528);

// f_00524598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524598 {

struct __attribute__((packed)) Object_00524598_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524598_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_c, 0xc);  // (from the original)


void f_00524598(gptr<Object_00524598_0> arg0, u32 r1) {
    arg0->word_0 = 0;
    arg0->byte_8 = 1;
    arg0->byte_9 = 0;
    arg0->byte_a = 0;
    arg0->word_c = 0;
    arg0->word_4 = r1;
}

}  // namespace d_00524598
GUEST_EXPORT(0x00524598, d_00524598::f_00524598);

// f_00524838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524838 {

struct __attribute__((packed)) Local_00524838_ea_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_00524838_ea_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524838_ea_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32)> call_0011dc88;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

void f_00524838(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_005d46dc(r0, r1, r2, guest::cpu()->r[3]);
    if (r0_1 < 0xau) {  // (from the original)
        gptr<Local_00524838_ea_1> ea_1 = gptr<Local_00524838_ea_1>(0x890530u + (r0_1 << 1));  // (from the original)
        u32 r2_1 = ea_1->byte_0;
        *gptr<u8>(r0 + 0x4cu) = u8(r2_1);  // (from the original)
        u32 r1_1 = ea_1->byte_1;
        *gptr<u8>(r0 + 0x4du) = u8(r1_1);  // (from the original)
        if (r0_1 == 4u) {
            u32 r0_2 = call_0011dc88(r0_1, r1_1, r2_1);
            if (r0_2 != 8u) {
                if (r0_2 == 9u) {
                    *gptr<u8>(r0 + 0x4cu) = 0xc;  // (from the original)
                    *gptr<u8>(r0 + 0x4du) = 4;  // (from the original)
                    return;
                }
                if (r0_2 != 0xau) {  // (from the original)
                    return;
                }
                *gptr<u8>(r0 + 0x4cu) = 0xd;  // (from the original)
                *gptr<u8>(r0 + 0x4du) = 4;  // (from the original)
                return;
            }
            *gptr<u8>(r0 + 0x4cu) = 9;  // (from the original)
            *gptr<u8>(r0 + 0x4du) = 4;  // (from the original)
            return;
        }
        if (r0_1 == 1u) {
            u32 r0_3 = call_0011dc88(r0_1, r1_1, r2_1);
            if (r0_3 == 9u) {
                *gptr<u8>(r0 + 0x4cu) = 0xe;  // (from the original)
                *gptr<u8>(r0 + 0x4du) = 1;  // (from the original)
            }
        }
        return;
    }
    *gptr<u8>(r0 + 0x4cu) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x4du) = 1;  // (from the original)
}

}  // namespace d_00524838
GUEST_EXPORT_FRAMED(0x00524838, d_00524838::f_00524838, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00524a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524a54 {

struct __attribute__((packed)) Object_00524a54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00524a54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_00524a54_r0_3 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u16 half_4c;
};
GUEST_OFFSET(Local_00524a54_r0_3, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Local_00524a54_r0_3, half_4c, 0x4c);  // (from the original)

inline guest::global<u32, 0x00890528> global_00890528;  // (from the original)
inline guest::global<u32, 0x0089052c> global_0089052c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x003e0f14, u32(u32, u32, u32, u32)> call_003e0f14;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00524a54(gptr<Object_00524a54_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    arg0->word_0 = 0;
    u32 r3_1 = *global_00890528;
    arg0->word_10 = *global_0089052c;
    arg0->word_4 = 0x905eb4;  // (from the original)
    arg0->word_8 = r0;
    arg0->word_c = r3_1;
    u32 r0_2 = call_003e0f14(r0 + 0x14u, 0x905eb4u, r0 + 8u, r3_1);  // (from the original)
    gptr<Local_00524a54_r0_3> r0_3 = gptr<Local_00524a54_r0_3>(r0_2 - 0x14u);  // (from the original)
    r0_3->word_48 = 0;
    r0_3->half_4c = 0;
    u32 r0_4 = r0_3.addr() + 0x50u;  // (from the original)
    u32 r0_5 = call_003083bc(r0_4, r0_4 + 0x18u, 0x100u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_5) = 0x909dc8;  // (from the original)
    u32 r0_7 = call_005f4bfc(r0_5 + 0xcu, 0x909dc8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_7 - 0xcu;  // (from the original)
    call_002f825c(r0_7 + 0xcu, 0x200u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    u32 r1 = r4 + 0x16u;  // (from the original)
    r0 = 0x80u;  // (from the original)
    do {
        res_1 = r0 - 1u;
        r0 = res_1;
        u32 r3_5 = *gptr<u16>(r2);
        *gptr<u16>(r1 + 2u) = u16(r3_5);
        u32 r3_6 = *gptr<u16>(r2);
        u32 ea_2 = r1 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r1 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 - 4u) = 0x11;  // (from the original)
    *gptr<u8>(r4 - 3u) = 0x11;  // (from the original)
    return r4 - 0x50u;  // (from the original)
}

}  // namespace d_00524a54
GUEST_EXPORT_FRAMED(0x00524a54, d_00524a54::f_00524a54, 0x4010);  // pushes {r4, lr} first, as the original

// f_00524b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524b80 {

inline guest::global<u32, 0x008906f4> global_008906f4;  // (from the original)

u32 f_00524b80(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r6 = 0;
    u32 r10 = 0;
    u32 r2_1 = 0;
    *frame.at<u32>(0) = r3;
    u32 r8 = 1u;
    u32 r7 = 0u;
    u32 r9 = r8 + u32(s32(*global_008906f4 - 0x890754u) >> 2);  // (from the original)
    do {
        u32 r5 = *gptr<u16>(r0);
        u32 r2 = *gptr<u16>(r1);
        if (r5 != 0xau && r5 != 0) {  // (from the original)
            *frame.at<u16>(0) = u16(r2);
            if (r2 - 0x3041u <= 0x55u) {  // (from the original)
                goto L_524ce0;
            }
            if (r2 >= 0x61u && r2 <= 0x7au) {  // (from the original)
                goto L_524ce0;
            }
            if (r2 - 0x30a1u <= 0x55u) {  // (from the original)
                *frame.at<u16>(0) = u16(r2 - 0x60u);  // (from the original)
                goto L_524ce0;
            }
            r10 = frame.at(0).addr();
            r6 = 0u;
            if (r2 >= 0x41u && r2 <= 0x5au) {  // (from the original)
                goto L_524c70;
            }
            if (r2 - 0xff21u <= 0x19u) {  // (from the original)
                goto L_524c70;
            }
            if (r2 != 0xd7u && r2 - 0xc0u <= 0x1eu) {  // (from the original)
                goto L_524c70;
            }
            u32 r3_1 = r2 - 0x391u;  // (from the original)
            u32 zf_1 = r3_1 == 0x18u;  // (from the original)
            u32 cf_1 = r3_1 >= 0x18u;  // (from the original)
            if (cf_1 && !zf_1) {
                u32 r3_2 = r2 - 0x410u;  // (from the original)
                zf_1 = r3_2 == 0x1fu;  // (from the original)
                cf_1 = r3_2 >= 0x1fu;  // (from the original)
            }
            if (!cf_1 || zf_1) {
                goto L_524c70;
            }
            if (r2 - 0x100u > 0x77u) {  // (from the original)
                r3 = 0x890754u;  // (from the original)
                u32 r12 = 1u;
                if (s32(r9) > 1) {
                    do {
                        if (*gptr<u16>(r3 + 2u) == r2) {
                            r6 = *gptr<u16>(r3);
                            goto L_524cd8;
                        }
                        if (*gptr<u16>(r3) == r2) {
                            goto L_524cd8;
                        }
                        r12 += 1u;
                        r3 += 4u;
                        guest::preempt();
                    } while (s32(r9) > s32(r12));
                }
                if (r2 - 0x179u <= 5u && (r2 & 1u) != 0) {  // (from the original)
                    r6 = uxth(r2 + 1u);
                }
                goto L_524cd8;
            }
            if ((r2 & 1u) == 0) {
                r2_1 = r2 + 1u;
                goto L_524c74;
            }
            goto L_524ce0;
        }
        if (r7 != 0) {
            guest::cpu()->r[1] = r1;
            return r8;
        }
L_524c68:;
        guest::cpu()->r[1] = r1;
        return 0u;
L_524c70:;
        r2_1 = r2 + 0x20u;  // (from the original)
L_524c74:;
        r6 = uxth(r2_1);
L_524cd8:;
        if (r6 != 0) {
            *gptr<u16>(r10) = u16(r6);
        }
L_524ce0:;
        if (r5 != *frame.at<u16>(0)) {
            guest::preempt();
            goto L_524c68;
        }
        r7 += 1u;
        r0 += 2u;
        r1 += 2u;
        guest::preempt();
    } while (s32(r7) < 3);
    guest::cpu()->r[1] = r1;
    return r8;
}

}  // namespace d_00524b80
GUEST_EXPORT_FRAMED(0x00524b80, d_00524b80::f_00524b80, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_00524d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524d58 {

struct __attribute__((packed)) Object_00524d58_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_00524d58_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524d58_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00524d58_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00524d58_0, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_00524d58_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00524d58_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00524d58_ea_1, word_4, 0x4);  // (from the original)


u32 f_00524d58(gptr<Object_00524d58_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_00524d58_ea_1> ea_1 = gptr<Local_00524d58_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    if ((u32(*frame.at<u16>(4)) & ~*gptr<u32>(arg0->word_1c + 0x188u)) != 0) {  // (from the original)
        return arg0->word_8;
    }
    u32 r1_1 = arg0->word_24;
    if (r1_1 != 0 && s32(r1_1) >= 0) {
        r0 = *gptr<u32>(arg0->word_10);
    }
    if (s32(r1_1) <= 0) {
        r0 = 0u;
    }
    return r0;
}

}  // namespace d_00524d58
GUEST_EXPORT(0x00524d58, d_00524d58::f_00524d58);

// f_00525ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00525ae4 {

struct __attribute__((packed)) Object_00525ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00525ae4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, byte_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00525ae4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00525ae4_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00525ae4_r5_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002026e4, u32(u32, u32, u32, u32)> call_002026e4;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x0080d59c, u32(u32, u32, u32, u32)> call_0080d59c;  // (from the original)

u32 f_00525ae4(u32 r0, gptr<Object_00525ae4_1> arg1) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r0_10 = 0;
    u32 r3_1 = arg1->byte_c;
    u32 r0_1 = call_002026e4(r0, arg1->word_4, arg1->word_8, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r4 = r0_1;
    if (r0_1 != 0) {
        u32 r7 = *gptr<u32>(r1);
        call_0074824c(frame.at(0x10).addr(), r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00748284(frame.at(0).addr(), r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r2 = guest::cpu()->r[2];
        u32 r3 = guest::cpu()->r[3];
        if (r0_5 != 0) {
            do {
                gptr<Local_00525ae4_r5_1> r5_1 = gptr<Local_00525ae4_r5_1>(frame.at(8).addr());
                if (r4 != 0) {
                    u32 r0_6 = call_007482bc(r4, r1, r2, r3);
                    u32 r0_7 = call_00317148(r4, r5_1->word_0, r5_1->word_4, guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_7 != 0) {
                        r2 = r5_1->word_4;
                        r1 = *gptr<u16>(r7 + (r2 * r0_6 + r5_1->word_0 << 1));
                        *gptr<u16>(r0_7) = u16(r1);
                    }
                }
                call_0052f144(frame.at(0).addr(), r1, r2, r3);
                r0_10 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_10 != 0);
        }
        call_0080d59c(r4, r4, r2, r3);
        r1_2 = guest::cpu()->r[1];
        r0_1 = r4;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00525ae4
GUEST_EXPORT_FRAMED(0x00525ae4, d_00525ae4::f_00525ae4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_005269e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005269e8 {

struct __attribute__((packed)) Object_005269e8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005269e8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005269e8_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_ea_1 {
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
};
GUEST_OFFSET(Local_005269e8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_005269e8_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_ea_5 {
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
GUEST_OFFSET(Local_005269e8_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_005269e8_ea_5, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_005269e8_r0_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r0_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_r0_14, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_r0_15 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r0_15, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_r0_15, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_r3_13 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r3_13, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_r3_13, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_r3_14 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r3_14, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_r3_14, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005269e8_r4_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005269e8_r4_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005269e8_r4_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32, u32, u32)> call_0052f0f0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0052f2a8, u32(u32, u32, u32, u32)> call_0052f2a8;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

void f_005269e8(gptr<Object_005269e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc0);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_29 = 0;
    u32 r4_2 = 0;
    u32 r0_30 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_31 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r1_14 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    gptr<Local_005269e8_r4_3> r4_3 = gptr<Local_005269e8_r4_3>(0u);
    u32 r6_1 = 0;
    u32 r1_15 = 0;
    u32 r2_19 = 0;
    u32 r7_1 = 0;
    u32 r0_34 = 0;
    u32 r1_16 = 0;
    u32 r2_20 = 0;
    u32 r0_35 = 0;
    u32 res_1 = 0;
    u32 r0_38 = 0;
    u32 r2_21 = 0;
    u32 r3_18 = 0;
    u32 r1_17 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    gptr<Local_005269e8_ea_4> ea_4 = gptr<Local_005269e8_ea_4>(0u);
    u32 r2_22 = 0;
    u32 r3_19 = 0;
    u32 r0_41 = 0;
    u32 r1_18 = 0;
    u32 zf_1 = 0;
    gptr<Local_005269e8_ea_1> ea_1 = gptr<Local_005269e8_ea_1>(frame.at(0x8c).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r11 = r2;
    r10 = *frame.at<u32>(0xc0);  // (from the original)
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    *frame.at<u32>(0x8c) = r0;  // (from the original)
    *frame.at<u32>(0x64) = 0;  // (from the original)
    call_0052f0dc(frame.at(0x40).addr(), 0u, 0u, r3);  // (from the original)
    call_006fa1fc(frame.at(0x40).addr(), frame.at(0x44).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
    do {
        u32 r0_3 = call_007482bc(r11, r1, r2, r3);
        u32 r0_4 = call_00748310(r11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_5 = call_0052f0c0(frame.at(0x18).addr(), r11, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_6 = call_0055cb58(r10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_4 = u64(r0_6) * r0_3 >> 0x20;  // (from the original)
        *gptr<u32>(r0_5) = *gptr<u32>(r0_5) + r1_4;
        u32 r0_7 = call_0055cb58(r10, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0_5 + 4u) = *gptr<u32>(r0_5 + 4u) + u32(u64(r0_7) * r0_4 >> 0x20);  // (from the original)
        call_0052f0f0(*frame.at<u32>(0x8c), frame.at(0x18).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_10 = call_00526ea0(*frame.at<u32>(0x90), *frame.at<u32>(0x8c), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 == 0) {
            call_0052edfc(frame.at(0x48).addr(), *frame.at<u32>(0x8c), r2, r3);  // (from the original)
            u32 r0_12 = frame.at(0x48).addr();  // (from the original)
            u32 r0_13 = call_0074818c(r0_12, frame.at(0x40).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_13 != 0) {
                gptr<Local_005269e8_r0_14> r0_14 = gptr<Local_005269e8_r0_14>(frame.at(0x80).addr());  // (from the original)
                r0_14->word_0 = 1;
                r0_14->word_4 = 1;
                u32 r2_9 = ~0u;
                gptr<Local_005269e8_r0_15> r0_15 = gptr<Local_005269e8_r0_15>(frame.at(0x78).addr());  // (from the original)
                r0_15->word_0 = r2_9;
                r0_15->word_4 = r2_9;
                call_0052f200(frame.at(0x50).addr(), r0_15.addr(), r0_14.addr(), r3);  // (from the original)
                call_0052f2a8(frame.at(0x50).addr(), *frame.at<u32>(0x8c), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                u32 r5_1 = frame.at(0x50).addr();  // (from the original)
                r4 = *frame.at<u32>(0x90);  // (from the original)
                call_0074824c(frame.at(0x68).addr(), r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                call_00748284(frame.at(0).addr(), r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_21 = call_007481ec(frame.at(0).addr(), frame.at(0x68).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_21 != 0) {
                    do {
                        u32 r0_22 = frame.at(8).addr();
                        if (r4 != 0) {
                            call_0052edfc(frame.at(0x30).addr(), r0_22, r2, r3);  // (from the original)
                            gptr<Local_005269e8_r3_13> r3_13 = gptr<Local_005269e8_r3_13>(frame.at(0x30).addr());  // (from the original)
                            u32 r0_24 = call_0075291c(r4, r3_13->word_0, r3_13->word_4, r3_13.addr());
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0_24 != 0) {
                                call_0052ed04(frame.at(0x20).addr(), r0_22, r2, r3);  // (from the original)
                                gptr<Local_005269e8_r3_14> r3_14 = gptr<Local_005269e8_r3_14>(frame.at(0x20).addr());  // (from the original)
                                u32 r0_26 = call_0075d608(r0_24, r3_14->word_0, r3_14->word_4, r3_14.addr());
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                                if (r0_26 == 0x14u || r0_26 == 0x31u || r0_26 == 0x32u || r0_26 == 0x33u) {  // (from the original)
                                    goto L_526c10;
                                }
                            }
                        }
                        goto L_526d18;
L_526c10:;
                        call_0052f144(frame.at(0).addr(), r1, r2, r3);
                        r0_29 = call_007481ec(frame.at(0).addr(), frame.at(0x68).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        guest::preempt();
                    } while (r0_29 != 0);
                }
                r4_2 = frame.at(0x50).addr();  // (from the original)
                r5 = *frame.at<u32>(0x90);  // (from the original)
                r0_30 = frame.at(0x30).addr();  // (from the original)
                call_0074824c(r0_30, r4_2, r2, r3);
                r2_17 = guest::cpu()->r[2];
                r3_16 = guest::cpu()->r[3];
                r0_31 = frame.at(0x20).addr();  // (from the original)
                call_00748284(r0_31, r4_2, r2_17, r3_16);
                r2_18 = guest::cpu()->r[2];
                r3_17 = guest::cpu()->r[3];
                r1_14 = frame.at(0x30).addr();  // (from the original)
                r0_32 = frame.at(0x20).addr();  // (from the original)
                r0_33 = call_007481ec(r0_32, r1_14, r2_18, r3_17);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_33 == 0) {
                    goto L_526d40;
                }
L_526c94:;
                r4_3 = gptr<Local_005269e8_r4_3>(frame.at(0x28).addr());  // (from the original)
                if (r5 == 0) {
                    goto L_526d20;
                }
                r6_1 = 0u;
                r1_15 = r4_3->word_0;
                r2_19 = r4_3->word_4;
                r7_1 = r6_1;
                r0_34 = call_002feb00(r5, r1_15, r2_19, r6_1);
                r1_16 = r4_3->word_0;
                r2_20 = r4_3->word_4;
                r0_35 = call_002feb00(r5, r1_16, r2_20, 1u);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_34 != 0) {
                    u32 r0_36 = call_002fcaf4(r0_34, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_36 == 0) {
                        r6_1 = 1u;
                    }
                }
                if (r0_35 != 0) {
                    u32 r0_37 = call_002fcaf4(r0_35, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_37 == 0) {
                        r7_1 = 1u;
                    }
                }
                res_1 = r6_1 | r7_1;
                if (res_1 == 0) {
                    goto L_526d20;
                }
L_526d18:;
                goto L_526d78;
L_526d20:;
                r0_38 = frame.at(0x20).addr();  // (from the original)
                call_0052f144(r0_38, r1, r2, r3);
                r2_21 = guest::cpu()->r[2];
                r3_18 = guest::cpu()->r[3];
                r1_17 = frame.at(0x30).addr();  // (from the original)
                r0_39 = frame.at(0x20).addr();  // (from the original)
                r0_40 = call_007481ec(r0_39, r1_17, r2_21, r3_18);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_40 != 0) {
                    guest::preempt();
                    goto L_526c94;
                }
L_526d40:;
                ea_2 = frame.at(0).addr();
                *gptr<u32>(ea_2) = 0;
                ea_3 = frame.at(0x8c).addr();  // (from the original)
                ea_4 = gptr<Local_005269e8_ea_4>(*gptr<u32>(ea_3));
                r2_22 = ea_4->word_0;
                r3_19 = ea_4->word_4;
                r0_41 = *frame.at<u32>(0x90);  // (from the original)
                r1_18 = *frame.at<u32>(0x98);  // (from the original)
                call_002fc994(r0_41, r1_18, r2_22, r3_19);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                *frame.at<u32>(0x64) = 1;  // (from the original)
L_526d78:;
            }
        }
        r9 += 1u;
        zf_1 = r9 == 0x1388u;  // (from the original)
        if (r9 < 0x1388u || zf_1) {  // (from the original)
            zf_1 = *frame.at<u32>(0x64) == 0;  // (from the original)
        }
        guest::preempt();
    } while (zf_1);
    gptr<Local_005269e8_ea_5> ea_5 = gptr<Local_005269e8_ea_5>(frame.at(0x9c).addr());  // (from the original)
    u32 r4_4 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_2 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    u32 r10_1 = ea_5->word_18;
    u32 r11_1 = ea_5->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_005269e8
GUEST_EXPORT(0x005269e8, d_005269e8::f_005269e8);

// f_00526ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00526ea0 {

struct __attribute__((packed)) Local_00526ea0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_r3_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_r3_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_r3_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_r3_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_r3_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r3_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_r3_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00526ea0_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00526ea0_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00526ea0_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00526ea0(u32 r0, gptr<GridPoint> arg1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r2_1 = u32(arg1->y) + 1u;
    gptr<Local_00526ea0_ea_1> ea_1 = gptr<Local_00526ea0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = u32(arg1->x);
    ea_1->word_4 = r2_1;
    u32 r2_2 = u32(arg1->y) + 2u;
    gptr<Local_00526ea0_ea_2> ea_2 = gptr<Local_00526ea0_ea_2>(frame.at(8).addr());
    ea_2->word_0 = u32(arg1->x);
    ea_2->word_4 = r2_2;
    u32 r7_1 = frame.at(0).addr();
    call_0052edfc(frame.at(0x10).addr(), r7_1, r2_2, r3);  // (from the original)
    gptr<Local_00526ea0_r3_1> r3_1 = gptr<Local_00526ea0_r3_1>(frame.at(0x10).addr());  // (from the original)
    u32 r0_2 = call_0075291c(r0, r3_1->word_0, r3_1->word_4, r3_1.addr());
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_0052ed04(frame.at(0x18).addr(), r7_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        gptr<Local_00526ea0_r3_3> r3_3 = gptr<Local_00526ea0_r3_3>(frame.at(0x18).addr());  // (from the original)
        u32 r0_4 = call_0075d608(r0_2, r3_3->word_0, r3_3->word_4, r3_3.addr());
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0x14u || r0_4 == 0x31u || r0_4 == 0x32u || r0_4 == 0x33u) {  // (from the original)
            u32 r0_5 = call_002feb00(r0, *frame.at<u32>(0), *frame.at<u32>(4), 0u);
            r1_2 = guest::cpu()->r[1];
            u32 r2_7 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            if (r0_5 != 0) {
                u32 r0_6 = call_002fccdc(r0_5, r1_2, r2_7, r3_4);
                r1_2 = guest::cpu()->r[1];
                r2_7 = guest::cpu()->r[2];
                r3_4 = guest::cpu()->r[3];
                if (r0_6 == 4u || r0_6 == 8u || r0_6 == 6u) {
                    return 1u;
                }
            }
            u32 r6_1 = frame.at(8).addr();
            if (r0 != 0) {
                call_0052edfc(frame.at(0x10).addr(), r6_1, r2_7, r3_4);  // (from the original)
                gptr<Local_00526ea0_r3_5> r3_5 = gptr<Local_00526ea0_r3_5>(frame.at(0x10).addr());  // (from the original)
                u32 r1_5 = r3_5->word_0;
                u32 r2_8 = r3_5->word_4;
                u32 r0_8 = call_0075291c(r0, r1_5, r2_8, r3_5.addr());
                r1_2 = guest::cpu()->r[1];
                if (r0_8 == 0) {
                    return 1u;
                }
                call_0052ed04(frame.at(0x18).addr(), r6_1, r2_8, r3_5.addr());  // (from the original)
                gptr<Local_00526ea0_r3_6> r3_6 = gptr<Local_00526ea0_r3_6>(frame.at(0x18).addr());  // (from the original)
                u32 r0_10 = call_0075d608(r0_8, r3_6->word_0, r3_6->word_4, r3_6.addr());
                r1_2 = guest::cpu()->r[1];
                if (r0_10 != 0x14u && r0_10 != 0x31u && r0_10 != 0x32u && r0_10 != 0x33u) {  // (from the original)
                    goto L_526f38;
                }
                gptr<Local_00526ea0_r4_1> r4_1 = gptr<Local_00526ea0_r4_1>(frame.at(8).addr());
                u32 r1_7 = r4_1->word_0;
                u32 r2_10 = r4_1->word_4;
                u32 r0_11 = call_002feb00(r0, r1_7, r2_10, 0u);
                r1_2 = guest::cpu()->r[1];
                if (r0_11 != 0) {
                    u32 r0_12 = call_002fccdc(r0_11, r1_2, r2_10, 0u);
                    r1_2 = guest::cpu()->r[1];
                    if (r0_12 == 4u || r0_12 == 8u || r0_12 == 6u) {
                        return 1u;
                    }
                }
                guest::cpu()->r[1] = r1_2;
                return 0u;
            }
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
L_526f38:;
    }
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00526ea0
GUEST_EXPORT_FRAMED(0x00526ea0, d_00526ea0::f_00526ea0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00527088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527088 {

struct __attribute__((packed)) Local_00527088_ea_1 {
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
};
GUEST_OFFSET(Local_00527088_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_1, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Local_00527088_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00527088_ea_6 {
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
GUEST_OFFSET(Local_00527088_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00527088_ea_6, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_00527088_r3_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r3_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_r3_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00527088_r3_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r3_9, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_r3_9, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00527088_r9_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527088_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527088_r9_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

void f_00527088(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x80);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00527088_ea_1> ea_1 = gptr<Local_00527088_ea_1>(frame.at(0x4c).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r8;
    ea_1->word_24 = r9;
    ea_1->word_28 = r10;
    ea_1->word_2c = r11;
    ea_1->word_30 = r14;
    r6 = r3;
    r8 = r1;
    r11 = 0u;
    u32 r0_1 = *frame.at<u32>(0x4c);  // (from the original)
    *frame.at<u32>(0x28) = r0_1;  // (from the original)
    *frame.at<u32>(0x24) = r0_1;  // (from the original)
    call_0052f0dc(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
    call_006fa1fc(frame.at(0x30).addr(), frame.at(0x34).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_5270c0:;
    u32 r0_4 = call_007482bc(r8, r1, r2, r3);
    u32 r0_5 = call_00748310(r8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_0052f0c0(frame.at(8).addr(), r8, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_7 = call_0055cb58(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_4 = u64(r0_7) * r0_4 >> 0x20;  // (from the original)
    *gptr<u32>(r0_6) = *gptr<u32>(r0_6) + r1_4;
    u32 r0_8 = call_0055cb58(r6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_6 + 4u) = u32(u64(r0_8) * r0_5 >> 0x20) + *gptr<u32>(r0_6 + 4u);  // (from the original)
    u32 r0_10 = call_00526ea0(*frame.at<u32>(0x4c), frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        call_0052edfc(frame.at(0x40).addr(), frame.at(8).addr(), r2, r3);  // (from the original)
        u32 r0_12 = frame.at(0x40).addr();  // (from the original)
        u32 r0_13 = call_0074818c(r0_12, frame.at(0x30).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_13 != 0) {
            u32 r4_2 = frame.at(8).addr();
            if (*frame.at<u32>(0x28) != 0) {  // (from the original)
                call_0052edfc(frame.at(0x38).addr(), r4_2, r2, r3);  // (from the original)
                gptr<Local_00527088_r3_8> r3_8 = gptr<Local_00527088_r3_8>(frame.at(0x38).addr());  // (from the original)
                u32 r0_16 = call_0075291c(*frame.at<u32>(0x28), r3_8->word_0, r3_8->word_4, r3_8.addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_16 != 0) {
                    call_0052ed04(frame.at(0x10).addr(), r4_2, r2, r3);  // (from the original)
                    gptr<Local_00527088_r3_9> r3_9 = gptr<Local_00527088_r3_9>(frame.at(0x10).addr());  // (from the original)
                    u32 r0_18 = call_0075d608(r0_16, r3_9->word_0, r3_9->word_4, r3_9.addr());
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_18 == 0x14u || r0_18 == 0x31u || r0_18 == 0x32u || r0_18 == 0x33u) {  // (from the original)
                        goto L_5271f0;
                    }
                }
                goto L_527294;
L_5271f0:;
                u32 r0_19 = *frame.at<u32>(0x24);  // (from the original)
                if (r0_19 != 0) {
                    gptr<Local_00527088_r9_1> r9_1 = gptr<Local_00527088_r9_1>(frame.at(8).addr());
                    u32 r4_3 = 0u;
                    u32 r1_10 = r9_1->word_0;
                    u32 r2_10 = r9_1->word_4;
                    u32 r7_1 = r4_3;
                    u32 r0_20 = call_002feb00(r0_19, r1_10, r2_10, r4_3);
                    u32 r0_22 = call_002feb00(*frame.at<u32>(0x24), r9_1->word_0, r9_1->word_4, 1u);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_20 != 0) {
                        u32 r0_23 = call_002fcaf4(r0_20, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_23 == 0) {
                            r4_3 = 1u;
                        }
                    }
                    if (r0_22 != 0) {
                        u32 r0_24 = call_002fcaf4(r0_22, r1, r2, r3);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_24 == 0) {
                            r7_1 = 1u;
                        }
                    }
                    if ((r4_3 | r7_1) != 0) {
                        goto L_527294;
                    }
                }
                *frame.at<u32>(0) = 0;
                u32 r0_25 = *frame.at<u32>(0x4c);  // (from the original)
                u32 r1_12 = *frame.at<u32>(0x54);  // (from the original)
                gptr<Local_00527088_ea_5> ea_5 = gptr<Local_00527088_ea_5>(frame.at(8).addr());
                call_002fc994(r0_25, r1_12, ea_5->word_0, ea_5->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r11 = 1u;
            }
        }
L_527294:;
    }
    r5 += 1u;
    if (r5 > 0x1388u) {  // (from the original)
    } else if (r11 == 0) {
        guest::preempt();
        goto L_5270c0;
    }
    gptr<Local_00527088_ea_6> ea_6 = gptr<Local_00527088_ea_6>(frame.at(0x5c).addr());  // (from the original)
    u32 r4_4 = ea_6->word_0;
    u32 r5_1 = ea_6->word_4;
    u32 r6_1 = ea_6->word_8;
    u32 r7_2 = ea_6->word_c;
    u32 r8_1 = ea_6->word_10;
    u32 r9_2 = ea_6->word_14;
    u32 r10_1 = ea_6->word_18;
    u32 r11_1 = ea_6->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
}

}  // namespace d_00527088
GUEST_EXPORT(0x00527088, d_00527088::f_00527088);

// f_00527528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527528 {

struct __attribute__((packed)) Local_00527528_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00527528_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527528_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00527528_r0_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527528_r0_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527528_r0_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527528_r0_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527528_r0_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527528_r0_4, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00527528_r7_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_r7_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00527528_r7_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00527528_r7_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527528_r7_2, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_00527528(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    guest::StackFrame frame(0x7c);  // the original's stack frame
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    gptr<Local_00527528_ea_2> ea_2 = gptr<Local_00527528_ea_2>(0u);
    u32 r1_4 = 0;
    u32 r6_3 = 0;
    u32 r12_2 = 0;
    gptr<Local_00527528_r7_2> r7_2 = gptr<Local_00527528_r7_2>(0u);
    u32 r1_6 = 0;
    u32 r8 = r0;
    u32 r9 = r1;
    u32 r4 = r2;
    u32 r5 = 0u;
    do {
        u32 r1_1 = 0xab7df4u;  // (from the original)
        u32 r0_1 = r5 & 0xffu;  // (from the original)
        if (r0_1 < 0xeu) {  // (from the original)
            r1_1 += (r0_1 << 2);
        }
        u32 r6_1 = *gptr<u32>(r1_1);
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        call_00314a1c(frame.at(0x60).addr(), r6_1, r2, r3);  // (from the original)
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        call_00314a9c(frame.at(0x48).addr(), r6_1, r2_1, r3_1);  // (from the original)
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        gptr<Local_00527528_r0_4> r0_4 = gptr<Local_00527528_r0_4>(frame.at(0x60).addr());  // (from the original)
        u32 r7 = frame.at(0x18).addr();  // (from the original)
        float S0_2 = std::bit_cast<float>(r0_4->word_0);
        float S1_2 = std::bit_cast<float>(r0_4->word_4);
        float S2_2 = std::bit_cast<float>(r0_4->word_8);
        float S3_2 = std::bit_cast<float>(r0_4->word_c);
        float S4_2 = std::bit_cast<float>(r0_4->word_10);
        float S5_2 = std::bit_cast<float>(r0_4->word_14);
        u32 r6 = frame.at(0x48).addr();  // (from the original)
        *gptr<u32>(r7) = std::bit_cast<u32>(S0_2);
        *gptr<u32>(r7 + 4) = std::bit_cast<u32>(S1_2);
        *gptr<u32>(r7 + 8) = std::bit_cast<u32>(S2_2);
        *gptr<u32>(r7 + 0xc) = std::bit_cast<u32>(S3_2);  // (from the original)
        *gptr<u32>(r7 + 0x10) = std::bit_cast<u32>(S4_2);  // (from the original)
        *gptr<u32>(r7 + 0x14) = std::bit_cast<u32>(S5_2);  // (from the original)
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        guest::cpu()->s[2] = S2_2;
        guest::cpu()->s[3] = S3_2;
        guest::cpu()->s[4] = S4_2;
        guest::cpu()->s[5] = S5_2;
        u32 r0_5 = call_00314b04(r6, r7, r2_2, r3_2);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        if (r0_5 != 0) {
            do {
                u32 r1_2 = *gptr<u8>(r6 + 0x10u);  // (from the original)
                if (r4 == r1_2) {
                    gptr<Local_00527528_ea_1> ea_1 = gptr<Local_00527528_ea_1>(frame.at(0x48).addr());  // (from the original)
                    u32 r1_3 = ea_1->word_4;
                    r2_3 = ea_1->word_8;
                    r3_3 = ea_1->word_c;
                    u32 r6_2 = ea_1->word_10;
                    u32 r12_1 = ea_1->word_14;
                    gptr<Local_00527528_r7_1> r7_1 = gptr<Local_00527528_r7_1>(frame.at(0x30).addr());  // (from the original)
                    r7_1->word_0 = ea_1->word_0;
                    r7_1->word_4 = r1_3;
                    r7_1->word_8 = r2_3;
                    r7_1->word_c = r3_3;
                    r7_1->word_10 = r6_2;
                    r7_1->word_14 = r12_1;
                    goto L_5275f0;
                }
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                guest::cpu()->s[2] = S2;
                guest::cpu()->s[3] = S3;
                guest::cpu()->s[4] = S4;
                guest::cpu()->s[5] = S5;
                call_00314b58(r6, r1_2, r2, r3);
                u32 r2_4 = guest::cpu()->r[2];
                u32 r3_4 = guest::cpu()->r[3];
                r0_6 = call_00314b04(r6, r7, r2_4, r3_4);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
                S2 = guest::cpu()->s[2];
                S3 = guest::cpu()->s[3];
                S4 = guest::cpu()->s[4];
                S5 = guest::cpu()->s[5];
                guest::preempt();
            } while (r0_6 != 0);
        }
        ea_2 = gptr<Local_00527528_ea_2>(frame.at(0x18).addr());  // (from the original)
        r1_4 = ea_2->word_4;
        r2_3 = ea_2->word_8;
        r3_3 = ea_2->word_c;
        r6_3 = ea_2->word_10;
        r12_2 = ea_2->word_14;
        r7_2 = gptr<Local_00527528_r7_2>(frame.at(0x30).addr());  // (from the original)
        r7_2->word_0 = ea_2->word_0;
        r7_2->word_4 = r1_4;
        r7_2->word_8 = r2_3;
        r7_2->word_c = r3_3;
        r7_2->word_10 = r6_3;
        r7_2->word_14 = r12_2;
L_5275f0:;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        u32 r0_8 = call_00314b04(frame.at(0x30).addr(), frame.at(0x60).addr(), r2_3, r3_3);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        u32 zf_1 = r0_8 == 0;
        if (!zf_1) {
            *gptr<u32>(r8) = *gptr<u32>(frame.at(0x30).addr() + 8u);  // (from the original)
            *gptr<u32>(r9) = *frame.at<u32>(0x3c);  // (from the original)
            return 1u;
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0xeu);  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00527528
GUEST_EXPORT_FRAMED(0x00527528, d_00527528::f_00527528, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00527a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527a2c {

struct __attribute__((packed)) Local_00527a2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00527a2c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00527a2c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527a2c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00527a2c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00527a2c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00527a2c_ea_3, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_00527a2c_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00527a2c_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00527a2c_r0_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

void f_00527a2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_16 = 0;
    if (r3 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        return;
    }
    gptr<Local_00527a2c_ea_1> ea_1 = gptr<Local_00527a2c_ea_1>(frame.at(0x50).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r14;
    u32 r9_1 = r1;
    r8 = *frame.at<u32>(0x70);  // (from the original)
    r6 = r3;
    u32 r0_1 = call_001b1208(r9_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    r5 = r0_1;
    if (r0_1 != 0) {
        u32 r0_2 = 0xab7de4u;  // (from the original)
        if (r0 < 4u) {
            r0_2 += (r0 << 2);
        }
        r7 = *gptr<u32>(r0_2);
        gptr<Local_00527a2c_r0_3> r0_3 = gptr<Local_00527a2c_r0_3>(frame.at(0x40).addr());  // (from the original)
        r0_3->word_0 = r9_1;
        r0_3->word_4 = r2;
        u32 r0_4 = call_0057bb98(r0_3.addr(), r9_1, r2, guest::cpu()->r[3]);
        call_0052f224(frame.at(0).addr(), r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_00527a2c_ea_2> ea_2 = gptr<Local_00527a2c_ea_2>(frame.at(0x48).addr());  // (from the original)
        ea_2->word_0 = 7;
        ea_2->word_4 = 7;
        call_00748324(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x48).addr(), guest::cpu()->r[3]);  // (from the original)
        call_0074836c(frame.at(0x10).addr(), frame.at(0x30).addr(), r0_3.addr(), guest::cpu()->r[3]);  // (from the original)
        call_0074824c(frame.at(0x20).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00748284(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_10 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            do {
                if (s32(*frame.at<u32>(8)) >= 0 && s32(*frame.at<u32>(0xc)) >= 0) {  // (from the original)
                    u32 r0_11 = *frame.at<u32>(0xc) - *frame.at<u32>(0x14);  // (from the original)
                    u32 r0_12 = *frame.at<u32>(8) - *frame.at<u32>(0x10);  // (from the original)
                    u32 r4_3 = *gptr<u8>((r5 + (r0_11 + (r0_11 << 2) << 5)) + (r0_12 + (r0_12 << 2) << 1) + 8u);
                    u32 r0_13 = call_006cc934(r6, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_13 != 0) {
                        if (r4_3 == 0 || r4_3 == 0xa1u) {  // (from the original)
                            goto L_527be8;
                        }
                    } else if (r4_3 == 0) {
                        goto L_527be8;
                    }
                    call_002e5a4c(r7, *frame.at<u32>(8), *frame.at<u32>(0xc), r8);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
L_527be8:;
                call_0052f144(frame.at(0).addr(), r1, r2, r3);
                r0_16 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_16 != 0);
        }
    }
    gptr<Local_00527a2c_ea_3> ea_3 = gptr<Local_00527a2c_ea_3>(frame.at(0x50).addr());  // (from the original)
    u32 r4_5 = ea_3->word_0;
    u32 r5_1 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_1 = ea_3->word_10;
    u32 r9_3 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_1;
}

}  // namespace d_00527a2c
GUEST_EXPORT(0x00527a2c, d_00527a2c::f_00527a2c);

// f_005284b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005284b8 {

struct __attribute__((packed)) Local_005284b8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005284b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005284b8_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_005284b8_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_005284b8_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_005284b8_r0_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

u32 f_005284b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x54);  // the original's stack frame
    u32 r4_4 = 0;
    u32 r1_6 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r8_1 = r1;
    u32 r7 = r3;
    u32 r0_1 = call_001b1208(r8_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    u32 r5 = r0_1;
    if (r0_1 != 0) {
        u32 r0_2 = 0xab7de4u;  // (from the original)
        if (r0 < 4u) {
            r0_2 += (r0 << 2);
        }
        u32 r6 = *gptr<u32>(r0_2);
        gptr<Local_005284b8_r0_3> r0_3 = gptr<Local_005284b8_r0_3>(frame.at(0x40).addr());  // (from the original)
        r0_3->word_0 = r8_1;
        r0_3->word_4 = r2;
        u32 r0_4 = call_0057bb98(r0_3.addr(), r8_1, r2, guest::cpu()->r[3]);
        call_0052f224(frame.at(0).addr(), r0_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        gptr<Local_005284b8_ea_1> ea_1 = gptr<Local_005284b8_ea_1>(frame.at(0x48).addr());  // (from the original)
        ea_1->word_0 = 7;
        ea_1->word_4 = 7;
        call_00748324(frame.at(0x30).addr(), frame.at(0).addr(), frame.at(0x48).addr(), guest::cpu()->r[3]);  // (from the original)
        call_0074836c(frame.at(0x10).addr(), frame.at(0x30).addr(), r0_3.addr(), guest::cpu()->r[3]);  // (from the original)
        call_0074824c(frame.at(0x20).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00748284(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_10 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_10 != 0) {
            do {
                if (s32(*frame.at<u32>(8)) >= 0 && s32(*frame.at<u32>(0xc)) >= 0) {  // (from the original)
                    u32 r0_11 = *frame.at<u32>(0xc) - *frame.at<u32>(0x14);  // (from the original)
                    u32 r0_12 = *frame.at<u32>(8) - *frame.at<u32>(0x10);  // (from the original)
                    u32 r4_3 = *gptr<u8>((r5 + (r0_11 + (r0_11 << 2) << 5)) + (r0_12 + (r0_12 << 2) << 1) + 8u);
                    u32 r0_13 = call_006cc934(r7, r1, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_13 == 0) {
                        goto L_528664;
                    }
                    if (r4_3 != 0xa1u) {  // (from the original)
                        goto L_52866c;
                    }
L_528630:;
                    r4_4 = *frame.at<u32>(0xc);  // (from the original)
                    r1_6 = *frame.at<u32>(8);
                    r3_8 = ~0u;
                    call_002e5a4c(r6, r1_6, r4_4, r3_8);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    goto L_52866c;
L_528664:;
                    if (r4_3 != 0) {
                        guest::preempt();
                        goto L_528630;
                    }
                }
L_52866c:;
                call_0052f144(frame.at(0).addr(), r1, r2, r3);
                r0_16 = call_007481ec(frame.at(0).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                guest::preempt();
            } while (r0_16 != 0);
        }
        r0_1 = frame.at(0x10).addr();  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005284b8
GUEST_EXPORT_FRAMED(0x005284b8, d_005284b8::f_005284b8, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00528860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528860 {


u32 f_00528860(u32 r0, u32 r1, u32 r2) {
    u32 r12 = r0;
    r0 = 0u;
    u32 r4 = r0;
    u32 r3 = r2 - 1u;
    u32 r5 = 0xc0u;  // (from the original)
    u32 r6 = 0xe0u;  // (from the original)
    u32 r7 = 0x80u;  // (from the original)
L_5288fc:;
    u32 r2_1 = *gptr<u16>(r12);
    if (r2_1 != 0 && r3 != 0 && r4 == 0) {
        if (r2_1 < 0x80u) {  // (from the original)
            r3 -= 1u;
            r0 += 1u;
            *gptr<u8>(r1) = u8(r2_1);
            r1 += 1u;
        } else if (s32(r2_1) < 0x800) {  // (from the original)
            *gptr<u8>(r1) = u8(r5 | u32(s32(r2_1) >> 6));
            u32 r1_1 = r1 + 1u;
            r3 -= 2u;
            r0 += 2u;
            *gptr<u8>(r1_1) = u8(r2_1 & 0x3fu | 0x80u);  // (from the original)
            r1 = r1_1 + 1u;
        } else if (s32(r2_1) >= 0x10000) {  // (from the original)
            r4 = 1u;
        } else {
            *gptr<u8>(r1) = u8(r6 | u32(s32(r2_1) >> 0xc));  // (from the original)
            u32 r1_2 = r1 + 1u;
            *gptr<u8>(r1_2) = u8(r7 | r2_1 >> 6u & 0x3fu);  // (from the original)
            u32 r1_3 = r1_2 + 1u;
            r3 -= 3u;
            r0 += 3u;
            *gptr<u8>(r1_3) = u8(r2_1 & 0x3fu | 0x80u);  // (from the original)
            r1 = r1_3 + 1u;
        }
        r12 += 2u;
        guest::preempt();
        goto L_5288fc;
    }
    *gptr<u8>(r1) = 0;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00528860
GUEST_EXPORT_FRAMED(0x00528860, d_00528860::f_00528860, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_00528924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528924 {


void f_00528924(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x14;  // (from the original)
    u32 r6 = 0u;
    u32 r4 = r1;
    u32 r5 = r6;
    r2 -= 1u;
    goto L_5289cc;
L_5289c8:;
    r0 += 1u;
L_5289cc:;
    u32 r3_1 = *gptr<s8>(r0);
    if (r3_1 != 0 && r2 != 0) {
        if (r5 == 0) {
            u32 r12_1 = r3_1 & 0xffu;  // (from the original)
            if (r12_1 < 0x80u) {  // (from the original)
                r2 -= 1u;
                *gptr<u16>(r4) = u16(sxtb(r12_1));
                r4 += 2u;
            } else if (r12_1 - 0xc2u <= 0x1du) {  // (from the original)
                u32 ea_1 = r0 + 1u;
                r0 = ea_1;
                r2 -= 1u;
                *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea_1)) & 0xffu) + ((r3_1 << 0x18 >> 0x12) - 0x3000u) - 0x80u);  // (from the original)
                r4 += 2u;
            } else {
                if (r12_1 - 0xe0u > 0xfu) {  // (from the original)
                    u32 r3_2 = r12_1 - 0xf0u;  // (from the original)
                    u32 zf_1 = r3_2 == 4u;
                    u32 cf_1 = r3_2 >= 4u;
                    if (cf_1 && !zf_1) {
                        u32 r3_3 = r12_1 - 0xc0u;  // (from the original)
                        zf_1 = r3_3 == 1u;
                        cf_1 = r3_3 >= 1u;
                    }
                    if (!!cf_1 && !zf_1) {
                        u32 r3_4 = r12_1 - 0xf5u;  // (from the original)
                        u32 zf_2 = r3_4 == 2u;
                        u32 cf_2 = r3_4 >= 2u;
                        if (cf_2 && !zf_2) {
                            u32 r3_5 = r12_1 - 0xf8u;  // (from the original)
                            u32 zf_3 = r3_5 == 3u;
                            u32 cf_3 = r3_5 >= 3u;
                        }
                    }
                    r5 = 1u;
                    guest::preempt();
                    goto L_5289c8;
                }
                u32 r12_2 = *gptr<u8>(r0 + 1u);
                u32 ea_3 = r0 + 2u;
                r0 = ea_3;
                r2 -= 1u;
                *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea_3)) & 0xffu) + ((r3_1 << 0xc) - 0xe0000u + ((r12_2 & 0xffu) << 6)) - 0x2080u);  // (from the original)
                r4 += 2u;
            }
            r6 += 1u;
            guest::preempt();
            goto L_5289c8;
        }
    } else if (r5 == 0) {
        *gptr<u16>(r4) = 0;
        r13 += 0x14;  // (from the original)
        guest::cpu()->r[1] = 0u;
        guest::cpu()->r[13] = r13;
        return;
    }
    r4 = r1;
    *gptr<u16>(r4) = 0;
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00528924
GUEST_EXPORT(0x00528924, d_00528924::f_00528924);

// f_00528b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528b00 {

inline guest::global<u32, 0x00950464> global_00950464;  // (from the original)
inline guest::global<u32, 0x00950468> global_00950468;  // (from the original)
inline guest::global<u32, 0x0095046c> global_0095046c;  // (from the original)
inline constexpr guest::Function<0x001509dc, u32(u32, u32, u32)> call_001509dc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_00528b00(u32 r0, u32 r1, u32 r2) {
    u32 r4 = 0;
    u32 r6 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    u32 r5 = 0u;
    if (r0_1 == 0x9du) {  // (from the original)
        u32 ea_1 = r0 + 0xcu;  // (from the original)
        u32 r0_2 = *gptr<u32>(ea_1);
        r6 = 0x950474u;  // (from the original)
        if (r0_2 != 0) {
            r5 = r0_2 + ea_1;
        }
        r4 = 0u;
        do {
            r0_4 = call_002fa90c(*gptr<u32>(r6 + (r4 << 2)), r5, r2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                return r0_4;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0xfu);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r0_5 = call_002f74c8(r0_1, r1_1, r2, guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_5 == 0x9eu) {  // (from the original)
        u32 ea_2 = r0 + 0xcu;  // (from the original)
        u32 r0_6 = *gptr<u32>(ea_2);
        if (r0_6 != 0) {
            r5 = r0_6 + ea_2;
        }
        r0_4 = call_002fa90c(*global_00950464, r5, r2_1);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            return r0_4;
        }
        return 1u;
    }
    u32 r0_8 = call_002f74c8(r0_5, r1_3, r2_1, guest::cpu()->r[3]);
    u32 r0_9 = call_002f74e0(8u, r0_8, guest::cpu()->r[2]);
    r2 = guest::cpu()->r[2];
    u32 zf_1 = r0_9 == 0;
    u32 ea_3 = r0 + 0xcu;  // (from the original)
    u32 r0_10 = *gptr<u32>(ea_3);
    if (zf_1) {
        r6 = 0x9504b0u;  // (from the original)
        if (r0_10 != 0) {
            r5 = r0_10 + ea_3;
        }
        r4 = 0u;
        do {
            r0_4 = call_002fa90c(*gptr<u32>(r6 + (r4 << 2)), r5, r2);
            r1_2 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            if (r0_4 == 0) {
                return r0_4;
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0x3e);  // (from the original)
        u32 r0_12 = call_002f74c8(r0_4, r1_2, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_12 == 1u) {
            r0_4 = call_002fa90c(*global_0095046c, r5, r2);
            r1_2 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                return r0_4;
            }
        }
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    u32 r4_1 = r0_10 == 0 ? r5 : ea_3 + r0_10;
    u32 r0_14 = call_001509dc(0x528c54u, r4_1, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        return 1u;
    }
    u32 r0_16 = call_002fa90c(*global_00950468, r4_1, 2u);
    r1_2 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        return 1u;
    } else {
        r0_4 = 0u;
    }
    return r0_4;
}

}  // namespace d_00528b00
GUEST_EXPORT_FRAMED(0x00528b00, d_00528b00::f_00528b00, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00528c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528c6c {

struct __attribute__((packed)) Object_00528c6c_1 {
    u8 unknown_0[0x854107];  // (not used here)
    u8 byte_854107;
    u8 unknown_854108[0x3];  // (not used here)
    u8 byte_85410b;
    u8 unknown_85410c[0x3];  // (not used here)
    u8 byte_85410f;
    u8 unknown_854110[0x3];  // (not used here)
    u8 byte_854113;
};
GUEST_OFFSET(Object_00528c6c_1, byte_854107, 0x854107);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410b, 0x85410b);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410f, 0x85410f);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_854113, 0x854113);  // (from the original)


u32 f_00528c6c(u32 r0, gptr<Object_00528c6c_1> arg1) {
    if (r0 == 0x1400u) {  // (from the original)
        return arg1->byte_854107;
    }
    u32 r0_2 = r0 - 0x1401u;  // (from the original)
    if (r0_2 == 0) {
        return arg1->byte_85410b;
    }
    if (r0_2 == 1u) {
        return arg1->byte_85410f;
    }
    return r0_2 == 5u ? u32(arg1->byte_854113) : 0u;
}

}  // namespace d_00528c6c
GUEST_EXPORT(0x00528c6c, d_00528c6c::f_00528c6c);

// f_00528ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528ce0 {

inline guest::global<u32, 0x00528d44> global_00528d44;  // (from the original)
inline guest::global<u32, 0x00528d48> global_00528d48;  // (from the original)

u32 f_00528ce0(u32 r0_unused, u32 r1_unused, u32 r2, float S0, float S1, float S2) {
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S1_1 = (S2 + S0 * S1) * std::bit_cast<float>(*global_00528d44);
    float S0_1 = S1_1 * std::bit_cast<float>(*global_00528d48);
    u32 r0_1 = std::bit_cast<u32>(S0_1);
    u32 r1_1 = r0_1 & ~0x80000000u;  // (from the original)
    if (r1_1 != 0) {
        r1_1 = (r0_1 >> 0x17u & 0xffu) - 0x40u;  // (from the original)
        if (s32(r1_1) < 0) {
            r0_2 = r0_1 >> 0x1f << 0x17;  // (from the original)
            *gptr<u32>(r2) = r0_2;
            r2_1 = r2 + 4u;
            *gptr<u32>(r2_1) = 0xf004e;  // (from the original)
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r2_1 + 4u;
        }
    }
    r0_2 = r0_1 >> 7u & 0xffffu | r1_1 << 0x10 | r0_1 >> 0x1f << 0x17;  // (from the original)
    *gptr<u32>(r2) = r0_2;
    r2_1 = r2 + 4u;
    *gptr<u32>(r2_1) = 0xf004e;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r2_1 + 4u;
}

}  // namespace d_00528ce0
GUEST_EXPORT(0x00528ce0, d_00528ce0::f_00528ce0);

// f_00528d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528d60 {

struct __attribute__((packed)) Object_00528d60_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00528d60_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00528d60_3 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_00528d60_3, word_ec, 0xec);  // (from the original)

struct __attribute__((packed)) Local_00528d60_r0_12 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00528d60_r0_12, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00528d60_r0_12, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x009825ec> global_009825ec;  // (from the original)
inline constexpr guest::Function<0x00201ff4, u32(u32, u32, u32, u32)> call_00201ff4;  // (from the original)
inline constexpr guest::Function<0x00202078, u32(u32, u32, u32, u32)> call_00202078;  // (from the original)
inline constexpr guest::Function<0x002021d4, u32(u32, u32, u32, u32)> call_002021d4;  // (from the original)
inline constexpr guest::Function<0x00202370, u32(u32, u32, u32, u32)> call_00202370;  // (from the original)
inline constexpr guest::Function<0x00202740, u32(u32, u32, u32, u32)> call_00202740;  // (from the original)
inline constexpr guest::Function<0x002029fc, u32(u32, u32, u32, u32)> call_002029fc;  // (from the original)
inline constexpr guest::Function<0x00202c78, u32(u32, u32, u32, u32)> call_00202c78;  // (from the original)
inline constexpr guest::Function<0x00202ef4, u32(u32, u32, u32, u32)> call_00202ef4;  // (from the original)
inline constexpr guest::Function<0x002ee864, u32(u32, u32, u32, u32)> call_002ee864;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x00613734, u32(u32, u32, u32, u32)> call_00613734;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

void f_00528d60(gptr<Object_00528d60_0> arg0, u32 r1, u32 r2, gptr<Object_00528d60_3> arg3) {
    guest::StackFrame frame(0x78);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_24 = 0;
    u32 r6 = r1;
    u32 r8 = r0;
    arg0->byte_0 = u8(r2);
    u32 r5_1 = arg3->word_ec;
    u32 r0_1 = call_0055cb58(r6, r2, r2, r3);
    u32 r2_1 = u64(r0_1) * r5_1 >> 0x20;  // (from the original)
    call_002ee864(r3, frame.at(0x50).addr(), r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 r3_2 = guest::cpu()->r[3];
    if (r2 == 0) {
        call_00202078(frame.at(0).addr(), frame.at(0x50).addr(), 0x894eccu, r3_2);  // (from the original)
    } else {
        call_00202078(frame.at(0).addr(), frame.at(0x50).addr(), 0x894ef6u, r3_2);  // (from the original)
    }
    *frame.at<u8>(0xa) = 4;  // (from the original)
    call_00202370(frame.at(0).addr(), 0u, 1u, r6);
    call_00202370(frame.at(0).addr(), 0u, 2u, r6);
    call_00202370(frame.at(0).addr(), 0u, 3u, r6);
    call_00202740(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00202c78(frame.at(0).addr(), r6, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_9 = frame.at(0).addr();
    if (r2 == 0) {
        call_00202ef4(r0_9, r6, r2_4, r3_5);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    } else {
        call_002029fc(r0_9, r6, r2_4, r3_5);
        r1_4 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
    }
    call_002021d4(frame.at(0).addr(), r1_4, r2_5, r3_6);
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    if ((*global_009825ec & 1u) == 0) {
        u32 r0_11 = call_002fe7dc(0x9825ecu, guest::cpu()->r[1], r2_6, r3_7);  // (from the original)
        r2_6 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            gptr<Local_00528d60_r0_12> r0_12 = gptr<Local_00528d60_r0_12>(frame.at(0x30).addr());  // (from the original)
            r0_12->word_0 = 6;
            r0_12->word_4 = 5;
            u32 r0_13 = call_0052f074(r0_12.addr(), 6u, 5u, r3_7);
            call_0052f200(0xaf8484u, r0_13, r0_12.addr(), guest::cpu()->r[3]);  // (from the original)
            r3_7 = guest::cpu()->r[3];
            r2_6 = 0x100000u;  // (from the original)
        }
    }
    call_0074824c(frame.at(0x40).addr(), 0xaf8484u, r2_6, r3_7);  // (from the original)
    call_00748284(frame.at(0x30).addr(), 0xaf8484u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = frame.at(0x30).addr();  // (from the original)
    u32 r0_17 = call_007481ec(r0_16, frame.at(0x40).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_17 == 0) {
    } else {
        u32 r5 = frame.at(0).addr();
        do {
            u32 r0_18 = call_00613734(r8, *frame.at<u32>(0x38), *frame.at<u32>(0x3c), r3);  // (from the original)
            u32 r7_1 = *frame.at<u32>(0x38);  // (from the original)
            u32 r0_19 = *frame.at<u32>(0x3c);  // (from the original)
            u32 r0_20 = *gptr<u8>(r7_1 + ((r0_19 << 3) - r0_19 + r5));
            u32 r0_21 = call_00201ff4(r0_20, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
            *gptr<u16>(r0_18) = u16(r0_21);
            call_0052f144(frame.at(0x30).addr(), r0_21, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r0_24 = call_007481ec(frame.at(0x30).addr(), frame.at(0x40).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_24 != 0);
    }
}

}  // namespace d_00528d60
GUEST_EXPORT_FRAMED(0x00528d60, d_00528d60::f_00528d60, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00529334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529334 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> call_0076ce3c;  // (from the original)

void f_00529334(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_6 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    call_002fcbb0(frame.at(0).addr(), 0x23ebu, guest::cpu()->r[2]);  // (from the original)
    call_002fc8e8(r0_1, frame.at(0).addr(), guest::cpu()->r[2]);
    *gptr<u8>(r0_1 + 4u) = 0;
    u32 r0_3 = call_002f74c8(0u, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_4 = call_002f74e0(0x80u, r0_3, guest::cpu()->r[2]);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        u32 r0_5 = call_002f74c8(r0_4, r1_3, r2_5);
        r2_6 = guest::cpu()->r[2];
        r0_6 = call_006f9c08(r0_5, guest::cpu()->r[1], r2_6);
        r5_1 = r0_6;
        if (r0_6 == 0) {
            return;
        }
    } else {
        u32 r0_7 = call_002f74c8(r0_4, r1_3, r2_5);
        u32 r0_8 = call_002f74e0(0x40u, r0_7, guest::cpu()->r[2]);  // (from the original)
        u32 r1_5 = guest::cpu()->r[1];
        u32 r2_8 = guest::cpu()->r[2];
        if (r0_8 != 0) {
            u32 r0_9 = call_002f74c8(r0_8, r1_5, r2_8);
            u32 r0_10 = call_00313440(r0_9);
            u32 r0_11 = call_002fae84(r0_10);
            u32 r0_12 = call_002fb310(r0_11);
            u32 r0_14 = call_003058c8(r0_12 + 4u, r0_10);
            call_002fc934(frame.at(4).addr(), r0_14 + 0x24a6u);  // (from the original)
            call_002fc8e8(r0_1, frame.at(4).addr(), r2_8);
            return;
        }
        u32 r0_16 = call_002f74c8(r0_8, r1_5, r2_8);
        u32 r0_17 = call_002f74e0(0x2000u, r0_16, guest::cpu()->r[2]);  // (from the original)
        u32 r1_8 = guest::cpu()->r[1];
        u32 r2_10 = guest::cpu()->r[2];
        if (r0_17 != 0) {
            u32 r0_18 = call_002f74c8(r0_17, r1_8, r2_10);
            u32 r0_19 = r0_18 - 0x56u;  // (from the original)
            u32 r5_2 = r0_19 & 0xffu;  // (from the original)
            u32 r0_20 = call_002fb328(r0_19);
            u32 r0_22 = call_0076ce3c(r0_20 + 0x80u - 0xfff951c8u, r5_2);  // (from the original)
            u32 r0_24 = call_007203f0(r0_22 + 2u);
            u32 r0_25 = call_002fc8e8(r0_1, r0_24, r2_10);
            u32 r0_26 = call_002fb328(r0_25);
            u32 r0_28 = call_0076ce3c(r0_26 + 0x80u - 0xfff951c8u, r5_2);  // (from the original)
            *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r0_28 + 0x23u)));  // (from the original)
            return;
        }
        u32 r0_29 = call_002f74c8(r0_17, r1_8, r2_10);
        u32 r0_30 = call_002f74e0(0x4000u, r0_29, guest::cpu()->r[2]);  // (from the original)
        if (r0_30 == 0) {
            return;
        }
        u32 r0_31 = call_002f74c8(r0_30, guest::cpu()->r[1], guest::cpu()->r[2]);
        r2_6 = guest::cpu()->r[2];
        r0_6 = call_006f9c08(r0_31, guest::cpu()->r[1], r2_6);
        r5_1 = r0_6;
        if (r0_6 == 0) {
            return;
        }
    }
    u32 r0_32 = call_007203f0(r0_6);
    call_002fc8e8(r0_1, r0_32, r2_6);
    *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r5_1 + 0x21u)));  // (from the original)
}

}  // namespace d_00529334
GUEST_EXPORT_FRAMED(0x00529334, d_00529334::f_00529334, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052953c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052953c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32)> call_0076ce3c;  // (from the original)

void f_0052953c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    call_002fcbb0(frame.at(0).addr(), 0x234cu, guest::cpu()->r[2]);  // (from the original)
    u32 r0_3 = call_002fc8e8(r0_1, frame.at(0).addr(), guest::cpu()->r[2]);
    *gptr<u8>(r0_1 + 4u) = 0;
    u32 r0_4 = call_002f74c8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r0_5 = call_002f74e0(0x80u, r0_4, guest::cpu()->r[2]);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        u32 r0_6 = call_002f74c8(r0_5, r1_3, r2_5);
        r2_6 = guest::cpu()->r[2];
        r0_7 = call_006f9c08(r0_6, guest::cpu()->r[1], r2_6);
        r5_1 = r0_7;
        if (r0_7 == 0) {
            return;
        }
    } else {
        u32 r0_8 = call_002f74c8(r0_5, r1_3, r2_5);
        u32 r0_9 = call_002f74e0(0x40u, r0_8, guest::cpu()->r[2]);  // (from the original)
        u32 r1_5 = guest::cpu()->r[1];
        u32 r2_8 = guest::cpu()->r[2];
        if (r0_9 != 0) {
            u32 r0_10 = call_002f74c8(r0_9, r1_5, r2_8);
            u32 r0_11 = call_00313440(r0_10);
            u32 r0_12 = call_002fae84(r0_11);
            u32 r0_13 = call_002fb310(r0_12);
            u32 r0_15 = call_003058c8(r0_13 + 4u, r0_11);
            call_002fc934(frame.at(4).addr(), r0_15 + 0x24a2u);  // (from the original)
            call_002fc8e8(r0_1, frame.at(4).addr(), r2_8);
            *gptr<u8>(r0_1 + 4u) = 0;
            return;
        }
        u32 r0_17 = call_002f74c8(r0_9, r1_5, r2_8);
        u32 r0_18 = call_002f74e0(0x2000u, r0_17, guest::cpu()->r[2]);  // (from the original)
        u32 r1_8 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        if (r0_18 != 0) {
            u32 r0_19 = call_002f74c8(r0_18, r1_8, r2_6);
            u32 r0_20 = r0_19 - 0x56u;  // (from the original)
            u32 r0_21 = call_002fb328(r0_20);
            u32 r0_23 = call_0076ce3c(r0_21 + 0x6aeb8u, r0_20 & 0xffu);  // (from the original)
            u32 r0_24 = r0_23 + 2u;
            r5_1 = r0_24;
            u32 r0_25 = call_0072031c(r0_24);
            call_002fc8e8(frame.at(0).addr(), r0_25, r2_6);
            r0_7 = r5_1;
        } else {
            u32 r0_27 = call_002f74c8(r0_18, r1_8, r2_6);
            u32 r0_28 = call_002f74e0(0x4000u, r0_27, guest::cpu()->r[2]);  // (from the original)
            if (r0_28 == 0) {
                return;
            }
            u32 r0_29 = call_002f74c8(r0_28, guest::cpu()->r[1], guest::cpu()->r[2]);
            r2_6 = guest::cpu()->r[2];
            r0_7 = call_006f9c08(r0_29, guest::cpu()->r[1], r2_6);
            r5_1 = r0_7;
            if (r0_7 == 0) {
                return;
            }
        }
    }
    u32 r0_30 = call_0072031c(r0_7);
    call_002fc8e8(r0_1, r0_30, r2_6);
    *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r5_1 + 0x20u)));  // (from the original)
}

}  // namespace d_0052953c
GUEST_EXPORT_FRAMED(0x0052953c, d_0052953c::f_0052953c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00529c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529c80 {

inline guest::global<u16, 0x00887402> global_00887402;  // (from the original)
inline guest::global<u16, 0x0094e476> global_0094e476;  // (from the original)
inline constexpr guest::Function<0x0051fc48, u32(u32, u32, u32, u32)> call_0051fc48;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529c80(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_2 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = *global_00887402;
    if (r0 >= r0_1) {
        r0_2 = 0u;
    } else {
        *global_0094e476 = u16(r0);
        u32 r0_3 = call_0051fe30(r0_1, r1, r2, r3);
        *frame.at<u32>(0) = r3;
        u32 r0_4 = call_0051fc48(r0_3, r0, r1, r2);
        r1 = ~0u;
        u32 r4_1 = r0_4;
        *global_0094e476 = u16(r1);
        if (r0_4 != 0 && u32(*gptr<s8>(r0_4 + 0xfu)) != 0) {  // (from the original)
            r4_1 = 0u;
        }
        r0_2 = r4_1;
    }
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00529c80
GUEST_EXPORT_FRAMED(0x00529c80, d_00529c80::f_00529c80, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00529cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529cf4 {


u32 f_00529cf4() {
    u32 r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529cf4
GUEST_EXPORT_FRAMED(0x00529cf4, d_00529cf4::f_00529cf4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d08 {

inline guest::global<u16, 0x00887402> global_00887402;  // (from the original)
inline guest::global<u16, 0x0094e476> global_0094e476;  // (from the original)
inline constexpr guest::Function<0x0051fc14, u32(u32, u32, u32, u32)> call_0051fc14;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529d08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = *global_00887402;
    if (r0 < r0_1) {
        *global_0094e476 = u16(r0);
        u32 r0_2 = call_0051fe30(r0_1, r1, r2, r3);
        u32 r0_3 = call_0051fc14(r0_2, r0, r1, r2);
        r1 = ~0u;
        *global_0094e476 = u16(r1);
        if (r0_3 == 0 || u32(*gptr<s8>(r0_3 + 0xfu)) == 0) {  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_3;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00529d08
GUEST_EXPORT_FRAMED(0x00529d08, d_00529d08::f_00529d08, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00529d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d78 {


u32 f_00529d78() {
    u32 r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529d78
GUEST_EXPORT_FRAMED(0x00529d78, d_00529d78::f_00529d78, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d8c {


u32 f_00529d8c() {
    u32 r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529d8c
GUEST_EXPORT_FRAMED(0x00529d8c, d_00529d8c::f_00529d8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529da0 {


u32 f_00529da0() {
    u32 r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529da0
GUEST_EXPORT_FRAMED(0x00529da0, d_00529da0::f_00529da0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00529ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529ddc {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32)> call_00779500;  // (from the original)

u32 f_00529ddc(u32 r0, u32 r1) {
    u32 r0_1 = call_00779500(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        call_00301444(r0_1, r0);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00529ddc
GUEST_EXPORT_FRAMED(0x00529ddc, d_00529ddc::f_00529ddc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052a3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a3b8 {

struct __attribute__((packed)) Local_0052a3b8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052a3b8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0052a3b8_r3_13 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052a3b8_r3_13, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_r3_13, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_r3_13, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0052a3b8_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052a3b8_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_r3_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_r3_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0052a3b8_r9_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052a3b8_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052a3b8_r9_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00952638> global_00952638;  // (from the original)
inline guest::global<u32, 0x0095263c> global_0095263c;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052a5ac, u32(u32, u32, u32, u32)> call_0052a5ac;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052a3b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00569d50(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r0_1 + 4u);
    u32 r8_1 = 0x484u;  // (from the original)
    u32 r0_2 = call_002fd108(r8_1, r1_1, 4u, guest::cpu()->r[3]);
    call_002f825c(r0_2, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_2 + 4u) = 0;
    *gptr<u8>(r0_2 + 8u) = 0;
    gptr<Local_0052a3b8_ea_3> ea_3 = gptr<Local_0052a3b8_ea_3>(0x85edccu);  // (from the original)
    u32 r1_2 = ea_3->word_0;
    u32 r2_2 = ea_3->word_4;
    gptr<Local_0052a3b8_r3_3> r3_3 = gptr<Local_0052a3b8_r3_3>(r0_2 + 0xcu);  // (from the original)
    r3_3->word_0 = r1_2;
    r3_3->word_4 = r2_2;
    r3_3->word_8 = 0;
    *gptr<u8>(r0_2 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0_2) = 0x8f74e0;  // (from the original)
    *gptr<u32>(r0_2 + 0x20u) = 0;  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x24u, r1_2, r2_2, r3_3.addr());  // (from the original)
    u32 r0_6 = call_001207d8(r0_4 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00125aec(r0_12 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00125aec(r0_14 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_17 = r0_16 - 0x458u;  // (from the original)
    *global_00952638 = r0_17;
    call_0052a5ac(r0_17, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = call_002fd108(r8_1, *gptr<u32>(r0_1 + 4u), 4u, guest::cpu()->r[3]);
    call_002f825c(r0_18, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052a3b8_r9_1> r9_1 = gptr<Local_0052a3b8_r9_1>(0x85edccu);  // (from the original)
    *gptr<u32>(r0_18 + 4u) = 0;
    *gptr<u8>(r0_18 + 8u) = 0;
    u32 r1_10 = r9_1->word_0;
    u32 r2_11 = r9_1->word_4;
    gptr<Local_0052a3b8_r3_13> r3_13 = gptr<Local_0052a3b8_r3_13>(r0_18 + 0xcu);  // (from the original)
    r3_13->word_0 = r1_10;
    r3_13->word_4 = r2_11;
    r3_13->word_8 = 0;
    *gptr<u8>(r0_18 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0_18 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0_18) = 0x8f74e0;  // (from the original)
    *gptr<u32>(r0_18 + 0x20u) = 0;  // (from the original)
    u32 r0_20 = call_00125e3c(r0_18 + 0x24u, r1_10, r2_11, r3_13.addr());  // (from the original)
    u32 r0_22 = call_001207d8(r0_20 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_00125aec(r0_22 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_26 = call_00125aec(r0_24 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_00125aec(r0_26 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_00125aec(r0_28 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_00125aec(r0_30 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_33 = r0_32 - 0x458u;  // (from the original)
    *global_0095263c = r0_33;
    frame.release();
    return call_0052a5ac(r0_33, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052a3b8
GUEST_EXPORT(0x0052a3b8, d_0052a3b8::f_0052a3b8);

// f_0052a508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a508 {

inline guest::global<u32, 0x0052a59c> global_0052a59c;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

void f_0052a508(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_004b4fc0(r0 + 0x24u, 0x52a590u, 1u, r3);  // (from the original)
    call_00568630(r0 + 0x24u, r0 + 0x3b8u, r0_2, 0u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_2 = std::bit_cast<float>(*global_0052a59c);
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0 + 0x3b8u, r1_2, r2_1, r3_1);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    call_00568c10(r0 + 0x24u, r1_3, r2_2, r3_2);  // (from the original)
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_7 = call_004b4fc0(r0 + 0x24u, 0x52a590u, 1u, r3_3);  // (from the original)
    call_00568984(r0 + 0x24u, r0 + 0x3b8u, r0_7, 0u);  // (from the original)
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_10 = call_0056878c(r0 + 0x24u, 0x52a5a0u, r2_3, r3_4);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r1_5 = u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(r1_5);  // (from the original)
    frame.release();
    call_00568c10(r0 + 0x24u, r1_5, r2_4, r3_5);  // (from the original)
    return;
}

}  // namespace d_0052a508
GUEST_EXPORT(0x0052a508, d_0052a508::f_0052a508);

// f_0052a870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a870 {

struct __attribute__((packed)) Object_0052a870_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052a870_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052a870_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0052a870_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052a870_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052a870_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0085edc4> global_0085edc4;  // (from the original)
inline guest::global<u32, 0x0085edc8> global_0085edc8;  // (from the original)

u32 f_0052a870(gptr<Object_0052a870_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_0085edc8;
    if (r3_1 == *global_0085edc4) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_52a8b0;
        }
        if (arg0->word_10 != r1_1) {
            goto L_52a8b8;
        }
L_52a8b0:;
        r4_1 = 1u;
        goto L_52a8bc;
    }
L_52a8b8:;
    r4_1 = 0u;
L_52a8bc:;
    gptr<Local_0052a870_ea_1> ea_1 = gptr<Local_0052a870_ea_1>(0x85edb4u);  // (from the original)
    u32 r1_2 = ea_1->word_4;
    if (r3_1 == ea_1->word_0) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_2) & 1u) == 0) {
            return 1u | r4_1;
        }
        if (arg0->word_10 != r1_2) {
            return 0u | r4_1;
        }
        return 1u | r4_1;
    }
    return 0u | r4_1;
}

}  // namespace d_0052a870
GUEST_EXPORT_FRAMED(0x0052a870, d_0052a870::f_0052a870, 0x10);  // pushes {r4} first, as the original

// f_0052ab60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ab60 {

inline constexpr guest::Function<0x0011493d, u32(u32, u32, u32, u32)> call_0011493c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)

void f_0052ab60(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    call_00303cdc(r0, r1, r2, r3);
    *gptr<u8>(r0 + 0x16u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x17u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x18u) = 0;  // (from the original)
    *gptr<u16>(r0 + 0xeu) = 0;  // (from the original)
    u32 r0_1 = call_002ff6f8(5u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_006bbd54(frame.at(0).addr(), 0x33u, r0_1, guest::cpu()->r[3]);  // (from the original)
    call_002fc8e8(r0 + 8u, r0_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0011493c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052ab60
GUEST_EXPORT_FRAMED(0x0052ab60, d_0052ab60::f_0052ab60, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052abd8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005291b0, u32(u32, u32, u32, u32)> call_005291b0;  // (from the original)
inline constexpr guest::Function<0x0052984c, u32(u32, u32, u32, u32)> call_0052984c;  // (from the original)
inline constexpr guest::Function<0x007ca090, u32(u32, u32, u32, u32)> call_007ca090;  // (from the original)

u32 f_0052abd8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = 0;
    u32 r7 = 0;
    u32 r1_1 = 0;
    u32 r8 = 0u;
    u32 r6 = r0;
    u32 r3_1 = r8 << 0x10 & 0xff0000u;  // (from the original)
    u32 r2_1 = (0xc8u << 8 & 0xff00u | (0xc8u | r2 & ~0xffu) & ~0xff00u) & ~0xff0000u;  // (from the original)
    u32 r5 = r1;
    u32 r4_1 = r2_1 | r3_1;
    u32 r0_2 = call_002fc934(frame.at(8).addr(), r1, r2_1, r3_1);
    *gptr<u32>(r0_2 + 4u) = 0;
    *gptr<u32>(r0_2 + 8u) = 0;
    u32 r2_2 = r4_1 >> 8u & 0xffu;  // (from the original)
    u32 r3_2 = r4_1 >> 0x10u & 0xffu;  // (from the original)
    *gptr<u8>(r0_2 + 0xcu) = u8(r4_1);  // (from the original)
    *gptr<u8>(r0_2 + 0xdu) = u8(r2_2);  // (from the original)
    *gptr<u8>(r0_2 + 0xeu) = u8(r3_2);  // (from the original)
    u32 r0_3 = call_007ca090(r6, r0_2, r2_2, r3_2);
    if (r0_3 != 2u) {
        if (r0_3 == 1u) {
            r7 = 4u;
            r4 = 0u;
            goto L_52ad14;
        }
        return r8;
    }
    r1_1 = u32(*gptr<u8>(r6 + 0x24u)) & 1u;  // (from the original)
    r8 = r1_1 >= 2u ? r6 + 0x60u : r6 + (r1_1 + (r1_1 << 2) + (r1_1 << 6) << 2) + 0x60u;  // (from the original)
    r7 = 4u;
    r4 = 0u;
    do {
        u32 r0_4 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_4 += (r4 << 6);
        }
        *frame.at<u32>(0) = r0_4 + 0x34u;  // (from the original)
        call_005291b0(r0_4 + 0xcu, r8, r5, 0x8464b4u);  // (from the original)
        u32 r0_6 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_6 += (r4 << 6);
        }
        u32 r1_2 = *gptr<u8>(r5 + 4u);
        call_0052984c(r0_6 + 0xcu, r1_2, 0x8464b4u, r5);  // (from the original)
        r4 += 1u;
        if (r4 != 4u && s32(r4) >= 4) {
            r4 = 4u;
        }
        guest::preempt();
    } while (r4 != r7);
    return 1u;
L_52ad14:;
    u32 r0_8 = r6 + 0x28cu;  // (from the original)
    if (r4 < 4u) {
        r0_8 += (r4 << 6);
    }
    u32 r1_3 = *gptr<u8>(r5 + 4u);
    call_0052984c(r0_8 + 0xcu, r1_3, 0x8464b4u, r5);  // (from the original)
    r4 += 1u;
    if (r4 != 4u && s32(r4) >= 4) {
        r4 = 4u;
    }
    if (r4 != r7) {
        guest::preempt();
        goto L_52ad14;
    }
    return r8;
}

}  // namespace d_0052abd8
GUEST_EXPORT_FRAMED(0x0052abd8, d_0052abd8::f_0052abd8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0052b818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b818 {

struct __attribute__((packed)) Local_0052b818_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052b818_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052b818_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0052b818_r3_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052b818_r3_11, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052b818_r3_11, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052b818_r3_11, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0052b818_r3_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052b818_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052b818_r3_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052b818_r3_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0052b818_r9_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052b818_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052b818_r9_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095e0b4> global_0095e0b4;  // (from the original)
inline guest::global<u32, 0x0095e0b8> global_0095e0b8;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052b9ec, u32(u32, u32, u32, u32)> call_0052b9ec;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052b818(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_1 = call_00569d50(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r0_1 + 4u);
    u32 r8_1 = 0x434u;  // (from the original)
    u32 r0_2 = call_002fd108(r8_1, r1_1, 4u, guest::cpu()->r[3]);
    call_002f825c(r0_2, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_2 + 4u) = 0;
    *gptr<u8>(r0_2 + 8u) = 0;
    gptr<Local_0052b818_ea_3> ea_3 = gptr<Local_0052b818_ea_3>(0x895bb8u);  // (from the original)
    u32 r1_2 = ea_3->word_0;
    u32 r2_2 = ea_3->word_4;
    gptr<Local_0052b818_r3_3> r3_3 = gptr<Local_0052b818_r3_3>(r0_2 + 0xcu);  // (from the original)
    r3_3->word_0 = r1_2;
    r3_3->word_4 = r2_2;
    r3_3->word_8 = 0;
    *gptr<u8>(r0_2 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0_2) = 0x8f74f4;  // (from the original)
    *gptr<u32>(r0_2 + 0x20u) = 0;  // (from the original)
    u32 r0_4 = call_00125e3c(r0_2 + 0x24u, r1_2, r2_2, r3_3.addr());  // (from the original)
    u32 r0_6 = call_001207d8(r0_4 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_13 = r0_12 - 0x408u;  // (from the original)
    *global_0095e0b4 = r0_13;
    call_0052b9ec(r0_13, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_002fd108(r8_1, *gptr<u32>(r0_1 + 4u), 4u, guest::cpu()->r[3]);
    call_002f825c(r0_14, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    gptr<Local_0052b818_r9_1> r9_1 = gptr<Local_0052b818_r9_1>(0x895bb8u);  // (from the original)
    *gptr<u32>(r0_14 + 4u) = 0;
    *gptr<u8>(r0_14 + 8u) = 0;
    u32 r1_8 = r9_1->word_0;
    u32 r2_9 = r9_1->word_4;
    gptr<Local_0052b818_r3_11> r3_11 = gptr<Local_0052b818_r3_11>(r0_14 + 0xcu);  // (from the original)
    r3_11->word_0 = r1_8;
    r3_11->word_4 = r2_9;
    r3_11->word_8 = 0;
    *gptr<u8>(r0_14 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0_14 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0_14) = 0x8f74f4;  // (from the original)
    *gptr<u32>(r0_14 + 0x20u) = 0;  // (from the original)
    u32 r0_16 = call_00125e3c(r0_14 + 0x24u, r1_8, r2_9, r3_11.addr());  // (from the original)
    u32 r0_18 = call_001207d8(r0_16 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_00125aec(r0_18 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_00125aec(r0_20 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_00125aec(r0_22 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_25 = r0_24 - 0x408u;  // (from the original)
    *global_0095e0b8 = r0_25;
    frame.release();
    return call_0052b9ec(r0_25, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052b818
GUEST_EXPORT(0x0052b818, d_0052b818::f_0052b818);

// f_0052b948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b948 {

inline guest::global<u32, 0x0052b9dc> global_0052b9dc;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

void f_0052b948(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_004b4fc0(r0 + 0x24u, 0x52b9d0u, 1u, r3);  // (from the original)
    call_00568630(r0 + 0x24u, r0 + 0x3b8u, r0_2, 0u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_2 = std::bit_cast<float>(*global_0052b9dc);
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0 + 0x3b8u, r1_2, r2_1, r3_1);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    call_00568c10(r0 + 0x24u, r1_3, r2_2, r3_2);  // (from the original)
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_7 = call_004b4fc0(r0 + 0x24u, 0x52b9d0u, 1u, r3_3);  // (from the original)
    call_00568984(r0 + 0x24u, r0 + 0x3b8u, r0_7, 0u);  // (from the original)
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_10 = call_0056878c(r0 + 0x24u, 0x52b9e0u, r2_3, r3_4);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r1_5 = u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(r1_5);  // (from the original)
    frame.release();
    call_00568c10(r0 + 0x24u, r1_5, r2_4, r3_5);  // (from the original)
    return;
}

}  // namespace d_0052b948
GUEST_EXPORT(0x0052b948, d_0052b948::f_0052b948);

// f_0052bb0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bb0c {

struct __attribute__((packed)) Object_0052bb0c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052bb0c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052bb0c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0052bb0c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052bb0c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052bb0c_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00895bb0> global_00895bb0;  // (from the original)
inline guest::global<u32, 0x00895bb4> global_00895bb4;  // (from the original)

u32 f_0052bb0c(gptr<Object_0052bb0c_0> arg0) {
    u32 r4_1 = 0;
    u32 r3_1 = arg0->word_c;
    u32 r1_1 = *global_00895bb4;
    if (r3_1 == *global_00895bb0) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_52bb4c;
        }
        if (arg0->word_10 != r1_1) {
            goto L_52bb54;
        }
L_52bb4c:;
        r4_1 = 1u;
        goto L_52bb58;
    }
L_52bb54:;
    r4_1 = 0u;
L_52bb58:;
    gptr<Local_0052bb0c_ea_1> ea_1 = gptr<Local_0052bb0c_ea_1>(0x895ba8u);  // (from the original)
    u32 r1_2 = ea_1->word_4;
    if (r3_1 == ea_1->word_0) {
        if (r3_1 == 0 && ((arg0->word_10 | r1_2) & 1u) == 0) {
            return 1u | r4_1;
        }
        if (arg0->word_10 != r1_2) {
            return 0u | r4_1;
        }
        return 1u | r4_1;
    }
    return 0u | r4_1;
}

}  // namespace d_0052bb0c
GUEST_EXPORT_FRAMED(0x0052bb0c, d_0052bb0c::f_0052bb0c, 0x10);  // pushes {r4} first, as the original

// f_0052be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052be5c {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)
inline guest::global<u32, 0x009516a4> global_009516a4;  // (from the original)
inline guest::global<u32, 0x009516a8> global_009516a8;  // (from the original)
inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline guest::global<u32, 0x009516b0> global_009516b0;  // (from the original)
inline guest::global<u32, 0x009516b4> global_009516b4;  // (from the original)
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)

u32 f_0052be5c(u32 r0, u32 r1, u32 r2) {
    call_0052c32c(0x9ab170u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    *global_009516ac = 0;
    *global_009516a4 = 0;
    *global_009516a8 = 0;
    *global_009516b0 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = 0u;
        return 0x9516a0u;  // (from the original)
    }
    *global_009516a0 = 0;
    *global_009516b4 = 0;
    guest::cpu()->r[1] = 0u;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052be5c
GUEST_EXPORT_FRAMED(0x0052be5c, d_0052be5c::f_0052be5c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052bf90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bf90 {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052bf90() {
    u32 r1_1 = u32(*global_009516a0) | 4u;
    *global_009516a0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052bf90
GUEST_EXPORT(0x0052bf90, d_0052bf90::f_0052bf90);

// f_0052bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bfa8 {

struct __attribute__((packed)) Local_0052bfa8_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052bfa8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052bfa8_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052bfa8() {
    u32 r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r9_1 = 0u;
    if (r0_1 != 0) {
        u32 r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
        u32 r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
        r1_1 = r0_2;
        if (r0_2 != 0) {
            r9_1 = 1u;
            gptr<Local_0052bfa8_ea_1> ea_1 = gptr<Local_0052bfa8_ea_1>(r1_1 + 0x10u);  // (from the original)
            ea_1->word_0 = 0;
            ea_1->word_4 = r8_1;
            *gptr<u8>(r1_1 + 0x18u) = u8(r9_1);  // (from the original)
            *gptr<u8>(r1_1 + 0x19u) = 0xd;  // (from the original)
            *gptr<u8>(r1_1 + 0xcu) = 4;  // (from the original)
            *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
            call_00125ca4(0x9ab170u, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r9_1;
}

}  // namespace d_0052bfa8
GUEST_EXPORT_FRAMED(0x0052bfa8, d_0052bfa8::f_0052bfa8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c01c {

struct __attribute__((packed)) Local_0052c01c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c01c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052c01c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c01c(u32 r0) {
    u32 r0_2 = 0;
    u32 r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = call_005c33cc(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
            r1_1 = r0_2;
            if (r0_2 != 0) {
                gptr<Local_0052c01c_ea_1> ea_1 = gptr<Local_0052c01c_ea_1>(r1_1 + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
                *gptr<u8>(r1_1 + 0x19u) = 7;  // (from the original)
                *gptr<u8>(r1_1 + 0xcu) = 4;  // (from the original)
                *gptr<u8>(r1_1 + 0x1bu) = u8(r0);  // (from the original)
                call_00125ca4(0x9ab170u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0052c01c
GUEST_EXPORT_FRAMED(0x0052c01c, d_0052c01c::f_0052c01c, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c0a4 {

struct __attribute__((packed)) Local_0052c0a4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c0a4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052c0a4_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c0a4() {
    u32 r0_2 = 0;
    u32 r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = call_005c33cc(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
            r1_1 = r0_2;
            if (r0_2 != 0) {
                gptr<Local_0052c0a4_ea_1> ea_1 = gptr<Local_0052c0a4_ea_1>(r1_1 + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
                *gptr<u8>(r1_1 + 0x19u) = 4;  // (from the original)
                *gptr<u8>(r1_1 + 0xcu) = 0;  // (from the original)
                *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
                call_00125ca4(0x9ab170u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0052c0a4
GUEST_EXPORT_FRAMED(0x0052c0a4, d_0052c0a4::f_0052c0a4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c1a0 {

struct __attribute__((packed)) Object_0052c1a0_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c1a0_0, word_54, 0x54);  // (from the original)

struct __attribute__((packed)) Local_0052c1a0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c1a0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052c1a0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)

u32 f_0052c1a0(gptr<Object_0052c1a0_0> arg0, u32 r1) {
    u32 r4_1 = arg0->word_54;
    u32 r0_1 = call_0052c2d8(0x9ab170u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = r0_1;
    if (r0_1 != 0) {
        gptr<Local_0052c1a0_ea_1> ea_1 = gptr<Local_0052c1a0_ea_1>(r1_1 + 0x10u);  // (from the original)
        ea_1->word_0 = r4_1;
        ea_1->word_4 = 0;
        *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
        *gptr<u8>(r1_1 + 0x19u) = 1;  // (from the original)
        *gptr<u8>(r1_1 + 0xcu) = 3;  // (from the original)
        *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
        call_00125ca4(0x9ab170u, r1_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0052c1a0
GUEST_EXPORT_FRAMED(0x0052c1a0, d_0052c1a0::f_0052c1a0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c268 {

inline guest::global<u32, 0x009516a4> global_009516a4;  // (from the original)
inline guest::global<u32, 0x009516a8> global_009516a8;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c268() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_003170f8(1u, 0u);
    if (r0_1 == 0) {
        u32 r0_2 = call_003170f8(2u, 0u);
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 r0_3 = *global_009516a8;
    if (r0_3 == 0) {
        u32 r0_4 = *global_009516a4;
        frame.release();
        return call_006e46c8(r0_4, 0x9516a0u);  // (from the original)
    }
    frame.release();
    return call_006e46c8(r0_3, 0x9516a0u);  // (from the original)
}

}  // namespace d_0052c268
GUEST_EXPORT(0x0052c268, d_0052c268::f_0052c268);

// f_0052c2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c2c0 {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052c2c0() {
    u32 r1_1 = u32(*global_009516a0) & ~4u;
    *global_009516a0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052c2c0
GUEST_EXPORT(0x0052c2c0, d_0052c2c0::f_0052c2c0);

// f_0052c3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c3e0 {

struct __attribute__((packed)) Local_0052c3e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c3e0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052c3e0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c3e0() {
    u32 r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r9_1 = 0u;
    if (r0_1 != 0) {
        u32 r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
        u32 r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
        r1_1 = r0_2;
        if (r0_2 != 0) {
            r9_1 = 1u;
            gptr<Local_0052c3e0_ea_1> ea_1 = gptr<Local_0052c3e0_ea_1>(r1_1 + 0x10u);  // (from the original)
            ea_1->word_0 = 0;
            ea_1->word_4 = r8_1;
            *gptr<u8>(r1_1 + 0x18u) = u8(r9_1);  // (from the original)
            *gptr<u8>(r1_1 + 0x19u) = 0xb;  // (from the original)
            *gptr<u8>(r1_1 + 0xcu) = 4;  // (from the original)
            *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
            call_00125ca4(0x9ab170u, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r9_1;
}

}  // namespace d_0052c3e0
GUEST_EXPORT_FRAMED(0x0052c3e0, d_0052c3e0::f_0052c3e0, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c454 {

inline guest::global<u32, 0x009516a4> global_009516a4;  // (from the original)
inline guest::global<u32, 0x009516a8> global_009516a8;  // (from the original)
inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline guest::global<u32, 0x009516b0> global_009516b0;  // (from the original)
inline constexpr guest::Function<0x00240fdc, u32(u32, u32, u32, u32)> call_00240fdc;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)
inline constexpr guest::Function<0x0052ce18, u32(u32, u32, u32, u32)> call_0052ce18;  // (from the original)

void f_0052c454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_3 = 0;
    call_0052ce18(r0, r1, r2, r3);
    call_0052c32c(0x9ab170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *global_009516ac = 0;
    *global_009516a4 = 0;
    *global_009516a8 = 0;
    *global_009516b0 = 0;
    u32 r0_1 = call_0052c2d8(0x9ab170u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = call_00240fdc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0_1 + 0x14u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x18u) = 3;  // (from the original)
    *gptr<u8>(r0_1 + 0x1au) = 4;  // (from the original)
    *gptr<u8>(r0_1 + 0xcu) = 2;  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = r0_2;  // (from the original)
    if (r0_2 == 0) {
        r0_3 = 5u;
        *gptr<u8>(r0_1 + 0x19u) = 0;  // (from the original)
    } else {
        *gptr<u8>(r0_1 + 0x19u) = 3;  // (from the original)
        r0_3 = 8u;
    }
    *gptr<u8>(r0_1 + 0x1au) = u8(r0_3);  // (from the original)
    *global_009516ac = r0_1;
}

}  // namespace d_0052c454
GUEST_EXPORT_FRAMED(0x0052c454, d_0052c454::f_0052c454, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052c4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c4d8 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c4d8(u32 r0) {
    u32 r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
        u32 r7_1 = *gptr<u32>(r0 + 0x54u);  // (from the original)
        r0_1 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
        r1_1 = r0_1;
        if (r0_1 != 0) {
            *gptr<u32>(r1_1 + 0x14u) = r7_1;  // (from the original)
            *gptr<u32>(r1_1 + 0x10u) = r8_1;  // (from the original)
            *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
            *gptr<u8>(r1_1 + 0x19u) = 2;  // (from the original)
            *gptr<u8>(r1_1 + 0xcu) = 3;  // (from the original)
            *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
            call_00125ca4(0x9ab170u, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0052c4d8
GUEST_EXPORT_FRAMED(0x0052c4d8, d_0052c4d8::f_0052c4d8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c584 {

inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c584() {
    u32 r0_1 = call_003170f8(6u, 0u);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_2 = *global_009516ac;
    *gptr<u8>(r1_2 + 0x1au) = 1;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0052c584
GUEST_EXPORT_FRAMED(0x0052c584, d_0052c584::f_0052c584, 0x4000);  // pushes {lr} first, as the original

// f_0052c648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c648 {

inline guest::global<u32, 0x009516b0> global_009516b0;  // (from the original)

u32 f_0052c648() {
    u32 r0_1 = *global_009516b0;
    u32 res_1 = r0_1;
    u32 vf_1 = (r0_1 & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (res_1 != 0 && s32(r0_1) >= 0) {
        r0_1 = 1u;
    }
    if (res_1 == 0 || res_1 >> 0x1f != vf_1) {  // (from the original)
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0052c648
GUEST_EXPORT(0x0052c648, d_0052c648::f_0052c648);

// f_0052c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c790 {

struct __attribute__((packed)) Local_0052c790_r1_4 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x2];  // (not used here)
    u8 byte_1a;
};
GUEST_OFFSET(Local_0052c790_r1_4, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0052c790_r1_4, byte_1a, 0x1a);  // (from the original)

inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c790(u32 r0) {
    u32 r0_8 = 0;
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_002f74e0(0x10u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        return 1u;
    }
    u32 r0_3 = call_002f74c8(r0_2);
    u32 r0_4 = call_002f74e0(0x8000000u, r0_3);  // (from the original)
    if (r0_4 != 0) {
        return 1u;
    }
    u32 r0_5 = call_003170f8(1u, 0u);
    if (r0_5 == 0) {
        u32 r0_6 = call_003170f8(2u, 0u);
        if (r0_6 == 0) {
            return r0_6;
        }
    }
    u32 r0_7 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    gptr<Local_0052c790_r1_4> r1_4 = gptr<Local_0052c790_r1_4>(*global_009516ac);
    if (r0_7 == r1_4->word_14) {
        r0_8 = 1u;
        r1_4->byte_1a = u8(r0_8);
    } else {
        r0_8 = 0u;
    }
    guest::cpu()->r[1] = r1_4.addr();
    return r0_8;
}

}  // namespace d_0052c790
GUEST_EXPORT_FRAMED(0x0052c790, d_0052c790::f_0052c790, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052c82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c82c {

struct __attribute__((packed)) Object_0052c82c_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c82c_0, word_54, 0x54);  // (from the original)

inline guest::global<u32, 0x009516a8> global_009516a8;  // (from the original)

u32 f_0052c82c(gptr<Object_0052c82c_0> arg0) {
    u32 r0_1 = arg0->word_54;
    *global_009516a8 = r0_1;
    guest::cpu()->r[1] = 0x9516a0u;  // (from the original)
    return r0_1;
}

}  // namespace d_0052c82c
GUEST_EXPORT_FRAMED(0x0052c82c, d_0052c82c::f_0052c82c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052c844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c844 {


u32 f_0052c844(u32 r0) {
    if (r0 == 2u) {
        return 1u;
    }
    if (r0 == 4u) {
        return 3u;
    }
    if (r0 == 6u) {
        return 5u;
    }
    if (r0 == 8u) {
        return 7u;
    }
    return 1u;
}

}  // namespace d_0052c844
GUEST_EXPORT(0x0052c844, d_0052c844::f_0052c844);

// f_0052c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c878 {

inline guest::global<u32, 0x009516a4> global_009516a4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c878() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_003170f8(1u, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        u32 r0_2 = call_003170f8(2u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            return r0_2;
        }
    }
    u32 r0_3 = *global_009516a4;
    if (r0_3 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    frame.release();
    return call_006e46c8(r0_3, r1_1);
}

}  // namespace d_0052c878
GUEST_EXPORT(0x0052c878, d_0052c878::f_0052c878);

// f_0052c8c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c8c4 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c8c4(u32 r0) {
    u32 r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
        u32 r7_1 = *gptr<u32>(r0 + 0x54u);  // (from the original)
        r0_1 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
        r1_1 = r0_1;
        if (r0_1 != 0) {
            *gptr<u32>(r1_1 + 0x14u) = r7_1;  // (from the original)
            *gptr<u32>(r1_1 + 0x10u) = r8_1;  // (from the original)
            *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
            *gptr<u8>(r1_1 + 0x19u) = 2;  // (from the original)
            *gptr<u8>(r1_1 + 0xcu) = 3;  // (from the original)
            *gptr<u8>(r1_1 + 0x1bu) = 3;  // (from the original)
            call_00125ca4(0x9ab170u, r1_1);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0052c8c4
GUEST_EXPORT_FRAMED(0x0052c8c4, d_0052c8c4::f_0052c8c4, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c974 {

struct __attribute__((packed)) Local_0052c974_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052c974_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052c974_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c974() {
    u32 r0_2 = 0;
    u32 r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = call_005c33cc(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
            r1_1 = r0_2;
            if (r0_2 != 0) {
                gptr<Local_0052c974_ea_1> ea_1 = gptr<Local_0052c974_ea_1>(r1_1 + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
                *gptr<u8>(r1_1 + 0x19u) = 8;  // (from the original)
                *gptr<u8>(r1_1 + 0xcu) = 4;  // (from the original)
                *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
                call_00125ca4(0x9ab170u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0052c974
GUEST_EXPORT_FRAMED(0x0052c974, d_0052c974::f_0052c974, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052cc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc5c {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052cc5c() {
    return u32(*global_009516a0) >> 1u & 1u;
}

}  // namespace d_0052cc5c
GUEST_EXPORT(0x0052cc5c, d_0052cc5c::f_0052cc5c);

// f_0052cc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc74 {

struct __attribute__((packed)) Local_0052cc74_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052cc74_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052cc74_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052cc74() {
    u32 r0_2 = 0;
    u32 r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
    } else {
        r0_2 = call_005c33cc(4u, 0u);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
            r0_2 = call_0052c2d8(0x9ab170u, r1_1);  // (from the original)
            r1_1 = r0_2;
            if (r0_2 != 0) {
                gptr<Local_0052cc74_ea_1> ea_1 = gptr<Local_0052cc74_ea_1>(r1_1 + 0x10u);  // (from the original)
                ea_1->word_0 = 0;
                ea_1->word_4 = r8_1;
                *gptr<u8>(r1_1 + 0x18u) = 1;  // (from the original)
                *gptr<u8>(r1_1 + 0x19u) = 6;  // (from the original)
                *gptr<u8>(r1_1 + 0xcu) = 1;  // (from the original)
                *gptr<u8>(r1_1 + 0x1bu) = 0;  // (from the original)
                call_00125ca4(0x9ab170u, r1_1);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r0_2 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0052cc74
GUEST_EXPORT_FRAMED(0x0052cc74, d_0052cc74::f_0052cc74, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0052ccfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ccfc {

inline guest::global<u32, 0x009516b4> global_009516b4;  // (from the original)

u32 f_0052ccfc(u32 r0) {
    u32 r0_1 = 0;
    if (*global_009516b4 == 0) {
        *global_009516b4 = r0;
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = 0x9516a0u;  // (from the original)
    return r0_1;
}

}  // namespace d_0052ccfc
GUEST_EXPORT(0x0052ccfc, d_0052ccfc::f_0052ccfc);

// f_0052cd58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cd58 {

inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32)> call_003170f8;  // (from the original)

void f_0052cd58(u32 r0) {
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_002f74e0(0x10u, r0_1);  // (from the original)
    if (r0_2 != 0) {
        return;
    }
    u32 r0_3 = call_003170f8(1u, 0u);
    if (r0_3 == 0) {
        u32 r0_4 = call_003170f8(2u, 0u);
        if (r0_4 == 0) {
            return;
        }
    }
    u32 r0_5 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    u32 r1_3 = *gptr<u32>(*global_009516ac + 0x14u);  // (from the original)
    if (r0_5 != r1_3) {
        guest::cpu()->r[1] = r1_3;
        return;
    }
    u32 r0_6 = call_00300904(r0_5, r1_3);
    if (r0_6 != 0) {
        return;
    }
    u32 r1_5 = *global_009516ac;
    *gptr<u8>(r1_5 + 0x1au) = 3;  // (from the original)
    guest::cpu()->r[1] = r1_5;
}

}  // namespace d_0052cd58
GUEST_EXPORT_FRAMED(0x0052cd58, d_0052cd58::f_0052cd58, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052ce18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ce18 {

struct __attribute__((packed)) Local_0052ce18_r1_1 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Local_0052ce18_r1_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_0052ce18_r1_1, word_34, 0x34);  // (from the original)

inline guest::global<u32, 0x009ab588> global_009ab588;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

void f_0052ce18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    gptr<Local_0052ce18_r1_1> r1_1 = gptr<Local_0052ce18_r1_1>(0u);
    u32 r2 = 0x9ab598u;  // (from the original)
    u32 r0 = 0u;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    do {
        r1_1 = gptr<Local_0052ce18_r1_1>(r2 + (r0 << 3));
        r0 += 1u;
        r1_1->word_30 = r4;
        r1_1->word_34 = r4;
        guest::preempt();
    } while (r0 < 6u);
    u32 r0_1 = call_002fc900(r0, r1_1.addr(), r2, r3);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_0030b6c4(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = call_002fc900(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_3 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                return;
            }
            u32 r0_4 = call_0030b6c4(r0_3, r1_3, r2_3, r3_3);
            if (r0_4 != 0) {
                return;
            }
            *frame.at<u8>(0) = 1;
            call_006249b0(0x39u, 0u, frame.at(0).addr(), 1u);  // (from the original)
            return;
        }
    }
    *global_009ab588 = r4;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0052ce18
GUEST_EXPORT_FRAMED(0x0052ce18, d_0052ce18::f_0052ce18, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052ceb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ceb8 {

inline guest::global<u8, 0x009516b8> global_009516b8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0052d420, u32(u32, u32)> call_0052d420;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052ceb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fc900(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_0030b6c4(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            u32 r0_3 = call_002fc900(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r1_3 = guest::cpu()->r[1];
            u32 r2_3 = guest::cpu()->r[2];
            u32 r3_3 = guest::cpu()->r[3];
            if (r0_3 == 0) {
                return 0u;
            }
            u32 r0_4 = call_0030b6c4(r0_3, r1_3, r2_3, r3_3);
            if (r0_4 != 0) {
                return 0u;
            }
            *global_009516b8 = 0;
            *frame.at<u8>(0) = 0;
            *frame.at<u8>(1) = u8(r0);
            *frame.at<u8>(2) = u8(r0 >> 8);
            *frame.at<u8>(3) = u8(r0 >> 0x10);  // (from the original)
            *frame.at<u8>(4) = u8(r0 >> 0x18);  // (from the original)
            call_006249b0(0x39u, 0u, frame.at(0).addr(), 5u);  // (from the original)
            return 0u;
        }
    }
    u32 r0_5 = call_0052d420(0u, r0);
    return r0_5 == 0 ? 2u : 1u;
}

}  // namespace d_0052ceb8
GUEST_EXPORT_FRAMED(0x0052ceb8, d_0052ceb8::f_0052ceb8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0b8 {

inline constexpr guest::Function<0x002fc900, u32(u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32)> call_0061a7a0;  // (from the original)

u32 f_0052d0b8(u32 r0) {
    u32 r0_1 = call_002fc900(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0061a7a0(r0_1);
    return r0_2 == 0;
}

}  // namespace d_0052d0b8
GUEST_EXPORT_FRAMED(0x0052d0b8, d_0052d0b8::f_0052d0b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0052d0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0dc {

inline guest::global<u32, 0x009ab588> global_009ab588;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

void f_0052d0dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002fc900(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        *global_009ab588 = 0;
        guest::cpu()->r[1] = 0x9ab588u;  // (from the original)
        return;
    }
    u32 r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        *global_009ab588 = 0;
        guest::cpu()->r[1] = 0x9ab588u;  // (from the original)
        return;
    }
    u32 r0_3 = call_002fc900(r0_2, r1_2, r2_2, r3_2);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        return;
    }
    u32 r0_4 = call_0030b6c4(r0_3, r1_3, r2_3, r3_3);
    if (r0_4 != 0) {
        return;
    }
    *frame.at<u8>(0) = 1;
    call_006249b0(0x39u, 0u, frame.at(0).addr(), 1u);  // (from the original)
}

}  // namespace d_0052d0dc
GUEST_EXPORT_FRAMED(0x0052d0dc, d_0052d0dc::f_0052d0dc, 0x4000);  // pushes {lr} first, as the original

// f_0052d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d150 {

inline guest::global<u8, 0x009516b8> global_009516b8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

void f_0052d150(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_002fc900(r0, r1, r2, r3);
    if (r0_1 != 0) {
        *global_009516b8 = 0;
        *frame.at<u8>(0) = u8(r2);
        *frame.at<u8>(1) = u8(r0);
        *frame.at<u8>(2) = u8(r0 >> 8);
        *frame.at<u8>(4) = u8(r0 >> 0x18);  // (from the original)
        *frame.at<u8>(3) = u8(r0 >> 0x10);  // (from the original)
        *frame.at<u8>(5) = u8(r1);
        call_006249b0(0x39u, 5u, frame.at(0).addr(), 6u);  // (from the original)
    }
}

}  // namespace d_0052d150
GUEST_EXPORT_FRAMED(0x0052d150, d_0052d150::f_0052d150, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0052d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d220 {

struct __attribute__((packed)) Local_0052d220_r3_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0052d220_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052d220_r3_1, word_8, 0x8);  // (from the original)


u32 f_0052d220(u32 r0) {
    u32 r2 = 0x9ab598u;  // (from the original)
    u32 r1 = 0u;
    do {
        gptr<Local_0052d220_r3_1> r3_1 = gptr<Local_0052d220_r3_1>(r2 + (r1 << 3));
        if (r3_1->word_0 == r0) {
            u32 r0_1 = *gptr<u32>(r2 + (r1 << 3) + 4u);
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        if (r3_1->word_8 == r0) {
            u32 r0_2 = *gptr<u32>(r2 + (r1 << 3) + 0xcu);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_2;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 6);
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0052d220
GUEST_EXPORT(0x0052d220, d_0052d220::f_0052d220);

// f_0052d420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d420 {

struct __attribute__((packed)) Local_0052d420_r12_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_0052d420_r12_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052d420_r12_1, word_c, 0xc);  // (from the original)


u32 f_0052d420(u32 r0, u32 r1) {
    u32 r6 = 0x9ab588u;  // (from the original)
    if (*gptr<u32>(r6 + (r0 << 2)) == 0 && *gptr<u32>(r6) != r1 && *gptr<u32>(r6 + 4u) != r1 && *gptr<u32>(r6 + 8u) != r1) {
        if (*gptr<u32>(r6 + 0xcu) == r1) {  // (from the original)
        } else {
            u32 r3 = 0x9ab598u;  // (from the original)
            u32 r2 = 0u;
L_52d468:;
            gptr<Local_0052d420_r12_1> r12_1 = gptr<Local_0052d420_r12_1>(r3 + (r2 << 3));
            if (r12_1->word_4 != r1) {
                if (r12_1->word_c != r1) {
                    r2 += 2u;
                    if (s32(r2) < 6) {
                        guest::preempt();
                        goto L_52d468;
                    }
                    *gptr<u32>(r6 + (r0 << 2)) = r1;
                    return 1u;
                }
                r2 += 1u;
            }
            if (r2 + 1u == 0) {
                *gptr<u32>(r6 + (r0 << 2)) = r1;
                return 1u;
            }
        }
    }
    return 0u;
}

}  // namespace d_0052d420
GUEST_EXPORT_FRAMED(0x0052d420, d_0052d420::f_0052d420, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0052d550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d550 {

struct __attribute__((packed)) Object_0052d550_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
};
GUEST_OFFSET(Object_0052d550_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1c, 0x1c);  // (from the original)


void f_0052d550(gptr<Object_0052d550_0> arg0) {
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->byte_19 = 0xe;  // (from the original)
    arg0->byte_1a = 0;
    arg0->byte_1b = 0;
    arg0->byte_1c = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0052d550
GUEST_EXPORT(0x0052d550, d_0052d550::f_0052d550);

// f_0052db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052db0c {

struct __attribute__((packed)) Local_0052db0c_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052db0c_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052db0c_r0_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052db0c_r0_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0052db0c_r1_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0052db0c_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052db0c_r1_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0052db0c_r1_1, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0052db78> global_0052db78;  // (from the original)
inline constexpr guest::Function<0x0060c560, u32(u32, u32, u32)> call_0060c560;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)

u32 f_0052db0c(u32 r0) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r0_1 = r0 + (r0 << 1);
    gptr<Local_0052db0c_r1_1> r1_1 = gptr<Local_0052db0c_r1_1>(0x9516c0u + (r0_1 << 2));  // (from the original)
    gptr<Local_0052db0c_r0_2> r0_2 = gptr<Local_0052db0c_r0_2>(0x9516fcu + (r0_1 << 2));  // (from the original)
    *frame.at<u32>(0) = r1_1->word_0;
    *frame.at<u32>(4) = r1_1->word_4;
    *frame.at<u32>(8) = r1_1->word_8;
    *frame.at<u32>(0xc) = r0_2->word_0;  // (from the original)
    *frame.at<u32>(0x10) = r0_2->word_4;  // (from the original)
    u32 r0_3 = r0_2->word_8;
    *frame.at<u32>(0x14) = r0_3;  // (from the original)
    u32 r0_4 = call_0060c5c4(r0_3);
    float S0_1 = std::bit_cast<float>(*global_0052db78);
    guest::cpu()->s[0] = S0_1;
    u32 r0_5 = call_0060c560(r0_4, frame.at(0).addr(), frame.at(0xc).addr());  // (from the original)
    return r0_5;
}

}  // namespace d_0052db0c
GUEST_EXPORT_FRAMED(0x0052db0c, d_0052db0c::f_0052db0c, 0x4000);  // pushes {lr} first, as the original

// f_0052ddf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ddf8 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d2f8, u32(u32, u32, u32)> call_0075d2f8;  // (from the original)

u32 f_0052ddf8(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_005b4c94(r0_1);
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        u32 r0_3 = call_0060c5c4(0u);
        u32 r0_4 = call_0075d2f8(r0_3, r0, r1);
        *frame.at<u32>(0) = r0_4;
        u32 r0_5 = *frame.at<u16>(0);
        return r0_5;
    }
    *gptr<u32>(r0) = *gptr<u32>(r1);
    *gptr<u32>(r0 + 4u) = *gptr<u32>(r1 + 4u);
    u32 r1_2 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = r1_2;
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0052ddf8
GUEST_EXPORT_FRAMED(0x0052ddf8, d_0052ddf8::f_0052ddf8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052de50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052de50 {

struct __attribute__((packed)) Local_0052de50_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052de50_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052de50_r0_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0052de50_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052de50_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052de50_r0_4, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052dee0> global_0052dee0;  // (from the original)
inline guest::global<u32, 0x0052dee4> global_0052dee4;  // (from the original)
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32)> call_00567580;  // (from the original)

u32 f_0052de50(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = call_0052ddf8(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    float S1_1 = std::bit_cast<float>(*global_0052dee0);
    float S0_1 = std::bit_cast<float>(*global_0052dee4);
    *gptr<u32>(r0) = std::bit_cast<u32>(S1_1);
    u32 r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_1);
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_1);
    gptr<Local_0052de50_r0_3> r0_3 = gptr<Local_0052de50_r0_3>(r0 + 0x10u);  // (from the original)
    r0_3->word_0 = std::bit_cast<u32>(S0_1);
    r0_3->word_4 = std::bit_cast<u32>(S1_1);
    gptr<Local_0052de50_r0_4> r0_4 = gptr<Local_0052de50_r0_4>(r0 + 0x24u);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = std::bit_cast<u32>(S0_1);  // (from the original)
    r0_4->word_0 = std::bit_cast<u32>(S0_1);
    r0_4->word_4 = std::bit_cast<u32>(S1_1);
    *gptr<u32>(r0 + 0xcu) = *frame.at<u32>(0);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = *frame.at<u32>(4);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = *frame.at<u32>(8);  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_5 = sxth(r2);
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_6 = call_00567580(r0, r2);
    return r0_6;
}

}  // namespace d_0052de50
GUEST_EXPORT_FRAMED(0x0052de50, d_0052de50::f_0052de50, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e038 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d378, u32(u32, u32, u32)> call_0075d378;  // (from the original)

u32 f_0052e038(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_3 = 0;
    u32 r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    u32 r0_2 = call_002f74e0(2u, r0_1, guest::cpu()->r[2]);
    if (r0_2 == 0) {
        *gptr<u32>(r0) = *gptr<u32>(r1);
        *gptr<u32>(r0 + 4u) = *gptr<u32>(r1 + 4u);
        r0_3 = *gptr<u32>(r1 + 8u);
    } else {
        if (r0 == 0) {
            return r0_2;
        }
        u32 r0_4 = call_0060c5c4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        call_0075d378(frame.at(0).addr(), r0_4, r1);
        *gptr<u32>(r0) = *frame.at<u32>(0);
        *gptr<u32>(r0 + 4u) = *frame.at<u32>(4);
        r0_3 = *frame.at<u32>(8);
    }
    *gptr<u32>(r0 + 8u) = r0_3;
    return r0_3;
}

}  // namespace d_0052e038
GUEST_EXPORT_FRAMED(0x0052e038, d_0052e038::f_0052e038, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e0b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d4b0, u32(u32, u32)> call_0075d4b0;  // (from the original)

u32 f_0052e0b4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0);
    u32 r0_2 = call_005b4c94(r0_1);
    u32 zf_1 = r0_2 == 0;
    if (zf_1) {
        guest::cpu()->r[1] = r0_2;
        return 0u;
    }
    u32 r0_3 = call_0060c5c4(0u);
    u32 r0_4 = call_0075d4b0(r0_3, r0);
    *frame.at<u32>(0) = r0_4;
    u32 r0_5 = *frame.at<u16>(0);
    return r0_5;
}

}  // namespace d_0052e0b4
GUEST_EXPORT_FRAMED(0x0052e0b4, d_0052e0b4::f_0052e0b4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e1ec {

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d178, u32(u32, u32, u32, u32)> call_0075d178;  // (from the original)

u32 f_0052e1ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_002f74c8(r0, r1, r2, r3);
    u32 r0_2 = call_005b4c94(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_002f74c8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r2_3 = guest::cpu()->r[2];
        u32 r0_4 = call_002f74e0(0x10000000u, r0_3, r2_3, guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0) {
            u32 r0_5 = call_0052ddf8(r0, r1, r2_3, guest::cpu()->r[3]);
            *frame.at<u32>(0) = r0_5;
            u32 r0_6 = *frame.at<u16>(0);
            return r0_6;
        }
        u32 r5_1 = *global_0094edd8;
        if (r5_1 != 0) {
            u32 r0_7 = call_0060c5c4(0x94edd8u);  // (from the original)
            u32 r0_8 = call_0075d178(r0_7, r0, r1, *gptr<u32>(r5_1 + 0x1a4u) + 0x24u);  // (from the original)
            *frame.at<u32>(0) = r0_8;
            u32 r0_9 = *frame.at<u16>(0);
            return r0_9;
        }
    }
    *gptr<u32>(r0) = *gptr<u32>(r1);
    *gptr<u32>(r0 + 4u) = *gptr<u32>(r1 + 4u);
    *gptr<u32>(r0 + 8u) = *gptr<u32>(r1 + 8u);
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0052e1ec
GUEST_EXPORT_FRAMED(0x0052e1ec, d_0052e1ec::f_0052e1ec, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0052e294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e294 {

struct __attribute__((packed)) Local_0052e294_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e294_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052e294_r0_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0052e294_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e294_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052e294_r0_4, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052e324> global_0052e324;  // (from the original)
inline guest::global<u32, 0x0052e328> global_0052e328;  // (from the original)
inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32)> call_00567580;  // (from the original)

u32 f_0052e294(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_2 = call_0052e1ec(frame.at(0).addr(), r1, r2, guest::cpu()->r[3]);
    float S1_1 = std::bit_cast<float>(*global_0052e324);
    float S0_1 = std::bit_cast<float>(*global_0052e328);
    *gptr<u32>(r0) = std::bit_cast<u32>(S1_1);
    u32 r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_1);
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_1);
    gptr<Local_0052e294_r0_3> r0_3 = gptr<Local_0052e294_r0_3>(r0 + 0x10u);  // (from the original)
    r0_3->word_0 = std::bit_cast<u32>(S0_1);
    r0_3->word_4 = std::bit_cast<u32>(S1_1);
    gptr<Local_0052e294_r0_4> r0_4 = gptr<Local_0052e294_r0_4>(r0 + 0x24u);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = std::bit_cast<u32>(S0_1);  // (from the original)
    r0_4->word_0 = std::bit_cast<u32>(S0_1);
    r0_4->word_4 = std::bit_cast<u32>(S1_1);
    *gptr<u32>(r0 + 0xcu) = *frame.at<u32>(0);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = *frame.at<u32>(4);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = *frame.at<u32>(8);  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_5 = sxth(r2);
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_6 = call_00567580(r0, r2);
    return r0_6;
}

}  // namespace d_0052e294
GUEST_EXPORT_FRAMED(0x0052e294, d_0052e294::f_0052e294, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e32c {

struct __attribute__((packed)) Local_0052e32c_r0_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e32c_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052e32c_r0_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0052e32c_r0_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e32c_r0_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052e32c_r0_4, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052e3e4> global_0052e3e4;  // (from the original)
inline guest::global<u32, 0x0052e3e8> global_0052e3e8;  // (from the original)
inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32)> call_00567580;  // (from the original)

u32 f_0052e32c(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_0052e1ec(frame.at(4).addr(), r1, r2, guest::cpu()->r[3]);
    float S1_1 = std::bit_cast<float>(*global_0052e3e4);
    float S0_1 = std::bit_cast<float>(*global_0052e3e8);
    *gptr<u32>(r0) = std::bit_cast<u32>(S1_1);
    u32 r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = std::bit_cast<u32>(S0_1);
    *gptr<u32>(r0 + 8u) = std::bit_cast<u32>(S0_1);
    gptr<Local_0052e32c_r0_3> r0_3 = gptr<Local_0052e32c_r0_3>(r0 + 0x10u);  // (from the original)
    r0_3->word_0 = std::bit_cast<u32>(S0_1);
    r0_3->word_4 = std::bit_cast<u32>(S1_1);
    gptr<Local_0052e32c_r0_4> r0_4 = gptr<Local_0052e32c_r0_4>(r0 + 0x24u);  // (from the original)
    *gptr<u32>(r0 + 0x18u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = std::bit_cast<u32>(S0_1);  // (from the original)
    r0_4->word_0 = std::bit_cast<u32>(S0_1);
    r0_4->word_4 = std::bit_cast<u32>(S1_1);
    *gptr<u32>(r0 + 0xcu) = *frame.at<u32>(4);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = *frame.at<u32>(8);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = *frame.at<u32>(0xc);  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    if (*gptr<u16>(r2 + 2u) != 0) {
        *frame.at<u16>(0) = u16(u32(*gptr<u16>(r2 + 2u)));
        u32 r1_2 = *frame.at<u32>(0);
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_00567580(r0, r1_2);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    u32 r0_5 = *gptr<u16>(r2);
    if (r0_5 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    *frame.at<u16>(0) = u16(u32(*gptr<u16>(r2)));
    u32 r1_3 = *frame.at<u32>(0);
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    u32 r0_6 = call_0056747c(r0, r1_3);
    return r0_6;
}

}  // namespace d_0052e32c
GUEST_EXPORT_FRAMED(0x0052e32c, d_0052e32c::f_0052e32c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0052e5ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e5ac {

struct __attribute__((packed)) Object_0052e5ac_0 {
    u8 unknown_0[0x808];  // (not used here)
    u8 byte_808;
};
GUEST_OFFSET(Object_0052e5ac_0, byte_808, 0x808);  // (from the original)

struct __attribute__((packed)) Local_0052e5ac_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0052e5ac_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0052e5ac_r1_1, word_4, 0x4);  // (from the original)


void f_0052e5ac(gptr<Object_0052e5ac_0> arg0) {
    u32 r2_1 = arg0.addr() + 0x670u;  // (from the original)
    gptr<Local_0052e5ac_r1_1> r1_1 = gptr<Local_0052e5ac_r1_1>(0x86537cu + (u32(arg0->byte_808) << 3));  // (from the original)
    u32 r0_1 = r1_1->word_4;
    u32 r1_2 = r1_1->word_0;
    if (r1_2 == 0 && ((r0_1 & 1u) == 0 || r0_1 == 0)) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 zf_1 = (r0_1 & 1u) == 0;
    u32 r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if (zf_1) {
        guest::call_address<u32>(r1_2, r0_2, r1_2, r2_1, guest::cpu()->r[3]);
        return;
    }
    u32 r2_2 = *gptr<u32>(r0_2);
    u32 r1_3 = *gptr<u32>(r2_2 + r1_2);
    guest::call_address<u32>(r1_3, r0_2, r1_3, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0052e5ac
GUEST_EXPORT(0x0052e5ac, d_0052e5ac::f_0052e5ac);

// f_0052ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ed04 {

struct __attribute__((packed)) Object_0052ed04_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ed04_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ed04_1, word_4, 0x4);  // (from the original)


void f_0052ed04(gptr<GridPoint> arg0, gptr<Object_0052ed04_1> arg1) {
    u32 r2_2 = 0;
    u32 r2_1 = arg1->word_0;
    if (s32(r2_1) >= 0) {
        r2_2 = r2_1 - (r2_1 + (u32(s32(r2_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
    } else {
        u32 r2_3 = r2_1 + 1u;
        r2_2 = r2_3 - (r2_3 + (u32(s32(r2_3) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    }
    u32 r1_1 = arg1->word_4;
    if (s32(r1_1) >= 0) {
        u32 r1_2 = r1_1 - (r1_1 + (u32(s32(r1_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
        arg0->y = s32(u32(r1_2));
        arg0->x = s32(u32(r2_2));
        guest::cpu()->r[1] = r1_2;
        return;
    }
    u32 r1_3 = r1_1 + 1u;
    u32 r1_4 = r1_3 - (r1_3 + (u32(s32(r1_3) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    arg0->y = s32(u32(r1_4));
    arg0->x = s32(u32(r2_2));
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_0052ed04
GUEST_EXPORT(0x0052ed04, d_0052ed04::f_0052ed04);

// f_0052ef44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef44 {

struct __attribute__((packed)) Object_0052ef44_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0052ef44_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0052ef44_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef44_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052ef88> global_0052ef88;  // (from the original)
inline guest::global<u32, 0x0085f2c4> global_0085f2c4;  // (from the original)
inline guest::global<u32, 0x0085f2c8> global_0085f2c8;  // (from the original)

u32 f_0052ef44(gptr<Object_0052ef44_0> arg0, gptr<Object_0052ef44_1> arg1) {
    float S0_1 = std::bit_cast<float>(*global_0052ef88);
    u32 r1_1 = arg1->word_0 * *global_0085f2c4;
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *global_0085f2c8))));
    arg0->word_0 = std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))));
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S1_1);
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return arg0.addr() + 4u;
}

}  // namespace d_0052ef44
GUEST_EXPORT(0x0052ef44, d_0052ef44::f_0052ef44);

// f_0052ef8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef8c {

struct __attribute__((packed)) Object_0052ef8c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef8c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef8c_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052eff4> global_0052eff4;  // (from the original)
inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0052ef8c(gptr<GridRect> arg0, gptr<Object_0052ef8c_1> arg1) {
    float S0_1 = std::bit_cast<float>(*global_0052eff4);
    u32 r1_1 = arg1->word_0 * *global_0085f2e0 + *global_0085f2e8;
    float S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    float S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *global_0085f2e4 + *global_0085f2ec))));
    arg0->min.x = s32(u32(std::bit_cast<u32>(S1_1)));
    arg0->min.y = s32(u32(std::bit_cast<u32>(S0_1)));
    arg0->max.x = s32(u32(std::bit_cast<u32>(S2_1)));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0052ef8c
GUEST_EXPORT_FRAMED(0x0052ef8c, d_0052ef8c::f_0052ef8c, 0x30);  // pushes {r4, r5} first, as the original
