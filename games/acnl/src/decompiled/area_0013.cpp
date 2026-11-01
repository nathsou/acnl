// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00130054: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130054 {

inline constexpr guest::Function<0x00128c0c, u32(u32, u32, u32, u32)> call_00128c0c;  // (from the original)

u32 f_00130054() {
    return call_00128c0c(0x97d7e0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00130054
GUEST_EXPORT(0x00130054, d_00130054::f_00130054);

// f_00130060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130060 {

inline constexpr guest::Function<0x0012ef20, u32(u32, u32)> call_0012ef20;  // (from the original)

u32 f_00130060() {
    return call_0012ef20(0x97d7e0u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00130060
GUEST_EXPORT(0x00130060, d_00130060::f_00130060);

// f_0013010c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013010c {

inline constexpr guest::Function<0x0012efe8, u32(u32, u32)> call_0012efe8;  // (from the original)

u32 f_0013010c() {
    return call_0012efe8(0x97d7e0u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0013010c
GUEST_EXPORT(0x0013010c, d_0013010c::f_0013010c);

// f_001306e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001306e0 {

inline guest::global<u8, 0x0097d800> global_0097d800;  // (from the original)
inline guest::global<u8, 0x0097d801> global_0097d801;  // (from the original)
inline constexpr guest::Function<0x00130750, u32(u32, u32)> call_00130750;  // (from the original)
inline constexpr guest::Function<0x0013078c, u32(u32, u32)> call_0013078c;  // (from the original)
inline constexpr guest::Function<0x001307c8, u32(u32, u32, u32, u32)> call_001307c8;  // (from the original)
inline constexpr guest::Function<0x00136598, u32(u32, u32)> call_00136598;  // (from the original)

u32 f_001306e0(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *global_0097d801;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_3 = call_001307c8(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = r0_3 & 0x80000000u;  // (from the original)
    if (r1_1 >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    u32 r0_5 = call_00130750(frame.at(4).addr(), r1_1);
    u32 r1_2 = r0_5 & 0x80000000u;  // (from the original)
    if (r1_2 >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return r0_5;
    }
    u32 r1_3 = *frame.at<u8>(4);
    *global_0097d800 = u8(u32(*frame.at<u8>(0)) | r1_3);
    u32 r0_6 = call_00136598(0u, r1_3);
    u32 r1_4 = 0xc9405001u;  // (from the original)
    if (r0_6 == r1_4) {
        r0_6 = call_0013078c(0u, r1_4);
        r1_4 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_4;
    return r0_6;
}

}  // namespace d_001306e0
GUEST_EXPORT_FRAMED(0x001306e0, d_001306e0::f_001306e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00130c70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130c70 {

inline guest::global<u32, 0x00130ca8> global_00130ca8;  // (from the original)

void f_00130c70(gptr<nw__lyt__Layout> arg0) {
    u32 r3_1 = arg0.addr() + 8u;
    arg0->word_0 = 0x901b9c;  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_00130ca8);
    arg0->word_4 = 0;
    arg0->word_8 = r3_1;
    arg0->word_10 = 0;
    arg0->word_c = r3_1;
    arg0->word_14 = 0;
    arg0->word_18 = std::bit_cast<u32>(S0_1);
    arg0->word_1c = std::bit_cast<u32>(S0_1);
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00130c70
GUEST_EXPORT(0x00130c70, d_00130c70::f_00130c70);

// f_00130d6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00130d6c {


void f_00130d6c(gptr<nw__snd__SoundArchivePlayer> arg0) {
    arg0->word_0 = 0x901f04;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0x901ef0;  // (from the original)
    arg0->word_c = arg0.addr();
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    u32 r12_1 = arg0.addr() + 0x2cu;  // (from the original)
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = r12_1;
    arg0->word_30 = r12_1;
    u32 r3_1 = arg0.addr() + 0x38u;  // (from the original)
    arg0->word_34 = 0;
    arg0->word_38 = r3_1;
    u32 r12_2 = arg0.addr() + 0x58u;  // (from the original)
    arg0->word_44 = 0;
    arg0->word_3c = r3_1;
    arg0->word_48 = 0;
    arg0->word_40 = 0x902060;  // (from the original)
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = r12_2;
    arg0->word_5c = r12_2;
    u32 r3_2 = arg0.addr() + 0x64u;  // (from the original)
    arg0->word_60 = 0;
    arg0->word_64 = r3_2;
    u32 r12_3 = arg0.addr() + 0x78u;  // (from the original)
    arg0->word_6c = 0;
    arg0->word_68 = r3_2;
    arg0->word_70 = 0;
    arg0->word_74 = 0;
    arg0->word_78 = r12_3;
    arg0->word_7c = r12_3;
    u32 r3_3 = arg0.addr() + 0x84u;  // (from the original)
    arg0->word_80 = 0;
    arg0->word_84 = r3_3;
    u32 r12_4 = arg0.addr() + 0xa4u;  // (from the original)
    arg0->word_90 = 0;
    arg0->word_88 = r3_3;
    arg0->word_94 = 0;
    arg0->word_8c = 0x902048;  // (from the original)
    arg0->word_98 = 0;
    arg0->word_9c = 0;
    arg0->word_a0 = 0;
    arg0->word_a4 = r12_4;
    arg0->word_a8 = r12_4;
    u32 r3_4 = arg0.addr() + 0xb0u;  // (from the original)
    arg0->word_ac = 0;
    arg0->word_b0 = r3_4;
    arg0->word_b8 = 0;
    arg0->word_b4 = r3_4;
    u32 r12_5 = arg0.addr() + 0xc4u;  // (from the original)
    arg0->word_bc = 0;
    arg0->word_c0 = 0;
    arg0->word_c4 = r12_5;
    arg0->word_c8 = r12_5;
    u32 r2_1 = arg0.addr() + 0xd0u;  // (from the original)
    arg0->word_cc = 0;
    arg0->word_d0 = r2_1;
    arg0->word_f0 = 0;
    arg0->word_d4 = r2_1;
    arg0->word_f8 = arg0.addr() + 0x100u;  // (from the original)
    arg0->word_fc = 0;
    arg0->word_100 = 0x902454;  // (from the original)
    arg0->word_f4 = 0x902424;  // (from the original)
    arg0->word_104 = 0;
    arg0->word_108 = 0;
    arg0->word_10c = 0;
    arg0->word_110 = 0;
    arg0->word_114 = 0;
}

}  // namespace d_00130d6c
GUEST_EXPORT(0x00130d6c, d_00130d6c::f_00130d6c);

// f_0013121c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013121c {

inline guest::global<u32, 0x00131278> global_00131278;  // (from the original)
inline constexpr guest::Function<0x00135134, u32(u32)> call_00135134;  // (from the original)

u32 f_0013121c(u32 r0) {
    u32 r0_1 = call_00135134(r0);
    float S0_1 = std::bit_cast<float>(*global_00131278);
    *gptr<u32>(r0_1) = 0x8f7210;  // (from the original)
    *gptr<u8>(r0_1 + 0x12u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x13u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x14u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = 0x8eb474;  // (from the original)
    *gptr<u32>(r0_1 + 0x1cu) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x20u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x24u) = std::bit_cast<u32>(S0_1);  // (from the original)
    u32 r3_1 = ~0u;
    *gptr<u32>(r0_1 + 0x2cu) = 0x8eb474;  // (from the original)
    *gptr<u32>(r0_1 + 0x28u) = r3_1;  // (from the original)
    *gptr<u32>(r0_1 + 0x30u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x34u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x38u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u32>(r0_1 + 0x3cu) = r3_1;  // (from the original)
    guest::cpu()->s[0] = S0_1;
    return r0_1;
}

}  // namespace d_0013121c
GUEST_EXPORT_FRAMED(0x0013121c, d_0013121c::f_0013121c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131580 {

inline constexpr guest::Function<0x00137848, u32(u32, u32, u32, u32)> call_00137848;  // (from the original)
inline constexpr guest::Function<0x0013bb80, u32(u32)> call_0013bb80;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32)> call_0013bc00;  // (from the original)

u32 f_00131580(u32 r0) {
    u32 r0_2 = call_00137848(r0 + 0x7e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_4 = call_0013bc00(r0_2 - 0x164u);  // (from the original)
    u32 r0_6 = call_0013bb80(r0_4 - 0x10u);  // (from the original)
    u32 r0_8 = call_00137848(r0_6 - 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_0013bc00(r0_8 - 0x164u);  // (from the original)
    u32 r0_12 = call_0013bb80(r0_10 - 0x10u);  // (from the original)
    u32 r0_14 = call_00137848(r0_12 - 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_0013bc00(r0_14 - 0x164u);  // (from the original)
    u32 r0_18 = call_0013bb80(r0_16 - 0x10u);  // (from the original)
    u32 r0_20 = call_00137848(r0_18 - 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_0013bc00(r0_20 - 0x164u);  // (from the original)
    u32 r0_24 = call_0013bb80(r0_22 - 0x10u);  // (from the original)
    u32 r0_26 = call_00137848(r0_24 - 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_0013bc00(r0_26 - 0x164u);  // (from the original)
    u32 r0_30 = call_0013bb80(r0_28 - 0x10u);  // (from the original)
    return r0_30 - 0x14u;  // (from the original)
}

}  // namespace d_00131580
GUEST_EXPORT_FRAMED(0x00131580, d_00131580::f_00131580, 0x4010);  // pushes {r4, lr} first, as the original

// f_001316b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001316b8 {

struct __attribute__((packed)) Object_001316b8_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_001316b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001316b8_0, byte_4c, 0x4c);  // (from the original)


u32 f_001316b8(gptr<Object_001316b8_0> arg0) {
    if (arg0->byte_4c == 0) {
        return 0u;
    }
    u32 r2_1 = *gptr<u32>(arg0->word_0 + 0x28u);  // (from the original)
    // virtual function 10 of arg0.addr()
    return guest::call_address<u32>(r2_1, arg0.addr(), guest::cpu()->r[1], r2_1, guest::cpu()->r[3]);
}

}  // namespace d_001316b8
GUEST_EXPORT(0x001316b8, d_001316b8::f_001316b8);

// f_001316d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001316d8 {

struct __attribute__((packed)) Object_001316d8_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_001316d8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_001316d8_0, word_2c, 0x2c);  // (from the original)

struct __attribute__((packed)) Local_001316d8_r0_7 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001316d8_r0_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001316d8_r0_7, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001316d8_r0_7, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_001316d8_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001316d8_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001316d8_r1_1, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00137c78, u32(u32, u32, u32, u32)> call_00137c78;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)
inline constexpr guest::Function<0x002fd108, u32(u32, u32, u32, u32)> call_002fd108;  // (from the original)

u32 f_001316d8(gptr<Object_001316d8_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x10u;  // (from the original)
    arg0->word_14 = r0_1;
    arg0->word_18 = 0;
    arg0->word_10 = r0_1;
    u32 r0_2 = arg0.addr() + 0x1cu;  // (from the original)
    arg0->word_20 = r0_2;
    arg0->word_24 = 0;
    arg0->word_1c = r0_2;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    u32 r0_3 = *global_00975338;
    if (r0_3 != 0) {
        u32 r0_4 = call_00138fec(r0_3, arg0.addr(), r2, r3);
        u32 r0_5 = call_002fd108(0x4cu, r0_4, 4u, guest::cpu()->r[3]);  // (from the original)
        gptr<Local_001316d8_r1_1> r1_1 = gptr<Local_001316d8_r1_1>(r0_5 + 0x18u);  // (from the original)
        *gptr<u32>(r0_5 + 0x10u) = 0;  // (from the original)
        *gptr<u32>(r0_5 + 0x14u) = 0;  // (from the original)
        r1_1->word_0 = r0_5;
        r1_1->word_4 = 0;
        u32 r0_6 = call_00132174(r0_5, r1_1.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0_6) = 0x904a10;  // (from the original)
        gptr<Local_001316d8_r0_7> r0_7 = gptr<Local_001316d8_r0_7>(r0_6 + 0x20u);  // (from the original)
        r0_7->word_4 = r0_7.addr() + 0xcu;  // (from the original)
        r0_7->word_0 = 0x90558c;  // (from the original)
        r0_7->word_8 = 0x20;  // (from the original)
        u32 r6_1 = *global_008c9f1c;
        *gptr<u8>(0x20u + (r0_7->word_4 - 1u)) = u8(r6_1);  // (from the original)
        r0_7->word_0 = 0x905120;  // (from the original)
        *gptr<u8>(r0_7->word_4) = u8(u32(*global_008c9f1c));
        r0_7->word_0 = 0x9048ec;  // (from the original)
        *gptr<u32>(r0_6) = 0x905460;  // (from the original)
        arg0->word_28 = r0_6;
        arg0->word_2c = r0_6;
        *frame.at<u32>(4) = 0x8ae110;  // (from the original)
        *frame.at<u32>(0) = 0x9047f8;  // (from the original)
        call_00137c78(arg0.addr(), arg0->word_2c, frame.at(0).addr(), 0x9047f8u);  // (from the original)
    }
    return arg0.addr();
}

}  // namespace d_001316d8
GUEST_EXPORT_FRAMED(0x001316d8, d_001316d8::f_001316d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013187c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013187c {

inline constexpr guest::Function<0x001391c4, u32(u32, u32, u32)> call_001391c4;  // (from the original)

void f_0013187c(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4_1 = r1;
    if (r1 != 0 && r1 >> 0x1f == (r1 & (r1 ^ r1)) >> 0x1f) {  // (from the original)
        u32 r0_2 = call_001391c4(r4_1 << 2, r2, r3);
        r1 = 0u;
        if (r0_2 != 0) {
            *gptr<u32>(r0 + 8u) = r0_2;
            *gptr<u32>(r0) = r1;
            *gptr<u32>(r0 + 4) = r4_1;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013187c
GUEST_EXPORT_FRAMED(0x0013187c, d_0013187c::f_0013187c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001318c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001318c0 {


void f_001318c0(gptr<sead__AudioResetter> arg0) {
    arg0->word_0 = 0x9041f4;  // (from the original)
    arg0->word_4 = 0;
}

}  // namespace d_001318c0
GUEST_EXPORT(0x001318c0, d_001318c0::f_001318c0);

// f_00131a88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131a88 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32)> call_00138c78;  // (from the original)

u32 f_00131a88(u32 r0) {
    u32 r0_4 = 0;
    u32 r0_2 = call_00138c78(*global_009753d0 + 0x40u);  // (from the original)
    u32 r1_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r1_1 == r0_2) {
        u32 r0_3 = *gptr<u32>(r0 + 0x28u);  // (from the original)
        if (s32(r0_3) > 0) {
            r0_4 = r0_3 + 1u;
            *gptr<u32>(r0 + 0x28u) = r0_4;  // (from the original)
            guest::cpu()->r[1] = r1_1;
            return r0_4;
        }
    }
    call_00135740(r0 + 8u, r1_1);
    r1_1 = guest::cpu()->r[1];
    r0_4 = 1u;
    *gptr<u32>(r0 + 0x24u) = r0_2;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = r0_4;  // (from the original)
    return r0_4;
}

}  // namespace d_00131a88
GUEST_EXPORT_FRAMED(0x00131a88, d_00131a88::f_00131a88, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00131af8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131af8 {

inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138c78, u32(u32)> call_00138c78;  // (from the original)

u32 f_00131af8(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00138c78(r0);
    u32 res_1 = *gptr<u32>(r0 + 0x28u) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x28u) = res_1;  // (from the original)
    if (res_1 != 0) {
        return res_1;
    }
    *gptr<u32>(r0 + 0x24u) = 0;  // (from the original)
    frame.release();
    return call_00137e84(r0 + 8u, guest::cpu()->r[1]);
}

}  // namespace d_00131af8
GUEST_EXPORT(0x00131af8, d_00131af8::f_00131af8);

// f_00131b3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131b3c {

struct __attribute__((packed)) Object_00131b3c_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x20];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(Object_00131b3c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00131b3c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00131b3c_0, byte_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x00137c60, u32(u32, u32, u32, u32)> call_00137c60;  // (from the original)
inline constexpr guest::Function<0x00137e9c, u32(u32, u32, u32, u32)> call_00137e9c;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)

u32 f_00131b3c(gptr<Object_00131b3c_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r5 = guest::cpu()->r[5];
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r6 = 0u;
    arg0->word_0 = r6;
    arg0->word_4 = r6;
    u32 r4 = r0;
    arg0->byte_28 = u8(r6);
    u32 r0_1 = call_001391d8(0x10u, r5, r2, r3);  // (from the original)
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 != 0) {
        r0_1 = call_00137c60(r0_1, guest::cpu()->r[1], r2_1, r3_1);
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
    }
    *gptr<u32>(r4) = r0_1;
    u32 r0_2 = call_001391d8(0xcu, r5, r2_1, r3_1);  // (from the original)
    if (r0_2 != 0) {
        r0_2 = call_00137e9c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    *gptr<u32>(r4 + 4u) = r0_2;
    r0 = 0u;
    do {
        r2 = 0u;
        r3 = r4 + 8u + (r0 + (r0 << 1) << 2);
        do {
            u32 r1_3 = r4 + 8u;
            if (r0 < 2u) {
                r1_3 = r3;
            }
            if (r2 < 3u) {
                r1_3 += (r2 << 2);
            }
            r2 += 1u;
            res_1 = r2 - 3u;
            *gptr<u32>(r1_3) = r6;
            guest::preempt();
        } while (res_1 >> 0x1f != ((r2 ^ 3u) & (r2 ^ res_1)) >> 0x1f);  // (from the original)
        u32 r1_4 = r4 + 0x20u;  // (from the original)
        if (r0 < 2u) {
            r1_4 += (r0 << 2);
        }
        r0 += 1u;
        res_2 = r0 - 2u;
        *gptr<u32>(r1_4) = r6;
        guest::preempt();
    } while (res_2 >> 0x1f != ((r0 ^ 2u) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
    return r4;
}

}  // namespace d_00131b3c
GUEST_EXPORT_FRAMED(0x00131b3c, d_00131b3c::f_00131b3c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00131be0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131be0 {

inline constexpr guest::Function<0x00136e0c, u32(u32)> call_00136e0c;  // (from the original)

u32 f_00131be0(u32 r0) {
    u32 r0_1 = call_00136e0c(r0);
    *gptr<u32>(r0_1 + 0x220u) = 0;  // (from the original)
    *gptr<u32>(r0_1) = 0x9052d0;  // (from the original)
    *gptr<u32>(r0_1 + 0xcu) = 0x9052f0;  // (from the original)
    *gptr<u32>(r0_1 + 0x224u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x228u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x22cu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_00131be0
GUEST_EXPORT_FRAMED(0x00131be0, d_00131be0::f_00131be0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131c14 {

struct __attribute__((packed)) Local_00131c14_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00131c14_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00131c14_r5_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138560, u32(u32, u32)> call_00138560;  // (from the original)

void f_00131c14(u32 r0, u32 r1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_00135740(0xae53d4u);  // (from the original)
    u32 r0_1 = r0 + 0x54u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = u32(*gptr<u16>(r0 + 0x70u)) & 1u;  // (from the original)
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00135740(r0_1);
    }
    gptr<Local_00131c14_r5_1> r5_1 = gptr<Local_00131c14_r5_1>(r0 + 0x28u);  // (from the original)
    call_00138560(r5_1.addr(), r5_1->word_c + r1);
    u32 r1_3 = guest::cpu()->r[1];
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        call_00137e84(r4_1, r1_3);
        r1_3 = guest::cpu()->r[1];
    }
    frame.release();
    call_00137e84(0xae53d4u, r1_3);
    return;  // (from the original)
}

}  // namespace d_00131c14
GUEST_EXPORT(0x00131c14, d_00131c14::f_00131c14);

// f_00131e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131e5c {

inline constexpr guest::Function<0x00131dc4, u32(u32, u32, u32, u32)> call_00131dc4;  // (from the original)
inline constexpr guest::Function<0x00131eb8, u32(u32, u32, u32, u32)> call_00131eb8;  // (from the original)

u32 f_00131e5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r4_1 = 0;
    u32 r1_1 = r1 + 3u & ~3u;
    if (r1_1 <= 0xa8u) {  // (from the original)
        return 0u;
    }
    if (r0 == 0) {
        r4_1 = 0u;
    } else {
        *frame.at<u32>(0) = r1_1;
        *frame.at<u32>(4) = 1;
        *frame.at<u32>(8) = r3;
        u32 r0_1 = call_00131eb8(r0, r2, 0u, r0);
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4_1 = r0_1;
    }
    call_00131dc4(r4_1, r1_1, r2, r3);
    return r4_1;
}

}  // namespace d_00131e5c
GUEST_EXPORT_FRAMED(0x00131e5c, d_00131e5c::f_00131e5c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00131eb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131eb8 {

struct __attribute__((packed)) Local_00131eb8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00131eb8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00131eb8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00131eb8_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00131eb8_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131eb8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00131eb8_ea_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00131eb8_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131eb8_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00131eb8_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00131eb8_r0_2 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_00131eb8_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00131eb8_r0_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00131c8c, u32(u32, u32, u32, u32)> call_00131c8c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)

u32 f_00131eb8(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_00131eb8_ea_1> ea_1 = gptr<Local_00131eb8_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    *frame.at<u32>(0) = r4_1;
    *frame.at<u32>(4) = r5_1;
    *frame.at<u32>(8) = r12_1;
    u32 r0_1 = call_00131c8c(r0, r1, r2, guest::cpu()->r[3]);
    u32 r5_2 = 0u;
    *gptr<u32>(r0_1) = 0x905adc;  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = 0x905b50;  // (from the original)
    *gptr<u8>(r0_1 + 0x74u) = u8(r5_2);  // (from the original)
    gptr<Local_00131eb8_r0_2> r0_2 = gptr<Local_00131eb8_r0_2>(r0_1 + 0x78u);  // (from the original)
    u32 r1_1 = ~0u;
    gptr<Local_00131eb8_ea_2> ea_2 = gptr<Local_00131eb8_ea_2>(r0_2.addr() + 4u);
    ea_2->word_0 = r0_2.addr();
    ea_2->word_4 = r5_2;
    r0_2->word_0 = r0_2.addr();
    r0_2->word_c = r1_1;
    u32 r0_3 = r0_1 + 0x88u;  // (from the original)
    gptr<Local_00131eb8_ea_3> ea_3 = gptr<Local_00131eb8_ea_3>(r0_1 + 0x8cu);  // (from the original)
    ea_3->word_0 = r0_3;
    ea_3->word_4 = r5_2;
    *gptr<u32>(r0_1 + 0x88u) = r0_3;  // (from the original)
    *gptr<u32>(r0_1 + 0x94u) = r1_1;  // (from the original)
    u32 r1_2 = r0_1 + 0x54u;  // (from the original)
    u32 r0_4 = u32(*gptr<u16>(r0_1 + 0x70u)) & 1u;  // (from the original)
    if (r0_4 != 0) {
        r0_4 = 1u;
    }
    if (r0_4 != 0) {
        r5_2 = r1_2;
        call_00135740(r1_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(r0_1 + 0x84u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x94u) = 0;  // (from the original)
    if (r5_2 != 0) {
        call_00137e84(r5_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00131eb8
GUEST_EXPORT_FRAMED(0x00131eb8, d_00131eb8::f_00131eb8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00131f64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131f64 {

struct __attribute__((packed)) Object_00131f64_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00131f64_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00131f64_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;  // (from the original)
inline guest::global<u32, 0x00ae53bc> global_00ae53bc;  // (from the original)
inline guest::global<u32, 0x00ae53c0> global_00ae53c0;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)

void f_00131f64(gptr<Object_00131f64_0> arg0) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5_1 = 0x975344u;  // (from the original)
    *gptr<u32>(0x97533cu) = arg0.addr();  // (from the original)
    *gptr<u32>(r5_1 + 4u) = 0;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    *frame.at<u32>(4) = 0x8a3bc4;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_00131e5c(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *global_00ae53b8;
    if (s32(r2_2) < s32(*global_00ae53bc)) {
        *gptr<u32>(*global_00ae53c0 + (r2_2 << 2)) = r0_2;
        *global_00ae53b8 = *global_00ae53b8 + 1u;
    }
    *global_00975338 = r5_1;
}

}  // namespace d_00131f64
GUEST_EXPORT_FRAMED(0x00131f64, d_00131f64::f_00131f64, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00131fe0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00131fe0 {

struct __attribute__((packed)) Local_00131fe0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00131fe0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00131fe0_ea_3, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline guest::global<u32, 0x0097533c> global_0097533c;  // (from the original)
inline guest::global<u32, 0x00ae53b8> global_00ae53b8;  // (from the original)
inline guest::global<u32, 0x00ae53bc> global_00ae53bc;  // (from the original)
inline guest::global<u32, 0x00ae53c0> global_00ae53c0;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x001382cc, u32(u32, u32, u32, u32)> call_001382cc;  // (from the original)

void f_00131fe0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    call_00135740(0xae53d4u, r1, r2, r3);  // (from the original)
    *global_0097533c = 0xae53ac;  // (from the original)
    call_001382cc(0xae53acu, r0, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5_1 = 0x975344u;  // (from the original)
    *gptr<u32>(r5_1 + 4u) = 0;
    gptr<Local_00131fe0_ea_3> ea_3 = gptr<Local_00131fe0_ea_3>(*gptr<u32>(0x97533cu));  // (from the original)
    u32 r0_1 = ea_3->word_0;
    u32 r1_1 = ea_3->word_4;
    *frame.at<u32>(4) = 0x8a3bc4;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_00131e5c(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_3 = *global_00ae53b8;
    if (s32(r2_3) < s32(*global_00ae53bc)) {
        *gptr<u32>(*global_00ae53c0 + (r2_3 << 2)) = r0_2;
        *global_00ae53b8 = *global_00ae53b8 + 1u;
    }
    *global_00975338 = r5_1;
    frame.release();
    call_00137e84(0xae53d4u, 0xae53b8u);
    return;  // (from the original)
}

}  // namespace d_00131fe0
GUEST_EXPORT(0x00131fe0, d_00131fe0::f_00131fe0);

// f_0013208c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013208c {


void f_0013208c(gptr<sead__Framework> arg0) {
    arg0->word_0 = 0x905f9c;  // (from the original)
    arg0->byte_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0x9043cc;  // (from the original)
    u32 r1_1 = arg0.addr() + 0x10u;  // (from the original)
    arg0->word_14 = r1_1;
    arg0->word_18 = 0;
    arg0->word_10 = r1_1;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
}

}  // namespace d_0013208c
GUEST_EXPORT(0x0013208c, d_0013208c::f_0013208c);

// f_001320cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001320cc {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00137ec0, u32(u32, u32)> call_00137ec0;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)
inline constexpr guest::Function<0x003045a8, u32(u32, u32)> call_003045a8;  // (from the original)

u32 f_001320cc(gptr<sead__IDisposer> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    arg0->word_0 = 0x905fec;  // (from the original)
    arg0->word_4 = r1;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        if (r2 != 0 && r2 != 1u) {
            if (r2 == 2u) {
                guest::cpu()->r[1] = 0u;
                return r0;
            }
            if (r2 == 3u) {
                goto L_132140;
            }
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_2 = *global_00975338;
        if (r0_2 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_1 = call_00138fec(r0_2, r0, r2, guest::cpu()->r[3]);
        arg0->word_4 = r0_1;
        if (r0_1 == 0) {
            return r0;
        }
        goto L_13215c;
L_132140:;
        u32 r0_3 = *global_00975338;
        if (r0_3 == 0) {
            guest::cpu()->r[1] = 0u;
            return r0;
        }
        r0_1 = call_003045a8(r0_3, 0u);
        arg0->word_4 = r0_1;
        if (r0_1 == 0) {
            return r0;
        }
    }
L_13215c:;
    call_00137ec0(r0_1, r0);
    return r0;
}

}  // namespace d_001320cc
GUEST_EXPORT_FRAMED(0x001320cc, d_001320cc::f_001320cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00132174: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132174 {

inline guest::global<u32, 0x00975338> global_00975338;  // (from the original)
inline constexpr guest::Function<0x00137ec0, u32(u32, u32)> call_00137ec0;  // (from the original)
inline constexpr guest::Function<0x00138fec, u32(u32, u32, u32, u32)> call_00138fec;  // (from the original)

u32 f_00132174(gptr<sead__IDisposer> arg0) {
    arg0->word_0 = 0x905fec;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r0_1 = *global_00975338;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return arg0.addr();
    }
    u32 r0_2 = call_00138fec(r0_1, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = arg0.addr();
    }
    arg0->word_4 = r0_2;
    if (!zf_1) {
        call_00137ec0(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_00132174
GUEST_EXPORT_FRAMED(0x00132174, d_00132174::f_00132174, 0x4010);  // pushes {r4, lr} first, as the original

// f_001321c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001321c8 {

inline guest::global<u32, 0x009753d0> global_009753d0;  // (from the original)
inline guest::global<u32, 0x009753d4> global_009753d4;  // (from the original)
inline constexpr guest::Function<0x00131280, u32(u32, u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32)> call_001320cc;  // (from the original)
inline constexpr guest::Function<0x001385fc, u32(u32, u32, u32)> call_001385fc;  // (from the original)

void f_001321c8(u32 r0) {
    u32 r0_3 = 0;
    if (*global_009753d0 == 0) {
        u32 r2_1 = 4u;
        u32 r1_1 = r0;
        u32 r0_1 = call_00131280(0x44u, r1_1, r2_1, guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = r0_1 + 4u;
        if (r0_2 != 0) {
            r1_1 = r0;
            r2_1 = 3u;
            r0_2 = call_001320cc(r0_2, r1_1, r2_1);
            *gptr<u32>(r0_2) = 0x90600c;  // (from the original)
        }
        *global_009753d4 = r0_2;
        if (r0_1 == 0) {
            r0_3 = 0u;
        } else {
            r0_3 = call_001385fc(r0_1, r1_1, r2_1);
        }
        *global_009753d0 = r0_3;
    }
}

}  // namespace d_001321c8
GUEST_EXPORT_FRAMED(0x001321c8, d_001321c8::f_001321c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001323b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001323b4 {

inline constexpr guest::Function<0x00136cb0, u32(u32, u32, u32, u32)> call_00136cb0;  // (from the original)

u32 f_001323b4(u32 r0) {
    return call_00136cb0(r0 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_001323b4
GUEST_EXPORT(0x001323b4, d_001323b4::f_001323b4);

// f_00132530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00132530 {

struct __attribute__((packed)) Object_00132530_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00132530_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00132530_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013d040, u32(u32, u32, u32, u32)> call_0013d040;  // (from the original)

void f_00132530(gptr<Object_00132530_0> arg0) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return;
    }
    call_0013d040(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_0 = 0;
    arg0->word_4 = 0;
}

}  // namespace d_00132530
GUEST_EXPORT_FRAMED(0x00132530, d_00132530::f_00132530, 0x4010);  // pushes {r4, lr} first, as the original

// f_001325a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001325a0 {

inline constexpr guest::Function<0x00134fec, u32(u32, u32, u32, u32)> call_00134fec;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001325a0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_00134fec(r0 + 0xf0u, r1, r2, r3);  // (from the original)
    u32 r4_1 = r0_2 - 0xf0u;  // (from the original)
    call_002f76ac(r0_2 - 8u, 0x134fe8u, 4u, 2u);  // (from the original)
    call_002f76ac(r4_1 + 8u, 0x134fe8u, 4u, 0x38u);  // (from the original)
    return r4_1;
}

}  // namespace d_001325a0
GUEST_EXPORT_FRAMED(0x001325a0, d_001325a0::f_001325a0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013293c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013293c {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013293c(u32 r0) {
    u32 r0_1 = r0 + 0x6480u;  // (from the original)
    u32 r4_1 = r0_1 - 0x6480u;  // (from the original)
    call_002f76ac(r0_1 - 0x1428u, 0x134f6cu, 0x100u, 0x14u);  // (from the original)
    call_002f76ac(r4_1 + 0x58u, 0x138b98u, 0x400u, 0x14u);  // (from the original)
    call_002f76ac(r4_1 + 4u, 0x138ab0u, 2u, 0x2au);  // (from the original)
    return r4_1;
}

}  // namespace d_0013293c
GUEST_EXPORT_FRAMED(0x0013293c, d_0013293c::f_0013293c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001329a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001329a8 {

inline constexpr guest::Function<0x00138bbc, u32(u32, u32)> call_00138bbc;  // (from the original)

u32 f_001329a8(u32 r0, u32 r1) {
    if (r0 == 0) {
        return r0;
    }
    return call_00138bbc(0x986f10u, r0);  // (from the original)
}

}  // namespace d_001329a8
GUEST_EXPORT(0x001329a8, d_001329a8::f_001329a8);

// f_001330fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001330fc {

struct __attribute__((packed)) Object_001330fc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001330fc_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00138c88, u32(u32)> call_00138c88;  // (from the original)

u32 f_001330fc(gptr<Object_001330fc_0> arg0) {
    u32 r0_1 = arg0->word_4;
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_00138c88(r0_1);
    if (r0_2 != 0) {
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_001330fc
GUEST_EXPORT_FRAMED(0x001330fc, d_001330fc::f_001330fc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00133580: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00133580 {

struct __attribute__((packed)) Local_00133580_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00133580_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00133580_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)
inline constexpr guest::Function<0x00137fa4, u32(u32, u32, u32, u32)> call_00137fa4;  // (from the original)
inline constexpr guest::Function<0x0013805c, u32(u32, u32, u32, u32)> call_0013805c;  // (from the original)
inline constexpr guest::Function<0x00138f3c, u32(u32, u32, u32, u32)> call_00138f3c;  // (from the original)

u32 f_00133580(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r4_1 = 0;
    gptr<Local_00133580_ea_1> ea_1 = gptr<Local_00133580_ea_1>(frame.at(4).addr());
    ea_1->word_0 = frame.at(0xc).addr();  // (from the original)
    ea_1->word_4 = 0x20;  // (from the original)
    u32 r3_1 = *global_008c9f1c;
    *gptr<u8>(0x20u + (*frame.at<u32>(4) - 1u)) = u8(r3_1);  // (from the original)
    *frame.at<u8>(0xc) = u8(u32(*global_008c9f1c));  // (from the original)
    *frame.at<u32>(0) = 0x9048ec;  // (from the original)
    u32 r0_2 = call_00137fa4(frame.at(0).addr(), r1, 0x20u, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = call_00138f3c(r0, frame.at(0).addr(), r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r4_1 = r0_3;
    } else {
        r4_1 = *gptr<u32>(r0 + 0x1cu);  // (from the original)
        if (r4_1 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
    }
    if (r2 != 0) {
        call_0013805c(r2, r1, r2_1, r3_2);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r4_1;
}

}  // namespace d_00133580
GUEST_EXPORT_FRAMED(0x00133580, d_00133580::f_00133580, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342a4 {

inline constexpr guest::Function<0x00135f34, u32(u32, u32, u32, u32)> call_00135f34;  // (from the original)

void f_001342a4(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(0) = 1;
    call_00135f34(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_001342a4
GUEST_EXPORT_FRAMED(0x001342a4, d_001342a4::f_001342a4, 0x4000);  // pushes {lr} first, as the original

// f_001342b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342b8 {

struct __attribute__((packed)) Local_001342b8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_001342b8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001342b8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001342b8_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00136344, u32(u32, u32, u32, u32)> call_00136344;  // (from the original)

void f_001342b8() {
    guest::StackFrame frame(0xc);  // the original's stack frame
    gptr<Local_001342b8_ea_1> ea_1 = gptr<Local_001342b8_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    *frame.at<u32>(0) = r4_1;
    *frame.at<u32>(4) = r5_1;
    *frame.at<u32>(8) = r12_1;
    call_00136344(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342b8
GUEST_EXPORT_FRAMED(0x001342b8, d_001342b8::f_001342b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001342d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342d8 {

struct __attribute__((packed)) Local_001342d8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001342d8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001342d8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001342d8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001342d8_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00136014, u32(u32, u32, u32, u32)> call_00136014;  // (from the original)

void f_001342d8() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_001342d8_ea_1> ea_1 = gptr<Local_001342d8_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    *frame.at<u32>(0) = r4_1;
    *frame.at<u32>(4) = r5_1;
    *frame.at<u32>(8) = r6_1;
    *frame.at<u32>(0xc) = r12_1;  // (from the original)
    call_00136014(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342d8
GUEST_EXPORT_FRAMED(0x001342d8, d_001342d8::f_001342d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001342f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001342f8 {

struct __attribute__((packed)) Local_001342f8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001342f8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001342f8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001342f8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001342f8_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00136188, u32(u32, u32, u32, u32)> call_00136188;  // (from the original)

void f_001342f8() {
    guest::StackFrame frame(0x10);  // the original's stack frame
    gptr<Local_001342f8_ea_1> ea_1 = gptr<Local_001342f8_ea_1>(frame.at(0x20).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r6_1 = ea_1->word_8;
    u32 r12_1 = ea_1->word_c;
    *frame.at<u32>(0) = r4_1;
    *frame.at<u32>(4) = r5_1;
    *frame.at<u32>(8) = r6_1;
    *frame.at<u32>(0xc) = r12_1;  // (from the original)
    call_00136188(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_001342f8
GUEST_EXPORT_FRAMED(0x001342f8, d_001342f8::f_001342f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00134318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134318 {

struct __attribute__((packed)) Local_00134318_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00134318_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00134318_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00134318_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00134318_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00134318_r5_1, word_4, 0x4);  // (from the original)


u32 f_00134318(u32 r0) {
    u32 r0_1 = 0;
    u32 r1 = 0u;
    u32 r2 = r1;
    u32 r3 = r1;
L_134328:;
    u32 r12_1 = *gptr<u16>(r0 + (r3 << 1));
    if (r12_1 != 0x3au) {  // (from the original)
        u32 r12_2 = sxtb(r12_1);
        r3 += 1u;
        u32 r2_1 = r1 >> 0x18 | r2 << 8;  // (from the original)
        u32 res_1 = r3 - 8u;
        r1 = r12_2 | r1 << 8;
        r2 = r2_1 | u32(s32(r12_2) >> 0x1f);  // (from the original)
        if (res_1 >> 0x1f != ((r3 ^ 8u) & (r3 ^ res_1)) >> 0x1f) {  // (from the original)
            guest::preempt();
            goto L_134328;
        }
        r1 = 0u;
        r2 = r1;
    }
    if ((r1 | r2) == 0) {
        guest::cpu()->r[1] = r1;
        return 0u;
    } else {
        r3 = 0xae0cc8u;  // (from the original)
        r0 = 0u;
    }
    do {
        gptr<Local_00134318_r5_1> r5_1 = gptr<Local_00134318_r5_1>(r3 + (r0 << 4));
        if ((r5_1->word_0 ^ r1 | r5_1->word_4 ^ r2) == 0) {
            r0_1 = r3 + (r0 << 4);
        } else {
            gptr<Local_00134318_ea_1> ea_1 = gptr<Local_00134318_ea_1>(r5_1.addr() + 0x10u);  // (from the original)
            if ((ea_1->word_4 ^ r2 | ea_1->word_0 ^ r1) != 0) {
                goto L_1343c8;
            }
            r0_1 = r3 + (r0 << 4) + 0x10u;  // (from the original)
        }
        if (r0_1 != 0) {
            u32 r0_2 = *gptr<u32>(r0_1 + 8u);
            guest::cpu()->r[1] = r1;
            return r0_2;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
L_1343c8:;
        r0 += 2u;
        guest::preempt();
    } while (s32(r0) < 0x20);  // (from the original)
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_00134318
GUEST_EXPORT_FRAMED(0x00134318, d_00134318::f_00134318, 0x30);  // pushes {r4, r5} first, as the original

// f_001343e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001343e4 {

inline guest::global<u8, 0x008c9f1c> global_008c9f1c;  // (from the original)

void f_001343e4(gptr<sead__FixedSafeString_256_> arg0) {
    arg0->word_4 = arg0.addr() + 0xcu;  // (from the original)
    arg0->word_0 = 0x90558c;  // (from the original)
    arg0->word_8 = 0x100;  // (from the original)
    *gptr<u8>(0x100u + (arg0->word_4 - 1u)) = u8(u32(*global_008c9f1c));  // (from the original)
    arg0->word_0 = 0x9050f8;  // (from the original)
    *gptr<u8>(arg0->word_4) = u8(u32(*global_008c9f1c));
    arg0->word_0 = 0x9048b0;  // (from the original)
    guest::cpu()->r[1] = 0x9048b0u;  // (from the original)
}

}  // namespace d_001343e4
GUEST_EXPORT(0x001343e4, d_001343e4::f_001343e4);

// f_00134440: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134440 {

struct __attribute__((packed)) Object_00134440_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00134440_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00134440_0, word_c, 0xc);  // (from the original)


void f_00134440(gptr<Object_00134440_0> arg0, float S0_unused, float S1) {
    float S0_1 = std::bit_cast<float>(arg0->word_4);
    u32 r1_1 = arg0->word_8;
    u32 r2_1 = arg0->word_c;
    if (s32(r2_1) >= s32(r1_1)) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S1_1 = std::bit_cast<float>(arg0->word_0);
    float S0_2 = (S0_1 - S1_1) * float(s32(std::bit_cast<u32>(std::bit_cast<float>(r2_1)))) / float(s32(std::bit_cast<u32>(std::bit_cast<float>(r1_1)))) + S1_1;
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_00134440
GUEST_EXPORT(0x00134440, d_00134440::f_00134440);

// f_00134f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f04 {

inline guest::global<u32, 0x00975270> global_00975270;  // (from the original)
inline constexpr guest::Function<0x00139668, u32(u32, u32, u32, u32)> call_00139668;  // (from the original)

void f_00134f04() {
    call_00139668(*global_00975270, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *global_00975270 = 0;
}

}  // namespace d_00134f04
GUEST_EXPORT_FRAMED(0x00134f04, d_00134f04::f_00134f04, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f24 {

inline guest::global<u8, 0x00975268> global_00975268;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32)> call_00135520;  // (from the original)

void f_00134f24() {
    if (*global_00975268 == 0) {
        return;
    }
    call_00135520(0x134f50u);  // (from the original)
    *global_00975268 = 0;
}

}  // namespace d_00134f24
GUEST_EXPORT_FRAMED(0x00134f24, d_00134f24::f_00134f24, 0x4010);  // pushes {r4, lr} first, as the original

// f_00134f70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134f70 {

inline guest::global<u32, 0x00134f9c> global_00134f9c;  // (from the original)

void f_00134f70(gptr<SoundFaderEx> arg0) {
    float S0_1 = std::bit_cast<float>(*global_00134f9c);
    arg0->word_4 = std::bit_cast<u32>(S0_1);
    arg0->word_8 = std::bit_cast<u32>(S0_1);
    arg0->word_c = std::bit_cast<u32>(S0_1);
    arg0->word_10 = ~0u;
    arg0->word_14 = 0;
    arg0->word_0 = 0x8ed7f4;  // (from the original)
    guest::cpu()->s[0] = S0_1;
}

}  // namespace d_00134f70
GUEST_EXPORT(0x00134f70, d_00134f70::f_00134f70);

// f_00134fec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00134fec {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_00134fec(u32 r0) {
    call_002f76ac(r0, 0x139d20u, 0x878u, 8u);  // (from the original)
    return r0;
}

}  // namespace d_00134fec
GUEST_EXPORT_FRAMED(0x00134fec, d_00134fec::f_00134fec, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135010: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135010 {

struct __attribute__((packed)) Local_00135010_r5_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00135010_r5_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32, u32, u32)> call_00138f30;  // (from the original)
inline constexpr guest::Function<0x0013b6e0, u32(u32, u32, u32)> call_0013b6e0;  // (from the original)
inline constexpr guest::Function<0x0013c0e8, u32(u32, u32, u32, u32)> call_0013c0e8;  // (from the original)

u32 f_00135010(u32 r0, u32 r1, u32 r2) {
    gptr<Local_00135010_r5_1> r5_1 = gptr<Local_00135010_r5_1>(0u);
    u32 r2_1 = 0;
    u32 r7_1 = r1;
    if (r2 < 6u) {
        r5_1 = gptr<Local_00135010_r5_1>(r0 + (r2 << 2));
        r1 = r5_1->word_14;
        if (r1 != 0) {
            u32 r1_1 = r2 + (r2 << 1);
            u32 r0_2 = call_0013c0e8(r0 + (r1_1 << 3) + 0x2cu, r1_1, r2, guest::cpu()->r[3]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            if (r0_2 == 0) {
                goto L_135050;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
L_135050:;
    u32 r4_1 = r5_1->word_14;
    u32 r6_1 = r4_1 + 4u;
    call_00135748(r6_1, r1, r2_1);
    u32 r0_4 = call_00138f30(r4_1 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_001357ec(r6_1, guest::cpu()->r[1], guest::cpu()->r[2]);
    u32 r1_4 = guest::cpu()->r[1];
    if (s32(r0_4) > s32(r7_1)) {
        call_0013b6e0(r5_1->word_14, r7_1, guest::cpu()->r[2]);
        r1_4 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_4;
    return 1u;
}

}  // namespace d_00135010
GUEST_EXPORT_FRAMED(0x00135010, d_00135010::f_00135010, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00135134: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135134 {


void f_00135134(gptr<SoundMelodyPlayerOneSeqBase> arg0) {
    arg0->word_0 = 0x8f701c;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->byte_10 = 0;
    arg0->byte_11 = 0;
}

}  // namespace d_00135134
GUEST_EXPORT(0x00135134, d_00135134::f_00135134);

// f_001352dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001352dc {

inline guest::global<u32, 0x00974f10> global_00974f10;  // (from the original)
inline constexpr guest::Function<0x0013a1f0, u32(u32, u32, u32, u32)> call_0013a1f0;  // (from the original)

void f_001352dc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *global_00974f10 = r0;
    *frame.at<u32>(0) = r0;
    call_0013a1f0(frame.at(0).addr(), 0xb0500c8u, guest::cpu()->r[2], r3);  // (from the original)
}

}  // namespace d_001352dc
GUEST_EXPORT_FRAMED(0x001352dc, d_001352dc::f_001352dc, 0x4000);  // pushes {lr} first, as the original

// f_00135384: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135384 {

struct __attribute__((packed)) Local_00135384_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00135384_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00135384_r1_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00135384_r2_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
    u8 byte_d;
};
GUEST_OFFSET(Local_00135384_r2_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00135384_r2_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00135384_r2_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00135384_r2_2, byte_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00135384_r2_2, byte_d, 0xd);  // (from the original)

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_00135384(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r12 = 0;
    u32 r14 = 0;
    u32 res_1 = 0;
    u32 res_2 = 0;
    u32 r4 = r1;
    u32 r6 = r3;
    u32 r5 = r2;
    r1 = 0u;
    r3 = frame.at(0).addr();
L_1353a0:;
    u32 r2_1 = *gptr<s8>(r0 + r1);
    if (r2_1 != 0 && r2_1 != 0x3au) {  // (from the original)
        *gptr<u8>(r3 + r1) = u8(r2_1);
        r1 += 1u;
        if (s32(r1) < 8) {
            guest::preempt();
            goto L_1353a0;
        }
        call_00134250(r0, r1, r2_1, r3);
        r2 = 0x89d9d8u;  // (from the original)
        r12 = 0u;
        r14 = r12;
        r0 = r12;
        do {
            r1 = *gptr<s8>(r2 + r0);
            if (r1 == 0x3au) {  // (from the original)
                goto L_135450;
            }
            r0 += 1u;
            r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
            res_1 = r0 - 8u;
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);  // (from the original)
            guest::preempt();
        } while (res_1 >> 0x1f != ((r0 ^ 8u) & (r0 ^ res_1)) >> 0x1f);  // (from the original)
    } else {
        r12 = 0u;
        *gptr<u8>(r3 + r1) = 0x3a;  // (from the original)
        r14 = r12;
        r2 = r3;
        r0 = r12;
        do {
            r1 = *gptr<s8>(r2 + r0);
            if (r1 == 0x3au) {  // (from the original)
                goto L_135450;
            }
            r0 += 1u;
            r14 = r12 >> 0x18 | r14 << 8;  // (from the original)
            res_2 = r0 - 8u;
            r12 = r1 | r12 << 8;
            r14 |= u32(s32(r1) >> 0x1f);  // (from the original)
            guest::preempt();
        } while (res_2 >> 0x1f != ((r0 ^ 8u) & (r0 ^ res_2)) >> 0x1f);  // (from the original)
    }
    r12 = 0u;
    r14 = r12;
L_135450:;
    if ((r12 | r14) == 0) {
        guest::cpu()->r[1] = r1;
        return 0xe0e046bcu;  // (from the original)
    } else {
        r3 = 0xae0cc8u;  // (from the original)
        r1 = 0u;
    }
L_135464:;
    gptr<Local_00135384_r2_2> r2_2 = gptr<Local_00135384_r2_2>(r3 + (r1 << 4));
    if (r2_2->word_8 == 0) {
        gptr<Local_00135384_r1_1> r1_1 = gptr<Local_00135384_r1_1>(r3 + (r1 << 4));
        r1_1->word_0 = r12;
        r1_1->word_4 = r14;
        r2_2->word_8 = r4;
        r2_2->byte_c = u8(r5);
        r2_2->byte_d = u8(r6);
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    if ((r2_2->word_0 ^ r12 | r2_2->word_4 ^ r14) != 0) {
        goto L_1354b4;
    }
    guest::cpu()->r[1] = r1;
    return 0xc82044b4u;  // (from the original)
L_1354b4:;
    r1 += 1u;
    if (s32(r1) >= 0x20) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return 0xd8604659u;  // (from the original)
    }
    guest::preempt();
    goto L_135464;
}

}  // namespace d_00135384
GUEST_EXPORT_FRAMED(0x00135384, d_00135384::f_00135384, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135720 {

struct __attribute__((packed)) Object_00135720_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00135720_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013e0ec, u32(u32, u32, u32, u32)> call_0013e0ec;  // (from the original)

void f_00135720(gptr<Object_00135720_0> arg0) {
    u32 r1_1 = arg0->word_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    call_0013e0ec(0xae0f64u, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_00135720
GUEST_EXPORT(0x00135720, d_00135720::f_00135720);

// f_00135748: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135748 {

struct __attribute__((packed)) Object_00135748_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00135748_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00135748_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0012f050, u32(u32, u32)> call_0012f050;  // (from the original)

u32 f_00135748(gptr<Object_00135748_0> arg0) {
    u32 r1_1 = arg0->word_4;
    if (guest::cpu()->tls != r1_1) {
        call_0012f050(arg0.addr(), r1_1);
        r1_1 = guest::cpu()->r[1];
        arg0->word_4 = guest::cpu()->tls;
    }
    u32 r0_1 = arg0->word_8 + 1u;
    arg0->word_8 = r0_1;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00135748
GUEST_EXPORT_FRAMED(0x00135748, d_00135748::f_00135748, 0x4010);  // pushes {r4, lr} first, as the original

// f_001357ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001357ec {

struct __attribute__((packed)) Object_001357ec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_001357ec_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001357ec_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00128c70, u32(u32, u32)> call_00128c70;  // (from the original)

u32 f_001357ec(gptr<Object_001357ec_0> arg0) {
    u32 res_1 = arg0->word_8 - 1u;
    arg0->word_8 = res_1;
    if (res_1 != 0) {
        guest::cpu()->r[1] = res_1;
        return arg0.addr();
    }
    arg0->word_4 = 0;
    return call_00128c70(arg0.addr(), 0u);
}

}  // namespace d_001357ec
GUEST_EXPORT(0x001357ec, d_001357ec::f_001357ec);

// f_0013580c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013580c {

inline guest::global<u32, 0x0097dff8> global_0097dff8;  // (from the original)
inline constexpr guest::Function<0x00134c68, u32(u32, u32, u32, u32)> call_00134c68;  // (from the original)

void f_0013580c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    do {
        *gptr<u32>(r0) = 0u - *gptr<u32>(r0);
        guest::preempt();
    } while (u32(0) != 0);
    u32 r0_1 = *global_0097dff8;
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    call_00134c68(r0_1, r0, 0u, ~0u);
}

}  // namespace d_0013580c
GUEST_EXPORT_FRAMED(0x0013580c, d_0013580c::f_0013580c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135858: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135858 {


u32 f_00135858(u32 r0) {
    u32 r1 = ~0u;
    do {
        if (*gptr<u32>(r0) != 1u) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        *gptr<u32>(r0) = r1;
        guest::preempt();
    } while (u32(0) != 0);
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_00135858
GUEST_EXPORT(0x00135858, d_00135858::f_00135858);

// f_001358c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001358c0 {

inline guest::global<u32, 0x0097dffc> global_0097dffc;  // (from the original)
inline constexpr guest::Function<0x00129270, u32(u32, u32)> call_00129270;  // (from the original)
inline constexpr guest::Function<0x00135520, u32(u32, u32, u32, u32)> call_00135520;  // (from the original)

void f_001358c0(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_00135520(*global_0097dffc, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = r0_2 & 0x80000000u;  // (from the original)
    if (!(r1_1 >> 0x1f)) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        guest::cpu()->r[1] = 0x1358e0u;  // (from the original)
        return;
    }
    frame.release();
    call_00129270(r0_2, 0x1358e0u);
    return;  // (from the original)
}

}  // namespace d_001358c0
GUEST_EXPORT(0x001358c0, d_001358c0::f_001358c0);

// f_00135a8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135a8c {

inline constexpr guest::Function<0x0013a63c, u32(u32, u32, u32, u32)> call_0013a63c;  // (from the original)

u32 f_00135a8c(gptr<nn__cec__CTR__MessageBox> arg0) {
    arg0->word_0 = 0x8faf48;  // (from the original)
    call_0013a63c(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return arg0.addr();
}

}  // namespace d_00135a8c
GUEST_EXPORT_FRAMED(0x00135a8c, d_00135a8c::f_00135a8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135bb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135bb8 {

struct __attribute__((packed)) Object_00135bb8_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x38];  // (not used here)
    u32 word_54;
};
GUEST_OFFSET(Object_00135bb8_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00135bb8_0, word_54, 0x54);  // (from the original)

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;  // (from the original)

void f_00135bb8(gptr<Object_00135bb8_0> arg0) {
    arg0->word_54 = 0;
    if (arg0->word_18 != 0) {
        call_0013e6bc(arg0.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *gptr<u32>(arg0.addr() + 0x18u) = 0;  // (from the original)
    }
}

}  // namespace d_00135bb8
GUEST_EXPORT_FRAMED(0x00135bb8, d_00135bb8::f_00135bb8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00135be4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135be4 {

inline constexpr guest::Function<0x0013e6bc, u32(u32, u32, u32, u32)> call_0013e6bc;  // (from the original)

void f_00135be4(gptr<nn__fnd__ExpHeapBase> arg0) {
    if (arg0->word_18 == 0) {
        return;
    }
    call_0013e6bc(arg0.addr() + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    arg0->word_18 = 0;
}

}  // namespace d_00135be4
GUEST_EXPORT_FRAMED(0x00135be4, d_00135be4::f_00135be4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00135efc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135efc {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a7c8, u32(u32, u32, u32, u32)> call_0013a7c8;  // (from the original)

u32 f_00135efc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a7c8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00135efc
GUEST_EXPORT(0x00135efc, d_00135efc::f_00135efc);

// f_00135f18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135f18 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a7f8, u32(u32, u32, u32, u32)> call_0013a7f8;  // (from the original)

u32 f_00135f18(u32 r0_unused, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_0013a7f8(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], r3);
    if ((r0_2 >> 0x1f) != 0) {  // (from the original)
        call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    return s8(*frame.at<u8>(0));
}

}  // namespace d_00135f18
GUEST_EXPORT_FRAMED(0x00135f18, d_00135f18::f_00135f18, 0x4000);  // pushes {lr} first, as the original

// f_00135f34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135f34 {

struct __attribute__((packed)) Local_00135f34_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00135f34_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00135f34_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00135f34_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00135f34_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00135f34_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00135f34_r4_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00135f34_r7_1 {
    u32 word_0;
    u8 unknown_4[0xc];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_00135f34_r7_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00135f34_r7_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00135f34_r7_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00135f34_r7_1, word_18, 0x18);  // (from the original)

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;  // (from the original)

void f_00135f34(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    if (*frame.at<u32>(0x38) != 0 && r0 + 0xe1000000u >= 0x600000u) {  // (from the original)
        return;
    }
    gptr<Local_00135f34_r7_1> r7_1 = gptr<Local_00135f34_r7_1>(*gptr<u32>(0x97ea3cu));  // (from the original)
    u32 r12_1 = r7_1->word_0;
    u32 r5_1 = r7_1->word_10;
    u32 r6_1 = r7_1->word_14;
    u32 r7_2 = r7_1->word_18;
    *frame.at<u32>(0) = r12_1;
    gptr<Local_00135f34_ea_3> ea_3 = gptr<Local_00135f34_ea_3>(frame.at(0x10).addr());  // (from the original)
    ea_3->word_0 = r5_1;
    ea_3->word_4 = r6_1;
    ea_3->word_8 = r7_2;
    *frame.at<u8>(0) = 0;
    u32 r12_2 = *global_0097ea38;
    gptr<Local_00135f34_r4_1> r4_1 = gptr<Local_00135f34_r4_1>(frame.at(8).addr());
    *frame.at<u32>(4) = r1;
    *frame.at<u8>(3) = u8(r12_2);
    *frame.at<u32>(0x1c) = r3;  // (from the original)
    r4_1->word_0 = r0;
    r4_1->word_4 = r2;
    u32 r0_1 = call_00136464(r0);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00135f34
GUEST_EXPORT_FRAMED(0x00135f34, d_00135f34::f_00135f34, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00135fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00135fb4 {

struct __attribute__((packed)) Object_00135fb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00135fb4_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_00135fb4_r3_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_00135fb4_r3_1, word_0, 0x0);  // (from the original)


void f_00135fb4(gptr<Object_00135fb4_0> arg0, u32 r1) {
    arg0->word_0 = r1;
    r1 = 0u;
    do {
        gptr<Local_00135fb4_r3_1> r3_1 = gptr<Local_00135fb4_r3_1>(arg0->word_0);
        u32 r2_1 = r3_1->word_0;
        if ((r2_1 & 0xffu) >= 0xfu) {  // (from the original)
            r2_1 = r2_1 & ~0xffu | r1;  // (from the original)
        }
        r3_1->word_0 = ((r2_1 & ~0xff00u | r1 << 8 & 0xff00u) & ~0xff0000u | r1 << 0x10 & 0xff0000u) & ~0xff000000u | r1 << 0x18;  // (from the original)
        guest::preempt();
    } while (u32(0) != 0);
}

}  // namespace d_00135fb4
GUEST_EXPORT_FRAMED(0x00135fb4, d_00135fb4::f_00135fb4, 0x10);  // pushes {r4} first, as the original

// f_00136014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136014 {

struct __attribute__((packed)) Local_00136014_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00136014_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136014_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136014_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00136014_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00136014_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136014_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136014_ea_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00136014_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136014_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136014_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136014_r4_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00136014_r9_1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00136014_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136014_r9_1, word_1c, 0x1c);  // (from the original)

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;  // (from the original)

void f_00136014(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    gptr<Local_00136014_ea_1> ea_1 = gptr<Local_00136014_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    gptr<Local_00136014_r9_1> r9_1 = gptr<Local_00136014_r9_1>(*gptr<u32>(0x97ea3cu));  // (from the original)
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    *frame.at<u32>(0x1c) = r9_2;  // (from the original)
    *frame.at<u8>(0) = 2;
    u32 r12_2 = *global_0097ea38;
    *frame.at<u32>(0x18) = r6_1;  // (from the original)
    *frame.at<u8>(3) = u8(r12_2);
    gptr<Local_00136014_ea_8> ea_8 = gptr<Local_00136014_ea_8>(frame.at(4).addr());
    ea_8->word_0 = r0;
    ea_8->word_4 = r2;
    gptr<Local_00136014_r4_1> r4_1 = gptr<Local_00136014_r4_1>(frame.at(0xc).addr());  // (from the original)
    r4_1->word_0 = r1;
    r4_1->word_4 = r5_1;
    r4_1->word_8 = r7_1;
    *frame.at<u16>(0x1c) = u16(r3);  // (from the original)
    *frame.at<u16>(0x1e) = u16(r8_1);  // (from the original)
    u32 r0_1 = call_00136464(r0);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136014
GUEST_EXPORT_FRAMED(0x00136014, d_00136014::f_00136014, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136188 {

struct __attribute__((packed)) Local_00136188_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00136188_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136188_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136188_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00136188_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00136188_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00136188_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136188_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136188_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00136188_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00136188_r4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00136188_r4_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_00136188_r9_1 {
    u32 word_0;
    u8 unknown_4[0x18];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00136188_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136188_r9_1, word_1c, 0x1c);  // (from the original)

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline guest::global<u32, 0x0097ea3c> global_0097ea3c;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;  // (from the original)

void f_00136188(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    gptr<Local_00136188_ea_1> ea_1 = gptr<Local_00136188_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r8_1 = ea_1->word_c;
    u32 r3_1 = r3 | ea_1->word_0 << 0x10;  // (from the original)
    gptr<Local_00136188_r9_1> r9_1 = gptr<Local_00136188_r9_1>(*global_0097ea3c);
    u32 r12_1 = r9_1->word_0;
    u32 r9_2 = r9_1->word_1c;
    *frame.at<u32>(0) = r12_1;
    *frame.at<u32>(0x1c) = r9_2;  // (from the original)
    *frame.at<u8>(0) = 4;
    u32 r12_2 = *global_0097ea38;
    gptr<Local_00136188_r4_1> r4_1 = gptr<Local_00136188_r4_1>(frame.at(4).addr());
    *frame.at<u8>(3) = u8(r12_2);
    r4_1->word_0 = r0;
    r4_1->word_4 = r1;
    r4_1->word_8 = r2;
    r4_1->word_c = r3_1;
    r4_1->word_10 = r6_1 | r7_1 << 0x10;  // (from the original)
    r4_1->word_14 = r8_1;
    u32 r0_1 = call_00136464(r0);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136188
GUEST_EXPORT_FRAMED(0x00136188, d_00136188::f_00136188, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136344: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136344 {

struct __attribute__((packed)) Local_00136344_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136344_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136344_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136344_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_00136344_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136344_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00136344_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136344_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00136344_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136344_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136344_ea_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00136344_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00136344_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136344_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00136344_r4_1, word_8, 0x8);  // (from the original)

inline guest::global<u8, 0x0097ea38> global_0097ea38;  // (from the original)
inline constexpr guest::Function<0x00136464, u32(u32)> call_00136464;  // (from the original)
inline constexpr guest::Function<0x0013a834, u32(u32, u32)> call_0013a834;  // (from the original)

void f_00136344(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    gptr<Local_00136344_ea_1> ea_1 = gptr<Local_00136344_ea_1>(frame.at(0x40).addr());  // (from the original)
    u32 r5_1 = ea_1->word_0;
    u32 r6_1 = ea_1->word_4;
    u32 r7_1 = ea_1->word_8;
    u32 r9_1 = *gptr<u32>(0x97ea3cu);  // (from the original)
    u32 r12_1 = *gptr<u32>(r9_1);
    gptr<Local_00136344_ea_3> ea_3 = gptr<Local_00136344_ea_3>(r9_1 + 0x18u);  // (from the original)
    u32 r8_1 = ea_3->word_0;
    u32 r9_2 = ea_3->word_4;
    *frame.at<u32>(0) = r12_1;
    gptr<Local_00136344_ea_5> ea_5 = gptr<Local_00136344_ea_5>(frame.at(0x18).addr());  // (from the original)
    ea_5->word_0 = r8_1;
    ea_5->word_4 = r9_2;
    *frame.at<u8>(0) = 3;
    *frame.at<u8>(3) = u8(u32(*global_0097ea38));
    gptr<Local_00136344_ea_8> ea_8 = gptr<Local_00136344_ea_8>(frame.at(4).addr());
    ea_8->word_0 = r0;
    ea_8->word_4 = r3;
    gptr<Local_00136344_r4_1> r4_1 = gptr<Local_00136344_r4_1>(frame.at(0xc).addr());  // (from the original)
    r4_1->word_0 = r1 | r2 << 0x10;  // (from the original)
    r4_1->word_4 = r5_1 | r6_1 << 0x10;  // (from the original)
    r4_1->word_8 = r7_1;
    u32 r0_1 = call_00136464(r0);
    call_0013a834(r0_1 + 0x58u, frame.at(0).addr());  // (from the original)
}

}  // namespace d_00136344
GUEST_EXPORT_FRAMED(0x00136344, d_00136344::f_00136344, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_00136490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136490 {

inline guest::global<u32, 0x00974af0> global_00974af0;  // (from the original)

u32 f_00136490() {
    return (*global_00974af0 & 7u) == 2u ? 1u : 0u;
}

}  // namespace d_00136490
GUEST_EXPORT(0x00136490, d_00136490::f_00136490);

// f_00136530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136530 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a968, u32(u32, u32, u32, u32)> call_0013a968;  // (from the original)

u32 f_00136530(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a968(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00136530
GUEST_EXPORT(0x00136530, d_00136530::f_00136530);

// f_0013654c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013654c {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013a9a4, u32(u32, u32, u32, u32)> call_0013a9a4;  // (from the original)

u32 f_0013654c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0013a9a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r0_1 >> 0x1f;  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_00134250(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013654c
GUEST_EXPORT(0x0013654c, d_0013654c::f_0013654c);

// f_001365d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001365d4 {

inline constexpr guest::Function<0x00134250, u32(u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x00136598, u32(u32, u32, u32, u32)> call_00136598;  // (from the original)

u32 f_001365d4(u32 r0, u32 r1_unused, u32 r2) {
    u32 r8 = r0;
    u32 r1 = 0x4000188u;  // (from the original)
    u32 r5 = 0xf9605002u;  // (from the original)
    u32 r7 = 0xc9405001u;  // (from the original)
    u32 r4 = 0u;
    u32 r6 = r5 + 0x3fcu;  // (from the original)
L_1365f8:;
    u32 r0_1 = call_00136598(r8, r1, r2, guest::cpu()->r[3]);
    u32 res_1 = r0_1 & 0x80000000u;  // (from the original)
    r1 = res_1;
    r2 = r0_1;
    if (res_1 >> 0x1f) {  // (from the original)
        if (r0_1 == r7) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
        r1 = r0_1 & 0x3fc00u;  // (from the original)
        if (r1 != 0x2c00u) {  // (from the original)
            if (r0_1 == r6) {
                guest::cpu()->r[1] = r1;
                return r5;
            }
            u32 r0_2 = r2 >> 0x1f;  // (from the original)
            if (r0_2 != 0) {
                call_00134250(r0_2, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
            }
        }
        r4 += 1u;
        if (s32(r4) < 2) {
            guest::preempt();
            goto L_1365f8;
        }
    } else if (s32(r4) < 2) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_001365d4
GUEST_EXPORT_FRAMED(0x001365d4, d_001365d4::f_001365d4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00136718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136718 {

struct __attribute__((packed)) Object_00136718_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136718_1, word_0, 0x0);  // (from the original)


u32 f_00136718(u32 r0, gptr<Object_00136718_1> arg1) {
    u32 r1 = arg1.addr();
    u32 r4 = 0;
    u32 r2_1 = 0;
    u32 r3 = r0;
    r0 = arg1->word_0;
    if (r1 == r0) {
        guest::cpu()->r[1] = r1;
        return r0;
    } else {
        r4 = 0u;
    }
    do {
        r2_1 = *gptr<u32>(r1);
        u32 r12_1 = *gptr<u32>(r1 + 4);
        *gptr<u32>(r2_1 + 4u) = r12_1;
        *gptr<u32>(r12_1) = r2_1;
        *gptr<u32>(r3) = *gptr<u32>(r3) - 1u;
        *gptr<u32>(r1) = r4;
        *gptr<u32>(r1 + 4u) = r4;
        r1 = r2_1;
        guest::preempt();
    } while (r2_1 != r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00136718
GUEST_EXPORT_FRAMED(0x00136718, d_00136718::f_00136718, 0x10);  // pushes {r4} first, as the original

// f_00136764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136764 {

struct __attribute__((packed)) Object_00136764_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136764_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x00975100> global_00975100;  // (from the original)
inline guest::global<u32, 0x00975104> global_00975104;  // (from the original)
inline guest::global<u32, 0x00975108> global_00975108;  // (from the original)
inline guest::global<u32, 0x0097510c> global_0097510c;  // (from the original)
inline guest::global<u32, 0x00975110> global_00975110;  // (from the original)

u32 f_00136764(gptr<Object_00136764_0> arg0) {
    u32 r0_1 = arg0->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    u32 res_1 = r2_1 - 0x20000009u;  // (from the original)
    u32 zf_1 = res_1 == 0;
    if (zf_1) {
        u32 r1_1 = *global_00975104;
        return guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
    }
    if (!!zf_1 || (res_1 >> 0x1f) != (((r2_1 ^ 0x20000009u) & (r2_1 ^ res_1)) >> 0x1f)) {  // (from the original)
        if (r2_1 == 0x20000002u) {  // (from the original)
            u32 r1_2 = *global_0097510c;
            return guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
        }
        if (r2_1 != 0x20000004u) {  // (from the original)
            guest::cpu()->r[1] = 0x975100u;  // (from the original)
            return r0_1;
        }
        u32 r1_3 = *global_00975108;
        return guest::call_address<u32>(r1_3, r0_1, r1_3, r2_1, guest::cpu()->r[3]);
    }
    u32 r2_2 = r2_1 - 0x20000011u;  // (from the original)
    if (r2_2 == 0) {
        u32 r1_4 = *global_00975100;
        return guest::call_address<u32>(r1_4, r0_1, r1_4, r2_2, guest::cpu()->r[3]);
    }
    if (r2_2 != 0x10u) {  // (from the original)
        guest::cpu()->r[1] = 0x975100u;  // (from the original)
        return r0_1;
    }
    u32 r1_5 = *global_00975110;
    return guest::call_address<u32>(r1_5, r0_1, r1_5, r2_2, guest::cpu()->r[3]);
}

}  // namespace d_00136764
GUEST_EXPORT(0x00136764, d_00136764::f_00136764);

// f_00136860: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136860 {

struct __attribute__((packed)) Object_00136860_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00136860_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013e9e4, u32(u32, u32, u32, u32)> call_0013e9e4;  // (from the original)

void f_00136860(gptr<Object_00136860_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 ea_1 = arg0->word_0 + 0xc4u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    *frame.at<u32>(0) = r0_1;
    if (r0_1 != 0) {
        call_0013e9e4(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_00136860
GUEST_EXPORT_FRAMED(0x00136860, d_00136860::f_00136860, 0x4000);  // pushes {lr} first, as the original

// f_00136c9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136c9c {

struct __attribute__((packed)) Object_00136c9c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
};
GUEST_OFFSET(Object_00136c9c_0, word_20, 0x20);  // (from the original)


void f_00136c9c(gptr<Object_00136c9c_0> arg0) {
    u32 r1_1 = arg0->word_20;
    arg0->word_20 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00136c9c
GUEST_EXPORT(0x00136c9c, d_00136c9c::f_00136c9c);

// f_00136cb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136cb0 {


u32 f_00136cb0(gptr<nw__lyt__Layout> arg0) {
    u32 r2_1 = *gptr<u32>(arg0->word_0 + 0x20u);  // (from the original)
    // virtual function 8 of arg0.addr() (nw__lyt__Layout)
    return guest::call_address<u32>(r2_1, arg0.addr(), 0u, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_00136cb0
GUEST_EXPORT(0x00136cb0, d_00136cb0::f_00136cb0);

// f_00136d2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136d2c {

struct __attribute__((packed)) Object_00136d2c_0 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
    u8 unknown_14[0x44];  // (not used here)
    u8 byte_58;
};
GUEST_OFFSET(Object_00136d2c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00136d2c_0, byte_58, 0x58);  // (from the original)

struct __attribute__((packed)) Object_00136d2c_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Object_00136d2c_1, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00136d2c_1, byte_9d, 0x9d);  // (from the original)

struct __attribute__((packed)) Local_00136d2c_r3_1 {
    u8 unknown_0[0x50];  // (not used here)
    u32 word_50;
    u8 unknown_54[0x49];  // (not used here)
    u8 byte_9d;
};
GUEST_OFFSET(Local_00136d2c_r3_1, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Local_00136d2c_r3_1, byte_9d, 0x9d);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> call_0013e7d8;  // (from the original)

void f_00136d2c(gptr<Object_00136d2c_0> arg0, gptr<Object_00136d2c_1> arg1) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r12 = r1;
    r1 = arg0->word_10;
    if (r1 != r0 + 0x10u) {  // (from the original)
        r14 = s8(arg0->byte_58);
        u32 r2 = u32(arg1->byte_9d) + arg1->word_50;
        do {
            gptr<Local_00136d2c_r3_1> r3_1 = gptr<Local_00136d2c_r3_1>(r1 - 0x108u);  // (from the original)
            if (r14 != 0) {
                u32 res_1 = r2 - 0x7fu;  // (from the original)
                u32 nf_1 = res_1 >> 0x1f;  // (from the original)
                u32 zf_1 = res_1 == 0;
                u32 vf_1 = ((r2 ^ 0x7fu) & (r2 ^ res_1)) >> 0x1f;  // (from the original)
                u32 r4_1 = 0x7fu;  // (from the original)
                if (zf_1 || nf_1 != vf_1) {
                    nf_1 = r2 >> 0x1f;  // (from the original)
                    vf_1 = 0u;
                    r4_1 = r2;
                }
                u32 r5_1 = 0u;
                if (nf_1 == vf_1) {
                    r5_1 = r4_1;
                }
                u32 r3_2 = r3_1->word_50 + u32(r3_1->byte_9d);
                u32 res_2 = r3_2 - 0x7fu;  // (from the original)
                if (res_2 != 0 && res_2 >> 0x1f == ((r3_2 ^ 0x7fu) & (r3_2 ^ res_2)) >> 0x1f) {  // (from the original)
                    r3_2 = 0x7fu;  // (from the original)
                } else if (s32(r3_2) < 0) {
                    r3_2 = 0u;
                }
                if (s32(r5_1) <= s32(r3_2)) {
                    r0_1 = r0 + 0xcu;  // (from the original)
                    r2_1 = r12 + 0x108u;  // (from the original)
                    frame.release();
                    call_0013e7d8(r0_1, r1, r2_1);
                    return;
                }
            } else {
                u32 res_3 = r2 - 0x7fu;  // (from the original)
                u32 nf_2 = res_3 >> 0x1f;  // (from the original)
                u32 zf_2 = res_3 == 0;
                u32 vf_2 = ((r2 ^ 0x7fu) & (r2 ^ res_3)) >> 0x1f;  // (from the original)
                u32 r5_2 = 0x7fu;  // (from the original)
                if (zf_2 || nf_2 != vf_2) {
                    nf_2 = r2 >> 0x1f;  // (from the original)
                    vf_2 = 0u;
                    r5_2 = r2;
                }
                u32 r4_2 = 0u;
                if (nf_2 == vf_2) {
                    r4_2 = r5_2;
                }
                u32 r3_3 = r3_1->word_50 + u32(r3_1->byte_9d);
                u32 res_4 = r3_3 - 0x7fu;  // (from the original)
                if (res_4 != 0 && res_4 >> 0x1f == ((r3_3 ^ 0x7fu) & (r3_3 ^ res_4)) >> 0x1f) {  // (from the original)
                    r3_3 = 0x7fu;  // (from the original)
                } else if (s32(r3_3) < 0) {
                    r3_3 = 0u;
                }
                if (s32(r4_2) < s32(r3_3)) {
                    r0_1 = r0 + 0xcu;  // (from the original)
                    r2_1 = r12 + 0x108u;  // (from the original)
                    frame.release();
                    call_0013e7d8(r0_1, r1, r2_1);
                    return;
                }
            }
            r1 = *gptr<u32>(r1);
            guest::preempt();
        } while (r1 != r0 + 0x10u);  // (from the original)
    }
    r0_1 = r0 + 0xcu;  // (from the original)
    r2_1 = r12 + 0x108u;  // (from the original)
    frame.release();
    call_0013e7d8(r0_1, r1, r2_1);
    return;
}

}  // namespace d_00136d2c
GUEST_EXPORT(0x00136d2c, d_00136d2c::f_00136d2c);

// f_00136e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136e0c {

struct __attribute__((packed)) Local_00136e0c_r0_3 {
    u32 word_0;
    u8 unknown_4[0x218];  // (not used here)
    u32 word_21c;
};
GUEST_OFFSET(Local_00136e0c_r0_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136e0c_r0_3, word_21c, 0x21c);  // (from the original)

inline constexpr guest::Function<0x0013b560, u32(u32)> call_0013b560;  // (from the original)

u32 f_00136e0c(gptr<nw__snd__internal__driver__DisposeCallback> arg0) {
    arg0->word_0 = 0x902278;  // (from the original)
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    u32 r0_2 = call_0013b560((arg0.addr() + 8u) + 4u);
    *gptr<u32>(r0_2 + 0x20cu) = 0;  // (from the original)
    *gptr<u32>(r0_2) = 0x901eb4;  // (from the original)
    gptr<Local_00136e0c_r0_3> r0_3 = gptr<Local_00136e0c_r0_3>(r0_2 - 0xcu);  // (from the original)
    r0_3->word_0 = 0x901e94;  // (from the original)
    r0_3->word_21c = 0;
    return r0_3.addr();
}

}  // namespace d_00136e0c
GUEST_EXPORT_FRAMED(0x00136e0c, d_00136e0c::f_00136e0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00136f2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00136f2c {

struct __attribute__((packed)) Object_00136f2c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00136f2c_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_00136f2c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00136f2c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00136f2c_ea_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00138f08, u32(u32, u32, u32, u32)> call_00138f08;  // (from the original)
inline constexpr guest::Function<0x0013aea0, u32(u32, u32, u32, u32)> call_0013aea0;  // (from the original)
inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> call_0013b22c;  // (from the original)
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x0013c2f0, u32(u32, u32, u32, u32)> call_0013c2f0;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)

u32 f_00136f2c(gptr<Object_00136f2c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r8 = r0;
    u32 r4_1 = ~0u;
    u32 r5 = *frame.at<u32>(0x58);  // (from the original)
    u32 r11 = 0u;
    *frame.at<u32>(8) = r4_1;
    gptr<Local_00136f2c_ea_3> ea_3 = gptr<Local_00136f2c_ea_3>(frame.at(0xc).addr());  // (from the original)
    ea_3->word_0 = r4_1;
    ea_3->word_4 = r11;
    u32 r10 = r2;
    u32 r0_1 = arg0->word_4;
    u32 r6 = r1;
    u32 r7 = r3;
    r0 = call_0013c2f0(r0_1, r1, frame.at(8).addr(), r3);
    if (r0 != 0) {
        u32 r0_2 = *frame.at<u32>(8);
        if (r0_2 + 1u == 0) {
            return 1u;
        }
        u32 r0_4 = call_00138f08(*gptr<u32>(r8 + 4u), r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 != 1u) {
            if (r0_4 == 3u) {
                goto L_13708c;
            }
            return 1u;
        }
        r6 = *frame.at<u32>(8);
        if (*frame.at<u32>(0xc) >= r6) {  // (from the original)
            r9 = frame.at(0x14).addr();  // (from the original)
        } else {
            return 1u;
        }
        do {
            if ((r7 & 1u) != 0) {
                u32 r0_6 = call_0013c718(*gptr<u32>(r8 + 4u), r6, r2, r3);
                *frame.at<u32>(0) = r11;
                u32 r0_7 = call_0013b438(r8, r0_6, r10, r5);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 == 0) {
                    goto L_137080;
                }
            }
            if ((r7 & 0xcu) != 0) {  // (from the original)
                u32 r0_8 = ~0u;
                *frame.at<u8>(0x2c) = u8(r11);  // (from the original)
                *frame.at<u32>(0x14) = r11;  // (from the original)
                *frame.at<u8>(0x2d) = u8(r11);  // (from the original)
                *frame.at<u32>(0x28) = r11;  // (from the original)
                *frame.at<u32>(0x18) = r0_8;  // (from the original)
                *frame.at<u32>(0x1c) = r0_8;  // (from the original)
                *frame.at<u32>(0x20) = r0_8;  // (from the original)
                *frame.at<u32>(0x24) = r0_8;  // (from the original)
                u32 r0_10 = call_0013c240(*gptr<u32>(r8 + 4u), r6, frame.at(0x14).addr(), r3);  // (from the original)
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_10 == 0) {
                    goto L_137080;
                } else {
                    r4 = 0u;
                }
                do {
                    u32 r1_1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
                    if (r1_1 + 1u != 0) {
                        *frame.at<u32>(0) = r5;
                        u32 r0_11 = call_0013b22c(r8, r1_1, r10, r7);
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        if (r0_11 == 0) {
                            goto L_137080;
                        }
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 4u);
            }
            r6 += 1u;
            guest::preempt();
        } while (r6 <= *frame.at<u32>(0xc));  // (from the original)
        return 1u;
L_137080:;
        r0 = 0u;
    }
    return r0;
L_13708c:;
    r4 = *frame.at<u32>(8);
    if (*frame.at<u32>(0xc) >= r4) {  // (from the original)
        do {
            *frame.at<u32>(0) = r5;
            *frame.at<u32>(4) = r6;
            r0 = call_0013aea0(r8, r4, r10, r7);
            if (r0 == 0) {
                return r0;
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 <= *frame.at<u32>(0xc));  // (from the original)
    }
    return 1u;
}

}  // namespace d_00136f2c
GUEST_EXPORT_FRAMED(0x00136f2c, d_00136f2c::f_00136f2c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_001370dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001370dc {

struct __attribute__((packed)) Object_001370dc_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_001370dc_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b22c, u32(u32, u32, u32, u32)> call_0013b22c;  // (from the original)
inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c240, u32(u32, u32, u32, u32)> call_0013c240;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)

u32 f_001370dc(gptr<Object_001370dc_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r9 = 0;
    u32 r0_3 = 0;
    u32 r6 = r0;
    u32 r5 = *frame.at<u32>(0x40);  // (from the original)
    u32 r8 = r2;
    u32 r7 = r3;
    if ((r3 & 1u) != 0) {
        u32 r0_2 = call_0013c718(arg0->word_4, r1, r2, r3);
        *frame.at<u32>(0) = 0;
        r0_3 = call_0013b438(r6, r0_2, r8, r5);
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            return r0_3;
        }
    }
    if ((r7 & 0xcu) != 0) {  // (from the original)
        u32 r0_4 = ~0u;
        *frame.at<u8>(0x1c) = 0;  // (from the original)
        *frame.at<u32>(4) = 0;
        *frame.at<u8>(0x1d) = 0;  // (from the original)
        *frame.at<u32>(0x18) = 0;  // (from the original)
        *frame.at<u32>(8) = r0_4;
        *frame.at<u32>(0xc) = r0_4;  // (from the original)
        *frame.at<u32>(0x10) = r0_4;  // (from the original)
        *frame.at<u32>(0x14) = r0_4;  // (from the original)
        r0_3 = call_0013c240(*gptr<u32>(r6 + 4u), r1, frame.at(4).addr(), r3);
        if (r0_3 == 0) {
            return r0_3;
        } else {
            r4 = 0u;
            r9 = frame.at(4).addr();
        }
        do {
            u32 r1_1 = *gptr<u32>(r9 + (r4 << 2) + 4u);
            if (r1_1 + 1u != 0) {
                *frame.at<u32>(0) = r5;
                r0_3 = call_0013b22c(r6, r1_1, r8, r7);
                if (r0_3 == 0) {
                    return r0_3;
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 4u);
    }
    return 1u;
}

}  // namespace d_001370dc
GUEST_EXPORT_FRAMED(0x001370dc, d_001370dc::f_001370dc, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_001376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001376d8 {

struct __attribute__((packed)) Object_001376d8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_001376d8_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0013a9e0, u32(u32, u32, u32, u32)> call_0013a9e0;  // (from the original)
inline constexpr guest::Function<0x0013edb4, u32(u32, u32)> call_0013edb4;  // (from the original)
inline constexpr guest::Function<0x0014077c, u32(u32, u32, u32)> call_0014077c;  // (from the original)
inline constexpr guest::Function<0x00140900, u32(u32, u32, u32)> call_00140900;  // (from the original)
inline constexpr guest::Function<0x001412f8, u32(u32, u32, u32, u32)> call_001412f8;  // (from the original)

u32 f_001376d8(gptr<Object_001376d8_0> arg0, u32 r1, u32 r2) {
    u32 r0_4 = 0;
    if (arg0->word_0 != 0) {
        call_001412f8(arg0.addr(), r1, r2, guest::cpu()->r[3]);
        call_0014077c(arg0->word_0, 3u, guest::cpu()->r[2]);
        call_00140900(arg0->word_0, guest::cpu()->r[1], guest::cpu()->r[2]);
        arg0->word_0 = 0;
    }
    u32 r1_2 = r1 + r2;
    u32 r0_3 = r1 + 3u & ~3u;
    if (r0_3 > r1_2) {
        r0_4 = 0u;
    } else {
        r0_4 = call_0013a9e0(r0_3, r1_2 - r0_3, 0u, guest::cpu()->r[3]);
        r1_2 = guest::cpu()->r[1];
        arg0->word_0 = r0_4;
        if (r0_4 != 0) {
            r0_4 = call_0013edb4(arg0.addr(), r1_2);
            r1_2 = guest::cpu()->r[1];
            if (r0_4 != 0) {
                r0_4 = 1u;
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return r0_4;
}

}  // namespace d_001376d8
GUEST_EXPORT_FRAMED(0x001376d8, d_001376d8::f_001376d8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013775c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013775c {

struct __attribute__((packed)) Object_0013775c_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0013775c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013775c_0, word_c, 0xc);  // (from the original)


void f_0013775c(gptr<Object_0013775c_0> arg0) {
    u32 r3_1 = arg0.addr() + 8u;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = r3_1;
    arg0->word_c = r3_1;
}

}  // namespace d_0013775c
GUEST_EXPORT(0x0013775c, d_0013775c::f_0013775c);

// f_00137830: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137830 {

struct __attribute__((packed)) Object_00137830_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00137830_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;  // (from the original)

void f_00137830(gptr<Object_00137830_0> arg0) {
    u32 r1_1 = arg0->word_4;
    if (r1_1 == 0) {
        return;
    }
    call_0013b72c(arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00137830
GUEST_EXPORT(0x00137830, d_00137830::f_00137830);

// f_00137848: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137848 {

inline constexpr guest::Function<0x0013b72c, u32(u32, u32, u32, u32)> call_0013b72c;  // (from the original)
inline constexpr guest::Function<0x0013ef10, u32(u32, u32)> call_0013ef10;  // (from the original)

u32 f_00137848(gptr<nw__font__ResFont> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = arg0->word_4;
    arg0->word_0 = 0x902720;  // (from the original)
    if (r1_1 != 0) {
        call_0013b72c(arg0.addr(), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    frame.release();
    return call_0013ef10(arg0.addr(), r1_1);
}

}  // namespace d_00137848
GUEST_EXPORT(0x00137848, d_00137848::f_00137848);

// f_00137878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137878 {

struct __attribute__((packed)) Object_00137878_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u8 unknown_24[0x4];  // (not used here)
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x4];  // (not used here)
    u32 word_38;
    u32 word_3c;
    u32 word_40;
    u8 unknown_44[0x4];  // (not used here)
    u32 word_48;
    u32 word_4c;
    u32 word_50;
    u32 word_54;
    u32 word_58;
    u32 word_5c;
    u8 byte_60;
    u8 byte_61;
};
GUEST_OFFSET(Object_00137878_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_40, 0x40);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_48, 0x48);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_50, 0x50);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_54, 0x54);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Object_00137878_0, word_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Object_00137878_0, byte_60, 0x60);  // (from the original)
GUEST_OFFSET(Object_00137878_0, byte_61, 0x61);  // (from the original)


void f_00137878(gptr<Object_00137878_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    u32 r2_1 = ~2u;
    arg0->word_10 = 0;
    arg0->word_20 = 0;
    arg0->word_30 = 0;
    u32 r3_1 = ~0u;
    arg0->word_40 = 0;
    arg0->word_8 = r2_1;
    arg0->word_c = r3_1;
    arg0->word_18 = r2_1;
    arg0->word_1c = r3_1;
    arg0->word_38 = r2_1;
    arg0->word_3c = r3_1;
    arg0->word_28 = r2_1;
    arg0->word_2c = r3_1;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->byte_60 = 0;
    arg0->byte_61 = 0;
    arg0->word_48 = r2_1;
    arg0->word_4c = r3_1;
    arg0->word_50 = r2_1;
    arg0->word_54 = r3_1;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00137878
GUEST_EXPORT_FRAMED(0x00137878, d_00137878::f_00137878, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013796c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013796c {

struct __attribute__((packed)) Object_0013796c_0 {
    u8 unknown_0[0x2d0];  // (not used here)
    u8 byte_2d0;
};
GUEST_OFFSET(Object_0013796c_0, byte_2d0, 0x2d0);  // (from the original)

struct __attribute__((packed)) Local_0013796c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013796c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013796c_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0087bdb4> global_0087bdb4;  // (from the original)
inline guest::global<u32, 0x0087bdb8> global_0087bdb8;  // (from the original)
inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline constexpr guest::Function<0x0013b7dc, u32(u32, u32, u32, u32)> call_0013b7dc;  // (from the original)

void f_0013796c(gptr<Object_0013796c_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_2d0 == 0) {
        return;
    }
    call_0013b7dc(arg0.addr(), r1, r2, r3);
    u32 r1_1 = *global_0087bdb4;
    u32 r2_1 = *global_0087bdb8;
    gptr<Local_0013796c_ea_1> ea_1 = gptr<Local_0013796c_ea_1>(arg0.addr() + 0x2c8u);  // (from the original)
    ea_1->word_0 = r1_1;
    ea_1->word_4 = r2_1;
    arg0->byte_2d0 = 0;
    *global_00953658 = 0;
    guest::cpu()->r[1] = 0x953658u;  // (from the original)
}

}  // namespace d_0013796c
GUEST_EXPORT_FRAMED(0x0013796c, d_0013796c::f_0013796c, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379b4 {

inline guest::global<u32, 0x00953658> global_00953658;  // (from the original)
inline guest::global<u32, 0x0095365c> global_0095365c;  // (from the original)
inline constexpr guest::Function<0x0013b80c, u32(u32, u32, u32, u32)> call_0013b80c;  // (from the original)

u32 f_001379b4(u32 r0) {
    *global_0095365c = 0;
    *global_00953658 = 0;
    u32 r0_2 = call_0013b80c(r0 + 0xcu, 0x953658u, 0u, guest::cpu()->r[3]);  // (from the original)
    return r0_2 - 0xcu;  // (from the original)
}

}  // namespace d_001379b4
GUEST_EXPORT_FRAMED(0x001379b4, d_001379b4::f_001379b4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001379e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001379e4 {

struct __attribute__((packed)) Object_001379e4_0 {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(Object_001379e4_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_001379e4_0, byte_9, 0x9);  // (from the original)


void f_001379e4(gptr<Object_001379e4_0> arg0) {
    u32 r1_1 = arg0->byte_0;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    arg0->byte_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->byte_9 = 6;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_001379e4
GUEST_EXPORT(0x001379e4, d_001379e4::f_001379e4);

// f_00137c60: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137c60 {

struct __attribute__((packed)) Object_00137c60_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_00137c60_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137c60_0, word_c, 0xc);  // (from the original)


void f_00137c60(gptr<Object_00137c60_0> arg0) {
    arg0->word_4 = arg0.addr();
    arg0->word_8 = 0;
    arg0->word_0 = arg0.addr();
    arg0->word_c = 0x10;  // (from the original)
}

}  // namespace d_00137c60
GUEST_EXPORT(0x00137c60, d_00137c60::f_00137c60);

// f_00137d88: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137d88 {

inline constexpr guest::Function<0x00131280, u32(u32, u32, u32)> call_00131280;  // (from the original)
inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> call_0013cbdc;  // (from the original)

void f_00137d88(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (r1 != 0 && r1 >> 0x1f == ((r1 & (r1 ^ r1)) >> 0x1f)) {  // (from the original)
        u32 r0_2 = call_00131280(r1 << 2, r2, 4u);
        *gptr<u32>(r0) = r0_2;
        frame.release();
        call_0013cbdc(r0 + 4u, r0_2, r1);
        return;
    }
}

}  // namespace d_00137d88
GUEST_EXPORT(0x00137d88, d_00137d88::f_00137d88);

// f_00137dc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137dc4 {

struct __attribute__((packed)) Object_00137dc4_0 {
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
GUEST_OFFSET(Object_00137dc4_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, half_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Object_00137dc4_0, word_34, 0x34);  // (from the original)


void f_00137dc4(gptr<Object_00137dc4_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_8 = 0;
    arg0->half_c = 0;
    arg0->word_10 = 0;
    arg0->half_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = ~0u;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
}

}  // namespace d_00137dc4
GUEST_EXPORT(0x00137dc4, d_00137dc4::f_00137dc4);

// f_00137e84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e84 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)

u32 f_00137e84(u32 r0) {
    return call_001357ec(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00137e84
GUEST_EXPORT(0x00137e84, d_00137e84::f_00137e84);

// f_00137e8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e8c {

inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> call_0013efb4;  // (from the original)

u32 f_00137e8c(gptr<sead__CriticalSection> arg0) {
    arg0->word_0 = 0x904830;  // (from the original)
    return call_0013efb4(arg0.addr(), 0x904830u);  // (from the original)
}

}  // namespace d_00137e8c
GUEST_EXPORT(0x00137e8c, d_00137e8c::f_00137e8c);

// f_00137e9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137e9c {

inline constexpr guest::Function<0x0013b910, u32(u32)> call_0013b910;  // (from the original)

u32 f_00137e9c(u32 r0) {
    u32 r0_1 = call_0013b910(r0);
    *gptr<u32>(r0_1) = 0x905018;  // (from the original)
    return r0_1;
}

}  // namespace d_00137e9c
GUEST_EXPORT_FRAMED(0x00137e9c, d_00137e9c::f_00137e9c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00137ec0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00137ec0 {

struct __attribute__((packed)) Object_00137ec0_0 {
    u8 unknown_0[0x70];  // (not used here)
    u16 half_70;
};
GUEST_OFFSET(Object_00137ec0_0, half_70, 0x70);  // (from the original)

struct __attribute__((packed)) Local_00137ec0_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00137ec0_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00137ec0_r5_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x00138560, u32(u32, u32)> call_00138560;  // (from the original)

void f_00137ec0(gptr<Object_00137ec0_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x54u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = u32(arg0->half_70) & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00135740(r0_1);
    }
    gptr<Local_00137ec0_r5_1> r5_1 = gptr<Local_00137ec0_r5_1>(arg0.addr() + 0x40u);  // (from the original)
    call_00138560(r5_1.addr(), r5_1->word_c + r1);
    u32 r1_3 = guest::cpu()->r[1];
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        frame.release();
        call_00137e84(r4_1, r1_3);
        return;
    }
    guest::cpu()->r[1] = r1_3;
}

}  // namespace d_00137ec0
GUEST_EXPORT(0x00137ec0, d_00137ec0::f_00137ec0);

// f_001382cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001382cc {

struct __attribute__((packed)) Object_001382cc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_001382cc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_001382cc_0, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x0097e854> global_0097e854;  // (from the original)
inline constexpr guest::Function<0x0013ff84, u32(u32)> call_0013ff84;  // (from the original)

void f_001382cc(gptr<Object_001382cc_0> arg0, u32 r1) {
    *global_0097e854 = 1;
    arg0->word_4 = r1;
    u32 r0_1 = call_0013ff84(1u);
    arg0->word_0 = r0_1;
}

}  // namespace d_001382cc
GUEST_EXPORT_FRAMED(0x001382cc, d_001382cc::f_001382cc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138398 {


void f_00138398(gptr<sead__AudioFx> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0x905ac4;  // (from the original)
    arg0->word_8 = 0;
    arg0->byte_c = 0xff;  // (from the original)
    arg0->word_10 = 0;
    arg0->word_14 = 0;
}

}  // namespace d_00138398
GUEST_EXPORT(0x00138398, d_00138398::f_00138398);

// f_001385fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001385fc {

inline constexpr guest::Function<0x0012bfec, u32(u32, u32, u32, u32)> call_0012bfec;  // (from the original)
inline constexpr guest::Function<0x0013a37c, u32(u32, u32)> call_0013a37c;  // (from the original)
inline constexpr guest::Function<0x0013a38c, u32(u32)> call_0013a38c;  // (from the original)

u32 f_001385fc(gptr<sead__ThreadMgr> arg0) {
    u32 r2_1 = arg0.addr() + 0x14u;  // (from the original)
    arg0->word_0 = 0x90601c;  // (from the original)
    arg0->word_18 = r2_1;
    arg0->word_1c = 0;
    arg0->word_14 = r2_1;
    u32 r0_2 = call_0012bfec((arg0.addr() + 0x14u) + 0xcu, arg0.addr() + 0x18u, r2_1, guest::cpu()->r[3]);  // (from the original)
    u32 ea_2 = r0_2 + 0x1cu;  // (from the original)
    *gptr<u32>(ea_2) = 0;
    u32 r0_4 = call_0013a38c(ea_2 + 4u);
    call_0013a37c(r0_4, 0u);
    return r0_4 - 0x40u;  // (from the original)
}

}  // namespace d_001385fc
GUEST_EXPORT_FRAMED(0x001385fc, d_001385fc::f_001385fc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001386f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001386f4 {

struct __attribute__((packed)) Local_001386f4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001386f4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001386f4_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_001386f4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001386f4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001386f4_ea_2, word_4, 0x4);  // (from the original)

inline guest::global<u8, 0x00975c32> global_00975c32;  // (from the original)
inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013bb88, u32(u32, u32, u32, u32)> call_0013bb88;  // (from the original)

void f_001386f4(gptr<ssys__ma__LoadSplit> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = arg0->word_3c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_001386f4_ea_1> ea_1 = gptr<Local_001386f4_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    call_0013bb88(arg0.addr() + 0xcu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00135740(0xae55f0u);  // (from the original)
    u32 r1_2 = u32(*global_00975c32) - 1u;
    *global_00975c32 = u8(r1_2);
    gptr<Local_001386f4_ea_2> ea_2 = gptr<Local_001386f4_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    r14 = ea_2->word_4;
    guest::cpu()->r[4] = r4_1;
    frame.release();
    call_00137e84(0xae55f0u, r1_2);
    return;  // (from the original)
}

}  // namespace d_001386f4
GUEST_EXPORT(0x001386f4, d_001386f4::f_001386f4);

// f_00138998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138998 {

struct __attribute__((packed)) Object_00138998_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_00138998_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_00138998_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00139724, u32(u32, u32, u32, u32)> call_00139724;  // (from the original)

void f_00138998(gptr<Object_00138998_0> arg0) {
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return;
    }
    call_00139724(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_0 = 0;
    arg0->word_4 = 0;
}

}  // namespace d_00138998
GUEST_EXPORT_FRAMED(0x00138998, d_00138998::f_00138998, 0x4010);  // pushes {r4, lr} first, as the original

// f_001389c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001389c0 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_001389c0(u32 r0) {
    call_002f76ac(r0, 0x13bedcu, 0x40u, 8u);  // (from the original)
    return r0;
}

}  // namespace d_001389c0
GUEST_EXPORT_FRAMED(0x001389c0, d_001389c0::f_001389c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001389e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001389e4 {


void f_001389e4(u32 r0) {
}

}  // namespace d_001389e4
GUEST_EXPORT_FRAMED(0x001389e4, d_001389e4::f_001389e4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138a00 {


void f_00138a00(u32 r0) {
}

}  // namespace d_00138a00
GUEST_EXPORT_FRAMED(0x00138a00, d_00138a00::f_00138a00, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138a1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138a1c {


void f_00138a1c(u32 r0) {
}

}  // namespace d_00138a1c
GUEST_EXPORT_FRAMED(0x00138a1c, d_00138a1c::f_00138a1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00138c2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138c2c {

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00138f30, u32(u32, u32)> call_00138f30;  // (from the original)

u32 f_00138c2c(u32 r0, u32 r1) {
    if (r1 < 6u) {
        u32 r4_1 = *gptr<u32>(r0 + (r1 << 2) + 0x14u);  // (from the original)
        if (r4_1 != 0) {
            u32 r5_1 = r4_1 + 4u;
            call_00135748(r5_1, r1);
            u32 r0_2 = call_00138f30(r4_1 + 0x10u, guest::cpu()->r[1]);  // (from the original)
            call_001357ec(r5_1, guest::cpu()->r[1]);
            return r0_2;
        }
    }
    return ~0u;
}

}  // namespace d_00138c2c
GUEST_EXPORT_FRAMED(0x00138c2c, d_00138c2c::f_00138c2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00138c78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138c78 {

struct __attribute__((packed)) Object_00138c78_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00138c78_0, word_0, 0x0);  // (from the original)


u32 f_00138c78(gptr<Object_00138c78_0> arg0) {
    u32 r1_1 = guest::cpu()->tls;
    u32 r0_1 = *gptr<u32>(r1_1 + (arg0->word_0 << 2));
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00138c78
GUEST_EXPORT(0x00138c78, d_00138c78::f_00138c78);

// f_00138f08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138f08 {

struct __attribute__((packed)) Object_00138f08_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00138f08_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013f718, u32(u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32)> call_00141728;  // (from the original)

u32 f_00138f08(gptr<Object_00138f08_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_00141728(*gptr<u32>(arg0->word_4 + 0x3cu), guest::cpu()->r[1]);  // (from the original)
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_0013f718(r0_2, guest::cpu()->r[1]);
}

}  // namespace d_00138f08
GUEST_EXPORT(0x00138f08, d_00138f08::f_00138f08);

// f_00138f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00138f30 {

struct __attribute__((packed)) Object_00138f30_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_00138f30_0, word_4, 0x4);  // (from the original)


u32 f_00138f30(gptr<Object_00138f30_0> arg0) {
    return arg0->word_4 - 1u;
}

}  // namespace d_00138f30
GUEST_EXPORT(0x00138f30, d_00138f30::f_00138f30);

// f_001391c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391c4 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_001391c4(u32 r0, u32 r1) {
    return call_00131294(r1, r0, guest::cpu()->r[2], 0u);
}

}  // namespace d_001391c4
GUEST_EXPORT(0x001391c4, d_001391c4::f_001391c4);

// f_001391d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391d8 {

inline constexpr guest::Function<0x00131294, u32(u32, u32, u32, u32)> call_00131294;  // (from the original)

u32 f_001391d8(u32 r0) {
    return call_00131294(0u, r0, 4u, 0u);
}

}  // namespace d_001391d8
GUEST_EXPORT(0x001391d8, d_001391d8::f_001391d8);

// f_001391ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001391ec {


void f_001391ec(u32 r0, u32 r1, u32 r2) {
    u32 r8 = guest::cpu()->r[8];
    u32 res_2 = 0;
    u32 res_3 = 0;
    u32 r7 = 0x974a7cu;  // (from the original)
    u32 r3 = *gptr<u32>(r7);
    u32 r12_1 = *gptr<u32>(r7 + 4);
    if (r12_1 <= r3 + ((r1 & ~1u) + (r1 >> 7 << 1) << 2) + 8u) {
        *gptr<u32>(r7) = r12_1;
    } else {
        u32 zf_1 = r1 == 0;
        u32 cf_1 = r1 >= 0u;
        u32 r6 = 0u;
        if (cf_1 && !zf_1) {
            r8 = r6 - 0x100000u;  // (from the original)
        }
        if (!!cf_1 && !zf_1) {
            do {
                u32 r4_1 = r1 - r6;
                if (r4_1 > 0x80u) {  // (from the original)
                    r4_1 = 0x80u;  // (from the original)
                }
                u32 r12 = r4_1 >> 1;
                *gptr<u32>(r3) = r2;
                u32 r3_1 = r3 + 4u;
                u32 res_1 = r12 + 0x80000001u;  // (from the original)
                *gptr<u32>(r3_1) = r8 + (r4_1 << 0x14) | r0 + r6 | 0x80000000u | 0xf0000u;  // (from the original)
                r3 = r3_1 + 4u;
                if (res_1 < r12 && res_1 != 0) {
                    do {
                        *gptr<u32>(r3) = r2;
                        u32 r3_2 = r3 + 4u;
                        res_2 = r12 - 1u;
                        r12 = res_2;
                        *gptr<u32>(r3_2) = r2;
                        r3 = r3_2 + 4u;
                        guest::preempt();
                    } while (res_2 != 0);
                } else {
                    u32 r5_1 = r12 << 1;
                    u32 zf_2 = r5_1 == 0;
                    if (!zf_2 && (r5_1 >> 0x1f) == 0u) {  // (from the original)
                        u32 r4 = r3 - 4u;
                        u32 r5 = s32(r5_1) >> 1;
                        do {
                            *gptr<u32>(r4 + 4u) = r2;
                            res_3 = r5 - 1u;
                            r5 = res_3;
                            u32 ea_2 = r4 + 8u;
                            *gptr<u32>(ea_2) = r2;
                            r4 = ea_2;
                            guest::preempt();
                        } while (res_3 != 0);
                        r3 += (r12 << 3);
                    }
                }
                r6 += 0x80u;  // (from the original)
                guest::preempt();
            } while (r6 < r1);
        }
        *gptr<u32>(r7) = r3;
    }
}

}  // namespace d_001391ec
GUEST_EXPORT_FRAMED(0x001391ec, d_001391ec::f_001391ec, 0x1f0);  // pushes {r4, r5, r6, r7, r8} first, as the original

// f_00139448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139448 {


u32 f_00139448() {
    u32 r0_1 = guest::cpu()->tls + 0x5cu;  // (from the original)
    return r0_1;
}

}  // namespace d_00139448
GUEST_EXPORT(0x00139448, d_00139448::f_00139448);

// f_00139454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139454 {

struct __attribute__((packed)) Local_00139454_r1_1 {
    u32 word_0;
    u8 unknown_4[0x44];  // (not used here)
    u32 word_48;
};
GUEST_OFFSET(Local_00139454_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00139454_r1_1, word_48, 0x48);  // (from the original)

struct __attribute__((packed)) Local_00139454_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00139454_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00139454_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00139454_r1_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00139454_r1_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00139454_r2_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x44];  // (not used here)
    u32 word_4c;
    u8 unknown_50[0x3c];  // (not used here)
    u32 word_8c;
};
GUEST_OFFSET(Local_00139454_r2_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00139454_r2_2, word_4c, 0x4c);  // (from the original)
GUEST_OFFSET(Local_00139454_r2_2, word_8c, 0x8c);  // (from the original)

inline guest::global<u32, 0x0097d784> global_0097d784;  // (from the original)

void f_00139454(u32 r0) {
    u32 r2_1 = *global_0097d784;
    gptr<Local_00139454_r1_1> r1_1 = gptr<Local_00139454_r1_1>(r2_1 + 0x6a0u);  // (from the original)
    if (r0 == 0x10u) {  // (from the original)
        r1_1->word_0 = 0;
        r1_1->word_48 = 0;
        guest::cpu()->r[1] = r1_1.addr();
        return;
    }
    gptr<Local_00139454_r2_2> r2_2 = gptr<Local_00139454_r2_2>(r1_1.addr() + (r0 << 2));
    gptr<Local_00139454_r1_2> r1_2 = gptr<Local_00139454_r1_2>((r2_1 + 0x458u) + (r0 + (r0 << 1) << 3));  // (from the original)
    u32 r0_1 = r1_2->word_0;
    r2_2->word_4 = r0_1;
    r2_2->word_4c = r0_1;
    u32 r0_2 = r1_2->word_8;
    u32 zf_1 = r0_2 == 0x1400u;  // (from the original)
    if (!zf_1) {
        u32 res_2 = r0_2 - 0x1401u;  // (from the original)
        zf_1 = res_2 == 0;
        r0_2 = res_2;
    }
    u32 r3_2 = r1_2->word_c;
    if (r3_2 == 0) {
        r1_2 = gptr<Local_00139454_r1_2>(r1_2->word_4);
        r3_2 = r1_2.addr() * (zf_1 ? 1u : r0_2 == 1u ? 2u : r0_2 == 5u ? 4u : 0u);
    }
    r2_2->word_8c = r3_2;
    guest::cpu()->r[1] = r1_2.addr();
}

}  // namespace d_00139454
GUEST_EXPORT(0x00139454, d_00139454::f_00139454);

// f_0013959c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013959c {

inline guest::global<u32, 0x008fac7c> global_008fac7c;  // (from the original)
inline guest::global<u32, 0x008fac88> global_008fac88;  // (from the original)
inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)
inline constexpr guest::Function<0x0013d85c, u32(u32, u32, u32, u32)> call_0013d85c;  // (from the original)
inline constexpr guest::Function<0x0013df14, u32(u32, u32, u32, u32)> call_0013df14;  // (from the original)

u32 f_0013959c(u32 r0) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r4_1 = 0;
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    *frame.at<u32>(0x14) = 0;  // (from the original)
    u32 r1_1 = *global_008fac7c;
    u32 r3_1 = frame.at(0).addr();
    *frame.at<u32>(0) = r1_1;
    *gptr<u32>(frame.at(0).addr() + *gptr<u32>(r1_1 - 0x30u)) = *global_008fac88;  // (from the original)
    u32 r0_2 = call_0013df14(r3_1 + 4u, r0, 1u, r3_1);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r1_2 = (r0_2 & 0x3fc00u) >> 0xa;  // (from the original)
    if (r1_2 == 0x11u) {  // (from the original)
        r1_2 = r0_2 & 0x3ffu;  // (from the original)
        if (s32(r1_2) >= 0x64 && s32(r1_2) <= 0xb3) {  // (from the original)
            r4_1 = 0u;
            goto L_13961c;
        }
    }
    r4_1 = 1u;
L_13961c:;
    if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
        if ((*frame.at<u32>(4) & ~1u) != 0) {
            u32 r0_3 = *frame.at<u32>(4);
            if ((r0_3 & 1u) != 0) {
                call_00134250(r0_3, r1_2, r2_1, r3_2);
                r1_2 = guest::cpu()->r[1];
                r2_1 = guest::cpu()->r[2];
                r3_2 = guest::cpu()->r[3];
            }
            call_0012ede8(*frame.at<u32>(4) & ~1u, r1_2, r2_1, r3_2);
            r2_1 = guest::cpu()->r[2];
            r3_2 = guest::cpu()->r[3];
            *frame.at<u32>(4) = 0;
        }
    }
    call_0013d85c(frame.at(0).addr(), 0u, r2_1, r3_2);
    return r4_1;
}

}  // namespace d_0013959c
GUEST_EXPORT_FRAMED(0x0013959c, d_0013959c::f_0013959c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00139674: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139674 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)

u32 f_00139674(u32 r0) {
    u32 r1_1 = *global_00975284;
    u32 r1_2 = *gptr<u32>(r1_1 == 0u ? 0x975280u : r1_1 + 0xc4u);  // (from the original)
    u32 r0_1 = r1_2 & lsl_r(1u, r0 & 0xff);  // (from the original)
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00139674
GUEST_EXPORT(0x00139674, d_00139674::f_00139674);

// f_001396a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396a4 {

inline constexpr guest::Function<0x0013d028, u32(u32)> call_0013d028;  // (from the original)
inline constexpr guest::Function<0x0013d138, u32(u32)> call_0013d138;  // (from the original)

u32 f_001396a4(u32 r0) {
    u32 r0_1 = call_0013d028(r0);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_0013d138(r0_1);
    return *gptr<u8>(r0_2 + 0xc0u);  // (from the original)
}

}  // namespace d_001396a4
GUEST_EXPORT_FRAMED(0x001396a4, d_001396a4::f_001396a4, 0x4010);  // pushes {r4, lr} first, as the original

// f_001396c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001396c0 {

struct __attribute__((packed)) Local_001396c0_r3_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001396c0_r3_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001396c0_r3_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013d028, u32(u32, u32, u32, u32)> call_0013d028;  // (from the original)
inline constexpr guest::Function<0x0013d138, u32(u32, u32, u32, u32)> call_0013d138;  // (from the original)
inline constexpr guest::Function<0x0013d24c, u32(u32, u32, u32, u32)> call_0013d24c;  // (from the original)

u32 f_001396c0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_0013d028(r0, r1, r2, r3);
    if (r0_1 != 0) {
        u32 r0_2 = call_0013d138(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r0_2 + 0xc0u) = 1;  // (from the original)
        u32 r0_3 = call_0013d138(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u32>(r0_3 + 0xc8u) = 0xa;  // (from the original)
    }
    gptr<Local_001396c0_r3_3> r3_3 = gptr<Local_001396c0_r3_3>(r0 + 0x24u);  // (from the original)
    r3_3->word_0 = 0;
    r3_3->word_4 = r1;
    *gptr<u32>(r0 + 0x18u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x20u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x1cu) = 0;  // (from the original)
    *gptr<u32>(r0 + 0xcu) = 0x13d24c;  // (from the original)
    *gptr<u8>(r0 + 0x10u) = 0;  // (from the original)
    frame.release();
    return call_0013d24c(r0, 0u, 0x13d24cu, r3_3.addr());  // (from the original)
}

}  // namespace d_001396c0
GUEST_EXPORT(0x001396c0, d_001396c0::f_001396c0);

// f_00139724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139724 {

struct __attribute__((packed)) Object_00139724_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_00139724_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013d060, u32(u32, u32, u32, u32)> call_0013d060;  // (from the original)

void f_00139724(gptr<Object_00139724_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = arg0->word_c;
    if (r0_1 != 0) {
        call_0013d060(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    frame.release();
    call_0013d060(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00139724
GUEST_EXPORT(0x00139724, d_00139724::f_00139724);

// f_00139a90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139a90 {

inline constexpr guest::Function<0x001396a4, u32(u32, u32, u32, u32)> call_001396a4;  // (from the original)

u32 f_00139a90(u32 r0_unused, u32 r1) {
    u32 r4 = 0x975274u;  // (from the original)
L_139a98:;
    u32 r0_1 = *gptr<u32>(r4 + 4u);
    if (*gptr<u32>(r4 + 0x10u) != 0) {  // (from the original)
        u32 r0_2 = call_001396a4(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            guest::preempt();
            goto L_139a98;
        }
        u32 r0_3 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        u32 r1_1 = *gptr<u32>(r0_3 == 0 ? 0x975280u : r0_3 + 0xc4u);  // (from the original)
        if ((r1_1 & 4u) != 0) {
            guest::cpu()->r[1] = r1_1;
            return 3u;
        }
        r1 = *gptr<u32>(r0_3 == 0 ? 0x975280u : r0_3 + 0xc4u);  // (from the original)
        if ((r1 & 8u) == 0) {
            r0_1 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        } else {
            guest::cpu()->r[1] = r1;
            return 3u;
        }
    }
    if (r0_1 != 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    guest::preempt();
    goto L_139a98;
}

}  // namespace d_00139a90
GUEST_EXPORT_FRAMED(0x00139a90, d_00139a90::f_00139a90, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139bb0 {


void f_00139bb0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r6 = guest::cpu()->r[6];
    u32 ea_1 = r1 + r2 - 2u;
    *gptr<u16>(ea_1) = 0;
    u32 r5 = ea_1;
    u32 zf_1 = r2 == 0;
    u32 cf_1 = r2 >= 0u;
    if (cf_1 && !zf_1) {
        r4 = 0x1021u;  // (from the original)
        r6 = 0xffffu;  // (from the original)
    }
    r0 = uxth(r0);
    u32 r12 = 0u;
    if (!!cf_1 && !zf_1) {
        do {
            u32 r3 = 4u;
            do {
                u32 r0_1 = (r0 & 0x8000u) == 0 ? r6 & r0 << 1 : uxth(r4 ^ r0 << 1);  // (from the original)
                r0 = (r0_1 & 0x8000u) == 0 ? r6 & r0_1 << 1 : uxth(r4 ^ r0_1 << 1);  // (from the original)
                r3 -= 1u;
                guest::preempt();
            } while (r3 != 0);
            u32 v_1 = *gptr<u8>(r1);
            r1 += 1u;
            r12 += 1u;
            r0 ^= v_1;
            guest::preempt();
        } while (r12 < r2);
    }
    *gptr<u16>(r5) = u16(rev16(r0));
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00139bb0
GUEST_EXPORT_FRAMED(0x00139bb0, d_00139bb0::f_00139bb0, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_00139c30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139c30 {

inline guest::global<u32, 0x00975278> global_00975278;  // (from the original)
inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)
inline constexpr guest::Function<0x001396a4, u32(u32, u32)> call_001396a4;  // (from the original)

u32 f_00139c30(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00975278;
    if (*global_00975284 == 0) {
        return r0_1;
    }
    u32 r0_2 = call_001396a4(r0_1, r1);
    if (r0_2 != 0) {
        return 0xau;  // (from the original)
    }
    u32 r0_3 = *global_00975284;
    u32 r1_2 = *gptr<u32>(r0_3 == 0 ? 0x975280u : r0_3 + 0xc4u);  // (from the original)
    if ((r1_2 & 4u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return 3u;
    }
    u32 r1_3 = *gptr<u32>(r0_3 == 0 ? 0x975280u : r0_3 + 0xc4u);  // (from the original)
    if ((r1_3 & 8u) == 0) {
        u32 r0_4 = *gptr<u32>(r0_3 + 0xc8u);  // (from the original)
        guest::cpu()->r[1] = r1_3;
        return r0_4;
    }
    guest::cpu()->r[1] = r1_3;
    return 3u;
}

}  // namespace d_00139c30
GUEST_EXPORT_FRAMED(0x00139c30, d_00139c30::f_00139c30, 0x4010);  // pushes {r4, lr} first, as the original

// f_00139dac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00139dac {

struct __attribute__((packed)) Object_00139dac_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_00139dac_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;  // (from the original)
inline constexpr guest::Function<0x0014041c, u32(u32)> call_0014041c;  // (from the original)
inline constexpr guest::Function<0x001404f0, u32(u32)> call_001404f0;  // (from the original)
inline constexpr guest::Function<0x00140530, u32(u32)> call_00140530;  // (from the original)
inline constexpr guest::Function<0x00140564, u32(u32)> call_00140564;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32)> call_002f88b8;  // (from the original)

void f_00139dac(gptr<Object_00139dac_0> arg0) {
    if (arg0->byte_14 != 0) {
        call_0013fd78(arg0.addr() + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = *gptr<u8>(arg0.addr() + 0x14u);  // (from the original)
        if (r0_2 == 2u) {
            u32 r0_3 = call_00140530(r0_2);
            if (!((r0_3 & 0x80000000u) >> 0x1f)) {  // (from the original)
                *gptr<u32>(arg0.addr() + 0x2cu) = 0;  // (from the original)
                *gptr<u8>(arg0.addr() + 0x14u) = 1;  // (from the original)
            }
            *gptr<u8>(arg0.addr() + 0x16u) = 0;  // (from the original)
            *gptr<u8>(arg0.addr() + 0x17u) = 0;  // (from the original)
        }
        u32 r0_4 = call_001404f0(0u);
        u32 r0_5 = call_0014041c(r0_4);
        call_00140564(r0_5);
        u32 r0_6 = *gptr<u32>(arg0.addr() + 0x28u);  // (from the original)
        if (r0_6 != 0) {
            call_002f88b8(r0_6);
            *gptr<u32>(arg0.addr() + 0x28u) = 0;  // (from the original)
        }
        *gptr<u8>(arg0.addr() + 0x15u) = 2;  // (from the original)
        *gptr<u8>(arg0.addr() + 0x14u) = 0;  // (from the original)
    }
}

}  // namespace d_00139dac
GUEST_EXPORT_FRAMED(0x00139dac, d_00139dac::f_00139dac, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a37c {

struct __attribute__((packed)) Object_0013a37c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013a37c_0, word_0, 0x0);  // (from the original)


void f_0013a37c(gptr<Object_0013a37c_0> arg0, u32 r1) {
    *gptr<u32>(guest::cpu()->tls + (arg0->word_0 << 2)) = r1;
}

}  // namespace d_0013a37c
GUEST_EXPORT(0x0013a37c, d_0013a37c::f_0013a37c);

// f_0013a38c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a38c {

struct __attribute__((packed)) Local_0013a38c_r12 {
    u16 half_0;
};
GUEST_OFFSET(Local_0013a38c_r12, half_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012f204, u32(u32)> call_0012f204;  // (from the original)

u32 f_0013a38c(u32 r0) {
    gptr<Local_0013a38c_r12> r12 = gptr<Local_0013a38c_r12>(0x974f74u);  // (from the original)
    u32 r4 = r0;
    u32 r1 = 0u;
    u32 r2 = r12->half_0;
    for (;;) {
        r0 = lsr_r(r2, r1 & 0xff);  // (from the original)
        if ((r0 & 1u) == 0) {
            goto L_13a3cc;
        }
        r1 += 1u;
        u32 res_1 = r1 - 0x10u;  // (from the original)
        u32 cf = r1 >= 0x10u;  // (from the original)
        if (!(res_1 >> 0x1f != ((r1 ^ 0x10u) & (r1 ^ res_1)) >> 0x1f)) {  // (from the original)
            break;
        }
        if (cf) {
            goto L_13a3cc;
        }
        guest::preempt();
    }
    r1 = ~0u;
    goto L_13a3e0;
L_13a3cc:;
    if (r1 < 0x10u) {  // (from the original)
        r0 = r2 | lsl_r(1u, r1 & 0xff);  // (from the original)
        r12->half_0 = u16(r0);
    }
L_13a3e0:;
    u32 nf_1 = r1 >> 0x1f;  // (from the original)
    if (nf_1 != 0u) {
        r0 = 0xd8601838u;  // (from the original)
    }
    *gptr<u32>(r4) = r1;
    if (nf_1 != 0u) {
        call_0012f204(r0);
    }
    *gptr<u32>(0xae0f94u + (*gptr<u32>(r4) << 2)) = 0;  // (from the original)
    return r4;
}

}  // namespace d_0013a38c
GUEST_EXPORT_FRAMED(0x0013a38c, d_0013a38c::f_0013a38c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013a414: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a414 {

struct __attribute__((packed)) Object_0013a414_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0013a414_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013a414_0, word_c, 0xc);  // (from the original)

inline guest::global<u32, 0x008a27c4> global_008a27c4;  // (from the original)
inline constexpr guest::Function<0x0013a5a4, u32(u32, u32)> call_0013a5a4;  // (from the original)
inline constexpr guest::Function<0x0013a62c, u32(u32)> call_0013a62c;  // (from the original)

u32 f_0013a414(gptr<Object_0013a414_0> arg0) {
    u32 r4_1 = arg0->word_c;
    if (r4_1 == 0) {
        r4_1 = arg0->word_8;
    }
    u32 r0_2 = call_0013a5a4(*global_008a27c4, arg0.addr());
    if (s32(r0_2) >= 0) {
        call_0013a62c(r4_1);
    }
    return r0_2;
}

}  // namespace d_0013a414
GUEST_EXPORT_FRAMED(0x0013a414, d_0013a414::f_0013a414, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a63c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a63c {

struct __attribute__((packed)) Object_0013a63c_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x39f];  // (not used here)
    u32 word_3a8;
    u8 unknown_3ac[0x1ac];  // (not used here)
    u32 word_558;
};
GUEST_OFFSET(Object_0013a63c_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013a63c_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013a63c_0, word_3a8, 0x3a8);  // (from the original)
GUEST_OFFSET(Object_0013a63c_0, word_558, 0x558);  // (from the original)

inline guest::global<u8, 0x00974b99> global_00974b99;  // (from the original)
inline guest::global<u8, 0x00974b9a> global_00974b9a;  // (from the original)
inline guest::global<u8, 0x00974b9c> global_00974b9c;  // (from the original)
inline guest::global<u8, 0x00974b9d> global_00974b9d;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013e360, u32(u32, u32, u32, u32)> call_0013e360;  // (from the original)
inline constexpr guest::Function<0x001400b4, u32(u32, u32)> call_001400b4;  // (from the original)
inline constexpr guest::Function<0x001402b0, u32(u32, u32)> call_001402b0;  // (from the original)

void f_0013a63c(gptr<Object_0013a63c_0> arg0, u32 r1) {
    arg0->word_4 = 0;
    if (*global_00974b99 != 0) {
        call_0013e360(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    call_00135748(0xae0aa0u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (*global_00974b9c != 0) {
        call_001402b0(arg0->word_3a8, r1_1);
        r1_1 = guest::cpu()->r[1];
        *global_00974b9c = 0;
    }
    call_001357ec(0xae0aa0u, r1_1);  // (from the original)
    call_00135748(0xae0aa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    if (*global_00974b9d != 0) {
        call_001402b0(arg0->word_558, r1_3);
        r1_3 = guest::cpu()->r[1];
        *global_00974b9d = 0;
    }
    call_001357ec(0xae0aa0u, r1_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    if (*global_00974b9a != 0) {
        call_001400b4(0u, r1_4);
        r1_4 = guest::cpu()->r[1];
        *global_00974b9a = 0;
    }
    if (arg0->byte_8 != 0) {
        arg0->byte_8 = 0;
    }
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_0013a63c
GUEST_EXPORT_FRAMED(0x0013a63c, d_0013a63c::f_0013a63c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013a6f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a6f8 {

inline constexpr guest::Function<0x0013a6f8, u32(u32, u32)> call_0013a6f8;  // (from the original)
inline constexpr guest::Function<0x0013a750, u32(u32, u32, u32, u32)> call_0013a750;  // (from the original)

u32 f_0013a6f8(u32 r0, u32 r1) {
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4 = 0u;
L_13a708:;
    u32 r0_1 = call_0013a750(r6, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4 = r0_1;
    if (r0_1 != 0) {
        if (*gptr<u32>(r4 + 0x18u) > r5 || r5 >= *gptr<u32>(r4 + 0x1cu)) {  // (from the original)
            guest::preempt();
            goto L_13a708;
        }
        r0_1 = call_0013a6f8(r4 + 0xcu, r5);  // (from the original)
        if (r0_1 == 0) {
            r0_1 = r4;
        }
    }
    return r0_1;
}

}  // namespace d_0013a6f8
GUEST_EXPORT_FRAMED(0x0013a6f8, d_0013a6f8::f_0013a6f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013a750: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a750 {

struct __attribute__((packed)) Object_0013a750_0 {
    u32 word_0;
    u8 unknown_4[0x6];  // (not used here)
    u16 half_a;
};
GUEST_OFFSET(Object_0013a750_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013a750_0, half_a, 0xa);  // (from the original)


u32 f_0013a750(gptr<Object_0013a750_0> arg0, u32 r1) {
    return r1 == 0 ? arg0->word_0 : *gptr<u32>(u32(arg0->half_a) + (r1 + 4u));
}

}  // namespace d_0013a750
GUEST_EXPORT(0x0013a750, d_0013a750::f_0013a750);

// f_0013a768: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a768 {

struct __attribute__((packed)) Local_0013a768_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013a768_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013a768_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013a768_ea_1, word_8, 0x8);  // (from the original)


void f_0013a768(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_2 = 0;
    gptr<Local_0013a768_ea_1> ea_1 = gptr<Local_0013a768_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    r0 = *frame.at<u32>(0);
    u32 r1_1 = *frame.at<u32>(4);
    if (r0 == r1_1) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    do {
        *frame.at<u32>(0) = r0 + 4u;
        *gptr<u32>(r0) = r2;
        r0 = *frame.at<u32>(0);
        r1_2 = *frame.at<u32>(4);
        guest::preempt();
    } while (r0 != r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0013a768
GUEST_EXPORT(0x0013a768, d_0013a768::f_0013a768);

// f_0013a9e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013a9e0 {

struct __attribute__((packed)) Local_0013a9e0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013a9e0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013a9e0_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013a9e0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0013a9e0_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0xc];  // (not used here)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
};
GUEST_OFFSET(Local_0013a9e0_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_r4_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_r4_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0013a9e0_r4_1, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x0013e75c, u32(u32, u32, u32, u32)> call_0013e75c;  // (from the original)

u32 f_0013a9e0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_1 = r1 + r0;
    *frame.at<u32>(0) = r3;
    u32 r3_1 = r1_1 & ~3u;
    gptr<Local_0013a9e0_r4_1> r4_1 = gptr<Local_0013a9e0_r4_1>(r0 + 3u & ~3u);
    if (s32(r4_1.addr() - r3_1) <= 0 && r3_1 - r4_1.addr() >= 0x34u) {  // (from the original)
        goto L_13aa14;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
L_13aa14:;
    if (r4_1.addr() != 0) {
        r4_1->word_4 = 0;
        u32 r1_2 = r4_1.addr() + 0x1cu;  // (from the original)
        r4_1->word_8 = 0;
        r4_1->word_1c = r1_2;
        r4_1->word_18 = 0;
        r4_1->word_0 = 0x9012ac;  // (from the original)
        r4_1->word_20 = r1_2;
    }
    *frame.at<u32>(0) = r2;
    call_0013e75c(r4_1.addr(), 0x46524d48u, r4_1.addr() + 0x34u, r3_1);  // (from the original)
    gptr<Local_0013a9e0_ea_1> ea_1 = gptr<Local_0013a9e0_ea_1>(r4_1.addr() + 0xcu);  // (from the original)
    u32 r0_1 = ea_1->word_0;
    u32 r1_3 = ea_1->word_4;
    gptr<Local_0013a9e0_ea_2> ea_2 = gptr<Local_0013a9e0_ea_2>(r4_1.addr() + 0x28u);  // (from the original)
    ea_2->word_0 = r0_1;
    ea_2->word_4 = r1_3;
    ea_2->word_8 = 0;
    guest::cpu()->r[1] = r1_3;
    return r4_1.addr();
}

}  // namespace d_0013a9e0
GUEST_EXPORT_FRAMED(0x0013a9e0, d_0013a9e0::f_0013a9e0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013ad90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ad90 {

inline guest::global<u32, 0x00975138> global_00975138;  // (from the original)

u32 f_0013ad90(u32 r0) {
    u32 r0_1 = *global_00975138;
    u32 r2_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0xcu);  // (from the original)
    // virtual function 3 of r0_1
    return guest::call_address<u32>(r2_1, r0_1, r0, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ad90
GUEST_EXPORT(0x0013ad90, d_0013ad90::f_0013ad90);

// f_0013adac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013adac {

struct __attribute__((packed)) Object_0013adac_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0013adac_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013adac_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013adac_0, byte_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013adac_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013adac_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013adac_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c850, u32(u32)> call_0013c850;  // (from the original)

void f_0013adac(gptr<Object_0013adac_0> arg0, gptr<Object_0013adac_1> arg1) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    if (arg1.addr() == 0) {
        guest::cpu()->r[1] = arg1.addr();
        return;
    }
    u32 r1_1 = arg1->word_0;
    if (r1_1 != 0x4b4e4243u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = arg1->word_8 + 0xff000000u;  // (from the original)
    if (r1_2 > 0x100u) {  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return;
    }
    arg0->word_0 = arg1.addr();
    u32 r0_1 = call_0013c850(arg1.addr());
    arg0->byte_8 = 1;
    arg0->word_4 = r0_1 + 8u;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_0013adac
GUEST_EXPORT_FRAMED(0x0013adac, d_0013adac::f_0013adac, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013ae10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ae10 {

struct __attribute__((packed)) Object_0013ae10_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0013ae10_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ae10_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ae10_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013ae10_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ae10_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ae10_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f8cc, u32(u32, u32)> call_0013f8cc;  // (from the original)
inline constexpr guest::Function<0x0013f934, u32(u32, u32)> call_0013f934;  // (from the original)
inline constexpr guest::Function<0x0013f9a0, u32(u32, u32)> call_0013f9a0;  // (from the original)

void f_0013ae10(gptr<Object_0013ae10_0> arg0, gptr<Object_0013ae10_1> arg1) {
    u32 r1 = arg1.addr();
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    if (arg1->word_0 == 0x50524743u && arg1->word_8 + 0xff000000u <= 0x10000u) {  // (from the original)
        u32 r0_1 = call_0013f934(r1, r1);
        u32 r0_2 = call_0013f8cc(r1, guest::cpu()->r[1]);
        u32 r0_3 = call_0013f9a0(r1, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0 && r0_2 != 0) {
            r1 = r0_1 + 8u;
            arg0->word_0 = r1;
            arg0->word_4 = r0_2 + 8u;
            if (r0_3 != 0) {
                arg0->word_8 = r0_3 + 8u;
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013ae10
GUEST_EXPORT_FRAMED(0x0013ae10, d_0013ae10::f_0013ae10, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013b034: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b034 {

struct __attribute__((packed)) Object_0013b034_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013b034_0, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013b438, u32(u32, u32, u32, u32)> call_0013b438;  // (from the original)
inline constexpr guest::Function<0x0013c718, u32(u32, u32, u32, u32)> call_0013c718;  // (from the original)
inline constexpr guest::Function<0x0013ea78, u32(u32, u32, u32, u32)> call_0013ea78;  // (from the original)
inline constexpr guest::Function<0x0013f2e4, u32(u32, u32, u32, u32)> call_0013f2e4;  // (from the original)

u32 f_0013b034(gptr<Object_0013b034_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r4_1 = *frame.at<u32>(0x34);  // (from the original)
    *frame.at<u32>(4) = ~0u;
    *frame.at<u8>(0xc) = 0;  // (from the original)
    u32 r6_1 = *frame.at<u32>(0x30);  // (from the original)
    u32 r0_2 = call_0013f2e4(arg0->word_4, r1, frame.at(4).addr(), r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        if (*frame.at<u8>(0xc) != 0) {  // (from the original)
            *frame.at<u32>(0) = r4_1;
            r0_2 = call_0013ea78(arg0.addr(), r1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            if (r0_2 == 0) {
                return r0_2;
            }
        } else {
            r1_1 = r1;
            if ((r6_1 & 8u) != 0) {
                u32 r0_4 = call_0013c718(arg0->word_4, r1_1, r2_2, r3_1);
                *frame.at<u32>(0) = 1;
                r0_2 = call_0013b438(arg0.addr(), r0_4, r3, r4_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_2 == 0) {
                    return r0_2;
                }
            }
        }
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0013b034
GUEST_EXPORT_FRAMED(0x0013b034, d_0013b034::f_0013b034, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013b560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b560 {


void f_0013b560(gptr<nw__snd__internal__SoundArchiveLoader> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0x9021d0;  // (from the original)
    arg0->half_208 = 0;
    arg0->byte_20a = 0;
}

}  // namespace d_0013b560
GUEST_EXPORT(0x0013b560, d_0013b560::f_0013b560);

// f_0013b584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b584 {

struct __attribute__((packed)) Object_0013b584_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013b584_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b584_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013b584_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013b584_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013b584_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c348, u32(u32)> call_0013c348;  // (from the original)

void f_0013b584(gptr<Object_0013b584_0> arg0, gptr<Object_0013b584_1> arg1) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    if (arg1->word_0 != 0x44535743u || arg1->word_8 + 0xff000000u > 0x100u) {  // (from the original)
        return;
    }
    arg0->word_0 = arg1.addr();
    u32 r0_1 = call_0013c348(arg1.addr());
    if (r0_1 == 0) {
        return;
    }
    arg0->word_4 = r0_1 + 8u;
}

}  // namespace d_0013b584
GUEST_EXPORT_FRAMED(0x0013b584, d_0013b584::f_0013b584, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013b6e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b6e0 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013ecd8, u32(u32, u32)> call_0013ecd8;  // (from the original)
inline constexpr guest::Function<0x00140f54, u32(u32, u32)> call_00140f54;  // (from the original)
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> call_00140fac;  // (from the original)
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> call_001411ec;  // (from the original)

void f_0013b6e0(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0 + 4u;
    call_00135748(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_0013ecd8(r0 + 0x10u, r1);  // (from the original)
    u32 r0_3 = call_00140f54(r0_2, guest::cpu()->r[1]);
    u32 r0_4 = call_00140fac(r0_3, 1u);
    call_001411ec(r0_3, r0_4);
    frame.release();
    call_001357ec(r5_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0013b6e0
GUEST_EXPORT(0x0013b6e0, d_0013b6e0::f_0013b6e0);

// f_0013b7a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b7a0 {

struct __attribute__((packed)) Object_0013b7a0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013b7a0_0, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013eeb8, u32(u32, u32, u32, u32)> call_0013eeb8;  // (from the original)
inline constexpr guest::Function<0x00142070, u32(u32, u32, u32, u32)> call_00142070;  // (from the original)

void f_0013b7a0(gptr<Object_0013b7a0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4_1 = r1;
    u32 r5_1 = arg0->word_c;
    u32 r6_1 = r0;
    if (r5_1 != r4_1) {
        if (r5_1 != 0) {
            r0 = call_0013eeb8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
        }
        u32 zf_1 = r4_1 == 0;
        if (!zf_1) {
            r0 = r6_1;
        }
        *gptr<u32>(r6_1 + 0xcu) = r4_1;  // (from the original)
        if (!zf_1) {
            call_00142070(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        }
    }
}

}  // namespace d_0013b7a0
GUEST_EXPORT_FRAMED(0x0013b7a0, d_0013b7a0::f_0013b7a0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013b8e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b8e0 {

inline constexpr guest::Function<0x0012f154, u32(u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x001320cc, u32(u32, u32, u32, u32)> call_001320cc;  // (from the original)

u32 f_0013b8e0(u32 r0, u32 r1) {
    u32 r0_1 = call_001320cc(r0, r1, 1u, guest::cpu()->r[3]);
    *gptr<u32>(r0_1) = 0x904830;  // (from the original)
    u32 r0_2 = r0_1 + 0x10u;  // (from the original)
    *gptr<u32>(r0_2) = 0;
    call_0012f154(r0_2);
    return r0_1;
}

}  // namespace d_0013b8e0
GUEST_EXPORT_FRAMED(0x0013b8e0, d_0013b8e0::f_0013b8e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013b910: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b910 {


void f_0013b910(gptr<sead__AudioFxMemoryMgr> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0x904ce0;  // (from the original)
    arg0->word_8 = 0;
}

}  // namespace d_0013b910
GUEST_EXPORT(0x0013b910, d_0013b910::f_0013b910);

// f_0013b92c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013b92c {

struct __attribute__((packed)) Local_0013b92c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013b92c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013b92c_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013b92c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_3, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0013b92c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013b92c_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013b92c_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013b92c_ea_8, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013b92c_ea_8, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013b92c_r2_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013b92c_r2_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013b92c_r2_3, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0012f204, u32(u32, u32, u32, u32)> call_0012f204;  // (from the original)
inline constexpr guest::Function<0x00132174, u32(u32, u32, u32, u32)> call_00132174;  // (from the original)
inline constexpr guest::Function<0x00137d88, u32(u32, u32, u32)> call_00137d88;  // (from the original)
inline constexpr guest::Function<0x00137dc4, u32(u32, u32, u32, u32)> call_00137dc4;  // (from the original)
inline constexpr guest::Function<0x00137eb4, u32(u32, u32, u32, u32)> call_00137eb4;  // (from the original)
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32, u32)> call_0013d00c;  // (from the original)
inline constexpr guest::Function<0x0013e164, u32(u32, u32, u32, u32)> call_0013e164;  // (from the original)

u32 f_0013b92c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_00132174(r0, r1, r2, r3);
    gptr<Local_0013b92c_ea_1> ea_1 = gptr<Local_0013b92c_ea_1>(r0_1 + 0x10u);  // (from the original)
    ea_1->word_0 = 0x9047f8;  // (from the original)
    ea_1->word_4 = 0x8ae11c;  // (from the original)
    u32 r2_1 = 0x905aa8u;  // (from the original)
    *gptr<u32>(r0_1) = 0x905a58;  // (from the original)
    *gptr<u32>(r0_1 + 0x18u) = r2_1;  // (from the original)
    u32 r0_3 = call_00137dc4(r0_1 + 0x1cu, r0_1, r2_1, 0x9047f8u);  // (from the original)
    u32 r1_1 = r0_3 - 0x1cu;  // (from the original)
    *gptr<u32>(r0_3 + 0x38u) = 0;  // (from the original)
    gptr<Local_0013b92c_ea_3> ea_3 = gptr<Local_0013b92c_ea_3>(r0_3 + 0x3cu);  // (from the original)
    ea_3->word_0 = 0;
    ea_3->word_4 = 0;
    ea_3->word_8 = 0;
    ea_3->word_c = 0;
    *gptr<u32>(r1_1 + 0x68u) = 0;  // (from the original)
    u32 r0_5 = call_00137eb4(r1_1 + 0x6cu, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_5 - 0x6cu;  // (from the original)
    gptr<Local_0013b92c_r2_3> r2_3 = gptr<Local_0013b92c_r2_3>(r4_1 + 0x74u);  // (from the original)
    *gptr<u8>(r4_1 + 0x70u) = 1;  // (from the original)
    r2_3->word_0 = ~0x80000000u;  // (from the original)
    r2_3->word_4 = r3;
    *gptr<u32>(r4_1 + 0x7cu) = 1;  // (from the original)
    gptr<Local_0013b92c_ea_6> ea_6 = gptr<Local_0013b92c_ea_6>(r4_1 + 0x80u);  // (from the original)
    ea_6->word_0 = r2;
    ea_6->word_4 = 0;
    u32 r0_7 = call_0013d00c(frame.at(0).addr(), *gptr<u32>(r2), r2_3.addr(), guest::cpu()->r[3]);
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r1_3 = r0_7 >> 0x1f;  // (from the original)
    if (r1_3 != 0) {
        call_0012f204(r0_7, r1_3, r2_4, r3_3);
        r1_3 = guest::cpu()->r[1];
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    u32 r0_9 = call_0013e164(*frame.at<u32>(0), r1_3, r2_4, r3_3);
    *gptr<u32>(r4_1 + 0x60u) = r4_1;  // (from the original)
    gptr<Local_0013b92c_ea_8> ea_8 = gptr<Local_0013b92c_ea_8>(r4_1 + 0x88u);  // (from the original)
    ea_8->word_0 = r0_9;
    ea_8->word_4 = ~1u;
    call_00137d88(r4_1 + 0x1cu, 0x20u, r1);  // (from the original)
    return r4_1;
}

}  // namespace d_0013b92c
GUEST_EXPORT_FRAMED(0x0013b92c, d_0013b92c::f_0013b92c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0013bee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013bee0 {

struct __attribute__((packed)) Local_0013bee0_r4_3 {
    u8 unknown_0[0x58];  // (not used here)
    u32 word_58;
    u8 unknown_5c[0x10];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_0013bee0_r4_3, word_58, 0x58);  // (from the original)
GUEST_OFFSET(Local_0013bee0_r4_3, word_6c, 0x6c);  // (from the original)

struct __attribute__((packed)) Local_0013bee0_r5_2 {
    u8 unknown_0[0x68c];  // (not used here)
    u32 word_68c;
    u8 unknown_690[0xc4];  // (not used here)
    u32 word_754;
};
GUEST_OFFSET(Local_0013bee0_r5_2, word_68c, 0x68c);  // (from the original)
GUEST_OFFSET(Local_0013bee0_r5_2, word_754, 0x754);  // (from the original)

struct __attribute__((packed)) Local_0013bee0_r5_5 {
    u8 unknown_0[0x134];  // (not used here)
    u32 word_134;
    u8 unknown_138[0x45c];  // (not used here)
    u32 word_594;
};
GUEST_OFFSET(Local_0013bee0_r5_5, word_134, 0x134);  // (from the original)
GUEST_OFFSET(Local_0013bee0_r5_5, word_594, 0x594);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0013d408, u32(u32, u32, u32, u32)> call_0013d408;  // (from the original)
inline constexpr guest::Function<0x0013d59c, u32(u32, u32, u32, u32)> call_0013d59c;  // (from the original)
inline constexpr guest::Function<0x0013d7cc, u32(u32, u32, u32, u32)> call_0013d7cc;  // (from the original)
inline constexpr guest::Function<0x0013ef18, u32(u32, u32, u32, u32)> call_0013ef18;  // (from the original)
inline constexpr guest::Function<0x0013efa0, u32(u32, u32, u32, u32)> call_0013efa0;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013bee0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_2 = call_0013d59c(r0 + 0xbc8u, r1, r2, r3);  // (from the original)
    u32 r5_1 = r0_2 - 0xbc8u;  // (from the original)
    *gptr<u32>(r5_1 + 0xb00u) = 0x8ebd04;  // (from the original)
    u32 r4_1 = r5_1 + 0xb00u;  // (from the original)
    call_002f76ac(r5_1 + 0xb98u, 0x13d404u, 0x14u, 2u);  // (from the original)
    call_002f76ac(r4_1 + 0x2cu, 0x137d74u, 4u, 2u);  // (from the original)
    call_00136cc8(r4_1 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00136cc8(r4_1 + 0x24u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00136cc8(r4_1 + 0x20u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_9 = call_0013d408(r5_1 + 0x860u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0013bee0_r5_2> r5_2 = gptr<Local_0013bee0_r5_2>(r0_9 - 0x860u);  // (from the original)
    r5_2->word_754 = 0x8ebcac;  // (from the original)
    u32 r4_2 = r5_2.addr() + 0x754u;  // (from the original)
    call_002f76ac(r5_2.addr() + 0x824u, 0x137d74u, 4u, 2u);  // (from the original)
    call_00136cc8(r4_2 + 0x50u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00136cc8(r4_2 + 0x40u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00136cc8(r4_2 + 0x34u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00136cc8(r4_2 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0013bee0_r4_3> r4_3 = gptr<Local_0013bee0_r4_3>(r5_2.addr() + 0x68cu);  // (from the original)
    r5_2->word_68c = 0x8ef740;  // (from the original)
    call_00136cc8(r5_2.addr() + 0x748u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r5_3 = r4_3.addr() + 0x6cu;  // (from the original)
    r4_3->word_6c = 0x8f7210;  // (from the original)
    call_0013ef18(r5_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r5_3) = 0x8f701c;  // (from the original)
    call_00136cc8(r5_3 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_3->word_58 = 0x8f701c;  // (from the original)
    call_00136cc8(r4_3.addr() + 0x60u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_0013d7cc(r4_3.addr() + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    gptr<Local_0013bee0_r5_5> r5_5 = gptr<Local_0013bee0_r5_5>(r0_18 - 0x698u);  // (from the original)
    r5_5->word_594 = 0x8f39fc;  // (from the original)
    u32 r4_4 = r5_5.addr() + 0x594u;  // (from the original)
    call_002f76ac(r5_5.addr() + 0x664u, 0x137d74u, 4u, 9u);  // (from the original)
    call_00136cc8(r4_4 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002f76ac(r4_4 + 0xcu, 0x137d74u, 4u, 3u);  // (from the original)
    r5_5->word_134 = 0x8ef900;  // (from the original)
    call_002f76ac(r5_5.addr() + 0x328u, 0x13d598u, 0x1cu, 0x12u);  // (from the original)
    call_002f76ac((r5_5.addr() + 0x134u) + 0xcu, 0x13fd70u, 0x1cu, 0xbu);  // (from the original)
    u32 r0_25 = call_0013efa0(r5_5.addr() + 0x100u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r5 = r0_25 - 0xe4u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_26 = r5;
        if (r4 < 8u) {
            r0_26 = r5 + (r4 << 2);
        }
        call_00136cc8(r0_26, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    call_002f76ac(r5, 0x137d74u, 4u, 8u);  // (from the original)
    return r5 - 0x1cu;  // (from the original)
}

}  // namespace d_0013bee0
GUEST_EXPORT_FRAMED(0x0013bee0, d_0013bee0::f_0013bee0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c0e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c0e8 {

struct __attribute__((packed)) Object_0013c0e8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c0e8_0, byte_c, 0xc);  // (from the original)


u32 f_0013c0e8(gptr<Object_0013c0e8_0> arg0) {
    u32 r1_1 = arg0->byte_c;
    u32 r0_1 = (r1_1 == 1u || arg0->byte_c == 2u) ? 1u : 0u;
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c0e8
GUEST_EXPORT(0x0013c0e8, d_0013c0e8::f_0013c0e8);

// f_0013c348: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c348 {

struct __attribute__((packed)) Object_0013c348_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013c348_0, half_10, 0x10);  // (from the original)


u32 f_0013c348(gptr<Object_0013c348_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x6800u;  // (from the original)
    u32 r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + (r1 + (r1 << 1) << 2)) == r2) {
            u32 res_1 = r3 + (r1 + (r1 << 1) << 2);
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    return r0;
}

}  // namespace d_0013c348
GUEST_EXPORT_FRAMED(0x0013c348, d_0013c348::f_0013c348, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c3c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c3c0 {

struct __attribute__((packed)) Object_0013c3c0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_0013c3c0_0, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0013c3c0_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3c0_r1_1, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013c3c0_r1_1, word_8, 0x8);  // (from the original)


u32 f_0013c3c0(gptr<Object_0013c3c0_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_c;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3c0_r1_1> r1_1 = gptr<Local_0013c3c0_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4900u) {  // (from the original)
        u32 r1_2 = r1_1->word_8;
        guest::cpu()->r[1] = r1_2;
        return r0_1 + r1_2;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return 0u;
}

}  // namespace d_0013c3c0
GUEST_EXPORT(0x0013c3c0, d_0013c3c0::f_0013c3c0);

// f_0013c3f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c3f4 {

struct __attribute__((packed)) Object_0013c3f4_0 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Object_0013c3f4_0, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0013c3f4_r1_1 {
    u8 unknown_0[0x4];  // (not used here)
    u16 half_4;
    u8 unknown_6[0x2];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c3f4_r1_1, half_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013c3f4_r1_1, word_8, 0x8);  // (from the original)


u32 f_0013c3f4(gptr<Object_0013c3f4_0> arg0, u32 r1) {
    u32 r0_1 = arg0.addr() + arg0->word_14;
    if (*gptr<u32>(r0_1) <= r1) {
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    gptr<Local_0013c3f4_r1_1> r1_1 = gptr<Local_0013c3f4_r1_1>(r0_1 + (r1 << 3));
    if (r1_1->half_4 == 0x4902u) {  // (from the original)
        u32 r1_2 = r1_1->word_8;
        guest::cpu()->r[1] = r1_2;
        return r0_1 + r1_2;
    }
    guest::cpu()->r[1] = r1_1.addr();
    return 0u;
}

}  // namespace d_0013c3f4
GUEST_EXPORT(0x0013c3f4, d_0013c3f4::f_0013c3f4);

// f_0013c430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c430 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c430(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 9u);
    if (r0_2 == 0) {
        return 0x981880u;  // (from the original)
    }
    u32 r0_3 = *frame.at<u32>(0) + r0;
    return r0_3 + *gptr<u32>(r0_3 + 4u);
}

}  // namespace d_0013c430
GUEST_EXPORT_FRAMED(0x0013c430, d_0013c430::f_0013c430, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013c46c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c46c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c46c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 0u);
    u32 r0_3 = r0_2 == 0 ? 0x40u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0013c46c
GUEST_EXPORT_FRAMED(0x0013c46c, d_0013c46c::f_0013c46c, 0x4000);  // pushes {lr} first, as the original

// f_0013c494: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c494 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c494(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 2u);
    if (r0_2 == 0) {
        return r0_2;
    }
    return *frame.at<u32>(0) >> 8u & 0xffu;  // (from the original)
}

}  // namespace d_0013c494
GUEST_EXPORT_FRAMED(0x0013c494, d_0013c494::f_0013c494, 0x4000);  // pushes {lr} first, as the original

// f_0013c4c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4c0 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c4c0(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 2u);
    u32 r0_3 = r0_2 == 0 ? 0x40u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0013c4c0
GUEST_EXPORT_FRAMED(0x0013c4c0, d_0013c4c0::f_0013c4c0, 0x4000);  // pushes {lr} first, as the original

// f_0013c4e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c4e8 {

struct __attribute__((packed)) Object_0013c4e8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c4e8_0, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0013c558> global_0013c558;  // (from the original)

void f_0013c4e8(gptr<Object_0013c4e8_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r6 = r0 + 4u;
    u32 r12 = 0u;
    u32 r4 = arg0->word_4;
    u32 r2 = 3u;
    r0 = r12;
    u32 r1 = r12;
    u32 r3 = 4u;
    u32 r5 = 1u;
    do {
        if ((r4 & lsl_r(r5, r1 & 0xff)) != 0) {  // (from the original)
            r0 += 1u;
            if (r1 == r2) {
                r12 = 1u;
            }
        }
        res_1 = r3 - 1u;
        r3 = res_1;
        r1 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    if (r12 != 0 && r0 != 0) {
        float S0_1 = std::bit_cast<float>(*gptr<u32>(r6 + (r0 << 2)));
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0_1;
        return;
    }
    float S0_2 = std::bit_cast<float>(*global_0013c558);
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0_2;
}

}  // namespace d_0013c4e8
GUEST_EXPORT_FRAMED(0x0013c4e8, d_0013c4e8::f_0013c4e8, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0013c55c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c55c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013c55c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 4u, frame.at(0).addr(), 1u);
    u32 r0_3 = r0_2 == 0 ? 0x60u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0013c55c
GUEST_EXPORT_FRAMED(0x0013c55c, d_0013c55c::f_0013c55c, 0x4000);  // pushes {lr} first, as the original

// f_0013c584: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c584 {

struct __attribute__((packed)) Object_0013c584_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0013c584_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013c584_0, byte_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013c8bc, u32(u32, u32)> call_0013c8bc;  // (from the original)

u32 f_0013c584(gptr<Object_0013c584_0> arg0) {
    u32 r1_1 = arg0->byte_8;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    return call_0013c8bc(arg0->word_4, r1_1);
}

}  // namespace d_0013c584
GUEST_EXPORT(0x0013c584, d_0013c584::f_0013c584);

// f_0013c5a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5a0 {

struct __attribute__((packed)) Object_0013c5a0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5a0_0, word_8, 0x8);  // (from the original)


u32 f_0013c5a0(gptr<Object_0013c5a0_0> arg0) {
    u32 r0_1 = arg0->word_8;
    if (r0_1 != 0) {
        r0_1 = *gptr<u32>(r0_1);
    }
    return r0_1;
}

}  // namespace d_0013c5a0
GUEST_EXPORT(0x0013c5a0, d_0013c5a0::f_0013c5a0);

// f_0013c5b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5b0 {

struct __attribute__((packed)) Object_0013c5b0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013c5b0_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Object_0013c5b0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5b0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5b0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013c5b0_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c5b0_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013c5b0_r0_2, word_4, 0x4);  // (from the original)


u32 f_0013c5b0(gptr<Object_0013c5b0_0> arg0, gptr<Object_0013c5b0_1> arg1, u32 r2) {
    u32 r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        return r0_1;
    }
    if (*gptr<u32>(r0_1) <= r2) {
        return 0u;
    }
    gptr<Local_0013c5b0_r0_2> r0_2 = gptr<Local_0013c5b0_r0_2>(r0_1 + *gptr<u32>(r0_1 + (r2 << 3) + 8u));
    if (r0_2.addr() == 0) {
        return 0u;
    }
    u32 r2_1 = r0_2->word_4;
    arg1->word_0 = r0_2->word_0;
    arg1->word_4 = r2_1;
    return 1u;
}

}  // namespace d_0013c5b0
GUEST_EXPORT(0x0013c5b0, d_0013c5b0::f_0013c5b0);

// f_0013c5f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c5f0 {

struct __attribute__((packed)) Object_0013c5f0_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5f0_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013c5f0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c5f0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c5f0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013c5f0_r2_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0013c5f0_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013c5f0_r2_1, word_8, 0x8);  // (from the original)


u32 f_0013c5f0(gptr<Object_0013c5f0_0> arg0, gptr<Object_0013c5f0_1> arg1, u32 r2) {
    u32 r3_1 = arg0->word_0;
    u32 zf_1 = r3_1 == 0;
    u32 cf_1 = r3_1 >= 0u;
    if (!zf_1) {
        u32 r12_1 = *gptr<u32>(r3_1);
        zf_1 = r12_1 == r2;
        cf_1 = r12_1 >= r2;
    }
    if (!cf_1 || zf_1) {
        return 0u;
    }
    gptr<Local_0013c5f0_r2_1> r2_1 = gptr<Local_0013c5f0_r2_1>(*gptr<u32>(r3_1 + (r2 << 3) + 8u) + r3_1);
    if (r2_1.addr() == 0) {
        return 0u;
    }
    arg1->word_0 = r2_1->word_0;
    u32 r2_2 = r2_1->word_8;
    arg1->word_4 = r2_2 + 1u == 0 ? 0u : arg0->word_4 + r2_2;
    return 1u;
}

}  // namespace d_0013c5f0
GUEST_EXPORT(0x0013c5f0, d_0013c5f0::f_0013c5f0);

// f_0013c644: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c644 {

struct __attribute__((packed)) Object_0013c644_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c644_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013c644_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013c644_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013c644_r0_6, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013c3b4, u32(u32, u32, u32, u32)> call_0013c3b4;  // (from the original)
inline constexpr guest::Function<0x0013c3c0, u32(u32, u32, u32, u32)> call_0013c3c0;  // (from the original)
inline constexpr guest::Function<0x0013c3f4, u32(u32, u32, u32, u32)> call_0013c3f4;  // (from the original)
inline constexpr guest::Function<0x0013c430, u32(u32, u32, u32, u32)> call_0013c430;  // (from the original)
inline constexpr guest::Function<0x0013c46c, u32(u32, u32, u32, u32)> call_0013c46c;  // (from the original)
inline constexpr guest::Function<0x0013c494, u32(u32, u32, u32, u32)> call_0013c494;  // (from the original)
inline constexpr guest::Function<0x0013c4c0, u32(u32, u32, u32, u32)> call_0013c4c0;  // (from the original)
inline constexpr guest::Function<0x0013c4e8, u32(u32, u32, u32, u32)> call_0013c4e8;  // (from the original)
inline constexpr guest::Function<0x0013c55c, u32(u32, u32, u32, u32)> call_0013c55c;  // (from the original)
inline constexpr guest::Function<0x0013ca2c, u32(u32, u32, u32, u32)> call_0013ca2c;  // (from the original)

u32 f_0013c644(gptr<Object_0013c644_0> arg0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = arg0->word_4;
    u32 r0_2 = call_0013c3c0(r0_1, r2, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_3 = call_0013c3f4(r0_2, r3, r2_1, r3_1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_4 = arg0->word_4;
    u32 r0_5 = call_0013c3b4(r0_4, r1_1, r2_2, r3_2);
    u32 r3_3 = guest::cpu()->r[3];
    u32 r2_3 = *gptr<u32>(r0_5);
    u32 r1_2 = *gptr<u32>(r0_3);
    if (r2_3 > r1_2) {
        gptr<Local_0013c644_r0_6> r0_6 = gptr<Local_0013c644_r0_6>(r0_5 + (r1_2 << 3) + 4u);
        if (r0_6.addr() != 0) {
            u32 r1_3 = r0_6->word_0;
            *gptr<u32>(r1) = r1_3;
            *gptr<u32>(r1 + 4u) = r0_6->word_4;
            call_0013c4e8(r0_3, r1_3, r2_3, r3_3);
            u32 r1_4 = guest::cpu()->r[1];
            u32 r2_4 = guest::cpu()->r[2];
            u32 r3_4 = guest::cpu()->r[3];
            float S0_4 = guest::cpu()->s[0];
            *gptr<u32>(r1 + 0x14u) = std::bit_cast<u32>(S0_4);  // (from the original)
            guest::cpu()->s[0] = S0_4;
            u32 r0_7 = call_0013c430(r0_3, r1_4, r2_4, r3_4);
            u32 r2_5 = guest::cpu()->r[2];
            u32 r3_5 = guest::cpu()->r[3];
            call_0013ca2c(r1 + 8u, r0_7, r2_5, r3_5);
            u32 r1_5 = guest::cpu()->r[1];
            u32 r2_6 = guest::cpu()->r[2];
            u32 r3_6 = guest::cpu()->r[3];
            u32 r0_9 = call_0013c46c(r0_3, r1_5, r2_6, r3_6);
            u32 r1_6 = guest::cpu()->r[1];
            u32 r2_7 = guest::cpu()->r[2];
            u32 r3_7 = guest::cpu()->r[3];
            *gptr<u8>(r1 + 0xdu) = u8(r0_9);  // (from the original)
            u32 r0_10 = call_0013c4c0(r0_3, r1_6, r2_7, r3_7);
            u32 r1_7 = guest::cpu()->r[1];
            u32 r2_8 = guest::cpu()->r[2];
            u32 r3_8 = guest::cpu()->r[3];
            *gptr<u8>(r1 + 0xeu) = u8(r0_10);  // (from the original)
            u32 r0_11 = call_0013c494(r0_3, r1_7, r2_8, r3_8);
            u32 r1_8 = guest::cpu()->r[1];
            u32 r3_9 = guest::cpu()->r[3];
            *gptr<u8>(r1 + 0xfu) = u8(r0_11);  // (from the original)
            u32 r0_12 = call_0013c55c(r0_3, r1_8, r2_8, r3_9);
            *gptr<u8>(r1 + 0x10u) = u8(r0_12);  // (from the original)
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0u;
}

}  // namespace d_0013c644
GUEST_EXPORT_FRAMED(0x0013c644, d_0013c644::f_0013c644, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c700: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c700 {

struct __attribute__((packed)) Object_0013c700_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x4];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013c700_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013c700_0, byte_c, 0xc);  // (from the original)


u32 f_0013c700(gptr<Object_0013c700_0> arg0) {
    u32 r1_1 = arg0->byte_c;
    u32 r0_1 = r1_1 == 0 ? 0u : *gptr<u32>(arg0->word_4);
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0013c700
GUEST_EXPORT(0x0013c700, d_0013c700::f_0013c700);

// f_0013c728: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c728 {

struct __attribute__((packed)) Object_0013c728_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c728_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f5e8, u32(u32, u32, u32)> call_0013f5e8;  // (from the original)
inline constexpr guest::Function<0x0013f610, u32(u32, u32, u32)> call_0013f610;  // (from the original)
inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x0013f748, u32(u32, u32, u32)> call_0013f748;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)

u32 f_0013c728(gptr<Object_0013c728_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = call_00141728(arg0->word_3c, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        u32 r0_3 = call_0013f718(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        if (r0_3 != 3u) {
            r0_2 = 0u;
        } else {
            u32 r0_4 = call_0013f748(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
            u32 r2_3 = guest::cpu()->r[2];
            *gptr<u32>(r2) = *gptr<u32>(r0_4);
            *gptr<u32>(r2 + 4u) = *gptr<u32>(r0_4 + 4u);
            u32 r0_5 = call_0013f5e8(r0_4, guest::cpu()->r[1], r2_3);
            *gptr<u8>(r2 + 8u) = u8(r0_5);
            u32 r0_6 = call_0013f610(r0_4, guest::cpu()->r[1], r2_3);
            if (r0_6 != 0) {
                r0_6 = 1u;
            }
            *gptr<u8>(r2 + 9u) = u8(r0_6);
            r0_2 = 1u;
        }
    }
    return r0_2;
}

}  // namespace d_0013c728
GUEST_EXPORT_FRAMED(0x0013c728, d_0013c728::f_0013c728, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c794: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c794 {

struct __attribute__((packed)) Object_0013c794_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c794_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141764, u32(u32, u32)> call_00141764;  // (from the original)

u32 f_0013c794(gptr<Object_0013c794_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_00141764(arg0->word_3c, r1);
    if (r0_2 == 0) {
        return r0_2;
    }
    *gptr<u32>(r2) = *gptr<u32>(r0_2);
    *gptr<u32>(r2 + 4u) = *gptr<u32>(r0_2 + 4u);
    u32 r1_2 = *gptr<u32>(r0_2 + 0xcu);  // (from the original)
    *gptr<u32>(r2 + 8u) = r0_2 + r1_2;
    guest::cpu()->r[1] = r1_2;
    return 1u;
}

}  // namespace d_0013c794
GUEST_EXPORT_FRAMED(0x0013c794, d_0013c794::f_0013c794, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013c7e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c7e0 {

struct __attribute__((packed)) Object_0013c7e0_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013c7e0_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x0013f63c, u32(u32, u32, u32)> call_0013f63c;  // (from the original)
inline constexpr guest::Function<0x0013f69c, u32(u32, u32, u32)> call_0013f69c;  // (from the original)
inline constexpr guest::Function<0x0013f6bc, u32(u32, u32, u32)> call_0013f6bc;  // (from the original)
inline constexpr guest::Function<0x0013f6e4, u32(u32, u32, u32)> call_0013f6e4;  // (from the original)
inline constexpr guest::Function<0x0013f718, u32(u32, u32, u32)> call_0013f718;  // (from the original)
inline constexpr guest::Function<0x0013f754, u32(u32, u32, u32)> call_0013f754;  // (from the original)
inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)

u32 f_0013c7e0(gptr<Object_0013c7e0_0> arg0, u32 r1, u32 r2) {
    u32 r0_2 = call_00141728(arg0->word_3c, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        u32 r0_3 = call_0013f718(r0_2, r1_1, guest::cpu()->r[2]);
        r1_1 = guest::cpu()->r[1];
        if (r0_3 != 1u) {
            r0_2 = 0u;
        } else {
            u32 r0_4 = call_0013f754(r0_2, r1_1, guest::cpu()->r[2]);
            u32 r0_5 = call_0013f69c(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
            *gptr<u32>(r2) = r0_5;
            *gptr<u32>(r2 + 0x14u) = *gptr<u32>(r0_4 + 8u);  // (from the original)
            u32 r0_6 = call_0013f6bc(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
            *gptr<u8>(r2 + 0x18u) = u8(r0_6);  // (from the original)
            u32 r0_7 = call_0013f6e4(r0_4, guest::cpu()->r[1], guest::cpu()->r[2]);
            *gptr<u8>(r2 + 0x19u) = u8(r0_7);  // (from the original)
            call_0013f63c(r0_4, r2 + 4u, guest::cpu()->r[2]);
            r1_1 = guest::cpu()->r[1];
            r0_2 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0013c7e0
GUEST_EXPORT_FRAMED(0x0013c7e0, d_0013c7e0::f_0013c7e0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013c850: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c850 {

struct __attribute__((packed)) Object_0013c850_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013c850_0, half_10, 0x10);  // (from the original)


u32 f_0013c850(gptr<Object_0013c850_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x5800u;  // (from the original)
    u32 r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + (r1 + (r1 << 1) << 2)) == r2) {
            u32 res_1 = r3 + (r1 + (r1 << 1) << 2);
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    return r0;
}

}  // namespace d_0013c850
GUEST_EXPORT_FRAMED(0x0013c850, d_0013c850::f_0013c850, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c8c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c8c8 {

struct __attribute__((packed)) Object_0013c8c8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c8c8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c8c8_1 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c8c8_1, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0013c8c8_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c8c8_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013c8c8_r4_1, word_c, 0xc);  // (from the original)


u32 f_0013c8c8(gptr<Object_0013c8c8_0> arg0, gptr<Object_0013c8c8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r12 = r0;
    u32 r0_1 = arg0->word_0;
    if (r0_1 == 0) {
        return r0_1;
    }
    r1 = arg1->word_0;
    u32 r2 = 0u;
    u32 r3 = r0_1 - 1u;
L_13c8e8:;
    u32 r0_2 = r2 + r3 >> 1;
    gptr<Local_0013c8c8_r4_1> r4_1 = gptr<Local_0013c8c8_r4_1>(r12 + (r0_2 << 3));
    if (r1 >= r4_1->word_8) {
        if (r4_1->word_c >= r1) {
            return r0_2;
        }
        if (r0_2 != r3) {
            r2 = r0_2 + 1u;
            guest::preempt();
            goto L_13c8e8;
        }
        return r0_2 + 1u;
    }
    if (r0_2 != r2) {
        r3 = r0_2 - 1u;
        guest::preempt();
        goto L_13c8e8;
    }
    return r0_2;
}

}  // namespace d_0013c8c8
GUEST_EXPORT_FRAMED(0x0013c8c8, d_0013c8c8::f_0013c8c8, 0x30);  // pushes {r4, r5} first, as the original

// f_0013c938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c938 {

struct __attribute__((packed)) Object_0013c938_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c938_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c938_1 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0013c938_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013c938_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c938_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013c938_r4_1, word_c, 0xc);  // (from the original)


u32 f_0013c938(gptr<Object_0013c938_0> arg0, gptr<Object_0013c938_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r1 = arg1.addr();
    u32 r12 = r0;
    u32 r5 = arg0->word_0;
    if (r5 == 0) {
        return 0u;
    }
    r1 = arg1->word_4;
    u32 r2 = 0u;
    u32 r3 = r5 - 1u;
L_13c95c:;
    r0 = r2 + r3 >> 1;
    gptr<Local_0013c938_r4_1> r4_1 = gptr<Local_0013c938_r4_1>(r12 + (r0 << 3));
    if (r1 >= r4_1->word_8) {
        goto L_13c994;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c95c;
    }
    r0 = r0 == 0 ? r5 : r0 - 1u;
    return r0;
L_13c994:;
    if (r1 <= r4_1->word_c) {
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c95c;
    }
    return r0;
}

}  // namespace d_0013c938
GUEST_EXPORT_FRAMED(0x0013c938, d_0013c938::f_0013c938, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013c9b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013c9b8 {

struct __attribute__((packed)) Object_0013c9b8_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013c9b8_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Object_0013c9b8_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0013c9b8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013c9b8_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013c9b8_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0013c9b8_r5_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013c9b8_r5_1, word_c, 0xc);  // (from the original)


u32 f_0013c9b8(gptr<Object_0013c9b8_0> arg0, gptr<Object_0013c9b8_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r12 = r0;
    r0 = arg0->word_0;
    if (r0 == 0) {
        return r0;
    }
    u32 r4 = arg1->word_4;
    u32 r2 = 0u;
    u32 r3 = r0 - 1u;
L_13c9d8:;
    r0 = r2 + r3 >> 1;
    gptr<Local_0013c9b8_r5_1> r5_1 = gptr<Local_0013c9b8_r5_1>(r12 + (r0 << 3));
    if (r4 >= r5_1->word_8) {
        goto L_13ca04;
    }
    if (r0 != r2) {
        r3 = r0 - 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    return r0;
L_13ca04:;
    if (r5_1->word_c >= arg1->word_0) {
        return r0;
    }
    if (r0 != r3) {
        r2 = r0 + 1u;
        guest::preempt();
        goto L_13c9d8;
    }
    return r0 + 1u;
}

}  // namespace d_0013c9b8
GUEST_EXPORT_FRAMED(0x0013c9b8, d_0013c9b8::f_0013c9b8, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_0013ca2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ca2c {

struct __attribute__((packed)) Object_0013ca2c_0 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ca2c_0, byte_4, 0x4);  // (from the original)

struct __attribute__((packed)) Object_0013ca2c_1 {
    u32 word_0;
    u8 byte_4;
};
GUEST_OFFSET(Object_0013ca2c_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ca2c_1, byte_4, 0x4);  // (from the original)


void f_0013ca2c(gptr<Object_0013ca2c_0> arg0, gptr<Object_0013ca2c_1> arg1) {
    arg0->word_0 = arg1->word_0;
    arg0->byte_4 = u8(u32(arg1->byte_4));
}

}  // namespace d_0013ca2c
GUEST_EXPORT(0x0013ca2c, d_0013ca2c::f_0013ca2c);

// f_0013cbdc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013cbdc {

struct __attribute__((packed)) Object_0013cbdc_0 {
    u32 word_0;
    u8 unknown_4[0x1c];  // (not used here)
    u32 word_20;
    u32 word_24;
    u32 word_28;
};
GUEST_OFFSET(Object_0013cbdc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_0013cbdc_0, word_28, 0x28);  // (from the original)

inline constexpr guest::Function<0x0012f154, u32(u32, u32)> call_0012f154;  // (from the original)

void f_0013cbdc(gptr<Object_0013cbdc_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = 0u;
    arg0->word_0 = r1;
    arg0->word_20 = r2;
    arg0->word_24 = r3;
    r1 = r0 + 0x2cu;  // (from the original)
    arg0->word_28 = r3;
    do {
        *gptr<u32>(r1) = r3;
        guest::preempt();
    } while (u32(0) != 0);
    r1 = 0u;
    r2 = r0 + 0x30u;  // (from the original)
    do {
        *gptr<u32>(r2) = r1;
        guest::preempt();
    } while (u32(0) != 0);
    u32 r12 = 0x7fffu;  // (from the original)
    u32 r14 = r0 + 4u;
    r2 = 0u;
    r1 = r14;
    do {
        *gptr<u32>(r1) = r2;
        guest::preempt();
    } while (u32(0) != 0);
    r1 = r14 + 4u;
    do {
        *gptr<u16>(r1) = u16(sxth(r3));
        guest::preempt();
    } while (u32(0) != 0);
    r2 = 0u;
    r1 = r0 + 0xcu;  // (from the original)
    *gptr<u16>(r14 + 6u) = u16(r12);
    do {
        *gptr<u32>(r1) = r2;
        guest::preempt();
    } while (u32(0) != 0);
    r2 = r1 + 4u;
    do {
        *gptr<u16>(r2) = u16(sxth(r3));
        guest::preempt();
    } while (u32(0) != 0);
    *gptr<u16>(r1 + 6u) = u16(r12);
    frame.release();
    call_0012f154(r0 + 0x14u, r1);  // (from the original)
    return;
}

}  // namespace d_0013cbdc
GUEST_EXPORT(0x0013cbdc, d_0013cbdc::f_0013cbdc);

// f_0013cc9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013cc9c {

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013a768, u32(u32, u32, u32)> call_0013a768;  // (from the original)

u32 f_0013cc9c(u32 r0, u32 r1) {
    u32 r0_1 = r0 + 0x30u;  // (from the original)
    call_00135748(r0_1, r1);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = *gptr<u32>(r0 + 0x24u);  // (from the original)
    if (r5_1 != 0) {
        *gptr<u32>(r0 + 0x24u) = *gptr<u32>(r5_1);  // (from the original)
        *gptr<u32>(r0 + 0x2cu) = *gptr<u32>(r0 + 0x2cu) + 1u;  // (from the original)
        r1_1 = *gptr<u32>(r0 + 0x18u);  // (from the original)
        if ((*gptr<u32>(r0 + 0x14u) & 1u) != 0) {  // (from the original)
            call_0013a768(r5_1, r1_1 + r5_1, 0u);
            r1_1 = guest::cpu()->r[1];
        }
    }
    call_001357ec(r0_1, r1_1);
    return r5_1;
}

}  // namespace d_0013cc9c
GUEST_EXPORT_FRAMED(0x0013cc9c, d_0013cc9c::f_0013cc9c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d060 {

inline guest::global<u32, 0x0095e0c4> global_0095e0c4;  // (from the original)

u32 f_0013d060() {
    u32 r1_1 = *global_0095e0c4;
    return guest::call_address<u32>(r1_1, guest::cpu()->r[0], r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d060
GUEST_EXPORT(0x0013d060, d_0013d060::f_0013d060);

// f_0013d118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d118 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)
inline constexpr guest::Function<0x0013e560, u32(u32, u32, u32, u32)> call_0013e560;  // (from the original)

u32 f_0013d118(u32 r0) {
    if (r0 == 0) {
        guest::cpu()->r[1] = r0;
        return r0;
    }
    return call_0013e560(*gptr<u32>(*global_00975284), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013d118
GUEST_EXPORT(0x0013d118, d_0013d118::f_0013d118);

// f_0013d148: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d148 {

inline guest::global<u32, 0x00975284> global_00975284;  // (from the original)
inline constexpr guest::Function<0x0012f600, u32(u32, u32, u32, u32)> call_0012f600;  // (from the original)

u32 f_0013d148(u32 r0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = *gptr<u32>(*global_00975284);
    *frame.at<u32>(0) = 0;
    *frame.at<u32>(4) = 0;
    u32 r0_2 = call_0012f600(r0_1, r0, r1, 0u);
    return r0_2;
}

}  // namespace d_0013d148
GUEST_EXPORT_FRAMED(0x0013d148, d_0013d148::f_0013d148, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d408: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d408 {

inline constexpr guest::Function<0x0014156c, u32(u32, u32, u32, u32)> call_0014156c;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)

u32 f_0013d408(gptr<SoundFxMgr> arg0) {
    arg0->word_0 = 0x8eb490;  // (from the original)
    call_002f76ac(arg0.addr() + 0x44u, 0x14152cu, 0x20u, 0xau);  // (from the original)
    u32 r0_3 = call_0014156c(arg0.addr() + 0x14u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return r0_3 - 0x14u;  // (from the original)
}

}  // namespace d_0013d408
GUEST_EXPORT_FRAMED(0x0013d408, d_0013d408::f_0013d408, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013d444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d444 {

struct __attribute__((packed)) Object_0013d444_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
    u8 byte_17;
    u8 unknown_18[0x10];  // (not used here)
    u32 word_28;
    u32 word_2c;
};
GUEST_OFFSET(Object_0013d444_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013d444_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_0013d444_0, byte_16, 0x16);  // (from the original)
GUEST_OFFSET(Object_0013d444_0, byte_17, 0x17);  // (from the original)
GUEST_OFFSET(Object_0013d444_0, word_28, 0x28);  // (from the original)
GUEST_OFFSET(Object_0013d444_0, word_2c, 0x2c);  // (from the original)

inline constexpr guest::Function<0x0013fd78, u32(u32, u32, u32, u32)> call_0013fd78;  // (from the original)
inline constexpr guest::Function<0x0014041c, u32(u32, u32, u32, u32)> call_0014041c;  // (from the original)
inline constexpr guest::Function<0x001404f0, u32(u32, u32, u32, u32)> call_001404f0;  // (from the original)
inline constexpr guest::Function<0x00140530, u32(u32, u32, u32, u32)> call_00140530;  // (from the original)
inline constexpr guest::Function<0x00140564, u32(u32, u32, u32, u32)> call_00140564;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> call_002f88b8;  // (from the original)

u32 f_0013d444(gptr<Object_0013d444_0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0->byte_14 != 0) {
        call_0013fd78(arg0.addr() + 0x34u, r1, r2, r3);  // (from the original)
        u32 r1_1 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        u32 r0_2 = arg0->byte_14;
        if (r0_2 == 2u) {
            u32 r0_3 = call_00140530(r0_2, r1_1, r2_1, r3_1);
            r1_1 = guest::cpu()->r[1];
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            if (!((r0_3 & 0x80000000u) >> 0x1f)) {  // (from the original)
                r1_1 = 1u;
                arg0->word_2c = 0;
                arg0->byte_14 = u8(r1_1);
            }
            arg0->byte_16 = 0;
            arg0->byte_17 = 0;
        }
        u32 r0_4 = call_001404f0(0u, r1_1, r2_1, r3_1);
        u32 r0_5 = call_0014041c(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00140564(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_6 = arg0->word_28;
        if (r0_6 != 0) {
            call_002f88b8(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            arg0->word_28 = 0;
        }
        arg0->byte_15 = 2;
        arg0->byte_14 = 0;
    }
    call_002f76ac(arg0.addr() + 0x40u, 0x13bbfcu, 0xecu, 6u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0013d444
GUEST_EXPORT_FRAMED(0x0013d444, d_0013d444::f_0013d444, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d6d0 {

struct __attribute__((packed)) Local_0013d6d0_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d6d0_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013d6d0_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)

void f_0013d6d0(u32 r0) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    call_00135740(0x982870u);  // (from the original)
    if (*gptr<u8>(r0 + 0xcu) == 1u || *gptr<u8>(r0 + 0xcu) == 2u) {  // (from the original)
        call_00135740(0x982870u);  // (from the original)
        call_0013f000(0x982864u, r0);  // (from the original)
        call_00137e84(0x982870u, r0);  // (from the original)
    }
    u32 r1_1 = ~0u;
    *gptr<u8>(r0 + 0xcu) = 0;  // (from the original)
    gptr<Local_0013d6d0_ea_2> ea_2 = gptr<Local_0013d6d0_ea_2>(r0 + 0x10u);  // (from the original)
    ea_2->word_0 = 0;
    ea_2->word_4 = r1_1;
    frame.release();
    call_00137e84(0x982870u, r1_1);
    return;  // (from the original)
}

}  // namespace d_0013d6d0
GUEST_EXPORT(0x0013d6d0, d_0013d6d0::f_0013d6d0);

// f_0013d73c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d73c {

struct __attribute__((packed)) Object_0013d73c_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013d73c_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013d73c_0, byte_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0013d73c_r1_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013d73c_r1_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013d73c_r1_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00135740, u32(u32)> call_00135740;  // (from the original)
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> call_00137e84;  // (from the original)
inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)

u32 f_0013d73c(gptr<Object_0013d73c_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f4a84;  // (from the original)
    call_00135740(0x982870u);  // (from the original)
    if (arg0->byte_c != 1u && arg0->byte_c != 2u) {
        goto L_13d798;
    }
    call_00135740(0x982870u);  // (from the original)
    call_0013f000(0x982864u, r0);  // (from the original)
    call_00137e84(0x982870u, r0);  // (from the original)
L_13d798:;
    arg0->byte_c = 0;
    gptr<Local_0013d73c_r1_1> r1_1 = gptr<Local_0013d73c_r1_1>(r0 + 0x10u);  // (from the original)
    r1_1->word_0 = 0;
    r1_1->word_4 = ~0u;
    call_00137e84(0x982870u, r1_1.addr());  // (from the original)
    return r0;
}

}  // namespace d_0013d73c
GUEST_EXPORT_FRAMED(0x0013d73c, d_0013d73c::f_0013d73c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013d7cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d7cc {

inline guest::global<u32, 0x0094cd20> global_0094cd20;  // (from the original)
inline constexpr guest::Function<0x00136cc8, u32(u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)
inline constexpr guest::Function<0x00138c2c, u32(u32, u32, u32, u32)> call_00138c2c;  // (from the original)
inline constexpr guest::Function<0x0013d4f0, u32(u32, u32, u32)> call_0013d4f0;  // (from the original)

u32 f_0013d7cc(gptr<SoundMelodyPlayerBase> arg0, u32 r1, u32 r2) {
    arg0->word_0 = 0x8f54d0;  // (from the original)
    u32 r0_1 = arg0->word_4;
    if (r0_1 != 0) {
        call_00136e58(r0_1, 0u, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    if (arg0->word_44 + 1u != 0) {
        u32 r0_2 = *global_0094cd20;
        if (r0_2 != 0) {
            u32 r0_3 = call_00138c2c(r0_2, 0u, r2, guest::cpu()->r[3]);
            r1 = arg0->word_44;
            if (s32(r1) <= s32(r0_3)) {
                u32 r0_5 = call_0013d4f0(*global_0094cd20, r1, 0u);
                r1 = guest::cpu()->r[1];
                if (r0_5 != 0) {
                    arg0->word_44 = ~0u;
                }
            }
        }
    }
    arg0->byte_24 = 0;
    call_00136cc8(arg0.addr() + 4u, r1);
    return arg0.addr();
}

}  // namespace d_0013d7cc
GUEST_EXPORT_FRAMED(0x0013d7cc, d_0013d7cc::f_0013d7cc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013d85c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013d85c {

struct __attribute__((packed)) Local_0013d85c_r4_1 {
    u32 word_0;
};
GUEST_OFFSET(Local_0013d85c_r4_1, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x0012ede8, u32(u32, u32, u32, u32)> call_0012ede8;  // (from the original)
inline constexpr guest::Function<0x00134250, u32(u32, u32, u32, u32)> call_00134250;  // (from the original)

u32 f_0013d85c(gptr<nn__fs__FileInputStream> arg0) {
    gptr<Local_0013d85c_r4_1> r4_1 = gptr<Local_0013d85c_r4_1>(arg0.addr() + 4u);
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = r0_1 & ~1u;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r4_1.addr() - 4u;
    }
    if ((r0_1 & 1u) != 0) {
        call_00134250(r0_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
    }
    call_0012ede8(r4_1->word_0 & ~1u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r4_1->word_0 = 0;
    guest::cpu()->r[1] = 0u;
    return r4_1.addr() - 4u;
}

}  // namespace d_0013d85c
GUEST_EXPORT_FRAMED(0x0013d85c, d_0013d85c::f_0013d85c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013dc74: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dc74 {

struct __attribute__((packed)) Local_0013dc74_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
    u8 unknown_28[0x8];  // (not used here)
    u32 word_30;
    u32 word_34;
    u32 word_38;
};
GUEST_OFFSET(Local_0013dc74_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_30, 0x30);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_0013dc74_r4_1, word_38, 0x38);  // (from the original)

inline guest::global<u32, 0x00974f04> global_00974f04;  // (from the original)
inline guest::global<u32, 0x00974f0c> global_00974f0c;  // (from the original)
inline constexpr guest::Function<0x0012f154, u32(u32)> call_0012f154;  // (from the original)
inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x0013cc9c, u32(u32)> call_0013cc9c;  // (from the original)
inline constexpr guest::Function<0x0014031c, u32(u32, u32, u32, u32)> call_0014031c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)

u32 f_0013dc74(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00135748(0xae0cb8u, r1, r2, r3);  // (from the original)
    if ((*global_00974f0c & 1u) == 0) {
        u32 r0_2 = call_002fe7dc(0x974f0cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_2 != 0) {
            gptr<Local_0013dc74_r4_1> r4_1 = gptr<Local_0013dc74_r4_1>(0xae0bc8u);  // (from the original)
            r4_1->word_4 = 0;
            r4_1->word_8 = 0;
            r4_1->word_c = 0;
            r4_1->word_10 = 0;
            r4_1->word_14 = 0;
            r4_1->word_24 = 0;
            r4_1->word_30 = 0;
            r4_1->word_0 = 0x8fb030;  // (from the original)
            r4_1->word_38 = ~0u;
            r4_1->word_34 = 0;
            *frame.at<u32>(0) = 4;
            *frame.at<u32>(4) = 0;
            call_0014031c(r4_1.addr(), 0x130u, 0x94a940u, 0x1300u);  // (from the original)
            call_0012f154(r4_1.addr() + 0x30u);  // (from the original)
        }
    }
    *global_00974f04 = 0xae0bc8;  // (from the original)
    u32 r0_4 = call_0013cc9c(0xae0bc8u);  // (from the original)
    call_001357ec(0xae0cb8u);  // (from the original)
    return r0_4;
}

}  // namespace d_0013dc74
GUEST_EXPORT_FRAMED(0x0013dc74, d_0013dc74::f_0013dc74, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013dd5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dd5c {


void f_0013dd5c(gptr<nn__fs__CTR__MPCore__detail__ContentRomFsArchive> arg0) {
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    arg0->word_30 = 0;
    arg0->word_34 = 0;
    arg0->word_38 = 0;
    arg0->word_3c = 0;
    arg0->word_40 = 0;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->word_4c = 0;
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->word_60 = 0;
    arg0->word_64 = 0;
    arg0->word_68 = 0;
    arg0->word_6c = 0;
    arg0->word_bc = 0;
    arg0->word_c0 = 0;
    arg0->word_c4 = 0;
    arg0->word_c8 = 0;
    arg0->word_cc = 0;
    arg0->word_dc = 0;
    arg0->word_e8 = 0;
    u32 r12_1 = ~0u;
    arg0->word_ec = 0;
    arg0->word_f0 = r12_1;
    arg0->word_f8 = 0;
    arg0->word_b8 = 0x8fb030;  // (from the original)
    arg0->word_fc = 0;
    arg0->word_100 = 0;
    arg0->word_104 = 0;
    arg0->word_108 = 0;
    arg0->word_118 = 0;
    arg0->word_124 = 0;
    arg0->word_128 = 0;
    arg0->word_12c = r12_1;
    arg0->word_c = 0;
    arg0->word_f4 = 0x8fb030;  // (from the original)
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_0 = 0x8faed0;  // (from the original)
    arg0->word_1c = 0;
}

}  // namespace d_0013dd5c
GUEST_EXPORT_FRAMED(0x0013dd5c, d_0013dd5c::f_0013dd5c, 0x10);  // pushes {r4} first, as the original

// f_0013dee0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013dee0 {

inline guest::global<u32, 0x00974ef8> global_00974ef8;  // (from the original)
inline constexpr guest::Function<0x0012f598, u32(u32, u32)> call_0012f598;  // (from the original)

u32 f_0013dee0() {
    if (*global_00974ef8 == 0) {
        call_0012f598(0xe0a046dbu, 0x13defcu);  // (from the original)
    }
    return *global_00974ef8;
}

}  // namespace d_0013dee0
GUEST_EXPORT_FRAMED(0x0013dee0, d_0013dee0::f_0013dee0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013df14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013df14 {

inline constexpr guest::Function<0x00100cfd, u32(u32, u32, u32, u32)> call_00100cfc;  // (from the original)
inline constexpr guest::Function<0x00100d0f, u32(u32, u32, u32, u32)> call_00100d0e;  // (from the original)
inline constexpr guest::Function<0x00139ffc, u32(u32, u32, u32, u32)> call_00139ffc;  // (from the original)
inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> call_002f7950;  // (from the original)

u32 f_0013df14(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x218);  // the original's stack frame
    u32 r7 = r0;
    u32 r9 = 0u;
    u32 r6 = r1;
    u32 r8 = r2;
    u32 r5 = frame.at(0).addr();
    *frame.at<u32>(0x210) = r9;  // (from the original)
    *frame.at<u32>(0x214) = r9;  // (from the original)
    call_00100cfc(frame.at(0x210).addr(), r1, r2, r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    u32 r10 = 0x105u;  // (from the original)
L_13df44:;
    u32 r0_2 = call_00100d0e(r6, r10, frame.at(0x210).addr(), r3);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = call_002f7950(r5, r6, r0_2, frame.at(0x210).addr());  // (from the original)
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r5 += 2u;
            r6 += r0_2;
            guest::preempt();
            goto L_13df44;
        }
    }
    *gptr<u16>(r5) = u16(r9);
    *gptr<u32>(r7 + 0xcu) = r9;  // (from the original)
    *gptr<u32>(r7 + 0x10u) = r9;  // (from the original)
    *gptr<u32>(r7 + 4u) = r9;
    *gptr<u32>(r7 + 8u) = r9;
    u32 r0_4 = call_00139ffc(r7, frame.at(0).addr(), r8, r3);
    return r0_4;
}

}  // namespace d_0013df14
GUEST_EXPORT_FRAMED(0x0013df14, d_0013df14::f_0013df14, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0013e164: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e164 {


u32 f_0013e164(u32 r0, u32 r1) {
    if (s32(r0) >= 0x20) {  // (from the original)
        return r0 - 0x20u;  // (from the original)
    }
    u32 res_1 = r0 - 0x18u;  // (from the original)
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r0 ^ 0x18u) & (r0 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        r1 = 0x5109d500u;  // (from the original)
    }
    if (nf_1 != vf_1) {
        r1 = 0x6c8da500u;  // (from the original)
    }
    if (nf_1 == vf_1) {
        r0 -= 0x18u;  // (from the original)
    }
    return r0 + r1;
}

}  // namespace d_0013e164
GUEST_EXPORT(0x0013e164, d_0013e164::f_0013e164);

// f_0013e258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e258 {


u32 f_0013e258(u32 r0) {
    if (r0 < 0xaf9000u) {  // (from the original)
        return r0;
    }
    return r0 + 0x7507000u;  // (from the original)
}

}  // namespace d_0013e258
GUEST_EXPORT(0x0013e258, d_0013e258::f_0013e258);

// f_0013e274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e274 {

struct __attribute__((packed)) Local_0013e274_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013e274_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0013e274_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013e274_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013e274_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013e274_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0013e274_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013e274_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_5, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0013e274_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0013e274_ea_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0013e274_ea_6, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0013e274_r0_6 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u8 byte_8;
};
GUEST_OFFSET(Local_0013e274_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013e274_r0_6, byte_8, 0x8);  // (from the original)

inline guest::global<u8, 0x0097e038> global_0097e038;  // (from the original)
inline constexpr guest::Function<0x00134c80, u32(u32, u32, u32, u32)> call_00134c80;  // (from the original)
inline constexpr guest::Function<0x0013fff8, u32(u32, u32, u32, u32)> call_0013fff8;  // (from the original)
inline constexpr guest::Function<0x00140694, u32(u32, u32, u32, u32)> call_00140694;  // (from the original)

void f_0013e274(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x50);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0013e274_r0_6> r0_6 = gptr<Local_0013e274_r0_6>(0u);
    u32 r0_7 = 0;
    gptr<Local_0013e274_ea_6> ea_6 = gptr<Local_0013e274_ea_6>(0u);
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r1_1 = *global_0097e038;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        return;
    }
    gptr<Local_0013e274_ea_1> ea_1 = gptr<Local_0013e274_ea_1>(frame.at(0x44).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    call_00140694(frame.at(0x20).addr(), r0, 0x80u, r3);  // (from the original)
    u32 r0_3 = call_0013fff8(frame.at(0xc).addr(), frame.at(0x20).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_3 = r0_3;
    r5 = 0u;
    if (r0_3 >> 0x1f != (r0_3 & (r0_3 ^ r0_3)) >> 0x1f) {  // (from the original)
        ea_6 = gptr<Local_0013e274_ea_6>(frame.at(0x44).addr());  // (from the original)
        r4_1 = ea_6->word_0;
        r5_1 = ea_6->word_4;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    u32 r0_4 = *frame.at<u32>(0xc);  // (from the original)
    if (*gptr<u32>(r0_4 + 0x14u) == 0) {  // (from the original)
        ea_6 = gptr<Local_0013e274_ea_6>(frame.at(0x44).addr());  // (from the original)
        r4_1 = ea_6->word_0;
        r5_1 = ea_6->word_4;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    gptr<Local_0013e274_ea_3> ea_3 = gptr<Local_0013e274_ea_3>(*gptr<u32>(r0_4 + 0x10u) + r0_4);  // (from the original)
    u32 r12_1 = ea_3->word_4;
    u32 r2 = ea_3->word_0 + r0_4;
    if (s32(r12_1) <= s32(r1_3)) {
        ea_6 = gptr<Local_0013e274_ea_6>(frame.at(0x44).addr());  // (from the original)
        r4_1 = ea_6->word_0;
        r5_1 = ea_6->word_4;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    gptr<Local_0013e274_ea_4> ea_4 = gptr<Local_0013e274_ea_4>(*gptr<u32>(r2 + (r1_3 << 3)) + r0_4);
    r1_3 = ea_4->word_4;
    u32 r0_5 = r0_4 + ea_4->word_0;
    if (r0_5 == 0) {
        ea_6 = gptr<Local_0013e274_ea_6>(frame.at(0x44).addr());  // (from the original)
        r4_1 = ea_6->word_0;
        r5_1 = ea_6->word_4;
        guest::cpu()->r[1] = r1_3;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        return;
    }
    gptr<Local_0013e274_ea_5> ea_5 = gptr<Local_0013e274_ea_5>(frame.at(0x10).addr());  // (from the original)
    ea_5->word_0 = r0_5;
    ea_5->word_4 = r1_3 + 1u;
    ea_5->word_8 = r0;
    u32 r1 = 0u;
    r3 = *gptr<u32>(r0 + 0xccu);  // (from the original)
    u32 zf_1 = r3 == 0;
    if (!zf_1 && (r3 >> 0x1f) == 0u) {  // (from the original)
        u32 r12 = *gptr<u32>(r0 + 0xc8u);  // (from the original)
        do {
            r0_6 = gptr<Local_0013e274_r0_6>(r12 + (r1 + (r1 << 1) << 2));
            if (r0_6->byte_8 == 2u) {
                goto L_13e34c;
            }
            r1 += 1u;
            guest::preempt();
        } while (s32(r3) > s32(r1));
    }
L_13e334:;
    r0_7 = frame.at(0x10).addr();  // (from the original)
    *frame.at<u32>(0x1c) = r5;  // (from the original)
    call_00134c80(r0_7, 0x10u, r2, r3);  // (from the original)
    r1_3 = guest::cpu()->r[1];
    ea_6 = gptr<Local_0013e274_ea_6>(frame.at(0x44).addr());  // (from the original)
    r4_1 = ea_6->word_0;
    r5_1 = ea_6->word_4;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    return;
L_13e34c:;
    r5 = r0_6->word_0;
    guest::preempt();
    goto L_13e334;
}

}  // namespace d_0013e274
GUEST_EXPORT(0x0013e274, d_0013e274::f_0013e274);

// f_0013e560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e560 {

inline constexpr guest::Function<0x0013e580, u32(u32, u32, u32, u32)> call_0013e580;  // (from the original)

u32 f_0013e560(u32 r0) {
    call_0013e580(r0 + 0x18u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = *gptr<u32>(r0 + 0x54u) - 1u;  // (from the original)
    *gptr<u32>(r0 + 0x54u) = r0_2;  // (from the original)
    return r0_2;
}

}  // namespace d_0013e560
GUEST_EXPORT_FRAMED(0x0013e560, d_0013e560::f_0013e560, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013e75c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013e75c {

struct __attribute__((packed)) Object_0013e75c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u8 unknown_18[0xc];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Object_0013e75c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013e75c_0, word_24, 0x24);  // (from the original)

inline guest::global<u32, 0x00981890> global_00981890;  // (from the original)
inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;  // (from the original)
inline constexpr guest::Function<0x001432c8, u32(u32, u32)> call_001432c8;  // (from the original)

void f_0013e75c(gptr<Object_0013e75c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = *frame.at<u32>(0x10) & 0xffu;  // (from the original)
    arg0->word_24 = r0_1;
    u32 zf_1 = (r0_1 & 2u) == 0;
    arg0->word_14 = r1;
    arg0->word_c = r2;
    arg0->word_10 = r3;
    if (!zf_1) {
        call_0013fac4(r2, r3 - r2, *global_00981890);
    }
    u32 r5_1 = 0xaf51c0u;  // (from the original)
    u32 r0_2 = call_001432c8(r5_1, arg0.addr());
    if (r0_2 != 0) {
        r5_1 = r0_2 + 0x18u;  // (from the original)
    }
    frame.release();
    call_0013e7d8(r5_1, r5_1 + 4u, arg0.addr() + 4u);
    return;
}

}  // namespace d_0013e75c
GUEST_EXPORT(0x0013e75c, d_0013e75c::f_0013e75c);

// f_0013ea18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea18 {

struct __attribute__((packed)) Object_0013ea18_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea18_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x0097511c> global_0097511c;  // (from the original)
inline guest::global<u32, 0x00975120> global_00975120;  // (from the original)

void f_0013ea18(gptr<Object_0013ea18_0> arg0) {
    u32 r0_1 = arg0->word_0;
    u32 r2_1 = *gptr<u32>(r0_1);
    if (r2_1 == 0x80000000u) {  // (from the original)
        u32 r1_1 = *global_0097511c;
        guest::call_address<u32>(r1_1, r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        return;
    }
    if (r2_1 != 0x40000000u) {  // (from the original)
        return;
    }
    u32 r1_2 = *global_00975120;
    guest::call_address<u32>(r1_2, r0_1, r1_2, r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0013ea18
GUEST_EXPORT(0x0013ea18, d_0013ea18::f_0013ea18);

// f_0013ea4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ea4c {

struct __attribute__((packed)) Object_0013ea4c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013ea4c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00140914, u32(u32, u32, u32, u32)> call_00140914;  // (from the original)

void f_0013ea4c(gptr<Object_0013ea4c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 ea_1 = arg0->word_0 + 0x28u;  // (from the original)
    u32 r1_1 = *gptr<u32>(ea_1);
    u32 r0_1 = r1_1 == 0 ? 0u : ea_1 + r1_1;
    *frame.at<u32>(0) = r0_1;
    if (r0_1 != 0) {
        call_00140914(frame.at(0).addr(), r1_1, guest::cpu()->r[2], r3);
    }
}

}  // namespace d_0013ea4c
GUEST_EXPORT_FRAMED(0x0013ea4c, d_0013ea4c::f_0013ea4c, 0x4000);  // pushes {lr} first, as the original

// f_0013ebec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ebec {

struct __attribute__((packed)) Object_0013ebec_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_0013ebec_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ebec_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013ebec_0, byte_c, 0xc);  // (from the original)


void f_0013ebec(gptr<Object_0013ebec_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->byte_c;
    u32 zf_1 = r3_1 == 0;
    if (!zf_1) {
        r3_1 = arg0->word_8;
        zf_1 = r3_1 == 0;
    }
    if (zf_1) {
        return;
    }
    if (*gptr<u32>(arg0->word_4) > r1) {
        *gptr<u32>(r3_1 + (r1 << 2)) = r2;
        return;
    }
}

}  // namespace d_0013ebec
GUEST_EXPORT(0x0013ebec, d_0013ebec::f_0013ebec);

// f_0013ec20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ec20 {

struct __attribute__((packed)) Object_0013ec20_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 byte_c;
};
GUEST_OFFSET(Object_0013ec20_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_0013ec20_0, byte_c, 0xc);  // (from the original)

struct __attribute__((packed)) Object_0013ec20_1 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0013ec20_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013ec20_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f3cc, u32(u32)> call_0013f3cc;  // (from the original)
inline constexpr guest::Function<0x001416bc, u32(u32, u32)> call_001416bc;  // (from the original)

void f_0013ec20(gptr<Object_0013ec20_0> arg0, gptr<Object_0013ec20_1> arg1, u32 r2) {
    u32 r1 = arg1.addr();
    u32 r5_1 = r1;
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->byte_c = 0;
    if (r1 != 0) {
        r1 = 0x52415743u;  // (from the original)
        if (arg1->word_0 == r1 && arg1->word_8 == 0x1000000u) {  // (from the original)
            arg0->word_0 = r5_1;
            u32 r0_1 = call_0013f3cc(r5_1);
            r1 = r0_1 + 8u;
            *gptr<u32>(arg0.addr() + 4u) = r1;
            *gptr<u8>(arg0.addr() + 0xcu) = 1;  // (from the original)
            *gptr<u32>(arg0.addr() + 8u) = 0;
            if (r2 != 0 && 1u != 0) {
                u32 r6_1 = *gptr<u32>(arg0.addr());
                u32 r0_2 = call_001416bc(r6_1, r1);
                r1 = 0x54415743u;  // (from the original)
                if (*gptr<u32>(r6_1 + r0_2) == r1) {
                    u32 r0_4 = call_001416bc(*gptr<u32>(arg0.addr()), r1);
                    r1 = guest::cpu()->r[1];
                    *gptr<u32>(arg0.addr() + 8u) = r0_4 + 4u + r5_1;
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0013ec20
GUEST_EXPORT_FRAMED(0x0013ec20, d_0013ec20::f_0013ec20, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0013edb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013edb4 {

struct __attribute__((packed)) Object_0013edb4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0013edb4_0, word_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0013edb4_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013edb4_ea_7, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013edb4_ea_7, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x0013e7d8, u32(u32, u32, u32)> call_0013e7d8;  // (from the original)
inline constexpr guest::Function<0x0013e92c, u32(u32, u32, u32)> call_0013e92c;  // (from the original)
inline constexpr guest::Function<0x0014087c, u32(u32, u32, u32)> call_0014087c;  // (from the original)

u32 f_0013edb4(gptr<Object_0013edb4_0> arg0) {
    u32 r0_2 = call_0013e92c(arg0->word_0, 0x18u, 4u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *gptr<u32>(r0_2) = 0;
        *gptr<u32>(r0_2 + 4u) = 0;
        *gptr<u32>(r0_2 + 8u) = 0;
        *gptr<u32>(r0_2 + 0xcu) = 0;  // (from the original)
        *gptr<u32>(r0_2 + 0x10u) = 0;  // (from the original)
        *gptr<u32>(r0_2 + 0x14u) = 0;  // (from the original)
        *gptr<u32>(r0_2) = 0;
        u32 ea_6 = r0_2 + 4u;
        *gptr<u32>(ea_6) = 0;
        u32 r0_3 = ea_6 + 4u;
        u32 r2_1 = r0_3 + 4u;
        gptr<Local_0013edb4_ea_7> ea_7 = gptr<Local_0013edb4_ea_7>(r0_2 + 8u);
        ea_7->word_0 = 0;
        ea_7->word_4 = r2_1;
        *gptr<u32>(r0_3 + 8u) = r2_1;
        *gptr<u8>(r0_2 + 0x14u) = 1;  // (from the original)
        call_0014087c(r0_2 + 8u, *gptr<u32>(r0_2 + 0xcu), r0_2 + 0xcu);  // (from the original)
        call_0013e7d8(arg0.addr() + 4u, arg0.addr() + 8u, r0_2);
        r1_1 = guest::cpu()->r[1];
        r0_2 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0013edb4
GUEST_EXPORT_FRAMED(0x0013edb4, d_0013edb4::f_0013edb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013ee40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ee40 {

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> call_00135748;  // (from the original)
inline constexpr guest::Function<0x001357ec, u32(u32, u32, u32, u32)> call_001357ec;  // (from the original)
inline constexpr guest::Function<0x00140f54, u32(u32, u32)> call_00140f54;  // (from the original)
inline constexpr guest::Function<0x00140fac, u32(u32, u32)> call_00140fac;  // (from the original)
inline constexpr guest::Function<0x001411ec, u32(u32, u32)> call_001411ec;  // (from the original)
inline constexpr guest::Function<0x00141490, u32(u32, u32)> call_00141490;  // (from the original)
inline constexpr guest::Function<0x001414b4, u32(u32, u32)> call_001414b4;  // (from the original)

void f_0013ee40(u32 r0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r5_1 = r0 + 4u;
    call_00135748(r5_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (*gptr<u32>(r0 + 0x10u) != 0) {  // (from the original)
        u32 r6_1 = r0 + 4u;
        call_00135748(r6_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_00141490(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
        u32 r0_2 = call_001357ec(r6_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_3 = call_00140f54(r0_2, guest::cpu()->r[1]);
        u32 r0_4 = call_00140fac(r0_3, 1u);
        call_001411ec(r0_3, r0_4);
        call_001414b4(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
        frame.release();
        call_001357ec(r5_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    frame.release();
    call_001357ec(r5_1, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_0013ee40
GUEST_EXPORT(0x0013ee40, d_0013ee40::f_0013ee40);

// f_0013ef18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ef18 {

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

void f_0013ef18(gptr<SoundMelodyPlayerOneSeqTimeTone> arg0) {
    u32 r0_1 = arg0->word_8;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = 0u;
        return;
    }
    call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0013ef18
GUEST_EXPORT(0x0013ef18, d_0013ef18::f_0013ef18);

// f_0013efb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013efb4 {

inline guest::global<u32, 0x00975334> global_00975334;  // (from the original)
inline constexpr guest::Function<0x00141650, u32(u32, u32)> call_00141650;  // (from the original)

u32 f_0013efb4(gptr<sead__IDisposer> arg0) {
    arg0->word_0 = 0x905fec;  // (from the original)
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = *global_00975334;
    if (r0_1 != r1_1) {
        if (r0_1 != 0) {
            call_00141650(r0_1, arg0.addr());
            r1_1 = guest::cpu()->r[1];
        }
        arg0->word_4 = *global_00975334;
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0013efb4
GUEST_EXPORT_FRAMED(0x0013efb4, d_0013efb4::f_0013efb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f398 {

struct __attribute__((packed)) Object_0013f398_0 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(Object_0013f398_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013f398_0, half_20, 0x20);  // (from the original)


u32 f_0013f398(gptr<Object_0013f398_0> arg0) {
    if (arg0->half_14 == 0x6801u) {  // (from the original)
        u32 r1_2 = *gptr<u32>((arg0.addr() + 0x14u) + 4u);  // (from the original)
        guest::cpu()->r[1] = r1_2;
        return arg0.addr() + r1_2;
    }
    u32 r1_4 = *gptr<u32>((arg0->half_20 == 0x6801u ? arg0.addr() + 0x20u : 0u) + 4u);  // (from the original)
    guest::cpu()->r[1] = r1_4;
    return arg0.addr() + r1_4;
}

}  // namespace d_0013f398
GUEST_EXPORT(0x0013f398, d_0013f398::f_0013f398);

// f_0013f3cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f3cc {

struct __attribute__((packed)) Object_0013f3cc_0 {
    u8 unknown_0[0x14];  // (not used here)
    u16 half_14;
    u8 unknown_16[0xa];  // (not used here)
    u16 half_20;
};
GUEST_OFFSET(Object_0013f3cc_0, half_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_0013f3cc_0, half_20, 0x20);  // (from the original)


u32 f_0013f3cc(gptr<Object_0013f3cc_0> arg0) {
    if (arg0->half_14 == 0x6800u) {  // (from the original)
        return arg0.addr() + *gptr<u32>((arg0.addr() + 0x14u) + 4u);  // (from the original)
    }
    return arg0.addr() + *gptr<u32>((arg0->half_20 == 0x6800u ? arg0.addr() + 0x20u : 0u) + 4u);  // (from the original)
}

}  // namespace d_0013f3cc
GUEST_EXPORT(0x0013f3cc, d_0013f3cc::f_0013f3cc);

// f_0013f5e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f5e8 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f5e8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 8u, frame.at(0).addr(), 0u);
    u32 r0_3 = r0_2 == 0 ? 0x40u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0013f5e8
GUEST_EXPORT_FRAMED(0x0013f5e8, d_0013f5e8::f_0013f5e8, 0x4000);  // pushes {lr} first, as the original

// f_0013f610: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f610 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f610(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 8u, frame.at(0).addr(), 0u);
    if (r0_2 == 0) {
        return r0_2;
    }
    return *frame.at<u32>(0) >> 8u & 0xffu;  // (from the original)
}

}  // namespace d_0013f610
GUEST_EXPORT_FRAMED(0x0013f610, d_0013f610::f_0013f610, 0x4000);  // pushes {lr} first, as the original

// f_0013f69c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f69c {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f69c(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 0xcu, frame.at(0).addr(), 0u);  // (from the original)
    if (r0_2 != 0) {
        r0_2 = *frame.at<u32>(0);
    }
    return r0_2;
}

}  // namespace d_0013f69c
GUEST_EXPORT_FRAMED(0x0013f69c, d_0013f69c::f_0013f69c, 0x4000);  // pushes {lr} first, as the original

// f_0013f6bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6bc {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f6bc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 0xcu, frame.at(0).addr(), 1u);  // (from the original)
    u32 r0_3 = r0_2 == 0 ? 0x40u : *frame.at<u32>(0) & 0xffu;  // (from the original)
    return r0_3;
}

}  // namespace d_0013f6bc
GUEST_EXPORT_FRAMED(0x0013f6bc, d_0013f6bc::f_0013f6bc, 0x4000);  // pushes {lr} first, as the original

// f_0013f6e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f6e4 {

inline constexpr guest::Function<0x00141a9c, u32(u32, u32, u32)> call_00141a9c;  // (from the original)

u32 f_0013f6e4(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_2 = call_00141a9c(r0 + 0xcu, frame.at(0).addr(), 1u);  // (from the original)
    if (r0_2 == 0) {
        return 1u;
    }
    u32 r0_3 = *frame.at<u32>(0) >> 8u & 0xffu;  // (from the original)
    if (r0_3 == 0) {
        return r0_3;
    }
    return 1u;
}

}  // namespace d_0013f6e4
GUEST_EXPORT_FRAMED(0x0013f6e4, d_0013f6e4::f_0013f6e4, 0x4000);  // pushes {lr} first, as the original

// f_0013f718: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f718 {

struct __attribute__((packed)) Object_0013f718_0 {
    u8 unknown_0[0xc];  // (not used here)
    u16 half_c;
};
GUEST_OFFSET(Object_0013f718_0, half_c, 0xc);  // (from the original)


u32 f_0013f718(gptr<Object_0013f718_0> arg0) {
    u32 r0_1 = u32(arg0->half_c) - 0x2201u;  // (from the original)
    if (r0_1 == 0) {
        return 2u;
    }
    if (r0_1 == 1u) {
        return 3u;
    }
    return r0_1 == 2u ? 1u : 0u;
}

}  // namespace d_0013f718
GUEST_EXPORT(0x0013f718, d_0013f718::f_0013f718);

// f_0013f7b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7b8 {

struct __attribute__((packed)) Object_0013f7b8_0 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u8 byte_c;
};
GUEST_OFFSET(Object_0013f7b8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0013f7b8_0, byte_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x001416bc, u32(u32)> call_001416bc;  // (from the original)

u32 f_0013f7b8(gptr<Object_0013f7b8_0> arg0) {
    u32 r1_1 = arg0->byte_c;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r4_1 = arg0->word_0;
    u32 r0_1 = call_001416bc(r4_1);
    if (*gptr<u32>(r4_1 + r0_1) == 0x54415743u) {  // (from the original)
        guest::cpu()->r[1] = 0x54415743u;  // (from the original)
        return 1u;
    }
    guest::cpu()->r[1] = 0x54415743u;  // (from the original)
    return 0u;
}

}  // namespace d_0013f7b8
GUEST_EXPORT_FRAMED(0x0013f7b8, d_0013f7b8::f_0013f7b8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f7f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f7f4 {

struct __attribute__((packed)) Object_0013f7f4_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f7f4_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x001416ec, u32(u32, u32)> call_001416ec;  // (from the original)

u32 f_0013f7f4(gptr<Object_0013f7f4_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = call_001416ec(arg0->word_3c, guest::cpu()->r[1]);
    if (r0_2 == 0) {
        return r0_2;
    }
    *gptr<u32>(r2) = *gptr<u32>(r0_2);
    return 1u;
}

}  // namespace d_0013f7f4
GUEST_EXPORT_FRAMED(0x0013f7f4, d_0013f7f4::f_0013f7f4, 0x4010);  // pushes {r4, lr} first, as the original

// f_0013f81c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f81c {

struct __attribute__((packed)) Object_0013f81c_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f81c_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x00141728, u32(u32, u32, u32, u32)> call_00141728;  // (from the original)
inline constexpr guest::Function<0x001417fc, u32(u32, u32, u32)> call_001417fc;  // (from the original)
inline constexpr guest::Function<0x00141820, u32(u32, u32, u32)> call_00141820;  // (from the original)
inline constexpr guest::Function<0x0014184c, u32(u32, u32, u32)> call_0014184c;  // (from the original)
inline constexpr guest::Function<0x00141870, u32(u32, u32, u32)> call_00141870;  // (from the original)
inline constexpr guest::Function<0x0014189c, u32(u32, u32, u32)> call_0014189c;  // (from the original)

u32 f_0013f81c(gptr<Object_0013f81c_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = call_00141728(arg0->word_3c, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        *gptr<u32>(r2) = *gptr<u32>(r0_2);
        *gptr<u32>(r2 + 4u) = *gptr<u32>(r0_2 + 4u);
        *gptr<u32>(r2 + 0x10u) = u32(*gptr<u8>(r0_2 + 8u));  // (from the original)
        u32 r0_3 = call_001417fc(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        *gptr<u8>(r2 + 0x14u) = u8(r0_3);  // (from the original)
        u32 r0_4 = call_00141820(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        *gptr<u8>(r2 + 0x15u) = u8(r0_4);  // (from the original)
        u32 r0_5 = call_0014189c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
        u32 r2_4 = guest::cpu()->r[2];
        *gptr<u32>(r2 + 0xcu) = r0_5;  // (from the original)
        u32 r0_6 = call_00141870(r0_2, guest::cpu()->r[1], r2_4);
        *gptr<u32>(r2 + 8u) = r0_6;
        u32 r0_7 = call_0014184c(r0_2, guest::cpu()->r[1], r2_4);
        *gptr<u8>(r2 + 0x16u) = u8(r0_7);  // (from the original)
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_0013f81c
GUEST_EXPORT_FRAMED(0x0013f81c, d_0013f81c::f_0013f81c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f890 {

struct __attribute__((packed)) Object_0013f890_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
};
GUEST_OFFSET(Object_0013f890_0, word_3c, 0x3c);  // (from the original)

inline constexpr guest::Function<0x001417a0, u32(u32, u32, u32, u32)> call_001417a0;  // (from the original)
inline constexpr guest::Function<0x001417dc, u32(u32, u32, u32)> call_001417dc;  // (from the original)

u32 f_0013f890(gptr<Object_0013f890_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0_2 = call_001417a0(arg0->word_3c, guest::cpu()->r[1], r2, guest::cpu()->r[3]);
    if (r0_2 != 0) {
        *gptr<u32>(r2) = *gptr<u32>(r0_2);
        u32 r0_3 = call_001417dc(r0_2, guest::cpu()->r[1], r2);
        *gptr<u32>(r2 + 4u) = r0_3;
        *gptr<u8>(r2 + 8u) = u8(u32(*gptr<u8>(r0_2 + 4u)));
        r0_2 = 1u;
    }
    return r0_2;
}

}  // namespace d_0013f890
GUEST_EXPORT_FRAMED(0x0013f890, d_0013f890::f_0013f890, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0013f8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f8cc {

struct __attribute__((packed)) Object_0013f8cc_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f8cc_0, half_10, 0x10);  // (from the original)


u32 f_0013f8cc(gptr<Object_0013f8cc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x7801u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f8ec:;
    if (*gptr<u16>(r2 + (r1 + (r1 << 1) << 2)) != r12) {
        goto L_13f920;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
L_13f920:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f8ec;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f8cc
GUEST_EXPORT_FRAMED(0x0013f8cc, d_0013f8cc::f_0013f8cc, 0x30);  // pushes {r4, r5} first, as the original

// f_0013f934: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f934 {

struct __attribute__((packed)) Object_0013f934_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f934_0, half_10, 0x10);  // (from the original)


u32 f_0013f934(gptr<Object_0013f934_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_1 = 0;
    u32 r12 = arg0->half_10;
    u32 r3 = r0 + 0x14u;  // (from the original)
    u32 r5 = r0;
    r0 = 0u;
    u32 r2 = 0x7800u;  // (from the original)
    u32 r1 = r0;
    if (r12 == 0 || r12 >> 0x1f != (r12 & (r12 ^ r12)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    do {
        if (*gptr<u16>(r3 + (r1 + (r1 << 1) << 2)) == r2) {
            u32 res_1 = r3 + (r1 + (r1 << 1) << 2);
            u32 zf_1 = res_1 == 0;
            u32 r1_1 = res_1;
            if (!zf_1) {
                r1_1 = *gptr<u32>(r1_1 + 4u);
                zf_1 = r1_1 == 0;
            }
            if (zf_1) {
                guest::cpu()->r[1] = r1_1;
                return r0;
            } else {
                r0_1 = r1_1 + r5;
            }
            guest::cpu()->r[1] = r1_1;
            return r0_1;
        }
        r1 += 1u;
        guest::preempt();
    } while (s32(r12) > s32(r1));
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_0013f934
GUEST_EXPORT_FRAMED(0x0013f934, d_0013f934::f_0013f934, 0x30);  // pushes {r4, r5} first, as the original

// f_0013f9a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013f9a0 {

struct __attribute__((packed)) Object_0013f9a0_0 {
    u8 unknown_0[0x10];  // (not used here)
    u16 half_10;
};
GUEST_OFFSET(Object_0013f9a0_0, half_10, 0x10);  // (from the original)


u32 f_0013f9a0(gptr<Object_0013f9a0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 zf_1 = 0;
    u32 r3 = arg0->half_10;
    u32 r12 = 0x7802u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = r0 + 0x14u;  // (from the original)
    u32 r1 = r5;
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r5;
    }
L_13f9c0:;
    if (*gptr<u16>(r2 + (r1 + (r1 << 1) << 2)) != r12) {
        goto L_13f9f4;
    }
    res_1 = r2 + (r1 + (r1 << 1) << 2);
    zf_1 = res_1 == 0;
    r1 = res_1;
    if (!zf_1) {
        r1 = *gptr<u32>(r1 + 4u);
        zf_1 = r1 == 0;
    }
    if (!zf_1) {
        r5 = r1 + r0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
L_13f9f4:;
    r1 += 1u;
    if (s32(r3) > s32(r1)) {
        guest::preempt();
        goto L_13f9c0;
    }
    guest::cpu()->r[1] = r1;
    return r5;
}

}  // namespace d_0013f9a0
GUEST_EXPORT_FRAMED(0x0013f9a0, d_0013f9a0::f_0013f9a0, 0x30);  // pushes {r4, r5} first, as the original

// f_0013fa08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fa08 {


void f_0013fa08(u32 r0) {
}

}  // namespace d_0013fa08
GUEST_EXPORT(0x0013fa08, d_0013fa08::f_0013fa08);

// f_0013fad4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fad4 {


void f_0013fad4() {
}

}  // namespace d_0013fad4
GUEST_EXPORT(0x0013fad4, d_0013fad4::f_0013fad4);

// f_0013fe18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fe18 {

inline constexpr guest::Function<0x0013dee0, u32(u32, u32, u32, u32)> call_0013dee0;  // (from the original)
inline constexpr guest::Function<0x001429f4, u32(u32, u32, u32, u32)> call_001429f4;  // (from the original)

u32 f_0013fe18(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_0013dee0(r0, r1, guest::cpu()->r[2], r3);
    *frame.at<u32>(0) = r0_1;
    u32 r0_3 = call_001429f4(frame.at(0).addr(), r0, guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_3;
}

}  // namespace d_0013fe18
GUEST_EXPORT_FRAMED(0x0013fe18, d_0013fe18::f_0013fe18, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0013fefc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013fefc {


u32 f_0013fefc(u32 r0, u32 r1) {
    u32 zf_1 = r0 == 0;
    if (!zf_1) {
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        return 0xe0e046bcu;  // (from the original)
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r1) + 0xcu);  // (from the original)
    // virtual function 3 of r1
    return guest::call_address<u32>(r3_1, r1, r0, r0, r3_1);
}

}  // namespace d_0013fefc
GUEST_EXPORT(0x0013fefc, d_0013fefc::f_0013fefc);

// f_0013ff94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0013ff94 {

struct __attribute__((packed)) Object_0013ff94_0 {
    u8 unknown_0[0xa0];  // (not used here)
    u32 word_a0;
    u8 unknown_a4[0x24];  // (not used here)
    u32 word_c8;
    u32 word_cc;
};
GUEST_OFFSET(Object_0013ff94_0, word_a0, 0xa0);  // (from the original)
GUEST_OFFSET(Object_0013ff94_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_0013ff94_0, word_cc, 0xcc);  // (from the original)

struct __attribute__((packed)) Local_0013ff94_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0013ff94_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0013ff94_r0_2, word_4, 0x4);  // (from the original)


u32 f_0013ff94(gptr<Object_0013ff94_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r1_1 = arg0->word_a0;
    u32 r3_1 = arg0->word_c8;
    u32 r0_1 = r1_1 & 0xfu;  // (from the original)
    u32 r1_2 = r1_1 >> 4;
    if (s32(arg0->word_cc) > s32(r0_1)) {
        gptr<Local_0013ff94_r0_2> r0_2 = gptr<Local_0013ff94_r0_2>(r3_1 + (r0_1 + (r0_1 << 1) << 2));
        if (r0_2->word_4 > r1_2) {
            u32 r3_2 = r0_2->word_0 + r1_2;
            if (r3_2 != 0) {
                frame.release();
                return guest::call_address<u32>(r3_2, r1, r2, r2, r3_2);
            }
        }
    }
    guest::cpu()->r[1] = r1_2;
    return 0xd8e12c04u;  // (from the original)
}

}  // namespace d_0013ff94
GUEST_EXPORT(0x0013ff94, d_0013ff94::f_0013ff94);
