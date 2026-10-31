// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/word_pair.hpp"

#include <bit>

using guest::gptr;

// f_005a064c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a064c {

inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)

u32 f_005a064c(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r0 + 4u;
    r0 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r0 - 8u;
    r1 = 0u;
    *gptr<u8>(r0 + 0x12u) = u8(0xa5u);  // (from the original)
    *gptr<u8>(r0 + 0x13u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xfu) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x10u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x11u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0xcu) = u8(u32(*gptr<u8>(r0 + 0xcu)) & ~0xffu);  // (from the original)
    *gptr<u8>(r0 + 0xdu) = u8(u32(*gptr<u8>(r0 + 0xdu)) & ~0xffu | 0x28u);  // (from the original)
    *gptr<u8>(r0 + 0xeu) = u8(u32(*gptr<u8>(r0 + 0xeu)) & ~0xffu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a064c
GUEST_EXPORT(0x005a064c, d_005a064c::f_005a064c);

// f_005a06b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a06b4 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)

u32 f_005a06b4(u32 r0) {
    return call_002f777c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005a06b4
GUEST_EXPORT(0x005a06b4, d_005a06b4::f_005a06b4);

// f_005a08dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a08dc {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32, u32)> call_00624f00;  // (from the original)

u32 f_005a08dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r1;
    r8 = r2;
    r1 = 0x9b41c4u;  // (from the original)
    r2 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    r12 = r0;
    r9 = r3;
    r6 = 0u;
L_5a0900:;
    if (u32(*gptr<u8>(r6 + (r6 << 2) + r1 + 2u)) != 0xa5u) {  // (from the original)
        r6 = r6 + 1u;
        if (s32(r6) < s32(0x20u)) {  // (from the original)
            guest::preempt();
            goto L_5a0900;
        }
        r6 = ~0u;
        goto L_5a0aa4;
    }
    if (r6 + 1u == 0) {
        goto L_5a0aa4;
    }
    r0 = r6 + (r6 << 2);
    r5 = r0 + r1;
    *gptr<u8>(r5) = u8(r7);
    *gptr<u8>(r5 + 1u) = u8(r8);
    *gptr<u8>(r5 + 2u) = u8(r9);
    *gptr<u8>(r5 + 4u) = u8(r12);
    if (r2 == 0) {
        goto L_5a0aa4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a0a24;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030b6c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a0a24;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = u32(*gptr<u8>(r13 + 0xdu));  // (from the original)
    r1 = u32(*gptr<u8>(r13 + 0xeu));  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8((r0 & 3u | u32(*gptr<u8>(r13 + 0xcu)) & ~3u) & ~0xfcu);  // (from the original)
    r2 = r3 & ~0x3fu;  // (from the original)
    *gptr<u8>(r13 + 0xdu) = u8(r2 | 0x20u);  // (from the original)
    *gptr<u8>(r13 + 0xeu) = u8(r1 & ~0x3fu & ~0xc0u);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4;
    *gptr<u8>(r13 + 0x13u) = u8(r7);  // (from the original)
    *gptr<u8>(r13 + 0x14u) = u8(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = r13;
    r1 = 4u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    *gptr<u8>(r13 + 0x12u) = u8(r9);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5a0a24:;
    r7 = 1u;
    r4 = r7;
    *gptr<u8>(r5 + 3u) = u8(r7);
    do {
L_5a0a30:;
        r0 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00624f00(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r2 = u32(*gptr<u8>(r5 + 3u));
            r1 = r2 | lsl_r(r7, r4 & 0xff);  // (from the original)
            *gptr<u8>(r5 + 3u) = u8(r1);
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    r0 = u32(*gptr<u8>(r5 + 4u));
    res = r0 - 0x17u;  // (from the original)
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = ((r0 ^ 0x17u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (zf) {
        goto L_5a0a98;
    }
    if (!(!zf && nf == vf)) {
        zf = r0 == 2u;
        if (!zf) {
            zf = r0 == 4u;
        }
        if (zf) {
            goto L_5a0a98;
        }
        zf = r0 == 5u;
        if (!zf) {
            zf = r0 == 0x15u;  // (from the original)
        }
        if (zf) {
            goto L_5a0a98;
        }
        goto L_5a0aa4;
    }
    zf = r0 == 0x18u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x19u;  // (from the original)
    }
    if (!zf) {
        zf = r0 == 0x1au;  // (from the original)
    }
    if (!zf) {
        goto L_5a0aa4;
    }
L_5a0a98:;
    *gptr<u8>(r5 + 3u) = u8(u32(*gptr<u8>(r5 + 3u)) | 0x10u);  // (from the original)
L_5a0aa4:;
    r0 = r6;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a08dc
GUEST_EXPORT(0x005a08dc, d_005a08dc::f_005a08dc);

// f_005a0ab8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a0ab8 {

inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;  // (from the original)

u32 f_005a0ab8(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r6 = 0xa5u;  // (from the original)
    r7 = 0x9b41c4u;  // (from the original)
    r8 = 0x95bfdcu;  // (from the original)
L_5a0acc:;
    r0 = r4 + (r4 << 2);
    r5 = r0 + r7;
    r3 = u32(*gptr<u8>(r5 + 2u));
    if (r3 == 0xa5u) {  // (from the original)
        goto L_5a0b10;
    }
    r0 = u32(*gptr<u8>(r5 + 4u));
    if (r0 == 0x23u) {  // (from the original)
        *gptr<u8>(r5 + 2u) = u8(r6);
        goto L_5a0b10;
    }
    if (r0 != 0x24u) {  // (from the original)
        goto L_5a0b10;
    }
    *gptr<u32>(r13) = u32(r8);
    r1 = u32(*gptr<u8>(r5 + 1u));
    r0 = u32(*gptr<u8>(r5));
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_00168868(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r5 + 2u) = u8(r6);
L_5a0b10:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0x20u)) {  // (from the original)
        guest::preempt();
        goto L_5a0acc;
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a0ab8
GUEST_EXPORT(0x005a0ab8, d_005a0ab8::f_005a0ab8);

// f_005a0d3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a0d3c {

struct __attribute__((packed)) Object_005a0d3c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x8];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_005a0d3c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005a0d3c_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005a0d3c_0, byte_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002073dc, u32(u32, u32, u32, u32)> call_002073dc;  // (from the original)
inline constexpr guest::Function<0x002e5ed8, u32(u32, u32, u32, u32)> call_002e5ed8;  // (from the original)
inline constexpr guest::Function<0x002e627c, u32(u32, u32, u32, u32)> call_002e627c;  // (from the original)
inline constexpr guest::Function<0x002e668c, u32(u32, u32, u32, u32)> call_002e668c;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x0052e294, u32(u32, u32, u32, u32)> call_0052e294;  // (from the original)
inline constexpr guest::Function<0x005c08dc, u32(u32, u32, u32, u32)> call_005c08dc;  // (from the original)

u32 f_005a0d3c(gptr<Object_005a0d3c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r5 = r0;
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r1;
    r2 = r2 + r5;
    r1 = 0x5au;  // (from the original)
    arg0->byte_28 = u8(0xfu);  // (from the original)
    r6 = r3;
    *gptr<u8>(r2 + 0x20u) = u8(r1);  // (from the original)
    if (r3 == 0) {
        r0 = arg0->word_1c;
    } else {
        r0 = arg0->word_18;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r8 = r0;
    r4 = *gptr<u32>(r4 + 4u);
    r7 = 0u;
    r3 = 1u;
    r2 = 4u;
    r1 = r13 + 4u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005c08dc(r0, r1, r2, r3);
    r1 = 0u;
    if (r0 == 0) {
        r6 = 0u;
        *gptr<u32>(r13) = u32(r1);
        *gptr<u32>(r13 + 4u) = u32(r1);
    }
    r3 = *gptr<u32>(r13);
    r0 = *gptr<u32>(r13 + 4u);
    r2 = r3 - 1u;
    r12 = r0 - 1u;
    r3 = r3 + 1u;
    r9 = r0 + 1u;
    if (r4 == 0) {
        goto L_5a0e34;
    }
L_5a0dc8:;
    r0 = *gptr<u32>(r4 + 0x68u);  // (from the original)
    if ((r0 & 0x10u) == 0) {  // (from the original)
        goto L_5a0e28;
    }
    if ((r0 & 0x20u) != 0) {  // (from the original)
        goto L_5a0e28;
    }
    r0 = u32(*gptr<u8>(r4 + 0x11bu));  // (from the original)
    if (r0 != 0) {
        goto L_5a0e28;
    }
    if (r6 != 0) {
        r0 = *gptr<u32>(r4 + 0x28u);  // (from the original)
        res = r0 - r2;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r0 ^ r2) & (r0 ^ res)) >> 0x1f;  // (from the original)
        if (nf == vf) {
            res = r3 - r0;
            nf = res >> 0x1f;  // (from the original)
            vf = ((r3 ^ r0) & (r3 ^ res)) >> 0x1f;  // (from the original)
        }
        if (nf != vf) {
            goto L_5a0e28;
        }
        r0 = *gptr<u32>(r4 + 0x2cu);  // (from the original)
        res = r12 - r0;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r12 ^ r0) & (r12 ^ res)) >> 0x1f;  // (from the original)
        if (zf || nf != vf) {
            res = r0 - r9;
            nf = res >> 0x1f;  // (from the original)
            zf = res == 0;
            vf = ((r0 ^ r9) & (r0 ^ res)) >> 0x1f;  // (from the original)
        }
        if (!zf && nf == vf) {
            goto L_5a0e28;
        }
        if (r7 == r8) {
            goto L_5a0e3c;
        }
    } else {
        if (r7 == r8) {
            goto L_5a0e3c;
        }
    }
    r7 = r7 + 1u;
L_5a0e28:;
    r4 = *gptr<u32>(r4 + 8u);
    if (r4 != 0) {
        guest::preempt();
        goto L_5a0dc8;
    }
L_5a0e34:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a0e3c:;
    if (r4 == 0) {
        guest::preempt();
        goto L_5a0e34;
    }
    r0 = *gptr<u32>(r5 + 0xcu);  // (from the original)
    if (r0 != 0) {
        if (*gptr<u32>(r5 + 0x10u) == *gptr<u32>(r0 + 0xcu)) {  // (from the original)
            goto L_5a0e90;
        }
    }
    r3 = 0x975beeu;  // (from the original)
    ea = r13;
    *gptr<u32>(ea) = u32(0xae5664u);  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(1u);
    *gptr<u32>(ea + 4) = u32(r1);
    r2 = 0xae5658u;  // (from the original)
    r1 = 0xfau;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002073dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002e627c(r0, r1, r2, r3);
L_5a0e90:;
    r3 = r13 + 0x40u;  // (from the original)
    ea = r4 + 0x40u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r3) = u32(*gptr<u32>(ea));
    *gptr<u32>(r3 + 4) = u32(r1);
    *gptr<u32>(r3 + 8) = u32(r2);
    *gptr<u16>(r13) = u16(0u);
    r2 = *gptr<u32>(r13);
    r1 = r13 + 0x40u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052e294(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002e668c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xae5658u;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002e5ed8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x11bu) = u8(0x2du);  // (from the original)
    r0 = *gptr<u32>(r4 + 0x68u) | 0x20u;  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(r0);  // (from the original)
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a0d3c
GUEST_EXPORT(0x005a0d3c, d_005a0d3c::f_005a0d3c);

// f_005a1174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a1174 {

inline constexpr guest::Function<0x001b7ce8, u32(u32, u32, u32, u32)> call_001b7ce8;  // (from the original)
inline constexpr guest::Function<0x0024b7b8, u32(u32, u32, u32, u32)> call_0024b7b8;  // (from the original)
inline constexpr guest::Function<0x002a7de4, u32(u32, u32, u32, u32)> call_002a7de4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32, u32)> call_00315788;  // (from the original)
inline constexpr guest::Function<0x006b9d78, u32(u32, u32, u32, u32)> call_006b9d78;  // (from the original)
inline constexpr guest::Function<0x006e0890, u32(u32, u32, u32, u32)> call_006e0890;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32, u32, u32)> call_0076e6cc;  // (from the original)

u32 f_005a1174(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00305f44(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    if (r0 != r1) {
        goto L_5a12a4;
    }
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 3u) {
        goto L_5a12a4;
    }
    r0 = r5;
    r0 = call_002fccdc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = call_006b9d78(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 1u;
        r0 = 4u;
        r0 = call_006f0130(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 1u;
        r0 = 9u;
        r0 = call_0024b7b8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_002a7de4(r0, r1, r2, r3);
    }
    r6 = 0x95c6d0u;  // (from the original)
    r0 = *gptr<u32>(r6);
    r0 = call_0076e6cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 1u) {
        goto L_5a1234;
    }
    r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r2 = 0u;
    r0 = call_00315788(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0xacu) {  // (from the original)
        goto L_5a1234;
    }
    r0 = call_006e0890(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a1234;
    }
    r0 = *gptr<u32>(0x95c71cu);  // (from the original)
    if (r0 == 0) {
        goto L_5a1234;
    }
    r1 = u32(*gptr<u8>(r4 + 0xdu));  // (from the original)
    r3 = r5;
    r2 = 1u;
    r0 = call_001b7ce8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5a1234:;
    r0 = *gptr<u32>(r6);
    r0 = call_0076e6cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 1u) {
        goto L_5a12a4;
    }
    r0 = r4 + 8u;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x36u) {  // (from the original)
        r1 = 0x3413u;  // (from the original)
        r0 = r4 + 8u;
        r0 = call_002fcb84(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5a12a4;
        }
        r0 = u32(*gptr<u8>(r4 + 0xcu));  // (from the original)
        if ((r0 & 2u) != 0) {
            goto L_5a12a4;
        }
    }
    r1 = 1u;
    r0 = 3u;
    r0 = call_006f0130(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = 9u;
    r0 = call_0024b7b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002a7de4(r0, r1, r2, r3);
L_5a12a4:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a1174
GUEST_EXPORT(0x005a1174, d_005a1174::f_005a1174);

// f_005a1ba0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a1ba0 {

inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fccc4, u32(u32, u32, u32, u32)> call_002fccc4;  // (from the original)
inline constexpr guest::Function<0x0059a2d8, u32(u32, u32, u32, u32)> call_0059a2d8;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

u32 f_005a1ba0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r6 = r2;
    if (r1 == 0) {
        r5 = 0u;
    } else {
        r5 = 2u;
    }
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc20c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fccc4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r4;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
    } else {
        r1 = 0x9eu;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
    }
    *gptr<u32>(r13) = u32(r6);
    r2 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r3 = r5;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0059a2d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
        r3 = u32(*gptr<u8>(r4 + 0x15u));  // (from the original)
        r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
        r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
        r2 = u32(*gptr<u8>(r4 + 0xcu)) & 1u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00168868(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
        r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
        r2 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_0059e65c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a1ba0
GUEST_EXPORT(0x005a1ba0, d_005a1ba0::f_005a1ba0);

// f_005a213c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a213c {

struct __attribute__((packed)) Object_005a213c_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Object_005a213c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_005a213c_0, byte_f, 0xf);  // (from the original)

inline constexpr guest::Function<0x00168868, u32(u32, u32, u32, u32)> call_00168868;  // (from the original)
inline constexpr guest::Function<0x002075d4, u32(u32, u32, u32, u32)> call_002075d4;  // (from the original)
inline constexpr guest::Function<0x00250354, u32(u32, u32, u32, u32)> call_00250354;  // (from the original)
inline constexpr guest::Function<0x002504d4, u32(u32, u32, u32, u32)> call_002504d4;  // (from the original)
inline constexpr guest::Function<0x00250510, u32(u32, u32, u32, u32)> call_00250510;  // (from the original)
inline constexpr guest::Function<0x00250560, u32(u32, u32, u32, u32)> call_00250560;  // (from the original)
inline constexpr guest::Function<0x0059a9ac, u32(u32, u32, u32, u32)> call_0059a9ac;  // (from the original)
inline constexpr guest::Function<0x0059b080, u32(u32, u32, u32, u32)> call_0059b080;  // (from the original)
inline constexpr guest::Function<0x0059e65c, u32(u32, u32, u32, u32)> call_0059e65c;  // (from the original)

