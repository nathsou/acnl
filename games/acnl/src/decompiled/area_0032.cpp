// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00320450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320450 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002f6c78, u32(u32, u32, u32, u32)> call_002f6c78;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_00320450(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_00132364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x201cu;  // (from the original)
    r0 = call_002f6c78(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x258u;  // (from the original)
    r0 = call_001323b4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0x3d0u);  // (from the original)
    r5 = 0u;
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0x278u);  // (from the original)
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 0x3d0u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00320450
GUEST_EXPORT(0x00320450, d_00320450::f_00320450);

// f_00320490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320490 {

inline constexpr guest::Function<0x0029b6f8, u32(u32, u32, u32, u32)> call_0029b6f8;  // (from the original)

u32 f_00320490(u32 r0) {
    r0 = r0 + 0x201cu;  // (from the original)
    return call_0029b6f8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00320490
GUEST_EXPORT(0x00320490, d_00320490::f_00320490);

// f_0032049c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032049c {

struct __attribute__((packed)) Object_0032049c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0032049c_0, word_c, 0xc);  // (from the original)


u32 f_0032049c(gptr<Object_0032049c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_c;
    if (u32(r2 >= r1) && !u32(r2 == r1)) {
        r0 = r0 + 0x3d4u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r1;
    if (r1 >= r2 + 0xau) {  // (from the original)
        r0 = r0 + 0x3d4u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r3 - r2) * 0xadu;  // (from the original)
    r0 = r0 + (r1 << 2) + 0x3d4u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032049c
GUEST_EXPORT(0x0032049c, d_0032049c::f_0032049c);

// f_003204d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003204d8 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_003204d8(u32 r0) {
    u32 r1 = 0;
    r1 = 0x3204e4u;  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    return call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_003204d8
GUEST_EXPORT(0x003204d8, d_003204d8::f_003204d8);

// f_00320500: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320500 {

struct __attribute__((packed)) Object_00320500_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320500_0, word_c, 0xc);  // (from the original)


u32 f_00320500(gptr<Object_00320500_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (u32(r2 >= r1) && !u32(r2 == r1)) {
        r0 = r0 + 0x3d4u;  // (from the original)
        r2 = *gptr<u32>(*gptr<u32>(r0) + 0x4cu);  // (from the original)
        r1 = 1u;
        return guest::call_address<u32>(r2, r0, r1, r2, r3);
    }
    r3 = r1;
    if (r1 >= r2 + 0xau) {  // (from the original)
        r0 = r0 + 0x3d4u;  // (from the original)
        r2 = *gptr<u32>(*gptr<u32>(r0) + 0x4cu);  // (from the original)
        r1 = 1u;
        return guest::call_address<u32>(r2, r0, r1, r2, r3);
    }
    r0 = r0 + ((r3 - r2) * 0xadu << 2) + 0x3d4u;  // (from the original)
    r2 = *gptr<u32>(*gptr<u32>(r0) + 0x4cu);  // (from the original)
    r1 = 1u;
    return guest::call_address<u32>(r2, r0, r1, r2, r3);
}

}  // namespace d_00320500
GUEST_EXPORT(0x00320500, d_00320500::f_00320500);

// f_00320548: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320548 {

struct __attribute__((packed)) Object_00320548_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320548_0, word_c, 0xc);  // (from the original)


u32 f_00320548(gptr<Object_00320548_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_c;
    if (u32(r2 >= r1) && !u32(r2 == r1)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = r1;
    if (r1 >= r2 + 0xau) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r3 - r2) * 0xadu;  // (from the original)
    r0 = *gptr<u32>(r0 + (r1 << 2) + 0x684u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00320548
GUEST_EXPORT(0x00320548, d_00320548::f_00320548);

// f_00320584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320584 {

struct __attribute__((packed)) Object_00320584_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00320584_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> call_002b6d20;  // (from the original)

u32 f_00320584(gptr<Object_00320584_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = arg0->word_c;
    if (u32(r3 >= r1) && !u32(r3 == r1)) {
        goto L_3205bc;
    }
    r12 = r1;
    if (r1 >= r3 + 0xau) {  // (from the original)
        goto L_3205bc;
    }
    r1 = r12 - r3;
    r3 = 0xadu;  // (from the original)
    r0 = r0 + (r1 * r3 << 2) + 0x3d4u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = r2;
    return call_002b6d20(r0, r1, r2, r3);
L_3205bc:;
    r0 = r0 + 0x3d4u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r1 = r2;
    return call_002b6d20(r0, r1, r2, r3);
}

}  // namespace d_00320584
GUEST_EXPORT(0x00320584, d_00320584::f_00320584);

// f_003205cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003205cc {

struct __attribute__((packed)) Object_003205cc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_003205cc_0, word_c, 0xc);  // (from the original)


u32 f_003205cc(gptr<Object_003205cc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r12 = 0;
    guest::cpu()->r[13] -= 4u;
    r3 = arg0->word_c;
    if (u32(r3 >= r1) && !u32(r3 == r1)) {
        goto L_320604;
    }
    r12 = r1;
    if (r1 >= r3 + 0xau) {  // (from the original)
        goto L_320604;
    }
    r1 = (r12 - r3) * 0xadu;  // (from the original)
    r0 = r0 + (r1 << 2) + 0x3d4u;  // (from the original)
    *gptr<u8>(r0 + 0xd9u) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
L_320604:;
    r0 = r0 + 0x3d4u;  // (from the original)
    *gptr<u8>(r0 + 0xd9u) = u8(r2);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_003205cc
GUEST_EXPORT(0x003205cc, d_003205cc::f_003205cc);

// f_00320614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320614 {

struct __attribute__((packed)) Object_00320614_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00320614_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00320614_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00320614_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00320614_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0029b7c0, u32(u32, u32, u32, u32)> call_0029b7c0;  // (from the original)
inline constexpr guest::Function<0x002f915c, u32(u32, u32, u32, u32)> call_002f915c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00320614(gptr<Object_00320614_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f4828u;  // (from the original)
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r4);
    arg0->word_8 = u32(r4);
    ea = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x14cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = 0x2e37acu;  // (from the original)
    ea = r0 + 0x28u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x1b08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f915c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0029b7c0(r0, r1, r2, r3);
    r0 = r0 - 0x201cu;  // (from the original)
    r1 = r0 + 0x2000u;  // (from the original)
    *gptr<u8>(r1 + 0x134u) = u8(r4);  // (from the original)
    *gptr<u32>(r1 + 0x138u) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00320614
GUEST_EXPORT(0x00320614, d_00320614::f_00320614);

// f_0032069c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032069c {

struct __attribute__((packed)) Object_0032069c_0 {
    u8 unknown_0[0x280];  // (not used here)
    u32 word_280;
};
GUEST_OFFSET(Object_0032069c_0, word_280, 0x280);  // (from the original)


u32 f_0032069c(gptr<Object_0032069c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = arg0->word_280;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 | u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032069c
GUEST_EXPORT(0x0032069c, d_0032069c::f_0032069c);

// f_003207d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003207d8 {

struct __attribute__((packed)) Object_003207d8_0 {
    u8 unknown_0[0x150];  // (not used here)
    u32 word_150;
};
GUEST_OFFSET(Object_003207d8_0, word_150, 0x150);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_003207d8(gptr<Object_003207d8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = arg0->word_150;
    r0 = r0 + 0x130u;  // (from the original)
    r3 = u32(*gptr<u8>(r2 + 0xb7u)) & 0xfeu;  // (from the original)
    r1 = r1 | r3;
    *gptr<u8>(r2 + 0xb7u) = u8(r1);  // (from the original)
    return call_00568c10(r0, r1, r2, r3);
}

}  // namespace d_003207d8
GUEST_EXPORT(0x003207d8, d_003207d8::f_003207d8);

// f_00320a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00320a4c {

struct __attribute__((packed)) Object_00320a4c_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u32 word_d0;
    u8 unknown_d4[0x6];  // (not used here)
    u8 byte_da;
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Object_00320a4c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_00320a4c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_00320a4c_0, byte_da, 0xda);  // (from the original)
GUEST_OFFSET(Object_00320a4c_0, byte_db, 0xdb);  // (from the original)
GUEST_OFFSET(Object_00320a4c_0, byte_dc, 0xdc);  // (from the original)


