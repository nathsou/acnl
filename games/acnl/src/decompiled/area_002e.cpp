// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_002e01ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e01ac {

struct __attribute__((packed)) Local_002e01ac_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e01ac_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e01ac_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x002e01e4> global_002e01e4;  // (from the original)
inline guest::global<u32, 0x00857bac> global_00857bac;  // (from the original)
inline guest::global<u32, 0x00857bb0> global_00857bb0;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;  // (from the original)

void f_002e01ac(u32 r0, float S0) {
    call_004b9b64(r0 + 0x238u, r0 + 0x3acu);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_002e01e4);
    guest::cpu()->s[0] = S0_1;
    call_005697e0(r0 + 0x3acu);  // (from the original)
    u32 r0_3 = *global_00857bac;
    u32 r1_2 = *global_00857bb0;
    gptr<Local_002e01ac_ea_1> ea_1 = gptr<Local_002e01ac_ea_1>(r0 + 0x50cu);  // (from the original)
    ea_1->word_0 = r0_3;
    ea_1->word_4 = r1_2;
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_002e01ac
GUEST_EXPORT_FRAMED(0x002e01ac, d_002e01ac::f_002e01ac, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e0248: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0248 {

struct __attribute__((packed)) Object_002e0248_0 {
    u8 unknown_0[0xc4];  // (not used here)
    u32 word_c4;
    u32 word_c8;
    u32 word_cc;
    u8 unknown_d0[0xa];  // (not used here)
    u8 byte_da;
};
GUEST_OFFSET(Object_002e0248_0, word_c4, 0xc4);  // (from the original)
GUEST_OFFSET(Object_002e0248_0, word_c8, 0xc8);  // (from the original)
GUEST_OFFSET(Object_002e0248_0, word_cc, 0xcc);  // (from the original)
GUEST_OFFSET(Object_002e0248_0, byte_da, 0xda);  // (from the original)


void f_002e0248(gptr<Object_002e0248_0> arg0, u32 r1) {
    arg0->word_c8 = r1;
    if (r1 != 0) {
        arg0->word_cc = 0x100038e;  // (from the original)
        arg0->byte_da = 1;
        guest::cpu()->r[1] = 0x100038eu;  // (from the original)
        return;
    }
    arg0->word_cc = 0x1000392;  // (from the original)
    arg0->word_c4 = 8;
    arg0->byte_da = 1;
    guest::cpu()->r[1] = 0x1000392u;  // (from the original)
    return;
}

}  // namespace d_002e0248
GUEST_EXPORT(0x002e0248, d_002e0248::f_002e0248);

// f_002e0288: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0288 {

struct __attribute__((packed)) Object_002e0288_0 {
    u8 unknown_0[0x500];  // (not used here)
    u32 word_500;
    u8 unknown_504[0x4];  // (not used here)
    u8 byte_508;
};
GUEST_OFFSET(Object_002e0288_0, word_500, 0x500);  // (from the original)
GUEST_OFFSET(Object_002e0288_0, byte_508, 0x508);  // (from the original)

struct __attribute__((packed)) Local_002e0288_r2_1 {
    u8 unknown_0[0xb7];  // (not used here)
    u8 byte_b7;
};
GUEST_OFFSET(Local_002e0288_r2_1, byte_b7, 0xb7);  // (from the original)


void f_002e0288(gptr<Object_002e0288_0> arg0, u32 r1) {
    gptr<Local_002e0288_r2_1> r2_1 = gptr<Local_002e0288_r2_1>(arg0->word_500);
    arg0->byte_508 = u8(r1);
    if (r2_1.addr() == 0) {
        return;
    }
    r2_1->byte_b7 = u8(u32(r2_1->byte_b7) & 0xfeu | r1);  // (from the original)
    return;
}

}  // namespace d_002e0288
GUEST_EXPORT(0x002e0288, d_002e0288::f_002e0288);

// f_002e0308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0308 {

struct __attribute__((packed)) Object_002e0308_0 {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(Object_002e0308_0, byte_516, 0x516);  // (from the original)

struct __attribute__((packed)) Local_002e0308_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002e0308_ea_2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_2, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002e0308_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_002e0308_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002e0308_ea_3, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)

u32 f_002e0308(gptr<Object_002e0308_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r1 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    gptr<Local_002e0308_ea_1> ea_1 = gptr<Local_002e0308_ea_1>(r13 - 0x18);  // (from the original)
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r13 -= 0x18;  // (from the original)
    u32 r0_1 = arg0->byte_516;
    if (r0_1 == 0) {
        u32 r0_2 = *global_0095decc;
        guest::cpu()->r[13] = r13;
        call_005ea8f8(r0_2, 0u, r2, r3);
        *gptr<u32>(r13) = 0;
        u32 r0_3 = *global_0095decc;
        guest::cpu()->r[13] = r13;
        call_005ea964(r0_3, r0 + 0x404u, r2, r1);  // (from the original)
        u32 r0_4 = *global_0095decc;
        gptr<Local_002e0308_ea_2> ea_2 = gptr<Local_002e0308_ea_2>(r13);
        r13 += 0x18;  // (from the original)
        u32 r4_1 = ea_2->word_4;
        u32 r5_1 = ea_2->word_8;
        u32 r6_1 = ea_2->word_c;
        u32 r7_1 = ea_2->word_10;
        r14 = ea_2->word_14;
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_1;
        guest::cpu()->r[6] = r6_1;
        guest::cpu()->r[7] = r7_1;
        return call_005ea8dc(r0_4, 0u);
    }
    gptr<Local_002e0308_ea_3> ea_3 = gptr<Local_002e0308_ea_3>(r13);
    r13 += 0x18;  // (from the original)
    u32 r4_2 = ea_3->word_4;
    u32 r5_2 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_2 = ea_3->word_10;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_1;
}

}  // namespace d_002e0308
GUEST_EXPORT(0x002e0308, d_002e0308::f_002e0308);

// f_002e037c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e037c {

struct __attribute__((packed)) Object_002e037c_0 {
    u8 unknown_0[0x258];  // (not used here)
    u32 word_258;
};
GUEST_OFFSET(Object_002e037c_0, word_258, 0x258);  // (from the original)

struct __attribute__((packed)) Local_002e037c_r4_1 {
    u8 unknown_0[0xd9];  // (not used here)
    u8 byte_d9;
    u8 unknown_da[0x17e];  // (not used here)
    u32 word_258;
    u8 unknown_25c[0x2a4];  // (not used here)
    u32 word_500;
};
GUEST_OFFSET(Local_002e037c_r4_1, byte_d9, 0xd9);  // (from the original)
GUEST_OFFSET(Local_002e037c_r4_1, word_258, 0x258);  // (from the original)
GUEST_OFFSET(Local_002e037c_r4_1, word_500, 0x500);  // (from the original)

inline constexpr guest::Function<0x004b6d74, u32(u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32)> call_004b6dc8;  // (from the original)

