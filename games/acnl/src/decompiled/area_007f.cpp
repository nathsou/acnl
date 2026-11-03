// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007f6f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f6f40 {

inline constexpr guest::Function<0x007f6f40, u32(u32, u32, u32, u32)> call_007f6f40;

void f_007f6f40(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f6f40(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f6f40
GUEST_EXPORT_FRAMED(0x007f6f40, d_007f6f40::f_007f6f40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f7aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f7aec {

inline constexpr guest::Function<0x007f7aec, u32(u32, u32, u32, u32)> call_007f7aec;

void f_007f7aec(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f7aec(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f7aec
GUEST_EXPORT_FRAMED(0x007f7aec, d_007f7aec::f_007f7aec, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f82c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f82c4 {

inline constexpr guest::Function<0x007f82c4, u32(u32, u32, u32, u32)> call_007f82c4;

void f_007f82c4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f82c4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f82c4
GUEST_EXPORT_FRAMED(0x007f82c4, d_007f82c4::f_007f82c4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f8960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f8960 {

inline constexpr guest::Function<0x007f8960, u32(u32, u32, u32, u32)> call_007f8960;

void f_007f8960(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f8960(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f8960
GUEST_EXPORT_FRAMED(0x007f8960, d_007f8960::f_007f8960, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f94f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f94f4 {

inline constexpr guest::Function<0x007f94f4, u32(u32, u32, u32, u32)> call_007f94f4;

void f_007f94f4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f94f4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f94f4
GUEST_EXPORT_FRAMED(0x007f94f4, d_007f94f4::f_007f94f4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007f9f44 {

inline constexpr guest::Function<0x007f9f44, u32(u32, u32, u32, u32)> call_007f9f44;

void f_007f9f44(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007f9f44(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f9f44
GUEST_EXPORT_FRAMED(0x007f9f44, d_007f9f44::f_007f9f44, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007faacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007faacc {

inline constexpr guest::Function<0x007faacc, u32(u32, u32, u32, u32)> call_007faacc;

void f_007faacc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007faacc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007faacc
GUEST_EXPORT_FRAMED(0x007faacc, d_007faacc::f_007faacc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007fb4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fb4fc {

inline constexpr guest::Function<0x007fb4fc, u32(u32, u32, u32, u32)> call_007fb4fc;

void f_007fb4fc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007fb4fc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007fb4fc
GUEST_EXPORT_FRAMED(0x007fb4fc, d_007fb4fc::f_007fb4fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007fc258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fc258 {

inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x003d32f0, u32(u32)> call_003d32f0;
inline constexpr guest::Function<0x007fc258, u32(u32, u32, u32, u32)> call_007fc258;

void f_007fc258(u32 r0, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_007fc258(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);  // (from the original)
        call_003d32f0(r7_1 + 8u);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fc258
GUEST_EXPORT_FRAMED(0x007fc258, d_007fc258::f_007fc258, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fcd40 {

inline constexpr guest::Function<0x00361988, u32(u32, u32)> call_00361988;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fcd40, u32(u32, u32, u32, u32)> call_007fcd40;

void f_007fcd40(u32 r0, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_007fcd40(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        call_00361988(*gptr<u32>(r7_1 + 8u), r1_2);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fcd40
GUEST_EXPORT_FRAMED(0x007fcd40, d_007fcd40::f_007fcd40, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fd790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fd790 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fd790, u32(u32, u32, u32, u32)> call_007fd790;

void f_007fd790(u32 r0, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_007fd790(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        nn__nex__String__virtual_0(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fd790
GUEST_EXPORT_FRAMED(0x007fd790, d_007fd790::f_007fd790, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007fe0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fe0ac {

inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fe0ac, u32(u32, u32, u32, u32)> call_007fe0ac;

void f_007fe0ac(u32 r0, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_007fe0ac(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);  // (from the original)
        nn__nex__String__virtual_0(r7_1 + 8u);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fe0ac
GUEST_EXPORT_FRAMED(0x007fe0ac, d_007fe0ac::f_007fe0ac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fed54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007fed54 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fed54, u32(u32, u32, u32, u32)> call_007fed54;

void f_007fed54(u32 r0, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_007fed54(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        nn__nex__String__virtual_0(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fed54
GUEST_EXPORT_FRAMED(0x007fed54, d_007fed54::f_007fed54, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007ff900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_007ff900 {

inline constexpr guest::Function<0x007ff900, u32(u32, u32, u32, u32)> call_007ff900;

void f_007ff900(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_007ff900(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007ff900
GUEST_EXPORT_FRAMED(0x007ff900, d_007ff900::f_007ff900, 0x4030);  // pushes {r4, r5, lr} first, as the original