u32 f_005a213c(gptr<Object_005a213c_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x90u;  // (from the original)
    r5 = 0u;
    *gptr<u32>(r13) = u32(r5);
    r3 = u32(arg0->byte_f);
    r2 = u32(arg0->byte_e);
    r4 = r0;
    r1 = r0;
    r0 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0059a9ac(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4) = u32(r5);
    r3 = 0xae5664u;  // (from the original)
    r2 = 0x975beeu;  // (from the original)
    r0 = 0x1f6u;  // (from the original)
    r1 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002075d4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r2 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r3 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r6 = 0x100062du;  // (from the original)
    r1 = r4;
    r0 = r13 + 0x74u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0059a9ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00250510(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r13 + 0x74u;  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00250354(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_002504d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00250560(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13) = u32(0x95bfdcu);  // (from the original)
    r3 = u32(*gptr<u8>(r4 + 0x15u));  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0xcu)) & 1u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00168868(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r1 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r2 = 0u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0059e65c(r0, r1, r2, r3);
    S1 = std::bit_cast<float>(*gptr<u32>(0x5a2244u));  // (from the original)
    r3 = 0u;
    *gptr<u32>(r13 + 0x6cu) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r13 + 0x6cu)) + S1));  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x68u);  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x5a2248u));  // (from the original)
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_0059b080(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = 1u;
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_005a213c
GUEST_EXPORT(0x005a213c, d_005a213c::f_005a213c);

// f_005a224c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a224c {

inline constexpr guest::Function<0x005a0ef8, u32(u32, u32, u32, u32)> call_005a0ef8;  // (from the original)
inline constexpr guest::Function<0x005a0f5c, u32(u32, u32, u32, u32)> call_005a0f5c;  // (from the original)
inline constexpr guest::Function<0x005a2438, u32(u32, u32, u32, u32)> call_005a2438;  // (from the original)

u32 f_005a224c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r0 = call_005a0ef8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 + 1u == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = 0x9b4264u;  // (from the original)
    r4 = r1 + (r0 + (r0 << 1) + (r0 << 3) << 1);
    r0 = r4;
    r0 = call_005a0f5c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_005a2438(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
    *gptr<u8>(r4 + 0x10u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x11u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a224c
GUEST_EXPORT(0x005a224c, d_005a224c::f_005a224c);

// f_005a2438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2438 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0059f4d8, u32(u32, u32, u32, u32)> call_0059f4d8;  // (from the original)
inline constexpr guest::Function<0x005a064c, u32(u32, u32, u32, u32)> call_005a064c;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_005a2438(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a064c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = u32(*gptr<u8>(r4 + 0xeu));  // (from the original)
    r6 = u32(*gptr<u8>(r4 + 0xfu));  // (from the original)
    r4 = u32(*gptr<u8>(r4 + 0x15u));  // (from the original)
    r5 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, r3);
    r3 = (r0 & 3u | u32(*gptr<u8>(r13 + 0xcu)) & ~3u) & ~0xfcu;  // (from the original)
    r2 = u32(*gptr<u8>(r13 + 0xdu)) & ~0x3fu;  // (from the original)
    r0 = u32(*gptr<u8>(r13 + 0xeu)) & ~0x3fu;  // (from the original)
    *gptr<u8>(r13 + 0xcu) = u8(r3);  // (from the original)
    *gptr<u8>(r13 + 0xdu) = u8(r2 | 0x10u);  // (from the original)
    *gptr<u8>(r13 + 0xeu) = u8(r0 & ~0xc0u);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r5;
    *gptr<u8>(r13 + 0x13u) = u8(r7);  // (from the original)
    *gptr<u8>(r13 + 0x14u) = u8(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r5 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r5 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r13 + 0x12u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc900(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030b6c4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_5a2510;
        }
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0059f4d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5a24e8:;
    r0 = r13;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a2510:;
    r2 = r13;
    r1 = 0u;
    r3 = 0x16u;  // (from the original)
    r0 = 0x3au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006249b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_5a24e8;
}

}  // namespace d_005a2438
GUEST_EXPORT(0x005a2438, d_005a2438::f_005a2438);

// f_005a2624: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2624 {


u32 f_005a2624(u32 r0, u32 r1, u32 r2) {
    u32 nf = 0;
    u32 cf = 0;
    u32 vf = 0;
    nf = r1 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        nf = r2 >> 0x1f;  // (from the original)
        vf = 0u;
    }
    if (nf != vf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    cf = r1 >= 0x70u;  // (from the original)
    if (!cf) {
        cf = r2 >= 0x60u;  // (from the original)
    }
    if (cf) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = r1 + ((r2 << 3) - r2 << 4);
    r0 = r0 + (u32(s32(r1) >> 5) << 2);
    r1 = *gptr<u32>(r0 + 4u) | lsl_r(1u, r1 & 0x1fu);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a2624
GUEST_EXPORT(0x005a2624, d_005a2624::f_005a2624);

// f_005a2664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2664 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005a2664(u32 r0) {
    u32 r1 = 0;
    r1 = 0x540u;  // (from the original)
    r0 = r0 + 4u;
    return call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005a2664
GUEST_EXPORT(0x005a2664, d_005a2664::f_005a2664);

// f_005a2804: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2804 {


u32 f_005a2804(u32 r0, u32 r1) {
    u32 ea = 0;
    u32 r2 = 0;
    r2 = *gptr<u32>(0x94ee58u);  // (from the original)
    if (r2 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r1 + (r0 + (r0 << 2) << 1);
    r1 = *gptr<u32>(r2 + (r0 + (r0 << 2) + (r0 << 6) << 2) + 0x10u);  // (from the original)
    r0 = 0u;
    ea = r1 + 0x28u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 == 0) {
        r1 = r0;
    } else {
        r1 = r1 + r2;
    }
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    ea = r1 + 0x28u;  // (from the original)
    r1 = ea;
    r2 = *gptr<u32>(ea);
    if (r2 != 0) {
        r0 = r2 + r1;
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a2804
GUEST_EXPORT(0x005a2804, d_005a2804::f_005a2804);

// f_005a2864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2864 {

inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x00565c10, u32(u32, u32, u32, u32)> call_00565c10;  // (from the original)
inline constexpr guest::Function<0x0071a844, u32(u32, u32, u32, u32)> call_0071a844;  // (from the original)

u32 f_005a2864(u32 r0, u32 r1, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = 0x9526b0u;  // (from the original)
    if (u32(*gptr<u8>(r6 + 5u)) != 0) {
        r0 = u32(*gptr<u16>(r6));
        if (r0 != 0) {
            r0 = u32(*gptr<u8>(r6 + 4u));
            if (r0 < 8u) {
                r1 = u32(*gptr<u8>(r6 + 2u));
                zf = r1 == r4;
                if (zf) {
                    r1 = u32(*gptr<u8>(r6 + 3u));
                    zf = r1 == r5;
                }
                if (zf) {
                    *gptr<u8>(r6 + 4u) = u8(r0 + 1u);
                    goto L_5a292c;
                }
            }
            r0 = 0u;
        }
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        return r0;
    }
    r7 = 1u;
    *gptr<u8>(r6 + 5u) = u8(r7);
    r8 = 0u;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
    if (r0 == 0) {
        goto L_5a2914;
    }
    r0 = r0 + 0xau;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0071a844(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r1 = 0x335au;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_002fcb84(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_5a2914;
    }
    S0 = std::bit_cast<float>(*gptr<u32>(0x5a2940u));  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00565c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r1 = 0x41a00000u;  // (from the original)
    if (s32(std::bit_cast<u32>(S0)) <= s32(r1)) {
        *gptr<u8>(r6 + 6u) = u8(r7);
        goto L_5a2918;
    }
L_5a2914:;
    *gptr<u8>(r6 + 6u) = u8(r8);
L_5a2918:;
    *gptr<u16>(r6) = u16(0x10eu);  // (from the original)
    *gptr<u8>(r6 + 2u) = u8(r4);
    *gptr<u8>(r6 + 3u) = u8(r5);
    *gptr<u8>(r6 + 4u) = u8(r7);
L_5a292c:;
    r0 = 1u;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005a2864
GUEST_EXPORT(0x005a2864, d_005a2864::f_005a2864);

// f_005a294c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a294c {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006b9904, u32(u32, u32, u32, u32)> call_006b9904;  // (from the original)

u32 f_005a294c(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = 0x9526b0u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 5u));
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf) {
        r0 = u32(s32(s16(*gptr<u16>(r5))));
        nf = r0 >> 0x1f;  // (from the original)
        zf = r0 == 0;
        vf = 0u;
    }
    if (zf || nf != vf) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = sxth(r0 - 1u);
    *gptr<u16>(r5) = u16(r0);
    if (r0 != 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_006a5e34(r0, r1, r2, r3);
    r2 = u32(*gptr<u8>(r5 + 3u));
    r1 = u32(*gptr<u8>(r5 + 2u));
    r4 = r0;
    r3 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002feb00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006b9904(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = u32(*gptr<u8>(r5 + 3u));
    r2 = u32(*gptr<u8>(r5 + 2u));
    r1 = r13 + 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc994(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r13 + 4u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a294c
GUEST_EXPORT(0x005a294c, d_005a294c::f_005a294c);

// f_005a29dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a29dc {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x006a5e34, u32(u32, u32, u32, u32)> call_006a5e34;  // (from the original)
inline constexpr guest::Function<0x006b9904, u32(u32, u32, u32, u32)> call_006b9904;  // (from the original)

u32 f_005a29dc(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = 0x9526b0u;  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 5u));
    nf = r0 >> 0x1f;  // (from the original)
    zf = r0 == 0;
    vf = 0u;
    if (!zf) {
        r0 = u32(s32(s16(*gptr<u16>(r5))));
        nf = r0 >> 0x1f;  // (from the original)
        zf = r0 == 0;
        vf = 0u;
    }
    if (!(zf || nf != vf)) {
        guest::cpu()->r[13] = r13;
        r0 = call_006a5e34(r0, r1, r2, r3);
        r2 = u32(*gptr<u8>(r5 + 3u));
        r1 = u32(*gptr<u8>(r5 + 2u));
        r4 = r0;
        r3 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_002feb00(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc934(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_006b9904(r0, r1, r2, r3);
        r6 = 0u;
        *gptr<u32>(r13) = u32(r6);
        r3 = u32(*gptr<u8>(r5 + 3u));
        r2 = u32(*gptr<u8>(r5 + 2u));
        r1 = r13 + 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = r13 + 4u;
        *gptr<u16>(r5) = u16(r6);
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a29dc
GUEST_EXPORT(0x005a29dc, d_005a29dc::f_005a29dc);

// f_005a2fdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2fdc {

struct __attribute__((packed)) Object_005a2fdc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a2fdc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a2fdc_0, word_4, 0x4);  // (from the original)


void f_005a2fdc(gptr<Object_005a2fdc_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x952898u);  // (from the original)
    r2 = *gptr<u32>(0x952898u + 4);  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a2fdc
GUEST_EXPORT(0x005a2fdc, d_005a2fdc::f_005a2fdc);

// f_005a2ff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a2ff0 {

struct __attribute__((packed)) Object_005a2ff0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a2ff0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a2ff0_0, word_4, 0x4);  // (from the original)


void f_005a2ff0(gptr<Object_005a2ff0_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x9528a0u);  // (from the original)
    r2 = *gptr<u32>(0x9528a0u + 4);  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a2ff0
GUEST_EXPORT(0x005a2ff0, d_005a2ff0::f_005a2ff0);

// f_005a3004: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3004 {

struct __attribute__((packed)) Object_005a3004_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a3004_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a3004_0, word_4, 0x4);  // (from the original)


void f_005a3004(gptr<Object_005a3004_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x9528a8u);  // (from the original)
    r2 = *gptr<u32>(0x9528a8u + 4);  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a3004
GUEST_EXPORT(0x005a3004, d_005a3004::f_005a3004);

// f_005a3018: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3018 {

struct __attribute__((packed)) Object_005a3018_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a3018_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a3018_0, word_4, 0x4);  // (from the original)


void f_005a3018(gptr<Object_005a3018_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r1 = *gptr<u32>(0x9528b0u);  // (from the original)
    r2 = *gptr<u32>(0x9528b0u + 4);  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a3018
GUEST_EXPORT(0x005a3018, d_005a3018::f_005a3018);

// f_005a337c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a337c {


u32 f_005a337c() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x952894u);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    return r0;
}

}  // namespace d_005a337c
GUEST_EXPORT(0x005a337c, d_005a337c::f_005a337c);

// f_005a3394: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3394 {


u32 f_005a3394() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x95288cu;  // (from the original)
    r0 = 0xfu;  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a3394
GUEST_EXPORT(0x005a3394, d_005a3394::f_005a3394);

// f_005a3474: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3474 {

inline constexpr guest::Function<0x001277dc, u32(u32, u32, u32, u32)> call_001277dc;  // (from the original)
inline constexpr guest::Function<0x001279b4, u32(u32, u32, u32, u32)> call_001279b4;  // (from the original)
inline constexpr guest::Function<0x001279cc, u32(u32, u32, u32, u32)> call_001279cc;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x0034ac5c, u32(u32, u32, u32, u32)> call_0034ac5c;  // (from the original)
inline constexpr guest::Function<0x005a2dc0, u32(u32, u32, u32, u32)> call_005a2dc0;  // (from the original)
inline constexpr guest::Function<0x00727528, u32(u32, u32, u32, u32)> call_00727528;  // (from the original)

u32 f_005a3474(u32 r0_unused, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r0 = u32(*gptr<u8>(0x95288cu));  // (from the original)
    if (r0 == 0) {
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
    r13 = r13 - 0xc0u;  // (from the original)
    r1 = r13 + 0xa8u;  // (from the original)
    r0 = 0x208u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001277dc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = *gptr<u32>(r13 + 0xa8u);  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a2dc0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0xa8u) = u32(r0);  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0034ac5c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r13 + 0xa8u);  // (from the original)
    r2 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00727528(r0, r1, r2, guest::cpu()->r[3]);
    r6 = 0x9c7970u;  // (from the original)
    ea = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r4 = r0;
    ea = r6 + 0xcu;  // (from the original)
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = (*gptr<u32>(r6 + 0x10u) & ~3u) + r4;  // (from the original)
    r0 = r1 - r5 & ~3u;
    *gptr<u32>(r13 + 0xa8u) = u32(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001279b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0 = call_001279cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0xb0u;  // (from the original)
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

}  // namespace d_005a3474
GUEST_EXPORT(0x005a3474, d_005a3474::f_005a3474);

// f_005a3508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3508 {

inline constexpr guest::Function<0x00349878, u32(u32, u32, u32, u32)> call_00349878;  // (from the original)
inline constexpr guest::Function<0x004f0568, u32(u32, u32, u32, u32)> call_004f0568;  // (from the original)
inline constexpr guest::Function<0x00726d2c, u32(u32, u32, u32, u32)> call_00726d2c;  // (from the original)

u32 f_005a3508(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0 = 0;
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r0 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_004f0568(r0, r1, r2, r3);
    r9 = 0xa14380u;  // (from the original)
    r7 = r0;
    r6 = 0u;
    r10 = r9 + 0x180u;  // (from the original)
L_5a3524:;
    r3 = ~0u;
    r0 = r7 + 0x1cu;  // (from the original)
    r8 = 0x9c9fe0u + (r6 * 0x251du << 3);  // (from the original)
    r1 = *gptr<u32>(r7 + 0x1cu);  // (from the original)
    r2 = r6;
    if (r1 != 0) {
        r1 = r1 + r0;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00349878(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r11 = 0x952af0u;  // (from the original)
    r4 = 0u;
    r5 = r9 + (r6 + (r6 << 1) << 5);
    do {
L_5a3564:;
        r2 = *gptr<u32>(r11 + (r4 << 2));
        r1 = r5 + (r4 << 3);
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xcu));  // (from the original)
    r11 = 0x952b20u;  // (from the original)
    r4 = 0u;
    r5 = r10 + ((r6 << 3) - r6 << 4);
    do {
L_5a3590:;
        r2 = *gptr<u32>(r11 + (r4 << 2));
        r1 = r5 + (r4 << 3);
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xeu));  // (from the original)
    r11 = 0x952b58u;  // (from the original)
    r4 = 0u;
    r5 = 0xa146c0u + (r6 + (r6 << 2) + (r6 << 3) << 3);  // (from the original)
    do {
L_5a35c4:;
        r2 = *gptr<u32>(r11 + (r4 << 2));
        r1 = r5 + (r4 << 3);
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00726d2c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xdu));  // (from the original)
    r6 = r6 + 1u;
    if (s32(r6) < s32(4u)) {
        guest::preempt();
        goto L_5a3524;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a3508
GUEST_EXPORT(0x005a3508, d_005a3508::f_005a3508);

// f_005a36b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a36b8 {

struct __attribute__((packed)) Object_005a36b8_0 {
    u32 word_0;
    u8 unknown_4[0x68];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_005a36b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a36b8_0, word_6c, 0x6c);  // (from the original)


u32 f_005a36b8(gptr<Object_005a36b8_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    r12 = arg0->word_6c;
    r0 = arg0->word_0;
    r1 = u32(*gptr<u8>(0xa146c0u + (r12 + (r12 << 2) + (r12 << 3) << 3) + (r1 << 3) + 2u));  // (from the original)
    r1 = lsl_r(r2, r1 & 0xff) | *gptr<u32>(r0 + 0x29cu) & ~lsl_r(1u, r1 & 0xff);  // (from the original)
    *gptr<u32>(r0 + 0x29cu) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a36b8
GUEST_EXPORT(0x005a36b8, d_005a36b8::f_005a36b8);

// f_005a3720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3720 {

inline constexpr guest::Function<0x00150b94, u32(u32, u32, u32, u32)> call_00150b94;  // (from the original)

u32 f_005a3720(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0x70u;  // (from the original)
    r1 = 0u;
    r0 = call_00150b94(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a3720
GUEST_EXPORT(0x005a3720, d_005a3720::f_005a3720);

// f_005a3ad0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3ad0 {

struct __attribute__((packed)) Object_005a3ad0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005a3ad0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005a3ad0_0, word_2c, 0x2c);  // (from the original)


void f_005a3ad0(gptr<Object_005a3ad0_0> arg0, u32 r1, u32 r2, u32 r3) {
    arg0->word_8 = u32(r1);
    arg0->word_14 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->byte_10 = u8(r3);
    arg0->byte_28 = u8(1u);
    r3 = 0u;
    arg0->word_4 = u32(r3);
    arg0->word_0 = u32(0x907d70u);  // (from the original)
    arg0->word_18 = u32(r3);
    arg0->word_20 = u32(r3);
    arg0->word_24 = u32(r3);
    arg0->word_2c = u32(r3);
    return;
}

}  // namespace d_005a3ad0
GUEST_EXPORT(0x005a3ad0, d_005a3ad0::f_005a3ad0);

// f_005a3b10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3b10 {

struct __attribute__((packed)) Object_005a3b10_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u32 word_20;
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[0x3];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005a3b10_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, byte_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005a3b10_0, word_2c, 0x2c);  // (from the original)


void f_005a3b10(gptr<Object_005a3b10_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    r4 = 0u;
    arg0->word_8 = u32(r4);
    arg0->word_14 = u32(r4);
    arg0->word_0 = u32(0x907d70u);  // (from the original)
    arg0->word_18 = u32(r4);
    arg0->word_20 = u32(r4);
    arg0->word_24 = u32(r4);
    arg0->byte_28 = u8(1u);
    arg0->word_4 = u32(r1);
    arg0->word_c = u32(r2);
    arg0->byte_10 = u8(r3);
    arg0->word_2c = u32(r4);
    return;
}

}  // namespace d_005a3b10
GUEST_EXPORT(0x005a3b10, d_005a3b10::f_005a3b10);

// f_005a3edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3edc {

struct __attribute__((packed)) Object_005a3edc_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005a3edc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a3edc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a3edc_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a3edc_0, word_c, 0xc);  // (from the original)


void f_005a3edc(gptr<Object_005a3edc_0> arg0, u32 r1) {
    arg0->word_4 = u32(r1);
    arg0->byte_8 = u8(1u);
    arg0->word_0 = u32(0x907d88u);  // (from the original)
    r1 = 0u;
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a3edc
GUEST_EXPORT(0x005a3edc, d_005a3edc::f_005a3edc);

// f_005a3f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a3f08 {

inline constexpr guest::Function<0x005a4cf4, u32(u32, u32, u32, u32)> call_005a4cf4;  // (from the original)

u32 f_005a3f08(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13) = u32(0x64000u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 8) = u32(r13 + 0x10u);  // (from the original)
    r3 = 1u;
    r2 = 0u;
    r1 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005a4cf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a3f08
GUEST_EXPORT(0x005a3f08, d_005a3f08::f_005a3f08);

// f_005a4aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4aec {


u32 f_005a4aec(u32 r0, u32 r1) {
    r0 = r1 + (r0 << 4) + 0x37u & ~0x1fu;  // (from the original)
    return r0;
}

}  // namespace d_005a4aec
GUEST_EXPORT(0x005a4aec, d_005a4aec::f_005a4aec);

// f_005a4bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4bd0 {

struct __attribute__((packed)) Object_005a4bd0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4bd0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a4bd0_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32, u32)> call_005af8c8;  // (from the original)
inline constexpr guest::Function<0x005af9c4, u32(u32, u32, u32, u32)> call_005af9c4;  // (from the original)

u32 f_005a4bd0(gptr<Object_005a4bd0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = arg0->word_0;
    r6 = u32(*gptr<u16>(r5 + 0x14u));  // (from the original)
    *gptr<u16>(r5 + 0x14u) = u16(0u);  // (from the original)
    r1 = arg0->word_0;
    r2 = arg0->word_4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005af8c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u16>(r5 + 0x14u) = u16(r6);  // (from the original)
    r5 = u32(*gptr<u16>(r13 + 6u));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005af9c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    *gptr<u16>(r1 + 0x14u) = u16(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a4bd0
GUEST_EXPORT(0x005a4bd0, d_005a4bd0::f_005a4bd0);

// f_005a4e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4e5c {


u32 f_005a4e5c(u32 r0, u32 r1) {
    r0 = r1 + (r0 + (r0 << 1) + (r0 << 4) << 3) + 0x18u;  // (from the original)
    return r0;
}

}  // namespace d_005a4e5c
GUEST_EXPORT(0x005a4e5c, d_005a4e5c::f_005a4e5c);

// f_005a4e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4e70 {

struct __attribute__((packed)) Object_005a4e70_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4e70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a4e70_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> call_005a8af0;  // (from the original)
inline constexpr guest::Function<0x005afe90, u32(u32, u32, u32, u32)> call_005afe90;  // (from the original)

u32 f_005a4e70(gptr<Object_005a4e70_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x18;  // (from the original)
    zf = r1 == 0;
    r7 = r3;
    r4 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    arg0->word_0 = u32(r1);
    r3 = r1;
    r8 = r0;
    r1 = r2;
    arg0->word_4 = u32(r2);
    if (zf) {
        goto L_5a4f48;
    }
    r0 = r4 + (r7 + (r7 << 1) + (r7 << 4) << 3) + 0x18u;  // (from the original)
    if (u32(r0 >= r2) && !u32(r0 == r2)) {
        r0 = 0u;
        goto L_5a4f4c;
    }
    r0 = r3;
    guest::cpu()->r[13] = r13;
    r0 = call_00301444(r0, r1, r2, r3);
    r0 = *gptr<u32>(r8);
    r2 = 0u;
    *gptr<u32>(r0 + 8u) = u32(r2);
    *gptr<u32>(r0 + 0xcu) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(r2);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(0x315f3030u);  // (from the original)
    *gptr<u32>(r0) = u32(0x514a5531u);  // (from the original)
    r1 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r0 + 0xcu) = u16(r7);  // (from the original)
    res = r7;
    r6 = r2;
    *gptr<u16>(r0 + 0x16u) = u16(r1);  // (from the original)
    if (u32(res == 0) || res >> 0x1f != (r7 & (r7 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a4f48;
    }
L_5a4efc:;
    r1 = *gptr<u32>(r8);
    r2 = r6 + (r6 << 1) + (r6 << 4);
    r3 = u32(*gptr<u16>(r1 + 0x16u));  // (from the original)
    r5 = r1 + r3 + (r2 << 3);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8af0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_5a4f20:;
        r0 = r5 + (r4 + (r4 << 3) << 1) + 0x50u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005afe90(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r6 = r6 + 1u;
    if (s32(r6) < s32(r7)) {
        guest::preempt();
        goto L_5a4efc;
    }
L_5a4f48:;
    r0 = 1u;
L_5a4f4c:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a4e70
GUEST_EXPORT(0x005a4e70, d_005a4e70::f_005a4e70);

// f_005a4f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4f70 {

struct __attribute__((packed)) Object_005a4f70_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005a4f70_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a4f70_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x005af8c8, u32(u32, u32, u32, u32)> call_005af8c8;  // (from the original)
inline constexpr guest::Function<0x005af9c4, u32(u32, u32, u32, u32)> call_005af9c4;  // (from the original)

u32 f_005a4f70(gptr<Object_005a4f70_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r5 = arg0->word_0;
    r6 = u32(*gptr<u16>(r5 + 0x14u));  // (from the original)
    *gptr<u16>(r5 + 0x14u) = u16(0u);  // (from the original)
    r1 = arg0->word_0;
    r2 = arg0->word_4;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005af8c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u16>(r5 + 0x14u) = u16(r6);  // (from the original)
    r5 = u32(*gptr<u16>(r13 + 6u));
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005af9c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r4);
    *gptr<u16>(r1 + 0x14u) = u16(r5);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a4f70
GUEST_EXPORT(0x005a4f70, d_005a4f70::f_005a4f70);

// f_005a4fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4fd0 {


u32 f_005a4fd0(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = 0x97e098u;  // (from the original)
    if (*gptr<u32>(r2) == 0) {
        *gptr<u32>(r2) = u32(r0);
    }
    r0 = 0x97e09cu;  // (from the original)
    if (*gptr<u32>(r0) == 0) {
        *gptr<u32>(r0) = u32(r1);
    }
    return r0;
}

}  // namespace d_005a4fd0
GUEST_EXPORT(0x005a4fd0, d_005a4fd0::f_005a4fd0);

// f_005a4ffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a4ffc {

struct __attribute__((packed)) Object_005a4ffc_0 {
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
};
GUEST_OFFSET(Object_005a4ffc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005a4ffc_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x005a8e08, u32(u32, u32, u32, u32)> call_005a8e08;  // (from the original)
inline constexpr guest::Function<0x005aa778, u32(u32, u32, u32, u32)> call_005aa778;  // (from the original)

u32 f_005a4ffc(gptr<Object_005a4ffc_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    r13 = r13 - 0x78u;  // (from the original)
    r5 = 0u;
    arg0->word_4 = u32(r5);
    arg0->word_8 = u32(r5);
    arg0->word_c = u32(r5);
    arg0->word_10 = u32(r5);
    arg0->word_14 = u32(r5);
    arg0->word_18 = u32(r5);
    arg0->word_1c = u32(r5);
    arg0->word_20 = u32(r5);
    arg0->word_24 = u32(r5);
    arg0->word_28 = u32(r5);
    arg0->word_2c = u32(r5);
    r1 = 0x31534433u;  // (from the original)
    arg0->word_30 = u32(r5);
    arg0->word_34 = u32(r5);
    r4 = r0;
    arg0->word_38 = u32(r5);
    arg0->word_0 = u32(r1);
    S0 = std::bit_cast<float>(*gptr<u32>(0x5a50b8u));  // (from the original)
    arg0->word_3c = u32(r5);
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005a8e08(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    S0 = guest::cpu()->s[0];
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005aa778(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r4 + 4u) = u32(u32(*gptr<u8>(r13 + 0xcu)));  // (from the original)
    *gptr<u16>(r4 + 0x14u) = u16(u32(*gptr<u8>(r13 + 0xdu)));  // (from the original)
    r0 = 0xf80u & u32(*gptr<u8>(r13 + 0x20u)) << 7 | *gptr<u32>(r4 + 0x30u) & ~0xf80u;  // (from the original)
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    r1 = r0 & ~0xff00000u & ~0xff000u;  // (from the original)
    r0 = r1 | u32(*gptr<u8>(r13 + 0xeu)) << 0xc;  // (from the original)
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_005a4ffc
GUEST_EXPORT(0x005a4ffc, d_005a4ffc::f_005a4ffc);

// f_005a50bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a50bc {

struct __attribute__((packed)) Object_005a50bc_0 {
    u8 unknown_0[0x68];  // (not used here)
    u32 word_68;
};
GUEST_OFFSET(Object_005a50bc_0, word_68, 0x68);  // (from the original)


u32 f_005a50bc(gptr<Object_005a50bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    r0 = r0 + 0x38u;  // (from the original)
    r1 = 0xf80u & r1 << 7 | arg0->word_68 & ~0xf80u;  // (from the original)
    arg0->word_68 = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a50bc
GUEST_EXPORT(0x005a50bc, d_005a50bc::f_005a50bc);

// f_005a5130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5130 {

struct __attribute__((packed)) Object_005a5130_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_005a5130_0, word_30, 0x30);  // (from the original)


void f_005a5130(gptr<Object_005a5130_0> arg0, u32 r1) {
    r1 = arg0->word_30 & ~0xff00000u & ~0xff000u | r1 << 0xc;  // (from the original)
    arg0->word_30 = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a5130
GUEST_EXPORT(0x005a5130, d_005a5130::f_005a5130);

// f_005a5148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5148 {

struct __attribute__((packed)) Object_005a5148_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0x9b];  // (not used here)
    u32 word_a0;
    u32 word_a4;
};
GUEST_OFFSET(Object_005a5148_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a5148_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_005a5148_0, word_a4, 0xa4);  // (from the original)

inline constexpr guest::Function<0x0013fa10, u32(u32, u32, u32, u32)> call_0013fa10;  // (from the original)
inline constexpr guest::Function<0x001416b0, u32(u32, u32, u32, u32)> call_001416b0;  // (from the original)
inline constexpr guest::Function<0x00142450, u32(u32, u32, u32, u32)> call_00142450;  // (from the original)
inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> call_005a5240;  // (from the original)
inline constexpr guest::Function<0x005a92a4, u32(u32, u32, u32, u32)> call_005a92a4;  // (from the original)

u32 f_005a5148(gptr<Object_005a5148_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r0 = u32(arg0->byte_4);
    r7 = r2;
    if (r0 == 0) {
        r1 = 0xdacu;  // (from the original)
        r0 = arg0->word_a0;
        r5 = r4 + 0x98u;  // (from the original)
        arg0->word_a4 = u32(r1);
        if (r0 < r1) {
            r0 = r5;
            r0 = call_00142450(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r0 = r5;
        r0 = call_0013fa10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r6 != 0) {
            r0 = call_001416b0(r0, r1, r2, r3);
            r1 = r0;
            r3 = 0u;
            r2 = 0x1f4u;  // (from the original)
            r0 = r4 + 8u;
            r0 = call_005a92a4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = 0u;
            r0 = r4;
            r0 = call_005a5240(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (r7 != 0) {
            r0 = call_001416b0(r0, r1, r2, r3);
            r1 = r0;
            r2 = 0xbb8u;  // (from the original)
            r3 = 1u;
            r0 = r4 + 0x50u;  // (from the original)
            r0 = call_005a92a4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = 1u;
            r0 = r4;
            r0 = call_005a5240(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r0 = 1u;
        *gptr<u8>(r4 + 4u) = u8(r0);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a5148
GUEST_EXPORT(0x005a5148, d_005a5148::f_005a5148);

// f_005a51f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a51f4 {

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> call_005a566c;  // (from the original)

u32 f_005a51f4(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r12 = r3;
    r3 = r13 + 0x28u;  // (from the original)
    r4 = 1u;
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    r3 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 8u) = u32(r3);
    r3 = r2;
    r2 = 2u;
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_005a566c(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_005a51f4
GUEST_EXPORT(0x005a51f4, d_005a51f4::f_005a51f4);

// f_005a53c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a53c4 {

struct __attribute__((packed)) Object_005a53c4_0 {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(Object_005a53c4_0, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32, u32)> call_0013f274;  // (from the original)
inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> call_005a5240;  // (from the original)
inline constexpr guest::Function<0x005a6218, u32(u32, u32, u32, u32)> call_005a6218;  // (from the original)
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32, u32)> call_005a992c;  // (from the original)
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32, u32)> call_005a9c48;  // (from the original)
inline constexpr guest::Function<0x005aa0b8, u32(u32, u32, u32, u32)> call_005aa0b8;  // (from the original)
inline constexpr guest::Function<0x005aa450, u32(u32, u32, u32, u32)> call_005aa450;  // (from the original)
inline constexpr guest::Function<0x005aa460, u32(u32, u32, u32, u32)> call_005aa460;  // (from the original)
inline constexpr guest::Function<0x005aa47c, u32(u32, u32, u32, u32)> call_005aa47c;  // (from the original)
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32, u32, u32)> call_005aa4bc;  // (from the original)
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32, u32, u32)> call_005aa4d4;  // (from the original)
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32, u32, u32)> call_005aa4ec;  // (from the original)
inline constexpr guest::Function<0x005acde8, u32(u32, u32, u32, u32)> call_005acde8;  // (from the original)
inline constexpr guest::Function<0x005adc90, u32(u32, u32, u32, u32)> call_005adc90;  // (from the original)
inline constexpr guest::Function<0x005ae46c, u32(u32, u32, u32, u32)> call_005ae46c;  // (from the original)
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32, u32)> call_0075412c;  // (from the original)
inline constexpr guest::Function<0x007546b4, u32(u32, u32, u32, u32)> call_007546b4;  // (from the original)
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> call_00754978;  // (from the original)
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;  // (from the original)
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> call_00754a9c;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)
inline constexpr guest::Function<0x00755484, u32(u32, u32, u32, u32)> call_00755484;  // (from the original)
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32, u32)> call_007554e4;  // (from the original)

u32 f_005a53c4(gptr<Object_005a53c4_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r6 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r1;
    arg0->byte_5 = u8(0u);
    r4 = r6 + (r1 + (r5 << 3) << 3);
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00754978(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a55c0;
    }
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00754978(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = r6 + r5;
    zf = r0 == 0;
    if (!zf) {
        zf = u32(*gptr<u8>(r7 + 6u)) == 0;
    }
    if (!zf) {
        r0 = ~0u;
        goto L_5a54a0;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005a5240(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r9 = r4 + 8u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005acde8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005a9c48(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = r0;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa0b8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r10 = 1u;
    if (*gptr<u32>(r4 + 0x3cu) == 0) {  // (from the original)
        goto L_5a5480;
    } else {
        r9 = r4 + 8u;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae46c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005a992c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r8 = r0;
        goto L_5a5488;
    }
L_5a5480:;
    if (r8 == 0) {
        goto L_5a54a8;
    }
L_5a5488:;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005adc90(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r0 = r8;
    } else {
        r0 = ~0u;
        *gptr<u8>(r7 + 6u) = u8(r10);
    }
L_5a54a0:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a54a8:;
    if (*gptr<u32>(r4 + 0x3cu) == 0) {  // (from the original)
        goto L_5a54dc;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005a6218(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a54dc;
    }
    if (r0 == 0xbu) {  // (from the original)
        *gptr<u8>(r7 + 6u) = u8(r10);
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a54dc:;
    r8 = r6;
    r10 = r6 + 0x98u;  // (from the original)
    r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r7 = r4 + 8u;
    r9 = r5;
    res = r6;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a55c0;
    }
    do {
L_5a54fc:;
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_00754a3c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0 = call_00754a9c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_007554e4(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0 == 0)) {
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_0013f274(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa450(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r9;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4bc(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r4;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4d4(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_007553d8(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa460(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00755484(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            *gptr<u32>(r13 + 8u) = u32(r0);
            r1 = r13 + 8u;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa47c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r0 = r5 + 0x14u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_007546b4(r0, r1, r2, guest::cpu()->r[3]);
            r2 = guest::cpu()->r[2];
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4ec(r0, r1, r2, guest::cpu()->r[3]);
            r2 = r13;
            r1 = r10;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_0075412c(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r6));
L_5a55c0:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a53c4
GUEST_EXPORT(0x005a53c4, d_005a53c4::f_005a53c4);

// f_005a55cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a55cc {

inline constexpr guest::Function<0x005a566c, u32(u32, u32, u32, u32)> call_005a566c;  // (from the original)

u32 f_005a55cc(u32 r0_unused, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 0x28u;  // (from the original)
    r12 = r3;
    r3 = r13 + 0x28u;  // (from the original)
    r4 = 1u;
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    S1 = std::bit_cast<float>(*gptr<u32>(r3 + 4));
    r3 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r3);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 8u) = u32(r3);
    r3 = r2;
    r2 = r4;
    *gptr<u32>(r13) = u32(r12);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_005a566c(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return guest::cpu()->r[0];
}

}  // namespace d_005a55cc
GUEST_EXPORT(0x005a55cc, d_005a55cc::f_005a55cc);

// f_005a5618: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a5618 {

inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;  // (from the original)

u32 f_005a5618(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r3 = 0u;
    r5 = r0;
    r6 = r1;
    r2 = r3;
    r0 = call_005a9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (*gptr<u32>(r5 + (r6 + (r6 << 3) << 3) + 0x3cu) != 0) {  // (from the original)
        r3 = 0u;
        r2 = 1u;
        r1 = r6;
        r0 = r5;
        r0 = call_005a9e1c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r4 == 0) {
            r4 = r0;
        }
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a5618
GUEST_EXPORT(0x005a5618, d_005a5618::f_005a5618);

// f_005a58cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a58cc {

inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> call_005a5240;  // (from the original)
inline constexpr guest::Function<0x005a5618, u32(u32, u32, u32, u32)> call_005a5618;  // (from the original)
inline constexpr guest::Function<0x005ac67c, u32(u32, u32, u32, u32)> call_005ac67c;  // (from the original)
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> call_00754978;  // (from the original)

u32 f_005a58cc(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r1;
    r5 = r0;
    r6 = 0u;
    r0 = r5 + (r1 + (r4 << 3) << 3) + 8u;
    r0 = call_00754978(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = r4;
        r0 = r5;
        r0 = call_005a5240(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r4;
        r0 = call_005ac67c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 0) {
            r0 = 0xdu;  // (from the original)
            goto L_5a5938;
        }
        r1 = r4;
        r0 = r5;
        r0 = call_005a5618(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r6 = r0;
        if (r0 != 0) {
            goto L_5a5938;
        }
        r1 = r5 + r4;
        *gptr<u8>(r1 + 6u) = u8(0u);
    }
    r0 = r6;
L_5a5938:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a58cc
GUEST_EXPORT(0x005a58cc, d_005a58cc::f_005a58cc);

// f_005a593c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a593c {

inline constexpr guest::Function<0x0013f274, u32(u32, u32, u32, u32)> call_0013f274;  // (from the original)
inline constexpr guest::Function<0x005a5240, u32(u32, u32, u32, u32)> call_005a5240;  // (from the original)
inline constexpr guest::Function<0x005a5618, u32(u32, u32, u32, u32)> call_005a5618;  // (from the original)
inline constexpr guest::Function<0x005a7aa8, u32(u32, u32, u32, u32)> call_005a7aa8;  // (from the original)
inline constexpr guest::Function<0x005a992c, u32(u32, u32, u32, u32)> call_005a992c;  // (from the original)
inline constexpr guest::Function<0x005a9c48, u32(u32, u32, u32, u32)> call_005a9c48;  // (from the original)
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;  // (from the original)
inline constexpr guest::Function<0x005aa0b8, u32(u32, u32, u32, u32)> call_005aa0b8;  // (from the original)
inline constexpr guest::Function<0x005aa450, u32(u32, u32, u32, u32)> call_005aa450;  // (from the original)
inline constexpr guest::Function<0x005aa460, u32(u32, u32, u32, u32)> call_005aa460;  // (from the original)
inline constexpr guest::Function<0x005aa47c, u32(u32, u32, u32, u32)> call_005aa47c;  // (from the original)
inline constexpr guest::Function<0x005aa4bc, u32(u32, u32, u32, u32)> call_005aa4bc;  // (from the original)
inline constexpr guest::Function<0x005aa4d4, u32(u32, u32, u32, u32)> call_005aa4d4;  // (from the original)
inline constexpr guest::Function<0x005aa4ec, u32(u32, u32, u32, u32)> call_005aa4ec;  // (from the original)
inline constexpr guest::Function<0x005acde8, u32(u32, u32, u32, u32)> call_005acde8;  // (from the original)
inline constexpr guest::Function<0x005ae46c, u32(u32, u32, u32, u32)> call_005ae46c;  // (from the original)
inline constexpr guest::Function<0x0075412c, u32(u32, u32, u32, u32)> call_0075412c;  // (from the original)
inline constexpr guest::Function<0x007546b4, u32(u32, u32, u32, u32)> call_007546b4;  // (from the original)
inline constexpr guest::Function<0x00754978, u32(u32, u32, u32, u32)> call_00754978;  // (from the original)
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;  // (from the original)
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> call_00754a9c;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)
inline constexpr guest::Function<0x00755484, u32(u32, u32, u32, u32)> call_00755484;  // (from the original)
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32, u32)> call_007554e4;  // (from the original)

u32 f_005a593c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r7 = r1;
    r8 = r0;
    r5 = 0u;
    r4 = r8 + (r1 + (r7 << 3) << 3);
    r0 = r4 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00754978(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a5b70;
    }
    r1 = r7;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005a5240(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 0x3cu) == 0) {  // (from the original)
        r9 = 0u;
        goto L_5a59a4;
    } else {
        r6 = r4 + 8u;
    }
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae46c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r7;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005a992c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = r0;
L_5a59a4:;
    r10 = r4 + 8u;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005acde8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r7;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_005a9c48(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r9 | r6;
    if (res != 0) {
        if (r9 != 0) {
            if (r6 != 0) {
                r1 = r7;
                r0 = r8;
                guest::cpu()->r[13] = r13;
                r0 = call_005a5240(r0, r1, r2, r3);
            }
            r3 = 1u;
            r2 = r3;
            r1 = r7;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_005a9e1c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                r5 = r0;
            }
        }
        if (r6 != 0) {
            r3 = 1u;
            r2 = 0u;
            r1 = r7;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_005a9e1c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            if (r0 != 0) {
                r5 = r0;
                goto L_5a5b70;
            }
        }
        if (r5 != 0) {
            goto L_5a5b70;
        }
        if (r9 == 0) {
            r1 = 1u;
        } else {
            r1 = 0u;
        }
        if (r6 == 0) {
            r2 = 1u;
        } else {
            r2 = 0u;
        }
        r3 = r4 + 8u;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_005a7aa8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_5a5b74;
        }
    }
    r6 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    r9 = r4 + 8u;
    r10 = r8 + 0x98u;  // (from the original)
    res = r6;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a5b4c;
    }
    do {
L_5a5a88:;
        r1 = r4;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_00754a3c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_00754a9c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r0;
        guest::cpu()->r[13] = r13;
        r0 = call_007554e4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 == 0)) {
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_0013f274(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa450(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r7;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4bc(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r4;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4d4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_007553d8(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa460(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_00755484(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            *gptr<u32>(r13 + 8u) = u32(r0);
            r1 = r13 + 8u;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa47c(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r0 = r5 + 0x14u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_007546b4(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r1 = r0;
            r0 = r13;
            guest::cpu()->r[13] = r13;
            r0 = call_005aa4ec(r0, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r2 = r13;
            r1 = r10;
            r0 = r8;
            guest::cpu()->r[13] = r13;
            r0 = call_0075412c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r6));
L_5a5b4c:;
    r1 = r7;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005a5618(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    if (r0 != 0) {
        goto L_5a5b74;
    }
    r1 = r8 + r7;
    *gptr<u8>(r1 + 6u) = u8(0u);
L_5a5b70:;
    r0 = r5;
L_5a5b74:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a593c
GUEST_EXPORT(0x005a593c, d_005a593c::f_005a593c);

// f_005a6218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6218 {

inline constexpr guest::Function<0x005a5618, u32(u32, u32, u32, u32)> call_005a5618;  // (from the original)
inline constexpr guest::Function<0x005a5e9c, u32(u32, u32, u32, u32)> call_005a5e9c;  // (from the original)
inline constexpr guest::Function<0x005a6350, u32(u32, u32, u32, u32)> call_005a6350;  // (from the original)
inline constexpr guest::Function<0x005a7910, u32(u32, u32, u32, u32)> call_005a7910;  // (from the original)
inline constexpr guest::Function<0x005a7f70, u32(u32, u32, u32, u32)> call_005a7f70;  // (from the original)
inline constexpr guest::Function<0x005a9e1c, u32(u32, u32, u32, u32)> call_005a9e1c;  // (from the original)
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;  // (from the original)

u32 f_005a6218(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
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
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r5 = r0;
    r8 = r1;
    r9 = r5 + (r1 + (r8 << 3) << 3);
    if (*gptr<u32>(r9 + 0x3cu) == 0) {  // (from the original)
        goto L_5a6348;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a6350(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5a62b8;
    }
    r6 = *gptr<u32>(r9 + 0x10u);  // (from the original)
    r7 = 0u;
    r10 = r9 + 8u;
    res = r6;
    r11 = r7;
    r4 = r7;
    if (u32(res == 0) || res >> 0x1f != (r6 & (r6 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a6328;
    }
L_5a6264:;
    if (u32(*gptr<u8>(r5 + 5u)) == 0) {
        goto L_5a62bc;
    }
    r3 = 0u;
    r2 = r3;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a9e1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    r11 = 0xbu;  // (from the original)
    if (*gptr<u32>(r9 + 0x3cu) != 0) {  // (from the original)
        r3 = 0u;
        r2 = 1u;
        r1 = r8;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_005a9e1c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    r0 = r11;
L_5a62b8:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a62bc:;
    r1 = r4;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a3c(r0, r1, r2, r3);
    r11 = r0;
    r3 = 0u;
    r1 = r0;
    r2 = r3;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005a7910(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = r11;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_005a7f70(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r7 = 1u;
    }
    r4 = r4 + 1u;
    res = r6 - r4;
    if (!u32(res == 0) && res >> 0x1f == ((r6 ^ r4) & (r6 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_5a6264;
    }
    if (r7 == 0) {
        goto L_5a6330;
    }
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a5618(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = r0;
    if (r0 == 0) {
        goto L_5a6330;
    }
L_5a6328:;
    r0 = r11;
    if (r11 != 0) {
        guest::preempt();
        goto L_5a62b8;
    }
L_5a6330:;
    r1 = r8;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005a5e9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        guest::preempt();
        goto L_5a62b8;
    }
L_5a6348:;
    r0 = 0u;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a6218
GUEST_EXPORT(0x005a6218, d_005a6218::f_005a6218);

// f_005a66d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a66d4 {

struct __attribute__((packed)) Object_005a66d4_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_005a66d4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a66d4_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a66d4_0, byte_5, 0x5);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_005a66d4(gptr<Object_005a66d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_0 = u32(0x907de8u);  // (from the original)
    arg0->byte_4 = u8(r4);
    arg0->byte_5 = u8(r4);
    r1 = 0x5aa120u;  // (from the original)
    r3 = 2u;
    r2 = 0x48u;  // (from the original)
    r0 = r0 + 8u;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 8u;
    *gptr<u32>(r0 + 0x9cu) = u32(0x20u);  // (from the original)
    *gptr<u32>(r0 + 0xa0u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xa8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 6u) = u8(r4);
    *gptr<u8>(r0 + 7u) = u8(r4);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a66d4
GUEST_EXPORT(0x005a66d4, d_005a66d4::f_005a66d4);

// f_005a68e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a68e8 {

struct __attribute__((packed)) Object_005a68e8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005a68e8_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32, u32)> call_0010181c;  // (from the original)
inline constexpr guest::Function<0x005aed38, u32(u32, u32, u32, u32)> call_005aed38;  // (from the original)
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;  // (from the original)
inline constexpr guest::Function<0x005b01b0, u32(u32, u32, u32, u32)> call_005b01b0;  // (from the original)
inline constexpr guest::Function<0x005b027c, u32(u32, u32, u32, u32)> call_005b027c;  // (from the original)
inline constexpr guest::Function<0x005b05a8, u32(u32, u32, u32, u32)> call_005b05a8;  // (from the original)
inline constexpr guest::Function<0x005b05b4, u32(u32, u32, u32, u32)> call_005b05b4;  // (from the original)
inline constexpr guest::Function<0x00755290, u32(u32, u32, u32, u32)> call_00755290;  // (from the original)
inline constexpr guest::Function<0x007552e8, u32(u32, u32, u32, u32)> call_007552e8;  // (from the original)
inline constexpr guest::Function<0x00755384, u32(u32, u32, u32, u32)> call_00755384;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)

u32 f_005a68e8(gptr<Object_005a68e8_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_c;
    r13 = r13 - 0x28u;  // (from the original)
    if (r0 == 0) {
        goto L_5a697c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a697c;
    }
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00755290(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a6978;
    }
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007552e8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00100834(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    res = r0 - 8u;
    r6 = r0;
    if (res >> 0x1f != ((r0 ^ 8u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a6978;
    }
    r1 = 0x5a6a38u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b01b0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x5a6a38u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b05a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (s32(r6) <= s32(8u)) {
        goto L_5a69c0;
    }
    r0 = r6 - 9u;
    if (u32(*gptr<u16>(r5 + 0x10u)) != 0x2eu) {  // (from the original)
        goto L_5a6978;
    }
    if (s32(r0) < s32(1u)) {
        goto L_5a6978;
    }
    if (s32(r0) <= s32(4u)) {
        goto L_5a6984;
    }
L_5a6978:;
    r0 = 2u;
L_5a697c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a6984:;
    r2 = 8u;
    r1 = r5;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0010181c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u16>(r13 + 0x10u) = u16(0u);  // (from the original)
    r1 = r13;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b027c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r5 + 0x12u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b05b4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    goto L_5a69d8;
L_5a69c0:;
    r1 = r5;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b027c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x5a6a38u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b05a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_5a69d8:;
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005aed38(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a6a14;
    }
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00755384(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_5a6a14;
    }
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        r0 = 1u;
        guest::preempt();
        goto L_5a697c;
    }
L_5a6a14:;
    r1 = 0x5a6a38u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b01b0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x5a6a38u;  // (from the original)
    r0 = r4 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b05a8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 2u;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a68e8
GUEST_EXPORT(0x005a68e8, d_005a68e8::f_005a68e8);

// f_005a6b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6b8c {

struct __attribute__((packed)) Object_005a6b8c_0 {
    u32 word_0;
    u8 byte_4;
    u8 unknown_5[0x3];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_005a6b8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a6b8c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a6b8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a6b8c_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> call_005a8af0;  // (from the original)

u32 f_005a6b8c(gptr<Object_005a6b8c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    r1 = 2u;
    arg0->word_0 = u32(r0);
    arg0->byte_4 = u8(r1);
    arg0->word_8 = u32(r0);
    arg0->word_c = u32(r0);
    r0 = r4 + 0x10u;  // (from the original)
    r0 = call_005a8af0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a6b8c
GUEST_EXPORT(0x005a6b8c, d_005a6b8c::f_005a6b8c);

// f_005a6c4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a6c4c {


u32 f_005a6c4c(u32 r0, u32 r1) {
    r1 = r1 + (r1 << 3);
    r0 = r0 + (r1 << 1) + 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a6c4c
GUEST_EXPORT(0x005a6c4c, d_005a6c4c::f_005a6c4c);

// f_005a7910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7910 {

inline constexpr guest::Function<0x005a8af0, u32(u32, u32, u32, u32)> call_005a8af0;  // (from the original)
inline constexpr guest::Function<0x005aa720, u32(u32, u32, u32, u32)> call_005aa720;  // (from the original)
inline constexpr guest::Function<0x005aa848, u32(u32, u32, u32, u32)> call_005aa848;  // (from the original)
inline constexpr guest::Function<0x005ab768, u32(u32, u32, u32, u32)> call_005ab768;  // (from the original)
inline constexpr guest::Function<0x005ac2b0, u32(u32, u32, u32, u32)> call_005ac2b0;  // (from the original)
inline constexpr guest::Function<0x005ac4f4, u32(u32, u32, u32, u32)> call_005ac4f4;  // (from the original)
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;  // (from the original)
inline constexpr guest::Function<0x005af3d4, u32(u32, u32, u32, u32)> call_005af3d4;  // (from the original)
inline constexpr guest::Function<0x005b0164, u32(u32, u32, u32, u32)> call_005b0164;  // (from the original)
inline constexpr guest::Function<0x005b0450, u32(u32, u32, u32, u32)> call_005b0450;  // (from the original)
inline constexpr guest::Function<0x005b0478, u32(u32, u32, u32, u32)> call_005b0478;  // (from the original)
inline constexpr guest::Function<0x005b0588, u32(u32, u32, u32, u32)> call_005b0588;  // (from the original)
inline constexpr guest::Function<0x00754a70, u32(u32, u32, u32, u32)> call_00754a70;  // (from the original)
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> call_00754a9c;  // (from the original)
inline constexpr guest::Function<0x00754c88, u32(u32, u32, u32, u32)> call_00754c88;  // (from the original)
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32, u32)> call_007554e4;  // (from the original)

u32 f_005a7910(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x90u;  // (from the original)
    r6 = r2;
    r9 = r0;
    r7 = r3;
    r4 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r4 = 0u;
    r11 = 0x2cu;  // (from the original)
    r5 = r4;
    if ((*gptr<u32>(r0 + 0xcu) & 1u) == 0) {  // (from the original)
        goto L_5a7a18;
    }
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00754c88(r0, r1, r2, r3);
    r2 = 1u;
    *gptr<u32>(r13 + 0x64u) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x64u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    r3 = r2;
    r1 = r11;
    r2 = r9;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ac4f4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13 + 0x60u;  // (from the original)
    r1 = r13 + 8u;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r2 = u32(*gptr<u8>(r13 + 0x60u));  // (from the original)
    if (r2 == 0) {
        goto L_5a7a18;
    }
    res = r0 | r1;
    if (res != 0) {
        goto L_5a7a18;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8af0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0588(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00754c88(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x50u) = u32(r0);  // (from the original)
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0164(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00754c88(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x50u) = u32(r0);  // (from the original)
    r2 = 1u;
    r1 = r13 + 0x50u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0478(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b0450(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = r13;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005ac2b0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa720(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 1u;
L_5a7a18:;
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_007554e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5a7a8c;
    }
    *gptr<u32>(r13) = u32(0u);
    r1 = r11;
    r3 = r10;
    r2 = r9;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r13 + 4u;
    r1 = r13 + 8u;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab768(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 4u)) == 0) {
        goto L_5a7a8c;
    }
    res = r0 | r1;
    if (res != 0) {
        goto L_5a7a8c;
    }
    r2 = 1u;
    r1 = r10;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_005af3d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa848(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 1u;
L_5a7a8c:;
    if (r6 != 0) {
        *gptr<u8>(r6) = u8(r4);
    }
    if (r7 != 0) {
        *gptr<u8>(r7) = u8(r5);
    }
    r0 = r4 | r5;
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a7910
GUEST_EXPORT(0x005a7910, d_005a7910::f_005a7910);

// f_005a7aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7aa8 {

inline constexpr guest::Function<0x005a7540, u32(u32, u32, u32, u32)> call_005a7540;  // (from the original)
inline constexpr guest::Function<0x005a7b2c, u32(u32, u32, u32, u32)> call_005a7b2c;  // (from the original)
inline constexpr guest::Function<0x005a7e10, u32(u32, u32, u32, u32)> call_005a7e10;  // (from the original)
inline constexpr guest::Function<0x005a802c, u32(u32, u32, u32, u32)> call_005a802c;  // (from the original)

u32 f_005a7aa8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r4 = r2;
    r7 = 0x9816b8u;  // (from the original)
    r0 = 0u;
    r5 = r3;
    *gptr<u8>(r7) = u8(r0);
    if ((r1 & r4) == 0) {
        if (r1 == 0) {
            r1 = r3;
            r0 = r6;
            r0 = call_005a7e10(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (r4 == 0) {
            r1 = r5;
            r0 = r6;
            r0 = call_005a7b2c(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        if (*gptr<u32>(r5 + 0x34u) != 0) {  // (from the original)
            r1 = r5;
            r0 = r6;
            r0 = call_005a7540(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = r5;
        r0 = r6;
        r0 = call_005a802c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r0 = u32(*gptr<u8>(r7));
        if (r0 != 0) {
            r0 = 0xbu;  // (from the original)
        }
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a7aa8
GUEST_EXPORT(0x005a7aa8, d_005a7aa8::f_005a7aa8);

// f_005a7f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a7f70 {

inline constexpr guest::Function<0x005a8728, u32(u32, u32, u32, u32)> call_005a8728;  // (from the original)
inline constexpr guest::Function<0x005a8870, u32(u32, u32, u32, u32)> call_005a8870;  // (from the original)
inline constexpr guest::Function<0x005a89b0, u32(u32, u32, u32, u32)> call_005a89b0;  // (from the original)
inline constexpr guest::Function<0x00754a70, u32(u32, u32, u32, u32)> call_00754a70;  // (from the original)
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> call_00754a9c;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32, u32)> call_007554e4;  // (from the original)

u32 f_005a7f70(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r0 = r1;
    r0 = call_00754a9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r7 = r0;
    r0 = r5;
    r0 = call_00754a70(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if ((*gptr<u32>(r0 + 0xcu) & 1u) != 0) {  // (from the original)
        r0 = r7;
        r0 = call_007554e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_5a8008;
        }
        r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        if ((r0 & 1u) != 0) {
            goto L_5a8028;
        }
    }
    r0 = r7;
    r0 = call_007554e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_5a8028;
    }
    r0 = r5;
    r0 = call_00754a9c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = call_007553d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 1u) {
        goto L_5a8018;
    }
    if (r0 != 2u) {
        goto L_5a8028;
    }
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_005a8870(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5a8008:;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_005a8728(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5a8018:;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return call_005a89b0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
L_5a8028:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a7f70
GUEST_EXPORT(0x005a7f70, d_005a7f70::f_005a7f70);

// f_005a802c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a802c {

inline constexpr guest::Function<0x005a4030, u32(u32, u32, u32, u32)> call_005a4030;  // (from the original)
inline constexpr guest::Function<0x005a4418, u32(u32, u32, u32, u32)> call_005a4418;  // (from the original)
inline constexpr guest::Function<0x005a455c, u32(u32, u32, u32, u32)> call_005a455c;  // (from the original)
inline constexpr guest::Function<0x005a9250, u32(u32, u32, u32, u32)> call_005a9250;  // (from the original)
inline constexpr guest::Function<0x005aa1b0, u32(u32, u32, u32, u32)> call_005aa1b0;  // (from the original)
inline constexpr guest::Function<0x005aa914, u32(u32, u32, u32, u32)> call_005aa914;  // (from the original)
inline constexpr guest::Function<0x005aa970, u32(u32, u32, u32, u32)> call_005aa970;  // (from the original)
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;  // (from the original)
inline constexpr guest::Function<0x005adf88, u32(u32, u32, u32, u32)> call_005adf88;  // (from the original)
inline constexpr guest::Function<0x005b0b6c, u32(u32, u32, u32, u32)> call_005b0b6c;  // (from the original)
inline constexpr guest::Function<0x005b0efc, u32(u32, u32, u32, u32)> call_005b0efc;  // (from the original)
inline constexpr guest::Function<0x005b106c, u32(u32, u32, u32, u32)> call_005b106c;  // (from the original)
inline constexpr guest::Function<0x00754a3c, u32(u32, u32, u32, u32)> call_00754a3c;  // (from the original)
inline constexpr guest::Function<0x00754a70, u32(u32, u32, u32, u32)> call_00754a70;  // (from the original)
inline constexpr guest::Function<0x00754a9c, u32(u32, u32, u32, u32)> call_00754a9c;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)
inline constexpr guest::Function<0x007554e4, u32(u32, u32, u32, u32)> call_007554e4;  // (from the original)

u32 f_005a802c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r13 = guest::cpu()->r[13];
    r4 = 0u;
    r13 = r13 - 0x138u;  // (from the original)
    r6 = r0;
    r5 = r1;
    r10 = 0x9816b8u;  // (from the original)
    r8 = r4;
    r9 = 0x2cu;  // (from the original)
    goto L_5a81f4;
L_5a8050:;
    r0 = u32(*gptr<u8>(r10));
    if (r0 != 0) {
        goto L_5a8200;
    }
    r1 = r4;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00754a70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = r0;
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_007554e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a81f0;
    }
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r7 = r0;
    r3 = *gptr<u32>(r13 + 4u);
    r1 = r9;
    r2 = r6;
    r0 = r13 + 0xb8u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_005aa1b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = *gptr<u32>(r13 + 4u);
    r2 = r6;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005aa970(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aa914(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_5a81e8;
    }
    if (r7 != 1u) {
        if (r7 == 2u) {
            goto L_5a8180;
        }
        goto L_5a81e8;
    }
    r7 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2 = r7;
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a4418(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a4030(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a816c;
    }
    r0 = *gptr<u32>(r13 + 4u);
    r1 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005adf88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r11 == 0) {
        goto L_5a816c;
    }
    ea = r13 + 4u;
    ea = *gptr<u32>(ea) + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r11) = u32(*gptr<u32>(ea));
    *gptr<u32>(r11 + 4) = u32(r1);
L_5a816c:;
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a455c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_5a81e8;
L_5a8180:;
    r7 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2 = r7;
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b0efc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b0b6c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5a81e0;
    }
    r0 = *gptr<u32>(r13 + 4u);
    r1 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005adf88(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r11 == 0) {
        goto L_5a81e0;
    }
    ea = r13 + 4u;
    ea = *gptr<u32>(ea) + 0x14u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r11) = u32(*gptr<u32>(ea));
    *gptr<u32>(r11 + 4) = u32(r1);
L_5a81e0:;
    r0 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005b106c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5a81e8:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005a9250(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5a81f0:;
    r4 = r4 + 1u;
L_5a81f4:;
    r0 = *gptr<u32>(r5 + 8u);
    res = r0 - r4;
    if (!u32(res == 0) && res >> 0x1f == ((r0 ^ r4) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_5a8050;
    }
L_5a8200:;
    r13 = r13 + 0x138u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a802c
GUEST_EXPORT(0x005a802c, d_005a802c::f_005a802c);

// f_005a8b24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8b24 {

inline constexpr guest::Function<0x005a8b9c, u32(u32, u32, u32, u32)> call_005a8b9c;  // (from the original)
inline constexpr guest::Function<0x005a8c34, u32(u32, u32, u32, u32)> call_005a8c34;  // (from the original)

u32 f_005a8b24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r0;
    r4 = r2;
    r5 = r3;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8c34(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4);
    res = u32(u64(r5) + ~r1 + u32(r4 >= *gptr<u32>(r13)));
    r0 = r13;
    if (res >> 0x1f == ((r5 ^ r1) & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5a8b68;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005a8c34(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r6 + 4) = u32(r1);
L_5a8b60:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a8b68:;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8b9c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4);
    res = u32(u64(r1) + ~r5 + u32(*gptr<u32>(r13) >= r4));
    r0 = res;
    if (res >> 0x1f == ((r1 ^ r5) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        *gptr<u32>(r6) = u32(r4);
        *gptr<u32>(r6 + 4) = u32(r5);
        guest::preempt();
        goto L_5a8b60;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005a8b9c(r0, r1, r2, r3);
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    *gptr<u32>(r6) = u32(r0);
    *gptr<u32>(r6 + 4) = u32(r1);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8b24
GUEST_EXPORT(0x005a8b24, d_005a8b24::f_005a8b24);

// f_005a8da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8da4 {

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> call_001264f0;  // (from the original)
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;  // (from the original)

u32 f_005a8da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r5 = r13 + 0x18u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00124130(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r13 + 0x30u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(ea));
    *gptr<u32>(r1 + 4) = u32(r2);
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001264f0(r0, r1, r2, r3);
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x29u))));  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r13 + 0x28u))));  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(*gptr<u8>(r13 + 0x27u)))));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r5;
    r3 = u32(s32(s8(*gptr<u8>(r13 + 0x25u))));  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x24u))));  // (from the original)
    r1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a8cc0(r0, r1, r2, r3);
    ea = r13 + 0x18u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r4 + 4) = u32(r1);
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8da4
GUEST_EXPORT(0x005a8da4, d_005a8da4::f_005a8da4);

// f_005a8e08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8e08 {

inline constexpr guest::Function<0x00124130, u32(u32, u32, u32, u32)> call_00124130;  // (from the original)
inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> call_001264f0;  // (from the original)
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;  // (from the original)

u32 f_005a8e08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r4 = r0;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00124130(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    ea = r13 + 0x28u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r1 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r1) = u32(*gptr<u32>(ea));
    *gptr<u32>(r1 + 4) = u32(r2);
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001264f0(r0, r1, r2, r3);
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x21u))));  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r13 + 0x20u))));  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(*gptr<u8>(r13 + 0x1fu)))));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r4;
    r3 = u32(s32(s8(*gptr<u8>(r13 + 0x1du))));  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x1cu))));  // (from the original)
    r1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a8cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8e08
GUEST_EXPORT(0x005a8e08, d_005a8e08::f_005a8e08);

// f_005a8e60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8e60 {

inline constexpr guest::Function<0x001264f0, u32(u32, u32, u32, u32)> call_001264f0;  // (from the original)
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;  // (from the original)

u32 f_005a8e60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001264f0(r0, r1, r2, r3);
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x15u))));  // (from the original)
    r1 = u32(s32(s8(*gptr<u8>(r13 + 0x14u))));  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(*gptr<u8>(r13 + 0x13u)))));  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r4;
    r3 = u32(s32(s8(*gptr<u8>(r13 + 0x11u))));  // (from the original)
    r2 = u32(s32(s8(*gptr<u8>(r13 + 0x10u))));  // (from the original)
    r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a8cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8e60
GUEST_EXPORT(0x005a8e60, d_005a8e60::f_005a8e60);

// f_005a8ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8ea0 {

inline constexpr guest::Function<0x002fa9d0, u32(u32, u32, u32, u32)> call_002fa9d0;  // (from the original)
inline constexpr guest::Function<0x005a8cc0, u32(u32, u32, u32, u32)> call_005a8cc0;  // (from the original)
inline constexpr guest::Function<0x005af6dc, u32(u32, u32, u32, u32)> call_005af6dc;  // (from the original)

u32 f_005a8ea0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r1;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa9d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    zf = r0 == 0x13u;  // (from the original)
    if (zf) {
        zf = u32(*gptr<u8>(r4 + 4u)) == 0x3au;  // (from the original)
    }
    if (!zf) {
        goto L_5a8ef0;
    }
    zf = u32(*gptr<u8>(r4 + 7u)) == 0x3au;  // (from the original)
    if (zf) {
        zf = u32(*gptr<u8>(r4 + 0xau)) == 0x20u;  // (from the original)
    }
    if (!zf) {
        goto L_5a8ef0;
    }
    zf = u32(*gptr<u8>(r4 + 0xdu)) == 0x3au;  // (from the original)
    if (zf) {
        zf = u32(*gptr<u8>(r4 + 0x10u)) == 0x3au;  // (from the original)
    }
    if (zf) {
        goto L_5a8efc;
    }
L_5a8ef0:;
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5a8efc:;
    r2 = 4u;
    r1 = r4;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r4 + 5u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r4 + 8u;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r4 + 0xbu;  // (from the original)
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r4 + 0xeu;  // (from the original)
    r0 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = 2u;
    r1 = r4 + 0x11u;  // (from the original)
    r0 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005af6dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r13 + 0xcu;  // (from the original)
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r5;
    r1 = *gptr<u32>(r4);
    r2 = *gptr<u32>(r4 + 4);
    r3 = *gptr<u32>(r4 + 8);
    guest::cpu()->r[13] = r13;
    r0 = call_005a8cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 1u;
    }
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8ea0
GUEST_EXPORT(0x005a8ea0, d_005a8ea0::f_005a8ea0);

// f_005a8fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a8fd0 {

struct __attribute__((packed)) Object_005a8fd0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_005a8fd0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005a8fd0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005a8fd0_0, byte_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x005a3c04, u32(u32, u32, u32, u32)> call_005a3c04;  // (from the original)
inline constexpr guest::Function<0x005ac2bc, u32(u32, u32, u32, u32)> call_005ac2bc;  // (from the original)
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;  // (from the original)
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> call_005ad690;  // (from the original)

u32 f_005a8fd0(gptr<Object_005a8fd0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0xa8u;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(arg0->byte_18))));
    r3 = arg0->word_14;
    r2 = u32(arg0->byte_10);
    r0 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ad690(r0, r1, r2, r3);
    r1 = 0x2cu;  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(*gptr<u8>(r4 + 0x18u)))));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    r2 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ac2bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r13 = r13 + 0xa8u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r2 = r13 + 8u;
    *gptr<u32>(r13) = u32(*gptr<u32>(r4 + 0x20u));  // (from the original)
    r3 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x10u));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005a3c04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = u32(s32(s8(*gptr<u8>(r4 + 8u))));
    r13 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005a8fd0
GUEST_EXPORT(0x005a8fd0, d_005a8fd0::f_005a8fd0);

// f_005a9054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a9054 {

struct __attribute__((packed)) Object_005a9054_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_005a9054_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005a9054_0, word_20, 0x20);  // (from the original)


void f_005a9054(gptr<Object_005a9054_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    float S1 = 0;
    r13 = r13 - 8;
    r4 = r13 + 0xcu;  // (from the original)
    r12 = *gptr<u32>(r13 + 8u);
    S0 = std::bit_cast<float>(*gptr<u32>(r4));
    S1 = std::bit_cast<float>(*gptr<u32>(r4 + 4));
    arg0->word_4 = u32(r1);
    arg0->byte_8 = u8(1u);
    arg0->word_c = u32(0u);
    r1 = 0x907df8u;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->byte_10 = u8(r2);
    arg0->word_14 = u32(r3);
    arg0->byte_18 = u8(r12);
    arg0->word_1c = u32(std::bit_cast<u32>(S0));
    arg0->word_20 = u32(std::bit_cast<u32>(S1));
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005a9054
GUEST_EXPORT(0x005a9054, d_005a9054::f_005a9054);

// f_005a90b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a90b0 {

struct __attribute__((packed)) Object_005a90b0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 byte_10;
};
GUEST_OFFSET(Object_005a90b0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005a90b0_0, byte_10, 0x10);  // (from the original)


void f_005a90b0(gptr<Object_005a90b0_0> arg0, u32 r1) {
    *gptr<u32>(arg0->word_c + 0x10u) = u32(r1);  // (from the original)
    arg0->byte_10 = u8(1u);
    return;
}

}  // namespace d_005a90b0
GUEST_EXPORT(0x005a90b0, d_005a90b0::f_005a90b0);

// f_005a90c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a90c4 {

struct __attribute__((packed)) Object_005a90c4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005a90c4_0, word_c, 0xc);  // (from the original)