u32 f_002e037c(gptr<Object_002e037c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->word_258;
    gptr<Local_002e037c_r4_1> r4_1 = gptr<Local_002e037c_r4_1>(r0);
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    u32 r0_1 = *gptr<u32>(r1_1 + 0xcu);  // (from the original)
    if (r0_1 != 0) {
        call_004b6dc8(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    r4_1->byte_d9 = u8(r0);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    call_004b6d74(r1, r4_1->word_258);
    r1_1 = guest::cpu()->r[1];
    r0 = 1u;
    r4_1->word_500 = r1;
    r4_1->byte_d9 = u8(r0);
    return r0;
}

}  // namespace d_002e037c
GUEST_EXPORT_FRAMED(0x002e037c, d_002e037c::f_002e037c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e03cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e03cc {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002e03cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0_1 = call_00569dc4(r0, r1, r2, r3);
    *frame.at<u32>(4) = 0x2e0404;  // (from the original)
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_2 = call_0056a974(0x9ab084u, frame.at(0).addr(), *gptr<u32>(r0_1 + 4u), 0x80u);  // (from the original)
    return r0_2;
}

}  // namespace d_002e03cc
GUEST_EXPORT_FRAMED(0x002e03cc, d_002e03cc::f_002e03cc, 0x4000);  // pushes {lr} first, as the original

// f_002e0428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0428 {

struct __attribute__((packed)) Object_002e0428_0 {
    u8 unknown_0[0xd9];  // (not used here)
    u8 byte_d9;
    u8 unknown_da[0x43d];  // (not used here)
    u8 byte_517;
};
GUEST_OFFSET(Object_002e0428_0, byte_d9, 0xd9);  // (from the original)
GUEST_OFFSET(Object_002e0428_0, byte_517, 0x517);  // (from the original)

inline guest::global<u32, 0x002e0494> global_002e0494;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> call_005697e0;  // (from the original)

u32 f_002e0428(gptr<Object_002e0428_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1_3 = 0;
    float S0_3 = 0;
    u32 r5_1 = r1;
    u32 r0_1 = s32(s8(arg0->byte_517));
    if (r0_1 != r5_1) {
        arg0->byte_517 = u8(r5_1);
        call_004b9b64(r0 + 0x238u, r0 + 0x3d4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        float S0_1 = guest::cpu()->s[0];
        if (r5_1 != 0) {
            float S0_2 = std::bit_cast<float>(*global_002e0494);
            guest::cpu()->s[0] = S0_2;
            call_005697e0(r0 + 0x3d4u, r1_2);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        } else {
            guest::cpu()->s[0] = S0_1;
            call_00569508(r0 + 0x3d4u, r1_2);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        }
        guest::cpu()->s[0] = S0_3;
        call_00568c10(r0 + 0x238u, r1_3);  // (from the original)
        call_00569420(r0 + 0x238u, r0 + 0x3d4u);  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0_1 = r5_1 ^ 1u;
        arg0->byte_d9 = u8(r0_1);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0_1;
}

}  // namespace d_002e0428
GUEST_EXPORT_FRAMED(0x002e0428, d_002e0428::f_002e0428, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e086c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e086c {

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32)> call_00569508;  // (from the original)

void f_002e086c(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_004b9b64(r0 + 0x238u, r0 + 0x3acu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00569508(r0 + 0x3acu, guest::cpu()->r[1]);  // (from the original)
    call_00568c10(r0 + 0x238u, guest::cpu()->r[1]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    call_00569420(r0 + 0x238u, r0 + 0x3acu);  // (from the original)
    return;
}

}  // namespace d_002e086c
GUEST_EXPORT(0x002e086c, d_002e086c::f_002e086c);

// f_002e08c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e08c8 {

struct __attribute__((packed)) Object_002e08c8_0 {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(Object_002e08c8_0, byte_516, 0x516);  // (from the original)

inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;  // (from the original)

void f_002e08c8(gptr<Object_002e08c8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    if (u32(arg0->byte_516) == 0) {
        u32 r0_1 = r0 + 0x43cu;  // (from the original)
        call_005e2e50(r0_1, r0 + 0x404u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_005e2f94(r0_1, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    call_00568c10(r0 + 0x238u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002e08c8
GUEST_EXPORT(0x002e08c8, d_002e08c8::f_002e08c8);

// f_002e0908: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0908 {

struct __attribute__((packed)) Object_002e0908_0 {
    u8 unknown_0[0x516];  // (not used here)
    u8 byte_516;
};
GUEST_OFFSET(Object_002e0908_0, byte_516, 0x516);  // (from the original)

struct __attribute__((packed)) Local_002e0908_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e0908_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e0908_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x002e0988> global_002e0988;  // (from the original)
inline guest::global<u32, 0x00857ba4> global_00857ba4;  // (from the original)
inline guest::global<u32, 0x00857ba8> global_00857ba8;  // (from the original)
inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> call_002b6d20;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32)> call_005e2f94;  // (from the original)

void f_002e0908(gptr<Object_002e0908_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_516) == 0) {
        u32 r0_1 = r0 + 0x43cu;  // (from the original)
        call_005e2e50(r0_1, r0 + 0x404u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        call_005e2f94(r0_1, r1_2);
        S0 = guest::cpu()->s[0];
    }
    if (u32(*gptr<u8>((r0 + 0x500u) + 0x17u)) == 0) {  // (from the original)
        guest::cpu()->s[0] = S0;
        call_002b6d20(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
    }
    guest::cpu()->s[0] = S0;
    call_004b9b64(r0 + 0x238u, r0 + 0x384u);  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_002e0988);
    guest::cpu()->s[0] = S0_2;
    call_005697e0(r0 + 0x384u);  // (from the original)
    u32 r0_4 = *global_00857ba4;
    u32 r1_4 = *global_00857ba8;
    gptr<Local_002e0908_ea_1> ea_1 = gptr<Local_002e0908_ea_1>(r0 + 0x50cu);  // (from the original)
    ea_1->word_0 = r0_4;
    ea_1->word_4 = r1_4;
    return;
}

}  // namespace d_002e0908
GUEST_EXPORT_FRAMED(0x002e0908, d_002e0908::f_002e0908, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e0d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0d04 {

inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> call_002bedd8;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;  // (from the original)
inline constexpr guest::Function<0x0071d648, u32(u32, u32)> call_0071d648;  // (from the original)

u32 f_002e0d04(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r0_1 = call_005ca6fc(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r7 = r0_1;
    if (r0_1 != 0) {
        u32 r6 = 0u;
        *gptr<u8>(r5 + 0xa0u) = 0;  // (from the original)
        do {
            u32 r0_2 = call_002bedd8(r7, r6 & 0xffu);  // (from the original)
            u32 r8 = r0_2;
            u32 r4 = 0u;
            do {
                r0_1 = call_0071d648(r8, r4);
                r1_1 = *gptr<u8>(0x7dd6u + r0_1);  // (from the original)
                if ((r1_1 & 1u) == 0) {
                    goto L_2e0d74;
                }
                r0_1 = *gptr<u8>(r0_1 + 0x7dd7u);  // (from the original)
                if (r0_1 == 4u) {
                    goto L_2e0d74;
                }
                r0_1 = u32(*gptr<u8>(r5 + 0xa0u)) + 1u;  // (from the original)
                *gptr<u8>(r5 + 0xa0u) = u8(r0_1);  // (from the original)
L_2e0d74:;
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
            r6 += 1u;
            guest::preempt();
        } while (r6 < 3u);
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_002e0d04
GUEST_EXPORT_FRAMED(0x002e0d04, d_002e0d04::f_002e0d04, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002e173c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e173c {


void f_002e173c(u32 r0, u32 r1, u32 r2) {
    u32 r1_1 = 0;
    u32 r1_4 = 0;
    u32 r4 = r0 + (r1 + (r1 << 3) << 2) + 0x10u;  // (from the original)
    u32 r3 = *gptr<u32>(r4);
    u32 r12 = *gptr<u32>(r4 + 4);
    if (r3 != r12) {
        do {
            if (u32(*gptr<u8>(r3)) == r1 && u32(*gptr<u8>(r3 + 1u)) == r2) {
                u32 r0_1 = r12 - 4u;
                *gptr<u32>(r4 + 4u) = r0_1;
                if (r0_1 == r3) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                do {
                    r1_1 = *gptr<u32>(r3 + 4u);
                    u32 r0_2 = r3;
                    r3 += 4u;
                    *gptr<u32>(r0_2) = r1_1;
                    guest::preempt();
                } while (*gptr<u32>(r4 + 4u) != r3);
                guest::cpu()->r[1] = r1_1;
                return;
            }
            r3 += 4u;
            guest::preempt();
        } while (r3 != r12);
    }
    r0 += 0x7cu;  // (from the original)
    r3 = *gptr<u32>(r0);
    r12 = *gptr<u32>(r0 + 4);
    if (r3 == r12) {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        if (u32(*gptr<u8>(r3)) == r1 && u32(*gptr<u8>(r3 + 1u)) == r2) {
            u32 r1_2 = r12 - 4u;
            *gptr<u32>(r0 + 4u) = r1_2;
            if (r1_2 == r3) {
                guest::cpu()->r[1] = r1_2;
                return;
            }
            do {
                u32 r1_3 = *gptr<u32>(r3 + 4u);
                u32 r2_1 = r3;
                r3 += 4u;
                *gptr<u32>(r2_1) = r1_3;
                r1_4 = *gptr<u32>(r0 + 4u);
                guest::preempt();
            } while (r1_4 != r3);
            guest::cpu()->r[1] = r1_4;
            return;
        }
        r3 += 4u;
        guest::preempt();
    } while (r3 != r12);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e173c
GUEST_EXPORT_FRAMED(0x002e173c, d_002e173c::f_002e173c, 0x30);  // pushes {r4, r5} first, as the original

// f_002e1818: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1818 {

inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> call_002bedd8;  // (from the original)
inline constexpr guest::Function<0x002e0d94, u32(u32, u32, u32, u32)> call_002e0d94;  // (from the original)
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32)> call_005ca6fc;  // (from the original)
inline constexpr guest::Function<0x0071d648, u32(u32, u32)> call_0071d648;  // (from the original)

void f_002e1818(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r0_1 = call_002e0d94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_005ca6fc(r0_1, guest::cpu()->r[1]);
    u32 r1_2 = guest::cpu()->r[1];
    u32 r7 = r0_2;
    if (r0_2 != 0) {
        u32 r6 = 0u;
        *gptr<u8>(r5 + 0xa0u) = 0;  // (from the original)
        do {
            u32 r0_3 = call_002bedd8(r7, r6 & 0xffu);  // (from the original)
            u32 r8 = r0_3;
            u32 r4 = 0u;
            do {
                u32 r0_4 = call_0071d648(r8, r4);
                r1_2 = *gptr<u8>(0x7dd6u + r0_4);  // (from the original)
                if ((r1_2 & 1u) != 0 && u32(*gptr<u8>(r0_4 + 0x7dd7u)) != 4u) {  // (from the original)
                    *gptr<u8>(r5 + 0xa0u) = u8(u32(*gptr<u8>(r5 + 0xa0u)) + 1u);  // (from the original)
                }
                r4 += 1u;
                guest::preempt();
            } while (r4 < 0x10u);  // (from the original)
            r6 += 1u;
            guest::preempt();
        } while (r6 < 3u);
    }
    *gptr<u8>(r5 + 0xa1u) = 1;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return;
}

}  // namespace d_002e1818
GUEST_EXPORT_FRAMED(0x002e1818, d_002e1818::f_002e1818, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002e1ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1ba4 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1204, u32(u32, u32, u32, u32)> call_005f1204;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_002e1ba4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0xfu, r3);  // (from the original)
    u32 r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0_2) = r6;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_4 - 0xcu;  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x1eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    u32 r2 = 7u;
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    call_005f1204(*gptr<u32>(*global_0095decc + 0x14u), r7, 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x848720u, 0xe2u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2e50(r5 + 0x6d0u, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r5 + 0x6d0u);  // (from the original)
    *frame.at<u32>(8) = r6;
    return;
}

}  // namespace d_002e1ba4
GUEST_EXPORT_FRAMED(0x002e1ba4, d_002e1ba4::f_002e1ba4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002e1ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1ca4 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1274, u32(u32, u32, u32, u32)> call_005f1274;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_002e1ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x44);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r7 = r1;
    u32 r0_2 = call_003083bc(frame.at(8).addr(), frame.at(0x20).addr(), 0xfu, r3);  // (from the original)
    u32 r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0_2) = r6;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_4 - 0xcu;  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x1eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    u32 r2 = 7u;
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_005ea8f8(*global_0095decc, 0u, r2, r3_4);
    call_005f1274(*gptr<u32>(*global_0095decc + 0x14u), r7, 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x848720u, 0xe1u);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2e50(r5 + 0x6d0u, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r5 + 0x6d0u);  // (from the original)
    *frame.at<u32>(8) = r6;
    return;
}

}  // namespace d_002e1ca4
GUEST_EXPORT_FRAMED(0x002e1ca4, d_002e1ca4::f_002e1ca4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002e1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1da4 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002e18dc, u32(u32, u32, u32, u32)> call_002e18dc;  // (from the original)
inline constexpr guest::Function<0x002e1a00, u32(u32, u32, u32, u32)> call_002e1a00;  // (from the original)
inline constexpr guest::Function<0x002e1ba4, u32(u32, u32, u32, u32)> call_002e1ba4;  // (from the original)
inline constexpr guest::Function<0x002e1ca4, u32(u32, u32, u32, u32)> call_002e1ca4;  // (from the original)
inline constexpr guest::Function<0x002e21e8, u32(u32, u32, u32, u32)> call_002e21e8;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x00615e30, u32(u32, u32, u32, u32)> call_00615e30;  // (from the original)
inline constexpr guest::Function<0x00615f30, u32(u32, u32, u32, u32)> call_00615f30;  // (from the original)
inline constexpr guest::Function<0x00615ffc, u32(u32, u32, u32, u32)> call_00615ffc;  // (from the original)
inline constexpr guest::Function<0x0061666c, u32(u32, u32, u32, u32)> call_0061666c;  // (from the original)
inline constexpr guest::Function<0x007010f8, u32(u32, u32, u32, u32)> call_007010f8;  // (from the original)
inline constexpr guest::Function<0x007011e8, u32(u32, u32, u32, u32)> call_007011e8;  // (from the original)
inline constexpr guest::Function<0x0081d12c, u32(u32, u32, u32, u32)> call_0081d12c;  // (from the original)

void f_002e1da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x50);  // the original's stack frame
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_5 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r2_6 = 0;
    u32 r3_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r1_6 = 0;
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_9 = 0;
    u32 r2_8 = 0;
    u32 r3_8 = 0;
    u32 r1_7 = 0;
    u32 r0_10 = 0;
    u32 r1_8 = 0;
    u32 r2_9 = 0;
    u32 r3_9 = 0;
    u32 r0_11 = 0;
    u32 r3_10 = 0;
    u32 r1_9 = 0;
    u32 r0_12 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r1_10 = 0;
    u32 r2_11 = 0;
    u32 r3_12 = 0;
    u32 r1_11 = 0;
    u32 r1_12 = 0;
    u32 r2_12 = 0;
    u32 r3_13 = 0;
    u32 r0_13 = 0;
    u32 r2_13 = 0;
    u32 r3_14 = 0;
    u32 r0_14 = 0;
    u32 r2_14 = 0;
    u32 r3_15 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r1_13 = 0;
    u32 r2_15 = 0;
    u32 r3_16 = 0;
    u32 r0_17 = 0;
    u32 r2_16 = 0;
    u32 r3_17 = 0;
    u32 r1_14 = 0;
    u32 r0_18 = 0;
    u32 r1_15 = 0;
    u32 r2_17 = 0;
    u32 r3_18 = 0;
    u32 r0_19 = 0;
    u32 r3_19 = 0;
    u32 r1_16 = 0;
    u32 r0_20 = 0;
    u32 r2_18 = 0;
    u32 r3_20 = 0;
    u32 r1_17 = 0;
    u32 r2_19 = 0;
    u32 r3_21 = 0;
    u32 r1_18 = 0;
    u32 r1_19 = 0;
    u32 r2_20 = 0;
    u32 r3_22 = 0;
    u32 r0_21 = 0;
    u32 r2_21 = 0;
    u32 r3_23 = 0;
    u32 r0_1 = r0 + 0x794u;  // (from the original)
    u32 r0_2 = call_002fcaf4(r0_1, r1, r2, r3);
    if (r0_2 != 0) {
        return;
    }
    call_002e21e8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0x48) = 0;  // (from the original)
    u32 r0_3 = call_002fcb34(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_3 == 0x24u) {  // (from the original)
        goto L_2e1eb8;
    }
    r0_4 = call_002fcb34(r0_1, r1_3, r2_3, r3_3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_4 == 0x27u) {  // (from the original)
        goto L_2e1f68;
    }
    r0_5 = call_002fcb34(r0_1, r1_4, r2_4, r3_4);
    r1_5 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    if (r0_5 != 0x28u) {  // (from the original)
        return;
    }
    r0_6 = frame.at(8).addr();
    call_0081d12c(r0_6, r1_5, r2_5, r3_5);
    r2_6 = guest::cpu()->r[2];
    r3_6 = guest::cpu()->r[3];
    r0_7 = *global_0095decc;
    call_005ea8f8(r0_7, 0u, r2_6, r3_6);
    *frame.at<u32>(0) = 0;
    r0_8 = *global_0095decc;
    r1_6 = frame.at(8).addr();
    call_005ea964(r0_8, r1_6, 0x848720u, 0xdeu);  // (from the original)
    r2_7 = guest::cpu()->r[2];
    r3_7 = guest::cpu()->r[3];
    r0_9 = *global_0095decc;
    call_005ea8dc(r0_9, 0u, r2_7, r3_7);
    r2_8 = guest::cpu()->r[2];
    r3_8 = guest::cpu()->r[3];
    r1_7 = frame.at(8).addr();
    r0_10 = r0 + 0x2fcu;  // (from the original)
    call_005e2e50(r0_10, r1_7, r2_8, r3_8);
    r1_8 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_11 = r0 + 0x2fcu;  // (from the original)
    call_005e2f94(r0_11, r1_8, r2_9, r3_9);
    r3_10 = guest::cpu()->r[3];
    *frame.at<u32>(8) = 0x909ce8;  // (from the original)
    r1_9 = frame.at(0x48).addr();  // (from the original)
    r0_12 = frame.at(4).addr();
    call_00615ffc(r0_12, r1_9, r0_1, r3_10);
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r1_10 = *frame.at<u32>(4);
    call_002e1a00(r0, r1_10, r2_10, r3_11);
    r2_11 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r1_11 = *frame.at<u32>(0x48);  // (from the original)
    call_002e18dc(r0, r1_11, r2_11, r3_12);
    r1_12 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_13 = call_0061666c(r0_1, r1_12, r2_12, r3_13);
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    call_002e1ba4(r0, r0_13, r2_13, r3_14);
    return;
L_2e1eb8:;
    r0_14 = frame.at(8).addr();
    call_0081d12c(r0_14, r1_3, r2_3, r3_3);
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r0_15 = *global_0095decc;
    call_005ea8f8(r0_15, 0u, r2_14, r3_15);
    *frame.at<u32>(0) = 0;
    r0_16 = *global_0095decc;
    r1_13 = frame.at(8).addr();
    call_005ea964(r0_16, r1_13, 0x848720u, 0xdeu);  // (from the original)
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_17 = *global_0095decc;
    call_005ea8dc(r0_17, 0u, r2_15, r3_16);
    r2_16 = guest::cpu()->r[2];
    r3_17 = guest::cpu()->r[3];
    r1_14 = frame.at(8).addr();
    r0_18 = r0 + 0x2fcu;  // (from the original)
    call_005e2e50(r0_18, r1_14, r2_16, r3_17);
    r1_15 = guest::cpu()->r[1];
    r2_17 = guest::cpu()->r[2];
    r3_18 = guest::cpu()->r[3];
    r0_19 = r0 + 0x2fcu;  // (from the original)
    call_005e2f94(r0_19, r1_15, r2_17, r3_18);
    r3_19 = guest::cpu()->r[3];
    *frame.at<u32>(8) = 0x909ce8;  // (from the original)
    r1_16 = frame.at(0x48).addr();  // (from the original)
    r0_20 = frame.at(4).addr();
    call_007010f8(r0_20, r1_16, r0_1, r3_19);
    r2_18 = guest::cpu()->r[2];
    r3_20 = guest::cpu()->r[3];
    r1_17 = *frame.at<u32>(4);
    call_002e1a00(r0, r1_17, r2_18, r3_20);
    r2_19 = guest::cpu()->r[2];
    r3_21 = guest::cpu()->r[3];
    r1_18 = *frame.at<u32>(0x48);  // (from the original)
    call_002e18dc(r0, r1_18, r2_19, r3_21);
    r1_19 = guest::cpu()->r[1];
    r2_20 = guest::cpu()->r[2];
    r3_22 = guest::cpu()->r[3];
    r0_21 = call_007011e8(r0_1, r1_19, r2_20, r3_22);
    r2_21 = guest::cpu()->r[2];
    r3_23 = guest::cpu()->r[3];
    call_002e1ca4(r0, r0_21, r2_21, r3_23);
    return;
L_2e1f68:;
    call_0081d12c(frame.at(8).addr(), r1_4, r2_4, r3_4);
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    *frame.at<u32>(0) = 0;
    call_005ea964(*global_0095decc, frame.at(8).addr(), 0x848720u, 0xdfu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_005e2e50(r0 + 0x2fcu, frame.at(8).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r0 + 0x2fcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(8) = 0x909ce8;  // (from the original)
    call_00615e30(frame.at(4).addr(), frame.at(0x48).addr(), r0_1, guest::cpu()->r[3]);  // (from the original)
    call_002e1a00(r0, *frame.at<u32>(4), guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002e18dc(r0, *frame.at<u32>(0x48), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_29 = call_00615f30(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002e1ba4(r0, r0_29, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_002e1da4
GUEST_EXPORT_FRAMED(0x002e1da4, d_002e1da4::f_002e1da4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002e21e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e21e8 {

inline guest::global<u32, 0x0095decc> global_0095decc;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

void f_002e21e8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0xa8);  // the original's stack frame
    u32 res_1 = 0;
    u32 r3_4 = 0;
    u32 r5 = r0;
    u32 r0_2 = call_003083bc(frame.at(0x60).addr(), frame.at(0x78).addr(), 0x15u, r3);  // (from the original)
    u32 r6 = 0x909d20u;  // (from the original)
    *gptr<u32>(r0_2) = r6;
    u32 r0_4 = call_005f4bfc(r0_2 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_4 - 0xcu;  // (from the original)
    call_002f825c(r0_4 + 0xcu, 0x2au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1 = 0x8906ecu;  // (from the original)
    r0 = r4_1 + 0x18u;  // (from the original)
    *gptr<u16>(r4_1 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    u32 r2 = 0xau;  // (from the original)
    do {
        u32 r3_3 = *gptr<u16>(r1);
        res_1 = r2 - 1u;
        r2 = res_1;
        *gptr<u16>(r0 + 2u) = u16(r3_3);
        r3_4 = *gptr<u16>(r1);
        u32 ea_2 = r0 + 4u;
        *gptr<u16>(ea_2) = u16(r3_4);
        r0 = ea_2;
        guest::preempt();
    } while (res_1 != 0);
    call_002fe7f4(frame.at(4).addr(), r5 + 0x794u, 0u, r3_4);  // (from the original)
    call_005ea8f8(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe874(*gptr<u32>(*global_0095decc + 0x14u), frame.at(4).addr(), 0u, guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    call_005ea964(*global_0095decc, frame.at(0x60).addr(), 0x848720u, 0xdcu);  // (from the original)
    call_005ea8dc(*global_0095decc, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_11 = r5 + 0x484u;  // (from the original)
    call_005e2e50(r0_11, frame.at(0x60).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005e2f94(r0_11);
    *frame.at<u32>(4) = 0x909f18;  // (from the original)
    *frame.at<u32>(0x60) = r6;  // (from the original)
    guest::cpu()->r[1] = 0x909f18u;  // (from the original)
    return;
}

}  // namespace d_002e21e8
GUEST_EXPORT_FRAMED(0x002e21e8, d_002e21e8::f_002e21e8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e2974 {

inline guest::global<u32, 0x00848424> global_00848424;  // (from the original)
inline guest::global<u32, 0x00848428> global_00848428;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002e2974(gptr<ExplainBookContent> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    u32 r2_1 = *global_00848428;
    arg0->word_c = *global_00848424;
    arg0->word_10 = r2_1;
    arg0->word_14 = 0;
    arg0->byte_18 = 0;
    arg0->word_1c = 0;
    arg0->word_0 = 0x8f3674;  // (from the original)
    arg0->word_20 = 0;
    u32 r0_2 = call_00125e3c(r0 + 0x24u, 0x8f3674u, r2_1, r0 + 0xcu);  // (from the original)
    u32 r0_4 = call_00125aec(r0_2 + 0x14cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_00125aec(r0_4 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_00125aec(r0_6 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00125aec(r0_8 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_00125aec(r0_10 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_005e3128(r0_12 + 0x28u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_16 = call_005e3128(r0_14 + 0xc4u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_18 = call_005e3128(r0_16 + 0xc4u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_20 = call_005e3128(r0_18 + 0xc4u, 0x15u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_005e3128(r0_20 + 0xc4u, 0x1eu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_24 = call_005e3128(r0_22 + 0xc4u, 0x14u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r2_13 = guest::cpu()->r[2];
    u32 r0_26 = call_005e3128(r0_24 + 0xc4u, 0xfu, r2_13, guest::cpu()->r[3]);  // (from the original)
    u32 r0_28 = call_002fcbb0(r0_26 + 0xc4u, 0x7ffeu, r2_13, guest::cpu()->r[3]);  // (from the original)
    u32 r0_29 = r0_28 - 0x794u;  // (from the original)
    *gptr<u8>(r0_29 + 0x798u) = 0;  // (from the original)
    return r0_29;
}

}  // namespace d_002e2974
GUEST_EXPORT_FRAMED(0x002e2974, d_002e2974::f_002e2974, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e2d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e2d24 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_002e2d24(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_001323bc(r0);
    u32 r0_2 = call_00569e6c(r0_1, r0 + 0x4c4u, 1u);  // (from the original)
    u32 r0_3 = call_001323bc(r0_2);
    guest::cpu()->r[13] += 8u;
    call_00569e6c(r0_3, r0 + 0x610u, 0u);  // (from the original)
    return;
}

}  // namespace d_002e2d24
GUEST_EXPORT(0x002e2d24, d_002e2d24::f_002e2d24);

// f_002e326c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e326c {

inline constexpr guest::Function<0x002e2d54, u32(u32, u32, u32, u32)> call_002e2d54;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

void f_002e326c(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_002e2d54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00568c10(r0 + 0x4c4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    guest::cpu()->r[13] += 8u;
    call_00568c10(r0 + 0x610u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002e326c
GUEST_EXPORT(0x002e326c, d_002e326c::f_002e326c);

// f_002e35d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e35d0 {

struct __attribute__((packed)) Object_002e35d0_0 {
    u8 unknown_0[0x298];  // (not used here)
    u32 word_298;
};
GUEST_OFFSET(Object_002e35d0_0, word_298, 0x298);  // (from the original)

inline guest::global<u32, 0x002e363c> global_002e363c;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> call_005697e0;  // (from the original)

void f_002e35d0(gptr<Object_002e35d0_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r1_3 = 0;
    float S0_3 = 0;
    if (arg0->word_298 != 0) {
        call_004b9b64(r0 + 0x134u, r0 + 0x280u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        float S0_1 = guest::cpu()->s[0];
        if (r1 != 0) {
            float S0_2 = std::bit_cast<float>(*global_002e363c);
            guest::cpu()->s[0] = S0_2;
            call_005697e0(r0 + 0x280u, r1_2);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        } else {
            guest::cpu()->s[0] = S0_1;
            call_00569508(r0 + 0x280u, r1_2);  // (from the original)
            r1_3 = guest::cpu()->r[1];
            S0_3 = guest::cpu()->s[0];
        }
        guest::cpu()->s[0] = S0_3;
        call_00568c10(r0 + 0x134u, r1_3);  // (from the original)
        call_00569420(r0 + 0x134u, r0 + 0x280u);  // (from the original)
        S0 = guest::cpu()->s[0];
    }
    u32 r1_5 = r1 ^ 1u;
    *gptr<u8>(r0 + 0xd9u) = u8(r1 ^ 1u);  // (from the original)
    *gptr<u8>(r0 + 0x12du) = u8(r1_5);  // (from the original)
    guest::cpu()->r[1] = r1_5;
    guest::cpu()->s[0] = S0;
    return;
}

}  // namespace d_002e35d0
GUEST_EXPORT_FRAMED(0x002e35d0, d_002e35d0::f_002e35d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e38b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e38b4 {

struct __attribute__((packed)) Local_002e38b4_ea_1 {
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
GUEST_OFFSET(Local_002e38b4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_24, 0x24);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_1, word_28, 0x28);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_ea_5 {
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
GUEST_OFFSET(Local_002e38b4_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002e38b4_ea_5, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_r0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_r0_25 {
    u16 half_0;
    u8 unknown_2[0x2];  // (not used here)
    u8 byte_4;
    u8 byte_5;
};
GUEST_OFFSET(Local_002e38b4_r0_25, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_r0_25, byte_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e38b4_r0_25, byte_5, 0x5);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_r0_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_r0_6, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e38b4_r5_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e38b4_r5_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e38b4_r5_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x00201ff4, u32(u32, u32, u32, u32)> call_00201ff4;  // (from the original)
inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> call_0024e9d8;  // (from the original)
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> call_002eba64;  // (from the original)
inline constexpr guest::Function<0x002eba7c, u32(u32, u32)> call_002eba7c;  // (from the original)
inline constexpr guest::Function<0x002eba90, u32(u32, u32, u32, u32)> call_002eba90;  // (from the original)
inline constexpr guest::Function<0x002ebc04, u32(u32, u32, u32, u32)> call_002ebc04;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> call_002fcc14;  // (from the original)
inline constexpr guest::Function<0x0052eed0, u32(u32, u32, u32)> call_0052eed0;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006e4b30, u32(u32, u32, u32, u32)> call_006e4b30;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

void f_002e38b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x2f8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_18 = 0;
    gptr<Local_002e38b4_ea_1> ea_1 = gptr<Local_002e38b4_ea_1>(frame.at(0x2cc).addr());  // (from the original)
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
    gptr<Local_002e38b4_r0_1> r0_1 = gptr<Local_002e38b4_r0_1>(frame.at(0x2b8).addr());  // (from the original)
    r11 = r1;
    r0_1->word_0 = 3;
    r0_1->word_4 = 3;
    u32 r0_2 = call_0052f074(r0_1.addr(), 3u, 3u, r3);
    call_0052f200(frame.at(0x290).addr(), r0_2, r0_1.addr(), guest::cpu()->r[3]);  // (from the original)
    call_0074824c(frame.at(0x2a8).addr(), frame.at(0x290).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_002eba90(*frame.at<u32>(0x2cc), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r5 = *frame.at<u32>(0x2cc);  // (from the original)
    gptr<Local_002e38b4_r0_6> r0_6 = gptr<Local_002e38b4_r0_6>(frame.at(0x2c0).addr());  // (from the original)
    r0_6->word_0 = 3;
    r0_6->word_4 = 3;
    u32 r0_7 = call_0052f074(r0_6.addr(), 3u, 3u, guest::cpu()->r[3]);
    call_0052f200(frame.at(0x268).addr(), r0_7, r0_6.addr(), guest::cpu()->r[3]);  // (from the original)
    call_0074824c(frame.at(0x280).addr(), frame.at(0x268).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00748284(frame.at(0x258).addr(), frame.at(0x268).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_11 = frame.at(0x258).addr();  // (from the original)
    u32 r0_12 = call_007481ec(r0_11, frame.at(0x280).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        goto L_2e39e8;
    } else {
        r6 = 0x879cccu;  // (from the original)
    }
    do {
        u32 r0_13 = call_002ebc04(r5, *frame.at<u32>(0x260), *frame.at<u32>(0x264), r3);  // (from the original)
        u32 r0_14 = *gptr<u8>(*frame.at<u32>(0x260) + (r6 + (*frame.at<u32>(0x264) << 2)));  // (from the original)
        u32 r0_15 = call_00201ff4(r0_14, r11, guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u16>(r0_13) = u16(r0_15);
        call_0052f144(frame.at(0x258).addr(), r0_15, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r0_18 = call_007481ec(frame.at(0x258).addr(), frame.at(0x280).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0_18 != 0);
L_2e39e8:;
    r9 = 0u;
    r10 = frame.at(0).addr();
    do {
        r8 = 0u;
        do {
            u32 r0_20 = call_002ebc04(*frame.at<u32>(0x2cc), r8 + 1u, r9 + 1u, r3);  // (from the original)
            u32 r4_2 = *gptr<u16>(r0_20);
            u32 r0_22 = call_002eba64(*frame.at<u32>(0x2cc), r8, r9, guest::cpu()->r[3]);  // (from the original)
            *frame.at<u32>(0x274) = r0_22;  // (from the original)
            u32 r0_24 = call_006e4b30(frame.at(0).addr(), 0x258u, r4_2, guest::cpu()->r[3]);  // (from the original)
            u32 r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r5 = r0_24;
            r4 = 0u;
            if (r0_24 >= 0u && r0_24 != 0) {
                do {
                    gptr<Local_002e38b4_r0_25> r0_25 = gptr<Local_002e38b4_r0_25>(r10 + (r4 + (r4 << 1) << 1));
                    u32 r1_9 = r0_25->half_0;
                    u32 r6_1 = r0_25->byte_4;
                    u32 r7_2 = r0_25->byte_5;
                    call_002fcbb0(frame.at(0x270).addr(), r1_9, r2, r3);  // (from the original)
                    call_002fcc14(*frame.at<u32>(0x274), frame.at(0x270).addr(), r6_1, r7_2);  // (from the original)
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    r4 += 1u;
                    guest::preempt();
                } while (r5 > r4);
            }
            r8 += 1u;
            guest::preempt();
        } while (s32(r8) < 2);
        r9 += 1u;
        guest::preempt();
    } while (s32(r9) < 2);
    u32 r4_3 = *frame.at<u32>(0x2cc);  // (from the original)
    gptr<Local_002e38b4_ea_3> ea_3 = gptr<Local_002e38b4_ea_3>(frame.at(0x268).addr());  // (from the original)
    ea_3->word_0 = 1;
    ea_3->word_4 = 1;
    gptr<Local_002e38b4_ea_4> ea_4 = gptr<Local_002e38b4_ea_4>(frame.at(0x268).addr());  // (from the original)
    u32 r1_11 = ea_4->word_0;
    u32 r2_10 = ea_4->word_4;
    u32 r0_28 = call_002ebc04(r4_3, r1_11, r2_10, r3);
    u32 r0_29 = *gptr<u16>(r0_28);
    u32 r0_30 = call_0052f074(r0_29, r1_11, r2_10, r3);
    call_0052eed0(frame.at(0x260).addr(), frame.at(0x268).addr(), r0_30);  // (from the original)
    *frame.at<u32>(0x260) = *frame.at<u32>(0x260) + 0xfu;  // (from the original)
    *frame.at<u32>(0x264) = *frame.at<u32>(0x264) + 5u;  // (from the original)
    u32 r0_32 = call_002eba7c(r4_3, 0u);
    gptr<Local_002e38b4_r5_1> r5_1 = gptr<Local_002e38b4_r5_1>(frame.at(0x260).addr());  // (from the original)
    call_0024e9d8(r0_32, 0x69u, r5_1->word_0, r5_1->word_4);  // (from the original)
    u32 r0_33 = call_002eba7c(r4_3, 1u);
    call_0024e9d8(r0_33, 0x6au, r5_1->word_0 - 2u, r5_1->word_4);  // (from the original)
    u32 r0_34 = call_0055cb58(r11);
    *gptr<u8>(*frame.at<u32>(0x2cc)) = u8(u32(u64(r0_34) * 3u >> 0x20) & 0xffu);  // (from the original)
    u32 r0_35 = call_0055cb58(r11);
    u32 r1_13 = u32(u64(r0_35) * 3u >> 0x20) & 0xffu;  // (from the original)
    *gptr<u8>(*frame.at<u32>(0x2cc) + 1u) = u8(r1_13);  // (from the original)
    gptr<Local_002e38b4_ea_5> ea_5 = gptr<Local_002e38b4_ea_5>(frame.at(0x2d4).addr());  // (from the original)
    u32 r4_4 = ea_5->word_0;
    u32 r5_2 = ea_5->word_4;
    u32 r6_2 = ea_5->word_8;
    u32 r7_3 = ea_5->word_c;
    u32 r8_1 = ea_5->word_10;
    u32 r9_1 = ea_5->word_14;
    u32 r10_1 = ea_5->word_18;
    u32 r11_1 = ea_5->word_1c;
    guest::cpu()->r[1] = r1_13;
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_3;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return;
}

}  // namespace d_002e38b4
GUEST_EXPORT(0x002e38b4, d_002e38b4::f_002e38b4);

// f_002e43d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e43d0 {

struct __attribute__((packed)) Object_002e43d0_0 {
    u8 unknown_0[0x30];  // (not used here)
    u32 word_30;
};
GUEST_OFFSET(Object_002e43d0_0, word_30, 0x30);  // (from the original)

inline constexpr guest::Function<0x0051aa84, u32(u32, u32)> call_0051aa84;  // (from the original)
inline constexpr guest::Function<0x0051ad60, u32(u32, u32, u32, u32)> call_0051ad60;  // (from the original)
inline constexpr guest::Function<0x00746e90, u32(u32, u32)> call_00746e90;  // (from the original)
inline constexpr guest::Function<0x007475e0, u32(u32, u32)> call_007475e0;  // (from the original)

u32 f_002e43d0(gptr<Object_002e43d0_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r0_1 = arg0->word_30;
    if (r0_1 == 0) {
        goto L_2e4420;
    }
    r0_2 = call_007475e0(r0_1, r1);
    r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        call_0051aa84(0xa22020u, arg0->word_30);  // (from the original)
        arg0->word_30 = 0;
        goto L_2e4420;
    }
    if (arg0->word_30 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
L_2e4420:;
    r0_3 = call_00746e90(0xa22020u, r0 + 0x10u);  // (from the original)
    r1_1 = guest::cpu()->r[1];
    if (r0_3 != 0) {
        r0_3 = call_0051ad60(0xa22020u, r0 + 0x10u, r1, r2);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    arg0->word_30 = r0_3;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_002e43d0
GUEST_EXPORT_FRAMED(0x002e43d0, d_002e43d0::f_002e43d0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e5680: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5680 {

struct __attribute__((packed)) Object_002e5680_0 {
    u8 unknown_0[0x424];  // (not used here)
    u8 byte_424;
    u8 unknown_425[0x21];  // (not used here)
    u16 half_446;
    u8 unknown_448[0x34];  // (not used here)
    u32 word_47c;
    u8 unknown_480[0x4];  // (not used here)
    u32 word_484;
};
GUEST_OFFSET(Object_002e5680_0, byte_424, 0x424);  // (from the original)
GUEST_OFFSET(Object_002e5680_0, half_446, 0x446);  // (from the original)
GUEST_OFFSET(Object_002e5680_0, word_47c, 0x47c);  // (from the original)
GUEST_OFFSET(Object_002e5680_0, word_484, 0x484);  // (from the original)

struct __attribute__((packed)) Local_002e5680_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e5680_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e5680_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e5680_r2_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e5680_r2_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e5680_r2_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e5680_r5_1 {
    u8 unknown_0[0x46];  // (not used here)
    u16 half_46;
    u8 unknown_48[0x38];  // (not used here)
    u8 byte_80;
};
GUEST_OFFSET(Local_002e5680_r5_1, half_46, 0x46);  // (from the original)
GUEST_OFFSET(Local_002e5680_r5_1, byte_80, 0x80);  // (from the original)

inline guest::global<u8, 0x009500e0> global_009500e0;  // (from the original)
inline guest::global<u32, 0x009535d8> global_009535d8;  // (from the original)
inline constexpr guest::Function<0x002cf3b4, u32(u32, u32, u32, u32)> call_002cf3b4;  // (from the original)
inline constexpr guest::Function<0x00304640, u32(u32, u32, u32, u32)> call_00304640;  // (from the original)
inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> call_00304ca4;  // (from the original)
inline constexpr guest::Function<0x00304ce4, u32(u32, u32, u32, u32)> call_00304ce4;  // (from the original)
inline constexpr guest::Function<0x003302c8, u32(u32, u32, u32, u32)> call_003302c8;  // (from the original)
inline constexpr guest::Function<0x00545104, u32(u32, u32, u32, u32)> call_00545104;  // (from the original)
inline constexpr guest::Function<0x005ccfc4, u32(u32, u32, u32, u32)> call_005ccfc4;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)
inline constexpr guest::Function<0x00813c20, u32(u32, u32, u32)> call_00813c20;  // (from the original)

u32 f_002e5680(gptr<Object_002e5680_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x70);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r0_2 = 0;
    u32 r3_1 = 0;
    gptr<Local_002e5680_r2_1> r2_1 = gptr<Local_002e5680_r2_1>(0u);
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    gptr<Local_002e5680_r5_1> r5_1 = gptr<Local_002e5680_r5_1>(r0 + 0x400u);  // (from the original)
    u32 r0_1 = s32(s16(arg0->half_446));
    u32 r6_1 = 0u;
    if (r0_1 != 0) {
        if (r0_1 == 1u) {
            goto L_2e56f8;
        }
        if (r0_1 == 2u) {
            return 1u;
        }
        if (r0_1 == 3u && u32(arg0->byte_424) == 0) {
            goto L_2e5788;
        }
        return r6_1;
    }
    r0_2 = r0 + 0x450u;  // (from the original)
    call_005cd270(r0_2, r1, r2, r3);
    r3_1 = guest::cpu()->r[3];
    r2_1 = gptr<Local_002e5680_r2_1>(r0 + 0x458u);  // (from the original)
    r2_1->word_0 = 0x40010000;  // (from the original)
    r2_1->word_4 = 0;
    r0_3 = r0 + 0x450u;  // (from the original)
    call_00304640(r0_3, 0u, r2_1.addr(), r3_1);
    r1 = guest::cpu()->r[1];
    r0_4 = u32(r5_1->half_46) + 1u;
    goto L_2e5780;
L_2e56f8:;
    if (u32(r5_1->byte_80) == 0) {
        guest::cpu()->r[1] = r1;
        return r6_1;
    }
    if ((arg0->word_47c & 0xffu) != 2u) {  // (from the original)
        if (u32(arg0->byte_424) != 0) {
            call_002cf3b4(r0 + 0x140u, r1, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
        }
        call_00304ca4(frame.at(0x18).addr(), r1, 0x800000u, 0u);  // (from the original)
        gptr<Local_002e5680_ea_1> ea_1 = gptr<Local_002e5680_ea_1>(frame.at(0x20).addr());  // (from the original)
        ea_1->word_0 = 0x20000;  // (from the original)
        ea_1->word_4 = 0;
        call_005ccfc4(frame.at(0x18).addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r5_1->half_46 = 3;
        call_00304ce4(frame.at(0x18).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        return r6_1;
    }
    *global_009500e0 = 1;
    r1 = 0x9500e1u;  // (from the original)
    *gptr<u8>(r1) = 0;
    r0_4 = 2u;
L_2e5780:;
    r5_1->half_46 = u16(r0_4);
    guest::cpu()->r[1] = r1;
    return r6_1;
L_2e5788:;
    u32 r5_2 = arg0->word_484;
    u32 r4_1 = *global_009535d8;
    if (r5_2 + 1u == 0) {
        guest::cpu()->r[1] = r1;
        return r6_1;
    }
    *frame.at<u32>(0xc) = 0x87aa70;  // (from the original)
    *frame.at<u32>(8) = 0x9047f8;  // (from the original)
    call_00810e14(frame.at(0x14).addr(), frame.at(8).addr(), 0x9047f8u, r3);  // (from the original)
    u32 r0_10 = frame.at(0x40).addr();  // (from the original)
    u32 r0_11 = call_00545104(r0_10, frame.at(0x14).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_003302c8(r4_1, r0_11, r5_2, guest::cpu()->r[3]);
    call_00813c20(r4_1 + 0x139u, 4u, 1u);  // (from the original)
    r1 = guest::cpu()->r[1];
    return r6_1;
}

}  // namespace d_002e5680
GUEST_EXPORT_FRAMED(0x002e5680, d_002e5680::f_002e5680, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e58f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e58f0 {

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)

u32 f_002e58f0(gptr<HumanModel> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8ebc68;  // (from the original)
    u32 r0_1 = r0 + 0x144u;  // (from the original)
    u32 r2_1 = ~0u;
    arg0->word_1b4 = 0;
    arg0->word_1b8 = r2_1;
    arg0->word_1ac = 0;
    arg0->word_1b0 = r2_1;
    arg0->word_1a4 = 0;
    arg0->word_1a8 = r2_1;
    arg0->word_19c = 0;
    arg0->word_1a0 = r2_1;
    arg0->word_194 = 0;
    arg0->word_198 = r2_1;
    arg0->word_18c = 0;
    arg0->word_190 = r2_1;
    arg0->word_184 = 0;
    arg0->word_188 = r2_1;
    arg0->word_17c = 0;
    arg0->word_180 = r2_1;
    arg0->word_174 = 0;
    arg0->word_178 = r2_1;
    arg0->word_16c = 0;
    arg0->word_170 = r2_1;
    arg0->word_164 = 0;
    arg0->word_168 = r2_1;
    arg0->word_15c = 0;
    arg0->word_160 = r2_1;
    arg0->word_154 = 0;
    arg0->word_158 = r2_1;
    arg0->word_14c = 0;
    arg0->word_150 = r2_1;
    arg0->word_144 = 0;
    arg0->word_148 = r2_1;
    u32 r0_2 = r0_1 - 0x144u;  // (from the original)
    arg0->word_0 = 0x8eb174;  // (from the original)
    call_001abcd4(r0_2, 0x8eb174u, r2_1, r0_1 + 8u);  // (from the original)
    u32 r0_4 = call_004ef50c(r0_2 + 0xccu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_004edd84(r0_4 - 0x54u, guest::cpu()->r[1]);  // (from the original)
    return r0_6 - 0x78u;  // (from the original)
}

}  // namespace d_002e58f0
GUEST_EXPORT_FRAMED(0x002e58f0, d_002e58f0::f_002e58f0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5a4c {


void f_002e5a4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r2 < 0x60u) {  // (from the original)
        r0 += ((r2 << 3) - r2 << 4);
    }
    if (r1 < 0x70u) {  // (from the original)
        r0 += r1;
    }
    *gptr<u8>(r0) = u8(r3);
    return;
}

}  // namespace d_002e5a4c
GUEST_EXPORT(0x002e5a4c, d_002e5a4c::f_002e5a4c);

// f_002e5a68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5a68 {


void f_002e5a68(u32 r0) {
    u32 r1 = 0;
    u32 res_1 = 0;
    u32 r12 = 0xffu;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r2 = 0u;
        u32 r3 = r0 + ((r4 << 3) - r4 << 4);
        r1 = r2;
        do {
            *gptr<u8>(r3 + r2) = u8(r12);
            u32 r2_1 = r2 + 1u;
            r1 += 2u;
            *gptr<u8>(r3 + r2_1) = u8(r12);
            res_1 = r1 - 0x70u;  // (from the original)
            r2 = r2_1 + 1u;
            guest::preempt();
        } while (res_1 >> 0x1f != ((r1 ^ 0x70u) & (r1 ^ res_1)) >> 0x1f);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0x60);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e5a68
GUEST_EXPORT_FRAMED(0x002e5a68, d_002e5a68::f_002e5a68, 0x10);  // pushes {r4} first, as the original

// f_002e5ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5ab4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

u32 f_002e5ab4(u32 r0) {
    call_00301444(r0, 0x2a00u);  // (from the original)
    return r0;
}

}  // namespace d_002e5ab4
GUEST_EXPORT_FRAMED(0x002e5ab4, d_002e5ab4::f_002e5ab4, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5af4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5af4 {

struct __attribute__((packed)) Object_002e5af4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002e5af4_0, word_0, 0x0);  // (from the original)

inline guest::global<u32, 0x009525d0> global_009525d0;  // (from the original)

u32 f_002e5af4(gptr<Object_002e5af4_0> arg0) {
    u32 r0_1 = arg0->word_0;
    *global_009525d0 = r0_1;
    guest::cpu()->r[1] = 0x9525ccu;  // (from the original)
    return r0_1;
}

}  // namespace d_002e5af4
GUEST_EXPORT(0x002e5af4, d_002e5af4::f_002e5af4);

// f_002e5b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5b08 {

struct __attribute__((packed)) Object_002e5b08_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_002e5b08_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5b08_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e5b08_0, byte_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002e5b08_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002e5b08_r0_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_002e5b08_r1_1 {
    u8 unknown_0[0x1cc];  // (not used here)
    u8 byte_1cc;
    u8 unknown_1cd[0x1];  // (not used here)
    u8 byte_1ce;
};
GUEST_OFFSET(Local_002e5b08_r1_1, byte_1cc, 0x1cc);  // (from the original)
GUEST_OFFSET(Local_002e5b08_r1_1, byte_1ce, 0x1ce);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e5b08(gptr<Object_002e5b08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    gptr<Local_002e5b08_r1_1> r1_1 = gptr<Local_002e5b08_r1_1>(0u);
    gptr<Local_002e5b08_r0_1> r0_1 = gptr<Local_002e5b08_r0_1>(arg0->word_c);
    if (r0_1.addr() != 0) {
        if (arg0->word_10 == r0_1->word_c) {
            r1_1 = gptr<Local_002e5b08_r1_1>(r0_1.addr());
            goto L_2e5b34;
        }
    }
    r1_1 = gptr<Local_002e5b08_r1_1>(0u);
L_2e5b34:;
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        return 0u;
    }
    if (u32(r1_1->byte_1ce) != 0) {
        if (r0_1.addr() != 0) {
            r1_1 = gptr<Local_002e5b08_r1_1>(arg0->word_10);
            if (r1_1.addr() == r0_1->word_c) {
                goto L_2e5b68;
            }
        }
        r0_1 = gptr<Local_002e5b08_r0_1>(0u);
L_2e5b68:;
        if (r0_1.addr() == 0) {
            guest::cpu()->r[1] = r1_1.addr();
            return 1u;
        }
        call_0054da14(r0_1.addr(), r1_1.addr(), r2, guest::cpu()->r[3]);
        u32 r1_2 = guest::cpu()->r[1];
        if ((u32(arg0->byte_14) & 1u) != 0) {
            call_0013f000(0xabe0acu, r0);  // (from the original)
            r1_2 = u32(arg0->byte_14) & ~1u;
            arg0->byte_14 = u8(r1_2);
        }
        arg0->word_c = 0;
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    r1_1->byte_1cc = 1;
    if ((u32(arg0->byte_14) & 1u) == 0) {
        call_0013f134(0xabe0acu, r0);  // (from the original)
        r1_1 = gptr<Local_002e5b08_r1_1>(u32(arg0->byte_14) | 1u);
        arg0->byte_14 = u8(r1_1.addr());
    }
    arg0->byte_14 = u8(u32(arg0->byte_14) | 2u);
    guest::cpu()->r[1] = r1_1.addr();
    return 1u;
}

}  // namespace d_002e5b08
GUEST_EXPORT_FRAMED(0x002e5b08, d_002e5b08::f_002e5b08, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5bec {

struct __attribute__((packed)) Object_002e5bec_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5bec_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5bec_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e5bec_r4_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x14c];  // (not used here)
    u32 word_15c;
    u32 word_160;
    u32 word_164;
    u32 word_168;
    u32 word_16c;
    u8 unknown_170[0x8];  // (not used here)
    u32 word_178;
    u32 word_17c;
};
GUEST_OFFSET(Local_002e5bec_r4_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_164, 0x164);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_178, 0x178);  // (from the original)
GUEST_OFFSET(Local_002e5bec_r4_1, word_17c, 0x17c);  // (from the original)

inline guest::global<u32, 0x00af78e4> global_00af78e4;  // (from the original)
inline guest::global<u32, 0x00af78e8> global_00af78e8;  // (from the original)
inline guest::global<u32, 0x00af78ec> global_00af78ec;  // (from the original)
inline constexpr guest::Function<0x0014e910, u32(u32, u32)> call_0014e910;  // (from the original)

u32 f_002e5bec(gptr<Object_002e5bec_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2_1 = r1;
    gptr<Local_002e5bec_r4_1> r4_1 = gptr<Local_002e5bec_r4_1>(arg0->word_c);
    if (r4_1.addr() != 0) {
        r0 = arg0->word_10;
        r1 = r4_1->word_c;
        if (r0 == r1) {
            goto L_2e5c14;
        }
    }
    r4_1 = gptr<Local_002e5bec_r4_1>(0u);
L_2e5c14:;
    if (r4_1.addr() != 0) {
        u32 r5_1 = r4_1.addr() + 0x12cu;  // (from the original)
        call_0014e910(r5_1, r2_1);
        r0 = call_0014e910(r4_1.addr() + 0xfcu, r5_1);  // (from the original)
        r4_1->word_15c = *global_00af78e4;
        r4_1->word_160 = *global_00af78e8;
        r1 = *global_00af78ec;
        r4_1->word_164 = r1;
        r4_1->word_178 = std::bit_cast<u32>(std::bit_cast<float>(r4_1->word_168) * std::bit_cast<float>(r4_1->word_15c));
        S1 = std::bit_cast<float>(r4_1->word_160);
        S0 = std::bit_cast<float>(r4_1->word_16c) * S1;
        r4_1->word_17c = std::bit_cast<u32>(S0);
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002e5bec
GUEST_EXPORT_FRAMED(0x002e5bec, d_002e5bec::f_002e5bec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e5ed8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5ed8 {

struct __attribute__((packed)) Object_002e5ed8_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5ed8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5ed8_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0054d964, u32(u32, u32, u32, u32)> call_0054d964;  // (from the original)

u32 f_002e5ed8(gptr<Object_002e5ed8_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = arg0->word_c;
    if (r2_1 != 0) {
        r3 = *gptr<u32>(r2_1 + 0xcu);  // (from the original)
        if (arg0->word_10 == r3) {
            r0_1 = r2_1;
            goto L_2e5f00;
        }
    }
    r0_1 = 0u;
L_2e5f00:;
    if (r0_1 == 0) {
        return r0_1;
    }
    call_0054d964(r0_1, guest::cpu()->r[1], r2_1, r3);
    return 1u;
}

}  // namespace d_002e5ed8
GUEST_EXPORT_FRAMED(0x002e5ed8, d_002e5ed8::f_002e5ed8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5f14 {

struct __attribute__((packed)) Object_002e5f14_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x4];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_002e5f14_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5f14_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)

u32 f_002e5f14(gptr<Object_002e5f14_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    if ((u32(arg0->byte_14) & 1u) != 0) {
        call_0013f000(0xabe0acu, r0);  // (from the original)
        r1 = u32(arg0->byte_14) & ~1u;
        arg0->byte_14 = u8(r1);
    }
    arg0->word_c = 0;
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_002e5f14
GUEST_EXPORT_FRAMED(0x002e5f14, d_002e5f14::f_002e5f14, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e5f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5f84 {

struct __attribute__((packed)) Object_002e5f84_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5f84_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5f84_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e5f84_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1a4];  // (not used here)
    u32 word_1b4;
    u32 word_1b8;
    u32 word_1bc;
    u8 unknown_1c0[0xd];  // (not used here)
    u8 byte_1cd;
};
GUEST_OFFSET(Local_002e5f84_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e5f84_r2_1, word_1b4, 0x1b4);  // (from the original)
GUEST_OFFSET(Local_002e5f84_r2_1, word_1b8, 0x1b8);  // (from the original)
GUEST_OFFSET(Local_002e5f84_r2_1, word_1bc, 0x1bc);  // (from the original)
GUEST_OFFSET(Local_002e5f84_r2_1, byte_1cd, 0x1cd);  // (from the original)


u32 f_002e5f84(gptr<Object_002e5f84_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_002e5f84_r2_1> r2_1 = gptr<Local_002e5f84_r2_1>(arg0->word_c);
    if (r2_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r2_1->word_c) {
            goto L_2e5fa4;
        }
    }
    r2_1 = gptr<Local_002e5f84_r2_1>(0u);
L_2e5fa4:;
    if (r2_1.addr() == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2_1->word_1b4 = *gptr<u32>(r1);
    r2_1->word_1b8 = *gptr<u32>(r1 + 4u);
    u32 r1_1 = *gptr<u32>(r1 + 8u);
    r2_1->word_1bc = r1_1;
    r2_1->byte_1cd = 1;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002e5f84
GUEST_EXPORT(0x002e5f84, d_002e5f84::f_002e5f84);

// f_002e5fd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5fd0 {

struct __attribute__((packed)) Object_002e5fd0_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5fd0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5fd0_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Object_002e5fd0_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002e5fd0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e5fd0_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002e5fd0_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002e5fd0_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x170];  // (not used here)
    u32 word_180;
    u32 word_184;
    u32 word_188;
};
GUEST_OFFSET(Local_002e5fd0_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e5fd0_r2_1, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Local_002e5fd0_r2_1, word_184, 0x184);  // (from the original)
GUEST_OFFSET(Local_002e5fd0_r2_1, word_188, 0x188);  // (from the original)


u32 f_002e5fd0(gptr<Object_002e5fd0_0> arg0, gptr<Object_002e5fd0_1> arg1) {
    u32 r0 = arg0.addr();
    gptr<Local_002e5fd0_r2_1> r2_1 = gptr<Local_002e5fd0_r2_1>(arg0->word_c);
    if (r2_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r2_1->word_c) {
            goto L_2e5ff0;
        }
    }
    r2_1 = gptr<Local_002e5fd0_r2_1>(0u);
L_2e5ff0:;
    if (r2_1.addr() == 0) {
        return r0;
    }
    r2_1->word_180 = arg1->word_0;
    r2_1->word_184 = arg1->word_4;
    u32 r0_1 = arg1->word_8;
    r2_1->word_188 = r0_1;
    return r0_1;
}

}  // namespace d_002e5fd0
GUEST_EXPORT(0x002e5fd0, d_002e5fd0::f_002e5fd0);

// f_002e6014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6014 {

struct __attribute__((packed)) Object_002e6014_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6014_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6014_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x002e6074> global_002e6074;  // (from the original)

u32 f_002e6014(gptr<Object_002e6014_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6034;
        }
    }
    r1 = 0u;
L_2e6034:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    u32 r3 = *gptr<u32>(r1 + 8u);
    S1 = std::bit_cast<float>(*global_002e6074);
    r0 = 0u;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
        u32 r2_1 = r0 + (r0 << 1);
        r0 += 1u;
        res_1 = r3 - r0;
        *gptr<u32>(r1 + (r2_1 << 3) + 0x30u) = std::bit_cast<u32>(S0);  // (from the original)
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r3 ^ r0) & (r3 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002e6014
GUEST_EXPORT(0x002e6014, d_002e6014::f_002e6014);

// f_002e6078: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6078 {

struct __attribute__((packed)) Object_002e6078_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6078_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6078_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e6078_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e6078_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e6078_r0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e6078_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x158];  // (not used here)
    u32 word_168;
    u32 word_16c;
    u8 unknown_170[0x8];  // (not used here)
    u32 word_178;
    u32 word_17c;
};
GUEST_OFFSET(Local_002e6078_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e6078_r1_1, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Local_002e6078_r1_1, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Local_002e6078_r1_1, word_178, 0x178);  // (from the original)
GUEST_OFFSET(Local_002e6078_r1_1, word_17c, 0x17c);  // (from the original)


void f_002e6078(gptr<Object_002e6078_0> arg0, float S0, float S1) {
    gptr<Local_002e6078_r1_1> r1_1 = gptr<Local_002e6078_r1_1>(arg0->word_c);
    if (r1_1.addr() != 0) {
        if (arg0->word_10 == r1_1->word_c) {
            goto L_2e6098;
        }
    }
    r1_1 = gptr<Local_002e6078_r1_1>(0u);
L_2e6098:;
    if (r1_1.addr() == 0) {
        guest::cpu()->r[1] = r1_1.addr();
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    r1_1->word_16c = std::bit_cast<u32>(S0);
    r1_1->word_168 = std::bit_cast<u32>(S0);
    gptr<Local_002e6078_r0_1> r0_1 = gptr<Local_002e6078_r0_1>(r1_1.addr() + 0x15cu);  // (from the original)
    float S1_1 = S0 * std::bit_cast<float>(r0_1->word_0);
    float S0_1 = S0 * std::bit_cast<float>(r0_1->word_4);
    r1_1->word_178 = std::bit_cast<u32>(S1_1);
    r1_1->word_17c = std::bit_cast<u32>(S0_1);
    guest::cpu()->r[1] = r1_1.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_002e6078
GUEST_EXPORT(0x002e6078, d_002e6078::f_002e6078);

// f_002e60c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e60c4 {

struct __attribute__((packed)) Object_002e60c4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e60c4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e60c4_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e60c4_r0_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e60c4_r0_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e60c4_r0_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e60c4_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e60c4_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e60c4_r0_2, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e60c4_r1_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e60c4_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e60c4_r1_2, word_4, 0x4);  // (from the original)


void f_002e60c4(gptr<Object_002e60c4_0> arg0, float S0, float S1) {
    u32 r1_1 = arg0->word_c;
    if (r1_1 != 0) {
        if (arg0->word_10 == *gptr<u32>(r1_1 + 0xcu)) {  // (from the original)
            goto L_2e60e4;
        }
    }
    r1_1 = 0u;
L_2e60e4:;
    if (r1_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return;
    }
    gptr<Local_002e60c4_r0_1> r0_1 = gptr<Local_002e60c4_r0_1>(r1_1 + 0x168u);  // (from the original)
    r0_1->word_0 = std::bit_cast<u32>(S0);
    r0_1->word_4 = std::bit_cast<u32>(S1);
    gptr<Local_002e60c4_r0_2> r0_2 = gptr<Local_002e60c4_r0_2>(r1_1 + 0x15cu);  // (from the original)
    gptr<Local_002e60c4_r1_2> r1_2 = gptr<Local_002e60c4_r1_2>(r1_1 + 0x178u);  // (from the original)
    float S0_1 = S0 * std::bit_cast<float>(r0_2->word_0);
    float S1_1 = S1 * std::bit_cast<float>(r0_2->word_4);
    r1_2->word_0 = std::bit_cast<u32>(S0_1);
    r1_2->word_4 = std::bit_cast<u32>(S1_1);
    guest::cpu()->r[1] = r1_2.addr();
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_1;
    return;
}

}  // namespace d_002e60c4
GUEST_EXPORT(0x002e60c4, d_002e60c4::f_002e60c4);

// f_002e6110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6110 {

struct __attribute__((packed)) Object_002e6110_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6110_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6110_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e6110_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x190];  // (not used here)
    u32 word_1a0;
};
GUEST_OFFSET(Local_002e6110_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e6110_r1_1, word_1a0, 0x1a0);  // (from the original)


u32 f_002e6110(gptr<Object_002e6110_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    gptr<Local_002e6110_r1_1> r1_1 = gptr<Local_002e6110_r1_1>(arg0->word_c);
    if (r1_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r1_1->word_c) {
            goto L_2e6130;
        }
    }
    r1_1 = gptr<Local_002e6110_r1_1>(0u);
L_2e6130:;
    if (r1_1.addr() != 0) {
        r1_1->word_1a0 = std::bit_cast<u32>(S0);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6110
GUEST_EXPORT(0x002e6110, d_002e6110::f_002e6110);

// f_002e613c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e613c {

struct __attribute__((packed)) Object_002e613c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e613c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e613c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e613c_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1be];  // (not used here)
    u8 byte_1ce;
};
GUEST_OFFSET(Local_002e613c_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e613c_r2_1, byte_1ce, 0x1ce);  // (from the original)


u32 f_002e613c(gptr<Object_002e613c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_002e613c_r2_1> r2_1 = gptr<Local_002e613c_r2_1>(arg0->word_c);
    if (r2_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r2_1->word_c) {
            goto L_2e615c;
        }
    }
    r2_1 = gptr<Local_002e613c_r2_1>(0u);
L_2e615c:;
    if (r2_1.addr() != 0) {
        r2_1->byte_1ce = u8(r1);
    }
    return r0;
}

}  // namespace d_002e613c
GUEST_EXPORT(0x002e613c, d_002e613c::f_002e613c);

// f_002e6168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6168 {

struct __attribute__((packed)) Object_002e6168_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6168_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6168_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x002e61c8> global_002e61c8;  // (from the original)

u32 f_002e6168(gptr<Object_002e6168_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6188;
        }
    }
    r1 = 0u;
L_2e6188:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    u32 r3 = *gptr<u32>(r1 + 8u);
    S1 = std::bit_cast<float>(*global_002e61c8);
    r0 = 0u;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (r3 == 0 || r3 >> 0x1f != (r3 & (r3 ^ r3)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
        u32 r2_1 = r0 + (r0 << 1);
        r0 += 1u;
        res_1 = r3 - r0;
        *gptr<u32>(r1 + (r2_1 << 3) + 0x34u) = std::bit_cast<u32>(S0);  // (from the original)
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r3 ^ r0) & (r3 ^ res_1)) >> 0x1f);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002e6168
GUEST_EXPORT(0x002e6168, d_002e6168::f_002e6168);

// f_002e61cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e61cc {

struct __attribute__((packed)) Object_002e61cc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_002e61cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e61cc_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e61cc_0, byte_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002e61cc_r4_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e61cc_r4_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e61cc_r4_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e61cc_r4_2, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> call_001e58fc;  // (from the original)

void f_002e61cc(gptr<Object_002e61cc_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4_1 = arg0->word_c;
    if (r4_1 != 0) {
        r1 = *gptr<u32>(r4_1 + 0xcu);  // (from the original)
        if (arg0->word_10 == r1) {
            goto L_2e61f8;
        }
    }
    r4_1 = 0u;
L_2e61f8:;
    if (r4_1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    call_001e58fc(frame.at(0).addr(), 0x1cu, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = *frame.at<u32>(4);
    u32 r2_1 = *frame.at<u32>(8);
    gptr<Local_002e61cc_r4_2> r4_2 = gptr<Local_002e61cc_r4_2>(r4_1 + 0x18cu);  // (from the original)
    r4_2->word_0 = *frame.at<u32>(0);
    r4_2->word_4 = r1_1;
    r4_2->word_8 = r2_1;
    u32 r1_2 = u32(arg0->byte_14) | 8u;
    arg0->byte_14 = u8(r1_2);
    if ((r1_2 & 1u) != 0) {
        guest::cpu()->r[1] = r1_2;
        return;
    }
    call_0013f134(0xabe0acu, r0);  // (from the original)
    arg0->byte_14 = u8(u32(arg0->byte_14) | 1u);
    return;
}

}  // namespace d_002e61cc
GUEST_EXPORT_FRAMED(0x002e61cc, d_002e61cc::f_002e61cc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002e6250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6250 {

struct __attribute__((packed)) Object_002e6250_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6250_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6250_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e6250_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x18c];  // (not used here)
    u32 word_19c;
};
GUEST_OFFSET(Local_002e6250_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e6250_r1_1, word_19c, 0x19c);  // (from the original)


u32 f_002e6250(gptr<Object_002e6250_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    gptr<Local_002e6250_r1_1> r1_1 = gptr<Local_002e6250_r1_1>(arg0->word_c);
    if (r1_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r1_1->word_c) {
            goto L_2e6270;
        }
    }
    r1_1 = gptr<Local_002e6250_r1_1>(0u);
L_2e6270:;
    if (r1_1.addr() != 0) {
        r1_1->word_19c = std::bit_cast<u32>(S0);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6250
GUEST_EXPORT(0x002e6250, d_002e6250::f_002e6250);

// f_002e627c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e627c {

struct __attribute__((packed)) Object_002e627c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e627c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e627c_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e627c_r2_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x1b0];  // (not used here)
    u32 word_1c0;
};
GUEST_OFFSET(Local_002e627c_r2_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e627c_r2_1, word_1c0, 0x1c0);  // (from the original)


u32 f_002e627c(gptr<Object_002e627c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    gptr<Local_002e627c_r2_1> r2_1 = gptr<Local_002e627c_r2_1>(arg0->word_c);
    if (r2_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r2_1->word_c) {
            goto L_2e629c;
        }
    }
    r2_1 = gptr<Local_002e627c_r2_1>(0u);
L_2e629c:;
    if (r2_1.addr() == 0) {
        return r0;
    }
    u32 r0_1 = r1;
    if (r0_1 != 0) {
        r0_1 = ~0x80000000u;  // (from the original)
    }
    r2_1->word_1c0 = r0_1;
    return r0_1;
}

}  // namespace d_002e627c
GUEST_EXPORT(0x002e627c, d_002e627c::f_002e627c);

// f_002e62b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e62b4 {

struct __attribute__((packed)) Object_002e62b4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e62b4_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e62b4_0, word_10, 0x10);  // (from the original)


u32 f_002e62b4(gptr<Object_002e62b4_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r3 = arg0->word_c;
    if (r3 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r3 + 0xcu)) {  // (from the original)
            goto L_2e62d4;
        }
    }
    r3 = 0u;
L_2e62d4:;
    if (r3 == 0) {
        return r0;
    }
    if (s32(r2) >= 0) {
        u32 r0_1 = r3 + (r2 + (r2 << 1) << 3);
        *gptr<u32>(r0_1 + 0x40u) = r1;  // (from the original)
        return r0_1;
    }
    u32 r12 = *gptr<u32>(r3 + 8u);
    r0 = 0u;
    if (s32(r12) <= 0) {
        return r0;
    }
    do {
        u32 r2_1 = r0 + (r0 << 1);
        r0 += 1u;
        res_1 = r12 - r0;
        *gptr<u32>(r3 + (r2_1 << 3) + 0x40u) = r1;  // (from the original)
        guest::preempt();
    } while (res_1 != 0 && res_1 >> 0x1f == ((r12 ^ r0) & (r12 ^ res_1)) >> 0x1f);  // (from the original)
    return r0;
}

}  // namespace d_002e62b4
GUEST_EXPORT(0x002e62b4, d_002e62b4::f_002e62b4);

// f_002e6368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6368 {

struct __attribute__((packed)) Object_002e6368_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6368_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e6368_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Local_002e6368_r0_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e6368(gptr<Object_002e6368_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = r0;
    gptr<Local_002e6368_r0_1> r0_1 = gptr<Local_002e6368_r0_1>(arg0->word_c);
    if (r0_1.addr() != 0) {
        r2 = r0_1->word_c;
        if (arg0->word_10 == r2) {
            r1 = r0_1.addr();
            goto L_2e6394;
        }
    }
    r1 = 0u;
L_2e6394:;
    u32 r5 = 0u;
    if (r1 != 0) {
        r2 = *gptr<u8>(r1 + 0x1ceu);  // (from the original)
        if (r2 == 0) {
            goto L_2e6434;
        }
        if (r0_1.addr() != 0) {
            r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
            if (r1 == r0_1->word_c) {
                goto L_2e63c8;
            }
        }
        r0_1 = gptr<Local_002e6368_r0_1>(0u);
L_2e63c8:;
        if (r0_1.addr() != 0) {
            call_0054da14(r0_1.addr(), r1, r2, guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {  // (from the original)
                call_0013f000(0xabe0acu, r4, r2, guest::cpu()->r[3]);  // (from the original)
                r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
                *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
            }
            *gptr<u32>(r4 + 0xcu) = r5;  // (from the original)
        }
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {  // (from the original)
        *gptr<u32>(r4 + 0xcu) = r5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
L_2e6410:;
    call_0013f000(0xabe0acu, r4, r2, guest::cpu()->r[3]);  // (from the original)
    r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    *gptr<u32>(r4 + 0xcu) = r5;  // (from the original)
    guest::cpu()->r[1] = r1;
    return 1u;
L_2e6434:;
    *gptr<u8>(r1 + 0x1ccu) = 1;  // (from the original)
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {  // (from the original)
        *gptr<u32>(r4 + 0xcu) = r5;  // (from the original)
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    guest::preempt();
    goto L_2e6410;
}

}  // namespace d_002e6368
GUEST_EXPORT_FRAMED(0x002e6368, d_002e6368::f_002e6368, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e6450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6450 {

struct __attribute__((packed)) Object_002e6450_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_002e6450_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6450_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e6450_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e6450(gptr<Object_002e6450_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r0_1 = arg0->word_c;
    if (r0_1 != 0) {
        r1 = arg0->word_10;
        if (r1 == *gptr<u32>(r0_1 + 0xcu)) {  // (from the original)
            goto L_2e6478;
        }
    }
    r0_1 = 0u;
L_2e6478:;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0_1;
    }
    call_0054da14(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if ((u32(arg0->byte_14) & 1u) != 0) {
        call_0013f000(0xabe0acu, r0);  // (from the original)
        r1_1 = u32(arg0->byte_14) & ~1u;
        arg0->byte_14 = u8(r1_1);
    }
    arg0->word_c = 0;
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002e6450
GUEST_EXPORT_FRAMED(0x002e6450, d_002e6450::f_002e6450, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e64bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e64bc {

struct __attribute__((packed)) Local_002e64bc_r0_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xe8];  // (not used here)
    u32 word_f8;
};
GUEST_OFFSET(Local_002e64bc_r0_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e64bc_r0_1, word_f8, 0xf8);  // (from the original)

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)

u32 f_002e64bc(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r1 = 0;
    u32 r2 = 0;
    call_002e6368(r0, r1, r2, r3);
    *gptr<u8>(r0 + 0x14u) = 0;  // (from the original)
    gptr<Local_002e64bc_r0_1> r0_1 = gptr<Local_002e64bc_r0_1>(*gptr<u32>(r0 + 0xcu));  // (from the original)
    if (r0_1.addr() != 0) {
        if (*gptr<u32>(r0 + 0x10u) == r0_1->word_c) {  // (from the original)
            goto L_2e64f4;
        }
    }
    r0_1 = gptr<Local_002e64bc_r0_1>(0u);
L_2e64f4:;
    if (r0_1.addr() != 0) {
        r0_1->word_f8 = 0;
    }
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_002e64bc
GUEST_EXPORT_FRAMED(0x002e64bc, d_002e64bc::f_002e64bc, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e668c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e668c {

struct __attribute__((packed)) Object_002e668c_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e668c_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e668c_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0054da5c, u32(u32, u32, u32, u32)> call_0054da5c;  // (from the original)

u32 f_002e668c(gptr<Object_002e668c_0> arg0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 r0_1 = 0;
    u32 r2_1 = arg0->word_c;
    if (r2_1 != 0) {
        r3 = *gptr<u32>(r2_1 + 0xcu);  // (from the original)
        if (arg0->word_10 == r3) {
            r0_1 = r2_1;
            goto L_2e66b0;
        }
    }
    r0_1 = 0u;
L_2e66b0:;
    if (r0_1 == 0) {
        return r0_1;
    }
    return call_0054da5c(r0_1, guest::cpu()->r[1], r2_1, r3);
}

}  // namespace d_002e668c
GUEST_EXPORT(0x002e668c, d_002e668c::f_002e668c);

// f_002e6808: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6808 {

struct __attribute__((packed)) Object_002e6808_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6808_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6808_0, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_002e6808_r1_1 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0x188];  // (not used here)
    u32 word_198;
};
GUEST_OFFSET(Local_002e6808_r1_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002e6808_r1_1, word_198, 0x198);  // (from the original)


u32 f_002e6808(gptr<Object_002e6808_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    gptr<Local_002e6808_r1_1> r1_1 = gptr<Local_002e6808_r1_1>(arg0->word_c);
    if (r1_1.addr() != 0) {
        r0 = arg0->word_10;
        if (r0 == r1_1->word_c) {
            goto L_2e6828;
        }
    }
    r1_1 = gptr<Local_002e6808_r1_1>(0u);
L_2e6828:;
    if (r1_1.addr() != 0) {
        r1_1->word_198 = std::bit_cast<u32>(S0);
    }
    guest::cpu()->r[1] = r1_1.addr();
    return r0;
}

}  // namespace d_002e6808
GUEST_EXPORT(0x002e6808, d_002e6808::f_002e6808);

// f_002e6878: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6878 {

struct __attribute__((packed)) Object_002e6878_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
};
GUEST_OFFSET(Object_002e6878_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6878_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e6878_0, byte_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_002e6878_r1_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e6878_r1_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e6878_r1_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e6878_r1_2, word_8, 0x8);  // (from the original)


void f_002e6878(gptr<Object_002e6878_0> arg0, float S0, float S1, float S2) {
    u32 r1_1 = arg0->word_c;
    if (r1_1 != 0) {
        if (arg0->word_10 == *gptr<u32>(r1_1 + 0xcu)) {  // (from the original)
            goto L_2e6898;
        }
    }
    r1_1 = 0u;
L_2e6898:;
    if (r1_1 == 0) {
        return;
    }
    gptr<Local_002e6878_r1_2> r1_2 = gptr<Local_002e6878_r1_2>(r1_1 + 0x18cu);  // (from the original)
    r1_2->word_0 = std::bit_cast<u32>(S0);
    r1_2->word_4 = std::bit_cast<u32>(S1);
    r1_2->word_8 = std::bit_cast<u32>(S2);
    arg0->byte_14 = u8(u32(arg0->byte_14) | 4u);
    return;
}

}  // namespace d_002e6878
GUEST_EXPORT(0x002e6878, d_002e6878::f_002e6878);

// f_002e6944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6944 {

inline constexpr guest::Function<0x0013f000, u32(u32, u32)> call_0013f000;  // (from the original)

u32 f_002e6944(gptr<SeadParticleHandle_rec> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->byte_14;
    arg0->word_0 = 0x8f39ec;  // (from the original)
    if ((r1_1 & 1u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return r0;
    }
    call_0013f000(0xabe0acu, r0);  // (from the original)
    u32 r1_2 = u32(arg0->byte_14) & ~1u;
    arg0->byte_14 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
    return r0;
}

}  // namespace d_002e6944
GUEST_EXPORT_FRAMED(0x002e6944, d_002e6944::f_002e6944, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e69cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e69cc {

struct __attribute__((packed)) Object_002e69cc_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
};
GUEST_OFFSET(Object_002e69cc_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002e69cc_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002e69cc_0, byte_25, 0x25);  // (from the original)

struct __attribute__((packed)) Local_002e69cc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e69cc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e69cc_ea_1, word_4, 0x4);  // (from the original)


void f_002e69cc(gptr<Object_002e69cc_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r3_2 = 0;
    gptr<Local_002e69cc_ea_1> ea_1 = gptr<Local_002e69cc_ea_1>(0u);
    u32 r4_1 = 0;
    u32 r3_3 = 0;
    u32 r2 = 0u;
    u32 r12 = 0xffu;  // (from the original)
    do {
        u32 r3_1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
        u32 res_1 = r3_1 - r2;
        u32 zf_1 = res_1 == 0;
        u32 cf_1 = r3_1 >= r2;
        if (zf_1 || res_1 >> 0x1f != ((r3_1 ^ r2) & (r3_1 ^ res_1)) >> 0x1f) {  // (from the original)
            *gptr<u8>(r0 + r2) = u8(r12);
            goto L_2e6a10;
        }
        if (!cf_1 || zf_1) {
            r3_2 = *gptr<u32>(r1);
            goto L_2e6a08;
        }
        ea_1 = gptr<Local_002e69cc_ea_1>(r1 + 4u);
        r4_1 = ea_1->word_0;
        r3_3 = ea_1->word_4 + r2;
        if (s32(r4_1) <= s32(r3_3)) {
            r3_3 -= r4_1;
        }
        r3_2 = r3_3 + *gptr<u32>(r1);
L_2e6a08:;
        *gptr<u8>(r0 + r2) = u8(u32(*gptr<u8>(r3_2)));
L_2e6a10:;
        r2 += 1u;
        guest::preempt();
    } while (s32(r2) < 0x1e);  // (from the original)
    arg0->word_20 = *gptr<u32>(r1 + 0x30u);  // (from the original)
    arg0->byte_24 = u8(u32(*gptr<u8>(r1 + 0x34u)));  // (from the original)
    u32 r1_1 = *gptr<u8>(r1 + 0x35u);  // (from the original)
    arg0->byte_25 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002e69cc
GUEST_EXPORT_FRAMED(0x002e69cc, d_002e69cc::f_002e69cc, 0x30);  // pushes {r4, r5} first, as the original

// f_002e6a3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6a3c {

struct __attribute__((packed)) Object_002e6a3c_0 {
    u8 unknown_0[0x20];  // (not used here)
    u32 word_20;
    u8 byte_24;
    u8 byte_25;
};
GUEST_OFFSET(Object_002e6a3c_0, word_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002e6a3c_0, byte_24, 0x24);  // (from the original)
GUEST_OFFSET(Object_002e6a3c_0, byte_25, 0x25);  // (from the original)

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;  // (from the original)

u32 f_002e6a3c(gptr<Object_002e6a3c_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_20 = 0;
    arg0->byte_25 = 1;
    arg0->byte_24 = 0;
    call_0013fac4(r0, 0x1eu, 0xffu);  // (from the original)
    return r0;
}

}  // namespace d_002e6a3c
GUEST_EXPORT_FRAMED(0x002e6a3c, d_002e6a3c::f_002e6a3c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e764c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e764c {

struct __attribute__((packed)) Object_002e764c_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0xd8];  // (not used here)
    u8 byte_f4;
};
GUEST_OFFSET(Object_002e764c_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e764c_0, byte_f4, 0xf4);  // (from the original)

inline constexpr guest::Function<0x00136e58, u32(u32, u32, u32, u32)> call_00136e58;  // (from the original)

void f_002e764c(gptr<Object_002e764c_0> arg0) {
    if (u32(arg0->byte_f4) == 0) {
        return;
    }
    u32 r0_1 = arg0->word_18;
    if (r0_1 == 0) {
        return;
    }
    call_00136e58(r0_1, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_002e764c
GUEST_EXPORT(0x002e764c, d_002e764c::f_002e764c);

// f_002e7e20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e7e20 {

struct __attribute__((packed)) Object_002e7e20_0 {
    u8 unknown_0[0x9];  // (not used here)
    u8 byte_9;
    u8 unknown_a[0xe];  // (not used here)
    u32 word_18;
    u8 unknown_1c[0x1a];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x6];  // (not used here)
    u8 byte_3d;
};
GUEST_OFFSET(Object_002e7e20_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_002e7e20_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e7e20_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002e7e20_0, byte_3d, 0x3d);  // (from the original)

inline guest::global<u32, 0x0094d080> global_0094d080;  // (from the original)
inline constexpr guest::Function<0x002e7f04, u32(u32, u32, u32, u32)> call_002e7f04;  // (from the original)
inline constexpr guest::Function<0x0071a040, u32(u32, u32, u32, u32)> call_0071a040;  // (from the original)

void f_002e7e20(gptr<Object_002e7e20_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = r0;
    u32 r5 = 0u;
    if (u32(arg0->byte_3d) != 0) {
        arg0->byte_9 = u8(r5);
        arg0->byte_36 = u8(r5);
        goto L_2e7e74;
    }
    if (u32(arg0->byte_36) != 0) {
        arg0->byte_36 = u8(r5);
        goto L_2e7e74;
    }
    if (arg0->word_18 == 0) {
        arg0->byte_9 = u8(r5);
        goto L_2e7e74;
    }
    arg0->byte_9 = u8(u32(arg0->byte_9) == 0 ? 1u : 0u);
L_2e7e74:;
    u32 r1 = 0u;
    u32 r2 = 0x10u;  // (from the original)
    u32 r6 = *global_0094d080;
    u32 r3 = r6 + 0x738u;  // (from the original)
    r0 = r3;
    do {
        u32 r12_1 = *gptr<u8>(r0);
        r0 += 1u;
        if (r12_1 != 0xeu && r12_1 != 0xfu) {  // (from the original)
            r1 = r1 + 1u & 0xffu;  // (from the original)
        }
        r2 -= 1u;
        guest::preempt();
    } while (r2 != 0);
    if (r1 < 5u) {
        u32 r0_2 = call_0071a040(r6 + 0x68cu, 2u, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = r0_2;
    }
    u32 r0_3 = *gptr<u8>(r4 + 9u);
    *gptr<u32>(r4 + 0x18u) = r3;  // (from the original)
    if (r0_3 == 0) {
        call_002e7f04(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    } else {
        *gptr<u8>(r4 + 0x15u) = 0x10;  // (from the original)
    }
    *gptr<u32>(r4 + 0xcu) = r5;  // (from the original)
    *gptr<u32>(r4 + 0x10u) = r5;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = 1;  // (from the original)
    *gptr<u8>(r4 + 0x3cu) = u8(r5);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e7e20
GUEST_EXPORT_FRAMED(0x002e7e20, d_002e7e20::f_002e7e20, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e7f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e7f04 {

struct __attribute__((packed)) Object_002e7f04_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 byte_1c;
};
GUEST_OFFSET(Object_002e7f04_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e7f04_0, byte_1c, 0x1c);  // (from the original)

struct __attribute__((packed)) Local_002e7f04_r0_6 {
    u8 unknown_0[0x2a];  // (not used here)
    u8 byte_2a;
    u8 byte_2b;
    u8 byte_2c;
    u8 byte_2d;
};
GUEST_OFFSET(Local_002e7f04_r0_6, byte_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Local_002e7f04_r0_6, byte_2b, 0x2b);  // (from the original)
GUEST_OFFSET(Local_002e7f04_r0_6, byte_2c, 0x2c);  // (from the original)
GUEST_OFFSET(Local_002e7f04_r0_6, byte_2d, 0x2d);  // (from the original)

struct __attribute__((packed)) Local_002e7f04_r0_9 {
    u8 unknown_0[0x2a];  // (not used here)
    u8 byte_2a;
    u8 byte_2b;
};
GUEST_OFFSET(Local_002e7f04_r0_9, byte_2a, 0x2a);  // (from the original)
GUEST_OFFSET(Local_002e7f04_r0_9, byte_2b, 0x2b);  // (from the original)

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

void f_002e7f04(gptr<Object_002e7f04_0> arg0) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r2_2 = 0;
    u32 res_3 = 0;
    u32 nf_1 = 0;
    u32 vf_1 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    gptr<Local_002e7f04_r0_6> r0_6 = gptr<Local_002e7f04_r0_6>(0u);
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    gptr<Local_002e7f04_r0_9> r0_9 = gptr<Local_002e7f04_r0_9>(0u);
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r0_12 = 0;
    u32 r3 = 0u;
    u32 r5 = r0;
    arg0->byte_1c = u8(r3);
    *frame.at<u32>(0) = r3;
    *frame.at<u32>(4) = r3;
    *frame.at<u32>(8) = r3;
    *frame.at<u32>(0xc) = r3;  // (from the original)
    r0 = arg0->word_18;
    u32 r1 = 0x10u;  // (from the original)
    u32 r12 = frame.at(0).addr();
    do {
        u32 r2_1 = *gptr<u8>(r0);
        if (r2_1 < 0xdu) {  // (from the original)
            *gptr<u8>(r12 + r2_1) = u8(u32(*gptr<u8>(r12 + r2_1)) + 1u);
        }
        res_1 = r1 - 1u;
        r1 = res_1;
        r0 += 1u;
        guest::preempt();
    } while (res_1 != 0);
    r0 = 0u;
    r1 = r5 + 0x1du;  // (from the original)
    do {
        r2_2 = *gptr<u8>(r12 + r0);
        if (r2_2 != 0) {
            *gptr<u8>(u32(*gptr<u8>(r5 + 0x1cu)) + r1) = u8(r0);  // (from the original)
            r2_2 = u32(*gptr<u8>(r5 + 0x1cu)) + 1u;  // (from the original)
            *gptr<u8>(r5 + 0x1cu) = u8(r2_2);  // (from the original)
        }
        r0 += 1u;
        guest::preempt();
    } while (s32(r0) < 0xd);  // (from the original)
    u32 r1_1 = *gptr<u8>(r5 + 0x1cu);  // (from the original)
    if (r1_1 == 0) {
        r1_1 = 1u;
        *gptr<u8>(r5 + 0x1cu) = u8(r1_1);  // (from the original)
        *gptr<u8>(r5 + 0x1du) = 3;  // (from the original)
    }
    *gptr<u8>(r5 + 0x15u) = u8(r3);  // (from the original)
    u32 r0_1 = call_002ff6f8(7u, r1_1, r2_2, r3);
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 res_2 = r0_1 - 3u;
    r1 = 0xcu;  // (from the original)
    if (res_2 >> 0x1f == ((r0_1 ^ 3u) & (r0_1 ^ res_2)) >> 0x1f) {  // (from the original)
        goto L_2e7fc8;
    }
L_2e7fc0:;
    *gptr<u8>(r5 + 0x15u) = u8(r1);  // (from the original)
    goto L_2e7ff4;
L_2e7fc8:;
    if (s32(r0_1) < 6) {
        r0_1 = 8u;
        goto L_2e7fe0;
    }
    res_3 = r0_1 - 7u;
    nf_1 = res_3 >> 0x1f;  // (from the original)
    vf_1 = ((r0_1 ^ 7u) & (r0_1 ^ res_3)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        r0_1 = 4u;
    }
    if (nf_1 == vf_1) {
        goto L_2e7fe8;
    }
L_2e7fe0:;
    *gptr<u8>(r5 + 0x15u) = u8(r0_1);  // (from the original)
    goto L_2e7ff4;
L_2e7fe8:;
    if (u32(*gptr<u8>(r5 + 0x15u)) == 0) {  // (from the original)
        guest::preempt();
        goto L_2e7fc0;
    }
L_2e7ff4:;
    u32 r0_2 = *gptr<u8>(r5 + 0x15u);  // (from the original)
    u32 r6 = 0u;
    if (r0_2 >= 0u && r0_2 != 0) {
        u32 r9 = 0x83a954u;  // (from the original)
        u32 r8 = 0xffu;  // (from the original)
        u32 r7 = r9 + 3u;
        do {
            u32 r0_3 = call_002ff6f8(7u, r1, r2, r3);
            r3 = guest::cpu()->r[3];
            r1 = r0_3;
            r0 = 0u;
            u32 r4 = r0;
            do {
                r2 = *gptr<u8>(r9 + r4);
                r0 = r0 + r2 & 0xffu;  // (from the original)
                if (s32(r1) >= s32(r0)) {
                    goto L_2e80fc;
                }
                r3 = *gptr<u8>(r5 + 0x15u);  // (from the original)
                r2 = u32(*gptr<u8>(r7 + r4)) + r6;
                if (r2 > r3) {
                    goto L_2e80fc;
                }
                if (r6 != 0 && u32(*gptr<u8>(r5 + r6 + 0x29u)) != 0xffu) {  // (from the original)
                    if (r4 == 2u) {
                        goto L_2e8108;
                    }
                }
                if (r4 != 0) {
                    if (r4 == 1u) {
                        goto L_2e80b0;
                    }
                    if (r4 != 2u) {
                        goto L_2e80ec;
                    }
                    goto L_2e80d0;
                }
                r0_4 = *gptr<u8>(r5 + 0x1cu);  // (from the original)
                r0_5 = call_002ff6f8(r0_4, r1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r1 = *gptr<u8>(r0_5 + r5 + 0x1du);  // (from the original)
                r0_6 = gptr<Local_002e7f04_r0_6>(r5 + r6);
                r0_6->byte_2a = u8(r1);
                r0_6->byte_2b = u8(r8);
                r0_6->byte_2c = u8(r8);
                r0_6->byte_2d = u8(r8);
                goto L_2e80ec;
L_2e80b0:;
                r0_7 = *gptr<u8>(r5 + 0x1cu);  // (from the original)
                r0_8 = call_002ff6f8(r0_7, r1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r1 = *gptr<u8>(r0_8 + r5 + 0x1du);  // (from the original)
                r0_9 = gptr<Local_002e7f04_r0_9>(r5 + r6);
                r0_9->byte_2a = u8(r1);
                r0_9->byte_2b = u8(r8);
                goto L_2e80ec;
L_2e80d0:;
                r0_10 = *gptr<u8>(r5 + 0x1cu);  // (from the original)
                r0_11 = call_002ff6f8(r0_10, r1, r2, r3);
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r1 = r5 + r6;
                r0_12 = *gptr<u8>(r0_11 + r5 + 0x1du);  // (from the original)
                *gptr<u8>(r1 + 0x2au) = u8(r0_12);  // (from the original)
                *gptr<u8>(r1 + 0x2bu) = u8(r0_12);  // (from the original)
L_2e80ec:;
                r6 = u32(*gptr<u8>(r7 + r4)) + r6 & 0xffu;  // (from the original)
                goto L_2e8108;
L_2e80fc:;
                r4 += 1u;
                guest::preempt();
            } while (s32(r4) < 3);
L_2e8108:;
            guest::preempt();
        } while (u32(*gptr<u8>(r5 + 0x15u)) > r6);  // (from the original)
    }
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e7f04
GUEST_EXPORT_FRAMED(0x002e7f04, d_002e7f04::f_002e7f04, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_002e8444: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e8444 {

struct __attribute__((packed)) Object_002e8444_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 unknown_a[0x2];  // (not used here)
    u32 word_c;
    u32 word_10;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[0x2];  // (not used here)
    u32 word_18;
    u8 byte_1c;
    u32 word_1d;
    u32 word_21;
    u32 word_25;
    u8 byte_29;
    u8 unknown_2a[0xc];  // (not used here)
    u8 byte_36;
    u8 unknown_37[0x1];  // (not used here)
    u32 word_38;
    u8 byte_3c;
    u8 byte_3d;
    u8 unknown_3e[0x2];  // (not used here)
    u32 word_40;
};
GUEST_OFFSET(Object_002e8444_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_9, 0x9);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_15, 0x15);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_21, 0x21);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_25, 0x25);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_29, 0x29);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_36, 0x36);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_38, 0x38);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, byte_3d, 0x3d);  // (from the original)
GUEST_OFFSET(Object_002e8444_0, word_40, 0x40);  // (from the original)

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32)> call_0013fac4;  // (from the original)

u32 f_002e8444(gptr<Object_002e8444_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->byte_8 = 0;
    arg0->byte_9 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->byte_14 = 0;
    arg0->byte_15 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 0;
    arg0->byte_36 = 0;
    arg0->word_38 = 0x78;  // (from the original)
    arg0->byte_3c = 0;
    arg0->byte_3d = 0;
    arg0->word_40 = 0;
    arg0->word_1d = 0;
    arg0->word_21 = 0;
    arg0->word_25 = 0;
    arg0->byte_29 = 0;
    call_0013fac4(r0 + 0x2au, 0xcu, 0x64u);  // (from the original)
    return r0;
}

}  // namespace d_002e8444
GUEST_EXPORT_FRAMED(0x002e8444, d_002e8444::f_002e8444, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e8ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e8ce8 {

struct __attribute__((packed)) Local_002e8ce8_ea_1 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x54];  // (not used here)
    u16 half_5c;
    u8 unknown_5e[0x2];  // (not used here)
    u32 word_60;
    u8 byte_64;
};
GUEST_OFFSET(Local_002e8ce8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e8ce8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e8ce8_ea_1, half_5c, 0x5c);  // (from the original)
GUEST_OFFSET(Local_002e8ce8_ea_1, word_60, 0x60);  // (from the original)
GUEST_OFFSET(Local_002e8ce8_ea_1, byte_64, 0x64);  // (from the original)

inline guest::global<u32, 0x002e8d50> global_002e8d50;  // (from the original)
inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002e8ce8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8d88;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 1u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 4u, 0x1287a8u, 0x14u, 1u);  // (from the original)
    float S0_3 = std::bit_cast<float>(*global_002e8d50);
    gptr<Local_002e8ce8_ea_1> ea_1 = gptr<Local_002e8ce8_ea_1>(r0_5 - 0x48u);  // (from the original)
    ea_1->word_0 = 0x8f3a64;  // (from the original)
    ea_1->half_5c = 0;
    ea_1->word_60 = std::bit_cast<u32>(S0_3);
    ea_1->byte_64 = 0;
    ea_1->word_4 = 6;
    guest::cpu()->s[0] = S0_3;
    return ea_1.addr();
}

}  // namespace d_002e8ce8
GUEST_EXPORT_FRAMED(0x002e8ce8, d_002e8ce8::f_002e8ce8, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e8dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e8dfc {

inline constexpr guest::Function<0x0020b0a4, u32(u32, u32, u32, u32)> call_0020b0a4;  // (from the original)

u32 f_002e8dfc(gptr<SoundObjSymbolTree> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_3c = 8;
    u32 r3_1 = s32(s8(arg0->byte_78));
    u32 nf_1 = r3_1 >> 0x1f;  // (from the original)
    if (nf_1 == 0u) {
        r3_1 += 0x1000789u;  // (from the original)
    }
    if (nf_1 != 0u) {
        r3_1 = 0x100038bu;  // (from the original)
    }
    return call_0020b0a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3_1);
}

}  // namespace d_002e8dfc
GUEST_EXPORT(0x002e8dfc, d_002e8dfc::f_002e8dfc);

// f_002e9044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9044 {

inline constexpr guest::Function<0x0020b280, u32(u32, u32, u32, u32)> call_0020b280;  // (from the original)

u32 f_002e9044(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0020b280(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f3aa4;  // (from the original)
    *gptr<u8>(r0_1 + 0x70u) = 0;  // (from the original)
    *gptr<u32>(r0_1 + 0x74u) = 0;  // (from the original)
    *gptr<u8>(r0_1 + 0x78u) = 0xff;  // (from the original)
    *gptr<u8>(r0_1 + 0x79u) = 0;  // (from the original)
    return r0_1;
}

}  // namespace d_002e9044
GUEST_EXPORT_FRAMED(0x002e9044, d_002e9044::f_002e9044, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9118 {

struct __attribute__((packed)) Object_002e9118_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x7];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x68];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0x20];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Object_002e9118_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002e9118_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002e9118_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_002e9118_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_002e9118(gptr<Object_002e9118_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r0_1 = arg0->byte_34;
    if (r0_1 == 0) {
        u32 r0_2 = call_002f74c8(r0_1, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_002f74e0(8u, r0_2, guest::cpu()->r[2]);
        if (r0_3 != 0) {
            arg0->word_3c = 0xa;  // (from the original)
        }
        call_0020a4cc(r0, r1, r2);
        r1 = guest::cpu()->r[1];
        arg0->word_a8 = r0;
        r0_1 = r0 + 0xb8u;  // (from the original)
        arg0->word_cc = r0;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_002e9118
GUEST_EXPORT_FRAMED(0x002e9118, d_002e9118::f_002e9118, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9268 {

struct __attribute__((packed)) Object_002e9268_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x73];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0x20];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Object_002e9268_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002e9268_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_002e9268_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> call_0032c348;  // (from the original)
inline constexpr guest::Function<0x00342ed0, u32(u32)> call_00342ed0;  // (from the original)

u32 f_002e9268(gptr<Object_002e9268_0> arg0) {
    u32 r0 = arg0.addr();
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = arg0->byte_34;
    if (r0_1 != 0) {
        arg0->word_a8 = 0;
        call_0032c348(r0 + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        arg0->word_cc = 0;
        call_00342ed0(r0 + 0xb8u);  // (from the original)
        call_00136cc8(r0 + 0x44u);  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0020aedc(r0, guest::cpu()->r[1]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0_1;
}

}  // namespace d_002e9268
GUEST_EXPORT(0x002e9268, d_002e9268::f_002e9268);

// f_002e92b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e92b0 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00321c84, u32(u32)> call_00321c84;  // (from the original)
inline constexpr guest::Function<0x003425ec, u32(u32)> call_003425ec;  // (from the original)

u32 f_002e92b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_0020af18(r0, r1, r2, r3);
    *gptr<u32>(r0_1) = 0x8f8d88;  // (from the original)
    u32 r0_3 = call_00301d0c(r0_1 + 0x44u, 0x131800u, 4u, 1u);  // (from the original)
    u32 r0_5 = call_00301d0c(r0_3 + 4u, 0x1287a8u, 0x14u, 1u);  // (from the original)
    *gptr<u32>(r0_5 - 0x48u) = 0x8f3ae4;  // (from the original)
    u32 r0_7 = call_00321c84(r0_5 + 0x14u);  // (from the original)
    u32 r0_9 = call_003425ec(r0_7 + 0x5cu);  // (from the original)
    return r0_9 - 0xb8u;  // (from the original)
}

}  // namespace d_002e92b0
GUEST_EXPORT_FRAMED(0x002e92b0, d_002e92b0::f_002e92b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9328 {

struct __attribute__((packed)) Object_002e9328_0 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x73];  // (not used here)
    u32 word_a8;
    u8 unknown_ac[0xc];  // (not used here)
    u32 word_b8;
    u8 unknown_bc[0x10];  // (not used here)
    u32 word_cc;
};
GUEST_OFFSET(Object_002e9328_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, word_a8, 0xa8);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, word_b8, 0xb8);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, word_cc, 0xcc);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0013d7cc, u32(u32, u32, u32, u32)> call_0013d7cc;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> call_0032c348;  // (from the original)
inline constexpr guest::Function<0x00342ed0, u32(u32, u32, u32, u32)> call_00342ed0;  // (from the original)

u32 f_002e9328(gptr<Object_002e9328_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f3ae4;  // (from the original)
    if (u32(arg0->byte_34) != 0) {
        arg0->word_a8 = 0;
        call_0032c348(r0 + 0x5cu, r1, r2, r3);  // (from the original)
        arg0->word_cc = 0;
        call_00342ed0(r0 + 0xb8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00136cc8(r0 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_0020aedc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    arg0->word_b8 = 0x8f701c;  // (from the original)
    call_00136cc8(r0 + 0xc0u, 0x8f701cu, r2, r3);  // (from the original)
    u32 r0_6 = call_0013d7cc(r0 + 0x5cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_6 - 0x5cu;  // (from the original)
    *gptr<u32>(r4_1) = 0x8f8d88;  // (from the original)
    call_00136cc8(r4_1 + 0x44u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0020aedc(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = r4_1 + 0x44u;  // (from the original)
    call_00136cc8(r0_8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f76ac(r0_8, 0x137d74u, 4u, 1u);  // (from the original)
    return r4_1;
}

}  // namespace d_002e9328
GUEST_EXPORT_FRAMED(0x002e9328, d_002e9328::f_002e9328, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9954 {

struct __attribute__((packed)) Object_002e9954_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_002e9954_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9954_0, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002e9954_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9954_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9954_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e9954_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9954_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9954_ea_4, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002a4c30, u32(u32, u32)> call_002a4c30;  // (from the original)

void f_002e9954(gptr<Object_002e9954_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = arg0->word_0;
    if (r1_1 >= 0x30u) {  // (from the original)
        guest::cpu()->r[1] = r1_1;
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_002e9954_ea_1> ea_1 = gptr<Local_002e9954_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    call_002a4c30(arg0->word_8, r1_1);
    u32 r1_2 = ~0u;
    *gptr<u32>(r0 + 8u) = 0;
    *gptr<u32>(r0) = r1_2;
    *gptr<u32>(r0 + 4u) = 0;
    gptr<Local_002e9954_ea_4> ea_4 = gptr<Local_002e9954_ea_4>(frame.at(0).addr());
    u32 r4_1 = ea_4->word_0;
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    return;
}

}  // namespace d_002e9954
GUEST_EXPORT(0x002e9954, d_002e9954::f_002e9954);

// f_002e99d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e99d0 {

struct __attribute__((packed)) Object_002e99d0_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 byte_10;
    u8 unknown_11[0x3];  // (not used here)
    u32 word_14;
    u32 word_18;
    u16 half_1c;
    u8 byte_1e;
    u8 byte_1f;
    u16 half_20;
    u16 half_22;
};
GUEST_OFFSET(Object_002e99d0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, byte_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, half_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, byte_1f, 0x1f);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, half_20, 0x20);  // (from the original)
GUEST_OFFSET(Object_002e99d0_0, half_22, 0x22);  // (from the original)


void f_002e99d0(gptr<Object_002e99d0_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = ~0u;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->byte_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->half_1c = 0;
    arg0->byte_1e = 0;
    arg0->byte_1f = 0;
    arg0->half_20 = u16(~4u);
    arg0->half_22 = 0x13;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return;
}

}  // namespace d_002e99d0
GUEST_EXPORT(0x002e99d0, d_002e99d0::f_002e99d0);

// f_002e9a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9a14 {

struct __attribute__((packed)) Object_002e9a14_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002e9a14_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9a14_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002e9a14_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x002a4c30, u32(u32, u32)> call_002a4c30;  // (from the original)

u32 f_002e9a14(gptr<Object_002e9a14_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1_1 = arg0->word_0;
    if (r1_1 < 0x30u) {  // (from the original)
        call_002a4c30(arg0->word_8, r1_1);
        r1_1 = ~0u;
        arg0->word_8 = 0;
        arg0->word_0 = r1_1;
        arg0->word_4 = 0;
    }
    call_00136cc8(r0 + 0xcu, r1_1);  // (from the original)
    return r0;
}

}  // namespace d_002e9a14
GUEST_EXPORT_FRAMED(0x002e9a14, d_002e9a14::f_002e9a14, 0x4010);  // pushes {r4, lr} first, as the original

// f_002e9d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9d08 {

struct __attribute__((packed)) Local_002e9d08_r0_1 {
    u16 half_0;
    u16 half_2;
    u8 byte_4;
};
GUEST_OFFSET(Local_002e9d08_r0_1, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9d08_r0_1, half_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_002e9d08_r0_1, byte_4, 0x4);  // (from the original)


u32 f_002e9d08(u32 r0, u32 r1) {
    gptr<Local_002e9d08_r0_1> r0_1 = gptr<Local_002e9d08_r0_1>(r0 + ((r1 + (r1 << 1)) << 1) + 0xc90u);  // (from the original)
    r0_1->half_0 = 0;
    r0_1->half_2 = 0;
    r0_1->byte_4 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_002e9d08
GUEST_EXPORT(0x002e9d08, d_002e9d08::f_002e9d08);

// f_002e9d28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9d28 {

struct __attribute__((packed)) Local_002e9d28_r0_2 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_002e9d28_r0_2, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9d28_r0_2, half_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x0061532c, u32(u32, u32, u32, u32)> call_0061532c;  // (from the original)
inline constexpr guest::Function<0x00615508, u32(u32, u32, u32, u32)> call_00615508;  // (from the original)

void f_002e9d28(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_0061532c(r5 + (r4 + (r4 << 1) << 4) + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x32u);  // (from the original)
    gptr<Local_002e9d28_r0_2> r0_2 = gptr<Local_002e9d28_r0_2>(r5 + 0xc90u);  // (from the original)
    u32 r6 = 0u;
    r0_2->half_0 = u16(r6);
    r2 = r5 + 0xc96u;  // (from the original)
    r0_2->half_2 = u16(r6);
    *gptr<u8>(r5 + 0xc94u) = u8(r6);  // (from the original)
    *gptr<u16>(r2) = u16(r6);
    r1 = r5 + 0xc9cu;  // (from the original)
    *gptr<u16>(r2 + 2u) = u16(r6);
    *gptr<u8>(r5 + 0xc9au) = u8(r6);  // (from the original)
    *gptr<u16>(r1) = u16(r6);
    r3 = r5 + 0xca2u;  // (from the original)
    *gptr<u16>(r1 + 2u) = u16(r6);
    *gptr<u8>(r5 + 0xca0u) = u8(r6);  // (from the original)
    *gptr<u16>(r3) = u16(r6);
    *gptr<u16>(r3 + 2u) = u16(r6);
    r4 = 0u;
    *gptr<u8>(r5 + 0xca6u) = u8(r6);  // (from the original)
    do {
        call_00615508(r5 + (r4 << 4) + 0x968u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x32u);  // (from the original)
    *gptr<u32>(r5 + 0xc88u) = r6;  // (from the original)
    *gptr<u32>(r5 + 0xc8cu) = r6;  // (from the original)
    return;
}

}  // namespace d_002e9d28
GUEST_EXPORT_FRAMED(0x002e9d28, d_002e9d28::f_002e9d28, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9dcc {

struct __attribute__((packed)) Object_002e9dcc_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_002e9dcc_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9dcc_0, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e9dcc_r0_5 {
    u8 unknown_0[0xc88];  // (not used here)
    u32 word_c88;
    u32 word_c8c;
};
GUEST_OFFSET(Local_002e9dcc_r0_5, word_c88, 0xc88);  // (from the original)
GUEST_OFFSET(Local_002e9dcc_r0_5, word_c8c, 0xc8c);  // (from the original)

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00615508, u32(u32, u32, u32, u32)> call_00615508;  // (from the original)

u32 f_002e9dcc(gptr<Object_002e9dcc_0> arg0) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    u32 r0_2 = call_00301d0c(r0 + 8u, 0x61537cu, 0x30u, 0x32u);  // (from the original)
    u32 r0_4 = call_00301d0c(r0_2 + 0x960u, 0x615520u, 0x10u, 0x32u);  // (from the original)
    gptr<Local_002e9dcc_r0_5> r0_5 = gptr<Local_002e9dcc_r0_5>(r0_4 - 0x968u);  // (from the original)
    r0_5->word_c88 = 0;
    r0_5->word_c8c = 0;
    u32 r0_7 = call_00301d0c(r0_5.addr() + 0xc90u, 0x2e9cf0u, 6u, 4u);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    u32 r5 = r0_7 - 0xc90u;  // (from the original)
    u32 r4 = 0u;
    do {
        call_00615508(r5 + (r4 << 4) + 0x968u, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 0x32u);  // (from the original)
    return r5;
}

}  // namespace d_002e9dcc
GUEST_EXPORT_FRAMED(0x002e9dcc, d_002e9dcc::f_002e9dcc, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002e9e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9e64 {

struct __attribute__((packed)) Object_002e9e64_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002e9e64_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_1, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_3, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_4, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002e9e64_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_ea_5, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002e9e64_r9_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002e9e64_r9_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002e9e64_r9_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002e9e64_r9_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002eab00, u32(u32, u32, u32, u32)> call_002eab00;  // (from the original)
inline constexpr guest::Function<0x002eaf8c, u32(u32, u32, u32, u32)> call_002eaf8c;  // (from the original)
inline constexpr guest::Function<0x002eb0b4, u32(u32, u32, u32, u32)> call_002eb0b4;  // (from the original)
inline constexpr guest::Function<0x002eb5d0, u32(u32, u32, u32, u32)> call_002eb5d0;  // (from the original)
inline constexpr guest::Function<0x002eb830, u32(u32, u32, u32, u32)> call_002eb830;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb4a0, u32(u32, u32, u32, u32)> call_002fb4a0;  // (from the original)
inline constexpr guest::Function<0x0030a488, u32(u32, u32, u32, u32)> call_0030a488;  // (from the original)

u32 f_002e9e64(gptr<Object_002e9e64_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r13 = guest::cpu()->r[13];
    u32 r0_2 = 0;
    u32 r2_1 = 0;
    u32 r3_1 = 0;
    u32 r8_1 = 0;
    gptr<Local_002e9e64_ea_1> ea_1 = gptr<Local_002e9e64_ea_1>(0u);
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    gptr<Local_002e9e64_ea_2> ea_2 = gptr<Local_002e9e64_ea_2>(0u);
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_3 = 0;
    gptr<Local_002e9e64_r9_1> r9_1 = gptr<Local_002e9e64_r9_1>(0u);
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r0_8 = 0;
    u32 r1_5 = 0;
    u32 r0_9 = 0;
    u32 r1_6 = 0;
    u32 r2_5 = 0;
    u32 r3_3 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r1_7 = 0;
    u32 r0_12 = 0;
    u32 r2_6 = 0;
    u32 r3_4 = 0;
    u32 r1_8 = 0;
    u32 r0_13 = 0;
    gptr<Local_002e9e64_ea_3> ea_3 = gptr<Local_002e9e64_ea_3>(0u);
    u32 r0_14 = 0;
    u32 r1_9 = 0;
    u32 r2_7 = 0;
    u32 r0_15 = 0;
    u32 r1_10 = 0;
    gptr<Local_002e9e64_ea_4> ea_4 = gptr<Local_002e9e64_ea_4>(0u);
    u32 r1_11 = 0;
    u32 r3_5 = 0;
    u32 r0_16 = 0;
    r13 -= 0x60u;  // (from the original)
    u32 r5_1 = 0u;
    u32 r0_1 = arg0->byte_0;
    if ((r0_1 & 1u) == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0_2 = call_002fb378(r0_1, r1, r2, r3);
    r2_1 = guest::cpu()->r[2];
    r3_1 = guest::cpu()->r[3];
    r8_1 = *gptr<u32>(r0_2);
    ea_1 = gptr<Local_002e9e64_ea_1>(r0_2 + 4u);
    r6_1 = ea_1->word_0;
    r7_1 = ea_1->word_4;
    r1_1 = r0 + 9u;
    r0_3 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_3, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r0 + 0x11u;  // (from the original)
    r0_4 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_4, r1_2, r2_2, r3_2);
    ea_2 = gptr<Local_002e9e64_ea_2>(r13 + 0x14u);  // (from the original)
    r0_5 = ea_2->word_0;
    r1_3 = ea_2->word_4;
    r2_3 = ea_2->word_8;
    r9_1 = gptr<Local_002e9e64_r9_1>(r13 + 8u);
    *gptr<u32>(r13) = 0;
    r9_1->word_0 = r0_5;
    r9_1->word_4 = r1_3;
    r9_1->word_8 = r2_3;
    r0_6 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    call_0030a488(r0_6, 0u, 0x15u, 0u);  // (from the original)
    *gptr<u32>(r13) = r6_1;
    *gptr<u32>(r13 + 4) = r7_1;
    r0_7 = r9_1->word_0;
    r1_4 = r9_1->word_4;
    r2_4 = r9_1->word_8;
    guest::cpu()->r[13] = r13;
    r0_8 = call_002fb4a0(r0_7, r1_4, r2_4, r8_1);
    r1_5 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0_9 = call_002fb328(r0_8, r1_5, r2, r3);
    r1_6 = guest::cpu()->r[1];
    r2_5 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_10 = r0_9 + 0x80u + 0x6e212u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_11 = call_002fb338(r0_10, r1_6, r2_5, r3_3);
    r1_7 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0_12 = call_002fb328(r0_11, r1_7, r2, r3);
    r2_6 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r1_8 = r0_12 + 0x80u + 0x6e212u;  // (from the original)
    r0_13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r0_13, r1_8, r2_6, r3_4);
    ea_3 = gptr<Local_002e9e64_ea_3>(r13 + 0x38u);  // (from the original)
    r0_14 = ea_3->word_0;
    r1_9 = ea_3->word_4;
    r2_7 = ea_3->word_8;
    *gptr<u32>(r13) = r6_1;
    *gptr<u32>(r13 + 4) = r7_1;
    guest::cpu()->r[13] = r13;
    r0_15 = call_002fb4a0(r0_14, r1_9, r2_7, r8_1);
    r1_10 = guest::cpu()->r[1];
    if (r0_15 == 0) {
        r13 += 0x60u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_15;
    }
    ea_4 = gptr<Local_002e9e64_ea_4>(r13 + 0x18u);  // (from the original)
    r1_11 = ea_4->word_4;
    *gptr<u32>(r13) = ea_4->word_0;
    *gptr<u32>(r13 + 4) = r1_11;
    r3_5 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_16 = call_002fb4a0(r8_1, r6_1, r7_1, r3_5);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        gptr<Local_002e9e64_ea_5> ea_5 = gptr<Local_002e9e64_ea_5>(r13 + 0x30u);  // (from the original)
        u32 r1_12 = ea_5->word_4;
        *gptr<u32>(r13) = ea_5->word_0;
        *gptr<u32>(r13 + 4) = r1_12;
        u32 r3_6 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0_15 = call_002fb4a0(r8_1, r6_1, r7_1, r3_6);
        r1_10 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_15 != 0) {
            r13 += 0x60u;  // (from the original)
            guest::cpu()->r[13] = r13;
            return r0_15;
        }
    }
    r5_1 = 1u;
L_2e9f7c:;
    guest::cpu()->r[13] = r13;
    call_002eaf8c(r0, r5_1, r2, r3);
    u32 r1_13 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_7 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002eb0b4(r0, r1_13, r2_8, r3_7);
    guest::cpu()->r[13] = r13;
    call_002eab00(r0, 1u, 0u, 1u);
    u32 r2_9 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_002eb5d0(r0, 0u, r2_9, r3_8);
    r1_10 = guest::cpu()->r[1];
    u32 r2_10 = guest::cpu()->r[2];
    u32 r3_9 = guest::cpu()->r[3];
    r0_15 = arg0->byte_0;
    if ((r0_15 & 1u) == 0 || (r0_15 & 0x80u) != 0) {  // (from the original)
        r13 += 0x60u;  // (from the original)
        guest::cpu()->r[13] = r13;
        return r0_15;
    }
    r13 += 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002eb830(r0, r1_10, r2_10, r3_9);
}

}  // namespace d_002e9e64
GUEST_EXPORT(0x002e9e64, d_002e9e64::f_002e9e64);

// f_002e9fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9fe4 {

struct __attribute__((packed)) Local_002e9fe4_r5_1 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002e9fe4_r5_1, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_002e9fe4_r5_1, half_36, 0x36);  // (from the original)
GUEST_OFFSET(Local_002e9fe4_r5_1, half_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002e9fe4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r0_1 = 0;
    u32 r3_1 = 0;
    u32 r1_2 = 0;
    u32 r0_2 = 0;
    u32 r3_2 = 0;
    u32 r0_3 = 0;
    u32 r1_3 = 0;
    u32 r0_4 = 0;
    u32 r1_4 = 0;
    u32 r0_5 = 0;
    *frame.at<u32>(0) = r3;
    u32 r6_1 = r0 + 0x13eu;  // (from the original)
    u32 r7_1 = r0 + 0x142u;  // (from the original)
    gptr<Local_002e9fe4_r5_1> r5_1 = gptr<Local_002e9fe4_r5_1>(r0 + 0x100u);  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ea04c;
        }
        if (r1 != 2u) {
            guest::cpu()->r[1] = r1;
            return r0;
        }
        goto L_2ea078;
    }
    r1_1 = r0 + 0x48u;  // (from the original)
    r0_1 = r0 + 0x1au;  // (from the original)
    call_001b4a8c(r0_1, r1_1, guest::cpu()->r[2], r3);
    r3_1 = guest::cpu()->r[3];
    r1_2 = r0 + 0xd4u;  // (from the original)
    r0_2 = r0 + 0xa4u;  // (from the original)
    call_00613de4(r0_2, r1_2, guest::cpu()->r[2], r3_1);
    r3_2 = guest::cpu()->r[3];
    r5_1->half_34 = u16(u32(r5_1->half_36));
    r0_3 = r0 + 0x13au;  // (from the original)
    call_002fc8e8(r0_3, r6_1, guest::cpu()->r[2], r3_2);
    r3 = guest::cpu()->r[3];
L_2ea04c:;
    r1_3 = r0 + 0x76u;  // (from the original)
    r0_4 = r0 + 0x48u;  // (from the original)
    call_001b4a8c(r0_4, r1_3, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1_4 = r0 + 0x104u;  // (from the original)
    r0_5 = r0 + 0xd4u;  // (from the original)
    call_00613de4(r0_5, r1_4, guest::cpu()->r[2], r3);
    r5_1->half_36 = u16(u32(r5_1->half_38));
    call_002fc8e8(r6_1, r7_1, guest::cpu()->r[2], r3);
L_2ea078:;
    call_003052f0(r0 + 0x76u);  // (from the original)
    call_003084d0(r0 + 0x104u);  // (from the original)
    r5_1->half_38 = 0;
    u32 r0_9 = call_002fc934(frame.at(0).addr(), 0x95bfdcu);  // (from the original)
    call_002fc8e8(r7_1, r0_9, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    return frame.at(0).addr();
}

}  // namespace d_002e9fe4
GUEST_EXPORT_FRAMED(0x002e9fe4, d_002e9fe4::f_002e9fe4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002ea0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea0c0 {

inline constexpr guest::Function<0x002eab00, u32(u32, u32, u32, u32)> call_002eab00;  // (from the original)
inline constexpr guest::Function<0x002eb5d0, u32(u32, u32, u32, u32)> call_002eb5d0;  // (from the original)
inline constexpr guest::Function<0x002eb830, u32(u32, u32, u32, u32)> call_002eb830;  // (from the original)

void f_002ea0c0(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    call_002eab00(r0, 1u, 0u, 0u);
    call_002eb5d0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_1 = *gptr<u8>(r0);
    if ((r0_1 & 1u) != 0 && (r0_1 & 0x80u) == 0) {  // (from the original)
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        call_002eb830(r0, r1_1, r2_2, r3_2);
        return;
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return;
}

}  // namespace d_002ea0c0
GUEST_EXPORT(0x002ea0c0, d_002ea0c0::f_002ea0c0);

// f_002ea10c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea10c {

struct __attribute__((packed)) Local_002ea10c_r5_1 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002ea10c_r5_1, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_002ea10c_r5_1, half_36, 0x36);  // (from the original)
GUEST_OFFSET(Local_002ea10c_r5_1, half_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ea10c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r1_12 = 0;
    u32 r0_14 = 0;
    *frame.at<u32>(0x20) = r12;  // (from the original)
    u32 r0_1 = call_00301e20(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return r0_1;
    }
    if (r3 >= 0x400u) {  // (from the original)
        return 0u;
    }
    gptr<Local_002ea10c_r5_1> r5_1 = gptr<Local_002ea10c_r5_1>(r0 + 0x100u);  // (from the original)
    u32 r7_1 = 1u;
    u32 r2_1 = r5_1->half_34;
    u32 zf_1 = r2_1 == r3;
    if (!zf_1) {
        r0_1 = r5_1->half_36;
        zf_1 = r0_1 == r3;
    }
    if (!zf_1) {
        r1_1 = r5_1->half_38;
        zf_1 = r1_1 == r3;
    }
    if (zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r9_1 = r0 + 0x142u;  // (from the original)
    u32 r8_1 = r0 + 0x13eu;  // (from the original)
    if (r3 > r2_1) {
        call_001b4a8c(r0 + 0x76u, r0 + 0x48u, r2_1, r3_1);  // (from the original)
        call_001b4a8c(r0 + 0x48u, r0 + 0x1au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_003052f0(r0 + 0x1au, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_00613de4(r0 + 0x104u, r0 + 0xd4u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r2_5 = guest::cpu()->r[2];
        call_00613de4(r0 + 0xd4u, r0 + 0xa4u, r2_5, guest::cpu()->r[3]);  // (from the original)
        call_00613de4(r0 + 0xa4u, r1, r2_5, guest::cpu()->r[3]);  // (from the original)
        u32 r0_8 = r5_1->half_36;
        u32 r1_7 = r5_1->half_34;
        r5_1->half_34 = u16(r3);
        r5_1->half_38 = u16(r0_8);
        r5_1->half_36 = u16(r1_7);
        call_002fc8e8(r9_1, r8_1);
        u32 r1_8 = r0 + 0x13au;  // (from the original)
        call_002fc8e8(r8_1, r1_8);
        call_002fc8e8(r1_8, r2);
        r1_1 = guest::cpu()->r[1];
        return r7_1;
    }
    if (r0_1 < r3) {
        call_001b4a8c(r0 + 0x76u, r0 + 0x48u, r2_1, r3_1);  // (from the original)
        call_003052f0(r0 + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r2_7 = guest::cpu()->r[2];
        call_00613de4(r0 + 0x104u, r0 + 0xd4u, r2_7, guest::cpu()->r[3]);  // (from the original)
        call_00613de4(r0 + 0xd4u, r1, r2_7, guest::cpu()->r[3]);  // (from the original)
        u32 r0_13 = r5_1->half_36;
        r5_1->half_36 = u16(r3);
        r5_1->half_38 = u16(r0_13);
        call_002fc8e8(r9_1, r8_1);
        r1_12 = r2;
        r0_14 = r8_1;
    } else {
        if (r1_1 >= r3) {
            guest::cpu()->r[1] = r1_1;
            return r7_1;
        }
        call_003052f0(r0 + 0x76u, r1_1, r2_1, r3_1);  // (from the original)
        call_00613de4(r0 + 0x104u, r1, r2_1, guest::cpu()->r[3]);  // (from the original)
        r1_12 = r2;
        r0_14 = r9_1;
        r5_1->half_38 = u16(r3);
    }
    call_002fc8e8(r0_14, r1_12);
    r1_1 = guest::cpu()->r[1];
    return r7_1;
}

}  // namespace d_002ea10c
GUEST_EXPORT_FRAMED(0x002ea10c, d_002ea10c::f_002ea10c, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_002ea294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea294 {


u32 f_002ea294(u32 r0, u32 r1) {
    if (s32(r1) < 3) {
        r1 += (r1 << 1);
        r0 += (r1 << 4);
    }
    guest::cpu()->r[1] = r1;
    return r0 + 0xa4u;  // (from the original)
}

}  // namespace d_002ea294
GUEST_EXPORT(0x002ea294, d_002ea294::f_002ea294);

// f_002ea2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea2bc {

struct __attribute__((packed)) Local_002ea2bc_r5_1 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002ea2bc_r5_1, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_002ea2bc_r5_1, half_36, 0x36);  // (from the original)
GUEST_OFFSET(Local_002ea2bc_r5_1, half_38, 0x38);  // (from the original)

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ea2bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    u32 r0_1 = call_002fbd54(r1, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0 || r3 >= 0x400u) {  // (from the original)
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return r0_1;
    }
    gptr<Local_002ea2bc_r5_1> r5_1 = gptr<Local_002ea2bc_r5_1>(r0 + 0x100u);  // (from the original)
    u32 r8_1 = r0 + 0x142u;  // (from the original)
    u32 r7_1 = r0 + 0x13eu;  // (from the original)
    if (u32(r5_1->half_34) < r3) {
        call_001b4a8c(r0 + 0x76u, r0 + 0x48u, r2_1, r3_1);  // (from the original)
        call_001b4a8c(r0 + 0x48u, r0 + 0x1au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_001b4a8c(r0 + 0x1au, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r2_4 = guest::cpu()->r[2];
        call_00613de4(r0 + 0x104u, r0 + 0xd4u, r2_4, guest::cpu()->r[3]);  // (from the original)
        call_00613de4(r0 + 0xd4u, r0 + 0xa4u, r2_4, guest::cpu()->r[3]);  // (from the original)
        call_003084d0(r0 + 0xa4u);  // (from the original)
        u32 r0_8 = r5_1->half_36;
        u32 r1_6 = r5_1->half_34;
        r5_1->half_34 = u16(r3);
        r5_1->half_38 = u16(r0_8);
        r5_1->half_36 = u16(r1_6);
        call_002fc8e8(r8_1, r7_1);
        u32 r1_7 = r0 + 0x13au;  // (from the original)
        call_002fc8e8(r7_1, r1_7);
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r1_7, r2);
    }
    if (u32(r5_1->half_36) < r3) {
        call_001b4a8c(r0 + 0x76u, r0 + 0x48u, r2_1, r3_1);  // (from the original)
        u32 r2_5 = guest::cpu()->r[2];
        call_001b4a8c(r0 + 0x48u, r1, r2_5, guest::cpu()->r[3]);  // (from the original)
        call_00613de4(r0 + 0x104u, r0 + 0xd4u, r2_5, guest::cpu()->r[3]);  // (from the original)
        call_003084d0(r0 + 0xd4u);  // (from the original)
        u32 r0_13 = r5_1->half_36;
        r5_1->half_36 = u16(r3);
        r5_1->half_38 = u16(r0_13);
        call_002fc8e8(r8_1, r7_1);
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r7_1, r2);
    }
    r0_1 = r5_1->half_38;
    if (r0_1 >= r3) {
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return r0_1;
    }
    call_001b4a8c(r0 + 0x76u, r1, r2_1, r3_1);  // (from the original)
    call_003084d0(r0 + 0x104u);  // (from the original)
    r5_1->half_38 = u16(r3);
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_002fc8e8(r8_1, r2);
}

}  // namespace d_002ea2bc
GUEST_EXPORT(0x002ea2bc, d_002ea2bc::f_002ea2bc);

// f_002ea430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea430 {


u32 f_002ea430(u32 r0, u32 r1) {
    if (s32(r1) >= 3) {
        guest::cpu()->r[1] = r1;
        return r0 + 0x1au;  // (from the original)
    }
    u32 r1_1 = (r1 << 3) - r1 + (r1 << 4);
    guest::cpu()->r[1] = r1_1;
    return r0 + (r1_1 << 1) + 0x1au;  // (from the original)
}

}  // namespace d_002ea430
GUEST_EXPORT(0x002ea430, d_002ea430::f_002ea430);

// f_002eaec8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eaec8 {

struct __attribute__((packed)) Object_002eaec8_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_002eaec8_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002eaec8_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002eaec8_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002eaec8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002eaec8_ea_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002eaec8_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eaec8_ea_5, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_5, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eaec8_ea_5, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_002eaec8_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eaec8_r3_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eaec8_r3_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> call_0058dc80;  // (from the original)

void f_002eaec8(u32 r0, gptr<Object_002eaec8_1> arg1) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r4 = r0;
    u32 r0_1 = arg1->word_0;
    u32 r2_1 = arg1->word_4;
    u32 r1_1 = arg1->word_8;
    gptr<Local_002eaec8_r3_1> r3_1 = gptr<Local_002eaec8_r3_1>(frame.at(4).addr());
    *frame.at<u32>(0xc) = r1_1;  // (from the original)
    r3_1->word_0 = r0_1;
    r3_1->word_4 = r2_1;
    call_00308efc(frame.at(4).addr(), r1_1, r2_1, r3_1.addr());
    u32 r5 = 1u;
    *frame.at<u32>(0) = r5;
    gptr<Local_002eaec8_ea_2> ea_2 = gptr<Local_002eaec8_ea_2>(frame.at(4).addr());
    u32 r0_3 = call_0058dc80(0xcu, ea_2->word_0, ea_2->word_4, ea_2->word_8);  // (from the original)
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    if (r0_3 != 0) {
        call_003014b4(frame.at(4).addr(), 7u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*frame.at<u8>(0xa)) == 6u) {  // (from the original)
        goto L_2eaf40;
    }
    do {
        call_003014b4(frame.at(4).addr(), 1u, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (u32(*frame.at<u8>(0xa)) != 6u);  // (from the original)
L_2eaf40:;
    *frame.at<u32>(0) = r5;
    gptr<Local_002eaec8_ea_4> ea_4 = gptr<Local_002eaec8_ea_4>(frame.at(4).addr());
    u32 r0_6 = call_0058dc80(0xcu, ea_4->word_0, ea_4->word_4, ea_4->word_8);  // (from the original)
    if (r0_6 != 0) {
        gptr<Local_002eaec8_ea_5> ea_5 = gptr<Local_002eaec8_ea_5>(frame.at(4).addr());
        u32 r1_4 = ea_5->word_4;
        u32 r2_5 = ea_5->word_8;
        *gptr<u32>(r4) = ea_5->word_0;
        *gptr<u32>(r4 + 4) = r1_4;
        *gptr<u32>(r4 + 8) = r2_5;
        return;
    }
    call_003014b4(frame.at(4).addr(), 7u, guest::cpu()->r[2], guest::cpu()->r[3]);
    guest::preempt();
    goto L_2eaf40;
}

}  // namespace d_002eaec8
GUEST_EXPORT_FRAMED(0x002eaec8, d_002eaec8::f_002eaec8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002eaf8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eaf8c {

struct __attribute__((packed)) Object_002eaf8c_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002eaf8c_0, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_002eaf8c_r0_14 {
    u8 unknown_0[0x34];  // (not used here)
    u16 half_34;
    u16 half_36;
    u16 half_38;
};
GUEST_OFFSET(Local_002eaf8c_r0_14, half_34, 0x34);  // (from the original)
GUEST_OFFSET(Local_002eaf8c_r0_14, half_36, 0x36);  // (from the original)
GUEST_OFFSET(Local_002eaf8c_r0_14, half_38, 0x38);  // (from the original)

struct __attribute__((packed)) Local_002eaf8c_r0_21 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eaf8c_r0_21, byte_44, 0x44);  // (from the original)

struct __attribute__((packed)) Local_002eaf8c_r1_15 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eaf8c_r1_15, byte_44, 0x44);  // (from the original)

inline constexpr guest::Function<0x0010f48d, u32(u32, u32, u32)> call_0010f48c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32, u32, u32)> call_00303cdc;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32)> call_003084d0;  // (from the original)

void f_002eaf8c(gptr<Object_002eaf8c_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1_14 = 0;
    u32 r5 = r1;
    u32 r0_1 = u32(arg0->byte_0) & 0x70u;  // (from the original)
    arg0->byte_0 = u8(r0_1);
    u32 r0_2 = call_002fae84(r0_1, r1, r2, guest::cpu()->r[3]);
    u32 r0_3 = call_002fb310(r0_2, guest::cpu()->r[1], guest::cpu()->r[2]);
    call_0010f48c(r0_3 + 4u, guest::cpu()->r[1], guest::cpu()->r[2]);
    call_00303cdc(r0 + 1u, guest::cpu()->r[1], guest::cpu()->r[2]);
    call_00303cdc(r0 + 9u, guest::cpu()->r[1], guest::cpu()->r[2]);
    call_00303cdc(r0 + 0x11u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003052f0(r0 + 0x1au, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003052f0(r0 + 0x48u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003052f0(r0 + 0x76u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003084d0(r0 + 0xa4u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003084d0(r0 + 0xd4u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    call_003084d0(r0 + 0x104u, guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
    gptr<Local_002eaf8c_r0_14> r0_14 = gptr<Local_002eaf8c_r0_14>(r0 + 0x100u);  // (from the original)
    u32 r7 = 0u;
    r0_14->half_34 = u16(r7);
    r0_14->half_36 = u16(r7);
    r0_14->half_38 = u16(r7);
    call_002fc8e8(r0 + 0x13au, 0x95bfdcu, guest::cpu()->r[2]);  // (from the original)
    call_002fc8e8(r0 + 0x13eu, 0x95bfdcu, guest::cpu()->r[2]);  // (from the original)
    u32 r0_18 = call_002fc8e8(r0 + 0x142u, 0x95bfdcu, guest::cpu()->r[2]);  // (from the original)
    u32 r0_19 = call_002fae84(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    u32 r6 = r0_19 + 0x20u;  // (from the original)
    u32 r4 = 0u;
    do {
        u32 r0_20 = call_002fb7e8(r6, r4 & 0xffu, r2);  // (from the original)
        r1_14 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_20 != 0) {
            *gptr<u16>(0x8a7eu + r0_20) = u16(r7);  // (from the original)
            if (r5 != 0) {
                gptr<Local_002eaf8c_r1_15> r1_15 = gptr<Local_002eaf8c_r1_15>(r0_20 + 0x8a3cu);  // (from the original)
                r2 = u32(r1_15->byte_44) & ~7u;
                r1_15->byte_44 = u8(r2);
            }
            gptr<Local_002eaf8c_r0_21> r0_21 = gptr<Local_002eaf8c_r0_21>(r0_20 + 0x8a3cu);  // (from the original)
            r1_14 = u32(r0_21->byte_44) & ~8u;
            r0_21->byte_44 = u8(r1_14);
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_14;
    return;
}

}  // namespace d_002eaf8c
GUEST_EXPORT_FRAMED(0x002eaf8c, d_002eaf8c::f_002eaf8c, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002eb0b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eb0b4 {

inline constexpr guest::Function<0x00116e31, u32(u32, u32, u32, u32)> call_00116e30;  // (from the original)
inline constexpr guest::Function<0x00116e4f, u32(u32, u32, u32, u32)> call_00116e4e;  // (from the original)
inline constexpr guest::Function<0x00116e93, u32(u32, u32, u32, u32)> call_00116e92;  // (from the original)
inline constexpr guest::Function<0x00116ea5, u32(u32, u32, u32, u32)> call_00116ea4;  // (from the original)
inline constexpr guest::Function<0x00116f1b, u32(u32, u32, u32, u32)> call_00116f1a;  // (from the original)
inline constexpr guest::Function<0x00118e25, u32(u32, u32, u32, u32)> call_00118e24;  // (from the original)
inline constexpr guest::Function<0x0011a1c9, u32(u32, u32, u32, u32)> call_0011a1c8;  // (from the original)
inline constexpr guest::Function<0x002ea450, u32(u32, u32, u32, u32)> call_002ea450;  // (from the original)
inline constexpr guest::Function<0x002eb3b0, u32(u32, u32, u32, u32)> call_002eb3b0;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fdf10, u32(u32, u32, u32, u32)> call_002fdf10;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003009a9, u32(u32, u32, u32, u32)> call_003009a8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309ccc, u32(u32, u32, u32, u32)> call_00309ccc;  // (from the original)
inline constexpr guest::Function<0x00312ab8, u32(u32, u32, u32, u32)> call_00312ab8;  // (from the original)
inline constexpr guest::Function<0x00312af9, u32(u32, u32, u32, u32)> call_00312af8;  // (from the original)
inline constexpr guest::Function<0x0058e2e4, u32(u32, u32, u32, u32)> call_0058e2e4;  // (from the original)
inline constexpr guest::Function<0x0058ec08, u32(u32, u32, u32, u32)> call_0058ec08;  // (from the original)
inline constexpr guest::Function<0x005cddb4, u32(u32, u32, u32, u32)> call_005cddb4;  // (from the original)

void f_002eb0b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x48);  // the original's stack frame
    u32 r0_14 = 0;
    u32 r0_15 = 0;
    u32 r0_16 = 0;
    u32 r0_19 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r0_20 = 0;
    u32 r5_1 = 0;
    u32 r0_21 = 0;
    u32 r2_11 = 0;
    u32 r3_10 = 0;
    u32 r0_22 = 0;
    u32 r1_8 = 0;
    u32 r2_12 = 0;
    u32 r3_11 = 0;
    u32 r0_23 = 0;
    u32 r0_24 = 0;
    u32 r1_9 = 0;
    u32 r2_13 = 0;
    u32 r3_12 = 0;
    u32 r0_25 = 0;
    u32 r2_14 = 0;
    u32 r3_13 = 0;
    u32 r0_26 = 0;
    u32 r0_27 = 0;
    u32 r2_15 = 0;
    u32 r3_14 = 0;
    u32 r1_10 = 0;
    u32 r0_28 = 0;
    u32 r0_29 = 0;
    u32 r6 = r0;
    u32 r0_1 = call_002fdf10(0xcu, r1, r2, r3);  // (from the original)
    if (r0_1 == 0) {
        return;
    }
    *gptr<u8>(r6) = u8(u32(*gptr<u8>(r6)) | 1u);
    call_0058ec08(0xcu, frame.at(0x1c).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0058e2e4(0xcu, frame.at(0x34).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r8 = 0u;
    *frame.at<u32>(0) = r8;
    call_00312ab8(frame.at(0x1c).addr(), r8, 3u, r8);  // (from the original)
    *frame.at<u32>(0) = r8;
    call_00312ab8(frame.at(0x34).addr(), 0u, ~3u, 0u);  // (from the original)
    call_005cddb4(r6 + 1u, frame.at(0x1c).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005cddb4(r6 + 9u, frame.at(0x1c).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_005cddb4(r6 + 0x11u, frame.at(0x34).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r3_6 = guest::cpu()->r[3];
    if ((u32(*gptr<u8>(r6)) >> 4) == 0) {
        u32 r0_7 = call_002ff6f8(2u, guest::cpu()->r[1], guest::cpu()->r[2], r3_6);
        r3_6 = guest::cpu()->r[3];
        *gptr<u8>(r6) = u8(u32(*gptr<u8>(r6)) & 0x8fu | 0x70u & r0_7 + 1u << 4);  // (from the original)
    }
    call_00116ea4(frame.at(0x28).addr(), 0xau, 1u, r3_6);  // (from the original)
    u32 r4 = 0u;
    u32 r0_10 = call_00301e20(r6 + 0x104u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        return;
    }
L_2eb1a4:;
    u32 r7 = frame.at(0x28).addr();  // (from the original)
    u32 r5 = 0u;
    call_00116e92(frame.at(0x10).addr(), r7, r2, r3);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 == 0) {
        do {
            *frame.at<u32>(0) = r5;
            u32 r0_12 = call_002eb3b0(r6, r4, 0u, 0u);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 == 0) {
                call_00116e4e(frame.at(0x10).addr(), r4, r2, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 0xa);  // (from the original)
    }
    if (*frame.at<u32>(0x18) == 0) {  // (from the original)
        goto L_2eb220;
    }
L_2eb20c:;
    r0_14 = frame.at(0x10).addr();  // (from the original)
    r0_15 = call_002fe418(r0_14, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0_15;
    goto L_2eb30c;
L_2eb220:;
    r0_16 = frame.at(0x10).addr();  // (from the original)
    call_00116f1a(r0_16, r7, r2, r3);
    r4 = 0u;
    do {
        *frame.at<u32>(0) = r8;
        u32 r0_17 = call_002eb3b0(r6, r4, 1u, 0u);
        u32 r2_9 = guest::cpu()->r[2];
        u32 r3_8 = guest::cpu()->r[3];
        u32 zf_1 = r0_17 == 0;
        u32 r0_18 = frame.at(0x10).addr();  // (from the original)
        if (zf_1) {
            call_00116e4e(r0_18, r4, r2_9, r3_8);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            call_00116e30(r0_18, r4, r2_9, r3_8);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    r0 = *frame.at<u32>(0x18);  // (from the original)
    if (r0 == 0) {
        r4 = 0u;
    } else {
        guest::preempt();
        goto L_2eb20c;
    }
L_2eb28c:;
    r0_19 = call_002fb328(r0, r1, r2, r3);
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    r0_20 = r0_19 + 0x292a4u;  // (from the original)
    r0 = call_003009a8(r0_20, r4, r2_10, r3_9);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5_1 = r0;
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = call_00309ccc(r4, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (s32(r0) >= 0) {
        goto L_2eb370;
    }
    r0 = call_00312af8(r5_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = call_0011a1c8(r5_1, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2eb370;
    }
    r0_21 = call_002fb328(r0, r1, r2, r3);
    r2_11 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_22 = r0_21 + 0x292a4u;  // (from the original)
    r0 = call_00118e24(r0_22, r5_1, r2_11, r3_10);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
L_2eb30c:;
    r1_8 = frame.at(0x10).addr();  // (from the original)
    call_00116f1a(r7, r1_8, r2, r3);
    r2_12 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    if (r4 + 1u == 0) {
        return;
    }
    r0_23 = frame.at(0x28).addr();  // (from the original)
    r0_24 = call_00116e4e(r0_23, r4, r2_12, r3_11);
    r1_9 = guest::cpu()->r[1];
    r2_13 = guest::cpu()->r[2];
    r3_12 = guest::cpu()->r[3];
    r0_25 = call_002fb328(r0_24, r1_9, r2_13, r3_12);
    r2_14 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_26 = r0_25 + 0x292a4u;  // (from the original)
    r0_27 = call_003009a8(r0_26, r4, r2_14, r3_13);
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r1_10 = r0_27;
    if (r0_27 == 0) {
        goto L_2eb390;
    }
    r0_28 = call_002ea450(r6, r1_10, r2_15, r3_14);
    r1_10 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    if (r0_28 == 0) {
        goto L_2eb384;
    }
    goto L_2eb390;
L_2eb370:;
    r4 += 1u;
    if (s32(r4) < 0xa) {  // (from the original)
        guest::preempt();
        goto L_2eb28c;
    }
    return;
L_2eb384:;
    r0_29 = frame.at(0x28).addr();  // (from the original)
    call_00116e30(r0_29, r4, r2_15, r3_14);
    r1_10 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
L_2eb390:;
    r4 = 1u;
    u32 r0_31 = call_00301e20(r6 + 0x104u, r1_10, r2_15, r3_14);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_31 == 0) {
        guest::preempt();
        goto L_2eb1a4;
    }
    return;
}

}  // namespace d_002eb0b4
GUEST_EXPORT_FRAMED(0x002eb0b4, d_002eb0b4::f_002eb0b4, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_002eb5d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eb5d0 {

struct __attribute__((packed)) Local_002eb5d0_ea_1 {
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
GUEST_OFFSET(Local_002eb5d0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002eb5d0_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eb5d0_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_3, word_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_002eb5d0_ea_4 {
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
GUEST_OFFSET(Local_002eb5d0_ea_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_ea_4, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002eb5d0_r0_22 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
};
GUEST_OFFSET(Local_002eb5d0_r0_22, byte_44, 0x44);  // (from the original)

struct __attribute__((packed)) Local_002eb5d0_r10_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_002eb5d0_r10_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_r10_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002eb5d0_r10_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb338, u32(u32, u32, u32, u32)> call_002fb338;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x002fb7e8, u32(u32, u32, u32, u32)> call_002fb7e8;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff368, u32(u32, u32, u32, u32)> call_002ff368;  // (from the original)
inline constexpr guest::Function<0x002ff4d4, u32(u32, u32, u32, u32)> call_002ff4d4;  // (from the original)
inline constexpr guest::Function<0x00306354, u32(u32, u32, u32, u32)> call_00306354;  // (from the original)
inline constexpr guest::Function<0x00309fbc, u32(u32, u32, u32, u32)> call_00309fbc;  // (from the original)
inline constexpr guest::Function<0x00314278, u32(u32, u32, u32, u32)> call_00314278;  // (from the original)
inline constexpr guest::Function<0x0056c3ec, u32(u32, u32, u32, u32)> call_0056c3ec;  // (from the original)
inline constexpr guest::Function<0x006bbd54, u32(u32, u32, u32, u32)> call_006bbd54;  // (from the original)
inline constexpr guest::Function<0x0071a0b0, u32(u32, u32, u32, u32)> call_0071a0b0;  // (from the original)
inline constexpr guest::Function<0x00768138, u32(u32, u32, u32, u32)> call_00768138;  // (from the original)

void f_002eb5d0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2c0);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    gptr<Local_002eb5d0_r10_1> r10_1 = gptr<Local_002eb5d0_r10_1>(0u);
    u32 r0_5 = 0;
    u32 r1_3 = 0;
    u32 r2_2 = 0;
    u32 r0_7 = 0;
    u32 r2_3 = 0;
    u32 r3_2 = 0;
    u32 r1_4 = 0;
    u32 r6_3 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_3 = 0;
    u32 r0_9 = 0;
    u32 r1_5 = 0;
    u32 r2_5 = 0;
    u32 r3_4 = 0;
    u32 r0_17 = 0;
    u32 r0_18 = 0;
    u32 r3_8 = 0;
    u32 r0_19 = 0;
    u32 r0_20 = 0;
    u32 r0_21 = 0;
    gptr<Local_002eb5d0_r0_22> r0_22 = gptr<Local_002eb5d0_r0_22>(0u);
    gptr<Local_002eb5d0_ea_1> ea_1 = gptr<Local_002eb5d0_ea_1>(frame.at(0x29c).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r14;
    r5 = r0;
    r7 = r1;
    call_0056c3ec(frame.at(0).addr(), r1, r2, r3);
    u32 r6_1 = *frame.at<u32>(8);
    u32 r4_1 = *frame.at<u32>(0);
    u32 r8_1 = *frame.at<u32>(4);
    u32 r0_3 = call_002fb338(r5 + 9u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 1u;
    if (r0_3 == 0) {
        goto L_2eb6b4;
    }
    r1_2 = r5 + 9u;
    r0_4 = frame.at(8).addr();
    call_002fb430(r0_4, r1_2, r2, r3);
    r10_1 = gptr<Local_002eb5d0_r10_1>(frame.at(8).addr());
    *frame.at<u32>(4) = r6_1;
    *frame.at<u32>(0) = r8_1;
    r0_5 = r10_1->word_0;
    r1_3 = r10_1->word_4;
    r2_2 = r10_1->word_8;
    r0_3 = call_00314278(r0_5, r1_3, r2_2, r4_1);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_3 == 0) {
        r4 = 0u;
    } else {
        goto L_2eb6b4;
    }
    do {
        u32 r6_2 = r5 + ((r4 << 3) - r4 + (r4 << 4) << 1);
        r0_3 = call_002fbd54(r6_2 + 0x1au, r1, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 == 0) {
            goto L_2eb6a8;
        }
        r0_7 = call_002fb328(r0_3, r1, r2, r3);
        r2_3 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
        r1_4 = r6_2 + 0x1au;  // (from the original)
        r6_3 = r0_7 + 0xa0u;  // (from the original)
        r0_8 = call_0071a0b0(r6_3, r1_4, r2_3, r3_2);
        r2_4 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
        r0_9 = call_00309fbc(r6_3, r0_8, r2_4, r3_3);
        r1_5 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r0_3 = call_002fb96c(r0_9, r1_5, r2_5, r3_4);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u8>(r5);
        if ((r1 & 2u) != 0 || r0_3 == 0) {
            goto L_2eb6a8;
        }
        r0_3 += 0x8a3cu;  // (from the original)
        r1 = u32(*gptr<u8>(r0_3 + 0x44u)) | lsl_r(r9, r4 & 0xff);  // (from the original)
        *gptr<u8>(r0_3 + 0x44u) = u8(r1);  // (from the original)
L_2eb6a8:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 3);
L_2eb6b4:;
    if (s32(r7) > 0) {
        u32 r0_10 = call_002fae84(r0_3, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r10 = 0x7ffeu;  // (from the original)
        r8 = 0u;
        r11 = r8;
        *frame.at<u32>(0x290) = r0_10 + 0x20u;  // (from the original)
        do {
            u32 r0_12 = call_002fb7e8(*frame.at<u32>(0x290), r8 & 0xffu, r2, r3);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_12 != 0) {
                r1 = r0_12 + 0x55a6u;  // (from the original)
                r4 = 0u;
                r6 = r0_12 + 0x8a80u;  // (from the original)
                *frame.at<u32>(0x298) = r0_12 + 0x8a3cu;  // (from the original)
                *frame.at<u32>(0x294) = r1;  // (from the original)
                do {
                    u32 r5_1 = lsl_r(r9, r4 & 0xff);  // (from the original)
                    if ((u32(*gptr<u8>(r6)) & r5_1) != 0) {
                        call_002ff368(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
                        call_006bbd54(frame.at(0xc).addr(), 0x29u, 0x10u, guest::cpu()->r[3]);  // (from the original)
                        u32 r7_1 = r10;
                        if (r4 == 0) {
                            r7_1 = 0x2cdcu;  // (from the original)
                            goto L_2eb75c;
                        }
                        if (r4 == 1u) {
                            r7_1 = 0x2cddu;  // (from the original)
                            goto L_2eb75c;
                        }
                        if (r4 == 2u) {
                            r7_1 = 0x2cdeu;  // (from the original)
                        }
L_2eb75c:;
                        *frame.at<u32>(0) = frame.at(0xc).addr();  // (from the original)
                        gptr<Local_002eb5d0_ea_3> ea_3 = gptr<Local_002eb5d0_ea_3>(frame.at(4).addr());
                        ea_3->word_0 = 0x11;  // (from the original)
                        ea_3->word_4 = r11;
                        u32 r0_16 = call_00306354(frame.at(0x10).addr(), 0x88e708u, r4 + 1u, *frame.at<u32>(0x294));  // (from the original)
                        u32 r1_7 = guest::cpu()->r[1];
                        u32 r2_7 = guest::cpu()->r[2];
                        u32 r3_7 = guest::cpu()->r[3];
                        if (r0_16 == 0) {
                            goto L_2eb7e8;
                        }
                        r0_17 = frame.at(0).addr();
                        r0_18 = call_002fcbb0(r0_17, r7_1, r2_7, r3_7);
                        r3_8 = guest::cpu()->r[3];
                        r0_19 = frame.at(0x10).addr();  // (from the original)
                        call_00768138(r0_19, r0_18, 0u, r3_8);
                        r0_20 = frame.at(0x10).addr();  // (from the original)
                        r0_21 = call_002ff4d4(r0_20, 1u, 1u, 0u);
                        r1_7 = guest::cpu()->r[1];
                        r2_7 = guest::cpu()->r[2];
                        r3_7 = guest::cpu()->r[3];
                        if (r0_21 == 0) {
                            goto L_2eb7e8;
                        }
                        r0_22 = gptr<Local_002eb5d0_r0_22>(*frame.at<u32>(0x298));  // (from the original)
                        r1_7 = u32(r0_22->byte_44) & ~r5_1;
                        r0_22->byte_44 = u8(r1_7);
L_2eb7e8:;
                        call_002f77e8(frame.at(0x10).addr(), r1_7, r2_7, r3_7);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                    r4 += 1u;
                    guest::preempt();
                } while (r4 < 3u);
            }
            r8 += 1u;
            guest::preempt();
        } while (r8 < 4u);
    }
    gptr<Local_002eb5d0_ea_4> ea_4 = gptr<Local_002eb5d0_ea_4>(frame.at(0x29c).addr());  // (from the original)
    u32 r4_2 = ea_4->word_0;
    u32 r5_2 = ea_4->word_4;
    u32 r6_4 = ea_4->word_8;
    u32 r7_2 = ea_4->word_c;
    u32 r8_2 = ea_4->word_10;
    u32 r9_1 = ea_4->word_14;
    u32 r10_2 = ea_4->word_18;
    u32 r11_1 = ea_4->word_1c;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return;
}

}  // namespace d_002eb5d0
GUEST_EXPORT(0x002eb5d0, d_002eb5d0::f_002eb5d0);

// f_002eba64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eba64 {


u32 f_002eba64(u32 r0, u32 r1, u32 r2) {
    u32 res_1 = r1 - 2u;
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 vf_1 = ((r1 ^ 2u) & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 != vf_1) {
        u32 res_2 = r2 - 2u;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        vf_1 = ((r2 ^ 2u) & (r2 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 != vf_1) {
        r0 = r0 + (r2 << 0xb) + (r1 << 0xa);  // (from the original)
    }
    return r0 + 0x22u;  // (from the original)
}

}  // namespace d_002eba64
GUEST_EXPORT(0x002eba64, d_002eba64::f_002eba64);

// f_002eba7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eba7c {


u32 f_002eba7c(u32 r0, u32 r1) {
    if (r1 < 2u) {
        r0 += (r1 << 2);
    }
    return r0 + 0x1022u;  // (from the original)
}

}  // namespace d_002eba7c
GUEST_EXPORT(0x002eba7c, d_002eba7c::f_002eba7c);

// f_002eba90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eba90 {

struct __attribute__((packed)) Object_002eba90_0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Object_002eba90_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002eba90_0, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_002eba90_r0_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_002eba90_r0_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002eba90_r0_2, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095c000> global_0095c000;  // (from the original)
inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x00612cec, u32(u32, u32, u32)> call_00612cec;  // (from the original)
inline constexpr guest::Function<0x006efd40, u32(u32, u32, u32)> call_006efd40;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32)> call_00748284;  // (from the original)

void f_002eba90(gptr<Object_002eba90_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = 0;
    u32 r0_1 = 0;
    gptr<Local_002eba90_r0_2> r0_2 = gptr<Local_002eba90_r0_2>(0u);
    u32 r0_3 = 0;
    u32 r0_11 = 0;
    u32 r7 = r0;
    arg0->byte_0 = 3;
    arg0->byte_1 = 3;
    if ((*global_0095c000 & 1u) != 0) {
        goto L_2ebb0c;
    }
    r0_1 = call_002fe7dc(0x95c000u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    r2 = guest::cpu()->r[2];
    if (r0_1 == 0) {
        goto L_2ebb0c;
    }
    r0_2 = gptr<Local_002eba90_r0_2>(frame.at(0x10).addr());  // (from the original)
    r0_2->word_0 = 3;
    r0_2->word_4 = 3;
    r0_3 = call_0052f074(r0_2.addr(), 3u, 3u);
    call_0052f200(0xad5384u, r0_3, r0_2.addr());  // (from the original)
    r2 = 0x100000u;  // (from the original)
L_2ebb0c:;
    call_0074824c(frame.at(0).addr(), 0xad5384u, r2, guest::cpu()->r[3]);  // (from the original)
    call_00748284(frame.at(0x10).addr(), 0xad5384u, guest::cpu()->r[2]);  // (from the original)
    u32 r0_7 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_7 != 0) {
        do {
            call_00612cec((r7 + (*frame.at<u32>(0x1c) << 3)) + (*frame.at<u32>(0x18) << 1) + 2u, r1, r2);  // (from the original)
            call_0052f144(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);  // (from the original)
            r0_11 = call_007481ec(frame.at(0).addr(), frame.at(0x10).addr(), guest::cpu()->r[2]);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_11 != 0);
    }
    u32 r6 = 0u;
    do {
        r4 = 0u;
        u32 r5 = r7 + (r6 << 0xb);  // (from the original)
        do {
            call_006efd40(r5 + (r4 << 0xa) + 0x22u, r1, r2);  // (from the original)
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r4 += 1u;
            guest::preempt();
        } while (s32(r4) < 2);
        r6 += 1u;
        guest::preempt();
    } while (s32(r6) < 2);
    r4 = 0u;
    do {
        call_0024ea1c(r7 + (r4 << 2) + 0x1022u, r1, r2);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002eba90
GUEST_EXPORT_FRAMED(0x002eba90, d_002eba90::f_002eba90, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_002ebd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ebd48 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> call_0024dbc0;  // (from the original)

void f_002ebd48(u32 r0, u32 r1) {
    if (r1 >= 4u) {
        return;
    }
    u32 r2_1 = s32(s16(r1)) * s32(s16(0x245u));  // (from the original)
    call_0024dbc0(r0 + (r2_1 << 3), r1, r2_1, guest::cpu()->r[3]);
    return;
}

}  // namespace d_002ebd48
GUEST_EXPORT(0x002ebd48, d_002ebd48::f_002ebd48);

// f_002ebd68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ebd68 {

inline constexpr guest::Function<0x001de818, u32(u32, u32, u32, u32)> call_001de818;  // (from the original)

void f_002ebd68(u32 r0) {
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_001de818(r5 + (r4 * 0x245u << 3), r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002ebd68
GUEST_EXPORT_FRAMED(0x002ebd68, d_002ebd68::f_002ebd68, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ebd9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ebd9c {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> call_0024dbc0;  // (from the original)

void f_002ebd9c(u32 r0) {
    u32 r1_1 = 0;
    u32 r5 = r0;
    u32 r4 = 0u;
    do {
        call_0024dbc0(r5 + (r4 * 0x245u << 3), r4, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    guest::cpu()->r[1] = r1_1;
    return;
}

}  // namespace d_002ebd9c
GUEST_EXPORT_FRAMED(0x002ebd9c, d_002ebd9c::f_002ebd9c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ebdd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ebdd0 {

inline constexpr guest::Function<0x0010a1a5, u32(u32, u32, u32, u32)> call_0010a1a4;  // (from the original)

void f_002ebdd0(u32 r0, u32 r1) {
    u32 r5 = r0;
    u32 r6 = r1;
    u32 r4 = 0u;
    do {
        call_0010a1a4(r5 + (r4 * 0x245u << 3), r4, r6, guest::cpu()->r[3]);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 4u);
    return;
}

}  // namespace d_002ebdd0
GUEST_EXPORT_FRAMED(0x002ebdd0, d_002ebdd0::f_002ebdd0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ed1ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ed1ec {

struct __attribute__((packed)) Object_002ed1ec_0 {
    u8 unknown_0[0x3bc];  // (not used here)
    u32 word_3bc;
    u8 unknown_3c0[0x925];  // (not used here)
    u8 byte_ce5;
};
GUEST_OFFSET(Object_002ed1ec_0, word_3bc, 0x3bc);  // (from the original)
GUEST_OFFSET(Object_002ed1ec_0, byte_ce5, 0xce5);  // (from the original)

inline guest::global<u32, 0x0084518c> global_0084518c;  // (from the original)
inline guest::global<u32, 0x00845190> global_00845190;  // (from the original)
inline constexpr guest::Function<0x002ed224, u32(u32, u32, u32, u32)> call_002ed224;  // (from the original)
inline constexpr guest::Function<0x008196f4, u32(u32, u32, u32)> call_008196f4;  // (from the original)

void f_002ed1ec(gptr<Object_002ed1ec_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    if (u32(arg0->byte_ce5) != 0) {
        return;
    }
    arg0->word_3bc = r1;
    call_002ed224(r0, r1, r2, guest::cpu()->r[3]);
    call_008196f4(r0, *global_0084518c, *global_00845190);
    return;
}

}  // namespace d_002ed1ec
GUEST_EXPORT_FRAMED(0x002ed1ec, d_002ed1ec::f_002ed1ec, 0x4010);  // pushes {r4, lr} first, as the original

// f_002edcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002edcb0 {

inline constexpr guest::Function<0x001323bc, u32(u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32)> call_00569e6c;  // (from the original)

void f_002edcb0(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    u32 r0_1 = call_001323bc(r0);
    guest::cpu()->r[13] += 8u;
    call_00569e6c(r0_1, r0 + 0x270u, 1u);  // (from the original)
    return;
}

}  // namespace d_002edcb0
GUEST_EXPORT(0x002edcb0, d_002edcb0::f_002edcb0);

// f_002edccc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002edccc {

struct __attribute__((packed)) Object_002edccc_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002edccc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002edccc_0, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x0084517c> global_0084517c;  // (from the original)
inline guest::global<u32, 0x00845180> global_00845180;  // (from the original)

u32 f_002edccc(gptr<Object_002edccc_0> arg0) {
    u32 r3_1 = arg0->word_c;
    u32 r2_1 = *global_0084517c;
    u32 r1_1 = *global_00845180;
    if (r3_1 != r2_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    if (r3_1 == 0) {
        if (((arg0->word_10 | r1_1) & 1u) == 0) {
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
    }
    if (arg0->word_10 != r1_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_002edccc
GUEST_EXPORT(0x002edccc, d_002edccc::f_002edccc);

// f_002ee3a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee3a8 {

struct __attribute__((packed)) Object_002ee3a8_0 {
    u8 unknown_0[0xce4];  // (not used here)
    u8 byte_ce4;
};
GUEST_OFFSET(Object_002ee3a8_0, byte_ce4, 0xce4);  // (from the original)

struct __attribute__((packed)) Local_002ee3a8_r5_1 {
    u8 unknown_0[0x4a4];  // (not used here)
    u32 word_4a4;
};
GUEST_OFFSET(Local_002ee3a8_r5_1, word_4a4, 0x4a4);  // (from the original)

inline constexpr guest::Function<0x00132364, u32(u32, u32, u32, u32)> call_00132364;  // (from the original)
inline constexpr guest::Function<0x001323b4, u32(u32, u32, u32, u32)> call_001323b4;  // (from the original)
inline constexpr guest::Function<0x001fa290, u32(u32, u32)> call_001fa290;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32)> call_002ffb64;  // (from the original)
inline constexpr guest::Function<0x005e2e04, u32(u32, u32)> call_005e2e04;  // (from the original)
inline constexpr guest::Function<0x005e3194, u32(u32, u32)> call_005e3194;  // (from the original)
inline constexpr guest::Function<0x006d1e64, u32(u32, u32)> call_006d1e64;  // (from the original)

void f_002ee3a8(gptr<Object_002ee3a8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r0_10 = 0;
    u32 r7 = r0;
    u32 r8 = r0 + 0xc00u;  // (from the original)
    if (u32(arg0->byte_ce4) == 1u) {
        call_00132364(r7 + 0x24u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    call_001323b4(r7 + 0x270u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r4 = 0u;
    u32 r9 = r4;
    do {
        gptr<Local_002ee3a8_r5_1> r5_1 = gptr<Local_002ee3a8_r5_1>(r7 + (r4 << 2));
        call_005e2e04(r5_1->word_4a4, r1);
        r1 = guest::cpu()->r[1];
        u32 r0_4 = *gptr<u32>(r5_1.addr() + 0x4a4u);  // (from the original)
        if (r0_4 != 0) {
            u32 r0_5 = call_005e3194(r0_4, r1);
            call_002ffb64(r0_5, guest::cpu()->r[1]);
            r1 = guest::cpu()->r[1];
        }
        r4 += 1u;
        res_1 = r4 - 5u;
        r5_1->word_4a4 = r9;
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 5u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    call_005e2e04(*gptr<u32>(r7 + 0x4b8u), r1);  // (from the original)
    r1 = guest::cpu()->r[1];
    u32 r0_7 = *gptr<u32>(r7 + 0x4b8u);  // (from the original)
    if (r0_7 != 0) {
        u32 r0_8 = call_005e3194(r0_7, r1);
        call_002ffb64(r0_8, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r7 + 0x4b8u) = r9;  // (from the original)
    if (u32(*gptr<u8>(r8 + 0xe6u)) != 1u && u32(*gptr<u8>(r8 + 0xe7u)) != 1u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_9 = *gptr<u8>(r8 + 0xe9u);  // (from the original)
    if (r0_9 == 1u) {
        goto L_2ee474;
    }
    r0_10 = call_006d1e64(r0_9, r1);
    r1 = guest::cpu()->r[1];
    *gptr<u8>(r0_10 + 0x40u) = u8(r9);  // (from the original)
    return;
L_2ee474:;
    u32 r0_11 = call_006d1e64(r0_9, r1);
    *gptr<u8>(r0_11 + 0x40u) = 1;  // (from the original)
    u32 r0_12 = call_006d1e64(r0_11, 1u);
    call_001fa290(*gptr<u32>(r0_12 + 0x1f4u), guest::cpu()->r[1]);  // (from the original)
    r1 = guest::cpu()->r[1];
    return;
}

}  // namespace d_002ee3a8
GUEST_EXPORT_FRAMED(0x002ee3a8, d_002ee3a8::f_002ee3a8, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_002ee564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee564 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32)> call_00567e24;  // (from the original)

u32 f_002ee564(u32 r0) {
    u32 r0_2 = call_00567e24(r0 + 0x24u, 0x2ee588u);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = 1u;
        *gptr<u8>(r0 + 0xce4u) = u8(r1_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_002ee564
GUEST_EXPORT_FRAMED(0x002ee564, d_002ee564::f_002ee564, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee5a8 {

inline guest::global<u32, 0x0084519c> global_0084519c;  // (from the original)
inline guest::global<u32, 0x008451a0> global_008451a0;  // (from the original)
inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002ee5a8(gptr<AddressSelectWindow> arg0) {
    u32 r0 = arg0.addr();
    u32 res_1 = 0;
    u32 r6 = 0u;
    arg0->word_4 = r6;
    arg0->byte_8 = u8(r6);
    u32 r2_1 = *global_008451a0;
    arg0->word_c = *global_0084519c;
    arg0->word_10 = r2_1;
    arg0->word_14 = r6;
    arg0->byte_18 = u8(r6);
    arg0->word_1c = r6;
    arg0->word_0 = 0x8f3cc0;  // (from the original)
    arg0->word_20 = r6;
    u32 r0_2 = call_001207d8(r0 + 0x24u, 0x8f3cc0u, r2_1, r0 + 0xcu);  // (from the original)
    u32 ea_1 = r0_2 + 0x248u;  // (from the original)
    *gptr<u32>(ea_1) = r6;
    u32 r0_4 = call_00125e3c(ea_1 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_5 = r0_4 - 0x270u;  // (from the original)
    *gptr<u32>(r0_5 + 0x3bcu) = r6;  // (from the original)
    u32 ea_3 = r0_5 + 0x3c0u;  // (from the original)
    *gptr<u32>(ea_3) = r6;
    u32 r0_7 = call_00125aec(ea_3 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = call_00125aec(r0_7 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_11 = call_00125aec(r0_9 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_13 = call_00301d0c(r0_11 + 0x28u, 0x125aecu, 0x28u, 2u);  // (from the original)
    u32 r0_14 = r0_13 - 0x43cu;  // (from the original)
    *gptr<u32>(r0_14 + 0x4a0u) = r6;  // (from the original)
    u32 ea_5 = r0_14 + 0x4b8u;  // (from the original)
    *gptr<u32>(ea_5) = r6;
    u32 r0_16 = call_0033f0d8(ea_5 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = call_00301d0c(r0_16 + 0xe8u, 0x2b6de0u, 0xe0u, 5u);  // (from the original)
    u32 r0_20 = call_002f7604(r0_18 + 0x460u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_22 = call_00301d0c(r0_20 + 0xe4u, 0x2b6de0u, 0xe0u, 2u);  // (from the original)
    u32 r1 = guest::cpu()->r[1];
    u32 r2 = guest::cpu()->r[2];
    u32 r3 = guest::cpu()->r[3];
    *gptr<u8>(r0_22 + 0x1fcu) = u8(r6);  // (from the original)
    *gptr<u8>(r0_22 + 0x1fdu) = u8(r6);  // (from the original)
    *gptr<u8>(r0_22 + 0x1feu) = u8(r6);  // (from the original)
    *gptr<u8>(r0_22 + 0x1ffu) = u8(r6);  // (from the original)
    *gptr<u8>(r0_22 + 0x200u) = u8(r6);  // (from the original)
    *gptr<u8>(r0_22 + 0x201u) = u8(r6);  // (from the original)
    *gptr<u32>(r0_22 + 0x204u) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x208u) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x20cu) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x210u) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x214u) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x218u) = r6;  // (from the original)
    *gptr<u32>(r0_22 + 0x21cu) = r6;  // (from the original)
    u32 r5 = r0_22 - 0xae8u;  // (from the original)
    u32 r4 = 0u;
    *gptr<u32>(r0_22 + 0x220u) = r6;  // (from the original)
    do {
        u32 r0_23 = call_001391d8(0xc4u, r1, r2, r3);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_23 != 0) {
            r0_23 = call_005e3128(r0_23, 0x15u, r2, r3);  // (from the original)
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = r5 + (r4 << 2);
        r4 += 1u;
        *gptr<u32>(r1 + 0x4a4u) = r0_23;  // (from the original)
        res_1 = r4 - 5u;
        *gptr<u32>(r1 + 0x48cu) = r6;  // (from the original)
        guest::preempt();
    } while (res_1 >> 0x1f != ((r4 ^ 5u) & (r4 ^ res_1)) >> 0x1f);  // (from the original)
    return r5;
}

}  // namespace d_002ee5a8
GUEST_EXPORT_FRAMED(0x002ee5a8, d_002ee5a8::f_002ee5a8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_002ee898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee898 {

struct __attribute__((packed)) Object_002ee898_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
    u32 word_d4;
    u8 unknown_d8[0x14];  // (not used here)
    u32 word_ec;
};
GUEST_OFFSET(Object_002ee898_0, word_d0, 0xd0);  // (from the original)
GUEST_OFFSET(Object_002ee898_0, word_d4, 0xd4);  // (from the original)
GUEST_OFFSET(Object_002ee898_0, word_ec, 0xec);  // (from the original)

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

void f_002ee898(gptr<Object_002ee898_0> arg0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    if (arg0->word_d0 != 0) {
        return;
    }
    *frame.at<u32>(4) = r1;
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    u32 r0_1 = call_0056aa98(r0, frame.at(0).addr(), guest::cpu()->r[2], 4u);
    if (r0_1 != 0) {
        arg0->word_ec = u32(u64(0xcccccccdu) * arg0->word_d4 >> 0x20) >> 5;  // (from the original)
        return;
    }
    call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_ec = 0;
    return;
}

}  // namespace d_002ee898
GUEST_EXPORT_FRAMED(0x002ee898, d_002ee898::f_002ee898, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_002ee91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee91c {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

u32 f_002ee91c(u32 r0) {
    call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xecu) = 0;  // (from the original)
    return 1u;
}

}  // namespace d_002ee91c
GUEST_EXPORT_FRAMED(0x002ee91c, d_002ee91c::f_002ee91c, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee938 {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002ee938(u32 r0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    *frame.at<u32>(0) = 0x9047f8;  // (from the original)
    *frame.at<u32>(4) = r1;
    u32 r0_1 = call_0056a974(r0, frame.at(0).addr(), r2, 4u);
    if (r0_1 == 0) {
        return r0_1;
    }
    u32 r1_3 = u32(u64(0xcccccccdu) * *gptr<u32>(r0 + 0xd4u) >> 0x20) >> 5;  // (from the original)
    *gptr<u32>(r0 + 0xecu) = r1_3;  // (from the original)
    guest::cpu()->r[1] = r1_3;
    return r0_1;
}

}  // namespace d_002ee938
GUEST_EXPORT_FRAMED(0x002ee938, d_002ee938::f_002ee938, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee990 {

inline constexpr guest::Function<0x0012ca7c, u32(u32)> call_0012ca7c;  // (from the original)

u32 f_002ee990(u32 r0) {
    u32 r0_1 = call_0012ca7c(r0);
    *gptr<u32>(r0_1 + 0xecu) = 0;  // (from the original)
    guest::cpu()->r[1] = 0u;
    return r0_1;
}

}  // namespace d_002ee990
GUEST_EXPORT_FRAMED(0x002ee990, d_002ee990::f_002ee990, 0x4010);  // pushes {r4, lr} first, as the original

// f_002ee9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9a4 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_002ee9a4(u32 r0) {
    guest::cpu()->r[13] -= 8u;
    call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r0 + 0xecu) = 0;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_0013bc00(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ee9a4
GUEST_EXPORT(0x002ee9a4, d_002ee9a4::f_002ee9a4);

// f_002ee9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9c4 {

inline guest::global<u32, 0x0094ed40> global_0094ed40;  // (from the original)

u32 f_002ee9c4(u32 r0) {
    return 0x6e8u + (r0 + (r0 << 1) << 3) + *gptr<u32>(*global_0094ed40 + 0x14u);  // (from the original)
}

}  // namespace d_002ee9c4
GUEST_EXPORT(0x002ee9c4, d_002ee9c4::f_002ee9c4);

// f_002ee9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9ec {

inline guest::global<u32, 0x0094ed40> global_0094ed40;  // (from the original)

u32 f_002ee9ec(u32 r0) {
    return 0x10u + (r0 + (r0 << 1) << 3) + *gptr<u32>(*global_0094ed40 + 0x14u);  // (from the original)
}

}  // namespace d_002ee9ec
GUEST_EXPORT(0x002ee9ec, d_002ee9ec::f_002ee9ec);

// f_002eea10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eea10 {

struct __attribute__((packed)) Local_002eea10_r4_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u8 unknown_c[0x8];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_002eea10_r4_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002eea10_r4_1, word_14, 0x14);  // (from the original)

inline guest::global<u32, 0x0094ed40> global_0094ed40;  // (from the original)
inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> call_00125b3c;  // (from the original)
inline constexpr guest::Function<0x0012ca54, u32(u32, u32, u32, u32)> call_0012ca54;  // (from the original)

u32 f_002eea10(gptr<BookParameterAccess> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    arg0->word_0 = 0x8f3cd4;  // (from the original)
    u32 r0_2 = call_0012ca54(r0 + 4u, 0x8f3cd4u, r2, r3);  // (from the original)
    gptr<Local_002eea10_r4_1> r4_1 = gptr<Local_002eea10_r4_1>(r0_2 - 4u);
    call_00125b3c(r4_1.addr() + 4u, 0x84605du, *global_00952c3c, 0u);  // (from the original)
    r4_1->word_14 = r4_1->word_8;
    *global_0094ed40 = r4_1.addr();
    return r4_1.addr();
}

}  // namespace d_002eea10
GUEST_EXPORT_FRAMED(0x002eea10, d_002eea10::f_002eea10, 0x4010);  // pushes {r4, lr} first, as the original

// f_002eec34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eec34 {

inline guest::global<u32, 0x002eec90> global_002eec90;  // (from the original)
inline guest::global<u32, 0x002eec94> global_002eec94;  // (from the original)
inline guest::global<u32, 0x0094f760> global_0094f760;  // (from the original)
inline guest::global<u32, 0x0094f764> global_0094f764;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

void f_002eec34(u32 r0, float S0) {
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r1_1 = *global_0094f760;
    u32 r0_2 = call_0056878c(r0 + 0x2e4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    float S0_1 = std::bit_cast<float>(*global_002eec90);
    *gptr<u32>(r0_2 + 0x28u) = std::bit_cast<u32>(S0_1);  // (from the original)
    *gptr<u8>(r0_2 + 0xb7u) = u8(u32(*gptr<u8>(r0_2 + 0xb7u)) & 0xcfu);  // (from the original)
    u32 r1_2 = *global_0094f764;
    guest::cpu()->s[0] = S0_1;
    u32 r0_4 = call_0056878c(r0 + 0x2e4u, r1_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    float S0_2 = std::bit_cast<float>(*global_002eec94);
    *gptr<u32>(r0_4 + 0x28u) = std::bit_cast<u32>(S0_2);  // (from the original)
    u32 r1_3 = u32(*gptr<u8>(r0_4 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r0_4 + 0xb7u) = u8(r1_3);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_2;
    call_00568c10(r0 + 0x2e4u, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_002eec34
GUEST_EXPORT(0x002eec34, d_002eec34::f_002eec34);

// f_002ef1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ef1b8 {

struct __attribute__((packed)) Local_002ef1b8_r4_1 {
    u8 unknown_0[0x2d5];  // (not used here)
    u8 byte_2d5;
    u8 byte_2d6;
    u8 unknown_2d7[0x9];  // (not used here)
    u32 word_2e0;
    u32 word_2e4;
    u8 unknown_2e8[0x4];  // (not used here)
    u32 word_2ec;
    u32 word_2f0;
};
GUEST_OFFSET(Local_002ef1b8_r4_1, byte_2d5, 0x2d5);  // (from the original)
GUEST_OFFSET(Local_002ef1b8_r4_1, byte_2d6, 0x2d6);  // (from the original)
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2e0, 0x2e0);  // (from the original)
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2e4, 0x2e4);  // (from the original)
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2ec, 0x2ec);  // (from the original)
GUEST_OFFSET(Local_002ef1b8_r4_1, word_2f0, 0x2f0);  // (from the original)

inline guest::global<u32, 0x002ef278> global_002ef278;  // (from the original)
inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x00118771, u32(u32, u32, u32, u32)> call_00118770;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> call_005c2c80;  // (from the original)

void f_002ef1b8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r0_3 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    u32 r1_2 = 0;
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r1_3 = 0;
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    u32 r0_1 = call_005c2c80(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    float S0_1 = guest::cpu()->s[0];
    gptr<Local_002ef1b8_r4_1> r4_1 = gptr<Local_002ef1b8_r4_1>(r0 + 0x2000u);  // (from the original)
    if (r0_1 == 0) {
        goto L_2ef204;
    }
    r0_2 = r4_1->word_2e4;
    if (s32(r0_2) < 0) {
        goto L_2ef204;
    }
    r1_1 = r4_1->word_2e0;
    if (r0_2 == r1_1) {
        goto L_2ef204;
    }
    r0_3 = call_002fae84(r0_2, r1_1, r2_1, r3_1);
    r2_2 = guest::cpu()->r[2];
    r3_2 = guest::cpu()->r[3];
    r1_2 = r4_1->word_2e4;
    r0_4 = r0_3 + 0x6e238u;  // (from the original)
    r0_5 = call_00108420(r0_4, r1_2, r2_2, r3_2);
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r1_3 = r4_1->word_2f0;
    call_00118770(r0_5, r1_3, r2_3, r3_3);
    r3_1 = guest::cpu()->r[3];
    S0_1 = guest::cpu()->s[0];
L_2ef204:;
    r4_1->byte_2d5 = 0;
    r4_1->byte_2d6 = 1;
    r4_1->word_2e4 = r4_1->word_2e0;
    u32 r1_4 = *gptr<u32>(0x94f7ccu + (r4_1->word_2ec << 2) + 8u);  // (from the original)
    guest::cpu()->s[0] = S0_1;
    u32 r0_7 = call_004b4fc0(r0 + 0x2e4u, r1_4, 1u, r3_1);  // (from the original)
    u32 r1_5 = r4_1->word_2ec;
    call_00568630(r0_7, r0 + (r1_5 + (r1_5 << 2) << 3) + 0x790u, r0_7, 0u);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r0_8 = r4_1->word_2ec;
    float S0_5 = std::bit_cast<float>(*global_002ef278);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0_5;
    call_005697e0((r0 + (r0_8 + (r0_8 << 2) << 3)) + 0x790u, r1_7);  // (from the original)
    return;
}

}  // namespace d_002ef1b8
GUEST_EXPORT(0x002ef1b8, d_002ef1b8::f_002ef1b8);

// f_002ef27c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ef27c {

struct __attribute__((packed)) Object_002ef27c_0 {
    u8 unknown_0[0x22dc];  // (not used here)
    u32 word_22dc;
    u32 word_22e0;
};
GUEST_OFFSET(Object_002ef27c_0, word_22dc, 0x22dc);  // (from the original)
GUEST_OFFSET(Object_002ef27c_0, word_22e0, 0x22e0);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_ea_1 {
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
GUEST_OFFSET(Local_002ef27c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_ea_2 {
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
GUEST_OFFSET(Local_002ef27c_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_2, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_ea_3 {
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
GUEST_OFFSET(Local_002ef27c_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_002ef27c_ea_3, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_r1_13 {
    u8 unknown_0[0xfc];  // (not used here)
    u8 byte_fc;
    u8 unknown_fd[0x1];  // (not used here)
    u8 byte_fe;
};
GUEST_OFFSET(Local_002ef27c_r1_13, byte_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Local_002ef27c_r1_13, byte_fe, 0xfe);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_r1_14 {
    u8 unknown_0[0xfc];  // (not used here)
    u8 byte_fc;
    u8 unknown_fd[0x1];  // (not used here)
    u8 byte_fe;
};
GUEST_OFFSET(Local_002ef27c_r1_14, byte_fc, 0xfc);  // (from the original)
GUEST_OFFSET(Local_002ef27c_r1_14, byte_fe, 0xfe);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_r6_1 {
    u8 unknown_0[0x200];  // (not used here)
    u32 word_200;
};
GUEST_OFFSET(Local_002ef27c_r6_1, word_200, 0x200);  // (from the original)

struct __attribute__((packed)) Local_002ef27c_r6_2 {
    u8 unknown_0[0x1d8];  // (not used here)
    u32 word_1d8;
};
GUEST_OFFSET(Local_002ef27c_r6_2, word_1d8, 0x1d8);  // (from the original)

inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x0011b53d, u32(u32, u32, u32, u32)> call_0011b53c;  // (from the original)
inline constexpr guest::Function<0x0011b56b, u32(u32, u32, u32, u32)> call_0011b56a;  // (from the original)
inline constexpr guest::Function<0x001ae738, u32(u32, u32, u32, u32)> call_001ae738;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> call_005c2c80;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x0070b1a4, u32(u32, u32, u32, u32)> call_0070b1a4;  // (from the original)

u32 f_002ef27c(gptr<Object_002ef27c_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = 0;
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = 0;
    u32 r2_1 = 0;
    u32 r0_4 = 0;
    u32 r1_3 = 0;
    u32 r0_5 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r5_1 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 r2_7 = 0;
    u32 r0_12 = 0;
    u32 r0_16 = 0;
    u32 r1_9 = 0;
    u32 r0_17 = 0;
    u32 r1_10 = 0;
    u32 r2_10 = 0;
    u32 r3_9 = 0;
    u32 r5_2 = 0;
    u32 r0_22 = 0;
    u32 r0_23 = 0;
    gptr<Local_002ef27c_r1_13> r1_13 = gptr<Local_002ef27c_r1_13>(0u);
    u32 r3_12 = 0;
    u32 r5_3 = 0;
    u32 r3_13 = 0;
    gptr<Local_002ef27c_ea_2> ea_2 = gptr<Local_002ef27c_ea_2>(0u);
    u32 r4_1 = 0;
    u32 r5_5 = 0;
    u32 r6_3 = 0;
    u32 r7_1 = 0;
    u32 r8_1 = 0;
    u32 r9_1 = 0;
    u32 r10_1 = 0;
    u32 r11_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[8] = r8;
        guest::cpu()->r[9] = r9;
        guest::cpu()->r[10] = r10;
        guest::cpu()->r[11] = r11;
        return r0;
    }
    gptr<Local_002ef27c_ea_1> ea_1 = gptr<Local_002ef27c_ea_1>(frame.at(0xc).addr());  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r14;
    r4 = r0;
    r7 = r0 + 0x2000u;  // (from the original)
    r9 = r1;
    r11 = 0x848958u;  // (from the original)
    *frame.at<u32>(0) = arg0->word_22dc;
    *frame.at<u32>(4) = 0;
    r8 = r2;
    u32 r3_1 = arg0->word_22e0 + 1u;
    if (r2 == 0) {
        goto L_2ef390;
    }
    r0_1 = r4 + 0xd1cu;  // (from the original)
    r2_1 = r4 + 0x830u;  // (from the original)
    r10 = r0_1;
    call_001ae738(r0_1, r9, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
        u32 r1_1 = *gptr<u8>(r11 + r5);
        u32 r0_2 = call_0070b1a4(r10, r1_1, r2, r3);
        gptr<Local_002ef27c_r6_1> r6_1 = gptr<Local_002ef27c_r6_1>(r4 + (r5 << 2) + 0x1000u);  // (from the original)
        u32 r2_2 = r6_1->word_200;
        call_005e2e50(r2_2, r0_2, r2_2, guest::cpu()->r[3]);
        r0_4 = call_005e2f94(r6_1->word_200, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_3 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    r0_5 = call_005c2c80(r0_4, r1_3, r2, r3);
    r1_4 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r0_5 != 0) {
        u32 r0_6 = call_002fae84(r0_5, r1_4, r2_4, r3_4);
        u32 r0_8 = call_00108420(r0_6 + 0x6e238u, *gptr<u32>(r7 + 0x2e0u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_9 = call_0011b53c(r0_8, *gptr<u32>(r7 + 0x2f0u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r2_4 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        if (r0_9 == 0) {
            r5_1 = 1u;
            goto L_2ef350;
        }
    }
    r5_1 = 0u;
L_2ef350:;
    r0_10 = r4 + 0x2e4u;  // (from the original)
    r0_11 = call_0056878c(r0_10, 0x2ef528u, r2_4, r3_4);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0_11 + 0xb7u)) & 0xfeu | r5_1;  // (from the original)
    *gptr<u8>(r0_11 + 0xb7u) = u8(r1);  // (from the original)
L_2ef36c:;
    r0 = call_0011b56a(r9, r1, r2, r3);
    r12 = 0xaaaaaaabu;  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
    r2 = 0u;
    if (r8 == 0) {
        goto L_2ef444;
    }
    goto L_2ef4b4;
L_2ef390:;
    r2_7 = r4 + 0x808u;  // (from the original)
    r0_12 = r4 + 0x860u;  // (from the original)
    call_001ae738(r0_12, r9, r2_7, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
        u32 r1_7 = *gptr<u8>(r11 + r5);
        u32 r0_14 = call_0070b1a4(r4 + 0x860u, r1_7, r2, r3);  // (from the original)
        gptr<Local_002ef27c_r6_2> r6_2 = gptr<Local_002ef27c_r6_2>(r4 + (r5 << 2) + 0x1000u);  // (from the original)
        u32 r2_8 = r6_2->word_1d8;
        call_005e2e50(r2_8, r0_14, r2_8, guest::cpu()->r[3]);
        r0_16 = call_005e2f94(r6_2->word_1d8, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    r0_17 = call_005c2c80(r0_16, r1_9, r2, r3);
    r1_10 = guest::cpu()->r[1];
    r2_10 = guest::cpu()->r[2];
    r3_9 = guest::cpu()->r[3];
    if (r0_17 != 0) {
        u32 r0_18 = call_002fae84(r0_17, r1_10, r2_10, r3_9);
        u32 r0_20 = call_00108420(r0_18 + 0x6e238u, *gptr<u32>(r7 + 0x2e0u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_21 = call_0011b53c(r0_20, *gptr<u32>(r7 + 0x2f0u), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r2_10 = guest::cpu()->r[2];
        r3_9 = guest::cpu()->r[3];
        if (r0_21 == 0) {
            r5_2 = 1u;
            goto L_2ef424;
        }
    }
    r5_2 = 0u;
L_2ef424:;
    r0_22 = r4 + 0x2e4u;  // (from the original)
    r0_23 = call_0056878c(r0_22, 0x2ef53cu, r2_10, r3_9);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0_23 + 0xb7u)) & 0xfeu | r5_2;  // (from the original)
    *gptr<u8>(r0_23 + 0xb7u) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_2ef36c;
L_2ef444:;
    r1_13 = gptr<Local_002ef27c_r1_13>(*gptr<u32>(r4 + (r2 << 2) + 0x808u));  // (from the original)
    r3_12 = r1_13->byte_fc;
    r5_3 = u32(u64(r12) * r3_12 >> 0x20) >> 1;  // (from the original)
    r3_13 = (r3_12 + (r5_3 - (r5_3 << 2)) & 0xffu) == r0 ? 0u : 1u;  // (from the original)
    r1_13->byte_fe = u8(r3_13 | u32(r1_13->byte_fe));
    if (r3_13 != 0) {
        u32 r5_4 = u32(s32(s16(u32(r1_13->byte_fc))) * s32(s16(0xabu))) >> 9;  // (from the original)
        r1_13->byte_fc = u8(r5_4 + (r5_4 << 1) + r0);
    }
    r2 += 1u;
    if (s32(r2) < 6) {
        guest::preempt();
        goto L_2ef444;
    }
    ea_2 = gptr<Local_002ef27c_ea_2>(frame.at(0xc).addr());  // (from the original)
    r4_1 = ea_2->word_0;
    r5_5 = ea_2->word_4;
    r6_3 = ea_2->word_8;
    r7_1 = ea_2->word_c;
    r8_1 = ea_2->word_10;
    r9_1 = ea_2->word_14;
    r10_1 = ea_2->word_18;
    r11_1 = ea_2->word_1c;
    guest::cpu()->r[1] = r1_13.addr();
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_5;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[8] = r8_1;
    guest::cpu()->r[9] = r9_1;
    guest::cpu()->r[10] = r10_1;
    guest::cpu()->r[11] = r11_1;
    return r0;
L_2ef4b4:;
    gptr<Local_002ef27c_r1_14> r1_14 = gptr<Local_002ef27c_r1_14>(*gptr<u32>(r4 + (r2 << 2) + 0x830u));  // (from the original)
    u32 r3_14 = r1_14->byte_fc;
    u32 r5_6 = u32(u64(r12) * r3_14 >> 0x20) >> 1;  // (from the original)
    u32 r3_15 = (r3_14 + (r5_6 - (r5_6 << 2)) & 0xffu) == r0 ? 0u : 1u;  // (from the original)
    r1_14->byte_fe = u8(r3_15 | u32(r1_14->byte_fe));
    if (r3_15 != 0) {
        u32 r5_7 = u32(s32(s16(u32(r1_14->byte_fc))) * s32(s16(0xabu))) >> 9;  // (from the original)
        r1_14->byte_fc = u8(r5_7 + (r5_7 << 1) + r0);
    }
    r2 += 1u;
    if (s32(r2) < 6) {
        guest::preempt();
        goto L_2ef4b4;
    }
    gptr<Local_002ef27c_ea_3> ea_3 = gptr<Local_002ef27c_ea_3>(frame.at(0xc).addr());  // (from the original)
    u32 r4_2 = ea_3->word_0;
    u32 r5_8 = ea_3->word_4;
    u32 r6_4 = ea_3->word_8;
    u32 r7_2 = ea_3->word_c;
    u32 r8_2 = ea_3->word_10;
    u32 r9_2 = ea_3->word_14;
    u32 r10_2 = ea_3->word_18;
    u32 r11_2 = ea_3->word_1c;
    guest::cpu()->r[1] = r1_14.addr();
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_8;
    guest::cpu()->r[6] = r6_4;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_2;
    return r0;
}

}  // namespace d_002ef27c
GUEST_EXPORT(0x002ef27c, d_002ef27c::f_002ef27c);