void f_00320a4c(gptr<Object_00320a4c_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    r3 = 0x100040du;  // (from the original)
    zf = r1 == 0;
    if (zf) {
        r1 = 0x1000403u;  // (from the original)
    }
    r2 = 1u;
    arg0->word_d0 = u32(r3);
    arg0->byte_db = u8(r2);
    if (!zf) {
        r1 = r3 - 0x16u;  // (from the original)
    }
    arg0->byte_dc = u8(r2);
    arg0->word_cc = u32(r1);
    arg0->byte_da = u8(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_00320a4c
GUEST_EXPORT(0x00320a4c, d_00320a4c::f_00320a4c);

// f_00321944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321944 {

struct __attribute__((packed)) Object_00321944_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00321944_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)

u32 f_00321944(gptr<Object_00321944_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    if (r1 == 0) {
        r4 = 0x8f4a6cu;  // (from the original)
        r5 = 1u;
    } else {
        r5 = 0u;
    }
    r1 = *gptr<u32>(r4);
    arg0->word_0 = u32(r1);
    r1 = *gptr<u32>(r1 - 0xcu);  // (from the original)
    r2 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    *gptr<u32>(r0 + r1) = u32(r2);
    r0 = r0 + 0x30u;  // (from the original)
    r0 = call_00317e2c(r0, r1, r2, guest::cpu()->r[3]);
    res = r4 + 4u;
    r1 = res;
    if (res == 0) {
        r1 = 0x8f427cu;  // (from the original)
    }
    r0 = r0 - 0x30u;  // (from the original)
    r2 = *gptr<u32>(r1);
    *gptr<u32>(r0) = u32(r2);
    r2 = *gptr<u32>(r2 - 0xcu);  // (from the original)
    r1 = *gptr<u32>(r1 + 4u);
    *gptr<u32>(r0 + r2) = u32(r1);
    r0 = r0 + 0x10u;  // (from the original)
    r0 = call_004ecf70(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004edd84(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 - 4u;
    if (r5 != 0) {
        r4 = r0 + 0x138u;  // (from the original)
        *gptr<u32>(r4) = u32(0x8ef578u);  // (from the original)
        if (*gptr<u32>(r4 + 8u) != 0) {
            r0 = r4 + 4u;
            r0 = call_002f747c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r0 = r4 + 4u;
        r0 = call_00317dec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r0 - 0x13cu;  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00321944
GUEST_EXPORT(0x00321944, d_00321944::f_00321944);

// f_00321ae8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321ae8 {

inline constexpr guest::Function<0x00766e64, u32(u32, u32, u32, u32)> call_00766e64;  // (from the original)

u32 f_00321ae8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    return call_00766e64(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00321ae8
GUEST_EXPORT(0x00321ae8, d_00321ae8::f_00321ae8);

// f_00321af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321af8 {

inline constexpr guest::Function<0x0013c1d4, u32(u32, u32, u32, u32)> call_0013c1d4;  // (from the original)

u32 f_00321af8() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94d080u);  // (from the original)
    return call_0013c1d4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00321af8
GUEST_EXPORT(0x00321af8, d_00321af8::f_00321af8);

// f_00321c84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00321c84 {

inline constexpr guest::Function<0x0012ec48, u32(u32, u32, u32, u32)> call_0012ec48;  // (from the original)

u32 f_00321c84(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_0012ec48(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x321cbcu));  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0) = u32(0x8f4a94u);  // (from the original)
    r1 = r0;
    *gptr<u32>(r0 + 0x50u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r0 + 0x54u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0));
    r0 = r1;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00321c84
GUEST_EXPORT(0x00321c84, d_00321c84::f_00321c84);

// f_003232a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003232a8 {


u32 f_003232a8(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 0x10u) {  // (from the original)
        r0 = 0u;
    } else {
        *gptr<u8>(r0 + r1 + 0x40u) = u8(r2);  // (from the original)
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_003232a8
GUEST_EXPORT(0x003232a8, d_003232a8::f_003232a8);

// f_003232c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003232c0 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00322e98, u32(u32, u32, u32, u32)> call_00322e98;  // (from the original)
inline constexpr guest::Function<0x006b9858, u32(u32, u32, u32, u32)> call_006b9858;  // (from the original)
inline constexpr guest::Function<0x00769840, u32(u32, u32, u32, u32)> call_00769840;  // (from the original)
inline constexpr guest::Function<0x0076aff4, u32(u32, u32, u32, u32)> call_0076aff4;  // (from the original)

u32 f_003232c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = 0u;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r10 = 0x95bfdcu;  // (from the original)
    r8 = r1;
    r9 = r4;
L_3232dc:;
    if (r4 < 0x10u) {  // (from the original)
        r2 = r6 + r4;
        r7 = r6 + (r4 << 2);
        r5 = u32(*gptr<u8>(r2 + 0x40u));  // (from the original)
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_32331c;
        }
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00769840(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_32331c;
        }
    }
    r7 = r10;
L_32331c:;
    r1 = r7;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb34(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0x50u) {  // (from the original)
            goto L_32337c;
        }
    }
    r0 = r5 & 0xffu;  // (from the original)
    zf = r0 == 2u;
    if (!zf) {
        zf = r0 == 3u;
    }
    if (zf) {
        goto L_323418;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_32343c;
    }
    goto L_323470;
L_32337c:;
    if (r4 < 0x10u) {  // (from the original)
        r5 = r6 + (r4 << 2);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcaf4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_3233b4;
        }
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00769840(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_3233b4;
        }
    }
    r5 = r10;
L_3233b4:;
    r1 = r5;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x51u;  // (from the original)
    r1 = 0x50u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9858(r0, r1, r2, r3);
    r2 = 0x95bfdcu;  // (from the original)
    r3 = 0u;
    r1 = r4;
    r0 = r6;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00322e98(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r13 + 8u;
    r1 = r4;
    r0 = r6;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00322e98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_323470;
L_323418:;
    r2 = 0x95bfdcu;  // (from the original)
    r3 = 0u;
    r1 = r4;
    r0 = r6;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00322e98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_323470;
L_32343c:;
    r2 = r8;
    r1 = r13 + 4u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0076aff4(r0, r1, r2, r3);
    r3 = r5 & 0xffu;  // (from the original)
    r2 = r13 + 8u;
    r1 = r4;
    r0 = r6;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_00322e98(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_323470:;
    r0 = r13 + 4u;
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_3232dc;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_003232c0
GUEST_EXPORT(0x003232c0, d_003232c0::f_003232c0);

// f_00324934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00324934 {


u32 f_00324934(u32 r0_unused, u32 r1) {
    u32 r2 = 0;
    r2 = 0x845304u;  // (from the original)
    r1 = *gptr<u32>(r2 + (r1 << 2));
    return guest::call_address<u32>(r1, guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_00324934
GUEST_EXPORT(0x00324934, d_00324934::f_00324934);

// f_00325578: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00325578 {

inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)
inline constexpr guest::Function<0x00521a2c, u32(u32, u32, u32, u32)> call_00521a2c;  // (from the original)

u32 f_00325578(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x7cu;  // (from the original)
    r0 = call_004ee39c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_00521a2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 2u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_00325578
GUEST_EXPORT(0x00325578, d_00325578::f_00325578);

// f_003255b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003255b4 {

inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;  // (from the original)
inline constexpr guest::Function<0x004eebd8, u32(u32, u32, u32, u32)> call_004eebd8;  // (from the original)

u32 f_003255b4(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001c2764(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x8f4f40u;  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r0 + 0x18u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8faae0u);  // (from the original)
    ea = r0 + 0x54u;  // (from the original)
    *gptr<u8>(ea) = u8(1u);
    r2 = 0x8a3bc0u;  // (from the original)
    r4 = 0u;
    ea = r0 + 0x55u;  // (from the original)
    *gptr<u8>(ea) = u8(r4);
    r3 = 0x8a3bbcu;  // (from the original)
    ea = r2;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x58u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r2;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x5cu;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r2;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x60u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r3;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r2;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x68u;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r2;
    r12 = *gptr<u32>(ea);
    ea = r0 + 0x6cu;  // (from the original)
    *gptr<u32>(ea) = u32(r12);
    ea = r0 + 0x70u;  // (from the original)
    *gptr<u32>(ea) = u32(*gptr<u32>(r2));
    ea = r3;
    r2 = *gptr<u32>(ea);
    ea = r0 + 0x74u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    r0 = ea + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004eebd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x7cu;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x32565cu));  // (from the original)
    *gptr<u16>(r0 + 0x90u) = u16(r4);  // (from the original)
    *gptr<u8>(r0 + 0x92u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x93u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0xc4u) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_003255b4
GUEST_EXPORT(0x003255b4, d_003255b4::f_003255b4);

// f_00325ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00325ff0 {

inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0076ec7c, u32(u32, u32, u32, u32)> call_0076ec7c;  // (from the original)

u32 f_00325ff0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0xd8u;  // (from the original)
    r4 = r0;
    r0 = r13 + 4u;
    r2 = 0x1eu;  // (from the original)
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x909ea8u;  // (from the original)
    *gptr<u32>(r0) = u32(r10);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r0 = r0 - 0xcu;  // (from the original)
    r5 = 0u;
    *gptr<u32>(r0 + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x40u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x44u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x48u) = u32(r5);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    *gptr<u32>(r0 + 0x4cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x50u) = u32(r5);  // (from the original)
    r1 = 0xfu;  // (from the original)
    r0 = r0 + 0x16u;  // (from the original)
    do {
L_326068:;
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r2;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r6 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r5);
    r3 = 0x137u;  // (from the original)
    r2 = 0x848840u;  // (from the original)
    r0 = *gptr<u32>(r6);
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r6);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x458u;  // (from the original)
    r1 = r13 + 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x95c6d0u;  // (from the original)
    r0 = 3u;
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    r7 = r0;
    if (!zf && nf == vf) {
        r8 = 0x909f18u;  // (from the original)
    }
    r5 = r4 + 0x51cu;  // (from the original)
    r4 = 0u;
    if (zf || nf != vf) {
        goto L_326178;
    }
    do {
L_3260fc:;
        r6 = *gptr<u32>(r11);
        r9 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_00305f44(r0, r1, r2, r3);
        r2 = r0;
        r1 = r6 + 0x10u;  // (from the original)
        r3 = r4;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_0076ec7c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r2 = 0u;
        r1 = r13;
        r0 = r13 + 0x58u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fe7f4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x58u;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2e50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r13 + 0x58u) = u32(r8);  // (from the original)
        r0 = r13;
        r4 = r4 + 1u;
        res = r7 - r4;
        r5 = r5 + 0xc4u;  // (from the original)
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r7 ^ r4) & (r7 ^ res)) >> 0x1f);  // (from the original)
L_326178:;
    *gptr<u32>(r13 + 4u) = u32(r10);
    r0 = r13 + 4u;
    r13 = r13 + 0xd8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00325ff0
GUEST_EXPORT(0x00325ff0, d_00325ff0::f_00325ff0);

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
GUEST_OFFSET(Object_00327ce8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_124, 0x124);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_14c, 0x14c);  // (from the original)
GUEST_OFFSET(Object_00327ce8_0, word_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x002dfe08, u32(u32, u32, u32, u32)> call_002dfe08;  // (from the original)

u32 f_00327ce8(gptr<Object_00327ce8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (r2 != 0) {
        r1 = arg0->word_14c;
        r2 = arg0->word_174;
        r3 = arg0->word_c;
        ea = r13 + 8u;
        *gptr<u32>(ea) = u32(arg0->word_124);
        *gptr<u32>(ea + 4) = u32(r1);
        *gptr<u32>(ea + 8) = u32(r2);
        *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
        r1 = arg0->word_fc;
        *gptr<u32>(r13) = u32(arg0->word_a0);
        *gptr<u32>(r13 + 4) = u32(r1);
        r1 = arg0->word_28;
        r2 = arg0->word_50;
        r3 = arg0->word_78;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002dfe08(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = r4;
    r1 = r5;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0013f134(r0, r1, r2, r3);
}

}  // namespace d_00327ce8
GUEST_EXPORT(0x00327ce8, d_00327ce8::f_00327ce8);

// f_003288a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003288a4 {

struct __attribute__((packed)) Object_003288a4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_003288a4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_003288a4(gptr<Object_003288a4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f52b0u;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r2 = r1 + 0x24u;  // (from the original)
    arg0->word_0 = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x2188u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(0x8f4828u);  // (from the original)
    r1 = 0x8f08acu;  // (from the original)
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = 0x8ee248u;  // (from the original)
    r2 = r1 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r1);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x10u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_003288a4
GUEST_EXPORT(0x003288a4, d_003288a4::f_003288a4);

// f_003289a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_003289a8 {

inline constexpr guest::Function<0x00112d35, u32(u32, u32, u32, u32)> call_00112d34;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)

u32 f_003289a8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb310(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(s32(s8(*gptr<u8>(r4 + 2u))));
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(*gptr<u16>(r4));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x2fu;  // (from the original)
    if (zf) {
        zf = u32(s32(s8(*gptr<u8>(r4 + 3u)))) + 1u == 0;
    }
    if (!zf) {
        r1 = u32(s32(s8(*gptr<u8>(r4 + 3u))));
        r3 = 0u;
        r2 = r13;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00112d34(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r13;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r13;
    r0 = r5 + 0x249eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_003289a8
GUEST_EXPORT(0x003289a8, d_003289a8::f_003289a8);

// f_0032a174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032a174 {

inline constexpr guest::Function<0x0023a9dc, u32(u32, u32, u32, u32)> call_0023a9dc;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)

u32 f_0032a174(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0 = call_0023a9dc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x8f532cu;  // (from the original)
    r4 = 0u;
    ea = r0 + 0x7cu;  // (from the original)
    *gptr<u32>(ea) = u32(r2 + 0x164u);  // (from the original)
    ea = r0;
    *gptr<u32>(ea) = u32(r2);
    ea = r0 + 0x260u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x264u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r1 = 0x95bfdcu;  // (from the original)
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r0 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 4u;
    *gptr<u8>(r0 + 8u) = u8(r4);
    *gptr<u8>(r0 + 9u) = u8(r4);
    *gptr<u32>(r0 + 0xcu) = u32(r4);  // (from the original)
    *gptr<u16>(r0 + 0x10u) = u16(r4);  // (from the original)
    *gptr<u16>(r0 + 0x12u) = u16(r4);  // (from the original)
    *gptr<u16>(r0 + 0x14u) = u16(r4);  // (from the original)
    *gptr<u16>(r0 + 0x16u) = u16(r4);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x19u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r4);  // (from the original)
    r0 = r0 - 0x268u;  // (from the original)
    *gptr<u16>(0x288u + r0) = u16(r4);  // (from the original)
    ea = r0 + 0x28cu;  // (from the original)
    *gptr<u32>(ea) = u32(~0u);
    *gptr<u32>(ea + 4) = u32(r4);
    r1 = 1u;
    *gptr<u8>(r0 + 0x108u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x109u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x10au) = u8(r1);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0032a174
GUEST_EXPORT(0x0032a174, d_0032a174::f_0032a174);

// f_0032a3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032a3c8 {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0032a3c8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r6 = r1;
    r7 = r2;
    r5 = r3;
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r4 = r0 - 0xcu;  // (from the original)
    r3 = 0xc8u;  // (from the original)
    ea = r0 + 5u;
    *gptr<u8>(ea) = u8(r3);
    r0 = ea;
    *gptr<u8>(r0 + 1u) = u8(r3);
    *gptr<u8>(r0 + 2u) = u8(0u);
    *gptr<u8>(r4) = u8(u32(*gptr<u8>(r6)));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r6 + 4u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r6 + 8u));
    *gptr<u8>(r4 + 0x11u) = u8(u32(*gptr<u8>(r6 + 0x11u)));  // (from the original)
    *gptr<u8>(r4 + 0x12u) = u8(u32(*gptr<u8>(r6 + 0x12u)));  // (from the original)
    *gptr<u8>(r4 + 0x13u) = u8(u32(*gptr<u8>(r6 + 0x13u)));  // (from the original)
    r0 = u32(*gptr<u8>(r6 + 0x10u));  // (from the original)
    r1 = r6 + 0xcu;  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    *gptr<u8>(r4 + 0x10u) = u8(r0);  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r7;
    r0 = r4 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r0 = r4;
    *gptr<u8>(r4 + 0x11u) = u8(u32(*gptr<u8>(r5)));  // (from the original)
    *gptr<u8>(r4 + 0x12u) = u8(u32(*gptr<u8>(r5 + 1u)));  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 2u));
    *gptr<u8>(r4 + 0x13u) = u8(r1);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0032a3c8
