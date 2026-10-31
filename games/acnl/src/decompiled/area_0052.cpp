// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"

#include <bit>

using guest::gptr;

// f_00520bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520bec {

inline guest::global<u32, 0x0097528c> global_0097528c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00520f54, u32(u32, u32, u32, u32)> call_00520f54;  // (from the original)
inline constexpr guest::Function<0x00521bec, u32(u32, u32, u32, u32)> call_00521bec;  // (from the original)

u32 f_00520bec(u32 r0) {
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_7 = 0;
    u32 r2_8 = 0;
    u32 r2_9 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00301d0c(r0, 0x521c2cu, 0x14u, 0x400u);  // (from the original)
    r0_2 = r0_1 + 0x5000u;  // (from the original)
    r0_3 = call_00301d0c(r0_2, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    r0_4 = r0_3 + 0x4000u;  // (from the original)
    r0_5 = call_00301d0c(r0_4, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x4000u;  // (from the original)
    r0_7 = call_00521bec(r0_6, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_8 = r0_7 + 4u;
    r0_9 = call_00520f54(r0_8, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_10 = r0_9 + 8u;
    r0_11 = call_00520f54(r0_10, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_12 = r0_11 + 8u;
    r0_13 = call_00520f54(r0_12, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_14 = r0_13 + 8u;
    r0_15 = call_00520f54(r0_14, r1_5, r2_5, r3_5);
    r0_16 = r0_15 + 8u;
    r0_17 = call_00301d0c(r0_16, 0x521c10u, 0x10u, 0x400u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0x4000u;  // (from the original)
    r0_19 = call_00520f54(r0_18, r1_6, r2_6, r3_6);
    r0 = r0_19 - 0x11024u;  // (from the original)
    r3 = 0u;
    r2_7 = 0x1142cu | u32(s32(0x1142cu) >> 0x10);  // (from the original)
    *gptr<u8>(0x1142cu + r0) = u8(1u);  // (from the original)
    r1 = r3;
    *gptr<u8>(r2_7 + r0) = u8(r3);
L_520c90:;
    if (r1 >= 0x400u) {  // (from the original)
        r2_8 = r1 << 0x16 >> 0x16;  // (from the original)
        if (s32(r2_8) < s32(0x200u)) {  // (from the original)
            r2_9 = r2_8 + 0x200u;  // (from the original)
            goto L_520cb4;
        }
    }
    r2_9 = r1 << 0x16 >> 0x16;  // (from the original)
L_520cb4:;
    r1 = r1 + 1u;
    res_1 = r1 - 0x400u;  // (from the original)
    *gptr<u8>(r2_9 + r0 + 0x1102cu) = u8(r3);  // (from the original)
    if (res_1 >> 0x1f != ((r1 ^ 0x400u) & (r1 ^ res_1)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_520c90;
    }
    *global_0097528c = u32(r0);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x97528cu;  // (from the original)
    return r0;
}

}  // namespace d_00520bec
GUEST_EXPORT(0x00520bec, d_00520bec::f_00520bec);

// f_00520ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520ce8 {

inline guest::global<u32, 0x00975294> global_00975294;  // (from the original)

u32 f_00520ce8(u32 r0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    r1_1 = *gptr<u32>(0x975294u + 8u);  // (from the original)
    if (r1_1 == 0 || r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r0 >= r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = *global_00975294;
    r0_1 = r1_2 + (r0 + (r0 << 1) << 2);
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00520ce8
GUEST_EXPORT(0x00520ce8, d_00520ce8::f_00520ce8);

// f_00520d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d1c {

inline guest::global<u32, 0x00975298> global_00975298;  // (from the original)

u32 f_00520d1c(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    r1_1 = *global_00975298;
    r0_1 = *gptr<u32>(r1_1 + (r0 << 3));
    return guest::call_address<u32>(r0_1, r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00520d1c
GUEST_EXPORT(0x00520d1c, d_00520d1c::f_00520d1c);

// f_00520d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d30 {

inline guest::global<u32, 0x00975298> global_00975298;  // (from the original)

u32 f_00520d30(u32 r0, u32 r1) {
    u32 r2_1 = 0;
    r2_1 = *gptr<u32>(*global_00975298 + (r0 << 3) + 4u);
    return guest::call_address<u32>(r2_1, r1, r1, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00520d30
GUEST_EXPORT(0x00520d30, d_00520d30::f_00520d30);

// f_00520d5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520d5c {

struct __attribute__((packed)) Object_00520d5c_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00520d5c_1, word_4, 0x4);  // (from the original)


u32 f_00520d5c(u32 r0, gptr<Object_00520d5c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    if (r1 == 0) {
        return 0u;
    }
    r2_1 = *gptr<u32>(r0);
    if (r2_1 == 0) {
        *gptr<u32>(r0 + 4u) = u32(r1);
    } else {
        *gptr<u32>(r2_1) = u32(r1);
        arg1->word_4 = u32(*gptr<u32>(r0));
    }
    *gptr<u32>(r0) = u32(r1);
    return 1u;
}

}  // namespace d_00520d5c
GUEST_EXPORT(0x00520d5c, d_00520d5c::f_00520d5c);

// f_00520df4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520df4 {

struct __attribute__((packed)) Object_00520df4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520df4_1, word_0, 0x0);  // (from the original)


u32 f_00520df4(u32 r0, gptr<Object_00520df4_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    if (r1 == 0) {
        return 0u;
    }
    r2_1 = *gptr<u32>(r0 + 4u);
    if (r2_1 == 0) {
        *gptr<u32>(r0) = u32(r1);
    } else {
        *gptr<u32>(r2_1 + 4u) = u32(r1);
        arg1->word_0 = u32(*gptr<u32>(r0 + 4u));
    }
    *gptr<u32>(r0 + 4u) = u32(r1);
    return 1u;
}

}  // namespace d_00520df4
GUEST_EXPORT(0x00520df4, d_00520df4::f_00520df4);

// f_00520e24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00520e24 {

struct __attribute__((packed)) Object_00520e24_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00520e24_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00520e24_1 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_00520e24_1, half_c, 0xc);  // (from the original)


u32 f_00520e24(gptr<Object_00520e24_0> arg0, gptr<Object_00520e24_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r1;
    r4 = r0;
    r6 = arg0->word_0;
    if (r1 == 0) {
        goto L_520f4c;
    }
    if (r6 != 0) {
        if (u32(*gptr<u16>(r6 + 0xcu)) <= u32(arg1->half_c)) {  // (from the original)
            goto L_520e98;
        }
        r0_1 = arg0->word_0;
        if (r0_1 != 0) {
            goto L_520f34;
        }
        goto L_520f44;
    }
    r0_2 = *gptr<u32>(r4 + 4u);
    if (r0_2 == 0) {
        *gptr<u32>(r4) = u32(r5);
    } else {
        *gptr<u32>(r0_2 + 4u) = u32(r5);
        *gptr<u32>(r5) = u32(*gptr<u32>(r4 + 4u));
    }
L_520e84:;
    *gptr<u32>(r4 + 4u) = u32(r5);
    goto L_520e90;
L_520e8c:;
    *gptr<u32>(r4) = u32(r5);
L_520e90:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return 1u;
L_520e98:;
    if (*gptr<u32>(r6 + 4u) == 0) {
        goto L_520eec;
    }
    if (u32(*gptr<u16>(*gptr<u32>(r6 + 4u) + 0xcu)) > u32(*gptr<u16>(r5 + 0xcu))) {  // (from the original)
        goto L_520eec;
    }
    r6 = *gptr<u32>(r6 + 4u);
    guest::preempt();
    goto L_520e98;
L_520eec:;
    if (r6 != 0) {
        if (r5 == 0) {
            goto L_520f4c;
        }
        *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r6 + 4u));
        *gptr<u32>(r5) = u32(r6);
        *gptr<u32>(r6 + 4u) = u32(r5);
        r0_3 = *gptr<u32>(r5 + 4u);
        if (r0_3 != 0) {
            *gptr<u32>(r0_3) = u32(r5);
            guest::preempt();
            goto L_520e90;
        }
        guest::preempt();
        goto L_520e84;
    }
    if (r5 == 0) {
        goto L_520f4c;
    }
    r0_1 = *gptr<u32>(r4);
    if (r0_1 == 0) {
        goto L_520f44;
    }
L_520f34:;
    *gptr<u32>(r0_1) = u32(r5);
    *gptr<u32>(r5 + 4u) = u32(*gptr<u32>(r4));
    guest::preempt();
    goto L_520e8c;
L_520f44:;
    *gptr<u32>(r4 + 4u) = u32(r5);
    guest::preempt();
    goto L_520e8c;
L_520f4c:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    return 0u;
}

}  // namespace d_00520e24
GUEST_EXPORT(0x00520e24, d_00520e24::f_00520e24);

// f_00521000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521000 {

inline guest::global<u32, 0x008a3af8> global_008a3af8;  // (from the original)
inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521000() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 ea_4 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    ea_1 = 0x8a3af8u + 0x10u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    ea_3 = 0x8a3af8u + 0xcu;  // (from the original)
    r2_2 = *gptr<u32>(ea_3);
    ea_4 = r13;
    *gptr<u32>(ea_4) = u32(r2_2);
    r1_1 = *global_008a3af8;
    r2_3 = *gptr<u32>(0x8a3af8u + 4);  // (from the original)
    r3_2 = *gptr<u32>(0x8a3af8u + 8);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1_1, r2_3, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521000
GUEST_EXPORT(0x00521000, d_00521000::f_00521000);

// f_00521030: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521030 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521030() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    ea_1 = 0x8a3af8u + 0x28u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(*gptr<u32>(0x8a3af8u + 0x24u));  // (from the original)
    ea_4 = 0x8a3af8u + 0x18u;  // (from the original)
    r1_1 = *gptr<u32>(ea_4);
    r2_2 = *gptr<u32>(ea_4 + 4);
    r3_2 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521030
GUEST_EXPORT(0x00521030, d_00521030::f_00521030);

// f_00521070: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521070 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521070() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    ea_1 = 0x8a3af8u + 0x40u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(*gptr<u32>(0x8a3af8u + 0x3cu));  // (from the original)
    ea_4 = 0x8a3af8u + 0x30u;  // (from the original)
    r1_1 = *gptr<u32>(ea_4);
    r2_2 = *gptr<u32>(ea_4 + 4);
    r3_2 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521070
GUEST_EXPORT(0x00521070, d_00521070::f_00521070);

// f_005210a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005210a8 {

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x005204c8, u32(u32, u32, u32, u32)> call_005204c8;  // (from the original)

u32 f_005210a8(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0051fe30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return call_005204c8(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005210a8
GUEST_EXPORT(0x005210a8, d_005210a8::f_005210a8);

// f_00521a48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a48 {

inline constexpr guest::Function<0x00520f7c, u32(u32, u32, u32, u32)> call_00520f7c;  // (from the original)

u32 f_00521a48() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    ea_1 = 0x8a3af8u + 0x58u;  // (from the original)
    r2_1 = *gptr<u32>(ea_1);
    r3_1 = *gptr<u32>(ea_1 + 4);
    ea_2 = r13 + 4u;
    *gptr<u32>(ea_2) = u32(r2_1);
    *gptr<u32>(ea_2 + 4) = u32(r3_1);
    ea_3 = r13;
    *gptr<u32>(ea_3) = u32(*gptr<u32>(0x8a3af8u + 0x54u));  // (from the original)
    ea_4 = 0x8a3af8u + 0x48u;  // (from the original)
    r1_1 = *gptr<u32>(ea_4);
    r2_2 = *gptr<u32>(ea_4 + 4);
    r3_2 = *gptr<u32>(ea_4 + 8);
    guest::cpu()->r[13] = r13;
    call_00520f7c(guest::cpu()->r[0], r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return guest::cpu()->r[0];
}

}  // namespace d_00521a48
GUEST_EXPORT(0x00521a48, d_00521a48::f_00521a48);

// f_00521a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521a8c {

struct __attribute__((packed)) Object_00521a8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u16 half_c;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
};
GUEST_OFFSET(Object_00521a8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_f, 0xf);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_00521a8c_0, byte_12, 0x12);  // (from the original)

inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)
inline constexpr guest::Function<0x00747944, u32(u32, u32, u32, u32)> call_00747944;  // (from the original)

u32 f_00521a8c(gptr<Object_00521a8c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = ~0u;
    arg0->word_8 = u32(0u);
    arg0->word_0 = u32(0x9036c4u);  // (from the original)
    arg0->word_4 = u32(r2_1);
    arg0->half_c = u16(0u);
    arg0->byte_e = u8(0u);
    arg0->byte_f = u8(0u);
    arg0->byte_10 = u8(0u);
    arg0->byte_11 = u8(0u);
    arg0->byte_12 = u8(0u);
    r0_1 = call_0051fe30(0u, 0x9036c4u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_2 = call_00747944(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 4u) = u32(r0_2);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_00521a8c
GUEST_EXPORT(0x00521a8c, d_00521a8c::f_00521a8c);

// f_00521ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ae4 {

struct __attribute__((packed)) Object_00521ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00521ae4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00521ae4_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_00521ae4_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00521ae4_2, word_8, 0x8);  // (from the original)


u32 f_00521ae4(u32 r0, gptr<Object_00521ae4_1> arg1, gptr<Object_00521ae4_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    if (r1 == 0) {
        return 0u;
    }
    if (r2 == 0) {
        goto L_521b34;
    }
    arg1->word_4 = u32(r2);
    r0_1 = arg2->word_8;
    if (r0_1 == 0) {
        arg2->word_8 = u32(r1);
        return 1u;
    }
    r2 = *gptr<u32>(r0_1 + 0x10u);  // (from the original)
    if (r2 == 0) {
        *gptr<u32>(r0_1 + 0x10u) = u32(r1);  // (from the original)
        arg1->word_c = u32(r0_1);
        return 1u;
    }
    do {
L_521b18:;
        r0_2 = r2;
        r2 = *gptr<u32>(r2 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r2 != 0);
    *gptr<u32>(r0_2 + 0x10u) = u32(r1);  // (from the original)
    arg1->word_c = u32(r0_2);
    return 1u;
L_521b34:;
    r2_1 = *gptr<u32>(r0);
    if (r2_1 == 0) {
        *gptr<u32>(r0) = u32(r1);
        return 1u;
    }
    r0 = *gptr<u32>(r2_1 + 0x10u);  // (from the original)
    if (r0 == 0) {
        *gptr<u32>(r2_1 + 0x10u) = u32(r1);  // (from the original)
        arg1->word_c = u32(r2_1);
        return 1u;
    }
    do {
L_521b50:;
        r2_2 = r0;
        r0 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        guest::preempt();
    } while (r0 != 0);
    *gptr<u32>(r2_2 + 0x10u) = u32(r1);  // (from the original)
    arg1->word_c = u32(r2_2);
    return 1u;
}

}  // namespace d_00521ae4
GUEST_EXPORT(0x00521ae4, d_00521ae4::f_00521ae4);

// f_00521ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ddc {

inline guest::global<u32, 0x00521e64> global_00521e64;  // (from the original)
inline guest::global<u32, 0x00953af4> global_00953af4;  // (from the original)
inline guest::global<u32, 0x00953b04> global_00953b04;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521ddc(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        if ((*global_00953af4 & 1u) != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            return 0x953b04u;  // (from the original)
        }
        guest::cpu()->s[0] = S0_1;
        r0_2 = call_002fe7dc(0x953af4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_2;
            return 0x953b04u;  // (from the original)
        }
        S0_3 = std::bit_cast<float>(*global_00521e64);
        *global_00953b04 = u32(std::bit_cast<u32>(S0_3));
        *gptr<u32>(0x953b04u + 4u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        return 0x953b04u;  // (from the original)
    }
    r0_3 = *global_009752d4;
    r1_3 = *gptr<u32>(r0_3 + 0xd0u);  // (from the original)
    zf_1 = r1_3 == 0;
    cf_1 = r1_3 >= 0u;
    if (cf_1 && !zf_1) {
        r0_3 = *gptr<u32>(*gptr<u32>(r0_3 + 0xd8u));  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r0_3 = 0u;
    }
    r1_4 = *gptr<u32>(r0_3 + 0x10u);  // (from the original)
    if ((r1_4 & 1u) == 0) {
        r0_4 = 0x9752c4u;  // (from the original)
    } else {
        r0_4 = r0_3 + 0x114u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->s[0] = S0_1;
    return r0_4;
}

}  // namespace d_00521ddc
GUEST_EXPORT(0x00521ddc, d_00521ddc::f_00521ddc);

// f_00521e74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521e74 {

inline guest::global<u32, 0x00521eec> global_00521eec;  // (from the original)
inline guest::global<u32, 0x00953af0> global_00953af0;  // (from the original)
inline guest::global<u32, 0x00953afc> global_00953afc;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521e74(u32 r0, u32 r1, float S0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0_1 = call_005ce6dc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        if ((*global_00953af0 & 1u) != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            guest::cpu()->s[0] = S0_1;
            return 0x953afcu;  // (from the original)
        }
        guest::cpu()->s[0] = S0_1;
        r0_2 = call_002fe7dc(0x953af0u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->s[0] = S0_2;
            return 0x953afcu;  // (from the original)
        }
        S0_3 = std::bit_cast<float>(*global_00521eec);
        *global_00953afc = u32(std::bit_cast<u32>(S0_3));
        *gptr<u32>(0x953afcu + 4u) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->s[0] = S0_3;
        return 0x953afcu;  // (from the original)
    }
    r0_3 = *global_009752d4;
    r1_3 = *gptr<u32>(r0_3 + 0xd0u);  // (from the original)
    zf_1 = r1_3 == 0;
    cf_1 = r1_3 >= 0u;
    if (cf_1 && !zf_1) {
        r0_3 = *gptr<u32>(*gptr<u32>(r0_3 + 0xd8u));  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r0_3 = 0u;
    }
    r0_4 = r0_3 + 0x11cu;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->s[0] = S0_1;
    return r0_4;
}

}  // namespace d_00521e74
GUEST_EXPORT(0x00521e74, d_00521e74::f_00521e74);

// f_00521ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00521ef8 {

inline guest::global<u32, 0x00953af8> global_00953af8;  // (from the original)
inline guest::global<u32, 0x00953b0c> global_00953b0c;  // (from the original)
inline guest::global<u32, 0x009752d4> global_009752d4;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> call_005ce6dc;  // (from the original)

u32 f_00521ef8(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_005ce6dc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0) {
        if ((*global_00953af8 & 1u) != 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return 0x953b0cu;  // (from the original)
        }
        r0_2 = call_002fe7dc(0x953af8u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return 0x953b0cu;  // (from the original)
        }
        *global_00953b0c = u32(0x80000000u);  // (from the original)
        *gptr<u32>(0x953b0cu + 4) = u32(0x80000000u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x80000000u;  // (from the original)
        return 0x953b0cu;  // (from the original)
    }
    r0_3 = *global_009752d4;
    r1_3 = *gptr<u32>(r0_3 + 0xd0u);  // (from the original)
    zf_1 = r1_3 == 0;
    cf_1 = r1_3 >= 0u;
    if (cf_1 && !zf_1) {
        r0_3 = *gptr<u32>(*gptr<u32>(r0_3 + 0xd8u));  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r0_3 = 0u;
    }
    r1_4 = *gptr<u32>(r0_3 + 0x10u);  // (from the original)
    if ((r1_4 & 1u) == 0) {
        r0_4 = 0x9752ccu;  // (from the original)
    } else {
        r0_4 = r0_3 + 0x14u;  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_4;
}

}  // namespace d_00521ef8
GUEST_EXPORT(0x00521ef8, d_00521ef8::f_00521ef8);

// f_00522168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522168 {

inline constexpr guest::Function<0x005221d8, u32(u32, u32, u32, u32)> call_005221d8;  // (from the original)

u32 f_00522168(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 nf_1 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_005221d8(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = r1 + 1u;
    r0_2 = call_005221d8(r0, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 >> 0x1f == (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        r1_2 = r0_2 - 1u;
        goto L_5221b0;
    }
    r0_3 = call_005221d8(r0, r1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    nf_1 = r0_3 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r0_3 = *gptr<u32>(r0 + 8u);
    }
    if (nf_1 != 0u) {
        r1_2 = ~0u;
    }
    if (nf_1 == 0u) {
        r1_2 = *gptr<u32>(r0_3 + 8u);
    }
L_5221b0:;
    if (r0_1 + 1u == 0) {
        r0_4 = ~0u;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_4;
    }
    r0_4 = r1_2 - r0_1 + 1u;
    if (*gptr<u32>(*gptr<u32>(r0 + 8u) + 8u) == r1_2) {
        r0_4 = r0_4 - 1u;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00522168
GUEST_EXPORT(0x00522168, d_00522168::f_00522168);

// f_005221d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005221d8 {

struct __attribute__((packed)) Object_005221d8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005221d8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005221d8_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005221d8(gptr<Object_005221d8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    if (r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_52222c;
    }
    r1 = arg0->word_4 - 1u;
    if (s32(r1) < s32(r4_1)) {
        goto L_52222c;
    }
    if (s32(r4_1) >= s32(arg0->word_10)) {
        call_005224e8(r0, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r1 = *gptr<u32>(r0 + 0xcu);  // (from the original)
    r0_1 = u32(*gptr<u16>(r1 + (r4_1 << 1)));
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r0_1 != 0 && r0_1 >> 0x1f == (r0_1 & (r0_1 ^ r0_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
L_52222c:;
    r0_1 = ~0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005221d8
GUEST_EXPORT(0x005221d8, d_005221d8::f_005221d8);

// f_005224bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005224bc {

struct __attribute__((packed)) Object_005224bc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005224bc_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x005224e8, u32(u32, u32, u32, u32)> call_005224e8;  // (from the original)

u32 f_005224bc(gptr<Object_005224bc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (s32(arg0->word_10) <= s32(r1)) {
        call_005224e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    r0_1 = u32(*gptr<u16>(*gptr<u32>(r0 + 0xcu) + (r1 << 1)));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_005224bc
GUEST_EXPORT(0x005224bc, d_005224bc::f_005224bc);

// f_00522ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00522ae0 {

inline constexpr guest::Function<0x0052296c, u32(u32, u32, u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00522ae0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005234d8(r0, 1u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_0052296c(r0, 0u, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    if (r1 != 0) {
        ea_1 = r0 + 0x14u;  // (from the original)
        r1_1 = *gptr<u32>(ea_1);
        ea_2 = r0 + 0x20u;  // (from the original)
        *gptr<u8>(ea_2) = u8(0u);
        ea_3 = r0 + 0x1cu;  // (from the original)
        *gptr<u32>(ea_3) = u32(r1_1);
        *gptr<u32>(ea_3 + 0x74u) = u32(~0u);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00522ae0
GUEST_EXPORT(0x00522ae0, d_00522ae0::f_00522ae0);

// f_00523020: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523020 {

struct __attribute__((packed)) Object_00523020_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00523020_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x0052296c, u32(u32, u32, u32, u32)> call_0052296c;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00523020(gptr<Object_00523020_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r5_1 = r1;
    r7_1 = ~0u;
    if (r2 != 0) {
        arg0->word_18 = u32(r7_1);
    }
    guest::cpu()->r[13] = r13;
    call_005234d8(r0, 1u, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005234d8(r0, 1u, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0052296c(r0, 0u, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    ea_1 = r0 + 8u;
    r0_1 = *gptr<u32>(ea_1);
    if (r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
        r5_1 = 0u;
    }
    if (s32(r0_1) < s32(r5_1)) {
        r5_1 = r0_1;
    }
    zf_1 = r3 == 0;
    if (zf_1) {
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    ea_2 = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r5_1);
    ea_3 = r0 + 0x20u;  // (from the original)
    *gptr<u8>(ea_3) = u8(r0_2);
    if (!zf_1) {
        ea_4 = r0 + 0x1cu;  // (from the original)
        *gptr<u32>(ea_4) = u32(r5_1);
        *gptr<u32>(ea_4 + 0x74u) = u32(r7_1);  // (from the original)
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00523020
GUEST_EXPORT(0x00523020, d_00523020::f_00523020);

// f_005235e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005235e8 {

struct __attribute__((packed)) Object_005235e8_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u8 unknown_18[0x4];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_005235e8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005235e8_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> call_005230d4;  // (from the original)

u32 f_005235e8(gptr<Object_005235e8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    u32 vf_1 = 0;
    u32 r2_1 = 0;
    u32 res_2 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 8;
    r1_1 = arg0->word_1c;
    r0_1 = arg0->word_14;
    res_1 = r1_1 - r0_1;
    nf_1 = res_1 >> 0x1f;  // (from the original)
    zf_1 = res_1 == 0;
    vf_1 = ((r1_1 ^ r0_1) & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (zf_1 || nf_1 != vf_1) {
        r2 = r0_1;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r2 = r1_1;
    }
    if (zf_1 || nf_1 != vf_1) {
        r3 = r1_1;
    }
    if (!zf_1 && nf_1 == vf_1) {
        r3 = r0_1;
    }
    r2_1 = r2 - r3;
    if (r2_1 != 0 && r2_1 >> 0x1f == (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        res_2 = r1_1 - r0_1;
        nf_2 = res_2 >> 0x1f;  // (from the original)
        zf_2 = res_2 == 0;
        vf_2 = ((r1_1 ^ r0_1) & (r1_1 ^ res_2)) >> 0x1f;  // (from the original)
        if (!zf_2 && nf_2 == vf_2) {
            r2_1 = r1_1;
        }
        if (zf_2 || nf_2 != vf_2) {
            r3 = r1_1;
            r2_1 = r0_1;
        }
        if (!zf_2 && nf_2 == vf_2) {
            r3 = r0_1;
            r1_1 = r0_1;
        }
        r2_2 = r2_1 - r3;
        guest::cpu()->r[13] = r13;
        call_005230d4(r0, r1_1, r2_2, r3);
    }
    ea_1 = r0 + 0x14u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    ea_2 = r0 + 0x20u;  // (from the original)
    *gptr<u8>(ea_2) = u8(0u);
    ea_3 = r0 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_3) = u32(r0_2);
    r1_2 = ~0u;
    *gptr<u32>(ea_3 + 0x74u) = u32(r1_2);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005235e8
GUEST_EXPORT(0x005235e8, d_005235e8::f_005235e8);

// f_00523658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523658 {

struct __attribute__((packed)) Object_00523658_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_00523658_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x00100835, u32(u32, u32, u32, u32)> call_00100834;  // (from the original)
inline constexpr guest::Function<0x0010181d, u32(u32, u32, u32, u32)> call_0010181c;  // (from the original)
inline constexpr guest::Function<0x00522074, u32(u32, u32, u32, u32)> call_00522074;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)

u32 f_00523658(gptr<Object_00523658_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r5_2 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    arg0->word_18 = u32(~0u);
    r5_1 = r2;
    call_005234d8(r0, 1u, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r1 != 0) {
        if (r5_1 >> 0x1f != (r5_1 & (r5_1 ^ r5_1)) >> 0x1f) {  // (from the original)
            r0_1 = call_00100834(r1, r1_1, r2_1, guest::cpu()->r[3]);
            r5_1 = r0_1;
        }
        r0_2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (s32(r0_2) < s32(r5_1)) {
            r5_1 = r0_2;
        }
        r0_3 = *gptr<u32>(r0 + 0x10u);  // (from the original)
        call_0010181c(r0_3, r1, r5_1, guest::cpu()->r[3]);
        *gptr<u16>(*gptr<u32>(r0 + 0x10u) + (r5_1 << 1)) = u16(0u);  // (from the original)
        *gptr<u32>(r0 + 8u) = u32(r5_1);
    } else {
        *gptr<u16>(*gptr<u32>(r0 + 0x10u)) = u16(0u);  // (from the original)
        *gptr<u32>(r0 + 8u) = u32(0u);
    }
    *gptr<u32>(r0 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(0u);  // (from the original)
    r5_2 = *gptr<u32>(r0 + 4u);
    r0_4 = call_00522074(r5_2, 0u, 0u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r5_2 + 0x10u) = u32(r0_4);  // (from the original)
    *gptr<u8>(r0 + 0x96u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_00523658
GUEST_EXPORT(0x00523658, d_00523658::f_00523658);

// f_0052370c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052370c {

struct __attribute__((packed)) Object_0052370c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x4];  // (not used here)
    u8 byte_20;
    u8 unknown_21[0x73];  // (not used here)
    u8 byte_94;
};
GUEST_OFFSET(Object_0052370c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0052370c_0, byte_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x004dac10, u32(u32, u32, u32, u32)> call_004dac10;  // (from the original)
inline constexpr guest::Function<0x005230d4, u32(u32, u32, u32, u32)> call_005230d4;  // (from the original)
inline constexpr guest::Function<0x005234d8, u32(u32, u32, u32, u32)> call_005234d8;  // (from the original)
inline constexpr guest::Function<0x005235e8, u32(u32, u32, u32, u32)> call_005235e8;  // (from the original)
inline constexpr guest::Function<0x0058d3b4, u32(u32, u32, u32, u32)> call_0058d3b4;  // (from the original)

u32 f_0052370c(gptr<Object_0052370c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r8 = guest::cpu()->r[8];
    u32 r5_1 = 0;
    u32 zf_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 zf_2 = 0;
    u32 vf_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r1_6 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r5_1 = r1;
    r8 = 0x10003dbu;  // (from the original)
    zf_1 = u32(arg0->byte_94) == 1u;
    if (zf_1) {
        zf_1 = u32(arg0->byte_20) == 0;
    }
    if (!zf_1) {
        r7_1 = ~0u;
        arg0->word_18 = u32(r7_1);
        call_005234d8(r4, 0u, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        if (u32(*gptr<u8>(r4 + 0x20u)) == 0) {  // (from the original)
            goto L_5237ac;
        }
        r0_1 = *gptr<u32>(r4 + 0x1cu);  // (from the original)
        r1_1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        res_1 = r0_1 - r1_1;
        nf_1 = res_1 >> 0x1f;  // (from the original)
        zf_2 = res_1 == 0;
        vf_1 = ((r0_1 ^ r1_1) & (r0_1 ^ res_1)) >> 0x1f;  // (from the original)
        if (!zf_2 && nf_1 == vf_1) {
            r2 = r0_1;
        }
        if (zf_2 || nf_1 != vf_1) {
            r2 = r1_1;
        }
        if (!zf_2 && nf_1 == vf_1) {
            r0_1 = r1_1;
        }
        r0_2 = r2 - r0_1;
        if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
            goto L_5237ac;
        }
        call_005235e8(r4, r1_1, r2, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        goto L_5237e4;
    }
    if (r1 != 0) {
        goto L_5237cc;
    }
L_52378c:;
    r0_3 = *gptr<u32>(r4 + 0x9cu);  // (from the original)
    call_004dac10(r0_3, r1, r2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    call_0058d3b4(r8, r1_3, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_5237cc;
L_5237ac:;
    r1 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_5237d4;
    }
    *gptr<u8>(r4 + 0x20u) = u8(0u);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r1);  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r7_1);  // (from the original)
    if (r5_1 == 0) {
        guest::preempt();
        goto L_52378c;
    }
L_5237cc:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_5237d4:;
    r1_4 = r1 - 1u;
    call_005230d4(r4, r1_4, 1u, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
L_5237e4:;
    *gptr<u32>(r4 + 0x1cu) = u32(*gptr<u32>(r4 + 0x14u));  // (from the original)
    *gptr<u32>(r4 + 0x90u) = u32(r7_1);  // (from the original)
    *gptr<u8>(r4 + 0x20u) = u8(0u);  // (from the original)
    r0_4 = *gptr<u32>(r4 + 0x9cu);  // (from the original)
    call_004dac10(r0_4, r1_2, r2_1, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    call_0058d3b4(0x10003dau, r1_5, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x95u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    return 1u;
}

}  // namespace d_0052370c
GUEST_EXPORT(0x0052370c, d_0052370c::f_0052370c);

// f_0052389c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052389c {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)

u32 f_0052389c() {
    u32 r0_1 = 0;
    r0_1 = *global_0095e0fc;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1 + 4u);
    }
    return r0_1;
}

}  // namespace d_0052389c
GUEST_EXPORT(0x0052389c, d_0052389c::f_0052389c);

// f_005238b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005238b4 {


u32 f_005238b4(u32 r0) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_3 = 0;
    u32 zf_2 = 0;
    u32 cf_2 = 0;
    u32 r1_4 = 0;
    u32 zf_3 = 0;
    u32 cf_3 = 0;
    u32 r1_5 = 0;
    u32 zf_4 = 0;
    u32 cf_4 = 0;
    u32 r1_6 = 0;
    u32 zf_5 = 0;
    u32 cf_5 = 0;
    u32 r1_7 = 0;
    u32 zf_6 = 0;
    u32 cf_6 = 0;
    u32 r0_1 = 0;
    if ((*gptr<u32>(0xad6140u + 0x18u) & 1u) == 0) {  // (from the original)
        guest::cpu()->r[1] = 0xad6140u;  // (from the original)
        return 0u;
    }
    r1_1 = u32(*gptr<u16>(0xad6140u + 0x24u));  // (from the original)
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r1_2 = r0 - 0x30u;  // (from the original)
    zf_1 = r1_2 == 9u;
    cf_1 = r1_2 >= 9u;
    if (cf_1 && !zf_1) {
        r1_2 = r0 - 0xff10u;  // (from the original)
        zf_1 = r1_2 == 9u;
        cf_1 = r1_2 >= 9u;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_3 = r0 - 0x2070u;  // (from the original)
    zf_2 = r1_3 == 9u;
    cf_2 = r1_3 >= 9u;
    if (cf_2 && !zf_2) {
        r1_3 = r0 - 0x2080u;  // (from the original)
        zf_2 = r1_3 == 9u;
        cf_2 = r1_3 >= 9u;
    }
    if (!cf_2 || zf_2) {
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    r1_4 = r0 - 0x2160u;  // (from the original)
    zf_3 = r1_4 == 0xbu;  // (from the original)
    cf_3 = r1_4 >= 0xbu;  // (from the original)
    if (cf_3 && !zf_3) {
        r1_4 = r0 - 0x2170u;  // (from the original)
        zf_3 = r1_4 == 0xbu;  // (from the original)
        cf_3 = r1_4 >= 0xbu;  // (from the original)
    }
    if (!cf_3 || zf_3) {
        guest::cpu()->r[1] = r1_4;
        return 1u;
    }
    r1_5 = r0 - 0x2460u;  // (from the original)
    zf_4 = r1_5 == 0x13u;  // (from the original)
    cf_4 = r1_5 >= 0x13u;  // (from the original)
    if (cf_4 && !zf_4) {
        r1_5 = r0 - 0x2474u;  // (from the original)
        zf_4 = r1_5 == 0x13u;  // (from the original)
        cf_4 = r1_5 >= 0x13u;  // (from the original)
    }
    if (!cf_4 || zf_4) {
        guest::cpu()->r[1] = r1_5;
        return 1u;
    }
    r1_6 = r0 - 0x2488u;  // (from the original)
    zf_5 = r1_6 == 0x13u;  // (from the original)
    cf_5 = r1_6 >= 0x13u;  // (from the original)
    if (cf_5 && !zf_5) {
        r1_6 = r0 - 0x2776u;  // (from the original)
        zf_5 = r1_6 == 9u;
        cf_5 = r1_6 >= 9u;
    }
    if (!cf_5 || zf_5) {
        guest::cpu()->r[1] = r1_6;
        return 1u;
    }
    r1_7 = r0 - 0x2780u;  // (from the original)
    zf_6 = r1_7 == 9u;
    cf_6 = r1_7 >= 9u;
    if (cf_6 && !zf_6) {
        r0_1 = r0 - 0x278au;  // (from the original)
        zf_6 = r0_1 == 9u;
        cf_6 = r0_1 >= 9u;
    }
    if (cf_6 && !zf_6) {
        guest::cpu()->r[1] = r1_7;
        return 0u;
    }
    guest::cpu()->r[1] = r1_7;
    return 1u;
}

}  // namespace d_005238b4
GUEST_EXPORT(0x005238b4, d_005238b4::f_005238b4);

// f_00523b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523b6c {

inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00523b6c() {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 ea_2 = 0;
    u32 r12_1 = 0;
    u32 ea_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 ea_4 = 0;
    u32 ea_5 = 0;
    u32 ea_6 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    r13 = r13 - 0x10;  // (from the original)
    ea_1 = 0xad6368u + 0x234u;  // (from the original)
    r4_1 = *gptr<u32>(ea_1);
    ea_2 = 0xad6368u + 0x228u;  // (from the original)
    r12_1 = *gptr<u32>(ea_2);
    ea_3 = 0xad6368u + 0x218u;  // (from the original)
    r1_1 = *gptr<u32>(ea_3);
    r2_1 = *gptr<u32>(ea_3 + 4);
    r3_1 = *gptr<u32>(ea_3 + 8);
    ea_4 = 0xad6368u + 0x1f4u;  // (from the original)
    *gptr<u32>(ea_4) = u32(r4_1);
    ea_5 = 0xad6368u + 0x1e8u;  // (from the original)
    *gptr<u32>(ea_5) = u32(r12_1);
    ea_6 = 0xad6368u + 0x1d8u;  // (from the original)
    *gptr<u32>(ea_6) = u32(r1_1);
    *gptr<u32>(ea_6 + 4) = u32(r2_1);
    *gptr<u32>(ea_6 + 8) = u32(r3_1);
    r1_2 = 0xad6368u + 0x238u;  // (from the original)
    r0_1 = 0xad6368u + 0x1f8u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_2));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r1_2 + 0x1c));  // (from the original)
    *gptr<u32>(r0_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r0_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(0xad6540u + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(0xad6540u + 0x14u) = u32(0u);  // (from the original)
    *gptr<u32>(0xad6540u + 0x18u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_2 = call_005d46dc(r0_1, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        *gptr<u32>(0xad6540u + 0x10u) = u32(0u);  // (from the original)
    } else {
        *gptr<u32>(0xad6540u + 0x10u) = u32(2u);  // (from the original)
    }
    if (*gptr<u32>(0xad6540u + 8u) == 2u) {  // (from the original)
        *gptr<u32>(0xad6540u + 8u) = u32(1u);  // (from the original)
    }
    r0_3 = *gptr<u32>(0xad6540u + 4u);  // (from the original)
    if (r0_3 == 2u) {
        r0_3 = *gptr<u32>(0xad6540u + 0x1cu);  // (from the original)
        *gptr<u32>(0xad6540u + 4u) = u32(r0_3);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_3;
}

}  // namespace d_00523b6c
GUEST_EXPORT(0x00523b6c, d_00523b6c::f_00523b6c);

// f_00523d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00523d60 {

inline guest::global<u8, 0x0095e0c9> global_0095e0c9;  // (from the original)

u32 f_00523d60(u32 r0, u32 r1) {
    u32 zf_1 = 0;
    zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = r1 + 1u == 0;
    }
    *global_0095e0c9 = u8(r0);
    if (zf_1) {
        return r0;
    } else {
        *gptr<u32>(0xad6140u + 0x138u) = u32(r1);  // (from the original)
    }
    return 0xad6140u;  // (from the original)
}

}  // namespace d_00523d60
GUEST_EXPORT(0x00523d60, d_00523d60::f_00523d60);

// f_005242b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005242b8 {

inline guest::global<u32, 0x0095e0fc> global_0095e0fc;  // (from the original)

u32 f_005242b8(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    r0_1 = *global_0095e0fc;
    if (r0_1 != 0) {
        r1 = 0u;
        *gptr<u8>(r0_1 + 0x99u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_005242b8
GUEST_EXPORT(0x005242b8, d_005242b8::f_005242b8);

// f_00524320: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524320 {

inline guest::global<u32, 0x00ad6038> global_00ad6038;  // (from the original)
inline guest::global<u32, 0x00ad6124> global_00ad6124;  // (from the original)
inline constexpr guest::Function<0x00100ef9, u32(u32, u32, u32, u32)> call_00100ef8;  // (from the original)
inline constexpr guest::Function<0x00159a0c, u32(u32, u32, u32, u32)> call_00159a0c;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00524320() {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    float S6_2 = 0;
    float S7_2 = 0;
    u32 r5_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_4 = 0;
    float S1_4 = 0;
    float S2_4 = 0;
    float S3_4 = 0;
    float S4_4 = 0;
    float S5_4 = 0;
    float S6_4 = 0;
    float S7_4 = 0;
    u32 r0_6 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    float S6_5 = 0;
    float S7_5 = 0;
    u32 r5_2 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    float S6_6 = 0;
    float S7_6 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    float S4_7 = 0;
    float S5_7 = 0;
    float S6_7 = 0;
    float S7_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0xd8u;  // (from the original)
    r1_1 = 0x8970c8u + 0x170u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r1_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r1_1 + 0x1c));  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(ea_1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(ea_1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    ea_2 = 0x8970c8u + 0x190u;  // (from the original)
    r1_2 = *gptr<u32>(ea_2);
    r2_1 = *gptr<u32>(ea_2 + 4);
    r3_1 = *gptr<u32>(ea_2 + 8);
    r12_1 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(*gptr<u32>(0x8970c8u + 0x1a0u));  // (from the original)
    r0_1 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r0_1) = u32(r1_2);
    *gptr<u32>(r0_1 + 4) = u32(r2_1);
    *gptr<u32>(r0_1 + 8) = u32(r3_1);
    *gptr<u32>(r0_1 + 0xc) = u32(r12_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_2 = call_005d46dc(r0_1, r1_2, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    r5_1 = r13;
    *gptr<u32>(0x95e0c8u + 0x1cu) = u32(0u);  // (from the original)
    r2_2 = *gptr<u32>(r13 + (r0_2 << 2));
    r0_3 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    call_00100ef8(r0_3, 0x524428u, r2_2, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    r2_3 = *gptr<u32>(r5_1 + (r0_2 << 2));
    r0_4 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    r0_5 = call_00100ef8(r0_4, 0x52444cu, r2_3, r3_3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    S1_4 = guest::cpu()->s[1];
    S2_4 = guest::cpu()->s[2];
    S3_4 = guest::cpu()->s[3];
    S4_4 = guest::cpu()->s[4];
    S5_4 = guest::cpu()->s[5];
    S6_4 = guest::cpu()->s[6];
    S7_4 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_4;
    guest::cpu()->s[2] = S2_4;
    guest::cpu()->s[3] = S3_4;
    guest::cpu()->s[4] = S4_4;
    guest::cpu()->s[5] = S5_4;
    guest::cpu()->s[6] = S6_4;
    guest::cpu()->s[7] = S7_4;
    r0_6 = call_00569d50(r0_5, r1_3, r2_4, r3_4);
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    S6_5 = guest::cpu()->s[6];
    S7_5 = guest::cpu()->s[7];
    r5_2 = *gptr<u32>(r0_6 + 4u);
    *gptr<u32>(r13 + 0x3cu) = u32(r13 + 0x40u);  // (from the original)
    r1_4 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    r0_7 = call_0056a974(0xad5f68u, r1_4, r5_2, 0x80u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_6 = guest::cpu()->s[3];
    S4_6 = guest::cpu()->s[4];
    S5_6 = guest::cpu()->s[5];
    S6_6 = guest::cpu()->s[6];
    S7_6 = guest::cpu()->s[7];
    if (r0_7 == 0) {
        r13 = r13 + 0xd8u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        return r0_7;
    }
    *gptr<u32>(r13 + 0x3cu) = u32(r13 + 0x80u);  // (from the original)
    r1_6 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    guest::cpu()->s[4] = S4_6;
    guest::cpu()->s[5] = S5_6;
    guest::cpu()->s[6] = S6_6;
    guest::cpu()->s[7] = S7_6;
    r0_7 = call_0056a974(0xad6054u, r1_6, r5_2, 0x80u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_7 = guest::cpu()->s[3];
    S4_7 = guest::cpu()->s[4];
    S5_7 = guest::cpu()->s[5];
    S6_7 = guest::cpu()->s[6];
    S7_7 = guest::cpu()->s[7];
    if (r0_7 == 0) {
        r13 = r13 + 0xd8u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1_6;
        return r0_7;
    }
    r0_8 = *global_00ad6038;
    r1_5 = *global_00ad6124;
    *gptr<u32>(0x95e0c8u + 0x1cu) = u32(r1_5);  // (from the original)
    if (r0_8 == 0) {
        goto L_524414;
    }
    r1_5 = *gptr<u32>(0x95e0c8u + 0x18u);  // (from the original)
    if (r1_5 != 0) {
        goto L_524414;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_7;
    guest::cpu()->s[4] = S4_7;
    guest::cpu()->s[5] = S5_7;
    guest::cpu()->s[6] = S6_7;
    guest::cpu()->s[7] = S7_7;
    r0_9 = call_00159a0c(r0_8, r1_5, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    *gptr<u32>(0x95e0c8u + 0x18u) = u32(r0_9);  // (from the original)
L_524414:;
    r0_7 = 1u;
    r13 = r13 + 0xd8u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    return r0_7;
}

}  // namespace d_00524320
GUEST_EXPORT(0x00524320, d_00524320::f_00524320);

// f_00524478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524478 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> call_00139724;  // (from the original)

u32 f_00524478() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *gptr<u32>(0x95e0c8u + 0x18u);  // (from the original)
    if (r0_1 != 0) {
        call_00139724(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(0x95e0c8u + 0x18u) = u32(0u);  // (from the original)
    }
    call_00138744(0xad5f68u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_00138744(0xad6054u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(0x95e0c8u + 0x1cu) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_2;
}

}  // namespace d_00524478
GUEST_EXPORT(0x00524478, d_00524478::f_00524478);

// f_005244c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005244c0 {

inline guest::global<u32, 0x0095e0e0> global_0095e0e0;  // (from the original)
inline constexpr guest::Function<0x0015982c, u32(u32, u32, u32, u32)> call_0015982c;  // (from the original)

u32 f_005244c0(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *global_0095e0e0;
    return call_0015982c(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005244c0
GUEST_EXPORT(0x005244c0, d_005244c0::f_005244c0);

// f_00524528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524528 {

struct __attribute__((packed)) Object_00524528_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524528_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524528_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524528_0, word_c, 0xc);  // (from the original)


void f_00524528(gptr<Object_00524528_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0u);
    arg0->byte_8 = u8(0u);
    arg0->byte_9 = u8(0u);
    arg0->byte_a = u8(0u);
    arg0->word_c = u32(0u);
    return;
}

}  // namespace d_00524528
GUEST_EXPORT(0x00524528, d_00524528::f_00524528);

// f_00524598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524598 {

struct __attribute__((packed)) Object_00524598_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
    u8 unknown_b[0x1];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00524598_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_00524598_0, byte_a, 0xa);  // (from the original)
GUEST_OFFSET(Object_00524598_0, word_c, 0xc);  // (from the original)


void f_00524598(gptr<Object_00524598_0> arg0, u32 r1) {
    arg0->word_0 = u32(0u);
    arg0->byte_8 = u8(1u);
    arg0->byte_9 = u8(0u);
    arg0->byte_a = u8(0u);
    arg0->word_c = u32(0u);
    arg0->word_4 = u32(r1);
    return;
}

}  // namespace d_00524598
GUEST_EXPORT(0x00524598, d_00524598::f_00524598);

// f_00524838: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524838 {

inline constexpr guest::Function<0x0011dc88, u32(u32, u32, u32, u32)> call_0011dc88;  // (from the original)
inline constexpr guest::Function<0x005d46dc, u32(u32, u32, u32, u32)> call_005d46dc;  // (from the original)

u32 f_00524838(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x10;  // (from the original)
    r4_1 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d46dc(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0 >= 0xau) {  // (from the original)
        goto L_5248e4;
    }
    ea_1 = 0x890530u + (r0 << 1);  // (from the original)
    r2_1 = u32(*gptr<u8>(ea_1));
    *gptr<u8>(r4_1 + 0x4cu) = u8(r2_1);  // (from the original)
    r1 = u32(*gptr<u8>(ea_1 + 1u));
    *gptr<u8>(r4_1 + 0x4du) = u8(r1);  // (from the original)
    if (r0 == 4u) {
        goto L_524890;
    }
    if (r0 != 1u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0011dc88(r0, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 9u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xeu;  // (from the original)
    *gptr<u8>(r4_1 + 0x4cu) = u8(r0);  // (from the original)
    *gptr<u8>(r4_1 + 0x4du) = u8(1u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_524890:;
    guest::cpu()->r[13] = r13;
    r0 = call_0011dc88(r0, r1, r2_1, guest::cpu()->r[3]);
    r1 = 4u;
    if (r0 != 8u) {
        if (r0 == 9u) {
            goto L_5248d4;
        }
        if (r0 != 0xau) {  // (from the original)
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        *gptr<u8>(r4_1 + 0x4cu) = u8(0xdu);  // (from the original)
        *gptr<u8>(r4_1 + 0x4du) = u8(r1);  // (from the original)
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 0xdu;  // (from the original)
    }
    *gptr<u8>(r4_1 + 0x4cu) = u8(9u);  // (from the original)
    *gptr<u8>(r4_1 + 0x4du) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 9u;
L_5248d4:;
    *gptr<u8>(r4_1 + 0x4cu) = u8(0xcu);  // (from the original)
    *gptr<u8>(r4_1 + 0x4du) = u8(r1);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0xcu;  // (from the original)
L_5248e4:;
    *gptr<u8>(r4_1 + 0x4cu) = u8(0u);  // (from the original)
    *gptr<u8>(r4_1 + 0x4du) = u8(1u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_00524838
GUEST_EXPORT(0x00524838, d_00524838::f_00524838);

// f_00524a54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524a54 {

struct __attribute__((packed)) Object_00524a54_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_00524a54_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00524a54_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00890528> global_00890528;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x003e0f14, u32(u32, u32, u32, u32)> call_003e0f14;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_00524a54(gptr<Object_00524a54_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 res_1 = 0;
    u32 r3_5 = 0;
    u32 ea_1 = 0;
    u32 r3_6 = 0;
    u32 ea_2 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 8;
    arg0->word_0 = u32(0u);
    r3_1 = *global_00890528;
    r2_1 = r0 + 8u;
    arg0->word_10 = u32(*gptr<u32>(0x890528u + 4u));  // (from the original)
    arg0->word_4 = u32(0x905eb4u);  // (from the original)
    arg0->word_8 = u32(r0);
    arg0->word_c = u32(r3_1);
    r0_1 = r0 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003e0f14(r0_1, 0x905eb4u, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_3 = r0_2 - 0x14u;  // (from the original)
    *gptr<u32>(r0_3 + 0x48u) = u32(0u);  // (from the original)
    *gptr<u16>(r0_3 + 0x4cu) = u16(0u);  // (from the original)
    r0_4 = r0_3 + 0x50u;  // (from the original)
    r1_1 = r0_4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003083bc(r0_4, r1_1, 0x100u, r3_2);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r0_5) = u32(0x909dc8u);  // (from the original)
    r0_6 = r0_5 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_005f4bfc(r0_6, 0x909dc8u, r2_2, r3_3);  // (from the original)
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r4 = r0_7 - 0xcu;  // (from the original)
    r0_8 = r0_7 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_8, 0x200u, r2_3, r3_4);  // (from the original)
    r2 = 0x8906ecu;  // (from the original)
    r1 = r4 + 0x16u;  // (from the original)
    r0 = 0x80u;  // (from the original)
    do {
L_524acc:;
        res_1 = r0 - 1u;
        r0 = res_1;
        r3_5 = u32(*gptr<u16>(r2));
        ea_1 = r1 + 2u;
        *gptr<u16>(ea_1) = u16(r3_5);
        r3_6 = u32(*gptr<u16>(r2));
        ea_2 = r1 + 4u;
        *gptr<u16>(ea_2) = u16(r3_6);
        r1 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 - 4u) = u8(0x11u);  // (from the original)
    r0_9 = r4 - 0x50u;  // (from the original)
    *gptr<u8>(r4 - 3u) = u8(0x11u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_00524a54
GUEST_EXPORT(0x00524a54, d_00524a54::f_00524a54);

// f_00524b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524b80 {

inline guest::global<u32, 0x008906f4> global_008906f4;  // (from the original)

u32 f_00524b80(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 r3_2 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r8 = 1u;
    r7 = 0u;
    r9 = r8 + u32(s32(*global_008906f4 - 0x890754u) >> 2);  // (from the original)
L_524ba0:;
    r5 = u32(*gptr<u16>(r0));
    r2 = u32(*gptr<u16>(r1));
    zf_1 = r5 == 0xau;  // (from the original)
    if (!zf_1) {
        zf_1 = r5 == 0;
    }
    if (!zf_1) {
        *gptr<u16>(r13) = u16(r2);
        if (r2 - 0x3041u <= 0x55u) {  // (from the original)
            goto L_524ce0;
        }
        if (r2 >= 0x61u) {  // (from the original)
            if (r2 <= 0x7au) {  // (from the original)
                goto L_524ce0;
            }
        }
        if (r2 - 0x30a1u <= 0x55u) {  // (from the original)
            *gptr<u16>(r13) = u16(r2 - 0x60u);  // (from the original)
            goto L_524ce0;
        }
        r10 = r13;
        r6 = 0u;
        if (r2 >= 0x41u) {  // (from the original)
            if (r2 <= 0x5au) {  // (from the original)
                goto L_524c70;
            }
        }
        if (r2 - 0xff21u <= 0x19u) {  // (from the original)
            goto L_524c70;
        }
        if (r2 != 0xd7u) {  // (from the original)
            if (r2 - 0xc0u <= 0x1eu) {  // (from the original)
                goto L_524c70;
            }
        }
        r3_1 = r2 - 0x391u;  // (from the original)
        zf_2 = r3_1 == 0x18u;  // (from the original)
        cf_1 = r3_1 >= 0x18u;  // (from the original)
        if (cf_1 && !zf_2) {
            r3_2 = r2 - 0x410u;  // (from the original)
            zf_2 = r3_2 == 0x1fu;  // (from the original)
            cf_1 = r3_2 >= 0x1fu;  // (from the original)
        }
        if (!cf_1 || zf_2) {
            goto L_524c70;
        }
        if (r2 - 0x100u > 0x77u) {  // (from the original)
            goto L_524c7c;
        }
        if ((r2 & 1u) == 0) {
            r2_1 = r2 + 1u;
            goto L_524c74;
        }
        goto L_524ce0;
    }
    if (r7 != 0) {
        goto L_524d00;
    }
L_524c68:;
    r8 = 0u;
    goto L_524d00;
L_524c70:;
    r2_1 = r2 + 0x20u;  // (from the original)
L_524c74:;
    r6 = uxth(r2_1);
    goto L_524cd8;
L_524c7c:;
    r3 = 0x890754u;  // (from the original)
    res_1 = r9 - 1u;
    r12 = 1u;
    if (res_1 == 0 || res_1 >> 0x1f != ((r9 ^ 1u) & (r9 ^ res_1)) >> 0x1f) {  // (from the original)
        goto L_524cbc;
    }
    do {
L_524c8c:;
        if (!(u32(*gptr<u16>(r3 + 2u)) != r2)) {
            r6 = u32(*gptr<u16>(r3));
            goto L_524cd8;
        }
        if (u32(*gptr<u16>(r3)) == r2) {
            goto L_524cd8;
        }
        r12 = r12 + 1u;
        res_2 = r9 - r12;
        r3 = r3 + 4u;
        guest::preempt();
    } while (res_2 != 0 && res_2 >> 0x1f == ((r9 ^ r12) & (r9 ^ res_2)) >> 0x1f);  // (from the original)
L_524cbc:;
    if (r2 - 0x179u > 5u) {  // (from the original)
        goto L_524cd8;
    }
    if ((r2 & 1u) != 0) {
        r6 = uxth(r2 + 1u);
    }
L_524cd8:;
    if (r6 != 0) {
        *gptr<u16>(r10) = u16(r6);
    }
L_524ce0:;
    if (r5 != u32(*gptr<u16>(r13))) {
        guest::preempt();
        goto L_524c68;
    }
    r7 = r7 + 1u;
    res_3 = r7 - 3u;
    r0 = r0 + 2u;
    r1 = r1 + 2u;
    if (res_3 >> 0x1f != ((r7 ^ 3u) & (r7 ^ res_3)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_524ba0;
    }
L_524d00:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r8;
}

}  // namespace d_00524b80
GUEST_EXPORT(0x00524b80, d_00524b80::f_00524b80);

// f_00524d58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00524d58 {

struct __attribute__((packed)) Object_00524d58_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x10];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Object_00524d58_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00524d58_0, word_1c, 0x1c);  // (from the original)


u32 f_00524d58(gptr<Object_00524d58_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    r13 = r13 - 8;
    res_1 = u32(*gptr<u16>(r13 + 4u)) & ~*gptr<u32>(arg0->word_1c + 0x188u);  // (from the original)
    if (res_1 != 0) {
        r0_1 = arg0->word_8;
        r13 = r13 + 8u;
        guest::cpu()->r[1] = res_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r1_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    nf_1 = r1_1 >> 0x1f;  // (from the original)
    zf_1 = r1_1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r0 = *gptr<u32>(*gptr<u32>(r0 + 0x10u));  // (from the original)
    }
    if (zf_1 || nf_1 != 0u) {
        r0 = 0u;
    }
    r13 = r13 + 8u;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00524d58
GUEST_EXPORT(0x00524d58, d_00524d58::f_00524d58);

// f_00525ae4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00525ae4 {

struct __attribute__((packed)) Object_00525ae4_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_00525ae4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00525ae4_1, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002026e4, u32(u32, u32, u32, u32)> call_002026e4;  // (from the original)
inline constexpr guest::Function<0x00317148, u32(u32, u32, u32, u32)> call_00317148;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x0080d59c, u32(u32, u32, u32, u32)> call_0080d59c;  // (from the original)

u32 f_00525ae4(u32 r0, gptr<Object_00525ae4_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r5_1 = 0;
    u32 r0_6 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    r3_1 = u32(arg1->byte_c);
    r1_1 = arg1->word_4;
    r2_1 = arg1->word_8;
    r13 = r13 - 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002026e4(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r4 = r0_1;
    if (r0_1 == 0) {
        r13 = r13 + 0x38u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r7 = *gptr<u32>(r1);
    r0_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_2, r0_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00748284(r0_3, r0_1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_3 = r13 + 0x10u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_007481ec(r0_4, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        goto L_525bb4;
    }
L_525b40:;
    r5_1 = r13 + 8u;
    if (r4 == 0) {
        goto L_525b94;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_007482bc(r4, r1, r2, r3);
    r3_5 = guest::cpu()->r[3];
    r1_4 = *gptr<u32>(r5_1);
    r2_5 = *gptr<u32>(r5_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_7 = call_00317148(r4, r1_4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_7 == 0) {
        goto L_525b94;
    }
    r2 = *gptr<u32>(r5_1 + 4);
    r1 = u32(*gptr<u16>(r7 + (r2 * r0_6 + *gptr<u32>(r5_1) << 1)));
    *gptr<u16>(r0_7) = u16(r1);
L_525b94:;
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_8, r1, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_5 = r13 + 0x10u;  // (from the original)
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_5, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        guest::preempt();
        goto L_525b40;
    }
L_525bb4:;
    guest::cpu()->r[13] = r13;
    call_0080d59c(r4, r4, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r0_1 = r4;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00525ae4
GUEST_EXPORT(0x00525ae4, d_00525ae4::f_00525ae4);

// f_005269e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005269e8 {

struct __attribute__((packed)) Object_005269e8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_005269e8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005269e8_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0052f0f0, u32(u32, u32, u32, u32)> call_0052f0f0;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0052f2a8, u32(u32, u32, u32, u32)> call_0052f2a8;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_005269e8(gptr<Object_005269e8_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
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
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_8 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_9 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r0_17 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r5_1 = 0;
    u32 r0_18 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_19 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r1_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r3_13 = 0;
    u32 r1_11 = 0;
    u32 r2_14 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r3_14 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r0_26 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_27 = 0;
    u32 r2_16 = 0;
    u32 r3_15 = 0;
    u32 r1_13 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r4_2 = 0;
    u32 r0_30 = 0;
    u32 r2_17 = 0;
    u32 r3_16 = 0;
    u32 r0_31 = 0;
    u32 r2_18 = 0;
    u32 r3_17 = 0;
    u32 r1_14 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r4_3 = 0;
    u32 r6_1 = 0;
    u32 r1_15 = 0;
    u32 r2_19 = 0;
    u32 r7_1 = 0;
    u32 r0_34 = 0;
    u32 r1_16 = 0;
    u32 r2_20 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 res_1 = 0;
    u32 r0_38 = 0;
    u32 r2_21 = 0;
    u32 r3_18 = 0;
    u32 r1_17 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r2_22 = 0;
    u32 r3_19 = 0;
    u32 r0_41 = 0;
    u32 r1_18 = 0;
    u32 zf_3 = 0;
    u32 r0_42 = 0;
    u32 ea_5 = 0;
    u32 r4_4 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0xc0u;  // (from the original)
    r11 = r2;
    r10 = *gptr<u32>(r13 + 0xc0u);  // (from the original)
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    *gptr<u32>(r13 + 0x8cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x64u) = u32(0u);  // (from the original)
    r0_1 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f0dc(r0_1, 0u, 0u, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x40u;  // (from the original)
    r1_1 = r13 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006fa1fc(r0_2, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0u;
L_526a28:;
    r4_1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_007482bc(r11, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_00748310(r11, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_0052f0c0(r4_1, r11, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_0055cb58(r10, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_4 = u32(u64(r0_6) * r0_3 >> 0x20);  // (from the original)
    *gptr<u32>(r0_5) = u32(*gptr<u32>(r0_5) + r1_4);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0055cb58(r10, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_5 + 4u) = u32(*gptr<u32>(r0_5 + 4u) + u32(u64(r0_7) * r0_4 >> 0x20));  // (from the original)
    r0_8 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r1_5 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f0f0(r0_8, r1_5, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1_6 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00526ea0(r0_9, r1_6, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        goto L_526d88;
    }
    r1_7 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r0_11 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_11, r1_7, r2, r3);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_8 = r13 + 0x40u;  // (from the original)
    r0_12 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0074818c(r0_12, r1_8, r2_8, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_526d80;
    }
    r0_14 = r13 + 0x80u;  // (from the original)
    *gptr<u32>(r0_14) = u32(1u);
    *gptr<u32>(r0_14 + 4) = u32(1u);
    r2_9 = ~0u;
    r0_15 = r13 + 0x78u;  // (from the original)
    *gptr<u32>(r0_15) = u32(r2_9);
    *gptr<u32>(r0_15 + 4) = u32(r2_9);
    r0_16 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f200(r0_16, r0_15, r0_14, r3);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_9 = *gptr<u32>(r13 + 0x8cu);  // (from the original)
    r0_17 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f2a8(r0_17, r1_9, r2_10, r3_9);
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r5_1 = r13 + 0x50u;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r0_18 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_18, r5_1, r2_11, r3_10);
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_19 = r13;
    guest::cpu()->r[13] = r13;
    call_00748284(r0_19, r5_1, r2_12, r3_11);
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r1_10 = r13 + 0x68u;  // (from the original)
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    r0_21 = call_007481ec(r0_20, r1_10, r2_13, r3_12);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_21 == 0) {
        goto L_526c48;
    }
L_526b7c:;
    r0_22 = r13 + 8u;
    if (r4 != 0) {
        r0_23 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052edfc(r0_23, r0_22, r2, r3);
        r3_13 = r13 + 0x30u;  // (from the original)
        r1_11 = *gptr<u32>(r3_13);
        r2_14 = *gptr<u32>(r3_13 + 4);
        guest::cpu()->r[13] = r13;
        r0_24 = call_0075291c(r4, r1_11, r2_14, r3_13);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_24 != 0) {
            r0_25 = r13 + 0x20u;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0052ed04(r0_25, r0_22, r2, r3);
            r3_14 = r13 + 0x20u;  // (from the original)
            r1_12 = *gptr<u32>(r3_14);
            r2_15 = *gptr<u32>(r3_14 + 4);
            guest::cpu()->r[13] = r13;
            r0_26 = call_0075d608(r0_24, r1_12, r2_15, r3_14);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            zf_1 = r0_26 == 0x14u;  // (from the original)
            if (!zf_1) {
                zf_1 = r0_26 == 0x31u;  // (from the original)
            }
            if (zf_1) {
                goto L_526c10;
            }
            zf_2 = r0_26 == 0x32u;  // (from the original)
            if (!zf_2) {
                zf_2 = r0_26 == 0x33u;  // (from the original)
            }
            if (zf_2) {
                goto L_526c10;
            }
        }
    }
    goto L_526d18;
L_526c10:;
    r0_27 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_27, r1, r2, r3);
    r2_16 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r1_13 = r13 + 0x68u;  // (from the original)
    r0_28 = r13;
    guest::cpu()->r[13] = r13;
    r0_29 = call_007481ec(r0_28, r1_13, r2_16, r3_15);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_29 != 0) {
        guest::preempt();
        goto L_526b7c;
    }
L_526c48:;
    r4_2 = r13 + 0x50u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r0_30 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_30, r4_2, r2, r3);
    r2_17 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_31 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_31, r4_2, r2_17, r3_16);
    r2_18 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r1_14 = r13 + 0x30u;  // (from the original)
    r0_32 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_33 = call_007481ec(r0_32, r1_14, r2_18, r3_17);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_33 == 0) {
        goto L_526d40;
    }
L_526c94:;
    r4_3 = r13 + 0x28u;  // (from the original)
    if (r5 == 0) {
        goto L_526d20;
    }
    r6_1 = 0u;
    r1_15 = *gptr<u32>(r4_3);
    r2_19 = *gptr<u32>(r4_3 + 4);
    r7_1 = r6_1;
    guest::cpu()->r[13] = r13;
    r0_34 = call_002feb00(r5, r1_15, r2_19, r6_1);
    r1_16 = *gptr<u32>(r4_3);
    r2_20 = *gptr<u32>(r4_3 + 4);
    guest::cpu()->r[13] = r13;
    r0_35 = call_002feb00(r5, r1_16, r2_20, 1u);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_34 != 0) {
        guest::cpu()->r[13] = r13;
        r0_36 = call_002fcaf4(r0_34, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_36 == 0) {
            r6_1 = 1u;
        }
    }
    if (r0_35 != 0) {
        guest::cpu()->r[13] = r13;
        r0_37 = call_002fcaf4(r0_35, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_37 == 0) {
            r7_1 = 1u;
        }
    }
    res_1 = r6_1 | r7_1;
    if (res_1 == 0) {
        goto L_526d20;
    }
L_526d18:;
    goto L_526d78;
L_526d20:;
    r0_38 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_38, r1, r2, r3);
    r2_21 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r1_17 = r13 + 0x30u;  // (from the original)
    r0_39 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_40 = call_007481ec(r0_39, r1_17, r2_21, r3_18);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_40 != 0) {
        guest::preempt();
        goto L_526c94;
    }
L_526d40:;
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x8cu;  // (from the original)
    ea_4 = *gptr<u32>(ea_3);
    r2_22 = *gptr<u32>(ea_4);
    r3_19 = *gptr<u32>(ea_4 + 4);
    r0_41 = *gptr<u32>(r13 + 0x90u);  // (from the original)
    r1_18 = *gptr<u32>(r13 + 0x98u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_41, r1_18, r2_22, r3_19);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x64u) = u32(1u);  // (from the original)
L_526d78:;
L_526d80:;
L_526d88:;
    r9 = r9 + 1u;
    zf_3 = r9 == 0x1388u;  // (from the original)
    if (r9 < 0x1388u || zf_3) {  // (from the original)
        zf_3 = *gptr<u32>(r13 + 0x64u) == 0;  // (from the original)
    }
    if (zf_3) {
        guest::preempt();
        goto L_526a28;
    }
    r0_42 = r13 + 0x40u;  // (from the original)
    r13 = r13 + 0x9cu;  // (from the original)
    ea_5 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_4 = *gptr<u32>(ea_5);
    r5_2 = *gptr<u32>(ea_5 + 4);
    r6_2 = *gptr<u32>(ea_5 + 8);
    r7_2 = *gptr<u32>(ea_5 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_5 + 0x10);  // (from the original)
    r9_1 = *gptr<u32>(ea_5 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_5 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_5 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_42;
}

}  // namespace d_005269e8
GUEST_EXPORT(0x005269e8, d_005269e8::f_005269e8);

// f_00526ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00526ea0 {

inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00526ea0(u32 r0, gptr<GridPoint> arg1, u32 r2_unused, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 ea_2 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r0_2 = 0;
    u32 r2_4 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r0_5 = 0;
    u32 r2_7 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 zf_3 = 0;
    u32 r6_1 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r2_8 = 0;
    u32 r0_8 = 0;
    u32 r2_9 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r3_7 = 0;
    u32 r1_5 = 0;
    u32 r2_10 = 0;
    u32 r0_10 = 0;
    u32 zf_4 = 0;
    u32 zf_5 = 0;
    u32 r4_1 = 0;
    u32 r1_6 = 0;
    u32 r2_11 = 0;
    u32 r0_11 = 0;
    u32 r2_12 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 zf_6 = 0;
    r13 = r13 - 0x38u;  // (from the original)
    r2_1 = u32(arg1->y) + 1u;
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(u32(arg1->x));
    *gptr<u32>(ea_1 + 4) = u32(r2_1);
    r2_2 = u32(arg1->y) + 2u;
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(u32(arg1->x));
    *gptr<u32>(ea_2 + 4) = u32(r2_2);
    r7_1 = r13;
    r0_1 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_1, r7_1, r2_2, r3);
    r3_1 = r13 + 0x10u;  // (from the original)
    r1_1 = *gptr<u32>(r3_1);
    r2_3 = *gptr<u32>(r3_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_0075291c(r0, r1_1, r2_3, r3_1);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_526f40;
    }
    r0_3 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052ed04(r0_3, r7_1, r2_4, r3_2);
    r3_3 = r13 + 0x18u;  // (from the original)
    r1_2 = *gptr<u32>(r3_3);
    r2_5 = *gptr<u32>(r3_3 + 4);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075d608(r0_2, r1_2, r2_5, r3_3);
    r1 = guest::cpu()->r[1];
    zf_1 = r0_4 == 0x14u;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_4 == 0x31u;  // (from the original)
    }
    if (zf_1) {
        goto L_526f54;
    }
    zf_2 = r0_4 == 0x32u;  // (from the original)
    if (!zf_2) {
        zf_2 = r0_4 == 0x33u;  // (from the original)
    }
    if (zf_2) {
        goto L_526f54;
    }
L_526f38:;
L_526f40:;
    goto L_527068;
L_526f54:;
    r1_3 = *gptr<u32>(r13);
    r2_6 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    r0_5 = call_002feb00(r0, r1_3, r2_6, 0u);
    r1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_002fccdc(r0_5, r1, r2_7, r3_4);
        r1 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        zf_3 = r0_6 == 4u;
        if (!zf_3) {
            zf_3 = r0_6 == 8u;
        }
        if (!zf_3) {
            zf_3 = r0_6 == 6u;
        }
        if (zf_3) {
            goto L_527068;
        }
    }
    r6_1 = r13 + 8u;
    if (r0 == 0) {
        goto L_527068;
    }
    r0_7 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_7, r6_1, r2_7, r3_4);
    r3_5 = r13 + 0x10u;  // (from the original)
    r1_4 = *gptr<u32>(r3_5);
    r2_8 = *gptr<u32>(r3_5 + 4);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075291c(r0, r1_4, r2_8, r3_5);
    r1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        guest::preempt();
        goto L_526f40;
    }
    r0_9 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052ed04(r0_9, r6_1, r2_9, r3_6);
    r3_7 = r13 + 0x18u;  // (from the original)
    r1_5 = *gptr<u32>(r3_7);
    r2_10 = *gptr<u32>(r3_7 + 4);
    guest::cpu()->r[13] = r13;
    r0_10 = call_0075d608(r0_8, r1_5, r2_10, r3_7);
    r1 = guest::cpu()->r[1];
    zf_4 = r0_10 == 0x14u;  // (from the original)
    if (!zf_4) {
        zf_4 = r0_10 == 0x31u;  // (from the original)
    }
    if (!zf_4) {
        zf_5 = r0_10 == 0x32u;  // (from the original)
        if (!zf_5) {
            zf_5 = r0_10 == 0x33u;  // (from the original)
        }
        if (!zf_5) {
            guest::preempt();
            goto L_526f38;
        }
    }
    r4_1 = r13 + 8u;
    r1_6 = *gptr<u32>(r4_1);
    r2_11 = *gptr<u32>(r4_1 + 4);
    guest::cpu()->r[13] = r13;
    r0_11 = call_002feb00(r0, r1_6, r2_11, 0u);
    r1 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_11 != 0) {
        guest::cpu()->r[13] = r13;
        r0_12 = call_002fccdc(r0_11, r1, r2_12, r3_8);
        r1 = guest::cpu()->r[1];
        zf_6 = r0_12 == 4u;
        if (!zf_6) {
            zf_6 = r0_12 == 8u;
        }
        if (!zf_6) {
            zf_6 = r0_12 == 6u;
        }
        if (zf_6) {
            goto L_527068;
        }
    }
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 0u;
L_527068:;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00526ea0
GUEST_EXPORT(0x00526ea0, d_00526ea0::f_00526ea0);

// f_00527088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527088 {

inline constexpr guest::Function<0x002fc994, u32(u32, u32, u32, u32)> call_002fc994;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00526ea0, u32(u32, u32, u32, u32)> call_00526ea0;  // (from the original)
inline constexpr guest::Function<0x0052ed04, u32(u32, u32, u32, u32)> call_0052ed04;  // (from the original)
inline constexpr guest::Function<0x0052edfc, u32(u32, u32, u32, u32)> call_0052edfc;  // (from the original)
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32, u32)> call_0052f0c0;  // (from the original)
inline constexpr guest::Function<0x0052f0dc, u32(u32, u32, u32, u32)> call_0052f0dc;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006fa1fc, u32(u32, u32, u32, u32)> call_006fa1fc;  // (from the original)
inline constexpr guest::Function<0x0074818c, u32(u32, u32, u32, u32)> call_0074818c;  // (from the original)
inline constexpr guest::Function<0x007482bc, u32(u32, u32, u32, u32)> call_007482bc;  // (from the original)
inline constexpr guest::Function<0x00748310, u32(u32, u32, u32, u32)> call_00748310;  // (from the original)
inline constexpr guest::Function<0x0075291c, u32(u32, u32, u32, u32)> call_0075291c;  // (from the original)
inline constexpr guest::Function<0x0075d608, u32(u32, u32, u32, u32)> call_0075d608;  // (from the original)

u32 f_00527088(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r0_14 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r3_9 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r0_18 = 0;
    u32 zf_1 = 0;
    u32 zf_2 = 0;
    u32 r0_19 = 0;
    u32 r9_1 = 0;
    u32 r4_3 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r7_1 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_25 = 0;
    u32 ea_4 = 0;
    u32 r1_12 = 0;
    u32 ea_5 = 0;
    u32 r2_12 = 0;
    u32 r3_10 = 0;
    u32 r0_26 = 0;
    u32 ea_6 = 0;
    u32 r4_4 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 r8_1 = 0;
    u32 r9_2 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    ea_1 = r13 - 0x34;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x24) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x28) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x2c) = u32(r11);  // (from the original)
    *gptr<u32>(ea_1 + 0x30) = u32(r14);  // (from the original)
    r13 = r13 - 0x80u;  // (from the original)
    r6 = r3;
    r8 = r1;
    r11 = 0u;
    r0_1 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(r0_1);  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0_1);  // (from the original)
    r0_2 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052f0dc(r0_2, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r13 + 0x30u;  // (from the original)
    r1_1 = r13 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_006fa1fc(r0_3, r1_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
L_5270c0:;
    r4_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_007482bc(r8, r1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00748310(r8, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_0052f0c0(r4_1, r8, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_0055cb58(r6, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_4 = u32(u64(r0_7) * r0_4 >> 0x20);  // (from the original)
    *gptr<u32>(r0_6) = u32(*gptr<u32>(r0_6) + r1_4);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0055cb58(r6, r1_4, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    *gptr<u32>(r0_6 + 4u) = u32(u32(u64(r0_8) * r0_5 >> 0x20) + *gptr<u32>(r0_6 + 4u));  // (from the original)
    r0_9 = *gptr<u32>(r13 + 0x4cu);  // (from the original)
    r1_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_00526ea0(r0_9, r1_5, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        goto L_52729c;
    }
    r1_6 = r13 + 8u;
    r0_11 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_11, r1_6, r2, r3);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_7 = r13 + 0x30u;  // (from the original)
    r0_12 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0074818c(r0_12, r1_7, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_13 == 0) {
        goto L_527294;
    }
    r4_2 = r13 + 8u;
    if (*gptr<u32>(r13 + 0x28u) == 0) {  // (from the original)
        goto L_527294;
    }
    r0_14 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052edfc(r0_14, r4_2, r2, r3);
    r3_8 = r13 + 0x38u;  // (from the original)
    r0_15 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r1_8 = *gptr<u32>(r3_8);
    r2_8 = *gptr<u32>(r3_8 + 4);
    guest::cpu()->r[13] = r13;
    r0_16 = call_0075291c(r0_15, r1_8, r2_8, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        r0_17 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052ed04(r0_17, r4_2, r2, r3);
        r3_9 = r13 + 0x10u;  // (from the original)
        r1_9 = *gptr<u32>(r3_9);
        r2_9 = *gptr<u32>(r3_9 + 4);
        guest::cpu()->r[13] = r13;
        r0_18 = call_0075d608(r0_16, r1_9, r2_9, r3_9);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf_1 = r0_18 == 0x14u;  // (from the original)
        if (!zf_1) {
            zf_1 = r0_18 == 0x31u;  // (from the original)
        }
        if (zf_1) {
            goto L_5271f0;
        }
        zf_2 = r0_18 == 0x32u;  // (from the original)
        if (!zf_2) {
            zf_2 = r0_18 == 0x33u;  // (from the original)
        }
        if (zf_2) {
            goto L_5271f0;
        }
    }
    goto L_527294;
L_5271f0:;
    r0_19 = *gptr<u32>(r13 + 0x24u);  // (from the original)
    if (r0_19 != 0) {
        r9_1 = r13 + 8u;
        r4_3 = 0u;
        r1_10 = *gptr<u32>(r9_1);
        r2_10 = *gptr<u32>(r9_1 + 4);
        r7_1 = r4_3;
        guest::cpu()->r[13] = r13;
        r0_20 = call_002feb00(r0_19, r1_10, r2_10, r4_3);
        r1_11 = *gptr<u32>(r9_1);
        r2_11 = *gptr<u32>(r9_1 + 4);
        r0_21 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_22 = call_002feb00(r0_21, r1_11, r2_11, 1u);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_20 != 0) {
            guest::cpu()->r[13] = r13;
            r0_23 = call_002fcaf4(r0_20, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_23 == 0) {
                r4_3 = 1u;
            }
        }
        if (r0_22 != 0) {
            guest::cpu()->r[13] = r13;
            r0_24 = call_002fcaf4(r0_22, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_24 == 0) {
                r7_1 = 1u;
            }
        }
        res_1 = r4_3 | r7_1;
        if (res_1 != 0) {
            goto L_527294;
        }
    }
    ea_2 = r13;
    *gptr<u32>(ea_2) = u32(0u);
    ea_3 = r13 + 0x4cu;  // (from the original)
    r0_25 = *gptr<u32>(ea_3);
    ea_4 = r13 + 0x54u;  // (from the original)
    r1_12 = *gptr<u32>(ea_4);
    ea_5 = r13 + 8u;
    r2_12 = *gptr<u32>(ea_5);
    r3_10 = *gptr<u32>(ea_5 + 4);
    guest::cpu()->r[13] = r13;
    call_002fc994(r0_25, r1_12, r2_12, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r11 = 1u;
L_527294:;
L_52729c:;
    r5 = r5 + 1u;
    if (r5 > 0x1388u) {  // (from the original)
    } else {
        if (r11 == 0) {
            guest::preempt();
            goto L_5270c0;
        }
    }
    r0_26 = r13 + 0x30u;  // (from the original)
    r13 = r13 + 0x5cu;  // (from the original)
    ea_6 = r13;
    r13 = r13 + 0x24;  // (from the original)
    r4_4 = *gptr<u32>(ea_6);
    r5_1 = *gptr<u32>(ea_6 + 4);
    r6_1 = *gptr<u32>(ea_6 + 8);
    r7_2 = *gptr<u32>(ea_6 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_6 + 0x10);  // (from the original)
    r9_2 = *gptr<u32>(ea_6 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_6 + 0x18);  // (from the original)
    r11_1 = *gptr<u32>(ea_6 + 0x1c);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    guest::cpu()->r[13] = r13;
    return r0_26;
}

}  // namespace d_00527088
GUEST_EXPORT(0x00527088, d_00527088::f_00527088);

// f_00527528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527528 {

inline constexpr guest::Function<0x00314a1c, u32(u32, u32, u32, u32)> call_00314a1c;  // (from the original)
inline constexpr guest::Function<0x00314a9c, u32(u32, u32, u32, u32)> call_00314a9c;  // (from the original)
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> call_00314b04;  // (from the original)
inline constexpr guest::Function<0x00314b58, u32(u32, u32, u32, u32)> call_00314b58;  // (from the original)

u32 f_00527528(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S4_2 = 0;
    float S5_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 ea_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r6_2 = 0;
    u32 r12_1 = 0;
    u32 r7_1 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    u32 r0_6 = 0;
    u32 ea_2 = 0;
    u32 r1_4 = 0;
    u32 r6_3 = 0;
    u32 r12_2 = 0;
    u32 r7_2 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 zf_1 = 0;
    u32 r0_9 = 0;
    r13 = r13 - 0x98u;  // (from the original)
    r8 = r0;
    r9 = r1;
    r4 = r2;
    r5 = 0u;
L_527540:;
    r1_1 = 0xab7df4u;  // (from the original)
    r0_1 = r5 & 0xffu;  // (from the original)
    if (r0_1 < 0xeu) {  // (from the original)
        r1_1 = r1_1 + (r0_1 << 2);
    }
    r0_2 = r13 + 0x60u;  // (from the original)
    r6_1 = *gptr<u32>(r1_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    call_00314a1c(r0_2, r6_1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = guest::cpu()->s[1];
    S2_1 = guest::cpu()->s[2];
    S3_1 = guest::cpu()->s[3];
    S4_1 = guest::cpu()->s[4];
    S5_1 = guest::cpu()->s[5];
    r0_3 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    call_00314a9c(r0_3, r6_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r13 + 0x60u;  // (from the original)
    r7 = r13 + 0x18u;  // (from the original)
    S0_2 = std::bit_cast<float>(*gptr<u32>(r0_4));
    S1_2 = std::bit_cast<float>(*gptr<u32>(r0_4 + 4));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r0_4 + 8));
    S3_2 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0xc));  // (from the original)
    S4_2 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0x10));  // (from the original)
    S5_2 = std::bit_cast<float>(*gptr<u32>(r0_4 + 0x14));  // (from the original)
    r6 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(r7) = u32(std::bit_cast<u32>(S0_2));
    *gptr<u32>(r7 + 4) = u32(std::bit_cast<u32>(S1_2));
    *gptr<u32>(r7 + 8) = u32(std::bit_cast<u32>(S2_2));
    *gptr<u32>(r7 + 0xc) = u32(std::bit_cast<u32>(S3_2));  // (from the original)
    *gptr<u32>(r7 + 0x10) = u32(std::bit_cast<u32>(S4_2));  // (from the original)
    *gptr<u32>(r7 + 0x14) = u32(std::bit_cast<u32>(S5_2));  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    r0_5 = call_00314b04(r6, r7, r2_2, r3_2);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    if (r0_5 == 0) {
        goto L_5275e0;
    }
    do {
L_527598:;
        r1_2 = u32(*gptr<u8>(r6 + 0x10u));  // (from the original)
        if (!(r4 != r1_2)) {
            ea_1 = r13 + 0x48u;  // (from the original)
            r1_3 = *gptr<u32>(ea_1 + 4);
            r2_3 = *gptr<u32>(ea_1 + 8);
            r3_3 = *gptr<u32>(ea_1 + 0xc);  // (from the original)
            r6_2 = *gptr<u32>(ea_1 + 0x10);  // (from the original)
            r12_1 = *gptr<u32>(ea_1 + 0x14);  // (from the original)
            r7_1 = r13 + 0x30u;  // (from the original)
            *gptr<u32>(r7_1) = u32(*gptr<u32>(ea_1));
            *gptr<u32>(r7_1 + 4) = u32(r1_3);
            *gptr<u32>(r7_1 + 8) = u32(r2_3);
            *gptr<u32>(r7_1 + 0xc) = u32(r3_3);  // (from the original)
            *gptr<u32>(r7_1 + 0x10) = u32(r6_2);  // (from the original)
            *gptr<u32>(r7_1 + 0x14) = u32(r12_1);  // (from the original)
            goto L_5275f0;
        }
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        guest::cpu()->s[4] = S4;
        guest::cpu()->s[5] = S5;
        call_00314b58(r6, r1_2, r2, r3);
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        S2_3 = guest::cpu()->s[2];
        S3_3 = guest::cpu()->s[3];
        S4_3 = guest::cpu()->s[4];
        S5_3 = guest::cpu()->s[5];
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        guest::cpu()->s[1] = S1_3;
        guest::cpu()->s[2] = S2_3;
        guest::cpu()->s[3] = S3_3;
        guest::cpu()->s[4] = S4_3;
        guest::cpu()->s[5] = S5_3;
        r0_6 = call_00314b04(r6, r7, r2_4, r3_4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        S2 = guest::cpu()->s[2];
        S3 = guest::cpu()->s[3];
        S4 = guest::cpu()->s[4];
        S5 = guest::cpu()->s[5];
        guest::preempt();
    } while (r0_6 != 0);
L_5275e0:;
    ea_2 = r13 + 0x18u;  // (from the original)
    r1_4 = *gptr<u32>(ea_2 + 4);
    r2_3 = *gptr<u32>(ea_2 + 8);
    r3_3 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    r6_3 = *gptr<u32>(ea_2 + 0x10);  // (from the original)
    r12_2 = *gptr<u32>(ea_2 + 0x14);  // (from the original)
    r7_2 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r7_2) = u32(*gptr<u32>(ea_2));
    *gptr<u32>(r7_2 + 4) = u32(r1_4);
    *gptr<u32>(r7_2 + 8) = u32(r2_3);
    *gptr<u32>(r7_2 + 0xc) = u32(r3_3);  // (from the original)
    *gptr<u32>(r7_2 + 0x10) = u32(r6_3);  // (from the original)
    *gptr<u32>(r7_2 + 0x14) = u32(r12_2);  // (from the original)
L_5275f0:;
    r1_5 = r13 + 0x60u;  // (from the original)
    r0_7 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    r0_8 = call_00314b04(r0_7, r1_5, r2_3, r3_3);
    r1_6 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    zf_1 = r0_8 == 0;
    r0_9 = r13 + 0x30u;  // (from the original)
    if (!zf_1) {
        *gptr<u32>(r8) = u32(*gptr<u32>(r0_9 + 8u));
        *gptr<u32>(r9) = u32(*gptr<u32>(r13 + 0x3cu));  // (from the original)
        r13 = r13 + 0x98u;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return 1u;
    }
    r5 = r5 + 1u;
    if (r5 < 0xeu) {  // (from the original)
        guest::preempt();
        goto L_527540;
    }
    r13 = r13 + 0x98u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_00527528
GUEST_EXPORT(0x00527528, d_00527528::f_00527528);

// f_00527a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00527a2c {

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

u32 f_00527a2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r9_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 ea_2 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r9_2 = 0;
    u32 r0_14 = 0;
    u32 r4_3 = 0;
    u32 r0_15 = 0;
    u32 zf_1 = 0;
    u32 r4_4 = 0;
    u32 r1_6 = 0;
    u32 r0_16 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r1_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 ea_3 = 0;
    u32 r4_5 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_3 = 0;
    u32 r10_1 = 0;
    if (r3 >= 0xfcu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = r13 - 0x70u;  // (from the original)
    r9_1 = r1;
    r8 = *gptr<u32>(r13 + 0x70u);  // (from the original)
    r6 = r3;
    guest::cpu()->r[13] = r13;
    r0_1 = call_001b1208(r9_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r5 = r0_1;
    if (r0_1 == 0) {
        goto L_527c28;
    }
    r0_2 = 0xab7de4u;  // (from the original)
    if (r0 < 4u) {
        r0_2 = r0_2 + (r0 << 2);
    }
    r7 = *gptr<u32>(r0_2);
    r0_3 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r9_1);
    *gptr<u32>(r0_3 + 4) = u32(r2);
    r4_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0057bb98(r0_3, r9_1, r2, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f224(r0_5, r0_4, r2_1, r3_2);
    r3_3 = guest::cpu()->r[3];
    ea_2 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_2) = u32(7u);
    *gptr<u32>(ea_2 + 4) = u32(7u);
    r2_2 = r13 + 0x48u;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00748324(r4_1, r1_1, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    r1_2 = r13 + 0x30u;  // (from the original)
    r0_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074836c(r0_6, r1_2, r0_3, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13 + 0x10u;  // (from the original)
    r0_7 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_7, r1_3, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13 + 0x10u;  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_00748284(r0_8, r1_4, r2_4, r3_6);
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_5 = r13 + 0x20u;  // (from the original)
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_5, r2_5, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_527c08;
    }
L_527b1c:;
    r0_11 = *gptr<u32>(r13 + 8u);
    if (r0_11 >> 0x1f != (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
        goto L_527be8;
    }
    r0_12 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0_12 >> 0x1f != (r0_12 & (r0_12 ^ r0_12)) >> 0x1f) {  // (from the original)
        goto L_527be8;
    }
    r0_13 = *gptr<u32>(r13 + 0xcu) - *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4_2 = r5 + (r0_13 + (r0_13 << 2) << 5);
    r9_2 = *gptr<u32>(r13 + 8u);
    r0_14 = r9_2 - *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4_3 = u32(*gptr<u8>(r4_2 + (r0_14 + (r0_14 << 2) << 1) + 8u));
    guest::cpu()->r[13] = r13;
    r0_15 = call_006cc934(r6, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 != 0) {
        zf_1 = r4_3 == 0;
        if (!zf_1) {
            zf_1 = r4_3 == 0xa1u;  // (from the original)
        }
        if (zf_1) {
            goto L_527be8;
        }
    } else {
        if (r4_3 == 0) {
            goto L_527be8;
        }
    }
    r4_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_6 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    call_002e5a4c(r7, r1_6, r4_4, r8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_527be8:;
    r0_16 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_16, r1, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_7 = r13 + 0x20u;  // (from the original)
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_007481ec(r0_17, r1_7, r2_6, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 != 0) {
        guest::preempt();
        goto L_527b1c;
    }
L_527c08:;
    r0_1 = r13 + 0x10u;  // (from the original)
L_527c28:;
    r13 = r13 + 0x50u;  // (from the original)
    ea_3 = r13;
    r13 = r13 + 0x20;  // (from the original)
    r4_5 = *gptr<u32>(ea_3);
    r5_1 = *gptr<u32>(ea_3 + 4);
    r6_1 = *gptr<u32>(ea_3 + 8);
    r7_1 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    r8_1 = *gptr<u32>(ea_3 + 0x10);  // (from the original)
    r9_3 = *gptr<u32>(ea_3 + 0x14);  // (from the original)
    r10_1 = *gptr<u32>(ea_3 + 0x18);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_3;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00527a2c
GUEST_EXPORT(0x00527a2c, d_00527a2c::f_00527a2c);

// f_005284b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005284b8 {

inline constexpr guest::Function<0x001b1208, u32(u32, u32, u32, u32)> call_001b1208;  // (from the original)
inline constexpr guest::Function<0x002e5a4c, u32(u32, u32, u32, u32)> call_002e5a4c;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f224, u32(u32, u32, u32, u32)> call_0052f224;  // (from the original)
inline constexpr guest::Function<0x0057bb98, u32(u32, u32, u32, u32)> call_0057bb98;  // (from the original)
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> call_006cc934;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)
inline constexpr guest::Function<0x00748324, u32(u32, u32, u32, u32)> call_00748324;  // (from the original)
inline constexpr guest::Function<0x0074836c, u32(u32, u32, u32, u32)> call_0074836c;  // (from the original)

u32 f_005284b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r8_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r4_1 = 0;
    u32 r0_4 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 ea_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r3_4 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r8_2 = 0;
    u32 r0_14 = 0;
    u32 r4_3 = 0;
    u32 r0_15 = 0;
    u32 r4_4 = 0;
    u32 r1_6 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r2_6 = 0;
    u32 r3_9 = 0;
    u32 r1_7 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    r8_1 = r1;
    r13 = r13 - 0x70u;  // (from the original)
    r7 = r3;
    guest::cpu()->r[13] = r13;
    r0_1 = call_001b1208(r8_1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r5 = r0_1;
    if (r0_1 == 0) {
        goto L_5286ac;
    }
    r0_2 = 0xab7de4u;  // (from the original)
    if (r0 < 4u) {
        r0_2 = r0_2 + (r0 << 2);
    }
    r6 = *gptr<u32>(r0_2);
    r0_3 = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r0_3) = u32(r8_1);
    *gptr<u32>(r0_3 + 4) = u32(r2);
    r4_1 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_0057bb98(r0_3, r8_1, r2, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f224(r0_5, r0_4, r2_1, r3_2);
    r3_3 = guest::cpu()->r[3];
    ea_1 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(ea_1) = u32(7u);
    *gptr<u32>(ea_1 + 4) = u32(7u);
    r2_2 = r13 + 0x48u;  // (from the original)
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_00748324(r4_1, r1_1, r2_2, r3_3);
    r3_4 = guest::cpu()->r[3];
    r1_2 = r13 + 0x30u;  // (from the original)
    r0_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074836c(r0_6, r1_2, r0_3, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_3 = r13 + 0x10u;  // (from the original)
    r0_7 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_7, r1_3, r2_3, r3_5);
    r2_4 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13 + 0x10u;  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_00748284(r0_8, r1_4, r2_4, r3_6);
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_5 = r13 + 0x20u;  // (from the original)
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_007481ec(r0_9, r1_5, r2_5, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 == 0) {
        goto L_52868c;
    }
L_52859c:;
    r0_11 = *gptr<u32>(r13 + 8u);
    if (r0_11 >> 0x1f != (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
        goto L_52866c;
    }
    r0_12 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0_12 >> 0x1f != (r0_12 & (r0_12 ^ r0_12)) >> 0x1f) {  // (from the original)
        goto L_52866c;
    }
    r0_13 = *gptr<u32>(r13 + 0xcu) - *gptr<u32>(r13 + 0x14u);  // (from the original)
    r4_2 = r5 + (r0_13 + (r0_13 << 2) << 5);
    r8_2 = *gptr<u32>(r13 + 8u);
    r0_14 = r8_2 - *gptr<u32>(r13 + 0x10u);  // (from the original)
    r4_3 = u32(*gptr<u8>(r4_2 + (r0_14 + (r0_14 << 2) << 1) + 8u));
    guest::cpu()->r[13] = r13;
    r0_15 = call_006cc934(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_15 == 0) {
        goto L_528664;
    }
    if (r4_3 != 0xa1u) {  // (from the original)
        goto L_52866c;
    }
L_528630:;
    r4_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    r1_6 = *gptr<u32>(r13 + 8u);
    r3_8 = ~0u;
    guest::cpu()->r[13] = r13;
    call_002e5a4c(r6, r1_6, r4_4, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    goto L_52866c;
L_528664:;
    if (r4_3 != 0) {
        guest::preempt();
        goto L_528630;
    }
L_52866c:;
    r0_16 = r13;
    guest::cpu()->r[13] = r13;
    call_0052f144(r0_16, r1, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_7 = r13 + 0x20u;  // (from the original)
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_007481ec(r0_17, r1_7, r2_6, r3_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 != 0) {
        guest::preempt();
        goto L_52859c;
    }
L_52868c:;
    r0_1 = r13 + 0x10u;  // (from the original)
L_5286ac:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_005284b8
GUEST_EXPORT(0x005284b8, d_005284b8::f_005284b8);

// f_00528860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528860 {


u32 f_00528860(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r12 = r0;
    r0 = 0u;
    r4 = r0;
    r3 = r2 - 1u;
    r5 = 0xc0u;  // (from the original)
    r6 = 0xe0u;  // (from the original)
    r7 = 0x80u;  // (from the original)
    goto L_5288fc;
L_528884:;
    if (r2 < 0x80u) {  // (from the original)
        r3 = r3 - 1u;
        r0 = r0 + 1u;
        *gptr<u8>(r1) = u8(r2);
        r1 = r1 + 1u;
        goto L_5288f8;
    }
    if (s32(r2) < s32(0x800u)) {  // (from the original)
        *gptr<u8>(r1) = u8(r5 | u32(s32(r2) >> 6));
        r1_1 = r1 + 1u;
        r3 = r3 - 2u;
        r0 = r0 + 2u;
        *gptr<u8>(r1_1) = u8(r2 & 0x3fu | 0x80u);  // (from the original)
        r1 = r1_1 + 1u;
        goto L_5288f8;
    }
    if (s32(r2) >= s32(0x10000u)) {  // (from the original)
        r4 = 1u;
        goto L_5288f8;
    }
    *gptr<u8>(r1) = u8(r6 | u32(s32(r2) >> 0xc));  // (from the original)
    r1_2 = r1 + 1u;
    *gptr<u8>(r1_2) = u8(r7 | r2 << 0x14 >> 0x1a);  // (from the original)
    r1_3 = r1_2 + 1u;
    r3 = r3 - 3u;
    r0 = r0 + 3u;
    *gptr<u8>(r1_3) = u8(r2 & 0x3fu | 0x80u);  // (from the original)
    r1 = r1_3 + 1u;
L_5288f8:;
    r12 = r12 + 2u;
L_5288fc:;
    r2 = u32(*gptr<u16>(r12));
    zf_1 = r2 == 0;
    if (!zf_1) {
        zf_1 = r3 == 0;
    }
    if (!zf_1) {
        if (r4 == 0) {
            guest::preempt();
            goto L_528884;
        }
    }
    *gptr<u8>(r1) = u8(0u);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00528860
GUEST_EXPORT(0x00528860, d_00528860::f_00528860);

// f_00528924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528924 {


u32 f_00528924(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r12_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r12_2 = 0;
    u32 ea_3 = 0;
    u32 zf_1 = 0;
    u32 r3_1 = 0;
    u32 zf_2 = 0;
    u32 cf_1 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 zf_3 = 0;
    u32 cf_2 = 0;
    u32 r3_4 = 0;
    u32 r0_1 = 0;
    r13 = r13 - 0x14;  // (from the original)
    r6 = 0u;
    r4 = r1;
    r5 = r6;
    r2 = r2 - 1u;
    goto L_5289cc;
L_52893c:;
    r12_1 = r3 & 0xffu;  // (from the original)
    if (r12_1 < 0x80u) {  // (from the original)
        r2 = r2 - 1u;
        *gptr<u16>(r4) = u16(sxtb(r12_1));
        r4 = r4 + 2u;
        goto L_5289c4;
    }
    if (r12_1 - 0xc2u <= 0x1du) {  // (from the original)
        ea_1 = r0 + 1u;
        r0 = ea_1;
        r2 = r2 - 1u;
        *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea_1)) & 0xffu) + ((r3 << 0x18 >> 0x12) - 0x3000u) - 0x80u);  // (from the original)
        r4 = r4 + 2u;
        goto L_5289c4;
    }
    if (r12_1 - 0xe0u > 0xfu) {  // (from the original)
        goto L_5289e8;
    }
    ea_2 = r0 + 1u;
    r12_2 = u32(*gptr<u8>(ea_2));
    ea_3 = r0 + 2u;
    r0 = ea_3;
    r2 = r2 - 1u;
    *gptr<u16>(r4) = u16((u32(*gptr<u8>(ea_3)) & 0xffu) + ((r3 << 0xc) - 0xe0000u + ((r12_2 & 0xffu) << 6)) - 0x2080u);  // (from the original)
    r4 = r4 + 2u;
L_5289c4:;
    r6 = r6 + 1u;
L_5289c8:;
    r0 = r0 + 1u;
L_5289cc:;
    r3 = u32(s32(s8(*gptr<u8>(r0))));
    zf_1 = r3 == 0;
    if (!zf_1) {
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        goto L_528a24;
    }
    if (r5 == 0) {
        guest::preempt();
        goto L_52893c;
    }
    goto L_528a30;
L_5289e8:;
    r3_1 = r12_1 - 0xf0u;  // (from the original)
    zf_2 = r3_1 == 4u;
    cf_1 = r3_1 >= 4u;
    if (cf_1 && !zf_2) {
        r3_2 = r12_1 - 0xc0u;  // (from the original)
        zf_2 = r3_2 == 1u;
        cf_1 = r3_2 >= 1u;
    }
    if (!cf_1 || zf_2) {
        goto L_528a1c;
    }
    r3_3 = r12_1 - 0xf5u;  // (from the original)
    zf_3 = r3_3 == 2u;
    cf_2 = r3_3 >= 2u;
    if (cf_2 && !zf_3) {
        r3_4 = r12_1 - 0xf8u;  // (from the original)
        zf_3 = r3_4 == 3u;
        cf_2 = r3_4 >= 3u;
    }
    if (!cf_2 || zf_3) {
        goto L_528a1c;
    }
L_528a1c:;
    r5 = 1u;
    guest::preempt();
    goto L_5289c8;
L_528a24:;
    if (r5 == 0) {
        r0_1 = r6 + 1u;
        goto L_528a38;
    }
L_528a30:;
    r4 = r1;
    r0_1 = ~0u;
L_528a38:;
    *gptr<u16>(r4) = u16(0u);
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = 0u;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00528924
GUEST_EXPORT(0x00528924, d_00528924::f_00528924);

// f_00528b00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528b00 {

inline guest::global<u32, 0x00950464> global_00950464;  // (from the original)
inline guest::global<u32, 0x00950468> global_00950468;  // (from the original)
inline guest::global<u32, 0x0095046c> global_0095046c;  // (from the original)
inline constexpr guest::Function<0x001509dc, u32(u32, u32, u32, u32)> call_001509dc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_00528b00(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 zf_1 = 0;
    u32 ea_1 = 0;
    u32 r0_5 = 0;
    u32 r4_1 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 ea_2 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 ea_3 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_4 = 0;
    u32 r0_15 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    if (r0_1 == 0x9du) {  // (from the original)
        goto L_528b84;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74c8(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0x9eu) {  // (from the original)
        goto L_528bc0;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(8u, r0_3, r2_2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    ea_1 = r0 + 0xcu;  // (from the original)
    r0_5 = *gptr<u32>(ea_1);
    if (zf_1) {
        goto L_528bec;
    }
    if (r0_5 == 0) {
        r4_1 = r5;
    } else {
        r4_1 = ea_1 + r0_5;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_001509dc(0x528c54u, r4_1, 2u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_6 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_7 = *global_00950468;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fa90c(r0_7, r4_1, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    } else {
        r0 = 0u;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_528b84:;
    ea_2 = r0 + 0xcu;  // (from the original)
    r0_9 = *gptr<u32>(ea_2);
    r6 = 0x950474u;  // (from the original)
    if (r0_9 != 0) {
        r5 = r0_9 + ea_2;
    }
    r4 = 0u;
    do {
L_528b98:;
        r0_10 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_002fa90c(r0_10, r5, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 0xfu);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_528bc0:;
    ea_3 = r0 + 0xcu;  // (from the original)
    r0_11 = *gptr<u32>(ea_3);
    if (r0_11 != 0) {
        r5 = r0_11 + ea_3;
    }
    r0_12 = *global_00950464;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0_12, r5, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
L_528bec:;
    r6 = 0x9504b0u;  // (from the original)
    if (r0_5 != 0) {
        r5 = r0_5 + ea_1;
    }
    r4 = 0u;
    do {
L_528bfc:;
        r0_13 = *gptr<u32>(r6 + (r4 << 2));
        guest::cpu()->r[13] = r13;
        r0 = call_002fa90c(r0_13, r5, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0 == 0) {
            r13 = r13 + 0x10;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0x3eu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_14 != 1u) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_15 = *global_0095046c;
    guest::cpu()->r[13] = r13;
    r0 = call_002fa90c(r0_15, r5, r2_4, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00528b00
GUEST_EXPORT(0x00528b00, d_00528b00::f_00528b00);

// f_00528c6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528c6c {

struct __attribute__((packed)) Object_00528c6c_1 {
    u8 unknown_0[0x854107];  // (not used here)
    u8 byte_854107;
    u8 unknown_854108[0x3];  // (not used here)
    u8 byte_85410b;
    u8 unknown_85410c[0x3];  // (not used here)
    u8 byte_85410f;
    u8 unknown_854110[0x3];  // (not used here)
    u8 byte_854113;
};
GUEST_OFFSET(Object_00528c6c_1, byte_854107, 0x854107);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410b, 0x85410b);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_85410f, 0x85410f);  // (from the original)
GUEST_OFFSET(Object_00528c6c_1, byte_854113, 0x854113);  // (from the original)


u32 f_00528c6c(u32 r0, gptr<Object_00528c6c_1> arg1) {
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    if (r0 == 0x1400u) {  // (from the original)
        r0_1 = u32(arg1->byte_854107);
        return r0_1;
    }
    res_1 = r0 - 0x1401u;  // (from the original)
    if (res_1 == 0) {
        r0_2 = u32(arg1->byte_85410b);
        return r0_2;
    }
    if (res_1 == 1u) {
        r0_3 = u32(arg1->byte_85410f);
        return r0_3;
    }
    if (res_1 == 5u) {
        r0_4 = u32(arg1->byte_854113);
    } else {
        r0_4 = 0u;
    }
    return r0_4;
}

}  // namespace d_00528c6c
GUEST_EXPORT(0x00528c6c, d_00528c6c::f_00528c6c);

// f_00528ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528ce0 {

inline guest::global<u32, 0x00528d44> global_00528d44;  // (from the original)
inline guest::global<u32, 0x00528d48> global_00528d48;  // (from the original)

u32 f_00528ce0(u32 r0_unused, u32 r1_unused, u32 r2, float S0, float S1, float S2) {
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    S1_1 = (S2 + S0 * S1) * std::bit_cast<float>(*global_00528d44);
    S0_1 = S1_1 * std::bit_cast<float>(*global_00528d48);
    r0_1 = std::bit_cast<u32>(S0_1);
    res_1 = r0_1 & ~0x80000000u;  // (from the original)
    r1_1 = res_1;
    if (res_1 != 0) {
        r1_1 = (r0_1 << 1 >> 0x18) - 0x40u;  // (from the original)
        if (r1_1 >> 0x1f != (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
            r0_2 = r0_1 >> 0x1f << 0x17;  // (from the original)
            *gptr<u32>(r2) = u32(r0_2);
            r2_1 = r2 + 4u;
            r0_3 = r2_1 + 4u;
            *gptr<u32>(r2_1) = u32(0xf004eu);  // (from the original)
            guest::cpu()->r[1] = 0xf004eu;  // (from the original)
            guest::cpu()->s[0] = S0_1;
            guest::cpu()->s[1] = S1_1;
            return r0_3;
        }
    }
    r0_2 = r0_1 << 9 >> 0x10 | r1_1 << 0x10 | r0_1 >> 0x1f << 0x17;  // (from the original)
    *gptr<u32>(r2) = u32(r0_2);
    r2_1 = r2 + 4u;
    r0_3 = r2_1 + 4u;
    *gptr<u32>(r2_1) = u32(0xf004eu);  // (from the original)
    guest::cpu()->r[1] = 0xf004eu;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_3;
}

}  // namespace d_00528ce0
GUEST_EXPORT(0x00528ce0, d_00528ce0::f_00528ce0);

// f_00528d60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00528d60 {

struct __attribute__((packed)) Object_00528d60_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00528d60_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_00528d60_3 {
    u8 unknown_0[0xec];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_00528d60_3, word_ec, 0xec);  // (from the original)

inline guest::global<u32, 0x009825ec> global_009825ec;  // (from the original)
inline constexpr guest::Function<0x00201ff4, u32(u32, u32, u32, u32)> call_00201ff4;  // (from the original)
inline constexpr guest::Function<0x00202078, u32(u32, u32, u32, u32)> call_00202078;  // (from the original)
inline constexpr guest::Function<0x002021d4, u32(u32, u32, u32, u32)> call_002021d4;  // (from the original)
inline constexpr guest::Function<0x00202370, u32(u32, u32, u32, u32)> call_00202370;  // (from the original)
inline constexpr guest::Function<0x00202740, u32(u32, u32, u32, u32)> call_00202740;  // (from the original)
inline constexpr guest::Function<0x002029fc, u32(u32, u32, u32, u32)> call_002029fc;  // (from the original)
inline constexpr guest::Function<0x00202c78, u32(u32, u32, u32, u32)> call_00202c78;  // (from the original)
inline constexpr guest::Function<0x00202ef4, u32(u32, u32, u32, u32)> call_00202ef4;  // (from the original)
inline constexpr guest::Function<0x002ee864, u32(u32, u32, u32, u32)> call_002ee864;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x00613734, u32(u32, u32, u32, u32)> call_00613734;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_00528d60(gptr<Object_00528d60_0> arg0, u32 r1, u32 r2, gptr<Object_00528d60_3> arg3) {
    u32 r0 = arg0.addr();
    u32 r3 = arg3.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r1_5 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_6 = 0;
    u32 r4_1 = 0;
    u32 r1_7 = 0;
    u32 r0_18 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r7_1 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_22 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r1_8 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    r6 = r1;
    r13 = r13 - 0x90u;  // (from the original)
    r8 = r0;
    r4 = r2;
    arg0->byte_0 = u8(r2);
    r5_1 = arg3->word_ec;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0055cb58(r6, r2, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = u32(u64(r0_1) * r5_1 >> 0x20);  // (from the original)
    r1_1 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ee864(r3, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    if (r4 == 0) {
        goto L_528e48;
    }
    r1_2 = r13 + 0x50u;  // (from the original)
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00202078(r0_2, r1_2, 0x894ef6u, r3_2);  // (from the original)
L_528dbc:;
    *gptr<u8>(r13 + 0xau) = u8(4u);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_00202370(r0_3, 0u, 1u, r6);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_00202370(r0_4, 0u, 2u, r6);
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00202370(r0_5, 0u, 3u, r6);
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_00202740(r0_6, r6, r2_2, r3_3);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_00202c78(r0_7, r6, r2_3, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_8 = r13;
    if (r4 == 0) {
        goto L_528e64;
    }
    guest::cpu()->r[13] = r13;
    call_002029fc(r0_8, r6, r2_4, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_528e2c:;
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_002021d4(r0_9, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if ((*global_009825ec & 1u) != 0) {
        goto L_528edc;
    }
    goto L_528e78;
L_528e48:;
    r1_4 = r13 + 0x50u;  // (from the original)
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_00202078(r0_10, r1_4, 0x894eccu, r3_2);  // (from the original)
    guest::preempt();
    goto L_528dbc;
L_528e64:;
    guest::cpu()->r[13] = r13;
    call_00202ef4(r0_8, r6, r2_4, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_528e2c;
L_528e78:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fe7dc(0x9825ecu, r1_3, r2_5, r3_6);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_528edc;
    }
    r0_12 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r0_12) = u32(6u);
    *gptr<u32>(r0_12 + 4) = u32(5u);
    guest::cpu()->r[13] = r13;
    r0_13 = call_0052f074(r0_12, 6u, 5u, r3_6);
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0052f200(0xaf8484u, r0_13, r0_12, r3_7);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r2_5 = 0x100000u;  // (from the original)
L_528edc:;
    r0_14 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0074824c(r0_14, 0xaf8484u, r2_5, r3_6);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_15 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00748284(r0_15, 0xaf8484u, r2_6, r3_8);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_5 = r13 + 0x40u;  // (from the original)
    r0_16 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_007481ec(r0_16, r1_5, r2_7, r3_9);
    r1_6 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_17 == 0) {
        goto L_528f94;
    } else {
        r5 = r13;
    }
    do {
L_528f10:;
        r4_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
        r1_7 = *gptr<u32>(r13 + 0x38u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_18 = call_00613734(r8, r1_7, r4_1, r3);
        r2_8 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r7_1 = *gptr<u32>(r13 + 0x38u);  // (from the original)
        r0_19 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
        r0_20 = u32(*gptr<u8>(r7_1 + ((r0_19 << 3) - r0_19 + r5)));
        guest::cpu()->r[13] = r13;
        r0_21 = call_00201ff4(r0_20, r6, r2_8, r3_10);
        r2_9 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        *gptr<u16>(r0_18) = u16(r0_21);
        r0_22 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052f144(r0_22, r0_21, r2_9, r3_11);
        r2_10 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
        r1_8 = r13 + 0x40u;  // (from the original)
        r0_23 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_24 = call_007481ec(r0_23, r1_8, r2_10, r3_12);
        r1_6 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_24 != 0);
L_528f94:;
    r0_25 = r13 + 0x40u;  // (from the original)
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_25;
}

}  // namespace d_00528d60
GUEST_EXPORT(0x00528d60, d_00528d60::f_00528d60);

// f_00529334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529334 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x007203f0, u32(u32, u32, u32, u32)> call_007203f0;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_00529334(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r2_8 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r0_11 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_12 = 0;
    u32 r2_13 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_14 = 0;
    u32 r1_10 = 0;
    u32 r2_15 = 0;
    u32 r1_11 = 0;
    u32 r0_15 = 0;
    u32 r2_16 = 0;
    u32 r0_16 = 0;
    u32 r1_12 = 0;
    u32 r2_17 = 0;
    u32 r0_17 = 0;
    u32 r1_13 = 0;
    u32 r2_18 = 0;
    u32 r0_18 = 0;
    u32 r5_2 = 0;
    u32 r0_19 = 0;
    u32 r2_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_14 = 0;
    u32 r2_20 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r2_21 = 0;
    u32 r0_24 = 0;
    u32 r1_15 = 0;
    u32 r2_22 = 0;
    u32 r0_25 = 0;
    u32 r2_23 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r2_24 = 0;
    u32 r0_29 = 0;
    u32 r2_25 = 0;
    u32 r0_30 = 0;
    u32 r1_16 = 0;
    u32 r2_26 = 0;
    u32 r0_31 = 0;
    u32 r2_27 = 0;
    u32 r0_32 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x23ebu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u8>(r0_1 + 4u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(0u, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(0x80u, r0_3, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_002f74c8(r0_4, r1_3, r2_5, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_6 = call_006f9c08(r0_5, r1_4, r2_6, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r5_1 = r0_6;
        if (r0_6 == 0) {
            r0_32 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            return r0_32;
        }
        goto L_529500;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002f74c8(r0_4, r1_3, r2_5, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_8 = call_002f74e0(0x40u, r0_7, r2_8, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_8 != 0) {
        guest::cpu()->r[13] = r13;
        r0_9 = call_002f74c8(r0_8, r1_6, r2_9, guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_10 = call_00313440(r0_9, r1_7, r2_10, guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_11 = call_002fae84(r0_10, r1_8, r2_11, guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_12 = call_002fb310(r0_11, r1_9, r2_12, guest::cpu()->r[3]);
        r2_13 = guest::cpu()->r[2];
        r0_13 = r0_12 + 4u;
        guest::cpu()->r[13] = r13;
        r0_14 = call_003058c8(r0_13, r0_10, r2_13, guest::cpu()->r[3]);
        r2_14 = r13 + 4u;
        r1_10 = r0_14 + 0x24a6u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r2_14, r1_10, r2_14, guest::cpu()->r[3]);
        r2_15 = guest::cpu()->r[2];
        r1_11 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, r1_11, r2_15, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_32 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_32;
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_002f74c8(r0_8, r1_6, r2_9, guest::cpu()->r[3]);
    r2_16 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f74e0(0x2000u, r0_15, r2_16, guest::cpu()->r[3]);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    if (r0_16 != 0) {
        guest::cpu()->r[13] = r13;
        r0_17 = call_002f74c8(r0_16, r1_12, r2_17, guest::cpu()->r[3]);
        r1_13 = guest::cpu()->r[1];
        r2_18 = guest::cpu()->r[2];
        r0_18 = r0_17 - 0x56u;  // (from the original)
        r5_2 = r0_18 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_19 = call_002fb328(r0_18, r1_13, r2_18, guest::cpu()->r[3]);
        r2_19 = guest::cpu()->r[2];
        r0_20 = r0_19 + 0x80u - 0xfff951c8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_21 = call_0076ce3c(r0_20, r5_2, r2_19, guest::cpu()->r[3]);
        r1_14 = guest::cpu()->r[1];
        r2_20 = guest::cpu()->r[2];
        r0_22 = r0_21 + 2u;
        guest::cpu()->r[13] = r13;
        r0_23 = call_007203f0(r0_22, r1_14, r2_20, guest::cpu()->r[3]);
        r2_21 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_24 = call_002fc8e8(r0_1, r0_23, r2_21, guest::cpu()->r[3]);
        r1_15 = guest::cpu()->r[1];
        r2_22 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_25 = call_002fb328(r0_24, r1_15, r2_22, guest::cpu()->r[3]);
        r2_23 = guest::cpu()->r[2];
        r0_26 = r0_25 + 0x80u - 0xfff951c8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_27 = call_0076ce3c(r0_26, r5_2, r2_23, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r0_27 + 0x23u)));  // (from the original)
        r0_32 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_32;
    }
    guest::cpu()->r[13] = r13;
    r0_28 = call_002f74c8(r0_16, r1_12, r2_17, guest::cpu()->r[3]);
    r2_24 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_29 = call_002f74e0(0x4000u, r0_28, r2_24, guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    if (r0_29 == 0) {
        r0_32 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_32;
    }
    guest::cpu()->r[13] = r13;
    r0_30 = call_002f74c8(r0_29, r1_5, r2_25, guest::cpu()->r[3]);
    r1_16 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_6 = call_006f9c08(r0_30, r1_16, r2_26, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r5_1 = r0_6;
    if (r0_6 == 0) {
        r0_32 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_32;
    }
L_529500:;
    guest::cpu()->r[13] = r13;
    r0_31 = call_007203f0(r0_6, r1_5, r2_7, guest::cpu()->r[3]);
    r2_27 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r0_31, r2_27, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r5_1 + 0x21u)));  // (from the original)
    r0_32 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_32;
}

}  // namespace d_00529334
GUEST_EXPORT(0x00529334, d_00529334::f_00529334);

// f_0052953c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052953c {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x006f9c08, u32(u32, u32, u32, u32)> call_006f9c08;  // (from the original)
inline constexpr guest::Function<0x0072031c, u32(u32, u32, u32, u32)> call_0072031c;  // (from the original)
inline constexpr guest::Function<0x0076ce3c, u32(u32, u32, u32, u32)> call_0076ce3c;  // (from the original)

u32 f_0052953c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r2_8 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r0_11 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r0_12 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_13 = 0;
    u32 r2_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_14 = 0;
    u32 r1_10 = 0;
    u32 r2_15 = 0;
    u32 r1_11 = 0;
    u32 r0_16 = 0;
    u32 r2_16 = 0;
    u32 r0_17 = 0;
    u32 r1_12 = 0;
    u32 r2_17 = 0;
    u32 r0_18 = 0;
    u32 r1_13 = 0;
    u32 r2_18 = 0;
    u32 r0_19 = 0;
    u32 r5_2 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_14 = 0;
    u32 r2_19 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_20 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_21 = 0;
    u32 r0_27 = 0;
    u32 r2_22 = 0;
    u32 r0_28 = 0;
    u32 r1_15 = 0;
    u32 r2_23 = 0;
    u32 r0_29 = 0;
    u32 r2_24 = 0;
    u32 r0_30 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc20c(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_2, 0x234cu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc8e8(r0_1, r1_1, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    *gptr<u8>(r0_1 + 4u) = u8(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74c8(r0_3, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_5 = call_002f74e0(0x80u, r0_4, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_5 != 0) {
        guest::cpu()->r[13] = r13;
        r0_6 = call_002f74c8(r0_5, r1_3, r2_5, guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_7 = call_006f9c08(r0_6, r1_4, r2_6, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r5_1 = r0_7;
        if (r0_7 == 0) {
            r0_30 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_5;
            guest::cpu()->r[13] = r13;
            return r0_30;
        }
        goto L_5296d4;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_002f74c8(r0_5, r1_3, r2_5, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_9 = call_002f74e0(0x40u, r0_8, r2_8, guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_9 != 0) {
        guest::cpu()->r[13] = r13;
        r0_10 = call_002f74c8(r0_9, r1_6, r2_9, guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r2_10 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_11 = call_00313440(r0_10, r1_7, r2_10, guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_12 = call_002fae84(r0_11, r1_8, r2_11, guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        guest::cpu()->r[13] = r13;
        r0_13 = call_002fb310(r0_12, r1_9, r2_12, guest::cpu()->r[3]);
        r2_13 = guest::cpu()->r[2];
        r0_14 = r0_13 + 4u;
        guest::cpu()->r[13] = r13;
        r0_15 = call_003058c8(r0_14, r0_11, r2_13, guest::cpu()->r[3]);
        r2_14 = r13 + 4u;
        r1_10 = r0_15 + 0x24a2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc934(r2_14, r1_10, r2_14, guest::cpu()->r[3]);
        r2_15 = guest::cpu()->r[2];
        r1_11 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, r1_11, r2_15, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        *gptr<u8>(r0_1 + 4u) = u8(0u);
        r0_30 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_30;
    }
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f74c8(r0_9, r1_6, r2_9, guest::cpu()->r[3]);
    r2_16 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f74e0(0x2000u, r0_16, r2_16, guest::cpu()->r[3]);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    if (r0_17 != 0) {
        guest::cpu()->r[13] = r13;
        r0_18 = call_002f74c8(r0_17, r1_12, r2_17, guest::cpu()->r[3]);
        r1_13 = guest::cpu()->r[1];
        r2_18 = guest::cpu()->r[2];
        r0_19 = r0_18 - 0x56u;  // (from the original)
        r5_2 = r0_19 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_20 = call_002fb328(r0_19, r1_13, r2_18, guest::cpu()->r[3]);
        r0_21 = r0_20 + 0x80u - 0xfff951c8u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_22 = call_0076ce3c(r0_21, r5_2, 0xfff951c8u, guest::cpu()->r[3]);  // (from the original)
        r1_14 = guest::cpu()->r[1];
        r2_19 = guest::cpu()->r[2];
        r0_23 = r0_22 + 2u;
        r5_1 = r0_23;
        guest::cpu()->r[13] = r13;
        r0_24 = call_0072031c(r0_23, r1_14, r2_19, guest::cpu()->r[3]);
        r2_20 = guest::cpu()->r[2];
        r0_25 = r13;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_25, r0_24, r2_20, guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r2_7 = guest::cpu()->r[2];
        r0_7 = r5_1;
        goto L_5296d4;
    }
    guest::cpu()->r[13] = r13;
    r0_26 = call_002f74c8(r0_17, r1_12, r2_17, guest::cpu()->r[3]);
    r2_21 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_27 = call_002f74e0(0x4000u, r0_26, r2_21, guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    if (r0_27 == 0) {
        r0_30 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_30;
    }
    guest::cpu()->r[13] = r13;
    r0_28 = call_002f74c8(r0_27, r1_5, r2_22, guest::cpu()->r[3]);
    r1_15 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_7 = call_006f9c08(r0_28, r1_15, r2_23, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r5_1 = r0_7;
    if (r0_7 == 0) {
        r0_30 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return r0_30;
    }
L_5296d4:;
    guest::cpu()->r[13] = r13;
    r0_29 = call_0072031c(r0_7, r1_5, r2_7, guest::cpu()->r[3]);
    r2_24 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_1, r0_29, r2_24, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    *gptr<u8>(r0_1 + 4u) = u8(u32(*gptr<u8>(r5_1 + 0x20u)));  // (from the original)
    r0_30 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_30;
}

}  // namespace d_0052953c
GUEST_EXPORT(0x0052953c, d_0052953c::f_0052953c);

// f_00529c80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529c80 {

inline guest::global<u16, 0x00887402> global_00887402;  // (from the original)
inline guest::global<u16, 0x0094e476> global_0094e476;  // (from the original)
inline constexpr guest::Function<0x0051fc48, u32(u32, u32, u32, u32)> call_0051fc48;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529c80(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r0_1 = u32(*global_00887402);
    if (r0 >= r0_1) {
        r0_2 = 0u;
        goto L_529ce8;
    }
    *global_0094e476 = u16(r0);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0051fe30(r0_1, r1, r2, r3);
    *gptr<u32>(r13) = u32(r3);
    guest::cpu()->r[13] = r13;
    r0_4 = call_0051fc48(r0_3, r0, r1, r2);
    r1 = ~0u;
    r4_1 = r0_4;
    *global_0094e476 = u16(r1);
    if (r0_4 != 0) {
        if (u32(s32(s8(*gptr<u8>(r0_4 + 0xfu)))) != 0) {  // (from the original)
            r4_1 = 0u;
        }
    }
    r0_2 = r4_1;
L_529ce8:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00529c80
GUEST_EXPORT(0x00529c80, d_00529c80::f_00529c80);

// f_00529cf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529cf4 {


u32 f_00529cf4() {
    u32 r0_1 = 0;
    r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529cf4
GUEST_EXPORT(0x00529cf4, d_00529cf4::f_00529cf4);

// f_00529d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d08 {

inline guest::global<u16, 0x00887402> global_00887402;  // (from the original)
inline guest::global<u16, 0x0094e476> global_0094e476;  // (from the original)
inline constexpr guest::Function<0x0051fc14, u32(u32, u32, u32, u32)> call_0051fc14;  // (from the original)
inline constexpr guest::Function<0x0051fe30, u32(u32, u32, u32, u32)> call_0051fe30;  // (from the original)

u32 f_00529d08(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r0_1 = u32(*global_00887402);
    if (r0 < r0_1) {
        *global_0094e476 = u16(r0);
        r0_2 = call_0051fe30(r0_1, r1, r2, r3);
        r0_3 = call_0051fc14(r0_2, r0, r1, r2);
        r1 = ~0u;
        *global_0094e476 = u16(r1);
        if (r0_3 == 0) {
            goto L_529d68;
        }
        if (u32(s32(s8(*gptr<u8>(r0_3 + 0xfu)))) == 0) {  // (from the original)
            goto L_529d68;
        }
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_529d68:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_3;
}

}  // namespace d_00529d08
GUEST_EXPORT(0x00529d08, d_00529d08::f_00529d08);

// f_00529d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d78 {


u32 f_00529d78() {
    u32 r0_1 = 0;
    r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529d78
GUEST_EXPORT(0x00529d78, d_00529d78::f_00529d78);

// f_00529d8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529d8c {


u32 f_00529d8c() {
    u32 r0_1 = 0;
    r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529d8c
GUEST_EXPORT(0x00529d8c, d_00529d8c::f_00529d8c);

// f_00529da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529da0 {


u32 f_00529da0() {
    u32 r0_1 = 0;
    r0_1 = 1u;
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00529da0
GUEST_EXPORT(0x00529da0, d_00529da0::f_00529da0);

// f_00529ddc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00529ddc {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_00529ddc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_00779500(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        call_00301444(r0_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00529ddc
GUEST_EXPORT(0x00529ddc, d_00529ddc::f_00529ddc);

// f_0052a3b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a3b8 {

inline guest::global<u32, 0x00952638> global_00952638;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052a5ac, u32(u32, u32, u32, u32)> call_0052a5ac;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052a3b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_17 = 0;
    u32 r3_11 = 0;
    u32 r1_9 = 0;
    u32 r0_18 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r9_1 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_14 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_15 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_16 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_17 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_18 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_16 = 0;
    u32 r2_17 = 0;
    u32 r3_19 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r2_18 = 0;
    u32 r3_20 = 0;
    u32 r0_33 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00569d50(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r0_1 + 4u);
    r8_1 = 4u + 0x480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fd108(r8_1, r1_1, 4u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_2, r8_1, r2_1, r3_2);
    ea_1 = r0_2 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_2 + 8u;
    *gptr<u8>(ea_2) = u8(0u);
    ea_3 = 0x85eda4u + 0x28u;  // (from the original)
    r1_2 = *gptr<u32>(ea_3);
    r2_2 = *gptr<u32>(ea_3 + 4);
    r3_3 = r0_2 + 0xcu;  // (from the original)
    r0_3 = r0_2 + 0x24u;  // (from the original)
    *gptr<u32>(r3_3) = u32(r1_2);
    *gptr<u32>(r3_3 + 4) = u32(r2_2);
    *gptr<u32>(r3_3 + 8) = u32(0u);
    *gptr<u8>(r0_2 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2) = u32(0x8f74e0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125e3c(r0_3, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_001207d8(r0_5, r1_3, r2_3, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_4, r2_4, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00125aec(r0_9, r1_5, r2_5, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_6, r2_6, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_00125aec(r0_13, r1_7, r2_7, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_15 = r0_14 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00125aec(r0_15, r1_8, r2_8, r3_9);
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_17 = r0_16 - 0x458u;  // (from the original)
    *global_00952638 = u32(r0_17);
    guest::cpu()->r[13] = r13;
    call_0052a5ac(r0_17, 0u, r2_9, r3_10);
    r3_11 = guest::cpu()->r[3];
    r1_9 = *gptr<u32>(r0_1 + 4u);
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fd108(r8_1, r1_9, 4u, r3_11);
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_18, r8_1, r2_10, r3_12);
    r9_1 = 0x85eda4u + 0x28u;  // (from the original)
    *gptr<u32>(r0_18 + 4u) = u32(0u);
    *gptr<u8>(r0_18 + 8u) = u8(0u);
    r1_10 = *gptr<u32>(r9_1);
    r2_11 = *gptr<u32>(r9_1 + 4);
    r3_13 = r0_18 + 0xcu;  // (from the original)
    r0_19 = r0_18 + 0x24u;  // (from the original)
    *gptr<u32>(r3_13) = u32(r1_10);
    *gptr<u32>(r3_13 + 4) = u32(r2_11);
    *gptr<u32>(r3_13 + 8) = u32(0u);
    *gptr<u8>(r0_18 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_18 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_18) = u32(0x8f74e0u);  // (from the original)
    *gptr<u32>(r0_18 + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00125e3c(r0_19, r1_10, r2_11, r3_13);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_21 = r0_20 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_001207d8(r0_21, r1_11, r2_12, r3_14);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_00125aec(r0_23, r1_12, r2_13, r3_15);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_25 = r0_24 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_26 = call_00125aec(r0_25, r1_13, r2_14, r3_16);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_27 = r0_26 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_00125aec(r0_27, r1_14, r2_15, r3_17);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_29 = r0_28 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_30 = call_00125aec(r0_29, r1_15, r2_16, r3_18);
    r1_16 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_31 = r0_30 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_32 = call_00125aec(r0_31, r1_16, r2_17, r3_19);
    r2_18 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_33 = r0_32 - 0x458u;  // (from the original)
    *gptr<u32>(0x952638u + 4u) = u32(r0_33);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0052a5ac(r0_33, 1u, r2_18, r3_20);
}

}  // namespace d_0052a3b8
GUEST_EXPORT(0x0052a3b8, d_0052a3b8::f_0052a3b8);

// f_0052a508: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a508 {

inline guest::global<u32, 0x0052a59c> global_0052a59c;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0052a508(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_004b4fc0(r0_1, 0x52a590u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0x3b8u;  // (from the original)
    r0_3 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_3, r1_1, r0_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = std::bit_cast<float>(*global_0052a59c);
    r0_4 = r0 + 0x3b8u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_5 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568c10(r0_5, r1_3, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_6 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_7 = call_004b4fc0(r0_6, 0x52a590u, 1u, r3_3);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    r1_4 = r0 + 0x3b8u;  // (from the original)
    r0_8 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    call_00568984(r0_8, r1_4, r0_7, 0u);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_9 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_6;
    r0_10 = call_0056878c(r0_9, 0x52a5a0u, r2_3, r3_4);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r1_5 = u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(r1_5);  // (from the original)
    r0_11 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_7;
    return call_00568c10(r0_11, r1_5, r2_4, r3_5);
}

}  // namespace d_0052a508
GUEST_EXPORT(0x0052a508, d_0052a508::f_0052a508);

// f_0052a870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052a870 {

struct __attribute__((packed)) Object_0052a870_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052a870_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052a870_0, word_10, 0x10);  // (from the original)


u32 f_0052a870(gptr<Object_0052a870_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 4u;
    r3_1 = arg0->word_c;
    r1_1 = *gptr<u32>(0x85eda4u + 0x24u);  // (from the original)
    if (r3_1 != *gptr<u32>(0x85eda4u + 0x20u)) {  // (from the original)
        goto L_52a8b8;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_52a8b0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        goto L_52a8b8;
    }
L_52a8b0:;
    r4_1 = 1u;
    goto L_52a8bc;
L_52a8b8:;
    r4_1 = 0u;
L_52a8bc:;
    ea_1 = 0x85eda4u + 0x10u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4u);
    if (r3_1 != *gptr<u32>(ea_1)) {
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_2) & 1u) == 0) {  // (from the original)
            r0_1 = 1u | r4_1;
            r13 = r13 + 4u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_2) {  // (from the original)
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_1 = 1u | r4_1;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0052a870
GUEST_EXPORT(0x0052a870, d_0052a870::f_0052a870);

// f_0052ab60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ab60 {

inline constexpr guest::Function<0x0011493d, u32(u32, u32, u32, u32)> call_0011493c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)

u32 f_0052ab60(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00303cdc(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x16u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x17u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u16>(r0 + 0xeu) = u16(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ff6f8(5u, r1_1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    r0_3 = call_006bbd54(r0_2, 0x33u, r0_1, r3_2);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_4, r0_3, r2_2, r3_3);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_6 = call_0011493c(r0_5, r1_2, r2_3, r3_4);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_0052ab60
GUEST_EXPORT(0x0052ab60, d_0052ab60::f_0052ab60);

// f_0052abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052abd8 {

inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x005291b0, u32(u32, u32, u32, u32)> call_005291b0;  // (from the original)
inline constexpr guest::Function<0x0052984c, u32(u32, u32, u32, u32)> call_0052984c;  // (from the original)
inline constexpr guest::Function<0x007ca090, u32(u32, u32, u32, u32)> call_007ca090;  // (from the original)

u32 f_0052abd8(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    r8 = 0u;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r3_1 = r8 << 0x10 & 0xff0000u;  // (from the original)
    r2_1 = (0xc8u << 8 & 0xff00u | (0xc8u | r2 & ~0xffu) & ~0xff00u) & ~0xff0000u;  // (from the original)
    r5 = r1;
    r0_1 = r13 + 8u;
    r4_1 = r2_1 | r3_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fc934(r0_1, r1, r2_1, r3_1);
    *gptr<u32>(r0_2 + 4u) = u32(0u);
    *gptr<u32>(r0_2 + 8u) = u32(0u);
    r2_2 = r4_1 << 0x10 >> 0x18;  // (from the original)
    r3_2 = r4_1 << 8 >> 0x18;  // (from the original)
    *gptr<u8>(r0_2 + 0xcu) = u8(r4_1);  // (from the original)
    *gptr<u8>(r0_2 + 0xdu) = u8(r2_2);  // (from the original)
    *gptr<u8>(r0_2 + 0xeu) = u8(r3_2);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_007ca090(r6, r0_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 2u) {
        if (r0_3 == 1u) {
            r7 = 4u;
            r4 = 0u;
            goto L_52ad14;
        }
        goto L_52ad48;
    }
    r1_2 = u32(*gptr<u8>(r6 + 0x24u)) & 1u;  // (from the original)
    if (r1_2 >= 2u) {
        r8 = r6 + 0x60u;  // (from the original)
        goto L_52aca8;
    }
    r8 = r6 + (r1_2 + (r1_2 << 2) + (r1_2 << 6) << 2) + 0x60u;  // (from the original)
L_52aca8:;
    r7 = 4u;
    r4 = 0u;
    do {
L_52acb0:;
        r0_4 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_4 = r0_4 + (r4 << 6);
        }
        *gptr<u32>(r13) = u32(r0_4 + 0x34u);  // (from the original)
        r0_5 = r0_4 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_005291b0(r0_5, r8, r5, 0x8464b4u);  // (from the original)
        r0_6 = r6 + 0x28cu;  // (from the original)
        if (r4 < 4u) {
            r0_6 = r0_6 + (r4 << 6);
        }
        r1_3 = u32(*gptr<u8>(r5 + 4u));
        r0_7 = r0_6 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0052984c(r0_7, r1_3, 0x8464b4u, r5);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        if (s32(r4) > s32(4u)) {
            r4 = 4u;
        }
        guest::preempt();
    } while (r4 != r7);
    r8 = 1u;
    goto L_52ad48;
L_52ad14:;
    r0_8 = r6 + 0x28cu;  // (from the original)
    if (r4 < 4u) {
        r0_8 = r0_8 + (r4 << 6);
    }
    r1_4 = u32(*gptr<u8>(r5 + 4u));
    r0_9 = r0_8 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0052984c(r0_9, r1_4, 0x8464b4u, r5);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r4 = r4 + 1u;
    if (s32(r4) > s32(4u)) {
        r4 = 4u;
    }
    if (r4 != r7) {
        guest::preempt();
        goto L_52ad14;
    }
L_52ad48:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r8;
}

}  // namespace d_0052abd8
GUEST_EXPORT(0x0052abd8, d_0052abd8::f_0052abd8);

// f_0052b818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b818 {

inline guest::global<u32, 0x0095e0b4> global_0095e0b4;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0052b9ec, u32(u32, u32, u32, u32)> call_0052b9ec;  // (from the original)
inline constexpr guest::Function<0x00569d50, u32(u32, u32, u32, u32)> call_00569d50;  // (from the original)

u32 f_0052b818(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r3_9 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r9_1 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_12 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_13 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_14 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_15 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_14 = 0;
    u32 r3_16 = 0;
    u32 r0_25 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_00569d50(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r0_1 + 4u);
    r8_1 = 4u + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fd108(r8_1, r1_1, 4u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_2, r8_1, r2_1, r3_2);
    ea_1 = r0_2 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    ea_2 = r0_2 + 8u;
    *gptr<u8>(ea_2) = u8(0u);
    ea_3 = 0x895ba0u + 0x18u;  // (from the original)
    r1_2 = *gptr<u32>(ea_3);
    r2_2 = *gptr<u32>(ea_3 + 4);
    r3_3 = r0_2 + 0xcu;  // (from the original)
    r0_3 = r0_2 + 0x24u;  // (from the original)
    *gptr<u32>(r3_3) = u32(r1_2);
    *gptr<u32>(r3_3 + 4) = u32(r2_2);
    *gptr<u32>(r3_3 + 8) = u32(0u);
    *gptr<u8>(r0_2 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_2 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_2) = u32(0x8f74f4u);  // (from the original)
    *gptr<u32>(r0_2 + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00125e3c(r0_3, r1_2, r2_2, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_001207d8(r0_5, r1_3, r2_3, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_00125aec(r0_7, r1_4, r2_4, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00125aec(r0_9, r1_5, r2_5, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_00125aec(r0_11, r1_6, r2_6, r3_7);
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_13 = r0_12 - 0x408u;  // (from the original)
    *global_0095e0b4 = u32(r0_13);
    guest::cpu()->r[13] = r13;
    call_0052b9ec(r0_13, 0u, r2_7, r3_8);
    r3_9 = guest::cpu()->r[3];
    r1_7 = *gptr<u32>(r0_1 + 4u);
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fd108(r8_1, r1_7, 4u, r3_9);
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_14, r8_1, r2_8, r3_10);
    r9_1 = 0x895ba0u + 0x18u;  // (from the original)
    *gptr<u32>(r0_14 + 4u) = u32(0u);
    *gptr<u8>(r0_14 + 8u) = u8(0u);
    r1_8 = *gptr<u32>(r9_1);
    r2_9 = *gptr<u32>(r9_1 + 4);
    r3_11 = r0_14 + 0xcu;  // (from the original)
    r0_15 = r0_14 + 0x24u;  // (from the original)
    *gptr<u32>(r3_11) = u32(r1_8);
    *gptr<u32>(r3_11 + 4) = u32(r2_9);
    *gptr<u32>(r3_11 + 8) = u32(0u);
    *gptr<u8>(r0_14 + 0x18u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_14 + 0x1cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_14) = u32(0x8f74f4u);  // (from the original)
    *gptr<u32>(r0_14 + 0x20u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_00125e3c(r0_15, r1_8, r2_9, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_17 = r0_16 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_18 = call_001207d8(r0_17, r1_9, r2_10, r3_12);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_19 = r0_18 + 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00125aec(r0_19, r1_10, r2_11, r3_13);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_21 = r0_20 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_00125aec(r0_21, r1_11, r2_12, r3_14);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_23 = r0_22 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_24 = call_00125aec(r0_23, r1_12, r2_13, r3_15);
    r2_14 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_25 = r0_24 - 0x408u;  // (from the original)
    *gptr<u32>(0x95e0b4u + 4u) = u32(r0_25);  // (from the original)
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_0052b9ec(r0_25, 1u, r2_14, r3_16);
}

}  // namespace d_0052b818
GUEST_EXPORT(0x0052b818, d_0052b818::f_0052b818);

// f_0052b948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052b948 {

inline guest::global<u32, 0x0052b9dc> global_0052b9dc;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568984, u32(u32, u32, u32, u32)> call_00568984;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_0052b948(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    float S0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    float S0_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    float S0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_11 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_2 = call_004b4fc0(r0_1, 0x52b9d0u, 1u, r3);  // (from the original)
    S0_1 = guest::cpu()->s[0];
    r1_1 = r0 + 0x3b8u;  // (from the original)
    r0_3 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    call_00568630(r0_3, r1_1, r0_2, 0u);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = std::bit_cast<float>(*global_0052b9dc);
    r0_4 = r0 + 0x3b8u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    r0_5 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    call_00568c10(r0_5, r1_3, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    r0_6 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_4;
    r0_7 = call_004b4fc0(r0_6, 0x52b9d0u, 1u, r3_3);  // (from the original)
    S0_5 = guest::cpu()->s[0];
    r1_4 = r0 + 0x3b8u;  // (from the original)
    r0_8 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    call_00568984(r0_8, r1_4, r0_7, 0u);
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    r0_9 = r0 + 0x24u;  // (from the original)
    guest::cpu()->s[0] = S0_6;
    r0_10 = call_0056878c(r0_9, 0x52b9e0u, r2_3, r3_4);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    r1_5 = u32(*gptr<u8>(r0_10 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r0_10 + 0xb7u) = u8(r1_5);  // (from the original)
    r0_11 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0_7;
    return call_00568c10(r0_11, r1_5, r2_4, r3_5);
}

}  // namespace d_0052b948
GUEST_EXPORT(0x0052b948, d_0052b948::f_0052b948);

// f_0052bb0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bb0c {

struct __attribute__((packed)) Object_0052bb0c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_0052bb0c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0052bb0c_0, word_10, 0x10);  // (from the original)


u32 f_0052bb0c(gptr<Object_0052bb0c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 ea_1 = 0;
    u32 r1_2 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 4u;
    r3_1 = arg0->word_c;
    r1_1 = *gptr<u32>(0x895ba0u + 0x14u);  // (from the original)
    if (r3_1 != *gptr<u32>(0x895ba0u + 0x10u)) {  // (from the original)
        goto L_52bb54;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            goto L_52bb4c;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_1) {  // (from the original)
        goto L_52bb54;
    }
L_52bb4c:;
    r4_1 = 1u;
    goto L_52bb58;
L_52bb54:;
    r4_1 = 0u;
L_52bb58:;
    ea_1 = 0x895ba0u + 8u;  // (from the original)
    r1_2 = *gptr<u32>(ea_1 + 4u);
    if (r3_1 != *gptr<u32>(ea_1)) {
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    if (r3_1 == 0) {
        if (((*gptr<u32>(r0 + 0x10u) | r1_2) & 1u) == 0) {  // (from the original)
            r0_1 = 1u | r4_1;
            r13 = r13 + 4u;
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1_2) {  // (from the original)
        r0_2 = 0u | r4_1;
        r13 = r13 + 4u;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r0_1 = 1u | r4_1;
    r13 = r13 + 4u;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0052bb0c
GUEST_EXPORT(0x0052bb0c, d_0052bb0c::f_0052bb0c);

// f_0052be5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052be5c {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)

u32 f_0052be5c(u32 r0, u32 r1, u32 r2) {
    guest::cpu()->r[13] -= 8u;
    call_0052c32c(0x9ab170u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(0x9516a0u + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 4u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 8u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 0x10u) = u32(0u);  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0u;
        return 0x9516a0u;  // (from the original)
    }
    *global_009516a0 = u8(0u);
    *gptr<u32>(0x9516a0u + 0x14u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0u;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052be5c
GUEST_EXPORT(0x0052be5c, d_0052be5c::f_0052be5c);

// f_0052bf90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bf90 {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052bf90() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_009516a0) | 4u;
    *global_009516a0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052bf90
GUEST_EXPORT(0x0052bf90, d_0052bf90::f_0052bf90);

// f_0052bfa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052bfa8 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052bfa8() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r9_1 = 0u;
    if (r0_1 == 0) {
        goto L_52c010;
    }
    r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52c010;
    }
    r9_1 = 1u;
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(r9_1);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(0xdu);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_52c010:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r9_1;
}

}  // namespace d_0052bfa8
GUEST_EXPORT(0x0052bfa8, d_0052bfa8::f_0052bfa8);

// f_0052c01c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c01c {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c01c(u32 r0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
        goto L_52c09c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_52c09c;
    }
    r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52c09c;
    }
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(7u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(r0);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_52c09c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0052c01c
GUEST_EXPORT(0x0052c01c, d_0052c01c::f_0052c01c);

// f_0052c0a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c0a4 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c0a4() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
        goto L_52c124;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_52c124;
    }
    r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52c124;
    }
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(0u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_52c124:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0052c0a4
GUEST_EXPORT(0x0052c0a4, d_0052c0a4::f_0052c0a4);

// f_0052c1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c1a0 {

struct __attribute__((packed)) Object_0052c1a0_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c1a0_0, word_54, 0x54);  // (from the original)

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)

u32 f_0052c1a0(gptr<Object_0052c1a0_0> arg0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    r4_1 = arg0->word_54;
    guest::cpu()->r[13] = r13;
    r0_1 = call_0052c2d8(0x9ab170u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_1;
    if (r0_1 != 0) {
        ea_1 = r1_1 + 0x10u;  // (from the original)
        *gptr<u32>(ea_1) = u32(r4_1);
        *gptr<u32>(ea_1 + 4) = u32(0u);
        *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
        *gptr<u8>(r1_1 + 0x19u) = u8(1u);  // (from the original)
        *gptr<u8>(r1_1 + 0xcu) = u8(3u);  // (from the original)
        *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_1 = 1u;
    }
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0052c1a0
GUEST_EXPORT(0x0052c1a0, d_0052c1a0::f_0052c1a0);

// f_0052c268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c268 {

inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32, u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c268() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003170f8(1u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        r0_2 = call_003170f8(2u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    r0_3 = *gptr<u32>(0x9516a0u + 8u);  // (from the original)
    if (r0_3 == 0) {
        r0_4 = *gptr<u32>(0x9516a0u + 4u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        return call_006e46c8(r0_4, 0x9516a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    return call_006e46c8(r0_3, 0x9516a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0052c268
GUEST_EXPORT(0x0052c268, d_0052c268::f_0052c268);

// f_0052c2c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c2c0 {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052c2c0() {
    u32 r1_1 = 0;
    r1_1 = u32(*global_009516a0) & ~4u;
    *global_009516a0 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return 0x9516a0u;  // (from the original)
}

}  // namespace d_0052c2c0
GUEST_EXPORT(0x0052c2c0, d_0052c2c0::f_0052c2c0);

// f_0052c3e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c3e0 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c3e0() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r9_1 = 0;
    u32 r8_1 = 0;
    u32 r0_2 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r9_1 = 0u;
    if (r0_1 == 0) {
        goto L_52c448;
    }
    r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52c448;
    }
    r9_1 = 1u;
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(r9_1);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(0xbu);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
L_52c448:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r9_1;
}

}  // namespace d_0052c3e0
GUEST_EXPORT(0x0052c3e0, d_0052c3e0::f_0052c3e0);

// f_0052c454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c454 {

inline constexpr guest::Function<0x00240fdc, u32(u32, u32, u32, u32)> call_00240fdc;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x0052c32c, u32(u32, u32, u32, u32)> call_0052c32c;  // (from the original)
inline constexpr guest::Function<0x0052ce18, u32(u32, u32, u32, u32)> call_0052ce18;  // (from the original)

u32 f_0052c454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_1 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0052ce18(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    call_0052c32c(0x9ab170u, r1_1, r2_1, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(0x9516a0u + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 4u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 8u) = u32(0u);  // (from the original)
    *gptr<u32>(0x9516a0u + 0x10u) = u32(0u);  // (from the original)
    r0_1 = call_0052c2d8(0x9ab170u, r1_2, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_2 = call_00240fdc(r0_1, r1_3, r2_3, r3_3);
    *gptr<u32>(r0_1 + 0x14u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x18u) = u8(3u);  // (from the original)
    *gptr<u8>(r0_1 + 0x1au) = u8(4u);  // (from the original)
    *gptr<u8>(r0_1 + 0xcu) = u8(2u);  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = u32(r0_2);  // (from the original)
    if (r0_2 == 0) {
        r0_3 = 5u;
        *gptr<u8>(r0_1 + 0x19u) = u8(0u);  // (from the original)
    } else {
        *gptr<u8>(r0_1 + 0x19u) = u8(3u);  // (from the original)
        r0_3 = 8u;
    }
    *gptr<u8>(r0_1 + 0x1au) = u8(r0_3);  // (from the original)
    *gptr<u32>(0x9516a0u + 0xcu) = u32(r0_1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r0_2;
    return r0_3;
}

}  // namespace d_0052c454
GUEST_EXPORT(0x0052c454, d_0052c454::f_0052c454);

// f_0052c4d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c4d8 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c4d8(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_52c54c;
    }
    r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
    r7_1 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0_1 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_1;
    if (r0_1 == 0) {
        goto L_52c54c;
    }
    *gptr<u32>(r1_1 + 0x14u) = u32(r7_1);  // (from the original)
    *gptr<u32>(r1_1 + 0x10u) = u32(r8_1);  // (from the original)
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(2u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(3u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
L_52c54c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0052c4d8
GUEST_EXPORT(0x0052c4d8, d_0052c4d8::f_0052c4d8);

// f_0052c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c584 {

inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c584() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 4u;
    r0_1 = call_003170f8(6u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 4u;
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r1_2 = *global_009516ac;
    *gptr<u8>(r1_2 + 0x1au) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0052c584
GUEST_EXPORT(0x0052c584, d_0052c584::f_0052c584);

// f_0052c648: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c648 {

inline guest::global<u32, 0x009516b0> global_009516b0;  // (from the original)

u32 f_0052c648() {
    u32 r0_1 = 0;
    u32 nf_1 = 0;
    u32 zf_1 = 0;
    r0_1 = *global_009516b0;
    nf_1 = r0_1 >> 0x1f;  // (from the original)
    zf_1 = r0_1 == 0;
    if (!zf_1 && nf_1 == 0u) {
        r0_1 = 1u;
    }
    if (zf_1 || nf_1 != 0u) {
        r0_1 = 0u;
    }
    return r0_1;
}

}  // namespace d_0052c648
GUEST_EXPORT(0x0052c648, d_0052c648::f_0052c648);

// f_0052c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c790 {

inline guest::global<u32, 0x009516ac> global_009516ac;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052c790(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = call_002f74e0(0x10u, r0_1, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = call_002f74c8(r0_2, r1_1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_4 = call_002f74e0(0x8000000u, r0_3, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r0_5 = call_003170f8(1u, 0u, r2_4, guest::cpu()->r[3]);
    r2_5 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        r0_6 = call_003170f8(2u, 0u, r2_5, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_3;
            return r0_6;
        }
    }
    r1_4 = *global_009516ac;
    if (*gptr<u32>(r0 + 0x54u) == *gptr<u32>(r1_4 + 0x14u)) {  // (from the original)
        r0_7 = 1u;
        *gptr<u8>(r1_4 + 0x1au) = u8(r0_7);  // (from the original)
    } else {
        r0_7 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return r0_7;
}

}  // namespace d_0052c790
GUEST_EXPORT(0x0052c790, d_0052c790::f_0052c790);

// f_0052c82c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c82c {

struct __attribute__((packed)) Object_0052c82c_0 {
    u8 unknown_0[0x54];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_0052c82c_0, word_54, 0x54);  // (from the original)


u32 f_0052c82c(gptr<Object_0052c82c_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_54;
    *gptr<u32>(0x9516a0u + 8u) = u32(r0_1);  // (from the original)
    guest::cpu()->r[1] = 0x9516a0u;  // (from the original)
    return r0_1;
}

}  // namespace d_0052c82c
GUEST_EXPORT(0x0052c82c, d_0052c82c::f_0052c82c);

// f_0052c844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c844 {


u32 f_0052c844(u32 r0) {
    if (r0 == 2u) {
        return 1u;
    }
    if (r0 == 4u) {
        return 3u;
    }
    if (r0 == 6u) {
        return 5u;
    }
    if (r0 == 8u) {
        return 7u;
    }
    return 1u;
}

}  // namespace d_0052c844
GUEST_EXPORT(0x0052c844, d_0052c844::f_0052c844);

// f_0052c878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c878 {

inline guest::global<u32, 0x009516a4> global_009516a4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x006e46c8, u32(u32, u32, u32, u32)> call_006e46c8;  // (from the original)

u32 f_0052c878() {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003170f8(1u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = call_003170f8(2u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_1;
            return r0_2;
        }
    }
    r0_3 = *global_009516a4;
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    guest::cpu()->r[13] += 8u;
    return call_006e46c8(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0052c878
GUEST_EXPORT(0x0052c878, d_0052c878::f_0052c878);

// f_0052c8c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c8c4 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c8c4(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r8_1 = 0;
    u32 r7_1 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r0_1 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_52c938;
    }
    r8_1 = *gptr<u32>(r0_1 + 0x54u);  // (from the original)
    r7_1 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r0_1 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_1;
    if (r0_1 == 0) {
        goto L_52c938;
    }
    *gptr<u32>(r1_1 + 0x14u) = u32(r7_1);  // (from the original)
    *gptr<u32>(r1_1 + 0x10u) = u32(r8_1);  // (from the original)
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(2u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(3u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(3u);  // (from the original)
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = 1u;
L_52c938:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0052c8c4
GUEST_EXPORT(0x0052c8c4, d_0052c8c4::f_0052c8c4);

// f_0052c974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052c974 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052c974() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
        goto L_52c9f4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_52c9f4;
    }
    r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52c9f4;
    }
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(8u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(4u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_52c9f4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0052c974
GUEST_EXPORT(0x0052c974, d_0052c974::f_0052c974);

// f_0052cc5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc5c {

inline guest::global<u8, 0x009516a0> global_009516a0;  // (from the original)

u32 f_0052cc5c() {
    u32 r0_1 = 0;
    r0_1 = u32(*global_009516a0) << 0x1e >> 0x1f;  // (from the original)
    return r0_1;
}

}  // namespace d_0052cc5c
GUEST_EXPORT(0x0052cc5c, d_0052cc5c::f_0052cc5c);

// f_0052cc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cc74 {

inline constexpr guest::Function<0x00125ca4, u32(u32, u32, u32, u32)> call_00125ca4;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)
inline constexpr guest::Function<0x0052c2d8, u32(u32, u32, u32, u32)> call_0052c2d8;  // (from the original)
inline constexpr guest::Function<0x005c33cc, u32(u32, u32, u32, u32)> call_005c33cc;  // (from the original)

u32 f_0052cc74() {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r8_1 = 0;
    u32 ea_1 = 0;
    r13 = r13 - 0x20;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003170f8(0xeu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = 0u;
        goto L_52ccf4;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_005c33cc(4u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_52ccf4;
    }
    r8_1 = *gptr<u32>(r0_2 + 0x54u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0052c2d8(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = r0_2;
    if (r0_2 == 0) {
        goto L_52ccf4;
    }
    ea_1 = r1_1 + 0x10u;  // (from the original)
    *gptr<u32>(ea_1) = u32(0u);
    *gptr<u32>(ea_1 + 4) = u32(r8_1);
    *gptr<u8>(r1_1 + 0x18u) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x19u) = u8(6u);  // (from the original)
    *gptr<u8>(r1_1 + 0xcu) = u8(1u);  // (from the original)
    *gptr<u8>(r1_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00125ca4(0x9ab170u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_2 = 1u;
L_52ccf4:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0052cc74
GUEST_EXPORT(0x0052cc74, d_0052cc74::f_0052cc74);

// f_0052ccfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ccfc {


u32 f_0052ccfc(u32 r0) {
    u32 r0_1 = 0;
    if (*gptr<u32>(0x9516a0u + 0x14u) == 0) {  // (from the original)
        *gptr<u32>(0x9516a0u + 0x14u) = u32(r0);  // (from the original)
        r0_1 = 1u;
    } else {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = 0x9516a0u;  // (from the original)
    return r0_1;
}

}  // namespace d_0052ccfc
GUEST_EXPORT(0x0052ccfc, d_0052ccfc::f_0052ccfc);

// f_0052cd58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052cd58 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x003170f8, u32(u32, u32, u32, u32)> call_003170f8;  // (from the original)

u32 f_0052cd58(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_002f74e0(0x10u, r0_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r0_3 = call_003170f8(1u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_3 == 0) {
        r0_4 = call_003170f8(2u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        if (r0_4 == 0) {
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return r0_4;
        }
    }
    r0_5 = *gptr<u32>(r0 + 0x54u);  // (from the original)
    r1_3 = *gptr<u32>(*gptr<u32>(0x9516a0u + 0xcu) + 0x14u);  // (from the original)
    if (r0_5 != r1_3) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 0u;
    }
    r0_6 = call_00300904(r0_5, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_4;
        return 0u;
    }
    r1_5 = *gptr<u32>(0x9516a0u + 0xcu);  // (from the original)
    *gptr<u8>(r1_5 + 0x1au) = u8(3u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_5;
    return 1u;
}

}  // namespace d_0052cd58
GUEST_EXPORT(0x0052cd58, d_0052cd58::f_0052cd58);

// f_0052ce18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ce18 {

inline guest::global<u32, 0x009ab588> global_009ab588;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052ce18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    r2 = 0x9ab598u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    do {
L_52ce28:;
        r1_1 = r2 + (r0 << 3);
        r0 = r0 + 1u;
        *gptr<u32>(r1_1 + 0x30u) = u32(r4);  // (from the original)
        *gptr<u32>(r1_1 + 0x34u) = u32(r4);  // (from the original)
        guest::preempt();
    } while (r0 < 6u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc900(r0, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0030b6c4(r0_1, r1_2, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_52ce6c;
        }
    }
    *global_009ab588 = u32(r4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0x9ab588u;  // (from the original)
L_52ce6c:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc900(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030b6c4(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    *gptr<u8>(r13) = u8(1u);
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_006249b0(0x39u, 0u, r2_4, 1u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0052ce18
GUEST_EXPORT(0x0052ce18, d_0052ce18::f_0052ce18);

// f_0052ceb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ceb8 {

inline guest::global<u8, 0x009516b8> global_009516b8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x0052d420, u32(u32, u32, u32, u32)> call_0052d420;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052ceb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_3 = 0;
    u32 r1_6 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc900(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_52cefc;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0052d420(0u, r0, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    if (r0_3 == 0) {
        r0_4 = 2u;
    } else {
        r0_4 = 1u;
    }
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_4;
L_52cefc:;
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fc900(r0_2, r1_2, r2_1, r3_1);
    r1_4 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_5 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_6 = call_0030b6c4(r0_5, r1_4, r2_2, r3_2);
    r1_5 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_5;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    *global_009516b8 = u8(0u);
    *gptr<u8>(r13) = u8(0u);
    *gptr<u8>(r13 + 1u) = u8(r0);
    *gptr<u8>(r13 + 2u) = u8(r0 >> 8);
    *gptr<u8>(r13 + 3u) = u8(r0 >> 0x10);  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r0 >> 0x18);  // (from the original)
    r2_3 = r13;
    guest::cpu()->r[13] = r13;
    call_006249b0(0x39u, 0u, r2_3, 5u);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0052ceb8
GUEST_EXPORT(0x0052ceb8, d_0052ceb8::f_0052ceb8);

// f_0052d0b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0b8 {

inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_0052d0b8(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002fc900(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_0061a7a0(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        r0_3 = 1u;
    } else {
        r0_3 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0052d0b8
GUEST_EXPORT(0x0052d0b8, d_0052d0b8::f_0052d0b8);

// f_0052d0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d0dc {

inline guest::global<u32, 0x009ab588> global_009ab588;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x0030b6c4, u32(u32, u32, u32, u32)> call_0030b6c4;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052d0dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc900(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_0030b6c4(r0_1, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_2 == 0) {
            goto L_52d108;
        }
    }
    *global_009ab588 = u32(0u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = 0x9ab588u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
L_52d108:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fc900(r0_2, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_0030b6c4(r0_3, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_4;
        guest::cpu()->r[13] = r13;
        return r0_4;
    }
    *gptr<u8>(r13) = u8(1u);
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    r0_5 = call_006249b0(0x39u, 0u, r2_4, 1u);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0052d0dc
GUEST_EXPORT(0x0052d0dc, d_0052d0dc::f_0052d0dc);

// f_0052d150: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d150 {

inline guest::global<u8, 0x009516b8> global_009516b8;  // (from the original)
inline constexpr guest::Function<0x002fc900, u32(u32, u32, u32, u32)> call_002fc900;  // (from the original)
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> call_006249b0;  // (from the original)

u32 f_0052d150(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fc900(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        *global_009516b8 = u8(0u);
        *gptr<u8>(r13) = u8(r2);
        *gptr<u8>(r13 + 1u) = u8(r0);
        *gptr<u8>(r13 + 2u) = u8(r0 >> 8);
        *gptr<u8>(r13 + 4u) = u8(r0 >> 0x18);  // (from the original)
        *gptr<u8>(r13 + 3u) = u8(r0 >> 0x10);  // (from the original)
        r2_1 = r13;
        *gptr<u8>(r13 + 5u) = u8(r1);
        guest::cpu()->r[13] = r13;
        r0_1 = call_006249b0(0x39u, 5u, r2_1, 6u);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0052d150
GUEST_EXPORT(0x0052d150, d_0052d150::f_0052d150);

// f_0052d220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d220 {


u32 f_0052d220(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    r2 = 0x9ab598u;  // (from the original)
    r1 = 0u;
    do {
L_52d228:;
        r3_1 = r2 + (r1 << 3);
        if (!(*gptr<u32>(r3_1) != r0)) {
            r0_1 = *gptr<u32>(r2 + (r1 << 3) + 4u);
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        if (!(*gptr<u32>(r3_1 + 8u) != r0)) {
            r0_2 = *gptr<u32>(r2 + (r1 << 3) + 0xcu);  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0_2;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(6u));
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0052d220
GUEST_EXPORT(0x0052d220, d_0052d220::f_0052d220);

// f_0052d420: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d420 {


u32 f_0052d420(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r6 = guest::cpu()->r[6];
    u32 zf_1 = 0;
    u32 r12_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r6 = 0x9ab588u;  // (from the original)
    if (*gptr<u32>(r6 + (r0 << 2)) != 0) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 0u;
    }
    if (*gptr<u32>(r6) == r1) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 0u;
    }
    zf_1 = *gptr<u32>(r6 + 4u) == r1;
    if (!zf_1) {
        zf_1 = *gptr<u32>(r6 + 8u) == r1;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 0u;
    }
    if (*gptr<u32>(r6 + 0xcu) == r1) {  // (from the original)
        guest::cpu()->r[13] += 0xcu;  // (from the original)
        return 0u;
    } else {
        r3 = 0x9ab598u;  // (from the original)
        r2 = 0u;
    }
L_52d468:;
    r12_1 = r3 + (r2 << 3);
    if (*gptr<u32>(r12_1 + 4u) != r1) {
        if (*gptr<u32>(r12_1 + 0xcu) != r1) {  // (from the original)
            goto L_52d49c;
        }
        r2 = r2 + 1u;
    }
    if (r2 + 1u == 0) {
        goto L_52d4a8;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return 0u;
L_52d49c:;
    r2 = r2 + 2u;
    if (s32(r2) < s32(6u)) {
        guest::preempt();
        goto L_52d468;
    }
L_52d4a8:;
    *gptr<u32>(r6 + (r0 << 2)) = u32(r1);
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return 1u;
}

}  // namespace d_0052d420
GUEST_EXPORT(0x0052d420, d_0052d420::f_0052d420);

// f_0052d550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052d550 {

struct __attribute__((packed)) Object_0052d550_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 byte_19;
    u8 byte_1a;
    u8 byte_1b;
    u8 byte_1c;
};
GUEST_OFFSET(Object_0052d550_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_19, 0x19);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1a, 0x1a);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1b, 0x1b);  // (from the original)
GUEST_OFFSET(Object_0052d550_0, byte_1c, 0x1c);  // (from the original)


void f_0052d550(gptr<Object_0052d550_0> arg0) {
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->byte_18 = u8(0u);
    arg0->byte_19 = u8(0xeu);  // (from the original)
    arg0->byte_1a = u8(0u);
    arg0->byte_1b = u8(0u);
    arg0->byte_1c = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0052d550
GUEST_EXPORT(0x0052d550, d_0052d550::f_0052d550);

// f_0052db0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052db0c {

inline guest::global<u32, 0x0052db78> global_0052db78;  // (from the original)
inline constexpr guest::Function<0x0060c560, u32(u32, u32, u32, u32)> call_0060c560;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)

u32 f_0052db0c(u32 r0, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    float S0_1 = 0;
    u32 r2_3 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    float S0_2 = 0;
    r0_1 = r0 + (r0 << 1);
    r2_1 = 0x9516c0u + 0x3cu;  // (from the original)
    r1_1 = 0x9516c0u + (r0_1 << 2);  // (from the original)
    r0_2 = r2_1 + (r0_1 << 2);
    r13 = r13 - 0x20u;  // (from the original)
    *gptr<u32>(r13) = u32(*gptr<u32>(r1_1));
    r2_2 = *gptr<u32>(r1_1 + 4u);
    *gptr<u32>(r13 + 4u) = u32(r2_2);
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r1_1 + 8u));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0_2));  // (from the original)
    r1_2 = *gptr<u32>(r0_2 + 4u);
    *gptr<u32>(r13 + 0x10u) = u32(r1_2);  // (from the original)
    r0_3 = *gptr<u32>(r0_2 + 8u);
    *gptr<u32>(r13 + 0x14u) = u32(r0_3);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_4 = call_0060c5c4(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    S0_1 = std::bit_cast<float>(*global_0052db78);
    r2_3 = r13 + 0xcu;  // (from the original)
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_5 = call_0060c560(r0_4, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    return r0_5;
}

}  // namespace d_0052db0c
GUEST_EXPORT(0x0052db0c, d_0052db0c::f_0052db0c);

// f_0052ddf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ddf8 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d2f8, u32(u32, u32, u32, u32)> call_0075d2f8;  // (from the original)

u32 f_0052ddf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b4c94(r0_1, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_0060c5c4(0u, r0_2, r2_2, r3_2);
        r3_3 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_4 = call_0075d2f8(r0_3, r0, r1, r3_3);
        r1_2 = guest::cpu()->r[1];
        *gptr<u32>(r13) = u32(r0_4);
        r0_5 = u32(*gptr<u16>(r13));
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    r1_3 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r0 + 8u) = u32(r1_3);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0052ddf8
GUEST_EXPORT(0x0052ddf8, d_0052ddf8::f_0052ddf8);

// f_0052de50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052de50 {

inline guest::global<u32, 0x0052dee0> global_0052dee0;  // (from the original)
inline guest::global<u32, 0x0052dee4> global_0052dee4;  // (from the original)
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052de50(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_0052ddf8(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S1_1 = std::bit_cast<float>(*global_0052dee0);
    S0_1 = std::bit_cast<float>(*global_0052dee4);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1_1));
    r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r0_3 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_1));
    r0_4 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r0_5 = sxth(r2);
    if (r0_5 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_6 = call_00567580(r0, r2, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_6;
}

}  // namespace d_0052de50
GUEST_EXPORT(0x0052de50, d_0052de50::f_0052de50);

// f_0052e038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e038 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d378, u32(u32, u32, u32, u32)> call_0075d378;  // (from the original)

u32 f_0052e038(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5_1 = r1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f74e0(2u, r0_1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_52e09c;
    }
    if (r4 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0060c5c4(r0_2, r1, r2_2, guest::cpu()->r[3]);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0075d378(r0_4, r0_3, r5_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(*gptr<u32>(r13));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r13 + 4u));
    r0 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_52e09c:;
    *gptr<u32>(r4) = u32(*gptr<u32>(r5_1));
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r5_1 + 4u));
    r0 = *gptr<u32>(r5_1 + 8u);
    *gptr<u32>(r4 + 8u) = u32(r0);
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0052e038
GUEST_EXPORT(0x0052e038, d_0052e038::f_0052e038);

// f_0052e0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e0b4 {

inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d4b0, u32(u32, u32, u32, u32)> call_0075d4b0;  // (from the original)

u32 f_0052e0b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 zf_1 = 0;
    u32 r0_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b4c94(r0_1, r1_1, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (zf_1) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r0_2;
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0060c5c4(0u, r0_2, guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_0075d4b0(r0_3, r0, guest::cpu()->r[2], r3_3);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r0_4);
    r0_5 = u32(*gptr<u16>(r13));
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0052e0b4
GUEST_EXPORT(0x0052e0b4, d_0052e0b4::f_0052e0b4);

// f_0052e1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e1ec {

inline guest::global<u32, 0x0094edd8> global_0094edd8;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x0052ddf8, u32(u32, u32, u32, u32)> call_0052ddf8;  // (from the original)
inline constexpr guest::Function<0x005b4c94, u32(u32, u32, u32, u32)> call_005b4c94;  // (from the original)
inline constexpr guest::Function<0x0060c5c4, u32(u32, u32, u32, u32)> call_0060c5c4;  // (from the original)
inline constexpr guest::Function<0x0075d178, u32(u32, u32, u32, u32)> call_0075d178;  // (from the original)

u32 f_0052e1ec(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f74c8(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_005b4c94(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_52e270;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f74c8(r0_2, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f74e0(0x10000000u, r0_3, r2_3, r3_3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 != 0) {
        guest::cpu()->r[13] = r13;
        r0_5 = call_0052ddf8(r0, r1, r2_4, r3_4);
        r1_3 = guest::cpu()->r[1];
        *gptr<u32>(r13) = u32(r0_5);
        r0_6 = u32(*gptr<u16>(r13));
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r5_1 = *global_0094edd8;
    if (r5_1 == 0) {
        goto L_52e270;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_0060c5c4(0x94edd8u, r1_2, r2_4, r3_4);  // (from the original)
    r3_5 = *gptr<u32>(r5_1 + 0x1a4u) + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_0075d178(r0_7, r0, r1, r3_5);
    r1_4 = guest::cpu()->r[1];
    *gptr<u32>(r13) = u32(r0_8);
    r0_9 = u32(*gptr<u16>(r13));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_9;
L_52e270:;
    *gptr<u32>(r0) = u32(*gptr<u32>(r1));
    *gptr<u32>(r0 + 4u) = u32(*gptr<u32>(r1 + 4u));
    *gptr<u32>(r0 + 8u) = u32(*gptr<u32>(r1 + 8u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0u;
}

}  // namespace d_0052e1ec
GUEST_EXPORT(0x0052e1ec, d_0052e1ec::f_0052e1ec);

// f_0052e294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e294 {

inline guest::global<u32, 0x0052e324> global_0052e324;  // (from the original)
inline guest::global<u32, 0x0052e328> global_0052e328;  // (from the original)
inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052e294(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_0052e1ec(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S1_1 = std::bit_cast<float>(*global_0052e324);
    S0_1 = std::bit_cast<float>(*global_0052e328);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1_1));
    r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r0_3 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_1));
    r0_4 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r13));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r0_5 = sxth(r2);
    if (r0_5 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_6 = call_00567580(r0, r2, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_6;
}

}  // namespace d_0052e294
GUEST_EXPORT(0x0052e294, d_0052e294::f_0052e294);

// f_0052e32c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e32c {

inline guest::global<u32, 0x0052e3e4> global_0052e3e4;  // (from the original)
inline guest::global<u32, 0x0052e3e8> global_0052e3e8;  // (from the original)
inline constexpr guest::Function<0x0052e1ec, u32(u32, u32, u32, u32)> call_0052e1ec;  // (from the original)
inline constexpr guest::Function<0x0056747c, u32(u32, u32, u32, u32)> call_0056747c;  // (from the original)
inline constexpr guest::Function<0x00567580, u32(u32, u32, u32, u32)> call_00567580;  // (from the original)

u32 f_0052e32c(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0_2 = call_0052e1ec(r0_1, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    S1_1 = std::bit_cast<float>(*global_0052e3e4);
    S0_1 = std::bit_cast<float>(*global_0052e3e8);
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S1_1));
    r1_1 = r0_2;
    *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0 + 8u) = u32(std::bit_cast<u32>(S0_1));
    r0_3 = r0 + 0x10u;  // (from the original)
    *gptr<u32>(r0_3) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_3 + 4) = u32(std::bit_cast<u32>(S1_1));
    r0_4 = r0 + 0x24u;  // (from the original)
    *gptr<u32>(r0 + 0x18u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0 + 0x20u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_4) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r0_4 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r0 + 0xcu) = u32(*gptr<u32>(r13 + 4u));  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(*gptr<u32>(r13 + 8u));  // (from the original)
    *gptr<u32>(r0 + 0x2cu) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    if (sxth(r1_1) != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_0056747c(r0, r1_1, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    if (u32(*gptr<u16>(r2 + 2u)) != 0) {
        *gptr<u16>(r13) = u16(u32(*gptr<u16>(r2 + 2u)));
        r1_2 = *gptr<u32>(r13);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        call_00567580(r0, r1_2, r2_1, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        S0_1 = guest::cpu()->s[0];
        S1_1 = guest::cpu()->s[1];
    }
    r0_5 = u32(*gptr<u16>(r2));
    if (r0_5 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return r0_5;
    }
    *gptr<u16>(r13) = u16(u32(*gptr<u16>(r2)));
    r1_3 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_6 = call_0056747c(r0, r1_3, r2_1, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return r0_6;
}

}  // namespace d_0052e32c
GUEST_EXPORT(0x0052e32c, d_0052e32c::f_0052e32c);

// f_0052e5ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052e5ac {

struct __attribute__((packed)) Object_0052e5ac_0 {
    u8 unknown_0[0x808];  // (not used here)
    u8 byte_808;
};
GUEST_OFFSET(Object_0052e5ac_0, byte_808, 0x808);  // (from the original)


u32 f_0052e5ac(gptr<Object_0052e5ac_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    r2_1 = r0 + 0x670u;  // (from the original)
    r1_1 = 0x86537cu + (u32(arg0->byte_808) << 3);  // (from the original)
    r0_1 = *gptr<u32>(r1_1 + 4u);
    r1_2 = *gptr<u32>(r1_1);
    if (r1_2 == 0) {
        if ((r0_1 & 1u) == 0) {
            guest::cpu()->r[1] = r1_2;
            return r0_1;
        }
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1_2;
            return r0_1;
        }
    }
    zf_1 = (r0_1 & 1u) == 0;
    r0_2 = r2_1 + u32(s32(r0_1) >> 1);
    if (zf_1) {
        return guest::call_address<u32>(r1_2, r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    }
    r2_2 = *gptr<u32>(r0_2);
    r1_3 = *gptr<u32>(r2_2 + r1_2);
    return guest::call_address<u32>(r1_3, r0_2, r1_3, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_0052e5ac
GUEST_EXPORT(0x0052e5ac, d_0052e5ac::f_0052e5ac);

// f_0052ed04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ed04 {

struct __attribute__((packed)) Object_0052ed04_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0052ed04_1, word_0, 0x0);  // (from the original)


void f_0052ed04(gptr<GridPoint> arg0, gptr<Object_0052ed04_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r2_3 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    r2_1 = arg1->word_0;
    if (r2_1 >> 0x1f == (r2_1 & (r2_1 ^ r2_1)) >> 0x1f) {  // (from the original)
        r2_2 = r2_1 - (r2_1 + (u32(s32(r2_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
    } else {
        r2_3 = r2_1 + 1u;
        r2_2 = r2_3 - (r2_3 + (u32(s32(r2_3) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    }
    r1_1 = *gptr<u32>(r1 + 4u);
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        r1_2 = r1_1 - (r1_1 + (u32(s32(r1_1) >> 0x1f) >> 0x1c) & ~0xfu);  // (from the original)
        arg0->y = s32(u32(r1_2));
        arg0->x = s32(u32(r2_2));
        guest::cpu()->r[1] = r1_2;
        return;
    }
    r1_3 = r1_1 + 1u;
    r1_4 = r1_3 - (r1_3 + (u32(s32(r1_3) >> 0x1f) >> 0x1c) & ~0xfu) + 0xfu;  // (from the original)
    arg0->y = s32(u32(r1_4));
    arg0->x = s32(u32(r2_2));
    guest::cpu()->r[1] = r1_4;
    return;
}

}  // namespace d_0052ed04
GUEST_EXPORT(0x0052ed04, d_0052ed04::f_0052ed04);

// f_0052ef44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef44 {

struct __attribute__((packed)) Object_0052ef44_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0052ef44_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0052ef44_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0052ef44_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef44_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef44_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052ef88> global_0052ef88;  // (from the original)
inline guest::global<u32, 0x0085f2c4> global_0085f2c4;  // (from the original)
inline guest::global<u32, 0x0085f2c8> global_0085f2c8;  // (from the original)

u32 f_0052ef44(gptr<Object_0052ef44_0> arg0, gptr<Object_0052ef44_1> arg1) {
    u32 r0 = arg0.addr();
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    u32 r0_1 = 0;
    S0_1 = std::bit_cast<float>(*global_0052ef88);
    r1_1 = arg1->word_0 * *global_0085f2c4;
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *global_0085f2c8))));
    arg0->word_0 = u32(std::bit_cast<u32>(float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))))));
    r0_1 = r0 + 4u;
    arg0->word_4 = u32(std::bit_cast<u32>(S0_1));
    arg0->word_8 = u32(std::bit_cast<u32>(S1_1));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return r0_1;
}

}  // namespace d_0052ef44
GUEST_EXPORT(0x0052ef44, d_0052ef44::f_0052ef44);

// f_0052ef8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0052ef8c {

struct __attribute__((packed)) Object_0052ef8c_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0052ef8c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0052ef8c_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0052eff4> global_0052eff4;  // (from the original)
inline guest::global<u32, 0x0085f2e0> global_0085f2e0;  // (from the original)
inline guest::global<u32, 0x0085f2e4> global_0085f2e4;  // (from the original)
inline guest::global<u32, 0x0085f2e8> global_0085f2e8;  // (from the original)
inline guest::global<u32, 0x0085f2ec> global_0085f2ec;  // (from the original)

void f_0052ef8c(gptr<GridRect> arg0, gptr<Object_0052ef8c_1> arg1) {
    float S0_1 = 0;
    u32 r1_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    S0_1 = std::bit_cast<float>(*global_0052eff4);
    r1_1 = arg1->word_0 * *global_0085f2e0 + *global_0085f2e8;
    S1_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(arg1->word_4 * *global_0085f2e4 + *global_0085f2ec))));
    arg0->min.x = s32(u32(std::bit_cast<u32>(S1_1)));
    arg0->min.y = s32(u32(std::bit_cast<u32>(S0_1)));
    arg0->max.x = s32(u32(std::bit_cast<u32>(S2_1)));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_0052ef8c
GUEST_EXPORT(0x0052ef8c, d_0052ef8c::f_0052ef8c);
