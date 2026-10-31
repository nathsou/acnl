// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_002e01ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e01ac {

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002e01ac(u32 r0, float S0) {
    u32 ea = 0;
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 8;
    r4 = r0;
    r1 = r0 + 0x3acu;  // (from the original)
    r0 = r0 + 0x238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004b9b64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(0x2e01e4u));  // (from the original)
    r0 = r4 + 0x3acu;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    ea = 0x857bacu;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r4 + 0x50cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002e01ac
GUEST_EXPORT(0x002e01ac, d_002e01ac::f_002e01ac);

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
    u32 r2 = 0;
    r2 = 1u;
    arg0->word_c8 = u32(r1);
    if (r1 != 0) {
        r1 = 0x100038eu;  // (from the original)
        arg0->word_cc = u32(r1);
        arg0->byte_da = u8(r2);
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = 0x1000392u;  // (from the original)
    arg0->word_cc = u32(r1);
    arg0->word_c4 = u32(8u);
    arg0->byte_da = u8(r2);
    guest::cpu()->r[1] = r1;
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


u32 f_002e0288(gptr<Object_002e0288_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_500;
    arg0->byte_508 = u8(r1);
    if (r2 == 0) {
        return r0;
    }
    r0 = u32(*gptr<u8>(r2 + 0xb7u)) & 0xfeu | r1;  // (from the original)
    *gptr<u8>(r2 + 0xb7u) = u8(r0);  // (from the original)
    return r0;
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

inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)

u32 f_002e0308(gptr<Object_002e0308_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
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
    ea = r13 - 0x18;  // (from the original)
    *gptr<u32>(ea) = u32(r3);
    *gptr<u32>(ea + 4) = u32(r4);
    *gptr<u32>(ea + 8) = u32(r5);
    *gptr<u32>(ea + 0xc) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r14);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = u32(arg0->byte_516);
    r6 = r2;
    if (r0 == 0) {
        r7 = 0x95deccu;  // (from the original)
        r1 = 0u;
        r0 = *gptr<u32>(r7);
        guest::cpu()->r[13] = r13;
        r0 = call_005ea8f8(r0, r1, r2, r3);
        *gptr<u32>(r13) = u32(0u);
        r0 = *gptr<u32>(r7);
        r3 = r5;
        r2 = r6;
        r1 = r4 + 0x404u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005ea964(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        ea = r7;
        r0 = *gptr<u32>(ea);
        ea = r13;
        r13 = r13 + 0x18;  // (from the original)
        r3 = *gptr<u32>(ea);
        r4 = *gptr<u32>(ea + 4);
        r5 = *gptr<u32>(ea + 8);
        r6 = *gptr<u32>(ea + 0xc);  // (from the original)
        r7 = *gptr<u32>(ea + 0x10);  // (from the original)
        r14 = *gptr<u32>(ea + 0x14);  // (from the original)
        r1 = 0u;
        guest::cpu()->r[13] = r13;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return call_005ea8dc(r0, r1, r2, r3);
    }
    ea = r13;
    r13 = r13 + 0x18;  // (from the original)
    r4 = *gptr<u32>(ea + 4);
    r5 = *gptr<u32>(ea + 8);
    r6 = *gptr<u32>(ea + 0xc);  // (from the original)
    r7 = *gptr<u32>(ea + 0x10);  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[5] = r5;
    guest::cpu()->r[6] = r6;
    guest::cpu()->r[7] = r7;
    guest::cpu()->r[13] = r13;
    return r0;
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

inline constexpr guest::Function<0x004b6d74, u32(u32, u32, u32, u32)> call_004b6d74;  // (from the original)
inline constexpr guest::Function<0x004b6dc8, u32(u32, u32, u32, u32)> call_004b6dc8;  // (from the original)

u32 f_002e037c(gptr<Object_002e037c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r1 = arg0->word_258;
    r4 = r0;
    if (r1 == 0) {
        goto L_2e03c8;
    }
    r0 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r0 != 0) {
        r0 = call_004b6dc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = 0u;
    *gptr<u8>(r4 + 0xd9u) = u8(r0);  // (from the original)
    if (r5 == 0) {
        goto L_2e03c8;
    }
    r1 = *gptr<u32>(r4 + 0x258u);  // (from the original)
    r0 = r5;
    r0 = call_004b6d74(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = 1u;
    *gptr<u32>(r4 + 0x500u) = u32(r5);  // (from the original)
    *gptr<u8>(r4 + 0xd9u) = u8(r0);  // (from the original)
L_2e03c8:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e037c
GUEST_EXPORT(0x002e037c, d_002e037c::f_002e037c);

// f_002e03cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e03cc {

inline constexpr guest::Function<0x00569dc4, u32(u32, u32, u32, u32)> call_00569dc4;  // (from the original)
inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002e03cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00569dc4(r0, r1, r2, r3);
    *gptr<u32>(r13 + 4u) = u32(0x2e0404u);  // (from the original)
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    r2 = *gptr<u32>(r0 + 4u);
    r0 = 0x9ab084u;  // (from the original)
    r1 = r13;
    r3 = 0x80u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e03cc
GUEST_EXPORT(0x002e03cc, d_002e03cc::f_002e03cc);

// f_002e0428: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e0428 {

struct __attribute__((packed)) Object_002e0428_0 {
    u8 unknown_0[0x517];  // (not used here)
    u8 byte_517;
};
GUEST_OFFSET(Object_002e0428_0, byte_517, 0x517);  // (from the original)

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002e0428(gptr<Object_002e0428_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    r0 = u32(s32(s8(arg0->byte_517)));
    if (r0 != r5) {
        r1 = r4 + 0x3d4u;  // (from the original)
        r0 = r4 + 0x238u;  // (from the original)
        arg0->byte_517 = u8(r5);
        guest::cpu()->s[0] = S0;
        r0 = call_004b9b64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r5 != 0) {
            r0 = r4 + 0x3d4u;  // (from the original)
            S0 = std::bit_cast<float>(*gptr<u32>(0x2e0494u));  // (from the original)
            guest::cpu()->s[0] = S0;
            r0 = call_005697e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        } else {
            r0 = r4 + 0x3d4u;  // (from the original)
            guest::cpu()->s[0] = S0;
            r0 = call_00569508(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
        r0 = r4 + 0x238u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = r4 + 0x3d4u;  // (from the original)
        r0 = r4 + 0x238u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00569420(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r5 ^ 1u;
        *gptr<u8>(r4 + 0xd9u) = u8(r0);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002e0428
GUEST_EXPORT(0x002e0428, d_002e0428::f_002e0428);

// f_002e086c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e086c {

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)

u32 f_002e086c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = r0 + 0x3acu;  // (from the original)
    r0 = r0 + 0x238u;  // (from the original)
    r0 = call_004b9b64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x3acu;  // (from the original)
    r0 = call_00569508(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4 + 0x238u;  // (from the original)
    r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = r4 + 0x3acu;  // (from the original)
    r0 = r4 + 0x238u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00569420(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_002e08c8(gptr<Object_002e08c8_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    if (u32(arg0->byte_516) == 0) {
        r0 = r4 + 0x43cu;  // (from the original)
        r1 = r4 + 0x404u;  // (from the original)
        r5 = r0;
        r0 = call_005e2e50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r0 = r5;
        r0 = call_005e2f94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
    }
    r0 = r4 + 0x238u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x002b6d20, u32(u32, u32, u32, u32)> call_002b6d20;  // (from the original)
inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)

u32 f_002e0908(gptr<Object_002e0908_0> arg0, float S0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r4 = r0;
    r5 = r0 + 0x500u;  // (from the original)
    if (u32(arg0->byte_516) == 0) {
        r0 = r4 + 0x43cu;  // (from the original)
        r1 = r4 + 0x404u;  // (from the original)
        r6 = r0;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_005e2e50(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        r0 = r6;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_005e2f94(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
    }
    if (u32(*gptr<u8>(r5 + 0x17u)) == 0) {  // (from the original)
        r1 = 0u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        guest::cpu()->s[0] = S0;
        r0 = call_002b6d20(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
    }
    r1 = r4 + 0x384u;  // (from the original)
    r0 = r4 + 0x238u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_004b9b64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    S0 = std::bit_cast<float>(*gptr<u32>(0x2e0988u));  // (from the original)
    r0 = r4 + 0x384u;  // (from the original)
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    r0 = call_005697e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = guest::cpu()->s[0];
    ea = 0x857ba4u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    ea = r4 + 0x50cu;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002e0908
GUEST_EXPORT(0x002e0908, d_002e0908::f_002e0908);

// f_002e1ba4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1ba4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1204, u32(u32, u32, u32, u32)> call_005f1204;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002e1ba4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x58u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0 = r13 + 8u;
    r2 = 0xfu;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_2e1bf4:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r4) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1204(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r3 = 0xe2u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r5 + 0x6d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0 = r13 + 8u;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e1ba4
GUEST_EXPORT(0x002e1ba4, d_002e1ba4::f_002e1ba4);

// f_002e1ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1ca4 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f1274, u32(u32, u32, u32, u32)> call_005f1274;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002e1ca4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x58u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0 = r13 + 8u;
    r2 = 0xfu;  // (from the original)
    r1 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x909af0u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 7u;
    do {
L_2e1cf4:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r4) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_005f1274(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r3 = 0xe1u;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r5 + 0x6d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x6d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r13 + 8u) = u32(r6);
    r0 = r13 + 8u;
    r13 = r13 + 0x58u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e1ca4
GUEST_EXPORT(0x002e1ca4, d_002e1ca4::f_002e1ca4);

// f_002e1da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e1da4 {

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

u32 f_002e1da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = r0 + 0x794u;  // (from the original)
    r13 = r13 - 0x68u;  // (from the original)
    r6 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcaf4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2e1eb0;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e21e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r8 = 0u;
    r0 = r6;
    *gptr<u32>(r13 + 4u) = u32(r8);
    *gptr<u32>(r13 + 0x48u) = u32(r8);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r7 = 0x95deccu;  // (from the original)
    r5 = 0x909ce8u;  // (from the original)
    if (r0 == 0x24u) {  // (from the original)
        goto L_2e1eb8;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0x27u) {  // (from the original)
        goto L_2e1f68;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcb34(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0x28u) {  // (from the original)
        goto L_2e1eb0;
    }
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0081d12c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r8);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r7);
    r3 = 0xdeu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = r6;
    r1 = r13 + 0x48u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00615ffc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1a00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e18dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0061666c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1ba4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2e1eb0:;
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2e1eb8:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0081d12c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r8);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r7);
    r3 = 0xdeu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = r6;
    r1 = r13 + 0x48u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_007010f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1a00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e18dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_007011e8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1ca4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2e1f68:;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0081d12c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r8);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r7);
    r3 = 0xdfu;  // (from the original)
    r1 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r7);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 8u;
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x2fcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 8u) = u32(r5);
    r2 = r6;
    r1 = r13 + 0x48u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00615e30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 4u);
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1a00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e18dc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00615f30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002e1ba4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r13 = r13 + 0x68u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e1da4
GUEST_EXPORT(0x002e1da4, d_002e1da4::f_002e1da4);

// f_002e21e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e21e8 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fe7f4, u32(u32, u32, u32, u32)> call_002fe7f4;  // (from the original)
inline constexpr guest::Function<0x002fe874, u32(u32, u32, u32, u32)> call_002fe874;  // (from the original)
inline constexpr guest::Function<0x003083bc, u32(u32, u32, u32, u32)> call_003083bc;  // (from the original)
inline constexpr guest::Function<0x005e2e50, u32(u32, u32, u32, u32)> call_005e2e50;  // (from the original)
inline constexpr guest::Function<0x005e2f94, u32(u32, u32, u32, u32)> call_005e2f94;  // (from the original)
inline constexpr guest::Function<0x005ea8dc, u32(u32, u32, u32, u32)> call_005ea8dc;  // (from the original)
inline constexpr guest::Function<0x005ea8f8, u32(u32, u32, u32, u32)> call_005ea8f8;  // (from the original)
inline constexpr guest::Function<0x005ea964, u32(u32, u32, u32, u32)> call_005ea964;  // (from the original)
inline constexpr guest::Function<0x005f4bfc, u32(u32, u32, u32, u32)> call_005f4bfc;  // (from the original)

u32 f_002e21e8(u32 r0, u32 r1_unused, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0xb8u;  // (from the original)
    r5 = r0;
    r0 = r13 + 0x60u;  // (from the original)
    r2 = 0x15u;  // (from the original)
    r1 = r13 + 0x78u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003083bc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0x909d20u;  // (from the original)
    *gptr<u32>(r0) = u32(r6);
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005f4bfc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0xcu;  // (from the original)
    r1 = 0x2au;  // (from the original)
    r0 = r0 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f825c(r0, r1, r2, r3);
    r1 = 0x8906ecu;  // (from the original)
    r0 = r4 + 0x18u;  // (from the original)
    *gptr<u16>(r4 + 0x18u) = u16(u32(*gptr<u16>(r1)));  // (from the original)
    r2 = 0xau;  // (from the original)
    do {
L_2e2234:;
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        res = r2 - 1u;
        r2 = res;
        ea = r0 + 2u;
        *gptr<u16>(ea) = u16(r3);
        ea = r1;
        r3 = u32(*gptr<u16>(ea));
        ea = r0 + 4u;
        *gptr<u16>(ea) = u16(r3);
        r0 = ea;
        guest::preempt();
    } while (res != 0);
    r2 = 0u;
    r1 = r5 + 0x794u;  // (from the original)
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7f4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0x95deccu;  // (from the original)
    r1 = 0u;
    r0 = *gptr<u32>(r4);
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(*gptr<u32>(r4) + 0x14u);  // (from the original)
    r2 = 0u;
    r1 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fe874(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(0u);
    r2 = 0x848720u;  // (from the original)
    r0 = *gptr<u32>(r4);
    r3 = 0xdcu;  // (from the original)
    r1 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005ea964(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4);
    r1 = 0u;
    guest::cpu()->r[13] = r13;
    r0 = call_005ea8dc(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r5 + 0x484u;  // (from the original)
    r1 = r13 + 0x60u;  // (from the original)
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2e50(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_005e2f94(r0, r1, r2, r3);
    r1 = 0x909f18u;  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    *gptr<u32>(r13 + 0x60u) = u32(r6);  // (from the original)
    r0 = r13 + 0x60u;  // (from the original)
    r13 = r13 + 0xb8u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e21e8
GUEST_EXPORT(0x002e21e8, d_002e21e8::f_002e21e8);

// f_002e2974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e2974 {

struct __attribute__((packed)) Object_002e2974_0 {
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
GUEST_OFFSET(Object_002e2974_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002e2974_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002e2974(gptr<Object_002e2974_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = 0u;
    arg0->word_4 = u32(r4);
    arg0->byte_8 = u8(r4);
    r2 = *gptr<u32>(0x848424u + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x848424u));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r4);
    r1 = 0x8f3674u;  // (from the original)
    arg0->byte_18 = u8(r4);
    arg0->word_1c = u32(r4);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r4);
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x14cu;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_00125aec(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x15u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x1eu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x14u;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0xfu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_005e3128(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x7ffeu;  // (from the original)
    r0 = r0 + 0xc4u;  // (from the original)
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x794u;  // (from the original)
    *gptr<u8>(r0 + 0x798u) = u8(r4);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e2974
GUEST_EXPORT(0x002e2974, d_002e2974::f_002e2974);

// f_002e2d24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e2d24 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002e2d24(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 1u;
    r1 = r4 + 0x4c4u;  // (from the original)
    r0 = call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x610u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 0u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002e2d24
GUEST_EXPORT(0x002e2d24, d_002e2d24::f_002e2d24);

// f_002e326c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e326c {

inline constexpr guest::Function<0x002e2d54, u32(u32, u32, u32, u32)> call_002e2d54;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_002e326c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002e2d54(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x4c4u;  // (from the original)
    r0 = call_00568c10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = r4 + 0x610u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    return call_00568c10(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
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

inline constexpr guest::Function<0x004b9b64, u32(u32, u32, u32, u32)> call_004b9b64;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)
inline constexpr guest::Function<0x00569420, u32(u32, u32, u32, u32)> call_00569420;  // (from the original)
inline constexpr guest::Function<0x00569508, u32(u32, u32, u32, u32)> call_00569508;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)

u32 f_002e35d0(gptr<Object_002e35d0_0> arg0, u32 r1, float S0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = r1;
    if (arg0->word_298 != 0) {
        r1 = r4 + 0x280u;  // (from the original)
        r0 = r4 + 0x134u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_004b9b64(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        if (r5 != 0) {
            r0 = r4 + 0x280u;  // (from the original)
            S0 = std::bit_cast<float>(*gptr<u32>(0x2e363cu));  // (from the original)
            guest::cpu()->s[0] = S0;
            r0 = call_005697e0(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        } else {
            r0 = r4 + 0x280u;  // (from the original)
            guest::cpu()->s[0] = S0;
            r0 = call_00569508(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            S0 = guest::cpu()->s[0];
        }
        r0 = r4 + 0x134u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
        r1 = r4 + 0x280u;  // (from the original)
        r0 = r4 + 0x134u;  // (from the original)
        guest::cpu()->s[0] = S0;
        r0 = call_00569420(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        S0 = guest::cpu()->s[0];
    }
    r0 = r5 ^ 1u;
    r1 = r5 ^ 1u;
    *gptr<u8>(r4 + 0xd9u) = u8(r0);  // (from the original)
    *gptr<u8>(r4 + 0x12du) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002e35d0
GUEST_EXPORT(0x002e35d0, d_002e35d0::f_002e35d0);

// f_002e38b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e38b4 {

inline constexpr guest::Function<0x00201ff4, u32(u32, u32, u32, u32)> call_00201ff4;  // (from the original)
inline constexpr guest::Function<0x0024e9d8, u32(u32, u32, u32, u32)> call_0024e9d8;  // (from the original)
inline constexpr guest::Function<0x002eba64, u32(u32, u32, u32, u32)> call_002eba64;  // (from the original)
inline constexpr guest::Function<0x002eba7c, u32(u32, u32, u32, u32)> call_002eba7c;  // (from the original)
inline constexpr guest::Function<0x002eba90, u32(u32, u32, u32, u32)> call_002eba90;  // (from the original)
inline constexpr guest::Function<0x002ebc04, u32(u32, u32, u32, u32)> call_002ebc04;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> call_002fcc14;  // (from the original)
inline constexpr guest::Function<0x0052eed0, u32(u32, u32, u32, u32)> call_0052eed0;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x0055cb58, u32(u32, u32, u32, u32)> call_0055cb58;  // (from the original)
inline constexpr guest::Function<0x006e4b30, u32(u32, u32, u32, u32)> call_006e4b30;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_002e38b4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 ea = 0;
    u32 res = 0;
    u32 r2 = 0;
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
    ea = r13 - 0x2c;  // (from the original)
    *gptr<u32>(ea) = u32(r0);
    *gptr<u32>(ea + 4) = u32(r1);
    *gptr<u32>(ea + 8) = u32(r4);
    *gptr<u32>(ea + 0xc) = u32(r5);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r6);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x24) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x28) = u32(r14);  // (from the original)
    r13 = r13 - 0x2f8u;  // (from the original)
    r2 = 3u;
    r0 = r13 + 0x2b8u;  // (from the original)
    r11 = r1;
    r1 = r2;
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r4;
    r0 = r13 + 0x290u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x290u;  // (from the original)
    r0 = r13 + 0x2a8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r13 + 0x2ccu);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002eba90(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 3u;
    r5 = *gptr<u32>(r13 + 0x2ccu);  // (from the original)
    r1 = r2;
    r0 = r13 + 0x2c0u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r4;
    r0 = r13 + 0x268u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x268u;  // (from the original)
    r0 = r13 + 0x280u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x268u;  // (from the original)
    r0 = r13 + 0x258u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x280u;  // (from the original)
    r0 = r13 + 0x258u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2e39e8;
    } else {
        r6 = 0x879cccu;  // (from the original)
    }
    do {
L_2e3968:;
        r4 = *gptr<u32>(r13 + 0x264u);  // (from the original)
        r1 = *gptr<u32>(r13 + 0x260u);  // (from the original)
        r2 = r4;
        r0 = r5;
        guest::cpu()->r[13] = r13;
        r0 = call_002ebc04(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r0;
        r7 = *gptr<u32>(r13 + 0x260u);  // (from the original)
        r1 = r11;
        r0 = u32(*gptr<u8>(r7 + (r6 + (*gptr<u32>(r13 + 0x264u) << 2))));  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00201ff4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r0;
        *gptr<u16>(r4) = u16(r1);
        r0 = r13 + 0x258u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r13 + 0x280u;  // (from the original)
        r0 = r13 + 0x258u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r0 != 0);
L_2e39e8:;
    r9 = 0u;
    r10 = r13;
L_2e3a10:;
    r8 = 0u;
L_2e3a14:;
    r0 = *gptr<u32>(r13 + 0x2ccu);  // (from the original)
    r2 = r9 + 1u;
    r1 = r8 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ebc04(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r4 = u32(*gptr<u16>(r0));
    r0 = *gptr<u32>(r13 + 0x2ccu);  // (from the original)
    r2 = r9;
    r1 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002eba64(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    *gptr<u32>(r13 + 0x274u) = u32(r0);  // (from the original)
    r2 = r4;
    r1 = 0x258u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_006e4b30(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    r5 = res;
    r4 = 0u;
    if (!u32(r0 >= 0u) || u32(res == 0)) {
        goto L_2e3aac;
    }
    do {
L_2e3a64:;
        r0 = r10 + (r4 + (r4 << 1) << 1);
        r1 = u32(*gptr<u16>(r0));
        r6 = u32(*gptr<u8>(r0 + 4u));
        r7 = u32(*gptr<u8>(r0 + 5u));
        r0 = r13 + 0x270u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcbb0(r0, r1, r2, r3);
        r0 = *gptr<u32>(r13 + 0x274u);  // (from the original)
        r3 = r7;
        r2 = r6;
        r1 = r13 + 0x270u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_002fcc14(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 = r4 + 1u;
        guest::preempt();
    } while (u32(r5 >= r4) && !u32(r5 == r4));
L_2e3aac:;
    r8 = r8 + 1u;
    if (s32(r8) < s32(2u)) {
        guest::preempt();
        goto L_2e3a14;
    }
    r9 = r9 + 1u;
    if (s32(r9) < s32(2u)) {
        guest::preempt();
        goto L_2e3a10;
    }
    r2 = 1u;
    ea = r13 + 0x2ccu;  // (from the original)
    r4 = *gptr<u32>(ea);
    ea = r13 + 0x268u;  // (from the original)
    *gptr<u32>(ea) = u32(r2);
    *gptr<u32>(ea + 4) = u32(r2);
    r3 = r13 + 0x268u;  // (from the original)
    r0 = r4;
    r1 = *gptr<u32>(r3);
    r2 = *gptr<u32>(r3 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_002ebc04(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u16>(r0));
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r0;
    r1 = r13 + 0x268u;  // (from the original)
    r0 = r13 + 0x260u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0052eed0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    *gptr<u32>(r13 + 0x260u) = u32(*gptr<u32>(r13 + 0x260u) + 0xfu);  // (from the original)
    *gptr<u32>(r13 + 0x264u) = u32(*gptr<u32>(r13 + 0x264u) + 5u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eba7c(r0, r1, r2, r3);
    r5 = r13 + 0x260u;  // (from the original)
    r1 = 0x69u;  // (from the original)
    r2 = *gptr<u32>(r5);
    r3 = *gptr<u32>(r5 + 4);
    guest::cpu()->r[13] = r13;
    r0 = call_0024e9d8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 1u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eba7c(r0, r1, r2, r3);
    r3 = *gptr<u32>(r5 + 4);
    r2 = *gptr<u32>(r5) - 2u;
    r1 = 0x6au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0024e9d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r11;
    r4 = 3u;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(u64(r0) * r4 >> 0x20) & 0xffu;  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 0x2ccu)) = u8(r1);  // (from the original)
    r0 = r11;
    guest::cpu()->r[13] = r13;
    r0 = call_0055cb58(r0, r1, r2, r3);
    r1 = u32(u64(r0) * r4 >> 0x20) & 0xffu;  // (from the original)
    *gptr<u8>(*gptr<u32>(r13 + 0x2ccu) + 1u) = u8(r1);  // (from the original)
    r0 = r13 + 0x290u;  // (from the original)
    r13 = r13 + 0x2d4u;  // (from the original)
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

inline constexpr guest::Function<0x0051aa84, u32(u32, u32, u32, u32)> call_0051aa84;  // (from the original)
inline constexpr guest::Function<0x0051ad60, u32(u32, u32, u32, u32)> call_0051ad60;  // (from the original)
inline constexpr guest::Function<0x00746e90, u32(u32, u32, u32, u32)> call_00746e90;  // (from the original)
inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> call_007475e0;  // (from the original)

u32 f_002e43d0(gptr<Object_002e43d0_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_30;
    r5 = r1;
    r6 = r2;
    if (r0 == 0) {
        goto L_2e4420;
    }
    r0 = call_007475e0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r0 = 0xa22020u;  // (from the original)
        r1 = *gptr<u32>(r4 + 0x30u);  // (from the original)
        r0 = call_0051aa84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u32>(r4 + 0x30u) = u32(0u);  // (from the original)
        goto L_2e4420;
    }
    if (*gptr<u32>(r4 + 0x30u) != 0) {  // (from the original)
        r0 = 0u;
        goto L_2e4458;
    }
L_2e4420:;
    r0 = 0xa22020u;  // (from the original)
    r1 = r4 + 0x10u;  // (from the original)
    r0 = call_00746e90(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r0 = 0xa22020u;  // (from the original)
        r3 = r6;
        r2 = r5;
        r1 = r4 + 0x10u;  // (from the original)
        r0 = call_0051ad60(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
    }
    *gptr<u32>(r4 + 0x30u) = u32(r0);  // (from the original)
    if (r0 != 0) {
        r0 = 1u;
    }
L_2e4458:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e43d0
GUEST_EXPORT(0x002e43d0, d_002e43d0::f_002e43d0);

// f_002e5680: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5680 {

struct __attribute__((packed)) Object_002e5680_0 {
    u8 unknown_0[0x424];  // (not used here)
    u8 byte_424;
    u8 unknown_425[0x21];  // (not used here)
    u16 half_446;
};
GUEST_OFFSET(Object_002e5680_0, byte_424, 0x424);  // (from the original)
GUEST_OFFSET(Object_002e5680_0, half_446, 0x446);  // (from the original)

inline constexpr guest::Function<0x002cf3b4, u32(u32, u32, u32, u32)> call_002cf3b4;  // (from the original)
inline constexpr guest::Function<0x00304640, u32(u32, u32, u32, u32)> call_00304640;  // (from the original)
inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> call_00304ca4;  // (from the original)
inline constexpr guest::Function<0x00304ce4, u32(u32, u32, u32, u32)> call_00304ce4;  // (from the original)
inline constexpr guest::Function<0x003302c8, u32(u32, u32, u32, u32)> call_003302c8;  // (from the original)
inline constexpr guest::Function<0x00545104, u32(u32, u32, u32, u32)> call_00545104;  // (from the original)
inline constexpr guest::Function<0x005ccfc4, u32(u32, u32, u32, u32)> call_005ccfc4;  // (from the original)
inline constexpr guest::Function<0x005cd270, u32(u32, u32, u32, u32)> call_005cd270;  // (from the original)
inline constexpr guest::Function<0x00810e14, u32(u32, u32, u32, u32)> call_00810e14;  // (from the original)
inline constexpr guest::Function<0x00813c20, u32(u32, u32, u32, u32)> call_00813c20;  // (from the original)

u32 f_002e5680(gptr<Object_002e5680_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r5 = r0 + 0x400u;  // (from the original)
    r4 = r0;
    r0 = u32(s32(s16(arg0->half_446)));
    r13 = r13 - 0x80u;  // (from the original)
    r6 = 0u;
    if (r0 != 0) {
        if (r0 == 1u) {
            goto L_2e56f8;
        }
        if (r0 == 2u) {
            r6 = 1u;
            goto L_2e57e8;
        }
        zf = r0 == 3u;
        if (zf) {
            zf = u32(arg0->byte_424) == 0;
        }
        if (zf) {
            goto L_2e5788;
        }
        goto L_2e57e8;
    }
    r0 = r4 + 0x450u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cd270(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = r4 + 0x458u;  // (from the original)
    r1 = 0u;
    *gptr<u32>(r2) = u32(0x40010000u);  // (from the original)
    *gptr<u32>(r2 + 4) = u32(r1);
    r0 = r4 + 0x450u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00304640(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u16>(r5 + 0x46u)) + 1u;  // (from the original)
    goto L_2e5780;
L_2e56f8:;
    if (u32(*gptr<u8>(r5 + 0x80u)) == 0) {  // (from the original)
        goto L_2e57e8;
    }
    if ((*gptr<u32>(r4 + 0x47cu) & 0xffu) != 2u) {  // (from the original)
        if (u32(*gptr<u8>(r4 + 0x424u)) != 0) {  // (from the original)
            r0 = r4 + 0x140u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_002cf3b4(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
        }
        r2 = 0x800000u;  // (from the original)
        r3 = 0u;
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00304ca4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = 0u;
        ea = r13 + 0x20u;  // (from the original)
        *gptr<u32>(ea) = u32(0x20000u);  // (from the original)
        *gptr<u32>(ea + 4) = u32(r1);
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005ccfc4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *gptr<u16>(r5 + 0x46u) = u16(3u);  // (from the original)
        r0 = r13 + 0x18u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00304ce4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_2e57e8;
    }
    *gptr<u8>(0x9500e0u) = u8(1u);  // (from the original)
    r1 = 0x9500e1u;  // (from the original)
    *gptr<u8>(r1) = u8(0u);
    r0 = 2u;
L_2e5780:;
    *gptr<u16>(r5 + 0x46u) = u16(r0);  // (from the original)
    goto L_2e57e8;
L_2e5788:;
    r5 = *gptr<u32>(r4 + 0x484u);  // (from the original)
    r4 = *gptr<u32>(0x9535d8u);  // (from the original)
    if (r5 + 1u == 0) {
        goto L_2e57e8;
    }
    r2 = 0x9047f8u;  // (from the original)
    r1 = r13 + 8u;
    *gptr<u32>(r13 + 0xcu) = u32(0x87aa70u);  // (from the original)
    r0 = r13 + 0x14u;  // (from the original)
    *gptr<u32>(r13 + 8u) = u32(r2);
    guest::cpu()->r[13] = r13;
    r0 = call_00810e14(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x14u;  // (from the original)
    r0 = r13 + 0x40u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00545104(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_003302c8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 1u;
    r1 = 4u;
    r0 = r4 + 0x139u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00813c20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2e57e8:;
    r0 = r6;
    r13 = r13 + 0x80u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e5680
GUEST_EXPORT(0x002e5680, d_002e5680::f_002e5680);

// f_002e58f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e58f0 {

struct __attribute__((packed)) Object_002e58f0_0 {
    u32 word_0;
    u8 unknown_4[0x140];  // (not used here)
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
};
GUEST_OFFSET(Object_002e58f0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_144, 0x144);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_148, 0x148);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_14c, 0x14c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_150, 0x150);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_154, 0x154);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_158, 0x158);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_15c, 0x15c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_160, 0x160);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_164, 0x164);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_168, 0x168);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_16c, 0x16c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_170, 0x170);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_174, 0x174);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_178, 0x178);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_17c, 0x17c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_180, 0x180);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_184, 0x184);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_188, 0x188);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_18c, 0x18c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_190, 0x190);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_194, 0x194);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_198, 0x198);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_19c, 0x19c);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1a0, 0x1a0);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1a4, 0x1a4);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1a8, 0x1a8);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1ac, 0x1ac);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1b0, 0x1b0);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1b4, 0x1b4);  // (from the original)
GUEST_OFFSET(Object_002e58f0_0, word_1b8, 0x1b8);  // (from the original)

