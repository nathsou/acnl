// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007f6f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f6f40 {

inline constexpr guest::Function<0x007f6f40, u32(u32, u32, u32, u32)> call_007f6f40;  // (from the original)

u32 f_007f6f40(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f6f54:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f6f40(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f6f40
GUEST_EXPORT(0x007f6f40, d_007f6f40::f_007f6f40);

// f_007f7aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f7aec {

inline constexpr guest::Function<0x007f7aec, u32(u32, u32, u32, u32)> call_007f7aec;  // (from the original)

u32 f_007f7aec(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f7b00:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f7aec(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f7aec
GUEST_EXPORT(0x007f7aec, d_007f7aec::f_007f7aec);

// f_007f82c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f82c4 {

inline constexpr guest::Function<0x007f82c4, u32(u32, u32, u32, u32)> call_007f82c4;  // (from the original)

u32 f_007f82c4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f82d8:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f82c4(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f82c4
GUEST_EXPORT(0x007f82c4, d_007f82c4::f_007f82c4);

// f_007f8960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f8960 {

inline constexpr guest::Function<0x007f8960, u32(u32, u32, u32, u32)> call_007f8960;  // (from the original)

u32 f_007f8960(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f8974:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f8960(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f8960
GUEST_EXPORT(0x007f8960, d_007f8960::f_007f8960);

// f_007f94f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f94f4 {

inline constexpr guest::Function<0x007f94f4, u32(u32, u32, u32, u32)> call_007f94f4;  // (from the original)

u32 f_007f94f4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f9508:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f94f4(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f94f4
GUEST_EXPORT(0x007f94f4, d_007f94f4::f_007f94f4);

// f_007f9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f9f44 {

inline constexpr guest::Function<0x007f9f44, u32(u32, u32, u32, u32)> call_007f9f44;  // (from the original)

u32 f_007f9f44(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7f9f58:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007f9f44(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007f9f44
GUEST_EXPORT(0x007f9f44, d_007f9f44::f_007f9f44);

// f_007faacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007faacc {

inline constexpr guest::Function<0x007faacc, u32(u32, u32, u32, u32)> call_007faacc;  // (from the original)

u32 f_007faacc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7faae0:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007faacc(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007faacc
GUEST_EXPORT(0x007faacc, d_007faacc::f_007faacc);

// f_007fb4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fb4fc {

inline constexpr guest::Function<0x007fb4fc, u32(u32, u32, u32, u32)> call_007fb4fc;  // (from the original)

u32 f_007fb4fc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7fb510:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fb4fc(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007fb4fc
GUEST_EXPORT(0x007fb4fc, d_007fb4fc::f_007fb4fc);

// f_007fc258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fc258 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x003d32f0, u32(u32, u32, u32, u32)> call_003d32f0;  // (from the original)
inline constexpr guest::Function<0x007fc258, u32(u32, u32, u32, u32)> call_007fc258;  // (from the original)

u32 f_007fc258(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_7fc26c:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fc258(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r5_1 = r4;
        r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = u32(*gptr<u32>(r6 + 4u));  // (from the original)
        r0_1 = r7_1 + 8u;
        guest::cpu()->r[13] = r13;
        call_003d32f0(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_2 = call_003d0d6c(r7_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5_1);
        guest::preempt();
    } while (r4 != 0);
    ea_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_007fc258
GUEST_EXPORT(0x007fc258, d_007fc258::f_007fc258);

// f_007fcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fcd40 {

inline constexpr guest::Function<0x00361988, u32(u32, u32, u32, u32)> call_00361988;  // (from the original)
inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x007fcd40, u32(u32, u32, u32, u32)> call_007fcd40;  // (from the original)

u32 f_007fcd40(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_7fcd54:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fcd40(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r6 + 4u);
        r5_1 = r4;
        r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = u32(r1_2);  // (from the original)
        r0_1 = *gptr<u32>(r7_1 + 8u);
        guest::cpu()->r[13] = r13;
        call_00361988(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_2 = call_003d0d6c(r7_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5_1);
        guest::preempt();
    } while (r4 != 0);
    ea_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_007fcd40
GUEST_EXPORT(0x007fcd40, d_007fcd40::f_007fcd40);

// f_007fd790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fd790 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x007fd790, u32(u32, u32, u32, u32)> call_007fd790;  // (from the original)

u32 f_007fd790(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_7fd7a4:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fd790(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r6 + 4u);
        r5_1 = r4;
        r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = u32(r1_2);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_003d0d6c(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5_1);
        guest::preempt();
    } while (r4 != 0);
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_007fd790
GUEST_EXPORT(0x007fd790, d_007fd790::f_007fd790);

// f_007fe0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fe0ac {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x007fe0ac, u32(u32, u32, u32, u32)> call_007fe0ac;  // (from the original)

u32 f_007fe0ac(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_7fe0c0:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fe0ac(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r5_1 = r4;
        r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = u32(*gptr<u32>(r6 + 4u));  // (from the original)
        r0_1 = r7_1 + 8u;
        guest::cpu()->r[13] = r13;
        call_003d0d6c(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        guest::cpu()->r[13] = r13;
        r0_2 = call_003d0d6c(r7_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5_1);
        guest::preempt();
    } while (r4 != 0);
    ea_2 = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    r7_2 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_007fe0ac
GUEST_EXPORT(0x007fe0ac, d_007fe0ac::f_007fe0ac);

// f_007fed54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fed54 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32, u32, u32)> call_003d0d6c;  // (from the original)
inline constexpr guest::Function<0x007fed54, u32(u32, u32, u32, u32)> call_007fed54;  // (from the original)

u32 f_007fed54(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_7fed68:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007fed54(r6, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r6 + 4u);
        r5_1 = r4;
        r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = u32(r1_2);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_003d0d6c(r0_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5_1);
        guest::preempt();
    } while (r4 != 0);
    ea_2 = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_2 = *gptr<u32>(ea_2 + 4);
    r6_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_007fed54
GUEST_EXPORT(0x007fed54, d_007fed54::f_007fed54);

// f_007ff900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ff900 {

inline constexpr guest::Function<0x007ff900, u32(u32, u32, u32, u32)> call_007ff900;  // (from the original)

u32 f_007ff900(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_7ff914:;
        r1_1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_007ff900(r5, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = *gptr<u32>(r5 + 4u);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1_2);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
    ea_2 = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4_1 = *gptr<u32>(ea_2);
    r5_1 = *gptr<u32>(ea_2 + 4);
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_007ff900
GUEST_EXPORT(0x007ff900, d_007ff900::f_007ff900);
