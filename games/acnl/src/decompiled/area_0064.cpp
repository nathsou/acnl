// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "player/slot_object.hpp"

#include <bit>

using guest::gptr;

// f_006401f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006401f4 {

inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x00713aa8, u32(u32, u32, u32, u32)> call_00713aa8;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32, u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0076e014, u32(u32, u32, u32, u32)> call_0076e014;  // (from the original)
inline constexpr guest::Function<0x008273c8, u32(u32, u32, u32, u32)> call_008273c8;  // (from the original)

u32 f_006401f4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x90u;  // (from the original)
    r9 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00713aa8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r10 = r0;
    if (r0 == 0) {
        goto L_640330;
    }
    r4 = 0x9047f8u;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(0x640538u);  // (from the original)
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x28u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x3cu) = u32(0x640548u);  // (from the original)
    r1 = r13 + 0x38u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x38u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x4cu) = u32(0x640554u);  // (from the original)
    r1 = r13 + 0x48u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x48u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x14u) = u32(0x640560u);  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x1cu) = u32(0x640570u);  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x18u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6402b4;
    }
L_6402b0:;
    r0 = 1u;
L_6402b4:;
    if (r0 != 0) {
        goto L_640330;
    }
    *gptr<u8>(r9 + 0x2d1u) = u8(u32(*gptr<u8>(r9 + 0x2d1u)) | 0x20u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(0x640580u);  // (from the original)
    r5 = r9 + 0x2d1u;  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x18u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        *gptr<u32>(r13 + 0x14u) = u32(0x64058cu);  // (from the original)
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r10;
        *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_64031c;
        }
    }
    r0 = 1u;
L_64031c:;
    if (r0 == 0) {
        goto L_640338;
    } else {
        r0 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
    }
L_64032c:;
    *gptr<u8>(r5) = u8(r0);
L_640330:;
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_640338:;
    *gptr<u32>(r13 + 0x34u) = u32(0x640594u);  // (from the original)
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x30u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        *gptr<u32>(r13 + 0x44u) = u32(0x6405a0u);  // (from the original)
        r1 = r13 + 0x40u;  // (from the original)
        r0 = r10;
        *gptr<u32>(r13 + 0x40u) = u32(r4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_640384;
        }
    }
    r0 = 1u;
L_640384:;
    if (r0 != 0) {
        r0 = u32(*gptr<u8>(r5)) | 0x40u;  // (from the original)
        guest::preempt();
        goto L_64032c;
    }
    *gptr<u32>(r13 + 0x54u) = u32(0x6405acu);  // (from the original)
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x50u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 0) {
        *gptr<u32>(r13 + 0x5cu) = u32(0x6405bcu);  // (from the original)
        r1 = r13 + 0x58u;  // (from the original)
        r0 = r10;
        *gptr<u32>(r13 + 0x58u) = u32(r4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0 == 0) {
            goto L_6403e0;
        }
    }
    r0 = 1u;
L_6403e0:;
    if (r0 == 0) {
        goto L_6403fc;
    }
L_6403e8:;
    r1 = u32(*gptr<u8>(r5)) & ~0x20u;  // (from the original)
    r0 = r1 | 0x40u;  // (from the original)
    *gptr<u8>(r5) = u8(r1);
    guest::preempt();
    goto L_64032c;
L_6403fc:;
    *gptr<u32>(r13 + 0x24u) = u32(0x6405c4u);  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x20u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_6404bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_640330;
    }
    r0 = r0 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a7ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r6 = r0;
    r1 = 0x28b1u;  // (from the original)
    r4 = 0u;
    r0 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe574(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r1 = 0x28b2u;  // (from the original)
        r0 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r4 = 1u;
        r1 = r13 + 0xcu;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fe574(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r6 = 0u;
            goto L_640490;
        }
    }
    r6 = 1u;