inline constexpr guest::Function<0x001abcd4, u32(u32, u32, u32, u32)> call_001abcd4;  // (from the original)
inline constexpr guest::Function<0x004edd84, u32(u32, u32, u32, u32)> call_004edd84;  // (from the original)
inline constexpr guest::Function<0x004ef50c, u32(u32, u32, u32, u32)> call_004ef50c;  // (from the original)

u32 f_002e58f0(gptr<Object_002e58f0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(0x8ebc68u);  // (from the original)
    r0 = r0 + 0x144u;  // (from the original)
    r1 = 0u;
    r2 = ~0u;
    arg0->word_1b4 = u32(r1);
    arg0->word_1b8 = u32(r2);
    arg0->word_1ac = u32(r1);
    arg0->word_1b0 = u32(r2);
    arg0->word_1a4 = u32(r1);
    arg0->word_1a8 = u32(r2);
    arg0->word_19c = u32(r1);
    arg0->word_1a0 = u32(r2);
    arg0->word_194 = u32(r1);
    arg0->word_198 = u32(r2);
    arg0->word_18c = u32(r1);
    arg0->word_190 = u32(r2);
    arg0->word_184 = u32(r1);
    arg0->word_188 = u32(r2);
    arg0->word_17c = u32(r1);
    arg0->word_180 = u32(r2);
    arg0->word_174 = u32(r1);
    arg0->word_178 = u32(r2);
    arg0->word_16c = u32(r1);
    arg0->word_170 = u32(r2);
    arg0->word_164 = u32(r1);
    arg0->word_168 = u32(r2);
    arg0->word_15c = u32(r1);
    arg0->word_160 = u32(r2);
    arg0->word_154 = u32(r1);
    arg0->word_158 = u32(r2);
    r3 = r0 + 8u;
    arg0->word_14c = u32(r1);
    arg0->word_150 = u32(r2);
    arg0->word_144 = u32(r1);
    arg0->word_148 = u32(r2);
    r0 = r0 - 0x144u;  // (from the original)
    r1 = 0x8eb174u;  // (from the original)
    r4 = r0;
    arg0->word_0 = u32(r1);
    r0 = call_001abcd4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0xccu;  // (from the original)
    r0 = call_004ef50c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x54u;  // (from the original)
    r0 = call_004edd84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0x78u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e58f0
GUEST_EXPORT(0x002e58f0, d_002e58f0::f_002e58f0);

// f_002e5a4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5a4c {


u32 f_002e5a4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    if (r2 < 0x60u) {  // (from the original)
        r0 = r0 + ((r2 << 3) - r2 << 4);
    }
    if (r1 < 0x70u) {  // (from the original)
        r0 = r0 + r1;
    }
    *gptr<u8>(r0) = u8(r3);
    return r0;
}

}  // namespace d_002e5a4c
GUEST_EXPORT(0x002e5a4c, d_002e5a4c::f_002e5a4c);

