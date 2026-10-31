// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_00100088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100088 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100088(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1000b4u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(0x215800u, r0_2, r0, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x64u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x64u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100088
GUEST_EXPORT(0x00100089, d_00100088::f_00100088);

// f_001000c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001000c4 {

inline constexpr guest::Function<0x0012033c, u32(u32, u32, u32, u32)> call_0012033c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001000c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r0_6 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_0012033c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e64(r0_2, 0x1000f8u, r2_1, r3_1);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f6e78(r0_1, r0_3, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x48u) = u32(r0_4);  // (from the original)
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_5, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r0_6 = *gptr<u32>(0x952c38u + 0x48u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_001000c4
GUEST_EXPORT(0x001000c5, d_001000c4::f_001000c4);

// f_0010018c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010018c {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010018c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 0x19u << 0xc;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1001c0u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x74u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x74u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0010018c
GUEST_EXPORT(0x0010018d, d_0010018c::f_0010018c);

// f_001001d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001001d0 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001001d0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 1u << 0xa;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x100204u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x44u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x44u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001001d0
GUEST_EXPORT(0x001001d1, d_001001d0::f_001001d0);

// f_001002a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001002a4 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001002a4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 0xbu << 0x13;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1002d8u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x5cu) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x5cu);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001002a4
GUEST_EXPORT(0x001002a5, d_001002a4::f_001002a4);

// f_001002e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001002e8 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001002e8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10031cu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(0xeb8000u, r0_2, r0, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 4u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 4u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001002e8
GUEST_EXPORT(0x001002e9, d_001002e8::f_001002e8);

// f_0010032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010032c {

inline constexpr guest::Function<0x0012089c, u32(u32, u32, u32, u32)> call_0012089c;  // (from the original)
inline constexpr guest::Function<0x001209ec, u32(u32, u32, u32, u32)> call_001209ec;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010032c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_001209ec(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e64(r0_2, 0x100368u, r2_1, r3_1);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f6e78(r0_1, r0_3, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x4cu) = u32(r0_4);  // (from the original)
    r0_5 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_5, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = *gptr<u32>(0x952c38u + 0x4cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0012089c(r0_6, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r0_7 = *gptr<u32>(0x952c38u + 0x4cu);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0010032c
GUEST_EXPORT(0x0010032d, d_0010032c::f_0010032c);

// f_00100378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100378 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100378(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1003acu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(0xd4800u, r0_2, r0, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x68u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x68u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100378
GUEST_EXPORT(0x00100379, d_00100378::f_00100378);

// f_001003bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001003bc {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001003bc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 0x3bu << 9;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1003f0u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x10u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x10u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001003bc
GUEST_EXPORT(0x001003bd, d_001003bc::f_001003bc);

// f_00100400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100400 {

struct __attribute__((packed)) Object_00100400_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00100400_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00100400_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x00952c38> global_00952c38;  // (from the original)
inline constexpr guest::Function<0x00122620, u32(u32, u32, u32, u32)> call_00122620;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100400(gptr<Object_00100400_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r5_1 = arg0->word_c;
    r4_1 = arg0->word_8;
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x100434u, r2, r3);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00131e5c(r4_1, r5_1, r0_2, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *global_00952c38 = u32(r0_3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = *global_00952c38;
    guest::cpu()->r[13] = r13;
    call_00122620(0xae53b8u, r1_2, r2_2, r3_2);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r0_5 = *global_00952c38;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100400
GUEST_EXPORT(0x00100401, d_00100400::f_00100400);

// f_00100448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100448 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100448(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 0xa5u << 0xc;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10047cu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x1cu) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x1cu);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100448
GUEST_EXPORT(0x00100449, d_00100448::f_00100448);

// f_00100490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100490 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> call_002f70b4;  // (from the original)

u32 f_00100490(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1004c0u, r2, r3);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f70b4(0x2710u, 9u, r0_2, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x38u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x38u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100490
GUEST_EXPORT(0x00100491, d_00100490::f_00100490);

// f_001004dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001004dc {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001004dc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x100510u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(0x23fc00u, r0_2, r0, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x30u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x30u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001004dc
GUEST_EXPORT(0x001004dd, d_001004dc::f_001004dc);

// f_00100528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100528 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100528(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10055cu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(0x238333u, r0_2, r0, 1u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x2cu) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x2cu);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100528
GUEST_EXPORT(0x00100529, d_00100528::f_00100528);

// f_00100574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100574 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_00100574(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r4_1 = 0xfu << 0xe;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1005a8u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x3cu) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x3cu);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_00100574
GUEST_EXPORT(0x00100575, d_00100574::f_00100574);

// f_001005c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001005c0 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> call_002f70b4;  // (from the original)

u32 f_001005c0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x1005f0u, r2, r3);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f70b4(0x18u, 0x10u, r0_2, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x34u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x34u);  // (from the original)
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_001005c0
GUEST_EXPORT(0x001005c1, d_001005c0::f_001005c0);

// f_00100608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100608 {

inline constexpr guest::Function<0x00127d54, u32(u32, u32, u32, u32)> call_00127d54;  // (from the original)
inline constexpr guest::Function<0x00127f88, u32(u32, u32, u32, u32)> call_00127f88;  // (from the original)
inline constexpr guest::Function<0x001282a8, u32(u32, u32, u32, u32)> call_001282a8;  // (from the original)
inline constexpr guest::Function<0x00128454, u32(u32, u32, u32, u32)> call_00128454;  // (from the original)
inline constexpr guest::Function<0x00128490, u32(u32, u32, u32, u32)> call_00128490;  // (from the original)
inline constexpr guest::Function<0x001284cc, u32(u32, u32, u32, u32)> call_001284cc;  // (from the original)
inline constexpr guest::Function<0x0012853c, u32(u32, u32, u32, u32)> call_0012853c;  // (from the original)
inline constexpr guest::Function<0x001285c8, u32(u32, u32, u32, u32)> call_001285c8;  // (from the original)
inline constexpr guest::Function<0x001288e8, u32(u32, u32, u32, u32)> call_001288e8;  // (from the original)
inline constexpr guest::Function<0x0012b6c0, u32(u32, u32, u32, u32)> call_0012b6c0;  // (from the original)
inline constexpr guest::Function<0x0012b7c4, u32(u32, u32, u32, u32)> call_0012b7c4;  // (from the original)
inline constexpr guest::Function<0x0012cb84, u32(u32, u32, u32, u32)> call_0012cb84;  // (from the original)
inline constexpr guest::Function<0x0012cc78, u32(u32, u32, u32, u32)> call_0012cc78;  // (from the original)
inline constexpr guest::Function<0x0012d19c, u32(u32, u32, u32, u32)> call_0012d19c;  // (from the original)
inline constexpr guest::Function<0x0012d3ac, u32(u32, u32, u32, u32)> call_0012d3ac;  // (from the original)
inline constexpr guest::Function<0x0012d444, u32(u32, u32, u32, u32)> call_0012d444;  // (from the original)
inline constexpr guest::Function<0x001325e4, u32(u32, u32, u32, u32)> call_001325e4;  // (from the original)
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> call_002f737c;  // (from the original)

u32 f_00100608(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r0_12 = 0;
    u32 r1_12 = 0;
    u32 r0_13 = 0;
    u32 r1_13 = 0;
    u32 r0_14 = 0;
    u32 r1_14 = 0;
    u32 r0_15 = 0;
    u32 r1_15 = 0;
    u32 r0_16 = 0;
    u32 r1_16 = 0;
    u32 r0_17 = 0;
    u32 r1_17 = 0;
    u32 r1_18 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f737c(r0, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f737c(r0, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f737c(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_002f737c(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r0_2 = call_001282a8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_3 = call_0012cc78(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r0_4 = call_00128454(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_4 = guest::cpu()->r[1];
        r0_5 = call_001284cc(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_5 = guest::cpu()->r[1];
        r0_6 = call_001288e8(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_6 = guest::cpu()->r[1];
        r0_7 = call_00128490(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r0_8 = call_0012b6c0(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r0_9 = call_0012cb84(r0_8, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r0_10 = call_0012d3ac(r0_9, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_10 = guest::cpu()->r[1];
        r0_11 = call_0012853c(r0_10, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_11 = guest::cpu()->r[1];
        r0_12 = call_00127d54(r0_11, r1_11, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_12 = guest::cpu()->r[1];
        r0_13 = call_0012d444(r0_12, r1_12, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_13 = guest::cpu()->r[1];
        r0_14 = call_00127f88(r0_13, r1_13, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_14 = guest::cpu()->r[1];
        r0_15 = call_001285c8(r0_14, r1_14, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_15 = guest::cpu()->r[1];
        call_001325e4(r0_15, r1_15, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_16 = call_002f737c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_16 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_16;
        return 1u;
    }
    r0_17 = call_0012d19c(r0_16, r1_16, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_17 = guest::cpu()->r[1];
    call_0012b7c4(r0_17, r1_17, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_18 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_18;
    return 1u;
}

}  // namespace d_00100608
GUEST_EXPORT(0x00100609, d_00100608::f_00100608);

// f_00100684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100684 {

inline constexpr guest::Function<0x0012d198, u32(u32, u32, u32, u32)> call_0012d198;  // (from the original)
inline constexpr guest::Function<0x0012d3f4, u32(u32, u32, u32, u32)> call_0012d3f4;  // (from the original)
inline constexpr guest::Function<0x0014f6fc, u32(u32, u32, u32, u32)> call_0014f6fc;  // (from the original)
inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;  // (from the original)
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;  // (from the original)
inline constexpr guest::Function<0x002f74a8, u32(u32, u32, u32, u32)> call_002f74a8;  // (from the original)
inline constexpr guest::Function<0x002f74b0, u32(u32, u32, u32, u32)> call_002f74b0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_00100684(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r3_8 = 0;
    u32 r0_16 = 0;
    u32 r3_9 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r3_10 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = r0;
    r0_1 = r4 + 0xe5ccu;  // (from the original)
    *gptr<u32>(0x950130u + 0x18u) = u32(0u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f73b8(r0_1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r4 + 0xe6d4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f747c(r0_2, r1_1, guest::cpu()->r[2], r3_1);
    r1_2 = guest::cpu()->r[1];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0012d3f4(r4, r1_2, guest::cpu()->r[2], r3_2);
    r1_3 = guest::cpu()->r[1];
    r3_3 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 0xe7e8u) != 0) {  // (from the original)
        r0_3 = r4 + 0xe6dcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_3, r1_3, guest::cpu()->r[2], r3_3);
        r1_4 = guest::cpu()->r[1];
        r3_4 = guest::cpu()->r[3];
        r0_4 = r4 + 0xe7e4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f747c(r0_4, r1_4, guest::cpu()->r[2], r3_4);
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    if (*gptr<u32>(r4 + 0xe8f8u) != 0) {  // (from the original)
        r0_5 = r4 + 0xe7ecu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_5, r1_3, guest::cpu()->r[2], r3_3);
        r1_5 = guest::cpu()->r[1];
        r3_5 = guest::cpu()->r[3];
        r0_6 = r4 + 0xe8f4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f747c(r0_6, r1_5, guest::cpu()->r[2], r3_5);
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    if (*gptr<u32>(r4 + (0x75u << 9) + 8u) != 0) {  // (from the original)
        r0_7 = r4 + 0xe8fcu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f73b8(r0_7, r1_3, guest::cpu()->r[2], r3_3);
        r1_6 = guest::cpu()->r[1];
        r3_6 = guest::cpu()->r[3];
        r0_8 = r4 + 0xea04u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f747c(r0_8, r1_6, guest::cpu()->r[2], r3_6);
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    *gptr<u32>(0x950130u + 0x28u) = u32(0u);  // (from the original)
    r0_9 = r4 + 0xef94u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_002f74a8(r0_9, r1_3, guest::cpu()->r[2], r3_3);
    r1_7 = guest::cpu()->r[1];
    r3_7 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        guest::cpu()->r[13] = r13;
        call_002f74b0(r0_9, r1_7, guest::cpu()->r[2], r3_7);
        r1_7 = guest::cpu()->r[1];
        r3_7 = guest::cpu()->r[3];
    }
    r0_11 = r4 + 0xefe0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_002f74a8(r0_11, r1_7, guest::cpu()->r[2], r3_7);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        guest::cpu()->r[13] = r13;
        call_002f74b0(r0_11, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    r7 = 0xf02cu;  // (from the original)
    r5 = 0u;
    do {
L_100722:;
        r0_13 = 0x4cu * r5 + r4 + r7;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_14 = call_002f74a8(r0_13, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (!(r0_14 == 0)) {
            guest::cpu()->r[13] = r13;
            r0_14 = call_002f74b0(r0_13, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    guest::cpu()->r[13] = r13;
    r0_15 = call_0012d198(r0_14, r1, guest::cpu()->r[2], r3);
    r1_8 = guest::cpu()->r[1];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_16 = call_002f74c8(r0_15, r1_8, guest::cpu()->r[2], r3_8);
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f74e0(0x40u, r0_16, guest::cpu()->r[2], r3_9);  // (from the original)
    r1_9 = guest::cpu()->r[1];
    r3_10 = guest::cpu()->r[3];
    if (r0_17 != 0) {
        guest::cpu()->r[13] = r13;
        call_0014f6fc(r0_17, r1_9, guest::cpu()->r[2], r3_10);
        r1_9 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return 2u;
}

}  // namespace d_00100684
GUEST_EXPORT(0x00100685, d_00100684::f_00100684);

// f_0010082c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010082c {


u32 f_0010082c() {
    return guest::call_address<u32>(0x100835u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010082c
GUEST_EXPORT(0x0010082c, d_0010082c::f_0010082c);

// f_00100848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100848 {


u32 f_00100848() {
    return guest::call_address<u32>(0x100851u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00100848
GUEST_EXPORT(0x00100848, d_00100848::f_00100848);

// f_00100a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100a8c {

inline constexpr guest::Function<0x001389c0, u32(u32, u32, u32, u32)> call_001389c0;  // (from the original)
inline constexpr guest::Function<0x001389e4, u32(u32, u32, u32, u32)> call_001389e4;  // (from the original)
inline constexpr guest::Function<0x001389f8, u32(u32, u32, u32, u32)> call_001389f8;  // (from the original)
inline constexpr guest::Function<0x001389fc, u32(u32, u32, u32, u32)> call_001389fc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7708, u32(u32, u32, u32, u32)> call_002f7708;  // (from the original)

u32 f_00100a8c(u32 r0) {
    u32 r4_1 = 0;
    u32 r4_2 = 0;
    u32 r0_1 = 0;
    u32 r4_3 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_4 = 0;
    u32 r1_1 = 0;
    u32 r0_15 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0 + 0x1976cu;  // (from the original)
    call_002f76ac(r4_1, 0x100b8du, 0x2518u, 4u);  // (from the original)
    r4_2 = r4_1 + 0xffffee8au;  // (from the original)
    r0_1 = r4_2 + 0x30u;  // (from the original)
    call_002f76ac(r0_1, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    r4_3 = r4_2 + 0xfffff084u;  // (from the original)
    r0_2 = r4_3 + 0x30u;  // (from the original)
    call_002f76ac(r0_2, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r4_3 + 0xfffe898au + 0x1764au;  // (from the original)
    r0_4 = call_001389f8(r0_3, 0x1764au, r2_1, r3_1);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0xfffe89b6u + 0x17448u;  // (from the original)
    r0_6 = call_001389c0(r0_5, 0x17448u, 0xfffe89b6u, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 + 0xfffe8bb8u + 0x173ecu;  // (from the original)
    r0_8 = call_001389e4(r0_7, 0x173ecu, 0xfffe8bb8u, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 + 0xfffe8c14u + 0x173c6u;  // (from the original)
    r0_10 = call_002f7708(r0_9, 0x173c6u, 0xfffe8c14u, r3_4);  // (from the original)
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 + 0xfffe8c3au + 0x173a0u;  // (from the original)
    r0_12 = call_002f7708(r0_11, 0x173a0u, 0xfffe8c3au, r3_5);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 + 0xfffe8c60u + 0x172f4u;  // (from the original)
    r0_14 = call_001389fc(r0_13, 0x172f4u, 0xfffe8c60u, r3_6);  // (from the original)
    r4_4 = r0_14 + 0xfffe8d0cu;  // (from the original)
    call_002f76ac(r4_4, 0x100b8du, 0x2518u, 0xau);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_15 = r4_4 - 4u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_15;
}

}  // namespace d_00100a8c
GUEST_EXPORT(0x00100a8d, d_00100a8c::f_00100a8c);

// f_00100b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100b80 {


u32 f_00100b80(u32 r0) {
    return guest::call_address<u32>(0x100b8du, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00100b80
GUEST_EXPORT(0x00100b80, d_00100b80::f_00100b80);

// f_00100b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100b8c {

inline constexpr guest::Function<0x00139d24, u32(u32, u32, u32, u32)> call_00139d24;  // (from the original)
inline constexpr guest::Function<0x0013c0e4, u32(u32, u32, u32, u32)> call_0013c0e4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)

u32 f_00100b8c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_13 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_14 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r1_15 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r1_16 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    u32 r1_18 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_37 = 0;
    u32 r0_38 = 0;
    u32 r1_19 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r1_20 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_41 = 0;
    u32 r0_42 = 0;
    u32 r3_21 = 0;
    u32 r0_43 = 0;
    u32 r0_44 = 0;
    u32 r4_1 = 0;
    u32 r2_21 = 0;
    u32 r0_45 = 0;
    u32 r0_46 = 0;
    u32 r1_21 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r3_23 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r4_2 = 0;
    u32 r0_51 = 0;
    u32 r0_52 = 0;
    u32 r1_22 = 0;
    u32 r2_23 = 0;
    u32 r3_24 = 0;
    u32 r0_53 = 0;
    u32 r0_54 = 0;
    u32 r2_24 = 0;
    u32 r3_25 = 0;
    u32 r0_55 = 0;
    u32 r0_56 = 0;
    u32 r1_23 = 0;
    u32 r0_57 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x249au + 0x50u;  // (from the original)
    r0_2 = call_002f777c(r0_1, 0x249au, r2, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_3 = r0_2 - 4u;
    r0_4 = call_002f777c(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r0_4 - 4u;
    r0_6 = call_002f777c(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r0_6 - 4u;
    r0_8 = call_002f777c(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = r0_8 - 4u;
    r0_10 = call_002f777c(r0_9, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_11 = r0_10 - 4u;
    r0_12 = call_002f777c(r0_11, r1_5, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_13 = r0_12 - 4u;
    r0_14 = call_002f777c(r0_13, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_15 = r0_14 - 4u;
    r0_16 = call_002f777c(r0_15, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r0_16 - 4u;
    r0_18 = call_002f777c(r0_17, r1_8, r2_8, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_19 = r0_18 - 4u;
    r0_20 = call_002f777c(r0_19, r1_9, r2_9, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_21 = r0_20 - 4u;
    r0_22 = call_002f777c(r0_21, r1_10, r2_10, r3_10);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_23 = r0_22 - 4u;
    r0_24 = call_002f777c(r0_23, r1_11, r2_11, r3_11);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = r0_24 - 4u;
    r0_26 = call_002f777c(r0_25, r1_12, r2_12, r3_12);
    r1_13 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_27 = r0_26 - 4u;
    r0_28 = call_002f777c(r0_27, r1_13, r2_13, r3_13);
    r1_14 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_29 = r0_28 - 4u;
    r0_30 = call_002f777c(r0_29, r1_14, r2_14, r3_14);
    r1_15 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_31 = r0_30 - 4u;
    r0_32 = call_002f777c(r0_31, r1_15, r2_15, r3_15);
    r1_16 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_33 = r0_32 - 4u;
    r0_34 = call_002f777c(r0_33, r1_16, r2_16, r3_16);
    r1_17 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_35 = r0_34 - 4u;
    r0_36 = call_002f777c(r0_35, r1_17, r2_17, r3_17);
    r1_18 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_37 = r0_36 - 4u;
    r0_38 = call_002f777c(r0_37, r1_18, r2_18, r3_18);
    r1_19 = guest::cpu()->r[1];
    r2_19 = guest::cpu()->r[2];
    r3_19 = guest::cpu()->r[3];
    r0_39 = r0_38 - 4u;
    r0_40 = call_002f777c(r0_39, r1_19, r2_19, r3_19);
    r1_20 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_41 = r0_40 - 4u;
    r0_42 = call_002f777c(r0_41, r1_20, r2_20, r3_20);
    r3_21 = guest::cpu()->r[3];
    r0_43 = r0_42 + 0xffffdb66u + 0x2210u;  // (from the original)
    r0_44 = call_002f77e8(r0_43, 0x2210u, 0xffffdb66u, r3_21);  // (from the original)
    r4_1 = r0_44 + 0xffffddf0u;  // (from the original)
    r2_21 = 5u << 7;
    r0_45 = r4_1 + 0x1810u;  // (from the original)
    call_002f76ac(r0_45, 0x2f77e8u, r2_21, 4u);  // (from the original)
    r0_46 = r4_1 + 0x8eeu;  // (from the original)
    call_002f76ac(r0_46, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    r1_21 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_47 = r4_1 + 0x8eau;  // (from the original)
    r0_48 = call_002f777c(r0_47, r1_21, r2_22, r3_22);
    r3_23 = guest::cpu()->r[3];
    r0_49 = r0_48 + 0xfffff716u + 0x8e6u;  // (from the original)
    r0_50 = call_002f777c(r0_49, 0x8e6u, 0xfffff716u, r3_23);  // (from the original)
    r4_2 = r0_50 + 0xfffff71au;  // (from the original)
    r0_51 = r4_2 + 0x8d6u;  // (from the original)
    call_002f76ac(r0_51, 0x2f777cu, 4u, 4u);  // (from the original)
    r0_52 = r4_2 + 0x8c6u;  // (from the original)
    call_002f76ac(r0_52, 0x2f777cu, 4u, 4u);  // (from the original)
    r1_22 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_53 = r4_2 + 0x8b6u;  // (from the original)
    r0_54 = call_0013c0e4(r0_53, r1_22, r2_23, r3_24);
    r2_24 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    r0_55 = r0_54 + 0xfffff74au + 0x30u;  // (from the original)
    r0_56 = call_00139d24(r0_55, 0xfffff74au, r2_24, r3_25);  // (from the original)
    r1_23 = guest::cpu()->r[1];
    r0_57 = r0_56 - 0x30u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_23;
    return r0_57;
}

}  // namespace d_00100b8c
GUEST_EXPORT(0x00100b8d, d_00100b8c::f_00100b8c);

// f_00100d0e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100d0e {

inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> call_002f7950;  // (from the original)

u32 f_00100d0e(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f7950(0u, r0, r1, r2);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00100d0e
GUEST_EXPORT(0x00100d0f, d_00100d0e::f_00100d0e);

// f_00100e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e38 {

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32, u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100e38(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    r1_1 = r13;
    *gptr<u32>(r13) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7a2e(r1, r1_1, r2, 0x2f7c91u);  // (from the original)
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002f7c90(0u, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00100e38
GUEST_EXPORT(0x00100e39, d_00100e38::f_00100e38);

// f_00100e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e5c {

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32, u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100e5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    *gptr<u32>(r13) = u32(r0);
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    r1_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7a2e(r2, r1_1, r3, 0x101a95u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 != 0) {
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        call_002f7c90(0u, r1_3, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00100e5c
GUEST_EXPORT(0x00100e5d, d_00100e5c::f_00100e5c);

// f_00100e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e94 {

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> call_002f7ca6;  // (from the original)
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32, u32, u32)> call_002f7ccc;  // (from the original)

u32 f_00100e94(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    *gptr<u32>(r13) = u32(r0);
    if (r1 != 0) {
        r0 = (r1 << 1) + r0 - 2u;
    }
    r1_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7ca6(r2, r1_1, r3, 0x2f7ccdu);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 != 0) {
        r1_3 = r13;
        *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 4u) + 2u);
        guest::cpu()->r[13] = r13;
        call_002f7ccc(0u, r1_3, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    if (r0_1 >= r1) {
        r0_2 = ~0u;
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00100e94
GUEST_EXPORT(0x00100e95, d_00100e94::f_00100e94);

// f_00100edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100edc {

inline constexpr guest::Function<0x002f7cdd, u32(u32, u32, u32, u32)> call_002f7cdc;  // (from the original)

u32 f_00100edc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 8;
    *gptr<u32>(ea_2) = u32(r4);
    *gptr<u32>(ea_2 + 4) = u32(r14);
    r13 = ea_2;
    r2_1 = r13 + 0xcu;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7cdc(r0_1, 0xaf752cu, r2_1, r3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13);
    r13 = r13 + 4;
    r3_1 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00100edc
GUEST_EXPORT(0x00100edd, d_00100edc::f_00100edc);

// f_00100ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100ef8 {

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32, u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100ef8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r3_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 0x10;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    *gptr<u32>(ea_2 + 8) = u32(r4);
    *gptr<u32>(ea_2 + 0xc) = u32(r14);  // (from the original)
    r13 = ea_2;
    r2_1 = r13 + 0x18u;  // (from the original)
    r1_1 = r13;
    *gptr<u32>(r13) = u32(r0);
    r0_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7a2e(r0_1, r1_1, r2_1, 0x2f7c91u);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002f7c90(0u, r1_2, r2_2, r3_1);
    r1_3 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13 + 8);
    r13 = r13 + 0xc;  // (from the original)
    r3_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00100ef8
GUEST_EXPORT(0x00100ef9, d_00100ef8::f_00100ef8);

// f_00100f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100f24 {

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32, u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100f24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r3_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 0x18;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    *gptr<u32>(ea_2 + 8) = u32(r4);
    *gptr<u32>(ea_2 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_2 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_2 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_2;
    r2_1 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    r1_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7a2e(r0_1, r1_1, r2_1, 0x101a95u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 != 0) {
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        call_002f7c90(0u, r1_3, r2_2, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    r4_1 = *gptr<u32>(r13 + 8);
    r5_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r6_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    r3_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00100f24
GUEST_EXPORT(0x00100f25, d_00100f24::f_00100f24);

// f_00100f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100f68 {

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> call_002f7ca6;  // (from the original)
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32, u32, u32)> call_002f7ccc;  // (from the original)

u32 f_00100f68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r3_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 0x18;  // (from the original)
    *gptr<u32>(ea_2) = u32(r2);
    *gptr<u32>(ea_2 + 4) = u32(r3);
    *gptr<u32>(ea_2 + 8) = u32(r4);
    *gptr<u32>(ea_2 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_2 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_2 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_2;
    r4_1 = r1;
    r2_1 = r13 + 0x24u;  // (from the original)
    *gptr<u32>(r13) = u32(r0);
    if (r1 != 0) {
        r0 = (r4_1 << 1) + r0 - 2u;
    }
    r1_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    r0_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7ca6(r0_1, r1_1, r2_1, 0x2f7ccdu);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r4_1 != 0) {
        r1_2 = r13;
        *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 4u) + 2u);
        guest::cpu()->r[13] = r13;
        call_002f7ccc(0u, r1_2, r2_2, r3_1);
        r1 = guest::cpu()->r[1];
    }
    if (r0_2 < r4_1) {
        goto L_100fac;
    }
    r0 = ~0u;
L_100fa4:;
    r4_2 = *gptr<u32>(r13 + 8);
    r5_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r6_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    r3_2 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_100fac:;
    r0 = r0_2;
    guest::preempt();
    goto L_100fa4;
}

}  // namespace d_00100f68
GUEST_EXPORT(0x00100f69, d_00100f68::f_00100f68);

// f_001011e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001011e4 {

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> call_002f7dac;  // (from the original)

u32 f_001011e4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r4_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1 = 0u;
    r4 = r0 + 0x24u;  // (from the original)
    for (;;) {
L_101200:;
        res_1 = r2 | r3;
        if (!(res_1 != 0)) {
            break;
        }
L_1011ee:;
        *gptr<u8>(r4 + r1) = u8((r2 << 0x1d >> 0x1d) + 0x30u);  // (from the original)
        r1 = r1 + 1u;
        r2 = r2 >> 3 | r3 << 0x1d;  // (from the original)
        r3 = r3 >> 3;
        guest::preempt();
    }
    r4_1 = *gptr<u32>(r0);
    r3_1 = 0u;
    r2_1 = 0x10124cu;  // (from the original)
    res_2 = r4_1 << 0x1c;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_101222;
    }
    res_3 = r4_1 & 0x20u | r1;  // (from the original)
    if (res_3 == 0) {
        goto L_101222;
    }
    r3_1 = 1u;
    r2_1 = 0x101250u;  // (from the original)
    r4_2 = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = u32(r4_2);  // (from the original)
L_101222:;
    r0_1 = call_002f7dac(r0, r1, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001011e4
GUEST_EXPORT(0x001011e5, d_001011e4::f_001011e4);

// f_0010125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010125c {

struct __attribute__((packed)) Object_0010125c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0010125c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> call_002f7dac;  // (from the original)

u32 f_0010125c(gptr<Object_0010125c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r7 = r1;
    if (arg0->word_0 & 0x800u) {  // (from the original)
        r4 = 0x8c83ecu;  // (from the original)
    } else {
        r4 = 0x8c8400u;  // (from the original)
    }
    r1 = 0u;
    r5 = r0 + 0x24u;  // (from the original)
    for (;;) {
L_10128c:;
        res_1 = r2 | r3;
        if (!(res_1 != 0)) {
            break;
        }
L_10127a:;
        *gptr<u8>(r5 + r1) = u8(u32(*gptr<u8>(r4 + (r2 << 0x1c >> 0x1c))));  // (from the original)
        r1 = r1 + 1u;
        r2 = r2 >> 4 | r3 << 0x1c;  // (from the original)
        r3 = r3 >> 4;
        guest::preempt();
    }
    r2 = r4;
    r3 = 0u;
    res_2 = *gptr<u32>(r0) << 0x1c;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_1012a8;
    }
    if (r7 == 0x70u) {  // (from the original)
        goto L_1012ae;
    }
    if (r1 == 0) {
        goto L_1012a8;
    }
    r2 = r2 + 0x11u;  // (from the original)
    r3 = 2u;
L_1012a8:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7dac(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_1012ae:;
    r2 = r2 + 0x10u;  // (from the original)
    r3 = 1u;
    guest::preempt();
    goto L_1012a8;
}

}  // namespace d_0010125c
GUEST_EXPORT(0x0010125d, d_0010125c::f_0010125c);

// f_001012f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001012f4 {

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32, u32)> call_002f80c8;  // (from the original)

u32 f_001012f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 4;
    *gptr<u32>(ea_2) = u32(r14);
    r13 = ea_2 - 0x34u;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x40u);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(~0u);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0x1020d5u);  // (from the original)
    r2_1 = r13;
    *gptr<u32>(r13 + 0x1cu) = u32(0x1020f5u);  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    r0_1 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f80c8(r0_1, r1_1, r2_1, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x34u;  // (from the original)
    r3_1 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001012f4
GUEST_EXPORT(0x001012f5, d_001012f4::f_001012f4);

// f_00101334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101334 {

inline constexpr guest::Function<0x0010211d, u32(u32, u32, u32, u32)> call_0010211c;  // (from the original)
inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)

u32 f_00101334(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002f7a04(r0, r1, r2, guest::cpu()->r[3]);
    r4_1 = *gptr<u32>(r0_1);
    r0_2 = call_0010211c(r0, 0u, 0xau, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    *gptr<u32>(r0_1) = u32(r4_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00101334
GUEST_EXPORT(0x00101335, d_00101334::f_00101334);

// f_0010134e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010134e {

inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)
inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> call_002f7a10;  // (from the original)
inline constexpr guest::Function<0x002f80f1, u32(u32, u32, u32, u32)> call_002f80f0;  // (from the original)

u32 f_0010134e(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 8u;
    r7 = r1;
    r4 = *gptr<u32>(r13 + 8u);
    r6 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7a04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13) = u32(r0_1);
    r0 = *gptr<u32>(r0_1);
    *gptr<u32>(r13 + 4u) = u32(r0);
L_101362:;
    r5_1 = *gptr<u8>(r4);
    r4 = r4 + 1u;
    if (r5_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_002f7a10(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        res_1 = u32(*gptr<u8>(*gptr<u32>(r0_2) + r5_1)) << 0x1f;  // (from the original)
        r0 = res_1;
        if (res_1 != 0) {
            guest::preempt();
            goto L_101362;
        }
    }
    if (r5_1 == 0x2bu) {  // (from the original)
        goto L_101380;
    }
    if (r5_1 == 0x2du) {  // (from the original)
        goto L_1013b8;
    }
    r4 = r4 - 1u;
L_101380:;
    *gptr<u32>(*gptr<u32>(r13)) = u32(0u);
    r2_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f80f0(r4, r7, r2_1, guest::cpu()->r[3]);
    r1 = r0_3;
    if (r7 == 0) {
        goto L_1013a0;
    }
    if (*gptr<u32>(r7) != r4) {
        goto L_1013a0;
    }
    *gptr<u32>(r7) = u32(*gptr<u32>(r13 + 8u));
L_1013a0:;
    if (*gptr<u32>(*gptr<u32>(r13)) == 2u) {
        goto L_1013c0;
    }
    *gptr<u32>(*gptr<u32>(r13)) = u32(*gptr<u32>(r13 + 4u));
    res_2 = r6 << 0x15;  // (from the original)
    if (!(res_2 >> 0x1f)) {  // (from the original)
        goto L_1013c0;
    }
    r0 = u32(0) - r1;
L_1013b4:;
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1013b8:;
    r6 = r6 | 1u << 0xa;  // (from the original)
    guest::preempt();
    goto L_101380;
L_1013c0:;
    r0 = r1;
    guest::preempt();
    goto L_1013b4;
}

}  // namespace d_0010134e
GUEST_EXPORT(0x0010134f, d_0010134e::f_0010134e);

// f_001013c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001013c4 {

inline constexpr guest::Function<0x0010218d, u32(u32, u32, u32, u32)> call_0010218c;  // (from the original)

u32 f_001013c4() {
    guest::cpu()->r[13] -= 8u;
    call_0010218c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_001013c4
GUEST_EXPORT(0x001013c5, d_001013c4::f_001013c4);

// f_001013cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001013cc {

inline constexpr guest::Function<0x00101a1f, u32(u32, u32, u32, u32)> call_00101a1e;  // (from the original)
inline constexpr guest::Function<0x00102209, u32(u32, u32, u32, u32)> call_00102208;  // (from the original)
inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)

u32 f_001013cc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 8u;
    r7 = r1;
    r4 = *gptr<u32>(r13 + 8u);
    r6 = 0u;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7a04(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r0_1));
L_1013e0:;
    r5_1 = *gptr<u16>(r4);
    r4 = r4 + 2u;
    if (r5_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_2 = call_00101a1e(r5_1, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 != 0) {
            guest::preempt();
            goto L_1013e0;
        }
    }
    if (r5_1 == 0x2bu) {  // (from the original)
        goto L_1013fc;
    }
    if (r5_1 == 0x2du) {  // (from the original)
        goto L_101434;
    }
    r4 = r4 - 2u;
L_1013fc:;
    *gptr<u32>(*gptr<u32>(r13)) = u32(0u);
    r2_1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_00102208(r4, r7, r2_1, guest::cpu()->r[3]);
    r1 = r0_3;
    if (r7 == 0) {
        goto L_10141c;
    }
    if (*gptr<u32>(r7) != r4) {
        goto L_10141c;
    }
    *gptr<u32>(r7) = u32(*gptr<u32>(r13 + 8u));
L_10141c:;
    if (*gptr<u32>(*gptr<u32>(r13)) == 2u) {
        goto L_10143c;
    }
    *gptr<u32>(*gptr<u32>(r13)) = u32(*gptr<u32>(r13 + 4u));
    res_1 = r6 << 0x15;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_10143c;
    }
    r0 = u32(0) - r1;
L_101430:;
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_101434:;
    r6 = r6 | 1u << 0xa;  // (from the original)
    guest::preempt();
    goto L_1013fc;
L_10143c:;
    r0 = r1;
    guest::preempt();
    goto L_101430;
}

}  // namespace d_001013cc
GUEST_EXPORT(0x001013cd, d_001013cc::f_001013cc);

// f_00101482: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101482 {

inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> call_002f84e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_00101482(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r6 = r1;
    r4 = 0u;
    r13 = ea_1 - 0x10u;  // (from the original)
    r7 = r4;
L_101494:;
    if (r7 != 0) {
        r0_1 = *gptr<u32>(r7);
        *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r7 + 4u));  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(r0_1);
    }
    r0_2 = r13;
    r1_1 = *gptr<u16>(r6);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f84e8(r0_2, r1_1, r7, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    res_1 = r0_3 + 1u;
    if (res_1 != 0) {
        if (*gptr<u32>(r13 + 0x10u) == 0) {  // (from the original)
            goto L_1014dc;
        }
        r1 = r0_3 + r4;
        if (r1 <= *gptr<u32>(r13 + 0x18u)) {  // (from the original)
            goto L_1014d0;
        }
        if (r7 == 0) {
            goto L_1014ea;
        }
        r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        *gptr<u32>(r7) = u32(*gptr<u32>(r13 + 8u));
        *gptr<u32>(r7 + 4) = u32(r1);
        goto L_1014ea;
    }
    r0 = r0_3;
L_1014cc:;
    r13 = r13 + 0x1cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_1014d0:;
    r1_2 = r13;
    r0_4 = *gptr<u32>(r13 + 0x10u) + r4;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_4, r1_2, r0_3, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_1014dc:;
    r4 = r4 + r0_3;
    if (u32(*gptr<u16>(r6)) != 0) {
        r6 = r6 + 2u;
        guest::preempt();
        goto L_101494;
    }
    r4 = r4 - 1u;
L_1014ea:;
    r0 = r4;
    guest::preempt();
    goto L_1014cc;
}

}  // namespace d_00101482
GUEST_EXPORT(0x00101483, d_00101482::f_00101482);

// f_0010179a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010179a {


u32 f_0010179a(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 0xcu;  // (from the original)
    r5 = r0;
L_10179e:;
    r2 = r5;
    r3 = r1;
L_1017a2:;
    r0_1 = *gptr<u8>(r2);
    r4_1 = *gptr<u8>(r3);
    r2 = r2 + 1u;
    r3 = r3 + 1u;
    if (r0_1 != 0) {
        if (r0_1 == r4_1) {
            guest::preempt();
            goto L_1017a2;
        }
    }
    if (r4_1 != 0) {
        if (r0_1 == 0) {
            guest::cpu()->r[13] += 0xcu;  // (from the original)
            return r0_1;
        }
        r5 = r5 + 1u;
        guest::preempt();
        goto L_10179e;
    }
    guest::cpu()->r[13] += 0xcu;  // (from the original)
    return r5;
}

}  // namespace d_0010179a
GUEST_EXPORT(0x0010179b, d_0010179a::f_0010179a);

// f_00101800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101800 {


u32 f_00101800(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 cf_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r3 = r0;
    goto L_101814;
L_101806:;
    *gptr<u16>(r0) = u16(u32(*gptr<u16>(r1)));
    r0 = r0 + 2u;
    if (u32(*gptr<u16>(r1)) == 0) {
        goto L_101814;
    }
    r1 = r1 + 2u;
L_101814:;
    cf_1 = r2 >= 1u;
    r2 = r2 - 1u;
    if (cf_1) {
        guest::preempt();
        goto L_101806;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r3;
}

}  // namespace d_00101800
GUEST_EXPORT(0x00101801, d_00101800::f_00101800);

// f_0010181c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010181c {

inline constexpr guest::Function<0x002f8720, u32(u32, u32, u32, u32)> call_002f8720;  // (from the original)

u32 f_0010181c(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = r2 << 1;
    call_002f8720(guest::cpu()->r[0], guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_0010181c
GUEST_EXPORT(0x0010181d, d_0010181c::f_0010181c);

// f_00101826: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101826 {

inline constexpr guest::Function<0x00150c2c, u32(u32, u32, u32, u32)> call_00150c2c;  // (from the original)

u32 f_00101826(u32 r0_unused, u32 r1_unused, u32 r2) {
    u32 r2_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r2_1 = r2 << 1;
    call_00150c2c(guest::cpu()->r[0], guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00101826
GUEST_EXPORT(0x00101827, d_00101826::f_00101826);

// f_00101890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101890 {


u32 f_00101890(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r4_1 = 0;
    guest::cpu()->r[13] -= 8u;
L_101892:;
    r2 = 0u;
    for (;;) {
L_1018a2:;
        r4 = r2 << 1;
        r3 = *gptr<u16>(r1 + r4);
        if (!(r3 != 0)) {
            break;
        }
L_101896:;
        r4_1 = *gptr<u16>(r0 + r4);
        if (r4_1 == 0) {
            guest::cpu()->r[13] += 8u;
            return 0u;
        }
        if (r4_1 != r3) {
            goto L_1018b0;
        }
        r2 = r2 + 1u;
        guest::preempt();
    }
    guest::cpu()->r[13] += 8u;
    return r0;
L_1018b0:;
    if (u32(*gptr<u16>(r1 + (r2 << 1))) == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = r0 + 2u;
    guest::preempt();
    goto L_101892;
}

}  // namespace d_00101890
GUEST_EXPORT(0x00101891, d_00101890::f_00101890);

// f_001018bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001018bc {

struct __attribute__((packed)) Object_001018bc_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_001018bc_2, word_0, 0x0);  // (from the original)


u32 f_001018bc(u32 r0, u32 r1, gptr<Object_001018bc_2> arg2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 res_1 = 0;
    u32 r7_1 = 0;
    u32 res_2 = 0;
    guest::cpu()->r[13] -= 0x14u;  // (from the original)
    r5 = 0u;
    if (r0 != 0) {
        goto L_1018ea;
    }
    r0 = arg2->word_0;
    if (r0 == 0) {
        guest::cpu()->r[13] += 0x14u;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    goto L_1018ea;
L_1018cc:;
    r3 = 0u;
    for (;;) {
L_1018d6:;
        r4 = *gptr<u16>(r1 + (r3 << 1));
        if (!(r4 != 0)) {
            break;
        }
L_1018d0:;
        if (r4 == r6) {
            goto L_1018e0;
        }
        r3 = r3 + 1u;
        guest::preempt();
    }
    goto L_1018f2;
L_1018e0:;
    if (u32(*gptr<u16>(r1 + (r3 << 1))) == 0) {
        goto L_1018f2;
    }
    r0 = r0 + 2u;
L_1018ea:;
    r6 = *gptr<u16>(r0);
    if (r6 != 0) {
        guest::preempt();
        goto L_1018cc;
    }
    goto L_1018fe;
L_1018f2:;
    res_1 = r6 << 0x10 >> 0x10;  // (from the original)
    if (res_1 == 0) {
        goto L_1018fe;
    }
    r6 = r0;
L_1018fa:;
    r3 = 0u;
    goto L_10190c;
L_1018fe:;
    r0 = 0u;
    arg2->word_0 = u32(r5);
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_101904:;
    r7_1 = *gptr<u16>(r0);
    if (r4 == r7_1) {
        goto L_101916;
    }
    r3 = r3 + 1u;
L_10190c:;
    r4 = *gptr<u16>(r1 + (r3 << 1));
    if (r4 != 0) {
        guest::preempt();
        goto L_101904;
    }
    goto L_10192c;
L_101916:;
    if (u32(*gptr<u16>(r1 + (r3 << 1))) == 0) {
        goto L_10192c;
    }
    res_2 = r7_1 << 0x10 >> 0x10;  // (from the original)
    r1 = res_2;
    if (res_2 == 0) {
        goto L_101934;
    }
    *gptr<u16>(r0) = u16(r5);
    arg2->word_0 = u32(r0 + 2u);
    goto L_101936;
L_10192c:;
    r0 = r0 + 2u;
    if (u32(*gptr<u16>(r0)) != 0) {
        guest::preempt();
        goto L_1018fa;
    }
L_101934:;
    arg2->word_0 = u32(r5);
L_101936:;
    guest::cpu()->r[13] += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r6;
}

}  // namespace d_001018bc
GUEST_EXPORT(0x001018bd, d_001018bc::f_001018bc);

// f_0010193a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010193a {

struct __attribute__((packed)) Object_0010193a_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0010193a_0, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f8260, u32(u32, u32, u32, u32)> call_002f8260;  // (from the original)

u32 f_0010193a(gptr<Object_0010193a_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r7_1 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r1);
    *gptr<u32>(ea_1 + 4) = u32(r2);
    *gptr<u32>(ea_1 + 8) = u32(r3);
    r13 = ea_1;
    r5_1 = r0;
    r4_1 = r2;
    *gptr<u32>(r13) = u32(r0);
    if ((r0 & 3u) != 0u) {
        if (r4_1 == 0) {
            goto L_10196e;
        }
        r4_1 = r2 - 1u;
        arg0->half_0 = u16(r1);
        r5_1 = r5_1 + 2u;
    }
    if (r4_1 < 2u) {
        goto L_10196e;
    }
    r7_1 = r4_1 >> 1 << 1;
    r2_1 = r1 << 0x10 | r1;  // (from the original)
    r1_1 = r7_1 << 1;
    *gptr<u32>(r13 + 4u) = u32(r1_1);
    guest::cpu()->r[13] = r13;
    call_002f8260(r5_1, r1_1, r2_1, r3);
    r4_1 = r4_1 - r7_1;
    r5_1 = *gptr<u32>(r13 + 4u) + r5_1;
L_10196e:;
    if (r4_1 != 0) {
        *gptr<u16>(r5_1) = u16(r1);
    }
    r0_1 = *gptr<u32>(r13);
    r1_2 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0010193a
GUEST_EXPORT(0x0010193b, d_0010193a::f_0010193a);

// f_00101978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101978 {

inline constexpr guest::Function<0x002f8849, u32(u32, u32, u32, u32)> call_002f8848;  // (from the original)

u32 f_00101978(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r6 = r0;
    r5 = 0u;
    *gptr<u32>(r13) = u32(r1);
    goto L_101984;
L_101982:;
    r5 = r5 + 1u;
L_101984:;
    r4_1 = r5 << 1;
    r0_1 = *gptr<u16>(r6 + r4_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f8848(r0_1, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    r0_3 = *gptr<u16>(*gptr<u32>(r13) + r4_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f8848(r0_3, r1_1, guest::cpu()->r[2], r3_1);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    res_1 = r0_2 - r0_4;
    if (res_1 == 0) {
        r1 = *gptr<u16>(r6 + r4_1);
        if (r1 != 0) {
            guest::preempt();
            goto L_101982;
        }
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return res_1;
}

}  // namespace d_00101978
GUEST_EXPORT(0x00101979, d_00101978::f_00101978);

// f_00101a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a00 {


u32 f_00101a00() {
    return guest::call_address<u32>(0x101a13u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00101a00
GUEST_EXPORT(0x00101a00, d_00101a00::f_00101a00);

// f_00101a1e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a1e {

inline constexpr guest::Function<0x001024ff, u32(u32, u32, u32, u32)> call_001024fe;  // (from the original)

u32 f_00101a1e(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_001024fe(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0_1 << 0x1f >> 0x1f;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return r0_2;
}

}  // namespace d_00101a1e
GUEST_EXPORT(0x00101a1f, d_00101a1e::f_00101a1e);

// f_00101a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a2c {

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32, u32, u32)> call_002f7c90;  // (from the original)

u32 f_00101a2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    *gptr<u32>(r13) = u32(r0);
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    r1_1 = r13;
    *gptr<u32>(r13 + 4u) = u32(r0);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002f7a2e(r2, r1_1, r3, 0x101a95u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r1 != 0) {
        r1_3 = r13;
        guest::cpu()->r[13] = r13;
        call_002f7c90(0u, r1_3, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00101a2c
GUEST_EXPORT(0x00101a2d, d_00101a2c::f_00101a2c);

// f_00101bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101bd0 {

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32, u32)> call_002f80c8;  // (from the original)

u32 f_00101bd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r2_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r3_1 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    ea_2 = ea_1 - 4;
    *gptr<u32>(ea_2) = u32(r14);
    r13 = ea_2 - 0x34u;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0);  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = u32(r0);  // (from the original)
    *gptr<u32>(r13) = u32(r13 + 0x40u);  // (from the original)
    *gptr<u32>(r13 + 0x28u) = u32(~0u);  // (from the original)
    *gptr<u32>(r13 + 0x30u) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(0x1020d5u);  // (from the original)
    r2_1 = r13;
    *gptr<u32>(r13 + 0x1cu) = u32(0x1020f5u);  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    r0_1 = r13 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f80c8(r0_1, r1_1, r2_1, r3);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x34u;  // (from the original)
    r3_1 = *gptr<u32>(r13);
    r13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00101bd0
GUEST_EXPORT(0x00101bd1, d_00101bd0::f_00101bd0);

// f_0010211c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010211c {

inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)
inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> call_002f7a10;  // (from the original)
inline constexpr guest::Function<0x002f80f1, u32(u32, u32, u32, u32)> call_002f80f0;  // (from the original)

u32 f_0010211c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 res_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    r13 = ea_1;
    r7 = r1;
    r6 = 0u;
    r4 = *gptr<u32>(r13);
L_102124:;
    r5_1 = *gptr<u8>(r4);
    r4 = r4 + 1u;
    if (r5_1 != 0) {
        guest::cpu()->r[13] = r13;
        r0_1 = call_002f7a10(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        res_1 = u32(*gptr<u8>(*gptr<u32>(r0_1) + r5_1)) << 0x1f;  // (from the original)
        r0 = res_1;
        if (res_1 != 0) {
            guest::preempt();
            goto L_102124;
        }
    }
    if (r5_1 == 0x2bu) {  // (from the original)
        goto L_102142;
    }
    if (r5_1 == 0x2du) {  // (from the original)
        goto L_102172;
    }
    r4 = r4 - 1u;
L_102142:;
    r2_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    r0 = call_002f80f0(r4, r7, r2_1, r3);
    r2_2 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r7 == 0) {
        goto L_10215a;
    }
    if (*gptr<u32>(r7) != r4) {
        goto L_10215a;
    }
    *gptr<u32>(r7) = u32(*gptr<u32>(r13));
L_10215a:;
    res_2 = r6 << 0x15;  // (from the original)
    if (res_2 >> 0x1f == (res_2 & (res_2 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_10217a;
    }
    r0 = u32(0) - r0;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_102170;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f7a04(r0, res_2, r2_2, r3_1);
    *gptr<u32>(r0_2) = u32(2u);
    r0 = 2u << 0x1e;  // (from the original)
L_102170:;
    r1_1 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_102172:;
    r6 = r6 | 1u << 0xa;  // (from the original)
    guest::preempt();
    goto L_102142;
L_10217a:;
    if (r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_102170;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f7a04(r0, res_2, r2_2, r3_1);
    *gptr<u32>(r0_3) = u32(2u);
    r1_2 = *gptr<u32>(r13);
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return 0x7fffffffu;  // (from the original)
}

}  // namespace d_0010211c
GUEST_EXPORT(0x0010211d, d_0010211c::f_0010211c);

// f_001024e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001024e0 {

inline constexpr guest::Function<0x002f9e18, u32(u32, u32, u32, u32)> call_002f9e18;  // (from the original)

u32 f_001024e0(u32 r0) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002f9e18(0xcu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_001024e0
GUEST_EXPORT(0x001024e1, d_001024e0::f_001024e0);

// f_001024fe: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001024fe {

inline constexpr guest::Function<0x002f7a10, u32(u32, u32, u32, u32)> call_002f7a10;  // (from the original)

u32 f_001024fe(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 res_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    if (r0 > 0xffu) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_1 = call_002f7a10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = *gptr<u8>(*gptr<u32>(r0_1) + r0);
    if ((r0_2 & 0x98u) == 0) {  // (from the original)
        goto L_102522;
    }
    if ((r0_2 & 1u) != 0u) {
        goto L_102522;
    }
    r0_2 = r0_2 | 1u << 0xa;  // (from the original)
L_102522:;
    if ((r0_2 & 0x21u << 5) != 0) {  // (from the original)
        r0_2 = r0_2 | 1u << 0xb;  // (from the original)
    }
    if ((r0_2 & 0xbau) != 0) {  // (from the original)
        r0_2 = r0_2 | 0x100u;  // (from the original)
    }
    if ((r0_2 & 0xbeu) != 0) {  // (from the original)
        r0_2 = r0_2 | 1u << 9;
    }
    res_1 = r0_2 << 0x1a;  // (from the original)
    if (!(res_1 >> 0x1f)) {  // (from the original)
        goto L_102556;
    }
    if (r0_2 & 0x80u) {  // (from the original)
        goto L_102556;
    }
    r0_3 = r0_2 | 0x80u;  // (from the original)
    goto L_10255a;
L_102556:;
    r0_3 = r0_2 & ~0x20u;  // (from the original)
L_10255a:;
    res_2 = r0_3 << 0x1f;  // (from the original)
    r1_1 = res_2;
    if (res_2 != 0) {
        res_3 = r0_3 << 0x19;  // (from the original)
        r1_1 = res_3;
        if (!(res_3 >> 0x1f)) {  // (from the original)
            r1_2 = 1u << 0xc;  // (from the original)
            r0_4 = r0_3 | r1_2;
            guest::cpu()->r[13] += 8u;
            guest::cpu()->r[1] = r1_2;
            return r0_4;
        }
    }
    if (r0 != 9u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r1_2 = 1u << 0xc;  // (from the original)
    r0_4 = r0_3 | r1_2;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_001024fe
GUEST_EXPORT(0x001024ff, d_001024fe::f_001024fe);

// f_001032ee: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001032ee {

struct __attribute__((packed)) Object_001032ee_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_001032ee_0, word_c, 0xc);  // (from the original)


u32 f_001032ee(gptr<Object_001032ee_0> arg0) {
    u32 r0_1 = 0;
    r0_1 = arg0->word_c & 0x80u;  // (from the original)
    guest::cpu()->r[1] = 0x80u;  // (from the original)
    return r0_1;
}

}  // namespace d_001032ee
GUEST_EXPORT(0x001032ef, d_001032ee::f_001032ee);

// f_001032f6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001032f6 {

inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)
inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> call_002f84e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001032f6(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r2);
    *gptr<u32>(ea_1 + 4) = u32(r3);
    r13 = ea_1;
    if (r2 == 0) {
        r2 = 0u;
    }
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f84e8(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4 = r0_2;
    res_1 = r0_2 + 1u;
    if (res_1 == 0) {
        goto L_10332a;
    }
    if (r0 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r4;
    }
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002f8574(r0, r1_1, r4, r3_1);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
L_10332a:;
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f7a04(res_1, r1, r2_1, r3_1);
    r1 = 4u;
    *gptr<u32>(r0_3) = u32(r1);
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r4;
}

}  // namespace d_001032f6
GUEST_EXPORT(0x001032f7, d_001032f6::f_001032f6);

// f_00103334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00103334 {

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32, u32, u32)> call_002fa90c;  // (from the original)

u32 f_00103334(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0_1 = call_002f91d4(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = *gptr<u32>(r0_1);
    r0_2 = *gptr<u32>(r1_1);
    if (r0_2 == 0) {
        goto L_103360;
    }
    r1 = r1_1 + r0_2;
L_103348:;
    r0_3 = *gptr<u8>(r4);
    r3_2 = *gptr<u8>(r5);
    r4 = r4 + 1u;
    r5 = r5 + 1u;
    r2_2 = *gptr<u8>(r1 + r0_3);
    r3_3 = *gptr<u8>(r1 + r3_2);
    if (r0_3 != 0) {
        if (r2_2 == r3_3) {
            guest::preempt();
            goto L_103348;
        }
    }
    r0_4 = r2_2 - r3_3;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
L_103360:;
    r0_5 = call_002fa90c(r4, r5, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_00103334
GUEST_EXPORT(0x00103335, d_00103334::f_00103334);

// f_0010369c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010369c {


u32 f_0010369c() {
    return guest::call_address<u32>(0x103375u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010369c
GUEST_EXPORT(0x0010369c, d_0010369c::f_0010369c);

// f_001036a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001036a0 {


u32 f_001036a0(u32 r0) {
    return guest::call_address<u32>(0x1036adu, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001036a0
GUEST_EXPORT(0x001036a0, d_001036a0::f_001036a0);

// f_001059b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001059b4 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x002fe4e0, u32(u32, u32, u32, u32)> call_002fe4e0;  // (from the original)
inline constexpr guest::Function<0x002fe53c, u32(u32, u32, u32, u32)> call_002fe53c;  // (from the original)
inline constexpr guest::Function<0x002fe56c, u32(u32, u32, u32, u32)> call_002fe56c;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32, u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002fe594, u32(u32, u32, u32, u32)> call_002fe594;  // (from the original)
inline constexpr guest::Function<0x002fe5c8, u32(u32, u32, u32, u32)> call_002fe5c8;  // (from the original)
inline constexpr guest::Function<0x002fe618, u32(u32, u32, u32, u32)> call_002fe618;  // (from the original)
inline constexpr guest::Function<0x002fe668, u32(u32, u32, u32, u32)> call_002fe668;  // (from the original)

u32 f_001059b4(u32 r0, u32 r1) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_4 = 0;
    u32 r4_1 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    u32 r5_1 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r4_2 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    r13 = r13 - 0x18u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc20c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fe4e0(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        goto L_105a56;
    }
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fe53c(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    if (r0_4 != 0) {
        goto L_105a56;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(r0_4, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = r0_5 + 0x80u + 0x621b2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fe56c(r0_6, 0x621b2u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_8 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002fc934(r0_8, r0_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = r13;
    r0_9 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fe574(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    if (r0_10 == 0) {
        goto L_105a2a;
    }
    r4_1 = 3u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fccdc(r0, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_11 != 4u) {
        goto L_105a1e;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fe594(r0, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r5_1 = r0_11;
    if (r0_11 == 0 || r0_11 >> 0x1f != (r0_11 & (r0_11 ^ r0_11)) >> 0x1f) {  // (from the original)
        goto L_105a1e;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fd068(r0_11, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fe5c8(r0_12, r5_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r4_1 = r4_1 - r5_1;
    if (r4_1 == 0 || r4_1 >> 0x1f != (r4_1 & (r4_1 ^ r4_1)) >> 0x1f) {  // (from the original)
        goto L_105a50;
    }
L_105a1e:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fd068(r0_11, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fe618(r0_13, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    goto L_105a50;
L_105a2a:;
    r4_2 = 3u;
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcb84(r0, 0x35u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    if (r0_14 == 0) {
        guest::cpu()->r[13] = r13;
        r0_14 = call_002fcb84(r0, 0x30u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        if (r0_14 == 0) {
            goto L_105a46;
        }
    }
    r4_2 = 2u;
L_105a46:;
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fd068(r0_14, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] = r13;
    call_002fe668(r0_15, r4_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
L_105a50:;
    r0_16 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_16, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
L_105a56:;
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002f777c(r0_17, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_18;
}

}  // namespace d_001059b4
GUEST_EXPORT(0x001059b5, d_001059b4::f_001059b4);

// f_00105d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00105d0c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)

u32 f_00105d0c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    r13 = r13 - 0x2f8u;  // (from the original)
    r0_1 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_002ff6f4(0x64u, r1_1, r2_1, r3_1);  // (from the original)
    if (s32(r0_2) < s32(0x23u)) {  // (from the original)
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9c8(r0_3, 5u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_105d76;
    }
    if (s32(r0_2) < s32(0x37u)) {  // (from the original)
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9c8(r0_4, 3u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_105d76;
    }
    if (s32(r0_2) < s32(0x4bu)) {  // (from the original)
        r0_5 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9c8(r0_5, 4u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_105d76;
    }
    if (s32(r0_2) < s32(0x5au)) {  // (from the original)
        r0_6 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9c8(r0_6, 6u, 0xau, 0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        goto L_105d76;
    }
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_7, 0x33u, 0u, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
L_105d76:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcaf4(r1, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        r0_9 = r13;
        guest::cpu()->r[13] = r13;
        call_002fe9dc(r0_9, r1, r2_3, r3_3);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fea2c(r0, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fc8fc(r0_10, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00105d0c
GUEST_EXPORT(0x00105d0d, d_00105d0c::f_00105d0c);

// f_00105f54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00105f54 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> call_002fcc14;  // (from the original)
inline constexpr guest::Function<0x002ff6a4, u32(u32, u32, u32, u32)> call_002ff6a4;  // (from the original)
inline constexpr guest::Function<0x00303134, u32(u32, u32, u32, u32)> call_00303134;  // (from the original)

u32 f_00105f54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1 - 8u;
    r5 = 0u;
    r7 = r0;
    r6 = r2;
L_105f5e:;
    r4 = 0u;
L_105f60:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00303134(r7, r4, r5, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_1);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002ff6a4(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        r1_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fcbb0(r0_3, r1_3, r2_2, r3);
        guest::cpu()->r[13] = r13;
        call_002fcc14(r7, r0_4, r4, r5);
        r1_4 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_5 = r13;
        guest::cpu()->r[13] = r13;
        r0_2 = call_002f777c(r0_5, r1_4, r2_3, r3_2);
        r1_2 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        goto L_105fba;
    }
    if (r6 == 0) {
        goto L_105fba;
    }
    r0_6 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fcb84(r0_6, 0x30u, r2_2, r3);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_105fba;
    }
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fcbb0(r0_7, 0x35u, r2_4, r3);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcc14(r7, r0_8, r4, r5);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f777c(r0_9, r1_5, r2_5, r3_3);
    r1_2 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_105fba:;
    r4 = r4 + 1u;
    if (r4 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_105f60;
    }
    r5 = r5 + 1u;
    if (r5 < 0x10u) {  // (from the original)
        guest::preempt();
        goto L_105f5e;
    }
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00105f54
GUEST_EXPORT(0x00105f55, d_00105f54::f_00105f54);

// f_00106318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106318 {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)

u32 f_00106318(u32 r0_unused, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_002ff8b0(4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 >= 4u) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r0_2 = *gptr<u8>(0x853e36u + r0_1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x853e36u;  // (from the original)
    return r0_2;
}

}  // namespace d_00106318
GUEST_EXPORT(0x00106319, d_00106318::f_00106318);

// f_001063bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001063bc {

inline guest::global<u32, 0x00981fdc> global_00981fdc;  // (from the original)
inline constexpr guest::Function<0x002ffb15, u32(u32, u32, u32, u32)> call_002ffb14;  // (from the original)

u32 f_001063bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    call_002ffb14(r0, r1, r2, r3);
    r1_1 = *global_00981fdc;
    r13 = r13 + 0x10u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    tpc_1 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r3;
}

}  // namespace d_001063bc
GUEST_EXPORT(0x001063bd, d_001063bc::f_001063bc);

// f_001063dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001063dc {

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> call_002ffb48;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_001063dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ffb48(1u, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    goto L_1063f2;
L_1063f2:;
    guest::cpu()->r[13] = r13;
    call_002ffb64(r0_1, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_2 = ~0u;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_001063dc
GUEST_EXPORT(0x001063dd, d_001063dc::f_001063dc);

// f_00106940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106940 {

inline constexpr guest::Function<0x002ffb15, u32(u32, u32, u32, u32)> call_002ffb14;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_00106940(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = call_002ffb14(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r5 = 0x981fd8u;  // (from the original)
    r1_1 = ~0u;
    if (*gptr<u32>(r5 + 4u) <= r0_1) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r1_1;
    }
    r1_2 = r0_1 << 2;
    r0_2 = *gptr<u32>(*gptr<u32>(r5) + r1_2);
    call_002ffb64(r0_2, r1_2, r2_1, r3_1);
    r0 = *gptr<u32>(r5);
    r4 = r0_1 + 1u;
    goto L_10696e;
L_106966:;
    r4 = r4 + 1u;
    *gptr<u32>(r0 + (r1 - 4u)) = u32(r2);
L_10696e:;
    r1 = r4 << 2;
    r2 = *gptr<u32>(r0 + r1);
    if (r2 != 0) {
        if (*gptr<u32>(r5 + 4u) > r4) {
            guest::preempt();
            goto L_106966;
        }
    }
    r1_3 = *gptr<u32>(r5 + 4u);
    if (r1_3 > r4) {
        r1_3 = 0u;
        *gptr<u32>(r0 + (r4 << 2)) = u32(r1_3);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return 0u;
}

}  // namespace d_00106940
GUEST_EXPORT(0x00106941, d_00106940::f_00106940);

// f_00106998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106998 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x001b5d6c, u32(u32, u32, u32, u32)> call_001b5d6c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003002f0, u32(u32, u32, u32, u32)> call_003002f0;  // (from the original)
inline constexpr guest::Function<0x0030031c, u32(u32, u32, u32, u32)> call_0030031c;  // (from the original)
inline constexpr guest::Function<0x00300458, u32(u32, u32, u32, u32)> call_00300458;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x00300650, u32(u32, u32, u32, u32)> call_00300650;  // (from the original)
inline constexpr guest::Function<0x00300768, u32(u32, u32, u32, u32)> call_00300768;  // (from the original)
inline constexpr guest::Function<0x003007fc, u32(u32, u32, u32, u32)> call_003007fc;  // (from the original)
inline constexpr guest::Function<0x003036c0, u32(u32, u32, u32, u32)> call_003036c0;  // (from the original)
inline constexpr guest::Function<0x003036c4, u32(u32, u32, u32, u32)> call_003036c4;  // (from the original)
inline constexpr guest::Function<0x003036c8, u32(u32, u32, u32, u32)> call_003036c8;  // (from the original)
inline constexpr guest::Function<0x003036cc, u32(u32, u32, u32, u32)> call_003036cc;  // (from the original)
inline constexpr guest::Function<0x004ddc94, u32(u32, u32, u32, u32)> call_004ddc94;  // (from the original)

u32 f_00106998(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_15 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_18 = 0;
    u32 r1_7 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_19 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r1_8 = 0;
    u32 r0_20 = 0;
    u32 r1_9 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_10 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_25 = 0;
    u32 r1_11 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r0_27 = 0;
    u32 r7_1 = 0;
    u32 res_2 = 0;
    u32 r0_28 = 0;
    u32 r1_13 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r7_2 = 0;
    u32 res_3 = 0;
    u32 r0_31 = 0;
    u32 r1_14 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r6_1 = 0;
    u32 res_4 = 0;
    u32 r0_34 = 0;
    u32 r1_15 = 0;
    u32 r0_35 = 0;
    u32 r0_36 = 0;
    r4 = r0;
    r0_1 = r0 + 0x18u;  // (from the original)
    r13 = r13 - 0x300u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_003002f0(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_0030031c(r0_1, 1u, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_106ab4;
        }
    }
    r5 = 1u;
    guest::cpu()->r[13] = r13;
    call_00300458(r0_1, r5, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    r7 = r6;
    do {
L_1069c6:;
        r0_3 = (r6 << 2) + r4;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_3, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_4 = r4 + r6;
        r6 = r6 + 1u;
        res_1 = r6 - 2u;
        *gptr<u8>(r0_4 + 8u) = u8(r7);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r6 ^ 2u) & (r6 ^ res_1)) >> 0x1f);  // (from the original)
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_5, r1_1, r2, r3);
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_6, 5u, 0xb4u, 0u);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_2 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r4, 2u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8fc(r0_7, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r5 == 0) {
        goto L_106ab4;
    }
    guest::cpu()->r[13] = r13;
    call_00300634(0u, 1u, r2_4, r3_4);
    r1_3 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    *gptr<u16>(r4 + 0xeu) = u16(0xffffu);  // (from the original)
    *gptr<u16>(r4 + 0xcu) = u16(0xffffu);  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00300650(r0_8, r1_3, r2_5, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fb328(r0_9, r1_4, r2_6, r3_6);
    r1_5 = *gptr<u32>(r13);
    r2_7 = *gptr<u32>(r13 + 4);
    r3_7 = *gptr<u32>(r13 + 8);
    r0_11 = r0_10 + 0x80u + 0x6e1f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_003036c0(r0_11, r1_5, r2_7, r3_7);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x14u) = u32(r0_12);  // (from the original)
    r6 = 1u << 0xc;  // (from the original)
L_106a2c:;
    r0_13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_001b5d6c(r0_13, r6, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_003036c4(r0_14, r1_6, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_16 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_002f6e64(r0_16, r0_15, r2_9, r3_9);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_18 = r13;
    guest::cpu()->r[13] = r13;
    call_003036c8(r0_18, r0_17, r2_10, r3_10);
    r1_7 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_19 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_19, r1_7, r2_11, r3_11);
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r1_8 = *gptr<u32>(r13 + 8u);
    r0_20 = r13;
    if (s32(r1_8) <= s32(3u)) {
        guest::cpu()->r[13] = r13;
        call_003036cc(r0_20, r1_8, r2_12, r3_12);
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
    } else {
        *gptr<u8>(*gptr<u32>(r13 + 4u) + 3u) = u8(u32(*global_008c9f1c));
    }
    r1_9 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r0_21 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_002f6e64(r0_21, r1_9, r2_12, r3_12);
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_23 = r13;
    guest::cpu()->r[13] = r13;
    r0_24 = call_00300768(r0_23, r0_22, r2_13, r3_13);
    r1_10 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_25 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_25, r1_10, r2_14, r3_14);
    r1_11 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_24 != 0) {
        r0_26 = r13;
        *gptr<u16>(r4 + 0xcu) = u16(r6);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003007fc(r0_26, r1_11, r2_15, r3_15);
        r1_12 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    } else {
        r0_27 = r13;
        guest::cpu()->r[13] = r13;
        call_003007fc(r0_27, r1_11, r2_15, r3_15);
        r1_12 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r6 + 1u;
        if (s32(r6) < s32(0x1010u)) {  // (from the original)
            guest::preempt();
            goto L_106a2c;
        }
    }
    guest::cpu()->r[13] = r13;
    r0 = call_004ddc94(1u, r1_12, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r5 == 0) {
        r13 = r13 + 0x300u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x88f3e8u;  // (from the original)
    r2 = 0u;
    r3 = 3u;
    r12 = r0;
    r6 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r0);
L_106aae:;
    r0 = r0 + 8u;
    r1 = r1 + r6;
    goto L_106ab6;
L_106ab4:;
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_106ab6:;
    r7_1 = *gptr<u32>(r0);
    r6 = *gptr<u32>(r0 + 4u);
    r2 = r2 + r7_1;
    res_2 = r3 - 1u;
    r3 = res_2;
    if (res_2 != 0) {
        guest::preempt();
        goto L_106aae;
    }
    r0_28 = r1 + r2;
    r1_13 = *gptr<u32>(r12 + 0x1cu);  // (from the original)
    r0_29 = r1_13 + r0_28;
    guest::cpu()->r[13] = r13;
    r0_30 = call_002ff6f8(r0_29, r1_13, r2, r3);
    r1 = 0u;
    r3 = r0_30;
    r2 = 0x88f3e8u;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(7u);  // (from the original)
    r0 = r1;
L_106ad8:;
    r1 = *gptr<u32>(r2) + r1;
    if (s32(r3) < s32(r1)) {
        *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
    } else {
        r2 = r2 + 4u;
        r0 = uxtb(r0 + 1u);
        if (r0 < 8u) {
            guest::preempt();
            goto L_106ad8;
        }
    }
    if (r5 == 0) {
        r13 = r13 + 0x300u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0x88f408u;  // (from the original)
    r2 = 0u;
    r3 = 3u;
    r12 = r0;
    r6 = *gptr<u32>(r0 + 4u);
    r1 = *gptr<u32>(r0);
    do {
L_106afe:;
        r0 = r0 + 8u;
        r7_2 = *gptr<u32>(r0);
        r1 = r1 + r6;
        r6 = *gptr<u32>(r0 + 4u);
        r2 = r2 + r7_2;
        res_3 = r3 - 1u;
        r3 = res_3;
        guest::preempt();
    } while (res_3 != 0);
    r0_31 = r1 + r2;
    r1_14 = *gptr<u32>(r12 + 0x1cu);  // (from the original)
    r0_32 = r1_14 + r0_31;
    guest::cpu()->r[13] = r13;
    r0_33 = call_002ff6f8(r0_32, r1_14, r2, r3);
    r1 = 0u;
    r3 = r0_33;
    r2 = 0x88f408u;  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(7u);  // (from the original)
    r0 = r1;
L_106b24:;
    r1 = *gptr<u32>(r2) + r1;
    if (s32(r3) < s32(r1)) {
        *gptr<u8>(r4 + 0x15u) = u8(r0);  // (from the original)
    } else {
        r2 = r2 + 4u;
        r0 = uxtb(r0 + 1u);
        if (r0 < 8u) {
            guest::preempt();
            goto L_106b24;
        }
    }
    if (r5 == 0) {
        r13 = r13 + 0x300u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r7 = 0x88f428u;  // (from the original)
    r2 = 0u;
    r3 = 3u;
    r0 = r7;
    r5 = *gptr<u32>(r7 + 4u);
    r1 = *gptr<u32>(r7);
    do {
L_106b4a:;
        r0 = r0 + 8u;
        r6_1 = *gptr<u32>(r0);
        r1 = r1 + r5;
        r5 = *gptr<u32>(r0 + 4u);
        r2 = r2 + r6_1;
        res_4 = r3 - 1u;
        r3 = res_4;
        guest::preempt();
    } while (res_4 != 0);
    r0_34 = r1 + r2;
    r1_15 = *gptr<u32>(r7 + 0x1cu);  // (from the original)
    r0_35 = r1_15 + r0_34;
    guest::cpu()->r[13] = r13;
    r0_36 = call_002ff6f8(r0_35, r1_15, r2, r3);
    r1 = 0u;
    r3 = r0_36;
    r2 = 0x88f428u;  // (from the original)
    *gptr<u8>(r4 + 0x16u) = u8(7u);  // (from the original)
    r0 = r1;
L_106b6e:;
    r1 = *gptr<u32>(r2) + r1;
    if (s32(r3) >= s32(r1)) {
        goto L_106b7e;
    }
    *gptr<u8>(r4 + 0x16u) = u8(r0);  // (from the original)
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_106b7e:;
    r2 = r2 + 4u;
    r0 = uxtb(r0 + 1u);
    if (r0 < 8u) {
        guest::preempt();
        goto L_106b6e;
    }
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_00106998
GUEST_EXPORT(0x00106999, d_00106998::f_00106998);

// f_00106bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106bb0 {

struct __attribute__((packed)) Object_00106bb0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Object_00106bb0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00106bb0_0, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00300800, u32(u32, u32, u32, u32)> call_00300800;  // (from the original)

u32 f_00106bb0(gptr<Object_00106bb0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r6 = 0u;
    arg0->word_0 = u32(r6);
    arg0->word_4 = u32(r6);
    arg0->word_8 = u32(r6);
    arg0->word_c = u32(r6);
    arg0->word_10 = u32(r6);
    arg0->word_14 = u32(r6);
    r4 = r0;
    r5 = r6;
    arg0->word_18 = u32(r6);
    do {
L_106bc6:;
        r0_1 = (r5 << 2) + r4;
        call_002fc8e8(r0_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_2 = r4 + r5;
        r5 = r5 + 1u;
        res_1 = r5 - 2u;
        *gptr<u8>(r0_2 + 8u) = u8(r6);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 2u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    r0_3 = r4 + 0x18u;  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(r6);  // (from the original)
    r0_4 = call_00300800(r0_3, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_00106bb0
GUEST_EXPORT(0x00106bb1, d_00106bb0::f_00106bb0);

// f_00106bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106bfc {

inline constexpr guest::Function<0x00300815, u32(u32, u32, u32, u32)> call_00300814;  // (from the original)

u32 f_00106bfc() {
    guest::cpu()->r[13] -= 8u;
    call_00300814(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00106bfc
GUEST_EXPORT(0x00106bfd, d_00106bfc::f_00106bfc);

// f_00106c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106c0c {

inline constexpr guest::Function<0x00300815, u32(u32, u32, u32, u32)> call_00300814;  // (from the original)

u32 f_00106c0c() {
    guest::cpu()->r[13] -= 8u;
    call_00300814(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_00106c0c
GUEST_EXPORT(0x00106c0d, d_00106c0c::f_00106c0c);

// f_00106da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106da4 {

inline guest::global<u8, 0x00952b9d> global_00952b9d;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> call_00300a74;  // (from the original)

u32 f_00106da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r7_1 = 0;
    u32 r0_3 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r2_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r7_2 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_3 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x14u;  // (from the original)
    r5 = 0u;
    r6 = r1;
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r13 + 0x14u) + 0x180u);  // (from the original)
L_106db4:;
    r0_1 = r5 << 2;
    r4_1 = *gptr<u32>(r6 + 8u) + *gptr<u32>(0x8657acu + r0_1);  // (from the original)
    r0_2 = *gptr<u32>(r6 + 0xcu) + *gptr<u32>(0x8657ccu + r0_1);  // (from the original)
    r1_1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    r2_1 = r4_1 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(r0_2);
    if (r2_1 >= 0x50u) {  // (from the original)
        goto L_106e70;
    }
    if (r0_2 < 0x10u) {  // (from the original)
        goto L_106e70;
    }
    if (r0_2 >= 0x50u) {  // (from the original)
        goto L_106e70;
    }
    r7_1 = r0_2 << 2;
    r0_3 = (r2_1 >> 4) + (r0_2 + r7_1) - 0x50u;  // (from the original)
    r3_1 = r4_1 << 0x1c >> 0x1c;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0_3);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r3_1);
    r1_1 = *gptr<u16>(r1_1 + (r0_3 << 1));
    sco = r0_3 >> 0x1f & 1;  // (from the original)
    res_1 = lsl_rc(1u, r3_1 & 0xff, &sco);  // (from the original)
    r0_2 = res_1;
    *gptr<u32>(r13 + 0x10u) = u32(r0_2);  // (from the original)
    if ((r1_1 & r0_2) == 0) {
        goto L_106e70;
    }
    r1_2 = *gptr<u32>(r13);
    r2_2 = *global_00952b9d;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00300a74(r4_1, r1_2, r2_2, r3_1);
    r3_2 = guest::cpu()->r[3];
    r1_3 = *gptr<u32>(r6 + 0xcu);  // (from the original)
    r0_5 = *gptr<u32>(r6 + 8u);
    r2_3 = *global_00952b9d;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00300a74(r0_5, r1_3, r2_3, r3_2);
    r1_1 = guest::cpu()->r[1];
    if (r0_4 != r0_2) {
        goto L_106e70;
    }
    r2_4 = *gptr<u32>(r13);
    r0_6 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_002feb00(r0_6, r4_1, r2_4, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7_2 = r0_2;
    if (r0_2 == 0) {
        goto L_106e70;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fccdc(r0_2, r1_1, r2_5, r3_3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_1 = r0_7;
    r0_2 = *gptr<u32>(r13 + 0x38u);  // (from the original)
    if (r1_1 != r0_2) {
        goto L_106e70;
    }
    r0_8 = (*gptr<u32>(*gptr<u32>(r13 + 4u)) << 2) + *gptr<u32>(r13 + 0x14u) + 0x140u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_8, r7_2, r2_6, r3_4);
    r1_4 = *gptr<u32>(*gptr<u32>(r13 + 4u)) * 0x14u + *gptr<u32>(r13 + 0x14u);  // (from the original)
    r0_9 = *gptr<u32>(r13);
    *gptr<u32>(r1_4 + 8u) = u32(r4_1);
    *gptr<u32>(r1_4 + 0xcu) = u32(r0_9);  // (from the original)
    *gptr<u32>(r1_4 + 4u) = u32(*gptr<u32>(r13 + 8u));
    *gptr<u32>(r1_4) = u32(*gptr<u32>(r13 + 0xcu));  // (from the original)
    *gptr<u16>(r1_4 + 0x10u) = u16(*gptr<u32>(r13 + 0x10u));  // (from the original)
    r1_1 = *gptr<u32>(r13 + 4u);
    r0_2 = *gptr<u32>(*gptr<u32>(r13 + 4u)) + 1u;
    *gptr<u32>(r1_1) = u32(r0_2);
L_106e70:;
    r5 = r5 + 1u;
    if (r5 < 8u) {
        guest::preempt();
        goto L_106db4;
    }
    r13 = r13 + 0x24u;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_3 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00106da4
GUEST_EXPORT(0x00106da5, d_00106da4::f_00106da4);

// f_00107538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107538 {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)

u32 f_00107538() {
    *global_0095c210 = u32(0u);
    guest::cpu()->r[1] = 0x95c210u;  // (from the original)
    return 0u;
}

}  // namespace d_00107538
GUEST_EXPORT(0x00107539, d_00107538::f_00107538);

// f_00107544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107544 {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> call_00301400;  // (from the original)

u32 f_00107544(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 res_2 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 res_3 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r6_1 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_3 = 0;
    u32 r7_1 = 0;
    u32 r0_4 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r6_2 = 0;
    u32 r3_5 = 0;
    u32 r2_2 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_2 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r4_3 = 0;
    u32 r1_6 = 0;
    u32 r0_10 = 0;
    u32 res_4 = 0;
    r5 = r0;
    r0 = 0u;
    r13 = r13 - 0x1d8u;  // (from the original)
L_10754c:;
    res_1 = u32(*gptr<u16>((0xffu + 0xadu) * r0 + r5 + 0x1aau)) << 0x1f >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        r0 = r0 + 1u;
        if (s32(r0) < s32(0xfu)) {  // (from the original)
            guest::preempt();
            goto L_10754c;
        }
    }
    r1_1 = *global_0095c210;
    *gptr<u32>(r13 + 4u) = u32(r0);
    res_2 = r0 - r1_1;
    *gptr<u32>(r13 + 8u) = u32(res_2);
    if (res_2 >> 0x1f) {  // (from the original)
        *gptr<u32>(r13 + 8u) = u32(0u);
    }
    r0_1 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003013c0(r0_1, r1_1, r2, r3);
    r1_2 = *gptr<u32>(r13 + 4u);
    r0_2 = *gptr<u32>(r13 + 8u) + 1u;
    res_3 = r0_2 - r1_2;
    *gptr<u32>(r13) = u32(r0_2);
    if (res_3 >> 0x1f == ((r0_2 ^ r1_2) & (r0_2 ^ res_3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x1d8u;  // (from the original)
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    *gptr<u32>(r13 + 0xcu) = u32(r13 + 0x1bau);  // (from the original)
L_10758e:;
    r4_1 = *gptr<u32>(r13) * 0x1acu + r5;  // (from the original)
    r0_3 = r4_1 + 0x1a6u;  // (from the original)
    r6_1 = r4_1 - 0x1acu;  // (from the original)
    r3_1 = *gptr<u8>(r0_3 + 3u);
    r2_1 = *gptr<u8>(r0_3 + 2u);
    r1_3 = *gptr<u16>(r0_3);
    r7_1 = r4_1 - 6u;
    guest::cpu()->r[13] = r13;
    r0_4 = call_00301400(r7_1, r1_3, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    if (r0_4 == 0 || r0_4 >> 0x1f != (r0_4 & (r0_4 ^ r0_4)) >> 0x1f) {  // (from the original)
        goto L_107620;
    }
    r0_5 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_5, r4_1, 0x1acu, r3_2);  // (from the original)
    r3_3 = guest::cpu()->r[3];
    r7 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f8574(r4_1, r6_1, 0x1acu, r3_3);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r4 = *gptr<u32>(r13) - 1u;
    if (s32(r4) <= s32(*gptr<u32>(r13 + 8u))) {
        goto L_10760e;
    }
    do {
L_1075d6:;
        r6_2 = r4 - 1u;
        r3_5 = *gptr<u8>(r7 + 3u);
        r2_2 = *gptr<u8>(r7 + 2u);
        r1_4 = *gptr<u16>(r7);
        r0_6 = 0x1acu * r6_2 + r5;  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(r0_6);  // (from the original)
        r0_7 = r0_6 + 0x1a6u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_8 = call_00301400(r0_7, r1_4, r2_2, r3_5);
        r3_4 = guest::cpu()->r[3];
        if (r0_8 == 0 || r0_8 >> 0x1f != (r0_8 & (r0_8 ^ r0_8)) >> 0x1f) {  // (from the original)
            goto L_10760e;
        }
        r4_2 = r4 * 0x1acu;  // (from the original)
        r1_5 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        r0_9 = r4_2 + r5;
        guest::cpu()->r[13] = r13;
        call_002f8574(r0_9, r1_5, 0x1acu, r3_4);  // (from the original)
        r3_4 = guest::cpu()->r[3];
        r4 = r6_2;
        guest::preempt();
    } while (s32(r6_2) > s32(*gptr<u32>(r13 + 8u)));
L_10760e:;
    r4_3 = r4 * 0x1acu;  // (from the original)
    r1_6 = r13 + 0x14u;  // (from the original)
    r0_10 = r4_3 + r5;
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_10, r1_6, 0x1acu, r3_4);  // (from the original)
L_107620:;
    r1_2 = *gptr<u32>(r13 + 4u);
    r0_2 = *gptr<u32>(r13) + 1u;
    res_4 = r0_2 - r1_2;
    *gptr<u32>(r13) = u32(r0_2);
    if (res_4 >> 0x1f != ((r0_2 ^ r1_2) & (r0_2 ^ res_4)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_10758e;
    }
    r13 = r13 + 0x1d8u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00107544
GUEST_EXPORT(0x00107545, d_00107544::f_00107544);

// f_00107634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107634 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_00107634(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r1 >= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_1;
    r4 = r1 + 1u;
    r6 = r0;
    r7 = 0x1acu;  // (from the original)
    r0 = 0x1acu * r1 + r6;  // (from the original)
    if (s32(r4) >= s32(0xfu)) {  // (from the original)
        goto L_107672;
    }
    do {
L_10764e:;
        res_1 = (0xffu + 0xadu) * r4 + r6;  // (from the original)
        res_2 = u32(*gptr<u16>(0xffu + 0xabu + res_1)) << 0x1f >> 0x1f;  // (from the original)
        if (res_2 == 0) {
            goto L_107672;
        }
        guest::cpu()->r[13] = r13;
        call_002f8574(r0, res_1, r7, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        res_3 = r4 - 0xfu;  // (from the original)
        r0 = res_1;
        guest::preempt();
    } while (res_3 >> 0x1f != ((r4 ^ 0xfu) & (r4 ^ res_3)) >> 0x1f);  // (from the original)
L_107672:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301444(r0, r7, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13 + 4);
    r5_1 = *gptr<u32>(r13 + 8);
    r6_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x14);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_00107634
GUEST_EXPORT(0x00107635, d_00107634::f_00107634);

// f_0010767c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010767c {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)

u32 f_0010767c() {
    u32 r0_1 = 0;
    r0_1 = ~0u;
    *global_0095c210 = u32(r0_1);
    guest::cpu()->r[1] = 0x95c210u;  // (from the original)
    return r0_1;
}

}  // namespace d_0010767c
GUEST_EXPORT(0x0010767d, d_0010767c::f_0010767c);

// f_00107ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107ed0 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fbf30, u32(u32, u32, u32, u32)> call_002fbf30;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> call_00301df4;  // (from the original)
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> call_00301ea8;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32, u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x00302204, u32(u32, u32, u32, u32)> call_00302204;  // (from the original)
inline constexpr guest::Function<0x003022a4, u32(u32, u32, u32, u32)> call_003022a4;  // (from the original)
inline constexpr guest::Function<0x003022b8, u32(u32, u32, u32, u32)> call_003022b8;  // (from the original)

u32 f_00107ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 res_3 = 0;
    u32 r0_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r5_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r3_7 = 0;
    u32 r2_7 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r1_4 = 0;
    u32 r1_5 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    r13 = r13 - 0x1d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = 0x6214fu;  // (from the original)
    r4_1 = r0_1 + r1_1;
    res_1 = u32(*gptr<u8>(r4_1)) << 0x1f;  // (from the original)
    r0_2 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    res_2 = u32(*gptr<u8>(r4_1 + 0xbu)) << 0x1f;  // (from the original)
    r0_2 = res_2;
    if (res_2 != 0) {
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb328(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00302204(r0_4, r1_2, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 4u) {
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_5 = call_002fb328(r0_2, r1_1, r2_3, r3_3);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_6 = r0_5 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301df4(r0_6, r0_2, r2_4, r3_4);
    r1_1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_1 = 0x57u << 8;  // (from the original)
    res_3 = u32(*gptr<u8>(r0_2 + r1_1 + 1u)) << 0x1e;  // (from the original)
    r0_2 = res_3;
    if (!(res_3 >> 0x1f)) {  // (from the original)
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fae84(r0_2, r1_1, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r5_1 = r0_7 + 0x6e238u;  // (from the original)
    r0_8 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_003013c0(r0_8, 0x6e238u, r2_6, r3_6);  // (from the original)
    *gptr<u32>(r0_9 + 0x1acu) = u32(0xfcu);  // (from the original)
    r1_3 = r13 + 0x10u;  // (from the original)
    r3_7 = *gptr<u32>(0x88ec00u + 0xcu);  // (from the original)
    r2_7 = *gptr<u32>(0x88ec00u + 8u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003022a4(0xad554cu, r1_3, r2_7, r3_7);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0xad554cu);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    r0_10 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301ea8(r0_10, 0x88ec50u, 1u, r0);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x1d0u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    call_002fbf30(r4_1, 1u, r2_8, r3_8);
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r1_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301f08(r5_1, r1_4, r2_9, r3_9);
    r1_5 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_2 = call_003022b8(0xad554cu, r1_5, r2_10, r3_10);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x1d0u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00107ed0
GUEST_EXPORT(0x00107ed1, d_00107ed0::f_00107ed0);

// f_00107f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107f84 {

inline constexpr guest::Function<0x00107ed1, u32(u32, u32, u32, u32)> call_00107ed0;  // (from the original)
inline constexpr guest::Function<0x00108019, u32(u32, u32, u32, u32)> call_00108018;  // (from the original)
inline constexpr guest::Function<0x001080ed, u32(u32, u32, u32, u32)> call_001080ec;  // (from the original)
inline constexpr guest::Function<0x001081d9, u32(u32, u32, u32, u32)> call_001081d8;  // (from the original)

u32 f_00107f84(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_00107ed0(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00108018(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001080ec(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_001081d8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00107f84
GUEST_EXPORT(0x00107f85, d_00107f84::f_00107f84);

// f_00107fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107fac {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> call_00301ea8;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32, u32, u32)> call_00301f08;  // (from the original)

u32 f_00107fac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r4_1 = 0;
    u32 r5_2 = 0;
    u32 tpc_1 = 0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0xc;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r14);
    r13 = ea_1 - 0x1c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r1_1 = 0x6214fu;  // (from the original)
    res_1 = u32(*gptr<u8>(r0_1 + 0x80u + r1_1 + 3u)) >> 3 << 0x1f;  // (from the original)
    r0_2 = res_1;
    if (res_1 == 0) {
        r13 = r13 + 0x1c4u;  // (from the original)
        r4_1 = *gptr<u32>(r13);
        r5_2 = *gptr<u32>(r13 + 4);
        tpc_1 = *gptr<u32>(r13 + 8);
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fae84(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r5_1 = r0_3 + 0x6e238u;  // (from the original)
    r0_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003013c0(r0_4, 0x6e238u, r2_2, r3_2);  // (from the original)
    *gptr<u32>(r0_5 + 0x1acu) = u32(0xfcu);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r0_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301ea8(r0_6, 0x10800cu, 0x10u, r1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x1c4u;  // (from the original)
        r4_1 = *gptr<u32>(r13);
        r5_2 = *gptr<u32>(r13 + 4);
        tpc_1 = *gptr<u32>(r13 + 8);
        r13 = r13 + 0xc;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
    r1_2 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301f08(r5_1, r1_2, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x1c4u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    tpc_1 = *gptr<u32>(r13 + 8);
    r13 = r13 + 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00107fac
GUEST_EXPORT(0x00107fad, d_00107fac::f_00107fac);

// f_001082c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001082c8 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_001082c8(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = 0u;
    r6 = 0x1acu;  // (from the original)
    r5 = r0;
    do {
L_1082d2:;
        r0_1 = 0x1acu * r4 + r5;  // (from the original)
        r0_2 = call_00301444(r0_1, r6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xfu));  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_001082c8
GUEST_EXPORT(0x001082c9, d_001082c8::f_001082c8);

// f_001082e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001082e8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32, u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x003026f8, u32(u32, u32, u32, u32)> call_003026f8;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32, u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028b4, u32(u32, u32, u32, u32)> call_003028b4;  // (from the original)

u32 f_001082e8(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r0_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_10 = 0;
    r13 = r13 - 0x2b0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003026f8(r0_2, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003013c0(r0_3, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_4, r1_3, r2_3, r3_3);
    r1_4 = r13 + 0xcu;  // (from the original)
    r0_5 = r13 + 0x1b8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_5, r1_4, 0x88ec38u, 1u);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_5 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301f08(r0, r1_5, r2_4, r3_4);
    r1_6 = r13 + 0xcu;  // (from the original)
    r0_6 = r13 + 0x1b8u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13) = u32(r0_1);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_6, r1_6, 0x88ec38u, 2u);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_7 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301f08(r0, r1_7, r2_5, r3_5);
    r1_8 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_7, r1_8, r2_6, r3_6);
    r1_9 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_8 = r13 + 0x1b8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_003028b4(r0_8, r1_9, r2_7, r3_7);
    r1_10 = guest::cpu()->r[1];
    r13 = r13 + 0x2b0u;  // (from the original)
    guest::cpu()->r[1] = r1_10;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_001082e8
GUEST_EXPORT(0x001082e9, d_001082e8::f_001082e8);

// f_00108354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108354 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32, u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x003026f8, u32(u32, u32, u32, u32)> call_003026f8;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32, u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028b4, u32(u32, u32, u32, u32)> call_003028b4;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00304438, u32(u32, u32, u32, u32)> call_00304438;  // (from the original)
inline constexpr guest::Function<0x0030443c, u32(u32, u32, u32, u32)> call_0030443c;  // (from the original)
inline constexpr guest::Function<0x00304440, u32(u32, u32, u32, u32)> call_00304440;  // (from the original)
inline constexpr guest::Function<0x00304444, u32(u32, u32, u32, u32)> call_00304444;  // (from the original)

u32 f_00108354(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r7_1 = 0;
    u32 r6_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_8 = 0;
    u32 r1_9 = 0;
    u32 r0_16 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r1_10 = 0;
    u32 r1_11 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_17 = 0;
    u32 r1_12 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_13 = 0;
    r4 = 0u;
    r6 = 0x1acu;  // (from the original)
    r13 = r13 - 0x2b8u;  // (from the original)
    r5 = r0;
    do {
L_108362:;
        r0_1 = 0x1acu * r4 + r5;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_2 = call_00301444(r0_1, r6, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xfu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb378(r0_2, r1_1, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_3);
    r0_4 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003026f8(r0_4, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_003013c0(r0_5, r1_3, r2_2, r3_2);
    r1_4 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_7 = call_002fb328(r0_6, r1_4, r2_3, r3_3);
    r1_5 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r0_7 + 0xa0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_00304438(r0_8, r1_5, r2_4, r3_4);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r7_1 = 0u;
    r6_1 = r7_1;
    if (r0_9 == 0) {
        goto L_1083b2;
    }
    r0_10 = r0_9 + 0x56f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_0030443c(r0_10, 0x56f0u, r2_5, r3_5);  // (from the original)
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_1083b2;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_00304440(r0_10, r1_6, r2_5, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r7_1 = r0_12;
    r6_1 = r1_6;
L_1083b2:;
    r0_13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_13, r1_6, r2_5, r3_5);
    r1_7 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_003028f0(r0_14, r1_7, r2_6, r3_6);
    r1_8 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_00304444(r0_15, r1_8, r7_1, r6_1);
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    r1_9 = r13 + 0xf8u;  // (from the original)
    r0_16 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_16, r1_9, 0x88ec44u, 3u);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r1_10 = r13 + 0xf8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00301f08(r5, r1_10, r2_7, r3_7);
    r1_11 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_17 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_17, r1_11, r2_8, r3_8);
    r1_12 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_18 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_19 = call_003028b4(r0_18, r1_12, r2_9, r3_9);
    r1_13 = guest::cpu()->r[1];
    r13 = r13 + 0x2b8u;  // (from the original)
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[13] = r13;
    return r0_19;
}

}  // namespace d_00108354
GUEST_EXPORT(0x00108355, d_00108354::f_00108354);

// f_001083fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001083fc {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)
inline constexpr guest::Function<0x00107545, u32(u32, u32, u32, u32)> call_00107544;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

u32 f_001083fc(u32 r0_unused, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 ea_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 tpc_1 = 0;
    r0_1 = *global_0095c210;
    if (s32(r0_1) <= s32(1u)) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 + 0x6e238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00107544(r0_3, 0x6e238u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r4_1 = *gptr<u32>(r13);
    tpc_1 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_4;
}

}  // namespace d_001083fc
GUEST_EXPORT(0x001083fd, d_001083fc::f_001083fc);

// f_00108434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108434 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00108434() {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301d0c(guest::cpu()->r[0], 0x3013c1u, 0x1acu, 0xfu);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return guest::cpu()->r[0];
}

}  // namespace d_00108434
GUEST_EXPORT(0x00108435, d_00108434::f_00108434);

// f_00108448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108448 {

struct __attribute__((packed)) Object_00108448_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00108448_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001e4524, u32(u32, u32, u32, u32)> call_001e4524;  // (from the original)

u32 f_00108448(gptr<Object_00108448_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->byte_0 = u8(0u);
    r0_1 = call_001e4524(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00108448
GUEST_EXPORT(0x00108449, d_00108448::f_00108448);

// f_00108a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108a9c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00303018, u32(u32, u32, u32, u32)> call_00303018;  // (from the original)

u32 f_00108a9c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    call_00301444(r0, 0x8cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r6 = 0u;
    *gptr<u8>(r4) = u8(r6);
    r5 = r6;
    *gptr<u8>(r4 + 1u) = u8(r6);
    do {
L_108aae:;
        r0_1 = (r5 << 2) + r4 + 2u;
        call_002fc8e8(r0_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_2 = r4 + r5 + 0x40u;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r5 - 0x12u;  // (from the original)
        *gptr<u8>(r0_2 + 0xau) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 0x12u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r5 = 0u;
    do {
L_108ac8:;
        r0_3 = 0x18u * r5 + r4 + 0x5cu;  // (from the original)
        r0_4 = call_00303018(r0_3, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(2u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_4;
}

}  // namespace d_00108a9c
GUEST_EXPORT(0x00108a9d, d_00108a9c::f_00108a9c);

// f_00108ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108ae0 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

u32 f_00108ae0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_5 = 0;
    r4 = 0u;
    r13 = r13 - 0x2f8u;  // (from the original)
    r5 = r0;
    r6 = r4;
    do {
L_108aec:;
        r0_1 = (r4 << 2) + r5 + 0x12u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_2 = r5 + r4 + 0x20u;  // (from the original)
        r4 = r4 + 1u;
        res_1 = r4 - 6u;
        *gptr<u8>(r0_2 + 0xau) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 6u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_3, r1_1, r2, r3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_4, 0xbu, 0x28u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_5 = r5 + 0x12u;  // (from the original)
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_5, 4u, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_6, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_7, r1_3, r2_3, r3_3);
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_8, 0xau, 0x28u, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_9 = r5 + 0x22u;  // (from the original)
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_9, 2u, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fc8fc(r0_10, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r13 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_00108ae0
GUEST_EXPORT(0x00108ae1, d_00108ae0::f_00108ae0);

// f_00108b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108b58 {

struct __attribute__((packed)) Object_00108b58_0 {
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
};
GUEST_OFFSET(Object_00108b58_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00108b58_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003035dd, u32(u32, u32, u32, u32)> call_003035dc;  // (from the original)

u32 f_00108b58(gptr<Object_00108b58_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    arg0->word_c = u32(0u);
    arg0->word_10 = u32(0u);
    arg0->word_14 = u32(0u);
    arg0->word_18 = u32(0u);
    arg0->word_1c = u32(0u);
    arg0->word_20 = u32(0u);
    arg0->word_24 = u32(0u);
    arg0->word_28 = u32(0u);
    arg0->word_2c = u32(0u);
    call_003035dc(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = r0 + 8u;
    r0_2 = call_00303534(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_00108b58
GUEST_EXPORT(0x00108b59, d_00108b58::f_00108b58);

// f_00109614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109614 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)

u32 f_00109614(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f825c(r0, 0x9cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u8>(r0 + 0x15u) = u8(0u);  // (from the original)
    *gptr<u8>(r0 + 0x14u) = u8(0u);  // (from the original)
    *gptr<u32>(r0 + 0x10u) = u32(0xau);  // (from the original)
    call_00303cdc(r0, 0xau, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = r0 + 8u;
    call_00303cdc(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x18u;  // (from the original)
    call_00303534(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    *gptr<u32>(r0 + 0x98u) = u32(0xfu);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return 0xfu;  // (from the original)
}

}  // namespace d_00109614
GUEST_EXPORT(0x00109615, d_00109614::f_00109614);

// f_00109930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109930 {

inline constexpr guest::Function<0x001acb90, u32(u32, u32, u32, u32)> call_001acb90;  // (from the original)
inline constexpr guest::Function<0x001b1308, u32(u32, u32, u32, u32)> call_001b1308;  // (from the original)
inline constexpr guest::Function<0x001b31a4, u32(u32, u32, u32, u32)> call_001b31a4;  // (from the original)
inline constexpr guest::Function<0x001b7688, u32(u32, u32, u32, u32)> call_001b7688;  // (from the original)
inline constexpr guest::Function<0x001c203c, u32(u32, u32, u32, u32)> call_001c203c;  // (from the original)
inline constexpr guest::Function<0x001e5ba0, u32(u32, u32, u32, u32)> call_001e5ba0;  // (from the original)
inline constexpr guest::Function<0x00207330, u32(u32, u32, u32, u32)> call_00207330;  // (from the original)
inline constexpr guest::Function<0x00243bd0, u32(u32, u32, u32, u32)> call_00243bd0;  // (from the original)
inline constexpr guest::Function<0x0029cb74, u32(u32, u32, u32, u32)> call_0029cb74;  // (from the original)
inline constexpr guest::Function<0x0029cf7c, u32(u32, u32, u32, u32)> call_0029cf7c;  // (from the original)
inline constexpr guest::Function<0x0029d060, u32(u32, u32, u32, u32)> call_0029d060;  // (from the original)
inline constexpr guest::Function<0x002c21c4, u32(u32, u32, u32, u32)> call_002c21c4;  // (from the original)
inline constexpr guest::Function<0x002e0bec, u32(u32, u32, u32, u32)> call_002e0bec;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32, u32, u32, u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32, u32, u32, u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32, u32, u32, u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32, u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x00304f1c, u32(u32, u32, u32, u32)> call_00304f1c;  // (from the original)
inline constexpr guest::Function<0x00304f20, u32(u32, u32, u32, u32)> call_00304f20;  // (from the original)
inline constexpr guest::Function<0x00304f24, u32(u32, u32, u32, u32)> call_00304f24;  // (from the original)
inline constexpr guest::Function<0x00304f28, u32(u32, u32, u32, u32)> call_00304f28;  // (from the original)
inline constexpr guest::Function<0x00304f2c, u32(u32, u32, u32, u32)> call_00304f2c;  // (from the original)
inline constexpr guest::Function<0x0030503c, u32(u32, u32, u32, u32)> call_0030503c;  // (from the original)
inline constexpr guest::Function<0x00305040, u32(u32, u32, u32, u32)> call_00305040;  // (from the original)
inline constexpr guest::Function<0x00305044, u32(u32, u32, u32, u32)> call_00305044;  // (from the original)
inline constexpr guest::Function<0x00305048, u32(u32, u32, u32, u32)> call_00305048;  // (from the original)
inline constexpr guest::Function<0x0030504c, u32(u32, u32, u32, u32)> call_0030504c;  // (from the original)
inline constexpr guest::Function<0x00305050, u32(u32, u32, u32, u32)> call_00305050;  // (from the original)
inline constexpr guest::Function<0x003317b4, u32(u32, u32, u32, u32)> call_003317b4;  // (from the original)
inline constexpr guest::Function<0x004e1ac4, u32(u32, u32, u32, u32)> call_004e1ac4;  // (from the original)
inline constexpr guest::Function<0x004eb268, u32(u32, u32, u32, u32)> call_004eb268;  // (from the original)

u32 f_00109930(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00304f1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_1 = call_0030444c(0xa82000u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_00207330(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = call_004eb268(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = call_00304f20(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = call_001e5ba0(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = call_001b31a4(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = call_00304f24(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = call_00304f28(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_9 = call_002fc188(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_10 = call_002fc194(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_11 = call_00304f2c(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_12 = call_00304530(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_13 = call_001c203c(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = call_0030459c(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_15 = call_001b1308(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00243bd0(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0029cb74(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0029d060(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003317b4(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_16 = call_0029cf7c(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_17 = call_0030503c(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_18 = call_00305040(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00305044(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002c21c4(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001acb90(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00305048(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001b7688(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_19 = call_002e0bec(0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_20 = call_0030504c(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_21 = call_004e1ac4(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_22 = call_00305050(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_22;
}

}  // namespace d_00109930
GUEST_EXPORT(0x00109931, d_00109930::f_00109930);

// f_00109a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109a90 {

inline guest::global<u32, 0x00952c64> global_00952c64;  // (from the original)
inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x001b1010, u32(u32, u32, u32, u32)> call_001b1010;  // (from the original)
inline constexpr guest::Function<0x001c1eb8, u32(u32, u32, u32, u32)> call_001c1eb8;  // (from the original)
inline constexpr guest::Function<0x001de39c, u32(u32, u32, u32, u32)> call_001de39c;  // (from the original)
inline constexpr guest::Function<0x0028edfc, u32(u32, u32, u32, u32)> call_0028edfc;  // (from the original)
inline constexpr guest::Function<0x002b6580, u32(u32, u32, u32, u32)> call_002b6580;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32, u32, u32, u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32, u32, u32)> call_003045a8;  // (from the original)
inline constexpr guest::Function<0x00305054, u32(u32, u32, u32, u32)> call_00305054;  // (from the original)
inline constexpr guest::Function<0x00305058, u32(u32, u32, u32, u32)> call_00305058;  // (from the original)
inline constexpr guest::Function<0x0030505c, u32(u32, u32, u32, u32)> call_0030505c;  // (from the original)
inline constexpr guest::Function<0x00305060, u32(u32, u32, u32, u32)> call_00305060;  // (from the original)
inline constexpr guest::Function<0x00305064, u32(u32, u32, u32, u32)> call_00305064;  // (from the original)
inline constexpr guest::Function<0x00305068, u32(u32, u32, u32, u32)> call_00305068;  // (from the original)
inline constexpr guest::Function<0x0030506c, u32(u32, u32, u32, u32)> call_0030506c;  // (from the original)
inline constexpr guest::Function<0x00305070, u32(u32, u32, u32, u32)> call_00305070;  // (from the original)
inline constexpr guest::Function<0x00305074, u32(u32, u32, u32, u32)> call_00305074;  // (from the original)

u32 f_00109a90(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r5_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r5_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r0_13 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r4_1 = 0;
    u32 r0_16 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r4_2 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r4_3 = 0;
    u32 r0_18 = 0;
    u32 r1_9 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r4_4 = 0;
    u32 r0_19 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_20 = 0;
    u32 r1_11 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r4_5 = 0;
    u32 r0_21 = 0;
    u32 r1_12 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_22 = 0;
    u32 r1_13 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r4_6 = 0;
    u32 r0_23 = 0;
    u32 r1_14 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r4_7 = 0;
    u32 r0_24 = 0;
    u32 r1_15 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r4_8 = 0;
    u32 r0_25 = 0;
    u32 r1_16 = 0;
    u32 r0_26 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r0_1 = *global_00975338;
    r0_2 = call_003045a8(r0_1, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = *global_00952c64;
    r0_3 = call_00305054(0xa14b5cu, r0_2, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = *global_00975338;
    r0_5 = call_003045a8(r0_4, r1_1, r2_2, r3_2);
    r0_6 = call_00305058(0xa8349cu, 0x887628u, r0_5, 0x20u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r5_1 = r0_3 & r0_6;
    r0_7 = *global_00975338;
    r0_8 = call_003045a8(r0_7, r1_2, r2_3, r3_3);
    r0_9 = call_0030505c(0xa83aecu, 0x88760cu, r0_8, 0x20u);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r5_2 = r5_1 & r0_9;
    r0_10 = *global_00975338;
    r0_11 = call_003045a8(r0_10, r1_3, r2_4, r3_4);
    r0_12 = call_00305060(0xa8413cu, 0x8875f0u, r0_11, 0x20u);  // (from the original)
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_4 = r0_12 & r5_2;
    r0_13 = call_00305064(r0_12, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_14 = r0_13 & r1_4;
    r0_15 = call_00305068(r0_14, r1_5, r2_6, r3_6);
    r1_6 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r4_1 = r0_15 & r0_14;
    r0_16 = call_001de39c(r0_15, r1_6, r2_7, r3_7);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r4_2 = r4_1 & r0_16;
    r0_17 = call_0030506c(r0_16, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r4_3 = r4_2 & r0_17;
    r0_18 = call_00305070(r0_17, r1_8, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r4_4 = r4_3 & r0_18;
    r0_19 = call_00304530(r0_18, r1_9, r2_10, r3_10);
    r1_10 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_20 = call_001c1eb8(r0_19, r1_10, r2_11, r3_11);
    r1_11 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r4_5 = r4_4 & r0_20;
    r0_21 = call_0030459c(r0_20, r1_11, r2_12, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_22 = call_001b1010(r0_21, r1_12, r2_13, r3_13);
    r1_13 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r4_6 = r4_5 & r0_22;
    r0_23 = call_002b6580(r0_22, r1_13, r2_14, r3_14);
    r1_14 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r4_7 = r4_6 & r0_23;
    r0_24 = call_0028edfc(r0_23, r1_14, r2_15, r3_15);
    r1_15 = guest::cpu()->r[1];
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r4_8 = r4_7 & r0_24;
    r0_25 = call_00305074(r0_24, r1_15, r2_16, r3_16);
    r1_16 = guest::cpu()->r[1];
    r0_26 = r0_25 & r4_8;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_16;
    return r0_26;
}

}  // namespace d_00109a90
GUEST_EXPORT(0x00109a91, d_00109a90::f_00109a90);

// f_00109b58: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109b58 {

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u32, 0x0095168c> global_0095168c;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline guest::global<u32, 0x00981ff0> global_00981ff0;  // (from the original)
inline constexpr guest::Function<0x0014f704, u32(u32, u32, u32, u32)> call_0014f704;  // (from the original)
inline constexpr guest::Function<0x0014f70c, u32(u32, u32, u32, u32)> call_0014f70c;  // (from the original)
inline constexpr guest::Function<0x001b85ac, u32(u32, u32, u32, u32)> call_001b85ac;  // (from the original)
inline constexpr guest::Function<0x001b9250, u32(u32, u32, u32, u32)> call_001b9250;  // (from the original)
inline constexpr guest::Function<0x001b95f4, u32(u32, u32, u32, u32)> call_001b95f4;  // (from the original)
inline constexpr guest::Function<0x002f3398, u32(u32, u32, u32, u32)> call_002f3398;  // (from the original)
inline constexpr guest::Function<0x002f341c, u32(u32, u32, u32, u32)> call_002f341c;  // (from the original)
inline constexpr guest::Function<0x00304640, u32(u32, u32, u32, u32)> call_00304640;  // (from the original)
inline constexpr guest::Function<0x00305078, u32(u32, u32, u32, u32)> call_00305078;  // (from the original)
inline constexpr guest::Function<0x003050dc, u32(u32, u32, u32, u32)> call_003050dc;  // (from the original)
inline constexpr guest::Function<0x003050e0, u32(u32, u32, u32, u32)> call_003050e0;  // (from the original)
inline constexpr guest::Function<0x003050e4, u32(u32, u32, u32, u32)> call_003050e4;  // (from the original)

u32 f_00109b58(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_6 = 0;
    u32 r0_15 = 0;
    u32 r3_7 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = *global_0095168c;
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_00305078(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_001b95f4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_001b9250(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], r3_2);
    r3_3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_001b85ac(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], r3_3);
    r3_4 = guest::cpu()->r[3];
    if (*gptr<u32>(r0 + 0x34u) == 0) {  // (from the original)
        goto L_109ba4;
    }
    r0_5 = *gptr<u8>(0x38u + r0);  // (from the original)
    if (r0_5 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_5;
    }
    if (*gptr<u32>(r0 + 0x6cu) == 0) {  // (from the original)
        goto L_109bbe;
    }
    r0_6 = *gptr<u8>(r0 + 0x70u);  // (from the original)
    if (r0_6 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    r0_7 = *global_009500e0;
    if (r0_7 == 0) {
        goto L_109bca;
    }
    goto L_109bd4;
L_109ba4:;
    *gptr<u32>(r0 + 0x20u) = u32(0x109a19u);  // (from the original)
    *gptr<u32>(r0 + 0x24u) = u32(0x1099cdu);  // (from the original)
    r0_8 = *global_00952c3c;
    guest::cpu()->r[13] = r13;
    call_0014f704(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_9 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    call_00304640(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], r3_5);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
L_109bbe:;
    r0_10 = r0 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00304640(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 0u;
L_109bca:;
    guest::cpu()->r[13] = r13;
    call_002f3398(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r3_4 = guest::cpu()->r[3];
    r0_11 = *global_009500e0;
    if (r0_11 == 0) {
        goto L_109bf0;
    }
L_109bd4:;
    if (*global_00981ff0 == 0) {
        r0_12 = *global_00952c3c;
        guest::cpu()->r[13] = r13;
        call_002f341c(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
        r3_4 = guest::cpu()->r[3];
    }
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    r0_14 = call_003050dc(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r3_6 = guest::cpu()->r[3];
    if (r0_14 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_14;
    }
    guest::cpu()->r[13] = r13;
    r0_11 = call_003050e0(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], r3_6);
    r3_4 = guest::cpu()->r[3];
L_109bf0:;
    guest::cpu()->r[13] = r13;
    r0_15 = call_003050e4(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0014f70c(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], r3_7);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_00109b58
GUEST_EXPORT(0x00109b59, d_00109b58::f_00109b58);

// f_00109c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109c14 {

inline constexpr guest::Function<0x00109931, u32(u32, u32, u32, u32)> call_00109930;  // (from the original)
inline constexpr guest::Function<0x00109a91, u32(u32, u32, u32, u32)> call_00109a90;  // (from the original)
inline constexpr guest::Function<0x00109b59, u32(u32, u32, u32, u32)> call_00109b58;  // (from the original)
inline constexpr guest::Function<0x002430ac, u32(u32, u32, u32, u32)> call_002430ac;  // (from the original)
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> call_002f737c;  // (from the original)
inline constexpr guest::Function<0x00304bf4, u32(u32, u32, u32, u32)> call_00304bf4;  // (from the original)
inline constexpr guest::Function<0x003050e8, u32(u32, u32, u32, u32)> call_003050e8;  // (from the original)
inline constexpr guest::Function<0x003050ec, u32(u32, u32, u32, u32)> call_003050ec;  // (from the original)
inline constexpr guest::Function<0x003050f0, u32(u32, u32, u32, u32)> call_003050f0;  // (from the original)
inline constexpr guest::Function<0x0030514c, u32(u32, u32, u32, u32)> call_0030514c;  // (from the original)
inline constexpr guest::Function<0x00305150, u32(u32, u32, u32, u32)> call_00305150;  // (from the original)

u32 f_00109c14(u32 r0) {
    u32 r1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r1_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r0;
    r0_1 = call_002f737c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        r0_2 = call_003050e8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_3 = call_003050ec(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r5_1 = r0_2 & r0_3;
        r0_4 = call_003050f0(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = r0_4;
        if ((r1 & r5_1) == 0) {
            goto L_109c4e;
        }
        call_00304bf4(r4_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_5 = call_002f737c(r4_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        goto L_109c52;
    }
    goto L_109c60;
L_109c4e:;
    r0 = 0u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_109c52:;
    call_00304bf4(r4_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    call_00109930(r4_1, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
L_109c60:;
    r0_6 = call_002f737c(r4_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_6 == 0) {
        r0 = call_00109a90(r4_1, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        call_00304bf4(r4_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_7 = call_002f737c(r4_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    if (r0_7 == 0) {
        r0 = call_00109b58(r4_1, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
        call_00304bf4(r4_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0_8 = call_002f737c(r4_1, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        call_00304bf4(r4_1, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_8 = guest::cpu()->r[1];
        r0_9 = call_0030514c(0u, r1_8, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r0_10 = call_002430ac(r0_9, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_10 = guest::cpu()->r[1];
        call_00305150(r0_10, r1_10, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    return 1u;
}

}  // namespace d_00109c14
GUEST_EXPORT(0x00109c15, d_00109c14::f_00109c14);

// f_00109cc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109cc4 {

struct __attribute__((packed)) Object_00109cc4_0 {
    u8 unknown_0[0x34];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Object_00109cc4_0, word_34, 0x34);  // (from the original)

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline guest::global<u32, 0x009506cc> global_009506cc;  // (from the original)
inline guest::global<u8, 0x00957224> global_00957224;  // (from the original)
inline constexpr guest::Function<0x00304c1c, u32(u32, u32, u32, u32)> call_00304c1c;  // (from the original)
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_00304c68;  // (from the original)
inline constexpr guest::Function<0x00305154, u32(u32, u32, u32, u32)> call_00305154;  // (from the original)
inline constexpr guest::Function<0x0030516c, u32(u32, u32, u32, u32)> call_0030516c;  // (from the original)
inline constexpr guest::Function<0x00305170, u32(u32, u32, u32, u32)> call_00305170;  // (from the original)

u32 f_00109cc4(gptr<Object_00109cc4_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 r1_7 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r1_8 = 0;
    u32 r0_10 = 0;
    u32 r1_9 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r0_1 = arg0->word_34;
    if (r0_1 != 4u) {
        r0_2 = *global_009506cc;
        if (r0_2 == 0xbu) {  // (from the original)
            goto L_109d2a;
        }
        guest::cpu()->r[13] = r13;
        call_00305154(r0_2, r1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0_3 = call_00304c1c(1u, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_109d2a;
        }
        guest::cpu()->r[13] = r13;
        r0_4 = call_00304c1c(2u, r1_2, r2_2, r3_2);
        r1_3 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        if (r0_4 == 0) {
            goto L_109d2a;
        }
        guest::cpu()->r[13] = r13;
        r0_5 = call_00304c1c(8u, r1_3, r2_3, r3_3);
        r1_4 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_5 == 0) {
            goto L_109d2a;
        }
        guest::cpu()->r[13] = r13;
        r0_6 = call_00304c1c(0x10u, r1_4, r2_4, r3_4);  // (from the original)
        r1_5 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            goto L_109d2a;
        }
        guest::cpu()->r[13] = r13;
        call_0030516c(r0_6, r1_5, r2_5, r3_5);
        *gptr<u32>(r13) = u32(2u);
        guest::cpu()->r[13] = r13;
        r0_7 = call_00304c68(0x62u, 2u, 2u, 2u);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_6;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    guest::cpu()->r[13] = r13;
    call_00305170(r0_1, r1, r2, r3);
    *gptr<u32>(r13) = u32(2u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_00304c68(0x62u, 2u, 2u, 2u);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_7;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_109d2a:;
    if (u32(*global_00957224) != 0) {
        r2_6 = 0u;
        r3_6 = 1u;
        *gptr<u8>(*global_0094e4b8 + (5u << 9) + 0x10u) = u8(r2_6);  // (from the original)
        *gptr<u32>(r13) = u32(1u);
        r0_9 = 0x9cu;  // (from the original)
        r1_8 = r3_6;
    } else {
        r3_6 = 1u;
        *gptr<u32>(r13) = u32(1u);
        r2_6 = 0u;
        r0_9 = 0x5eu;  // (from the original)
        r1_8 = r3_6;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_00304c68(r0_9, r1_8, r2_6, r3_6);
    r1_9 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_9;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_00109cc4
GUEST_EXPORT(0x00109cc5, d_00109cc4::f_00109cc4);

// f_00109d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109d68 {

inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> call_00304ca4;  // (from the original)
inline constexpr guest::Function<0x003051b8, u32(u32, u32, u32, u32)> call_003051b8;  // (from the original)

u32 f_00109d68(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_003051b8(r0, 0u, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r0_1 + 8u;
    r0_3 = call_00304ca4(r0_2, r1_1, 0x540002u, 2u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = 1u << 0x17;  // (from the original)
    r0_4 = r0_3 + 0x38u;  // (from the original)
    r0_5 = call_00304ca4(r0_4, r1_2, r2_1, 0u);
    r0_6 = r0_5 - 0x40u;  // (from the original)
    *gptr<u8>(0x78u + r0_6) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = 0x78u;  // (from the original)
    return r0_6;
}

}  // namespace d_00109d68
GUEST_EXPORT(0x00109d69, d_00109d68::f_00109d68);

// f_00109da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109da8 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00302944, u32(u32, u32, u32, u32)> call_00302944;  // (from the original)
inline constexpr guest::Function<0x00302a5c, u32(u32, u32, u32, u32)> call_00302a5c;  // (from the original)
inline constexpr guest::Function<0x00304d30, u32(u32, u32, u32, u32)> call_00304d30;  // (from the original)
inline constexpr guest::Function<0x003051dc, u32(u32, u32, u32, u32)> call_003051dc;  // (from the original)

u32 f_00109da8(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r2_2 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r0_10 = 0;
    u32 r2_8 = 0;
    u32 r0_11 = 0;
    u32 r2_9 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_10 = 0;
    u32 r1_5 = 0;
    u32 r2_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_6 = 0;
    r4 = 0u;
    r13 = r13 - 0x2f8u;  // (from the original)
    r5 = r0;
    r6 = r4;
    do {
L_109db4:;
        r0_1 = (r4 << 2) + r5;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0_2 = r5 + r4 + 0x20u;  // (from the original)
        r4 = r4 + 1u;
        res_1 = r4 - 5u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 5u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r4_1 = 4u;
    guest::cpu()->r[13] = r13;
    r0_3 = call_003051dc(r0_2, r1_1, r2, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_3 != 0) {
        if (r0_3 == 1u) {
            goto L_109de6;
        }
        if (r0_3 == 2u) {
            goto L_109dea;
        }
        if (r0_3 != 3u) {
            goto L_109df0;
        }
        goto L_109dee;
    }
    r4_1 = 0u;
    goto L_109df0;
L_109de6:;
    r4_1 = 1u;
    goto L_109df0;
L_109dea:;
    r4_1 = 2u;
    goto L_109df0;
L_109dee:;
    r4_1 = 3u;
L_109df0:;
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_4, r1_2, r2_1, guest::cpu()->r[3]);
    r2_2 = guest::cpu()->r[2];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_00302944(r0_5, 6u, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_00302944(r0_6, 7u, r2_3, guest::cpu()->r[3]);
    r2_4 = guest::cpu()->r[2];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_00302a5c(r0_7, 0xau, r2_4, guest::cpu()->r[3]);  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_00304d30(r0_8, r4_1, 1u, guest::cpu()->r[3]);
    r2_5 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r5, 3u, r2_5, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_9, r1_3, r2_6, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_10, r1_4, r2_7, guest::cpu()->r[3]);
    r2_8 = guest::cpu()->r[2];
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    call_00302944(r0_11, 9u, r2_8, guest::cpu()->r[3]);
    r2_9 = guest::cpu()->r[2];
    r0_12 = r13;
    guest::cpu()->r[13] = r13;
    call_00302a5c(r0_12, 0xau, r2_9, guest::cpu()->r[3]);  // (from the original)
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_00304d30(r0_13, r4_1, 1u, guest::cpu()->r[3]);
    r0_14 = r5 + 0xcu;  // (from the original)
    r2_10 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_14, 2u, r2_10, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r0_15 = r13;
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fc8fc(r0_15, r1_5, r2_11, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x2f8u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_00109da8
GUEST_EXPORT(0x00109da9, d_00109da8::f_00109da8);

// f_00109ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109ff8 {

inline constexpr guest::Function<0x001e0114, u32(u32, u32, u32, u32)> call_001e0114;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)

u32 f_00109ff8(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f825c(r0, 0x43ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r0_1 = r0 + 0x4cu;  // (from the original)
    call_001e0114(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x34u;  // (from the original)
    r0_3 = call_00303534(r0_2, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_3;
}

}  // namespace d_00109ff8
GUEST_EXPORT(0x00109ff9, d_00109ff8::f_00109ff8);

// f_0010a0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a0cc {

struct __attribute__((packed)) Object_0010a0cc_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_0010a0cc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010a0cc_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0010a0cc_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0010a0cc_0, byte_3, 0x3);  // (from the original)


void f_0010a0cc(gptr<Object_0010a0cc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 4;
    arg0->byte_3 = u8(*gptr<u32>(r13 + 4u));
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
    arg0->byte_2 = u8(r3);
    r13 = r13 + 4;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0010a0cc
GUEST_EXPORT(0x0010a0cd, d_0010a0cc::f_0010a0cc);

// f_0010a0dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a0dc {

struct __attribute__((packed)) Object_0010a0dc_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Object_0010a0dc_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010a0dc_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0010a0dc_0, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Object_0010a0dc_0, byte_3, 0x3);  // (from the original)


void f_0010a0dc(gptr<Object_0010a0dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    r13 = r13 - 4;
    r4_1 = *gptr<u32>(r13 + 4u);
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r4_1);
    arg0->byte_2 = u8(r2);
    arg0->byte_3 = u8(r3);
    r13 = r13 + 4;
    guest::cpu()->r[13] = r13;
    return;
}

}  // namespace d_0010a0dc
GUEST_EXPORT(0x0010a0dd, d_0010a0dc::f_0010a0dc);

// f_0010a2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a2cc {

inline constexpr guest::Function<0x00109e65, u32(u32, u32, u32, u32)> call_00109e64;  // (from the original)
inline constexpr guest::Function<0x0010a9bd, u32(u32, u32, u32, u32)> call_0010a9bc;  // (from the original)

u32 f_0010a2cc(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x9cu;  // (from the original)
    call_00109e64(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x4650u;  // (from the original)
    call_0010a9bc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0 + 0x8b00u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r0_4 = r0_3 + 0x32u;  // (from the original)
    return guest::call_address<u32>(0x10a301u, r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010a2cc
GUEST_EXPORT(0x0010a2cc, d_0010a2cc::f_0010a2cc);

// f_0010a400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a400 {

inline constexpr guest::Function<0x0024ddec, u32(u32, u32, u32, u32)> call_0024ddec;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00305280, u32(u32, u32, u32, u32)> call_00305280;  // (from the original)

u32 f_0010a400(u32 r0) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(r0, 0x20u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00305280(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_0024ddec(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(r0 + 2u) = u8(0u);
    r0_1 = r0 + 0x10u;  // (from the original)
    call_002fc8e8(r0_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = r0 + 0x14u;  // (from the original)
    call_002fc8e8(r0_2, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_3 = r0 + 0x18u;  // (from the original)
    call_002fc8e8(r0_3, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_4 = r0 + 0x1cu;  // (from the original)
    r0_5 = call_002fc8e8(r0_4, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return r0_5;
}

}  // namespace d_0010a400
GUEST_EXPORT(0x0010a401, d_0010a400::f_0010a400);

// f_0010a44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a44c {

struct __attribute__((packed)) Object_0010a44c_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_0010a44c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010a44c_0, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00305280, u32(u32, u32, u32, u32)> call_00305280;  // (from the original)
inline constexpr guest::Function<0x0030556c, u32(u32, u32, u32, u32)> call_0030556c;  // (from the original)

u32 f_0010a44c(gptr<Object_0010a44c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 tpc_1 = 0;
    u32 r4_2 = 0;
    u32 tpc_2 = 0;
    u32 r0_2 = 0;
    u32 r4_3 = 0;
    u32 tpc_3 = 0;
    u32 r0_3 = 0;
    u32 r4_4 = 0;
    u32 tpc_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_1 = 0;
    u32 r4_5 = 0;
    u32 tpc_5 = 0;
    u32 r0_7 = 0;
    u32 r4_6 = 0;
    u32 tpc_6 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r4_7 = 0;
    u32 tpc_7 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r4_8 = 0;
    u32 tpc_8 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = ea_1;
    r0_1 = arg0->byte_0;
    if (r0_1 != 0) {
        if (r0_1 != 1u) {
            r4_1 = *gptr<u32>(r13);
            tpc_1 = *gptr<u32>(r13 + 4);
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
            r4_2 = *gptr<u32>(r13);
            tpc_2 = *gptr<u32>(r13 + 4);
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_2;
            guest::cpu()->r[13] = r13;
            return r0_1;
        }
        r0_2 = u32(s32(s8(*gptr<u8>(r0 + r0_1))));
        if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
            r4_3 = *gptr<u32>(r13);
            tpc_3 = *gptr<u32>(r13 + 4);
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_3;
            guest::cpu()->r[13] = r13;
            return r0_2;
        }
        r0_3 = sxtb(r0_2 - r1);
        arg0->byte_1 = u8(r0_3);
        if (r0_3 != 0 && r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
            r4_4 = *gptr<u32>(r13);
            tpc_4 = *gptr<u32>(r13 + 4);
            r13 = r13 + 8;
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[4] = r4_4;
            guest::cpu()->r[13] = r13;
            return r0_3;
        }
        arg0->byte_1 = u8(0u);
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fb378(0u, r1, r2, r3);
        r0_5 = *gptr<u32>(r0_4);
        r1_1 = *gptr<u32>(r0_4 + 4);
        r2_1 = *gptr<u32>(r0_4 + 8);
        guest::cpu()->r[13] = r13;
        r0_6 = call_0030556c(r0_5, r1_1, r2_1, 1u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_6 == 0) {
            goto L_10a49c;
        }
        *gptr<u8>(r0 + 1u) = u8(1u);
        r4_5 = *gptr<u32>(r13);
        tpc_5 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_2;
        guest::cpu()->r[4] = r4_5;
        guest::cpu()->r[13] = r13;
        return 1u;
    }
    r0_7 = *gptr<u8>(r0 + 2u);
    if (r0_7 == 0) {
        r4_6 = *gptr<u32>(r13);
        tpc_6 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_6;
        guest::cpu()->r[13] = r13;
        return r0_7;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_00305280(r0, 1u, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r4_7 = *gptr<u32>(r13);
    tpc_7 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_7;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_10a49c:;
    guest::cpu()->r[13] = r13;
    r0_9 = call_00305280(r0, 2u, r2_2, r3_1);
    r1_4 = guest::cpu()->r[1];
    r4_8 = *gptr<u32>(r13);
    tpc_8 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[4] = r4_8;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0010a44c
GUEST_EXPORT(0x0010a44d, d_0010a44c::f_0010a44c);

// f_0010a4a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a4a8 {

struct __attribute__((packed)) Object_0010a4a8_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0010a4a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010a4a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0010a4a8_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0024dea8, u32(u32, u32, u32, u32)> call_0024dea8;  // (from the original)

u32 f_0010a4a8(gptr<Object_0010a4a8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    arg0->word_8 = u32(0u);
    r0_1 = call_0024dea8(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0010a4a8
GUEST_EXPORT(0x0010a4a9, d_0010a4a8::f_0010a4a8);

// f_0010a800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a800 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)

u32 f_0010a800(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    call_002f825c(r0, 0xecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4 = 0u;
    r6 = r4;
    do {
L_10a80e:;
        r0_1 = (r4 << 2) + r5;
        call_002fc8e8(r0_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_2 = 0x2eu * r4 + r5 + 0x14u;  // (from the original)
        call_003052f0(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_3 = (r4 << 3) + r5 + 0xccu;  // (from the original)
        call_00303534(r0_3, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        r0_4 = r5 + r4;
        r4 = r4 + 1u;
        res_1 = r4 - 4u;
        *gptr<u8>(r0_4 + 0x10u) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 4u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_0010a800
GUEST_EXPORT(0x0010a801, d_0010a800::f_0010a800);

// f_0010a840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a840 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x00305894, u32(u32, u32, u32, u32)> call_00305894;  // (from the original)
inline constexpr guest::Function<0x00305898, u32(u32, u32, u32, u32)> call_00305898;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)

u32 f_0010a840(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r0_12 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_15 = 0;
    u32 r2_4 = 0;
    u32 r0_16 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_17 = 0;
    u32 r3_5 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_21 = 0;
    u32 r1_4 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_22 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r2_9 = 0;
    u32 r3_8 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    r6 = 0x55a6u;  // (from the original)
    r7 = 0x5700u;  // (from the original)
    r13 = r13 - 0x2a8u;  // (from the original)
    if (r1 == 0) {
        goto L_10a882;
    }
    r5 = 0u;
L_10a850:;
    r0_1 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb96c(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_10a87c;
    }
    r0_3 = r0_2 + r6;
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fbd54(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_10a87c;
    }
    r0_5 = r0_2 + 0x8f0eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcaf4(r0_5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 != 0) {
        goto L_10a87c;
    }
    r0_7 = r0_2 + r7 + 0x20u;  // (from the original)
    r2 = 0x20u;  // (from the original)
    r1 = u32(*gptr<u8>(r0_7)) | r2;
    *gptr<u8>(r0_7) = u8(r1);
L_10a87c:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_10a850;
    }
L_10a882:;
    r5 = 0u;
L_10a884:;
    r0_8 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb96c(r0_8, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_1 = r0_9;
    if (r0_9 == 0) {
        goto L_10a950;
    }
    r0_10 = r4_1 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fbd54(r0_10, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_10a950;
    }
    r0_11 = r4_1 + 0x8f0eu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fcaf4(r0_11, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10a950;
    }
    res_1 = u32(*gptr<u8>(r4_1 + 0x5720u)) >> 5 << 0x1f;  // (from the original)
    r0_9 = res_1;
    if (res_1 == 0) {
        goto L_10a950;
    }
    r0_12 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_12, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(0x95c3a8u, r0_11, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_13 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_002fcbb0(r0_13, 0x227cu, r2_2, r3_2);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_14);
    guest::cpu()->r[13] = r13;
    r0_15 = call_002ff6f8(3u, r1_1, r2_3, r3_3);
    r2_4 = r0_15 + 1u;
    *gptr<u32>(r13 + 8u) = u32(0x24e080u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0xdu);  // (from the original)
    r0_16 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00305894(r0_16, 0x10a978u, r2_4, r0_10);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_17 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_17, r1_2, r2_5, r3_4);
    r3_5 = guest::cpu()->r[3];
    r0_18 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00305898(r0_18, r0_11, 0u, r3_5);
    r0_19 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_002ff4d4(r0_19, 3u, 0u, 0u);
    r1_3 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_10a94a;
    }
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fcb34(r0_11, r1_3, r2_6, r3_6);
    r1_4 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0_21 != 0x55u) {  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_22 = call_002fcb34(r0_11, r1_4, r2_7, r3_7);
        r1_5 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_7 = guest::cpu()->r[3];
        if (r0_22 != 0x59u) {  // (from the original)
            goto L_10a92a;
        }
    }
    r1_5 = 1u;
    r0_23 = r4_1 + (0x57u << 8);  // (from the original)
    r2_8 = u32(*gptr<u8>(r0_23 + 1u)) | r1_5;
    *gptr<u8>(r0_23 + 1u) = u8(r2_8);
L_10a92a:;
    r0_24 = r4_1 + 0x8f12u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030589c(r0_24, r1_5, r2_8, r3_7);
    r2_9 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_11, 0x95bfdcu, r2_9, r3_8);  // (from the original)
    r3_6 = guest::cpu()->r[3];
    r1_3 = 0xdfu;  // (from the original)
    r0_25 = r4_1 + (0x57u << 8) + 0x20u;  // (from the original)
    r2_6 = u32(*gptr<u8>(r0_25)) & r1_3;
    *gptr<u8>(r0_25) = u8(r2_6);
L_10a94a:;
    r0_26 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_002f77e8(r0_26, r1_3, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10a950:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_10a884;
    }
    r13 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0010a840
GUEST_EXPORT(0x0010a841, d_0010a840::f_0010a840);

// f_0010a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a9bc {

inline guest::global<u32, 0x0088f624> global_0088f624;  // (from the original)
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x003058ec, u32(u32, u32, u32, u32)> call_003058ec;  // (from the original)

u32 f_0010a9bc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r2_7 = 0;
    u32 r3_8 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_9 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_18 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r0_24 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_25 = 0;
    u32 r1_10 = 0;
    u32 r0_26 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r1_11 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r1_12 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_29 = 0;
    r4 = 0u;
    r13 = r13 - 0x30u;  // (from the original)
    r5 = r0;
    do {
L_10a9c4:;
        r0_1 = (0x87u << 4) * r4 + r5 + 0x7cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b3f24(r0_1, 0x16u, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    r4 = 0u;
L_10a9dc:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fae84(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_002fb310(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_4 = r0_3 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0_4, r4, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10aaec;
    }
    if (r4 >= 0xau) {  // (from the original)
        goto L_10aa14;
    }
    r0_5 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fcbb0(r0_5, 0x2c81u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0x78u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003058ec(r5, 4u, r0_6, r4);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0_7, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
L_10aa14:;
    r6 = 0x88f484u;  // (from the original)
L_10aa16:;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fae84(r0, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb310(r0_8, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0_10, r4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab04;
    }
    if (r4 >= 0xau) {  // (from the original)
        goto L_10aa70;
    }
    r0_11 = *gptr<u32>(r6 + 8u);
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r6 + 0xcu));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_11);  // (from the original)
    r0_12 = *global_0088f624;
    r1_4 = *gptr<u32>(0x88f624u + 4);  // (from the original)
    r2_6 = *gptr<u32>(0x88f624u + 8);  // (from the original)
    r3_6 = r13 + 4u;
    *gptr<u32>(r3_6) = u32(r0_12);
    *gptr<u32>(r3_6 + 4) = u32(r1_4);
    *gptr<u32>(r3_6 + 8) = u32(r2_6);
    r3_7 = r3_6 + 0xc;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002ff6f8(3u, r1_4, r2_6, r3_7);
    r2_7 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_5 = *gptr<u16>(r13 + 0x10u + (r0_13 << 1));  // (from the original)
    r0_14 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fcbb0(r0_14, r1_5, r2_7, r3_8);
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 4u + (r0_13 << 2)));
    guest::cpu()->r[13] = r13;
    call_003058ec(r5, 5u, r0_15, r4);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_16 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0_16, r1_6, r2_8, r3_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
L_10aa70:;
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fae84(r0, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fb310(r0_17, r1_7, r2_9, r3_10);
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_19 = r0_18 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0_19, r4, r2_10, r3_11);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab0c;
    }
    if (r4 >= 0xau) {  // (from the original)
        goto L_10aaaa;
    }
    r0_20 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fcbb0(r0_20, 0x2c59u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0x1f4u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003058ec(r5, 6u, r0_21, r4);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_22 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0_22, r1_8, r2_11, r3_12);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
L_10aaaa:;
    guest::cpu()->r[13] = r13;
    r0_23 = call_002fae84(r0, r1, r2, r3);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_24 = call_002fb310(r0_23, r1_9, r2_12, r3_13);
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_25 = r0_24 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003058c8(r0_25, r4, r2_13, r3_14);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab14;
    }
    if (r4 >= 0xau) {  // (from the original)
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1_10 = *gptr<u32>(r6 + 0x14u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(*gptr<u32>(r6 + 0x10u));  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1_10);
    guest::cpu()->r[13] = r13;
    r0_26 = call_002ff6f8(3u, r1_10, r2, r3);
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r1_11 = *gptr<u16>(r13 + 4u + (r0_26 << 1));
    r0_27 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_28 = call_002fcbb0(r0_27, r1_11, r2_14, r3_15);
    *gptr<u32>(r13) = u32(0x19u << 5);  // (from the original)
    goto L_10aaee;
L_10aaec:;
    goto L_10aafc;
L_10aaee:;
    guest::cpu()->r[13] = r13;
    call_003058ec(r5, 7u, r0_28, r4);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_29 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f777c(r0_29, r1_12, r2_15, r3_16);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_10aafc:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aa14;
    }
    r4 = r4 + 1u;
    guest::preempt();
    goto L_10a9dc;
L_10ab04:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aa70;
    }
    r4 = r4 + 1u;
    guest::preempt();
    goto L_10aa16;
L_10ab0c:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aaaa;
    }
    r4 = r4 + 1u;
    guest::preempt();
    goto L_10aa70;
L_10ab14:;
    if (r4 >= 0xau) {  // (from the original)
        r13 = r13 + 0x30u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r4 = r4 + 1u;
    guest::preempt();
    goto L_10aaaa;
}

}  // namespace d_0010a9bc
GUEST_EXPORT(0x0010a9bd, d_0010a9bc::f_0010a9bc);

// f_0010ab2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010ab2c {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

u32 f_0010ab2c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r1_2 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r3_5 = 0;
    u32 r2_5 = 0;
    u32 r1_3 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    call_002f825c(r0, 0x441cu, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x2085u;  // (from the original)
    r4 = 0u;
    r6 = r4 - 1u;
    do {
L_10ab3c:;
        r0_1 = r13;
        guest::cpu()->r[13] = r13;
        r0_2 = call_002fcbb0(r0_1, r7, r2, r3);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_3 = (r4 << 2) + r5 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_3, r0_2, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r0_4 = r13;
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_4, r1_1, r2_2, r3_2);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        *gptr<u8>(r5 + r4 + 0x34u) = u8(r6);  // (from the original)
        r0_5 = (r4 << 3) + r5 + 0x3cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00303534(r0_5, 0u, r2_3, r3_3);
        r1_2 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_6 = (0x87u << 4) * r4 + r5 + 0x7cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003059f8(r0_6, r1_2, r2_4, r3_4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(8u));
    r6 = 0x7ffeu;  // (from the original)
    r4 = 0u;
    do {
L_10ab80:;
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        r0_8 = call_002fcbb0(r0_7, r6, r2, r3);
        r3_5 = guest::cpu()->r[3];
        r2_5 = (r4 << 2) + r5;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r2_5, r0_8, r2_5, r3_5);
        r1_3 = guest::cpu()->r[1];
        r2_6 = guest::cpu()->r[2];
        r3_6 = guest::cpu()->r[3];
        r0_9 = r13;
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_9, r1_3, r2_6, r3_6);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(5u));
    r6 = 0x43fcu;  // (from the original)
    r4 = 0u;
    do {
L_10aba4:;
        r0_10 = (r4 << 3) + r5 + r6;
        guest::cpu()->r[13] = r13;
        r0_11 = call_00303534(r0_10, 0u, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(4u));
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_4;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_0010ab2c
GUEST_EXPORT(0x0010ab2d, d_0010ab2c::f_0010ab2c);

// f_0010abc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010abc8 {

inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305940, u32(u32, u32, u32, u32)> call_00305940;  // (from the original)
inline constexpr guest::Function<0x00305a40, u32(u32, u32, u32, u32)> call_00305a40;  // (from the original)

u32 f_0010abc8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_12 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_1;
    r4 = 0u;
    r6 = r0;
    r7 = 0x43fcu;  // (from the original)
L_10abd4:;
    r0_1 = uxtb(r4);
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb96c(r0_1, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_10ac2c;
    }
    r0_3 = r0_2 + 0x55a6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fbd54(r0_3, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_10ac2c;
    }
    r0_5 = (r4 << 3) + r6 + r7;
    *gptr<u32>(r13) = u32(r0_5);
    guest::cpu()->r[13] = r13;
    r0_6 = call_00303660(r0_5, r1_2, r2_1, r3_1);
    r1_3 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_10ac2c;
    }
    r0_7 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0_8 = call_00303660(r0_7, r1_3, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00305a40(r0_2, r0_8, r2_2, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_9 = r0_2 + (0x57u << 8);  // (from the original)
    r2_3 = u32(*gptr<u8>(r0_9 + 0x15u)) | 0x80u;  // (from the original)
    *gptr<u8>(r0_9 + 0x15u) = u8(r2_3);  // (from the original)
    r0_10 = r0_2 + 0x6b8cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_00303660(r0_10, 0x80u, r2_3, r3_3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fd068(r0_11, r1_4, r2_4, r3_4);
    r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00305940(r0_12, r4, r0_11, r3_5);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
L_10ac2c:;
    r0_13 = (r4 << 3) + r6 + r7;
    guest::cpu()->r[13] = r13;
    r0_14 = call_00303534(r0_13, 0u, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r4 + 1u;
    if (s32(r4) < s32(4u)) {
        guest::preempt();
        goto L_10abd4;
    }
    r4_1 = *gptr<u32>(r13 + 4);
    r5_1 = *gptr<u32>(r13 + 8);
    r6_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x14);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0010abc8
GUEST_EXPORT(0x0010abc9, d_0010abc8::f_0010abc8);

// f_0010ac50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010ac50 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0010ac50(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r0_3 = 0;
    u32 r1_4 = 0;
    u32 r0_4 = 0;
    u32 r1_5 = 0;
    u32 r0_5 = 0;
    u32 r1_6 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    u32 r0_7 = 0;
    u32 r1_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002fc8e8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = r1 + 4u;
    r0_1 = r0 + 4u;
    call_002fc8e8(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = r1 + 8u;
    r0_2 = r0 + 8u;
    call_002fc8e8(r0_2, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = r1 + 0xcu;  // (from the original)
    r0_3 = r0 + 0xcu;  // (from the original)
    call_002fc8e8(r0_3, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = r1 + 0x10u;  // (from the original)
    r0_4 = r0 + 0x10u;  // (from the original)
    call_002fc8e8(r0_4, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = r1 + 0x14u;  // (from the original)
    r0_5 = r0 + 0x14u;  // (from the original)
    call_002fc8e8(r0_5, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = r1 + 0x18u;  // (from the original)
    r0_6 = r0 + 0x18u;  // (from the original)
    call_002fc8e8(r0_6, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = r1 + 0x1cu;  // (from the original)
    r0_7 = r0 + 0x1cu;  // (from the original)
    call_002fc8e8(r0_7, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = *gptr<u8>(r1 + 0x20u);  // (from the original)
    *gptr<u8>(0x20u + r0) = u8(r1_8);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    return r0;
}

}  // namespace d_0010ac50
GUEST_EXPORT(0x0010ac51, d_0010ac50::f_0010ac50);

// f_0010acb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010acb8 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00303094, u32(u32, u32, u32, u32)> call_00303094;  // (from the original)
inline constexpr guest::Function<0x003059ec, u32(u32, u32, u32, u32)> call_003059ec;  // (from the original)
inline constexpr guest::Function<0x003059f0, u32(u32, u32, u32, u32)> call_003059f0;  // (from the original)
inline constexpr guest::Function<0x003059f4, u32(u32, u32, u32, u32)> call_003059f4;  // (from the original)
inline constexpr guest::Function<0x00305a3c, u32(u32, u32, u32, u32)> call_00305a3c;  // (from the original)
inline constexpr guest::Function<0x00305a54, u32(u32, u32, u32, u32)> call_00305a54;  // (from the original)
inline constexpr guest::Function<0x00305ad0, u32(u32, u32, u32, u32)> call_00305ad0;  // (from the original)
inline constexpr guest::Function<0x00305b7c, u32(u32, u32, u32, u32)> call_00305b7c;  // (from the original)
inline constexpr guest::Function<0x00305bcc, u32(u32, u32, u32, u32)> call_00305bcc;  // (from the original)
inline constexpr guest::Function<0x00305c64, u32(u32, u32, u32, u32)> call_00305c64;  // (from the original)

u32 f_0010acb8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r4_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_13 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_14 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_22 = 0;
    u32 r1_10 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_11 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_27 = 0;
    u32 r1_12 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r2_19 = 0;
    u32 r3_19 = 0;
    u32 r0_32 = 0;
    u32 r1_13 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_36 = 0;
    u32 r1_14 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_37 = 0;
    u32 r1_15 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_38 = 0;
    u32 r1_16 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_41 = 0;
    u32 r1_17 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_42 = 0;
    u32 r0_43 = 0;
    u32 r1_18 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_44 = 0;
    u32 r0_45 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_46 = 0;
    u32 r1_19 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_47 = 0;
    u32 r0_48 = 0;
    u32 r1_20 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_49 = 0;
    u32 r0_50 = 0;
    u32 r2_31 = 0;
    u32 r3_31 = 0;
    u32 r0_51 = 0;
    u32 r1_21 = 0;
    u32 r2_32 = 0;
    u32 r3_32 = 0;
    u32 r0_52 = 0;
    u32 r0_53 = 0;
    u32 r1_22 = 0;
    u32 r2_33 = 0;
    u32 r3_33 = 0;
    u32 r0_54 = 0;
    u32 r0_55 = 0;
    u32 r2_34 = 0;
    u32 r3_34 = 0;
    u32 r0_56 = 0;
    u32 r1_23 = 0;
    u32 r2_35 = 0;
    u32 r3_35 = 0;
    u32 r0_57 = 0;
    u32 r0_58 = 0;
    u32 r1_24 = 0;
    u32 r2_36 = 0;
    u32 r3_36 = 0;
    u32 r0_59 = 0;
    u32 r0_60 = 0;
    u32 r2_37 = 0;
    u32 r3_37 = 0;
    u32 r0_61 = 0;
    u32 r1_25 = 0;
    u32 r2_38 = 0;
    u32 r3_38 = 0;
    u32 r0_62 = 0;
    u32 r0_63 = 0;
    u32 r1_26 = 0;
    u32 r2_39 = 0;
    u32 r3_39 = 0;
    u32 r0_64 = 0;
    u32 r0_65 = 0;
    u32 r2_40 = 0;
    u32 r3_40 = 0;
    u32 r0_66 = 0;
    u32 r1_27 = 0;
    u32 r2_41 = 0;
    u32 r3_41 = 0;
    u32 r0_67 = 0;
    u32 r0_68 = 0;
    u32 r1_28 = 0;
    u32 r2_42 = 0;
    u32 r3_42 = 0;
    u32 r0_69 = 0;
    u32 r0_70 = 0;
    u32 r2_43 = 0;
    u32 r3_43 = 0;
    u32 r0_71 = 0;
    u32 r1_29 = 0;
    u32 r2_44 = 0;
    u32 r3_44 = 0;
    u32 r0_72 = 0;
    u32 r0_73 = 0;
    u32 r2_45 = 0;
    u32 r3_45 = 0;
    u32 r0_74 = 0;
    u32 r0_75 = 0;
    u32 r2_46 = 0;
    u32 r3_46 = 0;
    u32 r0_76 = 0;
    u32 r1_30 = 0;
    u32 r2_47 = 0;
    u32 r3_47 = 0;
    u32 r0_77 = 0;
    u32 r0_78 = 0;
    u32 r2_48 = 0;
    u32 r1_31 = 0;
    u32 r2_49 = 0;
    u32 r3_48 = 0;
    u32 r0_79 = 0;
    u32 r0_80 = 0;
    u32 r1_32 = 0;
    r4 = 0u;
    r13 = r13 - 0x308u;  // (from the original)
    r5 = r0;
    r6 = r4;
    do {
L_10acc4:;
        r0_1 = (r4 << 2) + r5 + 2u;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_2 = r5 + r4;
        r4 = r4 + 1u;
        res_1 = r4 - 3u;
        *gptr<u8>(r0_2 + 0xeu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 3u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_3, r1_1, r2, r3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_4, 5u, 0x30u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r0_5 = r5 + 2u;
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_5, 1u, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_6, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fc288(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb328(r0_8, r1_4, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r4_1 = r0_9 + 0x6aeb8u;  // (from the original)
    r0_10 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fcbb0(r0_10, 0x23c7u, r2_5, r3_5);  // (from the original)
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_12 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00303094(r0_12, r0_11, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_13 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_13, r1_5, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_14 = call_003059ec(r4_1, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_14 != 0) {
        r0_15 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_16 = call_002fcbb0(r0_15, 0x23a8u, r2_9, r3_9);  // (from the original)
        r2_10 = guest::cpu()->r[2];
        r3_10 = guest::cpu()->r[3];
        r0_17 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_17, r0_16, r2_10, r3_10);
        r1_8 = guest::cpu()->r[1];
        r2_11 = guest::cpu()->r[2];
        r3_11 = guest::cpu()->r[3];
        r0_18 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_18, r1_8, r2_11, r3_11);
        r1_7 = guest::cpu()->r[1];
        r2_9 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_003059f0(r4_1, r1_7, r2_9, r3_9);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    if (r0_19 != 0) {
        r0_20 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_21 = call_002fcbb0(r0_20, 0x23a9u, r2_12, r3_12);  // (from the original)
        r2_13 = guest::cpu()->r[2];
        r3_13 = guest::cpu()->r[3];
        r0_22 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_22, r0_21, r2_13, r3_13);
        r1_10 = guest::cpu()->r[1];
        r2_14 = guest::cpu()->r[2];
        r3_14 = guest::cpu()->r[3];
        r0_23 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_23, r1_10, r2_14, r3_14);
        r1_9 = guest::cpu()->r[1];
        r2_12 = guest::cpu()->r[2];
        r3_12 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_24 = call_003059f4(r4_1, r1_9, r2_12, r3_12);
    r1_11 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_24 != 0) {
        r0_25 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_26 = call_002fcbb0(r0_25, 0x23aau, r2_15, r3_15);  // (from the original)
        r2_16 = guest::cpu()->r[2];
        r3_16 = guest::cpu()->r[3];
        r0_27 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_27, r0_26, r2_16, r3_16);
        r1_12 = guest::cpu()->r[1];
        r2_17 = guest::cpu()->r[2];
        r3_17 = guest::cpu()->r[3];
        r0_28 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_28, r1_12, r2_17, r3_17);
        r1_11 = guest::cpu()->r[1];
        r2_15 = guest::cpu()->r[2];
        r3_15 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_29 = call_00305a3c(r4_1, r1_11, r2_15, r3_15);
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    if (r0_29 != 0) {
        r0_30 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_31 = call_002fcbb0(r0_30, 0x23abu, r2_18, r3_18);  // (from the original)
        r2_19 = guest::cpu()->r[2];
        r3_19 = guest::cpu()->r[3];
        r0_32 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_32, r0_31, r2_19, r3_19);
        r1_13 = guest::cpu()->r[1];
        r2_20 = guest::cpu()->r[2];
        r3_20 = guest::cpu()->r[3];
        r0_33 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_33, r1_13, r2_20, r3_20);
        r2_18 = guest::cpu()->r[2];
        r3_18 = guest::cpu()->r[3];
    }
    r0_34 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0_35 = call_002fcbb0(r0_34, 0x2461u, r2_18, r3_18);  // (from the original)
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_36 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00303094(r0_36, r0_35, r2_21, r3_21);
    r1_14 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_37 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_37, r1_14, r2_22, r3_22);
    r1_15 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_38 = call_00305b7c(r4_1, r1_15, r2_23, r3_23);
    r1_16 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    if (s32(r0_38) >= s32(0x32u)) {  // (from the original)
        r0_39 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_40 = call_002fcbb0(r0_39, 0x2446u, r2_24, r3_24);  // (from the original)
        r2_25 = guest::cpu()->r[2];
        r3_25 = guest::cpu()->r[3];
        r0_41 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_41, r0_40, r2_25, r3_25);
        r1_17 = guest::cpu()->r[1];
        r2_26 = guest::cpu()->r[2];
        r3_26 = guest::cpu()->r[3];
        r0_42 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_42, r1_17, r2_26, r3_26);
        r1_16 = guest::cpu()->r[1];
        r2_24 = guest::cpu()->r[2];
        r3_24 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_43 = call_00305bcc(r4_1, r1_16, r2_24, r3_24);
    r1_18 = guest::cpu()->r[1];
    r2_27 = guest::cpu()->r[2];
    r3_27 = guest::cpu()->r[3];
    if (s32(r0_43) >= s32(0x32u)) {  // (from the original)
        r0_44 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_45 = call_002fcbb0(r0_44, 0x2447u, r2_27, r3_27);  // (from the original)
        r2_28 = guest::cpu()->r[2];
        r3_28 = guest::cpu()->r[3];
        r0_46 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_46, r0_45, r2_28, r3_28);
        r1_19 = guest::cpu()->r[1];
        r2_29 = guest::cpu()->r[2];
        r3_29 = guest::cpu()->r[3];
        r0_47 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_47, r1_19, r2_29, r3_29);
        r1_18 = guest::cpu()->r[1];
        r2_27 = guest::cpu()->r[2];
        r3_27 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_48 = call_00305c64(r4_1, r1_18, r2_27, r3_27);
    r1_20 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    if (s32(r0_48) >= s32(0x1eu)) {  // (from the original)
        r0_49 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_50 = call_002fcbb0(r0_49, 0x2448u, r2_30, r3_30);  // (from the original)
        r2_31 = guest::cpu()->r[2];
        r3_31 = guest::cpu()->r[3];
        r0_51 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_51, r0_50, r2_31, r3_31);
        r1_21 = guest::cpu()->r[1];
        r2_32 = guest::cpu()->r[2];
        r3_32 = guest::cpu()->r[3];
        r0_52 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_52, r1_21, r2_32, r3_32);
        r1_20 = guest::cpu()->r[1];
        r2_30 = guest::cpu()->r[2];
        r3_30 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_53 = call_00305a54(r4_1, r1_20, r2_30, r3_30);
    r1_22 = guest::cpu()->r[1];
    r2_33 = guest::cpu()->r[2];
    r3_33 = guest::cpu()->r[3];
    if (s32(r0_53) >= s32(0x14u)) {  // (from the original)
        r0_54 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_55 = call_002fcbb0(r0_54, 0x2449u, r2_33, r3_33);  // (from the original)
        r2_34 = guest::cpu()->r[2];
        r3_34 = guest::cpu()->r[3];
        r0_56 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_56, r0_55, r2_34, r3_34);
        r1_23 = guest::cpu()->r[1];
        r2_35 = guest::cpu()->r[2];
        r3_35 = guest::cpu()->r[3];
        r0_57 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_57, r1_23, r2_35, r3_35);
        r1_22 = guest::cpu()->r[1];
        r2_33 = guest::cpu()->r[2];
        r3_33 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_58 = call_00305b7c(r4_1, r1_22, r2_33, r3_33);
    r1_24 = guest::cpu()->r[1];
    r2_36 = guest::cpu()->r[2];
    r3_36 = guest::cpu()->r[3];
    if (s32(r0_58) >= s32(0x1eu)) {  // (from the original)
        r0_59 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_60 = call_002fcbb0(r0_59, 0x3352u, r2_36, r3_36);  // (from the original)
        r2_37 = guest::cpu()->r[2];
        r3_37 = guest::cpu()->r[3];
        r0_61 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_61, r0_60, r2_37, r3_37);
        r1_25 = guest::cpu()->r[1];
        r2_38 = guest::cpu()->r[2];
        r3_38 = guest::cpu()->r[3];
        r0_62 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_62, r1_25, r2_38, r3_38);
        r1_24 = guest::cpu()->r[1];
        r2_36 = guest::cpu()->r[2];
        r3_36 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_63 = call_00305bcc(r4_1, r1_24, r2_36, r3_36);
    r1_26 = guest::cpu()->r[1];
    r2_39 = guest::cpu()->r[2];
    r3_39 = guest::cpu()->r[3];
    if (s32(r0_63) >= s32(0x1eu)) {  // (from the original)
        r0_64 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_65 = call_002fcbb0(r0_64, 0x3356u, r2_39, r3_39);  // (from the original)
        r2_40 = guest::cpu()->r[2];
        r3_40 = guest::cpu()->r[3];
        r0_66 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_66, r0_65, r2_40, r3_40);
        r1_27 = guest::cpu()->r[1];
        r2_41 = guest::cpu()->r[2];
        r3_41 = guest::cpu()->r[3];
        r0_67 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_67, r1_27, r2_41, r3_41);
        r1_26 = guest::cpu()->r[1];
        r2_39 = guest::cpu()->r[2];
        r3_39 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_68 = call_00305c64(r4_1, r1_26, r2_39, r3_39);
    r1_28 = guest::cpu()->r[1];
    r2_42 = guest::cpu()->r[2];
    r3_42 = guest::cpu()->r[3];
    if (s32(r0_68) >= s32(0xfu)) {  // (from the original)
        r0_69 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_70 = call_002fcbb0(r0_69, 0x335au, r2_42, r3_42);  // (from the original)
        r2_43 = guest::cpu()->r[2];
        r3_43 = guest::cpu()->r[3];
        r0_71 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_71, r0_70, r2_43, r3_43);
        r1_29 = guest::cpu()->r[1];
        r2_44 = guest::cpu()->r[2];
        r3_44 = guest::cpu()->r[3];
        r0_72 = r13 + 0x2f0u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_72, r1_29, r2_44, r3_44);
        r1_28 = guest::cpu()->r[1];
        r2_42 = guest::cpu()->r[2];
        r3_42 = guest::cpu()->r[3];
    }
    guest::cpu()->r[13] = r13;
    r0_73 = call_00305ad0(r4_1, r1_28, r2_42, r3_42);
    r2_45 = guest::cpu()->r[2];
    r3_45 = guest::cpu()->r[3];
    if (r0_73 != 0) {
        r0_74 = r13;
        guest::cpu()->r[13] = r13;
        r0_75 = call_002fcbb0(r0_74, 0x2cdfu, r2_45, r3_45);  // (from the original)
        r2_46 = guest::cpu()->r[2];
        r3_46 = guest::cpu()->r[3];
        r0_76 = r13 + 8u;
        guest::cpu()->r[13] = r13;
        call_00303094(r0_76, r0_75, r2_46, r3_46);
        r1_30 = guest::cpu()->r[1];
        r2_47 = guest::cpu()->r[2];
        r3_47 = guest::cpu()->r[3];
        r0_77 = r13;
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_77, r1_30, r2_47, r3_47);
        r3_45 = guest::cpu()->r[3];
    }
    r0_78 = r5 + 6u;
    r2_48 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_78, 2u, r2_48, r3_45);
    r1_31 = guest::cpu()->r[1];
    r2_49 = guest::cpu()->r[2];
    r3_48 = guest::cpu()->r[3];
    r0_79 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_80 = call_002fc8fc(r0_79, r1_31, r2_49, r3_48);
    r1_32 = guest::cpu()->r[1];
    r13 = r13 + 0x308u;  // (from the original)
    guest::cpu()->r[1] = r1_32;
    guest::cpu()->r[13] = r13;
    return r0_80;
}

}  // namespace d_0010acb8
GUEST_EXPORT(0x0010acb9, d_0010acb8::f_0010acb8);

// f_0010af10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010af10 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)
inline constexpr guest::Function<0x00305b74, u32(u32, u32, u32, u32)> call_00305b74;  // (from the original)
inline constexpr guest::Function<0x00305b78, u32(u32, u32, u32, u32)> call_00305b78;  // (from the original)

u32 f_0010af10(u32 r0, u32 r1, u32 r2) {
    u32 r5_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5_1 = r1;
    r4_1 = r0;
    if (r1 != 0) {
        if (r5_1 != 1u) {
            *gptr<u8>(r4_1) = u8(r5_1);
            guest::cpu()->r[13] += 0x10u;  // (from the original)
            guest::cpu()->r[1] = r1;
            return r0;
        }
    } else {
        r0 = 0u;
        goto L_10af4c;
    }
    r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
    r2_1 = guest::cpu()->r[2];
    r0_2 = r0_1 + 0x6ae38u;  // (from the original)
    r0_3 = call_00305b74(r0_2, 0x6ae38u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_4 = call_002fae84(r0_3, r1_1, r2_2, guest::cpu()->r[3]);
    r0_5 = r0_4 + 0x6214fu;  // (from the original)
    r0_6 = call_00305b78(r0_5, 1u, 0x6214fu, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_7 = call_002fae84(r0_6, r1_2, r2_3, guest::cpu()->r[3]);
    r0_8 = r0_7 + 0x7170cu;  // (from the original)
    call_003035a4(r0_8, 8u, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r0 = 7u;
L_10af4c:;
    *gptr<u8>(r4_1 + 0x11u) = u8(r0);  // (from the original)
    *gptr<u8>(r4_1) = u8(r5_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0010af10
GUEST_EXPORT(0x0010af11, d_0010af10::f_0010af10);

// f_0010af72: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010af72 {

struct __attribute__((packed)) Object_0010af72_0 {
    u8 byte_0;
    u8 unknown_1[0x10];  // (not used here)
    u8 byte_11;
};
GUEST_OFFSET(Object_0010af72_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010af72_0, byte_11, 0x11);  // (from the original)


void f_0010af72(gptr<Object_0010af72_0> arg0, u32 r1) {
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    r2_1 = arg0->byte_0;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r2_1 != 1u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r2_2 = arg0->byte_11;
    if (r2_2 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (s32(r2_2) <= s32(r1)) {
        arg0->byte_11 = u8(0u);
        guest::cpu()->r[1] = 0u;
        return;
    }
    r1_1 = r2_2 - r1;
    arg0->byte_11 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_0010af72
GUEST_EXPORT(0x0010af73, d_0010af72::f_0010af72);

// f_0010b1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b1e4 {

inline constexpr guest::Function<0x0013366c, u32(u32, u32, u32, u32)> call_0013366c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0010b1e4(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    call_0013366c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc8e8(r5, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r4 = 0u;
    do {
L_10b1f6:;
        r0_1 = (r4 << 2) + r5 + 4u;
        r0_2 = call_002fc8e8(r0_1, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0010b1e4
GUEST_EXPORT(0x0010b1e5, d_0010b1e4::f_0010b1e4);

// f_0010b210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b210 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc2a4, u32(u32, u32, u32, u32)> call_002fc2a4;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00302944, u32(u32, u32, u32, u32)> call_00302944;  // (from the original)
inline constexpr guest::Function<0x00305cb4, u32(u32, u32, u32, u32)> call_00305cb4;  // (from the original)
inline constexpr guest::Function<0x00305cb8, u32(u32, u32, u32, u32)> call_00305cb8;  // (from the original)
inline constexpr guest::Function<0x00305cbc, u32(u32, u32, u32, u32)> call_00305cbc;  // (from the original)
inline constexpr guest::Function<0x00305d94, u32(u32, u32, u32, u32)> call_00305d94;  // (from the original)
inline constexpr guest::Function<0x00305d98, u32(u32, u32, u32, u32)> call_00305d98;  // (from the original)
inline constexpr guest::Function<0x00305d9c, u32(u32, u32, u32, u32)> call_00305d9c;  // (from the original)
inline constexpr guest::Function<0x00305ffc, u32(u32, u32, u32, u32)> call_00305ffc;  // (from the original)

u32 f_0010b210(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_5 = 0;
    u32 r3_2 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_12 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_14 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_15 = 0;
    u32 r3_12 = 0;
    u32 r0_16 = 0;
    u32 r2_12 = 0;
    u32 r1_9 = 0;
    u32 r2_13 = 0;
    u32 r3_13 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r2_16 = 0;
    u32 r3_16 = 0;
    u32 r0_22 = 0;
    u32 r1_11 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_12 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_27 = 0;
    u32 r3_19 = 0;
    u32 r0_28 = 0;
    u32 r2_19 = 0;
    u32 r1_13 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_29 = 0;
    u32 r1_14 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r1_15 = 0;
    u32 r2_22 = 0;
    u32 r3_22 = 0;
    u32 r0_32 = 0;
    u32 r3_23 = 0;
    u32 r0_33 = 0;
    u32 r2_23 = 0;
    u32 r1_16 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_34 = 0;
    u32 r1_17 = 0;
    u32 r2_25 = 0;
    u32 r3_25 = 0;
    u32 r0_35 = 0;
    u32 r1_18 = 0;
    u32 r2_26 = 0;
    u32 r3_26 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    u32 r2_27 = 0;
    u32 r3_27 = 0;
    u32 r0_38 = 0;
    u32 r1_19 = 0;
    u32 r2_28 = 0;
    u32 r3_28 = 0;
    u32 r0_39 = 0;
    u32 r0_40 = 0;
    u32 r0_41 = 0;
    u32 r2_29 = 0;
    u32 r3_29 = 0;
    u32 r0_42 = 0;
    u32 r1_20 = 0;
    u32 r2_30 = 0;
    u32 r3_30 = 0;
    u32 r0_43 = 0;
    r5 = 0u;
    r13 = r13 - 0x300u;  // (from the original)
    r4 = r0;
    r6 = r5;
    do {
L_10b21c:;
        r0_1 = (r5 << 2) + r4 + 0x12u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_2 = r4 + r5 + 0x20u;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r5 - 0xbu;  // (from the original)
        *gptr<u8>(r0_2 + 0x1eu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 0xbu) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_3, r1_1, r2, r3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_4, 5u, 0x1cu, 0u);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_5 = call_00305cb4(r4, r1_2, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r0_6 = r4 + 0x12u;  // (from the original)
    r2_2 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_6, r0_5, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_7, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_8, r1_4, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc2a4(r0_9, 0x2cu, r2_5, r3_5);  // (from the original)
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_10 = call_00305cb8(r4, r1_5, r2_6, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_11 = r4 + 0x16u;  // (from the original)
    r2_7 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_11, r0_10, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_12 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_12, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_13, r1_7, r2_9, r3_9);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_14 = r13;
    guest::cpu()->r[13] = r13;
    call_00302944(r0_14, 0x37u, r2_10, r3_10);  // (from the original)
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_15 = call_00305cbc(r4, r1_8, r2_11, r3_11);
    r3_12 = guest::cpu()->r[3];
    r0_16 = r4 + 0x1eu;  // (from the original)
    r2_12 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_16, r0_15, r2_12, r3_12);
    r1_9 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_17, r1_9, r2_13, r3_13);
    r1_10 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r5 = 0u;
    guest::cpu()->r[13] = r13;
    r0_18 = call_00305ffc(r4, r1_10, r2_14, r3_14);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 < 0u || r0_18 == 0) {
        goto L_10b2ea;
    }
    r6 = 0x200bu;  // (from the original)
    r7 = r6 + 2u;
L_10b2ba:;
    guest::cpu()->r[13] = r13;
    r0_19 = call_002ff6f8(2u, r1, r2, r3);
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    if (r0_19 == 0) {
        goto L_10b366;
    }
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    r0_21 = call_002fcbb0(r0_20, r7, r2_15, r3_15);
    r2_16 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_22 = (r5 << 2) + r4 + 0x26u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_22, r0_21, r2_16, r3_16);
    r1_11 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_23 = r13;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_23, r1_11, r2_17, r3_17);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10b2de:;
    r5 = r5 + 1u;
    guest::cpu()->r[13] = r13;
    r0_24 = call_00305ffc(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_24 > r5) {
        guest::preempt();
        goto L_10b2ba;
    }
L_10b2ea:;
    r0_25 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_25, r1, r2, r3);
    r0_26 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_26, 0x38u, 0xadu, 0u);  // (from the original)
    r1_12 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_27 = call_00305d94(r4, r1_12, r2_18, r3_18);
    r3_19 = guest::cpu()->r[3];
    r0_28 = r4 + 0x2au;  // (from the original)
    r2_19 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_28, r0_27, r2_19, r3_19);
    r1_13 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_29 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_29, r1_13, r2_20, r3_20);
    r1_14 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_30 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_30, r1_14, r2_21, r3_21);
    r0_31 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_31, 0x36u, 0x29u, 0u);  // (from the original)
    r1_15 = guest::cpu()->r[1];
    r2_22 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_32 = call_00305d98(r4, r1_15, r2_22, r3_22);
    r3_23 = guest::cpu()->r[3];
    r0_33 = r4 + 0x32u;  // (from the original)
    r2_23 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_33, r0_32, r2_23, r3_23);
    r1_16 = guest::cpu()->r[1];
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_34 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_34, r1_16, r2_24, r3_24);
    r1_17 = guest::cpu()->r[1];
    r2_25 = guest::cpu()->r[2];
    r3_25 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_35 = call_00305d9c(r4, r1_17, r2_25, r3_25);
    r1_18 = guest::cpu()->r[1];
    r2_26 = guest::cpu()->r[2];
    r3_26 = guest::cpu()->r[3];
    if (r0_35 != 0) {
        r0_36 = r13;
        guest::cpu()->r[13] = r13;
        r0_37 = call_002fcbb0(r0_36, 0x202bu, r2_26, r3_26);  // (from the original)
        r2_27 = guest::cpu()->r[2];
        r3_27 = guest::cpu()->r[3];
        r0_38 = r4 + 0x3au;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_38, r0_37, r2_27, r3_27);
        r1_19 = guest::cpu()->r[1];
        r2_28 = guest::cpu()->r[2];
        r3_28 = guest::cpu()->r[3];
        r0_39 = r13;
        guest::cpu()->r[13] = r13;
        r0_35 = call_002f777c(r0_39, r1_19, r2_28, r3_28);
        r1_18 = guest::cpu()->r[1];
    }
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1_18;
    guest::cpu()->r[13] = r13;
    return r0_35;
L_10b366:;
    r0_40 = r13;
    guest::cpu()->r[13] = r13;
    r0_41 = call_002fcbb0(r0_40, r6, r2_15, r3_15);
    r2_29 = guest::cpu()->r[2];
    r3_29 = guest::cpu()->r[3];
    r0_42 = (r5 << 2) + r4 + 0x26u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r0_42, r0_41, r2_29, r3_29);
    r1_20 = guest::cpu()->r[1];
    r2_30 = guest::cpu()->r[2];
    r3_30 = guest::cpu()->r[3];
    r0_43 = r13;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_43, r1_20, r2_30, r3_30);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_10b2de;
}

}  // namespace d_0010b210
GUEST_EXPORT(0x0010b211, d_0010b210::f_0010b210);

// f_0010b390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b390 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x0030608d, u32(u32, u32, u32, u32)> call_0030608c;  // (from the original)

u32 f_0010b390(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_002f825c(r0, 0x4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_1 = r0 + 8u;
    call_00303534(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = call_0030608c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0010b390
GUEST_EXPORT(0x0010b391, d_0010b390::f_0010b390);

// f_0010b3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b3b0 {

struct __attribute__((packed)) Object_0010b3b0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_0010b3b0_0, byte_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00305da0, u32(u32, u32, u32, u32)> call_00305da0;  // (from the original)
inline constexpr guest::Function<0x0030608d, u32(u32, u32, u32, u32)> call_0030608c;  // (from the original)

u32 f_0010b3b0(gptr<Object_0010b3b0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r4_1 = 0;
    u32 tpc_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 tpc_2 = 0;
    u32 r0_2 = 0;
    u32 r4_2 = 0;
    u32 tpc_3 = 0;
    u32 r0_3 = 0;
    u32 r4_3 = 0;
    u32 tpc_4 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r1_1 = 0;
    u32 r2_4 = 0;
    u32 r4_4 = 0;
    u32 tpc_5 = 0;
    u32 r0_7 = 0;
    u32 r1_2 = 0;
    u32 r4_5 = 0;
    u32 tpc_6 = 0;
    u32 r4_6 = 0;
    u32 tpc_7 = 0;
    u32 r0_8 = 0;
    u32 r4_7 = 0;
    u32 tpc_8 = 0;
    u32 r0_9 = 0;
    u32 r4_8 = 0;
    u32 tpc_9 = 0;
    u32 r0_10 = 0;
    u32 r1_3 = 0;
    u32 r4_9 = 0;
    u32 tpc_10 = 0;
    u32 r4_10 = 0;
    u32 tpc_11 = 0;
    u32 r0_11 = 0;
    u32 res_1 = 0;
    u32 r4_11 = 0;
    u32 tpc_12 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 8;
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r14);
    r13 = ea_1;
    r0_1 = arg0->byte_10;
    if (r0_1 >= 3u) {
        r4_1 = *gptr<u32>(r13);
        tpc_1 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2_1 = *gptr<u8>(r0_1 + 0x10b3c8u);  // (from the original)
    r2_2 = r2_1 + r2_1;
    tpc_2 = 0x10b3cau + r2_2 | 1;  // (from the original)
    switch (tpc_2) {
        case 0x10b3cd: goto L_10b3cc;  // (from the original)
        case 0x10b407: goto L_10b406;  // (from the original)
        case 0x10b423: goto L_10b422;  // (from the original)
        default: break;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r0;
    return guest::call_address<u32>(tpc_2, r0_1, r1, r2_2, guest::cpu()->r[3]);
L_10b3cc:;
    r0_2 = *gptr<u32>(r0);
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
            goto L_10b3e6;
        }
        r0_2 = r0_2 - r1;
        *gptr<u32>(r0) = u32(r0_2);
        if (r0_2 == 0 || r0_2 >> 0x1f != (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
            r0_2 = 0u;
        }
        *gptr<u32>(r0) = u32(r0_2);
    }
    if (r0_2 != 0 && r0_2 >> 0x1f == (r0_2 & (r0_2 ^ r0_2)) >> 0x1f) {  // (from the original)
        r4_2 = *gptr<u32>(r13);
        tpc_3 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[13] = r13;
        return r0_2;
    }
L_10b3e6:;
    r0_3 = *gptr<u32>(r0 + 4u);
    if (r0_3 != 0 && r0_3 >> 0x1f == (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        r4_3 = *gptr<u32>(r13);
        tpc_4 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[13] = r13;
        return r0_3;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fae84(r0_3, r1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_5 = r0_4 + 0x621d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00305da0(r0_5, 0x621d0u, r2_3, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        r4_4 = *gptr<u32>(r13);
        tpc_5 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4_4;
        guest::cpu()->r[13] = r13;
        return r0_6;
    }
    guest::cpu()->r[13] = r13;
    r0_7 = call_0030608c(r0, 1u, r2_4, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r4_5 = *gptr<u32>(r13);
    tpc_6 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[13] = r13;
    return r0_7;
L_10b406:;
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        r4_6 = *gptr<u32>(r13);
        tpc_7 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_6;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_8 = *gptr<u32>(r0);
    if (r0_8 == 0 || r0_8 >> 0x1f != (r0_8 & (r0_8 ^ r0_8)) >> 0x1f) {  // (from the original)
        r4_7 = *gptr<u32>(r13);
        tpc_8 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_7;
        guest::cpu()->r[13] = r13;
        return r0_8;
    }
    r0_9 = r0_8 - 1u;
    *gptr<u32>(r0) = u32(r0_9);
    if (r0_9 != 0 && r0_9 >> 0x1f == (r0_9 & (r0_9 ^ r0_9)) >> 0x1f) {  // (from the original)
        r4_8 = *gptr<u32>(r13);
        tpc_9 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_8;
        guest::cpu()->r[13] = r13;
        return r0_9;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_0030608c(r0, 2u, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r4_9 = *gptr<u32>(r13);
    tpc_10 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1_3;
    guest::cpu()->r[4] = r4_9;
    guest::cpu()->r[13] = r13;
    return r0_10;
L_10b422:;
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        r4_10 = *gptr<u32>(r13);
        tpc_11 = *gptr<u32>(r13 + 4);
        r13 = r13 + 8;
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_10;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0_11 = *gptr<u32>(r0) + r1;
    res_1 = r0_11 - 0xau;  // (from the original)
    *gptr<u32>(r0) = u32(r0_11);
    if (res_1 != 0 && res_1 >> 0x1f == ((r0_11 ^ 0xau) & (r0_11 ^ res_1)) >> 0x1f) {  // (from the original)
        r0_11 = 0xau;  // (from the original)
    }
    *gptr<u32>(r0) = u32(r0_11);
    r4_11 = *gptr<u32>(r13);
    tpc_12 = *gptr<u32>(r13 + 4);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_11;
    guest::cpu()->r[13] = r13;
    return r0_11;
}

}  // namespace d_0010b3b0
GUEST_EXPORT(0x0010b3b1, d_0010b3b0::f_0010b3b0);

// f_0010b43c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b43c {

struct __attribute__((packed)) Object_0010b43c_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0010b43c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010b43c_0, word_4, 0x4);  // (from the original)


void f_0010b43c(gptr<Object_0010b43c_0> arg0) {
    arg0->word_0 = u32(0u);
    arg0->word_4 = u32(0u);
    *gptr<u8>(arg0.addr() + 4u) = u8(0u);
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_0010b43c
GUEST_EXPORT(0x0010b43d, d_0010b43c::f_0010b43c);

// f_0010b448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b448 {

struct __attribute__((packed)) Object_0010b448_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0010b448_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010b448_0, byte_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305de4, u32(u32, u32, u32, u32)> call_00305de4;  // (from the original)
inline constexpr guest::Function<0x00305e84, u32(u32, u32, u32, u32)> call_00305e84;  // (from the original)

u32 f_0010b448(gptr<Object_0010b448_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_2 = 0;
    u32 r0_4 = 0;
    u32 r3_3 = 0;
    u32 r0_5 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    u32 r5_2 = 0;
    u32 r4_2 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r0_7 = 0;
    u32 res_1 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_5 = 0;
    u32 r1_3 = 0;
    u32 res_2 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 res_3 = 0;
    u32 r0_12 = 0;
    u32 r3_6 = 0;
    u32 r2_4 = 0;
    u32 res_4 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 res_5 = 0;
    u32 cf_1 = 0;
    u64 t_1 = 0;
    u32 r4_3 = 0;
    u32 r4_4 = 0;
    u32 r5_3 = 0;
    u32 r6_3 = 0;
    u32 r7_2 = 0;
    u32 tpc_2 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_1;
    r6_1 = r0;
    r0 = arg0->byte_4;
    if (r0 == 0) {
        goto L_10b492;
    }
    if (r0 != 1u) {
        goto L_10b490;
    }
    if (r1 == 0 || r1 >> 0x1f != (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_10b490;
    }
    r0 = arg0->word_0;
    if (r0 == 0 || r0 >> 0x1f != (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_10b490;
    }
    r0 = r0 - r1;
    arg0->word_0 = u32(r0);
    if (r0 != 0 && r0 >> 0x1f == (r0 & (r0 ^ r0)) >> 0x1f) {  // (from the original)
        goto L_10b490;
    }
    arg0->word_0 = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(0u, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x7170cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_3 = call_003035a4(r0_2, 0xfu, 0x7170cu, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fae84(r0_3, r1_1, r2_1, r3_2);
    r3_3 = guest::cpu()->r[3];
    r0_5 = r0_4 + 0x6214fu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00305de4(r0_5, 1u, 0x6214fu, r3_3);  // (from the original)
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r6_1 + 4u) = u8(2u);
L_10b490:;
    r4_1 = *gptr<u32>(r13 + 4);
    r5_1 = *gptr<u32>(r13 + 8);
    r6_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r7_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x14);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0;
L_10b492:;
    r5_2 = 0u;
    r4_2 = r5_2;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fae84(r0, r1, r2, r3);
    r3_4 = guest::cpu()->r[3];
    r2_2 = 0x621d0u;  // (from the original)
    r1_2 = 0x45ccu;  // (from the original)
    r0_7 = r0_6 + r2_2;
    res_1 = r0_7 + r1_2;
    if (res_1 != 0) {
        r0_8 = res_1 + 8u;
        guest::cpu()->r[13] = r13;
        r0_7 = call_00303660(r0_8, r1_2, r2_2, r3_4);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r4_2 = 0u;
        r5_2 = r0_7;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fae84(r0_7, r1_2, r2_2, r3_4);
    r2_3 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r1_3 = 0x621d0u;  // (from the original)
    res_2 = r0_9 + r1_3 + 0x9cu;  // (from the original)
    r0_10 = res_2;
    if (res_2 != 0) {
        r0_11 = r0_10 + 0x34u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_10 = call_00303660(r0_11, r1_3, r2_3, r3_5);
        r3_5 = guest::cpu()->r[3];
        r1_3 = u32(s32(r0_10) >> 0x1f);  // (from the original)
        r2_3 = r4_2;
        res_3 = r0_10 + r5_2;
        r5_2 = res_3;
        r4_2 = u32(u64(r1_3) + r2_3 + u32(res_3 < r0_10));
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fae84(r0_10, r1_3, r2_3, r3_5);
    r3_6 = guest::cpu()->r[3];
    r2_4 = 0x621d0u;  // (from the original)
    res_4 = r0_12 + r2_4 + 0x4468u;  // (from the original)
    if (res_4 != 0) {
        r0_13 = res_4 + 0x24u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_14 = call_00303660(r0_13, 0x4468u, r2_4, r3_6);  // (from the original)
        r3_6 = guest::cpu()->r[3];
        r2_4 = r4_2;
        res_5 = r0_14 + r5_2;
        r5_2 = res_5;
        r4_2 = u32(u64(0u) + r2_4 + u32(res_5 < r0_14));
    }
    r1 = 0u;
    cf_1 = r5_2 >= 0x2710u;  // (from the original)
    r0 = r5_2 - 0x2710u;  // (from the original)
    t_1 = u64(r4_2) + ~r1 + cf_1;
    r4_3 = u32(t_1);
    if (!u32(t_1 >> 0x20)) {  // (from the original)
        guest::preempt();
        goto L_10b490;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00305e84(res_1, r1, r2_4, r3_6);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        guest::preempt();
        goto L_10b490;
    }
    *gptr<u32>(r6_1) = u32(3u);
    *gptr<u8>(r6_1 + 4u) = u8(1u);
    r4_4 = *gptr<u32>(r13 + 4);
    r5_3 = *gptr<u32>(r13 + 8);
    r6_3 = *gptr<u32>(r13 + 0xc);  // (from the original)
    r7_2 = *gptr<u32>(r13 + 0x10);  // (from the original)
    tpc_2 = *gptr<u32>(r13 + 0x14);  // (from the original)
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = 3u;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_3;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0010b448
GUEST_EXPORT(0x0010b449, d_0010b448::f_0010b448);

// f_0010b544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b544 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc814, u32(u32, u32, u32, u32)> call_002fc814;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

u32 f_0010b544(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r3_1 = 0;
    u32 r2_1 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_4 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r2_7 = 0;
    u32 r1_6 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r3_10 = 0;
    u32 r0_16 = 0;
    u32 r2_10 = 0;
    u32 r1_8 = 0;
    u32 r2_11 = 0;
    u32 r3_11 = 0;
    u32 r0_17 = 0;
    u32 r1_9 = 0;
    u32 r2_12 = 0;
    u32 r3_12 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r3_13 = 0;
    u32 r0_20 = 0;
    u32 r2_13 = 0;
    u32 r1_10 = 0;
    u32 r2_14 = 0;
    u32 r3_14 = 0;
    u32 r0_21 = 0;
    u32 r1_11 = 0;
    u32 r2_15 = 0;
    u32 r3_15 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r3_16 = 0;
    u32 r0_24 = 0;
    u32 r2_16 = 0;
    u32 r1_12 = 0;
    u32 r2_17 = 0;
    u32 r3_17 = 0;
    u32 r0_25 = 0;
    u32 r1_13 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r3_19 = 0;
    u32 r0_28 = 0;
    u32 r2_19 = 0;
    u32 r1_14 = 0;
    u32 r2_20 = 0;
    u32 r3_20 = 0;
    u32 r0_29 = 0;
    u32 r1_15 = 0;
    u32 r2_21 = 0;
    u32 r3_21 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r3_22 = 0;
    u32 r0_32 = 0;
    u32 r2_22 = 0;
    u32 r1_16 = 0;
    u32 r2_23 = 0;
    u32 r3_23 = 0;
    u32 r0_33 = 0;
    u32 r6_1 = 0;
    u32 r0_34 = 0;
    u32 r2_24 = 0;
    u32 r3_24 = 0;
    u32 r0_35 = 0;
    u32 r6_2 = 0;
    u32 r0_36 = 0;
    u32 r0_37 = 0;
    r5 = 0u;
    r13 = r13 - 0x300u;  // (from the original)
    r4 = r0;
    r6 = r5;
    do {
L_10b550:;
        r0_1 = (r5 << 2) + r4;
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r0_1, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_2 = r4 + r5 + 0x20u;  // (from the original)
        r5 = r5 + 1u;
        res_1 = r5 - 8u;
        *gptr<u8>(r0_2) = u8(r6);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r5 ^ 8u) & (r5 ^ res_1)) >> 0x1f);  // (from the original)
    r0_3 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_3, r1_1, r2, r3);
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_4, 0x63u, 0x51u, 0u);  // (from the original)
    r3_1 = guest::cpu()->r[3];
    r2_1 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r4, 1u, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_5 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_5, r1_2, r2_2, r3_2);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_6 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_6, r1_3, r2_3, r3_3);
    r0_7 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_7, 0x5du, 0x4bu, 0u);  // (from the original)
    r3_4 = guest::cpu()->r[3];
    r0_8 = r4 + 0x10u;  // (from the original)
    r2_4 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_8, 1u, r2_4, r3_4);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_9 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_9, r1_4, r2_5, r3_5);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_10 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_10, r1_5, r2_6, r3_6);
    r0_11 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_11, 0x5fu, 0x4cu, 0u);  // (from the original)
    r3_7 = guest::cpu()->r[3];
    r0_12 = r4 + 0x14u;  // (from the original)
    r2_7 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_12, 1u, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r0_13 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_13, r1_6, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_14 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_14, r1_7, r2_9, r3_9);
    r0_15 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_15, 0x5eu, 0x4du, 0u);  // (from the original)
    r3_10 = guest::cpu()->r[3];
    r0_16 = r4 + 0x18u;  // (from the original)
    r2_10 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_16, 1u, r2_10, r3_10);
    r1_8 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_17, r1_8, r2_11, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_18 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_18, r1_9, r2_12, r3_12);
    r0_19 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_19, 0x62u, 0x50u, 0u);  // (from the original)
    r3_13 = guest::cpu()->r[3];
    r0_20 = r4 + 8u;
    r2_13 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_20, 1u, r2_13, r3_13);
    r1_10 = guest::cpu()->r[1];
    r2_14 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_21 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_21, r1_10, r2_14, r3_14);
    r1_11 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_22 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_22, r1_11, r2_15, r3_15);
    r0_23 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_23, 0x61u, 0x4fu, 0u);  // (from the original)
    r3_16 = guest::cpu()->r[3];
    r0_24 = r4 + 0xcu;  // (from the original)
    r2_16 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_24, 1u, r2_16, r3_16);
    r1_12 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r0_25 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_25, r1_12, r2_17, r3_17);
    r1_13 = guest::cpu()->r[1];
    r2_18 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_26 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_26, r1_13, r2_18, r3_18);
    r0_27 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_27, 0x60u, 0x4eu, 0u);  // (from the original)
    r3_19 = guest::cpu()->r[3];
    r0_28 = r4 + 4u;
    r2_19 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_28, 1u, r2_19, r3_19);
    r1_14 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r0_29 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc8fc(r0_29, r1_14, r2_20, r3_20);
    r1_15 = guest::cpu()->r[1];
    r2_21 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r0_30 = r13;
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_30, r1_15, r2_21, r3_21);
    r0_31 = r13;
    guest::cpu()->r[13] = r13;
    call_002fe9c8(r0_31, 0x64u, 0x52u, 0u);  // (from the original)
    r3_22 = guest::cpu()->r[3];
    r0_32 = r4 + 0x1cu;  // (from the original)
    r2_22 = r13;
    guest::cpu()->r[13] = r13;
    call_003004c4(r0_32, 1u, r2_22, r3_22);
    r1_16 = guest::cpu()->r[1];
    r2_23 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    r0_33 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8fc(r0_33, r1_16, r2_23, r3_23);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x55a6u;  // (from the original)
    r5 = 0u;
L_10b686:;
    r6_1 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_34 = call_002fae84(r0, r1, r2, r3);
    r2_24 = guest::cpu()->r[2];
    r3_24 = guest::cpu()->r[3];
    r0_35 = r0_34 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0_35, r6_1, r2_24, r3_24);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6_2 = r0;
    if (r0 == 0) {
        goto L_10b6b8;
    }
    r0_36 = r6_2 + r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0_36, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10b6b8;
    }
    r0_37 = r6_2 + 0x8f0au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0_37, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_10b6b8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc814(r4, r0_37, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10b6b8:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_10b686;
    }
    r13 = r13 + 0x300u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0010b544
GUEST_EXPORT(0x0010b545, d_0010b544::f_0010b544);

// f_0010b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b6d0 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_0010b6d0() {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301444(guest::cpu()->r[0], 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return guest::cpu()->r[0];
}

}  // namespace d_0010b6d0
GUEST_EXPORT(0x0010b6d1, d_0010b6d0::f_0010b6d0);

// f_0010b730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b730 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fb93c, u32(u32, u32, u32, u32)> call_002fb93c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)

u32 f_0010b730(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r1_1 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r1_2 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_16 = 0;
    u32 r4_3 = 0;
    u32 res_3 = 0;
    u32 r0_17 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_18 = 0;
    u32 r6_1 = 0;
    u32 r6_2 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r1_4 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r1_5 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_24 = 0;
    u32 r4_4 = 0;
    u32 r5_1 = 0;
    u32 r6_3 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r5 = 0u;
    r13 = ea_1 - 0x2a4u;  // (from the original)
    r7 = 0x55a6u;  // (from the original)
L_10b73a:;
    r4_1 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fae84(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_2 = r0_1 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0_2, r4_1, r2_1, r3_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_2 = r0;
    if (r0 == 0) {
        goto L_10b83c;
    }
    r0_3 = r4_2 + r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0_3, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10b83c;
    }
    r0_4 = *gptr<u32>(r13 + 0x2a8u);  // (from the original)
    if (r0_4 == 0) {
        goto L_10b7da;
    }
    r0_5 = r4_2 + (0x57u << 8);  // (from the original)
    *gptr<u32>(r13 + 0x18u) = u32(r0_5);  // (from the original)
    r0_4 = *gptr<u8>(r0_5 + 0x12u);  // (from the original)
    res_1 = r0_4 >> 4 << 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 == 0) {
        goto L_10b7da;
    }
    res_2 = r0_4 >> 5 << 0x1f;  // (from the original)
    r0_4 = res_2;
    if (res_2 != 0) {
        goto L_10b7da;
    }
    r0_6 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_6, r1, r2, r3);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_7 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_7, 0x225au, r2_2, r3_2);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 4u) = u32(6u);
    *gptr<u32>(r13) = u32(r13 + 0x1cu);  // (from the original)
    r0_8 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_9 = call_00306354(r0_8, 0x10b854u, 1u, r0_3);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_9 == 0) {
        goto L_10b7ce;
    }
    r0_10 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002ff4d4(r0_10, 8u, 1u, 0u);
    r1_1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_10b7ce;
    }
    r0_12 = (u32(*gptr<u8>(*gptr<u32>(r13 + 0x18u) + 0x12u)) | 0x20u) & 0xefu;  // (from the original)
    r1_2 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    *gptr<u8>(r1_2 + 0x12u) = u8(r0_12);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fae84(r0_12, r1_2, r2_3, r3_3);
    r3_3 = guest::cpu()->r[3];
    r0_14 = r0_13 + 0x6214fu;  // (from the original)
    r1_1 = 1u;
    r2_3 = u32(*gptr<u8>(r0_14 + 0xdu)) | r1_1;  // (from the original)
    *gptr<u8>(r0_14 + 0xdu) = u8(r2_3);  // (from the original)
L_10b7ce:;
    r0_15 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_15, r1_1, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_16 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_002f77e8(r0_16, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10b7da:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb93c(r0_4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10b83c;
    }
    r4_3 = r4_2 + (0x57u << 8);  // (from the original)
    res_3 = u32(*gptr<u8>(r4_3 + 0x13u)) >> 1 << 0x1f;  // (from the original)
    r0 = res_3;
    if (res_3 == 0) {
        goto L_10b83c;
    }
    r0_17 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002ff368(r0_17, r1, r2, r3);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_18 = r13 + 0x298u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fcbb0(r0_18, 0x225au, r2_5, r3_5);  // (from the original)
    r6_1 = r13;
    *gptr<u32>(r6_1) = u32(r13 + 0x298u);  // (from the original)
    *gptr<u32>(r6_1 + 4) = u32(6u);
    *gptr<u32>(r6_1 + 8) = u32(0u);
    r6_2 = r6_1 + 0xc;  // (from the original)
    r0_19 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_20 = call_00306354(r0_19, 0x10b854u, 2u, r0_3);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_20 == 0) {
        goto L_10b830;
    }
    r0_21 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_22 = call_002ff4d4(r0_21, 3u, 1u, 0u);
    r1_4 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    if (r0_22 == 0) {
        goto L_10b830;
    }
    r1_4 = 0xfdu;  // (from the original)
    *gptr<u8>(r4_3 + 0x13u) = u8(u32(*gptr<u8>(r4_3 + 0x13u)) & r1_4);  // (from the original)
L_10b830:;
    r0_23 = r13 + 0x298u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_23, r1_4, r2_6, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_24 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0_24, r1_5, r2_7, r3_7);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10b83c:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_10b73a;
    }
    r13 = r13 + 0x2acu;  // (from the original)
    r4_4 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_3 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_0010b730
GUEST_EXPORT(0x0010b731, d_0010b730::f_0010b730);

// f_0010b86c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b86c {

inline constexpr guest::Function<0x001cd668, u32(u32, u32, u32, u32)> call_001cd668;  // (from the original)
inline constexpr guest::Function<0x00304224, u32(u32, u32, u32, u32)> call_00304224;  // (from the original)
inline constexpr guest::Function<0x00305ff4, u32(u32, u32, u32, u32)> call_00305ff4;  // (from the original)
inline constexpr guest::Function<0x00305ff8, u32(u32, u32, u32, u32)> call_00305ff8;  // (from the original)
inline constexpr guest::Function<0x003064ac, u32(u32, u32, u32, u32)> call_003064ac;  // (from the original)

u32 f_0010b86c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r3_1 = 0;
    u32 r5_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_003064ac(r0, r1, guest::cpu()->r[2], r3);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r5_1 = r0 + (0xbu << 8);  // (from the original)
    if (u32(*gptr<u8>(r5_1 + 0x1cu)) != 0) {  // (from the original)
        r0_2 = r0 + 0x78u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00304224(r0_2, 0u, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r5_1 + 0x1du)) == 0) {  // (from the original)
        goto L_10b8b6;
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_00305ff4(4u, 1u, guest::cpu()->r[2], r3_1);
    r1_1 = guest::cpu()->r[1];
    r3_1 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_10b8b6;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_00305ff8(r0, 4u, guest::cpu()->r[2], r3_1);
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(r13) = u32(r0_4);
    r1_1 = *gptr<u16>(r13);
    *gptr<u16>(r0 + 0x2eu) = u16(r1_1);  // (from the original)
    *gptr<u16>(r0 + 0x3au) = u16(r1_1);  // (from the original)
L_10b8b6:;
    if (u32(*gptr<u8>(r5_1 + 0x1eu)) != 0) {  // (from the original)
        r0_5 = r0 + (0x5du << 4);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001cd668(r0_5, 1u, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
    }
    if (u32(*gptr<u8>(r5_1 + 0x1fu)) != 0) {  // (from the original)
        r1_1 = 1u;
        *gptr<u8>(*gptr<u32>(r0 + 0x68u) + 0x3eu) = u8(r1_1);  // (from the original)
    }
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return 1u;
}

}  // namespace d_0010b86c
GUEST_EXPORT(0x0010b86d, d_0010b86c::f_0010b86c);

// f_0010b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b9b0 {

inline constexpr guest::Function<0x002d4d00, u32(u32, u32, u32, u32)> call_002d4d00;  // (from the original)
inline constexpr guest::Function<0x002d4d3c, u32(u32, u32, u32, u32)> call_002d4d3c;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x00305114, u32(u32, u32, u32, u32)> call_00305114;  // (from the original)
inline constexpr guest::Function<0x00306088, u32(u32, u32, u32, u32)> call_00306088;  // (from the original)
inline constexpr guest::Function<0x004e7f28, u32(u32, u32, u32, u32)> call_004e7f28;  // (from the original)

u32 f_0010b9b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r2_3 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r3_4 = 0;
    u32 r2_5 = 0;
    u32 r0_4 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r5 = r1;
    r6 = r2;
    r4 = r0;
    guest::cpu()->r[13] = r13;
    call_002d4d3c(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_1 = call_002d4d00(r4, r3, r2_1, r3_1);
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00306088(r4, r1_1, r2_2, r3_2);
    r1_1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r0 = *gptr<u8>(r4 + 0x1eu);  // (from the original)
    if (r0 == 0) {
        goto L_10ba08;
    }
    if (r0 >= 4u) {
        goto L_10b9e2;
    }
    r0 = r0 + 1u;
L_10b9e0:;
    *gptr<u8>(r4 + 0x1eu) = u8(r0);  // (from the original)
L_10b9e2:;
    r2_3 = uxtb(r5);
    r1_2 = uxtb(r6);
    r0_2 = uxtb(r0);
    guest::cpu()->r[13] = r13;
    call_004e7f28(r0_2, r1_2, r2_3, r3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    *gptr<u8>(r4 + 0x1fu) = u8(0u);  // (from the original)
    r0_3 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb96c(r0_3, r1_3, r2_4, r3_3);
    r1_1 = guest::cpu()->r[1];
    r3_4 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        r13 = r13 + 0x18;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    r2_5 = 0x57u << 8;  // (from the original)
    r0_4 = r0_1 + r2_5;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00305114(r0_4, 1u, r2_5, r3_4);
    r1_1 = guest::cpu()->r[1];
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_10ba08:;
    r0 = 2u;
    guest::preempt();
    goto L_10b9e0;
}

}  // namespace d_0010b9b0
GUEST_EXPORT(0x0010b9b1, d_0010b9b0::f_0010b9b0);

// f_0010bb34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bb34 {


u32 f_0010bb34(u32 r0) {
    u32 r0_1 = 0;
    r0_1 = *gptr<u32>(0x9502e8u + (r0 << 2));  // (from the original)
    guest::cpu()->r[1] = 0x9502e8u;  // (from the original)
    return r0_1;
}

}  // namespace d_0010bb34
GUEST_EXPORT(0x0010bb35, d_0010bb34::f_0010bb34);

// f_0010beb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010beb8 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32, u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)

u32 f_0010beb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r6_1 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r7_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r3_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r4_2 = 0;
    u32 r1_5 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r4_3 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_7 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 ea_2 = 0;
    u32 r0_12 = 0;
    u32 r1_8 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r3_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r2_8 = 0;
    u32 r3_10 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r1_11 = 0;
    u32 r4_4 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x1cu;  // (from the original)
    r6_1 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    r5_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0x80u + 0x621d0u;  // (from the original)
    r0_2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_2, 0x621d0u, r2_1, r3_1);  // (from the original)
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_3 = *gptr<u32>(r4_1);
    *gptr<u32>(r13 + 0x14u) = u32(*gptr<u32>(r4_1 + 4u));  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_3);  // (from the original)
    r1_1 = r13 + 0x10u;  // (from the original)
    r0_4 = r13;
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r7_1 = *gptr<u32>(r13 + 4u);
    r0_5 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_003028f0(r0_5, r1_2, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    r1_3 = sxtb(r7_1);
    guest::cpu()->r[13] = r13;
    call_00300914(r0_6, r1_3, 0u, r3_4);
    r2_4 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_7 = *gptr<u32>(r4_1);
    r1_4 = *gptr<u32>(r4_1 + 4);
    r4_2 = r4_1 + 8;
    *gptr<u32>(r13 + 0x10u) = u32(r0_7);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1_4);  // (from the original)
    r1_5 = r13 + 0x10u;  // (from the original)
    r0_8 = r13;
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_8, r1_5, r2_4, r3_5);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r4_3 = *gptr<u32>(r13 + 4u);
    r0_9 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_003028f0(r0_9, r1_6, r2_5, r3_6);
    r3_7 = guest::cpu()->r[3];
    r1_7 = u32(s32(r4_3 << 0x10) >> 0x18);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300924(r0_10, r1_7, 0u, r3_7);
    r0_11 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r6_1);
    *gptr<u32>(r13) = u32(r5_1);
    *gptr<u32>(r13 + 8u) = u32(r0_11);
    ea_2 = r13 + 0x1cu;  // (from the original)
    r0_12 = *gptr<u32>(ea_2);
    r1_8 = *gptr<u32>(ea_2 + 4);
    r2_6 = *gptr<u32>(ea_2 + 8);
    r3_8 = *gptr<u32>(ea_2 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_12, r1_8, r2_6, r3_8);
    r1_9 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_13 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_13, r1_9, r2_7, r3_9);
    r1_10 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_14 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_00303c84(r0_14, r1_10, r2_8, r3_10);
    r1_11 = guest::cpu()->r[1];
    r13 = r13 + 0x2cu;  // (from the original)
    r4_4 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_11;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_15;
}

}  // namespace d_0010beb8
GUEST_EXPORT(0x0010beb9, d_0010beb8::f_0010beb8);

// f_0010bf48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bf48 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32, u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32, u32, u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x00306404, u32(u32, u32, u32, u32)> call_00306404;  // (from the original)
inline constexpr guest::Function<0x00306408, u32(u32, u32, u32, u32)> call_00306408;  // (from the original)

u32 f_0010bf48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 ea_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 r0_6 = 0;
    u32 ea_3 = 0;
    u32 r0_7 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r1_4 = 0;
    u32 r2_5 = 0;
    u32 r3_6 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r1_6 = 0;
    u32 r4_2 = 0;
    u32 r5_2 = 0;
    u32 r6_2 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r3);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x20) = u32(r14);  // (from the original)
    r13 = ea_1 - 0xcu;  // (from the original)
    ea_2 = r13 + 0x30u;  // (from the original)
    r5_1 = *gptr<u32>(ea_2);
    r6_1 = *gptr<u32>(ea_2 + 4);
    r7_1 = *gptr<u32>(ea_2 + 8);
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb328(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r4_1 = r0_1 + 0x80u + 0x621d0u;  // (from the original)
    r0_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_2, 0x621d0u, r2_1, r3_1);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_3 = call_00306404(r4_1, r1_1, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_5 = call_003028f0(r0_4, r1_2, r2_3, r3_3);
    r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00306408(r0_5, r0_3, 0u, r3_4);
    r0_6 = r13;
    *gptr<u32>(r0_6) = u32(r5_1);
    *gptr<u32>(r0_6 + 4) = u32(r6_1);
    *gptr<u32>(r0_6 + 8) = u32(r7_1);
    ea_3 = r13 + 0xcu;  // (from the original)
    r0_7 = *gptr<u32>(ea_3);
    r1_3 = *gptr<u32>(ea_3 + 4);
    r2_4 = *gptr<u32>(ea_3 + 8);
    r3_5 = *gptr<u32>(ea_3 + 0xc);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_7, r1_3, r2_4, r3_5);
    r1_4 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_8 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_8, r1_4, r2_5, r3_6);
    r1_5 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_10 = call_00303c84(r0_9, r1_5, r2_6, r3_7);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x1cu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_2 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_10;
}

}  // namespace d_0010bf48
GUEST_EXPORT(0x0010bf49, d_0010bf48::f_0010bf48);

// f_0010bf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bf98 {

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> call_002ffb48;  // (from the original)
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;  // (from the original)

u32 f_0010bf98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    ea_1 = r13 - 0x10;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    r13 = ea_1;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ffb48(r0, r1, r2, r3);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    goto L_10bfac;
L_10bfac:;
    if (r0_1 != 0) {
        r13 = r13 + 0x10;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_1;
    }
    guest::cpu()->r[13] = r13;
    call_00307568(3u, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0010bf98
GUEST_EXPORT(0x0010bf99, d_0010bf98::f_0010bf98);

// f_0010c12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c12c {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_0010c12c() {
    guest::cpu()->r[13] -= 8u;
    call_002ffb64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_0010c12c
GUEST_EXPORT(0x0010c12d, d_0010c12c::f_0010c12c);

// f_0010c228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c228 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0010c228(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    r0_1 = r0 + 4u;
    guest::cpu()->r[13] -= 8u;
    r0_2 = call_003076c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 - 4u;
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0010c228
GUEST_EXPORT(0x0010c229, d_0010c228::f_0010c228);

// f_0010c234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c234 {

inline constexpr guest::Function<0x0010c229, u32(u32, u32, u32, u32)> call_0010c228;  // (from the original)
inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0010c234(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0xcu;  // (from the original)
    r0_2 = call_003076c8(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1 = r0_2 - 0xcu;  // (from the original)
    r0_3 = r0_2 - 4u;
    r0_4 = call_003076c8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = r0_4 - 8u;
    r0_6 = call_0010c228(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_6;
}

}  // namespace d_0010c234
GUEST_EXPORT(0x0010c235, d_0010c234::f_0010c234);

// f_0010c33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c33c {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010c33c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10c36cu, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x24u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x24u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0010c33c
GUEST_EXPORT(0x0010c33d, d_0010c33c::f_0010c33c);

// f_0010c37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c37c {


u32 f_0010c37c() {
    return guest::call_address<u32>(0x10c385u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c37c
GUEST_EXPORT(0x0010c37c, d_0010c37c::f_0010c37c);

// f_0010c3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c3c8 {


u32 f_0010c3c8() {
    return guest::call_address<u32>(0x10c3d1u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c3c8
GUEST_EXPORT(0x0010c3c8, d_0010c3c8::f_0010c3c8);

// f_0010c3e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c3e8 {


u32 f_0010c3e8() {
    return guest::call_address<u32>(0x10c3f1u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c3e8
GUEST_EXPORT(0x0010c3e8, d_0010c3e8::f_0010c3e8);

// f_0010c408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c408 {


u32 f_0010c408() {
    return guest::call_address<u32>(0x10c411u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c408
GUEST_EXPORT(0x0010c408, d_0010c408::f_0010c408);

// f_0010c458: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c458 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010c458(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r13 = r13 - 0x20u;  // (from the original)
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10c488u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(1u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x28u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x28u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0010c458
GUEST_EXPORT(0x0010c459, d_0010c458::f_0010c458);

// f_0010c4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c4b8 {

inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010c4b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    r4_1 = r1;
    r13 = r13 - 0x20u;  // (from the original)
    if (r1 == 0) {
        r4_1 = 0x140000u;  // (from the original)
    }
    r0_1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_2 = call_002f6e64(r0_1, 0x10c4f4u, r2, r3);  // (from the original)
    *gptr<u32>(r13) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    *gptr<u32>(0x952c38u + 0x60u) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_002f6e8c(r0_4, r1_1, r2_1, r3_1);
    r1_2 = guest::cpu()->r[1];
    r0_5 = *gptr<u32>(0x952c38u + 0x60u);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[13] = r13;
    return r0_5;
}

}  // namespace d_0010c4b8
GUEST_EXPORT(0x0010c4b9, d_0010c4b8::f_0010c4b8);

// f_0010c50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c50c {


u32 f_0010c50c() {
    return guest::call_address<u32>(0x10c515u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c50c
GUEST_EXPORT(0x0010c50c, d_0010c50c::f_0010c50c);

// f_0010c560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c560 {


u32 f_0010c560() {
    return guest::call_address<u32>(0x10c569u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c560
GUEST_EXPORT(0x0010c560, d_0010c560::f_0010c560);

// f_0010c580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c580 {


u32 f_0010c580() {
    return guest::call_address<u32>(0x10c589u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c580
GUEST_EXPORT(0x0010c580, d_0010c580::f_0010c580);

// f_0010c5d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c5d4 {


u32 f_0010c5d4() {
    return guest::call_address<u32>(0x10c5ddu, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c5d4
GUEST_EXPORT(0x0010c5d4, d_0010c5d4::f_0010c5d4);

// f_0010c5f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c5f4 {


u32 f_0010c5f4() {
    return guest::call_address<u32>(0x10c5fdu, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c5f4
GUEST_EXPORT(0x0010c5f4, d_0010c5f4::f_0010c5f4);

// f_0010c650: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c650 {

inline constexpr guest::Function<0x003007fc, u32(u32, u32, u32, u32)> call_003007fc;  // (from the original)

u32 f_0010c650() {
    guest::cpu()->r[13] -= 8u;
    call_003007fc(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return guest::cpu()->r[0];
}

}  // namespace d_0010c650
GUEST_EXPORT(0x0010c651, d_0010c650::f_0010c650);

// f_0010c658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c658 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_0010c658() {
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 8u;
    call_00301d0c(guest::cpu()->r[0], 0x2fc20cu, 4u, 4u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_1;
    return guest::cpu()->r[0];
}

}  // namespace d_0010c658
GUEST_EXPORT(0x0010c659, d_0010c658::f_0010c658);

// f_0010c6b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c6b0 {

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x001c0f3c, u32(u32, u32, u32, u32)> call_001c0f3c;  // (from the original)
inline constexpr guest::Function<0x00305e88, u32(u32, u32, u32, u32)> call_00305e88;  // (from the original)
inline constexpr guest::Function<0x0030692c, u32(u32, u32, u32, u32)> call_0030692c;  // (from the original)
inline constexpr guest::Function<0x00306930, u32(u32, u32, u32, u32)> call_00306930;  // (from the original)

u32 f_0010c6b0(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x9b4u;  // (from the original)
    call_001c0f3c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    call_0030692c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    call_00305e88(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_2 = *global_00950148;
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_3;
        return 1u;
    }
    call_00306930(r0_2, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_0010c6b0
GUEST_EXPORT(0x0010c6b1, d_0010c6b0::f_0010c6b0);

// f_0010c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c720 {

inline guest::global<u32, 0x0094d7a0> global_0094d7a0;  // (from the original)
inline constexpr guest::Function<0x0029c964, u32(u32, u32, u32, u32)> call_0029c964;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> call_003081b4;  // (from the original)

u32 f_0010c720(u32 r0, u32 r1) {
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1;
    res_1 = *global_0094d7a0 << 0x1f;  // (from the original)
    if (res_1 != 0) {
        goto L_10c746;
    }
    r0_1 = call_002fe7dc(0x94d7a0u, res_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_1 == 0) {
        goto L_10c746;
    }
    call_0029c964(0x94d7a8u, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
L_10c746:;
    if (r4_1 == 0) {
        r4_1 = 0x94d7a8u;  // (from the original)
    }
    call_003081b4(r4_1, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_0010c720
GUEST_EXPORT(0x0010c721, d_0010c720::f_0010c720);

// f_0010c764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c764 {

inline guest::global<u32, 0x0095385c> global_0095385c;  // (from the original)
inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline guest::global<u32, 0x00953874> global_00953874;  // (from the original)
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline guest::global<u32, 0x0095df64> global_0095df64;  // (from the original)
inline constexpr guest::Function<0x0010767d, u32(u32, u32, u32, u32)> call_0010767c;  // (from the original)
inline constexpr guest::Function<0x0013873c, u32(u32, u32, u32, u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32, u32, u32, u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001ed594, u32(u32, u32, u32, u32)> call_001ed594;  // (from the original)
inline constexpr guest::Function<0x0022d734, u32(u32, u32, u32, u32)> call_0022d734;  // (from the original)
inline constexpr guest::Function<0x00242744, u32(u32, u32, u32, u32)> call_00242744;  // (from the original)
inline constexpr guest::Function<0x0027c554, u32(u32, u32, u32, u32)> call_0027c554;  // (from the original)
inline constexpr guest::Function<0x0029d150, u32(u32, u32, u32, u32)> call_0029d150;  // (from the original)
inline constexpr guest::Function<0x002b8898, u32(u32, u32, u32, u32)> call_002b8898;  // (from the original)
inline constexpr guest::Function<0x002c20ec, u32(u32, u32, u32, u32)> call_002c20ec;  // (from the original)
inline constexpr guest::Function<0x002f98a8, u32(u32, u32, u32, u32)> call_002f98a8;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32, u32, u32, u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32, u32, u32, u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32, u32, u32, u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32, u32, u32, u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00306934, u32(u32, u32, u32, u32)> call_00306934;  // (from the original)
inline constexpr guest::Function<0x00306938, u32(u32, u32, u32, u32)> call_00306938;  // (from the original)
inline constexpr guest::Function<0x0030693c, u32(u32, u32, u32, u32)> call_0030693c;  // (from the original)
inline constexpr guest::Function<0x00306940, u32(u32, u32, u32, u32)> call_00306940;  // (from the original)
inline constexpr guest::Function<0x00306944, u32(u32, u32, u32, u32)> call_00306944;  // (from the original)
inline constexpr guest::Function<0x00306948, u32(u32, u32, u32, u32)> call_00306948;  // (from the original)
inline constexpr guest::Function<0x0030694c, u32(u32, u32, u32, u32)> call_0030694c;  // (from the original)
inline constexpr guest::Function<0x00306950, u32(u32, u32, u32, u32)> call_00306950;  // (from the original)
inline constexpr guest::Function<0x00306954, u32(u32, u32, u32, u32)> call_00306954;  // (from the original)
inline constexpr guest::Function<0x00306958, u32(u32, u32, u32, u32)> call_00306958;  // (from the original)
inline constexpr guest::Function<0x0030695c, u32(u32, u32, u32, u32)> call_0030695c;  // (from the original)
inline constexpr guest::Function<0x00306960, u32(u32, u32, u32, u32)> call_00306960;  // (from the original)
inline constexpr guest::Function<0x00306964, u32(u32, u32, u32, u32)> call_00306964;  // (from the original)
inline constexpr guest::Function<0x00306968, u32(u32, u32, u32, u32)> call_00306968;  // (from the original)
inline constexpr guest::Function<0x0030696c, u32(u32, u32, u32, u32)> call_0030696c;  // (from the original)
inline constexpr guest::Function<0x00306970, u32(u32, u32, u32, u32)> call_00306970;  // (from the original)
inline constexpr guest::Function<0x003081c8, u32(u32, u32, u32, u32)> call_003081c8;  // (from the original)
inline constexpr guest::Function<0x00308238, u32(u32, u32, u32, u32)> call_00308238;  // (from the original)
inline constexpr guest::Function<0x003082bc, u32(u32, u32, u32, u32)> call_003082bc;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32, u32, u32, u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030834c, u32(u32, u32, u32, u32)> call_0030834c;  // (from the original)
inline constexpr guest::Function<0x003319e8, u32(u32, u32, u32, u32)> call_003319e8;  // (from the original)
inline constexpr guest::Function<0x004e9dc8, u32(u32, u32, u32, u32)> call_004e9dc8;  // (from the original)

u32 f_0010c764() {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r0_30 = 0;
    u32 r0_31 = 0;
    u32 r0_32 = 0;
    u32 r0_33 = 0;
    u32 r0_34 = 0;
    u32 r0_35 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00306934(0x9c9fd0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_2 = call_00306938(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0030693c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0030444c(0xa82000u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0_3 = *global_0095386c;
    r0_4 = call_002f98a8(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_5 = call_002fc188(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc194(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_6 = *global_0095df64;
    call_002c20ec(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = *global_00953864;
    call_003081c8(r0_7, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_8 = *global_0095385c;
    call_003319e8(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_9 = *global_00953874;
    r0_10 = call_0029d150(r0_9, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00306940(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_11 = *global_0095c6d0;
    r0_12 = call_00306944(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_13 = call_0010767c(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_14 = call_001bac9c(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_001ed594(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_15 = call_00306948(0xfcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00242744(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_16 = call_0030694c(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_17 = call_00308238(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_18 = call_0027c554(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_19 = call_0022d734(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_20 = call_002b8898(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_21 = call_00304530(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_22 = call_0013873c(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_23 = call_00306950(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_24 = call_003082bc(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_25 = call_00306954(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_26 = call_00306958(r0_25, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_27 = call_0030695c(r0_26, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_28 = call_00306960(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_29 = call_00306964(r0_28, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_30 = call_004e9dc8(r0_29, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_31 = call_00306968(r0_30, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_32 = call_0030696c(r0_31, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_33 = call_00308340(r0_32, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_34 = call_0030834c(r0_33, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_35 = call_00306970(r0_34, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_35;
}

}  // namespace d_0010c764
GUEST_EXPORT(0x0010c765, d_0010c764::f_0010c764);

// f_0010cadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010cadc {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)

u32 f_0010cadc(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = call_00308970(r1, r0, 0xau, guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    if (r0_1 >= 0xau) {  // (from the original)
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    res_1 = r0_1 * 0x2518u + r0;  // (from the original)
    if (res_1 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = 0x2518u;  // (from the original)
        return 0u;
    }
    r0_2 = call_002fe470(res_1, 0x2518u, r2_1, guest::cpu()->r[3]);  // (from the original)
    r1_2 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1_2;
        return 0u;
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1_2;
    return res_1;
}

}  // namespace d_0010cadc
GUEST_EXPORT(0x0010cadd, d_0010cadc::f_0010cadc);

// f_0010cb10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010cb10 {

struct __attribute__((packed)) Object_0010cb10_0 {
    u8 unknown_0[0x196f0];  // (not used here)
    u16 half_196f0;
};
GUEST_OFFSET(Object_0010cb10_0, half_196f0, 0x196f0);  // (from the original)

inline constexpr guest::Function<0x0010ef45, u32(u32, u32, u32, u32)> call_0010ef44;  // (from the original)
inline constexpr guest::Function<0x0010fa09, u32(u32, u32, u32, u32)> call_0010fa08;  // (from the original)
inline constexpr guest::Function<0x0010fc1d, u32(u32, u32, u32, u32)> call_0010fc1c;  // (from the original)
inline constexpr guest::Function<0x001100ed, u32(u32, u32, u32, u32)> call_001100ec;  // (from the original)
inline constexpr guest::Function<0x003089d5, u32(u32, u32, u32, u32)> call_003089d4;  // (from the original)
inline constexpr guest::Function<0x00308a68, u32(u32, u32, u32, u32)> call_00308a68;  // (from the original)
inline constexpr guest::Function<0x00308d05, u32(u32, u32, u32, u32)> call_00308d04;  // (from the original)
inline constexpr guest::Function<0x00308d4d, u32(u32, u32, u32, u32)> call_00308d4c;  // (from the original)

u32 f_0010cb10(gptr<Object_0010cb10_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_6 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r7_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r1_5 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 res_3 = 0;
    u32 r1_6 = 0;
    u32 r0_8 = 0;
    u32 res_4 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x20;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r2);
    *gptr<u32>(ea_1 + 0xc) = u32(r4);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x1c) = u32(r14);  // (from the original)
    r13 = ea_1;
    r5 = r0;
    r4 = 0u;
    r7 = 0xffffu;  // (from the original)
    r6 = r5 + 0x196e0u;  // (from the original)
    if (u32(arg0->half_196f0) == r7) {
        goto L_10cb42;
    }
    r1_1 = r5 + 0x196f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_1 = call_003089d4(r5, r1_1, 5u, r3);
    r0_2 = uxtb(r0_1 + 8u);
    guest::cpu()->r[13] = r13;
    r0_3 = call_00308a68(r0_2, 0x50u, 8u, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        goto L_10cb4a;
    }
    r4 = 1u;
L_10cb42:;
    *gptr<u16>(r6 + 0x10u) = u16(r7);  // (from the original)
    if (r4 == 0) {
        goto L_10cb5c;
    }
    goto L_10cbb8;
L_10cb4a:;
    r1_2 = *gptr<u16>(r6 + 0x10u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_4 = call_00308d04(r5, r1_2, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        guest::preempt();
        goto L_10cb42;
    }
    guest::cpu()->r[13] = r13;
    call_00308d4c(r0_4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_10cb42;
L_10cb5c:;
    r1_3 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_5 = call_0010ef44(r5, r1_3, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_6 = call_001100ec(r5, r1_4, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1 = 0x19760u;  // (from the original)
    r7_1 = r5 + r1;
    if (r0_5 >> 0x1f != (r0_5 & (r0_5 ^ r0_5)) >> 0x1f) {  // (from the original)
        if (r0_6 >> 0x1f != (r0_6 & (r0_6 ^ r0_6)) >> 0x1f) {  // (from the original)
            goto L_10cb82;
        }
    }
    res_1 = u32(s32(s8(*gptr<u8>(r7_1 + 2u)))) + 1u;
    if (res_1 == 0) {
        goto L_10cbbe;
    }
    goto L_10cbb6;
L_10cb82:;
    res_2 = r0_5 + 2u;
    if (res_2 == 0) {
        goto L_10cbb8;
    }
    r1_5 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_7 = call_0010fa08(r5, r1_5, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    if (r0_7 >> 0x1f == (r0_7 & (r0_7 ^ r0_7)) >> 0x1f) {  // (from the original)
        res_3 = u32(s32(s8(*gptr<u8>(r7_1 + 2u)))) + 1u;
        if (res_3 == 0) {
            goto L_10cbbe;
        }
        goto L_10cbb6;
    }
    if (*gptr<u32>(r13 + 8u) == 0) {
        goto L_10cbb8;
    }
    r1_6 = *gptr<u32>(r13 + 4u);
    guest::cpu()->r[13] = r13;
    r0_8 = call_0010fc1c(r5, r1_6, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    if (r0_8 >= 0xau) {  // (from the original)
        goto L_10cbb8;
    }
    res_4 = u32(s32(s8(*gptr<u8>(r7_1 + 2u)))) + 1u;
    if (res_4 == 0) {
        goto L_10cbbe;
    }
L_10cbb6:;
    r4 = 0u;
L_10cbb8:;
    r13 = r13 + 0xcu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r4;
L_10cbbe:;
    r4 = 1u;
    guest::preempt();
    goto L_10cbb8;
}

}  // namespace d_0010cb10
GUEST_EXPORT(0x0010cb11, d_0010cb10::f_0010cb10);

// f_0010cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010cbd4 {

struct __attribute__((packed)) Object_0010cbd4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0010cbd4_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00306c6c, u32(u32, u32, u32, u32)> call_00306c6c;  // (from the original)
inline constexpr guest::Function<0x00306c70, u32(u32, u32, u32, u32)> call_00306c70;  // (from the original)
inline constexpr guest::Function<0x00306c74, u32(u32, u32, u32, u32)> call_00306c74;  // (from the original)
inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)

u32 f_0010cbd4(u32 r0, gptr<Object_0010cbd4_1> arg1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r1 = arg1.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r3_4 = 0;
    u32 ea_2 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r3_6 = 0;
    u32 r1_4 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_7 = 0;
    u32 r0_10 = 0;
    u32 r2_6 = 0;
    u32 r3_8 = 0;
    u32 r2_7 = 0;
    u32 cf_1 = 0;
    u32 res_3 = 0;
    u32 r0_11 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea_1 = r13 - 0x14;  // (from the original)
    *gptr<u32>(ea_1) = u32(r4);
    *gptr<u32>(ea_1 + 4) = u32(r5);
    *gptr<u32>(ea_1 + 8) = u32(r6);
    *gptr<u32>(ea_1 + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x2cu;  // (from the original)
    r0_1 = arg1->word_8;
    r4 = r1;
    if (r0_1 == 0) {
        goto L_10cc8c;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_00308e80(r0_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0x26u) {  // (from the original)
        goto L_10cc8c;
    }
    res_1 = r0 + 0x17640u;  // (from the original)
    r6 = res_1;
    res_2 = u32(s32(s8(*gptr<u8>(r6 + 0x15u)))) + 1u;  // (from the original)
    r0_1 = res_2;
    if (res_2 != 0) {
        goto L_10cc8c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1, r2_1, r3_1);
    r3_2 = guest::cpu()->r[3];
    r2_2 = *gptr<u32>(r0_2 + 4u);
    r1_1 = *gptr<u32>(r0_2);
    r0_3 = *gptr<u32>(r0_2 + 8u);
    *gptr<u32>(r13 + 0x18u) = u32(r2_2);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r1_1);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0_3);  // (from the original)
    r0_4 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_4, r1_1, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_2 = r0 + 0x1764au;  // (from the original)
    r5 = r1_2;
    r0_5 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00306c6c(r0_5, r1_2, r2_3, r3_3);
    r3_4 = r13 + 8u;
    ea_2 = r13 + 0x20u;  // (from the original)
    r1_3 = *gptr<u32>(ea_2 + 4);
    r2_4 = *gptr<u32>(ea_2 + 8);
    *gptr<u32>(r3_4) = u32(*gptr<u32>(ea_2));
    *gptr<u32>(r3_4 + 4) = u32(r1_3);
    *gptr<u32>(r3_4 + 8) = u32(r2_4);
    r3_5 = r3_4 + 0xc;  // (from the original)
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_00308efc(r0_6, r1_3, r2_4, r3_5);
    r3_6 = guest::cpu()->r[3];
    r1_4 = r13 + 8u;
    r0_7 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fd4b4(r0_7, r1_4, 1u, r3_6);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 >> 0x1f != (r0_8 & (r0_8 ^ r0_8)) >> 0x1f) {  // (from the original)
        r1_5 = r13 + 0x14u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00306c70(r5, r1_5, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0_8 = 0u;
    }
    if (u32(*gptr<u8>(r6 + 0x13u)) == 2u) {  // (from the original)
        goto L_10cc90;
    }
    r0_9 = r0_8 - 2u;
    r1 = r0_9 << 2;
    r7 = r0_9 + r1;
    if (s32(r7) <= s32(0x32u)) {  // (from the original)
        goto L_10cc54;
    }
    r7 = 0x32u;  // (from the original)
L_10cc54:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002ff6f4(0x64u, r1, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (s32(r0_1) >= s32(r7)) {
        goto L_10cc8c;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_002fe418(r4, r1, r2_5, r3_7);
    r2_6 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00306c74(r5, r0_10, r2_6, r3_8);
    r1 = guest::cpu()->r[1];
    r0_1 = *gptr<u32>(r4);
    r2_7 = u32(s32(s8(*gptr<u8>(r6 + 0x15u))));  // (from the original)
    cf_1 = r0_1 >= r2_7;
    if (!cf_1 || r0_1 == r2_7) {
        goto L_10cc8c;
    }
    r1 = *gptr<u32>(r4 + 4u);
    sco = cf_1;
    res_3 = lsl_rc(1u, r2_7 & 0xff, &sco);  // (from the original)
    r0_1 = res_3;
    if ((r1 & r0_1) == 0) {
        goto L_10cc8c;
    }
    r1 = r1 & ~r0_1;
    r0_11 = *gptr<u32>(r4 + 8u);
    *gptr<u32>(r4 + 4u) = u32(r1);
    r0_1 = r0_11 - 1u;
    *gptr<u32>(r4 + 8u) = u32(r0_1);
L_10cc8c:;
    r13 = r13 + 0x2cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_10cc90:;
    r1 = 0x14u;  // (from the original)
    r7 = (r0_8 - 7u) * r1;
    guest::preempt();
    goto L_10cc54;
}

}  // namespace d_0010cbd4
GUEST_EXPORT(0x0010cbd5, d_0010cbd4::f_0010cbd4);

// f_0010d454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010d454 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x003002f0, u32(u32, u32, u32, u32)> call_003002f0;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32, u32)> call_00309ccc;  // (from the original)
inline constexpr guest::Function<0x0030a2b4, u32(u32, u32, u32, u32)> call_0030a2b4;  // (from the original)
inline constexpr guest::Function<0x0030a34c, u32(u32, u32, u32, u32)> call_0030a34c;  // (from the original)
inline constexpr guest::Function<0x0030a391, u32(u32, u32, u32, u32)> call_0030a390;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_0010d454(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r4_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 ea_1 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_4 = 0;
    u32 ea_2 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r0_9 = 0;
    u32 r1_7 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r0_12 = 0;
    u32 r2_11 = 0;
    u32 r1_9 = 0;
    u32 r0_13 = 0;
    u32 r1_10 = 0;
    u32 r0_14 = 0;
    u32 r1_11 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_12 = 0;
    r6 = r0;
    r13 = r13 - 0x40u;  // (from the original)
    r5 = r1;
    r4_1 = r6 + 0x172f4u;  // (from the original)
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        goto L_10d4d8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_00309864(r6, 0u, r2, r3);
    r1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    if (r0 >= 0xau) {  // (from the original)
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_2, r4_1, r2_2, r3_2);
    r1_1 = *gptr<u32>(r0_1 + 8u);
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_1 + 4u));
    *gptr<u32>(r13 + 4u) = u32(r1_1);
    ea_1 = r13 + 0x14u;  // (from the original)
    r0_3 = *gptr<u32>(ea_1);
    r1_2 = *gptr<u32>(ea_1 + 4);
    r2_3 = *gptr<u32>(ea_1 + 8);
    r3_3 = *gptr<u32>(r0_1);
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fb4a0(r0_3, r1_2, r2_3, r3_3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0) {
        goto L_10d4a0;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_0030a2b4(r4_1, r0_1, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_10d4a0:;
    r0_5 = r6 + 0x17396u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003002f0(r0_5, r1_3, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0_6 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030a34c(r0_6, r0_5, r2_5, r3_5);
    r1_4 = *gptr<u32>(r0_1 + 8u);
    *gptr<u32>(r13) = u32(*gptr<u32>(r0_1 + 4u));
    *gptr<u32>(r13 + 4u) = u32(r1_4);
    ea_2 = r13 + 0x10u;  // (from the original)
    r0_7 = *gptr<u32>(ea_2);
    r1_5 = *gptr<u32>(ea_2 + 4);
    r2_6 = *gptr<u32>(ea_2 + 8);
    r3_6 = *gptr<u32>(r0_1);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0_7, r1_5, r2_6, r3_6);
    r1 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    if (r0 == 0) {
        r13 = r13 + 0x40u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    guest::cpu()->r[13] = r13;
    r0_8 = call_0030a390(r6, r0_1, r2_7, r3_7);
    r1_6 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_6;
    guest::cpu()->r[13] = r13;
    return r0_8;
L_10d4d8:;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fdf10(4u, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10d51a;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fdf10(2u, r1_7, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10d51a;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fdf10(0xdu, r1_7, r2_8, r3_8);  // (from the original)
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10d51a;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fdf10(9u, r1_7, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10d51a;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fdf10(5u, r1_7, r2_8, r3_8);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 != 0) {
        goto L_10d51a;
    }
    guest::cpu()->r[13] = r13;
    r0_10 = call_00309864(r6, 0u, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0_9 = call_00309ccc(r0_10, r1_8, r2_9, r3_9);
    r1_7 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    if (r0_9 >> 0x1f != (r0_9 & (r0_9 ^ r0_9)) >> 0x1f) {  // (from the original)
        goto L_10d52a;
    }
L_10d51a:;
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb378(r0_9, r1_7, r2_8, r3_8);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_0030a2b4(r4_1, r0_11, r2_10, r3_10);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_10d52a:;
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb378(r0_9, r1_7, r2_8, r3_8);
    r2_11 = *gptr<u32>(r0_12 + 4u);
    r1_9 = *gptr<u32>(r0_12);
    r0_13 = *gptr<u32>(r0_12 + 8u);
    r4 = 0u;
    *gptr<u32>(r13) = u32(r4);
    *gptr<u32>(r13 + 0x28u) = u32(r0_13);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r1_9);  // (from the original)
    r1_10 = u32(0) - (r5 - 1u);
    *gptr<u32>(r13 + 0x24u) = u32(r2_11);  // (from the original)
    r0_14 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030a488(r0_14, r1_10, r4, r4);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
L_10d54c:;
        r1_11 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0030a390(r6, r1_11, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            r13 = r13 + 0x40u;  // (from the original)
            guest::cpu()->r[1] = r1;
            guest::cpu()->r[13] = r13;
            return r0;
        }
        r5 = r5 - 1u;
        r0_15 = r13 + 0x20u;  // (from the original)
        *gptr<u32>(r13) = u32(r4);
        guest::cpu()->r[13] = r13;
        r0_16 = call_0030a488(r0_15, 1u, 0u, 0u);
        r1_12 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r5 != 0);
    r13 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[1] = r1_12;
    guest::cpu()->r[13] = r13;
    return r0_16;
}

}  // namespace d_0010d454
GUEST_EXPORT(0x0010d455, d_0010d454::f_0010d454);

// f_0010d690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010d690 {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_0010d690(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r0_2 = 0;
    u32 res_1 = 0;
    u32 r3_2 = 0;
    u32 r5_1 = 0;
    u32 res_2 = 0;
    u32 r1_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r3_3 = 0;
    u32 r5_3 = 0;
    u32 r1_2 = 0;
    u32 r3_4 = 0;
    u32 r5_4 = 0;
    u32 res_3 = 0;
    u32 r4_1 = 0;
    u32 r5_5 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x24u;  // (from the original)
    r4 = r0;
    r7 = 0xffffu;  // (from the original)
    r0_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    if (r0_1 == r7) {
        goto L_10d73e;
    }
    r2 = r0_1;
    r0 = r4 + 0x17656u;  // (from the original)
    r1 = 0u;
    r5 = r0;
L_10d6a8:;
    r3_1 = *gptr<u16>(r0);
    if (r3_1 != r2) {
        goto L_10d742;
    }
    if (r1 >= 0x10u) {  // (from the original)
        goto L_10d6ee;
    }
    *gptr<u16>((r1 << 1) + r4 + 0x17656u) = u16(r7);  // (from the original)
    r6 = r5;
    r0_2 = r13;
    guest::cpu()->r[13] = r13;
    call_002f8574(r0_2, r5, 0x20u, r3_1);  // (from the original)
    r5 = r6 - 2u;
    r0 = 8u;
    do {
L_10d6cc:;
        *gptr<u16>(r5 + 2u) = u16(r7);
        r5 = r5 + 4u;
        res_1 = r0 - 1u;
        r0 = res_1;
        *gptr<u16>(r5) = u16(r7);
        guest::preempt();
    } while (res_1 != 0);
    r1 = 0u;
    r2 = 0x10u;  // (from the original)
    r0 = r13;
    do {
L_10d6dc:;
        r3_2 = *gptr<u16>(r0);
        if (!(r3_2 == r7)) {
            r5_1 = r1 << 1;
            r1 = r1 + 1u;
            *gptr<u16>(r6 + r5_1) = u16(r3_2);
        }
        r0 = r0 + 2u;
        res_2 = r2 - 1u;
        r2 = res_2;
        guest::preempt();
    } while (res_2 != 0);
L_10d6ee:;
    r0 = 0x17640u;  // (from the original)
    r1_1 = r4 + 0x1cu;  // (from the original)
    r5_2 = *gptr<u16>(r1_1 + r0 + 0x16u);  // (from the original)
    r6_1 = r1_1 + 2u + r0;
    r7 = 0xfu;  // (from the original)
    r1 = 1u;
    r2 = r1;
    *gptr<u16>(r6_1 + 0x16u) = u16(r5_2);  // (from the original)
    do {
L_10d704:;
        r3_3 = (0xeu - r1 << 1) + r4 + r0;  // (from the original)
        r5_3 = r7 - r1 << 1;
        r1_2 = r1 + 1u;
        *gptr<u16>(r5_3 + r4 + r0 + 0x16u) = u16(u32(*gptr<u16>(r3_3 + 0x16u)));  // (from the original)
        r3_4 = *gptr<u16>((0xeu - r1_2 << 1) + r4 + r0 + 0x16u);  // (from the original)
        r5_4 = (r7 - r1_2 << 1) + r4 + r0;
        r1 = r1_2 + 1u;
        r2 = r2 + 2u;
        res_3 = r2 - 0xfu;  // (from the original)
        *gptr<u16>(r5_4 + 0x16u) = u16(r3_4);  // (from the original)
        guest::preempt();
    } while (res_3 >> 0x1f != ((r2 ^ 0xfu) & (r2 ^ res_3)) >> 0x1f);  // (from the original)
    r1 = r4 + r0;
    r0_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    *gptr<u16>(r1 + 0x16u) = u16(r0_1);  // (from the original)
L_10d73e:;
    r13 = r13 + 0x2cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_5 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_5;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_1;
L_10d742:;
    r0 = r0 + 2u;
    r1 = r1 + 1u;
    if (s32(r1) < s32(0x10u)) {  // (from the original)
        guest::preempt();
        goto L_10d6a8;
    }
    guest::preempt();
    goto L_10d6ee;
}

}  // namespace d_0010d690
GUEST_EXPORT(0x0010d691, d_0010d690::f_0010d690);

// f_0010d984: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010d984 {

inline constexpr guest::Function<0x0010d455, u32(u32, u32, u32, u32)> call_0010d454;  // (from the original)
inline constexpr guest::Function<0x00112e34, u32(u32, u32, u32, u32)> call_00112e34;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x00307104, u32(u32, u32, u32, u32)> call_00307104;  // (from the original)
inline constexpr guest::Function<0x00307108, u32(u32, u32, u32, u32)> call_00307108;  // (from the original)
inline constexpr guest::Function<0x0030715c, u32(u32, u32, u32, u32)> call_0030715c;  // (from the original)
inline constexpr guest::Function<0x00307160, u32(u32, u32, u32, u32)> call_00307160;  // (from the original)
inline constexpr guest::Function<0x00307164, u32(u32, u32, u32, u32)> call_00307164;  // (from the original)
inline constexpr guest::Function<0x00307168, u32(u32, u32, u32, u32)> call_00307168;  // (from the original)
inline constexpr guest::Function<0x0030aac8, u32(u32, u32, u32, u32)> call_0030aac8;  // (from the original)
inline constexpr guest::Function<0x0030ac68, u32(u32, u32, u32, u32)> call_0030ac68;  // (from the original)

u32 f_0010d984(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_1 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r4_1 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_2 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r3_6 = 0;
    u32 r0_11 = 0;
    u32 r3_7 = 0;
    u32 r0_12 = 0;
    u32 r3_8 = 0;
    u32 r0_13 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r6 = r1;
    guest::cpu()->r[13] = r13;
    call_0010d454(r0, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r0_1 = r0 + 0x173c6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030aac8(r0_1, r6, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r0_2 = r0 + 0x173a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030aac8(r0_2, r6, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_3 = r0 + 0x173ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00307104(r0_3, r6, r2_3, r3_3);
    r1_1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_4 = r0 + 0x1764au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00307108(r0_4, r1_1, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x55a6u;  // (from the original)
    r5 = 0u;
L_10d9b8:;
    r0_5 = uxtb(r5);
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fb96c(r0_5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4_1 = r0_6;
    if (r0_6 == 0) {
        goto L_10da10;
    }
    r0_7 = r4_1 + r7;
    guest::cpu()->r[13] = r13;
    r0_6 = call_002fbd54(r0_7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_6 == 0) {
        goto L_10da10;
    }
    r0_8 = r4_1 + 0x8d4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030715c(r0_8, r6, r2, r3);
    r1_2 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r6 != 0) {
        r0_9 = r4_1 + 0x8d6cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_00307160(r0_9, r1_2, r2_5, r3_5);
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
    }
    r0_10 = r4_1 + 0x8d5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00307164(r0_10, r6, r2_5, r3_5);
    r3_6 = guest::cpu()->r[3];
    r0_11 = r4_1 + 0x8d84u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030ac68(r0_11, r4_1, r6, r3_6);
    r3_7 = guest::cpu()->r[3];
    r0_12 = r4_1 + 0x8dfau;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00112e34(r0_12, r6, r5, r3_7);
    r3_8 = guest::cpu()->r[3];
    r0_13 = r4_1 + 0x8e08u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00307168(r0_13, r6, r4_1, r3_8);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10da10:;
    r5 = r5 + 1u;
    if (s32(r5) < s32(4u)) {
        guest::preempt();
        goto L_10d9b8;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_6;
}

}  // namespace d_0010d984
GUEST_EXPORT(0x0010d985, d_0010d984::f_0010d984);

// f_0010db50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010db50 {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

u32 f_0010db50(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = 0u;
    r6 = r1;
    r7 = r0;
    r1 = 5u << 7;
    r0 = r6 * r1;
    *gptr<u32>(r13) = u32(r0);
L_10db62:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_10db96;
    }
    r1 = 0x2518u;  // (from the original)
    r0 = r4 * r1;
    res_1 = r0 + r7;
    r5 = res_1;
    if (res_1 == 0) {
        goto L_10db8e;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r5, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10db8e;
    }
L_10db7a:;
    if (r5 == 0) {
        goto L_10db8e;
    }
    if (r6 >= 4u) {
        goto L_10db8e;
    }
    r1_1 = *gptr<u32>(r13) + r5;
    r0_1 = r1_1 + 0x1810u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff408(r0_1, r1_1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_10db8e:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10db62;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_10db96:;
    r5 = 0u;
    guest::preempt();
    goto L_10db7a;
}

}  // namespace d_0010db50
GUEST_EXPORT(0x0010db51, d_0010db50::f_0010db50);

// f_0010dea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010dea4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32, u32, u32)> call_002ff8f0;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030b250, u32(u32, u32, u32, u32)> call_0030b250;  // (from the original)

u32 f_0010dea4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0 + 0x173ecu;  // (from the original)
    r5_1 = r4 + 0x46u;  // (from the original)
    r0_1 = call_00309ef0(r5_1, 0x173ecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_2 = call_002fae84(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    r0_4 = call_002ff8f0(r0_3, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_10dece;
    }
    if (u32(*gptr<u8>(r5_1 + 9u)) == 4u) {
        goto L_10ded6;
    }
L_10dece:;
    r0_1 = call_0030b250(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
L_10ded6:;
    r0_5 = r4 + 0x52u;  // (from the original)
    r0_6 = call_002fcaf4(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_6 != 0) {
        guest::preempt();
        goto L_10dece;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_0010dea4
GUEST_EXPORT(0x0010dea5, d_0010dea4::f_0010dea4);

// f_0010df1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010df1c {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_0010df1c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 sco = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 cf = guest::cpu()->cf;
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r3);
    r13 = ea_1;
    r4 = r0;
    r6 = r1;
    sco = cf;
    res_1 = lsl_rc(1u, r6 & 0xff, &sco);  // (from the original)
    r1 = 0xfu & ~res_1;  // (from the original)
    r7 = 0x2518u;  // (from the original)
    r5 = 0u;
    r2 = ~0x78u;  // (from the original)
    *gptr<u32>(r13) = u32(r1 << 3 | r2);
L_10df38:;
    guest::cpu()->r[13] = r13;
    r0_1 = call_00301e20(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_10df54;
    }
    if (r6 >= 4u) {
        goto L_10df54;
    }
    r2 = *gptr<u32>(r13);
    r0_1 = r4 + (0x25u << 8);  // (from the original)
    r1 = *gptr<u32>(r0_1 + 0x10u) & r2;  // (from the original)
    *gptr<u32>(r0_1 + 0x10u) = u32(r1);  // (from the original)
L_10df54:;
    r5 = r5 + 1u;
    r4 = r4 + r7;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10df38;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_0010df1c
GUEST_EXPORT(0x0010df1d, d_0010df1c::f_0010df1c);

// f_0010df64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010df64 {

inline constexpr guest::Function<0x001b625c, u32(u32, u32, u32, u32)> call_001b625c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

u32 f_0010df64(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r4_1 = 0;
    u32 res_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r4_2 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x1c;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r1);
    *gptr<u32>(ea_1 + 8) = u32(r4);
    *gptr<u32>(ea_1 + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x18) = u32(r14);  // (from the original)
    r13 = ea_1 - 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0x2518u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13) = u32(r0_1);
L_10df74:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e20(r5, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_2 == 0) {
        goto L_10dfce;
    }
    r4_1 = r5 + (0x25u << 8);  // (from the original)
    r0_2 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    res_1 = r0_2 << 0x1e >> 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 == 0) {
        goto L_10dfce;
    }
    r0_2 = r0_2 & ~(3u << 9);
    *gptr<u32>(r4_1 + 0x10u) = u32(r0_2);  // (from the original)
    if ((r0_2 & 1u) == 0u) {
        if (u32(*gptr<u8>(*gptr<u32>(r13) + 4u)) == 0xcu) {  // (from the original)
            r1 = *gptr<u8>(*gptr<u32>(r13) + 5u);
            if (r1 == 0x18u) {  // (from the original)
                goto L_10dfce;
            }
        }
        r0_3 = r0_2 | 1u;
        *gptr<u32>(r4_1 + 0x10u) = u32(r0_3);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_4 = call_002fae84(r0_3, 1u, r2, guest::cpu()->r[3]);
        r0_5 = r0_4 + 0x7170cu;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_001b625c(r0_5, r6, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0_2 = *gptr<u32>(r13 + 8u);
        if (s32(r0_2) <= s32(1u)) {
            goto L_10dfce;
        }
        r0_2 = *gptr<u32>(r4_1 + 0x10u);  // (from the original)
    }
    r1 = 2u;
    r0_2 = r0_2 >> 1 << 1 & ~r1;
    *gptr<u32>(r4_1 + 0x10u) = u32(r0_2);  // (from the original)
L_10dfce:;
    r6 = r6 + 1u;
    r5 = r5 + r7;
    if (s32(r6) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10df74;
    }
    r13 = r13 + 0xcu;  // (from the original)
    r4_2 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0010df64
GUEST_EXPORT(0x0010df65, d_0010df64::f_0010df64);

// f_0010dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010dfe4 {

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x001ad5c8, u32(u32, u32, u32, u32)> call_001ad5c8;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32, u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x003074b8, u32(u32, u32, u32, u32)> call_003074b8;  // (from the original)
inline constexpr guest::Function<0x0030755c, u32(u32, u32, u32, u32)> call_0030755c;  // (from the original)
inline constexpr guest::Function<0x00307560, u32(u32, u32, u32, u32)> call_00307560;  // (from the original)
inline constexpr guest::Function<0x00307564, u32(u32, u32, u32, u32)> call_00307564;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x0030988c, u32(u32, u32, u32, u32)> call_0030988c;  // (from the original)
inline constexpr guest::Function<0x003098b0, u32(u32, u32, u32, u32)> call_003098b0;  // (from the original)
inline constexpr guest::Function<0x003099d0, u32(u32, u32, u32, u32)> call_003099d0;  // (from the original)
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32, u32)> call_00309ccc;  // (from the original)
inline constexpr guest::Function<0x0030b36c, u32(u32, u32, u32, u32)> call_0030b36c;  // (from the original)
inline constexpr guest::Function<0x0030b414, u32(u32, u32, u32, u32)> call_0030b414;  // (from the original)

u32 f_0010dfe4(u32 r0, u32 r1) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_4 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_6 = 0;
    u32 r7_1 = 0;
    u32 r0_12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r0_13 = 0;
    u32 r1_7 = 0;
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r7_2 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r0_19 = 0;
    u32 cf_1 = 0;
    u32 res_4 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    u32 res_5 = 0;
    u32 r0_22 = 0;
    u32 cf_2 = 0;
    u32 res_6 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r1_8 = 0;
    r5 = r0;
    r13 = r13 - 0x50u;  // (from the original)
    r0_1 = r5 + 0x173c6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030b36c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_2 = r5 + 0x173a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030b36c(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r0_3 = ~0u;
    guest::cpu()->r[13] = r13;
    call_002fe4d0(r0_3, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_0030b414(0u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_4 = *global_0095386c;
    *gptr<u32>(r13 + 0x14u) = u32(r0_4);  // (from the original)
    if (r0_4 != 0) {
        r0_5 = r0_4 + 0x98u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_003074b8(r0_5, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    *gptr<u32>(r13 + 4u) = u32(0xau);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13 + 8u) = u32(0u);
    *gptr<u32>(r13 + 0x34u) = u32(0u);  // (from the original)
    r0_6 = r5 + 0x173ecu;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = u32(r0_6);  // (from the original)
    if (u32(*gptr<u8>(r0_6 + 0x4fu)) < 4u) {  // (from the original)
        *gptr<u32>(r13 + 0x34u) = u32(1u);  // (from the original)
    }
    r0_7 = ~0u;
    *gptr<u32>(r13 + 0x10u) = u32(r0_7);  // (from the original)
    *gptr<u32>(r13 + 0x20u) = u32(r0_7);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_8 = call_003098b0(r0_1, 0x173ecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1_4 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r1_4 = r5 + 0x173e0u;  // (from the original)
        *gptr<u32>(r13 + 0x10u) = u32(u32(s32(s8(*gptr<u8>(r1_4 + 7u)))));  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_003098b0(r0_2, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        r1_5 = r5 + 0x173c0u;  // (from the original)
        *gptr<u32>(r13 + 0x20u) = u32(u32(s32(s8(*gptr<u8>(r1_5 + 1u)))));  // (from the original)
    }
    r0_10 = ~0u;
    *gptr<u32>(r13 + 0x18u) = u32(r0_10);  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = u32(r0_10);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_003091e0(r0_10, r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    r0 = call_003091ec(r0_11, r1_6, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 == 0) {
        goto L_10e0b8;
    }
    r7_1 = r4 + 0x8dfau;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_12 = call_0030988c(r7_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_12 != 0) {
        *gptr<u32>(r13 + 0x18u) = u32(u32(s32(s8(*gptr<u8>(r7_1 + 0xcu)))));  // (from the original)
    }
    r0 = *gptr<u8>(r4 + 0x8f88u);  // (from the original)
    res_1 = r0 >> 6 << 0x1f;  // (from the original)
    r1 = res_1;
    if (res_1 != 0) {
        res_2 = r0 >> 7;
        r1 = res_2;
        if (res_2 == 0) {
            goto L_10e0aa;
        }
    }
    r4 = 0u;
    goto L_10e0b8;
L_10e0aa:;
    r4 = 0u;
    *gptr<u32>(r13 + 0x1cu) = u32(r0 << 0x1a >> 0x1c);  // (from the original)
L_10e0b2:;
    r0 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    if (r4 == r0) {
        goto L_10e172;
    }
L_10e0b8:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_10e0fc;
    }
    r1 = 0x2518u;  // (from the original)
    r0 = r4 * r1;
    res_3 = r0 + r5;
    r7 = res_3;
    if (res_3 == 0) {
        goto L_10e172;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_10e172;
    }
L_10e0d0:;
    if (r7 == 0) {
        goto L_10e172;
    }
    guest::cpu()->r[13] = r13;
    r0_13 = call_002fe450(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    if (r0_13 != 0) {
        guest::cpu()->r[13] = r13;
        r0_14 = call_003099d0(r0_13, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        if (r0_14 >> 0x1f == (r0_14 & (r0_14 ^ r0_14)) >> 0x1f) {  // (from the original)
            goto L_10e0f0;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_15 = call_00309ccc(r4, r1_7, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_15 >> 0x1f != (r0_15 & (r0_15 ^ r0_15)) >> 0x1f) {  // (from the original)
        goto L_10e100;
    }
L_10e0f0:;
    r0 = 2u;
    r1 = r7 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1 + 0xfu) = u8(r0);  // (from the original)
    goto L_10e172;
L_10e0fc:;
    r7 = 0u;
    guest::preempt();
    goto L_10e0d0;
L_10e100:;
    r7_2 = r7 + (0x25u << 8);  // (from the original)
    if (u32(*gptr<u8>(r7_2 + 0xeu)) != 0) {  // (from the original)
        goto L_10e160;
    }
    r0_16 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    if (r0_16 != 0) {
        r0_17 = r0_16 + 0x98u;  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030755c(r0_17, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u8>(r7_2 + 0xfu) = u8(0u);  // (from the original)
    r0 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r6 = r6 + 1u;
    if (r4 == r0) {
        goto L_10e172;
    }
    r0 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    if (r4 == r0) {
        goto L_10e172;
    }
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    if (r4 == r0) {
        goto L_10e172;
    }
    if (*gptr<u32>(r13 + 0x34u) != 0) {  // (from the original)
        r0_18 = *gptr<u32>(r13 + 0x24u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00307560(r0_18, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0 != 3u) {
            goto L_10e172;
        }
    }
    r0_19 = *gptr<u32>(r13 + 4u);
    cf_1 = r0_19 >= r4;
    if (!cf_1 || r0_19 == r4) {
        goto L_10e160;
    }
    r1 = *gptr<u32>(r13 + 8u);
    sco = cf_1;
    res_4 = lsl_rc(1u, r4 & 0xff, &sco);  // (from the original)
    if ((r1 & res_4) != 0) {
        goto L_10e160;
    }
    r1 = *gptr<u32>(r13 + 8u) | res_4;
    r0_20 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0xcu) = u32(r0_20 + 1u);  // (from the original)
L_10e160:;
    r0 = *gptr<u8>(r7_2 + 0xfu);  // (from the original)
    if (r0 == 3u) {
        goto L_10e16e;
    }
    if (r0 == 5u) {
        goto L_10e16e;
    }
    if (r0 != 6u) {
        goto L_10e172;
    }
L_10e16e:;
    r0 = 2u;
    *gptr<u8>(r7_2 + 0xfu) = u8(r0);  // (from the original)
L_10e172:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10e0b2;
    }
    if (s32(r6) <= s32(3u)) {
        goto L_10e1de;
    }
    *gptr<u32>(r13) = u32(*gptr<u32>(r13 + 0x14u) + 0x98u);  // (from the original)
L_10e182:;
    r0_21 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0_21, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r4 = r0;
    if (r0 >= 0xau) {  // (from the original)
        goto L_10e1e6;
    }
    r1 = 0x2518u;  // (from the original)
    r0 = r0 * r1;
    res_5 = r0 + r5;
    r7 = res_5;
    if (res_5 == 0) {
        goto L_10e1da;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fe470(r7, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_10e1da;
    }
L_10e1a0:;
    if (r7 == 0) {
        goto L_10e1da;
    }
    r1 = r7 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1 + 0xfu) = u8(2u);  // (from the original)
    r0_22 = *gptr<u32>(r13 + 4u);
    cf_2 = r0_22 >= r4;
    if (!cf_2 || r0_22 == r4) {
        goto L_10e1ca;
    }
    r1 = *gptr<u32>(r13 + 8u);
    sco = cf_2;
    res_6 = lsl_rc(1u, r4 & 0xff, &sco);  // (from the original)
    if ((r1 & res_6) == 0) {
        goto L_10e1ca;
    }
    r1 = *gptr<u32>(r13 + 8u) & ~res_6;
    r0_23 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r1);
    *gptr<u32>(r13 + 0xcu) = u32(r0_23 - 1u);  // (from the original)
L_10e1ca:;
    r0 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r6 = r6 - 1u;
    if (r0 == 0) {
        goto L_10e1da;
    }
    r0_24 = *gptr<u32>(r13);
    guest::cpu()->r[13] = r13;
    r0 = call_00307564(r0_24, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_10e1da:;
    if (s32(r6) > s32(3u)) {
        guest::preempt();
        goto L_10e182;
    }
L_10e1de:;
    guest::cpu()->r[13] = r13;
    r0_25 = call_001ad5c8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x50u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_25;
L_10e1e6:;
    r7 = 0u;
    guest::preempt();
    goto L_10e1a0;
}

}  // namespace d_0010dfe4
GUEST_EXPORT(0x0010dfe5, d_0010dfe4::f_0010dfe4);

// f_0010e210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e210 {

inline constexpr guest::Function<0x0030b544, u32(u32, u32, u32, u32)> call_0030b544;  // (from the original)

u32 f_0010e210(u32 r0) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    guest::cpu()->r[13] -= 8u;
    r0_1 = r0 + 0x173c6u;  // (from the original)
    call_0030b544(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_2 = r0 + 0x173a0u;  // (from the original)
    r0_3 = call_0030b544(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::cpu()->r[13] += 8u;
    return r0_3;
}

}  // namespace d_0010e210
GUEST_EXPORT(0x0010e211, d_0010e210::f_0010e210);

// f_0010e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e230 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x003075c8, u32(u32, u32, u32, u32)> call_003075c8;  // (from the original)
inline constexpr guest::Function<0x0030b5a5, u32(u32, u32, u32, u32)> call_0030b5a4;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x0030b674, u32(u32, u32, u32, u32)> call_0030b674;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32, u32, u32, u32)> call_0030b6b8;  // (from the original)

u32 f_0010e230(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r0_9 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_4 = 0;
    u32 r0_12 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r1_6 = 0;
    u32 r0_15 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r1_8 = 0;
    u32 r0_18 = 0;
    u32 cf_1 = 0;
    u32 res_2 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    r13 = r13 - 0x318u;  // (from the original)
    r6 = r0;
    *gptr<u32>(r13 + 8u) = u32(0xau);  // (from the original)
    r4 = 0u;
    *gptr<u32>(r13 + 0xcu) = u32(0u);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(0u);  // (from the original)
L_10e244:;
    if (r4 >= 0xau) {  // (from the original)
        goto L_10e2e0;
    }
    r1 = 0x2518u;  // (from the original)
    res_1 = r4 * r1 + r6;
    r7 = res_1;
    if (res_1 == 0) {
        goto L_10e290;
    }
    guest::cpu()->r[13] = r13;
    r0_1 = call_002fe470(r7, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        goto L_10e290;
    }
L_10e25c:;
    if (r7 == 0) {
        goto L_10e290;
    }
    r5 = 0u;
    do {
L_10e262:;
        r0_2 = r13;
        guest::cpu()->r[13] = r13;
        call_0030b5a4(r0_2, r7, r5, r3);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        r0_3 = r13;
        guest::cpu()->r[13] = r13;
        r0_4 = call_0030b654(r0_3, r1_1, r2_1, r3_1);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        if (!(r0_4 == 0)) {
            r0_5 = r13;
            guest::cpu()->r[13] = r13;
            r0_6 = call_0030b674(r0_5, r1_2, r2_2, r3_2);
            r1_2 = guest::cpu()->r[1];
            r2_2 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            if (r0_6 == 1u) {
                goto L_10e2e4;
            }
            if (r0_6 == 2u) {
                goto L_10e2e4;
            }
        }
        r0_7 = r13;
        guest::cpu()->r[13] = r13;
        call_002f777c(r0_7, r1_2, r2_2, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
L_10e290:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10e244;
    }
    r0_8 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fe418(r0_8, r1, r2, r3);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r6 + 0x19760u;  // (from the original)
    *gptr<u8>(r1_3 + 7u) = u8(r0_9);
    r0_10 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fc288(r0_10, r1_3, r2_3, r3_3);
    *gptr<u32>(r13) = u32(1u);
    *gptr<u32>(r13 + 4u) = u32(1u);
    r0_11 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003075c8(r0_11, 5u, 0u, 1u);
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_4 = r13 + 0x18u;  // (from the original)
    r0_12 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fea2c(r0_12, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_13 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_14 = call_0030b6b8(r0_13, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r1_6 = r6 + 0x196e0u;  // (from the original)
    *gptr<u16>(r1_6 + 0x1au) = u16(r0_14);  // (from the original)
    r0_15 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_15, r1_6, r2_6, r3_6);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_16 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_17 = call_002fc8fc(r0_16, r1_7, r2_7, r3_7);
    r1_8 = guest::cpu()->r[1];
    r13 = r13 + 0x318u;  // (from the original)
    guest::cpu()->r[1] = r1_8;
    guest::cpu()->r[13] = r13;
    return r0_17;
L_10e2e0:;
    r7 = 0u;
    guest::preempt();
    goto L_10e25c;
L_10e2e4:;
    r0_18 = *gptr<u32>(r13 + 8u);
    cf_1 = r0_18 >= r4;
    if (!cf_1 || r0_18 == r4) {
        goto L_10e300;
    }
    r1_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    sco = cf_1;
    res_2 = lsl_rc(1u, r4 & 0xff, &sco);  // (from the original)
    if ((r1_2 & res_2) != 0) {
        goto L_10e300;
    }
    r1_2 = *gptr<u32>(r13 + 0xcu) | res_2;  // (from the original)
    r0_19 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r1_2);  // (from the original)
    *gptr<u32>(r13 + 0x10u) = u32(r0_19 + 1u);  // (from the original)
L_10e300:;
    r0_20 = r13;
    guest::cpu()->r[13] = r13;
    call_002f777c(r0_20, r1_2, r2_2, r3_2);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_10e290;
}

}  // namespace d_0010e230
GUEST_EXPORT(0x0010e231, d_0010e230::f_0010e230);

// f_0010e360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e360 {


u32 f_0010e360(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3_1 = 0;
    r2 = 0x95c230u;  // (from the original)
    r1 = 0u;
    guest::cpu()->r[13] -= 4u;
    do {
L_10e366:;
        r3_1 = r1 << 1;
        if (u32(*gptr<u16>(r2 + r3_1)) == r0) {
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        if (!(u32(*gptr<u16>(r3_1 + r2 + 2u)) != r0)) {
            guest::cpu()->r[13] += 4u;
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        r1 = r1 + 2u;
        guest::preempt();
    } while (s32(r1) < s32(0xau));  // (from the original)
    guest::cpu()->r[13] += 4u;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0010e360
GUEST_EXPORT(0x0010e361, d_0010e360::f_0010e360);

// f_0010e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e7ac {

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline constexpr guest::Function<0x0029cc7c, u32(u32, u32, u32, u32)> call_0029cc7c;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32, u32)> call_00308354;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030b8bc, u32(u32, u32, u32, u32)> call_0030b8bc;  // (from the original)
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> call_0030c428;  // (from the original)
inline constexpr guest::Function<0x0030c4d0, u32(u32, u32, u32, u32)> call_0030c4d0;  // (from the original)
inline constexpr guest::Function<0x0030c4f4, u32(u32, u32, u32, u32)> call_0030c4f4;  // (from the original)
inline constexpr guest::Function<0x0030c578, u32(u32, u32, u32, u32)> call_0030c578;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32, u32, u32)> call_0030c598;  // (from the original)

u32 f_0010e7ac(u32 r0, u32 r1, u32 r2) {
    u32 sco = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r0_1 = 0;
    u32 r1_1 = 0;
    u32 r2_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r0_6 = 0;
    u32 r1_6 = 0;
    u32 r2_6 = 0;
    u32 r0_7 = 0;
    u32 r1_7 = 0;
    u32 r2_7 = 0;
    u32 r0_8 = 0;
    u32 r1_8 = 0;
    u32 r2_8 = 0;
    u32 r0_9 = 0;
    u32 r1_9 = 0;
    u32 r2_9 = 0;
    u32 r0_10 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r0_11 = 0;
    u32 r1_11 = 0;
    u32 r2_11 = 0;
    u32 r0_12 = 0;
    u32 r0_13 = 0;
    u32 r1_12 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 cf_1 = 0;
    u32 res_3 = 0;
    u32 r0_14 = 0;
    u32 r1_13 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 res_4 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 cf_2 = 0;
    u32 res_5 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r0_25 = 0;
    u32 r0_26 = 0;
    u32 r1_14 = 0;
    r4 = r0;
    r13 = r13 - 0x30u;  // (from the original)
    r0_1 = r4 + 0x172f4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c428(r0_1, r1, r2, guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r0_2 = r4 + 0x173a0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030b8bc(r0_2, r1_1, r2_1, guest::cpu()->r[3]);
    r1_2 = guest::cpu()->r[1];
    r2_2 = guest::cpu()->r[2];
    r0_3 = r4 + 0x173c6u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030b8bc(r0_3, r1_2, r2_2, guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r0_4 = r4 + 0x173ecu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c4d0(r0_4, r1_3, r2_3, guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r0_5 = r4 + 0x17448u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c4f4(r0_5, r1_4, r2_4, guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r0_6 = r4 + 0x1764au;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c578(r0_6, r1_5, r2_5, guest::cpu()->r[3]);
    r1_6 = guest::cpu()->r[1];
    r2_6 = guest::cpu()->r[2];
    r0_7 = r4 + 0x17676u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308354(r0_7, r1_6, r2_6, guest::cpu()->r[3]);
    r1_7 = guest::cpu()->r[1];
    r2_7 = guest::cpu()->r[2];
    r0_8 = r4 + 0x185f2u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00308354(r0_8, r1_7, r2_7, guest::cpu()->r[3]);
    r1_8 = guest::cpu()->r[1];
    r2_8 = guest::cpu()->r[2];
    r0_9 = r4 + 0x19570u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c598(r0_9, r1_8, r2_8, guest::cpu()->r[3]);
    r1_9 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r0_10 = r4 + 0x19630u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c598(r0_10, r1_9, r2_9, guest::cpu()->r[3]);
    r1_10 = ~0u;
    r2_10 = r4 + 0x19760u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(5u);  // (from the original)
    *gptr<u8>(r2_10 + 7u) = u8(r1_10);
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    r7 = r4;
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_11 = call_003091e0(0u, r1_10, r2_10, guest::cpu()->r[3]);
    r1_11 = guest::cpu()->r[1];
    r2_11 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    r0_12 = call_003091ec(r0_11, r1_11, r2_11, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = 0x55a6u;  // (from the original)
    r6 = 0x2518u;  // (from the original)
    r5 = 0u;
    *gptr<u32>(r13 + 0x10u) = u32(r0_12);  // (from the original)
    *gptr<u32>(r13 + 0x14u) = u32(r0_12 + r1);  // (from the original)
L_10e830:;
    guest::cpu()->r[13] = r13;
    r0_13 = call_00301e20(r7, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_13 == 0) {
        goto L_10e88c;
    }
    r1_12 = r7 + (0x25u << 8);  // (from the original)
    *gptr<u8>(r1_12 + 0xeu) = u8(1u);  // (from the original)
    r1 = *gptr<u32>(r1_12 + 0x10u);  // (from the original)
    res_1 = r1 << 0x1f >> 0x1f;  // (from the original)
    r2 = res_1;
    if (res_1 != 0) {
        goto L_10e86c;
    }
    res_2 = r1 << 0x1e >> 0x1f;  // (from the original)
    r1 = res_2;
    if (res_2 != 0) {
        goto L_10e86c;
    }
    r1 = *gptr<u32>(r13);
    cf_1 = r1 >= r5;
    if (!cf_1 || r1 == r5) {
        goto L_10e86c;
    }
    r1 = *gptr<u32>(r13 + 4u);
    sco = cf_1;
    res_3 = lsl_rc(1u, r5 & 0xff, &sco);  // (from the original)
    if ((r1 & res_3) != 0) {
        goto L_10e86c;
    }
    r1 = *gptr<u32>(r13 + 4u) | res_3;
    r0_14 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r0_14 + 1u);
L_10e86c:;
    if (*gptr<u32>(r13 + 0x10u) == 0) {  // (from the original)
        goto L_10e88c;
    }
    r1_13 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_15 = call_00309f84(r7, r1_13, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_15 == 0) {
        goto L_10e88c;
    }
    r0_16 = r0_15 + 0xb6u;  // (from the original)
    r2 = 0x8fu;  // (from the original)
    r1 = u32(*gptr<u8>(r0_16 + 4u)) & 0xf1u & r2;  // (from the original)
    *gptr<u8>(r0_16 + 4u) = u8(r1);
L_10e88c:;
    r5 = r5 + 1u;
    r7 = r7 + r6;
    if (s32(r5) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10e830;
    }
    goto L_10e8ea;
L_10e896:;
    r0_17 = r13;
    guest::cpu()->r[13] = r13;
    r0_18 = call_002fe418(r0_17, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = r0_18;
    if (r0_18 >= 0xau) {  // (from the original)
        goto L_10e920;
    }
    r1 = 0x2518u;  // (from the original)
    res_4 = r0_18 * r1 + r4;
    r7 = res_4;
    if (res_4 == 0) {
        goto L_10e8e4;
    }
    guest::cpu()->r[13] = r13;
    r0_19 = call_002fe470(r7, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_19 == 0) {
        goto L_10e8e4;
    }
L_10e8b4:;
    if (r7 == 0) {
        goto L_10e8e4;
    }
    r1 = 0u;
    *gptr<u8>(r7 + (0x25u << 8) + 0xeu) = u8(r1);  // (from the original)
    r0_20 = *gptr<u32>(r13);
    cf_2 = r0_20 >= r5;
    if (!cf_2 || r0_20 == r5) {
        goto L_10e8de;
    }
    r1 = *gptr<u32>(r13 + 4u);
    sco = cf_2;
    res_5 = lsl_rc(1u, r5 & 0xff, &sco);  // (from the original)
    if ((r1 & res_5) == 0) {
        goto L_10e8de;
    }
    r1 = *gptr<u32>(r13 + 4u) & ~res_5;
    r0_21 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 8u) = u32(r0_21 - 1u);
L_10e8de:;
    *gptr<u32>(r13 + 0xcu) = u32(*gptr<u32>(r13 + 0xcu) - 1u);  // (from the original)
L_10e8e4:;
    r0_22 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    if (r0_22 == 0 || r0_22 >> 0x1f != (r0_22 & (r0_22 ^ r0_22)) >> 0x1f) {  // (from the original)
        goto L_10e8f0;
    }
L_10e8ea:;
    if (*gptr<u32>(r13 + 8u) != 0) {
        guest::preempt();
        goto L_10e896;
    }
L_10e8f0:;
    r5 = 0u;
    r7 = 0x25u << 8;  // (from the original)
    do {
L_10e8f6:;
        guest::cpu()->r[13] = r13;
        r0_23 = call_00301e20(r4, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (!(r0_23 == 0)) {
            r0_24 = r4 + r7;
            r1 = *gptr<u8>(r0_24 + 0xeu);  // (from the original)
            if (!(r1 == 0)) {
                r1 = 2u;
            }
            *gptr<u8>(r0_24 + 0xfu) = u8(r1);  // (from the original)
        }
        r5 = r5 + 1u;
        r4 = r4 + r6;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    r0_25 = *global_00953864;
    guest::cpu()->r[13] = r13;
    r0_26 = call_0029cc7c(r0_25, r1, r2, guest::cpu()->r[3]);
    r1_14 = guest::cpu()->r[1];
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1_14;
    guest::cpu()->r[13] = r13;
    return r0_26;
L_10e920:;
    r7 = 0u;
    guest::preempt();
    goto L_10e8b4;
}

}  // namespace d_0010e7ac
GUEST_EXPORT(0x0010e7ad, d_0010e7ac::f_0010e7ac);

// f_0010e9a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e9a8 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x0030c824, u32(u32, u32, u32, u32)> call_0030c824;  // (from the original)
inline constexpr guest::Function<0x0030c868, u32(u32, u32, u32, u32)> call_0030c868;  // (from the original)

u32 f_0010e9a8(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 ea_1 = 0;
    u32 res_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    r13 = ea_1;
    r1 = 0u;
    r4 = 0x2518u;  // (from the original)
    r0 = *gptr<u32>(r13);
    r6 = 0x25u << 8;  // (from the original)
    r3 = 4u;
    do {
L_10e9b6:;
        r2 = r0 + r6;
        r0 = r0 + r4;
        r1 = r1 + 1u;
        res_1 = r1 - 0xau;  // (from the original)
        *gptr<u32>(r2 + 0x10u) = u32(*gptr<u32>(r2 + 0x10u) & ~r3);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r1 ^ 0xau) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
    r7 = 0x8beu;  // (from the original)
    r5 = *gptr<u32>(r13);
    r6 = 0u;
    do {
L_10e9cc:;
        r0_1 = r5 + r7;
        guest::cpu()->r[13] = r13;
        call_00303cdc(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 = r6 + 1u;
        r5 = r5 + r4;
        guest::preempt();
    } while (s32(r6) < s32(0xau));  // (from the original)
    r5 = *gptr<u32>(r13);
    r7 = 0u;
    r6 = r7;
L_10e9e0:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e20(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_10e9fe;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030c824(r5, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        goto L_10e9fe;
    }
    r0_3 = r0_2 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_2 = call_0030c868(r0_3, r5, r7, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_10e9fe:;
    r6 = r6 + 1u;
    r5 = r5 + r4;
    if (s32(r6) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_10e9e0;
    }
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_0010e9a8
GUEST_EXPORT(0x0010e9a9, d_0010e9a8::f_0010e9a8);

// f_0010eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010eeec {

struct __attribute__((packed)) Object_0010eeec_0 {
    u8 unknown_0[0x19762];  // (not used here)
    u8 byte_19762;
};
GUEST_OFFSET(Object_0010eeec_0, byte_19762, 0x19762);  // (from the original)

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> call_0030aa58;  // (from the original)

u32 f_0010eeec(gptr<Object_0010eeec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = 0;
    u32 r4_1 = 0;
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r2_2 = 0;
    u32 res_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    r1_1 = r0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4_1 = r1_1 + 0x19760u;  // (from the original)
    r0_1 = 0u;
    r2_1 = u32(s32(s8(arg0->byte_19762)));
    if (r2_1 < 0xau) {  // (from the original)
        r2_2 = r2_1 * 0x2518u;  // (from the original)
        res_1 = r2_2 + r1_1;
        if (res_1 == 0) {
            goto L_10ef2a;
        }
        r0_2 = call_002fe470(res_1, r1_1, r2_2, guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            goto L_10ef2a;
        }
        r0_1 = res_1;
    }
    if (r0_1 == 0) {
        goto L_10ef2a;
    }
    r1_1 = u32(s32(s8(*gptr<u8>(r4_1 + 1u))));
    if (r1_1 >> 0x1f == (r1_1 & (r1_1 ^ r1_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    r0_3 = call_0030aa58(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    if (r0_3 == 0) {
        goto L_10ef30;
    }
    r0_4 = 0xau;  // (from the original)
    goto L_10ef32;
L_10ef2a:;
    r0_1 = ~0u;
    goto L_10ef36;
L_10ef30:;
    r0_4 = 7u;
L_10ef32:;
    r1_1 = *gptr<u8>(r4_1);
    r0_1 = r0_4 - r1_1;
L_10ef36:;
    *gptr<u8>(r4_1 + 1u) = u8(r0_1);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0010eeec
GUEST_EXPORT(0x0010eeed, d_0010eeec::f_0010eeec);

// f_0010f044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f044 {


u32 f_0010f044() {
    return guest::call_address<u32>(0x10f04du, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010f044
GUEST_EXPORT(0x0010f044, d_0010f044::f_0010f044);

// f_0010f0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f0b0 {

inline constexpr guest::Function<0x002fe4d0, u32(u32, u32, u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32, u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x00307fcc, u32(u32, u32, u32, u32)> call_00307fcc;  // (from the original)
inline constexpr guest::Function<0x00307fd0, u32(u32, u32, u32, u32)> call_00307fd0;  // (from the original)
inline constexpr guest::Function<0x00307fd4, u32(u32, u32, u32, u32)> call_00307fd4;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32, u32, u32)> call_0030c598;  // (from the original)
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32, u32, u32)> call_0030ddb4;  // (from the original)

u32 f_0010f0b0(u32 r0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_0030ddb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_1 = guest::cpu()->r[1];
    r0_1 = ~0u;
    call_002fe4d0(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r1 == 0) {
        goto L_10f0fa;
    }
    r0_2 = call_00307fcc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_10f0e2;
    }
    r0_3 = r0 + 0x19760u;  // (from the original)
    r1_2 = u32(s32(s8(*gptr<u8>(r0_3 + 2u))));
    if (r1_2 >> 0x1f == (r1_2 & (r1_2 ^ r1_2)) >> 0x1f) {  // (from the original)
        goto L_10f0e2;
    }
    *gptr<u8>(r0_3) = u8(0u);
L_10f0e2:;
    call_00307fd0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r0_4 = r0 + 0x19570u;  // (from the original)
    call_0030c598(r0_4, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_5 = r0 + 0x19630u;  // (from the original)
    call_0030c598(r0_5, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
L_10f0fa:;
    r0_6 = r0 + 0x17448u;  // (from the original)
    call_00307fd4(r0_6, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_7 = call_00300634(1u, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_5 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1_5;
    return r0_7;
}

}  // namespace d_0010f0b0
GUEST_EXPORT(0x0010f0b1, d_0010f0b0::f_0010f0b0);

// f_0010f138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f138 {

struct __attribute__((packed)) Object_0010f138_0 {
    u8 unknown_0[0x19760];  // (not used here)
    u8 byte_19760;
};
GUEST_OFFSET(Object_0010f138_0, byte_19760, 0x19760);  // (from the original)


u32 f_0010f138(gptr<Object_0010f138_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r1_1 = 0;
    r0_1 = r0 + 0x19760u;  // (from the original)
    r2_1 = u32(s32(s8(arg0->byte_19760))) + r1;
    if (r2_1 > 0x7fu) {  // (from the original)
        r2_1 = 0x7fu;  // (from the original)
    }
    r3_1 = u32(s32(s8(*gptr<u8>(r0_1 + 1u))));
    *gptr<u8>(r0_1) = u8(r2_1);
    if (r3_1 == 0 || r3_1 >> 0x1f != (r3_1 & (r3_1 ^ r3_1)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    if (r3_1 > r1) {
        r1_1 = r3_1 - r1;
        *gptr<u8>(r0_1 + 1u) = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    *gptr<u8>(r0_1 + 1u) = u8(0u);
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_0010f138
GUEST_EXPORT(0x0010f139, d_0010f138::f_0010f138);

// f_0010f16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f16c {

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32, u32, u32)> call_002ff8f0;  // (from the original)
inline constexpr guest::Function<0x003081c8, u32(u32, u32, u32, u32)> call_003081c8;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030b250, u32(u32, u32, u32, u32)> call_0030b250;  // (from the original)
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32, u32, u32)> call_0030ddb4;  // (from the original)
inline constexpr guest::Function<0x0030e185, u32(u32, u32, u32, u32)> call_0030e184;  // (from the original)

u32 f_0010f16c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r1_1 = 0;
    u32 r1_2 = 0;
    u32 r1_3 = 0;
    u32 r5_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r0_6 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r1_1 = r0 + 0x173c6u;  // (from the original)
    call_0030e184(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_2 = r0 + 0x173a0u;  // (from the original)
    call_0030e184(r0, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = guest::cpu()->r[1];
    r4 = r0 + 0x173ecu;  // (from the original)
    r5_1 = r4 + 0x46u;  // (from the original)
    r0_1 = call_00309ef0(r5_1, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        goto L_10f1c0;
    }
    r0_2 = call_002fae84(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0_3 = r0_2 + 0x20u;  // (from the original)
    r0_4 = call_002ff8f0(r0_3, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_4 == 0) {
        goto L_10f1ac;
    }
    if (u32(*gptr<u8>(r5_1 + 9u)) == 4u) {
        goto L_10f1b4;
    }
L_10f1ac:;
    r0_1 = call_0030b250(r4, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    goto L_10f1c0;
L_10f1b4:;
    r0_5 = r4 + 0x52u;  // (from the original)
    r0_1 = call_002fcaf4(r0_5, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        guest::preempt();
        goto L_10f1ac;
    }
L_10f1c0:;
    call_0030ddb4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_4 = guest::cpu()->r[1];
    r0_6 = *global_00953864;
    call_003081c8(r0_6, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u8>(0x95c218u + 1u) = u8(0u);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = 0x95c218u;  // (from the original)
    return 0u;
}

}  // namespace d_0010f16c
GUEST_EXPORT(0x0010f16d, d_0010f16c::f_0010f16c);

// f_0010f3d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f3d0 {

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32, u32)> call_0030e430;  // (from the original)
inline constexpr guest::Function<0x0030e455, u32(u32, u32, u32, u32)> call_0030e454;  // (from the original)

u32 f_0010f3d0(u32 r0, u32 r1_unused, u32 r2) {
    u32 sco = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 ea_1 = 0;
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r0_3 = 0;
    u32 res_3 = 0;
    u32 r0_4 = 0;
    u32 cf_1 = 0;
    u32 res_4 = 0;
    u32 r1_2 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 res_5 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r0_9 = 0;
    u32 r1_4 = 0;
    u32 r0_10 = 0;
    u32 r1_5 = 0;
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_2 = 0;
    u32 tpc_1 = 0;
    ea_1 = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea_1) = u32(r0);
    *gptr<u32>(ea_1 + 4) = u32(r4);
    *gptr<u32>(ea_1 + 8) = u32(r5);
    *gptr<u32>(ea_1 + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea_1 + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea_1 + 0x14) = u32(r14);  // (from the original)
    r13 = ea_1 - 0x10u;  // (from the original)
    *gptr<u32>(r13) = u32(0xau);  // (from the original)
    r4 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(0u);
    *gptr<u32>(r13 + 8u) = u32(0u);
    guest::cpu()->r[13] = r13;
    r0_1 = call_00309864(r4, 0u, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    r6 = 0x25u << 8;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = u32(r0_1);  // (from the original)
L_10f3f0:;
    guest::cpu()->r[13] = r13;
    r0_2 = call_00301e20(r4, r1, r2, guest::cpu()->r[3]);
    if (r0_2 == 0) {
        goto L_10f43e;
    }
    r7_1 = r4 + r6;
    r1_1 = *gptr<u32>(r7_1 + 0x10u);  // (from the original)
    res_1 = r1_1 << 0x1e >> 0x1f;  // (from the original)
    if (res_1 != 0) {
        res_2 = r1_1 << 0x1f >> 0x1f;  // (from the original)
        r1_1 = res_2;
        if (res_2 == 0) {
            goto L_10f43e;
        }
    }
    guest::cpu()->r[13] = r13;
    r0_3 = call_0030e430(r4, r1_1, res_1, guest::cpu()->r[3]);
    if (r0_3 != 0) {
        goto L_10f43e;
    }
    if (*gptr<u32>(r13 + 0xcu) == r5) {  // (from the original)
        goto L_10f43e;
    }
    res_3 = *gptr<u32>(r7_1 + 0x10u) << 0x1f >> 0x1f;  // (from the original)
    if (res_3 != 0) {
        goto L_10f43e;
    }
    r0_4 = *gptr<u32>(r13);
    cf_1 = r0_4 >= r5;
    if (!cf_1 || r0_4 == r5) {
        goto L_10f43e;
    }
    sco = cf_1;
    res_4 = lsl_rc(1u, r5 & 0xff, &sco);  // (from the original)
    if ((*gptr<u32>(r13 + 4u) & res_4) != 0) {
        goto L_10f43e;
    }
    r1_2 = *gptr<u32>(r13 + 4u) | res_4;
    r0_5 = *gptr<u32>(r13 + 8u);
    *gptr<u32>(r13 + 4u) = u32(r1_2);
    *gptr<u32>(r13 + 8u) = u32(r0_5 + 1u);
L_10f43e:;
    r2 = 0x2518u;  // (from the original)
    r1 = r4 + r6;
    r0_6 = ~0u;
    r5 = r5 + 1u;
    r4 = r4 + r2;
    *gptr<u8>(r1 + 0x16u) = u8(r0_6);  // (from the original)
    res_5 = r5 - 0xau;  // (from the original)
    *gptr<u8>(r1 + 0x15u) = u8(r0_6);  // (from the original)
    if (res_5 >> 0x1f != ((r5 ^ 0xau) & (r5 ^ res_5)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_10f3f0;
    }
    r0_7 = *gptr<u32>(r13 + 8u);
    if (s32(r0_7) < s32(2u)) {
        goto L_10f482;
    }
    r0_8 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1_3 = r13;
    guest::cpu()->r[13] = r13;
    call_0030e454(r0_8, r1_3, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_7 = *gptr<u32>(r13 + 8u);
    if (s32(r0_7) < s32(2u)) {
        goto L_10f482;
    }
    r0_9 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1_4 = r13;
    guest::cpu()->r[13] = r13;
    call_0030e454(r0_9, r1_4, 1u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0_7 = *gptr<u32>(r13 + 8u);
    if (s32(r0_7) < s32(2u)) {
        goto L_10f482;
    }
    r0_10 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r1_5 = r13;
    guest::cpu()->r[13] = r13;
    r0_7 = call_0030e454(r0_10, r1_5, 0u, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_10f482:;
    r13 = r13 + 0x14u;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 = r13 + 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_7;
}

}  // namespace d_0010f3d0
GUEST_EXPORT(0x0010f3d1, d_0010f3d0::f_0010f3d0);
