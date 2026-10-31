// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00800304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800304 {

inline constexpr guest::Function<0x00800304, u32(u32, u32, u32, u32)> call_00800304;  // (from the original)

u32 f_00800304(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_800318:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00800304(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00800304
GUEST_EXPORT(0x00800304, d_00800304::f_00800304);

// f_00800e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00800e5c {

inline constexpr guest::Function<0x00800e5c, u32(u32, u32, u32, u32)> call_00800e5c;  // (from the original)

u32 f_00800e5c(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_800e70:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00800e5c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00800e5c
GUEST_EXPORT(0x00800e5c, d_00800e5c::f_00800e5c);

// f_00801604: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00801604 {

inline constexpr guest::Function<0x00801604, u32(u32, u32, u32, u32)> call_00801604;  // (from the original)

u32 f_00801604(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_801618:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00801604(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00801604
GUEST_EXPORT(0x00801604, d_00801604::f_00801604);

// f_00802148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802148 {

inline constexpr guest::Function<0x00802148, u32(u32, u32, u32, u32)> call_00802148;  // (from the original)

u32 f_00802148(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80215c:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00802148(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00802148
GUEST_EXPORT(0x00802148, d_00802148::f_00802148);

// f_00802e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00802e2c {

inline constexpr guest::Function<0x00802e2c, u32(u32, u32, u32, u32)> call_00802e2c;  // (from the original)

u32 f_00802e2c(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_802e40:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00802e2c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
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

u32 f_00803244(gptr<Object_00803244_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    if (r0 == r5) {
        goto L_8032f8;
    }
    r0 = arg0->word_10;
    r3 = r13 + 4u;
    r2 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    r1 = r4;
    *gptr<u32>(r13) = u32(*gptr<u32>(r0 + 8u));
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00802560(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r5 + 0x10u) + 4u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00802ccc(r0, r1, r2, r3);
    *gptr<u32>(*gptr<u32>(r4 + 0x10u) + 4u) = u32(r0);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    if (r0 == 0) {
        goto L_803304;
    }
    r2 = *gptr<u32>(r0 + 8u);
    if (r2 == 0) {
        goto L_8032c4;
    }
    do {
L_8032b4:;
        r0 = r2;
        r2 = *gptr<u32>(r2 + 8u);
        guest::preempt();
    } while (r2 != 0);
L_8032c4:;
    *gptr<u32>(r1 + 8u) = u32(r0);
    r2 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r0 = *gptr<u32>(r2 + 4u);
    r1 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    if (r1 == 0) {
        goto L_8032ec;
    }
    do {
L_8032dc:;
        r0 = r1;
        r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
        guest::preempt();
    } while (r1 != 0);
L_8032ec:;
    *gptr<u32>(r2 + 0xcu) = u32(r0);  // (from the original)
L_8032f0:;
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r5 + 0x14u));  // (from the original)
L_8032f8:;
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_803304:;
    *gptr<u32>(r1 + 8u) = u32(r1);
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    *gptr<u32>(r0 + 0xcu) = u32(r0);  // (from the original)
    guest::preempt();
    goto L_8032f0;
}

}  // namespace d_00803244
GUEST_EXPORT(0x00803244, d_00803244::f_00803244);

// f_00803a80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00803a80 {

inline constexpr guest::Function<0x00803a80, u32(u32, u32, u32, u32)> call_00803a80;  // (from the original)

u32 f_00803a80(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_803a94:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00803a80(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00803a80
GUEST_EXPORT(0x00803a80, d_00803a80::f_00803a80);

// f_00804878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00804878 {

inline constexpr guest::Function<0x003cf0b8, u32(u32, u32, u32, u32)> call_003cf0b8;  // (from the original)
inline constexpr guest::Function<0x00804878, u32(u32, u32, u32, u32)> call_00804878;  // (from the original)

u32 f_00804878(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_80488c:;
        r0 = r6;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00804878(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r6 + 4u);
        r0 = r4 + 0x10u;  // (from the original)
        r5 = r4;
        r4 = *gptr<u32>(r4 + 8u);
        r0 = r0 + 4u;
        *gptr<u32>(r5 + 0xcu) = u32(r1);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003cf0b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5);
        guest::preempt();
    } while (r4 != 0);
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00804878
GUEST_EXPORT(0x00804878, d_00804878::f_00804878);

// f_0080561c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080561c {

inline constexpr guest::Function<0x0080561c, u32(u32, u32, u32, u32)> call_0080561c;  // (from the original)

u32 f_0080561c(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_805630:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080561c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080561c
GUEST_EXPORT(0x0080561c, d_0080561c::f_0080561c);

// f_00806030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806030 {

inline constexpr guest::Function<0x00806030, u32(u32, u32, u32, u32)> call_00806030;  // (from the original)

u32 f_00806030(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_806044:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00806030(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00806030
GUEST_EXPORT(0x00806030, d_00806030::f_00806030);

// f_00806b44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00806b44 {

inline constexpr guest::Function<0x00806b44, u32(u32, u32, u32, u32)> call_00806b44;  // (from the original)

u32 f_00806b44(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_806b58:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00806b44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00806b44
GUEST_EXPORT(0x00806b44, d_00806b44::f_00806b44);

// f_00807658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00807658 {

inline constexpr guest::Function<0x00807658, u32(u32, u32, u32, u32)> call_00807658;  // (from the original)

u32 f_00807658(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80766c:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00807658(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00807658
GUEST_EXPORT(0x00807658, d_00807658::f_00807658);

// f_0080806c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080806c {

inline constexpr guest::Function<0x0080806c, u32(u32, u32, u32, u32)> call_0080806c;  // (from the original)

u32 f_0080806c(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_808080:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080806c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080806c
GUEST_EXPORT(0x0080806c, d_0080806c::f_0080806c);

// f_00808be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00808be0 {

inline constexpr guest::Function<0x00355ff8, u32(u32, u32, u32, u32)> call_00355ff8;  // (from the original)
inline constexpr guest::Function<0x00808be0, u32(u32, u32, u32, u32)> call_00808be0;  // (from the original)

u32 f_00808be0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r6 = r0;
    r4 = r1;
    do {
L_808bf4:;
        r0 = r6;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00808be0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r6 + 4u);
        r0 = r4 + 0x10u;  // (from the original)
        r5 = r4;
        r4 = *gptr<u32>(r4 + 8u);
        r0 = r0 + 0x10u;  // (from the original)
        *gptr<u32>(r5 + 0xcu) = u32(r1);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00355ff8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r6 + 4u) = u32(r5);
        guest::preempt();
    } while (r4 != 0);
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00808be0
GUEST_EXPORT(0x00808be0, d_00808be0::f_00808be0);

// f_00809898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00809898 {

inline constexpr guest::Function<0x00809898, u32(u32, u32, u32, u32)> call_00809898;  // (from the original)

u32 f_00809898(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_8098ac:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00809898(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00809898
GUEST_EXPORT(0x00809898, d_00809898::f_00809898);

// f_0080a3ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080a3ec {

inline constexpr guest::Function<0x0080a3ec, u32(u32, u32, u32, u32)> call_0080a3ec;  // (from the original)

u32 f_0080a3ec(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80a400:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080a3ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080a3ec
GUEST_EXPORT(0x0080a3ec, d_0080a3ec::f_0080a3ec);

// f_0080aa88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080aa88 {

inline constexpr guest::Function<0x0080aa88, u32(u32, u32, u32, u32)> call_0080aa88;  // (from the original)

u32 f_0080aa88(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80aa9c:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080aa88(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080aa88
GUEST_EXPORT(0x0080aa88, d_0080aa88::f_0080aa88);

// f_0080b4a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080b4a0 {

inline constexpr guest::Function<0x0080b4a0, u32(u32, u32, u32, u32)> call_0080b4a0;  // (from the original)

u32 f_0080b4a0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80b4b4:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080b4a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080b4a0
GUEST_EXPORT(0x0080b4a0, d_0080b4a0::f_0080b4a0);

// f_0080bfc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080bfc4 {

inline constexpr guest::Function<0x0080bfc4, u32(u32, u32, u32, u32)> call_0080bfc4;  // (from the original)

u32 f_0080bfc4(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r14);
    r13 = r13 - 0xc;  // (from the original)
    r5 = r0;
    r4 = r1;
    do {
L_80bfd8:;
        r0 = r5;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0080bfc4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = *gptr<u32>(r5 + 4u);
        r0 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
        *gptr<u32>(r5 + 4u) = u32(r4);
        r4 = r0;
        guest::preempt();
    } while (r0 != 0);
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080bfc4
GUEST_EXPORT(0x0080bfc4, d_0080bfc4::f_0080bfc4);

// f_0080cbac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080cbac {

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
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x68u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_80cd00;
    } else {
        r7 = r13;
    }
L_80cbe8:;
    r5 = r13 + 0x4cu;  // (from the original)
    r6 = r13 + 0x38u;  // (from the original)
    if (*gptr<u32>(r13 + 0x50u) == 0) {  // (from the original)
        goto L_80cce0;
    }
    r1 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0052edfc(r0, r1, r2, r3);
    r3 = r13 + 8u;
    r0 = *gptr<u32>(r13 + 0x50u);  // (from the original)
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 == 0) {
        goto L_80ccd8;
    }
    r1 = r6;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052ed04(r0, r1, r2, r3);
    r3 = r13 + 0x28u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0075d608(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cdfe8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    *gptr<u8>(r13) = u8(u32(*gptr<u8>(r13 + 0x20u)));  // (from the original)
    *gptr<u8>(r13 + 1u) = u8(u32(*gptr<u8>(r13 + 0x22u)));  // (from the original)
    *gptr<u8>(r13 + 2u) = u8(u32(*gptr<u8>(r13 + 0x21u)));  // (from the original)
    *gptr<u8>(r13 + 3u) = u8(u32(*gptr<u8>(r13 + 0x23u)));  // (from the original)
    do {
L_80cc78:;
        r0 = u32(*gptr<u8>(r7 + r4));
        guest::cpu()->r[13] = r13;
        r0 = call_005ce13c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u8>(r5));
        if (!(r1 != r0)) {
            r13 = r13 + 0x54u;  // (from the original)
            r0 = 1u;
            ea = r13;
            r13 = r13 + 0x14;  // (from the original)
            r4 = *gptr<u32>(ea);
            r5 = *gptr<u32>(ea + 4);
            r6 = *gptr<u32>(ea + 8);
            r7 = *gptr<u32>(ea + 0xc);  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4;
            guest::cpu()->r[5] = r5;
            guest::cpu()->r[6] = r6;
            guest::cpu()->r[7] = r7;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
L_80ccd8:;
L_80cce0:;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_80cbe8;
    }
L_80cd00:;
    r13 = r13 + 0x54u;  // (from the original)
    r0 = 0u;
    ea = r13;
    r13 = r13 + 0x14;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080cbac
GUEST_EXPORT(0x0080cbac, d_0080cbac::f_0080cbac);

// f_0080d3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d3cc {

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
    u32 ea = 0;
    u32 res = 0;
    u32 v = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r12);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x688u;  // (from the original)
    r5 = r13 + 0x638u;  // (from the original)
    r4 = r1;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r4 = r13 + 0x610u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_80d550;
    } else {
        r6 = r13 + 0x690u;  // (from the original)
        r10 = r13 + 0x624u;  // (from the original)
    }
L_80d41c:;
    r0 = r13 + 0x618u;  // (from the original)
    r1 = *gptr<u32>(r13 + 0x690u);  // (from the original)
    if (r1 == 0) {
        goto L_80d528;
    }
    r3 = r1;
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r0 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x634u) = u32(r0);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x694u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712600(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_80d528;
    }
    r3 = u32(*gptr<u16>(*gptr<u32>(r13 + 0x634u)));  // (from the original)
    r2 = 0x600u;  // (from the original)
    r1 = r6 + 8u;
    r0 = *gptr<u32>(r13 + 0x694u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00200ab4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r7 = res;
    r4 = 0u;
    if (!u32(r0 >= 0u) || u32(res == 0)) {
        goto L_80d528;
    }
    do {
L_80d484:;
        r5 = r6 + (r4 + (r4 << 1) << 1);
        r0 = r10;
        r8 = u32(*gptr<u16>(r5 + 8u));
        r9 = u32(*gptr<u8>(r5 + 0xcu));  // (from the original)
        r11 = u32(*gptr<u8>(r5 + 0xdu));  // (from the original)
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_0030b654(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r1 = r8;
            r8 = r13 + 0x64cu;  // (from the original)
            r5 = u32(*gptr<u16>(r5 + 0xau)) >> 0xe;  // (from the original)
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_002fcbb0(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r1 = r0;
            r2 = r5;
            r0 = r10;
            guest::cpu()->r[13] = r13;
            r0 = call_003117dc(r0, r1, r2, r3);
        }
        *gptr<u32>(r13) = u32(0u);
        r0 = *gptr<u32>(r13 + 0x634u);  // (from the original)
        r3 = r11;
        r2 = r9;
        r1 = r10;
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < r7);
L_80d528:;
    r4 = r13 + 0x610u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x638u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_80d41c;
    }
L_80d550:;
    r5 = 0x608u;  // (from the original)
    r4 = r13 + 8u;
    r1 = r13 + 0x690u;  // (from the original)
    r2 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x688u);  // (from the original)
    r2 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x660u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r7 = *gptr<u32>(ea + 0xc);  // (from the original)
    r8 = *gptr<u32>(ea + 0x10);  // (from the original)
    r9 = *gptr<u32>(ea + 0x14);  // (from the original)
    r10 = *gptr<u32>(ea + 0x18);  // (from the original)
    r11 = *gptr<u32>(ea + 0x1c);  // (from the original)
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[8] = r8;
    guest::cpu()->r[9] = r9;
    guest::cpu()->r[10] = r10;
    guest::cpu()->r[11] = r11;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080d3cc
GUEST_EXPORT(0x0080d3cc, d_0080d3cc::f_0080d3cc);

// f_0080d59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d59c {

inline constexpr guest::Function<0x001c1fcc, u32(u32, u32, u32, u32)> call_001c1fcc;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x006a92f4, u32(u32, u32, u32, u32)> call_006a92f4;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)

u32 f_0080d59c(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_80d66c;
    }
L_80d5d8:;
    r4 = r13 + 8u;
    if (r5 == 0) {
        goto L_80d64c;
    }
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, guest::cpu()->r[3]);
    r6 = r0;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0075291c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    if (r0 == 0) {
        goto L_80d64c;
    }
    r0 = u32(*gptr<u16>(r6));
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00304530(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_001c1fcc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    if (r0 == 0) {
        goto L_80d64c;
    }
    r2 = 0xa00u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_006a92f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_80d64c:;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        guest::preempt();
        goto L_80d5d8;
    }
L_80d66c:;
    r0 = r5;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080d59c
GUEST_EXPORT(0x0080d59c, d_0080d59c::f_0080d59c);

// f_0080d68c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080d68c {

inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x0057bce0, u32(u32, u32, u32, u32)> call_0057bce0;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_0080d68c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r5 = r1;
    r13 = r13 - 0x60u;  // (from the original)
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_80d7e8;
    } else {
        r8 = 0u;
        r7 = 1u;
    }
L_80d6d0:;
    r0 = r13 + 0x20u;  // (from the original)
    if (r5 == 0) {
        goto L_80d7c8;
    }
    r1 = *gptr<u32>(r0);
    r2 = *gptr<u32>(r0 + 4);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00317148(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        goto L_80d7c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0057bb98(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_80d7b4;
    }
    do {
L_80d734:;
        r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
        r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r4;
        r0 = r6;
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r4 = *gptr<u32>(r13 + 0x14u);  // (from the original)
        r2 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r1 = 0x95bfdcu;  // (from the original)
        r3 = r4;
        r0 = r6;
        *gptr<u32>(r13) = u32(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_0057bce0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x38u;  // (from the original)
        r0 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_80d7b4:;
L_80d7c8:;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f144(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_80d6d0;
    }
L_80d7e8:;
    r0 = r5;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0080d68c
GUEST_EXPORT(0x0080d68c, d_0080d68c::f_0080d68c);

// f_0080ef60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0080ef60 {

struct __attribute__((packed)) Object_0080ef60_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0080ef60_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0080ef60_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0080ef60_0, word_8, 0x8);  // (from the original)


void f_0080ef60(gptr<Object_0080ef60_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    arg0->word_4 = u32(r0 + 0xcu);  // (from the original)
    r2 = 0x20u;  // (from the original)
    arg0->word_8 = u32(r2);
    r3 = 0u;
    *gptr<u8>(r2 + (arg0->word_4 - 1u)) = u8(r3);
    *gptr<u8>(arg0->word_4) = u8(r3);
    r1 = 0x903a40u;  // (from the original)
    arg0->word_0 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0080ef60
GUEST_EXPORT(0x0080ef60, d_0080ef60::f_0080ef60);
