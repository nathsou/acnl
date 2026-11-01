// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_006b04f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b04f0 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_006b04f0(u32 r0) {
    u32 r0_2 = call_00567e24(r0 + 0x2cu, 0x6b0524u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_4 = call_00567e24(r0 + 0x274u, 0x6b0540u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    return r0_4;
}

}  // namespace d_006b04f0
GUEST_EXPORT_FRAMED(0x006b04f0, d_006b04f0::f_006b04f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b0824: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0824 {

struct __attribute__((packed)) Local_006b0824_r1_29 {
    u8 unknown_0[0x33c];  // (not used here)
    u32 word_33c;
    u32 word_340;
    u32 word_344;
    u32 word_348;
    u32 word_34c;
    u32 word_350;
    u32 word_354;
    u8 byte_358;
    u8 byte_359;
    u8 byte_35a;
    u8 byte_35b;
};
GUEST_OFFSET(Local_006b0824_r1_29, word_33c, 0x33c);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_344, 0x344);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_348, 0x348);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_34c, 0x34c);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_350, 0x350);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, word_354, 0x354);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, byte_358, 0x358);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, byte_359, 0x359);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, byte_35a, 0x35a);  // (from the original)
GUEST_OFFSET(Local_006b0824_r1_29, byte_35b, 0x35b);  // (from the original)

