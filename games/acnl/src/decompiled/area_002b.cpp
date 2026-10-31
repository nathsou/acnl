// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "search/search_cand_core.hpp"

#include <bit>

using guest::gptr;

// f_002b101c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b101c {

struct __attribute__((packed)) Object_002b101c_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x92dc];  // (not used here)
    u32 word_9308;
    u8 unknown_930c[0x394];  // (not used here)
    u32 word_96a0;
    u8 unknown_96a4[0xe0];  // (not used here)
    u32 word_9784;
};
GUEST_OFFSET(Object_002b101c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b101c_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002b101c_0, word_9308, 0x9308);  // (from the original)
GUEST_OFFSET(Object_002b101c_0, word_96a0, 0x96a0);  // (from the original)
GUEST_OFFSET(Object_002b101c_0, word_9784, 0x9784);  // (from the original)

inline constexpr guest::Function<0x0026fe3c, u32(u32, u32, u32, u32)> call_0026fe3c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b101c(gptr<Object_002b101c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f1598u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_28 = u32(r1 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r1);
    r4 = r0 + 0x96a0u;  // (from the original)
    r3 = 2u;
    arg0->word_9308 = u32(0x8ee228u);  // (from the original)
    r2 = 0x8ef284u;  // (from the original)
    r0 = r0 + 0x97b8u;  // (from the original)
    arg0->word_96a0 = u32(r2);
    arg0->word_9784 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f18f4u;  // (from the original)
    *gptr<u32>(r0 - 0x398u) = u32(r1);  // (from the original)
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x954u) = u32(r1);  // (from the original)
    r0 = r0 - 0x44u;  // (from the original)
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
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xd0u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    r0 = call_005d703c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x514u) = u32(r1);  // (from the original)
    r0 = r0 - 0xf8u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x848cu;  // (from the original)
    r0 = call_0026fe3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x60u;  // (from the original)
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002b101c
GUEST_EXPORT(0x002b101c, d_002b101c::f_002b101c);

// f_002b1c08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b1c08 {

struct __attribute__((packed)) Object_002b1c08_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002b1c08_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b1c08_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b1c08(gptr<Object_002b1c08_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f1618u;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r0 = r0 + 0x4060u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
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
    r1 = 0x8ef284u;  // (from the original)
    r4 = r0 + 0xfffff0fcu;  // (from the original)
    r2 = 0x518u;  // (from the original)
    *gptr<u32>(r4) = u32(0x8ee228u);  // (from the original)
    r4 = r4 + 0x398u;  // (from the original)
    *gptr<u32>(r4 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r4) = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r3 = 2u;
    r0 = r4 + 0x118u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x11cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x950u) = u32(r1);  // (from the original)
    r0 = r0 - 0x40u;  // (from the original)
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
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = 0x8f47ecu;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    r0 = r0 - 0x2200u;  // (from the original)
    r2 = r1 + 0x28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x21b0u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f4828u;  // (from the original)
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r2);  // (from the original)
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
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
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
    r13 = r13 + 8;
    r0 = r0 - 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002b1c08
GUEST_EXPORT(0x002b1c08, d_002b1c08::f_002b1c08);

// f_002b1ea0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b1ea0 {

inline constexpr guest::Function<0x00220274, u32(u32, u32, u32, u32)> call_00220274;  // (from the original)
inline constexpr guest::Function<0x00220338, u32(u32, u32, u32, u32)> call_00220338;  // (from the original)
inline constexpr guest::Function<0x002210c4, u32(u32, u32, u32, u32)> call_002210c4;  // (from the original)
inline constexpr guest::Function<0x0022468c, u32(u32, u32, u32, u32)> call_0022468c;  // (from the original)

u32 f_002b1ea0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r1 = 0xe798u;  // (from the original)
    r8 = r0 + 0xa7cu;  // (from the original)
    r7 = r0 + 0xbe68u;  // (from the original)
    r3 = *gptr<u32>(r1 + r0);
    r2 = r1 | u32(s32(r1) >> 0xb);  // (from the original)
    r1 = *gptr<u32>(r2 + r0);
    r5 = (r3 << 3) - r3;
    r6 = r5 + 7u;
    res = r6 - r1;
    if (!u32(res == 0) && res >> 0x1f == ((r6 ^ r1) & (r6 ^ res)) >> 0x1f) {  // (from the original)
        r6 = r1;
    }
    res = r5 - r6;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r5 ^ r6) & (r5 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r9 = 1u;
    }
    if (nf == vf) {
        goto L_2b1f58;
    }
L_2b1ee4:;
    r0 = r7 + (r5 << 3) + 0x1cd8u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 5u));
    if (r1 == 0) {
        goto L_2b1f90;
    }
    if (r1 == 0xau) {  // (from the original)
        goto L_2b1fc0;
    }
    r1 = u32(*gptr<u8>(r8 + (*gptr<u32>(r0) * 0xc5u << 2) + 0x2d84u));  // (from the original)
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00220274(r0, r1, r2, r3);
    r3 = r0;
    r2 = r5;
    r1 = r4;
    r0 = r7;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0022468c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b1f40:;
    r5 = r5 + 1u;
    res = r5 - r6;
    r4 = r4 + 1u;
    if (res >> 0x1f != ((r5 ^ r6) & (r5 ^ res)) >> 0x1f) {  // (from the original)
        guest::preempt();
        goto L_2b1ee4;
    }
    if (s32(r4) >= s32(7u)) {
        goto L_2b1f8c;
    }
L_2b1f58:;
    r5 = 0u;
    do {
L_2b1f5c:;
        r1 = 0xau;  // (from the original)
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_00220274(r0, r1, r2, r3);
        r3 = r0;
        r2 = 0x1bu;  // (from the original)
        r1 = r4;
        r0 = r7;
        *gptr<u32>(r13) = u32(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_0022468c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(7u));
L_2b1f8c:;
    r13 = r13 + 0x20;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2b1f90:;
    r1 = *gptr<u32>(r0);
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_00220338(r0, r1, r2, r3);
    r3 = r0;
    r2 = r5;
    r1 = r4;
    r0 = r7;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0022468c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b1f40;
L_2b1fc0:;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002210c4(r0, r1, r2, r3);
    r3 = r0;
    r2 = r5;
    r1 = r4;
    r0 = r7;
    *gptr<u32>(r13) = u32(r9);
    guest::cpu()->r[13] = r13;
    r0 = call_0022468c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b1f40;
}

}  // namespace d_002b1ea0
GUEST_EXPORT(0x002b1ea0, d_002b1ea0::f_002b1ea0);

// f_002b2924: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b2924 {

struct __attribute__((packed)) Object_002b2924_0 {
    u8 unknown_0[0xd5cc];  // (not used here)
    u32 word_d5cc;
    u8 unknown_d5d0[0x11cc];  // (not used here)
    u32 word_e79c;
};
GUEST_OFFSET(Object_002b2924_0, word_d5cc, 0xd5cc);  // (from the original)
GUEST_OFFSET(Object_002b2924_0, word_e79c, 0xe79c);  // (from the original)

inline constexpr guest::Function<0x00223e38, u32(u32, u32, u32, u32)> call_00223e38;  // (from the original)
inline constexpr guest::Function<0x00224204, u32(u32, u32, u32, u32)> call_00224204;  // (from the original)
inline constexpr guest::Function<0x002b1ea0, u32(u32, u32, u32, u32)> call_002b1ea0;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x006a923c, u32(u32, u32, u32, u32)> call_006a923c;  // (from the original)

u32 f_002b2924(gptr<Object_002b2924_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x20;  // (from the original)
    r4 = 0u;
    r8 = r0;
    r0 = 0u;
    r5 = r0;
    arg0->word_e79c = u32(r0);
    r9 = r8 + 0xbe68u;  // (from the original)
    r6 = r8 + 0xa7cu;  // (from the original)
    r0 = arg0->word_d5cc;
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
L_2b2968:;
    r7 = r6 + (r4 * 0xc5u << 2);  // (from the original)
    r0 = r7 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_006a923c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2b29b0;
    }
    if (s32(r5) >= s32(0x1cu)) {  // (from the original)
        goto L_2b29b0;
    }
    r3 = 0u;
    r2 = r4;
    *gptr<u32>(r13) = u32(u32(*gptr<u8>(r7 + 0x26cu)));  // (from the original)
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00224204(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r5 + 1u;
L_2b29b0:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xeu)) {  // (from the original)
        guest::preempt();
        goto L_2b2968;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002f74c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0xa4u) {  // (from the original)
        goto L_2b2a68;
    } else {
        r4 = 0u;
    }
