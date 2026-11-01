// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007f6f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f6f40 {

struct __attribute__((packed)) Local_007f6f40_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f6f40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f6f40_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f6f40_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f6f40_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f6f40_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f6f40_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f6f40_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f6f40, u32(u32, u32, u32, u32)> call_007f6f40;

void f_007f6f40(u32 r0, u32 r1) {
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
    gptr<Local_007f6f40_ea_1> ea_1 = gptr<Local_007f6f40_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f6f40(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f6f40_ea_2> ea_2 = gptr<Local_007f6f40_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f6f40
GUEST_EXPORT(0x007f6f40, d_007f6f40::f_007f6f40);

// f_007f7aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f7aec {

struct __attribute__((packed)) Local_007f7aec_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f7aec_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f7aec_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f7aec_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f7aec_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f7aec_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f7aec_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f7aec_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f7aec, u32(u32, u32, u32, u32)> call_007f7aec;

void f_007f7aec(u32 r0, u32 r1) {
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
    gptr<Local_007f7aec_ea_1> ea_1 = gptr<Local_007f7aec_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f7aec(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f7aec_ea_2> ea_2 = gptr<Local_007f7aec_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f7aec
GUEST_EXPORT(0x007f7aec, d_007f7aec::f_007f7aec);

// f_007f82c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f82c4 {

struct __attribute__((packed)) Local_007f82c4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f82c4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f82c4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f82c4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f82c4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f82c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f82c4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f82c4_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f82c4, u32(u32, u32, u32, u32)> call_007f82c4;

void f_007f82c4(u32 r0, u32 r1) {
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
    gptr<Local_007f82c4_ea_1> ea_1 = gptr<Local_007f82c4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f82c4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f82c4_ea_2> ea_2 = gptr<Local_007f82c4_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f82c4
GUEST_EXPORT(0x007f82c4, d_007f82c4::f_007f82c4);

// f_007f8960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f8960 {

struct __attribute__((packed)) Local_007f8960_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f8960_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f8960_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f8960_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f8960_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f8960_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f8960_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f8960_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f8960, u32(u32, u32, u32, u32)> call_007f8960;

void f_007f8960(u32 r0, u32 r1) {
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
    gptr<Local_007f8960_ea_1> ea_1 = gptr<Local_007f8960_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f8960(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f8960_ea_2> ea_2 = gptr<Local_007f8960_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f8960
GUEST_EXPORT(0x007f8960, d_007f8960::f_007f8960);

// f_007f94f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f94f4 {

struct __attribute__((packed)) Local_007f94f4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f94f4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f94f4_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f94f4_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f94f4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f94f4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f94f4_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f94f4_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f94f4, u32(u32, u32, u32, u32)> call_007f94f4;

void f_007f94f4(u32 r0, u32 r1) {
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
    gptr<Local_007f94f4_ea_1> ea_1 = gptr<Local_007f94f4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f94f4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f94f4_ea_2> ea_2 = gptr<Local_007f94f4_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f94f4
GUEST_EXPORT(0x007f94f4, d_007f94f4::f_007f94f4);

// f_007f9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f9f44 {

struct __attribute__((packed)) Local_007f9f44_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f9f44_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007f9f44_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007f9f44_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007f9f44_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007f9f44_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007f9f44_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007f9f44_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007f9f44, u32(u32, u32, u32, u32)> call_007f9f44;

void f_007f9f44(u32 r0, u32 r1) {
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
    gptr<Local_007f9f44_ea_1> ea_1 = gptr<Local_007f9f44_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007f9f44(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007f9f44_ea_2> ea_2 = gptr<Local_007f9f44_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007f9f44
GUEST_EXPORT(0x007f9f44, d_007f9f44::f_007f9f44);

// f_007faacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007faacc {

struct __attribute__((packed)) Local_007faacc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007faacc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007faacc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007faacc_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007faacc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007faacc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007faacc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007faacc_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007faacc, u32(u32, u32, u32, u32)> call_007faacc;

void f_007faacc(u32 r0, u32 r1) {
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
    gptr<Local_007faacc_ea_1> ea_1 = gptr<Local_007faacc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007faacc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007faacc_ea_2> ea_2 = gptr<Local_007faacc_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007faacc
GUEST_EXPORT(0x007faacc, d_007faacc::f_007faacc);

// f_007fb4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fb4fc {

struct __attribute__((packed)) Local_007fb4fc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007fb4fc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fb4fc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fb4fc_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007fb4fc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007fb4fc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fb4fc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fb4fc_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007fb4fc, u32(u32, u32, u32, u32)> call_007fb4fc;

void f_007fb4fc(u32 r0, u32 r1) {
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
    gptr<Local_007fb4fc_ea_1> ea_1 = gptr<Local_007fb4fc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007fb4fc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007fb4fc_ea_2> ea_2 = gptr<Local_007fb4fc_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007fb4fc
GUEST_EXPORT(0x007fb4fc, d_007fb4fc::f_007fb4fc);

// f_007fc258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fc258 {

struct __attribute__((packed)) Local_007fc258_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fc258_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fc258_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fc258_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007fc258_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_007fc258_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_007fc258_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_007fc258_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fc258_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fc258_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fc258_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007fc258_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007fc258_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007fc258_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x003d32f0, u32(u32)> call_003d32f0;
inline constexpr guest::Function<0x007fc258, u32(u32, u32, u32, u32)> call_007fc258;

void f_007fc258(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        return;
    }
    gptr<Local_007fc258_ea_1> ea_1 = gptr<Local_007fc258_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_007fc258(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);  // (from the original)
        call_003d32f0(r7_1 + 8u);
        call_003d0d6c(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_007fc258_ea_2> ea_2 = gptr<Local_007fc258_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
}

}  // namespace d_007fc258
GUEST_EXPORT(0x007fc258, d_007fc258::f_007fc258);

// f_007fcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fcd40 {

struct __attribute__((packed)) Local_007fcd40_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fcd40_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fcd40_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fcd40_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007fcd40_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_007fcd40_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_007fcd40_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_007fcd40_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fcd40_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fcd40_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fcd40_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007fcd40_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007fcd40_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007fcd40_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x00361988, u32(u32, u32)> call_00361988;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x007fcd40, u32(u32, u32, u32, u32)> call_007fcd40;

void f_007fcd40(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        return;
    }
    gptr<Local_007fcd40_ea_1> ea_1 = gptr<Local_007fcd40_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_007fcd40(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_00361988(*gptr<u32>(r7_1 + 8u), r1_2);
        call_003d0d6c(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_007fcd40_ea_2> ea_2 = gptr<Local_007fcd40_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
}

}  // namespace d_007fcd40
GUEST_EXPORT(0x007fcd40, d_007fcd40::f_007fcd40);

// f_007fd790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fd790 {

struct __attribute__((packed)) Local_007fd790_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007fd790_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fd790_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fd790_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007fd790_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_007fd790_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007fd790_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fd790_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fd790_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007fd790_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> call_003d0d6c;
inline constexpr guest::Function<0x007fd790, u32(u32, u32, u32, u32)> call_007fd790;

void f_007fd790(u32 r0, u32 r1) {
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
    gptr<Local_007fd790_ea_1> ea_1 = gptr<Local_007fd790_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_007fd790(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_003d0d6c(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_007fd790_ea_2> ea_2 = gptr<Local_007fd790_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_007fd790
GUEST_EXPORT(0x007fd790, d_007fd790::f_007fd790);

// f_007fe0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fe0ac {

struct __attribute__((packed)) Local_007fe0ac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fe0ac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fe0ac_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fe0ac_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007fe0ac_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_007fe0ac_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_007fe0ac_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_007fe0ac_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_007fe0ac_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fe0ac_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fe0ac_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007fe0ac_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_007fe0ac_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_007fe0ac_ea_2, word_14, 0x14);

inline constexpr guest::Function<0x003d0d6c, u32(u32)> call_003d0d6c;
inline constexpr guest::Function<0x007fe0ac, u32(u32, u32, u32, u32)> call_007fe0ac;

void f_007fe0ac(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        return;
    }
    gptr<Local_007fe0ac_ea_1> ea_1 = gptr<Local_007fe0ac_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_007fe0ac(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);  // (from the original)
        call_003d0d6c(r7_1 + 8u);
        call_003d0d6c(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_007fe0ac_ea_2> ea_2 = gptr<Local_007fe0ac_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
}

}  // namespace d_007fe0ac
GUEST_EXPORT(0x007fe0ac, d_007fe0ac::f_007fe0ac);

// f_007fed54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fed54 {

struct __attribute__((packed)) Local_007fed54_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007fed54_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007fed54_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007fed54_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_007fed54_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_007fed54_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_007fed54_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007fed54_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007fed54_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_007fed54_ea_2, word_c, 0xc);

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> call_003d0d6c;
inline constexpr guest::Function<0x007fed54, u32(u32, u32, u32, u32)> call_007fed54;

void f_007fed54(u32 r0, u32 r1) {
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
    gptr<Local_007fed54_ea_1> ea_1 = gptr<Local_007fed54_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r14;
    r6 = r0;
    r4 = r1;
    do {
        call_007fed54(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_003d0d6c(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
    gptr<Local_007fed54_ea_2> ea_2 = gptr<Local_007fed54_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_1 = ea_2->word_8;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_007fed54
GUEST_EXPORT(0x007fed54, d_007fed54::f_007fed54);

// f_007ff900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ff900 {

struct __attribute__((packed)) Local_007ff900_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007ff900_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_007ff900_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_007ff900_ea_1, word_8, 0x8);

struct __attribute__((packed)) Local_007ff900_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_007ff900_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_007ff900_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_007ff900_ea_2, word_8, 0x8);

inline constexpr guest::Function<0x007ff900, u32(u32, u32, u32, u32)> call_007ff900;

void f_007ff900(u32 r0, u32 r1) {
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
    gptr<Local_007ff900_ea_1> ea_1 = gptr<Local_007ff900_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r5 = r0;
    r4 = r1;
    do {
        call_007ff900(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    gptr<Local_007ff900_ea_2> ea_2 = gptr<Local_007ff900_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
}

}  // namespace d_007ff900
GUEST_EXPORT(0x007ff900, d_007ff900::f_007ff900);