GUEST_EXPORT(0x0032a3c8, d_0032a3c8::f_0032a3c8);

// f_0032af5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032af5c {

struct __attribute__((packed)) Object_0032af5c_0 {
    u8 unknown_0[0x1ec4];  // (not used here)
    u32 word_1ec4;
};
GUEST_OFFSET(Object_0032af5c_0, word_1ec4, 0x1ec4);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_0032af5c(gptr<Object_0032af5c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 5u;
    r0 = arg0->word_1ec4;
    if (r0 != 0) {
        r0 = call_00136e58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = 0x1ebeu;  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x10u) = u8(r0);  // (from the original)
    *gptr<u8>(r1 + r4) = u8(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032af5c
GUEST_EXPORT(0x0032af5c, d_0032af5c::f_0032af5c);

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
GUEST_OFFSET(Object_0032b7d0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_fbc, 0xfbc);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_fc0, 0xfc0);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_fc4, 0xfc4);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_fc8, 0xfc8);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_11fc, 0x11fc);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_1200, 0x1200);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_1204, 0x1204);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_1208, 0x1208);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_1eb4, 0x1eb4);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_1eb6, 0x1eb6);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, half_1eb8, 0x1eb8);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1eba, 0x1eba);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebb, 0x1ebb);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebc, 0x1ebc);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebd, 0x1ebd);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebe, 0x1ebe);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ebf, 0x1ebf);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec0, 0x1ec0);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec1, 0x1ec1);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, byte_1ec2, 0x1ec2);  // (from the original)
GUEST_OFFSET(Object_0032b7d0_0, word_1ec4, 0x1ec4);  // (from the original)