// f_002e5ab4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5ab4 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

u32 f_002e5ab4(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x2a00u;  // (from the original)
    r0 = call_00301444(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e5ab4
GUEST_EXPORT(0x002e5ab4, d_002e5ab4::f_002e5ab4);

// f_002e5af4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5af4 {

struct __attribute__((packed)) Object_002e5af4_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002e5af4_0, word_0, 0x0);  // (from the original)


u32 f_002e5af4(gptr<Object_002e5af4_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = 0x9525ccu;  // (from the original)
    r0 = arg0->word_0;
    *gptr<u32>(r1 + 4u) = u32(r0);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e5af4
GUEST_EXPORT(0x002e5af4, d_002e5af4::f_002e5af4);

// f_002e5b08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5b08 {

struct __attribute__((packed)) Object_002e5b08_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5b08_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5b08_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e5b08(gptr<Object_002e5b08_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_c;
    if (r0 != 0) {
        if (arg0->word_10 == *gptr<u32>(r0 + 0xcu)) {  // (from the original)
            r1 = r0;
            goto L_2e5b34;
        }
    }
    r1 = 0u;
L_2e5b34:;
    if (r1 == 0) {
        r0 = 0u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r2 = u32(*gptr<u8>(r1 + 0x1ceu));  // (from the original)
    if (r2 == 0) {
        goto L_2e5ba8;
    }
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        r2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r1 == r2) {
            goto L_2e5b68;
        }
    }
    r0 = 0u;
L_2e5b68:;
    if (r0 == 0) {
        r0 = 1u;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0054da14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {  // (from the original)
        r0 = 0xabe0acu;  // (from the original)
        r1 = r4;
        r0 = call_0013f000(r0, r1, r2, guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    }
    *gptr<u32>(r4 + 0xcu) = u32(0u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
L_2e5ba8:;
    *gptr<u8>(r1 + 0x1ccu) = u8(1u);  // (from the original)
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {  // (from the original)
        r0 = 0xabe0acu;  // (from the original)
        r1 = r4;
        r0 = call_0013f134(r0, r1, r2, guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r4 + 0x14u)) | 1u;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    }
    *gptr<u8>(r4 + 0x14u) = u8(u32(*gptr<u8>(r4 + 0x14u)) | 2u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e5b08
GUEST_EXPORT(0x002e5b08, d_002e5b08::f_002e5b08);

// f_002e5bec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5bec {

struct __attribute__((packed)) Object_002e5bec_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5bec_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5bec_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0014e910, u32(u32, u32, u32, u32)> call_0014e910;  // (from the original)

u32 f_002e5bec(gptr<Object_002e5bec_0> arg0, u32 r1, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r2 = r1;
    r4 = arg0->word_c;
    if (r4 != 0) {
        r0 = arg0->word_10;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        if (r0 == r1) {
            goto L_2e5c14;
        }
    }
    r4 = 0u;
L_2e5c14:;
    if (r4 != 0) {
        r5 = r4 + 0x12cu;  // (from the original)
        r6 = r4 + 0xfcu;  // (from the original)
        r1 = r2;
        r0 = r5;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014e910(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        r1 = r5;
        r0 = r6;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        r0 = call_0014e910(r0, r1, r2, guest::cpu()->r[3]);
        r1 = 0xaf78e4u;  // (from the original)
        *gptr<u32>(r4 + 0x15cu) = u32(*gptr<u32>(r1));  // (from the original)
        *gptr<u32>(r4 + 0x160u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
        r1 = *gptr<u32>(r1 + 8u);
        *gptr<u32>(r4 + 0x164u) = u32(r1);  // (from the original)
        *gptr<u32>(r4 + 0x178u) = u32(std::bit_cast<u32>(std::bit_cast<float>(*gptr<u32>(r4 + 0x168u)) * std::bit_cast<float>(*gptr<u32>(r4 + 0x15cu))));  // (from the original)
        S1 = std::bit_cast<float>(*gptr<u32>(r4 + 0x160u));  // (from the original)
        S0 = std::bit_cast<float>(*gptr<u32>(r4 + 0x16cu)) * S1;  // (from the original)
        *gptr<u32>(r4 + 0x17cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
}

}  // namespace d_002e5bec
GUEST_EXPORT(0x002e5bec, d_002e5bec::f_002e5bec);

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
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    guest::cpu()->r[13] -= 8u;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r3 = *gptr<u32>(r2 + 0xcu);  // (from the original)
        if (arg0->word_10 == r3) {
            r0 = r2;
            goto L_2e5f00;
        }
    }
    r0 = 0u;
L_2e5f00:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        return r0;
    }
    r0 = call_0054d964(r0, guest::cpu()->r[1], r2, r3);
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002e5ed8
GUEST_EXPORT(0x002e5ed8, d_002e5ed8::f_002e5ed8);

// f_002e5f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5f14 {

struct __attribute__((packed)) Object_002e5f14_0 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_002e5f14_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)

u32 f_002e5f14(gptr<Object_002e5f14_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    if ((u32(arg0->byte_14) & 1u) != 0) {
        r0 = 0xabe0acu;  // (from the original)
        r1 = r4;
        r0 = call_0013f000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    }
    r0 = 0u;
    *gptr<u32>(r4 + 0xcu) = u32(r0);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e5f14
GUEST_EXPORT(0x002e5f14, d_002e5f14::f_002e5f14);

// f_002e5f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e5f84 {

struct __attribute__((packed)) Object_002e5f84_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e5f84_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e5f84_0, word_10, 0x10);  // (from the original)


u32 f_002e5f84(gptr<Object_002e5f84_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r2 + 0xcu)) {  // (from the original)
            goto L_2e5fa4;
        }
    }
    r2 = 0u;
L_2e5fa4:;
    if (r2 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    *gptr<u32>(r2 + 0x1b4u) = u32(*gptr<u32>(r1));  // (from the original)
    *gptr<u32>(r2 + 0x1b8u) = u32(*gptr<u32>(r1 + 4u));  // (from the original)
    r1 = *gptr<u32>(r1 + 8u);
    *gptr<u32>(r2 + 0x1bcu) = u32(r1);  // (from the original)
    *gptr<u8>(r2 + 0x1cdu) = u8(r0);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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


u32 f_002e5fd0(gptr<Object_002e5fd0_0> arg0, gptr<Object_002e5fd0_1> arg1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r2 + 0xcu)) {  // (from the original)
            goto L_2e5ff0;
        }
    }
    r2 = 0u;
L_2e5ff0:;
    if (r2 == 0) {
        return r0;
    }
    *gptr<u32>(r2 + 0x180u) = u32(arg1->word_0);  // (from the original)
    *gptr<u32>(r2 + 0x184u) = u32(arg1->word_4);  // (from the original)
    r0 = arg1->word_8;
    *gptr<u32>(r2 + 0x188u) = u32(r0);  // (from the original)
    return r0;
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


u32 f_002e6014(gptr<Object_002e6014_0> arg0, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = arg0->word_c;
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
    r3 = *gptr<u32>(r1 + 8u);
    S1 = std::bit_cast<float>(*gptr<u32>(0x2e6074u));  // (from the original)
    r0 = 0u;
    res = r3;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (u32(res == 0) || res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
L_2e6058:;
        r2 = r0 + (r0 << 1);
        r0 = r0 + 1u;
        res = r3 - r0;
        *gptr<u32>(r1 + (r2 << 3) + 0x30u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r3 ^ r0) & (r3 ^ res)) >> 0x1f);  // (from the original)
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


u32 f_002e6078(gptr<Object_002e6078_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6098;
        }
    }
    r1 = 0u;
L_2e6098:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    *gptr<u32>(r1 + 0x16cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u32>(r1 + 0x168u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r0 = r1 + 0x15cu;  // (from the original)
    S1 = S0 * std::bit_cast<float>(*gptr<u32>(r0));
    S0 = S0 * std::bit_cast<float>(*gptr<u32>(r0 + 4));
    *gptr<u32>(r1 + 0x178u) = u32(std::bit_cast<u32>(S1));  // (from the original)
    *gptr<u32>(r1 + 0x17cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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


u32 f_002e60c4(gptr<Object_002e60c4_0> arg0, float S0, float S1) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e60e4;
        }
    }
    r1 = 0u;
L_2e60e4:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    r0 = r1 + 0x168u;  // (from the original)
    *gptr<u32>(r0) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r0 + 4) = u32(std::bit_cast<u32>(S1));
    r0 = r1 + 0x15cu;  // (from the original)
    r1 = r1 + 0x178u;  // (from the original)
    S0 = S0 * std::bit_cast<float>(*gptr<u32>(r0));
    S1 = S1 * std::bit_cast<float>(*gptr<u32>(r0 + 4));
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return r0;
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


u32 f_002e6110(gptr<Object_002e6110_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6130;
        }
    }
    r1 = 0u;
L_2e6130:;
    if (r1 != 0) {
        *gptr<u32>(r1 + 0x1a0u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
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


u32 f_002e613c(gptr<Object_002e613c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r2 + 0xcu)) {  // (from the original)
            goto L_2e615c;
        }
    }
    r2 = 0u;
L_2e615c:;
    if (r2 != 0) {
        *gptr<u8>(r2 + 0x1ceu) = u8(r1);  // (from the original)
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


u32 f_002e6168(gptr<Object_002e6168_0> arg0, float S0, float S1) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = arg0->word_c;
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
    r3 = *gptr<u32>(r1 + 8u);
    S1 = std::bit_cast<float>(*gptr<u32>(0x2e61c8u));  // (from the original)
    r0 = 0u;
    res = r3;
    S0 = std::bit_cast<float>(vcvt_sz_f(S0 * S1));
    if (u32(res == 0) || res >> 0x1f != (r3 & (r3 ^ res)) >> 0x1f) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->s[0] = S0;
        guest::cpu()->s[1] = S1;
        return r0;
    }
    do {
L_2e61ac:;
        r2 = r0 + (r0 << 1);
        r0 = r0 + 1u;
        res = r3 - r0;
        *gptr<u32>(r1 + (r2 << 3) + 0x34u) = u32(std::bit_cast<u32>(S0));  // (from the original)
        guest::preempt();
    } while (!u32(res == 0) && res >> 0x1f == ((r3 ^ r0) & (r3 ^ res)) >> 0x1f);  // (from the original)
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
};
GUEST_OFFSET(Object_002e61cc_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e61cc_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0013f134, u32(u32, u32, u32, u32)> call_0013f134;  // (from the original)
inline constexpr guest::Function<0x001e58fc, u32(u32, u32, u32, u32)> call_001e58fc;  // (from the original)

u32 f_002e61cc(gptr<Object_002e61cc_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x20u;  // (from the original)
    r4 = arg0->word_c;
    r5 = r0;
    if (r4 != 0) {
        r0 = arg0->word_10;
        r1 = *gptr<u32>(r4 + 0xcu);  // (from the original)
        if (r0 == r1) {
            goto L_2e61f8;
        }
    }
    r4 = 0u;
L_2e61f8:;
    if (r4 == 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 0x1cu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_001e58fc(r0, r1, r2, guest::cpu()->r[3]);
    r0 = *gptr<u32>(r13);
    r1 = *gptr<u32>(r13 + 4);
    r2 = *gptr<u32>(r13 + 8);
    r4 = r4 + 0x18cu;  // (from the original)
    *gptr<u32>(r4) = u32(r0);
    *gptr<u32>(r4 + 4) = u32(r1);
    *gptr<u32>(r4 + 8) = u32(r2);
    r1 = u32(*gptr<u8>(r5 + 0x14u)) | 8u;  // (from the original)
    *gptr<u8>(r5 + 0x14u) = u8(r1);  // (from the original)
    if ((r1 & 1u) != 0) {
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r0 = 0xabe0acu;  // (from the original)
    r1 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0013f134(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = u32(*gptr<u8>(r5 + 0x14u)) | 1u;  // (from the original)
    *gptr<u8>(r5 + 0x14u) = u8(r0);  // (from the original)
    r13 = r13 + 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e61cc
GUEST_EXPORT(0x002e61cc, d_002e61cc::f_002e61cc);

// f_002e6250: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6250 {

struct __attribute__((packed)) Object_002e6250_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6250_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6250_0, word_10, 0x10);  // (from the original)


u32 f_002e6250(gptr<Object_002e6250_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6270;
        }
    }
    r1 = 0u;
L_2e6270:;
    if (r1 != 0) {
        *gptr<u32>(r1 + 0x19cu) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
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


u32 f_002e627c(gptr<Object_002e627c_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r2 + 0xcu)) {  // (from the original)
            goto L_2e629c;
        }
    }
    r2 = 0u;
L_2e629c:;
    if (r2 == 0) {
        return r0;
    }
    r0 = r1;
    if (r1 != 0) {
        r0 = ~0x80000000u;  // (from the original)
    }
    *gptr<u32>(r2 + 0x1c0u) = u32(r0);  // (from the original)
    return r0;
}

}  // namespace d_002e627c
GUEST_EXPORT(0x002e627c, d_002e627c::f_002e627c);

// f_002e6368: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6368 {

struct __attribute__((packed)) Object_002e6368_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6368_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6368_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e6368(gptr<Object_002e6368_0> arg0, u32 r1_unused, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = arg0->word_c;
    if (r0 != 0) {
        r2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (arg0->word_10 == r2) {
            r1 = r0;
            goto L_2e6394;
        }
    }
    r1 = 0u;
L_2e6394:;
    r5 = 0u;
    if (r1 == 0) {
        goto L_2e6404;
    }
    r2 = u32(*gptr<u8>(r1 + 0x1ceu));  // (from the original)
    if (r2 == 0) {
        goto L_2e6434;
    }
    if (r0 != 0) {
        r1 = *gptr<u32>(r4 + 0x10u);  // (from the original)
        r2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r1 == r2) {
            goto L_2e63c8;
        }
    }
    r0 = 0u;
