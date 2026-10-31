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
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_5 = 0;
    u32 r1_7 = 0;
    u32 r0_6 = 0;
    u32 r1_8 = 0;
    u32 r0_7 = 0;
    u32 r1_9 = 0;
    u32 r0_8 = 0;
    u32 r1_10 = 0;
    u32 r0_9 = 0;
    u32 r1_11 = 0;
    u32 r0_10 = 0;
    u32 r1_12 = 0;
    u32 r0_11 = 0;
    u32 r1_13 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_14 = 0;
    u32 r0_17 = 0;
    u32 r1_15 = 0;
    u32 r0_18 = 0;
    u32 r6_1 = 0;
    u32 r0_19 = 0;
    u32 r1_16 = 0;
    u32 r0_20 = 0;
    u32 r1_17 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_18 = 0;
    r13 = r13 - 0x90u;  // (from the original)
    r9_1 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00713aa8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r10_1 = r0;
    if (r0 == 0) {
        goto L_640330;
    }
    *gptr<u32>(r13 + 0x2cu) = u32(0x640538u);  // (from the original)
    r1_1 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_008273c8(r10_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x3cu) = u32(0x640548u);  // (from the original)
    r1_2 = r13 + 0x38u;  // (from the original)
    *gptr<u32>(r13 + 0x38u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_008273c8(r10_1, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x4cu) = u32(0x640554u);  // (from the original)
    r1_3 = r13 + 0x48u;  // (from the original)
    *gptr<u32>(r13 + 0x48u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_008273c8(r10_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x14u) = u32(0x640560u);  // (from the original)
    r1_4 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_008273c8(r10_1, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        goto L_6402b0;
    }
    *gptr<u32>(r13 + 0x1cu) = u32(0x640570u);  // (from the original)
    r1_5 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008273c8(r10_1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
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
    *gptr<u8>(r9_1 + 0x2d1u) = u8(u32(*gptr<u8>(r9_1 + 0x2d1u)) | 0x20u);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(0x640580u);  // (from the original)
    r5 = r9_1 + 0x2d1u;  // (from the original)
    r1_6 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_008273c8(r10_1, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_5 == 0) {
        *gptr<u32>(r13 + 0x14u) = u32(0x64058cu);  // (from the original)
        r1_7 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_6 = call_008273c8(r10_1, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_6 == 0) {
            goto L_64031c;
        }
    }
    r0_6 = 1u;
L_64031c:;
    if (r0_6 == 0) {
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
    r1_8 = r13 + 0x30u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_008273c8(r10_1, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        *gptr<u32>(r13 + 0x44u) = u32(0x6405a0u);  // (from the original)
        r1_9 = r13 + 0x40u;  // (from the original)
        *gptr<u32>(r13 + 0x40u) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_008273c8(r10_1, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_8 == 0) {
            goto L_640384;
        }
    }
    r0_8 = 1u;
L_640384:;
    if (r0_8 != 0) {
        r0 = u32(*gptr<u8>(r5)) | 0x40u;  // (from the original)
        guest::preempt();
        goto L_64032c;
    }
    *gptr<u32>(r13 + 0x54u) = u32(0x6405acu);  // (from the original)
    r1_10 = r13 + 0x50u;  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_008273c8(r10_1, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_9 == 0) {
        *gptr<u32>(r13 + 0x5cu) = u32(0x6405bcu);  // (from the original)
        r1_11 = r13 + 0x58u;  // (from the original)
        *gptr<u32>(r13 + 0x58u) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_008273c8(r10_1, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_10 == 0) {
            goto L_6403e0;
        }
    }
    r0_10 = 1u;
L_6403e0:;
    if (r0_10 == 0) {
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
    r1_12 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_008273c8(r10_1, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_13 = guest::cpu()->r[1];
    if (r0_11 == 0) {
        goto L_6404bc;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0_11, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_640330;
    }
    r0_12 = r0 + 0xau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0071a7ec(r0_12, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fcbb0(r0_14, 0x28b1u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fe574(r0_13, r0_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_14 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        r0_17 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fcbb0(r0_17, 0x28b2u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_15 = r13 + 0xcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_18 = call_002fe574(r0_13, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_14 = guest::cpu()->r[1];
        if (r0_18 == 0) {
            r6_1 = 0u;
            goto L_640490;
        }
    }
    r6_1 = 1u;
L_640490:;
    r0_19 = r13 + 0x60u;  // (from the original)
    if (r6_1 != 0) {
        guest::preempt();
        goto L_6403e8;
    }
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    guest::cpu()->r[13] = r13;
    return r0_19;
L_6404bc:;
    *gptr<u32>(r13 + 0x64u) = u32(0x6405dcu);  // (from the original)
    r1_16 = r13 + 0x60u;  // (from the original)
    *gptr<u32>(r13 + 0x60u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_008273c8(r10_1, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_20 != 0) {
        *gptr<u32>(r13 + 0x6cu) = u32(0x6405e8u);  // (from the original)
        r1_17 = r13 + 0x68u;  // (from the original)
        *gptr<u32>(r13 + 0x68u) = u32(0x9047f8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_21 = call_008273c8(r10_1, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_21 == 0) {
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
    r0_22 = call_0076e014(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = guest::cpu()->r[1];
    if (r0_22 != 0) {
        guest::preempt();
        goto L_6403e8;
    }
    r13 = r13 + 0x90u;  // (from the original)
    guest::cpu()->r[1] = r1_18;
    guest::cpu()->r[13] = r13;
    return r0_22;
}

}  // namespace d_006401f4
GUEST_EXPORT(0x006401f4, d_006401f4::f_006401f4);

// f_006405f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006405f4 {

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x0031917c, u32(u32, u32, u32, u32)> call_0031917c;  // (from the original)
inline constexpr guest::Function<0x0071dcdc, u32(u32, u32, u32, u32)> call_0071dcdc;  // (from the original)
inline constexpr guest::Function<0x00756120, u32(u32, u32, u32, u32)> call_00756120;  // (from the original)
inline constexpr guest::Function<0x00758dd4, u32(u32, u32, u32, u32)> call_00758dd4;  // (from the original)

u32 f_006405f4(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r6_1 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r6_2 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x406ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0031917c(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r6_1 = *global_00aaf14c;
    r1_1 = r2;
    if (r2 + 1u == 0) {
        guest::cpu()->r[13] = r13;
        r0_3 = call_00756120(r0_3, r6_1, r2_2, guest::cpu()->r[3]);
        r2_2 = guest::cpu()->r[2];
        r1_1 = r0_3;
    }
    ea_1 = r0 + 0x270u;  // (from the original)
    *gptr<u8>(ea_1) = u8(r1);
    r5_1 = 0u;
    *gptr<u8>(ea_1 + 1u) = u8(r1_1);
    if (r1_1 + 1u == 0) {
        goto L_64069c;
    }
    r0_4 = r6_1 + 0x7008u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_0071dcdc(r0_4, r1_1, r2_2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r6_2 = r0_3;
    if (r0_3 == 0) {
        goto L_64069c;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00758dd4(r0_3, r1_1, r2_3, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_3 != 2u) {
        goto L_64069c;
    }
    r5_1 = 1u;
    r0_5 = r6_2 + 0x274u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcaf4(r0_5, r1_1, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r5_1 = 2u;
    }
L_64069c:;
    *gptr<u8>(ea_1 + 2u) = u8(r5_1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
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

inline guest::global<u32, 0x0095debc> global_0095debc;  // (from the original)
inline guest::global<u32, 0x00a83af0> global_00a83af0;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x005f11b4, u32(u32, u32, u32, u32)> call_005f11b4;  // (from the original)
inline constexpr guest::Function<0x005fcfd8, u32(u32, u32, u32, u32)> call_005fcfd8;  // (from the original)
inline constexpr guest::Function<0x0075c348, u32(u32, u32, u32, u32)> call_0075c348;  // (from the original)

u32 f_00641f88(gptr<Object_00641f88_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 zf_2 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r3_3 = 0;
    u32 r1_6 = 0;
    u32 r1_7 = 0;
    u32 r3_4 = 0;
    u32 r1_8 = 0;
    u32 r3_5 = 0;
    u32 r1_9 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = *global_0095debc;
    r0_1 = arg0->word_4;
    r1_1 = *global_00a83af0;
    zf_1 = r1_1 == 0;
    cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == r1;  // (from the original)
        cf_1 = 0x18fu >= r1;  // (from the original)
    }
    if (!cf_1 || zf_1) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2_1 = r1 + (r1 << 4);
    res_1 = r1_1 + (r2_1 << 1);
    zf_2 = res_1 == 0;
    if (!zf_2) {
        zf_2 = r5_1 == 0;
    }
    if (zf_2) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_1 = *gptr<u32>(r0_1 + 0x354u);  // (from the original)
    if (r0_1 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_005fcfd8(r0_2, r1_1, r2_1, r3);
    r3_1 = res_1 + 0x10u;  // (from the original)
    r1_2 = r13;
    *gptr<u8>(res_1 + 0x13u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r5_1, r1_2, 0x6420b4u, r3_1);  // (from the original)
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_005f11b4(r0_1, r1_3, 0xcu, 0u);  // (from the original)
    r3_2 = res_1 + 0x18u;  // (from the original)
    r1_4 = r13;
    *gptr<u8>(res_1 + 0x1bu) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r5_1, r1_4, 0x6420c4u, r3_2);  // (from the original)
    r1_5 = r13;
    guest::cpu()->r[13] = r13;
    call_005f11b4(r0_1, r1_5, 0xau, 0u);  // (from the original)
    r3_3 = res_1 + 0x14u;  // (from the original)
    r1_6 = r13;
    *gptr<u8>(res_1 + 0x17u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0075c348(r5_1, r1_6, 0x6420d4u, r3_3);  // (from the original)
    r1_7 = r13;
    guest::cpu()->r[13] = r13;
    call_005f11b4(r0_1, r1_7, 0xbu, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r1_8 = u32(*gptr<u8>(res_1 + 0x1du)) >> 4;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300914(r0_1, r1_8, 0u, r3_4);
    r3_5 = guest::cpu()->r[3];
    r1_9 = u32(s32(s8(*gptr<u8>(res_1 + 3u))));
    guest::cpu()->r[13] = r13;
    call_00300924(r0_1, r1_9, 0u, r3_5);
    r1_1 = guest::cpu()->r[1];
    r0_1 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00641f88
GUEST_EXPORT(0x00641f88, d_00641f88::f_00641f88);

// f_0064664c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064664c {

struct __attribute__((packed)) Object_0064664c_0 {
    u8 unknown_0[0xf0];  // (not used here)
    u32 word_f0;
};
GUEST_OFFSET(Object_0064664c_0, word_f0, 0xf0);  // (from the original)

inline constexpr guest::Function<0x00239174, u32(u32, u32, u32, u32)> call_00239174;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x00313440, u32(u32, u32, u32, u32)> call_00313440;  // (from the original)
inline constexpr guest::Function<0x005b6a10, u32(u32, u32, u32, u32)> call_005b6a10;  // (from the original)
inline constexpr guest::Function<0x005c1d80, u32(u32, u32, u32, u32)> call_005c1d80;  // (from the original)
inline constexpr guest::Function<0x0069a764, u32(u32, u32, u32, u32)> call_0069a764;  // (from the original)

u32 f_0064664c(gptr<Object_0064664c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r4_2 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r2_4 = 0;
    u32 zf_1 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r6 = r0;
    r0_1 = 3u;
    r1_1 = ~0u;
    r8 = 0x984718u;  // (from the original)
    *gptr<u32>(r8) = u32(r0_1);
    *gptr<u32>(r8 + 4) = u32(r1_1);
    *gptr<u8>(r8 + 8u) = u8(0u);
    r4_1 = arg0->word_f0;
    if (r4_1 == 0) {
        goto L_64677c;
    }
    r0_2 = call_002f74c8(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_3 = call_00313440(r0_2, r1_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r4_2 = r4_1 + 0x1000u;  // (from the original)
    r1_3 = *gptr<u32>(r4_2 + 0x30u);  // (from the original)
    if (r0_3 != r1_3) {
        goto L_6466fc;
    }
    r9 = 1u;
    *gptr<u32>(r8) = u32(r9);
    call_00239174(r6, r1_3, 0u, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_4 = 0x950148u;  // (from the original)
    r7 = *gptr<u32>(r0_4);
    if (r7 == 0) {
        goto L_646768;
    }
    r5 = *gptr<u32>(r4_2 + 0x30u);  // (from the original)
    r10 = 0x88722eu;  // (from the original)
    r4 = 0u;
L_6466c0:;
    r2_4 = u32(*gptr<u16>(r10));
    r0_4 = call_0069a764(r7, r4, r2_4, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    zf_1 = r0_4 == 0;
    if (!zf_1) {
        zf_1 = r4 == r5;
    }
    if (zf_1) {
        goto L_646720;
    }
    *gptr<u8>(r8 + 8u) = u8(r9);
    r0_4 = call_00239174(r6, r4, 1u, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    goto L_646768;
L_6466fc:;
    r0_5 = call_002f74c8(r0_3, r1_3, r2_2, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_4 = call_005b6a10(r0_5, r1_5, r2_5, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        goto L_646730;
    } else {
        *gptr<u32>(r8) = u32(0u);
    }
    goto L_646768;
L_646720:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_6466c0;
    }
    goto L_646768;
L_646730:;
    *gptr<u32>(r8) = u32(2u);
    r0_6 = call_002f74c8(2u, r1_4, r2_3, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_7 = call_00313440(r0_6, r1_6, r2_6, guest::cpu()->r[3]);
    call_00239174(r6, r0_7, 0u, guest::cpu()->r[3]);
    r1_7 = *gptr<u32>(r4_2 + 0x30u);  // (from the original)
    r0_4 = call_00239174(r6, r1_7, 1u, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
L_646768:;
    r0_8 = call_005c1d80(r0_4, r1_4, r2_3, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r8 + 4u) = u32(r0_8);
    r0_1 = 0x1717c0u;  // (from the original)
    *gptr<u32>(r6 + 0x164u) = u32(r0_1);  // (from the original)
L_64677c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0064664c
GUEST_EXPORT(0x0064664c, d_0064664c::f_0064664c);

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
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    float S3_1 = 0;
    float S4_1 = 0;
    float S5_1 = 0;
    float S6_1 = 0;
    float S7_1 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
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
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    float S2_3 = 0;
    float S3_3 = 0;
    float S4_3 = 0;
    float S5_3 = 0;
    float S6_3 = 0;
    float S7_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
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
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    float S0_5 = 0;
    float S1_5 = 0;
    float S2_5 = 0;
    float S3_5 = 0;
    float S4_5 = 0;
    float S5_5 = 0;
    float S6_5 = 0;
    float S7_5 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 nf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r5_2 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    float S0_6 = 0;
    float S1_6 = 0;
    float S2_6 = 0;
    float S3_6 = 0;
    float S4_6 = 0;
    float S5_6 = 0;
    float S6_6 = 0;
    float S7_6 = 0;
    u32 r0_14 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    float S0_7 = 0;
    float S1_7 = 0;
    float S2_7 = 0;
    float S3_7 = 0;
    float S4_7 = 0;
    float S5_7 = 0;
    float S6_7 = 0;
    float S7_7 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    float S0_8 = 0;
    float S1_8 = 0;
    float S2_8 = 0;
    float S3_8 = 0;
    float S4_8 = 0;
    float S5_8 = 0;
    float S6_8 = 0;
    float S7_8 = 0;
    u32 r1_8 = 0;
    u32 r0_16 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    float S2_9 = 0;
    float S3_9 = 0;
    float S4_9 = 0;
    float S5_9 = 0;
    float S6_9 = 0;
    float S7_9 = 0;
    u32 r1_9 = 0;
    u32 r0_17 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    float S2_10 = 0;
    float S3_10 = 0;
    float S4_10 = 0;
    float S5_10 = 0;
    float S6_10 = 0;
    float S7_10 = 0;
    u32 r1_10 = 0;
    u32 r0_18 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    float S2_11 = 0;
    float S3_11 = 0;
    float S4_11 = 0;
    float S5_11 = 0;
    float S6_11 = 0;
    float S7_11 = 0;
    u32 r1_11 = 0;
    u32 r0_19 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    float S2_12 = 0;
    float S3_12 = 0;
    float S4_12 = 0;
    float S5_12 = 0;
    float S6_12 = 0;
    float S7_12 = 0;
    u32 r1_12 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x50u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0_1 = call_002fc900(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r0_2 = 0x841be4u;  // (from the original)
    } else {
        r0_2 = 0x841c08u;  // (from the original)
    }
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_2));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 4));
    S2_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 8));
    S3_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0xc));  // (from the original)
    S4_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x10));  // (from the original)
    S5_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x14));  // (from the original)
    S6_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x18));  // (from the original)
    S7_1 = std::bit_cast<float>(*gptr<u32>(r0_2 + 0x1c));  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2_1));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3_1));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4_1));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5_1));  // (from the original)
    *gptr<u32>(r1 + 0x18) = u32(std::bit_cast<u32>(S6_1));  // (from the original)
    *gptr<u32>(r1 + 0x1c) = u32(std::bit_cast<u32>(S7_1));  // (from the original)
    *gptr<u32>(r1 + 0x20u) = u32(*gptr<u32>(r0_2 + 0x20u));  // (from the original)
    r0_3 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
    if (r0_3 == 0) {
        goto L_648470;
    }
    r6_1 = *gptr<u32>(r0_3 + 0x1028u);  // (from the original)
    if (r6_1 == 0) {
        goto L_648470;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    guest::cpu()->s[3] = S3_1;
    guest::cpu()->s[4] = S4_1;
    guest::cpu()->s[5] = S5_1;
    guest::cpu()->s[6] = S6_1;
    guest::cpu()->s[7] = S7_1;
    r0_4 = call_00632acc(r0, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    r5_1 = r0_4;
    if (r0_4 == 0) {
        goto L_64849c;
    }
    r0_5 = r5_1 + 0xeau;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_4 = call_0030031c(r0_5, 1u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    if (r0_4 == 0) {
        goto L_64847c;
    }
    goto L_64849c;
L_648470:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return 0u;
L_64847c:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_4 = call_00761c48(r0, r2, r6_1, r5_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    S2_2 = guest::cpu()->s[2];
    S3_2 = guest::cpu()->s[3];
    S4_2 = guest::cpu()->s[4];
    S5_2 = guest::cpu()->s[5];
    S6_2 = guest::cpu()->s[6];
    S7_2 = guest::cpu()->s[7];
    if (r0_4 != 0) {
        goto L_6484a0;
    }
L_64849c:;
    *gptr<u32>(r1 + 8u) = u32(0u);
L_6484a0:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    guest::cpu()->s[2] = S2_2;
    guest::cpu()->s[3] = S3_2;
    guest::cpu()->s[4] = S4_2;
    guest::cpu()->s[5] = S5_2;
    guest::cpu()->s[6] = S6_2;
    guest::cpu()->s[7] = S7_2;
    r0_6 = call_002fb328(r0_4, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    S2_3 = guest::cpu()->s[2];
    S3_3 = guest::cpu()->s[3];
    S4_3 = guest::cpu()->s[4];
    S5_3 = guest::cpu()->s[5];
    S6_3 = guest::cpu()->s[6];
    S7_3 = guest::cpu()->s[7];
    r0_7 = r0_6 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_3;
    guest::cpu()->s[4] = S4_3;
    guest::cpu()->s[5] = S5_3;
    guest::cpu()->s[6] = S6_3;
    guest::cpu()->s[7] = S7_3;
    r0_8 = call_00301df4(r0_7, 0u, r2_3, r3_3);
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
    r0_9 = call_002fb328(r0_8, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    S6_5 = guest::cpu()->s[6];
    S7_5 = guest::cpu()->s[7];
    r0_10 = u32(*gptr<u8>(r0_9 + 0x80u + 0x6214fu));  // (from the original)
    r1_4 = r0_10 << 0x1e;  // (from the original)
    nf_1 = r1_4 >> 0x1f;  // (from the original)
    vf_1 = 0u;
    if (nf_1 == vf_1) {
        r1_4 = r0_10 << 0x1d;  // (from the original)
        nf_1 = r1_4 >> 0x1f;  // (from the original)
        vf_1 = 0u;
    }
    if (nf_1 != vf_1) {
        goto L_648518;
    }
    r1_4 = r0_10 << 0x1c;  // (from the original)
    nf_2 = r1_4 >> 0x1f;  // (from the original)
    vf_2 = 0u;
    if (nf_2 == vf_2) {
        r0_10 = r0_10 << 0x1b;  // (from the original)
        nf_2 = r0_10 >> 0x1f;  // (from the original)
        vf_2 = 0u;
    }
    if (nf_2 != vf_2) {
        goto L_648518;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    r0_11 = call_002fb328(r0_10, r1_4, r2_5, r3_5);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    S0_5 = guest::cpu()->s[0];
    S1_5 = guest::cpu()->s[1];
    S2_5 = guest::cpu()->s[2];
    S3_5 = guest::cpu()->s[3];
    S4_5 = guest::cpu()->s[4];
    S5_5 = guest::cpu()->s[5];
    S6_5 = guest::cpu()->s[6];
    S7_5 = guest::cpu()->s[7];
    r1_4 = 4u;
    if (r1_4 != u32(*gptr<u8>(r0_11 + 0x80u + 0x6214fu + 4u)) << 0x19 >> 0x1d) {  // (from the original)
        r0_12 = 1u;
        goto L_64851c;
    }
L_648518:;
    r0_12 = 0u;
L_64851c:;
    if ((r0_12 - 1u & r0_8) != 0) {
        r5_2 = r0_8 + 0x570eu;  // (from the original)
        if ((u32(*gptr<u8>(r5_2)) & 1u) != 0) {
            goto L_648540;
        }
    }
    *gptr<u32>(r1 + 0x18u) = u32(0u);  // (from the original)
L_648540:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_5;
    guest::cpu()->s[2] = S2_5;
    guest::cpu()->s[3] = S3_5;
    guest::cpu()->s[4] = S4_5;
    guest::cpu()->s[5] = S5_5;
    guest::cpu()->s[6] = S6_5;
    guest::cpu()->s[7] = S7_5;
    r0_13 = call_002fe4c0(r6_1, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    S0_6 = guest::cpu()->s[0];
    S1_6 = guest::cpu()->s[1];
    S2_6 = guest::cpu()->s[2];
    S3_6 = guest::cpu()->s[3];
    S4_6 = guest::cpu()->s[4];
    S5_6 = guest::cpu()->s[5];
    S6_6 = guest::cpu()->s[6];
    S7_6 = guest::cpu()->s[7];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_6;
    guest::cpu()->s[1] = S1_6;
    guest::cpu()->s[2] = S2_6;
    guest::cpu()->s[3] = S3_6;
    guest::cpu()->s[4] = S4_6;
    guest::cpu()->s[5] = S5_6;
    guest::cpu()->s[6] = S6_6;
    guest::cpu()->s[7] = S7_6;
    r0_14 = call_0051ccc0(r0_13, r1_5, r2_6, r3_6);
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    S0_7 = guest::cpu()->s[0];
    S1_7 = guest::cpu()->s[1];
    S2_7 = guest::cpu()->s[2];
    S3_7 = guest::cpu()->s[3];
    S4_7 = guest::cpu()->s[4];
    S5_7 = guest::cpu()->s[5];
    S6_7 = guest::cpu()->s[6];
    S7_7 = guest::cpu()->s[7];
    *gptr<u32>(r13 + 4u) = u32(0x648648u);  // (from the original)
    r1_6 = r13;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_7;
    guest::cpu()->s[1] = S1_7;
    guest::cpu()->s[2] = S2_7;
    guest::cpu()->s[3] = S3_7;
    guest::cpu()->s[4] = S4_7;
    guest::cpu()->s[5] = S5_7;
    guest::cpu()->s[6] = S6_7;
    guest::cpu()->s[7] = S7_7;
    r0_15 = call_008273c8(r0_14, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_8 = guest::cpu()->s[2];
    S3_8 = guest::cpu()->s[3];
    S4_8 = guest::cpu()->s[4];
    S5_8 = guest::cpu()->s[5];
    S6_8 = guest::cpu()->s[6];
    S7_8 = guest::cpu()->s[7];
    if (r0_15 == 0) {
        goto L_648630;
    }
    *gptr<u32>(r13 + 0xcu) = u32(0x648654u);  // (from the original)
    r1_8 = r13 + 8u;
    *gptr<u32>(r13 + 8u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_8;
    guest::cpu()->s[3] = S3_8;
    guest::cpu()->s[4] = S4_8;
    guest::cpu()->s[5] = S5_8;
    guest::cpu()->s[6] = S6_8;
    guest::cpu()->s[7] = S7_8;
    r0_16 = call_008273c8(r0_14, r1_8, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_9 = guest::cpu()->s[2];
    S3_9 = guest::cpu()->s[3];
    S4_9 = guest::cpu()->s[4];
    S5_9 = guest::cpu()->s[5];
    S6_9 = guest::cpu()->s[6];
    S7_9 = guest::cpu()->s[7];
    if (r0_16 != 0) {
        *gptr<u32>(r1 + 0xcu) = u32(0u);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x14u) = u32(0x64865cu);  // (from the original)
    r1_9 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_9;
    guest::cpu()->s[3] = S3_9;
    guest::cpu()->s[4] = S4_9;
    guest::cpu()->s[5] = S5_9;
    guest::cpu()->s[6] = S6_9;
    guest::cpu()->s[7] = S7_9;
    r0_17 = call_008273c8(r0_14, r1_9, r2_9, r3_9);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_10 = guest::cpu()->s[2];
    S3_10 = guest::cpu()->s[3];
    S4_10 = guest::cpu()->s[4];
    S5_10 = guest::cpu()->s[5];
    S6_10 = guest::cpu()->s[6];
    S7_10 = guest::cpu()->s[7];
    if (r0_17 != 0) {
        *gptr<u32>(r1 + 0x14u) = u32(0u);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x1cu) = u32(0x648664u);  // (from the original)
    r1_10 = r13 + 0x18u;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_10;
    guest::cpu()->s[3] = S3_10;
    guest::cpu()->s[4] = S4_10;
    guest::cpu()->s[5] = S5_10;
    guest::cpu()->s[6] = S6_10;
    guest::cpu()->s[7] = S7_10;
    r0_18 = call_008273c8(r0_14, r1_10, r2_10, r3_10);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_11 = guest::cpu()->s[2];
    S3_11 = guest::cpu()->s[3];
    S4_11 = guest::cpu()->s[4];
    S5_11 = guest::cpu()->s[5];
    S6_11 = guest::cpu()->s[6];
    S7_11 = guest::cpu()->s[7];
    if (r0_18 != 0) {
        *gptr<u32>(r1 + 0x18u) = u32(0u);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x24u) = u32(0x648670u);  // (from the original)
    r1_11 = r13 + 0x20u;  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_11;
    guest::cpu()->s[3] = S3_11;
    guest::cpu()->s[4] = S4_11;
    guest::cpu()->s[5] = S5_11;
    guest::cpu()->s[6] = S6_11;
    guest::cpu()->s[7] = S7_11;
    r0_19 = call_008273c8(r0_14, r1_11, r2_11, r3_11);
    r1_7 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    S2_12 = guest::cpu()->s[2];
    S3_12 = guest::cpu()->s[3];
    S4_12 = guest::cpu()->s[4];
    S5_12 = guest::cpu()->s[5];
    S6_12 = guest::cpu()->s[6];
    S7_12 = guest::cpu()->s[7];
    if (r0_19 != 0) {
        *gptr<u32>(r1 + 0x20u) = u32(0u);  // (from the original)
        goto L_648630;
    }
    *gptr<u32>(r13 + 0x2cu) = u32(0x648678u);  // (from the original)
    r1_12 = r13 + 0x28u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    guest::cpu()->s[2] = S2_12;
    guest::cpu()->s[3] = S3_12;
    guest::cpu()->s[4] = S4_12;
    guest::cpu()->s[5] = S5_12;
    guest::cpu()->s[6] = S6_12;
    guest::cpu()->s[7] = S7_12;
    r0_20 = call_008273c8(r0_14, r1_12, r2_12, r3_12);
    r1_7 = guest::cpu()->r[1];
    S0_8 = guest::cpu()->s[0];
    S1_8 = guest::cpu()->s[1];
    if (r0_20 != 0) {
        *gptr<u32>(r1 + 0x1cu) = u32(0u);  // (from the original)
    }
L_648630:;
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_8;
    guest::cpu()->s[1] = S1_8;
    return 1u;
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 zf_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = r0 + 0x7cu;  // (from the original)
    call_005dc9d4(r0_1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_2 = call_00632acc(r0, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_3 = r0_2 + 0x62u;  // (from the original)
        r0_2 = call_00114374(r0_3, r1, guest::cpu()->r[2], r3_2);
        r1_2 = guest::cpu()->r[1];
        r3_2 = guest::cpu()->r[3];
    }
    zf_1 = r3 == 0;
    if (!zf_1) {
        r0_2 = *gptr<u32>(r0 + 0xf0u);  // (from the original)
        zf_1 = r0_2 == 0;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    r0_2 = *gptr<u32>(r0_2 + 0x1028u);  // (from the original)
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_2;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00112714(r0_2, r1, guest::cpu()->r[2], r3_2);
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

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x00318944, u32(u32, u32, u32, u32)> call_00318944;  // (from the original)
inline constexpr guest::Function<0x0051ddb8, u32(u32, u32, u32, u32)> call_0051ddb8;  // (from the original)

u32 f_0064c130(gptr<Object_0064c130_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    r13 = r13 - 8;
    r1_1 = *global_00aaf14c;
    if (r1_1 == 0) {
        goto L_64c178;
    }
    res_1 = u32(*gptr<u8>(r1_1 + 0x570eu)) << 0x19;  // (from the original)
    r1_1 = res_1;
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_64c178;
    }
    r1_1 = *gptr<u32>(arg0->word_f0 + 0x102cu);  // (from the original)
    if (r1_1 == 0) {
        goto L_64c178;
    }
    ea_1 = r1_1 + 0x1eu;  // (from the original)
    r1_1 = ea_1;
    r2 = u32(*gptr<u8>(ea_1)) | 0x10u;  // (from the original)
    *gptr<u8>(r1_1) = u8(r2);
L_64c178:;
    r0_1 = *gptr<u32>(r0 + 0xf0u) + 0x1000u;  // (from the original)
    r4_1 = *gptr<u32>(r0_1 + 0x2cu);  // (from the original)
    if (r4_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_2 = r4_1 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00318944(r0_2, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    if (r0_3 < 2u) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    r0_4 = r4_1 + 0x28u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return call_0051ddb8(r0_4, 0u, 0u, 0u);
}

}  // namespace d_0064c130
GUEST_EXPORT(0x0064c130, d_0064c130::f_0064c130);

// f_0064c450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064c450 {

struct __attribute__((packed)) Object_0064c450_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0064c450_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x001da158, u32(u32, u32, u32, u32)> call_001da158;  // (from the original)
inline constexpr guest::Function<0x002e6944, u32(u32, u32, u32, u32)> call_002e6944;  // (from the original)
inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;  // (from the original)
inline constexpr guest::Function<0x0031e204, u32(u32, u32, u32, u32)> call_0031e204;  // (from the original)
inline constexpr guest::Function<0x004edd6c, u32(u32, u32, u32, u32)> call_004edd6c;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)
inline constexpr guest::Function<0x0051e018, u32(u32, u32, u32, u32)> call_0051e018;  // (from the original)
inline constexpr guest::Function<0x006a8954, u32(u32, u32, u32, u32)> call_006a8954;  // (from the original)
inline constexpr guest::Function<0x006acabc, u32(u32, u32, u32, u32)> call_006acabc;  // (from the original)
inline constexpr guest::Function<0x006e480c, u32(u32, u32, u32, u32)> call_006e480c;  // (from the original)
inline constexpr guest::Function<0x006ee4b8, u32(u32, u32, u32, u32)> call_006ee4b8;  // (from the original)

u32 f_0064c450(gptr<Object_0064c450_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r4_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r2_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_6 = 0;
    u32 r2_9 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_7 = 0;
    u32 r2_10 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r1_10 = 0;
    u32 r2_13 = 0;
    u32 r0_28 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = 0u;
    arg0->word_0 = u32(0x8f8484u);  // (from the original)
    r1_1 = *gptr<u32>(0x102cu + r0);  // (from the original)
    if (r1_1 != 0) {
        *gptr<u8>(r1_1 + 0x34u) = u8(r5);  // (from the original)
    }
    r0_1 = r0 + 0xfe0u;  // (from the original)
    r0_2 = call_0051e018(r0_1, r1_1, 0x102cu, guest::cpu()->r[3]);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    *gptr<u32>(r0_2 - 0x4d4u) = u32(0x8f8c1cu);  // (from the original)
    r0_3 = r0_2 - 0x150u;  // (from the original)
    r0_4 = call_004edd6c(r0_3, 0x8f8c1cu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0_4 - 0x384u) = u32(0x8ed6acu);  // (from the original)
    r0_5 = r0_4 - 0xd4u;  // (from the original)
    r0_6 = call_0031e204(r0_5, 0x8ed6acu, r2_2, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_7 = r0_6 - 0x2b0u;  // (from the original)
    r4_1 = ~0u;
    *gptr<u32>(r0_7 + 0x278u) = u32(r4_1);  // (from the original)
    *gptr<u32>(r0_7 + 0x274u) = u32(r5);  // (from the original)
    *gptr<u32>(r0_7 + 0x270u) = u32(r4_1);  // (from the original)
    *gptr<u32>(r0_7 + 0x26cu) = u32(r5);  // (from the original)
    *gptr<u32>(r0_7 + 0x264u) = u32(r5);  // (from the original)
    *gptr<u32>(r0_7 + 0x268u) = u32(r4_1);  // (from the original)
    r0_8 = r0_7 + 0x15cu;  // (from the original)
    r0_9 = call_00317e2c(r0_8, r1_2, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_10 = r0_9 - 0x18u;  // (from the original)
    *gptr<u32>(r0_10 + 0x14u) = u32(r4_1);  // (from the original)
    *gptr<u32>(r0_10 + 0x10u) = u32(r5);  // (from the original)
    *gptr<u32>(r0_10 + 0xcu) = u32(r4_1);  // (from the original)
    *gptr<u32>(r0_10 + 8u) = u32(r5);
    *gptr<u32>(r0_10 + 4u) = u32(r4_1);
    *gptr<u32>(r0_10) = u32(r5);
    r0_11 = r0_10 - 0x144u;  // (from the original)
    *gptr<u32>(r0_11) = u32(0x8eb174u);  // (from the original)
    call_001abcd4(r0_11, 0x8eb174u, r2_4, guest::cpu()->r[3]);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_12 = r0_11 + 0xccu;  // (from the original)
    r0_13 = call_004ef50c(r0_12, r1_3, r2_5, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_14 = r0_13 - 0x54u;  // (from the original)
    r0_15 = call_004edd84(r0_14, r1_4, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    *gptr<u32>(r0_15 - 0xb84u) = u32(0x8f779cu);  // (from the original)
    r0_16 = r0_15 - 0xc8u;  // (from the original)
    r0_17 = call_002e6944(r0_16, 0x8f779cu, r2_7, guest::cpu()->r[3]);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_18 = r0_17 - 0x18u;  // (from the original)
    r0_19 = call_002e6944(r0_18, r1_5, r2_8, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_20 = r0_19 - 0xf0u;  // (from the original)
    r0_21 = call_001da158(r0_20, r1_6, r2_9, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r0_22 = r0_21 - 0xccu;  // (from the original)
    r0_23 = call_006acabc(r0_22, r1_7, r2_10, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r0_24 = r0_23 - 0x284u;  // (from the original)
    r0_25 = call_006a8954(r0_24, r1_8, r2_11, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r0_26 = r0_25 - 0x5ecu;  // (from the original)
    r0_27 = call_006ee4b8(r0_26, r1_9, r2_12, guest::cpu()->r[3]);
    r1_10 = guest::cpu()->r[1];
    r2_13 = r0_27 - 0x78u;  // (from the original)
    r0 = *gptr<u32>(r0_27 - 8u);
    r2 = r2_13 + 0x70u;  // (from the original)
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        r0_28 = r2 - 0x70u;  // (from the original)
        return call_006e480c(r0_28, r1_10, r2, guest::cpu()->r[3]);
    }
    do {
L_64c588:;
        r1_10 = *gptr<u32>(r0 + 4u);
        *gptr<u32>(r0) = u32(r5);
        *gptr<u32>(r0 + 4u) = u32(r5);
        r0 = r1_10;
        guest::preempt();
    } while (r1_10 != 0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0_28 = r2 - 0x70u;  // (from the original)
    return call_006e480c(r0_28, r1_10, r2, guest::cpu()->r[3]);
}

}  // namespace d_0064c450
GUEST_EXPORT(0x0064c450, d_0064c450::f_0064c450);

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

inline guest::global<u16, 0x00aaef30> global_00aaef30;  // (from the original)
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
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r5_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r2_7 = 0;
    u32 r0_14 = 0;
    u32 r1_3 = 0;
    u32 r2_8 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_9 = 0;
    u32 res_3 = 0;
    u32 r0_17 = 0;
    u32 r2_10 = 0;
    u32 zf_1 = 0;
    u32 r0_18 = 0;
    u32 r2_11 = 0;
    u32 zf_2 = 0;
    u32 r0_19 = 0;
    u32 r2_12 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_13 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_4 = 0;
    u32 res_4 = 0;
    u32 r0_24 = 0;
    u32 r1_5 = 0;
    r4_1 = r0;
    r0 = u32(arg0->byte_1a9);
    r13 = r13 - 0x18u;  // (from the original)
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = u32(arg0->half_5e0);
    if (r0 == 0) {
        goto L_64d7d4;
    }
    r1 = r4_1 + 0x5e0u;  // (from the original)
    if (r0 >= 1u) {
        r0 = r0 - 1u;
        arg0->half_5e0 = u16(r0);
    } else {
        arg0->half_5e0 = u16(0u);
    }
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64d7d4:;
    *gptr<u16>(0x5e0u + r4_1) = u16(0x384u);  // (from the original)
    r0_1 = u32(*gptr<u8>(r4_1 + 0x1acu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe8a8(r0_1, 0x384u, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r5_1 = r0;
    if (r0 == 0) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res_1 = u32(*gptr<u8>(0x570bu + r5_1)) << 0x1e;  // (from the original)
    r0 = res_1;
    if (res_1 >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    res_2 = u32(*gptr<u8>(r4_1 + 0x172u)) << 0x1e >> 0x1f;  // (from the original)
    if (res_2 == 0) {
        r0_2 = r4_1 + 0x1b4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_3 = call_0070e594(r0_2, r1, r2_1, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
    } else {
        r0_3 = 0x95bfdcu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_003117bc(r0_3, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0 == 8u) {
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_4 = r4_1 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0071a7ec(r0_4, r1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_6, r0_5, r2_3, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_005361a8(r0_7, r1_1, r2_4, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_8 != 0) {
        if (u32(*gptr<u8>(r0_8 + 0x1cu)) & 0x40u) {  // (from the original)
            r0_11 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            guest::cpu()->r[13] = r13;
            return r0_11;
        }
    }
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_10 = call_0076c440(r0_9, r1_2, r2_5, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    if (r0_10 == 0) {
        goto L_64d890;
    }
    r0_11 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_11;
L_64d890:;
    r0_12 = r4_1 + 0x3b4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_0071a820(r0_12, r1_2, r2_6, guest::cpu()->r[3]);
    r2_7 = guest::cpu()->r[2];
    r0_14 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_14, r0_13, r2_7, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_15 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_16 = call_005361a8(r0_15, r1_3, r2_8, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    if (r0_16 != 0) {
        res_3 = u32(*gptr<u8>(r0_16 + 0x1cu)) << 0x19;  // (from the original)
        r0_16 = res_3;
        if (res_3 >> 0x1f) {  // (from the original)
            r0_24 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_24;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_17 = call_0062f03c(r0_16, r1, r2_9, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    zf_1 = r0_17 == 3u;
    if (!zf_1) {
        zf_1 = r0_17 == 4u;
    }
    if (zf_1) {
        r0_24 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_24;
    }
    guest::cpu()->r[13] = r13;
    r0_18 = call_0062f03c(r0_17, r1, r2_10, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    zf_2 = r0_18 == 5u;
    if (!zf_2) {
        zf_2 = r0_18 == 6u;
    }
    if (zf_2) {
        r0_24 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_24;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_002fb378(r0_18, r1, r2_11, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r0_20 = u32(s32(s8(*gptr<u8>(r0_19 + 7u)))) - 0xau;  // (from the original)
    if (r0_20 >= 7u) {
        r0_24 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_24;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_002f74c8(r0_20, r1, r2_12, guest::cpu()->r[3]);
    r2_13 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_22 = call_002f74e0(0x40000u, r0_21, r2_13, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_22 != 0) {
        goto L_64d95c;
    }
    r0_23 = u32(s32(s8(*gptr<u8>(r0_19 + 4u))));
    if (r0_23 != 7u) {
        if (r0_23 == 8u) {
            goto L_64d95c;
        }
        if (r0_23 != 9u) {
            r0_24 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_24;
        }
    } else {
        if (s32(u32(s32(s8(*gptr<u8>(r0_19 + 5u))))) < s32(0x10u)) {  // (from the original)
            r0_24 = r13;
            r13 = r13 + 0x18u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0_24;
        }
        goto L_64d95c;
    }
    if (s32(u32(s32(s8(*gptr<u8>(r0_19 + 5u))))) > s32(0xfu)) {  // (from the original)
        r0_24 = r13;
        r13 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0_24;
    }
L_64d95c:;
    r1_4 = u32(*global_00aaef30);
    if (r1_4 == 0) {
        goto L_64d9a8;
    }
    if (r1_4 < 0x384u) {  // (from the original)
        *global_00aaef30 = u16(0u);
        goto L_64d9a8;
    }
    res_4 = r1_4 - 0x384u << 0x10 >> 0x10;  // (from the original)
    r1 = res_4;
    *global_00aaef30 = u16(r1);
    if (res_4 == 0) {
        goto L_64d9a8;
    }
    r0_24 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_24;
L_64d9a8:;
    r1_5 = r5_1 + 0x5700u;  // (from the original)
    *gptr<u8>(r1_5 + 0xbu) = u8(u32(*gptr<u8>(r1_5 + 0xbu)) | 2u);  // (from the original)
    r1 = 0x6978u;  // (from the original)
    *global_00aaef30 = u16(r1);
    r0_24 = r13;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_24;
}

}  // namespace d_0064d78c
GUEST_EXPORT(0x0064d78c, d_0064d78c::f_0064d78c);

// f_0064dd60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064dd60 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)

u32 f_0064dd60() {
    u32 r0_1 = 0;
    r0_1 = *global_0095c6d0;
    if (r0_1 != 0) {
        r0_1 = u32(*gptr<u8>(r0_1 + 0x1du));  // (from the original)
    }
    return r0_1;
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
    u32 r0 = arg0.addr();
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x171u;  // (from the original)
    res_1 = u32(arg0->byte_171) << 0x1a >> 0x1f;  // (from the original)
    r0_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r1 != 0) {
        r1_1 = u32(arg0->byte_179) | 4u;
        arg0->byte_179 = u8(r1_1);
        r0_2 = call_0058c19c(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_0058a8e0(r0_2, 5u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_1 = u32(*gptr<u8>(r4_1 + 8u));
    res_2 = r0_1 << 0x1c >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 == 0) {
        r0_3 = r0_1 | 8u;
        *gptr<u8>(r4_1 + 8u) = u8(r0_3);
    } else {
        goto L_64dde4;
    }
    r0_4 = call_0058c19c(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_1 = call_0058a1d8(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_64dde4:;
    *gptr<u8>(r0 + 0x170u) = u8(1u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_1;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r2_5 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_8 = 0;
    u32 zf_1 = 0;
    u32 r0_11 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r5_1 = r0;
    r4_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if ((u32(arg0->byte_174) & 1u) == 0) {
        goto L_64de54;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0068dc14(r5_1, 0x1000555u, 0u, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
L_64de4c:;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_64de54:;
    guest::cpu()->r[13] = r13;
    r0 = call_00650140(r1, r2, r3, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_64de4c;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_1, r0, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_00596ab0(r0_2, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fcb84(r0, 0xccu, r2_3, r3_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fcb84(r0, 0xc9u, r2_4, r3_4);  // (from the original)
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            goto L_64decc;
        }
    }
    guest::cpu()->r[13] = r13;
    call_0068dc14(r5_1, 0x1000616u, 0u, r3_4);  // (from the original)
    r1 = guest::cpu()->r[1];
    goto L_64df50;
L_64decc:;
    if (r4_1 != 0) {
        guest::cpu()->r[13] = r13;
        call_0068dc14(r5_1, 0x1000654u, 0u, r3_4);  // (from the original)
        r1 = guest::cpu()->r[1];
        goto L_64df50;
    }
    r1_2 = r13;
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_5, r1_2, r2_5, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_6 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_006ba118(r0_6, r1_3, r2_6, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcb34(r0_7, r1_4, r2_7, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fcb34(r0_9, r1_5, r2_8, r3_7);
    r3_8 = guest::cpu()->r[3];
    if (r0_8 == 0x3fu) {  // (from the original)
        goto L_64df60;
    }
    zf_1 = r0_8 == 0x3eu;  // (from the original)
    if (!zf_1) {
        zf_1 = r0_10 == 0x40u;  // (from the original)
    }
    if (zf_1) {
        goto L_64df60;
    }
    guest::cpu()->r[13] = r13;
    call_0068dc14(r5_1, 0x1000555u, 0u, r3_8);  // (from the original)
    r1 = guest::cpu()->r[1];
L_64df48:;
L_64df50:;
    r0_11 = r13;
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_11;
L_64df60:;
    guest::cpu()->r[13] = r13;
    call_0068dc14(r5_1, 0x1000616u, 0u, r3_8);  // (from the original)
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
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S0_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_005d43f4(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r3 != 0) {
        guest::cpu()->s[0] = S0_1;
        r0_1 = call_006c5c60(r0, 0u, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        S0_2 = guest::cpu()->s[0];
        *gptr<u32>(r0 + 4u) = u32(std::bit_cast<u32>(S0_2));
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
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
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fe8a8(r1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_1 == 0;
    if (!zf_1) {
        res_1 = r0_1 + 0x6bd0u;  // (from the original)
        zf_1 = res_1 == 0;
        r4 = res_1;
    }
    if (zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = call_006e0b2c(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r0_2 = call_001b76ec(r0, r1_2, r2_2, r3_2);
    }
    r3_3 = r0_2 ^ 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002bf814(r4, r0, 0u, r3_3);
}

}  // namespace d_0064f018
GUEST_EXPORT(0x0064f018, d_0064f018::f_0064f018);

// f_0064f068: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f068 {

inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline constexpr guest::Function<0x0076e6cc, u32(u32, u32, u32, u32)> call_0076e6cc;  // (from the original)

u32 f_0064f068(u32 r0, u32 r1) {
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = *global_0095c6d0;
    if (r4_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    r0_1 = call_0076e6cc(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != r0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return 0u;
    }
    if (r1 != 0x40u) {  // (from the original)
        if (u32(s32(s8(*gptr<u8>(r4_1 + 0x1cu)))) != r1) {  // (from the original)
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            return 0u;
        }
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return 1u;
}

}  // namespace d_0064f068
GUEST_EXPORT(0x0064f068, d_0064f068::f_0064f068);

// f_0064f0bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0bc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0bc(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 1u) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    if (r0_1 == 0) {
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_0064f0bc
GUEST_EXPORT(0x0064f0bc, d_0064f0bc::f_0064f0bc);

// f_0064f0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f0dc {

inline constexpr guest::Function<0x0062f03c, u32(u32, u32, u32, u32)> call_0062f03c;  // (from the original)

u32 f_0064f0dc(u32 r0) {
    u32 r0_1 = 0;
    u32 zf_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0062f03c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    zf_1 = r0_1 == 3u;
    if (!zf_1) {
        zf_1 = r0_1 == 4u;
    }
    if (zf_1) {
        r0_2 = 1u;
    } else {
        r0_2 = 0u;
    }
    guest::cpu()->r[13] += 8u;
    return r0_2;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    float S0_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    float S0_4 = 0;
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4_1 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_006a5e34(r0, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_1 == 0) {
        goto L_64f2ec;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_002feb00(r0_1, r2, r3, r4_1);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    if (r0_2 == 0) {
        goto L_64f2ec;
    }
    *gptr<u32>(r13) = u32(r4_1);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_3 = call_0059a9ac(r1, r0_2, r2, r3);
    r1_1 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_3;
L_64f2ec:;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    call_006a5f0c(r1, r2, r3, r3_1);
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_4 = call_006c602c(r2, r3, 0u, r3_2);
    r1_2 = guest::cpu()->r[1];
    S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r1 + 4u) = u32(std::bit_cast<u32>(S0_4));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_4;
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
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 zf_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(arg0->byte_1ac);
    r0_2 = call_002fe8a8(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    zf_1 = r0_2 == 0;
    if (!zf_1) {
        res_1 = r0_2 + 0x6bd0u;  // (from the original)
        zf_1 = res_1 == 0;
        r5 = res_1;
    }
    r1_1 = 0u;
    if (!zf_1) {
        r0_3 = call_006e0b2c(r0_2, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r0_3 = call_001b76ec(r1, r1_2, r2_2, r3_2);
        }
        r3_3 = r0_3 ^ 1u;
        r0_4 = call_002bf814(r5, r1, 0u, r3_3);
        r1_1 = r0_4;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r1_1;
}

}  // namespace d_0064f314
GUEST_EXPORT(0x0064f314, d_0064f314::f_0064f314);

// f_0064f3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0064f3b4 {

inline constexpr guest::Function<0x00584134, u32(u32, u32, u32, u32)> call_00584134;  // (from the original)
inline constexpr guest::Function<0x0058c514, u32(u32, u32, u32, u32)> call_0058c514;  // (from the original)

u32 f_0064f3b4(gptr<SlotObject> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    res_1 = u32(u8(arg0->flags_171)) << 0x1a >> 0x1f;  // (from the original)
    r1_1 = res_1;
    if (res_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r6_1 = r0 + 0x17du;  // (from the original)
    r5_1 = r1 & 7u;
    if (r1 < 0x32u) {  // (from the original)
        r0 = lsr_r(u32(*gptr<u8>(r6_1 + (r1 >> 3))), r5_1 & 0xff);  // (from the original)
        if ((r0 & 1u) != 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0;
        }
    }
    r0_1 = call_00584134(r0, r1_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0 = call_0058c514(r0_1, r1, r2_1, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r1 >= 0x32u) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r0 = r6_1 + (r1 >> 3);
    r1_1 = u32(*gptr<u8>(r0)) | lsl_r(1u, r5_1 & 0xff);  // (from the original)
    *gptr<u8>(r0) = u8(r1_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0;
}

}  // namespace d_0064f3b4
GUEST_EXPORT(0x0064f3b4, d_0064f3b4::f_0064f3b4);