u32 f_0032b7d0(gptr<Object_0032b7d0_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r1 = 0u;
    r2 = ~0u;
    arg0->byte_10 = u8(r1);
    arg0->half_12 = u16(r2);
    arg0->half_14 = u16(r2);
    arg0->half_16 = u16(r1);
    arg0->word_18 = u32(r1);
    ea = r0 + 0xfbcu;  // (from the original)
    arg0->word_fbc = u32(r1);
    r0 = ea;
    res = r0 + 0x10u;  // (from the original)
    r3 = res;
    arg0->word_fc0 = u32(r1);
    arg0->word_fc4 = u32(r1);
    r12 = 0x46u;  // (from the original)
    arg0->word_fc8 = u32(r1);
    if (res != 0) {
        arg0->word_fbc = u32(r3);
        arg0->word_fc0 = u32(r12);
    }
    ea = r0 + 0x240u;  // (from the original)
    arg0->word_11fc = u32(r1);
    r0 = ea;
    r12 = 0x10eu;  // (from the original)
    arg0->word_1200 = u32(r1);
    arg0->word_1204 = u32(r1);
    res = r0 + 0x10u;  // (from the original)
    r3 = res;
    arg0->word_1208 = u32(r1);
    if (res != 0) {
        arg0->word_11fc = u32(r3);
        arg0->word_1200 = u32(r12);
    }
    arg0->half_1eb4 = u16(r2);
    arg0->half_1eb6 = u16(r2);
    arg0->half_1eb8 = u16(r1);
    arg0->byte_1eba = u8(r1);
    arg0->byte_1ebb = u8(r1);
    arg0->byte_1ebc = u8(r1);
    arg0->byte_1ebd = u8(r1);
    arg0->byte_1ebe = u8(r1);
    arg0->byte_1ebf = u8(r1);
    r2 = 0xffu;  // (from the original)
    arg0->byte_1ec0 = u8(r1);
    arg0->byte_1ec1 = u8(r2);
    arg0->byte_1ec2 = u8(r2);
    ea = r0 + 0xcc8u;  // (from the original)
    arg0->word_1ec4 = u32(r1);
    r0 = ea - 0x1ec4u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032b7d0
GUEST_EXPORT(0x0032b7d0, d_0032b7d0::f_0032b7d0);

// f_0032ba1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032ba1c {

struct __attribute__((packed)) Object_0032ba1c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x1c];  // (not used here)
    u8 byte_24;
    u8 unknown_25[0x1f];  // (not used here)
    u32 word_44;
    u8 unknown_48[0x1];  // (not used here)
    u8 byte_49;
};
GUEST_OFFSET(Object_0032ba1c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032ba1c_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0032ba1c_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0032ba1c_0, byte_49, 0x49);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x002bc94c, u32(u32, u32, u32, u32)> call_002bc94c;  // (from the original)