L_2e63c8:;
    if (r0 != 0) {
        r0 = call_0054da14(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {  // (from the original)
            r0 = 0xabe0acu;  // (from the original)
            r1 = r4;
            r0 = call_0013f000(r0, r1, r2, guest::cpu()->r[3]);
            r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
            *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
        }
        *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    }
    r0 = 1u;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2e6404:;
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {  // (from the original)
        goto L_2e6428;
    }
L_2e6410:;
    r0 = 0xabe0acu;  // (from the original)
    r1 = r4;
    r0 = call_0013f000(r0, r1, r2, guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
L_2e6428:;
    r0 = 1u;
    *gptr<u32>(r4 + 0xcu) = u32(r5);  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
L_2e6434:;
    *gptr<u8>(r1 + 0x1ccu) = u8(1u);  // (from the original)
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) == 0) {  // (from the original)
        guest::preempt();
        goto L_2e6428;
    }
    guest::preempt();
    goto L_2e6410;
}

}  // namespace d_002e6368
GUEST_EXPORT(0x002e6368, d_002e6368::f_002e6368);

// f_002e6450: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6450 {

struct __attribute__((packed)) Object_002e6450_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Object_002e6450_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002e6450_0, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)
inline constexpr guest::Function<0x0054da14, u32(u32, u32, u32, u32)> call_0054da14;  // (from the original)

