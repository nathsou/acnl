// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00530da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00530da8 {

inline constexpr guest::Function<0x002d5b40, u32(u32, u32, u32, u32)> call_002d5b40;  // (from the original)
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;  // (from the original)
inline constexpr guest::Function<0x008156fc, u32(u32, u32, u32, u32)> call_008156fc;  // (from the original)

u32 f_00530da8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r1;
    r6 = r2;
    r7 = *gptr<u32>(0x952c5cu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x530e28u);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(0u);
    r8 = r3;
    r3 = r13 + 8u;
    r2 = r7;
    r1 = 0x1400u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0031758c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x4000u;  // (from the original)
    r1 = r7;
    r0 = r4 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008156fc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x290u) = u8(r5);  // (from the original)
    r1 = r8;
    r0 = r4 + 0x2a4u;  // (from the original)
    *gptr<u8>(r4 + 0x291u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002d5b40(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00530da8
GUEST_EXPORT(0x00530da8, d_00530da8::f_00530da8);

// f_0053138c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053138c {

inline constexpr guest::Function<0x004ee364, u32(u32, u32, u32, u32)> call_004ee364;  // (from the original)

u32 f_0053138c(u32 r0) {
    u32 r1 = 0;
    r1 = 0u;
    r0 = r0 + 8u;
    return call_004ee364(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053138c
GUEST_EXPORT(0x0053138c, d_0053138c::f_0053138c);

// f_00531398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00531398 {

inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;  // (from the original)
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> call_004ee4c8;  // (from the original)

u32 f_00531398(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 8u;
    r0 = call_004ee4c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 8u;
    guest::cpu()->r[13] += 8u;
    return call_004edd20(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00531398
GUEST_EXPORT(0x00531398, d_00531398::f_00531398);

// f_0053149c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053149c {

inline constexpr guest::Function<0x00125e08, u32(u32, u32, u32, u32)> call_00125e08;  // (from the original)
inline constexpr guest::Function<0x002d5f90, u32(u32, u32, u32, u32)> call_002d5f90;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x004ecf18, u32(u32, u32, u32, u32)> call_004ecf18;  // (from the original)
inline constexpr guest::Function<0x004edd3c, u32(u32, u32, u32, u32)> call_004edd3c;  // (from the original)
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;  // (from the original)
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32, u32, u32)> call_005b1a1c;  // (from the original)

u32 f_0053149c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_005673c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_004edd3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_004ecf18(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x14u;  // (from the original)
    r1 = 0x264u;  // (from the original)
    r0 = r0 + 0x18u;  // (from the original)
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2cu;  // (from the original)
    r0 = call_005673c8(r0, r1, r2, r3);
    r1 = 0x5b1c18u;  // (from the original)
    r3 = 2u;
    r2 = 0x11cu;  // (from the original)
    r0 = r0 + 8u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x238u;  // (from the original)
    r0 = call_00125e08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00125e08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_00125e08(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x284u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 0x290u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x291u) = u8(r1);  // (from the original)
    r0 = r0 + 0x294u;  // (from the original)
    r0 = call_005b1a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_005b1a1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 8u;
    r0 = call_002d5f90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x2a4u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053149c
GUEST_EXPORT(0x0053149c, d_0053149c::f_0053149c);

// f_0053152c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053152c {

inline constexpr guest::Function<0x002e9324, u32(u32, u32, u32, u32)> call_002e9324;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x004ecf70, u32(u32, u32, u32, u32)> call_004ecf70;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)

u32 f_0053152c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0x2a4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r0 = call_002e9324(r0, r1, r2, r3);
    r0 = r0 - 0x10u;  // (from the original)
    r4 = r0 - 0x268u;  // (from the original)
    r1 = 0x5b1c68u;  // (from the original)
    r3 = 2u;
    r2 = 0x11cu;  // (from the original)
    r0 = r0 - 0x260u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x18u;  // (from the original)
    r0 = call_004ecf70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xcu;  // (from the original)
    r0 = call_004edd84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 8u;
    return call_00317dec(r0, r1, r2, r3);
}

}  // namespace d_0053152c
GUEST_EXPORT(0x0053152c, d_0053152c::f_0053152c);

// f_005360e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005360e0 {

struct __attribute__((packed)) Object_005360e0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005360e0_0, byte_0, 0x0);  // (from the original)


u32 f_005360e0(gptr<Object_005360e0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r0 = u32(arg0->byte_0);
    r2 = 0x878198u;  // (from the original)
    if (r0 >= 0xaau) {  // (from the original)
        r0 = *gptr<u32>(r2);
        return r0;
    }
    r0 = r0 + (r0 << 1);
    if (r1 == 0) {
        r0 = *gptr<u32>(r2 + (r0 << 2) + 4u);
    } else {
        r0 = *gptr<u32>(r2 + (r0 << 2));
    }
    return r0;
}

}  // namespace d_005360e0
GUEST_EXPORT(0x005360e0, d_005360e0::f_005360e0);

// f_00536110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536110 {


u32 f_00536110(u32 r0, u32 r1) {
    if (r0 >= 0x56u) {  // (from the original)
        r0 = 0x887086u;  // (from the original)
    } else {
        r1 = 0xa184e4u;  // (from the original)
        r0 = r1 + (r0 << 1);
    }
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00536110
GUEST_EXPORT(0x00536110, d_00536110::f_00536110);

// f_00536130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536130 {

inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006bf18c, u32(u32, u32, u32, u32)> call_006bf18c;  // (from the original)

u32 f_00536130(u32 r0, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    guest::cpu()->s[0] = S0;
    r0 = call_005361a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r6 = 0x878990u;  // (from the original)
    if (r0 != 0) {
        r7 = 0x1fbu;  // (from the original)
        r4 = u32(*gptr<u16>(r0));
        if (r4 >= r7) {
            r4 = 0u;
            goto L_536198;
        }
        zf = r4 == 0x136u;  // (from the original)
        if (!zf) {
            zf = r4 == 0x151u;  // (from the original)
        }
        if (!zf) {
            goto L_536198;
        }
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_006bf18c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        S0 = std::bit_cast<float>(vcvt_uz_f(S0));
        r0 = std::bit_cast<u32>(S0) + r4;
        if (r0 < r7) {
            r0 = *gptr<u32>(r6 + (r0 << 2));
            goto L_536194;
        }
    }
    r0 = *gptr<u32>(r6);
L_536194:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
L_536198:;
    r0 = *gptr<u32>(r6 + (r4 << 2));
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00536130
GUEST_EXPORT(0x00536130, d_00536130::f_00536130);

// f_005361e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005361e8 {


u32 f_005361e8(u32 r0, u32 r1) {
    if (r0 >= 0x9bu) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = *gptr<u32>(0xa183a0u);  // (from the original)
    if (r1 != 0) {
        r0 = r0 + (r0 << 1) + r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005361e8
GUEST_EXPORT(0x005361e8, d_005361e8::f_005361e8);

// f_005369d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005369d0 {

struct __attribute__((packed)) Object_005369d0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005369d0_0, word_8, 0x8);  // (from the original)


u32 f_005369d0(gptr<Object_005369d0_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r0 = 0u;
    ea = arg0->word_8 + 0x28u;  // (from the original)
    r2 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 == 0) {
        r2 = r0;
    } else {
        r2 = r2 + r3;
    }
    if (r2 == 0) {
        r0 = 0u;
        goto L_536a04;
    }
    ea = r2 + (r1 << 4) + 0x28u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 != 0) {
        r0 = r2 + r1;
    }
L_536a04:;
    if (r0 == 0) {
        r0 = *gptr<u32>(r0 + 0x34u) & 0xffu;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x20000001u & ~*gptr<u32>(r0);  // (from the original)
    r1 = res;
    if (res != 0) {
        r0 = 0u;
    }
    r0 = *gptr<u32>(r0 + 0x34u) & 0xffu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005369d0
GUEST_EXPORT(0x005369d0, d_005369d0::f_005369d0);

// f_00536a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536a28 {

struct __attribute__((packed)) Object_00536a28_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00536a28_0, word_8, 0x8);  // (from the original)


u32 f_00536a28(gptr<Object_00536a28_0> arg0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    r0 = 0u;
    ea = arg0->word_8 + 0x28u;  // (from the original)
    r2 = ea;
    r3 = *gptr<u32>(ea);
    if (r3 == 0) {
        r2 = r0;
    } else {
        r2 = r2 + r3;
    }
    if (r2 == 0) {
        r1 = 0u;
        goto L_536a60;
    }
    ea = r2 + (r1 << 4) + 0x28u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r1 = r0;
    } else {
        r1 = r1 + r2;
    }
L_536a60:;
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    res = 0x20000011u & ~*gptr<u32>(r1);  // (from the original)
    if (res != 0) {
        r1 = 0u;
    }
    ea = r1 + 0x38u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r1 = r0;
    } else {
        r1 = r1 + r2;
    }
    ea = r1 + 0xcu;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 != 0) {
        r0 = r2 + r1;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00536a28
GUEST_EXPORT(0x00536a28, d_00536a28::f_00536a28);

// f_00536aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536aa0 {

inline constexpr guest::Function<0x00317a50, u32(u32, u32, u32, u32)> call_00317a50;  // (from the original)
inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)
inline constexpr guest::Function<0x006aaa40, u32(u32, u32, u32, u32)> call_006aaa40;  // (from the original)
inline constexpr guest::Function<0x006fad7c, u32(u32, u32, u32, u32)> call_006fad7c;  // (from the original)
inline constexpr guest::Function<0x0070b8fc, u32(u32, u32, u32, u32)> call_0070b8fc;  // (from the original)
inline constexpr guest::Function<0x00712864, u32(u32, u32, u32, u32)> call_00712864;  // (from the original)
inline constexpr guest::Function<0x00769d2c, u32(u32, u32, u32, u32)> call_00769d2c;  // (from the original)
inline constexpr guest::Function<0x0076bab4, u32(u32, u32, u32, u32)> call_0076bab4;  // (from the original)
inline constexpr guest::Function<0x0076bac4, u32(u32, u32, u32, u32)> call_0076bac4;  // (from the original)

u32 f_00536aa0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0xb8u;  // (from the original)
    r4 = r0;
    r0 = r13 + 0xbcu;  // (from the original)
    r10 = r1;
    r6 = *gptr<u32>(r0);
    r9 = *gptr<u32>(r0 + 4);
    r11 = r2;
    r8 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    r7 = r3;
    if (r6 != 0) {
        goto L_536b10;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006fad7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0076bab4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_536b04;
    }
    if (r5 == 0) {
        goto L_536b04;
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_0076bac4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00712864(r0, r1, r2, r3);
    goto L_536b0c;
L_536b04:;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00769d2c(r0, r1, r2, r3);
L_536b0c:;
    r6 = r0;
L_536b10:;
    r1 = 0x40u;  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r1);
    r0 = 0x8c9f1cu;  // (from the original)
    r2 = r1;
    r3 = u32(*gptr<u8>(r0));
    r10 = 0u;
    *gptr<u8>(r2 + (*gptr<u32>(r13 + 4u) - 1u)) = u8(r3);
    r1 = r13;
    *gptr<u8>(r13 + 0xcu) = u8(u32(*gptr<u8>(r0)));  // (from the original)
    *gptr<u32>(r13) = u32(0x904950u);  // (from the original)
    r0 = r13 + 0x70u;  // (from the original)
    if (r8 == 0) {
        goto L_536bb0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536ca4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x4cu) = u32(r7);  // (from the original)
    r7 = r13 + 0x4cu;  // (from the original)
    r5 = r0;
    r1 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544a20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_536c04;
    }
    r2 = *gptr<u32>(r5 + 4u);
    if (u32(*gptr<u8>(r13 + 0x50u)) == 0) {  // (from the original)
        goto L_536bfc;
    }
    goto L_536bf4;