L_2b29cc:;
    r7 = r6 + (r4 * 0xc5u << 2);  // (from the original)
    r0 = r7 + 0x2b1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a923c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2b2a20;
    }
    if (s32(r5) >= s32(0x1cu)) {  // (from the original)
        goto L_2b2a20;
    }
    r7 = r7 + 0x2d84u;  // (from the original)
    r3 = 2u;
    r2 = r4;
    r1 = r5;
    *gptr<u32>(r13) = u32(u32(*gptr<u8>(r7)));
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00224204(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r5 + 1u;
L_2b2a20:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_2b29cc;
    }
    r0 = r8 + 0xb6e0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006a923c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2b2a68;
    }
    if (s32(r5) >= s32(0x1cu)) {  // (from the original)
        goto L_2b2a68;
    }
    *gptr<u32>(r13) = u32(0xeu);  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0u;
    r1 = r5;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00224204(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b2a68:;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_00223e38(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r8;
    ea = r13;
    r13 = r13 + 0x20;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_002b1ea0(r0, r1, r2, r3);
}

}  // namespace d_002b2924
GUEST_EXPORT(0x002b2924, d_002b2924::f_002b2924);

// f_002b315c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b315c {

inline constexpr guest::Function<0x00220274, u32(u32, u32, u32, u32)> call_00220274;  // (from the original)
inline constexpr guest::Function<0x002204c0, u32(u32, u32, u32, u32)> call_002204c0;  // (from the original)
inline constexpr guest::Function<0x002210c4, u32(u32, u32, u32, u32)> call_002210c4;  // (from the original)
inline constexpr guest::Function<0x00221904, u32(u32, u32, u32, u32)> call_00221904;  // (from the original)
inline constexpr guest::Function<0x0031e570, u32(u32, u32, u32, u32)> call_0031e570;  // (from the original)
inline constexpr guest::Function<0x0031e594, u32(u32, u32, u32, u32)> call_0031e594;  // (from the original)