u32 f_002e6450(gptr<Object_002e6450_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = arg0->word_c;
    if (r0 != 0) {
        r1 = arg0->word_10;
        r2 = *gptr<u32>(r0 + 0xcu);  // (from the original)
        if (r1 == r2) {
            goto L_2e6478;
        }
    }
    r0 = 0u;
L_2e6478:;
    if (r0 == 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = call_0054da14(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if ((u32(*gptr<u8>(r4 + 0x14u)) & 1u) != 0) {  // (from the original)
        r0 = 0xabe0acu;  // (from the original)
        r1 = r4;
        r0 = call_0013f000(r0, r1, r2, guest::cpu()->r[3]);
        r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    }
    *gptr<u32>(r4 + 0xcu) = u32(0u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e6450
GUEST_EXPORT(0x002e6450, d_002e6450::f_002e6450);

// f_002e64bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e64bc {

inline constexpr guest::Function<0x002e6368, u32(u32, u32, u32, u32)> call_002e6368;  // (from the original)

u32 f_002e64bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_002e6368(r0, r1, r2, r3);
    r0 = 0u;
    r1 = r0;
    *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
    r0 = *gptr<u32>(r4 + 0xcu);  // (from the original)
    if (r0 != 0) {
        if (*gptr<u32>(r4 + 0x10u) == *gptr<u32>(r0 + 0xcu)) {  // (from the original)
            goto L_2e64f4;
        }
    }
    r0 = 0u;
L_2e64f4:;
    if (r0 != 0) {
        *gptr<u32>(r0 + 0xf8u) = u32(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e64bc
GUEST_EXPORT(0x002e64bc, d_002e64bc::f_002e64bc);

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
    u32 r0 = arg0.addr();
    u32 r2 = 0;
    r2 = arg0->word_c;
    if (r2 != 0) {
        r3 = *gptr<u32>(r2 + 0xcu);  // (from the original)
        if (arg0->word_10 == r3) {
            r0 = r2;
            goto L_2e66b0;
        }
    }
    r0 = 0u;
L_2e66b0:;
    if (r0 == 0) {
        return r0;
    }
    return call_0054da5c(r0, guest::cpu()->r[1], r2, r3);
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


u32 f_002e6808(gptr<Object_002e6808_0> arg0, float S0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        r0 = arg0->word_10;
        if (r0 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6828;
        }
    }
    r1 = 0u;
L_2e6828:;
    if (r1 != 0) {
        *gptr<u32>(r1 + 0x198u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    }
    guest::cpu()->r[1] = r1;
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


void f_002e6878(gptr<Object_002e6878_0> arg0, float S0, float S1, float S2) {
    u32 r1 = 0;
    r1 = arg0->word_c;
    if (r1 != 0) {
        if (arg0->word_10 == *gptr<u32>(r1 + 0xcu)) {  // (from the original)
            goto L_2e6898;
        }
    }
    r1 = 0u;
L_2e6898:;
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    r1 = r1 + 0x18cu;  // (from the original)
    *gptr<u32>(r1) = u32(std::bit_cast<u32>(S0));
    *gptr<u32>(r1 + 4) = u32(std::bit_cast<u32>(S1));
    *gptr<u32>(r1 + 8) = u32(std::bit_cast<u32>(S2));
    r1 = u32(arg0->byte_14) | 4u;
    arg0->byte_14 = u8(r1);
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e6878
GUEST_EXPORT(0x002e6878, d_002e6878::f_002e6878);

// f_002e6944: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e6944 {

struct __attribute__((packed)) Object_002e6944_0 {
    u32 word_0;
    u8 unknown_4[0x10];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Object_002e6944_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e6944_0, byte_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x0013f000, u32(u32, u32, u32, u32)> call_0013f000;  // (from the original)

u32 f_002e6944(gptr<Object_002e6944_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = u32(arg0->byte_14);
    r4 = r0;
    arg0->word_0 = u32(0x8f39ecu);  // (from the original)
    if ((r1 & 1u) == 0) {
        r0 = r4;
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 0xabe0acu;  // (from the original)
    r1 = r4;
    r0 = call_0013f000(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = u32(*gptr<u8>(r4 + 0x14u)) & ~1u;  // (from the original)
    *gptr<u8>(r4 + 0x14u) = u8(r1);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e6944
GUEST_EXPORT(0x002e6944, d_002e6944::f_002e6944);

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

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)

u32 f_002e6a3c(gptr<Object_002e6a3c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->word_20 = u32(r0);
    arg0->byte_25 = u8(1u);
    arg0->byte_24 = u8(r0);
    r2 = 0xffu;  // (from the original)
    r1 = 0x1eu;  // (from the original)
    r0 = r4;
    r0 = call_0013fac4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e6a3c
GUEST_EXPORT(0x002e6a3c, d_002e6a3c::f_002e6a3c);

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

u32 f_002e764c(gptr<Object_002e764c_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    r1 = u32(arg0->byte_f4);
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = arg0->word_18;
    r1 = 0u;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
    return call_00136e58(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002e764c
GUEST_EXPORT(0x002e764c, d_002e764c::f_002e764c);

// f_002e7f04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e7f04 {

struct __attribute__((packed)) Object_002e7f04_0 {
    u8 unknown_0[0x18];  // (not used here)
    u32 word_18;
    u8 byte_1c;
};
GUEST_OFFSET(Object_002e7f04_0, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002e7f04_0, byte_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)

u32 f_002e7f04(gptr<Object_002e7f04_0> arg0) {
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r12 = 0;
    u32 r13 = guest::cpu()->r[13];
    u32 nf = 0;
    u32 vf = 0;
    r13 = r13 - 0x30u;  // (from the original)
    r3 = 0u;
    r5 = r0;
    arg0->byte_1c = u8(r3);
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r13 + 4u) = u32(r3);
    *gptr<u32>(r13 + 8u) = u32(r3);
    *gptr<u32>(r13 + 0xcu) = u32(r3);  // (from the original)
    r0 = arg0->word_18;
    r1 = 0x10u;  // (from the original)
    r12 = r13;
    do {
L_2e7f34:;
        r2 = u32(*gptr<u8>(r0));
        if (!(r2 >= 0xdu)) {  // (from the original)
            r4 = u32(*gptr<u8>(r12 + r2)) + 1u;
            *gptr<u8>(r12 + r2) = u8(r4);
        }
        res = r1 - 1u;
        r1 = res;
        r0 = r0 + 1u;
        guest::preempt();
    } while (res != 0);
    r0 = 0u;
    r1 = r5 + 0x1du;  // (from the original)
    do {
L_2e7f60:;
        r2 = u32(*gptr<u8>(r12 + r0));
        if (!(r2 == 0)) {
            *gptr<u8>(u32(*gptr<u8>(r5 + 0x1cu)) + r1) = u8(r0);  // (from the original)
            r2 = u32(*gptr<u8>(r5 + 0x1cu)) + 1u;  // (from the original)
            *gptr<u8>(r5 + 0x1cu) = u8(r2);  // (from the original)
        }
        r0 = r0 + 1u;
        guest::preempt();
    } while (s32(r0) < s32(0xdu));  // (from the original)
    r1 = u32(*gptr<u8>(r5 + 0x1cu));  // (from the original)
    r0 = 3u;
    if (r1 == 0) {
        r1 = 1u;
        *gptr<u8>(r5 + 0x1cu) = u8(r1);  // (from the original)
        *gptr<u8>(r5 + 0x1du) = u8(r0);  // (from the original)
    }
    r0 = 7u;
    *gptr<u8>(r5 + 0x15u) = u8(r3);  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0 - 3u;
    r1 = 0xcu;  // (from the original)
    if (res >> 0x1f == ((r0 ^ 3u) & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2e7fc8;
    }
L_2e7fc0:;
    *gptr<u8>(r5 + 0x15u) = u8(r1);  // (from the original)
    goto L_2e7ff4;
L_2e7fc8:;
    if (s32(r0) < s32(6u)) {
        r0 = 8u;
        goto L_2e7fe0;
    }
    res = r0 - 7u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r0 ^ 7u) & (r0 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        r0 = 4u;
    }
    if (nf == vf) {
        goto L_2e7fe8;
    }
L_2e7fe0:;
    *gptr<u8>(r5 + 0x15u) = u8(r0);  // (from the original)
    goto L_2e7ff4;
L_2e7fe8:;
    if (u32(*gptr<u8>(r5 + 0x15u)) == 0) {  // (from the original)
        guest::preempt();
        goto L_2e7fc0;
    }
L_2e7ff4:;
    r0 = u32(*gptr<u8>(r5 + 0x15u));  // (from the original)
    r6 = 0u;
    if (!u32(r0 >= 0u) || u32(r0 == 0)) {
        goto L_2e8114;
    }
    r9 = 0x83a954u;  // (from the original)
    r8 = 0xffu;  // (from the original)
    r7 = r9 + 3u;
L_2e8010:;
    r0 = 7u;
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = 0u;
    r4 = r0;
L_2e8024:;
    r2 = u32(*gptr<u8>(r9 + r4));
    r0 = r0 + r2 & 0xffu;  // (from the original)
    if (s32(r1) >= s32(r0)) {
        goto L_2e80fc;
    }
    r3 = u32(*gptr<u8>(r5 + 0x15u));  // (from the original)
    r2 = u32(*gptr<u8>(r7 + r4)) + r6;
    if (u32(r2 >= r3) && !u32(r2 == r3)) {
        goto L_2e80fc;
    }
    if (r6 == 0) {
        goto L_2e806c;
    }
    if (u32(*gptr<u8>(r5 + r6 + 0x29u)) == 0xffu) {  // (from the original)
        goto L_2e806c;
    }
    if (r4 == 2u) {
        goto L_2e8108;
    }
L_2e806c:;
    if (r4 != 0) {
        if (r4 == 1u) {
            goto L_2e80b0;
        }
        if (r4 != 2u) {
            goto L_2e80ec;
        }
        goto L_2e80d0;
    }
    r0 = u32(*gptr<u8>(r5 + 0x1cu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + r5 + 0x1du));  // (from the original)
    r0 = r5 + r6;
    *gptr<u8>(r0 + 0x2au) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x2bu) = u8(r8);  // (from the original)
    *gptr<u8>(r0 + 0x2cu) = u8(r8);  // (from the original)
    *gptr<u8>(r0 + 0x2du) = u8(r8);  // (from the original)
    goto L_2e80ec;
L_2e80b0:;
    r0 = u32(*gptr<u8>(r5 + 0x1cu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + r5 + 0x1du));  // (from the original)
    r0 = r5 + r6;
    *gptr<u8>(r0 + 0x2au) = u8(r1);  // (from the original)
    *gptr<u8>(r0 + 0x2bu) = u8(r8);  // (from the original)
    goto L_2e80ec;
L_2e80d0:;
    r0 = u32(*gptr<u8>(r5 + 0x1cu));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff6f8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5 + r6;
    r0 = u32(*gptr<u8>(r0 + r5 + 0x1du));  // (from the original)
    *gptr<u8>(r1 + 0x2au) = u8(r0);  // (from the original)
    *gptr<u8>(r1 + 0x2bu) = u8(r0);  // (from the original)
L_2e80ec:;
    r6 = u32(*gptr<u8>(r7 + r4)) + r6 & 0xffu;  // (from the original)
    goto L_2e8108;
L_2e80fc:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_2e8024;
    }
L_2e8108:;
    r0 = u32(*gptr<u8>(r5 + 0x15u));  // (from the original)
    if (u32(r0 >= r6) && !u32(r0 == r6)) {
        guest::preempt();
        goto L_2e8010;
    }
L_2e8114:;
    r13 = r13 + 0x30u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e7f04
GUEST_EXPORT(0x002e7f04, d_002e7f04::f_002e7f04);

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

inline constexpr guest::Function<0x0013fac4, u32(u32, u32, u32, u32)> call_0013fac4;  // (from the original)

u32 f_002e8444(gptr<Object_002e8444_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = 0u;
    arg0->word_0 = u32(r0);
    arg0->word_4 = u32(r0);
    arg0->byte_8 = u8(r0);
    arg0->byte_9 = u8(r0);
    arg0->word_c = u32(r0);
    arg0->word_10 = u32(r0);
    arg0->byte_14 = u8(r0);
    arg0->byte_15 = u8(r0);
    arg0->word_18 = u32(r0);
    arg0->byte_1c = u8(r0);
    arg0->byte_36 = u8(r0);
    arg0->word_38 = u32(0x78u);  // (from the original)
    arg0->byte_3c = u8(r0);
    arg0->byte_3d = u8(r0);
    arg0->word_40 = u32(r0);
    arg0->word_1d = u32(r0);
    arg0->word_21 = u32(r0);
    arg0->word_25 = u32(r0);
    arg0->byte_29 = u8(r0);
    r2 = 0x64u;  // (from the original)
    r1 = 0xcu;  // (from the original)
    r0 = r4 + 0x2au;  // (from the original)
    r0 = call_0013fac4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e8444
GUEST_EXPORT(0x002e8444, d_002e8444::f_002e8444);

// f_002e8ce8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e8ce8 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_002e8ce8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
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
    r1 = 0u;
    S0 = std::bit_cast<float>(*gptr<u32>(0x2e8d50u));  // (from the original)
    ea = r0 - 0x48u;  // (from the original)
    *gptr<u32>(ea) = u32(0x8f3a64u);  // (from the original)
    r0 = ea;
    *gptr<u16>(r0 + 0x5cu) = u16(r1);  // (from the original)
    *gptr<u32>(r0 + 0x60u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0x64u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 4u) = u32(6u);
    r13 = r13 + 8;
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    guest::cpu()->s[0] = S0;
    return r0;
}

}  // namespace d_002e8ce8
GUEST_EXPORT(0x002e8ce8, d_002e8ce8::f_002e8ce8);

// f_002e8dfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e8dfc {

struct __attribute__((packed)) Object_002e8dfc_0 {
    u8 unknown_0[0x3c];  // (not used here)
    u32 word_3c;
    u8 unknown_40[0x38];  // (not used here)
    u8 byte_78;
};
GUEST_OFFSET(Object_002e8dfc_0, word_3c, 0x3c);  // (from the original)
GUEST_OFFSET(Object_002e8dfc_0, byte_78, 0x78);  // (from the original)

inline constexpr guest::Function<0x0020b0a4, u32(u32, u32, u32, u32)> call_0020b0a4;  // (from the original)

u32 f_002e8dfc(gptr<Object_002e8dfc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 nf = 0;
    u32 vf = 0;
    arg0->word_3c = u32(8u);
    r3 = u32(s32(s8(arg0->byte_78)));
    nf = r3 >> 0x1f;  // (from the original)
    vf = 0u;
    if (nf == vf) {
        r3 = r3 + 0x1000789u;  // (from the original)
    }
    if (nf != vf) {
        r3 = 0x100038bu;  // (from the original)
    }
    return call_0020b0a4(r0, guest::cpu()->r[1], guest::cpu()->r[2], r3);
}

}  // namespace d_002e8dfc
GUEST_EXPORT(0x002e8dfc, d_002e8dfc::f_002e8dfc);

// f_002e9044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9044 {

inline constexpr guest::Function<0x0020b280, u32(u32, u32, u32, u32)> call_0020b280;  // (from the original)

u32 f_002e9044(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0020b280(r0, r1, r2, r3);
    r1 = 0u;
    *gptr<u32>(r0) = u32(0x8f3aa4u);  // (from the original)
    *gptr<u8>(r0 + 0x70u) = u8(r1);  // (from the original)
    *gptr<u32>(r0 + 0x74u) = u32(r1);  // (from the original)
    *gptr<u8>(r0 + 0x78u) = u8(0xffu);  // (from the original)
    *gptr<u8>(r0 + 0x79u) = u8(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e9044
GUEST_EXPORT(0x002e9044, d_002e9044::f_002e9044);

// f_002e9118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9118 {

struct __attribute__((packed)) Object_002e9118_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
};
GUEST_OFFSET(Object_002e9118_0, byte_34, 0x34);  // (from the original)

inline constexpr guest::Function<0x0020a4cc, u32(u32, u32, u32, u32)> call_0020a4cc;  // (from the original)
inline constexpr guest::Function<0x002f74c8, u32(u32, u32, u32, u32)> call_002f74c8;  // (from the original)
inline constexpr guest::Function<0x002f74e0, u32(u32, u32, u32, u32)> call_002f74e0;  // (from the original)

u32 f_002e9118(gptr<Object_002e9118_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_34);
    r5 = r1;
    r6 = r2;
    if (r0 == 0) {
        r0 = call_002f74c8(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r0;
        r0 = 8u;
        r0 = call_002f74e0(r0, r1, r2, guest::cpu()->r[3]);
        if (r0 != 0) {
            *gptr<u32>(r4 + 0x3cu) = u32(0xau);  // (from the original)
        }
        r2 = r6;
        r1 = r5;
        r0 = r4;
        r0 = call_0020a4cc(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        *gptr<u32>(r4 + 0xa8u) = u32(r4);  // (from the original)
        r0 = r4 + 0xb8u;  // (from the original)
        *gptr<u32>(r4 + 0xccu) = u32(r4);  // (from the original)
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e9118
GUEST_EXPORT(0x002e9118, d_002e9118::f_002e9118);

// f_002e9268: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9268 {

struct __attribute__((packed)) Object_002e9268_0 {
    u8 unknown_0[0x34];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x73];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_002e9268_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002e9268_0, word_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> call_0032c348;  // (from the original)
inline constexpr guest::Function<0x00342ed0, u32(u32, u32, u32, u32)> call_00342ed0;  // (from the original)

u32 f_002e9268(gptr<Object_002e9268_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r0 = u32(arg0->byte_34);
    if (r0 != 0) {
        r5 = 0u;
        r0 = r4 + 0x5cu;  // (from the original)
        arg0->word_a8 = u32(r5);
        r0 = call_0032c348(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = r4 + 0xb8u;  // (from the original)
        *gptr<u32>(r4 + 0xccu) = u32(r5);  // (from the original)
        r0 = call_00342ed0(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = r4 + 0x44u;  // (from the original)
        r0 = call_00136cc8(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = r4;
        guest::cpu()->r[13] += 0x10u;  // (from the original)
        return call_0020aedc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return r0;
}

}  // namespace d_002e9268
GUEST_EXPORT(0x002e9268, d_002e9268::f_002e9268);

// f_002e92b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e92b0 {

inline constexpr guest::Function<0x0020af18, u32(u32, u32, u32, u32)> call_0020af18;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x00321c84, u32(u32, u32, u32, u32)> call_00321c84;  // (from the original)
inline constexpr guest::Function<0x003425ec, u32(u32, u32, u32, u32)> call_003425ec;  // (from the original)

u32 f_002e92b0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0x8f3ae4u;  // (from the original)
    *gptr<u32>(r0 - 0x48u) = u32(r1);  // (from the original)
    r0 = r0 + 0x14u;  // (from the original)
    r0 = call_00321c84(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x5cu;  // (from the original)
    r0 = call_003425ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r0 - 0xb8u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e92b0
GUEST_EXPORT(0x002e92b0, d_002e92b0::f_002e92b0);

// f_002e9328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9328 {

struct __attribute__((packed)) Object_002e9328_0 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u8 byte_34;
    u8 unknown_35[0x73];  // (not used here)
    u32 word_a8;
};
GUEST_OFFSET(Object_002e9328_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, byte_34, 0x34);  // (from the original)
GUEST_OFFSET(Object_002e9328_0, word_a8, 0xa8);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x0013d7cc, u32(u32, u32, u32, u32)> call_0013d7cc;  // (from the original)
inline constexpr guest::Function<0x0020aedc, u32(u32, u32, u32, u32)> call_0020aedc;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x0032c348, u32(u32, u32, u32, u32)> call_0032c348;  // (from the original)
inline constexpr guest::Function<0x00342ed0, u32(u32, u32, u32, u32)> call_00342ed0;  // (from the original)

u32 f_002e9328(gptr<Object_002e9328_0> arg0, u32 r1, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    arg0->word_0 = u32(0x8f3ae4u);  // (from the original)
    if (u32(arg0->byte_34) != 0) {
        r5 = 0u;
        r0 = r4 + 0x5cu;  // (from the original)
        arg0->word_a8 = u32(r5);
        r0 = call_0032c348(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0xb8u;  // (from the original)
        *gptr<u32>(r4 + 0xccu) = u32(r5);  // (from the original)
        r0 = call_00342ed0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r4;
        r0 = r4 + 0x44u;  // (from the original)
        r0 = call_00136cc8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r5;
        r0 = call_0020aedc(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    r1 = 0x8f701cu;  // (from the original)
    r0 = r4 + 0xc0u;  // (from the original)
    *gptr<u32>(r4 + 0xb8u) = u32(r1);  // (from the original)
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x5cu;  // (from the original)
    r0 = call_0013d7cc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0 - 0x5cu;  // (from the original)
    r5 = r4;
    *gptr<u32>(r4) = u32(0x8f8d88u);  // (from the original)
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
    r4 = r0;
    r0 = call_00136cc8(r0, r1, r2, r3);
    r1 = 0x137d74u;  // (from the original)
    r0 = r4;
    r3 = 1u;
    r2 = 4u;
    r0 = call_002f76ac(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r0 = r5;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e9328
GUEST_EXPORT(0x002e9328, d_002e9328::f_002e9328);

// f_002e9954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9954 {

struct __attribute__((packed)) Object_002e9954_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_002e9954_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9954_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002a4c30, u32(u32, u32, u32, u32)> call_002a4c30;  // (from the original)

u32 f_002e9954(gptr<Object_002e9954_0> arg0) {
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    r1 = arg0->word_0;
    if (r1 >= 0x30u) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 8;
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r14);
    r13 = r13 - 8;
    r4 = r0;
    r0 = arg0->word_8;
    guest::cpu()->r[13] = r13;
    r0 = call_002a4c30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = 0u;
    r1 = ~0u;
    ea = r4 + 8u;
    *gptr<u32>(ea) = u32(r0);
    ea = r4;
    *gptr<u32>(ea) = u32(r1);
    ea = r4 + 4u;
    *gptr<u32>(ea) = u32(r0);
    ea = r13;
    r13 = r13 + 8;
    r4 = *gptr<u32>(ea);
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4;
    guest::cpu()->r[13] = r13;
    return r0;
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
    u32 r1 = 0;
    r1 = 0u;
    arg0->word_4 = u32(r1);
    arg0->word_0 = u32(~0u);
    arg0->word_8 = u32(r1);
    arg0->word_c = u32(r1);
    arg0->byte_10 = u8(r1);
    arg0->word_14 = u32(r1);
    arg0->word_18 = u32(r1);
    arg0->half_1c = u16(r1);
    arg0->byte_1e = u8(r1);
    arg0->byte_1f = u8(r1);
    arg0->half_20 = u16(~4u);
    arg0->half_22 = u16(0x13u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return;
}

}  // namespace d_002e99d0
GUEST_EXPORT(0x002e99d0, d_002e99d0::f_002e99d0);

// f_002e9a14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9a14 {

struct __attribute__((packed)) Object_002e9a14_0 {
    u32 word_0;
    u8 unknown_4[0x4];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_002e9a14_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002e9a14_0, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x00136cc8, u32(u32, u32, u32, u32)> call_00136cc8;  // (from the original)
inline constexpr guest::Function<0x002a4c30, u32(u32, u32, u32, u32)> call_002a4c30;  // (from the original)

u32 f_002e9a14(gptr<Object_002e9a14_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r1 = arg0->word_0;
    r4 = r0;
    if (r1 < 0x30u) {  // (from the original)
        r0 = arg0->word_8;
        r0 = call_002a4c30(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = 0u;
        r1 = ~0u;
        *gptr<u32>(r4 + 8u) = u32(r0);
        *gptr<u32>(r4) = u32(r1);
        *gptr<u32>(r4 + 4u) = u32(r0);
    }
    r0 = r4 + 0xcu;  // (from the original)
    r0 = call_00136cc8(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e9a14
GUEST_EXPORT(0x002e9a14, d_002e9a14::f_002e9a14);

// f_002e9d08: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9d08 {


u32 f_002e9d08(u32 r0, u32 r1) {
    u32 r2 = 0;
    r2 = r1 + (r1 << 1);
    r1 = 0u;
    r0 = r0 + (r2 << 1) + 0xc90u;  // (from the original)
    *gptr<u16>(r0) = u16(r1);
    *gptr<u16>(r0 + 2u) = u16(r1);
    *gptr<u8>(r0 + 4u) = u8(r1);
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002e9d08
GUEST_EXPORT(0x002e9d08, d_002e9d08::f_002e9d08);

// f_002e9e64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9e64 {

struct __attribute__((packed)) Object_002e9e64_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_002e9e64_0, byte_0, 0x0);  // (from the original)

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
    u32 ea = 0;
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r5 = 0u;
    r0 = u32(arg0->byte_0);
    if ((r0 & 1u) == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb378(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0;
    r8 = *gptr<u32>(ea);
    ea = r0 + 4u;
    r6 = *gptr<u32>(ea);
    r7 = *gptr<u32>(ea + 4);
    r1 = r4 + 9u;
    r0 = r13 + 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x11u;  // (from the original)
    r0 = r13 + 0x2cu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r3 = 0u;
    ea = r13 + 0x14u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r9 = r13 + 8u;
    *gptr<u32>(r13) = u32(r3);
    *gptr<u32>(r9) = u32(r0);
    *gptr<u32>(r9 + 4) = u32(r1);
    *gptr<u32>(r9 + 8) = u32(r2);
    r2 = 0x15u;  // (from the original)
    r1 = r3;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_0030a488(r0, r1, r2, r3);
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r7);
    r0 = *gptr<u32>(r9);
    r1 = *gptr<u32>(r9 + 4);
    r2 = *gptr<u32>(r9 + 8);
    r3 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 0x6e212u;  // (from the original)
    r0 = r0 + 0x80u + r9;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2e9f7c;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0 + 0x80u + r9;  // (from the original)
    r0 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    ea = r13 + 0x38u;  // (from the original)
    r0 = *gptr<u32>(ea);
    r1 = *gptr<u32>(ea + 4);
    r2 = *gptr<u32>(ea + 8);
    r3 = r8;
    *gptr<u32>(r13) = u32(r6);
    *gptr<u32>(r13 + 4) = u32(r7);
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        goto L_2e9fd8;
    }
    ea = r13 + 0x18u;  // (from the original)
    r1 = *gptr<u32>(ea + 4);
    r2 = r7;
    *gptr<u32>(r13) = u32(*gptr<u32>(ea));
    *gptr<u32>(r13 + 4) = u32(r1);
    r3 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    r1 = r6;
    r0 = r8;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb4a0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        ea = r13 + 0x30u;  // (from the original)
        r1 = *gptr<u32>(ea + 4);
        r2 = r7;
        *gptr<u32>(r13) = u32(*gptr<u32>(ea));
        *gptr<u32>(r13 + 4) = u32(r1);
        r3 = *gptr<u32>(r13 + 0x2cu);  // (from the original)
        r1 = r6;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fb4a0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            goto L_2e9fd8;
        }
    }
    r5 = 1u;
L_2e9f7c:;
    r1 = r5;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eaf8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eb0b4(r0, r1, r2, r3);
    r3 = 1u;
    r2 = 0u;
    r1 = r3;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eab00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = 0u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_002eb5d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4));
    if ((r0 & 1u) == 0) {
        goto L_2e9fd8;
    }
    if ((r0 & 0x80u) != 0) {  // (from the original)
        goto L_2e9fd8;
    }
    r0 = r4;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return call_002eb830(r0, r1, r2, r3);
L_2e9fd8:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e9e64
GUEST_EXPORT(0x002e9e64, d_002e9e64::f_002e9e64);

// f_002e9fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002e9fe4 {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32, u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002e9fe4(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    *gptr<u32>(r13 + 0xffffffe8u) = u32(r3);  // (from the original)
    r13 = r13 - 0x18;  // (from the original)
    r4 = r0;
    r6 = r0 + 0x13eu;  // (from the original)
    r7 = r0 + 0x142u;  // (from the original)
    r5 = r0 + 0x100u;  // (from the original)
    if (r1 != 0) {
        if (r1 == 1u) {
            goto L_2ea04c;
        }
        if (r1 != 2u) {
            goto L_2ea0b8;
        }
        goto L_2ea078;
    }
    r1 = r4 + 0x48u;  // (from the original)
    r0 = r4 + 0x1au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0xd4u;  // (from the original)
    r0 = r4 + 0xa4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613de4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r6;
    *gptr<u16>(r5 + 0x34u) = u16(u32(*gptr<u16>(r5 + 0x36u)));  // (from the original)
    r0 = r4 + 0x13au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
L_2ea04c:;
    r1 = r4 + 0x76u;  // (from the original)
    r0 = r4 + 0x48u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001b4a8c(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r4 + 0x104u;  // (from the original)
    r0 = r4 + 0xd4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00613de4(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r7;
    *gptr<u16>(r5 + 0x36u) = u16(u32(*gptr<u16>(r5 + 0x38u)));  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
L_2ea078:;
    r0 = r4 + 0x76u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003052f0(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x104u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003084d0(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    *gptr<u16>(r5 + 0x38u) = u16(0u);  // (from the original)
    r1 = 0x95bfdcu;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc934(r0, r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    r0 = r13;
L_2ea0b8:;
    r13 = r13 + 0x18;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002e9fe4
GUEST_EXPORT(0x002e9fe4, d_002e9fe4::f_002e9fe4);

// f_002ea0c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea0c0 {

inline constexpr guest::Function<0x002eab00, u32(u32, u32, u32, u32)> call_002eab00;  // (from the original)
inline constexpr guest::Function<0x002eb5d0, u32(u32, u32, u32, u32)> call_002eb5d0;  // (from the original)
inline constexpr guest::Function<0x002eb830, u32(u32, u32, u32, u32)> call_002eb830;  // (from the original)

u32 f_002ea0c0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r1;
    r3 = 0u;
    r4 = r0;
    r2 = r3;
    r1 = 1u;
    r0 = call_002eab00(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r4;
    r0 = call_002eb5d0(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = u32(*gptr<u8>(r4));
    if ((r0 & 1u) == 0) {
        goto L_2ea108;
    }
    if ((r0 & 0x80u) != 0) {  // (from the original)
        goto L_2ea108;
    }
    r0 = r4;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    return call_002eb830(r0, r1, r2, r3);
L_2ea108:;
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ea0c0
GUEST_EXPORT(0x002ea0c0, d_002ea0c0::f_002ea0c0);

// f_002ea10c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea10c {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> call_003052f0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ea10c(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 zf = 0;
    *gptr<u32>(r13 + 0xfffffff8u) = u32(r12);  // (from the original)
    r13 = r13 - 0x28;  // (from the original)
    r4 = r0;
    r6 = r3;
    r10 = r1;
    r11 = r2;
    r0 = r1;
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ea290;
    }
    if (r6 >= 0x400u) {  // (from the original)
        r0 = 0u;
        goto L_2ea290;
    }
    r5 = r4 + 0x100u;  // (from the original)
    r7 = 1u;
    r2 = u32(*gptr<u16>(r5 + 0x34u));  // (from the original)
    zf = r2 == r6;
    if (!zf) {
        r0 = u32(*gptr<u16>(r5 + 0x36u));  // (from the original)
        zf = r0 == r6;
    }
    if (!zf) {
        r1 = u32(*gptr<u16>(r5 + 0x38u));  // (from the original)
        zf = r1 == r6;
    }
    if (zf) {
        r7 = 0u;
        goto L_2ea28c;
    }
    r9 = r4 + 0x142u;  // (from the original)
    r8 = r4 + 0x13eu;  // (from the original)
    if (!(!u32(r6 >= r2) || u32(r6 == r2))) {
        r1 = r4 + 0x48u;  // (from the original)
        r0 = r4 + 0x76u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x1au;  // (from the original)
        r0 = r4 + 0x48u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x1au;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd4u;  // (from the original)
        r0 = r4 + 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xa4u;  // (from the original)
        r0 = r4 + 0xd4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0xa4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x36u));  // (from the original)
        r1 = u32(*gptr<u16>(r5 + 0x34u));  // (from the original)
        *gptr<u16>(r5 + 0x34u) = u16(r6);  // (from the original)
        *gptr<u16>(r5 + 0x38u) = u16(r0);  // (from the original)
        *gptr<u16>(r5 + 0x36u) = u16(r1);  // (from the original)
        r1 = r8;
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x13au;  // (from the original)
        r4 = r1;
        r0 = r8;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        goto L_2ea28c;
    }
    if (r0 < r6) {
        r1 = r4 + 0x48u;  // (from the original)
        r0 = r4 + 0x76u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0x48u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd4u;  // (from the original)
        r0 = r4 + 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0xd4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x36u));  // (from the original)
        *gptr<u16>(r5 + 0x36u) = u16(r6);  // (from the original)
        r1 = r8;
        *gptr<u16>(r5 + 0x38u) = u16(r0);  // (from the original)
        r0 = r9;
        guest::cpu()->r[13] = r13;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r8;
    } else {
        if (r1 >= r6) {
            goto L_2ea28c;
        }
        r0 = r4 + 0x76u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_003052f0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4 + 0x104u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r11;
        r0 = r9;
        *gptr<u16>(r5 + 0x38u) = u16(r6);  // (from the original)
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fc8e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
L_2ea28c:;
    r0 = r7;
L_2ea290:;
    r13 = r13 + 0x28;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ea10c
GUEST_EXPORT(0x002ea10c, d_002ea10c::f_002ea10c);

// f_002ea294: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea294 {


u32 f_002ea294(u32 r0, u32 r1) {
    if (s32(r1) < s32(3u)) {
        r1 = r1 + (r1 << 1);
        r0 = r0 + (r1 << 4);
    }
    r0 = r0 + 0xa4u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ea294
GUEST_EXPORT(0x002ea294, d_002ea294::f_002ea294);

// f_002ea2bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea2bc {

inline constexpr guest::Function<0x001b4a8c, u32(u32, u32, u32, u32)> call_001b4a8c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x003084d0, u32(u32, u32, u32, u32)> call_003084d0;  // (from the original)
inline constexpr guest::Function<0x00613de4, u32(u32, u32, u32, u32)> call_00613de4;  // (from the original)

u32 f_002ea2bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    guest::cpu()->r[13] -= 0x20u;  // (from the original)
    r4 = r0;
    r6 = r3;
    r10 = r2;
    r9 = r1;
    r0 = r1;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2ea42c;
    }
    if (r6 >= 0x400u) {  // (from the original)
        goto L_2ea42c;
    }
    r5 = r4 + 0x100u;  // (from the original)
    r8 = r4 + 0x142u;  // (from the original)
    r7 = r4 + 0x13eu;  // (from the original)
    if (u32(*gptr<u16>(r5 + 0x34u)) < r6) {  // (from the original)
        r1 = r4 + 0x48u;  // (from the original)
        r0 = r4 + 0x76u;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x1au;  // (from the original)
        r0 = r4 + 0x48u;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r9;
        r0 = r4 + 0x1au;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd4u;  // (from the original)
        r0 = r4 + 0x104u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xa4u;  // (from the original)
        r0 = r4 + 0xd4u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0xa4u;  // (from the original)
        r0 = call_003084d0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x36u));  // (from the original)
        r1 = u32(*gptr<u16>(r5 + 0x34u));  // (from the original)
        *gptr<u16>(r5 + 0x34u) = u16(r6);  // (from the original)
        *gptr<u16>(r5 + 0x38u) = u16(r0);  // (from the original)
        *gptr<u16>(r5 + 0x36u) = u16(r1);  // (from the original)
        r1 = r7;
        r0 = r8;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0x13au;  // (from the original)
        r4 = r1;
        r0 = r7;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r4;
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r0, r1, r2, r3);
    }
    if (u32(*gptr<u16>(r5 + 0x36u)) < r6) {  // (from the original)
        r1 = r4 + 0x48u;  // (from the original)
        r0 = r4 + 0x76u;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r9;
        r0 = r4 + 0x48u;  // (from the original)
        r0 = call_001b4a8c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r4 + 0xd4u;  // (from the original)
        r0 = r4 + 0x104u;  // (from the original)
        r0 = call_00613de4(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = r4 + 0xd4u;  // (from the original)
        r0 = call_003084d0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = u32(*gptr<u16>(r5 + 0x36u));  // (from the original)
        *gptr<u16>(r5 + 0x36u) = u16(r6);  // (from the original)
        r1 = r7;
        *gptr<u16>(r5 + 0x38u) = u16(r0);  // (from the original)
        r0 = r8;
        r0 = call_002fc8e8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = r10;
        r0 = r7;
        guest::cpu()->r[13] += 0x20u;  // (from the original)
        return call_002fc8e8(r0, r1, r2, r3);
    }
    r0 = u32(*gptr<u16>(r5 + 0x38u));  // (from the original)
    if (r0 >= r6) {
        goto L_2ea42c;
    }
    r1 = r9;
    r0 = r4 + 0x76u;  // (from the original)
    r0 = call_001b4a8c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r4 + 0x104u;  // (from the original)
    r0 = call_003084d0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r10;
    r0 = r8;
    *gptr<u16>(r5 + 0x38u) = u16(r6);  // (from the original)
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    return call_002fc8e8(r0, r1, r2, r3);
L_2ea42c:;
    guest::cpu()->r[13] += 0x20u;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ea2bc
GUEST_EXPORT(0x002ea2bc, d_002ea2bc::f_002ea2bc);

// f_002ea430: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ea430 {


u32 f_002ea430(u32 r0, u32 r1) {
    if (s32(r1) >= s32(3u)) {
        r0 = r0 + 0x1au;  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r1 = (r1 << 3) - r1 + (r1 << 4);
    r0 = r0 + (r1 << 1) + 0x1au;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
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

inline constexpr guest::Function<0x003014b4, u32(u32, u32, u32, u32)> call_003014b4;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)
inline constexpr guest::Function<0x0058dc80, u32(u32, u32, u32, u32)> call_0058dc80;  // (from the original)

u32 f_002eaec8(u32 r0, gptr<Object_002eaec8_1> arg1) {
    u32 ea = 0;
    u32 r1 = arg1.addr();
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = arg1->word_0;
    r2 = arg1->word_4;
    r13 = r13 - 0x20u;  // (from the original)
    r1 = arg1->word_8;
    r3 = r13 + 4u;
    *gptr<u32>(r13 + 0xcu) = u32(r1);  // (from the original)
    *gptr<u32>(r3) = u32(r0);
    *gptr<u32>(r3 + 4) = u32(r2);
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00308efc(r0, r1, r2, r3);
    r5 = 1u;
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058dc80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        r1 = 7u;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_003014b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    if (u32(*gptr<u8>(r13 + 0xau)) == 6u) {  // (from the original)
        goto L_2eaf40;
    }
    do {
L_2eaf28:;
        r1 = 1u;
        r0 = r13 + 4u;
        guest::cpu()->r[13] = r13;
        r0 = call_003014b4(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (u32(*gptr<u8>(r13 + 0xau)) != 6u);  // (from the original)
L_2eaf40:;
    ea = r13;
    *gptr<u32>(ea) = u32(r5);
    ea = r13 + 4u;
    r1 = *gptr<u32>(ea);
    r2 = *gptr<u32>(ea + 4);
    r3 = *gptr<u32>(ea + 8);
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058dc80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        ea = r13 + 4u;
        r0 = *gptr<u32>(ea);
        r1 = *gptr<u32>(ea + 4);
        r2 = *gptr<u32>(ea + 8);
        *gptr<u32>(r4) = u32(r0);
        *gptr<u32>(r4 + 4) = u32(r1);
        *gptr<u32>(r4 + 8) = u32(r2);
        r13 = r13 + 0x20u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = 7u;
    r0 = r13 + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_003014b4(r0, r1, r2, r3);
    guest::preempt();
    goto L_2eaf40;
}

}  // namespace d_002eaec8
GUEST_EXPORT(0x002eaec8, d_002eaec8::f_002eaec8);

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

u32 f_002eb0b4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r13 = guest::cpu()->r[13];
    u32 zf = 0;
    r6 = r0;
    r13 = r13 - 0x60u;  // (from the original)
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fdf10(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb37c;
    }
    r1 = r13 + 0x1cu;  // (from the original)
    *gptr<u8>(r6) = u8(u32(*gptr<u8>(r6)) | 1u);
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058ec08(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x34u;  // (from the original)
    r0 = 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0058e2e4(r0, r1, r2, r3);
    r8 = 0u;
    r3 = r8;
    r2 = 3u;
    r1 = r8;
    r0 = r13 + 0x1cu;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00312ab8(r0, r1, r2, r3);
    r3 = 0u;
    r2 = ~3u;
    r1 = r3;
    r0 = r13 + 0x34u;  // (from the original)
    *gptr<u32>(r13) = u32(r8);
    guest::cpu()->r[13] = r13;
    r0 = call_00312ab8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r6 + 1u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x1cu;  // (from the original)
    r0 = r6 + 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r13 + 0x34u;  // (from the original)
    r0 = r6 + 0x11u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005cddb4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = u32(*gptr<u8>(r6)) >> 4;
    if (res == 0) {
        r0 = 2u;
        guest::cpu()->r[13] = r13;
        r0 = call_002ff6f8(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        *gptr<u8>(r6) = u8(u32(*gptr<u8>(r6)) & 0x8fu | 0x70u & r0 + 1u << 4);  // (from the original)
    }
    r2 = 1u;
    r1 = 0xau;  // (from the original)
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116ea4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = 0u;
    r0 = r6 + 0x104u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2eb37c;
    }
L_2eb1a4:;
    r7 = r13 + 0x28u;  // (from the original)
    r5 = 0u;
    r1 = r7;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e92(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 != 0) {
        goto L_2eb200;
    }
    do {
L_2eb1c4:;
        r3 = 0u;
        r2 = r3;
        r1 = r4;
        r0 = r6;
        *gptr<u32>(r13) = u32(r5);
        guest::cpu()->r[13] = r13;
        r0 = call_002eb3b0(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (!(r0 != 0)) {
            r1 = r4;
            r0 = r13 + 0x10u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_00116e4e(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
L_2eb200:;
    if (*gptr<u32>(r13 + 0x18u) == 0) {  // (from the original)
        goto L_2eb220;
    }
L_2eb20c:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe418(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r4 = r0;
    goto L_2eb30c;
L_2eb220:;
    r1 = r7;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116f1a(r0, r1, r2, r3);
    r4 = 0u;
    do {
L_2eb230:;
        r3 = 0u;
        r2 = 1u;
        r1 = r4;
        r0 = r6;
        *gptr<u32>(r13) = u32(r8);
        guest::cpu()->r[13] = r13;
        r0 = call_002eb3b0(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        zf = r0 == 0;
        r1 = r4;
        r0 = r13 + 0x10u;  // (from the original)
        if (!zf) {
            guest::cpu()->r[13] = r13;
            r0 = call_00116e30(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            guest::cpu()->r[13] = r13;
            r0 = call_00116e4e(r0, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(0xau));  // (from the original)
    r0 = *gptr<u32>(r13 + 0x18u);  // (from the original)
    if (r0 == 0) {
        r4 = 0u;
    } else {
        guest::preempt();
        goto L_2eb20c;
    }
L_2eb28c:;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003009a8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0;
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00309ccc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    res = r0;
    if (res >> 0x1f == (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2eb370;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_00312af8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
    r0 = r5;
    guest::cpu()->r[13] = r13;
    r0 = call_0011a1c8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        goto L_2eb370;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r5;
    r0 = r0 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00118e24(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb370;
    }
L_2eb30c:;
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r7;
    guest::cpu()->r[13] = r13;
    r0 = call_00116f1a(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r4 + 1u == 0) {
        goto L_2eb37c;
    }
    r1 = r4;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e4e(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r4;
    r0 = r0 + 0x292a4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_003009a8(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    if (r0 == 0) {
        goto L_2eb390;
    }
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_002ea450(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb384;
    }
    goto L_2eb390;
L_2eb370:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(0xau)) {  // (from the original)
        guest::preempt();
        goto L_2eb28c;
    }
L_2eb37c:;
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2eb384:;
    r1 = r4;
    r0 = r13 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00116e30(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2eb390:;
    r4 = 1u;
    r0 = r6 + 0x104u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301e20(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        guest::preempt();
        goto L_2eb1a4;
    }
    r13 = r13 + 0x60u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002eb0b4
GUEST_EXPORT(0x002eb0b4, d_002eb0b4::f_002eb0b4);

// f_002eb5d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eb5d0 {

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

u32 f_002eb5d0(u32 r0, u32 r1, u32 r2, u32 r3) {
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
    u32 r14 = guest::cpu()->r[14];
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r13 = r13 - 0x2c0u;  // (from the original)
    r5 = r0;
    r7 = r1;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_0056c3ec(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = *gptr<u32>(r13 + 8u);
    r4 = *gptr<u32>(r13);
    r8 = *gptr<u32>(r13 + 4);
    r0 = r5 + 9u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb338(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r9 = 1u;
    if (r0 == 0) {
        goto L_2eb6b4;
    }
    r1 = r5 + 9u;
    r0 = r13 + 8u;
    guest::cpu()->r[13] = r13;
    r0 = call_002fb430(r0, r1, r2, r3);
    r10 = r13 + 8u;
    *gptr<u32>(r13 + 4u) = u32(r6);
    *gptr<u32>(r13) = u32(r8);
    r0 = *gptr<u32>(r10);
    r1 = *gptr<u32>(r10 + 4);
    r2 = *gptr<u32>(r10 + 8);
    r3 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00314278(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        r4 = 0u;
    } else {
        goto L_2eb6b4;
    }
L_2eb634:;
    r6 = r5 + ((r4 << 3) - r4 + (r4 << 4) << 1);
    r0 = r6 + 0x1au;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fbd54(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb6a8;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fb328(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r6 + 0x1au;  // (from the original)
    r6 = r0 + 0xa0u;  // (from the original)
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_0071a0b0(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r0 = r6;
    guest::cpu()->r[13] = r13;
    r0 = call_00309fbc(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    r0 = call_002fb96c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r5));
    if ((r1 & 2u) != 0) {
        goto L_2eb6a8;
    }
    if (r0 == 0) {
        goto L_2eb6a8;
    }
    r0 = r0 + 0x8a3cu;  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x44u)) | lsl_r(r9, r4 & 0xff);  // (from the original)
    *gptr<u8>(r0 + 0x44u) = u8(r1);  // (from the original)
L_2eb6a8:;
    r4 = r4 + 1u;
    if (s32(r4) < s32(3u)) {
        guest::preempt();
        goto L_2eb634;
    }
L_2eb6b4:;
    res = r7;
    if (u32(res == 0) || res >> 0x1f != (r7 & (r7 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2eb814;
    }
    guest::cpu()->r[13] = r13;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r10 = 0x7ffeu;  // (from the original)
    r8 = 0u;
    r11 = r8;
    *gptr<u32>(r13 + 0x290u) = u32(r0 + 0x20u);  // (from the original)
L_2eb6d4:;
    r0 = *gptr<u32>(r13 + 0x290u);  // (from the original)
    r1 = r8 & 0xffu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fb7e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb808;
    }
    r1 = r0 + 0x55a6u;  // (from the original)
    r4 = 0u;
    r6 = r0 + 0x8a80u;  // (from the original)
    *gptr<u32>(r13 + 0x298u) = u32(r0 + 0x8a3cu);  // (from the original)
    *gptr<u32>(r13 + 0x294u) = u32(r1);  // (from the original)
L_2eb710:;
    r0 = u32(*gptr<u8>(r6));
    r5 = lsl_r(r9, r4 & 0xff);  // (from the original)
    if ((r0 & r5) == 0) {
        goto L_2eb7fc;
    }
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff368(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r2 = 0x10u;  // (from the original)
    r1 = 0x29u;  // (from the original)
    r0 = r13 + 0xcu;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_006bbd54(r0, r1, r2, r3);
    r7 = r10;
    if (r4 == 0) {
        r7 = 0x2cdcu;  // (from the original)
        goto L_2eb75c;
    }
    if (r4 == 1u) {
        r7 = 0x2cddu;  // (from the original)
        goto L_2eb75c;
    }
    if (r4 == 2u) {
        r7 = 0x2cdeu;  // (from the original)
    }
L_2eb75c:;
    ea = r13;
    *gptr<u32>(ea) = u32(r13 + 0xcu);  // (from the original)
    ea = r13 + 4u;
    *gptr<u32>(ea) = u32(0x11u);  // (from the original)
    *gptr<u32>(ea + 4) = u32(r11);
    r2 = r4 + 1u;
    r1 = 0x88e708u;  // (from the original)
    r3 = *gptr<u32>(r13 + 0x294u);  // (from the original)
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00306354(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb7e8;
    }
    r1 = r7;
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_002fcbb0(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    r1 = r0;
    r2 = 0u;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00768138(r0, r1, r2, r3);
    r2 = 1u;
    r3 = 0u;
    r1 = r2;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002ff4d4(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_2eb7e8;
    }
    r0 = *gptr<u32>(r13 + 0x298u);  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0x44u)) & ~r5;  // (from the original)
    *gptr<u8>(r0 + 0x44u) = u8(r1);  // (from the original)
L_2eb7e8:;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f77e8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
L_2eb7fc:;
    r4 = r4 + 1u;
    if (r4 < 3u) {
        guest::preempt();
        goto L_2eb710;
    }
L_2eb808:;
    r8 = r8 + 1u;
    if (r8 < 4u) {
        guest::preempt();
        goto L_2eb6d4;
    }
L_2eb814:;
    r13 = r13 + 0x29cu;  // (from the original)
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
}

}  // namespace d_002eb5d0
GUEST_EXPORT(0x002eb5d0, d_002eb5d0::f_002eb5d0);

// f_002eba64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eba64 {


u32 f_002eba64(u32 r0, u32 r1, u32 r2) {
    u32 res = 0;
    u32 nf = 0;
    u32 vf = 0;
    res = r1 - 2u;
    nf = res >> 0x1f;  // (from the original)
    vf = ((r1 ^ 2u) & (r1 ^ res)) >> 0x1f;  // (from the original)
    if (nf != vf) {
        res = r2 - 2u;
        nf = res >> 0x1f;  // (from the original)
        vf = ((r2 ^ 2u) & (r2 ^ res)) >> 0x1f;  // (from the original)
    }
    if (nf != vf) {
        r0 = r0 + (r2 << 0xb) + (r1 << 0xa);  // (from the original)
    }
    r0 = r0 + 0x22u;  // (from the original)
    return r0;
}

}  // namespace d_002eba64
GUEST_EXPORT(0x002eba64, d_002eba64::f_002eba64);

// f_002eba7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eba7c {


u32 f_002eba7c(u32 r0, u32 r1) {
    if (r1 < 2u) {
        r0 = r0 + (r1 << 2);
    }
    r0 = r0 + 0x1022u;  // (from the original)
    return r0;
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

inline constexpr guest::Function<0x0024ea1c, u32(u32, u32, u32, u32)> call_0024ea1c;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x0052f074, u32(u32, u32, u32, u32)> call_0052f074;  // (from the original)
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32, u32)> call_0052f144;  // (from the original)
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32, u32)> call_0052f200;  // (from the original)
inline constexpr guest::Function<0x00612cec, u32(u32, u32, u32, u32)> call_00612cec;  // (from the original)
inline constexpr guest::Function<0x006efd40, u32(u32, u32, u32, u32)> call_006efd40;  // (from the original)
inline constexpr guest::Function<0x007481ec, u32(u32, u32, u32, u32)> call_007481ec;  // (from the original)
inline constexpr guest::Function<0x0074824c, u32(u32, u32, u32, u32)> call_0074824c;  // (from the original)
inline constexpr guest::Function<0x00748284, u32(u32, u32, u32, u32)> call_00748284;  // (from the original)

u32 f_002eba90(gptr<Object_002eba90_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x38u;  // (from the original)
    r7 = r0;
    r0 = 3u;
    arg0->byte_0 = u8(r0);
    arg0->byte_1 = u8(r0);
    if ((*gptr<u32>(0x95c000u) & 1u) != 0) {  // (from the original)
        goto L_2ebb0c;
    }
    r0 = 0x95c000u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002fe7dc(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2ebb0c;
    }
    r2 = 3u;
    r1 = r2;
    r0 = r13 + 0x10u;  // (from the original)
    *gptr<u32>(r0) = u32(r1);
    *gptr<u32>(r0 + 4) = u32(r2);
    r4 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f074(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r0;
    r0 = 0xad5384u;  // (from the original)
    r2 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0052f200(r0, r1, r2, guest::cpu()->r[3]);
    r2 = 0x100000u;  // (from the original)
L_2ebb0c:;
    r4 = 0xad5384u;  // (from the original)
    r0 = r13;
    r1 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0074824c(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r4;
    r0 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00748284(r0, r1, r2, guest::cpu()->r[3]);
    r2 = guest::cpu()->r[2];
    r1 = r13 + 0x10u;  // (from the original)
    r0 = r13;
    guest::cpu()->r[13] = r13;
    r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0 == 0) {
        goto L_2ebb8c;
    }
    do {
L_2ebb40:;
        r4 = r7 + (*gptr<u32>(r13 + 0x1cu) << 3);  // (from the original)
        r0 = r4 + (*gptr<u32>(r13 + 0x18u) << 1) + 2u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00612cec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0052f144(r0, r1, r2, guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r1 = r13 + 0x10u;  // (from the original)
        r0 = r13;
        guest::cpu()->r[13] = r13;
        r0 = call_007481ec(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        guest::preempt();
    } while (r0 != 0);
L_2ebb8c:;
    r6 = 0u;
L_2ebb98:;
    r4 = 0u;
    r5 = r7 + (r6 << 0xb);  // (from the original)
    do {
L_2ebba0:;
        r0 = r5 + (r4 << 0xa) + 0x22u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_006efd40(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (s32(r4) < s32(2u));
    r6 = r6 + 1u;
    if (s32(r6) < s32(2u)) {
        guest::preempt();
        goto L_2ebb98;
    }
    r4 = 0u;
    do {
L_2ebbc8:;
        r0 = r7 + (r4 << 2) + 0x1022u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0024ea1c(r0, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r4 = r4 + 1u;
        guest::preempt();
    } while (r4 < 2u);
    r0 = r13;
    r13 = r13 + 0x38u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002eba90
GUEST_EXPORT(0x002eba90, d_002eba90::f_002eba90);

// f_002ebd48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ebd48 {

inline constexpr guest::Function<0x0024dbc0, u32(u32, u32, u32, u32)> call_0024dbc0;  // (from the original)

u32 f_002ebd48(u32 r0, u32 r1) {
    u32 r2 = 0;
    if (r1 >= 4u) {
        return r0;
    }
    r2 = u32(s32(s16(r1)) * s32(s16(0x245u)));  // (from the original)
    r0 = r0 + (r2 << 3);
    return call_0024dbc0(r0, r1, r2, guest::cpu()->r[3]);
}

}  // namespace d_002ebd48
GUEST_EXPORT(0x002ebd48, d_002ebd48::f_002ebd48);

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

inline constexpr guest::Function<0x002ed224, u32(u32, u32, u32, u32)> call_002ed224;  // (from the original)
inline constexpr guest::Function<0x008196f4, u32(u32, u32, u32, u32)> call_008196f4;  // (from the original)

u32 f_002ed1ec(gptr<Object_002ed1ec_0> arg0, u32 r1, u32 r2) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = u32(arg0->byte_ce5);
    if (r0 != 0) {
        guest::cpu()->r[13] += 8u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = r4;
    arg0->word_3bc = u32(r1);
    r0 = call_002ed224(r0, r1, r2, guest::cpu()->r[3]);
    r1 = *gptr<u32>(0x84518cu);  // (from the original)
    r2 = *gptr<u32>(0x84518cu + 4);  // (from the original)
    r0 = r4;
    r0 = call_008196f4(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ed1ec
GUEST_EXPORT(0x002ed1ec, d_002ed1ec::f_002ed1ec);

// f_002edcb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002edcb0 {

inline constexpr guest::Function<0x001323bc, u32(u32, u32, u32, u32)> call_001323bc;  // (from the original)
inline constexpr guest::Function<0x00569e6c, u32(u32, u32, u32, u32)> call_00569e6c;  // (from the original)

u32 f_002edcb0(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_001323bc(r0, r1, r2, guest::cpu()->r[3]);
    r1 = r4 + 0x270u;  // (from the original)
    guest::cpu()->r[13] += 8u;
    r2 = 1u;
    return call_00569e6c(r0, r1, r2, guest::cpu()->r[3]);
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


u32 f_002edccc(gptr<Object_002edccc_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    r1 = 0x845174u;  // (from the original)
    r3 = arg0->word_c;
    r2 = *gptr<u32>(r1 + 8u);
    r1 = *gptr<u32>(r1 + 0xcu);  // (from the original)
    if (r3 != r2) {
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    if (r3 == 0) {
        if (((arg0->word_10 | r1) & 1u) == 0) {
            r0 = 1u;
            guest::cpu()->r[1] = r1;
            return r0;
        }
    }
    if (*gptr<u32>(r0 + 0x10u) != r1) {  // (from the original)
        r0 = 0u;
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r0 = 1u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002edccc
GUEST_EXPORT(0x002edccc, d_002edccc::f_002edccc);

// f_002ee564: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee564 {

inline constexpr guest::Function<0x00567e24, u32(u32, u32, u32, u32)> call_00567e24;  // (from the original)

u32 f_002ee564(u32 r0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r1 = 0x2ee588u;  // (from the original)
    r0 = r0 + 0x24u;  // (from the original)
    r0 = call_00567e24(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0 != 0) {
        r1 = 1u;
        *gptr<u8>(r4 + 0xce4u) = u8(r1);  // (from the original)
    }
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ee564
GUEST_EXPORT(0x002ee564, d_002ee564::f_002ee564);

// f_002ee5a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee5a8 {

struct __attribute__((packed)) Object_002ee5a8_0 {
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
GUEST_OFFSET(Object_002ee5a8_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, byte_8, 0x8);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, byte_18, 0x18);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Object_002ee5a8_0, word_20, 0x20);  // (from the original)

inline constexpr guest::Function<0x001207d8, u32(u32, u32, u32, u32)> call_001207d8;  // (from the original)
inline constexpr guest::Function<0x00125aec, u32(u32, u32, u32, u32)> call_00125aec;  // (from the original)
inline constexpr guest::Function<0x00125e3c, u32(u32, u32, u32, u32)> call_00125e3c;  // (from the original)
inline constexpr guest::Function<0x001391d8, u32(u32, u32, u32, u32)> call_001391d8;  // (from the original)
inline constexpr guest::Function<0x002f7604, u32(u32, u32, u32, u32)> call_002f7604;  // (from the original)
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)
inline constexpr guest::Function<0x0033f0d8, u32(u32, u32, u32, u32)> call_0033f0d8;  // (from the original)
inline constexpr guest::Function<0x005e3128, u32(u32, u32, u32, u32)> call_005e3128;  // (from the original)

u32 f_002ee5a8(gptr<Object_002ee5a8_0> arg0) {
    u32 ea = 0;
    u32 res = 0;
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r2 = 0;
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10;  // (from the original)
    r6 = 0u;
    arg0->word_4 = u32(r6);
    arg0->byte_8 = u8(r6);
    r2 = *gptr<u32>(0x84519cu + 4);  // (from the original)
    r3 = r0 + 0xcu;  // (from the original)
    arg0->word_c = u32(*gptr<u32>(0x84519cu));  // (from the original)
    arg0->word_10 = u32(r2);
    arg0->word_14 = u32(r6);
    r1 = 0x8f3cc0u;  // (from the original)
    arg0->byte_18 = u8(r6);
    arg0->word_1c = u32(r6);
    arg0->word_0 = u32(r1);
    arg0->word_20 = u32(r6);
    r0 = r0 + 0x24u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001207d8(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    ea = r0 + 0x248u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_00125e3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x270u;  // (from the original)
    ea = r0 + 0x3bcu;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x3c0u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
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
    r1 = 0x125aecu;  // (from the original)
    r3 = 2u;
    r2 = 0x28u;  // (from the original)
    r0 = r0 + 0x28u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 - 0x43cu;  // (from the original)
    ea = r0 + 0x4a0u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    ea = r0 + 0x4b8u;  // (from the original)
    *gptr<u32>(ea) = u32(r6);
    r0 = ea + 4u;
    guest::cpu()->r[13] = r13;
    r0 = call_0033f0d8(r0, r1, r2, r3);
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 5u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe8u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = r0 + 0x460u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_002f7604(r0, r1, r2, r3);
    r1 = 0x2b6de0u;  // (from the original)
    r3 = 2u;
    r2 = 0xe0u;  // (from the original)
    r0 = r0 + 0xe4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_00301d0c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    *gptr<u8>(r0 + 0x1fcu) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x1fdu) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x1feu) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x1ffu) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x200u) = u8(r6);  // (from the original)
    *gptr<u8>(r0 + 0x201u) = u8(r6);  // (from the original)
    *gptr<u32>(r0 + 0x204u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x208u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x20cu) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x210u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x214u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x218u) = u32(r6);  // (from the original)
    *gptr<u32>(r0 + 0x21cu) = u32(r6);  // (from the original)
    r5 = r0 - 0xae8u;  // (from the original)
    r4 = 0u;
    *gptr<u32>(r0 + 0x220u) = u32(r6);  // (from the original)
    do {
L_2ee6b4:;
        r0 = 0xc4u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_001391d8(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 != 0) {
            r1 = 0x15u;  // (from the original)
            guest::cpu()->r[13] = r13;
            r0 = call_005e3128(r0, r1, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        r1 = r5 + (r4 << 2);
        r4 = r4 + 1u;
        *gptr<u32>(r1 + 0x4a4u) = u32(r0);  // (from the original)
        res = r4 - 5u;
        *gptr<u32>(r1 + 0x48cu) = u32(r6);  // (from the original)
        guest::preempt();
    } while (res >> 0x1f != ((r4 ^ 5u) & (r4 ^ res)) >> 0x1f);  // (from the original)
    r0 = r5;
    r13 = r13 + 0x10;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ee5a8
GUEST_EXPORT(0x002ee5a8, d_002ee5a8::f_002ee5a8);

// f_002ee898: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee898 {

struct __attribute__((packed)) Object_002ee898_0 {
    u8 unknown_0[0xd0];  // (not used here)
    u32 word_d0;
};
GUEST_OFFSET(Object_002ee898_0, word_d0, 0xd0);  // (from the original)

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0056aa98, u32(u32, u32, u32, u32)> call_0056aa98;  // (from the original)

u32 f_002ee898(gptr<Object_002ee898_0> arg0, u32 r1) {
    u64 res = 0;
    u32 r0 = arg0.addr();
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    r4 = r0;
    r0 = r1;
    r1 = arg0->word_d0;
    r13 = r13 - 0x18u;  // (from the original)
    if (r1 == 0) {
        *gptr<u32>(r13 + 4u) = u32(r0);
        r1 = r13;
        *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
        r3 = 4u;
        r0 = r4;
        guest::cpu()->r[13] = r13;
        r0 = call_0056aa98(r0, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        r5 = 0u;
        if (r0 == 0) {
            goto L_2ee8fc;
        }
        res = u64(0xcccccccdu) * *gptr<u32>(r4 + 0xd4u);  // (from the original)
        r1 = u32(res);
        *gptr<u32>(r4 + 0xecu) = u32(u32(res >> 0x20) >> 5);  // (from the original)
    }
    r0 = 1u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
L_2ee8fc:;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_00138744(r0, r1, guest::cpu()->r[2], r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0xecu) = u32(r5);  // (from the original)
    r0 = 0u;
    r13 = r13 + 0x18u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ee898
GUEST_EXPORT(0x002ee898, d_002ee898::f_002ee898);

// f_002ee91c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee91c {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)

u32 f_002ee91c(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xecu) = u32(0u);  // (from the original)
    r0 = 1u;
    guest::cpu()->r[13] += 8u;
    return r0;
}

}  // namespace d_002ee91c
GUEST_EXPORT(0x002ee91c, d_002ee91c::f_002ee91c);

// f_002ee938: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee938 {

inline constexpr guest::Function<0x0056a974, u32(u32, u32, u32, u32)> call_0056a974;  // (from the original)

u32 f_002ee938(u32 r0, u32 r1, u32 r2) {
    u32 r3 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    r13 = r13 - 0x10u;  // (from the original)
    r4 = r0;
    *gptr<u32>(r13) = u32(0x9047f8u);  // (from the original)
    *gptr<u32>(r13 + 4u) = u32(r1);
    r1 = r13;
    r3 = 4u;
    r0 = r4;
    guest::cpu()->r[13] = r13;
    r0 = call_0056a974(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0 == 0) {
        r13 = r13 + 0x10u;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[13] = r13;
        return r0;
    }
    r1 = u32(u64(0xcccccccdu) * *gptr<u32>(r4 + 0xd4u) >> 0x20) >> 5;  // (from the original)
    *gptr<u32>(r4 + 0xecu) = u32(r1);  // (from the original)
    r13 = r13 + 0x10u;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[13] = r13;
    return r0;
}

}  // namespace d_002ee938
GUEST_EXPORT(0x002ee938, d_002ee938::f_002ee938);

// f_002ee990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee990 {

inline constexpr guest::Function<0x0012ca7c, u32(u32, u32, u32, u32)> call_0012ca7c;  // (from the original)

u32 f_002ee990(u32 r0, u32 r1) {
    guest::cpu()->r[13] -= 8u;
    r0 = call_0012ca7c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = 0u;
    *gptr<u32>(r0 + 0xecu) = u32(r1);  // (from the original)
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ee990
GUEST_EXPORT(0x002ee990, d_002ee990::f_002ee990);

// f_002ee9a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9a4 {

inline constexpr guest::Function<0x00138744, u32(u32, u32, u32, u32)> call_00138744;  // (from the original)
inline constexpr guest::Function<0x0013bc00, u32(u32, u32, u32, u32)> call_0013bc00;  // (from the original)

u32 f_002ee9a4(u32 r0) {
    u32 r4 = guest::cpu()->r[4];
    guest::cpu()->r[13] -= 8u;
    r4 = r0;
    r0 = call_00138744(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    *gptr<u32>(r4 + 0xecu) = u32(0u);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    return call_0013bc00(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002ee9a4
GUEST_EXPORT(0x002ee9a4, d_002ee9a4::f_002ee9a4);

// f_002ee9c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9c4 {


u32 f_002ee9c4(u32 r0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(*gptr<u32>(0x94ed40u) + 0x14u);  // (from the original)
    r0 = 0x6e8u + (r0 + (r0 << 1) << 3) + r1;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ee9c4
GUEST_EXPORT(0x002ee9c4, d_002ee9c4::f_002ee9c4);

// f_002ee9ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ee9ec {


u32 f_002ee9ec(u32 r0) {
    u32 r1 = 0;
    r1 = *gptr<u32>(*gptr<u32>(0x94ed40u) + 0x14u);  // (from the original)
    r0 = 0x10u + (r0 + (r0 << 1) << 3) + r1;  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002ee9ec
GUEST_EXPORT(0x002ee9ec, d_002ee9ec::f_002ee9ec);

// f_002eea10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eea10 {

struct __attribute__((packed)) Object_002eea10_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_002eea10_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x00125b3c, u32(u32, u32, u32, u32)> call_00125b3c;  // (from the original)
inline constexpr guest::Function<0x0012ca54, u32(u32, u32, u32, u32)> call_0012ca54;  // (from the original)

u32 f_002eea10(gptr<Object_002eea10_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = arg0.addr();
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    r1 = 0x8f3cd4u;  // (from the original)
    guest::cpu()->r[13] -= 8u;
    arg0->word_0 = u32(r1);
    r0 = r0 + 4u;
    r0 = call_0012ca54(r0, r1, r2, r3);
    r4 = r0 - 4u;
    r1 = 0x84605du;  // (from the original)
    r3 = 0u;
    r2 = *gptr<u32>(0x952c3cu);  // (from the original)
    r0 = r4 + 4u;
    r0 = call_00125b3c(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    *gptr<u32>(r4 + 0x14u) = u32(*gptr<u32>(r4 + 8u));  // (from the original)
    *gptr<u32>(0x94ed40u) = u32(r4);  // (from the original)
    r0 = r4;
    guest::cpu()->r[13] += 8u;
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_002eea10
GUEST_EXPORT(0x002eea10, d_002eea10::f_002eea10);

// f_002eec34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002eec34 {

inline constexpr guest::Function<0x0056878c, u32(u32, u32, u32, u32)> call_0056878c;  // (from the original)
inline constexpr guest::Function<0x00568c10, u32(u32, u32, u32, u32)> call_00568c10;  // (from the original)

u32 f_002eec34(u32 r0, float S0) {
    u32 r1 = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r4 = r0;
    r5 = 0x94f760u;  // (from the original)
    r0 = r0 + 0x2e4u;  // (from the original)
    r1 = *gptr<u32>(r5);
    guest::cpu()->s[0] = S0;
    r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x2eec90u));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(u32(*gptr<u8>(r0 + 0xb7u)) & 0xcfu);  // (from the original)
    r1 = *gptr<u32>(r5 + 4u);
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_0056878c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    S0 = std::bit_cast<float>(*gptr<u32>(0x2eec94u));  // (from the original)
    *gptr<u32>(r0 + 0x28u) = u32(std::bit_cast<u32>(S0));  // (from the original)
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xcfu;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_00568c10(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_002eec34
GUEST_EXPORT(0x002eec34, d_002eec34::f_002eec34);

// f_002ef1b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_002ef1b8 {

inline constexpr guest::Function<0x00108421, u32(u32, u32, u32, u32)> call_00108420;  // (from the original)
inline constexpr guest::Function<0x00118771, u32(u32, u32, u32, u32)> call_00118770;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x004b4fc0, u32(u32, u32, u32, u32)> call_004b4fc0;  // (from the original)
inline constexpr guest::Function<0x00568630, u32(u32, u32, u32, u32)> call_00568630;  // (from the original)
inline constexpr guest::Function<0x005697e0, u32(u32, u32, u32, u32)> call_005697e0;  // (from the original)
inline constexpr guest::Function<0x005c2c80, u32(u32, u32, u32, u32)> call_005c2c80;  // (from the original)

u32 f_002ef1b8(u32 r0, u32 r1, u32 r2, u32 r3, float S0) {
    u32 res = 0;
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    guest::cpu()->r[13] -= 0x10u;  // (from the original)
    r5 = r0;
    guest::cpu()->s[0] = S0;
    r0 = call_005c2c80(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r4 = r5 + 0x2000u;  // (from the original)
    if (r0 == 0) {
        goto L_2ef204;
    }
    r0 = *gptr<u32>(r4 + 0x2e4u);  // (from the original)
    res = r0;
    if (res >> 0x1f != (r0 & (r0 ^ res)) >> 0x1f) {  // (from the original)
        goto L_2ef204;
    }
    r1 = *gptr<u32>(r4 + 0x2e0u);  // (from the original)
    if (r0 == r1) {
        goto L_2ef204;
    }
    guest::cpu()->s[0] = S0;
    r0 = call_002fae84(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r4 + 0x2e4u);  // (from the original)
    r0 = r0 + 0x6e238u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00108420(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r4 + 0x2f0u);  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00118770(r0, r1, r2, r3);
    r3 = guest::cpu()->r[3];
    S0 = guest::cpu()->s[0];
L_2ef204:;
    *gptr<u8>(r4 + 0x2d5u) = u8(0u);  // (from the original)
    *gptr<u8>(r4 + 0x2d6u) = u8(1u);  // (from the original)
    r2 = 1u;
    *gptr<u32>(r4 + 0x2e4u) = u32(*gptr<u32>(r4 + 0x2e0u));  // (from the original)
    r1 = *gptr<u32>(0x94f7ccu + (*gptr<u32>(r4 + 0x2ecu) << 2) + 8u);  // (from the original)
    r0 = r5 + 0x2e4u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_004b4fc0(r0, r1, r2, r3);
    S0 = guest::cpu()->s[0];
    r1 = *gptr<u32>(r4 + 0x2ecu);  // (from the original)
    r2 = r0;
    r3 = 0u;
    r0 = r5 + 0x2e4u;  // (from the original)
    r1 = r5 + (r1 + (r1 << 2) << 3) + 0x790u;  // (from the original)
    guest::cpu()->s[0] = S0;
    r0 = call_00568630(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r0 = *gptr<u32>(r4 + 0x2ecu);  // (from the original)
    S0 = std::bit_cast<float>(*gptr<u32>(0x2ef278u));  // (from the original)
    r0 = r5 + (r0 + (r0 << 2) << 3);
    guest::cpu()->r[13] += 0x10u;  // (from the original)
    r0 = r0 + 0x790u;  // (from the original)
    guest::cpu()->s[0] = S0;
    return call_005697e0(r0, r1, r2, r3);
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
    u32 ea = 0;
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
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
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
        guest::cpu()->r[13] = r13;
        return r0;
    }
    ea = r13 - 0x24;  // (from the original)
    *gptr<u32>(ea) = u32(r4);
    *gptr<u32>(ea + 4) = u32(r5);
    *gptr<u32>(ea + 8) = u32(r6);
    *gptr<u32>(ea + 0xc) = u32(r7);  // (from the original)
    *gptr<u32>(ea + 0x10) = u32(r8);  // (from the original)
    *gptr<u32>(ea + 0x14) = u32(r9);  // (from the original)
    *gptr<u32>(ea + 0x18) = u32(r10);  // (from the original)
    *gptr<u32>(ea + 0x1c) = u32(r11);  // (from the original)
    *gptr<u32>(ea + 0x20) = u32(r14);  // (from the original)
    r4 = r0;
    r7 = r0 + 0x2000u;  // (from the original)
    r13 = r13 - 0x30u;  // (from the original)
    r9 = r1;
    r11 = 0x848958u;  // (from the original)
    *gptr<u32>(r13) = u32(arg0->word_22dc);
    *gptr<u32>(r13 + 4) = u32(0u);
    r8 = r2;
    r3 = arg0->word_22e0 + 1u;
    if (r2 == 0) {
        goto L_2ef390;
    }
    r0 = r4 + 0xd1cu;  // (from the original)
    r2 = r4 + 0x830u;  // (from the original)
    r1 = r9;
    r10 = r0;
    guest::cpu()->r[13] = r13;
    r0 = call_001ae738(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
L_2ef2d4:;
        r0 = r10;
        r1 = u32(*gptr<u8>(r11 + r5));
        guest::cpu()->r[13] = r13;
        r0 = call_0070b1a4(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r6 = r4 + (r5 << 2) + 0x1000u;  // (from the original)
        r1 = r0;
        r2 = *gptr<u32>(r6 + 0x200u);  // (from the original)
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2e50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r6 + 0x200u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e2f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c2c80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r7 + 0x2e0u);  // (from the original)
        r0 = r0 + 0x6e238u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00108420(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r7 + 0x2f0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0011b53c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r5 = 1u;
            goto L_2ef350;
        }
    }
    r5 = 0u;
L_2ef350:;
    r1 = 0x2ef528u;  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | r5;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
L_2ef36c:;
    r0 = r9;
    guest::cpu()->r[13] = r13;
    r0 = call_0011b56a(r0, r1, r2, r3);
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
    r2 = r4 + 0x808u;  // (from the original)
    r1 = r9;
    r0 = r4 + 0x860u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_001ae738(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = 0u;
    do {
L_2ef3a8:;
        r0 = r4 + 0x860u;  // (from the original)
        r1 = u32(*gptr<u8>(r11 + r5));
        guest::cpu()->r[13] = r13;
        r0 = call_0070b1a4(r0, r1, r2, r3);
        r3 = guest::cpu()->r[3];
        r6 = r4 + (r5 << 2) + 0x1000u;  // (from the original)
        r1 = r0;
        r2 = *gptr<u32>(r6 + 0x1d8u);  // (from the original)
        r0 = r2;
        guest::cpu()->r[13] = r13;
        r0 = call_005e2e50(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r0 = *gptr<u32>(r6 + 0x1d8u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_005e2f94(r0, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r5 = r5 + 1u;
        guest::preempt();
    } while (s32(r5) < s32(0xau));  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_005c2c80(r0, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 != 0) {
        guest::cpu()->r[13] = r13;
        r0 = call_002fae84(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r7 + 0x2e0u);  // (from the original)
        r0 = r0 + 0x6e238u;  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_00108420(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r1 = *gptr<u32>(r7 + 0x2f0u);  // (from the original)
        guest::cpu()->r[13] = r13;
        r0 = call_0011b53c(r0, r1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0 == 0) {
            r5 = 1u;
            goto L_2ef424;
        }
    }
    r5 = 0u;
L_2ef424:;
    r1 = 0x2ef53cu;  // (from the original)
    r0 = r4 + 0x2e4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0 = call_0056878c(r0, r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r1 = u32(*gptr<u8>(r0 + 0xb7u)) & 0xfeu | r5;  // (from the original)
    *gptr<u8>(r0 + 0xb7u) = u8(r1);  // (from the original)
    guest::preempt();
    goto L_2ef36c;
L_2ef444:;
    r1 = *gptr<u32>(r4 + (r2 << 2) + 0x808u);  // (from the original)
    r3 = u32(*gptr<u8>(r1 + 0xfcu));  // (from the original)
    r5 = u32(u64(r12) * r3 >> 0x20) >> 1;  // (from the original)
    if ((r3 + (r5 - (r5 << 2)) & 0xffu) == r0) {  // (from the original)
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    *gptr<u8>(r1 + 0xfeu) = u8(r3 | u32(*gptr<u8>(r1 + 0xfeu)));  // (from the original)
    if (r3 != 0) {
        r5 = u32(s32(s16(u32(*gptr<u8>(r1 + 0xfcu)))) * s32(s16(0xabu))) >> 9;  // (from the original)
        *gptr<u8>(r1 + 0xfcu) = u8(r5 + (r5 << 1) + r0);  // (from the original)
    }
    r2 = r2 + 1u;
    if (s32(r2) < s32(6u)) {
        guest::preempt();
        goto L_2ef444;
    }
    r13 = r13 + 0xcu;  // (from the original)
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
L_2ef4b4:;
    r1 = *gptr<u32>(r4 + (r2 << 2) + 0x830u);  // (from the original)
    r3 = u32(*gptr<u8>(r1 + 0xfcu));  // (from the original)
    r5 = u32(u64(r12) * r3 >> 0x20) >> 1;  // (from the original)
    if ((r3 + (r5 - (r5 << 2)) & 0xffu) == r0) {  // (from the original)
        r3 = 0u;
    } else {
        r3 = 1u;
    }
    *gptr<u8>(r1 + 0xfeu) = u8(r3 | u32(*gptr<u8>(r1 + 0xfeu)));  // (from the original)
    if (r3 != 0) {
        r5 = u32(s32(s16(u32(*gptr<u8>(r1 + 0xfcu)))) * s32(s16(0xabu))) >> 9;  // (from the original)
        *gptr<u8>(r1 + 0xfcu) = u8(r5 + (r5 << 1) + r0);  // (from the original)
    }
    r2 = r2 + 1u;
    if (s32(r2) < s32(6u)) {
        guest::preempt();
        goto L_2ef4b4;
    }
    r13 = r13 + 0xcu;  // (from the original)
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
}

}  // namespace d_002ef27c
GUEST_EXPORT(0x002ef27c, d_002ef27c::f_002ef27c);