L_536b9c:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00544d08(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_536c04;
L_536bb0:;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536cd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x4cu) = u32(r7);  // (from the original)
    r7 = r13 + 0x4cu;  // (from the original)
    r5 = r0;
    r1 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544a20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_536c04;
    }
    r2 = *gptr<u32>(r5 + 4u);
    if (u32(*gptr<u8>(r13 + 0x50u)) == 0) {  // (from the original)
        goto L_536bfc;
    }
L_536bf4:;
    r1 = r13 + 0x50u;  // (from the original)
    guest::preempt();
    goto L_536b9c;
L_536bfc:;
    r1 = 0u;
    guest::preempt();
    goto L_536b9c;
L_536c04:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r3 = 0x80u;  // (from the original)
    r2 = r11;
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00317a50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_536c94;
    }
    r1 = *gptr<u32>(r4 + 0x110u);  // (from the original)
    if (r1 != 0) {
        goto L_536c94;
    }
    ea = r4 + 8u;
    ea = *gptr<u32>(ea) + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r10;
    } else {
        r0 = r0 + r1;
    }
    if (r0 == 0) {
        r1 = 0u;
        goto L_536c74;
    }
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r1 = r10;
    } else {
        r1 = r1 + r0;
    }
L_536c74:;
    r2 = r8;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0070b8fc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    zf = r9 == 0;
    if (!zf) {
        r0 = r4;
    }
    *gptr<u32>(r4 + 0x110u) = u32(r6);  // (from the original)
    if (!zf) {
        guest::cpu()->r[13] = r13;
        r0 = call_006aaa40(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = 1u;
L_536c94:;
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00536aa0
GUEST_EXPORT(0x00536aa0, d_00536aa0::f_00536aa0);

// f_00536cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536cfc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;  // (from the original)
inline constexpr guest::Function<0x00536650, u32(u32, u32, u32, u32)> call_00536650;  // (from the original)

u32 f_00536cfc(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0x1cu) {  // (from the original)
        goto L_536d9c;
    }
    r0 = *gptr<u32>(r4 + 8u);
    r4 = 0u;
    ea = r0 + 0x20u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r4;
    } else {
        r0 = r0 + r1;
    }
    if (r0 != 0) {
        ea = r0 + 0x28u;  // (from the original)
        r0 = ea;
        r1 = *gptr<u32>(ea);
        if (r1 == 0) {
            r0 = r4;
        } else {
            r0 = r0 + r1;
        }
    }
    if (r0 == 0) {
        goto L_536d9c;
    }
    ea = r0 + 0xc0u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 == 0) {
        r0 = r4;
    } else {
        r0 = r0 + r1;
    }
    if (r0 == 0) {
        r4 = 0u;
        goto L_536d78;
    }
    ea = r0 + 0x28u;  // (from the original)
    r0 = ea;
    r1 = *gptr<u32>(ea);
    if (r1 != 0) {
        r4 = r1 + r0;
    }
L_536d78:;
    if (r4 == 0) {
        goto L_536d9c;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00536650(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    return call_004f2c10(r0, r1, r2, guest::cpu()->r[3]);
L_536d9c:;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00536cfc
GUEST_EXPORT(0x00536cfc, d_00536cfc::f_00536cfc);

// f_00536da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536da0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

u32 f_00536da0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r1;
    r5 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r6 = r2;
    r4 = r3;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x40u) {  // (from the original)
        goto L_536e10;
    }
    if (r0 == 0x1cu) {  // (from the original)
        goto L_536e3c;
    }
    if (r0 != 0x29u) {  // (from the original)
        goto L_536e08;
    }
    if (r5 != 1u) {
        goto L_536e08;
    }
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536f08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x14u;  // (from the original)
L_536e08:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_536e10:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r0 + 0xfu));  // (from the original)
    if (r0 >= 0x32u) {  // (from the original)
        guest::preempt();
        goto L_536e08;
    }
    if (r0 == 0x2au) {  // (from the original)
        goto L_536e80;
    }
    if (r0 == 1u) {
        goto L_536ec4;
    }
    if (r0 != 7u) {
        guest::preempt();
        goto L_536e08;
    }