inline guest::global<u32, 0x00881828> global_00881828;  // (from the original)
inline guest::global<u32, 0x0088182c> global_0088182c;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x0022c7c8, u32(u32, u32, u32, u32)> call_0022c7c8;  // (from the original)
inline constexpr guest::Function<0x002b6de0, u32(u32, u32, u32, u32)> call_002b6de0;  // (from the original)
inline constexpr guest::Function<0x002b7c68, u32(u32, u32, u32, u32)> call_002b7c68;  // (from the original)
inline constexpr guest::Function<0x002bc928, u32(u32, u32, u32, u32)> call_002bc928;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005245bc, u32(u32, u32, u32, u32)> call_005245bc;  // (from the original)
inline constexpr guest::Function<0x005d6fac, u32(u32, u32, u32, u32)> call_005d6fac;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_006b0824(gptr<state__Mode_Passport_> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r5 = 0u;
    arg0->word_4 = r5;
    arg0->byte_8 = u8(r5);
    u32 r2_1 = *global_0088182c;
    arg0->word_c = *global_00881828;
    arg0->word_10 = r2_1;
    arg0->word_14 = r5;
    arg0->word_0 = 0x9081ec;  // (from the original)
    arg0->byte_18 = u8(r5);
    arg0->word_1c = r5;
    arg0->word_20 = r5;
    u32 r0_2 = call_002bc928((r0 + 0x20u) + 4u, 0x9081ecu, r2_1, r0 + 0xcu);  // (from the original)
    u32 r2_2 = 0x8f8cb8u;  // (from the original)
    *gptr<u32>(r0_2 - 0x24u) = 0x8f8c84;  // (from the original)
    *gptr<u32>(r0_2) = r2_2;
    u32 r0_4 = call_001207d8(r0_2 + 8u, 0x8f8c84u, r2_2, guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_001207d8(r0_4 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125e3c(r0_6 + 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_00125aec(r0_12 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_00125aec(r0_14 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_00125aec(r0_16 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_00125aec(r0_18 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_00125aec(r0_20 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_00125aec(r0_22 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_26 = call_00125aec(r0_24 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_00125aec(r0_26 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_30 = call_00125e3c(r0_28 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_32 = call_00125aec(r0_30 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_00125aec(r0_32 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_00125aec(r0_34 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_00125aec(r0_36 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_40 = call_00125aec(r0_38 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = call_00125aec(r0_40 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_44 = call_00125aec(r0_42 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_46 = call_0022c7c8(r0_44 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_46) = 0x8f2db4;  // (from the original)
    *gptr<u32>(r0_46 + 0x204u) = r5;  // (from the original)
    *gptr<u32>(r0_46 + 0x208u) = r5;  // (from the original)
    *gptr<u32>(r0_46 + 0x20cu) = r5;  // (from the original)
    u32 ea_5 = r0_46 + 0x210u;  // (from the original)
    *gptr<u32>(ea_5) = r5;
    u32 r0_48 = call_005e3128(ea_5 + 4u, 0x1eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_50 = call_005d6fac(r0_48 + 0xc4u, 0x6fu, 0xau, guest::cpu()->r[3]);  // (from the original)
    u32 r0_52 = call_002b7c68(r0_50 + 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_54 = call_0022c7c8(r0_52 + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_54) = 0x8f428c;  // (from the original)
    u32 r0_56 = call_002b6de0(r0_54 + 0x204u, 0x8f428cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_58 = call_002f7604(r0_56 + 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_60 = call_005e3128(r0_58 + 0xe4u, 0x21u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_62 = call_005245bc(r0_60 + 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_63 = r0_62 + 0x10u;  // (from the original)
    u32 r0_64 = call_003083bc(r0_63, r0_63 + 0x18u, 0x21u, guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_64) = 0x909f18;  // (from the original)
    u32 r0_66 = call_005f4bfc(r0_64 + 0xcu, 0x909f18u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0_66 - 0xcu;  // (from the original)
    call_002f825c(r0_66 + 0xcu, 0x42u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r2)));  // (from the original)
    u32 r1 = 0x10u;  // (from the original)
    do {
        u32 r3_35 = *gptr<u16>(r2);
        res_1 = r1 - 1u;
        r1 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_35);
        u32 r3_36 = *gptr<u16>(r2);
        u32 ea_7 = r0 + 4u;
        *gptr<u16>(ea_7) = u16(r3_36);
        r0 = ea_7;
        guest::preempt();
    } while (res_1 != 0);
    *gptr<u8>(r4 + 0x5cu) = 1;  // (from the original)
    u32 r0_69 = call_00301d0c(r4 + 0x60u, 0x2b6de0u, 0xe0u, 1u);  // (from the original)
    u32 r0_71 = call_002f7604(r0_69 + 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_73 = call_00301d0c(r0_71 + 0xe4u, 0x2b6de0u, 0xe0u, 1u);  // (from the original)
    u32 r0_75 = call_002f7604(r0_73 + 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_76 = r0_75 - 0x15d0u;  // (from the original)
    *gptr<u32>(0x16b4u + r0_76) = 0x19;  // (from the original)
    *gptr<u32>((0x16b4u ^ u32(s32(0x19u) >> 1)) + r0_76) = 0x19;  // (from the original)
    u32 r0_78 = call_00301d0c(r0_76 + 0x16bcu, 0x6ce60cu, 0x330u, 0x18u);  // (from the original)
    u32 r0_79 = r0_78 - 0x16bcu;  // (from the original)
    gptr<Local_006b0824_r1_29> r1_29 = gptr<Local_006b0824_r1_29>(r0_79 + 0x6000u);  // (from the original)
    r1_29->word_33c = r5;
    r1_29->word_340 = r5;
    r1_29->word_344 = r5;
    r1_29->word_348 = r5;
    r1_29->word_34c = r5;
    r1_29->word_350 = r5;
    r1_29->word_354 = r5;
    r1_29->byte_358 = u8(r5);
    r1_29->byte_359 = u8(r5);
    r1_29->byte_35a = u8(r5);
    r1_29->byte_35b = u8(r5);
    *gptr<u32>(r0_79 + 0x635cu) = r5;  // (from the original)
    u32 r0_81 = call_002b7c68(r0_79 + 0x6360u, r1_29.addr(), r0_79, guest::cpu()->r[3]);  // (from the original)
    u32 r0_83 = call_002b7c68(r0_81 + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_85 = call_005e3128(r0_83 + 0x5cu, 0x3cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_87 = call_005e3128(r0_85 + 0xc4u, 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_89 = call_005e3128(r0_87 + 0xc4u, 0x19u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_91 = call_005e3128(r0_89 + 0xc4u, 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_93 = call_005e3128(r0_91 + 0xc4u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_95 = call_005e3128(r0_93 + 0xc4u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_97 = call_005e3128(r0_95 + 0xc4u, 0x28u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_43 = guest::cpu()->r[2];
    u32 r3_49 = guest::cpu()->r[3];
    u32 r0_99 = call_005e3128(r0_97 + 0xc4u, 0x1eu, r2_43, r3_49);  // (from the original)
    u32 r0_101 = call_005e3128(r0_99 + 0xc4u, 0x1eu, r2_43, r3_49);  // (from the original)
    return r0_101 - 0x6a38u;  // (from the original)
}

}  // namespace d_006b0824
GUEST_EXPORT_FRAMED(0x006b0824, d_006b0824::f_006b0824, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b0b74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b0b74 {

inline constexpr guest::Function<0x0022c87c, u32(u32, u32, u32, u32)> call_0022c87c;  // (from the original)
inline constexpr guest::Function<0x002b6ef8, u32(u32, u32, u32, u32)> call_002b6ef8;  // (from the original)
inline constexpr guest::Function<0x002b7c94, u32(u32, u32, u32, u32)> call_002b7c94;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f7710, u32(u32, u32, u32, u32)> call_002f7710;  // (from the original)
inline constexpr guest::Function<0x00567ef0, u32(u32, u32, u32, u32)> call_00567ef0;  // (from the original)
inline constexpr guest::Function<0x0056988c, u32(u32, u32, u32, u32)> call_0056988c;  // (from the original)
inline constexpr guest::Function<0x005bf744, u32(u32, u32, u32, u32)> call_005bf744;  // (from the original)
inline constexpr guest::Function<0x005d703c, u32(u32, u32, u32, u32)> call_005d703c;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32, u32, u32)> call_005e3194;  // (from the original)

u32 f_006b0b74(gptr<Passport> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r2_1 = 0x8f8cb8u;  // (from the original)
    arg0->word_0 = 0x8f8c84;  // (from the original)
    arg0->word_24 = r2_1;
    u32 r0_2 = call_005e3194(r0 + 0x6a38u, 0x8f8c84u, r2_1, r3);  // (from the original)
    u32 r0_4 = call_005e3194(r0_2 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_005e3194(r0_4 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_005e3194(r0_6 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_005e3194(r0_8 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_005e3194(r0_10 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_005e3194(r0_12 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_005e3194(r0_14 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_005e3194(r0_16 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_002b7c94(r0_18 - 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_002b7c94(r0_20 - 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r0_22 - 0x4ca4u, 0x6ce65cu, 0x330u, 0x18u);  // (from the original)
    u32 r0_24 = (r0_22 - 0x6360u) + 0x15d0u;  // (from the original)
    u32 r0_25 = call_002f7710(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f76ac(r0_25 - 0xe0u, 0x2b6ef8u, 0xe0u, 1u);  // (from the original)
    u32 r0_27 = (r0_25 - 0x15d0u) + 0x140cu;  // (from the original)
    u32 r0_28 = call_002f7710(r0_27, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4_3 = r0_28 - 0x140cu;  // (from the original)
    call_002f76ac(r0_28 - 0xe0u, 0x2b6ef8u, 0xe0u, 1u);  // (from the original)
    u32 r0_30 = r4_3 + 0x12ccu;  // (from the original)
    *gptr<u32>(r4_3 + 0xe30u) = 0x8f428c;  // (from the original)
    *gptr<u32>(r0_30) = 0x909f18;  // (from the original)
    u32 r0_32 = call_005e3194(r0_30 + 0xffffff2cu, 0x909f18u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_34 = call_002f7710(r0_32 - 0xe4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_36 = call_002b6ef8(r0_34 - 0xe0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_38 = call_0022c87c(r0_36 - 0x204u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *gptr<u32>(r0_38 - 0x434u) = 0x8f2db4;  // (from the original)
    u32 r0_40 = call_002b7c94(r0_38 - 0x5cu, 0x8f2db4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_42 = call_005d703c(r0_40 - 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_44 = call_005e3194(r0_42 - 0xc4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_46 = call_0022c87c(r0_44 - 0x214u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_48 = call_0056988c(r0_46 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_50 = call_0056988c(r0_48 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_52 = call_0056988c(r0_50 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_54 = call_0056988c(r0_52 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_56 = call_0056988c(r0_54 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_58 = call_0056988c(r0_56 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_60 = call_0056988c(r0_58 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_62 = call_005bf744(r0_60 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_64 = call_0056988c(r0_62 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_66 = call_0056988c(r0_64 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_68 = call_0056988c(r0_66 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_70 = call_0056988c(r0_68 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_72 = call_0056988c(r0_70 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_74 = call_0056988c(r0_72 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_76 = call_0056988c(r0_74 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_78 = call_0056988c(r0_76 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_80 = call_0056988c(r0_78 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_82 = call_0056988c(r0_80 - 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_84 = call_005bf744(r0_82 - 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_86 = call_00567ef0(r0_84 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_88 = call_00567ef0(r0_86 - 0x248u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_88 - 0x2cu;  // (from the original)
}

}  // namespace d_006b0b74
GUEST_EXPORT_FRAMED(0x006b0b74, d_006b0b74::f_006b0b74, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b127c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b127c {

struct __attribute__((packed)) Object_006b127c_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_006b127c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b127c_0, word_14, 0x14);  // (from the original)


void f_006b127c(gptr<Object_006b127c_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    float S0_1 = S0 * S0;
    arg0->word_14 = r1;
    u32 res_1 = r3 - r2;
    arg0->word_c = std::bit_cast<u32>(S0_1);
    arg0->word_0 = r2;
    if (res_1 >> 0x1f == ((r3 ^ r2) & (r3 ^ res_1)) >> 0x1f) {  // (from the original)
        r2 = r3;
    }
    arg0->word_4 = r2;
    guest::cpu()->s[0] = S0_1;
    return;
}

}  // namespace d_006b127c
GUEST_EXPORT(0x006b127c, d_006b127c::f_006b127c);

// f_006b1468: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1468 {

struct __attribute__((packed)) Object_006b1468_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 byte_11;
    u8 unknown_12[0x2];  // (not used here)
    u32 word_14;
    u8 byte_18;
    u8 unknown_19[0x1b];  // (not used here)
    u32 word_34;
    u8 byte_38;
    u8 byte_39;
    u8 unknown_3a[0x2];  // (not used here)
    u32 word_3c;
    u32 word_40;
};
GUEST_OFFSET(Object_006b1468_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_11, 0x11);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, byte_39, 0x39);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006b1468_0, word_40, 0x40);  // (from the original)

inline guest::global<u32, 0x006b14b0> global_006b14b0;  // (from the original)
inline guest::global<u32, 0x006b14b4> global_006b14b4;  // (from the original)

void f_006b1468(gptr<Object_006b1468_0> arg0) {
    u32 r2_1 = ~0u;
    float S0_1 = std::bit_cast<float>(*global_006b14b0);
    arg0->word_0 = r2_1;
    arg0->word_4 = r2_1;
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    arg0->word_c = std::bit_cast<u32>(S0_1);
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
    float S0_2 = std::bit_cast<float>(*global_006b14b4);
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_34 = std::bit_cast<u32>(S0_2);
    arg0->byte_38 = 0;
    arg0->byte_39 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    return;
}

}  // namespace d_006b1468
GUEST_EXPORT(0x006b1468, d_006b1468::f_006b1468);

// f_006b14b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b14b8 {

inline constexpr guest::Function<0x00825b04, u32(u32)> call_00825b04;  // (from the original)

u32 f_006b14b8(u32 r0) {
    u32 r0_2 = call_00825b04(r0 + 0x3cu);  // (from the original)
    return r0_2 - 0x3cu;  // (from the original)
}

}  // namespace d_006b14b8
GUEST_EXPORT_FRAMED(0x006b14b8, d_006b14b8::f_006b14b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b17c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b17c4 {

inline constexpr guest::Function<0x005e2c98, u32(u32, u32, u32, u32)> call_005e2c98;  // (from the original)

u32 f_006b17c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r1 == 0) {
        return call_005e2c98(r0 + 0x198u, r2, r3, r3);  // (from the original)
    }
    if (r1 != 1u) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_005e2c98(r0 + 0x25cu, r2, r3, r3);  // (from the original)
}

}  // namespace d_006b17c4
GUEST_EXPORT(0x006b17c4, d_006b17c4::f_006b17c4);

// f_006b19c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b19c0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_006b19c0(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_001323bc(r0);
    guest::cpu()->r[13] += 8u;
    return call_00569e6c(r0_1, r0 + 0x24u, 0u);  // (from the original)
}

}  // namespace d_006b19c0
GUEST_EXPORT(0x006b19c0, d_006b19c0::f_006b19c0);

// f_006b1a64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1a64 {

inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_006b1a64(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_005e2e50(r0 + 0x198u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r0 + 0x198u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2e50(r0 + 0x25cu, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_005e2f94(r0 + 0x25cu, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006b1a64
GUEST_EXPORT(0x006b1a64, d_006b1a64::f_006b1a64);

// f_006b1a98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1a98 {

inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)

u32 f_006b1a98(u32 r0) {
    return call_001323b4(r0 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_006b1a98
GUEST_EXPORT(0x006b1a98, d_006b1a98::f_006b1a98);

// f_006b1aa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1aa0 {

struct __attribute__((packed)) Object_006b1aa0_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
};
GUEST_OFFSET(Object_006b1aa0_0, word_44, 0x44);  // (from the original)

struct __attribute__((packed)) Local_006b1aa0_r1_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u8 unknown_30[0x87];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_006b1aa0_r1_1, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_006b1aa0_r1_1, byte_b7, 0xb7);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

void f_006b1aa0(gptr<Object_006b1aa0_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    gptr<Local_006b1aa0_r1_1> r1_1 = gptr<Local_006b1aa0_r1_1>(arg0->word_44);
    r1_1->word_2c = std::bit_cast<u32>(S0);
    u32 r2_1 = u32(r1_1->byte_b7) & 0xcfu;  // (from the original)
    r1_1->byte_b7 = u8(r2_1);
    guest::cpu()->s[0] = S0;
    call_00568c10(r0 + 0x24u, r1_1.addr(), r2_1, guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_006b1aa0
GUEST_EXPORT(0x006b1aa0, d_006b1aa0::f_006b1aa0);

// f_006b1d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1d88 {

struct __attribute__((packed)) Object_006b1d88_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b1d88_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b1d88(gptr<Object_006b1d88_0> arg0) {
    u32 r0_1 = arg0->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_004bfd70(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_006b1d88
GUEST_EXPORT(0x006b1d88, d_006b1d88::f_006b1d88);

// f_006b1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1da4 {

struct __attribute__((packed)) Object_006b1da4_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b1da4_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

void f_006b1da4(gptr<Object_006b1da4_0> arg0) {
    u32 r0_1 = arg0->word_c0c;
    if (r0_1 == 0) {
        return;
    }
    call_004bfd70(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006b1da4
GUEST_EXPORT(0x006b1da4, d_006b1da4::f_006b1da4);

// f_006b1df0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1df0 {

inline constexpr guest::Function<0x004bfe1c, u32(u32, u32, u32, u32)> call_004bfe1c;  // (from the original)
inline constexpr guest::Function<0x007cff90, u32(u32, u32, u32, u32)> call_007cff90;  // (from the original)

u32 f_006b1df0(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r0_2 = 0;
    u32 r5 = r0;
    u32 r4 = r0 + 0x1cu;  // (from the original)
    u32 r6 = r1;
    r0 = 0u;
L_6b1e04:;
    u32 r1_1 = r4;
    if (r0 < 8u) {
        r1_1 = r4 + (r0 << 2);
    }
    u32 r1_2 = *gptr<u32>(r1_1);
    r1 = r1_2 == 0 ? ~0u : *gptr<u32>(r1_2 + 0xb0u);  // (from the original)
    if (r1 != r6) {
        goto L_6b1e60;
    }
    if (r0 < 8u) {
        r4 += (r0 << 2);
    }
    if (r4 == 0) {
        goto L_6b1e6c;
    }
    r0_1 = *gptr<u32>(r5 + 0xc0cu);  // (from the original)
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r4;
    }
    r0_2 = r0_1 + 4u;
    call_004bfe1c(r0_2, r4, r6, 0u);
    r1 = guest::cpu()->r[1];
    return r4;
L_6b1e60:;
    r0 += 1u;
    if (s32(r0) < 8) {
        guest::preempt();
        goto L_6b1e04;
    }
L_6b1e6c:;
    u32 r0_4 = call_007cff90(r5 + 0x1cu, ~0u, r6, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 zf_1 = r0_4 == 0;
    r4 = r0_4;
    if (!zf_1) {
        r0_4 = *gptr<u32>(r5 + 0xc0cu);  // (from the original)
        zf_1 = r0_4 == 0;
    }
    if (zf_1) {
        return r4;
    }
    call_004bfe1c(r0_4 + 4u, r4, r6, 0u);
    r1 = guest::cpu()->r[1];
    return r4;
}

}  // namespace d_006b1df0
GUEST_EXPORT_FRAMED(0x006b1df0, d_006b1df0::f_006b1df0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b1ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b1ec0 {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

u32 f_006b1ec0(u32 r0, u32 r1) {
    u32 r1_2 = 0;
    u32 r5 = r0;
    u32 r4 = r1;
    r0 += 0x1cu;  // (from the original)
    u32 r2 = 0u;
    do {
        u32 r1_1 = *gptr<u32>(r2 >= 8u ? r0 : r0 + (r2 << 2));
        r1_2 = r1_1 == 0 ? ~0u : *gptr<u32>(r1_1 + 0xb0u);  // (from the original)
        if (r1_2 == r4) {
            if (r2 < 8u) {
                r0 += (r2 << 2);
            }
            if (r0 != 0) {
                goto L_6b1f1c;
            }
            guest::cpu()->r[1] = r1_2;
            return r0;
        }
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 8);
    guest::cpu()->r[1] = r1_2;
    return r0;
L_6b1f1c:;
    u32 r0_1 = *gptr<u32>(r0);
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
    }
    r1 = 0u;
    r0 = r5 + 0x1cu;  // (from the original)
    do {
        u32 r2_1 = *gptr<u32>(r1 >= 8u ? r0 : r0 + (r1 << 2));
        r2 = r2_1 == 0 ? ~0u : *gptr<u32>(r2_1 + 0xb0u);  // (from the original)
        if (r2 == r4) {
            if (r1 < 8u) {
                r0 += (r1 << 2);
            }
            if (r0 != 0) {
                guest::preempt();
                goto L_6b1f1c;
            }
            guest::cpu()->r[1] = r1;
            return r0;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r1) < 8);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006b1ec0
GUEST_EXPORT_FRAMED(0x006b1ec0, d_006b1ec0::f_006b1ec0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b2c68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b2c68 {

struct __attribute__((packed)) Local_006b2c68_r4_1 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_006b2c68_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006b2c68_r4_1, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_006b2c68_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006b2c68_r5_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> call_007e666c;  // (from the original)

void f_006b2c68(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 res_1 = r1 - 4u;
    gptr<Local_006b2c68_r4_1> r4_1 = gptr<Local_006b2c68_r4_1>(r0 + 0xc14u);  // (from the original)
    gptr<Local_006b2c68_r5_1> r5_1 = gptr<Local_006b2c68_r5_1>(r0 + 0xc28u);  // (from the original)
    if (res_1 == 0) {
        goto L_6b2cc4;
    }
    if ((res_1 >> 0x1f) == (((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_6b2c98;
    }
    if (r1 == 1u || r1 == 2u) {
        goto L_6b2cdc;
    }
    guest::cpu()->r[1] = r1;
    return;
L_6b2c98:;
    if (r1 == 0x10u) {  // (from the original)
        goto L_6b2cdc;
    }
    if (r1 != 0x20u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r0 = r5_1->word_0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
L_6b2cb4:;
    call_007e666c(r0, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
    return;
L_6b2cc4:;
    r0_1 = r4_1->word_0;
    if (r0_1 == 0) {
        goto L_6b2cdc;
    }
    call_007e666c(r0_1, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
L_6b2cdc:;
    u32 r0_2 = r5_1->word_0;
    if (r0_2 != 0) {
        call_007e666c(r0_2, 0x6b3a9cu, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    r0 = r4_1->word_2c;
    if (r0 != 0) {
        guest::preempt();
        goto L_6b2cb4;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006b2c68
GUEST_EXPORT_FRAMED(0x006b2c68, d_006b2c68::f_006b2c68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b2f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b2f08 {

struct __attribute__((packed)) Object_006b2f08_0 {
    u8 unknown_0[0xc10];  // (not used here)
    u32 word_c10;
    u8 unknown_c14[0xc0];  // (not used here)
    u32 word_cd4;
    u8 unknown_cd8[0x4];  // (not used here)
    u32 word_cdc;
    u8 unknown_ce0[0x8];  // (not used here)
    u32 word_ce8;
};
GUEST_OFFSET(Object_006b2f08_0, word_c10, 0xc10);  // (from the original)
GUEST_OFFSET(Object_006b2f08_0, word_cd4, 0xcd4);  // (from the original)
GUEST_OFFSET(Object_006b2f08_0, word_cdc, 0xcdc);  // (from the original)
GUEST_OFFSET(Object_006b2f08_0, word_ce8, 0xce8);  // (from the original)

inline constexpr guest::Function<0x0013c1e8, u32(u32, u32, u32, u32)> call_0013c1e8;  // (from the original)
inline constexpr guest::Function<0x0073df34, u32(u32, u32, u32, u32)> call_0073df34;  // (from the original)
inline constexpr guest::Function<0x0073df8c, u32(u32, u32, u32, u32)> call_0073df8c;  // (from the original)

void f_006b2f08(gptr<Object_006b2f08_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_0013c1e8(arg0->word_c10, r2, r0 + 0xcd0u, r3);  // (from the original)
    if (r0_2 != 0) {
        *gptr<u32>(r1) = r2;
        *gptr<u32>(r1 + 4u) = arg0->word_cd4 & ~0xff000000u;  // (from the original)
        *gptr<u32>(r1 + 8u) = arg0->word_cdc;
        *frame.at<u32>(0) = 0;
        u32 r0_4 = call_0073df8c(arg0->word_c10, r2, 0u, frame.at(0).addr());
        u32 r0_5 = r0_4 == 0 ? 0u : *frame.at<u32>(0);
        *gptr<u8>(r1 + 0xdu) = 0;  // (from the original)
        *gptr<u8>(r1 + 0xcu) = u8(r0_5 & 3u);  // (from the original)
        u32 r0_6 = arg0->word_c10;
        u32 r6_1 = 0u;
        u32 r0_7 = call_0073df34(r0_6, r2, r0 + 0xce8u, guest::cpu()->r[3]);  // (from the original)
        if (r0_7 != 0) {
            r6_1 = arg0->word_ce8;
        }
        *gptr<u8>(r1 + 0xeu) = u8((r6_1 & 4u) >> 2);  // (from the original)
        *gptr<u8>(r1 + 0xfu) = u8((r6_1 & 8u) >> 3);  // (from the original)
        *gptr<u8>(r1 + 0x10u) = u8((r6_1 & 2u) >> 1);  // (from the original)
    }
    return;
}

}  // namespace d_006b2f08
GUEST_EXPORT_FRAMED(0x006b2f08, d_006b2f08::f_006b2f08, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006b3104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3104 {

inline guest::global<u32, 0x006b31e4> global_006b31e4;  // (from the original)
inline guest::global<u32, 0x006b31e8> global_006b31e8;  // (from the original)
inline guest::global<u32, 0x006b31ec> global_006b31ec;  // (from the original)
inline guest::global<u32, 0x006b31f0> global_006b31f0;  // (from the original)

void f_006b3104(u32 r0_unused, u32 r1, float S0, float S1) {
    u32 fpsr = guest::cpu()->fpscr;
    u32 r2_1 = 0;
    u32 res_2 = 0;
    u32 nf_2 = 0;
    u32 zf_2 = 0;
    u32 vf_2 = 0;
    u32 r0_2 = 0;
    u32 res_3 = 0;
    u32 zf_3 = 0;
    float S1_1 = 0;
    float S2_1 = 0;
    u32 fpsr_1 = 0;
    u32 fpsr_2 = 0;
    float S1_3 = 0;
    float S0_5 = 0;
    u32 res_1 = r1 - 0x10003e9u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r0_1 = r1 - 0x10003e9u;  // (from the original)
    if (zf_1) {
        float S0_1 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_1;
        return;
    }
    if (!zf_1 && (res_1 >> 0x1f) == (((r1 ^ 0x10003e9u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_6b3194;
    }
    r2_1 = 0x1000393u;  // (from the original)
    res_2 = r1 - r2_1;
    nf_2 = res_2 >> 0x1f;  // (from the original)
    zf_2 = res_2 == 0;
    vf_2 = ((r1 ^ r2_1) & (r1 ^ res_2)) >> 0x1f;  // (from the original)
    r0_2 = r1 - r2_1;
    if (zf_2) {
        float S0_2 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_2;
        return;
    }
    if (!zf_2 && nf_2 == vf_2) {
        goto L_6b3178;
    }
    res_3 = 0xfefffc72u + r1;  // (from the original)
    zf_3 = res_3 == 0;
    if (!zf_3) {
        zf_3 = res_3 == 1u;
    }
    if (zf_3 || res_3 == 3u || res_3 == 4u) {
        float S0_3 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_3;
        return;
    }
L_6b3148:;
    S1_1 = std::bit_cast<float>(*global_006b31e4);
    S2_1 = std::bit_cast<float>(*global_006b31e8);
    fpsr_1 = fpsr & 0xfffffffu | vfp_cmpf(S0, S1_1);  // (from the original)
    if (!(fpsr_1 >> 0x1d & 1)) {  // (from the original)
        float S1_2 = std::bit_cast<float>(*global_006b31ec);
        float S0_4 = S1_1 * S1_2;
        guest::cpu()->s[0] = S0_4;
        guest::cpu()->s[1] = S1_2;
        return;
    }
    fpsr_2 = fpsr_1 & 0xfffffffu | vfp_cmpf(S0, S2_1);  // (from the original)
    if (!(fpsr_2 >> 0x1e & 1) && fpsr_2 >> 0x1f == (fpsr_2 >> 0x1c & 1)) {  // (from the original)
        S0 = S2_1;
    }
    S1_3 = std::bit_cast<float>(*global_006b31ec);
    S0_5 = S0 * S1_3;
    guest::cpu()->s[0] = S0_5;
    guest::cpu()->s[1] = S1_3;
    return;
L_6b3178:;
    if (r0_2 == 1u || r0_2 == 2u || r0_2 == 0x33u || r0_2 == 0x55u) {  // (from the original)
        float S0_6 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_6;
        guest::cpu()->s[1] = S1;
        return;
    }
    guest::preempt();
    goto L_6b3148;
L_6b3194:;
    u32 res_4 = r0_1 - 0x52u;  // (from the original)
    u32 zf_4 = res_4 == 0;
    if (zf_4) {
        float S0_7 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_7;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (!!zf_4 || (res_4 >> 0x1f) != (((r0_1 ^ 0x52u) & (r0_1 ^ res_4)) >> 0x1f)) {  // (from the original)
        if (r0_1 == 6u || r0_1 == 7u || r0_1 == 0x40u || r0_1 == 0x42u) {  // (from the original)
            float S0_8 = std::bit_cast<float>(*global_006b31f0);
            guest::cpu()->s[0] = S0_8;
            guest::cpu()->s[1] = S1;
            return;
        }
        guest::preempt();
        goto L_6b3148;
    }
    if (r0_1 == 0x53u || r0_1 == 0x83u) {  // (from the original)
        float S0_9 = std::bit_cast<float>(*global_006b31f0);
        guest::cpu()->s[0] = S0_9;
        guest::cpu()->s[1] = S1;
        return;
    }
    if (r0_1 != 0xa4u && r0_1 != 0xa6u) {  // (from the original)
        guest::preempt();
        goto L_6b3148;
    }
    float S0_10 = std::bit_cast<float>(*global_006b31f0);
    guest::cpu()->s[0] = S0_10;
    guest::cpu()->s[1] = S1;
    return;
}

}  // namespace d_006b3104
GUEST_EXPORT(0x006b3104, d_006b3104::f_006b3104);

// f_006b3384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3384 {

struct __attribute__((packed)) Local_006b3384_r4_1 {
    u32 word_0;
    u8 unknown_4[0x28];  // (not used here)
    u32 word_2c;
};
GUEST_OFFSET(Local_006b3384_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006b3384_r4_1, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_006b3384_r5_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_006b3384_r5_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x007e666c, u32(u32, u32, u32, u32)> call_007e666c;  // (from the original)

void f_006b3384(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 res_1 = r1 - 4u;
    gptr<Local_006b3384_r4_1> r4_1 = gptr<Local_006b3384_r4_1>(r0 + 0xc14u);  // (from the original)
    gptr<Local_006b3384_r5_1> r5_1 = gptr<Local_006b3384_r5_1>(r0 + 0xc28u);  // (from the original)
    if (res_1 == 0) {
        goto L_6b33e0;
    }
    if ((res_1 >> 0x1f) == (((r1 ^ 4u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_6b33b4;
    }
    if (r1 == 1u || r1 == 2u) {
        goto L_6b33f8;
    }
    guest::cpu()->r[1] = r1;
    return;
L_6b33b4:;
    if (r1 == 0x10u) {  // (from the original)
        goto L_6b33f8;
    }
    if (r1 != 0x20u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    r0 = r5_1->word_0;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
L_6b33d0:;
    call_007e666c(r0, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
    return;
L_6b33e0:;
    r0_1 = r4_1->word_0;
    if (r0_1 == 0) {
        goto L_6b33f8;
    }
    call_007e666c(r0_1, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
L_6b33f8:;
    u32 r0_2 = r5_1->word_0;
    if (r0_2 != 0) {
        call_007e666c(r0_2, 0x6b3f8cu, 0u, guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    r0 = r4_1->word_2c;
    if (r0 != 0) {
        guest::preempt();
        goto L_6b33d0;
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006b3384
GUEST_EXPORT_FRAMED(0x006b3384, d_006b3384::f_006b3384, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b3d50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b3d50 {

struct __attribute__((packed)) Object_006b3d50_0 {
    u8 unknown_0[0xb18];  // (not used here)
    u32 word_b18;
    u8 unknown_b1c[0x1e3];  // (not used here)
    u8 byte_cff;
};
GUEST_OFFSET(Object_006b3d50_0, word_b18, 0xb18);  // (from the original)
GUEST_OFFSET(Object_006b3d50_0, byte_cff, 0xcff);  // (from the original)

inline guest::global<u32, 0x0094cffc> global_0094cffc;  // (from the original)
inline constexpr guest::Function<0x0071bfa0, u32(u32, u32)> call_0071bfa0;  // (from the original)
inline constexpr guest::Function<0x00825c64, u32(u32, u32, u32, u32)> call_00825c64;  // (from the original)

u32 f_006b3d50(gptr<Object_006b3d50_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r6_1 = 0;
    u32 r0_3 = 0;
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
    u32 r5_1 = r1;
    if (u32(arg0->byte_cff) == 0) {
        goto L_6b3d84;
    }
    res_1 = 0xfefffc4au + r5_1;  // (from the original)
    zf_1 = res_1 == 0;
    if (!zf_1) {
        zf_1 = res_1 == 1u;
    }
    if (zf_1) {
        goto L_6b3d84;
    }
    if (res_1 != 0x1eu && res_1 != 0x1fu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0u;
    }
L_6b3d84:;
    r1 = 0x10004b5u;  // (from the original)
    u32 res_2 = r5_1 - r1;
    u32 r0_1 = r5_1 - r1;
    if (res_2 == 0) {
        goto L_6b3f18;
    }
    if ((res_2 >> 0x1f) != (((r5_1 ^ r1) & (r5_1 ^ res_2)) >> 0x1f)) {  // (from the original)
        r6_1 = r1 - u32(s32(0xfefffc43u) >> 0x15);  // (from the original)
        u32 r0_2 = 0xfefffc43u + r5_1;  // (from the original)
        if (r0_2 == 0) {
            goto L_6b3e34;
        }
        if (r0_2 == 1u) {
            goto L_6b3eb0;
        }
        if (r0_2 == 3u) {
            goto L_6b3efc;
        }
        if (r0_2 != 0xf7u) {  // (from the original)
            goto L_6b3f30;
        }
        goto L_6b3f18;
    }
    if (r0_1 == 5u) {
        goto L_6b3f18;
    }
    r0_3 = r0_1 - 0x2cau;  // (from the original)
    if (r0_3 != 0) {
        if (r0_3 != 1u) {
            goto L_6b3f30;
        }
    } else {
        if (arg0->word_b18 != 1u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        u32 r0_5 = call_00825c64(r0 + 0x1cu, 0x100077fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_5 != 0) {
            return 0u;
        }
        goto L_6b3f30;
    }
    if (arg0->word_b18 != 2u) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    r0_6 = r0 + 0x1cu;  // (from the original)
    r0_7 = call_00825c64(r0_6, 0x1000780u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_7 != 0) {
        return 0u;
    }
    goto L_6b3f30;
L_6b3e34:;
    r0_8 = r0 + 0x1cu;  // (from the original)
    r0_9 = call_00825c64(r0_8, 0x100038cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_9 != 0) {
        return 0u;
    }
    r0_10 = r0 + 0x1cu;  // (from the original)
    r0_11 = call_00825c64(r0_10, 0x100038fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_11 != 0) {
        return 0u;
    }
    r0_12 = r0 + 0x1cu;  // (from the original)
    r0_13 = call_00825c64(r0_12, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_13 != 0) {
        return 0u;
    }
    r0_14 = r0 + 0x1cu;  // (from the original)
    r0_15 = call_00825c64(r0_14, 0x10004bdu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_15 != 0) {
        return 0u;
    }
    r0_16 = r0 + 0x1cu;  // (from the original)
    r0_17 = call_00825c64(r0_16, 0x100038du, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        return 0u;
    }
    goto L_6b3f30;
L_6b3eb0:;
    r0_18 = r0 + 0x1cu;  // (from the original)
    r0_19 = call_00825c64(r0_18, r6_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_19 != 0) {
        return 0u;
    }
    r0_20 = r0 + 0x1cu;  // (from the original)
    r0_21 = call_00825c64(r0_20, 0x10004bfu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_21 != 0) {
        return 0u;
    }
    r0_22 = r0 + 0x1cu;  // (from the original)
    r0_23 = call_00825c64(r0_22, 0x10004c0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_23 != 0) {
        return 0u;
    }
    goto L_6b3f30;
L_6b3efc:;
    r0_24 = r0 + 0x1cu;  // (from the original)
    r0_25 = call_00825c64(r0_24, 0x10003b3u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_25 != 0) {
        return 0u;
    }
    goto L_6b3f30;
L_6b3f18:;
    r0_26 = r0 + 0x1cu;  // (from the original)
    r0_27 = call_00825c64(r0_26, 0x10004bbu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (r0_27 != 0) {
        return 0u;
    }
L_6b3f30:;
    u32 r0_29 = call_0071bfa0(*global_0094cffc, r5_1);
    r1 = guest::cpu()->r[1];
    if (r0_29 == 0) {
        return 1u;
    }
    return 0u;
}

}  // namespace d_006b3d50
GUEST_EXPORT_FRAMED(0x006b3d50, d_006b3d50::f_006b3d50, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b4170: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4170 {

struct __attribute__((packed)) Object_006b4170_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
    u8 unknown_c10[0xe4];  // (not used here)
    u8 byte_cf4;
};
GUEST_OFFSET(Object_006b4170_0, word_c0c, 0xc0c);  // (from the original)
GUEST_OFFSET(Object_006b4170_0, byte_cf4, 0xcf4);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b4170(gptr<Object_006b4170_0> arg0) {
    u32 r0_1 = arg0->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_004bfd70(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
    u32 res_1 = r0_3 & 0xffu;  // (from the original)
    arg0->byte_cf4 = u8(res_1);
    return res_1 == 0 ? 1u : 0u;
}

}  // namespace d_006b4170
GUEST_EXPORT_FRAMED(0x006b4170, d_006b4170::f_006b4170, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b41a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b41a4 {

struct __attribute__((packed)) Object_006b41a4_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
    u8 unknown_c10[0xe4];  // (not used here)
    u8 byte_cf4;
};
GUEST_OFFSET(Object_006b41a4_0, word_c0c, 0xc0c);  // (from the original)
GUEST_OFFSET(Object_006b41a4_0, byte_cf4, 0xcf4);  // (from the original)

inline constexpr guest::Function<0x004bfd70, u32(u32, u32, u32, u32)> call_004bfd70;  // (from the original)

u32 f_006b41a4(gptr<Object_006b41a4_0> arg0) {
    u32 r0_1 = arg0->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_004bfd70(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 res_1 = r0_3 & 0xffu;  // (from the original)
    arg0->byte_cf4 = u8(res_1);
    return res_1 == 0 ? 1u : 0u;
}

}  // namespace d_006b41a4
GUEST_EXPORT_FRAMED(0x006b41a4, d_006b41a4::f_006b41a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_006b4aa8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4aa8 {


void f_006b4aa8(u32 r0, u32 r1, u32 r2, float S0, float S1) {
    if (r1 == r2) {
        guest::cpu()->r[1] = r1;
        return;
    }
    float S2_1 = S1 - S0;
    float S1_1 = std::bit_cast<float>(r0 - r1);
    u32 r1_1 = r2 - r1;
    float S1_2 = float(s32(std::bit_cast<u32>(S1_1))) * S2_1 / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    float S0_1 = S1_2 + S0;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    return;
}

}  // namespace d_006b4aa8
GUEST_EXPORT(0x006b4aa8, d_006b4aa8::f_006b4aa8);

// f_006b4adc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4adc {


u32 f_006b4adc(u32 r0, u32 r1, float S0, float S1, float S2) {
    if (u32(S1 == S2)) {
        guest::cpu()->s[1] = S1;
        return r0;
    }
    u32 r1_1 = r1 - r0;
    float S2_1 = S2 - S1;
    float S1_1 = (S0 - S1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1))));
    float S0_1 = std::bit_cast<float>(vcvt_sz_f(S1_1 / S2_1 + float(s32(std::bit_cast<u32>(std::bit_cast<float>(r0))))));
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return std::bit_cast<u32>(S0_1);
}

}  // namespace d_006b4adc
GUEST_EXPORT(0x006b4adc, d_006b4adc::f_006b4adc);

// f_006b4e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b4e18 {

struct __attribute__((packed)) Object_006b4e18_0 {
    u8 unknown_0[0xc0c];  // (not used here)
    u32 word_c0c;
};
GUEST_OFFSET(Object_006b4e18_0, word_c0c, 0xc0c);  // (from the original)

inline constexpr guest::Function<0x004bfe1c, u32(u32, u32, u32, u32)> call_004bfe1c;  // (from the original)

u32 f_006b4e18(gptr<Object_006b4e18_0> arg0) {
    u32 r0_1 = arg0->word_c0c;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_004bfe1c(r0_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], 0u);
}

}  // namespace d_006b4e18
GUEST_EXPORT(0x006b4e18, d_006b4e18::f_006b4e18);

// f_006b9038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9038 {

struct __attribute__((packed)) Object_006b9038_0 {
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
    u32 word_ac;
    u32 word_b0;
    u32 word_b4;
    u32 word_b8;
    u32 word_bc;
    u32 word_c0;
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u32 word_d0;
    u32 word_d4;
    u32 word_d8;
    u32 word_dc;
    u32 word_e0;
    u32 word_e4;
    u32 word_e8;
    u32 word_ec;
    u32 word_f0;
    u32 word_f4;
    u32 word_f8;
    u32 word_fc;
    u32 word_100;
    u32 word_104;
    u32 word_108;
    u32 word_10c;
    u32 word_110;
    u32 word_114;
    u32 word_118;
    u32 word_11c;
    u32 word_120;
    u32 word_124;
    u32 word_128;
    u32 word_12c;
    u32 word_130;
    u32 word_134;
    u32 word_138;
    u32 word_13c;
    u32 word_140;
    u32 word_144;
    u32 word_148;
    u32 word_14c;
    u32 word_150;
    u32 word_154;
    u32 word_158;
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    u32 word_168;
    u32 word_16c;
    u32 word_170;
    u32 word_174;
    u32 word_178;
    u32 word_17c;
    u32 word_180;
    u32 word_184;
    u32 word_188;
    u32 word_18c;
    u32 word_190;
    u32 word_194;
    u32 word_198;
    u32 word_19c;
    u32 word_1a0;
    u32 word_1a4;
    u32 word_1a8;
    u32 word_1ac;
    u32 word_1b0;
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u32 word_1c0;
    u32 word_1c4;
    u32 word_1c8;
    u32 word_1cc;
    u32 word_1d0;
    u32 word_1d4;
    u32 word_1d8;
    u32 word_1dc;
    u32 word_1e0;
    u32 word_1e4;
    u32 word_1e8;
    u32 word_1ec;
    u32 word_1f0;
    u32 word_1f4;
    u32 word_1f8;
    u32 word_1fc;
    u32 word_200;
    u32 word_204;
    u32 word_208;
    u32 word_20c;
    u32 word_210;
    u32 word_214;
    u32 word_218;
    u32 word_21c;
    u32 word_220;
    u32 word_224;
    u32 word_228;
    u32 word_22c;
    u32 word_230;
    u32 word_234;
    u32 word_238;
    u32 word_23c;
    u32 word_240;
    u32 word_244;
    u32 word_248;
    u32 word_24c;
    u32 word_250;
    u32 word_254;
    u32 word_258;
    u32 word_25c;
    u32 word_260;
    u32 word_264;
    u32 word_268;
    u32 word_26c;
    u32 word_270;
    u32 word_274;
    u32 word_278;
    u32 word_27c;
    u32 word_280;
    u32 word_284;
    u32 word_288;
    u32 word_28c;
    u32 word_290;
    u32 word_294;
    u32 word_298;
    u32 word_29c;
    u32 word_2a0;
    u32 word_2a4;
    u32 word_2a8;
    u32 word_2ac;
    u32 word_2b0;
    u32 word_2b4;
    u32 word_2b8;
    u32 word_2bc;
    u32 word_2c0;
    u32 word_2c4;
    u32 word_2c8;
    u32 word_2cc;
    u32 word_2d0;
    u32 word_2d4;
    u32 word_2d8;
    u32 word_2dc;
    u32 word_2e0;
    u32 word_2e4;
    u32 word_2e8;
    u32 word_2ec;
    u32 word_2f0;
    u32 word_2f4;
    u32 word_2f8;
    u32 word_2fc;
    u32 word_300;
    u32 word_304;
    u32 word_308;
    u32 word_30c;
    u32 word_310;
    u32 word_314;
    u32 word_318;
    u32 word_31c;
    u32 word_320;
    u32 word_324;
    u32 word_328;
    u32 word_32c;
    u32 word_330;
    u32 word_334;
    u32 word_338;
    u32 word_33c;
    u32 word_340;
    u32 word_344;
    u32 word_348;
    u32 word_34c;
    u32 word_350;
    u32 word_354;
    u32 word_358;
    u32 word_35c;
    u32 word_360;
    u32 word_364;
    u32 word_368;
    u32 word_36c;
    u32 word_370;
    u32 word_374;
    u32 word_378;
    u32 word_37c;
    u32 word_380;
    u32 word_384;
    u32 word_388;
    u32 word_38c;
    u32 word_390;
    u32 word_394;
    u32 word_398;
    u32 word_39c;
    u32 word_3a0;
    u32 word_3a4;
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
    u32 word_3e4;
    u32 word_3e8;
    u32 word_3ec;
    u32 word_3f0;
    u32 word_3f4;
    u32 word_3f8;
    u32 word_3fc;
    u32 word_400;
    u32 word_404;
    u32 word_408;
    u32 word_40c;
    u32 word_410;
    u32 word_414;
    u32 word_418;
    u32 word_41c;
    u32 word_420;
    u32 word_424;
    u32 word_428;
    u32 word_42c;
    u32 word_430;
    u32 word_434;
    u32 word_438;
    u32 word_43c;
    u32 word_440;
    u32 word_444;
    u32 word_448;
    u32 word_44c;
    u32 word_450;
    u32 word_454;
    u32 word_458;
    u32 word_45c;
    u32 word_460;
    u32 word_464;
    u32 word_468;
    u32 word_46c;
    u32 word_470;
    u32 word_474;
    u32 word_478;
    u32 word_47c;
    u32 word_480;
    u32 word_484;
    u32 word_488;
    u32 word_48c;
    u32 word_490;
    u32 word_494;
    u32 word_498;
    u32 word_49c;
    u32 word_4a0;
    u32 word_4a4;
    u32 word_4a8;
    u32 word_4ac;
    u32 word_4b0;
    u32 word_4b4;
    u32 word_4b8;
    u32 word_4bc;
    u32 word_4c0;
    u32 word_4c4;
    u32 word_4c8;
    u32 word_4cc;
    u32 word_4d0;
    u32 word_4d4;
    u32 word_4d8;
    u32 word_4dc;
    u32 word_4e0;
    u32 word_4e4;
    u32 word_4e8;
    u32 word_4ec;
    u32 word_4f0;
    u32 word_4f4;
    u32 word_4f8;
    u32 word_4fc;
    u32 word_500;
    u32 word_504;
    u32 word_508;
    u32 word_50c;
    u32 word_510;
    u32 word_514;
    u32 word_518;
    u32 word_51c;
    u32 word_520;
    u32 word_524;
    u32 word_528;
    u32 word_52c;
    u32 word_530;
    u32 word_534;
    u32 word_538;
    u32 word_53c;
    u32 word_540;
    u32 word_544;
    u32 word_548;
    u32 word_54c;
    u32 word_550;
    u32 word_554;
    u32 word_558;
    u32 word_55c;
    u32 word_560;
    u32 word_564;
    u32 word_568;
    u32 word_56c;
    u32 word_570;
    u32 word_574;
    u32 word_578;
    u32 word_57c;
    u32 word_580;
    u32 word_584;
    u32 word_588;
    u32 word_58c;
    u32 word_590;
    u32 word_594;
    u32 word_598;
    u32 word_59c;
    u32 word_5a0;
    u32 word_5a4;
    u32 word_5a8;
    u32 word_5ac;
    u32 word_5b0;
    u32 word_5b4;
    u32 word_5b8;
    u32 word_5bc;
    u32 word_5c0;
    u32 word_5c4;
    u32 word_5c8;
    u32 word_5cc;
    u32 word_5d0;
    u32 word_5d4;
    u32 word_5d8;
    u32 word_5dc;
    u32 word_5e0;
    u32 word_5e4;
    u32 word_5e8;
    u32 word_5ec;
    u32 word_5f0;
    u32 word_5f4;
    u32 word_5f8;
    u32 word_5fc;
    u32 word_600;
    u32 word_604;
    u32 word_608;
    u32 word_60c;
    u32 word_610;
    u32 word_614;
    u32 word_618;
    u32 word_61c;
    u32 word_620;
    u32 word_624;
    u32 word_628;
    u32 word_62c;
    u32 word_630;
    u32 word_634;
    u32 word_638;
    u32 word_63c;
};
GUEST_OFFSET(Object_006b9038_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_44, 0x44);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_64, 0x64);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_68, 0x68);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_6c, 0x6c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_70, 0x70);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_74, 0x74);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_78, 0x78);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_7c, 0x7c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_80, 0x80);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_84, 0x84);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_88, 0x88);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_8c, 0x8c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_90, 0x90);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_94, 0x94);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_98, 0x98);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_9c, 0x9c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_a4, 0xa4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_ac, 0xac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_b0, 0xb0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_b4, 0xb4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_bc, 0xbc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_c0, 0xc0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_d8, 0xd8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_dc, 0xdc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_e0, 0xe0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_e4, 0xe4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_e8, 0xe8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_ec, 0xec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_f0, 0xf0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_f4, 0xf4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_f8, 0xf8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_100, 0x100);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_104, 0x104);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_108, 0x108);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_10c, 0x10c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_110, 0x110);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_114, 0x114);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_118, 0x118);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_11c, 0x11c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_120, 0x120);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_124, 0x124);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_128, 0x128);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_12c, 0x12c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_130, 0x130);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_134, 0x134);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_138, 0x138);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_13c, 0x13c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_140, 0x140);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_144, 0x144);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_148, 0x148);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_14c, 0x14c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_150, 0x150);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_154, 0x154);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_164, 0x164);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_178, 0x178);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_17c, 0x17c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_184, 0x184);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_188, 0x188);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_18c, 0x18c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_194, 0x194);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_198, 0x198);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_19c, 0x19c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1a0, 0x1a0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1a4, 0x1a4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1a8, 0x1a8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1ac, 0x1ac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1b0, 0x1b0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1b4, 0x1b4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1b8, 0x1b8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1bc, 0x1bc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1c0, 0x1c0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1c4, 0x1c4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1c8, 0x1c8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1cc, 0x1cc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1d0, 0x1d0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1d4, 0x1d4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1d8, 0x1d8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1dc, 0x1dc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1e0, 0x1e0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1e4, 0x1e4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1e8, 0x1e8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1ec, 0x1ec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1f0, 0x1f0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1f4, 0x1f4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1f8, 0x1f8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_1fc, 0x1fc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_200, 0x200);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_204, 0x204);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_208, 0x208);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_20c, 0x20c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_210, 0x210);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_214, 0x214);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_218, 0x218);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_21c, 0x21c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_220, 0x220);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_224, 0x224);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_228, 0x228);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_22c, 0x22c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_230, 0x230);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_234, 0x234);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_238, 0x238);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_23c, 0x23c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_240, 0x240);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_244, 0x244);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_248, 0x248);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_24c, 0x24c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_250, 0x250);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_254, 0x254);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_258, 0x258);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_25c, 0x25c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_260, 0x260);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_264, 0x264);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_268, 0x268);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_26c, 0x26c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_270, 0x270);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_274, 0x274);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_278, 0x278);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_27c, 0x27c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_280, 0x280);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_284, 0x284);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_288, 0x288);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_28c, 0x28c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_290, 0x290);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_294, 0x294);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_298, 0x298);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_29c, 0x29c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2a0, 0x2a0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2a4, 0x2a4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2a8, 0x2a8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2ac, 0x2ac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2b0, 0x2b0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2b4, 0x2b4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2b8, 0x2b8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2bc, 0x2bc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2c0, 0x2c0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2c4, 0x2c4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2c8, 0x2c8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2cc, 0x2cc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2d0, 0x2d0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2d4, 0x2d4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2d8, 0x2d8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2dc, 0x2dc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2e0, 0x2e0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2e4, 0x2e4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2e8, 0x2e8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2ec, 0x2ec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2f0, 0x2f0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2f4, 0x2f4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2f8, 0x2f8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_2fc, 0x2fc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_300, 0x300);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_304, 0x304);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_308, 0x308);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_30c, 0x30c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_310, 0x310);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_314, 0x314);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_318, 0x318);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_31c, 0x31c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_320, 0x320);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_324, 0x324);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_328, 0x328);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_32c, 0x32c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_330, 0x330);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_334, 0x334);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_338, 0x338);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_33c, 0x33c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_340, 0x340);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_344, 0x344);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_348, 0x348);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_34c, 0x34c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_350, 0x350);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_354, 0x354);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_358, 0x358);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_35c, 0x35c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_360, 0x360);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_364, 0x364);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_368, 0x368);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_36c, 0x36c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_370, 0x370);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_374, 0x374);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_378, 0x378);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_37c, 0x37c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_380, 0x380);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_384, 0x384);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_388, 0x388);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_38c, 0x38c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_390, 0x390);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_394, 0x394);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_398, 0x398);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_39c, 0x39c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3a0, 0x3a0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3a4, 0x3a4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3a8, 0x3a8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3ac, 0x3ac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3b0, 0x3b0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3b4, 0x3b4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3b8, 0x3b8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3c0, 0x3c0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3c8, 0x3c8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3cc, 0x3cc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3dc, 0x3dc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3e0, 0x3e0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3e4, 0x3e4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3e8, 0x3e8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3ec, 0x3ec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3f0, 0x3f0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3f4, 0x3f4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3f8, 0x3f8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_3fc, 0x3fc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_400, 0x400);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_404, 0x404);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_408, 0x408);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_40c, 0x40c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_410, 0x410);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_414, 0x414);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_418, 0x418);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_41c, 0x41c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_420, 0x420);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_424, 0x424);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_428, 0x428);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_42c, 0x42c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_430, 0x430);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_434, 0x434);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_438, 0x438);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_43c, 0x43c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_440, 0x440);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_444, 0x444);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_448, 0x448);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_44c, 0x44c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_450, 0x450);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_454, 0x454);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_458, 0x458);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_45c, 0x45c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_460, 0x460);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_464, 0x464);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_468, 0x468);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_46c, 0x46c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_470, 0x470);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_474, 0x474);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_478, 0x478);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_480, 0x480);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_484, 0x484);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_488, 0x488);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_48c, 0x48c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_490, 0x490);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_494, 0x494);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_498, 0x498);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_49c, 0x49c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4a0, 0x4a0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4a4, 0x4a4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4a8, 0x4a8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4ac, 0x4ac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4b0, 0x4b0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4b4, 0x4b4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4b8, 0x4b8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4bc, 0x4bc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4c0, 0x4c0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4c4, 0x4c4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4c8, 0x4c8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4cc, 0x4cc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4d0, 0x4d0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4d4, 0x4d4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4d8, 0x4d8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4dc, 0x4dc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4e0, 0x4e0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4e4, 0x4e4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4e8, 0x4e8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4ec, 0x4ec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4f0, 0x4f0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4f4, 0x4f4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4f8, 0x4f8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_4fc, 0x4fc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_500, 0x500);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_504, 0x504);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_508, 0x508);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_50c, 0x50c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_510, 0x510);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_514, 0x514);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_518, 0x518);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_51c, 0x51c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_520, 0x520);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_524, 0x524);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_528, 0x528);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_52c, 0x52c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_530, 0x530);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_534, 0x534);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_538, 0x538);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_53c, 0x53c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_540, 0x540);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_544, 0x544);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_548, 0x548);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_54c, 0x54c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_550, 0x550);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_554, 0x554);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_558, 0x558);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_55c, 0x55c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_560, 0x560);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_564, 0x564);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_568, 0x568);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_56c, 0x56c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_570, 0x570);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_574, 0x574);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_578, 0x578);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_57c, 0x57c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_580, 0x580);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_584, 0x584);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_588, 0x588);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_58c, 0x58c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_590, 0x590);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_594, 0x594);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_598, 0x598);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_59c, 0x59c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5a0, 0x5a0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5a4, 0x5a4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5a8, 0x5a8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5ac, 0x5ac);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5b0, 0x5b0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5b4, 0x5b4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5b8, 0x5b8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5bc, 0x5bc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5c0, 0x5c0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5c4, 0x5c4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5c8, 0x5c8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5cc, 0x5cc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5d0, 0x5d0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5d4, 0x5d4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5d8, 0x5d8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5dc, 0x5dc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5e0, 0x5e0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5e4, 0x5e4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5e8, 0x5e8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5ec, 0x5ec);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5f0, 0x5f0);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5f4, 0x5f4);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5f8, 0x5f8);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_5fc, 0x5fc);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_600, 0x600);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_604, 0x604);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_608, 0x608);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_60c, 0x60c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_610, 0x610);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_614, 0x614);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_618, 0x618);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_61c, 0x61c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_620, 0x620);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_624, 0x624);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_628, 0x628);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_62c, 0x62c);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_630, 0x630);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_634, 0x634);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_638, 0x638);  // (from the original)
GUEST_OFFSET(Object_006b9038_0, word_63c, 0x63c);  // (from the original)