u32 f_005a90c4(gptr<Object_005a90c4_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 zf = 0;
    zf = r1 == 0;
    r1 = arg0->word_c;
    r0 = u32(*gptr<u16>(r1 + 0x14u));  // (from the original)
    if (zf) {
        r0 = r0 & ~0x10u;  // (from the original)
    } else {
        r0 = r0 | 0x10u;  // (from the original)
    }
    *gptr<u16>(r1 + 0x14u) = u16(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a90c4
GUEST_EXPORT(0x005a90c4, d_005a90c4::f_005a90c4);

// f_005a91e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a91e0 {


void f_005a91e0(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9816a8u;  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r0);
    *gptr<u8>(r1) = u8(1u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005a91e0
GUEST_EXPORT(0x005a91e0, d_005a91e0::f_005a91e0);

// f_005a9c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005a9c14 {

struct __attribute__((packed)) Object_005a9c14_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 unknown_24[0x8];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Object_005a9c14_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005a9c14_0, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Object_005a9c14_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005a9c14_1, word_0, 0x0);  // (from the original)


u32 f_005a9c14(gptr<Object_005a9c14_0> arg0, gptr<Object_005a9c14_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    if (arg0->word_20 != 0) {
        *gptr<u32>(arg0->word_2c + 0x10u) = u32(arg1->word_0);  // (from the original)
    }
    if (*gptr<u32>(r0 + 0x34u) == 0) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = *gptr<u32>(r0 + 0x40u);  // (from the original)
    r1 = *gptr<u32>(r1);
    *gptr<u32>(r0 + 0xcu) = u32(r1);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005a9c14
GUEST_EXPORT(0x005a9c14, d_005a9c14::f_005a9c14);

// f_005aa410: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa410 {

struct __attribute__((packed)) Object_005aa410_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_005aa410_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aa410_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005aa410_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005aa410_0, byte_9, 0x9);  // (from the original)


void f_005aa410(gptr<Object_005aa410_0> arg0) {
    u32 r1 = 0;
    u32 r2 = 0;
    r2 = 0x907e4cu;  // (from the original)
    r1 = 0u;
    arg0->word_0 = u32(r2);
    arg0->word_4 = u32(r2 + 0x20u);  // (from the original)
    arg0->byte_8 = u8(r1);
    arg0->byte_9 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa410
GUEST_EXPORT(0x005aa410, d_005aa410::f_005aa410);

// f_005aa460: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa460 {


void f_005aa460(gptr<WordPair> arg0, u32 r1) {
    r1 = 0x1cu & r1 << 2 | u32(arg0->second) & ~0x1cu;  // (from the original)
    arg0->second = u32((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa460
GUEST_EXPORT(0x005aa460, d_005aa460::f_005aa460);

// f_005aa47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa47c {

struct __attribute__((packed)) Object_005aa47c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005aa47c_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aa47c_1, half_2, 0x2);  // (from the original)


void f_005aa47c(gptr<WordPair> arg0, gptr<Object_005aa47c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r2 = u32(arg0->second) & ~0x7000u & ~0xfe0u | ~0x1f8000u & u32(arg1->half_0) << 5;  // (from the original)
    arg0->second = u32((r2));
    r1 = ~0x60000000u & u32(arg1->half_2) << 0xf | r2 & ~0x1fc00000u & ~0x3f8000u;  // (from the original)
    arg0->second = u32((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa47c
GUEST_EXPORT(0x005aa47c, d_005aa47c::f_005aa47c);

// f_005aa4bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4bc {


void f_005aa4bc(gptr<WordPair> arg0, u32 r1) {
    r1 = r1 & 3u | u32(arg0->second) & ~3u;
    arg0->second = u32((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa4bc
GUEST_EXPORT(0x005aa4bc, d_005aa4bc::f_005aa4bc);

// f_005aa4d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4d4 {


void f_005aa4d4(gptr<WordPair> arg0, u32 r1) {
    r1 = u32(arg0->first) << 0xe >> 0xe | r1 << 0x12;  // (from the original)
    arg0->first = u32((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa4d4
GUEST_EXPORT(0x005aa4d4, d_005aa4d4::f_005aa4d4);

// f_005aa4ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa4ec {


void f_005aa4ec(gptr<WordPair> arg0, u32 r1) {
    r1 = r1 << 0xe >> 0xe | u32(arg0->first) >> 0x12 << 0x12;  // (from the original)
    arg0->first = u32((r1));
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa4ec
GUEST_EXPORT(0x005aa4ec, d_005aa4ec::f_005aa4ec);

// f_005aa638: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa638 {

struct __attribute__((packed)) Object_005aa638_0 {
    u8 unknown_0[0x4e];  // (not used here)
    u16 half_4e;
};
GUEST_OFFSET(Object_005aa638_0, half_4e, 0x4e);  // (from the original)


u32 f_005aa638(gptr<Object_005aa638_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    r0 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(r0 + (r1 << 2) + 0x18u) = u32(r2);  // (from the original)
    r1 = u32(arg0->half_4e) | lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->half_4e = u16(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aa638
GUEST_EXPORT(0x005aa638, d_005aa638::f_005aa638);

// f_005aa65c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa65c {

struct __attribute__((packed)) Object_005aa65c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_005aa65c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aa65c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005aa65c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005aa65c_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_005aa65c_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005aa65c_0, byte_5, 0x5);  // (from the original)


void f_005aa65c(gptr<Object_005aa65c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    u32 cf = 0;
    r1 = r2 & 0xfu;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (!cf || zf) {
        r1 = r1 + 0x30u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r1 + 0x57u;  // (from the original)
    }
    r2 = r2 >> 4;
    r3 = sxtb(r1);
    r1 = r2 & 0xfu;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (!cf || zf) {
        r1 = r1 + 0x30u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r1 + 0x57u;  // (from the original)
    }
    arg0->byte_4 = u8(r3);
    r3 = sxtb(r1);
    r2 = r2 >> 4;
    r1 = r2 & 0xfu;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (!cf || zf) {
        r1 = r1 + 0x30u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r1 + 0x57u;  // (from the original)
    }
    arg0->byte_3 = u8(r3);
    r3 = sxtb(r1);
    r2 = r2 >> 4;
    r1 = r2 & 0xfu;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (!cf || zf) {
        r1 = r1 + 0x30u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r1 + 0x57u;  // (from the original)
    }
    arg0->byte_2 = u8(r3);
    r3 = r2 >> 4;
    r2 = sxtb(r1);
    r1 = r3 & 0xfu;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (!cf || zf) {
        r1 = r1 + 0x30u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r1 + 0x57u;  // (from the original)
    }
    arg0->byte_1 = u8(r2);
    arg0->byte_0 = u8(sxtb(r1));
    r1 = 0u;
    arg0->byte_5 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa65c
GUEST_EXPORT(0x005aa65c, d_005aa65c::f_005aa65c);

// f_005aa6f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa6f0 {

struct __attribute__((packed)) Object_005aa6f0_0 {
    u8 unknown_0[0x40];  // (not used here)
    u32 word_40;
    u32 word_44;
};
GUEST_OFFSET(Object_005aa6f0_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005aa6f0_0, word_44, 0x44);  // (from the original)

struct __attribute__((packed)) Object_005aa6f0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005aa6f0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aa6f0_1, word_4, 0x4);  // (from the original)


void f_005aa6f0(gptr<Object_005aa6f0_0> arg0, gptr<Object_005aa6f0_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r1 = arg1->word_0;
    r2 = arg1->word_4;
    arg0->word_40 = u32(r1);
    arg0->word_44 = u32(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa6f0
GUEST_EXPORT(0x005aa6f0, d_005aa6f0::f_005aa6f0);

// f_005aa700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa700 {

struct __attribute__((packed)) Object_005aa700_0 {
    u8 unknown_0[0x48];  // (not used here)
    u32 word_48;
    u8 unknown_4c[0x2c];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(Object_005aa700_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005aa700_0, byte_78, 0x78);  // (from the original)


void f_005aa700(gptr<Object_005aa700_0> arg0, u32 r1) {
    arg0->word_48 = u32(r1);
    arg0->byte_78 = u8(1u);
    return;
}

}  // namespace d_005aa700
GUEST_EXPORT(0x005aa700, d_005aa700::f_005aa700);

// f_005aa710: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa710 {

struct __attribute__((packed)) Object_005aa710_0 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Object_005aa710_0, byte_a, 0xa);  // (from the original)


void f_005aa710(gptr<Object_005aa710_0> arg0, u32 r1) {
    u32 zf = 0;
    zf = r1 == 0;
    if (!zf) {
        zf = r1 == 1u;
    }
    if (zf) {
        arg0->byte_a = u8(r1);
    }
    return;
}

}  // namespace d_005aa710
GUEST_EXPORT(0x005aa710, d_005aa710::f_005aa710);

// f_005aa73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa73c {

struct __attribute__((packed)) Object_005aa73c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_005aa73c_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_005aa73c_1 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Object_005aa73c_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aa73c_1, half_2, 0x2);  // (from the original)


void f_005aa73c(gptr<Object_005aa73c_0> arg0, gptr<Object_005aa73c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    r2 = arg0->word_c & ~0x700u & ~0xfeu | ~0x1f800u & u32(arg1->half_0) << 1;  // (from the original)
    arg0->word_c = u32(r2);
    r1 = 0x3f800u & u32(arg1->half_2) << 0xb | r2 & ~0x3f800u;  // (from the original)
    arg0->word_c = u32(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa73c
GUEST_EXPORT(0x005aa73c, d_005aa73c::f_005aa73c);

// f_005aa778: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa778 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x005a8b14, u32(u32, u32, u32, u32)> call_005a8b14;  // (from the original)

u32 f_005aa778(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 zf = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r1 = 0x6cu;  // (from the original)
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_005a8b14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    zf = r5 == 1u;
    r0 = 4u;
    if (!zf) {
        zf = r5 == 2u;
    }
    *gptr<u8>(r4 + 0xdu) = u8(r0);  // (from the original)
    if (zf) {
        r0 = 0u;
        goto L_5aa7b8;
    }
    if (r5 == 3u) {
        r0 = 9u;
    } else {
        goto L_5aa7bc;
    }
L_5aa7b8:;
    *gptr<u8>(r4 + 0x20u) = u8(r0);  // (from the original)
L_5aa7bc:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aa778
GUEST_EXPORT(0x005aa778, d_005aa778::f_005aa778);

// f_005aa7c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa7c0 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x005a8b14, u32(u32, u32, u32, u32)> call_005a8b14;  // (from the original)

u32 f_005aa7c0(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x6cu;  // (from the original)
    r0 = call_002f825c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r0 = call_005a8b14(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0xdu) = u8(4u);  // (from the original)
    r0 = 0u;
    *gptr<u8>(r4 + 0x20u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aa7c0
GUEST_EXPORT(0x005aa7c0, d_005aa7c0::f_005aa7c0);

// f_005aa7ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa7ec {

struct __attribute__((packed)) Object_005aa7ec_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_005aa7ec_0, byte_f, 0xf);  // (from the original)


void f_005aa7ec(gptr<Object_005aa7ec_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    r4 = r0 + (r1 << 2);
    r1 = u32(arg0->byte_f) & ~lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->byte_f = u8(r1);
    *gptr<u32>(r4 + 0x10u) = u32(0u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa7ec
GUEST_EXPORT(0x005aa7ec, d_005aa7ec::f_005aa7ec);

// f_005aa814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa814 {

struct __attribute__((packed)) Object_005aa814_0 {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(Object_005aa814_0, byte_f, 0xf);  // (from the original)


void f_005aa814(gptr<Object_005aa814_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r12 = 0;
    r12 = r0 + (r1 << 2);
    r1 = u32(arg0->byte_f) | lsl_r(1u, r1 & 0xff);  // (from the original)
    arg0->byte_f = u8(r1);
    *gptr<u32>(r12 + 0x10u) = u32(r2);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aa814
GUEST_EXPORT(0x005aa814, d_005aa814::f_005aa814);

// f_005aa838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa838 {

struct __attribute__((packed)) Object_005aa838_0 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
};
GUEST_OFFSET(Object_005aa838_0, byte_e, 0xe);  // (from the original)


void f_005aa838(gptr<Object_005aa838_0> arg0, u32 r1) {
    u32 zf = 0;
    zf = r1 == 0;
    if (!zf) {
        zf = r1 == 1u;
    }
    if (zf) {
        arg0->byte_e = u8(r1);
    }
    return;
}

}  // namespace d_005aa838
GUEST_EXPORT(0x005aa838, d_005aa838::f_005aa838);

// f_005aa878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa878 {


u32 f_005aa878(u32 r0) {
    r0 = r0 + 7u & ~3u;
    return r0;
}

}  // namespace d_005aa878
GUEST_EXPORT(0x005aa878, d_005aa878::f_005aa878);

// f_005aa970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aa970 {

inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> call_005a3b10;  // (from the original)

u32 f_005aa970(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x14;  // (from the original)
    r4 = r2;
    r5 = r3;
    r7 = 0x9816a8u;  // (from the original)
    r6 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r3 = 0u;
    r2 = *gptr<u32>(r7 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_005a3b10(r0, r1, r2, r3);
    *gptr<u32>(r0) = u32(0x907e1cu);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(*gptr<u32>(r7 + 4u));  // (from the original)
    r1 = 0x907e9cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0x34u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x3cu) = u8(r6);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005aa970
GUEST_EXPORT(0x005aa970, d_005aa970::f_005aa970);

// f_005aab04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab04 {

struct __attribute__((packed)) Object_005aab04_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_005aab04_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aab04_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005aab04_0, byte_8, 0x8);  // (from the original)


void f_005aab04(gptr<Object_005aab04_0> arg0) {
    u32 r1 = 0;
    r1 = 0x907eb4u;  // (from the original)
    arg0->byte_8 = u8(0u);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1 + 0x20u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aab04
GUEST_EXPORT(0x005aab04, d_005aab04::f_005aab04);

// f_005aab40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab40 {


void f_005aab40(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9816a8u;  // (from the original)
    *gptr<u32>(r1 + 0xcu) = u32(r0);  // (from the original)
    *gptr<u8>(r1 + 2u) = u8(1u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aab40
GUEST_EXPORT(0x005aab40, d_005aab40::f_005aab40);

// f_005aab58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aab58 {


void f_005aab58(u32 r0) {
    u32 r1 = 0;
    r1 = 0x9816a8u;  // (from the original)
    *gptr<u32>(r1 + 8u) = u32(r0);
    *gptr<u8>(r1 + 1u) = u8(1u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aab58
GUEST_EXPORT(0x005aab58, d_005aab58::f_005aab58);

// f_005aad34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aad34 {

struct __attribute__((packed)) Object_005aad34_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_005aad34_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aad34_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005aad34_0, byte_8, 0x8);  // (from the original)


void f_005aad34(gptr<Object_005aad34_0> arg0) {
    u32 r1 = 0;
    r1 = 0x907f0cu;  // (from the original)
    arg0->byte_8 = u8(0u);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1 + 0x20u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005aad34
GUEST_EXPORT(0x005aad34, d_005aad34::f_005aad34);

// f_005ab1fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab1fc {

struct __attribute__((packed)) Object_005ab1fc_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005ab1fc_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001416b0, u32(u32, u32, u32, u32)> call_001416b0;  // (from the original)
inline constexpr guest::Function<0x005aac5c, u32(u32, u32, u32, u32)> call_005aac5c;  // (from the original)
inline constexpr guest::Function<0x005aae3c, u32(u32, u32, u32, u32)> call_005aae3c;  // (from the original)
inline constexpr guest::Function<0x005ab01c, u32(u32, u32, u32, u32)> call_005ab01c;  // (from the original)
inline constexpr guest::Function<0x005ab334, u32(u32, u32, u32, u32)> call_005ab334;  // (from the original)
inline constexpr guest::Function<0x005ab388, u32(u32, u32, u32, u32)> call_005ab388;  // (from the original)
inline constexpr guest::Function<0x00753cbc, u32(u32, u32, u32, u32)> call_00753cbc;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)

u32 f_005ab1fc(gptr<Object_005ab1fc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x60u;  // (from the original)
    r8 = 0u;
    r4 = r0;
    arg0->byte_0 = u8(r8);
    r7 = r1;
    r5 = r3;
    r6 = r2;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 3u) {
        r0 = 0u;
        goto L_5ab268;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r6;
    r2 = r7;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ab388(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab334(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5ab270;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aac5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_5ab268:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5ab270:;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r7 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00753cbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r4) = u8(r8);
    if (r5 == 1u) {
        goto L_5ab2c8;
    }
    if (r5 == 2u) {
        goto L_5ab2e8;
    } else {
        r4 = 0u;
    }
L_5ab2b4:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aac5c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5ab2c8:;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r2 = r6;
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab01c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_5ab2fc;
L_5ab2e8:;
    *gptr<u32>(r13) = u32(r0);
    *gptr<u32>(r13 + 4) = u32(r1);
    r2 = r6;
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005aae3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_5ab2fc:;
    r4 = r0;
    guest::preempt();
    goto L_5ab2b4;
}

}  // namespace d_005ab1fc
GUEST_EXPORT(0x005ab1fc, d_005ab1fc::f_005ab1fc);

// f_005ab304: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab304 {

struct __attribute__((packed)) Object_005ab304_0 {
    u8 byte_0;
    u8 unknown_1[0xf];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
};
GUEST_OFFSET(Object_005ab304_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ab304_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005ab304_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005ab304_0, byte_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x005a8b14, u32(u32, u32, u32, u32)> call_005a8b14;  // (from the original)

u32 f_005ab304(gptr<Object_005ab304_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    arg0->byte_0 = u8(r1);
    r3 = r4 + 0x10u;  // (from the original)
    arg0->byte_18 = u8(r1);
    r2 = r1;
    r0 = r0 + 8u;
    arg0->word_10 = u32(r1);
    arg0->word_14 = u32(r2);
    r0 = call_005a8b14(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ab304
GUEST_EXPORT(0x005ab304, d_005ab304::f_005ab304);

// f_005ab334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab334 {

struct __attribute__((packed)) Object_005ab334_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x3];  // (not used here)
    u32 word_38;
    u8 byte_3c;
};
GUEST_OFFSET(Object_005ab334_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005ab334_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005ab334_0, byte_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x005a37c4, u32(u32, u32, u32, u32)> call_005a37c4;  // (from the original)
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;  // (from the original)

u32 f_005ab334(gptr<Object_005ab334_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x78u;  // (from the original)
    r1 = 0x2cu;  // (from the original)
    *gptr<u32>(r13) = u32(u32(s32(s8(arg0->byte_3c))));
    r3 = arg0->word_38;
    r2 = u32(arg0->byte_34);
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r12 = 0u;
    r1 = u32(*gptr<u8>(r4 + 0x34u));  // (from the original)
    r3 = r12;
    r5 = r12;
    r0 = r4;
    r2 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4) = u32(r5);
    *gptr<u32>(r13 + 8) = u32(r12);
    guest::cpu()->r[13] = r13;
    r0 = call_005a37c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = u32(s32(s8(*gptr<u8>(r4 + 0x28u))));  // (from the original)
    r13 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ab334
GUEST_EXPORT(0x005ab334, d_005ab334::f_005ab334);

// f_005ab388: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab388 {

inline constexpr guest::Function<0x005a3b10, u32(u32, u32, u32, u32)> call_005a3b10;  // (from the original)

u32 f_005ab388(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r2;
    r5 = r3;
    r6 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = 1u;
    r2 = 0x20000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a3b10(r0, r1, r2, r3);
    *gptr<u32>(r0) = u32(0x907ef4u);  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(*gptr<u32>(0x9816b0u));  // (from the original)
    r1 = 0x907f4cu;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u8>(r0 + 0x34u) = u8(r4);  // (from the original)
    *gptr<u32>(r0 + 0x38u) = u32(r5);  // (from the original)
    *gptr<u8>(r0 + 0x3cu) = u8(r6);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ab388
GUEST_EXPORT(0x005ab388, d_005ab388::f_005ab388);

// f_005ab498: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab498 {


u32 f_005ab498() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = *gptr<u32>(0x982128u);  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r0) + 0xcu);  // (from the original)
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab498
GUEST_EXPORT(0x005ab498, d_005ab498::f_005ab498);

// f_005ab4b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab4b0 {


u32 f_005ab4b0() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = *gptr<u32>(0x982128u);  // (from the original)
    r1 = *gptr<u32>(*gptr<u32>(r0) + 8u);
    return guest::call_address<u32>(r1, r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005ab4b0
GUEST_EXPORT(0x005ab4b0, d_005ab4b0::f_005ab4b0);

// f_005ab4c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab4c8 {

inline constexpr guest::Function<0x001289c4, u32(u32, u32, u32, u32)> call_001289c4;  // (from the original)
inline constexpr guest::Function<0x0012ee90, u32(u32, u32, u32, u32)> call_0012ee90;  // (from the original)
inline constexpr guest::Function<0x005aead8, u32(u32, u32, u32, u32)> call_005aead8;  // (from the original)

u32 f_005ab4c8(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    r4 = r1;
    r0 = call_0012ee90(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r4;
    r0 = call_001289c4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_5ab598;
    }
    if (r5 == 0) {
        r0 = r4;
        r0 = call_005aead8(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = (r4 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r0 != 0x11u) {  // (from the original)
        goto L_5ab524;
    }
    r1 = r4 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x104u)) {  // (from the original)
        goto L_5ab524;
    }
    if (s32(r1) < s32(0x118u)) {  // (from the original)
        r0 = 9u;
        goto L_5ab594;
    }
L_5ab524:;
    if (r0 != 0x11u) {  // (from the original)
        goto L_5ab548;
    }
    r1 = r4 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x82u)) {  // (from the original)
        goto L_5ab548;
    }
    if (s32(r1) <= s32(0xb3u)) {  // (from the original)
        r0 = 8u;
        goto L_5ab594;
    }
L_5ab548:;
    if (r0 != 0x11u) {  // (from the original)
        goto L_5ab570;
    }
    r1 = r4 << 0x16 >> 0x16;  // (from the original)
    if (s32(r1) < s32(0x118u)) {  // (from the original)
        goto L_5ab570;
    }
    if (s32(r1) <= s32(0x14eu)) {  // (from the original)
        r0 = 0xeu;  // (from the original)
        goto L_5ab594;
    }
L_5ab570:;
    if (r0 != 0x11u) {  // (from the original)
        goto L_5ab590;
    }
    r0 = r4 << 0x16 >> 0x16;  // (from the original)
    if (s32(r0) < s32(0x64u)) {  // (from the original)
        goto L_5ab590;
    }
    if (s32(r0) <= s32(0xb3u)) {  // (from the original)
        goto L_5ab598;
    }
L_5ab590:;
    r0 = 5u;
L_5ab594:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_5ab598:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ab4c8
GUEST_EXPORT(0x005ab4c8, d_005ab4c8::f_005ab4c8);

// f_005ab5a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ab5a4 {

inline constexpr guest::Function<0x00347454, u32(u32, u32, u32, u32)> call_00347454;  // (from the original)
inline constexpr guest::Function<0x0034748c, u32(u32, u32, u32, u32)> call_0034748c;  // (from the original)
inline constexpr guest::Function<0x005aead8, u32(u32, u32, u32, u32)> call_005aead8;  // (from the original)

u32 f_005ab5a4(u32 r0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13) = u32(0x8faf20u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r6);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0034748c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = r0;
    res = r0 & 0x80000000u;  // (from the original)
    if (res >> 0x1f) {  // (from the original)
        if (r4 == 0) {
            r0 = r5;
            guest::cpu()->r[13] = r13;
            r0 = call_005aead8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    } else {
        r0 = *gptr<u32>(r13 + 4u);
        guest::cpu()->r[13] = r13;
        r0 = call_00347454(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r13 + 4u) = u32(r6);
    }
    r4 = 1u + u32(s32(r5) >> 0x1f);  // (from the original)
    r0 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0 = call_00347454(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ab5a4
GUEST_EXPORT(0x005ab5a4, d_005ab5a4::f_005ab5a4);

// f_005abb6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005abb6c {

inline constexpr guest::Function<0x003506c8, u32(u32, u32, u32, u32)> call_003506c8;  // (from the original)

u32 f_005abb6c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0x97e0dcu;  // (from the original)
    if (u32(*gptr<u8>(r4)) != 0) {
        r0 = *gptr<u32>(r4 + 4u);
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0x204u;  // (from the original)
    r0 = call_003506c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 1u;
    *gptr<u32>(r4 + 4u) = u32(r0);
    *gptr<u8>(r4) = u8(r1);
    r0 = *gptr<u32>(r4 + 4u);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005abb6c
GUEST_EXPORT(0x005abb6c, d_005abb6c::f_005abb6c);

// f_005ac04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac04c {

inline constexpr guest::Function<0x005abba0, u32(u32, u32, u32, u32)> call_005abba0;  // (from the original)

u32 f_005ac04c(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 8u));
    r3 = lsl_r(1u, r3 & 0xff) & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005abba0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_005ac04c
GUEST_EXPORT(0x005ac04c, d_005ac04c::f_005ac04c);

// f_005ac2b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac2b0 {

inline constexpr guest::Function<0x005af3e0, u32(u32, u32, u32, u32)> call_005af3e0;  // (from the original)

u32 f_005ac2b0(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r3 = 0;
    r3 = r2;
    r2 = 1u;
    return call_005af3e0(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
}

}  // namespace d_005ac2b0
GUEST_EXPORT(0x005ac2b0, d_005ac2b0::f_005ac2b0);

// f_005ac4f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac4f4 {

inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> call_00100f68;  // (from the original)
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

u32 f_005ac4f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    r7 = r3;
    r8 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r5 = r0;
    r9 = r1;
    r3 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = 0x8b3710u;  // (from the original)
    r0 = r5 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    if (r6 == 0) {
        r2 = 0x981680u;  // (from the original)
    } else {
        r2 = 0x981688u;  // (from the original)
    }
    r4 = r4 + 1u;
    r1 = r9 - r4;
    r0 = r5 + (r4 << 1);
    r3 = u32(*gptr<u16>(r8)) + 0x64u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r2));
    r2 = 0x8b3700u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00100f68(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + r0;
    r1 = 0x5ac5c8u;  // (from the original)
    r0 = r5 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r4 = r4 + 1u;
    r1 = r9 - r4;
    *gptr<u32>(r13) = u32(u32(*gptr<u16>(r8 + 2u)) + 1u);
    r6 = r5 + (r4 << 1);
    r0 = r6;
    r3 = *gptr<u32>(0x981690u);  // (from the original)
    r2 = 0x8b36f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00100f68(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = *gptr<u32>(0x981698u + (r7 << 2));  // (from the original)
    r0 = r6 + (r5 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = *gptr<u32>(0x8c1474u + (r7 << 2)) + r5 + r4;  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ac4f4
GUEST_EXPORT(0x005ac4f4, d_005ac4f4::f_005ac4f4);

// f_005ac5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ac5dc {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)
inline constexpr guest::Function<0x00755330, u32(u32, u32, u32, u32)> call_00755330;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> call_00755504;  // (from the original)
inline constexpr guest::Function<0x007555cc, u32(u32, u32, u32, u32)> call_007555cc;  // (from the original)

u32 f_005ac5dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r7 = r3;
    r8 = r1;
    r3 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = 0x8b3710u;  // (from the original)
    r0 = r6 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    r2 = r8 - r4;
    r1 = r6 + (r4 << 1);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00755504(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + r0;
    r1 = 0x5ac678u;  // (from the original)
    r0 = r6 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r4 + 1u;
    r9 = r7;
    r6 = r6 + (r5 << 1);
    r7 = r8 - r5;
    r2 = r7;
    r1 = r6;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00755330(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r0 + 1u;
    *gptr<u16>(r6 + (r0 << 1)) = u16(0x2eu);  // (from the original)
    r2 = r7 - r4;
    r1 = r6 + (r4 << 1);
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_007555cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + r4 + r5;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ac5dc
GUEST_EXPORT(0x005ac5dc, d_005ac5dc::f_005ac5dc);

// f_005acca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acca4 {

struct __attribute__((packed)) Object_005acca4_2 {
    u8 unknown_0[0x2];  // (not used here)
    u16 half_2;
};
GUEST_OFFSET(Object_005acca4_2, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> call_00100f68;  // (from the original)

u32 f_005acca4(u32 r0_unused, u32 r1_unused, gptr<Object_005acca4_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    *gptr<u32>(r13) = u32(u32(arg2->half_2) + 1u);
    r3 = *gptr<u32>(0x981690u);  // (from the original)
    r2 = 0x8b36f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00100f68(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_005acca4
GUEST_EXPORT(0x005acca4, d_005acca4::f_005acca4);

// f_005accd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005accd0 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)
inline constexpr guest::Function<0x005ace98, u32(u32, u32, u32, u32)> call_005ace98;  // (from the original)
inline constexpr guest::Function<0x005add7c, u32(u32, u32, u32, u32)> call_005add7c;  // (from the original)

u32 f_005accd0(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r5 + 9u)) == 0) {
        r6 = 1u;
        if (u32(*gptr<u8>(r5 + 1u)) == 0) {
            r1 = *gptr<u32>(0x97e0b8u);  // (from the original)
            r0 = 0xaedff2u;  // (from the original)
            r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x8b36e8u;  // (from the original)
            r0 = 0xaedff2u;  // (from the original)
            r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            *gptr<u8>(r5 + 1u) = u8(r6);
        }
        r1 = 0xaedff2u;  // (from the original)
        r0 = r1 + 0x2a4u;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_005add7c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee296u + (r0 << 1);  // (from the original)
        r1 = *gptr<u32>(0x981620u);  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (u32(*gptr<u8>(r5 + 2u)) == 0) {
            r1 = *gptr<u32>(0x97e0a0u);  // (from the original)
            r0 = 0xaee008u;  // (from the original)
            r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x8b36e8u;  // (from the original)
            r0 = 0xaee008u;  // (from the original)
            r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            *gptr<u8>(r5 + 2u) = u8(r6);
        }
        r1 = 0xaee008u;  // (from the original)
        r0 = 0xaee2f2u;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = call_005ace98(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee2f2u + (r0 << 1);  // (from the original)
        r1 = *gptr<u32>(0x981628u);  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 9u) = u8(r6);
    }
    if (r4 == 0) {
        r0 = 0xaee296u;  // (from the original)
        goto L_5acdb8;
    }
    if (r4 == 1u) {
        r0 = 0xaee2f2u;  // (from the original)
    } else {
        r0 = 0x8b3714u;  // (from the original)
    }
L_5acdb8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005accd0
GUEST_EXPORT(0x005accd0, d_005accd0::f_005accd0);

// f_005acde8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acde8 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)
inline constexpr guest::Function<0x005accd0, u32(u32, u32, u32, u32)> call_005accd0;  // (from the original)

u32 f_005acde8(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r5 + 7u)) == 0) {
        r0 = 0u;
        r0 = call_005accd0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0xaee10au;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee10au;  // (from the original)
        r1 = 0x5ace88u;  // (from the original)
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r6 = 0x981678u;  // (from the original)
        r0 = 0xaee10au;  // (from the original)
        r1 = *gptr<u32>(r6);
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        r0 = call_005accd0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0xaee180u;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee180u;  // (from the original)
        r1 = 0x5ace88u;  // (from the original)
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee180u;  // (from the original)
        r1 = *gptr<u32>(r6);
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 7u) = u8(1u);
    }
    if (r4 == 0) {
        r0 = 0xaee10au;  // (from the original)
        goto L_5ace7c;
    }
    if (r4 == 1u) {
        r0 = 0xaee180u;  // (from the original)
    } else {
        r0 = 0x5ace94u;  // (from the original)
    }
L_5ace7c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005acde8
GUEST_EXPORT(0x005acde8, d_005acde8::f_005acde8);

// f_005ace98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ace98 {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)

u32 f_005ace98(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 5u)) == 0) {
        r5 = 1u;
        if (u32(*gptr<u8>(r4 + 2u)) == 0) {
            r1 = *gptr<u32>(0x97e0a0u);  // (from the original)
            r0 = 0xaee008u;  // (from the original)
            r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x8b36e8u;  // (from the original)
            r0 = 0xaee008u;  // (from the original)
            r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 2u) = u8(r5);
        }
        r0 = 0xaee008u;  // (from the original)
        r0 = call_00100834(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x14u) = u32(r0);  // (from the original)
        *gptr<u8>(r4 + 5u) = u8(r5);
    }
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ace98
GUEST_EXPORT(0x005ace98, d_005ace98::f_005ace98);

// f_005acf04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005acf04 {

inline constexpr guest::Function<0x001416b0, u32(u32, u32, u32, u32)> call_001416b0;  // (from the original)
inline constexpr guest::Function<0x005ab5a4, u32(u32, u32, u32, u32)> call_005ab5a4;  // (from the original)
inline constexpr guest::Function<0x005ad6d8, u32(u32, u32, u32, u32)> call_005ad6d8;  // (from the original)
inline constexpr guest::Function<0x005adb08, u32(u32, u32, u32, u32)> call_005adb08;  // (from the original)
inline constexpr guest::Function<0x005add4c, u32(u32, u32, u32, u32)> call_005add4c;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;  // (from the original)
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> call_005affd8;  // (from the original)
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;  // (from the original)
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> call_0075523c;  // (from the original)
inline constexpr guest::Function<0x007552e8, u32(u32, u32, u32, u32)> call_007552e8;  // (from the original)

u32 f_005acf04(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r1;
    r5 = r2;
    *gptr<u32>(r13) = u32(r2);
    r6 = r0;
    r7 = 0x1eu;  // (from the original)
    r2 = r0;
    r1 = r7;
    r3 = r4;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad6d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab5a4(r0, r1, r2, r3);
    if (r0 != 0) {
        goto L_5ad010;
    }
    r1 = 0x15u;  // (from the original)
    r3 = r5;
    r2 = r6;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0x3e8u);  // (from the original)
    r1 = r0;
    r3 = r13 + 0x30u;  // (from the original)
    r2 = r6;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        goto L_5ad008;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5ad008;
    }
L_5acf98:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0075523c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5acff4;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007552e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005add4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5acff4;
    }
    r1 = *gptr<u32>(r13);
    if (u32(*gptr<u16>(r4)) + 0x64u != r1) {  // (from the original)
        goto L_5acff4;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 0u;
L_5acfec:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5acff4:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::preempt();
        goto L_5acf98;
    }
L_5ad008:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
L_5ad010:;
    r1 = r7;
    r3 = r4;
    r2 = r6;
    r0 = r13 + 4u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ad6d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab5a4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r2 = r5;
        r1 = r4;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005adb08(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::preempt();
            goto L_5acfec;
        }
    }
    r0 = 1u;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005acf04
GUEST_EXPORT(0x005acf04, d_005acf04::f_005acf04);

// f_005ad068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad068 {

inline constexpr guest::Function<0x005a8da4, u32(u32, u32, u32, u32)> call_005a8da4;  // (from the original)
inline constexpr guest::Function<0x005ad0b4, u32(u32, u32, u32, u32)> call_005ad0b4;  // (from the original)

u32 f_005ad068(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x30u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r6 = r2;
    r7 = r3;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005a8da4(r0, r1, r2, r3);
    ea = r13 + 0x10u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r13;
    *gptr<u32>(ea) = u32(r13 + 8u);
    ea = r13 + 8u;
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r3 = r7;
    r2 = r6;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad0b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ad068
GUEST_EXPORT(0x005ad068, d_005ad068::f_005ad068);

// f_005ad658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad658 {

struct __attribute__((packed)) Object_005ad658_2 {
    u16 half_0;
};
GUEST_OFFSET(Object_005ad658_2, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> call_00100f68;  // (from the original)

u32 f_005ad658(u32 r0_unused, u32 r1_unused, gptr<Object_005ad658_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    if (r3 == 0) {
        r3 = 0x981680u;  // (from the original)
    } else {
        r3 = 0x981688u;  // (from the original)
    }
    S0 = std::bit_cast<float>(*gptr<u32>(r3));
    r3 = u32(arg2->half_0) + 0x64u;  // (from the original)
    r2 = 0x8b3700u;  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    call_00100f68(guest::cpu()->r[0], guest::cpu()->r[1], r2, r3);
    S0 = guest::cpu()->s[0];
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return guest::cpu()->r[0];
}

}  // namespace d_005ad658
GUEST_EXPORT(0x005ad658, d_005ad658::f_005ad658);

// f_005ad690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad690 {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)
inline constexpr guest::Function<0x00755504, u32(u32, u32, u32, u32)> call_00755504;  // (from the original)

u32 f_005ad690(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18;  // (from the original)
    r5 = r0;
    r7 = r3;
    r3 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    r6 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = 0x8b3710u;  // (from the original)
    r0 = r5 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    r2 = r6 - r4;
    r1 = r5 + (r4 << 1);
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00755504(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + r4;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ad690
GUEST_EXPORT(0x005ad690, d_005ad690::f_005ad690);

// f_005ad6d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad6d8 {

inline constexpr guest::Function<0x00100f69, u32(u32, u32, u32, u32)> call_00100f68;  // (from the original)
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)

u32 f_005ad6d8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    r8 = r3;
    r5 = r0;
    r7 = r1;
    r3 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    r1 = 0x8b3710u;  // (from the original)
    r0 = r5 + (r4 << 1);
    guest::cpu()->r[13] = r13;
    r0 = call_001017e4(r0, r1, r2, r3);
    if (r6 == 0) {
        r2 = 0x981680u;  // (from the original)
    } else {
        r2 = 0x981688u;  // (from the original)
    }
    r4 = r4 + 1u;
    r1 = r7 - r4;
    r0 = r5 + (r4 << 1);
    r3 = u32(*gptr<u16>(r8)) + 0x64u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r2));
    r2 = 0x8b3700u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00100f68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 + r4;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ad6d8
GUEST_EXPORT(0x005ad6d8, d_005ad6d8::f_005ad6d8);

// f_005ad968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad968 {

inline constexpr guest::Function<0x005acb9c, u32(u32, u32, u32, u32)> call_005acb9c;  // (from the original)
inline constexpr guest::Function<0x005af04c, u32(u32, u32, u32, u32)> call_005af04c;  // (from the original)

u32 f_005ad968(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r4 = r1;
    r13 = r13 - 0x18u;  // (from the original)
    r6 = r0;
    r5 = r2;
    r1 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_005acb9c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = r0;
    r3 = r1;
    r0 = r6;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 4) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005af04c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005ad968
GUEST_EXPORT(0x005ad968, d_005ad968::f_005ad968);

// f_005ad9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ad9a0 {

struct __attribute__((packed)) Object_005ad9a0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
    u8 byte_6;
    u8 byte_7;
};
GUEST_OFFSET(Object_005ad9a0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_3, 0x3);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_5, 0x5);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_005ad9a0_0, byte_7, 0x7);  // (from the original)


u32 f_005ad9a0(gptr<Object_005ad9a0_0> arg0) {
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    guest::cpu()->r[13] -= 4u;
    v = arg0->byte_0;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->byte_1;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->byte_2;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->byte_3;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(s32(s8(arg0->byte_4)));
    r1 = r2 - 0x30u;  // (from the original)
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = u32(s32(s8(arg0->byte_5)));
    r12 = r2 - 0x30u;  // (from the original)
    r1 = ~0x2fu;  // (from the original)
    if (r3 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(s32(s8(arg0->byte_6)));
    r3 = r3 + (r1 + (r12 + (r12 << 2) << 1));
    if (r2 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(s32(s8(arg0->byte_7)));
    r2 = r2 + (r1 + (r3 + (r3 << 2) << 1));
    if (r0 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 4u;
    r1 = r1 + (r2 + (r2 << 2) << 1);
    r0 = r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ad9a0
GUEST_EXPORT(0x005ad9a0, d_005ad9a0::f_005ad9a0);

// f_005ada54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ada54 {

struct __attribute__((packed)) Object_005ada54_0 {
    u16 half_0;
    u16 half_2;
    u16 half_4;
    u16 half_6;
    u16 half_8;
    u16 half_a;
    u16 half_c;
    u16 half_e;
};
GUEST_OFFSET(Object_005ada54_0, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_6, 0x6);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005ada54_0, half_e, 0xe);  // (from the original)


u32 f_005ada54(gptr<Object_005ada54_0> arg0) {
    u32 v = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    guest::cpu()->r[13] -= 4u;
    v = arg0->half_0;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->half_2;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->half_4;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    v = arg0->half_6;
    r1 = v;
    if (r1 == 0) {
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(arg0->half_8);
    r1 = r2 - 0x30u;  // (from the original)
    if (r1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r3 = u32(arg0->half_a);
    r12 = r2 - 0x30u;  // (from the original)
    r1 = ~0x2fu;  // (from the original)
    if (r3 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(arg0->half_c);
    r3 = r3 + (r1 + (r12 + (r12 << 2) << 1));
    if (r2 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(arg0->half_e);
    r2 = r2 + (r1 + (r3 + (r3 << 2) << 1));
    if (r0 - 0x30u >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 4u;
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    guest::cpu()->r[13] += 4u;
    r1 = r1 + (r2 + (r2 << 2) << 1);
    r0 = r0 + r1;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ada54
GUEST_EXPORT(0x005ada54, d_005ada54::f_005ada54);

// f_005add7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005add7c {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)

u32 f_005add7c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 4u)) == 0) {
        r5 = 1u;
        if (u32(*gptr<u8>(r4 + 1u)) == 0) {
            r1 = *gptr<u32>(0x97e0b8u);  // (from the original)
            r0 = 0xaedff2u;  // (from the original)
            r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x8b36e8u;  // (from the original)
            r0 = 0xaedff2u;  // (from the original)
            r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4 + 1u) = u8(r5);
        }
        r0 = 0xaedff2u;  // (from the original)
        r0 = call_00100834(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0x10u) = u32(r0);  // (from the original)
        *gptr<u8>(r4 + 4u) = u8(r5);
    }
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005add7c
GUEST_EXPORT(0x005add7c, d_005add7c::f_005add7c);

// f_005adf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005adf1c {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)

u32 f_005adf1c(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r4 + 3u)) == 0) {
        r5 = 1u;
        if (u32(*gptr<u8>(r4)) == 0) {
            r1 = *gptr<u32>(0x97e0bcu);  // (from the original)
            r0 = 0xaedfdcu;  // (from the original)
            r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = 0x8b36e8u;  // (from the original)
            r0 = 0xaedfdcu;  // (from the original)
            r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            *gptr<u8>(r4) = u8(r5);
        }
        r0 = 0xaedfdcu;  // (from the original)
        r0 = call_00100834(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
        *gptr<u8>(r4 + 3u) = u8(r5);
    }
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005adf1c
GUEST_EXPORT(0x005adf1c, d_005adf1c::f_005adf1c);

// f_005ae46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005ae46c {

inline constexpr guest::Function<0x001017e5, u32(u32, u32, u32, u32)> call_001017e4;  // (from the original)
inline constexpr guest::Function<0x00101831, u32(u32, u32, u32, u32)> call_00101830;  // (from the original)
inline constexpr guest::Function<0x005adde8, u32(u32, u32, u32, u32)> call_005adde8;  // (from the original)

u32 f_005ae46c(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x97e0e4u;  // (from the original)
    if (u32(*gptr<u8>(r5 + 6u)) == 0) {
        r0 = 0u;
        r0 = call_005adde8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0xaee01eu;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee01eu;  // (from the original)
        r1 = 0x5ae50cu;  // (from the original)
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r6 = 0x981674u;  // (from the original)
        r0 = 0xaee01eu;  // (from the original)
        r1 = *gptr<u32>(r6);
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = 1u;
        r0 = call_005adde8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0;
        r0 = 0xaee094u;  // (from the original)
        r0 = call_001017e4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee094u;  // (from the original)
        r1 = 0x5ae50cu;  // (from the original)
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0xaee094u;  // (from the original)
        r1 = *gptr<u32>(r6);
        r0 = call_00101830(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u8>(r5 + 6u) = u8(1u);
    }
    if (r4 == 0) {
        r0 = 0xaee01eu;  // (from the original)
        goto L_5ae500;
    }
    if (r4 == 1u) {
        r0 = 0xaee094u;  // (from the original)
    } else {
        r0 = 0x5ae518u;  // (from the original)
    }
L_5ae500:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005ae46c
GUEST_EXPORT(0x005ae46c, d_005ae46c::f_005ae46c);

// f_005aead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aead8 {

inline constexpr guest::Function<0x0012f598, u32(u32, u32, u32, u32)> call_0012f598;  // (from the original)

u32 f_005aead8(u32 r0) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    res = r0 & 0x80000000u;  // (from the original)
    r1 = res;
    r4 = r0;
    if (!(res >> 0x1f)) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r4 & 0x3fc00u) >> 0xa;  // (from the original)
    r0 = r4 << 0x16 >> 0x16;  // (from the original)
    if (r1 != 0x11u) {  // (from the original)
        goto L_5aeb10;
    }
    if (s32(r0) < s32(0x64u)) {  // (from the original)
        goto L_5aeb10;
    }
    if (s32(r0) <= s32(0xb3u)) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_5aeb10:;
    if (r1 != 0x11u) {  // (from the original)
        goto L_5aeb28;
    }
    if (s32(r0) < s32(0xb4u)) {  // (from the original)
        goto L_5aeb28;
    }
    if (s32(r0) <= s32(0xc7u)) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_5aeb28:;
    if (r1 != 0x11u) {  // (from the original)
        goto L_5aeb40;
    }
    if (s32(r0) < s32(0xc8u)) {  // (from the original)
        goto L_5aeb40;
    }
    if (s32(r0) <= s32(0xdbu)) {  // (from the original)
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_5aeb40:;
    r0 = r4;
    r1 = 0x5aeb4cu;  // (from the original)
    res = r4 >> 0x1f;  // (from the original)
    r2 = res;
    if (res != 0) {
        r0 = call_0012f598(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aead8
GUEST_EXPORT(0x005aead8, d_005aead8::f_005aead8);

// f_005aebc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aebc8 {

inline constexpr guest::Function<0x0010184d, u32(u32, u32, u32, u32)> call_0010184c;  // (from the original)
inline constexpr guest::Function<0x001416b0, u32(u32, u32, u32, u32)> call_001416b0;  // (from the original)
inline constexpr guest::Function<0x005add4c, u32(u32, u32, u32, u32)> call_005add4c;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;  // (from the original)
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> call_005affd8;  // (from the original)
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;  // (from the original)
inline constexpr guest::Function<0x0075523c, u32(u32, u32, u32, u32)> call_0075523c;  // (from the original)
inline constexpr guest::Function<0x007552e8, u32(u32, u32, u32, u32)> call_007552e8;  // (from the original)

u32 f_005aebc8(u32 r0, u32 r1, u32 r2) {
    u32 b = 0;
    u32 sco = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r5 = r1;
    r13 = r13 - 0x70u;  // (from the original)
    r4 = r0;
    r6 = r2;
    r3 = r2;
    r1 = 0x15u;  // (from the original)
    r2 = r5;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0x3e8u);  // (from the original)
    r1 = r0;
    r3 = r13 + 0x30u;  // (from the original)
    r2 = r5;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        goto L_5aed20;
    }
    if (r5 == 0) {
        if (r6 != 0) {
            r0 = 0x981688u;  // (from the original)
            goto L_5aec34;
        }
    }
    r0 = 0x981680u;  // (from the original)
L_5aec34:;
    r7 = 1u;
    r6 = *gptr<u32>(r0);
L_5aec3c:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5aed20;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0075523c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_5aec3c;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_007552e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005add4c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_5aec3c;
    }
    r0 = r5 + 6u;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0010184c(r0, r1, r2, r3);
    r12 = guest::cpu()->r[12];
    r2 = *gptr<u32>(r13);
    b = 0u;
    zf = r0 == b;
    cf = r0 >= b;
    if (zf) {
        r12 = 1u;
    }
    b = 0x64u;  // (from the original)
    r0 = r2 - b;
    if (!zf) {
        r12 = 0u;
    }
    b = u32(s32(r0) >> 0x1f);  // (from the original)
    r1 = r0 + (b >> 0x1d);  // (from the original)
    b = 7u;
    r3 = r1 & ~b;
    r5 = u32(*gptr<u8>(r4 + u32(s32(r1) >> 3)));
    b = r3;
    sco = cf;
    b = lsl_rc(r7, r0 - b & 0xff, &sco);  // (from the original)
    if ((r5 & b) != 0) {
        if (r12 == 0) {
            guest::preempt();
            goto L_5aec3c;
        }
        r2 = r2 - 0x64u - r3;  // (from the original)
        r0 = r4 + u32(s32(r1) >> 3);
        r1 = u32(*gptr<u8>(r0 + 0x71u)) | lsl_r(r7, r2 & 0xff);  // (from the original)
        *gptr<u8>(r0 + 0x71u) = u8(r1);  // (from the original)
        guest::preempt();
        goto L_5aec3c;
    }
    r5 = u32(*gptr<u8>(r4 + u32(s32(r1) >> 3)));
    *gptr<u8>(r4 + u32(s32(r1) >> 3)) = u8(r5 | lsl_r(r7, r2 - 0x64u - r3 & 0xff));  // (from the original)
    r0 = r4 + u32(s32(r1) >> 3);
    r1 = u32(*gptr<u8>(r0 + 0x71u));  // (from the original)
    r2 = lsl_r(r7, r2 - 0x64u - r3 & 0xff);  // (from the original)
    if (r12 == 0) {
        r1 = r1 & ~r2;
    } else {
        r1 = r1 | r2;
    }
    *gptr<u8>(r0 + 0x71u) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_5aec3c;
L_5aed20:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005aebc8
GUEST_EXPORT(0x005aebc8, d_005aebc8::f_005aebc8);

// f_005aed44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aed44 {

struct __attribute__((packed)) Object_005aed44_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005aed44_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x005ad9a0, u32(u32, u32, u32, u32)> call_005ad9a0;  // (from the original)

u32 f_005aed44(gptr<Object_005aed44_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 zf = 0;
    u32 cf = 0;
    guest::cpu()->r[13] -= 8u;
    r2 = u32(s32(s8(arg0->byte_0)));
    r4 = r1;
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r2 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r2 = u32(s32(s8(*gptr<u8>(r0 + 2u))));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r2 = u32(s32(s8(*gptr<u8>(r0 + 3u))));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            r0 = 0u;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r0 = call_005ad9a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x270fu;  // (from the original)
    if (r0 - 1u >= r1) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r4 != 0) {
        *gptr<u32>(r4) = u32(r0);
    }
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aed44
GUEST_EXPORT(0x005aed44, d_005aed44::f_005aed44);

// f_005aee20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aee20 {

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x005ada54, u32(u32, u32, u32, u32)> call_005ada54;  // (from the original)

u32 f_005aee20(u32 r0, u32 r1, u32 r2) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 zf = 0;
    u32 cf = 0;
    ea = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r14);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r5 = r1;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00100834(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (s32(r0) >= s32(8u)) {
        if (s32(r0) < s32(9u)) {
            goto L_5aee54;
        }
        if (u32(*gptr<u16>(r4 + 0x10u)) == 0x2eu) {  // (from the original)
            goto L_5aee54;
        }
    }
    r0 = 0u;
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
L_5aee54:;
    r1 = r5;
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r4 = *gptr<u32>(ea);
    r5 = *gptr<u32>(ea + 4);
    r6 = *gptr<u32>(ea + 8);
    r14 = *gptr<u32>(ea + 0xc);  // (from the original)
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r2 = u32(*gptr<u16>(r0));
    r4 = r1;
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            goto L_5aef24;
        }
    }
    r2 = u32(*gptr<u16>(r0 + 2u));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            goto L_5aef24;
        }
    }
    r2 = u32(*gptr<u16>(r0 + 4u));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            goto L_5aef24;
        }
    }
    r2 = u32(*gptr<u16>(r0 + 6u));
    r1 = r2 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r2 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r2 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r2 != 0x5fu) {  // (from the original)
            goto L_5aef24;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005ada54(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0x270fu;  // (from the original)
    if (r0 - 1u < r1) {
        goto L_5aef2c;
    }
L_5aef24:;
    r0 = 0u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
L_5aef2c:;
    if (r4 != 0) {
        *gptr<u32>(r4) = u32(r0);
    }
    r0 = 1u;
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005aee20
GUEST_EXPORT(0x005aee20, d_005aee20::f_005aee20);

// f_005aeff0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aeff0 {

struct __attribute__((packed)) Object_005aeff0_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_005aeff0_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005aeff0_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005aeff0_0, byte_2, 0x2);  // (from the original)


u32 f_005aeff0(gptr<Object_005aeff0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r3 = u32(s32(s8(arg0->byte_0)));
    r1 = r3 - 0x30u;  // (from the original)
    if (r1 >= 0xau) {  // (from the original)
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(s32(s8(arg0->byte_1)));
    r1 = ~0x2fu;  // (from the original)
    r3 = r3 - 0x30u;  // (from the original)
    if (r2 - 0x30u >= 0xau) {  // (from the original)
        r0 = ~0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = u32(s32(s8(arg0->byte_2)));
    r2 = r2 + (r1 + (r3 + (r3 << 2) << 1));
    if (r0 - 0x30u < 0xau) {  // (from the original)
        r1 = r1 + (r2 + (r2 << 2) << 1);
        r0 = r0 + r1;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = ~0u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005aeff0
GUEST_EXPORT(0x005aeff0, d_005aeff0::f_005aeff0);

// f_005af13c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af13c {

struct __attribute__((packed)) Object_005af13c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_005af13c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005af13c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_005af13c_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_005af13c_0, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Object_005af13c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005af13c_1, word_0, 0x0);  // (from the original)


u32 f_005af13c(gptr<Object_005af13c_0> arg0, gptr<Object_005af13c_1> arg1) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r13 = r13 - 8;
    r4 = u32(s32(s8(arg0->byte_0)));
    if (r4 - 0x30u >= 0xau) {  // (from the original)
        goto L_5af270;
    }
    r12 = u32(s32(s8(arg0->byte_1)));
    r3 = ~0x2fu;  // (from the original)
    r4 = r4 - 0x30u;  // (from the original)
    if (r12 - 0x30u >= 0xau) {  // (from the original)
        goto L_5af270;
    }
    r2 = u32(s32(s8(arg0->byte_2)));
    r12 = r12 + (r3 + (r4 + (r4 << 2) << 1));
    if (r2 - 0x30u >= 0xau) {  // (from the original)
        goto L_5af270;
    }
    r2 = r2 + (r3 + (r12 + (r12 << 2) << 1));
    if (r2 - 0x64u >= 0x384u) {  // (from the original)
        goto L_5af270;
    }
    if (r1 != 0) {
        arg1->word_0 = u32(r2);
    }
    ea = r0 + 3u;
    r0 = ea;
    r1 = u32(s32(s8(arg0->byte_3)));
    r2 = r1 - 0x30u;  // (from the original)
    zf = r2 == 9u;
    cf = r2 >= 9u;
    if (cf && !zf) {
        r2 = r1 - 0x41u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r2 = r1 - 0x61u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r1 != 0x5fu) {  // (from the original)
            goto L_5af270;
        }
    }
    ea = r0 + 1u;
    r0 = ea;
    r1 = u32(s32(s8(*gptr<u8>(ea))));
    r2 = r1 - 0x30u;  // (from the original)
    zf = r2 == 9u;
    cf = r2 >= 9u;
    if (cf && !zf) {
        r2 = r1 - 0x41u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r2 = r1 - 0x61u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r1 != 0x5fu) {  // (from the original)
            goto L_5af270;
        }
    }
    ea = r0 + 1u;
    r0 = ea;
    r1 = u32(s32(s8(*gptr<u8>(ea))));
    r2 = r1 - 0x30u;  // (from the original)
    zf = r2 == 9u;
    cf = r2 >= 9u;
    if (cf && !zf) {
        r2 = r1 - 0x41u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r2 = r1 - 0x61u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r1 != 0x5fu) {  // (from the original)
            goto L_5af270;
        }
    }
    ea = r0 + 1u;
    r0 = ea;
    r1 = u32(s32(s8(*gptr<u8>(ea))));
    r2 = r1 - 0x30u;  // (from the original)
    zf = r2 == 9u;
    cf = r2 >= 9u;
    if (cf && !zf) {
        r2 = r1 - 0x41u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r2 = r1 - 0x61u;  // (from the original)
        zf = r2 == 0x19u;  // (from the original)
        cf = r2 >= 0x19u;  // (from the original)
    }
    if (!(!cf || zf)) {
        if (r1 != 0x5fu) {  // (from the original)
            goto L_5af270;
        }
    }
    r0 = u32(s32(s8(*gptr<u8>(r0 + 1u))));
    r1 = r0 - 0x30u;  // (from the original)
    zf = r1 == 9u;
    cf = r1 >= 9u;
    if (cf && !zf) {
        r1 = r0 - 0x41u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (cf && !zf) {
        r1 = r0 - 0x61u;  // (from the original)
        zf = r1 == 0x19u;  // (from the original)
        cf = r1 >= 0x19u;  // (from the original)
    }
    if (!cf || zf) {
        goto L_5af27c;
    }
    if (r0 == 0x5fu) {  // (from the original)
        goto L_5af27c;
    }
L_5af270:;
    r13 = r13 + 8;
    r0 = 0u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_5af27c:;
    r13 = r13 + 8;
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005af13c
GUEST_EXPORT(0x005af13c, d_005af13c::f_005af13c);

// f_005af3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af3e0 {

inline constexpr guest::Function<0x001416b0, u32(u32, u32, u32, u32)> call_001416b0;  // (from the original)
inline constexpr guest::Function<0x005ab4c8, u32(u32, u32, u32, u32)> call_005ab4c8;  // (from the original)
inline constexpr guest::Function<0x005ac5dc, u32(u32, u32, u32, u32)> call_005ac5dc;  // (from the original)
inline constexpr guest::Function<0x005ad690, u32(u32, u32, u32, u32)> call_005ad690;  // (from the original)
inline constexpr guest::Function<0x005ad74c, u32(u32, u32, u32, u32)> call_005ad74c;  // (from the original)
inline constexpr guest::Function<0x005ae51c, u32(u32, u32, u32, u32)> call_005ae51c;  // (from the original)
inline constexpr guest::Function<0x005aff24, u32(u32, u32, u32, u32)> call_005aff24;  // (from the original)
inline constexpr guest::Function<0x005affd8, u32(u32, u32, u32, u32)> call_005affd8;  // (from the original)
inline constexpr guest::Function<0x005b00a8, u32(u32, u32, u32, u32)> call_005b00a8;  // (from the original)
inline constexpr guest::Function<0x005b0520, u32(u32, u32, u32, u32)> call_005b0520;  // (from the original)
inline constexpr guest::Function<0x007553d8, u32(u32, u32, u32, u32)> call_007553d8;  // (from the original)

u32 f_005af3e0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r2);
    *gptr<u32>(ea + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0xe8u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r7 = r3;
    r6 = 1u;
    r0 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 0x1eu;  // (from the original)
    r9 = 0x15u;  // (from the original)
    r10 = 0x2cu;  // (from the original)
    r8 = 0x3e8u;  // (from the original)
    if (r0 == 1u) {
        goto L_5af43c;
    }
    r0 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 3u) {
        goto L_5af43c;
    }
    r0 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007553d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 2u) {
        goto L_5af574;
    }
    goto L_5af6b0;
L_5af43c:;
    r3 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    r1 = r10;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab4c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    if (r0 != 0) {
        goto L_5af6b0;
    }
    if (r7 == 0) {
        goto L_5af6b0;
    }
    r3 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    r1 = r11;
    r2 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ad690(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r7;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        goto L_5af534;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5af534;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
L_5af4d8:;
    r1 = r9;
    r3 = r5;
    r2 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r5;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        goto L_5af554;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5af554;
    }
    goto L_5af6a8;
L_5af534:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad74c(r0, r1, r2, r3);
    guest::preempt();
    goto L_5af4d8;
L_5af554:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad74c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    goto L_5af6b0;
L_5af574:;
    r3 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    r1 = r10;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ac5dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ab4c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r6 = r0;
    if (r4 == 1u) {
        r1 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
        r3 = r5;
        r2 = 1u;
        r0 = r13 + 0x60u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005b0520(r0, r1, r2, r3);
        r1 = r10;
        r3 = r13 + 0x60u;  // (from the original)
        r2 = r4;
        r0 = r13 + 8u;
        *gptr<u32>(r13) = u32(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_005ac5dc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 8u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_005ab4c8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    if (r6 != 0) {
        goto L_5af6b0;
    }
    if (r7 == 0) {
        goto L_5af6b0;
    }
    r3 = *gptr<u32>(r13 + 0xb8u);  // (from the original)
    r1 = r11;
    r2 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005ad690(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r7;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        goto L_5af6bc;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_5af6bc;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
L_5af650:;
    r1 = r9;
    r3 = r5;
    r2 = r4;
    r0 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ae51c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001416b0(r0, r1, r2, r3);
    r1 = r0;
    r3 = r5;
    r2 = r4;
    r0 = r13 + 8u;
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005affd8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (u32(*gptr<u8>(r13 + 0xcu)) == 0) {  // (from the original)
        guest::preempt();
        goto L_5af554;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005aff24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_5af554;
    }
L_5af6a8:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_5af6b0:;
    r13 = r13 + 0xc4u;  // (from the original)
    r0 = r6;
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
L_5af6bc:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b00a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005ad74c(r0, r1, r2, r3);
    guest::preempt();
    goto L_5af650;
}

}  // namespace d_005af3e0
GUEST_EXPORT(0x005af3e0, d_005af3e0::f_005af3e0);

// f_005af7b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005af7b4 {


u32 f_005af7b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r12 = 0;
    u32 zf = 0;
L_5af7b4:;
    r2 = u32(*gptr<u16>(r0));
    zf = r2 == 0;
    if (!zf) {
        r3 = u32(*gptr<u16>(r1));
        zf = r3 == 0;
    }
    if (!zf) {
        r12 = r2 - 0x41u;  // (from the original)
        if (!u32(r12 >= 0x19u) || u32(r12 == 0x19u)) {  // (from the original)
            r2 = r2 + 0x20u;  // (from the original)
        }
        r12 = r3 - 0x41u;  // (from the original)
        if (!u32(r12 >= 0x19u) || u32(r12 == 0x19u)) {  // (from the original)
            r3 = r3 + 0x20u;  // (from the original)
        }
        r3 = uxth(r3);
        if (uxth(r2) == r3) {
            r0 = r0 + 2u;
            r1 = r1 + 2u;
            guest::preempt();
            goto L_5af7b4;
        }
    }
    r0 = u32(*gptr<u16>(r0));
    r2 = r0 - 0x41u;  // (from the original)
    if (!u32(r2 >= 0x19u) || u32(r2 == 0x19u)) {  // (from the original)
        r0 = r0 + 0x20u;  // (from the original)
    }
    r2 = uxth(r0);
    r0 = u32(*gptr<u16>(r1));
    r1 = r0 - 0x41u;  // (from the original)
    if (!u32(r1 >= 0x19u) || u32(r1 == 0x19u)) {  // (from the original)
        r0 = r0 + 0x20u;  // (from the original)
    }
    r0 = r2 - uxth(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_005af7b4
GUEST_EXPORT(0x005af7b4, d_005af7b4::f_005af7b4);

// f_005afd20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005afd20 {

struct __attribute__((packed)) Object_005afd20_0 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 byte_2c;
};
GUEST_OFFSET(Object_005afd20_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005afd20_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005afd20_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005afd20_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005afd20_0, byte_2c, 0x2c);  // (from the original)


void f_005afd20(gptr<Object_005afd20_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    float S0 = 0;
    ea = r13 + 4u;
    r12 = *gptr<u32>(ea);
    S0 = std::bit_cast<float>(*gptr<u32>(r13));
    arg0->word_1c = u32(r1);
    arg0->word_20 = u32(r2);
    arg0->word_24 = u32(r3);
    arg0->word_28 = u32(std::bit_cast<u32>(S0));
    arg0->byte_2c = u8(r12);
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_005afd20
GUEST_EXPORT(0x005afd20, d_005afd20::f_005afd20);

// f_005afe90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005afe90 {

struct __attribute__((packed)) Object_005afe90_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Object_005afe90_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005afe90_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005afe90_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005afe90_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005afe90_0, half_10, 0x10);  // (from the original)


void f_005afe90(gptr<Object_005afe90_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r1);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->half_10 = u16(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_005afe90
GUEST_EXPORT(0x005afe90, d_005afe90::f_005afe90);

// f_005aff24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005aff24 {

struct __attribute__((packed)) Object_005aff24_0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
    u8 unknown_5[0xb];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_005aff24_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005aff24_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x00347454, u32(u32, u32, u32, u32)> call_00347454;  // (from the original)
inline constexpr guest::Function<0x00347518, u32(u32, u32, u32, u32)> call_00347518;  // (from the original)
inline constexpr guest::Function<0x005aead8, u32(u32, u32, u32, u32)> call_005aead8;  // (from the original)

u32 f_005aff24(gptr<Object_005aff24_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_4) == 0) {
        goto L_5affd0;
    }
    r0 = arg0->word_24;
    r1 = arg0->word_20;
    if (s32(r1) <= s32(r0)) {
        goto L_5affd0;
    }
    r3 = r0 + 1u;
    r1 = arg0->word_18;
    r0 = arg0->word_1c + 1u;
    arg0->word_1c = u32(r0);
    res = r1 - r0;
    arg0->word_24 = u32(r3);
    if (!u32(res == 0) && res >> 0x1f == ((r1 ^ r0) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        goto L_5affc0;
    }
    r6 = 0u;
    arg0->word_1c = u32(r6);
    r1 = arg0->word_10;
    r2 = arg0->word_14;
    r3 = 0x40u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00347518(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    r0 = r0 & 0x80000000u;  // (from the original)
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        *gptr<u32>(r4 + 0x18u) = u32(*gptr<u32>(r13));  // (from the original)
        goto L_5affc0;
    }
    r0 = *gptr<u32>(r4 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00347454(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r4 + 0x10u) = u32(r6);  // (from the original)
    r0 = u32(*gptr<u8>(r4 + 8u));
    *gptr<u8>(r4 + 4u) = u8(r6);
    if (r0 == 0) {
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_005aead8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    goto L_5affd0;
L_5affc0:;
    ea = r4 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    if (s32(r1) < s32(*gptr<u32>(ea))) {
        r0 = 1u;
        goto L_5affd4;
    }
L_5affd0:;
    r0 = 0u;
L_5affd4:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005aff24
GUEST_EXPORT(0x005aff24, d_005aff24::f_005aff24);
