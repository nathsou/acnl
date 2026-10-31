// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_005d03f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d03f0 {

inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32, u32)> call_0050dd68;  // (from the original)
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32, u32)> call_00728128;  // (from the original)

u32 f_005d03f0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_0071a084(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_0050d698(0u, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_2 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0050d8f0(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    }
    r5 = 0x9535e4u;  // (from the original)
    r0_2 = *gptr<u32>(r5);
    r4 = *gptr<u32>(r0_2 + 0x210u);  // (from the original)
    if (r4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0050d8f0(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    }
    do {
L_5d0424:;
        r4 = r4 - 1u;
        r0_3 = *gptr<u32>(r5);
        r0_2 = call_00728128(r0_3, 0u, r4, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        if (!(r0_2 != 1u)) {
            r0_4 = *gptr<u32>(r5);
            r0_2 = call_0050dd68(r0_4, 0u, r4, guest::cpu()->r[3]);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
        }
        guest::preempt();
    } while (r4 != 0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_0050d8f0(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_005d03f0
GUEST_EXPORT(0x005d03f0, d_005d03f0::f_005d03f0);

// f_005d0470: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d0470 {

inline guest::global<u8, 0x009514c7> global_009514c7;  // (from the original)
inline constexpr guest::Function<0x0017c448, u32(u32, u32, u32, u32)> call_0017c448;  // (from the original)
inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> call_0023bc64;  // (from the original)
inline constexpr guest::Function<0x0023c65c, u32(u32, u32, u32, u32)> call_0023c65c;  // (from the original)
inline constexpr guest::Function<0x003505bc, u32(u32, u32, u32, u32)> call_003505bc;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050dd68, u32(u32, u32, u32, u32)> call_0050dd68;  // (from the original)
inline constexpr guest::Function<0x005373a4, u32(u32, u32, u32, u32)> call_005373a4;  // (from the original)
inline constexpr guest::Function<0x0071a084, u32(u32, u32, u32, u32)> call_0071a084;  // (from the original)
inline constexpr guest::Function<0x00728128, u32(u32, u32, u32, u32)> call_00728128;  // (from the original)
inline constexpr guest::Function<0x007283f4, u32(u32, u32, u32, u32)> call_007283f4;  // (from the original)

u32 f_005d0470(u32 r0_unused, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_2 = 0;
    u32 r2_6 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = u32(*global_009514c7);
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_2 = call_0071a084(r0_1, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_3 = call_0023bc64(r0_2, r1, r2_1, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    if (r0_3 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_4 = call_003505bc(r0_3, r1, r2_2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_5 = call_0023c65c(r0_4, r1, r2_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_5 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_6 = call_0050d698(0u, r1, r2_4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    if (r0_6 == 0) {
        goto L_5d04d0;
    }
    call_0050d8f0(r0_6, r1_1, r2_5, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
L_5d04d0:;
    r5 = 0x9535e4u;  // (from the original)
    r0_7 = *gptr<u32>(r5);
    r4 = *gptr<u32>(r0_7 + 0x3c0u);  // (from the original)
    if (r4 == 0) {
        goto L_5d0538;
    }
L_5d04e4:;
    r4 = r4 - 1u;
    r0_8 = *gptr<u32>(r5);
    r0_9 = call_007283f4(r0_8, 1u, r4, guest::cpu()->r[3]);
    if (r0_9 != 0) {
        r0_10 = *gptr<u32>(r5);
        r0_7 = call_00728128(r0_10, 1u, r4, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        if (r0_7 != 1u) {
            goto L_5d0530;
        }
    }
    r0_11 = *gptr<u32>(r5);
    r0_7 = call_0050dd68(r0_11, 1u, r4, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
L_5d0530:;
    if (r4 != 0) {
        guest::preempt();
        goto L_5d04e4;
    }
L_5d0538:;
    r0_12 = call_005373a4(r0_7, r1_1, r2_5, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    call_0017c448(r0_12, r1_2, r2_6, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 1u;
}

}  // namespace d_005d0470
GUEST_EXPORT(0x005d0470, d_005d0470::f_005d0470);

// f_005d055c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d055c {

inline constexpr guest::Function<0x00113d15, u32(u32, u32, u32, u32)> call_00113d14;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)
inline constexpr guest::Function<0x0050d4dc, u32(u32, u32, u32, u32)> call_0050d4dc;  // (from the original)
inline constexpr guest::Function<0x0050d91c, u32(u32, u32, u32, u32)> call_0050d91c;  // (from the original)

u32 f_005d055c(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 ea_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    call_0050d91c(r0, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_1 = *gptr<u32>(0x9514c4u + 4u);  // (from the original)
    if (r0_1 != 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0050d4dc(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fd108(0x2520u, r0_2, 4u, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r0_3) = u32(0u);
    ea_1 = r0_3 + 4u;
    *gptr<u32>(ea_1) = u32(0u);
    r0_4 = ea_1 + 4u;
    guest::cpu()->r[13] = r13;
    r0_5 = call_00113d14(r0_4, 0u, r2_2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_6 = r0_5 - 8u;
    *gptr<u32>(0x9514c4u + 4u) = u32(r0_6);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_005d055c
GUEST_EXPORT(0x005d055c, d_005d055c::f_005d055c);

// f_005d05b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05b0 {

inline guest::global<u8, 0x009514c4> global_009514c4;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)

u32 f_005d05b0() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = u32(*global_009514c4);
    if (r0_1 == 1u) {
        guest::cpu()->r[13] += 8u;
        return r0_1;
    }
    r0_2 = call_0050d698(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        r0_3 = 1u;
    } else {
        r0_3 = 0u;
    }
    *global_009514c4 = u8(r0_3);
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d05b0
GUEST_EXPORT(0x005d05b0, d_005d05b0::f_005d05b0);

// f_005d05ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d05ec {

inline guest::global<u8, 0x009514c4> global_009514c4;  // (from the original)
inline guest::global<u32, 0x009535e4> global_009535e4;  // (from the original)
inline constexpr guest::Function<0x0050d698, u32(u32, u32, u32, u32)> call_0050d698;  // (from the original)
inline constexpr guest::Function<0x0050d8f0, u32(u32, u32, u32, u32)> call_0050d8f0;  // (from the original)
inline constexpr guest::Function<0x0050ded0, u32(u32, u32, u32, u32)> call_0050ded0;  // (from the original)

u32 f_005d05ec(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_0050d698(0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::cpu()->r[13] += 8u;
        return call_0050d8f0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_2 = *global_009535e4;
    call_0050ded0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_009514c4 = u8(0u);
    guest::cpu()->r[13] += 8u;
    return call_0050d8f0(0u, 0x9514c4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_005d05ec
GUEST_EXPORT(0x005d05ec, d_005d05ec::f_005d05ec);

// f_005d0e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d0e38 {


u32 f_005d0e38(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = u32(*gptr<u8>(0x8578dcu + r0));  // (from the original)
    guest::cpu()->r[1] = 0x8578dcu;  // (from the original)
    return r0_1;
}

}  // namespace d_005d0e38
GUEST_EXPORT(0x005d0e38, d_005d0e38::f_005d0e38);

// f_005d1d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1d08 {

inline guest::global<u32, 0x005d1df8> global_005d1df8;  // (from the original)
inline guest::global<u32, 0x005d1dfc> global_005d1dfc;  // (from the original)
inline constexpr guest::Function<0x00521a8c, u32(u32, u32, u32, u32)> call_00521a8c;  // (from the original)

u32 f_005d1d08(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 ea_4 = 0;
    u32 r3_2 = 0;
    u32 ea_5 = 0;
    float S0_1 = 0;
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0_1 = call_00521a8c(r0, r1, r2, r3);
    r3_1 = *global_005d1df8;
    ea_1 = r0_1 + 0x13u;  // (from the original)
    *gptr<u8>(ea_1) = u8(0u);
    ea_2 = r0_1 + 0x14u;  // (from the original)
    *gptr<u32>(ea_2) = u32(0u);
    *gptr<u32>(r0_1) = u32(r3_1);
    ea_3 = r0_1 + 0x18u;  // (from the original)
    *gptr<u32>(ea_3) = u32(0u);
    ea_4 = r0_1 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_4) = u32(r0_1);
    *gptr<u32>(ea_4 + 4) = u32(0u);
    r3_2 = ~0u;
    ea_5 = r0_1 + 0x28u;  // (from the original)
    *gptr<u8>(ea_5) = u8(0u);
    S0_1 = std::bit_cast<float>(*global_005d1dfc);
    *gptr<u8>(ea_5 + 1u) = u8(0u);
    *gptr<u8>(ea_5 + 2u) = u8(0u);
    *gptr<u8>(ea_5 + 3u) = u8(0u);
    *gptr<u8>(ea_5 + 4u) = u8(0u);
    *gptr<u32>(ea_5 + 8u) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_5 + 0xcu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(ea_5 + 0x10u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(ea_5 + 0x14u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(ea_5 + 0x18u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x1cu) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u8>(ea_5 + 0x20u) = u8(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x24u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x28u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x30u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(ea_5 + 0x34u) = u32(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x38u) = u32(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x3cu) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x3du) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x3eu) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x3fu) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x40u) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x41u) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x42u) = u8(0u);  // (from the original)
    *gptr<u8>(ea_5 + 0x43u) = u8(0u);  // (from the original)
    *gptr<u32>(ea_5 + 0x44u) = u32(r3_2);  // (from the original)
    *gptr<u8>(r0_1 + 0x70u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x71u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x72u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x73u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x74u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x78u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x7cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x80u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x84u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x88u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x8cu) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0x90u) = u8(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x94u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x98u) = u32(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r0_1 + 0x9cu) = u32(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0xa0u) = u8(0u);  // (from the original)
    *gptr<u8>(r0_1 + 0xa1u) = u8(r3_2);  // (from the original)
    *gptr<u32>(r0_1 + 0xa4u) = u32(0u);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r0_1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_005d1d08
GUEST_EXPORT(0x005d1d08, d_005d1d08::f_005d1d08);

// f_005d1ee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1ee0 {

inline guest::global<u32, 0x005d1f74> global_005d1f74;  // (from the original)
inline constexpr guest::Function<0x00105f55, u32(u32, u32, u32, u32)> call_00105f54;  // (from the original)
inline constexpr guest::Function<0x0013bb30, u32(u32, u32, u32, u32)> call_0013bb30;  // (from the original)
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> call_002eba64;  // (from the original)
inline constexpr guest::Function<0x006a6eb0, u32(u32, u32, u32, u32)> call_006a6eb0;  // (from the original)

u32 f_005d1ee0(u32 r0, u32 r1_unused, u32 r2, u32 r3, float S0, float S1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 r0_2 = 0;
    float S0_2 = 0;
    u32 r4_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    float S1_3 = 0;
    u32 r1_4 = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    call_0013bb30(r0_1, r0, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
    S1_1 = std::bit_cast<float>(*global_005d1f74);
    r0_2 = r13;
    S0_2 = std::bit_cast<float>(vcvt_sz_f(S0_1 * S1_1));
    r4_1 = std::bit_cast<u32>(S0_2);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    call_0013bb30(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r0_3 = std::bit_cast<u32>(S0_3);
    res_1 = r0_3 - 0x3f000000u;  // (from the original)
    nf_1 = res_1 >> 0x1f;  // (from the original)
    vf_1 = ((r0_3 ^ 0x3f000000u) & (r0_3 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r8 = 1u;
    }
    if (nf_1 == vf_1) {
        r8 = 0u;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_2;
    r0_4 = call_006a6eb0(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r7 = r0_4;
    if (r0_4 == 0) {
        goto L_5d1f70;
    }
    r6 = 0u;
    r5 = 0x952bf0u + (r4_1 << 1);  // (from the original)
L_5d1f38:;
    r4 = 0u;
    do {
L_5d1f3c:;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0_5 = call_002eba64(r7, r4, r6, r3);
        r3_3 = guest::cpu()->r[3];
        S0_4 = guest::cpu()->s[0];
        S1_3 = guest::cpu()->s[1];
        r1_4 = u32(*gptr<u16>(r5));
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_3;
        r0_4 = call_00105f54(r0_5, r1_4, r8, r3_3);
        r1_3 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r6 = r6 + 1u;
    if (s32(r6) < s32(2u)) {
        guest::preempt();
        goto L_5d1f38;
    }
L_5d1f70:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0_4;
}

}  // namespace d_005d1ee0
GUEST_EXPORT(0x005d1ee0, d_005d1ee0::f_005d1ee0);

// f_005d1f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f84 {

inline guest::global<u32, 0x005d1f98> global_005d1f98;  // (from the original)

void f_005d1f84(u32 r0) {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_005d1f98);
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_005d1f84
GUEST_EXPORT(0x005d1f84, d_005d1f84::f_005d1f84);

// f_005d1f9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d1f9c {

inline guest::global<u32, 0x005d1fb0> global_005d1fb0;  // (from the original)

void f_005d1f9c(u32 r0) {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_005d1fb0);
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_005d1f9c
GUEST_EXPORT(0x005d1f9c, d_005d1f9c::f_005d1f9c);

// f_005d205c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d205c {

inline guest::global<u32, 0x005d2070> global_005d2070;  // (from the original)

void f_005d205c(u32 r0) {
    float S1_1 = 0;
    float S0_1 = 0;
    S1_1 = std::bit_cast<float>(*global_005d2070);
    S0_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0))) * S1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_005d205c
GUEST_EXPORT(0x005d205c, d_005d205c::f_005d205c);

// f_005d2218: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d2218 {

struct __attribute__((packed)) Object_005d2218_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d2218_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d2218_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d2218_0, word_8, 0x8);  // (from the original)


void f_005d2218(gptr<Object_005d2218_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    return;
}

}  // namespace d_005d2218
GUEST_EXPORT(0x005d2218, d_005d2218::f_005d2218);

// f_005d23e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d23e4 {

struct __attribute__((packed)) Object_005d23e4_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_005d23e4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d23e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d23e4_0, word_8, 0x8);  // (from the original)


void f_005d23e4(gptr<Object_005d23e4_0> arg0, u32 r1) {
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    return;
}

}  // namespace d_005d23e4
GUEST_EXPORT(0x005d23e4, d_005d23e4::f_005d23e4);

// f_005d458c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d458c {

inline guest::global<u32, 0x005d4600> global_005d4600;  // (from the original)
inline guest::global<u32, 0x005d4604> global_005d4604;  // (from the original)

void f_005d458c(float S0, float S1, float S2) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 fpsr_1 = 0;
    float S3_1 = 0;
    u32 fpsr_2 = 0;
    float S4_1 = 0;
    u32 fpsr_3 = 0;
    u32 fpsr_4 = 0;
    float S3_2 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 fpsr_5 = 0;
    u32 fpsr_6 = 0;
    float S3_3 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S1, S2);  // (from the original)
    S3_1 = std::bit_cast<float>(*global_005d4600);
    if (fpsr_1 >> 0x1e & 1) {  // (from the original)
        guest::cpu()->s[0] = S3_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    S4_1 = std::bit_cast<float>(*global_005d4604);
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        fpsr_3 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
        if (!(fpsr_3 >> 0x1d & 1) || fpsr_3 >> 0x1e & 1) {  // (from the original)
            guest::cpu()->s[0] = S4_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        fpsr_4 = fpsr_3 & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
        if (fpsr_4 >> 0x1f == (fpsr_4 >> 0x1c & 1)) {  // (from the original)
            guest::cpu()->s[0] = S3_1;
            guest::cpu()->s[1] = S1;
            return;
        }
        S3_2 = S0 - S1;
        S1_1 = S2 - S1;
        S0_1 = S3_2 / S1_1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    fpsr_5 = fpsr_2 & 0xfffffffu | vfp_cmpf(S0, S1);  // (from the original)
    if (fpsr_5 >> 0x1f == (fpsr_5 >> 0x1c & 1)) {  // (from the original)
        guest::cpu()->s[0] = S4_1;
        guest::cpu()->s[1] = S1;
        return;
    }
    fpsr_6 = fpsr_5 & 0xfffffffu | vfp_cmpf(S0, S2);  // (from the original)
    if (fpsr_6 >> 0x1d & 1 && !(fpsr_6 >> 0x1e & 1)) {  // (from the original)
        S3_3 = S0 - S1;
        S1_2 = S2 - S1;
        S0_2 = S3_3 / S1_2;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    guest::cpu()->s[0] = S3_1;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_005d458c
GUEST_EXPORT(0x005d458c, d_005d458c::f_005d458c);

// f_005d4608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4608 {

inline guest::global<u32, 0x005d4664> global_005d4664;  // (from the original)

void f_005d4608(u32 r0, u32 r1, float S0, float S1, float S2) {
    float S3 = 0;
    float S4 = 0;
    float S5 = 0;
    float S3_1 = 0;
    float S1_1 = 0;
    float S0_1 = 0;
    u32 res_1 = 0;
    float S4_1 = 0;
    u32 res_2 = 0;
    float S3_2 = 0;
    float S3_3 = 0;
    float S1_2 = 0;
    float S0_2 = 0;
    S5 = std::bit_cast<float>(*global_005d4664);
    S3 = S5;
    S4 = S3;
    if (r0 == 0) {
        S3_1 = S1 - S3;
        S1_1 = float(std::bit_cast<u32>(std::bit_cast<float>(r0)));
        S0_1 = (S3_1 - S0) / S1_1;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return;
    }
    if ((r0 & 1u) != 0) {
        S4 = S4 + S2;
        S3 = S3 + S4;
    }
    res_1 = r0 >> 1;
    r1 = res_1;
    if (res_1 == 0) {
        S3_2 = S3 + S5;
        S3_3 = S1 - S3_2;
        S1_2 = float(std::bit_cast<u32>(std::bit_cast<float>(r0)));
        S0_2 = (S3_3 - S0) / S1_2;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    do {
L_5d4630:;
        S4_1 = S4 + S2;
        res_2 = r1 - 1u;
        r1 = res_2;
        S3 = S3 + S4_1;
        S4 = S4_1 + S2;
        S5 = S5 + S4;
        guest::preempt();
    } while (res_2 != 0);
    S3_2 = S3 + S5;
    S3_3 = S1 - S3_2;
    S1_2 = float(std::bit_cast<u32>(std::bit_cast<float>(r0)));
    S0_2 = (S3_3 - S0) / S1_2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_005d4608
GUEST_EXPORT(0x005d4608, d_005d4608::f_005d4608);

// f_005d4a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a68 {

struct __attribute__((packed)) Object_005d4a68_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a68_0, word_0, 0x0);  // (from the original)


u32 f_005d4a68(gptr<Object_005d4a68_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0;
    r2_1 = *gptr<u32>(arg0->word_0 + 0x2cu);  // (from the original)
    return guest::call_address<u32>(r2_1, r0, 1u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d4a68
GUEST_EXPORT(0x005d4a68, d_005d4a68::f_005d4a68);

// f_005d4a78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4a78 {

struct __attribute__((packed)) Object_005d4a78_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d4a78_0, word_0, 0x0);  // (from the original)


u32 f_005d4a78(gptr<Object_005d4a78_0> arg0) {
    u32 r0 = arg0.addr();
    return guest::call_address<u32>(*gptr<u32>(arg0->word_0 + 8u), r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005d4a78
GUEST_EXPORT(0x005d4a78, d_005d4a78::f_005d4a78);

// f_005d4edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d4edc {

struct __attribute__((packed)) Object_005d4edc_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Object_005d4edc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005d4edc_0, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005d4edc(gptr<Object_005d4edc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 r0_2 = 0;
    r13 = r13 - 8;
    r1_1 = ~0u;
    r4 = r0 + 8u;
    arg0->word_0 = u32(r1_1);
    arg0->word_4 = u32(0x2fu);  // (from the original)
    r3_1 = r4 + 4u;
    arg0->word_c = u32(r0 + 0x20u);  // (from the original)
    arg0->word_10 = u32(0x41u);  // (from the original)
    arg0->word_8 = u32(0x90a260u);  // (from the original)
    arg0->byte_14 = u8(4u);
    arg0->word_18 = u32(r1_1);
    arg0->word_1c = u32(r1_1);
    r0_1 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0x82u, 4u, r3_1);  // (from the original)
    r2 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    r1 = 0x20u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(r2);  // (from the original)
    do {
L_5d4f34:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r2);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x9cu) = u8(r2);  // (from the original)
    r0_2 = r4 - 8u;
    *gptr<u32>(r4 + 0xa0u) = u32(r2);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005d4edc
GUEST_EXPORT(0x005d4edc, d_005d4edc::f_005d4edc);

// f_005d5374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5374 {

inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> call_005d8a3c;  // (from the original)

u32 f_005d5374(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S2_1 = 0;
    u32 r12_1 = 0;
    float S0_1 = 0;
    float S1_1 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x892eecu + 0x310u));  // (from the original)
    r12_1 = 0x892eecu + 0x2fcu;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(r12_1));
    S1_1 = std::bit_cast<float>(*gptr<u32>(r12_1 + 4));
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2_1));  // (from the original)
    ea_1 = r13;
    *gptr<u32>(ea_1) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(ea_1 + 4) = u32(std::bit_cast<u32>(S1_1));
    ea_2 = r13 + 8u;
    *gptr<u32>(ea_2) = u32(r1);
    *gptr<u32>(ea_2 + 4) = u32(r2);
    *gptr<u32>(ea_2 + 8) = u32(r3);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_005d8a3c(guest::cpu()->r[0], r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_005d5374
GUEST_EXPORT(0x005d5374, d_005d5374::f_005d5374);

// f_005d53b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53b0 {

struct __attribute__((packed)) Object_005d53b0_0 {
    u8 unknown_0[0x90];  // (not used here)
    u32 word_90;
    u32 word_94;
};
GUEST_OFFSET(Object_005d53b0_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_005d53b0_0, word_94, 0x94);  // (from the original)

inline constexpr guest::Function<0x005d8740, u32(u32, u32, u32, u32)> call_005d8740;  // (from the original)

u32 f_005d53b0(gptr<Object_005d53b0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    r1_1 = arg0->word_94;
    r2_1 = arg0->word_90 - 1u;
    if (s32(r1_1) >= s32(r2_1)) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    r1_2 = r1_1 + 1u;
    arg0->word_94 = u32(r1_2);
    return call_005d8740(r0, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_005d53b0
GUEST_EXPORT(0x005d53b0, d_005d53b0::f_005d53b0);

// f_005d53d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d53d4 {

inline constexpr guest::Function<0x005d8a3c, u32(u32, u32, u32, u32)> call_005d8a3c;  // (from the original)

u32 f_005d53d4(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 ea_2 = 0;
    u32 r1_2 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    S0_1 = std::bit_cast<float>(*gptr<u32>(0x892eecu + 0x2e4u));  // (from the original)
    S1_1 = std::bit_cast<float>(*gptr<u32>(0x892eecu + 0x2ecu));  // (from the original)
    S2_1 = std::bit_cast<float>(*gptr<u32>(0x892eecu + 0x2f8u));  // (from the original)
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0_1));
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S1_1));
    *gptr<u32>(r13 + 0x14u) = u32(std::bit_cast<u32>(S2_1));  // (from the original)
    ea_1 = r13 + 4u;
    *gptr<u32>(ea_1) = u32(r1);
    r1_1 = r13;
    ea_2 = r13 + 0xcu;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_1;
    call_005d8a3c(guest::cpu()->r[0], r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    return guest::cpu()->r[0];
}

}  // namespace d_005d53d4
GUEST_EXPORT(0x005d53d4, d_005d53d4::f_005d53d4);

// f_005d5414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d5414 {

struct __attribute__((packed)) Object_005d5414_0 {
    u8 unknown_0[0xb8];  // (not used here)
    u32 word_b8;
    u8 unknown_bc[0xc14];  // (not used here)
    u32 word_cd0;
};
GUEST_OFFSET(Object_005d5414_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_005d5414_0, word_cd0, 0xcd0);  // (from the original)


void f_005d5414(gptr<Object_005d5414_0> arg0) {
    arg0->word_cd0 = u32(0x909ff8u);  // (from the original)
    arg0->word_b8 = u32(0x909ab8u);  // (from the original)
    return;
}

}  // namespace d_005d5414
GUEST_EXPORT(0x005d5414, d_005d5414::f_005d5414);

// f_005d6000: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6000 {

struct __attribute__((packed)) Object_005d6000_0 {
    u32 word_0;
    u8 unknown_4[0x12230];  // (not used here)
    u32 word_12234;
};
GUEST_OFFSET(Object_005d6000_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d6000_0, word_12234, 0x12234);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x005f0bc4, u32(u32, u32, u32, u32)> call_005f0bc4;  // (from the original)

u32 f_005d6000(gptr<Object_005d6000_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    arg0->word_0 = u32(0x908524u);  // (from the original)
    arg0->word_12234 = u32(0x90a3e8u);  // (from the original)
    r0_1 = r0 + 0x11f8cu;  // (from the original)
    call_002f76ac(r0_1, 0x81d3fcu, 0x44u, 0xau);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x11f58u + r0) = u32(0x909a48u);  // (from the original)
    r0_2 = 0x11f58u - 0x30u;  // (from the original)
    *gptr<u32>(r0_2 + r0) = u32(0x909a10u);  // (from the original)
    r0_3 = r0_2 - 0x34u;  // (from the original)
    *gptr<u32>(r0_3 + r0) = u32(0x909a48u);  // (from the original)
    r0_4 = r0_3 - 0x2cu;  // (from the original)
    *gptr<u32>(r0_4 + r0) = u32(0x90a3e8u);  // (from the original)
    r0_5 = r0_4 - 0x2cu;  // (from the original)
    *gptr<u32>(r0_5 + r0) = u32(0x90a3e8u);  // (from the original)
    r0_6 = r0_5 - 0x44u;  // (from the original)
    *gptr<u32>(r0_6 + r0) = u32(0x909c78u);  // (from the original)
    r0_7 = r0_6 - 0x44u;  // (from the original)
    *gptr<u32>(r0_7 + r0) = u32(0x909c78u);  // (from the original)
    r0_8 = r0_7 - 0x44u;  // (from the original)
    *gptr<u32>(r0_8 + r0) = u32(0x909c78u);  // (from the original)
    r0_9 = r0_8 - 0x5cu;  // (from the original)
    *gptr<u32>(r0_9 + r0) = u32(0x909f18u);  // (from the original)
    r0_10 = r0_9 - 0x5cu;  // (from the original)
    *gptr<u32>(r0_10 + r0) = u32(0x909f18u);  // (from the original)
    *gptr<u32>(r0_10 - 0x44u + r0) = u32(0x909c78u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005f0bc4(r0, 0x909c78u, 0x909f18u, r3_1);  // (from the original)
}

}  // namespace d_005d6000
GUEST_EXPORT(0x005d6000, d_005d6000::f_005d6000);

// f_005d60d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d60d4 {

struct __attribute__((packed)) Object_005d60d4_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_005d60d4_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d60d4_0, word_18, 0x18);  // (from the original)


u32 f_005d60d4(gptr<Object_005d60d4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r12_1 = 0;
    u32 r12_2 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 res_2 = 0;
    u32 ea_3 = 0;
    u32 r2_2 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 ea_4 = 0;
    u32 r0_1 = 0;
    r2_1 = arg0->word_14;
    r3_1 = r2_1 + (arg0->word_18 << 1) - r2_1;
    r1 = 0u;
    r12_1 = u32(s32(r3_1) >> 1);
    if (r12_1 == 0 || r12_1 >> 0x1f != (r12_1 & (r12_1 ^ r12_1)) >> 0x1f) {  // (from the original)
        goto L_5d611c;
    }
    r12_2 = r3_1 << 0x1e;  // (from the original)
    r2 = r2_1 - 2u;
    if (r12_2 >> 0x1f != (r12_2 & (r12_2 ^ r12_2)) >> 0x1f) {  // (from the original)
        ea_1 = r2 + 2u;
        *gptr<u16>(ea_1) = u16(r1);
        r2 = ea_1;
    }
    res_1 = u32(s32(r3_1) >> 2);
    r3 = res_1;
    if (res_1 == 0) {
        goto L_5d611c;
    }
    do {
L_5d610c:;
        ea_2 = r2 + 2u;
        *gptr<u16>(ea_2) = u16(r1);
        res_2 = r3 - 1u;
        r3 = res_2;
        ea_3 = r2 + 4u;
        *gptr<u16>(ea_3) = u16(r1);
        r2 = ea_3;
        guest::preempt();
    } while (res_2 != 0);
L_5d611c:;
    r2_2 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    zf_1 = r2_2 == 0;
    cf_1 = r2_2 >= 0u;
    r2 = 0u;
    if (!cf_1 || zf_1) {
        ea_4 = r0 + 0x1cu;  // (from the original)
        r0_1 = *gptr<u32>(ea_4) - 1u;
        *gptr<u8>(*gptr<u32>(ea_4 + 8u) + r0_1) = u8(1u);
        guest::cpu()->r[1] = 1u;
        return r0_1;
    }
    do {
L_5d612c:;
        *gptr<u32>(*gptr<u32>(r0 + 0x20u) + (r2 << 2)) = u32(*gptr<u32>(r0 + 0x14u));  // (from the original)
        *gptr<u8>(*gptr<u32>(r0 + 0x24u) + r2) = u8(r1);  // (from the original)
        r2 = r2 + 1u;
        guest::preempt();
    } while (*gptr<u32>(r0 + 0x1cu) > r2);  // (from the original)
    ea_4 = r0 + 0x1cu;  // (from the original)
    r0_1 = *gptr<u32>(ea_4) - 1u;
    *gptr<u8>(*gptr<u32>(ea_4 + 8u) + r0_1) = u8(1u);
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_005d60d4
GUEST_EXPORT(0x005d60d4, d_005d60d4::f_005d60d4);

// f_005d6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6168 {

struct __attribute__((packed)) Object_005d6168_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_005d6168_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d6168_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x005d6218> global_005d6218;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x005d60d4, u32(u32, u32, u32, u32)> call_005d60d4;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_005d6168(gptr<Object_005d6168_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    u32 r6_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    float S0_3 = 0;
    u32 r0_5 = 0;
    u32 ea_2 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    float S0_4 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    float S0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    arg0->word_0 = u32(0x90883cu);  // (from the original)
    arg0->word_4 = u32(0xff000000u);  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005d6218);
    arg0->word_8 = u32(0xff000000u);  // (from the original)
    arg0->word_c = u32(std::bit_cast<u32>(S0_1));
    arg0->word_10 = u32(std::bit_cast<u32>(S0_1));
    r0_1 = r1 << 1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    r0_2 = call_00779500(r0_1, r7, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    r6_1 = r2 + 1u;
    ea_1 = r0 + 0x14u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0_2);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r6_1);
    r0_3 = 8u + (r6_1 << 2);
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    r0_4 = call_00779500(r0_3, r7, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    S0_3 = guest::cpu()->s[0];
    if (r0_4 != 0) {
        r0_5 = r0_4 + 8u;
        ea_2 = r0_5 - 8u;
        *gptr<u32>(ea_2) = u32(4u);
        *gptr<u32>(ea_2 + 4) = u32(r6_1);
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_3;
        r0_4 = call_00301d0c(r0_5, 0x5e9d4cu, 4u, r6_1);  // (from the original)
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        S0_3 = guest::cpu()->s[0];
    }
    *gptr<u32>(r0 + 0x20u) = u32(r0_4);  // (from the original)
    r0_6 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    r0_7 = call_00779500(r0_6, r7, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    S0_4 = guest::cpu()->s[0];
    *gptr<u32>(r0 + 0x24u) = u32(r0_7);  // (from the original)
    r1_1 = *gptr<u32>(r0 + 0x14u) + (r1 << 1);  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(r1_1);  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_4;
    call_005d60d4(r0, r1_1, r2_3, r3_3);
    r1_2 = guest::cpu()->r[1];
    S0_5 = guest::cpu()->s[0];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_5;
    return r0;
}

}  // namespace d_005d6168
GUEST_EXPORT(0x005d6168, d_005d6168::f_005d6168);

// f_005d6510: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6510 {

struct __attribute__((packed)) Object_005d6510_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d6510_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_005d6510_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005d6510_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x004d60b0, u32(u32, u32, u32, u32)> call_004d60b0;  // (from the original)

u32 f_005d6510(u32 r0_unused, gptr<Object_005d6510_1> arg1, gptr<Object_005d6510_2> arg2) {
    u32 r1 = arg1.addr();
    u32 r2 = arg2.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = arg2->word_10;
    r0_2 = u32(*gptr<u16>(r0_1 + 2u)) & 0xffffu | u32(*gptr<u16>(r0_1)) << 0x10 & 0xffff0000u;  // (from the original)
    r2_1 = r0_2 << 0x18 | r0_2 << 0x10 >> 0x18 << 0x10;  // (from the original)
    r1_1 = r2_1 | r0_2 << 8 >> 0x18 << 8 | r0_2 >> 0x18;  // (from the original)
    r0_3 = arg1->word_0;
    *gptr<u32>(r0_3 + 0x18u) = u32(r1_1);  // (from the original)
    call_004d60b0(r0_3, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = ~1u;
    *gptr<u32>(r1 + 4u) = u32(r1_2 + (*gptr<u32>(r2 + 0x14u) >> 1 << 1) + *gptr<u32>(r1 + 4u));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_005d6510
GUEST_EXPORT(0x005d6510, d_005d6510::f_005d6510);

// f_005d6868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6868 {

inline guest::global<u32, 0x005d6900> global_005d6900;  // (from the original)
inline guest::global<u32, 0x005d6904> global_005d6904;  // (from the original)
inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> call_005d6168;  // (from the original)
inline constexpr guest::Function<0x00779500, u32(u32, u32, u32, u32)> call_00779500;  // (from the original)

u32 f_005d6868(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 b_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 zf_1 = 0;
    u32 cf_1 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0_1 = call_005d6168(r0, r1, r3, r3);
    r3_1 = guest::cpu()->r[3];
    b_1 = r2 << 1;
    *gptr<u32>(r0_1) = u32(0x908854u);  // (from the original)
    *gptr<u32>(r0_1 + 0x2cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_1 + 0x34u) = u32(b_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x30u) = u32(0u);  // (from the original)
    r4 = r0_1;
    *gptr<u8>(r0_1 + 0x38u) = u8(0u);  // (from the original)
    S0 = std::bit_cast<float>(*global_005d6900);
    r0_2 = r0_1 + 0x3cu;  // (from the original)
    *gptr<u32>(r0_2) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0_2 + 4u) = u32(std::bit_cast<u32>(S0));
    if (b_1 != 0) {
        r0_3 = b_1 << 3;
        guest::cpu()->s[0] = S0;
        r0_4 = call_00779500(r0_3, 0x908854u, b_1, r3_1);  // (from the original)
        S0 = guest::cpu()->s[0];
        *gptr<u32>(r4 + 0x30u) = u32(r0_4);  // (from the original)
    }
    *gptr<u32>(r4 + 0x2cu) = u32(0u);  // (from the original)
    r1_1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
    r0 = 0u;
    zf_1 = r1_1 == 0;
    cf_1 = r1_1 >= 0u;
    if (cf_1 && !zf_1) {
        S0 = std::bit_cast<float>(*global_005d6904);
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        return r4;
    }
    do {
L_5d68d4:;
        r1_2 = *gptr<u32>(r4 + 0x30u) + (r0 << 3);  // (from the original)
        r0 = r0 + 1u;
        *gptr<u32>(r1_2) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r1_2 + 4u) = u32(std::bit_cast<u32>(S0));
        r1_1 = *gptr<u32>(r4 + 0x34u);  // (from the original)
        guest::preempt();
    } while (r1_1 > r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0;
    return r4;
}

}  // namespace d_005d6868
GUEST_EXPORT(0x005d6868, d_005d6868::f_005d6868);

// f_005d6fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d6fac {

inline constexpr guest::Function<0x005d6168, u32(u32, u32, u32, u32)> call_005d6168;  // (from the original)
inline constexpr guest::Function<0x005d6868, u32(u32, u32, u32, u32)> call_005d6868;  // (from the original)
inline constexpr guest::Function<0x00601a20, u32(u32, u32, u32, u32)> call_00601a20;  // (from the original)

u32 f_005d6fac(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_005d6868(r0, r1, r2, 0u);
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_005d6168(r0_2, r1, 0u, r3_1);
    r2_1 = guest::cpu()->r[2];
    r3_2 = r0_3 + 0x2cu;  // (from the original)
    *gptr<u32>(r0_3) = u32(0x90886cu);  // (from the original)
    *gptr<u32>(r3_2) = u32(r0_1);
    *gptr<u32>(r3_2 + 4) = u32(0u);
    r5_1 = r0_3 - 0x44u;  // (from the original)
    r1_1 = r0_3 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00601a20(r1_1, r1_1, r2_1, r3_2);
    *gptr<u32>(r0_4) = u32(0x908f2cu);  // (from the original)
    ea_1 = r0_4 + 0x60u;  // (from the original)
    *gptr<u32>(ea_1) = u32(r5_1);
    ea_2 = r0_4 + 0x64u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_3);
    *gptr<u32>(ea_2 + 4) = u32(0u);
    r0_5 = r0_4 - 0x78u;  // (from the original)
    *gptr<u32>(r0_4 + 0x6cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x70u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x74u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x78u) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x7cu) = u32(0u);  // (from the original)
    *gptr<u32>(r0_4 + 0x80u) = u32(0u);  // (from the original)
    *gptr<u8>(r0_4 + 0x84u) = u8(0u);  // (from the original)
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r0_4;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_005d6fac
GUEST_EXPORT(0x005d6fac, d_005d6fac::f_005d6fac);

// f_005d72a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d72a4 {

struct __attribute__((packed)) Object_005d72a4_0 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
};
GUEST_OFFSET(Object_005d72a4_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005d72a4_0, word_30, 0x30);  // (from the original)

struct __attribute__((packed)) Object_005d72a4_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_005d72a4_2, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x005d7384> global_005d7384;  // (from the original)
inline guest::global<u32, 0x005d7388> global_005d7388;  // (from the original)
inline guest::global<u32, 0x005d738c> global_005d738c;  // (from the original)
inline guest::global<u32, 0x005d7390> global_005d7390;  // (from the original)
inline guest::global<u32, 0x005d7394> global_005d7394;  // (from the original)
inline constexpr guest::Function<0x0077a650, u32(u32, u32, u32, u32)> call_0077a650;  // (from the original)

u32 f_005d72a4(gptr<Object_005d72a4_0> arg0, u32 r1, gptr<Object_005d72a4_2> arg2) {
    u32 r0 = arg0.addr();
    u32 r2 = arg2.addr();
    u32 fpsr = guest::cpu()->fpscr;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    float S2_1 = 0;
    float S1_1 = 0;
    u32 r3_1 = 0;
    u32 fpsr_1 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 cf_1 = 0;
    float S3_1 = 0;
    float S2_2 = 0;
    float S3_2 = 0;
    float S2_3 = 0;
    float S0_2 = 0;
    float S0_3 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    float S0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    S0_1 = std::bit_cast<float>(*global_005d7384);
    r0_1 = arg0->word_2c;
    r1_1 = arg0->word_30;
    r2_1 = *gptr<u32>(r0_1 + 0x2cu);  // (from the original)
    S2_1 = float(s32(std::bit_cast<u32>(std::bit_cast<float>(sxth(u32(*gptr<u16>(arg2->word_10)))))));
    S1_1 = std::bit_cast<float>(*global_005d7388);
    r3_1 = *gptr<u32>(r0_1 + 0x34u);  // (from the original)
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S2_1, S0_1);  // (from the original)
    nf_1 = fpsr_1 >> 0x1f;  // (from the original)
    vf_1 = fpsr_1 >> 0x1c & 1;  // (from the original)
    if (nf_1 == vf_1) {
        S2_1 = S2_1 + S1_1;
    }
    if (nf_1 != vf_1) {
        S2_1 = S2_1 - S1_1;
    }
    cf_1 = r2_1 >= r3_1;
    if (!cf_1) {
        cf_1 = r1_1 >= r3_1;
    }
    S3_1 = S2_1 * std::bit_cast<float>(*global_005d738c);
    if (cf_1) {
        goto L_5d7324;
    }
    if (r2_1 < r1_1) {
        goto L_5d7324;
    }
    r0_1 = *gptr<u32>(r0_1 + 0x30u);  // (from the original)
    if (r0_1 == 0) {
        goto L_5d7324;
    }
    r0_1 = r0_1 + (r1_1 << 3);
    S0_1 = std::bit_cast<float>(*gptr<u32>(r0_1));
    S2_2 = std::bit_cast<float>(*gptr<u32>(r0_1 + 4u));
    goto L_5d7328;
L_5d7324:;
    S2_2 = S0_1;
L_5d7328:;
    S3_2 = S2_2 - S3_1;
    S2_3 = std::bit_cast<float>(*global_005d7390);
    S0_2 = S0_1 + S3_2 * S1_1 + S2_3 + S1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
    guest::cpu()->s[2] = S2_3;
    guest::cpu()->s[3] = S3_2;
    call_0077a650(r0_1, r1_1, r2_1, r3_1);
    S0_3 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    r1_2 = ~1u;
    *gptr<u32>(*gptr<u32>(r1) + 0x2cu) = u32(std::bit_cast<u32>(S0_3));  // (from the original)
    S0_4 = std::bit_cast<float>(*global_005d7394);
    *gptr<u32>(*gptr<u32>(r1) + 0x4cu) = u32(std::bit_cast<u32>(S0_4));  // (from the original)
    *gptr<u32>(r0 + 0x30u) = u32(*gptr<u32>(r0 + 0x30u) + 1u);  // (from the original)
    *gptr<u32>(r1 + 4u) = u32(r1_2 + (*gptr<u32>(r2 + 0x14u) >> 1 << 1) + *gptr<u32>(r1 + 4u));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->s[0] = S0_4;
    guest::cpu()->s[1] = S1_2;
    return 0u;
}

}  // namespace d_005d72a4
GUEST_EXPORT(0x005d72a4, d_005d72a4::f_005d72a4);

// f_005d79bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79bc {

struct __attribute__((packed)) Object_005d79bc_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d79bc_0, word_0, 0x0);  // (from the original)


void f_005d79bc(gptr<Object_005d79bc_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    if (r1 >= 7u) {
        r1_1 = 0x890eb0u;  // (from the original)
    } else {
        r1_1 = 0x890e5cu + (r1 + (r1 << 1) << 2);  // (from the original)
    }
    arg0->word_0 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005d79bc
GUEST_EXPORT(0x005d79bc, d_005d79bc::f_005d79bc);

// f_005d79e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d79e0 {

inline guest::global<u32, 0x005d7a3c> global_005d7a3c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x005d7a8c, u32(u32, u32, u32, u32)> call_005d7a8c;  // (from the original)

u32 f_005d79e0(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3, float S0) {
    u32 r13 = guest::cpu()->r[13];
    float S1_1 = 0;
    float S0_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    float S0_2 = 0;
    float S1_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    float S0_3 = 0;
    float S1_3 = 0;
    S1_1 = std::bit_cast<float>(*global_005d7a3c);
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    S0_1 = std::bit_cast<float>(vcvt_sz_f(S0 * S1_1));
    *gptr<u16>(0x95df1cu + 8u) = u16(std::bit_cast<u32>(S0_1));  // (from the original)
    *gptr<u32>(r13) = u32(0x95df1cu);  // (from the original)
    if ((*gptr<u32>(0x95df1cu + 0xffffffd8u) & 1u) != 0) {  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = 0x95df1cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        return 0xad5718u;  // (from the original)
    }
    r0_1 = 0x95df1cu - 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    r0_2 = call_002fe7dc(r0_1, 0x95df1cu, guest::cpu()->r[2], r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    S0_2 = guest::cpu()->s[0];
    S1_2 = guest::cpu()->s[1];
    if (r0_2 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0_2;
        guest::cpu()->s[1] = S1_2;
        return 0xad5718u;  // (from the original)
    }
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_2;
    call_005d7a8c(0xad5718u, r1_2, guest::cpu()->r[2], r3_1);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    S0_3 = guest::cpu()->s[0];
    S1_3 = guest::cpu()->s[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0_3;
    guest::cpu()->s[1] = S1_3;
    return 0xad5718u;  // (from the original)
}

}  // namespace d_005d79e0
GUEST_EXPORT(0x005d79e0, d_005d79e0::f_005d79e0);

// f_005d7a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a4c {

struct __attribute__((packed)) Object_005d7a4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_005d7a4c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a4c_1, word_0, 0x0);  // (from the original)


void f_005d7a4c(gptr<Object_005d7a4c_0> arg0, gptr<Object_005d7a4c_1> arg1) {
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    r1_1 = arg1->word_0;
    r1_2 = r1_1 << 0x18 | r1_1 << 0x10 >> 0x18 << 0x10 | r1_1 << 8 >> 0x18 << 8 | r1_1 >> 0x18;  // (from the original)
    *gptr<u16>(0x95df34u + 8u) = u16(r1_2 >> 0x10);  // (from the original)
    *gptr<u16>(0x95df34u + 0xau) = u16(r1_2);  // (from the original)
    arg0->word_0 = u32(0x95df34u);  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_005d7a4c
GUEST_EXPORT(0x005d7a4c, d_005d7a4c::f_005d7a4c);

// f_005d7a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d7a8c {

struct __attribute__((packed)) Object_005d7a8c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_005d7a8c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d7a8c_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Object_005d7a8c_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_005d7a8c_1, word_0, 0x0);  // (from the original)


void f_005d7a8c(gptr<Object_005d7a8c_0> arg0, gptr<Object_005d7a8c_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(~0x80000000u);  // (from the original)
    arg0->word_8 = u32(~0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    r2_1 = arg1->word_0;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    arg0->word_0 = u32(r2_1);
    arg0->word_4 = u32(u32(*gptr<u16>(r2_1 + 2u)));
    arg0->word_8 = u32(u32(*gptr<u16>(r2_1 + 4u)));
    arg0->word_c = u32(u32(*gptr<u16>(r2_1 + 6u)));
    arg0->word_10 = u32(arg1->word_0 + 8u);
    r1_1 = arg0->word_c + 8u;
    arg0->word_14 = u32(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_005d7a8c
GUEST_EXPORT(0x005d7a8c, d_005d7a8c::f_005d7a8c);

// f_005d8274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8274 {

struct __attribute__((packed)) Object_005d8274_1 {
    u8 unknown_0[0x344];  // (not used here)
    u32 word_344;
};
GUEST_OFFSET(Object_005d8274_1, word_344, 0x344);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x005f05e4, u32(u32, u32, u32, u32)> call_005f05e4;  // (from the original)
inline constexpr guest::Function<0x0081c8b8, u32(u32, u32, u32, u32)> call_0081c8b8;  // (from the original)
inline constexpr guest::Function<0x0081c9bc, u32(u32, u32, u32, u32)> call_0081c9bc;  // (from the original)
inline constexpr guest::Function<0x0081d8c0, u32(u32, u32, u32, u32)> call_0081d8c0;  // (from the original)
inline constexpr guest::Function<0x0081e8d0, u32(u32, u32, u32, u32)> call_0081e8d0;  // (from the original)

u32 f_005d8274(u32 r0, gptr<Object_005d8274_1> arg1, u32 r2, u32 r3) {
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r3_11 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r0_26 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 r0_27 = 0;
    r13 = r13 - 8;
    r1_1 = arg1->word_344;
    if (r1_1 != 0) {
        r1_1 = r1_1 + 0x8cu;  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_005f05e4(r0, r1_1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r0_1) = u32(0x908884u);  // (from the original)
    *gptr<u32>(0x11cd0u + r0_1) = u32(r1);  // (from the original)
    r0_2 = r0_1 + 0x11cd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00312bd0(r0_2, 0x11cd0u, 0x908884u, r3_1);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_0081d8c0(r0_4, r1_2, r2_1, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_0081d8c0(r0_6, r1_3, r2_2, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_00312bd0(r0_8, r1_4, r2_3, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00312bd0(r0_10, r1_5, r2_4, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r0_11 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_00312bd0(r0_12, r1_6, r2_5, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x44u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_0081e8d0(r0_14, r1_7, r2_6, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_16 = r0_15 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_0081c9bc(r0_16, r1_8, r2_7, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r0_17 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_0081c8b8(r0_18, r1_9, r2_8, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_20 = r0_19 + 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_21 = call_0081c9bc(r0_20, r1_10, r2_9, r3_10);
    r0_22 = r0_21 + 0x34u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_23 = call_00301d0c(r0_22, 0x81d370u, 0x44u, 0xau);  // (from the original)
    r0_24 = r0_23 + 0x2a8u;  // (from the original)
    r3_11 = r0_24 + 4u;
    *gptr<u32>(r3_11) = u32(r0_24 + 0x18u);  // (from the original)
    *gptr<u32>(r3_11 + 4) = u32(0x11u);  // (from the original)
    r4 = r0_24;
    *gptr<u32>(r0_24) = u32(0x909b60u);  // (from the original)
    r0_25 = r0_24 + 0xcu;  // (from the original)
    r1_11 = ~0u;
    *gptr<u8>(r0_25) = u8(4u);
    *gptr<u32>(r0_25 + 4u) = u32(r1_11);
    *gptr<u32>(r0_25 + 8u) = u32(r1_11);
    r0_26 = r4 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_26, 0x22u, 4u, r3_11);  // (from the original)
    r1 = 0u;
    r0 = r4 + 0x18u;  // (from the original)
    r2 = 8u;
    *gptr<u16>(r4 + 0x18u) = u16(r1);  // (from the original)
    do {
L_5d8354:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r1);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    r0_27 = r4 - 0x12208u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_27;
}

}  // namespace d_005d8274
GUEST_EXPORT(0x005d8274, d_005d8274::f_005d8274);

// f_005d8ec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005d8ec8 {

struct __attribute__((packed)) Object_005d8ec8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 unknown_d[0x3];  // (not used here)
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
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u32 word_60;
    u32 word_64;
    u32 word_68;
    u32 word_6c;
    u32 word_70;
    u32 word_74;
    u32 word_78;
    u32 word_7c;
    u32 word_80;
    u32 word_84;
    u32 word_88;
    u32 word_8c;
    u32 word_90;
    u32 word_94;
    u32 word_98;
    u32 word_9c;
    u32 word_a0;
    u32 word_a4;
    u32 word_a8;
    u8 byte_ac;
    u8 unknown_ad[0x3];  // (not used here)
    u32 word_b0;
    u8 byte_b4;
    u8 unknown_b5[0x3];  // (not used here)
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u8 byte_c4;
    u8 unknown_c5[0x3];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_005d8ec8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, byte_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_005d8ec8_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

u32 f_005d8ec8(gptr<Object_005d8ec8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 ea_2 = 0;
    u32 ea_3 = 0;
    u32 r0_2 = 0;
    u32 ea_4 = 0;
    u32 res_2 = 0;
    u32 ea_5 = 0;
    u32 r2_1 = 0;
    r13 = r13 - 0x18;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r6);
    arg0->word_4 = u32(r6);
    arg0->word_8 = u32(r6);
    arg0->byte_c = u8(1u);
    arg0->word_10 = u32(r6);
    arg0->word_14 = u32(r6);
    arg0->word_18 = u32(r6);
    arg0->word_1c = u32(r6);
    arg0->word_20 = u32(r6);
    arg0->word_24 = u32(r6);
    arg0->word_28 = u32(r6);
    arg0->word_2c = u32(r6);
    arg0->word_30 = u32(r6);
    arg0->word_34 = u32(r6);
    arg0->word_38 = u32(r6);
    arg0->word_3c = u32(r6);
    arg0->word_40 = u32(r6);
    arg0->word_44 = u32(r6);
    arg0->word_48 = u32(r6);
    arg0->word_4c = u32(r6);
    arg0->word_50 = u32(r6);
    arg0->word_54 = u32(r6);
    arg0->word_58 = u32(r6);
    arg0->word_5c = u32(r6);
    arg0->word_60 = u32(r6);
    arg0->word_64 = u32(r6);
    arg0->word_68 = u32(r6);
    arg0->word_6c = u32(r6);
    arg0->word_70 = u32(r6);
    arg0->word_74 = u32(r6);
    arg0->word_78 = u32(r6);
    arg0->word_7c = u32(r6);
    arg0->word_80 = u32(r6);
    arg0->word_84 = u32(r6);
    arg0->word_88 = u32(r6);
    arg0->word_8c = u32(r6);
    arg0->word_90 = u32(r6);
    arg0->word_94 = u32(r6);
    arg0->word_98 = u32(r6);
    r7 = ~0u;
    arg0->word_9c = u32(r6);
    arg0->word_a0 = u32(r6);
    arg0->word_a4 = u32(r7);
    arg0->word_a8 = u32(r7);
    arg0->byte_ac = u8(5u);
    arg0->word_b0 = u32(r6);
    r4_1 = r0 + 0xb8u;  // (from the original)
    arg0->byte_b4 = u8(0x27u);  // (from the original)
    arg0->word_bc = u32(r0 + 0xd0u);  // (from the original)
    arg0->word_c0 = u32(0x600u);  // (from the original)
    r8 = 4u;
    arg0->word_b8 = u32(0x909ab8u);  // (from the original)
    arg0->byte_c4 = u8(r8);
    arg0->word_c8 = u32(r7);
    r0_1 = r4_1 + 0x18u;  // (from the original)
    arg0->word_cc = u32(r7);
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_1, 0xc00u, 0x27u, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r5 = r4_1 + 0xc18u;  // (from the original)
    r0 = r4_1 + 0x16u;  // (from the original)
    r1 = 0x300u;  // (from the original)
    do {
L_5d8fdc:;
        ea_1 = r0 + 2u;
        *gptr<u16>(ea_1) = u16(r6);
        res_1 = r1 - 1u;
        r1 = res_1;
        ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r6);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    ea_3 = r5 + 4u;
    *gptr<u32>(ea_3) = u32(r5 + 0x18u);  // (from the original)
    *gptr<u32>(ea_3 + 4) = u32(0x190u);  // (from the original)
    *gptr<u32>(r5) = u32(0x909ff8u);  // (from the original)
    *gptr<u8>(r5 + 0xcu) = u8(r8);  // (from the original)
    *gptr<u32>(r5 + 0x10u) = u32(r7);  // (from the original)
    r0_2 = r5 + 0x18u;  // (from the original)
    *gptr<u32>(r5 + 0x14u) = u32(r7);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f825c(r0_2, 0x320u, r2, guest::cpu()->r[3]);  // (from the original)
    r0 = r5 + 0x16u;  // (from the original)
    r1 = 0xc8u;  // (from the original)
    do {
L_5d9020:;
        ea_4 = r0 + 2u;
        *gptr<u16>(ea_4) = u16(r6);
        res_2 = r1 - 1u;
        r1 = res_2;
        ea_5 = r0 + 4u;
        *gptr<u16>(ea_5) = u16(r6);
        r0 = ea_5;
        guest::preempt();
    } while (res_2 != 0);
    r0 = r5 - 0xcd0u;  // (from the original)
    r1 = 0u;
    do {
L_5d9038:;
        r2_1 = r0 + (r1 << 2);
        r1 = r1 + 2u;
        *gptr<u32>(r2_1 + 0x10u) = u32(r6);  // (from the original)
        *gptr<u32>(r2_1 + 0x50u) = u32(r6);  // (from the original)
        *gptr<u32>(r2_1 + 0x14u) = u32(r6);  // (from the original)
        *gptr<u32>(r2_1 + 0x54u) = u32(r6);  // (from the original)
        guest::preempt();
    } while (r1 < 0x10u);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_005d8ec8
GUEST_EXPORT(0x005d8ec8, d_005d8ec8::f_005d8ec8);

// f_005daf1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005daf1c {

inline guest::global<u8, 0x0094fd25> global_0094fd25;  // (from the original)
inline constexpr guest::Function<0x002bf9cc, u32(u32, u32, u32, u32)> call_002bf9cc;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)

u32 f_005daf1c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r3);  // (from the original)
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r1_1 = u32(*global_0094fd25);
    if (r1_1 >= 0x10u) {  // (from the original)
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    if (r0_1 == 0) {
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    *gptr<u32>(r13) = u32(1u);
    r0_2 = r0_1 + 0x6bd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002bf9cc(r0_2, r1_1, 0x95bfdcu, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005daf1c
GUEST_EXPORT(0x005daf1c, d_005daf1c::f_005daf1c);

// f_005dc374: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc374 {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dc374(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1_1 = r13;
    r2_1 = ~0u;
    r0_1 = r0 + 0xcu;  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013cd00(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = r13;
    r2_2 = ~0u;
    r0_2 = r0 + 0x38u;  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0_3 = call_0013cd00(r0_2, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005dc374
GUEST_EXPORT(0x005dc374, d_005dc374::f_005dc374);

// f_005dc9d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dc9d4 {

inline constexpr guest::Function<0x002bf814, u32(u32, u32, u32, u32)> call_002bf814;  // (from the original)
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> call_002fb94c;  // (from the original)
inline constexpr guest::Function<0x005c81f4, u32(u32, u32, u32, u32)> call_005c81f4;  // (from the original)

u32 f_005dc9d4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002fb94c(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = r0_1 + 0x6bd0u;  // (from the original)
        r0_3 = call_002bf814(r0_2, r1, r2, 1u);
        r1_2 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_005c81f4(r0_3, r1_2, r2_1, r3_1);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_005dc9d4
GUEST_EXPORT(0x005dc9d4, d_005dc9d4::f_005dc9d4);

// f_005dd400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd400 {

struct __attribute__((packed)) Object_005dd400_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
};
GUEST_OFFSET(Object_005dd400_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_005dd400_0, word_18, 0x18);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dd400(gptr<Object_005dd400_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 ea_2 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    *gptr<u8>(arg0->word_18) = u8(u32(*global_008c9f1c));
    *gptr<u32>(r13 + 4u) = u32(r2);
    r0_1 = r0 + 0x40u;  // (from the original)
    r1_1 = r13;
    r2_1 = ~0u;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0013cd00(r0_1, r1_1, r2_1, 0x9047f8u);  // (from the original)
    ea_1 = r0 + 0x70u;  // (from the original)
    r0_2 = *gptr<u32>(ea_1);
    *gptr<u8>(r0_2) = u8(u32(*global_008c9f1c));
    r0_3 = ~0u;
    ea_2 = r0 + 0x98u;  // (from the original)
    *gptr<u32>(ea_2) = u32(r0_3);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    *gptr<u32>(r0 + 0xa0u) = u32(r0_3);  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(r0_3);  // (from the original)
    *gptr<u32>(r0 + 0xa8u) = u32(r0_3);  // (from the original)
    *gptr<u8>(r0 + 0xacu) = u8(2u);  // (from the original)
    *gptr<u8>(r0 + 0xadu) = u8(0u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = 2u;
    guest::cpu()->r[13] = r13;
    return r0_3;
}

}  // namespace d_005dd400
GUEST_EXPORT(0x005dd400, d_005dd400::f_005dd400);

// f_005dd51c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd51c {

inline constexpr guest::Function<0x0013cd00, u32(u32, u32, u32, u32)> call_0013cd00;  // (from the original)

u32 f_005dd51c(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    r13 = r13 - 0x10u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1_1 = r13;
    r2_1 = ~0u;
    r0_1 = r0 + 8u;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0013cd00(r0_1, r1_1, r2_1, 0x9047f8u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_005dd51c
GUEST_EXPORT(0x005dd51c, d_005dd51c::f_005dd51c);

// f_005dd5b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005dd5b8 {

inline constexpr guest::Function<0x00544a20, u32(u32, u32, u32, u32)> call_00544a20;  // (from the original)
inline constexpr guest::Function<0x00544d08, u32(u32, u32, u32, u32)> call_00544d08;  // (from the original)
inline constexpr guest::Function<0x00544f18, u32(u32, u32, u32, u32)> call_00544f18;  // (from the original)
inline constexpr guest::Function<0x00544fec, u32(u32, u32, u32, u32)> call_00544fec;  // (from the original)
inline constexpr guest::Function<0x0054a644, u32(u32, u32, u32, u32)> call_0054a644;  // (from the original)

u32 f_005dd5b8(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r5_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x58u;  // (from the original)
    r1_1 = r0 + 0x34u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_0054a644(r0_1, r1_1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00544fec(r0_2, 0x894b7cu, r2_1, guest::cpu()->r[3]);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    *gptr<u32>(r13 + 0x48u) = u32(r1);  // (from the original)
    r5_1 = r13 + 0x48u;  // (from the original)
    r1_2 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00544a20(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    if (r0_4 != 0) {
        r2_4 = *gptr<u32>(r0_3 + 4u);
        if (u32(*gptr<u8>(r13 + 0x28u)) == 0) {  // (from the original)
            r1_4 = 0u;
        } else {
            r1_4 = r13 + 0x28u;  // (from the original)
        }
        guest::cpu()->r[13] = r13;
        call_00544d08(r5_1, r1_4, r2_4, guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    }
    guest::cpu()->r[13] = r13;
    call_00544f18(r0_3, r1_3, r2_3, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r0_5 = r13 + 0x1cu;  // (from the original)
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_005dd5b8
GUEST_EXPORT(0x005dd5b8, d_005dd5b8::f_005dd5b8);