L_640490:;
    r0 = r13 + 0x60u;  // (from the original)
    if (r6 != 0) {
        guest::preempt();
        goto L_6403e8;
    }
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_6404bc:;
    *gptr<u32>(r13 + 0x64u) = u32(0x6405dcu);  // (from the original)
    r1 = r13 + 0x60u;  // (from the original)
    r0 = r10;
    *gptr<u32>(r13 + 0x60u) = u32(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r13 + 0x6cu) = u32(0x6405e8u);  // (from the original)
        r1 = r13 + 0x68u;  // (from the original)
        r0 = r10;
        *gptr<u32>(r13 + 0x68u) = u32(r4);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_008273c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r0 = 1u;
            goto L_640508;
        }
    }
    r0 = 0u;
L_640508:;
    if (r0 == 0) {
        guest::preempt();
        goto L_640330;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_640330;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0076e014(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_6403e8;
    }
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006401f4
GUEST_EXPORT(0x006401f4, d_006401f4::f_006401f4);

// f_006405f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006405f4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0031917c, u32(u32, u32, u32, u32)> call_0031917c;  // (from the original)
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32, u32, u32)> call_0071dcdc;  // (from the original)
inline constexpr guest::Function<0x00756120, u32(u32, u32, u32, u32)> call_00756120;  // (from the original)
inline constexpr guest::Function<0x00758dd4, u32(u32, u32, u32, u32)> call_00758dd4;  // (from the original)

