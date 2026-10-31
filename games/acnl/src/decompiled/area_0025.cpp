// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00250334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250334 {

inline constexpr guest::Function<0x00277fe4, u32(u32, u32, u32, u32)> call_00277fe4;  // (from the original)

u32 f_00250334(u32 r0, u32 r1, float S0) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    r0 = call_00277fe4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x250350u));  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 0xc0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0xc4u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00250334
GUEST_EXPORT(0x00250334, d_00250334::f_00250334);

// f_00250354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250354 {

inline constexpr guest::Function<0x001e5894, u32(u32, u32, u32, u32)> call_001e5894;  // (from the original)
inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_00250354(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e5894(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r13;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0020a4cc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u8>(r4 + 0x5cu) = u8(r0);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00250354
GUEST_EXPORT(0x00250354, d_00250354::f_00250354);

// f_002503b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002503b0 {

inline constexpr guest::Function<0x0081fe54, u32(u32, u32, u32, u32)> call_0081fe54;  // (from the original)

u32 f_002503b0() {
    guest::cpu()->r[13] -= 8u;
    call_0081fe54(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_002503b0
GUEST_EXPORT(0x002503b0, d_002503b0::f_002503b0);

// f_002504d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002504d4 {

inline constexpr guest::Function<0x00820110, u32(u32, u32, u32, u32)> call_00820110;  // (from the original)

u32 f_002504d4() {
    guest::cpu()->r[13] -= 8u;
    call_00820110(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_002504d4
GUEST_EXPORT(0x002504d4, d_002504d4::f_002504d4);

// f_00250510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250510 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00250510(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0020af18(r0, r1, r2, r3);
    r3 = 1u;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x8f8d88u);  // (from the original)
    r0 = r0 + 0x44u;  // (from the original)
    r1 = 0x131800u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = 0x1287a8u;  // (from the original)
    r0 = r0 + 4u;
    r3 = 1u;
    r2 = 0x14u;  // (from the original)
    r0 = call_00301d0c(r0, r1, r2, r3);
    r0 = r0 - 0x48u;  // (from the original)
    r1 = 0u;
    *gptr<u8>(r0 + 0x5cu) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00250510
GUEST_EXPORT(0x00250510, d_00250510::f_00250510);

// f_00250560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250560 {

struct __attribute__((packed)) Object_00250560_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00250560_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00250560(gptr<Object_00250560_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_0 = u32(0x8f8d88u);  // (from the original)
    r0 = r4 + 0x44u;  // (from the original)
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_0020aedc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x44u;  // (from the original)
    r5 = r0;
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = 0x137d74u;  // (from the original)
    r0 = r5;
    r3 = 1u;
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00250560
GUEST_EXPORT(0x00250560, d_00250560::f_00250560);

// f_00250b34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250b34 {

inline constexpr guest::Function<0x002933cc, u32(u32, u32, u32, u32)> call_002933cc;  // (from the original)

u32 f_00250b34(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_002933cc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = 0x94ee2cu;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r0 + 8u) = u32(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00250b34
GUEST_EXPORT(0x00250b34, d_00250b34::f_00250b34);

// f_00250b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00250b58 {

inline constexpr guest::Function<0x0014f7fc, u32(u32, u32, u32, u32)> call_0014f7fc;  // (from the original)
inline constexpr guest::Function<0x0014f9b4, u32(u32, u32, u32, u32)> call_0014f9b4;  // (from the original)
inline constexpr guest::Function<0x0014f9bc, u32(u32, u32, u32, u32)> call_0014f9bc;  // (from the original)
inline constexpr guest::Function<0x001de7f8, u32(u32, u32, u32, u32)> call_001de7f8;  // (from the original)
inline constexpr guest::Function<0x0024da38, u32(u32, u32, u32, u32)> call_0024da38;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00317ee0, u32(u32, u32, u32, u32)> call_00317ee0;  // (from the original)
inline constexpr guest::Function<0x0057b9dc, u32(u32, u32, u32, u32)> call_0057b9dc;  // (from the original)
inline constexpr guest::Function<0x005c2ce0, u32(u32, u32, u32, u32)> call_005c2ce0;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x006c5fa0, u32(u32, u32, u32, u32)> call_006c5fa0;  // (from the original)
inline constexpr guest::Function<0x006f9638, u32(u32, u32, u32, u32)> call_006f9638;  // (from the original)
inline constexpr guest::Function<0x006fa728, u32(u32, u32, u32, u32)> call_006fa728;  // (from the original)
inline constexpr guest::Function<0x006fb0cc, u32(u32, u32, u32, u32)> call_006fb0cc;  // (from the original)

u32 f_00250b58(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
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
    r13 = r13 - 0x38u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006fb0cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006fa728(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r0 = (r0 + (r0 << 1) << 2) + (r4 << 1);
    if (u32(r0 >= 0x26u) && !u32(r0 == 0x26u)) {  // (from the original)
        r0 = 0u;
    }
    r5 = r0 + 0x5cu;  // (from the original)
    r4 = 0u;
    do {
L_250b9c:;
        r0 = r5 + r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_006268f8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        r0 = *gptr<u32>(r0);
        r1 = r6 + (r4 << 2);
        r4 = r4 + 1u;
        *gptr<u32>(r1 + 0x138u) = u32(r0);  // (from the original)
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006f9638(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006fb0cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r8 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006fa728(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = r4;
    r0 = r0 + 0x5d880u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00317ee0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0024da38(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r10 = 0x887212u;  // (from the original)
    r4 = 0u;
    r11 = r0;
    r9 = r4;
L_250c20:;
    r2 = r4;
    r1 = r8;
    r0 = r11;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_001de7f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_250d28;
    }
    r5 = r6 + (r4 << 2);
    r2 = u32(*gptr<u8>(r5 + 0x139u));  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(float(std::bit_cast<u32>(std::bit_cast<float>((u32(*gptr<u8>(r5 + 0x138u)) >> 6) + (r2 << 2) << 2)))));  // (from the original)
    S0 = float(std::bit_cast<u32>(std::bit_cast<float>(u32(*gptr<u8>(r5 + 0x13au)) + ((u32(*gptr<u8>(r5 + 0x13bu)) & 3u) << 8) << 2)));  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    res = u32(*gptr<u8>(r5 + 0x138u)) << 0x1a >> 0x1c;  // (from the original)
    if (res != 0) {
        goto L_250cc0;
    }
    r1 = 1u;
    r0 = 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005c2ce0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    if (r0 == 0) {
        goto L_250cc0;
    }
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0));
    *gptr<u32>(r13 + 8u) = u32(*gptr<u32>(r0 + 4u));
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r0 + 8u));  // (from the original)
L_250cc0:;
    r1 = 0u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_006c5fa0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r2 = 0u;
    r1 = u32(*gptr<u8>(r5 + 0x138u)) << 0x1a >> 0x1c;  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0014f9b4(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r2 = r0;
    *gptr<u32>(r13) = u32(r9);
    r0 = u32(*gptr<u16>(r10));
    r3 = r13 + 4u;
    r1 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0057b9dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r7 = r0;
    ea = r5 + 0x140u;  // (from the original)
    r5 = ea;
    r0 = *gptr<u32>(ea);
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0014f7fc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
    }
    if (r7 == 0) {
        goto L_250d28;
    }
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0014f9bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_250d28:;
    r4 = r4 + 1u;
    if (r4 < 2u) {
        guest::preempt();
        goto L_250c20;
    }
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_00250b58
GUEST_EXPORT(0x00250b58, d_00250b58::f_00250b58);

// f_00251690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251690 {

struct __attribute__((packed)) Object_00251690_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Object_00251690_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00251690_0, word_38, 0x38);  // (from the original)


u32 f_00251690(gptr<Object_00251690_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r3 = 0;
    u32 r12 = 0;
    r12 = 0x846510u;  // (from the original)
    r3 = arg0->word_34;
    r1 = *gptr<u32>(r12 + 0x14u);  // (from the original)
    if (r3 == *gptr<u32>(r12 + 0x10u)) {  // (from the original)
        if (r3 == 0) {
            if (((arg0->word_38 | r1) & 1u) == 0) {
                r0 = 1u;
                guest::cpu()->r[1] = r1;
                return r0;
            }
        }
        if (*gptr<u32>(r0 + 0x38u) == r1) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    r1 = *gptr<u32>(r12 + 4u);
    if (r3 != *gptr<u32>(r12)) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((*gptr<u32>(r0 + 0x38u) | r1) & 1u) == 0) {  // (from the original)
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x38u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251690
GUEST_EXPORT(0x00251690, d_00251690::f_00251690);

// f_00251818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251818 {

struct __attribute__((packed)) Object_00251818_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Object_00251818_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_00251818_0, word_38, 0x38);  // (from the original)


u32 f_00251818(gptr<Object_00251818_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x846510u;  // (from the original)
    r3 = arg0->word_34;
    r2 = *gptr<u32>(r1 + 0x10u);  // (from the original)
    r1 = *gptr<u32>(r1 + 0x14u);  // (from the original)
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_38 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x38u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251818
GUEST_EXPORT(0x00251818, d_00251818::f_00251818);

// f_00251868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251868 {

inline constexpr guest::Function<0x00817694, u32(u32, u32, u32, u32)> call_00817694;  // (from the original)

u32 f_00251868(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0 = r0 + 0x28u;  // (from the original)
    r1 = *gptr<u32>(0x846530u);  // (from the original)
    r2 = *gptr<u32>(0x846530u + 4);  // (from the original)
    r0 = call_00817694(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251868
GUEST_EXPORT(0x00251868, d_00251868::f_00251868);

// f_002518f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002518f4 {

struct __attribute__((packed)) Object_002518f4_2 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_002518f4_2, byte_846bcb, 0x846bcb);  // (from the original)

inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_002518f4(u32 r0_unused, u32 r1, gptr<Object_002518f4_2> arg2) {
    u32 r0 = 0;
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r1;
    r0 = u32(arg2->byte_846bcb);
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_007795ec(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002518f4
GUEST_EXPORT(0x002518f4, d_002518f4::f_002518f4);

// f_0025191c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025191c {


u32 f_0025191c(u32 r0, u32 r1) {
    r1 = r1 + (r1 << 5);
    r0 = r0 + (r1 << 3) + 0x128u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0025191c
GUEST_EXPORT(0x0025191c, d_0025191c::f_0025191c);

// f_00251938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251938 {

struct __attribute__((packed)) Object_00251938_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00251938_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00251938_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00251938_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x006162e0, u32(u32, u32, u32, u32)> call_006162e0;  // (from the original)

u32 f_00251938(u32 r0, u32 r1, gptr<Object_00251938_2> arg2, u32 r3) {
    u32 r2 = arg2.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r1 = r0 + ((r1 << 4) - r1 << 4);
    r4 = r3;
    if (u32(*gptr<u8>(r1 + 0x3fau)) != 2u) {  // (from the original)
        r0 = 0u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    arg2->word_0 = u32(*gptr<u32>(r1 + 0x3a8u));  // (from the original)
    r3 = *gptr<u32>(r1 + 0x3acu);  // (from the original)
    arg2->word_4 = u32(r3);
    arg2->word_8 = u32(*gptr<u32>(r1 + 0x3b0u));  // (from the original)
    r1 = u32(*gptr<u8>(r1 + 0x3f8u));  // (from the original)
    r2 = 0u;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006162e0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00251938
GUEST_EXPORT(0x00251938, d_00251938::f_00251938);

// f_00251c24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251c24 {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_00251c24(u32 r0, u32 r1) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = call_00300904(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_251ca0;
    }
    r0 = r4 + (r5 + (r5 << 1) << 1) + 0xe4u;  // (from the original)
    r4 = 0u;
    res = u32(*gptr<u8>(r0 + 5u)) << 0x19;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_251c9c;
    }
    r1 = u32(*gptr<u8>(r0 + 3u));
    r0 = u32(*gptr<u8>(r0 + 4u)) & 3u;
    r1 = r1 >> 7;
    r5 = r1 + (r0 << 1);
    if (r5 != 4u) {
        r0 = call_00305f44(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r5 == r0) {
            goto L_251c98;
        }
        goto L_251c9c;
    }
    r0 = call_0061a7a0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_251c9c;
    }
L_251c98:;
    r4 = 1u;
L_251c9c:;
    r0 = r4;
L_251ca0:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251c24
GUEST_EXPORT(0x00251c24, d_00251c24::f_00251c24);

// f_00251f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251f14 {

inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_00251f14(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r6 = r1;
    r7 = r0;
    r8 = r1 + (r6 << 1);
    r5 = r0 + (r8 << 1);
    r4 = r5 + 0xe4u;  // (from the original)
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r0 & 6u;
    res = r6 - 8u;
    *gptr<u8>(r4 + 3u) = u8(u32(*gptr<u8>(r4 + 3u)) & ~0x80u | r0 << 7);  // (from the original)
    *gptr<u8>(r4 + 4u) = u8(u32(*gptr<u8>(r4 + 4u)) & ~3u | r2 >> 1);
    r1 = u32(*gptr<u8>(r5 + 0xe9u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r5 + 0xe9u) = u8(r1);  // (from the original)
    if (res >> 0x1f != ((r6 ^ 8u) & (r6 ^ res)) >> 0x1f) {  // (from the original)
        r1 = r5 + 0xe4u;  // (from the original)
        r2 = 1u;
        r0 = u32(*gptr<u8>(0x846bcbu + r6));  // (from the original)
        r0 = call_0062512c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    r0 = *gptr<u32>(r7 + (r8 << 3) + 0x24u);  // (from the original)
    if (r0 != 0) {
        r1 = *gptr<u32>(*gptr<u32>(r0) + 0xacu);  // (from the original)
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return guest::call_address<u32>(r1, r0, r1, r2, guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251f14
GUEST_EXPORT(0x00251f14, d_00251f14::f_00251f14);

// f_00251fa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00251fa4 {

struct __attribute__((packed)) Object_00251fa4_1 {
    u8 unknown_0[0x846bcb];  // (not used here)
    u8 byte_846bcb;
};
GUEST_OFFSET(Object_00251fa4_1, byte_846bcb, 0x846bcb);  // (from the original)

inline constexpr guest::Function<0x0062512c, u32(u32, u32, u32, u32)> call_0062512c;  // (from the original)

u32 f_00251fa4(u32 r0, gptr<Object_00251fa4_1> arg1, u32 r2) {
    u32 res = 0;
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    r3 = r1 + (r1 << 1);
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r2;
    r2 = r0 + (r3 << 1);
    res = u32(*gptr<u8>(r2 + 0xe9u)) << 0x19;  // (from the original)
    if (!(res >> 0x1f)) {  // (from the original)
        goto L_25202c;
    }
    r0 = r0 + (r3 << 3);
    r4 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    res = r1 - 8u;
    *gptr<u8>(r2 + 0xe7u) = u8(u32(*gptr<u8>(r2 + 0xe7u)) & ~0x80u);  // (from the original)
    *gptr<u8>(r2 + 0xe8u) = u8(u32(*gptr<u8>(r2 + 0xe8u)) & ~3u | 2u);  // (from the original)
    r3 = u32(*gptr<u8>(r2 + 0xe9u)) & ~0x40u;  // (from the original)
    *gptr<u8>(r2 + 0xe9u) = u8(r3);  // (from the original)
    if (res >> 0x1f != ((r1 ^ 8u) & (r1 ^ res)) >> 0x1f) {  // (from the original)
        r0 = u32(arg1->byte_846bcb);
        r1 = r2 + 0xe4u;  // (from the original)
        r2 = 1u;
        r0 = call_0062512c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    if (r4 == 0) {
        goto L_25202c;
    }
    r1 = r5 & 0xffu;  // (from the original)
    r2 = *gptr<u32>(*gptr<u32>(r4) + 0xb0u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return guest::call_address<u32>(r2, r0, r1, r2, r3);
L_25202c:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00251fa4
GUEST_EXPORT(0x00251fa4, d_00251fa4::f_00251fa4);

// f_00252034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00252034 {

struct __attribute__((packed)) Object_00252034_0 {
    u8 unknown_0[0x11b8];  // (not used here)
    u32 word_11b8;
    u8 unknown_11bc[0x4];  // (not used here)
    u32 word_11c0;
    u8 unknown_11c4[0xd];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(Object_00252034_0, word_11b8, 0x11b8);  // (from the original)
GUEST_OFFSET(Object_00252034_0, word_11c0, 0x11c0);  // (from the original)
GUEST_OFFSET(Object_00252034_0, byte_11d1, 0x11d1);  // (from the original)

struct __attribute__((packed)) Object_00252034_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00252034_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00252034_1, word_8, 0x8);  // (from the original)


u32 f_00252034(gptr<Object_00252034_0> arg0, gptr<Object_00252034_1> arg1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S2 = 0;
    if (u32(arg0->byte_11d1) != 2u) {
        r0 = 0u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    S2 = S0 * S0;
    S0 = std::bit_cast<float>(arg1->word_0) - std::bit_cast<float>(arg0->word_11b8);
    S1 = std::bit_cast<float>(arg1->word_8) - std::bit_cast<float>(arg0->word_11c0);
    S0 = S0 * S0 + S1 * S1;
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S0);  // (from the original)
    if (!(fpsr >> 0x1e & 1) && fpsr >> 0x1f == (fpsr >> 0x1c & 1)) {  // (from the original)
        r0 = 1u;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = 0u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00252034
GUEST_EXPORT(0x00252034, d_00252034::f_00252034);

// f_002520fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002520fc {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)
inline constexpr guest::Function<0x006268f8, u32(u32, u32, u32, u32)> call_006268f8;  // (from the original)
inline constexpr guest::Function<0x007795ec, u32(u32, u32, u32, u32)> call_007795ec;  // (from the original)

u32 f_002520fc(u32 r0, u32 r1, u32 r2) {
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
    r6 = 0u;
    r5 = r0;
    r8 = 1u;
    r4 = r6;
    r10 = 0x846bcbu;  // (from the original)
L_252114:;
    guest::cpu()->r[13] = r13;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2521bc;
    }
    r7 = 0u;
    r9 = r5 + (r4 + (r4 << 1) << 1);
    r6 = r7;
    r0 = r9 + 0xe4u;  // (from the original)
    res = u32(*gptr<u8>(r9 + 0xe9u)) << 0x19;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_252178;
    }
    r2 = u32(*gptr<u8>(r0 + 4u));
    r0 = u32(*gptr<u8>(r0 + 3u)) >> 7;
    r1 = r2 & 3u;
    r11 = r0 + (r1 << 1);
    if (r11 == 4u) {
        goto L_2521a4;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r11 != r0) {
        goto L_252178;
    }
L_252174:;
    r7 = 1u;
L_252178:;
    if ((r7 ^ 1u) == 0) {
        goto L_2521bc;
    }
    r0 = u32(*gptr<u8>(r10 + r4));
    guest::cpu()->r[13] = r13;
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r9 + 0xe4u;  // (from the original)
    r1 = r0;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r8 = 0u;
    goto L_252210;
L_2521a4:;
    guest::cpu()->r[13] = r13;
    r0 = call_0061a7a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        r6 = 1u;
        guest::preempt();
        goto L_252178;
    }
    guest::preempt();
    goto L_252174;
L_2521bc:;
    if (r8 == 0) {
        goto L_252210;
    }
    r7 = r5 + (r4 + (r4 << 1) << 1);
    r2 = u32(*gptr<u8>(r7 + 0xe8u));  // (from the original)
    r1 = r2 & 3u;
    if ((u32(*gptr<u8>(r7 + 0xe7u)) >> 7) + (r1 << 1) != 4u) {  // (from the original)
        goto L_252210;
    }
    if (u32(*gptr<u8>(r5 + r4 + 0x114u)) == 0) {  // (from the original)
        goto L_252210;
    }
    r0 = u32(*gptr<u8>(r10 + r4));
    guest::cpu()->r[13] = r13;
    r0 = call_006268f8(r0, r1, r2, guest::cpu()->r[3]);
    r2 = r7 + 0xe4u;  // (from the original)
    r1 = r0;
    r0 = r2;
    guest::cpu()->r[13] = r13;
    r0 = call_007795ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
L_252210:;
    r0 = r5 + r4;
    r4 = r4 + 1u;
    *gptr<u8>(r0 + 0x114u) = u8(r6);  // (from the original)
    if (r4 < 8u) {
        guest::preempt();
        goto L_252114;
    }
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002520fc
GUEST_EXPORT(0x002520fc, d_002520fc::f_002520fc);

// f_0025244c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025244c {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00305f2c, u32(u32, u32, u32, u32)> call_00305f2c;  // (from the original)
inline constexpr guest::Function<0x00615934, u32(u32, u32, u32, u32)> call_00615934;  // (from the original)
inline constexpr guest::Function<0x00615bcc, u32(u32, u32, u32, u32)> call_00615bcc;  // (from the original)
inline constexpr guest::Function<0x00616058, u32(u32, u32, u32, u32)> call_00616058;  // (from the original)
inline constexpr guest::Function<0x006166dc, u32(u32, u32, u32, u32)> call_006166dc;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x007701f8, u32(u32, u32, u32, u32)> call_007701f8;  // (from the original)

u32 f_0025244c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x48u;  // (from the original)
    r4 = r0;
    r8 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00305f2c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 != 3u) {
        goto L_25268c;
    }
    r6 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(0x27u);  // (from the original)
    r2 = r8;
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r6);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00616c68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x28u;  // (from the original)
    }
    if (!zf) {
        goto L_25268c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_252690;
    }
    *gptr<u32>(r13 + 0x10u) = u32(r0 + 0x6c20u);  // (from the original)
    r1 = 0x86a2c8u;  // (from the original)
    r0 = u32(*gptr<u8>(r1 + (r8 + (r8 << 1) + (r8 << 4) << 2) + 0x18u));  // (from the original)
    if (r0 >= 5u) {
        r7 = 0u;
    } else {
        r7 = 1u;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_00615934(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (*gptr<u32>(r13 + 0x1cu) == 0x28u) {  // (from the original)
        r0 = r4 + 0x12f8u;  // (from the original)
        goto L_252508;
    }
    if (r7 == 0) {
        r0 = r4 + 0x12f7u;  // (from the original)
    } else {
        r0 = r4 + 0x12f6u;  // (from the original)
    }
L_252508:;
    r2 = u32(*gptr<u8>(r0));
    r10 = r4 + 0x12f9u;  // (from the original)
    r11 = r4 + 0x12fcu;  // (from the original)
    r9 = r4 + 0x12ffu;  // (from the original)
    if (r2 == r1) {
        goto L_252644;
    }
    *gptr<u8>(r0) = u8(r1);
    if (*gptr<u32>(r13 + 0x1cu) == 0x27u) {  // (from the original)
        goto L_2525a4;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00616058(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_006166dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r9;
L_252554:;
    r0 = r6;
    r6 = 0u;
    *gptr<u32>(r13 + 0x18u) = u32(r0);  // (from the original)
    r4 = r6;
    *gptr<u32>(r13) = u32(0x27u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r0);
    *gptr<u32>(r13 + 8u) = u32(r0);
    *gptr<u32>(r13 + 0xcu) = u32(r0);  // (from the original)
L_252578:;
    r2 = u32(*gptr<u8>(r5 + r4));
    if (r2 >= 0x6bu) {  // (from the original)
        goto L_252638;
    }
    r1 = r13;
    r0 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00616c68(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13);
    zf = r0 == 0x27u;  // (from the original)
    if (!zf) {
        zf = r0 == 0x28u;  // (from the original)
    }
    if (!zf) {
        goto L_252638;
    }
    goto L_2525d4;
L_2525a4:;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00615bcc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 == 0) {
        r5 = r11;
    } else {
        r5 = r10;
    }
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_006166dc(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_252554;
L_2525d4:;
    r1 = r0 & 0xffu;  // (from the original)
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r2 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007701f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_252638;
    }
    r6 = r6 + 1u;
    *gptr<u32>(r13 + 4u + (r4 << 2)) = u32(1u);
    if (r4 != 2u) {
        goto L_252638;
    }
    r0 = 0u;
    if (r6 == 1u) {
        goto L_252628;
    }
    if (r6 != 2u) {
        goto L_252628;
    }
    r0 = *gptr<u32>(r13 + 4u);
    if (r0 != 0) {
        r0 = 1u;
    }
L_252628:;
    r1 = u32(*gptr<u8>(r5 + r0));
    *gptr<u8>(r5 + r0) = u8(u32(*gptr<u8>(r5 + 2u)));
    *gptr<u8>(r5 + 2u) = u8(r1);
L_252638:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_252578;
    }
L_252644:;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (r0 != 0x28u) {  // (from the original)
        if (r7 == 0) {
            r9 = r11;
        } else {
            r9 = r10;
        }
    }
    r1 = u32(*gptr<u8>(r9));
    zf = r1 == r8;
    if (!zf) {
        r1 = u32(*gptr<u8>(r9 + 1u));
        zf = r1 == r8;
    }
    if (zf) {
        goto L_25268c;
    }
    r3 = r13 + 0x10u;  // (from the original)
    r1 = r0 & 0xffu;  // (from the original)
    r0 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_007701f8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_252690;
    }
L_25268c:;
    r0 = 1u;
L_252690:;
    r13 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025244c
GUEST_EXPORT(0x0025244c, d_0025244c::f_0025244c);

// f_00252850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00252850 {

struct __attribute__((packed)) Object_00252850_0 {
    u8 unknown_0[0x11d1];  // (not used here)
    u8 byte_11d1;
};
GUEST_OFFSET(Object_00252850_0, byte_11d1, 0x11d1);  // (from the original)


u32 f_00252850(gptr<Object_00252850_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = r0 + 0x1000u;  // (from the original)
    r0 = 3u;
    arg0->byte_11d1 = u8(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00252850
GUEST_EXPORT(0x00252850, d_00252850::f_00252850);

// f_0025286c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025286c {

inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> call_00300904;  // (from the original)
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> call_00305f44;  // (from the original)
inline constexpr guest::Function<0x0061a7a0, u32(u32, u32, u32, u32)> call_0061a7a0;  // (from the original)

u32 f_0025286c(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r4 = r0;
    r6 = r1;
    r5 = r2;
    r0 = call_00300904(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2528e0;
    }
    r0 = r4 + (r6 + (r6 << 1) << 1) + 0xe4u;  // (from the original)
    r4 = 0u;
    r6 = r4;
    res = u32(*gptr<u8>(r0 + 5u)) << 0x19;  // (from the original)
    r1 = res;
    if (res >> 0x1f) {  // (from the original)
        goto L_2528d4;
    }
    r2 = u32(*gptr<u8>(r0 + 4u));
    r0 = u32(*gptr<u8>(r0 + 3u)) >> 7;
    r1 = r2 & 3u;
    r7 = r0 + (r1 << 1);
    if (r7 == 4u) {
        goto L_2528e4;
    }
    r0 = call_00305f44(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r7 != r0) {
        goto L_2528d4;
    }
L_2528d0:;
    r4 = 1u;
L_2528d4:;
    r0 = r4 ^ 1u;
    if (r5 != 0) {
        *gptr<u8>(r5) = u8(r6);
    }
L_2528e0:;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2528e4:;
    r0 = call_0061a7a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r6 = 1u;
        guest::preempt();
        goto L_2528d4;
    }
    guest::preempt();
    goto L_2528d0;
}

}  // namespace d_0025286c
GUEST_EXPORT(0x0025286c, d_0025286c::f_0025286c);

// f_00253bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00253bc4 {


u32 f_00253bc4() {
    u32 r0 = 0;
    r0 = *gptr<u32>(0x94f268u);  // (from the original)
    if (r0 != 0) {
        r0 = u32(*gptr<u8>(r0 + 0x118au));  // (from the original)
    }
    return r0;
}

}  // namespace d_00253bc4
GUEST_EXPORT(0x00253bc4, d_00253bc4::f_00253bc4);

// f_002549b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002549b4 {

struct __attribute__((packed)) Object_002549b4_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_002549b4_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_002549b4_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_002549b4_2, word_0, 0x0);  // (from the original)


u32 f_002549b4(u32 r0, gptr<Object_002549b4_1> arg1, gptr<Object_002549b4_2> arg2, u32 r3) {
    if (r3 >= 0xfu) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    r0 = r0 + ((r3 << 4) - r3 << 4);
    if (u32(*gptr<u8>(r0 + 0x3fau)) == 0) {  // (from the original)
        r0 = 0u;
        return r0;
    }
    arg1->word_0 = u32(u32(*gptr<u8>(r0 + 0x3fbu)));  // (from the original)
    arg2->word_0 = u32(u32(*gptr<u8>(r0 + 0x3fcu)));  // (from the original)
    r0 = 1u;
    return r0;
}

}  // namespace d_002549b4
GUEST_EXPORT(0x002549b4, d_002549b4::f_002549b4);

// f_002549f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002549f0 {

inline constexpr guest::Function<0x0056cce4, u32(u32, u32, u32, u32)> call_0056cce4;  // (from the original)
inline constexpr guest::Function<0x00615bcc, u32(u32, u32, u32, u32)> call_00615bcc;  // (from the original)
inline constexpr guest::Function<0x00616058, u32(u32, u32, u32, u32)> call_00616058;  // (from the original)
inline constexpr guest::Function<0x0062f04c, u32(u32, u32, u32, u32)> call_0062f04c;  // (from the original)

u32 f_002549f0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r6 = r0;
    r7 = r1;
    r10 = 0x846bc8u;  // (from the original)
    r5 = *gptr<u32>(r13 + 0x30u);  // (from the original)
    r9 = r2;
    r8 = r3;
    r4 = 0u;
L_254a14:;
    r1 = *gptr<u32>(r5 + 4);
    r2 = *gptr<u32>(r5 + 8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r5));
    *gptr<u32>(r13 + 4) = u32(r1);
    *gptr<u32>(r13 + 8) = u32(r2);
    r0 = r13;
    r1 = u32(s32(s8(*gptr<u8>(r10 + r4))));
    guest::cpu()->r[13] = r13;
    r0 = call_0056cce4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r7 != 0) {
        r1 = r13;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_00615bcc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        goto L_254a54;
    }
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_00616058(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_254a54:;
    r2 = u32(*gptr<u8>(r0));
    if (r2 == r6) {
        r0 = 1u;
    } else {
        r1 = u32(*gptr<u16>(r0 + 2u));
        if (r1 != 0x64u) {  // (from the original)
            r0 = r0 + 4u;
            guest::preempt();
            goto L_254a54;
        }
        r0 = 0u;
    }
    if ((r0 & r8) != 0) {
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_0062f04c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        zf = r0 == 3u;
        if (!zf) {
            zf = r0 == 4u;
        }
        if (zf) {
            goto L_254ab0;
        }
        zf = r0 == 5u;
        if (!zf) {
            zf = r0 == 6u;
        }
        if (zf) {
            goto L_254ab0;
        }
        goto L_254abc;
    }
    if (r0 == 0) {
        goto L_254abc;
    }
L_254ab0:;
    r0 = 1u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_254abc:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_254a14;
    }
    r0 = 0u;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002549f0
GUEST_EXPORT(0x002549f0, d_002549f0::f_002549f0);

// f_0025591c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025591c {

inline constexpr guest::Function<0x0025577c, u32(u32, u32, u32, u32)> call_0025577c;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)

u32 f_0025591c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002fcb34(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0 != 0x27u) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r4;
    r0 = call_002ffad8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    r0 = r0 & 0xffu;  // (from the original)
    return call_0025577c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0025591c
GUEST_EXPORT(0x0025591c, d_0025591c::f_0025591c);

// f_0025594c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025594c {


u32 f_0025594c(u32 r0, u32 r1) {
    r1 = r1 + (r1 << 1);
    r0 = *gptr<u32>(r0 + (r1 << 3) + 0x24u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0025594c
GUEST_EXPORT(0x0025594c, d_0025594c::f_0025594c);

// f_00255dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255dfc {

inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> call_00255f1c;  // (from the original)

u32 f_00255dfc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r1;
    r1 = 0x94f4f0u;  // (from the original)
    r12 = *gptr<u32>(r1);
    if (r12 == 0) {
        r0 = 0u;
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = r0;
    *gptr<u32>(r13) = u32(r2);
    r3 = 1u;
    r2 = r4;
    r0 = r12 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00255f1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00255dfc
GUEST_EXPORT(0x00255dfc, d_00255dfc::f_00255dfc);

// f_00255e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255e38 {

inline constexpr guest::Function<0x00255f1c, u32(u32, u32, u32, u32)> call_00255f1c;  // (from the original)

u32 f_00255e38(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r2 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    r12 = *gptr<u32>(0x94f4f0u);  // (from the original)
    if (r12 == 0) {
        r0 = 0u;
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    *gptr<u32>(r13) = u32(r1);
    r1 = r0;
    r3 = 1u;
    r2 = 0u;
    r0 = r12 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00255f1c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00255e38
GUEST_EXPORT(0x00255e38, d_00255e38::f_00255e38);

// f_00255ebc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255ebc {

inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> call_006dc248;  // (from the original)

u32 f_00255ebc(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(r13 + 8u);
    r3 = r13 + 0x14u;  // (from the original)
    r2 = r13 + 0x10u;  // (from the original)
    r1 = r13 + 0xcu;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006dc248(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (*gptr<u32>(r13 + 4u) >> 0x1f != 0u) {  // (from the original)
        r4 = 0u;
    }
    if (u32(*gptr<u8>(r13 + 8u)) != 0) {
        r0 = 0x50u;  // (from the original)
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    if (r4 == 0) {
        r0 = 0x4au;  // (from the original)
    } else {
        r0 = 0x56u;  // (from the original)
    }
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00255ebc
GUEST_EXPORT(0x00255ebc, d_00255ebc::f_00255ebc);

// f_00255f1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00255f1c {

struct __attribute__((packed)) Object_00255f1c_0 {
    u8 unknown_0[0xec];  // (not used here)
    u8 byte_ec;
    u8 unknown_ed[0x17];  // (not used here)
    u8 byte_104;
    u8 byte_105;
};
GUEST_OFFSET(Object_00255f1c_0, byte_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_00255f1c_0, byte_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_00255f1c_0, byte_105, 0x105);  // (from the original)

inline constexpr guest::Function<0x002d5bc8, u32(u32, u32, u32, u32)> call_002d5bc8;  // (from the original)
inline constexpr guest::Function<0x006dc248, u32(u32, u32, u32, u32)> call_006dc248;  // (from the original)

u32 f_00255f1c(gptr<Object_00255f1c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r6 = r1;
    r1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    r8 = r2;
    r7 = r3;
    if (u32(arg0->byte_ec) != 0) {
        r0 = 0u;
        goto L_256014;
    }
    r9 = 0u;
    arg0->byte_105 = u8(r9);
    r5 = r4 + 0x100u;  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    arg0->byte_104 = u8(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_002d5bc8(r0, r1, r2, r3);
    r3 = r4 + 0xfcu;  // (from the original)
    r2 = r4 + 0x100u;  // (from the original)
    *gptr<u32>(r4) = u32(*gptr<u32>(r6));
    r1 = r4 + 0xf8u;  // (from the original)
    *gptr<u32>(r4 + 4u) = u32(*gptr<u32>(r6 + 4u));
    *gptr<u32>(r4 + 8u) = u32(*gptr<u32>(r6 + 8u));
    *gptr<u32>(r13) = u32(r13 + 4u);
    r0 = r4 + 0xf4u;  // (from the original)
    *gptr<u8>(r13 + 4u) = u8(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_006dc248(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0xf4u);  // (from the original)
        r0 = 1u;
        *gptr<u8>(r4 + 0xecu) = u8(r0);  // (from the original)
        if (r1 >> 0x1f != 0u) {  // (from the original)
            *gptr<u8>(r4 + 0x104u) = u8(r9);  // (from the original)
        }
        r1 = u32(*gptr<u8>(r13 + 4u));
        if (r1 == 0) {
            goto L_255fe0;
        }
        *gptr<u8>(r4 + 0x104u) = u8(r9);  // (from the original)
        *gptr<u8>(r4 + 0x106u) = u8(r0);  // (from the original)
        *gptr<u32>(r4 + 0xf0u) = u32(r9);  // (from the original)
        *gptr<u8>(r4 + 0x105u) = u8(r7);  // (from the original)
    }
    if (u32(*gptr<u8>(r5 + 4u)) != 0) {
        goto L_256010;
    }
    goto L_256004;
L_255fe0:;
    *gptr<u8>(r4 + 0x104u) = u8(r8);  // (from the original)
    *gptr<u8>(r4 + 0x105u) = u8(r7);  // (from the original)
    *gptr<u8>(r4 + 0x106u) = u8(r9);  // (from the original)
    if (u32(*gptr<u8>(r5 + 4u)) == 0) {
        *gptr<u32>(r4 + 0xf0u) = u32(0xcu);  // (from the original)
    } else {
        *gptr<u32>(r4 + 0xf0u) = u32(r9);  // (from the original)
        goto L_256010;
    }
L_256004:;
    r0 = u32(*gptr<u8>(r5 + 5u));
    if (r0 == 0) {
        goto L_256014;
    }
L_256010:;
    r0 = 1u;
L_256014:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00255f1c
GUEST_EXPORT(0x00255f1c, d_00255f1c::f_00255f1c);

// f_0025654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025654c {

inline constexpr guest::Function<0x004ed3dc, u32(u32, u32, u32, u32)> call_004ed3dc;  // (from the original)
inline constexpr guest::Function<0x00521a2c, u32(u32, u32, u32, u32)> call_00521a2c;  // (from the original)

u32 f_0025654c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x5cu;  // (from the original)
    r0 = call_004ed3dc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4;
    r0 = call_00521a2c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 2u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_0025654c
GUEST_EXPORT(0x0025654c, d_0025654c::f_0025654c);

// f_00256588: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00256588 {

inline constexpr guest::Function<0x001c2764, u32(u32, u32, u32, u32)> call_001c2764;  // (from the original)
inline constexpr guest::Function<0x004ed3fc, u32(u32, u32, u32, u32)> call_004ed3fc;  // (from the original)

u32 f_00256588(u32 r0, u32 r1, u32 r2, u32 r3, float S0, float S1, float S2, float S3, float S4, float S5, float S6, float S7) {
    guest::cpu()->r[13] -= 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_001c2764(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    S4 = guest::cpu()->s[4];
    S5 = guest::cpu()->s[5];
    S6 = guest::cpu()->s[6];
    S7 = guest::cpu()->s[7];
    r1 = r0;
    r3 = 0x8fa388u;  // (from the original)
    *gptr<u32>(r1) = u32(0x8eeca4u);  // (from the original)
    *gptr<u32>(r1 + 0x18u) = u32(r3);  // (from the original)
    r2 = 0u;
    *gptr<u8>(r1 + 0x58u) = u8(1u);  // (from the original)
    *gptr<u8>(r1 + 0x59u) = u8(r2);  // (from the original)
    *gptr<u16>(r1 + 0x1cu) = u16(r2);  // (from the original)
    *gptr<u8>(r1 + 0x1eu) = u8(r2);  // (from the original)
    *gptr<u8>(r1 + 0x1fu) = u8(r2);  // (from the original)
    *gptr<u16>(r1 + 0x50u) = u16(r2);  // (from the original)
    *gptr<u16>(r1 + 0x52u) = u16(r2);  // (from the original)
    r0 = r1 + 0x5cu;  // (from the original)
    *gptr<u32>(r1 + 0x54u) = u32(r2);  // (from the original)
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    guest::cpu()->s[4] = S4;
    guest::cpu()->s[5] = S5;
    guest::cpu()->s[6] = S6;
    guest::cpu()->s[7] = S7;
    r0 = call_004ed3fc(r0, r1, r2, r3);
    *gptr<u32>(r0) = u32(0x902a8cu);  // (from the original)
    r0 = r0 - 0x5cu;  // (from the original)
    r1 = 0x847364u;  // (from the original)
    r2 = r0 + 0x184u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    S7 = std::bit_cast<float>(*gptr<u32>(r1 + 0x1c));  // (from the original)
    r1 = r1 + 0x20u;  // (from the original)
    *gptr<u32>(r2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r2 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r2 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r2 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r2 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r2 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r2 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    *gptr<u32>(r2 + 0x1c) = u32(std::bit_cast<u32>(S7));  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r1));
    S1 = std::bit_cast<float>(*gptr<u32>(r1 + 4));
    S2 = std::bit_cast<float>(*gptr<u32>(r1 + 8));
    S3 = std::bit_cast<float>(*gptr<u32>(r1 + 0xc));  // (from the original)
    S4 = std::bit_cast<float>(*gptr<u32>(r1 + 0x10));  // (from the original)
    S5 = std::bit_cast<float>(*gptr<u32>(r1 + 0x14));  // (from the original)
    S6 = std::bit_cast<float>(*gptr<u32>(r1 + 0x18));  // (from the original)
    r1 = r0 + 0x1a4u;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    *gptr<u32>(r1 + 0xc) = u32(std::bit_cast<u32>(S3));  // (from the original)
    *gptr<u32>(r1 + 0x10) = u32(std::bit_cast<u32>(S4));  // (from the original)
    *gptr<u32>(r1 + 0x14) = u32(std::bit_cast<u32>(S5));  // (from the original)
    *gptr<u32>(r1 + 0x18) = u32(std::bit_cast<u32>(S6));  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_00256588
GUEST_EXPORT(0x00256588, d_00256588::f_00256588);

// f_00256664: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00256664 {

struct __attribute__((packed)) Object_00256664_0 {
    u8 unknown_0[0x2b4];  // (not used here)
    u32 word_2b4;
};
GUEST_OFFSET(Object_00256664_0, word_2b4, 0x2b4);  // (from the original)


void f_00256664(gptr<Object_00256664_0> arg0, u32 r1, float S0_unused, float S1) {
    u32 res = 0;
    float S0 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x256688u));  // (from the original)
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        arg0->word_2b4 = u32(std::bit_cast<u32>(S0));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    S1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))));
    arg0->word_2b4 = u32(std::bit_cast<u32>(S0 / S1));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_00256664
GUEST_EXPORT(0x00256664, d_00256664::f_00256664);

// f_0025668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025668c {

struct __attribute__((packed)) Object_0025668c_0 {
    u8 unknown_0[0x2b0];  // (not used here)
    u32 word_2b0;
    u32 word_2b4;
    u32 word_2b8;
    u32 word_2bc;
};
GUEST_OFFSET(Object_0025668c_0, word_2b0, 0x2b0);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2b4, 0x2b4);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2b8, 0x2b8);  // (from the original)
GUEST_OFFSET(Object_0025668c_0, word_2bc, 0x2bc);  // (from the original)


void f_0025668c(gptr<Object_0025668c_0> arg0, u32 r1, u32 r2) {
    u32 res = 0;
    float S0 = 0;
    float S1 = 0;
    S0 = std::bit_cast<float>(*gptr<u32>(0x2566d8u));  // (from the original)
    res = r1;
    if (u32(res == 0) || res >> 0x1f != (r1 & (r1 ^ res)) >> 0x1f) {  // (from the original)
        arg0->word_2b4 = u32(std::bit_cast<u32>(S0));
        goto L_2566ac;
    }
    arg0->word_2b4 = u32(std::bit_cast<u32>(S0 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1))))));
L_2566ac:;
    S1 = std::bit_cast<float>(*gptr<u32>(0x2566dcu));  // (from the original)
    res = r2;
    arg0->word_2b0 = u32(std::bit_cast<u32>(S1));
    if (u32(res == 0) || res >> 0x1f != (r2 & (r2 ^ res)) >> 0x1f) {  // (from the original)
        arg0->word_2bc = u32(std::bit_cast<u32>(S0));
        arg0->word_2b8 = u32(std::bit_cast<u32>(S1));
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    arg0->word_2bc = u32(std::bit_cast<u32>(S0 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2))))));
    arg0->word_2b8 = u32(std::bit_cast<u32>(S1));
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_0025668c
GUEST_EXPORT(0x0025668c, d_0025668c::f_0025668c);

// f_002566e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002566e0 {

inline constexpr guest::Function<0x001c244c, u32(u32, u32, u32, u32)> call_001c244c;  // (from the original)

u32 f_002566e0(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    float S0 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x95bf68u;  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x256750u));  // (from the original)
    r1 = r4 + 0x1c0u;  // (from the original)
    r0 = u32(*gptr<u8>(*gptr<u32>(r5) + 0x11eu));  // (from the original)
    r2 = r4 + ((r0 << 4) - r0 << 2) + 0x1fcu;  // (from the original)
    r0 = r4 + 0x184u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_001c244c(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    r0 = *gptr<u32>(r5);
    r1 = u32(*gptr<u8>(r0 + 0x11eu));  // (from the original)
    r2 = r4 + ((r1 << 4) - r1 << 2) + 0x200u;  // (from the original)
    r1 = r4 + 0x100u;  // (from the original)
    *gptr<u16>(r1 + 0xb8u) = u16(u32(*gptr<u16>(r2 + 0x30u)));  // (from the original)
    r0 = u32(*gptr<u8>(r0 + 0x11eu));  // (from the original)
    r0 = u32(*gptr<u16>(r4 + ((r0 << 4) - r0 << 2) + 0x232u));  // (from the original)
    *gptr<u16>(r1 + 0xbau) = u16(r0);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002566e0
GUEST_EXPORT(0x002566e0, d_002566e0::f_002566e0);

// f_00257660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00257660 {

inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0056d5dc, u32(u32, u32, u32, u32)> call_0056d5dc;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x005e8498, u32(u32, u32, u32, u32)> call_005e8498;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32, u32, u32)> call_006d1e64;  // (from the original)
inline constexpr guest::Function<0x00712838, u32(u32, u32, u32, u32)> call_00712838;  // (from the original)
inline constexpr guest::Function<0x00712850, u32(u32, u32, u32, u32)> call_00712850;  // (from the original)
inline constexpr guest::Function<0x0071af38, u32(u32, u32, u32, u32)> call_0071af38;  // (from the original)

u32 f_00257660(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x120u;  // (from the original)
    r5 = *gptr<u32>(0xaaf14cu) + 0x2cu;  // (from the original)
    r0 = r4 + 0x464u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0071af38(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 & 0xffu;  // (from the original)
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00712850(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00712838(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d5dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_006d1e64(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r4 + 0x22b4u;  // (from the original)
    zf = u32(*gptr<u8>(r0 + 0x40u)) == 0;  // (from the original)
    r7 = 0u;
    r0 = r5;
    if (zf) {
        r0 = r0 + 0xdcu;  // (from the original)
        r4 = r0;
        r1 = 1u;
        guest::cpu()->r[13] = r13;
        r0 = call_002b9aa4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0xcu;  // (from the original)
        r0 = r5;
        *gptr<u8>(r4 + 0x4e2u) = u8(r7);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e8498(r0, r1, r2, r3);
    } else {
        r0 = r0 + 0xdcu;  // (from the original)
        r4 = r0;
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        r0 = call_002b9aa4(r0, r1, r2, r3);
        *gptr<u8>(r4 + 0x4e2u) = u8(r7);  // (from the original)
    }
    r1 = 0x5e35dcu;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    *gptr<u32>(r13 + 8u) = u32(7u);
    r1 = 0x851ff0u;  // (from the original)
    r3 = 0u;
    r2 = 0x34u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    *gptr<u32>(r13) = u32(r7);
    *gptr<u32>(r13 + 4u) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r4 = 1u;
    *gptr<u32>(r13 + 8u) = u32(9u);
    r1 = 0x851ff0u;  // (from the original)
    r3 = 0u;
    r2 = 0x33u;  // (from the original)
    r6 = r13 + 0xa8u;  // (from the original)
    r0 = r13 + 0xc8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r4);
    *gptr<u32>(r13) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r7);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r4);
    r3 = 0u;
    r1 = 0x851ff0u;  // (from the original)
    r2 = 0x22u;  // (from the original)
    r0 = r6 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 2u;
    r1 = 3u;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_2577a0:;
        r1 = r4;
        r2 = r6 + (r4 << 5);
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 3u);
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 3u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0xa8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r4 = 0x90a3e8u;  // (from the original)
    *gptr<u32>(r13 + 0x7cu) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0x50u) = u32(r4);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0x909d20u);  // (from the original)
    r0 = 1u;
    r13 = r13 + 0x120u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00257660
GUEST_EXPORT(0x00257660, d_00257660::f_00257660);

// f_00257ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00257ee4 {

inline constexpr guest::Function<0x001ad2e4, u32(u32, u32, u32, u32)> call_001ad2e4;  // (from the original)
inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005b48b4, u32(u32, u32, u32, u32)> call_005b48b4;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)
inline constexpr guest::Function<0x0070b0b8, u32(u32, u32, u32, u32)> call_0070b0b8;  // (from the original)
inline constexpr guest::Function<0x00769ff8, u32(u32, u32, u32, u32)> call_00769ff8;  // (from the original)

u32 f_00257ee4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x108u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb94c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0xau;  // (from the original)
    r0 = r13 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001ad2e4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0070b0b8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_00769ff8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0;
    r0 = r4 + 0x2f18u;  // (from the original)
    r7 = r0;
    r0 = r0 + 0xdcu;  // (from the original)
    r5 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002b9aa4(r0, r1, r2, r3);
    r8 = 0u;
    *gptr<u8>(r5 + 0x4e2u) = u8(r8);  // (from the original)
    r5 = r13 + 0xd0u;  // (from the original)
    r1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    r4 = r8;
    r3 = 6u;
    *gptr<u32>(r5) = u32(*gptr<u32>(0x851ff0u));  // (from the original)
    *gptr<u32>(r5 + 4) = u32(r1);
    *gptr<u32>(r5 + 8) = u32(r2);
    r2 = 0x20u;  // (from the original)
    r1 = 0x5e35dcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r5 = 7u;
    if (r6 == 0) {
        r2 = 0x13au;  // (from the original)
        r3 = 0u;
        r1 = r13 + 0xd0u;  // (from the original)
        r0 = r13 + 0x10u;  // (from the original)
        *gptr<u32>(r13) = u32(r8);
        *gptr<u32>(r13 + 8u) = u32(r5);
        *gptr<u32>(r13 + 4u) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_005e34c4(r0, r1, r2, r3);
        r4 = 1u;
    }
    r9 = 1u;
    r6 = r13 + 0x10u;  // (from the original)
    r0 = r6 + (r4 << 5);
    r3 = 0u;
    r2 = r9 + 0x138u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    *gptr<u32>(r13 + 4) = u32(r9);
    *gptr<u32>(r13 + 8u) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005b48b4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_258000;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x200u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_258000;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0x10000000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f74e0(r0, r1, r2, r3);
    if (r0 == 0) {
        goto L_258028;
    }
L_258000:;
    ea = r13;
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r5);
    r0 = r6 + (r4 << 5);
    r2 = 0x13bu;  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r4 = r4 + 1u;
L_258028:;
    ea = r13;
    *gptr<u32>(ea) = u32(r8);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(3u);
    *gptr<u32>(ea + 4) = u32(r9);
    r0 = r6 + (r4 << 5);
    r3 = 0u;
    r2 = 0x22u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = r4 + 1u;
    r2 = r4;
    r1 = r5;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r5;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r5 & (r5 ^ res)) >> 0x1f) {  // (from the original)
        goto L_258088;
    }
    do {
L_25806c:;
        r2 = r6 + (r4 << 5);
        r1 = r4;
        r0 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        res = r5 - r4;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r5 ^ r4) & (r5 ^ res)) >> 0x1f);  // (from the original)
L_258088:;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0x108u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00257ee4
GUEST_EXPORT(0x00257ee4, d_00257ee4::f_00257ee4);

// f_00258c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00258c8c {

inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00258c8c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r0 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf8u;  // (from the original)
    r6 = r0;
    r0 = r0 + 0xdcu;  // (from the original)
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002b9aa4(r0, r1, r2, r3);
    r5 = 0u;
    *gptr<u8>(r4 + 0x4e2u) = u8(r5);  // (from the original)
    r4 = r13 + 0xd0u;  // (from the original)
    r1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    r3 = 6u;
    *gptr<u32>(r4) = u32(*gptr<u32>(0x851ff0u));  // (from the original)
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r2 = 0x20u;  // (from the original)
    r1 = 0x5e35dcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r4 = 7u;
    r3 = 0u;
    r2 = r4 + 0x13cu;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r8 = 1u;
    *gptr<u32>(r13 + 8u) = u32(r4);
    r7 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    r3 = 0u;
    r2 = 0x144u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r4);
    r0 = r7 + 0x40u;  // (from the original)
    r3 = 0u;
    r2 = r8 + 0x144u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(3u);
    *gptr<u32>(ea + 4) = u32(r4);
    r0 = r7 + 0x60u;  // (from the original)
    r2 = 0x146u;  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(4u);
    *gptr<u32>(ea + 4) = u32(r8);
    r0 = r7 + 0x80u;  // (from the original)
    r3 = 0u;
    r2 = 0x138u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 5u;
    r2 = 4u;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_258da8:;
        r1 = r4;
        r2 = r7 + (r4 << 5);
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00258c8c
GUEST_EXPORT(0x00258c8c, d_00258c8c::f_00258c8c);