struct __attribute__((packed)) Local_006b9038_r0_3 {
    u8 unknown_0[0x180];  // (not used here)
    u32 word_180;
    u32 word_184;
    u32 word_188;
};
GUEST_OFFSET(Local_006b9038_r0_3, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Local_006b9038_r0_3, word_184, 0x184);  // (from the original)
GUEST_OFFSET(Local_006b9038_r0_3, word_188, 0x188);  // (from the original)

struct __attribute__((packed)) Local_006b9038_r1_1 {
    u8 unknown_0[0x760];  // (not used here)
    u32 word_760;
    u32 word_764;
    u32 word_768;
    u32 word_76c;
};
GUEST_OFFSET(Local_006b9038_r1_1, word_760, 0x760);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_1, word_764, 0x764);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_1, word_768, 0x768);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_1, word_76c, 0x76c);  // (from the original)

struct __attribute__((packed)) Local_006b9038_r1_2 {
    u8 unknown_0[0xd00];  // (not used here)
    u32 word_d00;
    u32 word_d04;
    u32 word_d08;
    u32 word_d0c;
};
GUEST_OFFSET(Local_006b9038_r1_2, word_d00, 0xd00);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_2, word_d04, 0xd04);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_2, word_d08, 0xd08);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_2, word_d0c, 0xd0c);  // (from the original)