u32 f_0032ba1c(gptr<Object_0032ba1c_0> arg0, u32 r1, u32 r2, float S0, float S1, float S2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r2;
    r7 = 0u;
    if (u32(arg0->byte_24) != 0) {
        r0 = u32(arg0->byte_49);
        if (r0 == 0) {
            goto L_32baf4;
        }
        r0 = arg0->word_44;
        if (r0 + 1u != 0) {
            goto L_32baf4;
        }
        r0 = arg0->word_4;
        r1 = 0u;
        if (r0 != 0) {
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            guest::cpu()->s[2] = S2;
            r0 = call_00136e58(r0, r1, r2, guest::cpu()->r[3]);
        }
        *gptr<u8>(r4 + 0x24u) = u8(r7);  // (from the original)
    }
    S1 = std::bit_cast<float>(*gptr<u32>(0x32bb10u));  // (from the original)
    r0 = ~0u;
    *gptr<u32>(r4 + 0x14u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u16>(r4 + 0x1cu) = u16(r0);  // (from the original)
    *gptr<u16>(r4 + 0x1eu) = u16(r0);  // (from the original)
    *gptr<u16>(r4 + 0x20u) = u16(r0);  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x32bb18u));  // (from the original)
    *gptr<u16>(r4 + 0x22u) = u16(~0x63u);  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r4 + 0x28u) = u32(r0);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x32bb14u));  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x30u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x34u) = u32(r7);  // (from the original)
    *gptr<u32>(r4 + 0x38u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r4 + 0x40u) = u8(r7);  // (from the original)
    *gptr<u8>(r4 + 0x41u) = u8(r7);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r6);  // (from the original)
    r0 = *gptr<u32>(0x94cd20u);  // (from the original)
    r1 = r6;
    r2 = 0u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    r0 = call_002bc94c(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = 1u;
    if (r0 + 1u == 0) {
        *gptr<u8>(r4 + 0x49u) = u8(r1);  // (from the original)
    } else {
        *gptr<u32>(r4 + 0x44u) = u32(r0);  // (from the original)
        *gptr<u8>(r4 + 0x49u) = u8(r7);  // (from the original)
    }
    if (r5 == 0) {
        goto L_32baf8;
    } else {
        *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    }
L_32baf0:;
    *gptr<u8>(r4 + 0x24u) = u8(r1);  // (from the original)
L_32baf4:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_32baf8:;
    r0 = *gptr<u32>(0x94d080u) + 0x738u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::preempt();
    goto L_32baf0;
}

}  // namespace d_0032ba1c
GUEST_EXPORT(0x0032ba1c, d_0032ba1c::f_0032ba1c);

// f_0032bcf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032bcf8 {

struct __attribute__((packed)) Object_0032bcf8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0032bcf8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)

u32 f_0032bcf8(gptr<Object_0032bcf8_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_4;
    if (r0 != 0) {
        r1 = 0u;
        r0 = call_00136e58(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (*gptr<u32>(r4 + 0x44u) + 1u == 0) {  // (from the original)
        goto L_32bd58;
    }
    r5 = 0x94cd20u;  // (from the original)
    r0 = *gptr<u32>(r5);
    if (r0 == 0) {
        goto L_32bd58;
    }
    r1 = 0u;
    r0 = call_00138c2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x44u);  // (from the original)
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_32bd58;
    }
    r0 = *gptr<u32>(r5);
    r2 = 0u;
    r0 = call_0013d4f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x44u) = u32(~0u);  // (from the original)
    }