u32 f_006405f4(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r7 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r0 + 0x406ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0031917c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r6 = *gptr<u32>(0xaaf14cu);  // (from the original)
    r1 = r7;
    if (r7 + 1u == 0) {
        r1 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_00756120(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r0;
    }
    ea = r4 + 0x270u;  // (from the original)
    *gptr<u8>(ea) = u8(r5);
    r4 = ea;
    r5 = 0u;
    *gptr<u8>(r4 + 1u) = u8(r1);
    if (r1 + 1u == 0) {
        goto L_64069c;
    }
    r0 = r6 + 0x7008u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071dcdc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    if (r0 == 0) {
        goto L_64069c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00758dd4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 2u) {
        goto L_64069c;
    }
    r5 = 1u;
    r0 = r6 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r5 = 2u;
    }
L_64069c:;
    *gptr<u8>(r4 + 2u) = u8(r5);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_006405f4
GUEST_EXPORT(0x006405f4, d_006405f4::f_006405f4);

// f_00641f88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00641f88 {

struct __attribute__((packed)) Object_00641f88_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00641f88_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;  // (from the original)

u32 f_00641f88(gptr<Object_00641f88_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r1;
    r5 = *gptr<u32>(0x95debcu);  // (from the original)
    r0 = arg0->word_4;
    r1 = *gptr<u32>(0xa83af0u);  // (from the original)
    zf = r1 == 0;
    cf = r1 >= 0u;
    if (!zf) {
        r2 = 0x18fu;  // (from the original)
        zf = r2 == r4;
        cf = r2 >= r4;
    }
    if (!cf || zf) {
        goto L_6420a0;
    }
    r2 = r4 + (r4 << 4);
    res = r1 + (r2 << 1);
    zf = res == 0;
    r4 = res;
    if (!zf) {
        zf = r5 == 0;
    }
    if (zf) {
        goto L_6420a0;
    }
    if (r0 == 0) {
        goto L_6420a0;
    }
    r0 = *gptr<u32>(r0 + 0x354u);  // (from the original)
    r6 = r0;
    if (r0 == 0) {
        goto L_6420a0;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005fcfd8(r0, r1, r2, r3);
    r7 = 0u;
    r3 = r4 + 0x10u;  // (from the original)
    r2 = 0x6420b4u;  // (from the original)
    r1 = r13;
    r0 = r5;
    *gptr<u8>(r4 + 0x13u) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xcu;  // (from the original)
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r3 = r4 + 0x18u;  // (from the original)
    r2 = 0x6420c4u;  // (from the original)
    r1 = r13;
    r0 = r5;
    *gptr<u8>(r4 + 0x1bu) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xau;  // (from the original)
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r3 = r4 + 0x14u;  // (from the original)
    r2 = 0x6420d4u;  // (from the original)
    r1 = r13;
    r0 = r5;
    *gptr<u8>(r4 + 0x17u) = u8(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0075c348(r0, r1, r2, r3);
    r3 = 0u;
    r2 = 0xbu;  // (from the original)
    r1 = r13;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005f11b4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0u;
    r1 = u32(*gptr<u8>(r4 + 0x1du)) >> 4;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00300914(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = u32(s32(s8(*gptr<u8>(r4 + 3u))));
    r2 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00300924(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
L_6420a0:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00641f88
GUEST_EXPORT(0x00641f88, d_00641f88::f_00641f88);

// f_006483f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006483f4 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x002fe4c0, u32(u32, u32, u32, u32)> call_002fe4c0;  // (from the original)
inline constexpr guest::Function<0x0030031c, u32(u32, u32, u32, u32)> call_0030031c;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> call_00301df4;  // (from the original)
inline constexpr guest::Function<0x0051ccc0, u32(u32, u32, u32, u32)> call_0051ccc0;  // (from the original)
inline constexpr guest::Function<0x00632acc, u32(u32, u32, u32, u32)> call_00632acc;  // (from the original)
inline constexpr guest::Function<0x00761c48, u32(u32, u32, u32, u32)> call_00761c48;  // (from the original)
inline constexpr guest::Function<0x008273c8, u32(u32, u32, u32, u32)> call_008273c8;  // (from the original)

u32 f_006483f4(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x50u;  // (from the original)
    r7 = r0;
    r4 = r1;
    r9 = r2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r0 = 0x841be4u;  // (from the original)
    } else {
        r0 = 0x841c08u;  // (from the original)
    }
    r8 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(r0));
    S1 = std::bit_cast<float>(*gptr<u32>(r0 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r0 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r0 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r0 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r0 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r0 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r0 + 0x1c));  // (from the original)
    *gptr<u32>(r4) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r4 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r4 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r4 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r4 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r4 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r4 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r4 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(*gptr<u32>(r0 + 0x20u));  // (from the original)
    r0 = *gptr<u32>(r7 + 0xf0u);  // (from the original)
    if (r0 == 0) {
        goto L_648470;
    }
    r6 = *gptr<u32>(r0 + 0x1028u);  // (from the original)
    if (r6 == 0) {
        goto L_648470;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00632acc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r5 = r0;
    if (r0 == 0) {
        goto L_64849c;
    }
    r1 = 1u;
    r0 = r5 + 0xeau;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_0030031c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 == 0) {
        goto L_64847c;
    }
    goto L_64849c;
L_648470:;
    r0 = 0u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_64847c:;
    r3 = r5;
    r2 = r6;
    r1 = r9;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00761c48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        goto L_6484a0;
    }
L_64849c:;
    *gptr<u32>(r4 + 8u) = u32(r8);
L_6484a0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r1 = 0u;
    r0 = r0 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_00301df4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r7 = 0x6214fu;  // (from the original)
    r0 = u32(*gptr<u8>(r0 + 0x80u + r7));  // (from the original)
    r1 = r0 << 0x1e;  // (from the original)
    nf = r1 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r1 = r0 << 0x1d;  // (from the original)
        nf = r1 >> 0x1f;  // (from the original)
        vf = 0u;
    }
    if (nf != vf) {
        goto L_648518;
    }
    r1 = r0 << 0x1c;  // (from the original)
    nf = r1 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r0 = r0 << 0x1b;  // (from the original)
        nf = r0 >> 0x1f;  // (from the original)
        vf = 0u;
    }
    if (nf != vf) {
        goto L_648518;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r1 = 4u;
    if (r1 != u32(*gptr<u8>(r0 + 0x80u + r7 + 4u)) << 0x19 >> 0x1d) {  // (from the original)
        r0 = 1u;
        goto L_64851c;
    }
L_648518:;
    r0 = 0u;
L_64851c:;
    if ((r0 - 1u & r5) != 0) {
        r5 = r5 + 0x570eu;  // (from the original)
        if ((u32(*gptr<u8>(r5)) & 1u) != 0) {
            goto L_648540;
        }
    }
    *gptr<u32>(r4 + 0x18u) = u32(r8);  // (from the original)
L_648540:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_002fe4c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_0051ccc0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r5 = 0x9047f8u;  // (from the original)
    r6 = r0;
    *gptr<u32>(r13 + 4u) = u32(0x648648u);  // (from the original)
    r1 = r13;
    r0 = r6;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 == 0) {
        goto L_648630;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x648654u);  // (from the original)
    r1 = r13 + 8u;
    r0 = r6;
    *gptr<u32>(r13 + 8u) = u32(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0xcu) = u32(r8);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x14u) = u32(0x64865cu);  // (from the original)
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r6;
    *gptr<u32>(r13 + 0x10u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x14u) = u32(r8);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x1cu) = u32(0x648664u);  // (from the original)
    r1 = r13 + 0x18u;  // (from the original)
    r0 = r6;
    *gptr<u32>(r13 + 0x18u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x18u) = u32(r8);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x24u) = u32(0x648670u);  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    r0 = r6;
    *gptr<u32>(r13 + 0x20u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x20u) = u32(r8);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x2cu) = u32(0x648678u);  // (from the original)
    r1 = r13 + 0x28u;  // (from the original)
    r0 = r6;
    *gptr<u32>(r13 + 0x28u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_008273c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    if (r0 != 0) {
        *gptr<u32>(r4 + 0x1cu) = u32(r8);  // (from the original)
    }
L_648630:;
    r0 = 1u;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_006483f4
GUEST_EXPORT(0x006483f4, d_006483f4::f_006483f4);

// f_0064bed4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064bed4 {

inline constexpr guest::Function<0x00112714, u32(u32, u32, u32, u32)> call_00112714;  // (from the original)
inline constexpr guest::Function<0x00114375, u32(u32, u32, u32, u32)> call_00114374;  // (from the original)
inline constexpr guest::Function<0x005dc9d4, u32(u32, u32, u32, u32)> call_005dc9d4;  // (from the original)
inline constexpr guest::Function<0x00632acc, u32(u32, u32, u32, u32)> call_00632acc;  // (from the original)

u32 f_0064bed4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r3;
    r0 = r0 + 0x7cu;  // (from the original)
    r0 = call_005dc9d4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_00632acc(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r5;
        r0 = r0 + 0x62u;  // (from the original)
        r0 = call_00114374(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    zf = r6 == 0;
    if (!zf) {
        r0 = *gptr<u32>(r4 + 0xf0u);  // (from the original)
        zf = r0 == 0;
    }
    if (zf) {
        goto L_64bf34;
    }
    r0 = *gptr<u32>(r0 + 0x1028u);  // (from the original)
    if (r0 == 0) {
        goto L_64bf34;
    }
    r1 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00112714(r0, r1, guest::cpu()->r[2], r3);
L_64bf34:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064bed4
GUEST_EXPORT(0x0064bed4, d_0064bed4::f_0064bed4);

// f_0064c130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c130 {

struct __attribute__((packed)) Object_0064c130_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064c130_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;  // (from the original)

u32 f_0064c130(gptr<Object_0064c130_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r1 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r1 == 0) {
        goto L_64c178;
    }
    res = u32(*gptr<u8>(r1 + 0x570eu)) << 0x19;  // (from the original)
    r1 = res;
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_64c178;
    }
    r1 = *gptr<u32>(arg0->word_f0 + 0x102cu);  // (from the original)
    if (r1 == 0) {
        goto L_64c178;
    }
    ea = r1 + 0x1eu;  // (from the original)
    r1 = ea;
    r2 = u32(*gptr<u8>(ea)) | 0x10u;  // (from the original)
    *gptr<u8>(r1) = u8(r2);
L_64c178:;
    r0 = *gptr<u32>(r0 + 0xf0u) + 0x1000u;  // (from the original)
    r4 = *gptr<u32>(r0 + 0x2cu);  // (from the original)
    if (r4 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = r4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00318944(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 < 2u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r3 = 0u;
    r0 = r4 + 0x28u;  // (from the original)
    r13 = r13 + 8;
    r2 = r3;
    r1 = r3;
    guest::cpu()->r[13] = r13;
    return call_0051ddb8(r0, r1, r2, r3);
}

}  // namespace d_0064c130
GUEST_EXPORT(0x0064c130, d_0064c130::f_0064c130);

// f_0064d78c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064d78c {

struct __attribute__((packed)) Object_0064d78c_0 {
    u8 unknown_0[0x1a9];  // (not used here)
    u8 byte_1a9;
    u8 unknown_1aa[0x436];  // (not used here)
    u16 half_5e0;
};
GUEST_OFFSET(Object_0064d78c_0, byte_1a9, 0x1a9);  // (from the original)
GUEST_OFFSET(Object_0064d78c_0, half_5e0, 0x5e0);  // (from the original)

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x003117bc, u32(u32, u32, u32, u32)> call_003117bc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)
inline constexpr guest::Function<0x0070e594, u32(u32, u32, u32, u32)> call_0070e594;  // (from the original)
inline constexpr guest::Function<0x0071a7ec, u32(u32, u32, u32, u32)> call_0071a7ec;  // (from the original)
inline constexpr guest::Function<0x0071a820, u32(u32, u32, u32, u32)> call_0071a820;  // (from the original)
inline constexpr guest::Function<0x0076c440, u32(u32, u32, u32, u32)> call_0076c440;  // (from the original)

u32 f_0064d78c(gptr<Object_0064d78c_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = u32(arg0->byte_1a9);
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 == 0) {
        goto L_64d7cc;
    }
    r6 = 0u;
    r0 = u32(arg0->half_5e0);
    if (r0 == 0) {
        goto L_64d7d4;
    }
    r1 = r4 + 0x5e0u;  // (from the original)
    if (r0 >= 1u) {
        r0 = r0 - 1u;
        arg0->half_5e0 = u16(r0);
    } else {
        arg0->half_5e0 = u16(r6);
    }
L_64d7cc:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64d7d4:;
    r1 = 0x384u;  // (from the original)
    *gptr<u16>(0x5e0u + r4) = u16(r1);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_64d7cc;
    }
    res = u32(*gptr<u8>(0x570bu + r5)) << 0x1e;  // (from the original)
    r0 = res;
    if (res >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_64d7cc;
    }
    res = u32(*gptr<u8>(r4 + 0x172u)) << 0x1e >> 0x1f;  // (from the original)
    if (res == 0) {
        r0 = r4 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0070e594(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    } else {
        r0 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003117bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 8u) {
        guest::preempt();
        goto L_64d7cc;
    }
    r0 = r4 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a7ec(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        if (u32(*gptr<u8>(r0 + 0x1cu)) & 0x40u) {  // (from the original)
            goto L_64d880;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0076c440(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_64d890;
    }
L_64d880:;
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64d890:;
    r0 = r4 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071a820(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005361a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        res = u32(*gptr<u8>(r0 + 0x1cu)) << 0x19;  // (from the original)
        r0 = res;
        if (res >> 0x1f) {  // (from the original)
            goto L_64d98c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0062f03c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        goto L_64d98c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0062f03c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    zf = r0 == 5u;
    if (!zf) {
        zf = r0 == 6u;
    }
    if (zf) {
        goto L_64d98c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    r0 = u32(s32(s8(*gptr<u8>(r0 + 7u)))) - 0xau;  // (from the original)
    if (r0 >= 7u) {
        goto L_64d98c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = 0x40000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        goto L_64d95c;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 4u))));
    if (r0 != 7u) {
        if (r0 == 8u) {
            goto L_64d95c;
        }
        if (r0 != 9u) {
            goto L_64d98c;
        }
    } else {
        if (s32(u32(s32(s8(*gptr<u8>(r4 + 5u))))) < s32(0x10u)) {  // (from the original)
            goto L_64d98c;
        }
        goto L_64d95c;
    }
    r0 = u32(s32(s8(*gptr<u8>(r4 + 5u))));
    res = r0 - 0xfu;  // (from the original)
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ 0xfu) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_64d98c;
    }
L_64d95c:;
    r0 = 0xaaef30u;  // (from the original)
    r1 = u32(*gptr<u16>(r0));
    if (r1 == 0) {
        goto L_64d9a8;
    }
    if (r1 < 0x384u) {  // (from the original)
        *gptr<u16>(r0) = u16(r6);
        goto L_64d9a8;
    }
    res = r1 - 0x384u << 0x10 >> 0x10;  // (from the original)
    r1 = res;
    *gptr<u16>(r0) = u16(r1);
    if (res == 0) {
        goto L_64d9a8;
    }
L_64d98c:;
    r0 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64d9a8:;
    r1 = r5 + 0x5700u;  // (from the original)
    *gptr<u8>(r1 + 0xbu) = u8(u32(*gptr<u8>(r1 + 0xbu)) | 2u);  // (from the original)
    r1 = 0x6978u;  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    guest::preempt();
    goto L_64d98c;
}

}  // namespace d_0064d78c
GUEST_EXPORT(0x0064d78c, d_0064d78c::f_0064d78c);

