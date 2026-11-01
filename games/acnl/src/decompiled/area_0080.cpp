// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00800304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800304 {

struct __attribute__((packed)) Local_00800304_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00800304_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00800304_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00800304_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00800304_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00800304_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00800304_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00800304_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00800304, u32(u32, u32, u32, u32)> call_00800304;  // (from the original)

void f_00800304(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00800304_ea_1> ea_1 = gptr<Local_00800304_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00800304(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00800304_ea_2> ea_2 = gptr<Local_00800304_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00800304
GUEST_EXPORT(0x00800304, d_00800304::f_00800304);

// f_00800e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800e5c {

struct __attribute__((packed)) Local_00800e5c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00800e5c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00800e5c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00800e5c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00800e5c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00800e5c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00800e5c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00800e5c_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00800e5c, u32(u32, u32, u32, u32)> call_00800e5c;  // (from the original)

void f_00800e5c(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00800e5c_ea_1> ea_1 = gptr<Local_00800e5c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00800e5c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00800e5c_ea_2> ea_2 = gptr<Local_00800e5c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00800e5c
GUEST_EXPORT(0x00800e5c, d_00800e5c::f_00800e5c);

// f_00801604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00801604 {

struct __attribute__((packed)) Local_00801604_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00801604_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00801604_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00801604_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00801604_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00801604_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00801604_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00801604_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00801604, u32(u32, u32, u32, u32)> call_00801604;  // (from the original)

void f_00801604(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00801604_ea_1> ea_1 = gptr<Local_00801604_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00801604(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00801604_ea_2> ea_2 = gptr<Local_00801604_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00801604
GUEST_EXPORT(0x00801604, d_00801604::f_00801604);

// f_00802148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802148 {

struct __attribute__((packed)) Local_00802148_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00802148_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00802148_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00802148_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00802148_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00802148_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00802148_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00802148_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00802148, u32(u32, u32, u32, u32)> call_00802148;  // (from the original)

void f_00802148(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00802148_ea_1> ea_1 = gptr<Local_00802148_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00802148(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00802148_ea_2> ea_2 = gptr<Local_00802148_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00802148
GUEST_EXPORT(0x00802148, d_00802148::f_00802148);

// f_00802e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802e2c {

struct __attribute__((packed)) Local_00802e2c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00802e2c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00802e2c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00802e2c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00802e2c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00802e2c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00802e2c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00802e2c_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00802e2c, u32(u32, u32, u32, u32)> call_00802e2c;  // (from the original)

void f_00802e2c(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00802e2c_ea_1> ea_1 = gptr<Local_00802e2c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00802e2c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00802e2c_ea_2> ea_2 = gptr<Local_00802e2c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00802e2c
GUEST_EXPORT(0x00802e2c, d_00802e2c::f_00802e2c);

// f_00803244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00803244 {

struct __attribute__((packed)) Object_00803244_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00803244_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00802560, u32(u32, u32, u32, u32)> call_00802560;  // (from the original)
inline constexpr guest::Function<0x00802ccc, u32(u32, u32, u32, u32)> call_00802ccc;  // (from the original)

void f_00803244(gptr<Object_00803244_0> arg0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r5 = r1;
    u32 r4 = r0;
    if (r0 == r5) {
        return;
    }
    u32 r0_1 = arg0->word_10;
    *frame.at<u32>(4) = r0_1;
    *frame.at<u32>(0) = *gptr<u32>(r0_1 + 8u);
    call_00802560(frame.at(8).addr(), r4, frame.at(0).addr(), frame.at(4).addr());
    u32 r2_2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    u32 r0_3 = call_00802ccc(r4, *gptr<u32>(*gptr<u32>(r5 + 0x10u) + 4u), r2_2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(*gptr<u32>(r4 + 0x10u) + 4u) = r0_3;  // (from the original)
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r0_3 == 0) {
        *gptr<u32>(r1 + 8u) = r1;
        u32 r0_4 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        *gptr<u32>(r0_4 + 0xcu) = r0_4;  // (from the original)
    } else {
        u32 r2 = *gptr<u32>(r0_3 + 8u);
        if (r2 != 0) {
            do {
                r0_3 = r2;
                r2 = *gptr<u32>(r2 + 8u);
                guest::preempt();
            } while (r2 != 0);
        }
        *gptr<u32>(r1 + 8u) = r0_3;
        r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        u32 r0_5 = *gptr<u32>(r2 + 4u);
        r1 = *gptr<u32>(r0_5 + 0xcu);  // (from the original)
        if (r1 != 0) {
            do {
                r0_5 = r1;
                r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
                guest::preempt();
            } while (r1 != 0);
        }
        *gptr<u32>(r2 + 0xcu) = r0_5;  // (from the original)
    }
    *gptr<u32>(r4 + 0x14u) = *gptr<u32>(r5 + 0x14u);  // (from the original)
}

}  // namespace d_00803244
GUEST_EXPORT_FRAMED(0x00803244, d_00803244::f_00803244, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00803a80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00803a80 {

struct __attribute__((packed)) Local_00803a80_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00803a80_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00803a80_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00803a80_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00803a80_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00803a80_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00803a80_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00803a80_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00803a80, u32(u32, u32, u32, u32)> call_00803a80;  // (from the original)

void f_00803a80(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00803a80_ea_1> ea_1 = gptr<Local_00803a80_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00803a80(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00803a80_ea_2> ea_2 = gptr<Local_00803a80_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00803a80
GUEST_EXPORT(0x00803a80, d_00803a80::f_00803a80);

// f_00804878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00804878 {

struct __attribute__((packed)) Local_00804878_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00804878_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00804878_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00804878_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00804878_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x003cf0b8, u32(u32, u32)> call_003cf0b8;  // (from the original)
inline constexpr guest::Function<0x00804878, u32(u32, u32, u32, u32)> call_00804878;  // (from the original)

void f_00804878(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_00804878_ea_1> ea_1 = gptr<Local_00804878_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_00804878(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        u32 r5_1 = r4;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_003cf0b8(r0_1 + 4u, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_00804878_ea_2> ea_2 = gptr<Local_00804878_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_00804878
GUEST_EXPORT(0x00804878, d_00804878::f_00804878);

// f_0080561c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080561c {

struct __attribute__((packed)) Local_0080561c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080561c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080561c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080561c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080561c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080561c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080561c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080561c_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080561c, u32(u32, u32, u32, u32)> call_0080561c;  // (from the original)

void f_0080561c(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080561c_ea_1> ea_1 = gptr<Local_0080561c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080561c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080561c_ea_2> ea_2 = gptr<Local_0080561c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080561c
GUEST_EXPORT(0x0080561c, d_0080561c::f_0080561c);

// f_00806030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806030 {

struct __attribute__((packed)) Local_00806030_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00806030_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00806030_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00806030_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00806030_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00806030_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00806030_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00806030_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00806030, u32(u32, u32, u32, u32)> call_00806030;  // (from the original)

void f_00806030(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00806030_ea_1> ea_1 = gptr<Local_00806030_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00806030(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00806030_ea_2> ea_2 = gptr<Local_00806030_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00806030
GUEST_EXPORT(0x00806030, d_00806030::f_00806030);

// f_00806b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806b44 {

struct __attribute__((packed)) Local_00806b44_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00806b44_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00806b44_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00806b44_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00806b44_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00806b44_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00806b44_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00806b44_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00806b44, u32(u32, u32, u32, u32)> call_00806b44;  // (from the original)

void f_00806b44(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00806b44_ea_1> ea_1 = gptr<Local_00806b44_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00806b44(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00806b44_ea_2> ea_2 = gptr<Local_00806b44_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00806b44
GUEST_EXPORT(0x00806b44, d_00806b44::f_00806b44);

// f_00807658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00807658 {

struct __attribute__((packed)) Local_00807658_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00807658_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00807658_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00807658_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00807658_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00807658_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00807658_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00807658_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00807658, u32(u32, u32, u32, u32)> call_00807658;  // (from the original)

void f_00807658(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00807658_ea_1> ea_1 = gptr<Local_00807658_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00807658(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00807658_ea_2> ea_2 = gptr<Local_00807658_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00807658
GUEST_EXPORT(0x00807658, d_00807658::f_00807658);

// f_0080806c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080806c {

struct __attribute__((packed)) Local_0080806c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080806c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080806c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080806c_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080806c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080806c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080806c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080806c_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080806c, u32(u32, u32, u32, u32)> call_0080806c;  // (from the original)

void f_0080806c(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080806c_ea_1> ea_1 = gptr<Local_0080806c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080806c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080806c_ea_2> ea_2 = gptr<Local_0080806c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080806c
GUEST_EXPORT(0x0080806c, d_0080806c::f_0080806c);

// f_00808be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00808be0 {

struct __attribute__((packed)) Local_00808be0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00808be0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00808be0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00808be0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00808be0_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00355ff8, u32(u32, u32)> call_00355ff8;  // (from the original)
inline constexpr guest::Function<0x00808be0, u32(u32, u32, u32, u32)> call_00808be0;  // (from the original)

void f_00808be0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        return;
    }
    gptr<Local_00808be0_ea_1> ea_1 = gptr<Local_00808be0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_00808be0(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        u32 r5_1 = r4;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_00355ff8(r0_1 + 0x10u, r1_2);  // (from the original)
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_00808be0_ea_2> ea_2 = gptr<Local_00808be0_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_00808be0
GUEST_EXPORT(0x00808be0, d_00808be0::f_00808be0);

// f_00809898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00809898 {

struct __attribute__((packed)) Local_00809898_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00809898_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00809898_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00809898_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00809898_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00809898_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00809898_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00809898_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00809898, u32(u32, u32, u32, u32)> call_00809898;  // (from the original)

void f_00809898(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_00809898_ea_1> ea_1 = gptr<Local_00809898_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_00809898(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_00809898_ea_2> ea_2 = gptr<Local_00809898_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_00809898
GUEST_EXPORT(0x00809898, d_00809898::f_00809898);

// f_0080a3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080a3ec {

struct __attribute__((packed)) Local_0080a3ec_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080a3ec_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080a3ec_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080a3ec_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080a3ec_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080a3ec_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080a3ec_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080a3ec_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080a3ec, u32(u32, u32, u32, u32)> call_0080a3ec;  // (from the original)

void f_0080a3ec(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080a3ec_ea_1> ea_1 = gptr<Local_0080a3ec_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080a3ec(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080a3ec_ea_2> ea_2 = gptr<Local_0080a3ec_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080a3ec
GUEST_EXPORT(0x0080a3ec, d_0080a3ec::f_0080a3ec);

// f_0080aa88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080aa88 {

struct __attribute__((packed)) Local_0080aa88_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080aa88_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080aa88_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080aa88_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080aa88_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080aa88_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080aa88_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080aa88_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080aa88, u32(u32, u32, u32, u32)> call_0080aa88;  // (from the original)

void f_0080aa88(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080aa88_ea_1> ea_1 = gptr<Local_0080aa88_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080aa88(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080aa88_ea_2> ea_2 = gptr<Local_0080aa88_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080aa88
GUEST_EXPORT(0x0080aa88, d_0080aa88::f_0080aa88);

// f_0080b4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080b4a0 {

struct __attribute__((packed)) Local_0080b4a0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080b4a0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080b4a0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080b4a0_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080b4a0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080b4a0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080b4a0_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080b4a0_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080b4a0, u32(u32, u32, u32, u32)> call_0080b4a0;  // (from the original)

void f_0080b4a0(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080b4a0_ea_1> ea_1 = gptr<Local_0080b4a0_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080b4a0(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080b4a0_ea_2> ea_2 = gptr<Local_0080b4a0_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080b4a0
GUEST_EXPORT(0x0080b4a0, d_0080b4a0::f_0080b4a0);

// f_0080bfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080bfc4 {

struct __attribute__((packed)) Local_0080bfc4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080bfc4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080bfc4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080bfc4_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0080bfc4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0080bfc4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080bfc4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080bfc4_ea_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0080bfc4, u32(u32, u32, u32, u32)> call_0080bfc4;  // (from the original)

void f_0080bfc4(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0080bfc4_ea_1> ea_1 = gptr<Local_0080bfc4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_0080bfc4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_0080bfc4_ea_2> ea_2 = gptr<Local_0080bfc4_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_0080bfc4
GUEST_EXPORT(0x0080bfc4, d_0080bfc4::f_0080bfc4);

// f_0080cbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080cbac {

struct __attribute__((packed)) Local_0080cbac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0080cbac_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_1, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0080cbac_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0080cbac_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_2, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0080cbac_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0080cbac_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080cbac_ea_3, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0080cbac_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080cbac_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080cbac_r3_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0080cbac_r3_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080cbac_r3_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080cbac_r3_4, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32, u32, u32)> call_005cdfe8;  // (from the original)
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> call_005ce13c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_0080cbac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x68);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_15 = 0;
    gptr<Local_0080cbac_ea_1> ea_1 = gptr<Local_0080cbac_ea_1>(frame.at(0x48).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    call_0074824c(frame.at(0x10).addr(), r0, r2, r3);  // (from the original)
    call_00748284(frame.at(0x30).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = frame.at(0x30).addr();  // (from the original)
    u32 r0_4 = call_007481ec(r0_3, frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
    } else {
        r7 = frame.at(0).addr();
        do {
            r5 = frame.at(0x4c).addr();  // (from the original)
            u32 r6_1 = frame.at(0x38).addr();  // (from the original)
            if (*frame.at<u32>(0x50) != 0) {  // (from the original)
                call_0052edfc(frame.at(8).addr(), r6_1, r2, r3);
                gptr<Local_0080cbac_r3_3> r3_3 = gptr<Local_0080cbac_r3_3>(frame.at(8).addr());
                u32 r0_7 = call_0075291c(*frame.at<u32>(0x50), r3_3->word_0, r3_3->word_4, r3_3.addr());  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    call_0052ed04(frame.at(0x28).addr(), r6_1, r2, r3);  // (from the original)
                    gptr<Local_0080cbac_r3_4> r3_4 = gptr<Local_0080cbac_r3_4>(frame.at(0x28).addr());  // (from the original)
                    u32 r0_9 = call_0075d608(r0_7, r3_4->word_0, r3_4->word_4, r3_4.addr());
                    call_005cdfe8(frame.at(0x20).addr(), r0_9, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 = 0u;
                    *frame.at<u8>(0) = u8(u32(*frame.at<u8>(0x20)));  // (from the original)
                    *frame.at<u8>(1) = u8(u32(*frame.at<u8>(0x22)));  // (from the original)
                    *frame.at<u8>(2) = u8(u32(*frame.at<u8>(0x21)));  // (from the original)
                    *frame.at<u8>(3) = u8(u32(*frame.at<u8>(0x23)));  // (from the original)
                    do {
                        u32 r0_11 = *gptr<u8>(r7 + r4);
                        u32 r0_12 = call_005ce13c(r0_11, r1, r2, r3);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        r1 = *gptr<u8>(r5);
                        if (r1 == r0_12) {
                            gptr<Local_0080cbac_ea_2> ea_2 = gptr<Local_0080cbac_ea_2>(frame.at(0x54).addr());  // (from the original)
                            u32 r4_1 = ea_2->word_0;
                            u32 r5_1 = ea_2->word_4;
                            u32 r6_2 = ea_2->word_8;
                            u32 r7_1 = ea_2->word_c;
                            guest::cpu()->r[1] = r1;
                            guest::cpu()->r[4] = r4_1;
                            guest::cpu()->r[5] = r5_1;
                            guest::cpu()->r[6] = r6_2;
                            guest::cpu()->r[7] = r7_1;
                            return 1u;
                        }
                        r4 += 1u;
                        guest::preempt();
                    } while (r4 < 4u);
                }
            }
            call_0052f144(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
            r0_15 = call_007481ec(frame.at(0x30).addr(), frame.at(0x10).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_15 != 0);
    }
    gptr<Local_0080cbac_ea_3> ea_3 = gptr<Local_0080cbac_ea_3>(frame.at(0x54).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_3 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    return 0u;
}

}  // namespace d_0080cbac
GUEST_EXPORT(0x0080cbac, d_0080cbac::f_0080cbac);

// f_0080d3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d3cc {

struct __attribute__((packed)) Local_0080d3cc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0080d3cc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0080d3cc_ea_2 {
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
};
GUEST_OFFSET(Local_0080d3cc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_2, word_24, 0x24);  // (from the original)

struct __attribute__((packed)) Local_0080d3cc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_0080d3cc_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_ea_3, word_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_0080d3cc_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080d3cc_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_r0_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0080d3cc_r5_2 {
    u8 unknown_0[0x8];  // (not used here)
    u16 half_8;
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_0080d3cc_r5_2, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_r5_2, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_r5_2, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0080d3cc_r5_2, byte_d, 0xd);  // (from the original)

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32, u32)> call_003117dc;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x00712600, u32(u32, u32, u32, u32)> call_00712600;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_0080d3cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x698);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_11 = 0;
    gptr<Local_0080d3cc_ea_1> ea_1 = gptr<Local_0080d3cc_ea_1>(frame.at(0x688).addr());  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_0080d3cc_ea_2> ea_2 = gptr<Local_0080d3cc_ea_2>(frame.at(0x660).addr());  // (from the original)
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    ea_2->word_8 = r6;
    ea_2->word_c = r7;
    ea_2->word_10 = r8;
    ea_2->word_14 = r9;
    ea_2->word_18 = r10;
    ea_2->word_1c = r11;
    ea_2->word_20 = r12;
    ea_2->word_24 = r14;
    u32 r5_1 = frame.at(0x638).addr();  // (from the original)
    call_0074824c(r5_1, r1, r2, r3);
    u32 r4_1 = frame.at(0x610).addr();  // (from the original)
    call_00748284(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = call_007481ec(r4_1, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
    } else {
        r6 = frame.at(0x690).addr();  // (from the original)
        r10 = frame.at(0x624).addr();  // (from the original)
        do {
            gptr<Local_0080d3cc_r0_2> r0_2 = gptr<Local_0080d3cc_r0_2>(frame.at(0x618).addr());  // (from the original)
            u32 r1_1 = *frame.at<u32>(0x690);  // (from the original)
            if (r1_1 != 0) {
                u32 r0_3 = call_00317148(r1_1, r0_2->word_0, r0_2->word_4, r1_1);
                *frame.at<u32>(0x634) = r0_3;  // (from the original)
                u32 r0_5 = call_00712600(*frame.at<u32>(0x694), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                r1_1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    u32 r3_4 = *gptr<u16>(*frame.at<u32>(0x634));  // (from the original)
                    u32 r0_7 = call_00200ab4(*frame.at<u32>(0x694), r6 + 8u, 0x600u, r3_4);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r7 = r0_7;
                    r4 = 0u;
                    if (r0_7 >= 0u && r0_7 != 0) {
                        do {
                            gptr<Local_0080d3cc_r5_2> r5_2 = gptr<Local_0080d3cc_r5_2>(r6 + (r4 + (r4 << 1) << 1));
                            u32 r8_1 = r5_2->half_8;
                            u32 r9_1 = r5_2->byte_c;
                            u32 r11_1 = r5_2->byte_d;
                            call_002fcbb0(r10, r8_1, r2, r3);
                            u32 r0_8 = call_0030b654(r10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            if (r0_8 != 0) {
                                u32 r5_3 = u32(r5_2->half_a) >> 0xe;  // (from the original)
                                u32 r0_9 = call_002fcbb0(frame.at(0x64c).addr(), r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                                call_003117dc(r10, r0_9, r5_3, guest::cpu()->r[3]);
                            }
                            *frame.at<u32>(0) = 0;
                            call_0057bce0(*frame.at<u32>(0x634), r10, r9_1, r11_1);  // (from the original)
                            r1_1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            r4 += 1u;
                            guest::preempt();
                        } while (r4 < r7);
                    }
                }
            }
            u32 r4_2 = frame.at(0x610).addr();  // (from the original)
            call_0052f144(r4_2, r1_1, r2, r3);
            r0_11 = call_007481ec(r4_2, frame.at(0x638).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    u32 r4_3 = frame.at(8).addr();
    call_002fbb30(r4_3, frame.at(0x690).addr(), 0x608u, r3);  // (from the original)
    u32 r0_13 = call_002fbb30(*frame.at<u32>(0x688), r4_3, 0x608u, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0080d3cc_ea_3> ea_3 = gptr<Local_0080d3cc_ea_3>(frame.at(0x660).addr());  // (from the original)
    u32 r4_4 = ea_3->word_0;
    u32 r5_4 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_3 = ea_3->word_10;
    u32 r9_2 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    u32 r11_2 = ea_3->word_1c;
    u32 v_1 = *frame.at<u32>(0x684);  // (from the original)
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
    return r0_13;
}

}  // namespace d_0080d3cc
GUEST_EXPORT(0x0080d3cc, d_0080d3cc::f_0080d3cc);

// f_0080d59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d59c {

struct __attribute__((packed)) Local_0080d59c_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080d59c_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d59c_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32, u32)> call_001c1fcc;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32)> call_006a92f4;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_0080d59c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_12 = 0;
    u32 r5 = r1;
    call_0074824c(frame.at(0x10).addr(), r0, r2, guest::cpu()->r[3]);  // (from the original)
    call_00748284(frame.at(0).addr(), r0, guest::cpu()->r[2]);
    u32 r0_4 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        do {
            gptr<Local_0080d59c_r4_1> r4_1 = gptr<Local_0080d59c_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_5 = call_00317148(r5, r4_1->word_0, r4_1->word_4);
                u32 r0_6 = call_0075291c(r5, r4_1->word_0, r4_1->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_6 != 0) {
                    u32 r0_7 = *gptr<u16>(r0_5);
                    u32 r0_8 = call_00304530(r0_7, r1, r2);
                    u32 r0_9 = call_001c1fcc(r0_8, r0_7, guest::cpu()->r[2]);
                    r2 = guest::cpu()->r[2];
                    r1 = r0_9;
                    if (r0_9 != 0) {
                        call_006a92f4(r0_6, r1, 0xa00u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    }
                }
            }
            call_0052f144(frame.at(0).addr(), r1, r2);
            r0_12 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_12 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0080d59c
GUEST_EXPORT_FRAMED(0x0080d59c, d_0080d59c::f_0080d59c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0080d68c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d68c {

struct __attribute__((packed)) Local_0080d68c_r0_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080d68c_r0_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0080d68c_r0_5, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_0080d68c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r0_14 = 0;
    u32 r0_17 = 0;
    u32 r5 = r1;
    call_0074824c(frame.at(0x28).addr(), r0, r2, r3);  // (from the original)
    call_00748284(frame.at(0x18).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_3 = frame.at(0x18).addr();  // (from the original)
    u32 r0_4 = call_007481ec(r0_3, frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
    } else {
        u32 r8 = 0u;
        u32 r7 = 1u;
        do {
            gptr<Local_0080d68c_r0_5> r0_5 = gptr<Local_0080d68c_r0_5>(frame.at(0x20).addr());  // (from the original)
            if (r5 != 0) {
                u32 r0_6 = call_00317148(r5, r0_5->word_0, r0_5->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r6 = r0_6;
                if (r0_6 != 0) {
                    u32 r0_7 = call_0057bb98(r0_6, r1, r2, r3);
                    call_0074824c(frame.at(0x38).addr(), r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    call_00748284(frame.at(8).addr(), r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);
                    u32 r0_11 = call_007481ec(frame.at(8).addr(), frame.at(0x38).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_11 != 0) {
                        do {
                            u32 r4_1 = *frame.at<u32>(0x14);  // (from the original)
                            u32 r2_7 = *frame.at<u32>(0x10);  // (from the original)
                            *frame.at<u32>(0) = r8;
                            call_0057bce0(r6, 0x95bfdcu, r2_7, r4_1);  // (from the original)
                            u32 r4_2 = *frame.at<u32>(0x14);  // (from the original)
                            u32 r2_8 = *frame.at<u32>(0x10);  // (from the original)
                            *frame.at<u32>(0) = r7;
                            call_0057bce0(r6, 0x95bfdcu, r2_8, r4_2);  // (from the original)
                            call_0052f144(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r0_14 = call_007481ec(frame.at(8).addr(), frame.at(0x38).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            guest::preempt();
                        } while (r0_14 != 0);
                    }
                }
            }
            call_0052f144(frame.at(0x18).addr(), r1, r2, r3);  // (from the original)
            r0_17 = call_007481ec(frame.at(0x18).addr(), frame.at(0x28).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_17 != 0);
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0080d68c
GUEST_EXPORT_FRAMED(0x0080d68c, d_0080d68c::f_0080d68c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0080ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080ef60 {


void f_0080ef60(gptr<pead__FixedSafeString_32_> arg0) {
    arg0->word_4 = arg0.addr() + 0xcu;  // (from the original)
    arg0->word_8 = 0x20;  // (from the original)
    *gptr<u8>(0x20u + (arg0->word_4 - 1u)) = 0;  // (from the original)
    *gptr<u8>(arg0->word_4) = 0;
    arg0->word_0 = 0x903a40;  // (from the original)
}

}  // namespace d_0080ef60
GUEST_EXPORT(0x0080ef60, d_0080ef60::f_0080ef60);