u32 f_002b315c(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r0 = r0 + 0xa7cu;  // (from the original)
    r13 = r13 - 0x28u;  // (from the original)
    r5 = r1;
    r6 = r2;
    r7 = r0;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00221904(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r8 = r0;
    if (r0 == 0) {
        goto L_2b3290;
    }
    zf = r6 == 0;
    *gptr<u8>(r4 + 0x586u) = u8(r6);  // (from the original)
    r6 = r4 + 0x58cu;  // (from the original)
    if (!zf) {
        S0 = std::bit_cast<float>(*gptr<u32>(0x2b32a0u));  // (from the original)
        res = r5 - 4u;
        r0 = *gptr<u32>(0xbe34u + r4);  // (from the original)
        *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
        *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
        if (res >> 0x1f != ((r5 ^ 4u) & (r5 ^ res)) >> 0x1f) {  // (from the original)
            r0 = r7 + (r0 * 0xc5u << 2);  // (from the original)
            r4 = *gptr<u32>(0x2e2cu + r0);  // (from the original)
            r1 = u32(*gptr<u8>(r0 + 0x2d84u));  // (from the original)
            r0 = r7;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_00220274(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            r1 = r0;
            r3 = r13;
            r2 = r4;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0031e594(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            goto L_2b3290;
        }
        if (r5 != 5u) {
            if (s32(r5) >= s32(6u)) {
                goto L_2b3290;
            }
            r0 = r7 + (r0 * 0xc5u << 2);  // (from the original)
            r4 = *gptr<u32>(0x4cf4u + r0);  // (from the original)
            r1 = u32(*gptr<u8>(r0 + 0x4c4cu));  // (from the original)
            r0 = r7;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_002204c0(r0, r1, r2, r3);
            S0 = guest::cpu()->s[0];
            r1 = r0;
            r3 = r13;
            r2 = r4;
            r0 = r6;
            guest::cpu()->r[13] = r13;
            guest::cpu()->s[0] = S0;
            r0 = call_0031e594(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
            goto L_2b3290;
        }
        r0 = r7;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002210c4(r0, r1, r2, r3);
        S0 = guest::cpu()->s[0];
        r4 = r4 + 0xb9f0u;  // (from the original)
        r1 = r0;
        r2 = *gptr<u32>(r4);
        r3 = r13;
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0031e594(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        goto L_2b3290;
    }
    if (s32(r5) < s32(6u)) {
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_0031e570(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
    }
L_2b3290:;
    r0 = r8;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002b315c
GUEST_EXPORT(0x002b315c, d_002b315c::f_002b315c);

// f_002b39d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b39d0 {

inline constexpr guest::Function<0x00220be0, u32(u32, u32, u32, u32)> call_00220be0;  // (from the original)
inline constexpr guest::Function<0x00223cec, u32(u32, u32, u32, u32)> call_00223cec;  // (from the original)
inline constexpr guest::Function<0x0031e570, u32(u32, u32, u32, u32)> call_0031e570;  // (from the original)

u32 f_002b39d0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = r0 + 0xa7cu;  // (from the original)
    r0 = call_00220be0(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    *gptr<u8>(r4 + 0x583u) = u8(0u);  // (from the original)
    r1 = *gptr<u32>(r4 + 0x574u);  // (from the original)
    r5 = r4 + 0x574u;  // (from the original)
    r6 = ~0u;
    if (r1 + 1u != 0) {
        r2 = 0u;
        r0 = r4 + 0xbe68u;  // (from the original)
        r0 = call_00223cec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        *gptr<u32>(r5) = u32(r6);
    }
    r0 = u32(*gptr<u8>(r4 + 0x586u));  // (from the original)
    if (r0 == 0) {
        r0 = u32(*gptr<u8>(r4 + 0xa78u));  // (from the original)
        if (r0 == 1u) {
            r0 = r4 + 0x58cu;  // (from the original)
            r0 = call_0031e570(r0, r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
    }
    *gptr<u32>(r4 + 0x57cu) = u32(r6);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002b39d0
GUEST_EXPORT(0x002b39d0, d_002b39d0::f_002b39d0);

// f_002b3a50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b3a50 {

struct __attribute__((packed)) Object_002b3a50_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u32 word_14;
    u8 unknown_18[0xbe50];  // (not used here)
    u32 word_be68;
};
GUEST_OFFSET(Object_002b3a50_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b3a50_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002b3a50_0, word_be68, 0xbe68);  // (from the original)

inline constexpr guest::Function<0x0022328c, u32(u32, u32, u32, u32)> call_0022328c;  // (from the original)
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00521ae0, u32(u32, u32, u32, u32)> call_00521ae0;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_002b3a50(gptr<Object_002b3a50_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f1698u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    arg0->word_14 = u32(r1 + 0x48u);  // (from the original)
    r4 = r0 + 0xbe68u;  // (from the original)
    arg0->word_be68 = u32(0x8edfb0u);  // (from the original)
    r1 = 0x2b6ef8u;  // (from the original)
    r3 = 7u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe16cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2220u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x2b6ef8u;  // (from the original)
    r4 = r0 - 0x2220u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 - 0x1c0u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x1f7cu;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe0u;  // (from the original)
    r0 = call_002b6ef8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xe4u;  // (from the original)
    r0 = call_002f7710(r0, r1, r2, r3);
    r1 = 0x6ab304u;  // (from the original)
    r4 = r0 - 0x1db8u;  // (from the original)
    r3 = 7u;
    r2 = 0xe4u;  // (from the original)
    r0 = r0 - 0x71cu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x60e704u;  // (from the original)
    r3 = 7u;
    r2 = 0x314u;  // (from the original)
    r0 = r4 + 0x110u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = 0x56988cu;  // (from the original)
    r3 = 6u;
    r2 = 0x28u;  // (from the original)
    r0 = r4 + 0xcu;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 - 0xb3ecu;  // (from the original)
    r0 = call_0022328c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
    r0 = call_005e3194(r0, r1, r2, r3);
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
    r0 = r0 - 0x15cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x24cu;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x70u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] += 8u;
    r0 = r0 - 0x38u;  // (from the original)
    return call_00521ae0(r0, r1, r2, r3);
}

}  // namespace d_002b3a50
GUEST_EXPORT(0x002b3a50, d_002b3a50::f_002b3a50);

// f_002b47a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b47a8 {

struct __attribute__((packed)) Object_002b47a8_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
};
GUEST_OFFSET(Object_002b47a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b47a8_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b47a8(gptr<Object_002b47a8_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r1 = 0x8f16f4u;  // (from the original)
    r13 = r13 - 8;
    r2 = r1 + 0x6cu;  // (from the original)
    arg0->word_0 = u32(r1);
    arg0->word_28 = u32(r2);
    r0 = r0 + 0x4060u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f47a0u;  // (from the original)
    *gptr<u32>(r0 - 0x4f0u) = u32(r1);  // (from the original)
    r0 = r0 - 0xd4u;  // (from the original)
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
    r1 = 0x8ef284u;  // (from the original)
    r4 = r0 + 0xfffff0fcu;  // (from the original)
    r2 = 0x518u;  // (from the original)
    *gptr<u32>(r4) = u32(0x8ee228u);  // (from the original)
    r4 = r4 + 0x398u;  // (from the original)
    *gptr<u32>(r4 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r4) = u32(r1);
    r1 = 0x2e0b3cu;  // (from the original)
    r3 = 2u;
    r0 = r4 + 0x118u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x8f08acu;  // (from the original)
    ea = r0 - 0x11cu;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea;
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f8b4cu;  // (from the original)
    *gptr<u32>(r0 - 0x950u) = u32(r1);  // (from the original)
    r0 = r0 - 0x40u;  // (from the original)
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
    r0 = r0 - 0x248u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xd0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = 0x8f47ecu;  // (from the original)
    r3 = 0x213cu;  // (from the original)
    r0 = r0 - 0x2200u;  // (from the original)
    r2 = r1 + 0x28u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r3 + r0) = u32(r2);
    r0 = r0 + 0x21b0u;  // (from the original)
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f4828u;  // (from the original)
    r0 = r0 - 0x2160u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r0 = r0 + 0x201cu;  // (from the original)
    *gptr<u32>(r0) = u32(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_002f7710(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x8ee248u;  // (from the original)
    r1 = r2 + 0x10u;  // (from the original)
    *gptr<u32>(r0 - 0x134u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 - 0x140u) = u32(r2);  // (from the original)
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
    r1 = 0x2e3854u;  // (from the original)
    r4 = r0 - 0x1efcu;  // (from the original)
    r3 = 0xau;  // (from the original)
    r2 = 0x2b4u;  // (from the original)
    r0 = r0 - 0x1b28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x3a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056988c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x150u;  // (from the original)
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
    r13 = r13 + 8;
    r0 = r0 - 0x5cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002b47a8
GUEST_EXPORT(0x002b47a8, d_002b47a8::f_002b47a8);

// f_002b4bc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b4bc4 {

inline constexpr guest::Function<0x002ccc70, u32(u32, u32, u32, u32)> call_002ccc70;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x00312a4c, u32(u32, u32, u32, u32)> call_00312a4c;  // (from the original)
inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312ca0, u32(u32, u32, u32, u32)> call_00312ca0;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005d6cc0, u32(u32, u32, u32, u32)> call_005d6cc0;  // (from the original)
inline constexpr guest::Function<0x005d6d28, u32(u32, u32, u32, u32)> call_005d6d28;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005e3238, u32(u32, u32, u32, u32)> call_005e3238;  // (from the original)
inline constexpr guest::Function<0x005ea520, u32(u32, u32, u32, u32)> call_005ea520;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)
inline constexpr guest::Function<0x0076ecd0, u32(u32, u32, u32, u32)> call_0076ecd0;  // (from the original)
inline constexpr guest::Function<0x0076ed5c, u32(u32, u32, u32, u32)> call_0076ed5c;  // (from the original)
inline constexpr guest::Function<0x0076edb4, u32(u32, u32, u32, u32)> call_0076edb4;  // (from the original)

u32 f_002b4bc4(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    u32 cf = 0;
    r4 = r0;
    r13 = r13 - 0x348u;  // (from the original)
    r5 = r1;
    r0 = r0 + 0x1894u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea520(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4 + 0x62cu;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x15eu;  // (from the original)
    r0 = r13 + 4u;
    r1 = r13 + 0x1cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x909f50u;  // (from the original)
    *gptr<u32>(r0) = u32(r7);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r0 - 0xcu;  // (from the original)
    r1 = 0x2bcu;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = 0x8906ecu;  // (from the original)
    r11 = 0u;
    r0 = r6 + 0x16u;  // (from the original)
    r1 = 0xafu;  // (from the original)
    do {
L_2b4c38:;
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
    r10 = 0x95c714u;  // (from the original)
    r6 = r4 + 0x54c8u;  // (from the original)
    r1 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_0076ed5c(r0, r1, r2, r3);
    r3 = r0;
    r2 = 0x2b4e38u;  // (from the original)
    r1 = r13 + 4u;
    r0 = *gptr<u32>(0x95debcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312a4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x72cu;  // (from the original)
    r1 = r13 + 4u;
    r8 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6cc0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_005d6d28(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_0076edb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r0;
    r9 = 0x95deccu;  // (from the original)
    *gptr<u32>(r13 + 0x31cu) = u32(r4 + 0x5498u);  // (from the original)
    if (r0 == 0) {
        goto L_2b4dec;
    }
    r0 = r13 + 0x2d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r8;
    r0 = r13 + 0x2d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3238(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r9) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 0x2d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312ca0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r11);
    r1 = *gptr<u32>(r13 + 0x31cu);  // (from the original)
    r0 = *gptr<u32>(r9);
    r3 = 0xbeu;  // (from the original)
    r2 = 0x2b4e54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 0x2d8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2b4d2c:;
    r1 = *gptr<u32>(r13 + 0x31cu);  // (from the original)
    r0 = r4 + 0x8f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x8f0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r6);
    r0 = *gptr<u32>(r10);
    guest::cpu()->r[13] = r13;
    r0 = call_0076ecd0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = r0;
    r0 = 0u;
    do {
L_2b4d58:;
        cf = r0 >= r3;
        r12 = r4 + (r0 << 2);
        if (!cf) {
            r2 = 1u;
        }
        r1 = *gptr<u32>(r12 + 0x61cu);  // (from the original)
        if (cf) {
            r2 = 0u;
        }
        zf = r2 == 0;
        r8 = u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu;  // (from the original)
        r2 = r2 | r8;
        *gptr<u8>(r1 + 0xb7u) = u8(r2);  // (from the original)
        if (!zf) {
            if (r5 == 0) {
                r2 = 0u;
            } else {
                r2 = 0xffu;  // (from the original)
            }
            *gptr<u8>(*gptr<u32>(r12 + 0x61cu) + 0xb4u) = u8(r2);  // (from the original)
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (r0 < 2u);
    r1 = 1u;
    if (*gptr<u32>(r6) + 1u == 0) {
        r2 = 1u;
    } else {
        r2 = 0u;
    }
    r0 = r4 + 0xd4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ccc70(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r4 + 0x502u) = u8(1u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r7);
    r0 = r13 + 4u;
    r13 = r13 + 0x348u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2b4dec:;
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r11);
    r1 = *gptr<u32>(r13 + 0x31cu);  // (from the original)
    r0 = *gptr<u32>(r9);
    r3 = 0xbfu;  // (from the original)
    r2 = 0x2b4e54u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r9);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::preempt();
    goto L_2b4d2c;
}

}  // namespace d_002b4bc4
GUEST_EXPORT(0x002b4bc4, d_002b4bc4::f_002b4bc4);

// f_002b5e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b5e64 {

struct __attribute__((packed)) Object_002b5e64_0 {
    u32 word_0;
    u8 unknown_4[0x24];  // (not used here)
    u32 word_28;
    u8 unknown_2c[0x1868];  // (not used here)
    u32 word_1894;
    u8 unknown_1898[0x3bc8];  // (not used here)
    u32 word_5460;
    u8 unknown_5464[0x34];  // (not used here)
    u32 word_5498;
};
GUEST_OFFSET(Object_002b5e64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b5e64_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002b5e64_0, word_1894, 0x1894);  // (from the original)
GUEST_OFFSET(Object_002b5e64_0, word_5460, 0x5460);  // (from the original)
GUEST_OFFSET(Object_002b5e64_0, word_5498, 0x5498);  // (from the original)

inline constexpr guest::Function<0x001aca90, u32(u32, u32, u32, u32)> call_001aca90;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006aaa30, u32(u32, u32, u32, u32)> call_006aaa30;  // (from the original)

u32 f_002b5e64(gptr<Object_002b5e64_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r2 = 0x8f1774u;  // (from the original)
    r13 = r13 - 8;
    arg0->word_28 = u32(r2 + 0x6cu);  // (from the original)
    arg0->word_0 = u32(r2);
    arg0->word_5498 = u32(0x909968u);  // (from the original)
    arg0->word_5460 = u32(0x909b28u);  // (from the original)
    r0 = r0 + 0x5460u;  // (from the original)
    r4 = r0 - 0x3bccu;  // (from the original)
    r3 = 0x40u;  // (from the original)
    arg0->word_1894 = u32(0x90350cu);  // (from the original)
    r1 = 0x81e5d8u;  // (from the original)
    r2 = 0xa4u;  // (from the original)
    r0 = r0 - 0x2900u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_001aca90(r0, r1, r2, r3);
    r3 = 2u;
    ea = r0 - 0xee0u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8ee228u);  // (from the original)
    r0 = ea;
    r1 = 0x8ef284u;  // (from the original)
    r4 = r0 + 0x398u;  // (from the original)
    *gptr<u32>(r0 + 0x47cu) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r0 + 0x398u) = u32(r1);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r0 = r0 + 0x4b0u;  // (from the original)
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
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0xc4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e3194(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x100u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005d703c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x38u;  // (from the original)
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
    r0 = r0 - 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005bf744(r0, r1, r2, r3);
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
    r13 = r13 + 8;
    r0 = r0 - 0x4cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_006aaa30(r0, r1, r2, r3);
}

}  // namespace d_002b5e64
GUEST_EXPORT(0x002b5e64, d_002b5e64::f_002b5e64);

// f_002b64f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b64f8 {

inline constexpr guest::Function<0x005b1a08, u32(u32, u32, u32, u32)> call_005b1a08;  // (from the original)
inline constexpr guest::Function<0x00755ac4, u32(u32, u32, u32, u32)> call_00755ac4;  // (from the original)
inline constexpr guest::Function<0x00755ad4, u32(u32, u32, u32, u32)> call_00755ad4;  // (from the original)

u32 f_002b64f8(u32 r0_unused, u32 r1) {
    u32 r0 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x18u;  // (from the original)
    r0 = 0x950814u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00755ac4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2b6570;
    }
    r1 = 0x950814u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_005b1a08(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r5 = r0;
    r6 = 0u;
    r4 = *gptr<u32>(0x9981f4u);  // (from the original)
    if (r4 == 0) {
        goto L_2b6560;
    }
    do {
L_2b6534:;
        r1 = r4 + 0xcu;  // (from the original)
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_00755ad4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (!(r0 == 0)) {
            r6 = r4 + 0x14u;  // (from the original)
            goto L_2b6560;
        }
        r4 = *gptr<u32>(r4 + 8u);
        guest::preempt();
    } while (r4 != 0);
L_2b6560:;
    r0 = r6;
L_2b6570:;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002b64f8
GUEST_EXPORT(0x002b64f8, d_002b64f8::f_002b64f8);

// f_002b6ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b6ef8 {

struct __attribute__((packed)) Object_002b6ef8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002b6ef8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00569774, u32(u32, u32, u32, u32)> call_00569774;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)

u32 f_002b6ef8(gptr<Object_002b6ef8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0u;
    arg0->word_0 = u32(0x8f183cu);  // (from the original)
    r0 = r4 + 0x20u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x48u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x70u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_00569774(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x98u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    r0 = call_0056988c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x20u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002b6ef8
GUEST_EXPORT(0x002b6ef8, d_002b6ef8::f_002b6ef8);

// f_002b6f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b6f64 {

struct __attribute__((packed)) Object_002b6f64_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_002b6f64_0, word_4, 0x4);  // (from the original)


u32 f_002b6f64(gptr<Object_002b6f64_0> arg0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 zf = 0;
    u32 vf = 0;
    res = r1;
    nf = res >> 0x1f;  // (from the original)
    zf = res == 0;
    vf = (r1 & (r1 ^ res)) >> 0x1f;  // (from the original)
    r13 = r13 - 8;
    if (nf == vf) {
        r3 = arg0->word_4;
    }
    res = 2u;
    r2 = res;
    if (nf == vf) {
        res = r3 - r1;
        nf = res >> 0x1f;  // (from the original)
        zf = res == 0;
        vf = ((r3 ^ r1) & (r3 ^ res)) >> 0x1f;  // (from the original)
    }
    if (zf || nf != vf) {
        goto L_2b701c;
    }
    r2 = r3 - 1u;
    r12 = r2 - r1;
    res = r12;
    arg0->word_4 = u32(r2);
    if (u32(res == 0) || res >> 0x1f != (r12 & (r12 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2b7008;
    }
    res = r2 - r1;
    r3 = 0u;
    if (u32(res == 0) || res >> 0x1f != ((r2 ^ r1) & (r2 ^ res)) >> 0x1f) {  // (from the original)
        r2 = 0u;
        goto L_2b6fbc;
    }
    r2 = r12 & 1u;
    if (r2 != 1u) {
        goto L_2b6fbc;
    }
    r12 = r1 + r0;
    r3 = 1u;
    *gptr<u8>(r12 + 8u) = u8(u32(*gptr<u8>(r12 + 9u)));
L_2b6fbc:;
    if (s32(*gptr<u32>(r0 + 4u) - r1) <= s32(r2)) {
        goto L_2b7008;
    }
    do {
L_2b6fcc:;
        r12 = r1 + r3 + r0;
        r3 = r3 + 1u;
        r2 = r2 + 2u;
        *gptr<u8>(r12 + 8u) = u8(u32(*gptr<u8>(r12 + 9u)));
        r12 = r1 + r3 + r0;
        r3 = r3 + 1u;
        *gptr<u8>(r12 + 8u) = u8(u32(*gptr<u8>(r12 + 9u)));
        r12 = *gptr<u32>(r0 + 4u) - r1;
        res = r12 - r2;
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r12 ^ r2) & (r12 ^ res)) >> 0x1f);  // (from the original)
L_2b7008:;
    ea = r0 + 4u;
    r1 = 0u;
    r2 = r1;
    *gptr<u8>(*gptr<u32>(ea) + (ea + 4u)) = u8(r1);
L_2b701c:;
    r13 = r13 + 8;
    r0 = r2;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002b6f64
GUEST_EXPORT(0x002b6f64, d_002b6f64::f_002b6f64);

// f_002b7598: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7598 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002b7598(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x270u;  // (from the original)
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002b7598
GUEST_EXPORT(0x002b7598, d_002b7598::f_002b7598);

// f_002b75bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b75bc {

inline constexpr guest::Function<0x00818b78, u32(u32, u32, u32, u32)> call_00818b78;  // (from the original)

u32 f_002b75bc() {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(0x87a114u);  // (from the original)
    r2 = *gptr<u32>(0x87a114u + 4);  // (from the original)
    call_00818b78(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return guest::cpu()->r[0];
}

}  // namespace d_002b75bc
GUEST_EXPORT(0x002b75bc, d_002b75bc::f_002b75bc);

// f_002b75d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b75d4 {

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x002cd0e0, u32(u32, u32, u32, u32)> call_002cd0e0;  // (from the original)

u32 f_002b75d4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00132364(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x40cu;  // (from the original)
    r0 = call_002cd0e0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_001323b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002b75d4
GUEST_EXPORT(0x002b75d4, d_002b75d4::f_002b75d4);

// f_002b7910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7910 {

inline constexpr guest::Function<0x00818b78, u32(u32, u32, u32, u32)> call_00818b78;  // (from the original)

u32 f_002b7910() {
    u32 r1 = 0;
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r1 = *gptr<u32>(0x87a11cu);  // (from the original)
    r2 = *gptr<u32>(0x87a11cu + 4);  // (from the original)
    call_00818b78(guest::cpu()->r[0], r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return guest::cpu()->r[0];
}

}  // namespace d_002b7910
GUEST_EXPORT(0x002b7910, d_002b7910::f_002b7910);

// f_002b7928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7928 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_002b7928(u32 r0) {
    u32 r1 = 0;
    r1 = 0x87a1ecu;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    return call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002b7928
GUEST_EXPORT(0x002b7928, d_002b7928::f_002b7928);

// f_002b7938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7938 {

struct __attribute__((packed)) Object_002b7938_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Object_002b7938_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002b7938_0, word_24, 0x24);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002cd444, u32(u32, u32, u32, u32)> call_002cd444;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002b7938(gptr<Object_002b7938_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    ea = 0x87a134u;  // (from the original)
    r2 = *gptr<u32>(ea + 4);
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(ea));
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f18d0u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    ea = r0 + 0x24u;  // (from the original)
    arg0->word_24 = u32(r4);
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
    r0 = r0 + 0x14cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r2 = 1u;
    r1 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002cd444(r0, r1, r2, r3);
    r1 = 0x8ef22cu;  // (from the original)
    r3 = 1u;
    *gptr<u32>(r0 + 0xe4u) = u32(r1 + 0x44u);  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0994u;  // (from the original)
    r0 = r0 + 0x118u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x524u;  // (from the original)
    *gptr<u32>(r0 + 0xa3cu) = u32(r4);  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002b7938
GUEST_EXPORT(0x002b7938, d_002b7938::f_002b7938);

// f_002b79e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b79e8 {

struct __attribute__((packed)) Object_002b79e8_0 {
    u32 word_0;
    u8 unknown_4[0x408];  // (not used here)
    u32 word_40c;
    u8 unknown_410[0xe0];  // (not used here)
    u32 word_4f0;
};
GUEST_OFFSET(Object_002b79e8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b79e8_0, word_40c, 0x40c);  // (from the original)
GUEST_OFFSET(Object_002b79e8_0, word_4f0, 0x4f0);  // (from the original)

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f770c, u32(u32, u32, u32, u32)> call_002f770c;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)

u32 f_002b79e8(gptr<Object_002b79e8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r2 = 0x8ef22cu;  // (from the original)
    arg0->word_0 = u32(0x8f18d0u);  // (from the original)
    arg0->word_40c = u32(r2);
    arg0->word_4f0 = u32(r2 + 0x44u);  // (from the original)
    r2 = 0x518u;  // (from the original)
    r1 = 0x2e0b3cu;  // (from the original)
    r4 = r0 + 0x40cu;  // (from the original)
    r3 = 1u;
    r0 = r0 + 0x524u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    r0 = call_002f770c(r0, r1, r2, r3);
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
    r0 = r0 - 0x14cu;  // (from the original)
    r0 = call_005bf744(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x248u;  // (from the original)
    r0 = call_00567ef0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x28u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002b79e8
GUEST_EXPORT(0x002b79e8, d_002b79e8::f_002b79e8);

// f_002b7cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7cb0 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002b7cb0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = r0 + 4u;
    r0 = call_00568c10(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 4u;
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002b7cb0
GUEST_EXPORT(0x002b7cb0, d_002b7cb0::f_002b7cb0);

// f_002b7cd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b7cd4 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_002b7cd4(u32 r0) {
    u32 r1 = 0;
    r1 = 0x2b7ce0u;  // (from the original)
    r0 = r0 + 0x150u;  // (from the original)
    return call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002b7cd4
GUEST_EXPORT(0x002b7cd4, d_002b7cd4::f_002b7cd4);

// f_002b8044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8044 {

struct __attribute__((packed)) Object_002b8044_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002b8044_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002b8044_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x002b7fa0, u32(u32, u32, u32, u32)> call_002b7fa0;  // (from the original)

u32 f_002b8044(gptr<Object_002b8044_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    r0 = *gptr<u32>(r13 + 8u);
    arg0->word_10 = u32(r0);
    arg0->word_c = u32(r3);
    arg0->word_0 = u32(r1);
    arg0->word_4 = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_002b7fa0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 8u) = u32(r0);
    r0 = r4;
    r13 = r13 + 8;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002b8044
GUEST_EXPORT(0x002b8044, d_002b8044::f_002b8044);

// f_002b8898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8898 {


u32 f_002b8898() {
    u32 r0 = 0;
    u32 r1 = 0;
    r1 = 0x953230u;  // (from the original)
    r0 = 0u;
    *gptr<u32>(r1) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002b8898
GUEST_EXPORT(0x002b8898, d_002b8898::f_002b8898);

// f_002b8e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b8e84 {

struct __attribute__((packed)) Object_002b8e84_0 {
    u8 unknown_0[0x298];  // (not used here)
    u32 word_298;
};
GUEST_OFFSET(Object_002b8e84_0, word_298, 0x298);  // (from the original)

inline constexpr guest::Function<0x00312bd0, u32(u32, u32, u32, u32)> call_00312bd0;  // (from the original)
inline constexpr guest::Function<0x00312c4c, u32(u32, u32, u32, u32)> call_00312c4c;  // (from the original)
inline constexpr guest::Function<0x00312cb0, u32(u32, u32, u32, u32)> call_00312cb0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_002b8e84(gptr<Object_002b8e84_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg0->word_298;
    r5 = r1;
    r13 = r13 - 0x58u;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | 1u;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312bd0(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(4u);
    r3 = 0xau;  // (from the original)
    r2 = 2u;
    r1 = r5;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312c4c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 4u;
    r0 = r4 + 0x2a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00312cb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002b8e84
GUEST_EXPORT(0x002b8e84, d_002b8e84::f_002b8e84);

// f_002b940c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b940c {

struct __attribute__((packed)) Object_002b940c_0 {
    u8 unknown_0[0xcc];  // (not used here)
    u32 word_cc;
    u32 word_d0;
    u8 unknown_d4[0x6];  // (not used here)
    u8 byte_da;
    u8 byte_db;
    u8 byte_dc;
};
GUEST_OFFSET(Object_002b940c_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_002b940c_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_002b940c_0, byte_da, 0xda);  // (from the original)
GUEST_OFFSET(Object_002b940c_0, byte_db, 0xdb);  // (from the original)
GUEST_OFFSET(Object_002b940c_0, byte_dc, 0xdc);  // (from the original)


void f_002b940c(gptr<Object_002b940c_0> arg0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 zf = 0;
    r3 = 0x10003f6u;  // (from the original)
    zf = r1 == 0;
    r2 = 1u;
    if (zf) {
        r1 = 0x1000403u;  // (from the original)
    }
    arg0->word_d0 = u32(r3);
    arg0->byte_db = u8(r2);
    if (!zf) {
        r1 = r3 | r2;
    }
    arg0->byte_dc = u8(r2);
    arg0->word_cc = u32(r1);
    arg0->byte_da = u8(r2);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002b940c
GUEST_EXPORT(0x002b940c, d_002b940c::f_002b940c);

// f_002b9aa4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002b9aa4 {

struct __attribute__((packed)) Object_002b9aa4_0 {
    u8 unknown_0[0x4cf];  // (not used here)
    u8 byte_4cf;
};
GUEST_OFFSET(Object_002b9aa4_0, byte_4cf, 0x4cf);  // (from the original)

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)

u32 f_002b9aa4(gptr<Object_002b9aa4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    arg0->byte_4cf = u8(r1);
    r4 = r0;
    r1 = 0x8794e4u;  // (from the original)
    r0 = r0 + 0x270u;  // (from the original)
    r0 = call_0056878c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = u32(*gptr<u8>(r4 + 0x4cfu)) | u32(*gptr<u8>(r1 + 0xb7u)) & 0xfeu;  // (from the original)
    *gptr<u8>(r1 + 0xb7u) = u8(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002b9aa4
GUEST_EXPORT(0x002b9aa4, d_002b9aa4::f_002b9aa4);

// f_002ba3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ba3cc {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002ba3cc(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    r0 = r0 + 0xdcu;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002ba3cc
GUEST_EXPORT(0x002ba3cc, d_002ba3cc::f_002ba3cc);

// f_002ba788: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ba788 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_002ba788(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x2ba7acu;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 1u;
        *gptr<u8>(r4 + 0x4e0u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ba788
GUEST_EXPORT(0x002ba788, d_002ba788::f_002ba788);

// f_002bab00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bab00 {

struct __attribute__((packed)) Object_002bab00_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x3];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x3];  // (not used here)
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Object_002bab00_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002bab00_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)

u32 f_002bab00(gptr<Object_002bab00_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x879434u + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x879434u));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f19ccu;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x248u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x194u;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00125aec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x480u;  // (from the original)
    *gptr<u32>(r0 + 0x4a8u) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x4acu) = u32(r4);  // (from the original)
    *gptr<u32>(r0 + 0x4b0u) = u32(r4);  // (from the original)
    r2 = r0 + 0x4bcu;  // (from the original)
    *gptr<u32>(r0 + 0x4b4u) = u32(r4);  // (from the original)
    r1 = ~0u;
    *gptr<u32>(r0 + 0x4b8u) = u32(r4);  // (from the original)
    *gptr<u32>(r2) = u32(r1);
    *gptr<u32>(r2 + 4) = u32(r4);
    *gptr<u32>(r0 + 0x4c8u) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x4c4u) = u32(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4ccu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4cdu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4ceu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4cfu) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4d0u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4e0u) = u8(r4);  // (from the original)
    r1 = 1u;
    *gptr<u8>(r0 + 0x4e1u) = u8(r4);  // (from the original)
    *gptr<u8>(r0 + 0x4e2u) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x4e3u) = u8(r1);  // (from the original)
    r1 = 0x4e6u;  // (from the original)
    *gptr<u8>(r0 + 0x4e4u) = u8(r4);  // (from the original)
    *gptr<u16>(r1 + r0) = u16(r4);
    r0 = r0 + 0x4e8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0033f0d8(r0, r1, r2, r3);
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 6u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x5d0u;  // (from the original)
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002bab00
GUEST_EXPORT(0x002bab00, d_002bab00::f_002bab00);

// f_002bc0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc0b4 {

inline constexpr guest::Function<0x0023bbe4, u32(u32, u32, u32, u32)> call_0023bbe4;  // (from the original)

u32 f_002bc0b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0023bbe4(r0, r1, r2, r3);
    r3 = 0x8f1b04u;  // (from the original)
    r1 = r3 + 0x128u;  // (from the original)
    *gptr<u32>(r0 + 0x7cu) = u32(r1);  // (from the original)
    *gptr<u32>(r0 + 0x104u) = u32(0u);  // (from the original)
    *gptr<u32>(r0) = u32(r3);
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002bc0b4
GUEST_EXPORT(0x002bc0b4, d_002bc0b4::f_002bc0b4);

// f_002bc8e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc8e8 {

inline constexpr guest::Function<0x00275a58, u32(u32, u32, u32, u32)> call_00275a58;  // (from the original)

u32 f_002bc8e8(gptr<SearchCandGrid> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    r3 = u32(arg0->width_14);
    r1 = r2 * r3 + r1;
    return call_00275a58(r0, r1, r2, r3);
}

}  // namespace d_002bc8e8
GUEST_EXPORT(0x002bc8e8, d_002bc8e8::f_002bc8e8);

// f_002bc928: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc928 {

struct __attribute__((packed)) Object_002bc928_0 {
    u32 word_0;
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Object_002bc928_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002bc928_0, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bc928_0, byte_5, 0x5);  // (from the original)


void f_002bc928(gptr<Object_002bc928_0> arg0) {
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_0 = u32(0x8f1d40u);  // (from the original)
    arg0->byte_4 = u8(r1);
    arg0->byte_5 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002bc928
GUEST_EXPORT(0x002bc928, d_002bc928::f_002bc928);

// f_002bc94c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bc94c {

struct __attribute__((packed)) Object_002bc94c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Object_002bc94c_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x001332d4, u32(u32, u32, u32, u32)> call_001332d4;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32, u32, u32, u32)> call_00138f30;  // (from the original)
inline constexpr guest::Function<0x00321a80, u32(u32, u32, u32, u32)> call_00321a80;  // (from the original)

u32 f_002bc94c(gptr<Object_002bc94c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r5 = r2;
    r9 = r1;
    if (r2 >= 6u) {
        goto L_2bc990;
    }
    r7 = r4 + (r5 << 2);
    if (*gptr<u32>(r7 + 0x14u) == 0) {  // (from the original)
        goto L_2bc990;
    }
    r2 = ~0u;
    r0 = *gptr<u32>(arg0->word_10 + 0x144u) + 0xcu;  // (from the original)
    r0 = call_001332d4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2bc998;
    }
L_2bc990:;
    r0 = ~0u;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2bc998:;
    r6 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    r8 = r6 + 4u;
    r0 = r8;
    r0 = call_00135748(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = r6 + 0x10u;  // (from the original)
    r0 = call_00138f30(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r6 = r0;
    r0 = r8;
    r0 = call_001357ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(r7 + 0x14u);  // (from the original)
    r0 = r4 + (r5 + (r5 << 1) << 3) + 0x2cu;  // (from the original)
    r2 = r9;
    r0 = call_00321a80(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r6;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002bc94c
GUEST_EXPORT(0x002bc94c, d_002bc94c::f_002bc94c);

// f_002bcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcd40 {

struct __attribute__((packed)) Object_002bcd40_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Object_002bcd40_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002bcd40_0, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x001b0544, u32(u32, u32, u32, u32)> call_001b0544;  // (from the original)
inline constexpr guest::Function<0x004bf4bc, u32(u32, u32, u32, u32)> call_004bf4bc;  // (from the original)

u32 f_002bcd40(gptr<Object_002bcd40_0> arg0, u32 r1, float S0, float S1, float S2, float S3) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 cf = 0;
    u32 fpsr = guest::cpu()->fpscr;
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_14;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = arg0->word_10;
    res = r0;
    if (u32(res == 0) || res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2bcd9c;
    }
    S1 = std::bit_cast<float>(arg0->word_4);
    S2 = std::bit_cast<float>(arg0->word_8);
    fpsr = fpsr & 0xfffffffu | vfp_cmpf(S2, S1);  // (from the original)
    cf = fpsr >> 0x1d & 1;  // (from the original)
    if (!cf) {
        cf = (fpsr & 0xfffffffu | vfp_cmpf(S1, S0)) >> 0x1d & 1;  // (from the original)
    }
    if (cf) {
        goto L_2bcd9c;
    }
    S2 = S0 - S2;
    S3 = (S0 - S1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1)))) / S2;
    S1 = std::bit_cast<float>(vcvt_sz_f(S3));
    r1 = std::bit_cast<u32>(S1);
L_2bcd9c:;
    r0 = r4;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    r0 = call_001b0544(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S1 = guest::cpu()->s[1];
    S2 = guest::cpu()->s[2];
    S3 = guest::cpu()->s[3];
    r0 = *gptr<u32>(r4 + 0x18u);  // (from the original)
    if (r0 != 0) {
        S1 = std::bit_cast<float>(*gptr<u32>(r0));
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 4u));
        r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
        guest::cpu()->r[13] += 8u;
        S0 = S0 * S1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        guest::cpu()->s[2] = S2;
        guest::cpu()->s[3] = S3;
        return call_004bf4bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    r0 = *gptr<u32>(r4 + 0x14u);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 4u));
    guest::cpu()->r[13] += 8u;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    guest::cpu()->s[2] = S2;
    guest::cpu()->s[3] = S3;
    return call_004bf4bc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002bcd40
GUEST_EXPORT(0x002bcd40, d_002bcd40::f_002bcd40);

// f_002bcde0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcde0 {

struct __attribute__((packed)) Object_002bcde0_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x4];  // (not used here)
    u8 byte_39;
};
GUEST_OFFSET(Object_002bcde0_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002bcde0_0, byte_39, 0x39);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)

u32 f_002bcde0(gptr<Object_002bcde0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    if (u32(arg0->byte_34) != 0) {
        return r0;
    }
    r3 = 0u;
    arg0->byte_39 = u8(r3);
    return call_0020a4cc(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_002bcde0
GUEST_EXPORT(0x002bcde0, d_002bcde0::f_002bcde0);

// f_002bcdfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcdfc {

struct __attribute__((packed)) Object_002bcdfc_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_002bcdfc_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x006b4aa8, u32(u32, u32, u32, u32)> call_006b4aa8;  // (from the original)
inline constexpr guest::Function<0x00820098, u32(u32, u32, u32, u32)> call_00820098;  // (from the original)

u32 f_002bcdfc(gptr<Object_002bcdfc_0> arg0, u32 r1, u32 r2, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r4 = r0;
    r13 = r13 - 0x28u;  // (from the original)
    r0 = u32(arg0->byte_34);
    r7 = r1;
    r5 = r2;
    if (r0 == 0) {
        goto L_2bce7c;
    }
    r8 = 0x94d080u;  // (from the original)
    r0 = *gptr<u32>(r8);
    r1 = u32(*gptr<u8>(r0 + 0xd11u));  // (from the original)
    if (r1 != 0) {
        zf = r1 == 1u;
        if (!zf) {
            zf = r1 == 2u;
        }
        if (zf) {
            goto L_2bce84;
        }
        if (r1 != 3u) {
            goto L_2bce7c;
        }
        r1 = *gptr<u32>(r0 + 0xd18u);  // (from the original)
        r6 = u32(s32(r1 + (r1 >> 0x1f)) >> 1);  // (from the original)
        if (s32(*gptr<u32>(r0 + 0xd14u)) < s32(r6)) {  // (from the original)
            goto L_2bcedc;
        }
        goto L_2bce90;
    }
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r0 = u32(*gptr<u8>(r4 + 0x5cu));  // (from the original)
    if (r0 != 0) {
        r0 = 0u;
        *gptr<u8>(r4 + 0x5cu) = u8(r0);  // (from the original)
    }
L_2bce7c:;
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_2bce84:;
    if (u32(*gptr<u8>(r4 + 0x5cu)) == 0) {  // (from the original)
        goto L_2bcea8;
    }
L_2bce90:;
    r2 = r4 + 0x60u;  // (from the original)
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_2bcea8:;
    *gptr<u32>(r4 + 0x60u) = u32(*gptr<u32>(r5));  // (from the original)
    *gptr<u32>(r4 + 0x64u) = u32(*gptr<u32>(r5 + 4u));  // (from the original)
    *gptr<u32>(r4 + 0x68u) = u32(*gptr<u32>(r5 + 8u));  // (from the original)
    *gptr<u8>(r4 + 0x5cu) = u8(1u);  // (from the original)
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
L_2bcedc:;
    S1 = std::bit_cast<float>(*gptr<u32>(r5));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x60u));  // (from the original)
    r2 = 0u;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13) = u32(std::bit_cast<u32>(S0));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 4u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x64u));  // (from the original)
    r2 = 0u;
    r1 = *gptr<u32>(*gptr<u32>(r8) + 0xd18u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    *gptr<u32>(r13 + 4u) = u32(std::bit_cast<u32>(S0));
    S1 = std::bit_cast<float>(*gptr<u32>(r5 + 8u));
    S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x68u));  // (from the original)
    r2 = 0u;
    r1 = *gptr<u32>(*gptr<u32>(r8) + 0xd18u);  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_006b4aa8(r0, r1, r2, guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    *gptr<u32>(r13 + 8u) = u32(std::bit_cast<u32>(S0));
    r2 = r13;
    r1 = r7;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    r0 = call_00820098(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = guest::cpu()->s[0];
    S1 = guest::cpu()->s[1];
    r13 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002bcdfc
GUEST_EXPORT(0x002bcdfc, d_002bcdfc::f_002bcdfc);

// f_002bcfd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bcfd8 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002bcfd8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 ea = 0;
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_0020af18(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r3 = 1u;
    r2 = 4u;
    *gptr<u32>(r0) = u32(0x8f8d88u);  // (from the original)
    r0 = r0 + 0x44u;  // (from the original)
    r1 = 0x131800u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = 0x1287a8u;  // (from the original)
    r0 = r0 + 4u;
    r3 = 1u;
    r2 = 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_00301d0c(r0, r1, r2, r3);
    S0 = std::bit_cast<float>(*gptr<u32>(0x2bd048u));  // (from the original)
    ea = r0 - 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f1d8cu);  // (from the original)
    r0 = ea;
    *gptr<u8>(r0 + 0x5cu) = u8(0u);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x64u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r0 + 0x68u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = 7u;
    *gptr<u32>(r0 + 4u) = u32(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002bcfd8
GUEST_EXPORT(0x002bcfd8, d_002bcfd8::f_002bcfd8);

// f_002be76c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002be76c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002be76c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0x14b0u;  // (from the original)
    r1 = 0x613e48u;  // (from the original)
    r3 = 0x20u;  // (from the original)
    r0 = r0 + 8u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002be76c
GUEST_EXPORT(0x002be76c, d_002be76c::f_002be76c);

// f_002bea00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bea00 {

struct __attribute__((packed)) Object_002bea00_0 {
    u8 unknown_0[0x17be08];  // (not used here)
    u32 word_17be08;
};
GUEST_OFFSET(Object_002bea00_0, word_17be08, 0x17be08);  // (from the original)

inline constexpr guest::Function<0x002bea50, u32(u32, u32, u32, u32)> call_002bea50;  // (from the original)
inline constexpr guest::Function<0x002d3fc0, u32(u32, u32, u32, u32)> call_002d3fc0;  // (from the original)

u32 f_002bea00(gptr<Object_002bea00_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xfffffff0u) = u32(r3);  // (from the original)
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r12 = r2;
    r2 = r3;
    r5 = r1;
    r1 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    r3 = arg0->word_17be08 + 1u;
    arg0->word_17be08 = u32(r3);
    *gptr<u32>(r13) = u32(r1);
    r1 = r12;
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_002d3fc0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r1 = r5;
    r0 = r4;
    ea = r13;
    r13 = r13 + 0x10;  // (from the original)
    r3 = *gptr<u32>(ea);
    guest::cpu()->r[13] = r13;
    return call_002bea50(r0, r1, r2, r3);
}

}  // namespace d_002bea00
GUEST_EXPORT(0x002bea00, d_002bea00::f_002bea00);

// f_002beb4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002beb4c {

struct __attribute__((packed)) Object_002beb4c_0 {
    u8 unknown_0[0x17be08];  // (not used here)
    u32 word_17be08;
};
GUEST_OFFSET(Object_002beb4c_0, word_17be08, 0x17be08);  // (from the original)

inline constexpr guest::Function<0x002bea50, u32(u32, u32, u32, u32)> call_002bea50;  // (from the original)
inline constexpr guest::Function<0x002d406c, u32(u32, u32, u32, u32)> call_002d406c;  // (from the original)

u32 f_002beb4c(gptr<Object_002beb4c_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r1 = r2;
    r2 = r3;
    r3 = arg0->word_17be08 + 1u;
    arg0->word_17be08 = u32(r3);
    r0 = r5;
    r0 = call_002d406c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002bea50(r0, r1, r2, r3);
}

}  // namespace d_002beb4c
GUEST_EXPORT(0x002beb4c, d_002beb4c::f_002beb4c);