// f_0064dd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd60 {


u32 f_0064dd60() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r0 != 0) {
        r0 = u32(*gptr<u8>(r0 + 0x1du));  // (from the original)
    }
    return r0;
}

}  // namespace d_0064dd60
GUEST_EXPORT(0x0064dd60, d_0064dd60::f_0064dd60);

// f_0064dd78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd78 {

struct __attribute__((packed)) Object_0064dd78_0 {
    u8 unknown_0[0x171];  // (not used here)
    u8 byte_171;
    u8 unknown_172[0x7];  // (not used here)
    u8 byte_179;
};
GUEST_OFFSET(Object_0064dd78_0, byte_171, 0x171);  // (from the original)
GUEST_OFFSET(Object_0064dd78_0, byte_179, 0x179);  // (from the original)

inline constexpr guest::Function<0x0058a1d8, u32(u32, u32, u32, u32)> call_0058a1d8;  // (from the original)
inline constexpr guest::Function<0x0058a8e0, u32(u32, u32, u32, u32)> call_0058a8e0;  // (from the original)
inline constexpr guest::Function<0x0058c19c, u32(u32, u32, u32, u32)> call_0058c19c;  // (from the original)

u32 f_0064dd78(gptr<Object_0064dd78_0> arg0, u32 r1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r0 + 0x171u;  // (from the original)
    res = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0 = res;
    if (res == 0) {
        goto L_64dde8;
    }
    r6 = 1u;
    if (r1 != 0) {
        r1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1);
        r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = 5u;
        r0 = call_0058a8e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = u32(*gptr<u8>(r4 + 8u));
    res = r0 << 0x1c >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        r0 = r0 | 8u;
        *gptr<u8>(r4 + 8u) = u8(r0);
    } else {
        goto L_64dde4;
    }
    r0 = call_0058c19c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_0058a1d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_64dde4:;
    *gptr<u8>(r5 + 0x170u) = u8(r6);  // (from the original)