// f_002599ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002599ec {

inline constexpr guest::Function<0x005b43d4, u32(u32, u32, u32, u32)> call_005b43d4;  // (from the original)
inline constexpr guest::Function<0x005b4854, u32(u32, u32, u32, u32)> call_005b4854;  // (from the original)
inline constexpr guest::Function<0x008177a0, u32(u32, u32, u32, u32)> call_008177a0;  // (from the original)

u32 f_002599ec(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    r5 = r0;
    r6 = r1;
    r7 = r2;
    r4 = 1u;
    r0 = call_005b4854(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 != 0) {
        goto L_259a40;
    }
    r0 = call_005b43d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r4 = r5 + 0x2000u;  // (from the original)
    if (r0 == 2u) {
        *gptr<u32>(r4 + 0x2b0u) = u32(r6);  // (from the original)
        goto L_259a2c;
    }
    r0 = call_005b43d4(r0, r1, r2, guest::cpu()->r[3]);
    if (r0 == 3u) {
        *gptr<u32>(r4 + 0x2b0u) = u32(r7);  // (from the original)
    }
L_259a2c:;
    r1 = *gptr<u32>(0x851d64u);  // (from the original)
    r2 = *gptr<u32>(0x851d64u + 4);  // (from the original)
    r0 = r5 + 0xa4u;  // (from the original)
    r0 = call_008177a0(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = 0u;
L_259a40:;
    r0 = r4;
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002599ec
GUEST_EXPORT(0x002599ec, d_002599ec::f_002599ec);

// f_00259dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00259dac {

inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00259dac(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r0 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf8u;  // (from the original)
    r6 = r0;
    r0 = r0 + 0xdcu;  // (from the original)
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002b9aa4(r0, r1, r2, r3);
    r5 = 0u;
    *gptr<u8>(r4 + 0x4e2u) = u8(r5);  // (from the original)
    r4 = r13 + 0xd0u;  // (from the original)
    r1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    r3 = 6u;
    *gptr<u32>(r4) = u32(*gptr<u32>(0x851ff0u));  // (from the original)
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r2 = 0x20u;  // (from the original)
    r1 = 0x5e35dcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r4 = 7u;
    r2 = 0x13au;  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xd0u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 8u) = u32(r4);
    *gptr<u32>(r13 + 4u) = u32(r5);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r8 = 1u;
    *gptr<u32>(r13 + 8u) = u32(r4);
    r7 = r13 + 0x10u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    r3 = 0u;
    r2 = r8 + 0x138u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    *gptr<u32>(r13) = u32(r5);
    *gptr<u32>(r13 + 4) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r4);
    r0 = r7 + 0x40u;  // (from the original)
    r3 = 0u;
    r2 = r4 + 0x134u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(3u);
    *gptr<u32>(ea + 4) = u32(r4);
    r0 = r7 + 0x60u;  // (from the original)
    r3 = 0u;
    r2 = 0x13cu;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(4u);
    *gptr<u32>(ea + 4) = u32(r8);
    r0 = r7 + 0x80u;  // (from the original)
    r3 = 0u;
    r2 = 0x138u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 5u;
    r2 = 4u;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_259ec8:;
        r1 = r4;
        r2 = r7 + (r4 << 5);
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00259dac
GUEST_EXPORT(0x00259dac, d_00259dac::f_00259dac);

// f_00259f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00259f30 {

inline constexpr guest::Function<0x002b9aa4, u32(u32, u32, u32, u32)> call_002b9aa4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d4a78, u32(u32, u32, u32, u32)> call_005d4a78;  // (from the original)
inline constexpr guest::Function<0x005e34c4, u32(u32, u32, u32, u32)> call_005e34c4;  // (from the original)
inline constexpr guest::Function<0x005e4988, u32(u32, u32, u32, u32)> call_005e4988;  // (from the original)
inline constexpr guest::Function<0x005e4994, u32(u32, u32, u32, u32)> call_005e4994;  // (from the original)
inline constexpr guest::Function<0x005e49c0, u32(u32, u32, u32, u32)> call_005e49c0;  // (from the original)

u32 f_00259f30(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r0 = r0 + 0x2f18u;  // (from the original)
    r13 = r13 - 0xf0u;  // (from the original)
    r6 = r0;
    r0 = r0 + 0xdcu;  // (from the original)
    r4 = r0;
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_002b9aa4(r0, r1, r2, r3);
    r5 = 0u;
    *gptr<u8>(r4 + 0x4e2u) = u8(r5);  // (from the original)
    r4 = r13 + 0xd0u;  // (from the original)
    r1 = *gptr<u32>(0x851ff0u + 4);  // (from the original)
    r2 = *gptr<u32>(0x851ff0u + 8);  // (from the original)
    r3 = 6u;
    *gptr<u32>(r4) = u32(*gptr<u32>(0x851ff0u));  // (from the original)
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r2 = 0x20u;  // (from the original)
    r1 = 0x5e35dcu;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r4 = r13 + 4u;
    r7 = 7u;
    *gptr<u32>(r13) = u32(r5);
    r2 = 0x13au;  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xd0u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r4) = u32(r5);
    *gptr<u32>(r4 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r4 = 1u;
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r7);
    r7 = r13 + 0x10u;  // (from the original)
    r2 = 0x157u;  // (from the original)
    r0 = r13 + 0x30u;  // (from the original)
    r3 = 0u;
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(2u);
    *gptr<u32>(ea + 4) = u32(r4);
    r0 = r7 + 0x40u;  // (from the original)
    r3 = 0u;
    r2 = 0x138u;  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e34c4(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r5 = 3u;
    r2 = 2u;
    r1 = r5;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e49c0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    do {
L_25a008:;
        r1 = r4;
        r2 = r7 + (r4 << 5);
        r0 = r6;
        guest::cpu()->r[13] = r13;
        r0 = call_005e4994(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(r5));
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005e4988(r0, r1, r2, r3);
    r3 = 0u;
    r2 = r3;
    r1 = r3;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005d4a78(r0, r1, r2, r3);
    r1 = 0x5e3618u;  // (from the original)
    r3 = 6u;
    r2 = 0x20u;  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    r13 = r13 + 0xf0u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00259f30
GUEST_EXPORT(0x00259f30, d_00259f30::f_00259f30);

// f_0025b1c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025b1c0 {

struct __attribute__((packed)) Object_0025b1c0_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x78];  // (not used here)
    u32 word_a4;
    u8 unknown_a8[0x3ad4];  // (not used here)
    u32 word_3b7c;
};
GUEST_OFFSET(Object_0025b1c0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_0025b1c0_0, word_3b7c, 0x3b7c);  // (from the original)

inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x003170d0, u32(u32, u32, u32, u32)> call_003170d0;  // (from the original)
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x005e8a7c, u32(u32, u32, u32, u32)> call_005e8a7c;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0025b1c0(gptr<Object_0025b1c0_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8eed5cu;  // (from the original)
    r13 = r13 - 8;
    r3 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    r2 = r3 + 0x104u;  // (from the original)
    arg0->word_a4 = u32(r2);
    arg0->word_28 = u32(r3);
    r1 = 0x8f47a0u;  // (from the original)
    arg0->word_3b7c = u32(r1);
    r0 = r0 + 0x3f98u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc88u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc64u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e8a7c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x110u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x320b0cu;  // (from the original)
    r4 = r0 - 0x205cu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x290u;  // (from the original)
    r0 = r0 - 0x19a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x8ee248u;  // (from the original)
    r1 = r0 + 0x10u;  // (from the original)
    ea = r4 + 0x57cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    r4 = ea;
    r0 = r4 + 0x114u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r1);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x138u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00317dec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003170d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 8;
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_0025b1c0
GUEST_EXPORT(0x0025b1c0, d_0025b1c0::f_0025b1c0);

// f_0025c3ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c3ac {

inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c3ac(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001a9368(r0, r1, r2, guest::cpu()->r[3]);
    if (r5 == 0) {
        r0 = 0x16u;  // (from the original)
    } else {
        r0 = 0x14u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(r0);
    r0 = 0x9ab068u;  // (from the original)
    r2 = 0x19u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x8525ecu);  // (from the original)
    r2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008178ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xa351u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1 + r4) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025c3ac
GUEST_EXPORT(0x0025c3ac, d_0025c3ac::f_0025c3ac);

// f_0025c418: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c418 {

inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c418(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    r5 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001a9368(r0, r1, r2, guest::cpu()->r[3]);
    if (r5 == 0) {
        r0 = 0x17u;  // (from the original)
    } else {
        r0 = 0x15u;  // (from the original)
    }
    *gptr<u32>(r13) = u32(r0);
    r0 = 0x9ab068u;  // (from the original)
    r2 = 0x19u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x8525ecu);  // (from the original)
    r2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008178ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xa352u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1 + r4) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025c418