// f_002beb90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002beb90 {

inline constexpr guest::Function<0x002be798, u32(u32, u32, u32, u32)> call_002be798;  // (from the original)
inline constexpr guest::Function<0x0071fd0c, u32(u32, u32, u32, u32)> call_0071fd0c;  // (from the original)

u32 f_002beb90(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    ea = r13 - 0x28;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r14);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r7 = 0u;
    r6 = r0;
    r10 = r1;
    r11 = r2;
    r8 = r7;
    r9 = r7;
    r4 = r7;
L_2bebb0:;
    r1 = r13;
    r0 = r6 + (r4 * 0xfbbu << 7) + 0x2588u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002be798(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_2bec00;
    }
    if (r7 != 0) {
        r1 = r7;
        guest::cpu()->r[13] = r13;
        r0 = call_0071fd0c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            goto L_2bec00;
        }
    }
    r9 = *gptr<u32>(r13);
    r7 = r5;
    r8 = r4;
L_2bec00:;
    r4 = r4 + 1u;
    if (r4 < 3u) {
        guest::preempt();
        goto L_2bebb0;
    }
    if (r10 != 0) {
        *gptr<u8>(r10) = u8(r8);
    }
    r0 = r7;
    if (r11 != 0) {
        *gptr<u32>(r11) = u32(r9);
    }
    ea = r13;
    r13 = r13 + 0x28;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    r8 = *gptr<u32>(ea + 0x14);  // (from the original)
    r9 = *gptr<u32>(ea + 0x18);  // (from the original)
    r10 = *gptr<u32>(ea + 0x1c);  // (from the original)
    r11 = *gptr<u32>(ea + 0x20);  // (from the original)
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

}  // namespace d_002beb90
GUEST_EXPORT(0x002beb90, d_002beb90::f_002beb90);