L_32bd58:;
    r0 = 0u;
    *gptr<u8>(r4 + 0x24u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032bcf8
GUEST_EXPORT(0x0032bcf8, d_0032bcf8::f_0032bcf8);

// f_0032bd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032bd68 {

struct __attribute__((packed)) Object_0032bd68_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u16 half_1c;
    u8 unknown_1e[0x22];  // (not used here)
    u8 byte_40;
};
GUEST_OFFSET(Object_0032bd68_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0032bd68_0, byte_40, 0x40);  // (from the original)

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_0032bd68(gptr<Object_0032bd68_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_40) != 0) {
        goto L_32be0c;
    }
    r0 = u32(s32(s16(arg0->half_1c)));
    r6 = 1u;
    r5 = 0u;
    arg0->byte_40 = u8(r6);
    if (r0 != 1u) {
        if (r0 == 2u) {
            goto L_32bdc4;
        }
        if (r0 != 3u) {
            goto L_32be00;
        }
        goto L_32bde8;
    }
    if (u32(*gptr<u8>(r4 + 0x41u)) != 0) {  // (from the original)
        goto L_32be00;
    }
    if ((*gptr<u32>(r4 + 0x28u) & 1u) != 0) {  // (from the original)
        goto L_32be0c;
    }
    goto L_32be08;
L_32bdc4:;
    if (u32(*gptr<u8>(r4 + 0x41u)) != 0) {  // (from the original)
        goto L_32be00;
    }
    r0 = 2u;
    r0 = call_002ff6f8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_32be00;
    }
    goto L_32be08;
L_32bde8:;
    r1 = *gptr<u32>(0x83b32cu + (*gptr<u32>(r4 + 0x28u) << 2));  // (from the original)
    if (s32(*gptr<u32>(r4 + 0x2cu)) < s32(r1)) {  // (from the original)
        goto L_32be08;
    }
L_32be00:;
    *gptr<u8>(r4 + 0x41u) = u8(r5);  // (from the original)
    goto L_32be0c;
L_32be08:;
    *gptr<u8>(r4 + 0x41u) = u8(r6);  // (from the original)
L_32be0c:;
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x41u))));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032bd68
GUEST_EXPORT(0x0032bd68, d_0032bd68::f_0032bd68);

// f_0032be18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032be18 {


u32 f_0032be18(u32 r0, u32 r1) {
    u32 res = 0;
    u32 nf = 0;
    u32 vf = 0;
    res = r0 - 0xau;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 0xau) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        res = r1 - 0x13u;  // (from the original)
        nf = res >> 0x1f;  // (from the original)
        vf = ((r1 ^ 0x13u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf == vf) {
        r0 = 0u;
        return r0;
    }
    r0 = u32(s32(s16(*gptr<u16>(0x83b1b0u + (r0 + (r0 << 1) + (r0 << 4) << 1) + (r1 << 1)))));  // (from the original)
    return r0;
}

}  // namespace d_0032be18
GUEST_EXPORT(0x0032be18, d_0032be18::f_0032be18);

// f_0032c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c348 {

struct __attribute__((packed)) Object_0032c348_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0032c348_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32, u32)> call_0013d4f0;  // (from the original)

u32 f_0032c348(gptr<Object_0032c348_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_4;
    if (r0 != 0) {
        r1 = 0u;
        r0 = call_00136e58(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (*gptr<u32>(r4 + 0x44u) + 1u == 0) {  // (from the original)
        goto L_32c3a8;
    }
    r5 = 0x94cd20u;  // (from the original)
    r0 = *gptr<u32>(r5);
    if (r0 == 0) {
        goto L_32c3a8;
    }
    r1 = 0u;
    r0 = call_00138c2c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x44u);  // (from the original)
    res = r1 - r0;
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_32c3a8;
    }
    r0 = *gptr<u32>(r5);
    r2 = 0u;
    r0 = call_0013d4f0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x44u) = u32(~0u);  // (from the original)
    }
L_32c3a8:;
    r0 = 0u;
    *gptr<u8>(r4 + 0x24u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032c348
GUEST_EXPORT(0x0032c348, d_0032c348::f_0032c348);

// f_0032c654: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c654 {

struct __attribute__((packed)) Object_0032c654_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0032c654_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0032c654_0, byte_1, 0x1);  // (from the original)


void f_0032c654(gptr<Object_0032c654_0> arg0) {
    u32 r1 = 0;
    r1 = u32(arg0->byte_0);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0u;
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0032c654
GUEST_EXPORT(0x0032c654, d_0032c654::f_0032c654);

// f_0032c72c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c72c {

struct __attribute__((packed)) Object_0032c72c_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x63];  // (not used here)
    u32 word_98;
};
GUEST_OFFSET(Object_0032c72c_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0032c72c_0, word_98, 0x98);  // (from the original)

inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)
inline constexpr guest::Function<0x002e9954, u32(u32, u32, u32, u32)> call_002e9954;  // (from the original)