GUEST_EXPORT(0x0025c418, d_0025c418::f_0025c418);

// f_0025c484: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025c484 {

inline constexpr guest::Function<0x001a9368, u32(u32, u32, u32, u32)> call_001a9368;  // (from the original)
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)
inline constexpr guest::Function<0x006d2780, u32(u32, u32, u32, u32)> call_006d2780;  // (from the original)
inline constexpr guest::Function<0x008178ac, u32(u32, u32, u32, u32)> call_008178ac;  // (from the original)

u32 f_0025c484(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x28u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_006d2780(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001a9368(r0, r1, r2, guest::cpu()->r[3]);
    *gptr<u32>(r13) = u32(0x18u);  // (from the original)
    r0 = 0x9ab068u;  // (from the original)
    r2 = 0x19u;  // (from the original)
    r1 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x8525ecu);  // (from the original)
    r2 = *gptr<u32>(0x8525ecu + 4);  // (from the original)
    r0 = r4 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_008178ac(r0, r1, r2, guest::cpu()->r[3]);
    r1 = 0xa353u;  // (from the original)
    r0 = 1u;
    *gptr<u8>(r1 + r4) = u8(r0);
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025c484
GUEST_EXPORT(0x0025c484, d_0025c484::f_0025c484);

// f_0025ca5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025ca5c {


u32 f_0025ca5c() {
    u32 r0 = 0;
    u32 r1 = 0;
    r0 = 0u;
    *gptr<u32>(0x953364u) = u32(~0u);  // (from the original)
    *gptr<u32>(0x953358u) = u32(r0);  // (from the original)
    r1 = 0x950004u;  // (from the original)
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0025ca5c
GUEST_EXPORT(0x0025ca5c, d_0025ca5c::f_0025ca5c);

// f_0025d9e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025d9e4 {

struct __attribute__((packed)) Object_0025d9e4_0 {
    u8 unknown_0[0x7e15];  // (not used here)
    u8 byte_7e15;
};
GUEST_OFFSET(Object_0025d9e4_0, byte_7e15, 0x7e15);  // (from the original)

inline constexpr guest::Function<0x0014f9fc, u32(u32, u32, u32, u32)> call_0014f9fc;  // (from the original)
inline constexpr guest::Function<0x0014fa04, u32(u32, u32, u32, u32)> call_0014fa04;  // (from the original)
inline constexpr guest::Function<0x0027a650, u32(u32, u32, u32, u32)> call_0027a650;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x005c3560, u32(u32, u32, u32, u32)> call_005c3560;  // (from the original)
inline constexpr guest::Function<0x005c3e84, u32(u32, u32, u32, u32)> call_005c3e84;  // (from the original)

u32 f_0025d9e4(gptr<Object_0025d9e4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r6 = r0;
    r8 = r0 + 0x7e00u;  // (from the original)
    r9 = r1;
    r0 = u32(arg0->byte_7e15);
    r7 = 0u;
    if (r0 == 0) {
        goto L_25da4c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0027a650(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r4 = 0u;
    } else {
        goto L_25da54;
    }
    do {
L_25da1c:;
        r5 = r4 & 0xffu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r5;
        r0 = r0 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fb7e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_25da54;
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 4u);
    goto L_25dac0;
L_25da4c:;
    r0 = *gptr<u32>(0xaaf14cu);  // (from the original)
L_25da54:;
    r5 = r0;
    if (r0 == 0) {
        goto L_25dac0;
    }
    r0 = u32(*gptr<u8>(r8 + 0x15u));  // (from the original)
    r8 = 1u;
    if (r0 == 1u) {
        goto L_25dac8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_005c3e84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_25db14;
    }
    *gptr<u32>(0x94fd58u) = u32(*gptr<u32>(0x94fd58u) | 0x400u);  // (from the original)
    r0 = u32(*gptr<u8>(r5 + 0x89d0u + r9));  // (from the original)
    r1 = 0u;
    r3 = r1;
    r2 = r1;
    *gptr<u32>(r13) = u32(r1);
    r1 = 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005c3560(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r7 = r0;
    goto L_25db14;
L_25dac0:;
    r0 = 0u;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_25dac8:;
    r4 = *gptr<u32>(*gptr<u32>(0x25db24u));  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x89d0u + r9));  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0014fa04(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = 0x7e16u;  // (from the original)
    r1 = r0 - 0x1au;  // (from the original)
    *gptr<u8>(r0 + r6) = u8(r8);
    r0 = *gptr<u32>(r1 + r6);
    if (r0 != 0) {
        r1 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_0014f9fc(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r6 + 0x7e20u) = u32(r9);  // (from the original)
L_25db14:;
    r0 = r7;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025d9e4
GUEST_EXPORT(0x0025d9e4, d_0025d9e4::f_0025d9e4);

// f_0025efb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025efb8 {

inline constexpr guest::Function<0x0029b480, u32(u32, u32, u32, u32)> call_0029b480;  // (from the original)

u32 f_0025efb8(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = 0x7e0eu;  // (from the original)
    *gptr<u8>(r2 + r0) = u8(r1);
    r1 = u32(*gptr<u8>(r2 + r0));
    if (r1 != 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r0 + 0x6e2cu;  // (from the original)
    return call_0029b480(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_0025efb8
GUEST_EXPORT(0x0025efb8, d_0025efb8::f_0025efb8);

// f_0025f390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025f390 {

struct __attribute__((packed)) Object_0025f390_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x7408];  // (not used here)
    u32 word_7434;
    u8 unknown_7438[0x394];  // (not used here)
    u32 word_77cc;
    u8 unknown_77d0[0xe0];  // (not used here)
    u32 word_78b0;
};
GUEST_OFFSET(Object_0025f390_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_7434, 0x7434);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_77cc, 0x77cc);  // (from the original)
GUEST_OFFSET(Object_0025f390_0, word_78b0, 0x78b0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_0025f390(gptr<Object_0025f390_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8eef60u;  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x77ccu;  // (from the original)
    r3 = 1u;
    arg0->word_7434 = u32(0x8ee218u);  // (from the original)
    r2 = 0x8ef22cu;  // (from the original)
    r0 = r0 + 0x78e4u;  // (from the original)
    arg0->word_77cc = u32(r2);
    arg0->word_78b0 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f4u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x15cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x13cu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x8ee248u;  // (from the original)
    r4 = r5 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r5);  // (from the original)
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0 - 0x154u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 - 0x160u) = u32(r5);  // (from the original)
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = 0x1ff9d4u;  // (from the original)
    r4 = r0 - 0x6bccu;  // (from the original)
    r3 = 2u;
    r2 = 0x130u;  // (from the original)
    r0 = r0 - 0x280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x320fc8u;  // (from the original)
    r3 = 0x28u;  // (from the original)
    r2 = 0x284u;  // (from the original)
    r0 = r4 + 0x4acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x480u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r13 = r13 + 0x10;  // (from the original)
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_0025f390
GUEST_EXPORT(0x0025f390, d_0025f390::f_0025f390);

// f_0025f970: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025f970 {

inline constexpr guest::Function<0x0025f68c, u32(u32, u32, u32, u32)> call_0025f68c;  // (from the original)
inline constexpr guest::Function<0x0025f740, u32(u32, u32, u32, u32)> call_0025f740;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00757004, u32(u32, u32, u32, u32)> call_00757004;  // (from the original)
inline constexpr guest::Function<0x00757160, u32(u32, u32, u32, u32)> call_00757160;  // (from the original)
inline constexpr guest::Function<0x007571a0, u32(u32, u32, u32, u32)> call_007571a0;  // (from the original)

u32 f_0025f970(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r13 = r13 - 0x70u;  // (from the original)
    r9 = r0;
    r0 = *gptr<u32>(0xaaf14cu) + 0x8e08u;  // (from the original)
    r10 = r0;
    r4 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00309ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_25fac8;
    }
    r0 = u32(*gptr<u8>(r4 + 9u));
    if (r0 >= 3u) {
        goto L_25fac8;
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00757160(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x2cu) = u32(r0);  // (from the original)
    if (r0 >= 8u) {
        goto L_25fac8;
    }
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_00757004(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    res = r0;
    r7 = res;
    r4 = r6;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_25faac;
    }
    r11 = 0x8906ecu;  // (from the original)
    r8 = 0x90a3e8u;  // (from the original)
L_25f9e0:;
    r3 = r4;
    r2 = r13 + 0x48u;  // (from the original)
    r1 = r13 + 0x30u;  // (from the original)
    r0 = r10;
    guest::cpu()->r[13] = r13;
    r0 = call_007571a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_25faa0;
    }
    r0 = r13;
    r2 = 9u;
    r1 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r8);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r11)));  // (from the original)
    r1 = 4u;
    do {
L_25fa3c:;
        ea = r11;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r11;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r5;
    r1 = r13 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d874(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13;
    r5 = r9 + (r6 + (r6 << 4) + (r6 << 5) << 2);
    r0 = r5 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r6 + 1u;
    *gptr<u32>(r13) = u32(r8);
L_25faa0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(r7)) {
        guest::preempt();
        goto L_25f9e0;
    }
L_25faac:;
    r1 = r6;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0025f68c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = u32(*gptr<u8>(r10 + 0xb4u));  // (from the original)
    r1 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0025f740(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_25fac8:;
    r13 = r13 + 0x70u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025f970
GUEST_EXPORT(0x0025f970, d_0025f970::f_0025f970);

// f_0025fadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0025fadc {

inline constexpr guest::Function<0x0025f68c, u32(u32, u32, u32, u32)> call_0025f68c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x0056d874, u32(u32, u32, u32, u32)> call_0056d874;  // (from the original)
inline constexpr guest::Function<0x0056e04c, u32(u32, u32, u32, u32)> call_0056e04c;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f12f4, u32(u32, u32, u32, u32)> call_005f12f4;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x00716d80, u32(u32, u32, u32, u32)> call_00716d80;  // (from the original)

u32 f_0025fadc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x148u;  // (from the original)
    r7 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x6ad02u;  // (from the original)
    r9 = r0 + r1;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00716d80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x8906ecu;  // (from the original)
    r6 = 0x90a3e8u;  // (from the original)
    res = r0;
    r8 = res;
    r4 = 0u;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_25fbc4;
    }
L_25fb10:;
    r0 = r13 + 0xb8u;  // (from the original)
    r2 = 9u;
    *gptr<u16>(r13 + 0xe4u) = u16(u32(*gptr<u16>(r9 + (r4 << 1) + 4u)));  // (from the original)
    r1 = r13 + 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x18u;  // (from the original)
    *gptr<u16>(r5 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 4u;
    do {
L_25fb58:;
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r0 = r5;
    r1 = r13 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056d874(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0xb8u;  // (from the original)
    r5 = r7 + (r4 + (r4 << 4) + (r4 << 5) << 2);
    r0 = r5 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x430u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0xb8u) = u32(r6);  // (from the original)
    r4 = r4 + 1u;
    if (s32(r4) < s32(r8)) {
        guest::preempt();
        goto L_25fb10;
    }
L_25fbc4:;
    r1 = r8;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_0025f68c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 8u;
    r2 = 0x4bu;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0x90a308u;  // (from the original)
    *gptr<u32>(r0) = u32(r5);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x96u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 0x25u;  // (from the original)
    do {
L_25fc0c:;
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r8 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0xe8u;  // (from the original)
    r2 = 9u;
    r1 = r13 + 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x12u;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r10)));  // (from the original)
    r1 = 4u;
    do {
L_25fc70:;
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        res = r1 - 1u;
        r1 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r2);
        ea = r10;
        r2 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r2);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r1 = *gptr<u32>(0xaaf14cu) + 0x55bcu;  // (from the original)
    r0 = r13 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056e04c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r8) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f12f4(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r3 = 0x123u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r2 = 0x25fd54u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r8);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r7 + 0x8c8u;  // (from the original)
    r1 = r13 + 8u;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 0xe8u) = u32(r6);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r5);
    r0 = r13 + 8u;
    r13 = r13 + 0x148u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0025fadc
GUEST_EXPORT(0x0025fadc, d_0025fadc::f_0025fadc);