// f_002bef2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bef2c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_002bef2c(u32 r0) {
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r2 = 0x7dd80u;  // (from the original)
    r1 = 0x2be9d8u;  // (from the original)
    r3 = 3u;
    r0 = r0 + 0x2588u;  // (from the original)
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002bef2c
GUEST_EXPORT(0x002bef2c, d_002bef2c::f_002bef2c);

// f_002bf2c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf2c4 {

struct __attribute__((packed)) Object_002bf2c4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_002bf2c4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bf2c4_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> call_002fbb30;  // (from the original)

u32 f_002bf2c4(u32 r0, gptr<Object_002bf2c4_1> arg1, u32 r2) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r2 >= 4u) {
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
    r5 = r2;
    r4 = r1;
    r6 = r0;
    r2 = arg1->word_4;
    r3 = arg1->word_8;
    r12 = arg1->word_c;
    ea = r0 + (r5 << 4) + 8u;
    *gptr<u32>(ea) = u32(arg1->word_0);
    *gptr<u32>(ea + 4) = u32(r2);
    *gptr<u32>(ea + 8) = u32(r3);
    *gptr<u32>(ea + 0xc) = u32(r12);  // (from the original)
    r0 = (r5 << 6) - r5;
    r1 = r4 + 0x10u;  // (from the original)
    r2 = 0x9d8u;  // (from the original)
    r0 = r6 + (r0 + (r0 << 2) << 3) + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbb30(r0, r1, r2, r3);
    r1 = 0x28a4u;  // (from the original)
    ea = r4 + 0xa28u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r0 = r6 + (r5 << 2);
    ea = r1 + r0;
    *gptr<u32>(ea) = u32(r2);
    ea = r4 + 0xa2cu;  // (from the original)
    r2 = *gptr<u32>(ea);
    r1 = r1 | u32(s32(r1) >> 9);
    ea = r1 + r0;
    *gptr<u32>(ea) = u32(r2);
    ea = r4 + 0xa30u;  // (from the original)
    r2 = *gptr<u32>(ea);
    r1 = r1 + 0x10u;  // (from the original)
    ea = r1 + r0;
    *gptr<u32>(ea) = u32(r2);
    r2 = r1 | u32(s32(r1) >> 9);
    ea = r4 + 0xa34u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r2 + r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0xa38u;  // (from the original)
    *gptr<u32>(r0 + 0x28e4u) = u32(*gptr<u32>(ea));  // (from the original)
    ea = r4 + 0x9e8u;  // (from the original)
    r1 = *gptr<u32>(ea);
    r0 = r5 + (r5 << 3) + r6 + 0x2700u;  // (from the original)
    ea = r0 + 0xa8u;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0x9ecu;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0 + 0xacu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0x9f0u;  // (from the original)
    *gptr<u8>(r0 + 0xb0u) = u8(u32(*gptr<u8>(ea)));  // (from the original)
    r0 = r5 + (r5 << 3);
    ea = r4 + 0x9f2u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = r6 + (r0 + (r0 << 1) << 1);
    r1 = r0 + 0x2700u;  // (from the original)
    ea = r1 + 0xccu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0x9f6u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r0 = r0 + 0x27f0u;  // (from the original)
    ea = r1 + 0xd0u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0x9fau;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r1 + 0xd4u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0x9feu;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r1 + 0xd8u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r1 + 0xdcu;  // (from the original)
    *gptr<u16>(ea) = u16(u32(*gptr<u16>(r4 + 0xa02u)));  // (from the original)
    ea = r4 + 0xa04u;  // (from the original)
    r3 = *gptr<u32>(ea);
    r2 = r4 + 0xa00u;  // (from the original)
    ea = r1 + 0xdeu;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0xa08u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r1 + 0xe2u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0xa0cu;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r1 + 0xe6u;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r4 + 0xa10u;  // (from the original)
    r3 = *gptr<u32>(ea);
    ea = r1 + 0xeau;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    ea = r2 + 0x14u;  // (from the original)
    r3 = u32(*gptr<u16>(ea));
    ea = r1 + 0xeeu;  // (from the original)
    *gptr<u16>(ea) = u16(r3);
    ea = r4 + 0xa16u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0;
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0xa1au;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0 + 4u;
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 0xa1eu;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0 + 8u;
    *gptr<u32>(ea) = u32(r1);
    ea = r2 + 0x22u;  // (from the original)
    r1 = *gptr<u32>(ea);
    ea = r0 + 0xcu;  // (from the original)
    *gptr<u32>(ea) = u32(r1);
    ea = r2 + 0x26u;  // (from the original)
    r1 = u32(*gptr<u16>(ea));
    ea = r0 + 0x10u;  // (from the original)
    *gptr<u16>(ea) = u16(r1);
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

}  // namespace d_002bf2c4
GUEST_EXPORT(0x002bf2c4, d_002bf2c4::f_002bf2c4);