L_64dde8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064dd78
GUEST_EXPORT(0x0064dd78, d_0064dd78::f_0064dd78);

// f_0064de10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064de10 {

struct __attribute__((packed)) Object_0064de10_0 {
    u8 unknown_0[0x174];  // (not used here)
    u8 byte_174;
};
GUEST_OFFSET(Object_0064de10_0, byte_174, 0x174);  // (from the original)

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x00596ab0, u32(u32, u32, u32, u32)> call_00596ab0;  // (from the original)
inline constexpr guest::Function<0x00650140, u32(u32, u32, u32, u32)> call_00650140;  // (from the original)
inline constexpr guest::Function<0x0068dc14, u32(u32, u32, u32, u32)> call_0068dc14;  // (from the original)
inline constexpr guest::Function<0x006ba118, u32(u32, u32, u32, u32)> call_006ba118;  // (from the original)

u32 f_0064de10(gptr<Object_0064de10_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5 = r0;
    r4 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r7 = 0x1000555u;  // (from the original)
    r12 = r1;
    r1 = r2;
    r2 = r3;
    if ((u32(arg0->byte_174) & 1u) == 0) {
        goto L_64de54;
    }
    r2 = 0u;
    r1 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0068dc14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_64de4c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64de54:;
    r0 = r12;
    guest::cpu()->r[13] = r13;
    r0 = call_00650140(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    if (r0 == 0) {
        guest::preempt();
        goto L_64de4c;
    }
    r1 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00596ab0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xccu;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0x1000616u;  // (from the original)
    if (r0 == 0) {
        r1 = 0xc9u;  // (from the original)
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_64decc;
        }
    }
    r2 = 0u;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0068dc14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_64df50;
L_64decc:;
    if (r4 != 0) {
        r1 = 0x1000654u;  // (from the original)
        r2 = 0u;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_0068dc14(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_64df50;
    }
    r1 = r13;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006ba118(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r4 == 0x3fu) {  // (from the original)
        goto L_64df60;
    }
    zf = r4 == 0x3eu;  // (from the original)
    if (!zf) {
        zf = r0 == 0x40u;  // (from the original)
    }
    if (zf) {
        goto L_64df60;
    }
    r2 = 0u;
    r1 = r7;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0068dc14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_64df48:;
L_64df50:;
    r0 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64df60:;
    r2 = 0u;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0068dc14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_64df48;
}

}  // namespace d_0064de10
GUEST_EXPORT(0x0064de10, d_0064de10::f_0064de10);