struct __attribute__((packed)) Local_006b9038_r1_3 {
    u8 unknown_0[0x18c];  // (not used here)
    u32 word_18c;
    u32 word_190;
    u32 word_194;
    u32 word_198;
};
GUEST_OFFSET(Local_006b9038_r1_3, word_18c, 0x18c);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_3, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_3, word_194, 0x194);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_3, word_198, 0x198);  // (from the original)

struct __attribute__((packed)) Local_006b9038_r1_4 {
    u8 unknown_0[0x234];  // (not used here)
    u32 word_234;
    u32 word_238;
    u32 word_23c;
    u32 word_240;
};
GUEST_OFFSET(Local_006b9038_r1_4, word_234, 0x234);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_4, word_238, 0x238);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_4, word_23c, 0x23c);  // (from the original)
GUEST_OFFSET(Local_006b9038_r1_4, word_240, 0x240);  // (from the original)

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)

void f_006b9038(gptr<Object_006b9038_0> arg0) {
    u32 r0 = arg0.addr();
    gptr<Local_006b9038_r1_4> r1_4 = gptr<Local_006b9038_r1_4>(0u);
    u32 r5 = 0u;
    arg0->word_0 = r5;
    arg0->word_4 = r5;
    arg0->word_8 = r5;
    arg0->word_c = r5;
    arg0->word_10 = r5;
    arg0->word_14 = r5;
    arg0->word_18 = r5;
    arg0->word_1c = r5;
    arg0->word_20 = r5;
    arg0->word_24 = r5;
    arg0->word_28 = r5;
    arg0->word_2c = r5;
    arg0->word_30 = r5;
    u32 r4 = r0;
    arg0->word_34 = r5;
    arg0->word_38 = r5;
    arg0->word_3c = r5;
    arg0->word_40 = r5;
    arg0->word_44 = r5;
    arg0->word_48 = r5;
    arg0->word_4c = r5;
    arg0->word_50 = r5;
    arg0->word_54 = r5;
    arg0->word_58 = r5;
    arg0->word_5c = r5;
    arg0->word_60 = r5;
    arg0->word_64 = r5;
    arg0->word_68 = r5;
    arg0->word_6c = r5;
    arg0->word_70 = r5;
    arg0->word_74 = r5;
    arg0->word_78 = r5;
    arg0->word_7c = r5;
    arg0->word_80 = r5;
    arg0->word_84 = r5;
    arg0->word_88 = r5;
    arg0->word_8c = r5;
    arg0->word_90 = r5;
    arg0->word_94 = r5;
    arg0->word_98 = r5;
    arg0->word_9c = r5;
    arg0->word_a0 = r5;
    arg0->word_a4 = r5;
    arg0->word_a8 = r5;
    arg0->word_ac = r5;
    arg0->word_b0 = r5;
    arg0->word_b4 = r5;
    arg0->word_b8 = r5;
    arg0->word_bc = r5;
    arg0->word_c0 = r5;
    arg0->word_c4 = r5;
    arg0->word_c8 = r5;
    arg0->word_cc = r5;
    arg0->word_d0 = r5;
    arg0->word_d4 = r5;
    arg0->word_d8 = r5;
    arg0->word_dc = r5;
    arg0->word_e0 = r5;
    arg0->word_e4 = r5;
    arg0->word_e8 = r5;
    arg0->word_ec = r5;
    arg0->word_f0 = r5;
    arg0->word_f4 = r5;
    arg0->word_f8 = r5;
    arg0->word_fc = r5;
    arg0->word_100 = r5;
    arg0->word_104 = r5;
    arg0->word_108 = r5;
    arg0->word_10c = r5;
    arg0->word_110 = r5;
    arg0->word_114 = r5;
    arg0->word_118 = r5;
    arg0->word_11c = r5;
    arg0->word_120 = r5;
    arg0->word_124 = r5;
    arg0->word_128 = r5;
    arg0->word_12c = r5;
    arg0->word_130 = r5;
    arg0->word_134 = r5;
    arg0->word_138 = r5;
    arg0->word_13c = r5;
    arg0->word_140 = r5;
    arg0->word_144 = r5;
    arg0->word_148 = r5;
    arg0->word_14c = r5;
    arg0->word_150 = r5;
    arg0->word_154 = r5;
    arg0->word_158 = r5;
    arg0->word_15c = r5;
    arg0->word_160 = r5;
    arg0->word_164 = r5;
    arg0->word_168 = r5;
    arg0->word_16c = r5;
    arg0->word_170 = r5;
    arg0->word_174 = r5;
    arg0->word_178 = r5;
    arg0->word_17c = r5;
    arg0->word_180 = r5;
    arg0->word_184 = r5;
    arg0->word_188 = r5;
    arg0->word_18c = r5;
    arg0->word_190 = r5;
    arg0->word_194 = r5;
    arg0->word_198 = r5;
    arg0->word_19c = r5;
    arg0->word_1a0 = r5;
    arg0->word_1a4 = r5;
    arg0->word_1a8 = r5;
    arg0->word_1ac = r5;
    arg0->word_1b0 = r5;
    arg0->word_1b4 = r5;
    arg0->word_1b8 = r5;
    arg0->word_1bc = r5;
    arg0->word_1c0 = r5;
    arg0->word_1c4 = r5;
    arg0->word_1c8 = r5;
    arg0->word_1cc = r5;
    arg0->word_1d0 = r5;
    arg0->word_1d4 = r5;
    arg0->word_1d8 = r5;
    arg0->word_1dc = r5;
    arg0->word_1e0 = r5;
    arg0->word_1e4 = r5;
    arg0->word_1e8 = r5;
    arg0->word_1ec = r5;
    arg0->word_1f0 = r5;
    arg0->word_1f4 = r5;
    arg0->word_1f8 = r5;
    arg0->word_1fc = r5;
    arg0->word_200 = r5;
    arg0->word_204 = r5;
    arg0->word_208 = r5;
    arg0->word_20c = r5;
    arg0->word_210 = r5;
    arg0->word_214 = r5;
    arg0->word_218 = r5;
    arg0->word_21c = r5;
    arg0->word_220 = r5;
    arg0->word_224 = r5;
    arg0->word_228 = r5;
    arg0->word_22c = r5;
    arg0->word_230 = r5;
    arg0->word_234 = r5;
    arg0->word_238 = r5;
    arg0->word_23c = r5;
    arg0->word_240 = r5;
    arg0->word_244 = r5;
    arg0->word_248 = r5;
    arg0->word_24c = r5;
    arg0->word_250 = r5;
    arg0->word_254 = r5;
    arg0->word_258 = r5;
    arg0->word_25c = r5;
    arg0->word_260 = r5;
    arg0->word_264 = r5;
    arg0->word_268 = r5;
    arg0->word_26c = r5;
    arg0->word_270 = r5;
    arg0->word_274 = r5;
    arg0->word_278 = r5;
    arg0->word_27c = r5;
    arg0->word_280 = r5;
    arg0->word_284 = r5;
    arg0->word_288 = r5;
    arg0->word_28c = r5;
    arg0->word_290 = r5;
    arg0->word_294 = r5;
    arg0->word_298 = r5;
    arg0->word_29c = r5;
    arg0->word_2a0 = r5;
    arg0->word_2a4 = r5;
    arg0->word_2a8 = r5;
    arg0->word_2ac = r5;
    arg0->word_2b0 = r5;
    arg0->word_2b4 = r5;
    arg0->word_2b8 = r5;
    arg0->word_2bc = r5;
    arg0->word_2c0 = r5;
    arg0->word_2c4 = r5;
    arg0->word_2c8 = r5;
    arg0->word_2cc = r5;
    arg0->word_2d0 = r5;
    arg0->word_2d4 = r5;
    arg0->word_2d8 = r5;
    arg0->word_2dc = r5;
    arg0->word_2e0 = r5;
    arg0->word_2e4 = r5;
    arg0->word_2e8 = r5;
    arg0->word_2ec = r5;
    arg0->word_2f0 = r5;
    arg0->word_2f4 = r5;
    arg0->word_2f8 = r5;
    arg0->word_2fc = r5;
    arg0->word_300 = r5;
    arg0->word_304 = r5;
    arg0->word_308 = r5;
    arg0->word_30c = r5;
    arg0->word_310 = r5;
    arg0->word_314 = r5;
    arg0->word_318 = r5;
    arg0->word_31c = r5;
    arg0->word_320 = r5;
    arg0->word_324 = r5;
    arg0->word_328 = r5;
    arg0->word_32c = r5;
    arg0->word_330 = r5;
    arg0->word_334 = r5;
    arg0->word_338 = r5;
    arg0->word_33c = r5;
    arg0->word_340 = r5;
    arg0->word_344 = r5;
    arg0->word_348 = r5;
    arg0->word_34c = r5;
    arg0->word_350 = r5;
    arg0->word_354 = r5;
    arg0->word_358 = r5;
    arg0->word_35c = r5;
    arg0->word_360 = r5;
    arg0->word_364 = r5;
    arg0->word_368 = r5;
    arg0->word_36c = r5;
    arg0->word_370 = r5;
    arg0->word_374 = r5;
    arg0->word_378 = r5;
    arg0->word_37c = r5;
    arg0->word_380 = r5;
    arg0->word_384 = r5;
    arg0->word_388 = r5;
    arg0->word_38c = r5;
    arg0->word_390 = r5;
    arg0->word_394 = r5;
    arg0->word_398 = r5;
    arg0->word_39c = r5;
    arg0->word_3a0 = r5;
    arg0->word_3a4 = r5;
    arg0->word_3a8 = r5;
    arg0->word_3ac = r5;
    arg0->word_3b0 = r5;
    arg0->word_3b4 = r5;
    arg0->word_3b8 = r5;
    arg0->word_3bc = r5;
    arg0->word_3c0 = r5;
    arg0->word_3c4 = r5;
    arg0->word_3c8 = r5;
    arg0->word_3cc = r5;
    arg0->word_3d0 = r5;
    arg0->word_3d4 = r5;
    arg0->word_3d8 = r5;
    arg0->word_3dc = r5;
    arg0->word_3e0 = r5;
    arg0->word_3e4 = r5;
    arg0->word_3e8 = r5;
    arg0->word_3ec = r5;
    arg0->word_3f0 = r5;
    arg0->word_3f4 = r5;
    arg0->word_3f8 = r5;
    arg0->word_3fc = r5;
    arg0->word_400 = r5;
    arg0->word_404 = r5;
    arg0->word_408 = r5;
    arg0->word_40c = r5;
    arg0->word_410 = r5;
    arg0->word_414 = r5;
    arg0->word_418 = r5;
    arg0->word_41c = r5;
    arg0->word_420 = r5;
    arg0->word_424 = r5;
    arg0->word_428 = r5;
    arg0->word_42c = r5;
    arg0->word_430 = r5;
    arg0->word_434 = r5;
    arg0->word_438 = r5;
    arg0->word_43c = r5;
    arg0->word_440 = r5;
    arg0->word_444 = r5;
    arg0->word_448 = r5;
    arg0->word_44c = r5;
    arg0->word_450 = r5;
    arg0->word_454 = r5;
    arg0->word_458 = r5;
    arg0->word_45c = r5;
    arg0->word_460 = r5;
    arg0->word_464 = r5;
    arg0->word_468 = r5;
    arg0->word_46c = r5;
    arg0->word_470 = r5;
    arg0->word_474 = r5;
    arg0->word_478 = r5;
    arg0->word_47c = r5;
    arg0->word_480 = r5;
    arg0->word_484 = r5;
    arg0->word_488 = r5;
    arg0->word_48c = r5;
    arg0->word_490 = r5;
    arg0->word_494 = r5;
    arg0->word_498 = r5;
    arg0->word_49c = r5;
    arg0->word_4a0 = r5;
    arg0->word_4a4 = r5;
    arg0->word_4a8 = r5;
    arg0->word_4ac = r5;
    arg0->word_4b0 = r5;
    arg0->word_4b4 = r5;
    arg0->word_4b8 = r5;
    arg0->word_4bc = r5;
    arg0->word_4c0 = r5;
    arg0->word_4c4 = r5;
    arg0->word_4c8 = r5;
    arg0->word_4cc = r5;
    arg0->word_4d0 = r5;
    arg0->word_4d4 = r5;
    arg0->word_4d8 = r5;
    arg0->word_4dc = r5;
    arg0->word_4e0 = r5;
    arg0->word_4e4 = r5;
    arg0->word_4e8 = r5;
    arg0->word_4ec = r5;
    arg0->word_4f0 = r5;
    arg0->word_4f4 = r5;
    arg0->word_4f8 = r5;
    arg0->word_4fc = r5;
    arg0->word_500 = r5;
    arg0->word_504 = r5;
    arg0->word_508 = r5;
    arg0->word_50c = r5;
    arg0->word_510 = r5;
    arg0->word_514 = r5;
    arg0->word_518 = r5;
    arg0->word_51c = r5;
    arg0->word_520 = r5;
    arg0->word_524 = r5;
    arg0->word_528 = r5;
    arg0->word_52c = r5;
    arg0->word_530 = r5;
    arg0->word_534 = r5;
    arg0->word_538 = r5;
    arg0->word_53c = r5;
    arg0->word_540 = r5;
    arg0->word_544 = r5;
    arg0->word_548 = r5;
    arg0->word_54c = r5;
    arg0->word_550 = r5;
    arg0->word_554 = r5;
    arg0->word_558 = r5;
    arg0->word_55c = r5;
    arg0->word_560 = r5;
    arg0->word_564 = r5;
    arg0->word_568 = r5;
    arg0->word_56c = r5;
    arg0->word_570 = r5;
    arg0->word_574 = r5;
    arg0->word_578 = r5;
    arg0->word_57c = r5;
    arg0->word_580 = r5;
    arg0->word_584 = r5;
    arg0->word_588 = r5;
    arg0->word_58c = r5;
    arg0->word_590 = r5;
    arg0->word_594 = r5;
    arg0->word_598 = r5;
    arg0->word_59c = r5;
    arg0->word_5a0 = r5;
    arg0->word_5a4 = r5;
    arg0->word_5a8 = r5;
    arg0->word_5ac = r5;
    arg0->word_5b0 = r5;
    arg0->word_5b4 = r5;
    arg0->word_5b8 = r5;
    arg0->word_5bc = r5;
    arg0->word_5c0 = r5;
    arg0->word_5c4 = r5;
    arg0->word_5c8 = r5;
    arg0->word_5cc = r5;
    arg0->word_5d0 = r5;
    arg0->word_5d4 = r5;
    arg0->word_5d8 = r5;
    arg0->word_5dc = r5;
    arg0->word_5e0 = r5;
    arg0->word_5e4 = r5;
    arg0->word_5e8 = r5;
    arg0->word_5ec = r5;
    arg0->word_5f0 = r5;
    arg0->word_5f4 = r5;
    arg0->word_5f8 = r5;
    arg0->word_5fc = r5;
    arg0->word_600 = r5;
    arg0->word_604 = r5;
    arg0->word_608 = r5;
    arg0->word_60c = r5;
    arg0->word_610 = r5;
    arg0->word_614 = r5;
    arg0->word_618 = r5;
    arg0->word_61c = r5;
    arg0->word_620 = r5;
    arg0->word_624 = r5;
    arg0->word_628 = r5;
    arg0->word_62c = r5;
    arg0->word_630 = r5;
    arg0->word_634 = r5;
    arg0->word_638 = r5;
    arg0->word_63c = r5;
    call_002f825c(r4 + 0x640u, 0x120u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_1> r1_1 = gptr<Local_006b9038_r1_1>(r4 + (r0 << 4));
        r0 += 1u;
        r1_1->word_760 = r5;
        r1_1->word_764 = r5;
        r1_1->word_768 = r5;
        r1_1->word_76c = r5;
        guest::preempt();
    } while (r0 < 0x48u);  // (from the original)
    call_002f825c(r4 + 0xbe0u, 0x120u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_2> r1_2 = gptr<Local_006b9038_r1_2>(r4 + (r0 << 4));
        r0 += 1u;
        r1_2->word_d00 = r5;
        r1_2->word_d04 = r5;
        r1_2->word_d08 = r5;
        r1_2->word_d0c = r5;
        guest::preempt();
    } while (r0 < 0x48u);  // (from the original)
    gptr<Local_006b9038_r0_3> r0_3 = gptr<Local_006b9038_r0_3>(r4 + 0x1000u);  // (from the original)
    r0_3->word_180 = r5;
    r0_3->word_184 = r5;
    r0_3->word_188 = r5;
    r0 = 0u;
    do {
        gptr<Local_006b9038_r1_3> r1_3 = gptr<Local_006b9038_r1_3>(r4 + (r0 << 4) + 0x1000u);  // (from the original)
        r0 += 1u;
        r1_3->word_18c = r5;
        r1_3->word_190 = r5;
        r1_3->word_194 = r5;
        r1_3->word_198 = r5;
        guest::preempt();
    } while (r0 < 3u);
    call_002f825c(r4 + 0x11bcu, 0x78u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r0 = 0u;
    do {
        r1_4 = gptr<Local_006b9038_r1_4>(r4 + (r0 << 4) + 0x1000u);  // (from the original)
        r0 += 1u;
        r1_4->word_234 = r5;
        r1_4->word_238 = r5;
        r1_4->word_23c = r5;
        r1_4->word_240 = r5;
        guest::preempt();
    } while (r0 < 0x1eu);  // (from the original)
    guest::cpu()->r[1] = r1_4.addr();
    return;
}

}  // namespace d_006b9038
GUEST_EXPORT_FRAMED(0x006b9038, d_006b9038::f_006b9038, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006b9904: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9904 {


void f_006b9904(gptr<Item> arg0) {
    arg0->flags = u16(u32(arg0->flags) & 0xc000u);  // (from the original)
    return;
}

}  // namespace d_006b9904
GUEST_EXPORT(0x006b9904, d_006b9904::f_006b9904);

// f_006b9934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9934 {

inline constexpr guest::Function<0x0076a36c, u32(u32, u32)> call_0076a36c;  // (from the original)

u32 f_006b9934(u32 r0) {
    u32 r0_1 = call_0076a36c(r0, r0);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = *gptr<u16>(r1_1);
    if ((r0_2 & ~0x8000u) == 0x70u) {  // (from the original)
        u32 r0_3 = r0_2 & 0x8000u | 0x26u;  // (from the original)
        *gptr<u16>(r1_1) = u16(r0_3);
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    u32 r2_1 = *gptr<u16>(r1_1 + 2u);
    u32 r0_4 = r2_1 & ~0xc300u & ~0x87u | 3u | r2_1 & 0xc000u;  // (from the original)
    *gptr<u16>(r1_1 + 2u) = u16(r0_4);
    guest::cpu()->r[1] = r1_1;
    return r0_4;
}

}  // namespace d_006b9934
GUEST_EXPORT_FRAMED(0x006b9934, d_006b9934::f_006b9934, 0x4000);  // pushes {lr} first, as the original

// f_006b9b5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9b5c {


void f_006b9b5c(gptr<Item> arg0) {
    u32 r2_1 = arg0->flags;
    u32 r1_1 = r2_1 & ~0xc000u | (r2_1 >> 0xe & ~2u) << 0xe;  // (from the original)
    arg0->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006b9b5c
GUEST_EXPORT(0x006b9b5c, d_006b9b5c::f_006b9b5c);

// f_006b9c98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9c98 {

inline constexpr guest::Function<0x001acdc4, u32(u32, u32, u32)> call_001acdc4;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x005359fc, u32(u32, u32, u32)> call_005359fc;  // (from the original)
inline constexpr guest::Function<0x005361a8, u32(u32, u32, u32, u32)> call_005361a8;  // (from the original)
inline constexpr guest::Function<0x006f34b4, u32(u32, u32, u32)> call_006f34b4;  // (from the original)

void f_006b9c98(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r0_2 = 0;
    u32 r1_2 = 0;
    u32 r4_2 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = call_005361a8(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        r4_1 = ~0u;
        goto L_6b9cdc;
    }
    r0_2 = *gptr<u8>(r0_1 + 0xau);  // (from the original)
    r1_2 = *gptr<u16>(r1);
    r4_2 = r1_2 & ~0x8000u;  // (from the original)
    if (r0_2 >= 0x9bu) {  // (from the original)
        r0_2 = 0u;
    }
    r0_3 = call_005359fc(r0_2, r1_2, r2_1);
    r1_1 = guest::cpu()->r[1];
    r2_1 = guest::cpu()->r[2];
    r4_1 = r4_2 - u32(*gptr<u16>(r0_3));
L_6b9cdc:;
    call_002fc288(frame.at(0).addr(), r1_1, r2_1);
    call_006f34b4(frame.at(0).addr(), 0xeu, guest::cpu()->r[2]);  // (from the original)
    call_001acdc4(r0, r4_1, frame.at(0).addr());
    return;
}

}  // namespace d_006b9c98
GUEST_EXPORT_FRAMED(0x006b9c98, d_006b9c98::f_006b9c98, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006b9d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9d30 {


void f_006b9d30(gptr<Item> arg0, u32 r1) {
    u32 r1_1 = r1 & ~0xc000u | 0x400u | u32(arg0->flags) & 0xc000u;  // (from the original)
    arg0->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006b9d30
GUEST_EXPORT(0x006b9d30, d_006b9d30::f_006b9d30);

// f_006b9d78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9d78 {


u32 f_006b9d78(u32 r0) {
    if (r0 == 3u || r0 == 7u || r0 == 5u || r0 == 0x16u) {  // (from the original)
        return 1u;
    }
    if (r0 != 0x1au) {  // (from the original)
        return 0u;
    }
    return 1u;
}

}  // namespace d_006b9d78
GUEST_EXPORT(0x006b9d78, d_006b9d78::f_006b9d78);

// f_006b9de8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006b9de8 {


u32 f_006b9de8(u32 r0) {
    return r0 == 0x17u ? 1u : 0u;  // (from the original)
}

}  // namespace d_006b9de8
GUEST_EXPORT(0x006b9de8, d_006b9de8::f_006b9de8);

// f_006bacd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bacd8 {


void f_006bacd8(gptr<Item> arg0, u32 r1) {
    u32 r1_1 = r1 & ~0xc000u | u32(arg0->flags) & 0xc000u;  // (from the original)
    arg0->flags = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006bacd8
GUEST_EXPORT(0x006bacd8, d_006bacd8::f_006bacd8);

// f_006bb1a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb1a0 {


void f_006bb1a0(gptr<Item> arg0) {
    u32 r1_1 = arg0->id;
    u32 r2_1 = (r1_1 & ~0x8000u) - 0x3057u;  // (from the original)
    if (r2_1 == 0) {
        u32 r1_2 = r1_1 & 0x8000u | 0x3000u | 0x58u;  // (from the original)
        arg0->id = u16(r1_2);
        guest::cpu()->r[1] = r1_2;
        return;
    }
    if (r2_1 == 3u) {
        u32 r1_3 = r1_1 & 0x8000u | 0x3000u | 0x5bu;  // (from the original)
        arg0->id = u16(r1_3);
        guest::cpu()->r[1] = r1_3;
        return;
    }
    if (r2_1 == 0xdu) {  // (from the original)
        u32 r1_4 = r1_1 & 0x8000u | 0x3000u | 0x65u;  // (from the original)
        arg0->id = u16(r1_4);
        guest::cpu()->r[1] = r1_4;
        return;
    }
    if (r2_1 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_5 = r1_1 & 0x8000u | 0x3000u | 0x68u;  // (from the original)
    arg0->id = u16(r1_5);
    guest::cpu()->r[1] = r1_5;
    return;
}

}  // namespace d_006bb1a0
GUEST_EXPORT(0x006bb1a0, d_006bb1a0::f_006bb1a0);

// f_006bb3bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb3bc {

inline constexpr guest::Function<0x006ba294, u32(u32, u32, u32, u32)> call_006ba294;  // (from the original)
inline constexpr guest::Function<0x007684a4, u32(u32, u32)> call_007684a4;  // (from the original)

u32 f_006bb3bc(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r6_1 = 0;
    u32 r0_1 = call_006ba294(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 + 1u == 0) {
        return 0u;
    }
    u32 r0_3 = call_007684a4(r0, r1_1);
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r6_1 = u32(*gptr<u16>(r0 + 2u)) >> 0xau & 0xfu;  // (from the original)
        if (r6_1 <= 0xdu) {  // (from the original)
            goto L_6bb404;
        }
    }
    r6_1 = 0u;
L_6bb404:;
    r0_2 = call_007684a4(r0, r1_2);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 == 0) {
        return r0_2;
    }
    r1_1 = u32(*gptr<u16>(r0 + 2u)) & 0xc000u;  // (from the original)
    *gptr<u16>(r0 + 2u) = u16(r0_1 + (r6_1 << 0xa) & ~0xc000u | r1_1);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_006bb3bc
GUEST_EXPORT_FRAMED(0x006bb3bc, d_006bb3bc::f_006bb3bc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bb5c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb5c4 {

struct __attribute__((packed)) Object_006bb5c4_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_006bb5c4_0, half_0, 0x0);  // (from the original)


void f_006bb5c4(gptr<Object_006bb5c4_0> arg0) {
    u32 r1_1 = arg0->half_0;
    u32 r2_1 = r1_1 & ~0x8000u;  // (from the original)
    u32 res_1 = r2_1 - 0x33b8u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 r12_1 = r2_1 - 0x33b8u;  // (from the original)
    if (zf_1) {
        arg0->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb1u);  // (from the original)
        return;
    }
    if (!!zf_1 || (res_1 >> 0x1f) != (((r2_1 ^ 0x33b8u) & (r2_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        u32 r2_2 = r2_1 - 0x33a9u;  // (from the original)
        if (r2_2 == 0) {
            arg0->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3a8u);  // (from the original)
            return;
        }
        if (r2_2 == 0xcu) {  // (from the original)
            arg0->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xaeu);  // (from the original)
            return;
        }
        if (r2_2 == 0xdu) {  // (from the original)
            arg0->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xafu);  // (from the original)
            return;
        }
        if (r2_2 != 0xeu) {  // (from the original)
            return;
        }
        arg0->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3b0u);  // (from the original)
        return;
    }
    if (r12_1 == 1u) {
        arg0->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb2u);  // (from the original)
        return;
    }
    if (r12_1 == 2u) {
        arg0->half_0 = u16(r1_1 & 0x8000u | 0x3300u | 0xb3u);  // (from the original)
        return;
    }
    if (r12_1 == 3u) {
        arg0->half_0 = u16(r1_1 & 0x8000u | 0x3000u | 0x3b4u);  // (from the original)
        return;
    }
    return;
}

}  // namespace d_006bb5c4
GUEST_EXPORT(0x006bb5c4, d_006bb5c4::f_006bb5c4);