// f_002bf468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf468 {

struct __attribute__((packed)) Object_002bf468_0 {
    u8 unknown_0[0x4];  // (not used here)
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
};
GUEST_OFFSET(Object_002bf468_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_002bf468_0, word_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_002bf468(gptr<Object_002bf468_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0u;
    arg0->word_4 = u32(4u);
    arg0->word_8 = u32(r5);
    r0 = r4 + 0x48u;  // (from the original)
    arg0->word_c = u32(r5);
    arg0->word_10 = u32(r5);
    arg0->word_14 = u32(r5);
    arg0->word_18 = u32(r5);
    arg0->word_1c = u32(r5);
    arg0->word_20 = u32(r5);
    arg0->word_24 = u32(r5);
    arg0->word_28 = u32(r5);
    arg0->word_2c = u32(r5);
    arg0->word_30 = u32(r5);
    arg0->word_34 = u32(r5);
    arg0->word_38 = u32(r5);
    arg0->word_3c = u32(r5);
    arg0->word_40 = u32(r5);
    r1 = 0x2760u;  // (from the original)
    arg0->word_44 = u32(r5);
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r0 = r4 + 0x2400u;  // (from the original)
    r1 = 0xd8u;  // (from the original)
    *gptr<u32>(r0 + 0x3a8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3acu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3bcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c8u) = u32(r5);  // (from the original)
    r0 = r4 + 0x27ccu;  // (from the original)
    r0 = call_002f825c(r0, r1, r2, guest::cpu()->r[3]);
    r0 = r4 + 0x2800u;  // (from the original)
    r1 = 0x28f0u;  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xa8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xccu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xdcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xecu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xf0u) = u32(r5);  // (from the original)
    r2 = 0u;
    r0 = r4 + 4u;
    r0 = call_0047ea68(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002bf468
GUEST_EXPORT(0x002bf468, d_002bf468::f_002bf468);

// f_002bf574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002bf574 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0047ea68, u32(u32, u32, u32, u32)> call_0047ea68;  // (from the original)

u32 f_002bf574(u32 r0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r3 = 4u;
    r1 = 0x2bf040u;  // (from the original)
    r2 = 0x10u;  // (from the original)
    r0 = r0 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 8u;
    r5 = 0u;
    ea = r4 + 4u;
    *gptr<u32>(ea) = u32(4u);
    *gptr<u32>(ea + 4) = u32(r5);
    r0 = r4 + 0x48u;  // (from the original)
    *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x10u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x14u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x18u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x1cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x20u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x24u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x28u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x2cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x30u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x34u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x38u) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x3cu) = u32(r5);  // (from the original)
    *gptr<u32>(r4 + 0x40u) = u32(r5);  // (from the original)
    r1 = 0x2760u;  // (from the original)
    *gptr<u32>(r4 + 0x44u) = u32(r5);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2400u;  // (from the original)
    r1 = 0xd8u;  // (from the original)
    *gptr<u32>(r0 + 0x3a8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3acu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3b8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3bcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0x3c8u) = u32(r5);  // (from the original)
    r0 = r4 + 0x27ccu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2800u;  // (from the original)
    r1 = 0x28f0u;  // (from the original)
    *gptr<u32>(r0 + 0xa4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xa8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xacu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xb8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xbcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xc8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xccu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xd8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xdcu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe0u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe4u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xe8u) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xecu) = u32(r5);  // (from the original)
    *gptr<u32>(r0 + 0xf0u) = u32(r5);  // (from the original)
    r2 = 0u;
    r0 = r4 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0047ea68(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4) = u32(r0);
    r0 = r4;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002bf574
GUEST_EXPORT(0x002bf574, d_002bf574::f_002bf574);