// f_0064ee94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064ee94 {

inline constexpr guest::Function<0x005d43f4, u32(u32, u32, u32, u32)> call_005d43f4;  // (from the original)
inline constexpr guest::Function<0x006c5c60, u32(u32, u32, u32, u32)> call_006c5c60;  // (from the original)

u32 f_0064ee94(u32 r0, u32 r1, u32 r2_unused, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r3;
    guest::cpu()->s[0] = S0;
    r0 = call_005d43f4(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r4 != 0) {
        r1 = 0u;
        r0 = r5;
        guest::cpu()->s[0] = S0;
        r0 = call_006c5c60(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        *gptr<u32>(r5 + 4u) = u32(std::bit_cast<u32>(S0));
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064ee94
GUEST_EXPORT(0x0064ee94, d_0064ee94::f_0064ee94);

// f_0064f018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f018 {

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_0064f018(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r0 = r1;
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    zf = res == 0;
    if (!zf) {
        res = r0 + 0x6bd0u;  // (from the original)
        zf = res == 0;
        r4 = res;
    }
    if (zf) {
        r0 = 0u;
        goto L_64f064;
    }
    r0 = call_006e0b2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = r5;
        r0 = call_001b76ec(r0, r1, r2, r3);
    }
    r3 = r0 ^ 1u;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r2 = 0u;
    return call_002bf814(r0, r1, r2, r3);
L_64f064:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064f018
GUEST_EXPORT(0x0064f018, d_0064f018::f_0064f018);

// f_0064f068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f068 {

inline constexpr guest::Function<0x0076e6cc, u32(u32, u32, u32, u32)> call_0076e6cc;  // (from the original)

u32 f_0064f068(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r4 = *gptr<u32>(0x95c6d0u);  // (from the original)
    if (r4 == 0) {
        goto L_64f0b0;
    }
    r0 = r4;
    r0 = call_0076e6cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != r6) {
        goto L_64f0b0;
    }
    if (r5 != 0x40u) {  // (from the original)
        if (u32(s32(s8(*gptr<u8>(r4 + 0x1cu)))) != r5) {  // (from the original)
            goto L_64f0b0;
        }
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
L_64f0b0:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_0064f068
GUEST_EXPORT(0x0064f068, d_0064f068::f_0064f068);

// f_0064f0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0bc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0bc(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 == 1u) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    if (r0 == 0) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0064f0bc
GUEST_EXPORT(0x0064f0bc, d_0064f0bc::f_0064f0bc);

// f_0064f0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0dc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0dc(u32 r0) {
    u32 zf = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf = r0 == 3u;
    if (!zf) {
        zf = r0 == 4u;
    }
    if (zf) {
        r0 = 1u;
    } else {
        r0 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0064f0dc
GUEST_EXPORT(0x0064f0dc, d_0064f0dc::f_0064f0dc);

// f_0064f298: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f298 {

inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006a5f0c, u32(u32, u32, u32, u32)> call_006a5f0c;  // (from the original)
inline constexpr guest::Function<0x006c602c, u32(u32, u32, u32, u32)> call_006c602c;  // (from the original)

u32 f_0064f298(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r5 = r2;
    r7 = r1;
    r4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_64f2ec;
    }
    r3 = r4;
    r2 = r6;
    r1 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002feb00(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_64f2ec;
    }
    r1 = r0;
    r3 = r6;
    r2 = r5;
    r0 = r7;
    *gptr<u32>(r13) = u32(r4);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0059a9ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64f2ec:;
    r2 = r6;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006a5f0c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r2 = 0u;
    r1 = r6;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006c602c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r7 + 4u) = u32(std::bit_cast<u32>(S0));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0064f298
GUEST_EXPORT(0x0064f298, d_0064f298::f_0064f298);

// f_0064f314: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f314 {

struct __attribute__((packed)) Object_0064f314_0 {
    u8 unknown_0[0x1ac];  // (not used here)
    u8 byte_1ac;
};
GUEST_OFFSET(Object_0064f314_0, byte_1ac, 0x1ac);  // (from the original)

inline constexpr guest::Function<0x001b76ec, u32(u32, u32, u32, u32)> call_001b76ec;  // (from the original)
inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fe8a8, u32(u32, u32, u32, u32)> call_002fe8a8;  // (from the original)
inline constexpr guest::Function<0x006e0b2c, u32(u32, u32, u32, u32)> call_006e0b2c;  // (from the original)

u32 f_0064f314(gptr<Object_0064f314_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r0 = u32(arg0->byte_1ac);
    r0 = call_002fe8a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    zf = res == 0;
    if (!zf) {
        res = r0 + 0x6bd0u;  // (from the original)
        zf = res == 0;
        r5 = res;
    }
    r1 = 0u;
    if (!zf) {
        r0 = call_006e0b2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r0 = r4;
            r0 = call_001b76ec(r0, r1, r2, r3);
        }
        r3 = r0 ^ 1u;
        r2 = 0u;
        r1 = r4;
        r0 = r5;
        r0 = call_002bf814(r0, r1, r2, r3);
        r1 = r0;
    }
    r0 = r1;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064f314
GUEST_EXPORT(0x0064f314, d_0064f314::f_0064f314);

// f_0064f3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f3b4 {

inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)

u32 f_0064f3b4(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    res = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r1 = res;
    if (res == 0) {
        goto L_64f424;
    }
    r6 = r0 + 0x17du;  // (from the original)
    r5 = r4 & 7u;
    if (r4 < 0x32u) {  // (from the original)
        r0 = lsr_r(u32(*gptr<u8>(r6 + (r4 >> 3))), r5 & 0xff);  // (from the original)
        if ((r0 & 1u) != 0) {
            goto L_64f424;
        }
    }
    r0 = call_00584134(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = call_0058c514(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r4 >= 0x32u) {  // (from the original)
        goto L_64f424;
    }
    r0 = r6 + (r4 >> 3);
    r1 = u32(*gptr<u8>(r0)) | lsl_r(1u, r5 & 0xff);  // (from the original)
    *gptr<u8>(r0) = u8(r1);
L_64f424:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0064f3b4
GUEST_EXPORT(0x0064f3b4, d_0064f3b4::f_0064f3b4);
