// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00800304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800304 {

inline constexpr guest::Function<0x00800304, u32(u32, u32, u32, u32)> call_00800304;

void f_00800304(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00800304(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00800304
GUEST_EXPORT_FRAMED(0x00800304, d_00800304::f_00800304, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00800e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800e5c {

inline constexpr guest::Function<0x00800e5c, u32(u32, u32, u32, u32)> call_00800e5c;

void f_00800e5c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00800e5c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00800e5c
GUEST_EXPORT_FRAMED(0x00800e5c, d_00800e5c::f_00800e5c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00801604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00801604 {

inline constexpr guest::Function<0x00801604, u32(u32, u32, u32, u32)> call_00801604;

void f_00801604(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00801604(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00801604
GUEST_EXPORT_FRAMED(0x00801604, d_00801604::f_00801604, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00802148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802148 {

inline constexpr guest::Function<0x00802148, u32(u32, u32, u32, u32)> call_00802148;

void f_00802148(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00802148(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00802148
GUEST_EXPORT_FRAMED(0x00802148, d_00802148::f_00802148, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00802e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802e2c {

inline constexpr guest::Function<0x00802e2c, u32(u32, u32, u32, u32)> call_00802e2c;

void f_00802e2c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00802e2c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00802e2c
GUEST_EXPORT_FRAMED(0x00802e2c, d_00802e2c::f_00802e2c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00803244: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00803244 {

struct __attribute__((packed)) Object_00803244_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00803244_0, word_10, 0x10);

struct __attribute__((packed)) Object_00803244_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_00803244_1, word_10, 0x10);

inline constexpr guest::Function<0x00802560, u32(u32, u32, u32, u32)> call_00802560;
inline constexpr guest::Function<0x00802ccc, u32(u32, u32, u32)> nn__nex___DDL_DataStoreRatingInfo___DDL_DataStoreRatingInfo_00802ccc;

struct __attribute__((packed)) Frame_00803244 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_00803244, word_0, 0x0);
GUEST_OFFSET(Frame_00803244, word_4, 0x4);
GUEST_SIZE(Frame_00803244, 0xc);

void f_00803244(gptr<Object_00803244_0> arg0, gptr<Object_00803244_1> arg1) {
    guest::StackFrameOf<Frame_00803244> frame;  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r5 = r1;
    u32 r4 = r0;
    if (r0 == r5) {
        return;
    }
    u32 r0_1 = arg0->word_10;
    frame->word_4 = r0_1;
    frame->word_0 = *gptr<u32>(r0_1 + 8u);
    call_00802560(frame.at(8).addr(), r4, frame.at(0).addr(), frame.at(4).addr());
    u32 r0_3 = nn__nex___DDL_DataStoreRatingInfo___DDL_DataStoreRatingInfo_00802ccc(r4, *gptr<u32>(arg1->word_10 + 4u), arg0->word_10);
    *gptr<u32>(arg0->word_10 + 4u) = r0_3;
    r1 = arg0->word_10;
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

inline constexpr guest::Function<0x00803a80, u32(u32, u32, u32, u32)> call_00803a80;

void f_00803a80(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00803a80(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00803a80
GUEST_EXPORT_FRAMED(0x00803a80, d_00803a80::f_00803a80, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00804878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00804878 {

inline constexpr guest::Function<0x003cf0b8, u32(u32, u32)> call_003cf0b8;
inline constexpr guest::Function<0x00804878, u32(u32, u32, u32, u32)> call_00804878;

void f_00804878(u32 r0, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
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
}

}  // namespace d_00804878
GUEST_EXPORT_FRAMED(0x00804878, d_00804878::f_00804878, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0080561c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080561c {

inline constexpr guest::Function<0x0080561c, u32(u32, u32, u32, u32)> call_0080561c;

void f_0080561c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080561c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080561c
GUEST_EXPORT_FRAMED(0x0080561c, d_0080561c::f_0080561c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00806030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806030 {

inline constexpr guest::Function<0x00806030, u32(u32, u32, u32, u32)> call_00806030;

void f_00806030(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00806030(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00806030
GUEST_EXPORT_FRAMED(0x00806030, d_00806030::f_00806030, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00806b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806b44 {

inline constexpr guest::Function<0x00806b44, u32(u32, u32, u32, u32)> call_00806b44;

void f_00806b44(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00806b44(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00806b44
GUEST_EXPORT_FRAMED(0x00806b44, d_00806b44::f_00806b44, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00807658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00807658 {

inline constexpr guest::Function<0x00807658, u32(u32, u32, u32, u32)> call_00807658;

void f_00807658(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00807658(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00807658
GUEST_EXPORT_FRAMED(0x00807658, d_00807658::f_00807658, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0080806c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080806c {

inline constexpr guest::Function<0x0080806c, u32(u32, u32, u32, u32)> call_0080806c;

void f_0080806c(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080806c(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080806c
GUEST_EXPORT_FRAMED(0x0080806c, d_0080806c::f_0080806c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00808be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00808be0 {

inline constexpr guest::Function<0x00355ff8, u32(u32, u32)> nn__nex__StationURL__virtual_0;
inline constexpr guest::Function<0x00808be0, u32(u32, u32, u32, u32)> call_00808be0;

void f_00808be0(u32 r0, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = r0;
    u32 r4 = r1;
    do {
        call_00808be0(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r0_1 = r4 + 0x10u;  // (from the original)
        u32 r5_1 = r4;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;  // (from the original)
        nn__nex__StationURL__virtual_0(r0_1 + 0x10u, r1_2);  // (from the original)
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_00808be0
GUEST_EXPORT_FRAMED(0x00808be0, d_00808be0::f_00808be0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00809898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00809898 {

inline constexpr guest::Function<0x00809898, u32(u32, u32, u32, u32)> call_00809898;

void f_00809898(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_00809898(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_00809898
GUEST_EXPORT_FRAMED(0x00809898, d_00809898::f_00809898, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0080a3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080a3ec {

inline constexpr guest::Function<0x0080a3ec, u32(u32, u32, u32, u32)> call_0080a3ec;

void f_0080a3ec(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080a3ec(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080a3ec
GUEST_EXPORT_FRAMED(0x0080a3ec, d_0080a3ec::f_0080a3ec, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0080aa88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080aa88 {

inline constexpr guest::Function<0x0080aa88, u32(u32, u32, u32, u32)> call_0080aa88;

void f_0080aa88(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080aa88(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080aa88
GUEST_EXPORT_FRAMED(0x0080aa88, d_0080aa88::f_0080aa88, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0080b4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080b4a0 {

inline constexpr guest::Function<0x0080b4a0, u32(u32, u32, u32, u32)> call_0080b4a0;

void f_0080b4a0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080b4a0(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080b4a0
GUEST_EXPORT_FRAMED(0x0080b4a0, d_0080b4a0::f_0080b4a0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0080bfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080bfc4 {

inline constexpr guest::Function<0x0080bfc4, u32(u32, u32, u32, u32)> call_0080bfc4;

void f_0080bfc4(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = r0;
    u32 r4 = r1;
    do {
        call_0080bfc4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);  // (from the original)
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_0080bfc4
GUEST_EXPORT_FRAMED(0x0080bfc4, d_0080bfc4::f_0080bfc4, 0x4030);  // pushes {r4, r5, lr} first, as the original

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
GUEST_OFFSET(Local_0080cbac_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0080cbac_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0080cbac_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0080cbac_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0080cbac_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0080cbac_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_0080cbac_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_0080cbac_ea_1, word_1c, 0x1c);

struct __attribute__((packed)) Local_0080cbac_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0080cbac_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0080cbac_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0080cbac_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0080cbac_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0080cbac_ea_2, word_10, 0x10);

struct __attribute__((packed)) Local_0080cbac_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0080cbac_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0080cbac_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0080cbac_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0080cbac_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0080cbac_ea_3, word_10, 0x10);

struct __attribute__((packed)) Local_0080cbac_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080cbac_r3_3, word_0, 0x0);
GUEST_OFFSET(Local_0080cbac_r3_3, word_4, 0x4);

struct __attribute__((packed)) Local_0080cbac_r3_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080cbac_r3_4, word_0, 0x0);
GUEST_OFFSET(Local_0080cbac_r3_4, word_4, 0x4);

inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> GridPoint__set_tile_in_block;
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> block_of_cell;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x005cdfe8, u32(u32, u32)> terrain_record;
inline constexpr guest::Function<0x005ce13c, u32(u32, u32, u32, u32)> byte_95d91e;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> GridMap__large_cell_at;
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> GridCellLarge__terrain_at;

struct __attribute__((packed)) Frame_0080cbac {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 unknown_4[0x1c];  // (not read or written by name)
    u8 byte_20;
    u8 byte_21;
    u8 byte_22;
    u8 byte_23;
    u8 unknown_24[0x2c];  // (not read or written by name)
    u32 word_50;
    u8 unknown_54[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0080cbac, byte_0, 0x0);
GUEST_OFFSET(Frame_0080cbac, byte_1, 0x1);
GUEST_OFFSET(Frame_0080cbac, byte_2, 0x2);
GUEST_OFFSET(Frame_0080cbac, byte_3, 0x3);
GUEST_OFFSET(Frame_0080cbac, byte_20, 0x20);
GUEST_OFFSET(Frame_0080cbac, byte_21, 0x21);
GUEST_OFFSET(Frame_0080cbac, byte_22, 0x22);
GUEST_OFFSET(Frame_0080cbac, byte_23, 0x23);
GUEST_OFFSET(Frame_0080cbac, word_50, 0x50);
GUEST_SIZE(Frame_0080cbac, 0x68);

u32 f_0080cbac(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0080cbac> frame;  // the original's stack frame
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
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r0, r2, r3);  // (from the original)
    construct_grid_rect_iterator(frame.at(0x30).addr(), r0);  // (from the original)
    u32 r0_4 = key_records_differ(frame.at(0x30).addr(), frame.at(0x10).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        r7 = frame.at(0).addr();
        do {
            r5 = frame.at(0x4c).addr();  // (from the original)
            u32 r6_1 = frame.at(0x38).addr();  // (from the original)
            if (frame->word_50 != 0) {
                block_of_cell(frame.at(8).addr(), r6_1, r2, r3);
                gptr<Local_0080cbac_r3_3> r3_3 = gptr<Local_0080cbac_r3_3>(frame.at(8).addr());
                u32 r0_7 = GridMap__large_cell_at(frame->word_50, r3_3->word_0, r3_3->word_4, r3_3.addr());
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    GridPoint__set_tile_in_block(frame.at(0x28).addr(), r6_1, r2, r3);  // (from the original)
                    gptr<Local_0080cbac_r3_4> r3_4 = gptr<Local_0080cbac_r3_4>(frame.at(0x28).addr());  // (from the original)
                    u32 r0_9 = GridCellLarge__terrain_at(r0_7, r3_4->word_0, r3_4->word_4, r3_4.addr());
                    terrain_record(frame.at(0x20).addr(), r0_9);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 = 0u;
                    frame->byte_0 = frame->byte_20;
                    frame->byte_1 = frame->byte_22;
                    frame->byte_2 = frame->byte_21;
                    frame->byte_3 = frame->byte_23;
                    do {
                        u32 r0_11 = *gptr<u8>(r7 + r4);
                        u32 r0_12 = byte_95d91e(r0_11, r1, r2, r3);
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
            WrappingCursor__advance(frame.at(0x30).addr(), r1, r2, r3);  // (from the original)
            r0_15 = key_records_differ(frame.at(0x30).addr(), frame.at(0x10).addr());  // (from the original)
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
GUEST_OFFSET(Local_0080d3cc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0080d3cc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0080d3cc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0080d3cc_ea_1, word_c, 0xc);

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
GUEST_OFFSET(Local_0080d3cc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_20, 0x20);
GUEST_OFFSET(Local_0080d3cc_ea_2, word_24, 0x24);

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
GUEST_OFFSET(Local_0080d3cc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_14, 0x14);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_18, 0x18);
GUEST_OFFSET(Local_0080d3cc_ea_3, word_1c, 0x1c);

struct __attribute__((packed)) Local_0080d3cc_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080d3cc_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0080d3cc_r0_2, word_4, 0x4);

struct __attribute__((packed)) Local_0080d3cc_r5_2 {
    u8 unknown_0[0x8];  // (not used here)
    u16 half_8;
    u16 half_a;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_0080d3cc_r5_2, half_8, 0x8);
GUEST_OFFSET(Local_0080d3cc_r5_2, half_a, 0xa);
GUEST_OFFSET(Local_0080d3cc_r5_2, byte_c, 0xc);
GUEST_OFFSET(Local_0080d3cc_r5_2, byte_d, 0xd);

inline constexpr guest::Function<0x00200ab4, u32(u32, u32, u32, u32)> call_00200ab4;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> construct_item;
inline constexpr guest::Function<0x0030b654, u32(u32)> item_has_valid_data;
inline constexpr guest::Function<0x003117dc, u32(u32, u32, u32)> copy_item_with_top_bits;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x00712600, u32(u32)> field_nonzero_712600;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_0080d3cc {
    u32 word_0;
    u8 unknown_4[0x630];  // (not read or written by name)
    u32 word_634;
    u8 unknown_638[0x4c];  // (not read or written by name)
    u32 word_684;
    u32 word_688;
    u8 unknown_68c[0x4];  // (not read or written by name)
    u32 word_690;
    u32 word_694;
};
GUEST_OFFSET(Frame_0080d3cc, word_0, 0x0);
GUEST_OFFSET(Frame_0080d3cc, word_634, 0x634);
GUEST_OFFSET(Frame_0080d3cc, word_684, 0x684);
GUEST_OFFSET(Frame_0080d3cc, word_688, 0x688);
GUEST_OFFSET(Frame_0080d3cc, word_690, 0x690);
GUEST_OFFSET(Frame_0080d3cc, word_694, 0x694);
GUEST_SIZE(Frame_0080d3cc, 0x698);

u32 f_0080d3cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0080d3cc> frame;  // the original's stack frame
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
    u32 r0_10 = 0;
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
    make_end_grid_rect_iterator(r5_1, r1, r2, r3);
    u32 r4_1 = frame.at(0x610).addr();  // (from the original)
    construct_grid_rect_iterator(r4_1, r1);
    u32 r0_1 = key_records_differ(r4_1, r5_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r6 = frame.at(0x690).addr();  // (from the original)
        r10 = frame.at(0x624).addr();  // (from the original)
        do {
            gptr<Local_0080d3cc_r0_2> r0_2 = gptr<Local_0080d3cc_r0_2>(frame.at(0x618).addr());  // (from the original)
            u32 r1_1 = frame->word_690;
            if (r1_1 != 0) {
                u32 r0_3 = CellGrid__cell_at(r1_1, r0_2->word_0, r0_2->word_4, r1_1);
                frame->word_634 = r0_3;
                u32 r0_5 = field_nonzero_712600(frame->word_694);
                r1_1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_5 != 0) {
                    u32 r3_4 = *gptr<u16>(frame->word_634);
                    u32 r0_7 = call_00200ab4(frame->word_694, r6 + 8u, 0x600u, r3_4);  // (from the original)
                    r1_1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r7 = r0_7;
                    r4 = 0u;
                    if (r0_7 >= 0u && r0_7 != 0) {
                        do {
                            gptr<Local_0080d3cc_r5_2> r5_2 = gptr<Local_0080d3cc_r5_2>(r6 + r4 * 6u);
                            u32 r8_1 = r5_2->half_8;
                            u32 r9_1 = r5_2->byte_c;
                            u32 r11_1 = r5_2->byte_d;
                            construct_item(r10, r8_1, r2, r3);
                            u32 r0_8 = item_has_valid_data(r10);
                            if (r0_8 != 0) {
                                u32 r8_2 = frame.at(0x64c).addr();  // (from the original)
                                u32 r5_3 = u32(r5_2->half_a) >> 0xe;  // (from the original)
                                construct_item(r8_2, r8_1, guest::cpu()->r[2], guest::cpu()->r[3]);
                                copy_item_with_top_bits(r10, r8_2, r5_3);
                            }
                            frame->word_0 = 0;
                            GridCellSmall__place_item(frame->word_634, r10, r9_1, r11_1);
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
            WrappingCursor__advance(r4_2, r1_1, r2, r3);
            r0_10 = key_records_differ(r4_2, frame.at(0x638).addr());  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_10 != 0);
    }
    u32 r4_3 = frame.at(8).addr();
    copy_aligned_bytes(r4_3, frame.at(0x690).addr(), 0x608u, r3);  // (from the original)
    u32 r0_12 = copy_aligned_bytes(frame->word_688, r4_3, 0x608u, guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0080d3cc_ea_3> ea_3 = gptr<Local_0080d3cc_ea_3>(frame.at(0x660).addr());  // (from the original)
    u32 r4_4 = ea_3->word_0;
    u32 r5_4 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 r7_1 = ea_3->word_c;
    u32 r8_3 = ea_3->word_10;
    u32 r9_2 = ea_3->word_14;
    u32 r10_1 = ea_3->word_18;
    u32 r11_2 = ea_3->word_1c;
    u32 v_1 = frame->word_684;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_4;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_3;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_2;
    return r0_12;
}

}  // namespace d_0080d3cc
GUEST_EXPORT(0x0080d3cc, d_0080d3cc::f_0080d3cc);

// f_0080d59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d59c {

struct __attribute__((packed)) Local_0080d59c_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0080d59c_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0080d59c_r4_1, word_4, 0x4);

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32)> call_001c1fcc;
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32)> call_00304530;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32)> load_block_a00;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32)> GridMap__large_cell_at;

u32 f_0080d59c(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x20);  // the original's stack frame
    u32 r0_12 = 0;
    u32 r5 = r1;
    make_end_grid_rect_iterator(frame.at(0x10).addr(), r0, r2, guest::cpu()->r[3]);  // (from the original)
    construct_grid_rect_iterator(frame.at(0).addr(), r0);
    u32 r0_4 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        do {
            gptr<Local_0080d59c_r4_1> r4_1 = gptr<Local_0080d59c_r4_1>(frame.at(8).addr());
            if (r5 != 0) {
                u32 r0_5 = CellGrid__cell_at(r5, r4_1->word_0, r4_1->word_4);
                u32 r0_6 = GridMap__large_cell_at(r5, r4_1->word_0, r4_1->word_4);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_6 != 0) {
                    u32 r0_7 = *gptr<u16>(r0_5);
                    u32 r0_8 = call_00304530(r0_7, r1, r2);
                    u32 r0_9 = call_001c1fcc(r0_8, r0_7);
                    r2 = guest::cpu()->r[2];
                    r1 = r0_9;
                    if (r0_9 != 0) {
                        load_block_a00(r0_6, r1, 0xa00u);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                    }
                }
            }
            WrappingCursor__advance(frame.at(0).addr(), r1, r2);
            r0_12 = key_records_differ(frame.at(0).addr(), frame.at(0x10).addr());  // (from the original)
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
GUEST_OFFSET(Local_0080d68c_r0_5, word_0, 0x0);
GUEST_OFFSET(Local_0080d68c_r0_5, word_4, 0x4);

inline constexpr u32 empty_item_address = 0x0095bfdcu;
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> CellGrid__cell_at;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> block_cell_rect;
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> GridCellSmall__place_item;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;

struct __attribute__((packed)) Frame_0080d68c {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0x30];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0080d68c, word_0, 0x0);
GUEST_OFFSET(Frame_0080d68c, word_10, 0x10);
GUEST_OFFSET(Frame_0080d68c, word_14, 0x14);
GUEST_SIZE(Frame_0080d68c, 0x48);

u32 f_0080d68c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0080d68c> frame;  // the original's stack frame
    u32 r0_14 = 0;
    u32 r0_17 = 0;
    u32 r5 = r1;
    make_end_grid_rect_iterator(frame.at(0x28).addr(), r0, r2, r3);  // (from the original)
    construct_grid_rect_iterator(frame.at(0x18).addr(), r0);  // (from the original)
    u32 r0_4 = key_records_differ(frame.at(0x18).addr(), frame.at(0x28).addr());  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        u32 r8 = 0u;
        u32 r7 = 1u;
        do {
            gptr<Local_0080d68c_r0_5> r0_5 = gptr<Local_0080d68c_r0_5>(frame.at(0x20).addr());  // (from the original)
            if (r5 != 0) {
                u32 r0_6 = CellGrid__cell_at(r5, r0_5->word_0, r0_5->word_4, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r6 = r0_6;
                if (r0_6 != 0) {
                    u32 r0_7 = block_cell_rect(r0_6, r1, r2, r3);
                    make_end_grid_rect_iterator(frame.at(0x38).addr(), r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    construct_grid_rect_iterator(frame.at(8).addr(), r0_7);
                    u32 r0_11 = key_records_differ(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_11 != 0) {
                        do {
                            u32 r4_1 = frame->word_14;
                            u32 r2_7 = frame->word_10;
                            frame->word_0 = r8;
                            GridCellSmall__place_item(r6, empty_item_address, r2_7, r4_1);
                            u32 r4_2 = frame->word_14;
                            u32 r2_8 = frame->word_10;
                            frame->word_0 = r7;
                            GridCellSmall__place_item(r6, empty_item_address, r2_8, r4_2);
                            WrappingCursor__advance(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                            r0_14 = key_records_differ(frame.at(8).addr(), frame.at(0x38).addr());  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            guest::preempt();
                        } while (r0_14 != 0);
                    }
                }
            }
            WrappingCursor__advance(frame.at(0x18).addr(), r1, r2, r3);  // (from the original)
            r0_17 = key_records_differ(frame.at(0x18).addr(), frame.at(0x28).addr());  // (from the original)
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

inline constexpr u32 vtable_pead__FixedSafeString_32_ = 0x00903a40u;

void pead__BufferedSafeStringBase_char___BufferedSafeStringBase_0080ef60(gptr<pead__FixedSafeString_32_> arg0) {
    arg0->word_4 = arg0.addr() + 0xcu;  // (from the original)
    arg0->word_8 = 0x20;  // (from the original)
    *gptr<u8>(arg0->word_4 + 0x1fu) = 0;  // (from the original)
    *gptr<u8>(arg0->word_4) = 0;
    arg0->word_0 = vtable_pead__FixedSafeString_32_;
}

}  // namespace d_0080ef60
GUEST_EXPORT(0x0080ef60, d_0080ef60::pead__BufferedSafeStringBase_char___BufferedSafeStringBase_0080ef60);