u32 f_0032c72c(gptr<Object_0032c72c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_34);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (arg0->word_98 != 0) {
        r0 = r4 + 0x90u;  // (from the original)
        r0 = call_002e9954(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_002d27e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0032c72c
GUEST_EXPORT(0x0032c72c, d_0032c72c::f_0032c72c);

// f_0032c78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c78c {

inline constexpr guest::Function<0x002d2a4c, u32(u32, u32, u32, u32)> call_002d2a4c;  // (from the original)
inline constexpr guest::Function<0x002e99d0, u32(u32, u32, u32, u32)> call_002e99d0;  // (from the original)

u32 f_0032c78c(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002d2a4c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f54e4u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x90u;  // (from the original)
    r0 = call_002e99d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x90u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032c78c
GUEST_EXPORT(0x0032c78c, d_0032c78c::f_0032c78c);

// f_0032c804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c804 {

struct __attribute__((packed)) Object_0032c804_0 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x63];  // (not used here)
    u32 word_98;
};
GUEST_OFFSET(Object_0032c804_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0032c804_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0032c804_0, word_98, 0x98);  // (from the original)

inline constexpr guest::Function<0x002d27e0, u32(u32, u32, u32, u32)> call_002d27e0;  // (from the original)
inline constexpr guest::Function<0x002d2b90, u32(u32, u32, u32, u32)> call_002d2b90;  // (from the original)
inline constexpr guest::Function<0x002e9954, u32(u32, u32, u32, u32)> call_002e9954;  // (from the original)
inline constexpr guest::Function<0x002e9a14, u32(u32, u32, u32, u32)> call_002e9a14;  // (from the original)

u32 f_0032c804(gptr<Object_0032c804_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x8f54e4u);  // (from the original)
    if (u32(arg0->byte_34) != 0) {
        if (arg0->word_98 != 0) {
            r0 = r4 + 0x90u;  // (from the original)
            r0 = call_002e9954(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
        r0 = r4;
        r0 = call_002d27e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4 + 0x90u;  // (from the original)
    r0 = call_002e9a14(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x90u;  // (from the original)
    return call_002d2b90(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0032c804
GUEST_EXPORT(0x0032c804, d_0032c804::f_0032c804);

// f_0032c850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032c850 {

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)
inline constexpr guest::Function<0x007596ac, u32(u32, u32, u32, u32)> call_007596ac;  // (from the original)
inline constexpr guest::Function<0x00779548, u32(u32, u32, u32, u32)> call_00779548;  // (from the original)

u32 f_0032c850(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 1u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_007596ac(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_32c8a0;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00303cdc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = ~0u;
    r1 = 0xau;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0013fac4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00779548(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_32c8a0:;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00300650(r0, r1, r2, r3);
    r3 = r13 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(r3 + 4);
    r2 = *gptr<u32>(r3 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r3));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0032c850
GUEST_EXPORT(0x0032c850, d_0032c850::f_0032c850);

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
GUEST_OFFSET(Object_0032cb6c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_12, 0x12);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0032cb6c_0, byte_15, 0x15);  // (from the original)


void f_0032cb6c(gptr<Object_0032cb6c_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 zf = 0;
    r2 = u32(arg0->byte_4);
    arg0->byte_d = u8(r1);
    zf = r2 == 0;
    if (zf) {
        zf = r1 == 1u;
    }
    if (!zf) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0u;
    arg0->byte_e = u8(r1);
    arg0->byte_f = u8(r1);
    arg0->byte_10 = u8(r1);
    r2 = 1u;
    arg0->byte_12 = u8(r1);
    arg0->byte_14 = u8(r2);
    arg0->byte_15 = u8(r1);
    arg0->byte_13 = u8(r2);
    guest::cpu()->r[1] = r1;
    return;
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
GUEST_OFFSET(Object_0032cbec_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_0032cbec_0, byte_8, 0x8);  // (from the original)


void f_0032cbec(gptr<Object_0032cbec_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0u;
    arg0->byte_0 = u8(r2);
    arg0->byte_1 = u8(r2);
    r1 = 1u;
    arg0->byte_2 = u8(r2);
    arg0->byte_3 = u8(r1);
    arg0->byte_4 = u8(r1);
    arg0->byte_5 = u8(r1);
    arg0->byte_6 = u8(r2);
    arg0->byte_7 = u8(r1);
    arg0->byte_8 = u8(0xbu);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
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
GUEST_OFFSET(Object_0032cc20_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_b, 0xb);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, word_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, word_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_0032cc20_0, byte_15, 0x15);  // (from the original)


void f_0032cc20(gptr<Object_0032cc20_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    arg0->byte_4 = u8(r2);
    arg0->byte_5 = u8(r2);
    r1 = 1u;
    arg0->byte_6 = u8(r2);
    arg0->byte_7 = u8(r1);
    arg0->byte_8 = u8(r1);
    arg0->byte_9 = u8(r1);
    arg0->byte_a = u8(r2);
    r3 = 0xbu;  // (from the original)
    arg0->byte_b = u8(r1);
    arg0->byte_c = u8(r3);
    arg0->word_d = u32(*gptr<u32>(arg0.addr() + 4u));
    r1 = *gptr<u32>(arg0.addr() + 8u);
    arg0->word_11 = u32(r1);
    arg0->byte_15 = u8(r3);
    guest::cpu()->r[1] = r1;
    return;
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
GUEST_OFFSET(Object_0032cc68_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_7, 0x7);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_b, 0xb);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, word_d, 0xd);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, word_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_0032cc68_0, byte_15, 0x15);  // (from the original)


void f_0032cc68(gptr<Object_0032cc68_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r2 = 0u;
    arg0->byte_4 = u8(r2);
    arg0->byte_5 = u8(r2);
    r1 = 1u;
    arg0->byte_6 = u8(r2);
    arg0->byte_7 = u8(r1);
    arg0->byte_8 = u8(r1);
    arg0->byte_9 = u8(r1);
    arg0->byte_a = u8(r2);
    r3 = 0xbu;  // (from the original)
    arg0->byte_b = u8(r1);
    arg0->byte_c = u8(r3);
    arg0->word_d = u32(*gptr<u32>(arg0.addr() + 4u));
    r1 = *gptr<u32>(arg0.addr() + 8u);
    arg0->word_11 = u32(r1);
    arg0->byte_15 = u8(r3);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0032cc68
GUEST_EXPORT(0x0032cc68, d_0032cc68::f_0032cc68);

// f_0032ccb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032ccb0 {

inline constexpr guest::Function<0x007795bc, u32(u32, u32, u32, u32)> call_007795bc;  // (from the original)

u32 f_0032ccb0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_007795bc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u32>(r4 + 0xdu) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x11u) = u32(r0);  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(r0);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0032ccb0
GUEST_EXPORT(0x0032ccb0, d_0032ccb0::f_0032ccb0);

// f_0032cef4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032cef4 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x00565bec, u32(u32, u32, u32, u32)> call_00565bec;  // (from the original)
inline constexpr guest::Function<0x007d0c84, u32(u32, u32, u32, u32)> call_007d0c84;  // (from the original)

u32 f_0032cef4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00565bec(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = 0x9525ccu;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r13;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 4u));
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007d0c84(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0032cef4
GUEST_EXPORT(0x0032cef4, d_0032cef4::f_0032cef4);

// f_0032d638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d638 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x00331a40, u32(u32, u32, u32, u32)> call_00331a40;  // (from the original)

u32 f_0032d638(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r6 = r2;
    r5 = r3;
    r7 = r1;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, r3);
    r3 = r6;
    r2 = r13 + 4u;
    r1 = r7;
    r0 = r4 + 8u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_00331a40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 5u) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0032d638
GUEST_EXPORT(0x0032d638, d_0032d638::f_0032d638);

// f_0032d774: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d774 {

struct __attribute__((packed)) Object_0032d774_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_0032d774_0, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x00331c1c, u32(u32, u32, u32, u32)> call_00331c1c;  // (from the original)

u32 f_0032d774(gptr<Object_0032d774_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_5);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4 + 8u;
    r0 = call_00331c1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    *gptr<u8>(r4 + 5u) = u8(r0);
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0032d774
GUEST_EXPORT(0x0032d774, d_0032d774::f_0032d774);

// f_0032d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d7c8 {

struct __attribute__((packed)) Object_0032d7c8_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_0032d7c8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0032d7c8_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032d7c8_0, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x00331c7c, u32(u32, u32, u32, u32)> call_00331c7c;  // (from the original)

u32 f_0032d7c8(gptr<Object_0032d7c8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_4 = u8(1u);
    r1 = 0x8f56a8u;  // (from the original)
    r2 = 0u;
    arg0->byte_5 = u8(r2);
    arg0->word_0 = u32(r1);
    r0 = r0 + 8u;
    r0 = call_00331c7c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032d7c8
GUEST_EXPORT(0x0032d7c8, d_0032d7c8::f_0032d7c8);

// f_0032d818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032d818 {

inline constexpr guest::Function<0x00331d0c, u32(u32, u32, u32, u32)> call_00331d0c;  // (from the original)

u32 f_0032d818(u32 r0) {
    u32 r1 = 0;
    goto L_32d818;
L_32d818:;
    r1 = 0x8f56a8u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 8u;
    r0 = call_00331d0c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032d818
GUEST_EXPORT(0x0032d818, d_0032d818::f_0032d818);

// f_0032f240: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f240 {

struct __attribute__((packed)) Object_0032f240_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0032f240_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0032f240_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0032f240_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0032f240_1, word_c, 0xc);  // (from the original)


u32 f_0032f240(u32 r0_unused, gptr<Object_0032f240_1> arg1, float S0) {
    u32 res = 0;
    u32 r0 = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    float S1 = 0;
    float S2 = 0;
    r2 = 0xf006du;  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x32f2d8u));  // (from the original)
    arg1->word_0 = u32(1u);
    arg1->word_4 = u32(r2);
    arg1->word_8 = u32(0xbf0000u);  // (from the original)
    arg1->word_c = u32(r2 - 0x20u);  // (from the original)
    r0 = r1 + 0x10u;  // (from the original)
    S2 = std::bit_cast<float>(*gptr<u32>(0x32f2dcu));  // (from the original)
    if (u32(*gptr<u8>(0x9503e0u)) != 0) {  // (from the original)
        S0 = S2 * S0 * std::bit_cast<float>(*gptr<u32>(0x32f2e4u)) / std::bit_cast<float>(*gptr<u32>(0x32f2e8u));  // (from the original)
        S1 = S1 - S0;
    }
    r1 = std::bit_cast<u32>(S1);
    res = r1 & ~0x80000000u;  // (from the original)
    r2 = res;
    if (res != 0) {
        r2 = (r1 << 1 >> 0x18) - 0x40u;  // (from the original)
        res = r2;
        if (res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
            r1 = r1 >> 0x1f << 0x17;  // (from the original)
            *gptr<u32>(r0) = u32(r1);
            *gptr<u32>(r0 + 4) = u32(0xf004eu);  // (from the original)
            r0 = r0 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            return r0;
        }
    }
    r1 = r1 << 9 >> 0x10 | r2 << 0x10 | r1 >> 0x1f << 0x17;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(0xf004eu);  // (from the original)
    r0 = r0 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0032f240
GUEST_EXPORT(0x0032f240, d_0032f240::f_0032f240);

// f_0032f2f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f2f4 {

inline constexpr guest::Function<0x0020714c, u32(u32, u32, u32, u32)> call_0020714c;  // (from the original)
inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;  // (from the original)
inline constexpr guest::Function<0x0054f994, u32(u32, u32, u32, u32)> call_0054f994;  // (from the original)

u32 f_0032f2f4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0020714c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = call_0020714c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = u32(s32(s8(*gptr<u8>(r0 + 0x22u))));  // (from the original)
        if (r0 != 0) {
            r0 = 2u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_0020714c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = *gptr<u32>(r0 + 4u);
    r1 = u32(*gptr<u8>(r4 + 0x40u));  // (from the original)
    r0 = call_0054f994(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = call_0020714c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r4 + 0x40u));  // (from the original)
        if (*gptr<u32>(*gptr<u32>(r0 + 4u) + (r1 << 2) + 0x42cu) == 0) {  // (from the original)
            r0 = 2u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = 0u;
    r0 = r4 + 0x1cu;  // (from the original)
    r0 = call_004ee364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032f2f4
GUEST_EXPORT(0x0032f2f4, d_0032f2f4::f_0032f2f4);

// f_0032f778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f778 {

inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x004ee39c, u32(u32, u32, u32, u32)> call_004ee39c;  // (from the original)
inline constexpr guest::Function<0x0056a724, u32(u32, u32, u32, u32)> call_0056a724;  // (from the original)

u32 f_0032f778(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_004ee39c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4 + 0x30u);  // (from the original)
    r5 = 0u;
    if (r1 != 0) {
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0x30u) = u32(r5);  // (from the original)
    }
    r1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    if (r1 != 0) {
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0x34u) = u32(r5);  // (from the original)
    }
    r1 = *gptr<u32>(r4 + 0x38u);  // (from the original)
    if (r1 != 0) {
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r4 + 0x38u) = u32(r5);  // (from the original)
    }
    r1 = *gptr<u32>(r4 + 0x3cu);  // (from the original)
    if (r1 != 0) {
        r0 = r4 + 0x14u;  // (from the original)
        r0 = call_0056a724(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x3cu) = u32(r5);  // (from the original)
    }
    r0 = r4 + 0x14u;  // (from the original)
    r0 = call_002f747c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032f778
GUEST_EXPORT(0x0032f778, d_0032f778::f_0032f778);

// f_0032f808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f808 {

inline constexpr guest::Function<0x004f0d90, u32(u32, u32, u32, u32)> call_004f0d90;  // (from the original)
inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)

u32 f_0032f808(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_00521a8c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0x8f5910u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_005673c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 + 8u;
    r0 = call_004f0d90(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 - 0x1cu;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x24u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x40u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x34u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x3cu) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032f808
GUEST_EXPORT(0x0032f808, d_0032f808::f_0032f808);

// f_0032f884: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032f884 {

struct __attribute__((packed)) Object_0032f884_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0032f884_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x004f0dd0, u32(u32, u32, u32, u32)> call_004f0dd0;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)

u32 f_0032f884(gptr<Object_0032f884_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x8f5910u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x1cu;  // (from the original)
    r0 = call_004f0dd0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    r0 = call_00317dec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x14u;  // (from the original)
    return call_00521ae0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0032f884
GUEST_EXPORT(0x0032f884, d_0032f884::f_0032f884);

// f_0032fd1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0032fd1c {

inline constexpr guest::Function<0x0022c53c, u32(u32, u32, u32, u32)> call_0022c53c;  // (from the original)

u32 f_0032fd1c(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0022c53c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x8f59acu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 0xcu) = u32(r1 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0032fd1c
GUEST_EXPORT(0x0032fd1c, d_0032fd1c::f_0032fd1c);