// f_006bb91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bb91c {

inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;  // (from the original)
inline constexpr guest::Function<0x00304f30, u32(u32, u32, u32, u32)> call_00304f30;  // (from the original)

void f_006bb91c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_002ff8b0(4u, r1, r2, r3);
    if (r0_1 < 8u) {
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        call_00304f30(r0, 0u, r0_1, r1);
        return;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    call_00304f30(r0, 0u, 0u, r1);
    return;
}

}  // namespace d_006bb91c
GUEST_EXPORT(0x006bb91c, d_006bb91c::f_006bb91c);

// f_006bbbd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bbbd8 {


void f_006bbbd8(gptr<Item> arg0, u32 r1) {
    u32 r3_1 = u32(arg0->id) & 0x8000u | 0x2000u;  // (from the original)
    arg0->id = u16(r3_1);
    u32 r2_1 = u32(arg0->flags) & ~0xc000u;  // (from the original)
    arg0->flags = u16(r2_1);
    if ((r3_1 & ~0x8000u) != 0x2000u) {  // (from the original)
        return;
    }
    arg0->flags = u16(r1 & ~0xc000u | r2_1 & 0xc000u);  // (from the original)
    return;
}

}  // namespace d_006bbbd8
GUEST_EXPORT(0x006bbbd8, d_006bbbd8::f_006bbbd8);