L_536e3c:;
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536f24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x14u;  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_536e80:;
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536f40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x14u;  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_536ec4:;
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0054a644(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x536f58u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00544fec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00544f18(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 0x14u;  // (from the original)
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00536da0
GUEST_EXPORT(0x00536da0, d_00536da0::f_00536da0);

// f_00537028: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537028 {

struct __attribute__((packed)) Object_00537028_0 {
    u8 unknown_0[0x110];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Object_00537028_0, word_110, 0x110);  // (from the original)

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x006aac18, u32(u32, u32, u32, u32)> call_006aac18;  // (from the original)

u32 f_00537028(gptr<Object_00537028_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if (arg0->word_110 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        return call_002f73b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = r4;
    r0 = call_006aac18(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0x110u) = u32(0u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_002f73b8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537028
GUEST_EXPORT(0x00537028, d_00537028::f_00537028);

// f_0053721c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053721c {

inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)

u32 f_0053721c() {
    return call_00317e2c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053721c
GUEST_EXPORT(0x0053721c, d_0053721c::f_0053721c);

// f_00537220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537220 {

inline constexpr guest::Function<0x002bec28, u32(u32, u32, u32, u32)> call_002bec28;  // (from the original)
inline constexpr guest::Function<0x002becec, u32(u32, u32, u32, u32)> call_002becec;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)

u32 f_00537220(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005ca6fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        r0 = call_002becec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = call_005ca6fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_002bec28(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537220
GUEST_EXPORT(0x00537220, d_00537220::f_00537220);

// f_00537328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537328 {


u32 f_00537328(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 zf = 0;
    r0 = *gptr<u32>(0x952620u);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
    }
    if (u32(*gptr<u8>(r0 + 0xa0u)) >= 0x10u) {  // (from the original)
        r0 = 0u;
    } else {
        r0 = 1u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537328
GUEST_EXPORT(0x00537328, d_00537328::f_00537328);

// f_00537358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537358 {

inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32, u32)> call_002e0d04;  // (from the original)
inline constexpr guest::Function<0x0071fcb8, u32(u32, u32, u32, u32)> call_0071fcb8;  // (from the original)

u32 f_00537358(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_0071fcb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    *gptr<u8>(r4 + 0x7dd7u) = u8(4u);  // (from the original)
    r0 = *gptr<u32>(0x952620u);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r1 == 0;
    }
    if (zf) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_002e0d04(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537358
GUEST_EXPORT(0x00537358, d_00537358::f_00537358);

// f_0053742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053742c {

inline constexpr guest::Function<0x001e0190, u32(u32, u32, u32, u32)> call_001e0190;  // (from the original)
inline constexpr guest::Function<0x0027a48c, u32(u32, u32, u32, u32)> call_0027a48c;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x005cfa78, u32(u32, u32, u32, u32)> call_005cfa78;  // (from the original)
inline constexpr guest::Function<0x005cfef0, u32(u32, u32, u32, u32)> call_005cfef0;  // (from the original)

u32 f_0053742c(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005cfa78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_005cfef0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_002fb918(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r0 + 0xcu;  // (from the original)
    r0 = call_0027a48c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_002fb918(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_001e0190(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053742c
GUEST_EXPORT(0x0053742c, d_0053742c::f_0053742c);

// f_00537464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537464 {


u32 f_00537464(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 zf = 0;
    r0 = *gptr<u32>(0x952620u);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537464
GUEST_EXPORT(0x00537464, d_00537464::f_00537464);

// f_005374f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005374f0 {

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;  // (from the original)
inline constexpr guest::Function<0x002be920, u32(u32, u32, u32, u32)> call_002be920;  // (from the original)
inline constexpr guest::Function<0x002bea00, u32(u32, u32, u32, u32)> call_002bea00;  // (from the original)
inline constexpr guest::Function<0x002beb4c, u32(u32, u32, u32, u32)> call_002beb4c;  // (from the original)
inline constexpr guest::Function<0x002beb90, u32(u32, u32, u32, u32)> call_002beb90;  // (from the original)
inline constexpr guest::Function<0x002bedd8, u32(u32, u32, u32, u32)> call_002bedd8;  // (from the original)
inline constexpr guest::Function<0x002bee04, u32(u32, u32, u32, u32)> call_002bee04;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fe940, u32(u32, u32, u32, u32)> call_002fe940;  // (from the original)
inline constexpr guest::Function<0x0030f4fc, u32(u32, u32, u32, u32)> call_0030f4fc;  // (from the original)
inline constexpr guest::Function<0x00467590, u32(u32, u32, u32, u32)> call_00467590;  // (from the original)
inline constexpr guest::Function<0x00582d34, u32(u32, u32, u32, u32)> call_00582d34;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)
inline constexpr guest::Function<0x0071a23c, u32(u32, u32, u32, u32)> call_0071a23c;  // (from the original)
inline constexpr guest::Function<0x0071d5b8, u32(u32, u32, u32, u32)> call_0071d5b8;  // (from the original)
inline constexpr guest::Function<0x0071d664, u32(u32, u32, u32, u32)> call_0071d664;  // (from the original)
inline constexpr guest::Function<0x00725978, u32(u32, u32, u32, u32)> call_00725978;  // (from the original)
inline constexpr guest::Function<0x00725984, u32(u32, u32, u32, u32)> call_00725984;  // (from the original)
inline constexpr guest::Function<0x007259b4, u32(u32, u32, u32, u32)> call_007259b4;  // (from the original)

u32 f_005374f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x58u;  // (from the original)
    r6 = r2;
    r9 = r1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00725984(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5376c8;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_007259b4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r4 + 4u);
    if (r0 != r1) {
        goto L_5376c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r3 = r0 + 0x62080u;  // (from the original)
    r0 = r4 + 0x67f4u;  // (from the original)
    r3 = r3 + 0x138u;  // (from the original)
    r1 = u32(*gptr<u16>(r0));
    r2 = u32(*gptr<u16>(r3));
    if (r2 != r1) {
        goto L_537574;
    }
    r1 = u32(*gptr<u8>(r3 + 0x14u));  // (from the original)
    r2 = u32(*gptr<u8>(r0 + 0x14u));  // (from the original)
    if (r1 != r2) {
        goto L_537574;
    }
    r1 = r0 + 2u;
    r2 = 0x12u;  // (from the original)
    r0 = r3 + 2u;
    guest::cpu()->r[13] = r13;
    r0 = call_00100d2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5376c0;
    }
L_537574:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00725978(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = 0u;
    r3 = r2;
    *gptr<u32>(r13) = u32(r2);
    *gptr<u32>(r13 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0 = call_00467590(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5376c8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a23c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 != 0) {
        r1 = r13;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0030f4fc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13;
        r0 = r4 + 0x67deu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fe940(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_5376c8;
        }
    }
    r0 = r4 + 0x1238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00582d34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005ca6fc(r0, r1, r2, r3);
    r8 = r0;
    r3 = r13 + 0x34u;  // (from the original)
    r2 = r13 + 0x30u;  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002bee04(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 != 0) {
        r3 = r9;
        r2 = r4;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002beb4c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_5376bc;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_0071d664(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r5 = res;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r5 & 0xffu;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002bedd8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_0071d5b8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = r0;
        r1 = r5 & 0xffu;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002bedd8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_002be920(r0, r1, r2, r3);
        r1 = r0;
    } else {
        r2 = r13 + 0x34u;  // (from the original)
        r1 = r13 + 0x30u;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002beb90(r0, r1, r2, r3);
        r1 = r0;
        if (r0 == 0) {
            goto L_5376c8;
        }
    }
    r3 = r9;
    r2 = r4;
    r0 = r8;
    *gptr<u32>(r13) = u32(r6);
    guest::cpu()->r[13] = r13;
    r0 = call_002bea00(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5376bc:;
    r0 = 1u;
L_5376c0:;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5376c8:;
    r0 = 0u;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005374f0
GUEST_EXPORT(0x005374f0, d_005374f0::f_005374f0);

// f_005376d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d4 {

inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)

u32 f_005376d4() {
    return call_005ca6fc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005376d4
GUEST_EXPORT(0x005376d4, d_005376d4::f_005376d4);

// f_005376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d8 {


u32 f_005376d8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 zf = 0;
    r0 = *gptr<u32>(0x952620u);  // (from the original)
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
    }
    r0 = u32(*gptr<u8>(r0 + 0xa0u));  // (from the original)
    if (r0 >= 0x10u) {  // (from the original)
        r0 = 0u;
    } else {
        r0 = 0x10u - r0;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005376d8
GUEST_EXPORT(0x005376d8, d_005376d8::f_005376d8);

// f_005377fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005377fc {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003355ac, u32(u32, u32, u32, u32)> call_003355ac;  // (from the original)
inline constexpr guest::Function<0x003506c0, u32(u32, u32, u32, u32)> call_003506c0;  // (from the original)

u32 f_005377fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r8 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_003506c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = r7;
    r3 = r0 + 0x6e29au;  // (from the original)
    r1 = r6;
    r0 = r8;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_003355ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005377fc
GUEST_EXPORT(0x005377fc, d_005377fc::f_005377fc);

// f_0053784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053784c {

inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> call_0023bc64;  // (from the original)
inline constexpr guest::Function<0x002fb918, u32(u32, u32, u32, u32)> call_002fb918;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_0053784c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    goto L_53784c;
L_1e01f4:;
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = u32(*gptr<u16>(r0 + 0x22u)) & ~lsl_r(0x1000u, r1 & 0xff);  // (from the original)
    *gptr<u16>(r0 + 0x22u) = u16(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_53784c:;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0023bc64(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 4u;
    r0 = call_002ff8b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = call_002fb918(r0, r1, r2, r3);
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    guest::preempt();
    goto L_1e01f4;
}

}  // namespace d_0053784c
GUEST_EXPORT(0x0053784c, d_0053784c::f_0053784c);

// f_0053787c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053787c {

inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32, u32)> call_002e0d04;  // (from the original)
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_0053787c(u32 r0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x952620u;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r5);
    zf = r0 == 0;
    if (!zf) {
        r2 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r2 == 0;
    }
    if (zf) {
        r0 = r1;
    }
    if (u32(*gptr<u8>(r0 + 0xa0u)) >= 0x10u) {  // (from the original)
        r0 = 0u;
        goto L_5378dc;
    }
    r0 = 4u;
    r0 = call_002ff8b0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r4 + 0x7dd7u;  // (from the original)
    *gptr<u8>(r4) = u8(r0);
    r0 = *gptr<u32>(r5);
    zf = r0 == 0;
    if (!zf) {
        r1 = u32(*gptr<u8>(r0 + 0xa1u));  // (from the original)
        zf = r1 == 0;
    }
    if (!zf) {
        r0 = call_002e0d04(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 1u;
L_5378dc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053787c
GUEST_EXPORT(0x0053787c, d_0053787c::f_0053787c);

// f_005378e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005378e4 {

inline constexpr guest::Function<0x002bed24, u32(u32, u32, u32, u32)> call_002bed24;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)

u32 f_005378e4(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_005ca6fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    guest::cpu()->r[13] += 8u;
    return call_002bed24(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005378e4
GUEST_EXPORT(0x005378e4, d_005378e4::f_005378e4);

// f_00537b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537b6c {


u32 f_00537b6c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0x33333333u;  // (from the original)
    r0 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    r2 = r0 & r1;
    r0 = r1 & r0 >> 2;
    r1 = 0xf0f0f0fu;  // (from the original)
    r0 = r0 + r2;
    r0 = r0 + (r0 >> 4) & r1;
    r0 = r0 + (r0 >> 8);
    r0 = r0 + (r0 >> 0x10) & 0x3fu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537b6c
GUEST_EXPORT(0x00537b6c, d_00537b6c::f_00537b6c);

// f_00537bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537bb0 {


u32 f_00537bb0(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r2 = 0;
    if (r0 == 0) {
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
L_537bb8:;
        r1 = r1 - 1u;
        res = r1;
        if (!(!u32(res == 0) && res >> 0x1f == (r1 & (r1 ^ res)) >> 0x1f)) {  // (from the original)
            r0 = (r0 & 0u - r0) - 1u;
            r1 = 0x33333333u;  // (from the original)
            r0 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
            r2 = r0 & r1;
            r0 = r1 & r0 >> 2;
            r1 = 0xf0f0f0fu;  // (from the original)
            r0 = r0 + r2;
            r0 = r0 + (r0 >> 4) & r1;
            r0 = r0 + (r0 >> 8);
            r0 = r0 + (r0 >> 0x10) & 0x3fu;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        res = r0 & r0 - 1u;
        r0 = res;
        guest::preempt();
    } while (res != 0);
    r0 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537bb0
GUEST_EXPORT(0x00537bb0, d_00537bb0::f_00537bb0);

// f_00537ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537ce0 {

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;  // (from the original)
inline constexpr guest::Function<0x005380a8, u32(u32, u32, u32, u32)> call_005380a8;  // (from the original)
inline constexpr guest::Function<0x0053814c, u32(u32, u32, u32, u32)> call_0053814c;  // (from the original)

u32 f_00537ce0(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_001435c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = *gptr<u32>(r4);
    if (r5 != 0) {
        r0 = r5;
        r0 = call_005380a8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = r5;
        r0 = call_0053814c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0u;
        *gptr<u32>(r4) = u32(r0);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_00537ce0
GUEST_EXPORT(0x00537ce0, d_00537ce0::f_00537ce0);

// f_00537d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537d70 {

inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32, u32)> call_0013cbdc;  // (from the original)
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32, u32, u32)> call_0053ac4c;  // (from the original)

u32 f_00537d70(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
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
    r4 = r1;
    r5 = r0;
    r1 = r2;
    r0 = r4 << 2;
    guest::cpu()->r[13] = r13;
    r0 = call_0053ac4c(r0, r1, r2, r3);
    r3 = 0u;
    if (r0 == 0) {
        r0 = r3;
        goto L_537dc0;
    }
    r1 = 0u;
    if (!u32(r4 >= 0u) || u32(r4 == 0)) {
        goto L_537dc0;
    }
    do {
L_537dac:;
        res = r0 + (r1 << 2);
        r2 = res;
        r1 = r1 + 1u;
        if (res != 0) {
            *gptr<u32>(r2) = u32(r3);
        }
        guest::preempt();
    } while (r1 < r4);
L_537dc0:;
    r1 = r0;
    ea = r5;
    *gptr<u32>(ea) = u32(r0);
    r2 = r4;
    r0 = r5 + 4u;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    return call_0013cbdc(r0, r1, r2, r3);
}

}  // namespace d_00537d70
GUEST_EXPORT(0x00537d70, d_00537d70::f_00537d70);

// f_00537dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537dd8 {

struct __attribute__((packed)) Object_00537dd8_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
    u16 half_c;
    u8 unknown_e[0x2];  // (not used here)
    u32 word_10;
    u16 half_14;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0xc];  // (not used here)
    u32 word_30;
    u32 word_34;
};
GUEST_OFFSET(Object_00537dd8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00537dd8_0, word_34, 0x34);  // (from the original)


void f_00537dd8(gptr<Object_00537dd8_0> arg0) {
    u32 r3 = 0;
    r3 = 0u;
    arg0->word_0 = u32(r3);
    arg0->word_8 = u32(r3);
    arg0->half_c = u16(r3);
    arg0->word_10 = u32(r3);
    arg0->half_14 = u16(r3);
    arg0->word_18 = u32(r3);
    arg0->word_1c = u32(r3);
    arg0->word_20 = u32(~0u);
    arg0->word_30 = u32(r3);
    arg0->word_34 = u32(r3);
    return;
}

}  // namespace d_00537dd8
GUEST_EXPORT(0x00537dd8, d_00537dd8::f_00537dd8);

// f_00537e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537e0c {

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;  // (from the original)
inline constexpr guest::Function<0x00143604, u32(u32, u32, u32, u32)> call_00143604;  // (from the original)
inline constexpr guest::Function<0x005380a8, u32(u32, u32, u32, u32)> call_005380a8;  // (from the original)
inline constexpr guest::Function<0x0053814c, u32(u32, u32, u32, u32)> call_0053814c;  // (from the original)

u32 f_00537e0c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_001435c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = *gptr<u32>(r4);
    if (r5 != 0) {
        r0 = r5;
        r0 = call_005380a8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r5;
        r0 = call_0053814c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 0u;
        *gptr<u32>(r4) = u32(r1);
    }
    r0 = r4 + 4u;
    r4 = r0;
    r0 = call_001435c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_00143604(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 4u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537e0c
GUEST_EXPORT(0x00537e0c, d_00537e0c::f_00537e0c);

// f_00538088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538088 {

struct __attribute__((packed)) Object_00538088_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00538088_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00538088_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00538088_0, word_8, 0x8);  // (from the original)


u32 f_00538088(gptr<Object_00538088_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        return r0;
    }
    if (r2 == 0) {
        return r0;
    }
    arg0->word_0 = u32(0u);
    r0 = r0 + 4u;
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r2);
    return r0;
}

}  // namespace d_00538088
GUEST_EXPORT(0x00538088, d_00538088::f_00538088);

// f_00538188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538188 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)

u32 f_00538188(u32 r0) {
    r0 = r0 + 0x10u;  // (from the original)
    return call_00135748(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00538188
GUEST_EXPORT(0x00538188, d_00538188::f_00538188);

// f_00538274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538274 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)

u32 f_00538274(u32 r0) {
    r0 = r0 + 0x10u;  // (from the original)
    return call_001357ec(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00538274
GUEST_EXPORT(0x00538274, d_00538274::f_00538274);

// f_0053827c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053827c {

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053827c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_0053d490(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0;
    *gptr<u32>(r0) = u32(0x903a08u);  // (from the original)
    r0 = r0 + 0x10u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0) = u32(r1);
    r0 = call_0012f154(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053827c
GUEST_EXPORT(0x0053827c, d_0053827c::f_0053827c);

// f_005382c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005382c4 {

struct __attribute__((packed)) Object_005382c4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005382c4_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0053d530, u32(u32, u32, u32, u32)> call_0053d530;  // (from the original)

u32 f_005382c4(gptr<Object_005382c4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x903a08u;  // (from the original)
    arg0->word_0 = u32(r1);
    return call_0053d530(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005382c4
GUEST_EXPORT(0x005382c4, d_005382c4::f_005382c4);

// f_0053ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac4c {

inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;  // (from the original)

u32 f_0053ac4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r1;
    if (r1 == 0) {
        r0 = *gptr<u32>(0x97d40cu);  // (from the original)
        r0 = call_00749010(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r2 = 4u;
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x18u);  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] += 8u;
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
}

}  // namespace d_0053ac4c
GUEST_EXPORT(0x0053ac4c, d_0053ac4c::f_0053ac4c);

// f_0053ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac90 {

inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;  // (from the original)

u32 f_0053ac90(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r1;
    r5 = r2;
    if (r1 == 0) {
        r0 = *gptr<u32>(0x97d40cu);  // (from the original)
        r0 = call_00749010(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_53acd0;
        }
    }
    r2 = r5;
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x18u);  // (from the original)
    r1 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
L_53acd0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053ac90
GUEST_EXPORT(0x0053ac90, d_0053ac90::f_0053ac90);

// f_0053acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053acd8 {

struct __attribute__((packed)) Object_0053acd8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0053acd8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053acd8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> call_00100e5c;  // (from the original)

u32 f_0053acd8(gptr<Object_0053acd8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r3 = r13 + 0x18u;  // (from the original)
    r5 = arg0->word_4;
    r2 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4 = arg0->word_8;
    r0 = r5;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00100e5c(r0, r1, r2, r3);
    res = r0;
    r1 = 0u;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        if (s32(r0) < s32(r4)) {
            goto L_53ad1c;
        }
    }
    r0 = r4 - 1u;
    *gptr<u8>(r5 + r4 - 1u) = u8(r1);
L_53ad1c:;
    ea = r13;
    r13 = r13 + 0xc;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    v = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053acd8
GUEST_EXPORT(0x0053acd8, d_0053acd8::f_0053acd8);

// f_0053ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad24 {

struct __attribute__((packed)) Object_0053ad24_0 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad24_0, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32, u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053d268, u32(u32, u32, u32, u32)> call_0053d268;  // (from the original)

u32 f_0053ad24(gptr<Object_0053ad24_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r0 = r0 + 0x50u;  // (from the original)
    r4 = 0u;
    res = arg0->word_6c & 1u;
    r1 = res;
    if (res != 0) {
        r1 = 1u;
    }
    if (r1 != 0) {
        r4 = r0;
        r0 = call_00538188(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r5 = r5 + 0x3cu;  // (from the original)
    r1 = *gptr<u32>(r5 + 0xcu) + r6;  // (from the original)
    r0 = r5;
    r0 = call_0053d268(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r5 + 8u) + 1u;
    *gptr<u32>(r5 + 8u) = u32(r0);
    if (r4 != 0) {
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00538274(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053ad24
GUEST_EXPORT(0x0053ad24, d_0053ad24::f_0053ad24);

// f_0053ad94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad94 {

struct __attribute__((packed)) Object_0053ad94_0 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad94_0, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32, u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32, u32, u32)> call_0053d284;  // (from the original)

u32 f_0053ad94(gptr<Object_0053ad94_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = r0 + 0x50u;  // (from the original)
    r5 = 0u;
    res = arg0->word_6c & 1u;
    r1 = res;
    if (res != 0) {
        r1 = 1u;
    }
    if (r1 != 0) {
        r5 = r0;
        r0 = call_00538188(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = *gptr<u32>(r4 + 0x48u) + r6;  // (from the original)
    r0 = call_0053d284(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(r4 + 0x44u) - 1u;  // (from the original)
    *gptr<u32>(r4 + 0x44u) = u32(r0);  // (from the original)
    if (r5 != 0) {
        r0 = r5;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_00538274(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053ad94
GUEST_EXPORT(0x0053ad94, d_0053ad94::f_0053ad94);

// f_0053af90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053af90 {

struct __attribute__((packed)) Object_0053af90_0 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053af90_0, word_6c, 0x6c);  // (from the original)

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32, u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053aef0, u32(u32, u32, u32, u32)> call_0053aef0;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32, u32, u32)> call_0053d284;  // (from the original)

u32 f_0053af90(gptr<Object_0053af90_0> arg0, u32 r1_unused, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r8 = 0u;
    r0 = r0 + 0x50u;  // (from the original)
    r6 = r8;
    res = arg0->word_6c & 1u;
    r1 = res;
    if (res != 0) {
        r1 = 1u;
    }
    if (r1 != 0) {
        r6 = r0;
        r0 = call_00538188(r0, r1, r2, guest::cpu()->r[3]);
    }
    r2 = 0u;
    r1 = r2;
    r0 = r5;
    r0 = call_0053aef0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = *gptr<u32>(r5 + 0x20u);  // (from the original)
    if (r4 != 0) {
        r7 = r5;
        r0 = r4 + 0x50u;  // (from the original)
        res = *gptr<u32>(r4 + 0x6cu) & 1u;  // (from the original)
        r1 = res;
        if (res != 0) {
            r1 = 1u;
        }
        r5 = r8;
        if (r1 != 0) {
            r5 = r0;
            r0 = call_00538188(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r0 = *gptr<u32>(r4 + 0x30u) + r7;  // (from the original)
        r0 = call_0053d284(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = *gptr<u32>(r4 + 0x2cu) - 1u;  // (from the original)
        *gptr<u32>(r4 + 0x2cu) = u32(r0);  // (from the original)
        if (r5 != 0) {
            r0 = r5;
            r0 = call_00538274(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
    }
    if (r6 != 0) {
        r0 = r6;
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_00538274(r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053af90
GUEST_EXPORT(0x0053af90, d_0053af90::f_0053af90);

// f_0053b1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1b0 {

struct __attribute__((packed)) Object_0053b1b0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0053b1b0_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005382c4, u32(u32, u32, u32, u32)> call_005382c4;  // (from the original)
inline constexpr guest::Function<0x0053d530, u32(u32, u32, u32, u32)> call_0053d530;  // (from the original)

u32 f_0053b1b0(gptr<Object_0053b1b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x903bc0u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 0x50u;  // (from the original)
    r0 = call_005382c4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x50u;  // (from the original)
    return call_0053d530(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053b1b0
GUEST_EXPORT(0x0053b1b0, d_0053b1b0::f_0053b1b0);

// f_0053b1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1d0 {

struct __attribute__((packed)) Object_0053b1d0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0053b1d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053b1d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053b1d0_0, byte_8, 0x8);  // (from the original)


void f_0053b1d0(gptr<Object_0053b1d0_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(r1);
    *gptr<u8>(0x97e9fcu) = u8(r1);  // (from the original)
    arg0->byte_8 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0053b1d0
GUEST_EXPORT(0x0053b1d0, d_0053b1d0::f_0053b1d0);

// f_0053b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b2e0 {

inline constexpr guest::Function<0x00127cf8, u32(u32, u32, u32, u32)> call_00127cf8;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053b2e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_0053d490(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(0x903c20u);  // (from the original)
    r0 = 0u;
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r13) = u32(r0);
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00127cf8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    if (res == 0) {
        r2 = *gptr<u32>(r13);
        r0 = 0u;
        *gptr<u32>(r4) = u32(r2);
    }
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 - 0x10u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053b2e0
GUEST_EXPORT(0x0053b2e0, d_0053b2e0::f_0053b2e0);

// f_0053b400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b400 {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32, u32, u32)> call_0014f5dc;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053b400(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0053d490(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(0x903c30u);  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0x10u) = u32(r1);  // (from the original)
    r0 = r13;
    *gptr<u32>(r13) = u32(r1);
    guest::cpu()->r[13] = r13;
    r0 = call_0014f5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    if (res == 0) {
        r2 = *gptr<u32>(r13);
        r0 = 0u;
        *gptr<u32>(r4) = u32(r2);
    }
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 - 0x10u;  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053b400
GUEST_EXPORT(0x0053b400, d_0053b400::f_0053b400);

// f_0053b844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b844 {

inline constexpr guest::Function<0x0053d2b4, u32(u32, u32, u32, u32)> call_0053d2b4;  // (from the original)

u32 f_0053b844(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0053d2b4(r0, r1, r2, r3);
    r0 = *gptr<u32>(r0);
    r12 = 0x6c078965u;  // (from the original)
    r1 = r12;
    r0 = (r0 ^ r0 >> 0x1e) * r12 + 1u;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    r0 = (r0 ^ r0 >> 0x1e) * r12 + 2u;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(r0);
    r0 = (r0 ^ r0 >> 0x1e) * r12 + 3u;  // (from the original)
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = (r0 ^ r0 >> 0x1e) * r1 + 4u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053b844
GUEST_EXPORT(0x0053b844, d_0053b844::f_0053b844);

// f_0053bb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bb14 {

struct __attribute__((packed)) Object_0053bb14_0 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x20];  // (not used here)
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
};
GUEST_OFFSET(Object_0053bb14_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_0053bb14_0, word_84, 0x84);  // (from the original)

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;  // (from the original)
inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> call_00139504;  // (from the original)

u32 f_0053bb14(gptr<Object_0053bb14_0> arg0, u32 r1, float S0, float S1) {
    u32 b = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    if (arg0->word_74 == 0) {
        r12 = arg0->word_78;
        *gptr<u32>(r13 + 0x14u) = u32(r4);  // (from the original)
        S0 = std::bit_cast<float>(arg0->word_80);
        S1 = std::bit_cast<float>(arg0->word_84);
        r3 = r13 + 0x14u;  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(4u);  // (from the original)
        r2 = 0x53b9a0u;  // (from the original)
        *gptr<u32>(r13 + 0x24u) = u32(0x1394e4u);  // (from the original)
        *gptr<u32>(r13 + 0x28u) = u32(0x139500u);  // (from the original)
        *gptr<u32>(r13 + 0x2cu) = u32(0x1394f4u);  // (from the original)
        *gptr<u32>(r13) = u32(arg0->word_50 + arg0->word_7c);
        r0 = r13 + 4u;
        *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
        r0 = r12;
        *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
        r1 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_00128e80(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r5 = r0;
        if ((r0 & 0x7e00000u) != 0x600000u) {  // (from the original)
            b = r5 >> 0x1f;  // (from the original)
            r1 = b;
            r0 = r5;
            if (b != 0) {
                guest::cpu()->r[13] = r13;
                guest::cpu()->s[0] = S0;
                guest::cpu()->s[1] = S1;
                r0 = call_0012f204(r0, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        res = r5 & 0x80000000u;  // (from the original)
        if (!(res >> 0x1f)) {  // (from the original)
            goto L_53bbc0;
        }
    }
    r0 = 0u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_53bbc0:;
    r1 = *gptr<u32>(*gptr<u32>(r4 + 0x78u));  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00139504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0012f204(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
    }
    r1 = *gptr<u32>(r4 + 0x74u);  // (from the original)
    *gptr<u32>(r4 + 0x70u) = u32(*gptr<u32>(r13));  // (from the original)
    if (r1 == 0) {
        *gptr<u32>(r4 + 0x74u) = u32(1u);  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_0053bb14
GUEST_EXPORT(0x0053bb14, d_0053bb14::f_0053bb14);

// f_0053bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bc7c {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32, u32)> call_0013d00c;  // (from the original)
inline constexpr guest::Function<0x0013e164, u32(u32, u32, u32, u32)> call_0013e164;  // (from the original)
inline constexpr guest::Function<0x00537d70, u32(u32, u32, u32, u32)> call_00537d70;  // (from the original)
inline constexpr guest::Function<0x00537dd8, u32(u32, u32, u32, u32)> call_00537dd8;  // (from the original)
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;  // (from the original)

u32 f_0053bc7c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r5 = r2;
    r7 = r1;
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_0053d490(r0, r1, r2, r3);
    r3 = 0x9039e0u;  // (from the original)
    r2 = 0x8b06acu;  // (from the original)
    r1 = r0;
    ea = r0 + 0x10u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    r8 = 0u;
    *gptr<u32>(ea + 4u) = u32(r2);
    *gptr<u32>(r1) = u32(0x903c40u);  // (from the original)
    r0 = r1 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00537dd8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x18u;  // (from the original)
    ea = r0 + 0x38u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r0 + 0x3cu;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    r0 = ea;
    r1 = 1u;
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(r8);
    ea = r0 + 8u;
    *gptr<u32>(ea) = u32(r8);
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    r2 = r4 + 0x6cu;  // (from the original)
    ea = r4 + 0x64u;  // (from the original)
    *gptr<u32>(ea) = u32(r8);
    ea = r4 + 0x68u;  // (from the original)
    *gptr<u8>(ea) = u8(r1);
    ea = r2;
    *gptr<u32>(ea) = u32(~0x80000000u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r6);
    r0 = r13;
    ea = r4 + 0x74u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0x78u;  // (from the original)
    *gptr<u32>(ea) = u32(r5);
    *gptr<u32>(ea + 4) = u32(r8);
    r1 = *gptr<u32>(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_0013d00c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r0 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_0013e164(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r4 + 0x80u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(~1u);
    r2 = r7;
    r1 = 0x20u;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u32>(r4 + 0x5cu) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00537d70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053bc7c
GUEST_EXPORT(0x0053bc7c, d_0053bc7c::f_0053bc7c);

// f_0053c024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c024 {

inline constexpr guest::Function<0x00537c28, u32(u32, u32, u32, u32)> call_00537c28;  // (from the original)

u32 f_0053c024(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00537c28(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053c024
GUEST_EXPORT(0x0053c024, d_0053c024::f_0053c024);

// f_0053c300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c300 {

struct __attribute__((packed)) Object_0053c300_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
};
GUEST_OFFSET(Object_0053c300_0, byte_70, 0x70);  // (from the original)

inline constexpr guest::Function<0x0053c670, u32(u32, u32, u32, u32)> call_0053c670;  // (from the original)
inline constexpr guest::Function<0x0053d268, u32(u32, u32, u32, u32)> call_0053d268;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32, u32, u32)> call_0053d284;  // (from the original)
inline constexpr guest::Function<0x00748d0c, u32(u32, u32, u32, u32)> call_00748d0c;  // (from the original)

u32 f_0053c300(gptr<Object_0053c300_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r3 = u32(arg0->byte_70);
    r6 = r2;
    r0 = call_00748d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    if (r0 != 0) {
        r0 = *gptr<u32>(r4 + 0xcu) + 0x10u + r4;  // (from the original)
        r2 = *gptr<u32>(r4 + 8u);
        res = (r0 + r6 - 1u & ~(r6 - 1u)) - r0;
        r0 = res;
        r1 = r7 + r0;
        r6 = r2 - r1;
        *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
        if (res != 0) {
            r1 = r4 + 1u;
            *gptr<u32>(r4 + (r0 + 0x10u) - 4u) = u32(r1);  // (from the original)
        }
        *gptr<u32>(r4 + 8u) = u32(r7);
        r0 = *gptr<u32>(r5 + 0x80u) + r4;  // (from the original)
        r0 = call_0053d284(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r8 = r5 + 0x84u;  // (from the original)
        *gptr<u32>(r5 + 0x7cu) = u32(*gptr<u32>(r5 + 0x7cu) - 1u);  // (from the original)
        r1 = *gptr<u32>(r5 + 0x90u) + r4;  // (from the original)
        r0 = r8;
        r0 = call_0053d268(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r8 + 8u) = u32(*gptr<u32>(r8 + 8u) + 1u);
        if (!u32(r6 >= 0x10u) || u32(r6 == 0x10u)) {  // (from the original)
            if (r6 != 0) {
                *gptr<u32>(r4 + 8u) = u32(r7 + r6);
            }
        } else {
            res = *gptr<u32>(r4 + 0xcu) + 0x10u + r4 + r7;  // (from the original)
            r1 = res;
            if (res != 0) {
                r0 = 0u;
                *gptr<u32>(r1) = u32(r0);
                *gptr<u32>(r1 + 4u) = u32(r0);
                *gptr<u32>(r1 + 8u) = u32(r0);
                *gptr<u32>(r1 + 0xcu) = u32(r0);  // (from the original)
            }
            *gptr<u32>(r1 + 8u) = u32(r6 - 0x10u);  // (from the original)
            r0 = r5;
            r0 = call_0053c670(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = r4;
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053c300
GUEST_EXPORT(0x0053c300, d_0053c300::f_0053c300);

// f_0053c568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c568 {

struct __attribute__((packed)) Object_0053c568_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
};
GUEST_OFFSET(Object_0053c568_0, byte_70, 0x70);  // (from the original)

inline constexpr guest::Function<0x0053d268, u32(u32, u32, u32, u32)> call_0053d268;  // (from the original)
inline constexpr guest::Function<0x0053d284, u32(u32, u32, u32, u32)> call_0053d284;  // (from the original)
inline constexpr guest::Function<0x00748dd8, u32(u32, u32, u32, u32)> call_00748dd8;  // (from the original)

u32 f_0053c568(gptr<Object_0053c568_0> arg0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r6 = r1;
    r3 = u32(arg0->byte_70);
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_00748dd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 8u);
        r0 = *gptr<u32>(r4 + 0xcu) + 0x10u;  // (from the original)
        r2 = r1 - r6 + (r4 + r0);
        r3 = r2 & ~(r7 - 1u);
        r2 = r2 - r3 + r6;
        r1 = r1 - r2;
        if (!u32(r1 >= 0x10u) || u32(r1 == 0x10u)) {  // (from the original)
            goto L_53c610;
        }
        r1 = r1 - 0x10u;  // (from the original)
        *gptr<u32>(r4 + 8u) = u32(r1);
        res = r0 + r4 + r1;
        r4 = res;
        if (res != 0) {
            r0 = 0u;
            *gptr<u32>(r4) = u32(r0);
            *gptr<u32>(r4 + 4u) = u32(r0);
            *gptr<u32>(r4 + 8u) = u32(r0);
            *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
        }
        r5 = r5 + 0x84u;  // (from the original)
        *gptr<u32>(r4 + 8u) = u32(r2);
        r1 = *gptr<u32>(r5 + 0xcu) + r4;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0053d268(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r5 + 8u) + 1u);
        r0 = r4;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_53c610:;
    *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
    if (r1 != 0) {
        r0 = r4 + (r1 + 0x10u);  // (from the original)
        r1 = r4 + 1u;
        *gptr<u32>(r0 - 4u) = u32(r1);
    }
    *gptr<u32>(r4 + 8u) = u32(r2);
    r0 = *gptr<u32>(r5 + 0x80u) + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0053d284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r5 + 0x7cu;  // (from the original)
    r0 = *gptr<u32>(ea) - 1u;
    ea = r5 + 0x7cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r5 = ea + 8u;
    r1 = *gptr<u32>(r5 + 0xcu) + r4;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0053d268(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r5 + 8u) = u32(*gptr<u32>(r5 + 8u) + 1u);
    r0 = r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053c568
GUEST_EXPORT(0x0053c568, d_0053c568::f_0053c568);

// f_0053cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cd54 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32, u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053c7b8, u32(u32, u32, u32, u32)> call_0053c7b8;  // (from the original)
inline constexpr guest::Function<0x0053cef0, u32(u32, u32, u32, u32)> call_0053cef0;  // (from the original)

u32 f_0053cd54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r5 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = 0xae70c0u;  // (from the original)
    r6 = r1;
    r8 = r2;
    r7 = r3;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00538188(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6 + 3u & ~3u;
    if (!(u32(r1 >= 0xa4u) && !u32(r1 == 0xa4u))) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_00538274(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 0u;
        r13 = r13 + 0x28u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r5;
    if (r5 != 0) {
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 4) = u32(1u);
        *gptr<u32>(r13 + 8) = u32(r7);
        r3 = r0;
        r2 = 0u;
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0053cef0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0053c7b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00538274(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053cd54
GUEST_EXPORT(0x0053cd54, d_0053cd54::f_0053cd54);

// f_0053cef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cef0 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;  // (from the original)
inline constexpr guest::Function<0x00538274, u32(u32, u32, u32, u32)> call_00538274;  // (from the original)
inline constexpr guest::Function<0x0053b040, u32(u32, u32, u32, u32)> call_0053b040;  // (from the original)

u32 f_0053cef0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    ea = r13 + 0x18u;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r12 = *gptr<u32>(ea + 8);
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_0053b040(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = 0u;
    r4 = r0;
    *gptr<u32>(r0) = u32(0x903c8cu);  // (from the original)
    *gptr<u8>(r0 + 0x70u) = u8(r5);  // (from the original)
    r0 = r0 + 0x74u;  // (from the original)
    r1 = ~0u;
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r0) = u32(r0);
    r0 = r4 + 0x84u;  // (from the original)
    ea = r4 + 0x88u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(r4 + 0x84u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r1);  // (from the original)
    r1 = r4 + 0x50u;  // (from the original)
    res = *gptr<u32>(r4 + 0x6cu) & 1u;  // (from the original)
    r0 = res;
    if (res != 0) {
        r0 = 1u;
    }
    if (r0 != 0) {
        r5 = r1;
        r0 = r1;
        guest::cpu()->r[13] = r13;
        r0 = call_00538188(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    *gptr<u32>(r4 + 0x80u) = u32(r0);  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r0);  // (from the original)
    if (r5 != 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00538274(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053cef0
GUEST_EXPORT(0x0053cef0, d_0053cef0::f_0053cef0);

// f_0053cfe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cfe8 {

struct __attribute__((packed)) Object_0053cfe8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0053cfe8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053cfe8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0053cd54, u32(u32, u32, u32, u32)> call_0053cd54;  // (from the original)

u32 f_0053cfe8(gptr<Object_0053cfe8_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = 0x97d40cu;  // (from the original)
    r5 = r4 + 8u;
    ea = r4 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r5 + 4u;
    *gptr<u32>(ea) = u32(0u);
    r0 = arg0->word_0;
    r1 = arg0->word_4;
    *gptr<u32>(r13 + 4u) = u32(0x8b069cu);  // (from the original)
    r2 = r13;
    r3 = 0u;
    *gptr<u32>(r13) = u32(0x9039e0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0053cd54(r0, r1, r2, r3);
    r1 = 0xae70a4u;  // (from the original)
    r2 = *gptr<u32>(r1);
    if (s32(r2) < s32(*gptr<u32>(r1 + 4))) {
        *gptr<u32>(*gptr<u32>(r1 + 8u) + (r2 << 2)) = u32(r0);
        r0 = *gptr<u32>(r1) + 1u;
        *gptr<u32>(r1) = u32(r0);
    }
    *gptr<u32>(r4) = u32(r5);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053cfe8
GUEST_EXPORT(0x0053cfe8, d_0053cfe8::f_0053cfe8);

// f_0053d2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d2cc {


u32 f_0053d2cc(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0x981e90u;  // (from the original)
    if (u32(*gptr<u8>(r6)) != 0) {
        goto L_53d330;
    }
    r5 = 0xa001u;  // (from the original)
    r7 = 0xaf6bdcu;  // (from the original)
    r4 = 0u;
L_53d2ec:;
    r2 = r4;
    r12 = 4u;
    do {
L_53d2f4:;
        if ((r2 & 1u) == 0) {
            r3 = r2 >> 1;
        } else {
            r3 = r5 ^ r2 >> 1;
        }
        if ((r3 & 1u) == 0) {
            r2 = r3 >> 1;
        } else {
            r2 = r5 ^ r3 >> 1;
        }
        res = r12 - 1u;
        r12 = res;
        guest::preempt();
    } while (res != 0);
    r3 = r7 + (r4 << 1);
    r4 = r4 + 1u;
    *gptr<u16>(r3) = u16(r2);
    if (r4 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_53d2ec;
    }
    *gptr<u8>(r6) = u8(1u);
L_53d330:;
    r12 = 0xaf6bdcu;  // (from the original)
    r2 = 0u;
    if (r1 == 0) {
        goto L_53d398;
    }
    r3 = r0 - 1u;
    if ((r1 & 1u) != 0) {
        ea = r3 + 1u;
        r3 = ea;
        r2 = u32(*gptr<u16>(r12 + (u32(*gptr<u8>(ea)) << 1)));
    }
    res = r1 >> 1;
    r1 = res;
    if (res == 0) {
        goto L_53d398;
    }
    do {
L_53d360:;
        ea = r3 + 1u;
        r0 = u32(*gptr<u8>(ea));
        ea = r3 + 2u;
        r3 = ea;
        res = r1 - 1u;
        r1 = res;
        r0 = u32(*gptr<u16>(r12 + (((r0 ^ r2) & 0xffu) << 1))) ^ r2 >> 8;  // (from the original)
        r2 = u32(*gptr<u16>(r12 + (((u32(*gptr<u8>(ea)) ^ r0) & 0xffu) << 1))) ^ r0 >> 8;  // (from the original)
        guest::preempt();
    } while (res != 0);
L_53d398:;
    r0 = uxth(r2);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053d2cc
GUEST_EXPORT(0x0053d2cc, d_0053d2cc::f_0053d2cc);

// f_0053d3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d3b0 {


u32 f_0053d3b0(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0x97ea04u;  // (from the original)
    if (u32(*gptr<u8>(r6)) != 0) {
        goto L_53d410;
    }
    r5 = 0xedb88320u;  // (from the original)
    r7 = 0xaf4990u;  // (from the original)
    r12 = 0u;
L_53d3d0:;
    r2 = r12;
    r4 = 4u;
    do {
L_53d3d8:;
        if ((r2 & 1u) == 0) {
            r3 = r2 >> 1;
        } else {
            r3 = r5 ^ r2 >> 1;
        }
        if ((r3 & 1u) == 0) {
            r2 = r3 >> 1;
        } else {
            r2 = r5 ^ r3 >> 1;
        }
        res = r4 - 1u;
        r4 = res;
        guest::preempt();
    } while (res != 0);
    *gptr<u32>(r7 + (r12 << 2)) = u32(r2);
    r12 = r12 + 1u;
    if (r12 < 0x100u) {  // (from the original)
        guest::preempt();
        goto L_53d3d0;
    }
    *gptr<u8>(r6) = u8(1u);
L_53d410:;
    r3 = 0xaf4990u;  // (from the original)
    r2 = ~0u;
    if (r1 == 0) {
        goto L_53d478;
    }
    r0 = r0 - 1u;
    if ((r1 & 1u) != 0) {
        ea = r0 + 1u;
        r0 = ea;
        r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
    }
    res = r1 >> 1;
    r1 = res;
    if (res == 0) {
        goto L_53d478;
    }
    do {
L_53d448:;
        ea = r0 + 1u;
        res = r1 - 1u;
        r1 = res;
        r4 = (u32(*gptr<u8>(ea)) ^ r2) & 0xffu;  // (from the original)
        ea = r0 + 2u;
        r0 = ea;
        r2 = *gptr<u32>(r3 + (r4 << 2)) ^ r2 >> 8;
        r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
        guest::preempt();
    } while (res != 0);
L_53d478:;
    r13 = r13 + 0x10;  // (from the original)
    r0 = ~r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053d3b0
GUEST_EXPORT(0x0053d3b0, d_0053d3b0::f_0053d3b0);

// f_0053d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d490 {

struct __attribute__((packed)) Object_0053d490_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0053d490_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053d490_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053d490_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0053d490_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0053ad24, u32(u32, u32, u32, u32)> call_0053ad24;  // (from the original)
inline constexpr guest::Function<0x00749030, u32(u32, u32, u32, u32)> call_00749030;  // (from the original)

u32 f_0053d490(gptr<Object_0053d490_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    arg0->word_0 = u32(0x903d1cu);  // (from the original)
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    r0 = *gptr<u32>(0x97d40cu);  // (from the original)
    if (r0 == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r4;
    r0 = call_00749030(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r0 == 0;
    if (!zf) {
        r1 = r4;
    }
    *gptr<u32>(r4 + 4u) = u32(r0);
    if (!zf) {
        r0 = call_0053ad24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053d490
GUEST_EXPORT(0x0053d490, d_0053d490::f_0053d490);

// f_0053d530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d530 {

struct __attribute__((packed)) Object_0053d530_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0053d530_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053d530_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0053ad94, u32(u32, u32, u32, u32)> call_0053ad94;  // (from the original)

u32 f_0053d530(gptr<Object_0053d530_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x97ea00u;  // (from the original)
    arg0->word_0 = u32(0x903d1cu);  // (from the original)
    r0 = arg0->word_4;
    r1 = *gptr<u32>(r5);
    if (r0 != r1) {
        if (r0 != 0) {
            r1 = r4;
            r0 = call_0053ad94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r5));
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053d530
GUEST_EXPORT(0x0053d530, d_0053d530::f_0053d530);

// f_0053d66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d66c {

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> call_00139504;  // (from the original)
inline constexpr guest::Function<0x0013a37c, u32(u32, u32, u32, u32)> call_0013a37c;  // (from the original)
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32, u32, u32)> call_0053ac4c;  // (from the original)
inline constexpr guest::Function<0x0053bc7c, u32(u32, u32, u32, u32)> call_0053bc7c;  // (from the original)

u32 f_0053d66c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r4 = r1;
    r7 = 0x974f6cu;  // (from the original)
    r1 = *gptr<u32>(0x8b06a8u);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00139504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 >> 0x1f;  // (from the original)
    r1 = res;
    if (res != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0012f204(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r6 = *gptr<u32>(r13);
    r1 = r4;
    r0 = 0x88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0053ac4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r1 = r4;
        r2 = r7;
        r3 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_0053bc7c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r0) = u32(0x903908u);  // (from the original)
    }
    r1 = r0;
    ea = r5 + 0x20u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r0 = r5 + 0x24u;  // (from the original)
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r3 = *gptr<u32>(ea);
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r14 = *gptr<u32>(ea + 0x14);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    return call_0013a37c(r0, r1, r2, r3);
}

}  // namespace d_0053d66c
GUEST_EXPORT(0x0053d66c, d_0053d66c::f_0053d66c);

// f_0053d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d7c8 {

struct __attribute__((packed)) Object_0053d7c8_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_0053d7c8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053d7c8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0053d7c8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0053d7c8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0053d7c8_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0013a38c, u32(u32, u32, u32, u32)> call_0013a38c;  // (from the original)

u32 f_0053d7c8(gptr<Object_0053d7c8_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r3 = r0 + 0x18u;  // (from the original)
    arg0->word_0 = u32(0x903d3cu);  // (from the original)
    r1 = r0 + 0x14u;  // (from the original)
    r2 = 0u;
    arg0->word_18 = u32(r1);
    arg0->word_1c = u32(r2);
    ea = r0 + 0x14u;  // (from the original)
    arg0->word_14 = u32(r1);
    ea = ea + 0xcu;  // (from the original)
    arg0->word_20 = u32(r2);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0013a38c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x24u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053d7c8
GUEST_EXPORT(0x0053d7c8, d_0053d7c8::f_0053d7c8);

// f_0053df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053df24 {

inline constexpr guest::Function<0x00543c54, u32(u32, u32, u32, u32)> call_00543c54;  // (from the original)

u32 f_0053df24(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    *gptr<u32>(r13) = u32(0xfu);  // (from the original)
    r3 = 0x18u;  // (from the original)
    r2 = 0x14u;  // (from the original)
    r1 = 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00543c54(r0, r1, r2, r3);
    r2 = 0u;
    ea = r0;
    *gptr<u32>(ea) = u32(0x903d64u);  // (from the original)
    ea = r0 + 0x134u;  // (from the original)
    *gptr<u8>(ea) = u8(r2);
    r1 = r0 + 0x13cu;  // (from the original)
    ea = r0 + 0x138u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    ea = r0 + 0x140u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    ea = r0 + 0x13cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r1 = r0 + 0x14cu;  // (from the original)
    ea = r0 + 0x150u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(r0 + 0x14cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x148u) = u32(4u);  // (from the original)
    r1 = 0x14cu;  // (from the original)
    *gptr<u32>(r0 + 0x158u) = u32(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053df24
GUEST_EXPORT(0x0053df24, d_0053df24::f_0053df24);

// f_0053dfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dfa0 {

struct __attribute__((packed)) Object_0053dfa0_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dfa0_0, byte_4c, 0x4c);  // (from the original)


u32 f_0053dfa0(gptr<Object_0053dfa0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 zf = 0;
    zf = u32(arg0->byte_4c) == 0;
    if (!zf) {
        zf = r2 == 0;
    }
    if (!zf) {
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
        return r0;
    }
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x4cu);  // (from the original)
    return guest::call_address<u32>(r3, r0, r1, r2, r3);
}

}  // namespace d_0053dfa0
GUEST_EXPORT(0x0053dfa0, d_0053dfa0::f_0053dfa0);

// f_0053dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dffc {

struct __attribute__((packed)) Object_0053dffc_0 {
    u8 unknown_0[0x4c];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dffc_0, byte_4c, 0x4c);  // (from the original)


u32 f_0053dffc(gptr<Object_0053dffc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 zf = 0;
    zf = u32(arg0->byte_4c) == 0;
    if (!zf) {
        zf = r1 == 0;
    }
    if (zf) {
        r0 = 0u;
        return r0;
    }
    r3 = *gptr<u32>(*gptr<u32>(r0) + 0x50u);  // (from the original)
    return guest::call_address<u32>(r3, r0, r1, guest::cpu()->r[2], r3);
}

}  // namespace d_0053dffc
GUEST_EXPORT(0x0053dffc, d_0053dffc::f_0053dffc);

// f_0053e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e23c {

struct __attribute__((packed)) Object_0053e23c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 byte_1c;
    u8 byte_1d;
    u8 unknown_1e[0x2];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(Object_0053e23c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0053e23c_0, byte_28, 0x28);  // (from the original)


void f_0053e23c(gptr<Object_0053e23c_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 1u;
    arg0->word_0 = u32(0x9047f8u);  // (from the original)
    arg0->word_4 = u32(0x8c9f1cu);  // (from the original)
    r1 = 0u;
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->byte_1c = u8(r2);
    arg0->byte_1d = u8(r2);
    arg0->word_20 = u32(r1);
    arg0->word_24 = u32(r1);
    arg0->byte_28 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0053e23c
GUEST_EXPORT(0x0053e23c, d_0053e23c::f_0053e23c);

// f_0053e958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e958 {

struct __attribute__((packed)) Object_0053e958_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0053e958_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013efb4, u32(u32, u32, u32, u32)> call_0013efb4;  // (from the original)
inline constexpr guest::Function<0x005423b8, u32(u32, u32, u32, u32)> call_005423b8;  // (from the original)

u32 f_0053e958(gptr<Object_0053e958_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    arg0->word_0 = u32(0x903d90u);  // (from the original)
    r0 = *gptr<u32>(0x9752e0u);  // (from the original)
    if (r0 != 0) {
        r1 = r4;
        r0 = call_005423b8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0013efb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053e958
GUEST_EXPORT(0x0053e958, d_0053e958::f_0053e958);

// f_0053e990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e990 {

struct __attribute__((packed)) Object_0053e990_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0053e990_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013ef38, u32(u32, u32, u32, u32)> call_0013ef38;  // (from the original)

u32 f_0053e990(gptr<Object_0053e990_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_8;
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r0;
    r0 = r2;
    return call_0013ef38(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0053e990
GUEST_EXPORT(0x0053e990, d_0053e990::f_0053e990);

// f_0053e9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e9b0 {

struct __attribute__((packed)) Object_0053e9b0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0053e9b0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;  // (from the original)

u32 f_0053e9b0(gptr<Object_0053e9b0_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r12 = arg0->word_4;
    if (r12 == 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r3);
    r3 = r2;
    r2 = r0;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_0053e71c(r0, guest::cpu()->r[1], r2, r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0053e9b0
GUEST_EXPORT(0x0053e9b0, d_0053e9b0::f_0053e9b0);

// f_0053f59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f59c {

inline constexpr guest::Function<0x001210d4, u32(u32, u32, u32, u32)> call_001210d4;  // (from the original)

u32 f_0053f59c() {
    u32 r0 = 0;
    r0 = 0xaf52e8u;  // (from the original)
    return call_001210d4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053f59c
GUEST_EXPORT(0x0053f59c, d_0053f59c::f_0053f59c);

// f_0053f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f608 {

struct __attribute__((packed)) Object_0053f608_0 {
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
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053f608_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0053f608_0, byte_4c, 0x4c);  // (from the original)


void f_0053f608(gptr<Object_0053f608_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(0x903ea0u);  // (from the original)
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    r2 = *gptr<u32>(0x981d70u);  // (from the original)
    S1 = std::bit_cast<float>(*gptr<u32>(0x53f694u));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x53f698u));  // (from the original)
    if (r2 == 0) {
        r2 = *gptr<u32>(0x981eb8u);  // (from the original)
    }
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(std::bit_cast<u32>(S1));
    arg0->word_18 = u32(std::bit_cast<u32>(S1));
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S0));
    arg0->word_24 = u32(std::bit_cast<u32>(S0));
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    arg0->word_2c = u32(std::bit_cast<u32>(S0));
    arg0->word_30 = u32(std::bit_cast<u32>(S0));
    arg0->word_34 = u32(std::bit_cast<u32>(S1));
    S0 = std::bit_cast<float>(*gptr<u32>(0x53f69cu));  // (from the original)
    arg0->word_38 = u32(std::bit_cast<u32>(S1));
    arg0->word_3c = u32(r1);
    arg0->word_40 = u32(std::bit_cast<u32>(S0));
    arg0->word_44 = u32(r1);
    arg0->word_48 = u32(r1);
    arg0->byte_4c = u8(1u);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0053f608
GUEST_EXPORT(0x0053f608, d_0053f608::f_0053f608);

// f_0053f6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f6c4 {


u32 f_0053f6c4(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = 0x33333333u;  // (from the original)
    r0 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    r2 = r0 & r1;
    r0 = r1 & r0 >> 2;
    r1 = 0xf0f0f0fu;  // (from the original)
    r0 = r0 + r2;
    r0 = r0 + (r0 >> 4) & r1;
    r0 = r0 + (r0 >> 8);
    r0 = r0 + (r0 >> 0x10) & 0x3fu;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0053f6c4
GUEST_EXPORT(0x0053f6c4, d_0053f6c4::f_0053f6c4);

// f_0053f730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f730 {

struct __attribute__((packed)) Object_0053f730_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0053f730_0, word_0, 0x0);  // (from the original)


void f_0053f730(gptr<Object_0053f730_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x975320u;  // (from the original)
    arg0->word_0 = u32(0x903edcu);  // (from the original)
    if (r0 == *gptr<u32>(r1)) {
        *gptr<u32>(r1) = u32(0u);
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_0053f730
GUEST_EXPORT(0x0053f730, d_0053f730::f_0053f730);

// f_0053fda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053fda8 {

struct __attribute__((packed)) Object_0053fda8_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u32 word_44;
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
};
GUEST_OFFSET(Object_0053fda8_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_0053fda8_0, word_54, 0x54);  // (from the original)

struct __attribute__((packed)) Object_0053fda8_1 {
    u8 unknown_0[0x94];  // (not used here)
    u32 word_94;
    u8 unknown_98[0x4];  // (not used here)
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
};
GUEST_OFFSET(Object_0053fda8_1, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0053fda8_1, word_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x0014f4ec, u32(u32, u32, u32, u32)> call_0014f4ec;  // (from the original)

u32 f_0053fda8(gptr<Object_0053fda8_0> arg0, gptr<Object_0053fda8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    float S0 = 0;
    float S1 = 0;
    float S2 = 0;
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S6 = 0;
    S2 = std::bit_cast<float>(arg1->word_9c) + std::bit_cast<float>(arg1->word_a0);
    S3 = std::bit_cast<float>(*gptr<u32>(0x53fe2cu));  // (from the original)
    S1 = std::bit_cast<float>(arg1->word_a4) + std::bit_cast<float>(arg1->word_a8);
    r2 = r0 + 0x34u;  // (from the original)
    arg0->word_3c = u32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_94)));
    arg0->word_34 = u32(std::bit_cast<u32>(S1 * S3));
    arg0->word_38 = u32(std::bit_cast<u32>(S2 * S3));
    S6 = std::bit_cast<float>(arg1->word_a8);
    S1 = std::bit_cast<float>(*gptr<u32>(0x53fe30u));  // (from the original)
    S4 = std::bit_cast<float>(arg1->word_9c) + std::bit_cast<float>(arg1->word_a0);
    S5 = std::bit_cast<float>(arg1->word_94);
    S2 = (std::bit_cast<float>(arg1->word_a4) + S6) * S3;
    S3 = S4 * S3;
    arg0->word_48 = u32(std::bit_cast<u32>(S5 - S1));
    S0 = std::bit_cast<float>(*gptr<u32>(0x53fe34u));  // (from the original)
    arg0->word_40 = u32(std::bit_cast<u32>(S2));
    arg0->word_44 = u32(std::bit_cast<u32>(S3));
    r1 = r0 + 0x4cu;  // (from the original)
    arg0->word_4c = u32(std::bit_cast<u32>(S0));
    arg0->word_50 = u32(std::bit_cast<u32>(S1));
    arg0->word_54 = u32(std::bit_cast<u32>(S0));
    r0 = r0 + 0x4cu;  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    return call_0014f4ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0053fda8
GUEST_EXPORT(0x0053fda8, d_0053fda8::f_0053fda8);