// f_006bc04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc04c {

inline guest::global<u8, 0x0095bf80> global_0095bf80;  // (from the original)
inline constexpr guest::Function<0x00134544, u32(u32, u32, u32, u32)> call_00134544;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> call_003081b4;  // (from the original)
inline constexpr guest::Function<0x00583778, u32(u32, u32, u32, u32)> call_00583778;  // (from the original)

u32 f_006bc04c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    guest::cpu()->r[13] -= 0x18u;  // (from the original)
    u32 r4 = r0;
    u32 r0_1 = *global_0095bf80;
    if (r0_1 != 0) {
        u32 r0_2 = call_002fb328(r0_1);
        guest::cpu()->r[13] += 0x18u;  // (from the original)
        return call_003081b4(r4, 0x6e21au + (r0_2 + 0x80u));  // (from the original)
    }
    u32 r0_3 = call_00583778(r0_1, r1, r2, r3);
    call_00134544(0xad5394u, r0_3, 0x10u, guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = 0xad5394u;  // (from the original)
    r2 = r1;
    u32 r12 = 8u;
    u32 r7 = 0x10u;  // (from the original)
    u32 r6 = 1u;
    do {
        u32 b_1 = r1 << 1;
        u32 zf_1 = r7 == b_1;
        u32 cf_1 = r7 >= b_1;
        if (cf_1 && !zf_1) {
            r3 = r0 + r2;
        }
        if (!cf_1 || zf_1) {
            r3 = r0;
        }
        u32 r5_1 = r6 + (r1 << 1) >= 0x10u ? r0 : r0 + r2 + 1u;  // (from the original)
        res_1 = r12 - 1u;
        r12 = res_1;
        r2 += 2u;
        r3 = u32(*gptr<u8>(r3)) & 0xfu | u32(*gptr<u8>(r5_1)) << 4;  // (from the original)
        r1 += 1u;
        *gptr<u8>(r4) = u8(r3);
        r4 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    guest::cpu()->r[13] += 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_006bc04c
GUEST_EXPORT(0x006bc04c, d_006bc04c::f_006bc04c);

// f_006bc104: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc104 {


u32 f_006bc104(u32 r0, u32 r1) {
    u32 r12 = guest::cpu()->r[12];
    u32 res_1 = 0;
    u32 r2 = 0u;
    u32 r3 = r2;
    u32 r4 = 8u;
    u32 r6 = 0x10u;  // (from the original)
    u32 r7 = 1u;
    do {
        u32 b_1 = r2 << 1;
        u32 zf_1 = r6 == b_1;
        u32 cf_1 = r6 >= b_1;
        if (cf_1 && !zf_1) {
            r12 = r1 + r3;
        }
        if (!cf_1 || zf_1) {
            r12 = r1;
        }
        u32 r5_1 = r7 + (r2 << 1) >= 0x10u ? r1 : r1 + r3 + 1u;  // (from the original)
        res_1 = r4 - 1u;
        r4 = res_1;
        r3 += 2u;
        r12 = u32(*gptr<u8>(r12)) & 0xfu | u32(*gptr<u8>(r5_1)) << 4;  // (from the original)
        r2 += 1u;
        *gptr<u8>(r0) = u8(r12);
        r0 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    return r0;
}

}  // namespace d_006bc104
GUEST_EXPORT_FRAMED(0x006bc104, d_006bc104::f_006bc104, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_006bc16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc16c {

inline constexpr guest::Function<0x001b5e20, u32(u32, u32, u32, u32)> call_001b5e20;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x006bc4fc, u32(u32, u32, u32, u32)> call_006bc4fc;  // (from the original)
inline constexpr guest::Function<0x0076d668, u32(u32, u32, u32, u32)> call_0076d668;  // (from the original)

u32 f_006bc16c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2 = 0;
    u32 r0_14 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = 0u;
    u32 r7 = r0;
    u32 r6 = r1;
    u32 r4 = (r1 & 3u) + 1u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x2cu, r5, r3);  // (from the original)
        u32 r0_2 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_2 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x43u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x27u, r5, r3);  // (from the original)
        u32 r0_4 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_4 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x28u, r5, r3);  // (from the original)
        u32 r0_6 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_6 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x1eu);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x24u, r5, r3);  // (from the original)
        u32 r0_8 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_8 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x48u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x54u, r5, r3);  // (from the original)
        u32 r0_10 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r3 = guest::cpu()->r[3];
        if (r0_10 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x19u);  // (from the original)
    r5 = 0u;
    do {
        call_006bbd54(frame.at(0).addr(), 0x58u, r5, r3);  // (from the original)
        u32 r0_12 = call_0076d668(r7, frame.at(0).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_12 == r4) {
            call_006bc4fc(r7, frame.at(0).addr(), r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    r4 = 0u;
    do {
        u32 r0_13 = r7 + (r4 * 0x173u << 3) + 0x55cu;  // (from the original)
        r0_14 = s32(s8(*gptr<u8>(r0_13)));
        if (r0_14 == r6) {
            r0_14 = call_001b5e20(r0_13, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1;
    return r0_14;
}

}  // namespace d_006bc16c
GUEST_EXPORT_FRAMED(0x006bc16c, d_006bc16c::f_006bc16c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006bc3b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc3b4 {

struct __attribute__((packed)) Local_006bc3b4_r2_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r2_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r2_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r2_1, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_006bc3b4_r3_1 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_1, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_1, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_006bc3b4_r3_2 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_2, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_2, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_006bc3b4_r3_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_3, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_3, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_006bc3b4_r3_4 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_4, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_4, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_4, byte_3, 0x3);  // (from the original)

struct __attribute__((packed)) Local_006bc3b4_r3_5 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_006bc3b4_r3_5, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_5, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_006bc3b4_r3_5, byte_3, 0x3);  // (from the original)


void f_006bc3b4(u32 r0) {
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 res_4 = 0;
    u32 res_5 = 0;
    u32 res_6 = 0;
    u32 r2 = 0u;
    u32 r1 = r2;
    do {
        gptr<Local_006bc3b4_r3_1> r3_1 = gptr<Local_006bc3b4_r3_1>(r0 + (r2 << 2));
        u32 r12_1 = r0 + r2;
        r3_1->half_0 = u16(r1);
        r3_1->byte_2 = u8(r1);
        r2 += 1u;
        r3_1->byte_3 = u8(r1);
        res_1 = r2 - 0x43u;  // (from the original)
        *gptr<u8>(r12_1 + 0x448u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r2 ^ 0x43u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_2 = r0 + r2;
        gptr<Local_006bc3b4_r3_2> r3_2 = gptr<Local_006bc3b4_r3_2>(r0 + (r2 << 2) + 0x10cu);  // (from the original)
        r2 += 1u;
        r3_2->half_0 = u16(r1);
        r3_2->byte_2 = u8(r1);
        r3_2->byte_3 = u8(r1);
        res_2 = r2 - 0x48u;  // (from the original)
        *gptr<u8>(r12_2 + 0x48bu) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_2 >> 0x1f != ((r2 ^ 0x48u) & (r2 ^ res_2)) >> 0x1f);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_3 = r0 + r2;
        gptr<Local_006bc3b4_r3_3> r3_3 = gptr<Local_006bc3b4_r3_3>(r0 + (r2 << 2) + 0x22cu);  // (from the original)
        r2 += 1u;
        r3_3->half_0 = u16(r1);
        r3_3->byte_2 = u8(r1);
        r3_3->byte_3 = u8(r1);
        res_3 = r2 - 0x1eu;  // (from the original)
        *gptr<u8>(r12_3 + 0x4d3u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_3 >> 0x1f != ((r2 ^ 0x1eu) & (r2 ^ res_3)) >> 0x1f);  // (from the original)
    u32 r3 = 0u;
    do {
        u32 r12_4 = r0 + r3;
        gptr<Local_006bc3b4_r2_1> r2_1 = gptr<Local_006bc3b4_r2_1>(r0 + (r3 << 2) + 0x2a4u);  // (from the original)
        r3 += 1u;
        r2_1->half_0 = u16(r1);
        r2_1->byte_2 = u8(r1);
        r2_1->byte_3 = u8(r1);
        res_4 = r3 - 0x48u;  // (from the original)
        *gptr<u8>(r12_4 + 0x4f1u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_4 >> 0x1f != ((r3 ^ 0x48u) & (r3 ^ res_4)) >> 0x1f);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_5 = r0 + r2;
        gptr<Local_006bc3b4_r3_4> r3_4 = gptr<Local_006bc3b4_r3_4>(r0 + (r2 << 2) + 0x3c4u);  // (from the original)
        r2 += 1u;
        r3_4->half_0 = u16(r1);
        r3_4->byte_2 = u8(r1);
        r3_4->byte_3 = u8(r1);
        res_5 = r2 - 0x19u;  // (from the original)
        *gptr<u8>(r12_5 + 0x539u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_5 >> 0x1f != ((r2 ^ 0x19u) & (r2 ^ res_5)) >> 0x1f);  // (from the original)
    r2 = 0u;
    do {
        u32 r12_6 = r0 + r2;
        gptr<Local_006bc3b4_r3_5> r3_5 = gptr<Local_006bc3b4_r3_5>(r0 + (r2 << 2) + 0x428u);  // (from the original)
        r2 += 1u;
        r3_5->half_0 = u16(r1);
        r3_5->byte_2 = u8(r1);
        r3_5->byte_3 = u8(r1);
        res_6 = r2 - 8u;
        *gptr<u8>(r12_6 + 0x552u) = u8(r1);  // (from the original)
        guest::preempt();
    } while (res_6 >> 0x1f != ((r2 ^ 8u) & (r2 ^ res_6)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006bc3b4
GUEST_EXPORT(0x006bc3b4, d_006bc3b4::f_006bc3b4);

// f_006bc4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc4fc {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x002ffad8, u32(u32, u32, u32, u32)> call_002ffad8;  // (from the original)
inline constexpr guest::Function<0x0076d714, u32(u32, u32, u32, u32)> call_0076d714;  // (from the original)

void f_006bc4fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002fcb34(r1, r1, r2, r3);
    u32 r0_2 = call_002ffad8(r1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_3 = call_0076d714(r0, r0_1, r0_2, r0_2);
    r1 = guest::cpu()->r[1];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        return;
    }
    u32 res_1 = r0_1 - 0x2cu;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (zf_1) {
        r1 = r0 + r3_2;
    }
    if (zf_1) {
        *gptr<u8>(r1 + 0x448u) = 5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (!zf_1 && (res_1 >> 0x1f) == (((r0_1 ^ 0x2cu) & (r0_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        goto L_6bc580;
    }
    if (r0_1 == 0x24u) {  // (from the original)
        r1 = r0 + r3_2;
        *gptr<u8>(r1 + 0x4f1u) = 5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r0_1 == 0x27u) {  // (from the original)
        r1 = r0 + r3_2;
        *gptr<u8>(r1 + 0x48bu) = 5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r0_1 == 0x28u) {  // (from the original)
        r1 = r0 + r3_2;
        *gptr<u8>(r1 + 0x4d3u) = 5;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return;
L_6bc580:;
    if (r0_1 == 0x54u) {  // (from the original)
        r1 = r0 + r3_2;
        *gptr<u8>(r1 + 0x539u) = 5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    if (r0_1 == 0x58u) {  // (from the original)
        r1 = r0 + r3_2;
        *gptr<u8>(r1 + 0x552u) = 5;  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_006bc4fc
GUEST_EXPORT_FRAMED(0x006bc4fc, d_006bc4fc::f_006bc4fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc5a0 {

inline constexpr guest::Function<0x001b5e20, u32(u32, u32, u32, u32)> call_001b5e20;  // (from the original)

void f_006bc5a0(u32 r0) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_001b5e20(r5 + (r4 * 0x173u << 3) + 0x55cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return;
}

}  // namespace d_006bc5a0
GUEST_EXPORT_FRAMED(0x006bc5a0, d_006bc5a0::f_006bc5a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc5d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc5d8 {

inline constexpr guest::Function<0x001b5f7c, u32(u32)> call_001b5f7c;  // (from the original)
inline constexpr guest::Function<0x006bc3b4, u32(u32, u32, u32, u32)> call_006bc3b4;  // (from the original)

void f_006bc5d8(u32 r0) {
    u32 r5 = r0;
    call_006bc3b4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r4 = 0u;
    do {
        call_001b5f7c(r5 + (r4 * 0x173u << 3) + 0x55cu);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    return;
}

}  // namespace d_006bc5d8
GUEST_EXPORT_FRAMED(0x006bc5d8, d_006bc5d8::f_006bc5d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bc9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc9b0 {

inline constexpr guest::Function<0x00582bc0, u32(u32, u32, u32, u32)> call_00582bc0;  // (from the original)

void f_006bc9b0() {
    call_00582bc0(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_006bc9b0
GUEST_EXPORT(0x006bc9b0, d_006bc9b0::f_006bc9b0);

// f_006bc9b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bc9b4 {

struct __attribute__((packed)) Object_006bc9b4_0 {
    u8 unknown_0[0x6bb0];  // (not used here)
    u32 word_6bb0;
    u32 word_6bb4;
};
GUEST_OFFSET(Object_006bc9b4_0, word_6bb0, 0x6bb0);  // (from the original)
GUEST_OFFSET(Object_006bc9b4_0, word_6bb4, 0x6bb4);  // (from the original)

inline guest::global<u32, 0x0095c2c0> global_0095c2c0;  // (from the original)
inline constexpr guest::Function<0x0012e640, u32(u32, u32, u32, u32)> call_0012e640;  // (from the original)
inline constexpr guest::Function<0x006f0130, u32(u32, u32, u32, u32)> call_006f0130;  // (from the original)

u32 f_006bc9b4(gptr<Object_006bc9b4_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_1 = arg0->word_6bb0;
    u32 res_1 = r0_1 + r2;
    u32 cf_1 = res_1 < r0_1;
    u32 r2_1 = u64(arg0->word_6bb4) + r3 + cf_1;
    u64 t_1 = u64(~0x80000000u) + ~r2_1 + u32(~0u >= res_1);  // (from the original)
    u32 r4_1 = t_1;
    if (u32(t_1 >> 0x20)) {  // (from the original)
        arg0->word_6bb0 = res_1;
        arg0->word_6bb4 = r2_1;
        goto L_6bc9f8;
    }
    arg0->word_6bb0 = ~0u;
    arg0->word_6bb4 = ~0x80000000u;  // (from the original)
L_6bc9f8:;
    u32 r0_2 = call_0012e640(r2, r3, 0x3cu, 0u);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    call_006f0130(0x10u, r0_2, r2_2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_3 = *global_0095c2c0 + r2_2;
    *global_0095c2c0 = r0_3;
    if (r0_3 >= 0x3cu) {  // (from the original)
        call_006f0130(0x10u, 1u, r2_2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r0_3 = *global_0095c2c0 - 0x3cu;  // (from the original)
        *global_0095c2c0 = r0_3;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_006bc9b4
GUEST_EXPORT_FRAMED(0x006bc9b4, d_006bc9b4::f_006bc9b4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bcdf0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bcdf0 {

inline constexpr guest::Function<0x00582d34, u32(u32, u32, u32, u32)> call_00582d34;  // (from the original)

u32 f_006bcdf0() {
    return call_00582d34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006bcdf0
GUEST_EXPORT(0x006bcdf0, d_006bcdf0::f_006bcdf0);

// f_006bd2c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd2c8 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x00615964, u32(u32, u32, u32)> call_00615964;  // (from the original)
inline constexpr guest::Function<0x00616c68, u32(u32, u32, u32)> call_00616c68;  // (from the original)
inline constexpr guest::Function<0x00700adc, u32(u32, u32, u32)> call_00700adc;  // (from the original)

u32 f_006bd2c8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r4_1 = 0u;
    u32 r0_1 = call_002fcb34(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    if (r0_1 != 0x24u) {  // (from the original)
        if (r0_1 == 0x27u || r0_1 == 0x28u) {  // (from the original)
            goto L_6bd314;
        }
        return r4_1;
    }
    r0_2 = call_00700adc(r1, r1_1, r2_1);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 < 0x48u) {  // (from the original)
        goto L_6bd368;
    }
    return 0u;
L_6bd314:;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0x27;  // (from the original)
    r0_3 = call_00615964(r1, r1_1, r2_1);
    r1_2 = frame.at(4).addr();
    r0_4 = frame.at(0).addr();
    call_00616c68(r0_4, r1_2, r0_3);
    r0_2 = *frame.at<u32>(0);
    r1_1 = *frame.at<u32>(4) & 0xffu;  // (from the original)
    if (r1_1 != 0x24u) {  // (from the original)
        if (r1_1 == 0x27u) {  // (from the original)
            goto L_6bd378;
        }
        if (r1_1 != 0x28u) {  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        goto L_6bd390;
    }
    if (r0_2 >= 0x48u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
L_6bd368:;
    r4_1 = *gptr<u16>(r0 + (r0_2 << 1) + 0xa288u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
L_6bd378:;
    if (r0_2 >= 0x48u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r4_1 = *gptr<u16>(r0 + (r0_2 << 1) + 0xa318u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
L_6bd390:;
    if (r0_2 >= 0x1eu) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    r4_1 = *gptr<u16>(r0 + (r0_2 << 1) + 0xa3a8u);  // (from the original)
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_006bd2c8
GUEST_EXPORT_FRAMED(0x006bd2c8, d_006bd2c8::f_006bd2c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006bd550: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd550 {

inline constexpr guest::Function<0x0076de78, u32(u32, u32, u32, u32)> call_0076de78;  // (from the original)

u32 f_006bd550(u32 r0) {
    u32 r0_1 = call_0076de78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = r0 + 0x8d84u;  // (from the original)
    }
    return r0_1;
}

}  // namespace d_006bd550
GUEST_EXPORT_FRAMED(0x006bd550, d_006bd550::f_006bd550, 0x4010);  // pushes {r4, lr} first, as the original

// f_006bd910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bd910 {

struct __attribute__((packed)) Object_006bd910_0 {
    u8 unknown_0[0x8f2c];  // (not used here)
    u16 half_8f2c;
};
GUEST_OFFSET(Object_006bd910_0, half_8f2c, 0x8f2c);  // (from the original)

struct __attribute__((packed)) Local_006bd910_ea_1 {
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
};
GUEST_OFFSET(Local_006bd910_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_1, word_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_006bd910_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_006bd910_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_006bd910_ea_2, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_006bd910_r0_29 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_006bd910_r0_29, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_29, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_29, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_006bd910_r0_34 {
    u8 unknown_0[0x3a8];  // (not used here)
    u32 word_3a8;
    u32 word_3ac;
    u32 word_3b0;
    u32 word_3b4;
    u32 word_3b8;
    u32 word_3bc;
    u32 word_3c0;
    u32 word_3c4;
    u32 word_3c8;
    u32 word_3cc;
    u32 word_3d0;
    u32 word_3d4;
    u32 word_3d8;
    u32 word_3dc;
    u32 word_3e0;
};
GUEST_OFFSET(Local_006bd910_r0_34, word_3a8, 0x3a8);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3ac, 0x3ac);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3b0, 0x3b0);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3b4, 0x3b4);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3b8, 0x3b8);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3c0, 0x3c0);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3c4, 0x3c4);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3c8, 0x3c8);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3cc, 0x3cc);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3d0, 0x3d0);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3d4, 0x3d4);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3d8, 0x3d8);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3dc, 0x3dc);  // (from the original)
GUEST_OFFSET(Local_006bd910_r0_34, word_3e0, 0x3e0);  // (from the original)

inline guest::global<u32, 0x00aaf14c> global_00aaf14c;  // (from the original)
inline constexpr guest::Function<0x001b264c, u32(u32, u32, u32, u32)> call_001b264c;  // (from the original)
inline constexpr guest::Function<0x001b4bc8, u32(u32, u32, u32, u32)> call_001b4bc8;  // (from the original)
inline constexpr guest::Function<0x0020be1c, u32(u32, u32, u32, u32)> call_0020be1c;  // (from the original)
inline constexpr guest::Function<0x0020c500, u32(u32, u32, u32, u32)> call_0020c500;  // (from the original)
inline constexpr guest::Function<0x0024a848, u32(u32, u32, u32, u32)> call_0024a848;  // (from the original)
inline constexpr guest::Function<0x0024c8d4, u32(u32, u32, u32, u32)> call_0024c8d4;  // (from the original)
inline constexpr guest::Function<0x0024dd14, u32(u32, u32, u32, u32)> call_0024dd14;  // (from the original)
inline constexpr guest::Function<0x002beff0, u32(u32, u32, u32, u32)> call_002beff0;  // (from the original)
inline constexpr guest::Function<0x002c0048, u32(u32, u32, u32, u32)> call_002c0048;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x0030589c, u32(u32, u32, u32, u32)> call_0030589c;  // (from the original)
inline constexpr guest::Function<0x0030a7e0, u32(u32, u32, u32, u32)> call_0030a7e0;  // (from the original)
inline constexpr guest::Function<0x005bcbfc, u32(u32, u32, u32, u32)> call_005bcbfc;  // (from the original)
inline constexpr guest::Function<0x005bd05c, u32(u32, u32, u32, u32)> call_005bd05c;  // (from the original)
inline constexpr guest::Function<0x005bd2a0, u32(u32, u32, u32, u32)> call_005bd2a0;  // (from the original)
inline constexpr guest::Function<0x005bd864, u32(u32, u32, u32, u32)> call_005bd864;  // (from the original)
inline constexpr guest::Function<0x005be0fc, u32(u32, u32, u32, u32)> call_005be0fc;  // (from the original)
inline constexpr guest::Function<0x005be87c, u32(u32, u32, u32, u32)> call_005be87c;  // (from the original)
inline constexpr guest::Function<0x005c6760, u32(u32, u32, u32, u32)> call_005c6760;  // (from the original)
inline constexpr guest::Function<0x006ccd54, u32(u32, u32, u32, u32)> call_006ccd54;  // (from the original)
inline constexpr guest::Function<0x006f0030, u32(u32, u32, u32, u32)> call_006f0030;  // (from the original)

u32 f_006bd910(gptr<Object_006bd910_0> arg0, u32 r1, u32 r2, u32 r3) {
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
    u32 res_1 = 0;
    u32 res_2 = 0;
    gptr<Local_006bd910_ea_1> ea_1 = gptr<Local_006bd910_ea_1>(r13 - 0x2c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r8;
    ea_1->word_1c = r9;
    ea_1->word_20 = r10;
    ea_1->word_24 = r11;
    ea_1->word_28 = r14;
    r13 -= 0x30u;  // (from the original)
    r4 = r0;
    r9 = r0 + 0x8f00u;  // (from the original)
    r10 = arg0->half_8f2c;
    guest::cpu()->r[13] = r13;
    call_002f825c(r0, 0xa480u, r2, r3);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0020c500(r4, r1_1, r2_1, r3_1);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_006f0030(r4 + 0x8ac4u, r1_2, r2_2, r3_2);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = r4 + 0x6bd0u;  // (from the original)
    r6 = r4 + 0x6c10u;  // (from the original)
    r7 = r6;
    r5 = r8;
    r11 = 0u;
    if (r8 < r7) {
        do {
            guest::cpu()->r[13] = r13;
            call_002fc8e8(r5, 0x95bfdcu, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 += 4u;
            *gptr<u8>(r6) = u8(r11);
            r6 += 1u;
            guest::preempt();
        } while (r5 < r7);
    }
    guest::cpu()->r[13] = r13;
    call_00303534(r8 + 0x338u, 0u, r2, r3);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_3 = *global_00aaf14c;
    if (r0_3 != 0) {
        u32 r0_4 = r0_3 + 0x6bd0u;  // (from the original)
        if (r0_4 == r8) {
            guest::cpu()->r[13] = r13;
            call_005c6760(r0_4, r1_3, r2_3, r3_3);
            r2_3 = guest::cpu()->r[2];
            r3_3 = guest::cpu()->r[3];
        }
    }
    guest::cpu()->r[13] = r13;
    call_00303534(r4 + 0x6b8cu, 0u, r2_3, r3_3);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00303534(r4 + 0x6b94u, 0u, r2_4, r3_4);  // (from the original)
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00303534(r4 + 0x6b9cu, 0u, r2_5, r3_5);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002beff0(r4 + 0x8d1cu, r1_4, r2_6, r3_6);  // (from the original)
    u32 r2_7 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00303534(r4 + 0x6ba4u, 0u, r2_7, r3_7);  // (from the original)
    r3 = guest::cpu()->r[3];
    r2 = r4 + 0x6bb0u;  // (from the original)
    *gptr<u32>(r2) = 0;
    *gptr<u32>(r2 + 4) = 0;
    r5 = r4 + 0x6f10u;  // (from the original)
    r8 = r5;
    if (r5 >= r4 + 0x6fb0u) {  // (from the original)
        goto L_6bda44;
    } else {
        r6 = r8 + 0xa0u;  // (from the original)
    }
    do {
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r5, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 4u;
        guest::preempt();
    } while (r5 < r6);
L_6bda44:;
    r5 = r8 + 0xa0u;  // (from the original)
    r6 = r8 + 0xe0u;  // (from the original)
    if (r5 >= r6) {
        goto L_6bda74;
    } else {
        r7 = r5 + 0x40u;  // (from the original)
    }
    do {
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r5, 0x95bfdcu, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 4u;
        *gptr<u8>(r6) = u8(r11);
        r6 += 1u;
        guest::preempt();
    } while (r5 < r7);
L_6bda74:;
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r8 + 0xf0u, 0x95bfdcu, r2, r3);  // (from the original)
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r8 + 0xf4u, 0x95bfdcu, r2_8, r3_8);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = r4 + 0x7008u;  // (from the original)
    r5 = 0u;
    do {
        guest::cpu()->r[13] = r13;
        call_002ff408(r6 + (r5 + (r5 << 2) << 7), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0xau);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_001b264c(r6 + 0x1900u, r1, r2, r3);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0024dd14(r4 + 0x89d0u, r1_5, r2_9, r3_9);  // (from the original)
    r3 = 0xffffu;  // (from the original)
    r1 = 0u;
    r2 = r4 + 0x89fau;  // (from the original)
    r0 = r1;
    do {
        u32 r1_6 = r1 + 1u;
        r0 += 2u;
        *gptr<u16>(r2 + (r1 << 1)) = u16(r3);
        res_1 = r0 - 0x20u;  // (from the original)
        r1 = r1_6 + 1u;
        *gptr<u16>(r2 + (r1_6 << 1)) = u16(r3);
        guest::preempt();
    } while (res_1 >> 0x1f != ((r0 ^ 0x20u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024c8d4(r4 + 0x8a3cu, r1, r2, r3);  // (from the original)
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_10 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r4 + 0x8f0au, 0x95bfdcu, r2_10, r3_10);  // (from the original)
    u32 r2_11 = guest::cpu()->r[2];
    u32 r3_11 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002fc8e8(r4 + 0x8f0eu, 0x95bfdcu, r2_11, r3_11);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_12 = guest::cpu()->r[2];
    u32 r3_12 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0030589c(r4 + 0x8f12u, r1_7, r2_12, r3_12);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_13 = guest::cpu()->r[2];
    u32 r3_13 = guest::cpu()->r[3];
    *gptr<u16>(r9 + 0x28u) = u16(r11);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_005bd05c(r4 + 0x8d4cu, r1_8, r2_13, r3_13);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_14 = guest::cpu()->r[2];
    u32 r3_14 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005bd2a0(r4 + 0x8d5cu, r1_9, r2_14, r3_14);  // (from the original)
    u32 r1_10 = guest::cpu()->r[1];
    u32 r2_15 = guest::cpu()->r[2];
    u32 r3_15 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005bd864(r4 + 0x8d6cu, r1_10, r2_15, r3_15);  // (from the original)
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_16 = guest::cpu()->r[2];
    u32 r3_16 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005be0fc(r4 + 0x8d84u, r1_11, r2_16, r3_16);  // (from the original)
    u32 r1_12 = guest::cpu()->r[1];
    u32 r2_17 = guest::cpu()->r[2];
    u32 r3_17 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0030a7e0(r4 + 0x8dfau, r1_12, r2_17, r3_17);  // (from the original)
    u32 r2_18 = guest::cpu()->r[2];
    u32 r3_18 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005bcbfc(r4 + 0x8e08u, r4, r2_18, r3_18);  // (from the original)
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_19 = guest::cpu()->r[2];
    u32 r3_19 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_005be87c(r4 + 0x8ebeu, r1_13, r2_19, r3_19);  // (from the original)
    u32 r1_14 = guest::cpu()->r[1];
    u32 r2_20 = guest::cpu()->r[2];
    u32 r3_20 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_0020be1c(r4 + 0x8ee0u, r1_14, r2_20, r3_20);  // (from the original)
    u32 r2_21 = guest::cpu()->r[2];
    u32 r3_21 = guest::cpu()->r[3];
    u32 zf_1 = *gptr<u32>(r13 + 8u) == 0;
    *gptr<u16>(r9 + 0x2au) = 0x7db;  // (from the original)
    if (zf_1) {
        *gptr<u16>(r9 + 0x2cu) = 0x7db;  // (from the original)
    } else {
        *gptr<u16>(r9 + 0x2cu) = u16(r10);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    call_002f825c(r4 + 0x8f3cu, 0x32u, r2_21, r3_21);  // (from the original)
    u32 r2_22 = guest::cpu()->r[2];
    u32 r3_22 = guest::cpu()->r[3];
    *gptr<u32>(r9 + 0x6eu) = r11;  // (from the original)
    *gptr<u32>(r9 + 0x72u) = r11;  // (from the original)
    *gptr<u8>(r9 + 0x76u) = u8(r11);  // (from the original)
    u32 r1_15 = 0x8f38u;  // (from the original)
    *gptr<u32>(0x8f34u + r4) = r11;  // (from the original)
    *gptr<u32>(r1_15 + r4) = r11;
    guest::cpu()->r[13] = r13;
    call_002c0048(r4 + 0x8f77u, r1_15, r2_22, r3_22);  // (from the original)
    u32 r1_16 = guest::cpu()->r[1];
    u32 r2_23 = guest::cpu()->r[2];
    u32 r3_23 = guest::cpu()->r[3];
    gptr<Local_006bd910_r0_29> r0_29 = gptr<Local_006bd910_r0_29>(r4 + 0x8f9cu);  // (from the original)
    r0_29->word_0 = r11;
    r0_29->word_4 = r11;
    r0_29->word_8 = r11;
    guest::cpu()->r[13] = r13;
    call_006ccd54(r4 + 0x92f0u, r1_16, r2_23, r3_23);  // (from the original)
    u32 r2_24 = guest::cpu()->r[2];
    u32 r3_24 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00301444(r4 + 0x95c0u, 0x42u, r2_24, r3_24);  // (from the original)
    u32 r2_25 = guest::cpu()->r[2];
    u32 r3_25 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r4 + 0xa288u, 0x90u, r2_25, r3_25);  // (from the original)
    u32 r2_26 = guest::cpu()->r[2];
    u32 r3_26 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002f825c(r4 + 0xa318u, 0x90u, r2_26, r3_26);  // (from the original)
    u32 r1_17 = guest::cpu()->r[1];
    u32 r2_27 = guest::cpu()->r[2];
    u32 r3_27 = guest::cpu()->r[3];
    gptr<Local_006bd910_r0_34> r0_34 = gptr<Local_006bd910_r0_34>(r4 + 0xa000u);  // (from the original)
    r0_34->word_3a8 = r11;
    r0_34->word_3ac = r11;
    r0_34->word_3b0 = r11;
    r0_34->word_3b4 = r11;
    r0_34->word_3b8 = r11;
    r0_34->word_3bc = r11;
    r0_34->word_3c0 = r11;
    r0_34->word_3c4 = r11;
    r0_34->word_3c8 = r11;
    r0_34->word_3cc = r11;
    r0_34->word_3d0 = r11;
    r0_34->word_3d4 = r11;
    r0_34->word_3d8 = r11;
    r0_34->word_3dc = r11;
    r0_34->word_3e0 = r11;
    guest::cpu()->r[13] = r13;
    call_001b4bc8(r4 + 0x8fa8u, r1_17, r2_27, r3_27);  // (from the original)
    u32 r2_28 = guest::cpu()->r[2];
    u32 r3_28 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00301444(r4 + 0xa3e4u, 0x40u, r2_28, r3_28);  // (from the original)
    u32 r2_29 = guest::cpu()->r[2];
    u32 r3_29 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00301444(r4 + 0xa424u, 0x40u, r2_29, r3_29);  // (from the original)
    u32 r2_30 = guest::cpu()->r[2];
    u32 r3_30 = guest::cpu()->r[3];
    u32 r1_18 = ~0u;
    *gptr<u32>(0xa464u + r4) = r1_18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0024a848(r4 + 0x8ae0u, r1_18, r2_30, r3_30);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x7ffeu;  // (from the original)
    r5 = 0u;
    do {
        u32 r6_1 = r4 + (r5 + (r5 << 1) << 1) + 0xa468u;  // (from the original)
        guest::cpu()->r[13] = r13;
        u32 r0_40 = call_002fcbb0(r13, r7, r2, r3);
        u32 r2_31 = guest::cpu()->r[2];
        u32 r3_31 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        call_002fc8e8(r6_1, r0_40, r2_31, r3_31);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        res_2 = r5 - 3u;
        *gptr<u16>(r6_1 + 4u) = u16(r11);
        guest::preempt();
    } while (res_2 >> 0x1f != ((r5 ^ 3u) & (r5 ^ res_2)) >> 0x1f);  // (from the original)
    r13 += 0xcu;  // (from the original)
    gptr<Local_006bd910_ea_2> ea_2 = gptr<Local_006bd910_ea_2>(r13);
    r13 += 0x24;  // (from the original)
    u32 r4_1 = ea_2->word_0;
    u32 r5_2 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_1 = ea_2->word_c;
    u32 r8_1 = ea_2->word_10;
    u32 r9_1 = ea_2->word_14;
    u32 r10_1 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    r14 = ea_2->word_20;
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return call_002fc8e8((r4 + 0xa400u) + 0x7au, 0x95bfdcu, r2, r3);  // (from the original)
}

}  // namespace d_006bd910
GUEST_EXPORT(0x006bd910, d_006bd910::f_006bd910);

// f_006bddec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bddec {

struct __attribute__((packed)) Object_006bddec_0 {
    u8 unknown_0[0x570e];  // (not used here)
    u8 byte_570e;
    u8 unknown_570f[0x9];  // (not used here)
    u8 byte_5718;
    u8 unknown_5719[0x7];  // (not used here)
    u8 byte_5720;
};
GUEST_OFFSET(Object_006bddec_0, byte_570e, 0x570e);  // (from the original)
GUEST_OFFSET(Object_006bddec_0, byte_5718, 0x5718);  // (from the original)
GUEST_OFFSET(Object_006bddec_0, byte_5720, 0x5720);  // (from the original)

struct __attribute__((packed)) Local_006bddec_r0_2 {
    u8 unknown_0[0x18];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Local_006bddec_r0_2, byte_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_006bddec_r0_3 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(Local_006bddec_r0_3, byte_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_006bddec_r0_6 {
    u8 unknown_0[0x26];  // (not used here)
    u8 byte_26;
};
GUEST_OFFSET(Local_006bddec_r0_6, byte_26, 0x26);  // (from the original)

inline constexpr guest::Function<0x005c257c, u32(u32, u32, u32, u32)> call_005c257c;  // (from the original)
inline constexpr guest::Function<0x005c6024, u32(u32, u32, u32, u32)> call_005c6024;  // (from the original)

u32 f_006bddec(gptr<Object_006bddec_0> arg0) {
    u32 r0 = arg0.addr();
    gptr<Local_006bddec_r0_3> r0_3 = gptr<Local_006bddec_r0_3>(0u);
    u32 r1_1 = u32(arg0->byte_570e) & ~0x40u;  // (from the original)
    arg0->byte_570e = u8(r1_1);
    if (!((u32(arg0->byte_5720) << 0x1c) >> 0x1f)) {  // (from the original)
        goto L_6bde54;
    }
    if (u32(arg0->byte_5718) & 8u) {
        u32 r0_1 = call_005c257c(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        if (r0_1 == 0) {
            goto L_6bde54;
        }
        gptr<Local_006bddec_r0_2> r0_2 = gptr<Local_006bddec_r0_2>(r0 + 0x5700u);  // (from the original)
        r0_2->byte_18 = u8(u32(r0_2->byte_18) & ~8u);
    }
    r0_3 = gptr<Local_006bddec_r0_3>(r0 + 0x5700u);  // (from the original)
    r1_1 = u32(r0_3->byte_20) & ~8u;
    r0_3->byte_20 = u8(r1_1);
L_6bde54:;
    u32 r0_4 = u32(*gptr<u8>(0x5726u + r0)) >> 7;  // (from the original)
    if (r0_4 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0_4;
    }
    u32 r0_5 = call_005c6024(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        return r0_5;
    }
    gptr<Local_006bddec_r0_6> r0_6 = gptr<Local_006bddec_r0_6>(r0 + 0x5700u);  // (from the original)
    u32 r1_3 = u32(r0_6->byte_26) & ~0x80u;  // (from the original)
    r0_6->byte_26 = u8(r1_3);
    guest::cpu()->r[1] = r1_3;
    return r0_6.addr();
}

}  // namespace d_006bddec
GUEST_EXPORT_FRAMED(0x006bddec, d_006bddec::f_006bddec, 0x4010);  // pushes {r4, lr} first, as the original

// f_006bead8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bead8 {

struct __attribute__((packed)) Object_006bead8_0 {
    u8 unknown_0[0x73c];  // (not used here)
    u32 word_73c;
    u32 word_740;
    u32 word_744;
};
GUEST_OFFSET(Object_006bead8_0, word_73c, 0x73c);  // (from the original)
GUEST_OFFSET(Object_006bead8_0, word_740, 0x740);  // (from the original)
GUEST_OFFSET(Object_006bead8_0, word_744, 0x744);  // (from the original)

struct __attribute__((packed)) Object_006bead8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_006bead8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_006bead8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_006bead8_1, word_8, 0x8);  // (from the original)


void f_006bead8(gptr<Object_006bead8_0> arg0, gptr<Object_006bead8_1> arg1) {
    arg0->word_73c = arg1->word_0;
    arg0->word_740 = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    arg0->word_744 = r1_1;
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_006bead8
GUEST_EXPORT(0x006bead8, d_006bead8::f_006bead8);

// f_006beaf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006beaf4 {

inline constexpr guest::Function<0x0023fc84, u32(u32, u32, u32, u32)> call_0023fc84;  // (from the original)
inline constexpr guest::Function<0x002400b0, u32(u32, u32, u32, u32)> call_002400b0;  // (from the original)
inline constexpr guest::Function<0x003171b4, u32(u32, u32, u32, u32)> call_003171b4;  // (from the original)

u32 f_006beaf4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 -= 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_003171b4(r13, r13 + 4u, r0, r3);
    u32 r1_2 = *gptr<u32>(r13);
    u32 r2_1 = *gptr<u32>(r13 + 4);
    guest::cpu()->r[13] = r13;
    call_0023fc84(r13 + 8u, r1_2, r2_1, 1u);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_3 = *gptr<u32>(r13 + 0x10u) & 0xffu;  // (from the original)
    if (r0_3 >= 0xfcu) {  // (from the original)
        r13 += 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    guest::cpu()->r[13] = r13;
    u32 r0_4 = call_002400b0(r0_3, r1_3, r2_2, r3_1);
    if (r0_4 >= 6u) {
        r13 += 0x20u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return 0u;
    }
    r13 += 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return (r0_4 == 0 || r0_4 == 2u) ? 1u : 2u;
}

}  // namespace d_006beaf4
GUEST_EXPORT(0x006beaf4, d_006beaf4::f_006beaf4);

// f_006bf18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_006bf18c {

inline guest::global<u32, 0x006bf1c8> global_006bf1c8;  // (from the original)
inline guest::global<u32, 0x006bf1cc> global_006bf1cc;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x0076adf4, u32(u32, u32)> call_0076adf4;  // (from the original)

void f_006bf18c(u32 r0, u32 r1) {
    u32 r0_1 = call_002fcb34(r0, r1);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0xeu) {  // (from the original)
        float S0_1 = std::bit_cast<float>(*global_006bf1c8);
        guest::cpu()->s[0] = S0_1;
        return;
    }
    u32 r0_2 = call_0076adf4(r0, r1_1);
    float S0_2 = std::bit_cast<float>(*global_006bf1cc);
    if (r0_2 >= 8u) {
        guest::cpu()->s[0] = S0_2;
        return;
    }
    float S0_3 = std::bit_cast<float>(*gptr<u32>(0x890300u + (r0_2 << 2)));  // (from the original)
    guest::cpu()->r[1] = 0x890300u;  // (from the original)
    guest::cpu()->s[0] = S0_3;
    return;
}

}  // namespace d_006bf18c
GUEST_EXPORT_FRAMED(0x006bf18c, d_006bf18c::f_006bf18c, 0x4010);  // pushes {r4, lr} first, as the original
