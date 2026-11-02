// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00530da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00530da8 {

struct __attribute__((packed)) Object_00530da8_0 {
    u8 unknown_0[0x290];  // (not used here)
    u8 byte_290;
    u8 byte_291;
};
GUEST_OFFSET(Object_00530da8_0, byte_290, 0x290);
GUEST_OFFSET(Object_00530da8_0, byte_291, 0x291);

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;
inline guest::global<u32, 0x00952c5c> global_00952c5c;
inline constexpr guest::Function<0x002d5b40, u32(u32, u32)> call_002d5b40;
inline constexpr guest::Function<0x0031758c, u32(u32, u32, u32, u32)> call_0031758c;
inline constexpr guest::Function<0x008156fc, u32(u32, u32, u32)> call_008156fc;

struct __attribute__((packed)) Frame_00530da8 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Frame_00530da8, word_0, 0x0);
GUEST_OFFSET(Frame_00530da8, word_4, 0x4);
GUEST_OFFSET(Frame_00530da8, word_8, 0x8);
GUEST_OFFSET(Frame_00530da8, word_c, 0xc);
GUEST_SIZE(Frame_00530da8, 0x10);

u32 f_00530da8(gptr<Object_00530da8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_00530da8> frame;  // the original's stack frame
    u32 r7_1 = *global_00952c5c;
    frame->word_8 = vtable_sead__SafeStringBase_char_;
    frame->word_c = 0x530e28;  // (from the original)
    frame->word_0 = 1;
    frame->word_4 = 0;
    call_0031758c(arg0.addr(), 0x1400u, r7_1, frame.at(8).addr());  // (from the original)
    call_008156fc(arg0.addr() + 0x2cu, r7_1, 0x4000u);  // (from the original)
    arg0->byte_290 = u8(r1);
    arg0->byte_291 = u8(r2);
    u32 r0_3 = call_002d5b40(arg0.addr() + 0x2a4u, r3);  // (from the original)
    return r0_3;
}

}  // namespace d_00530da8
GUEST_EXPORT_FRAMED(0x00530da8, d_00530da8::f_00530da8, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053138c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053138c {

inline constexpr guest::Function<0x004ee364, u32(u32, u32)> call_004ee364;

u32 f_0053138c(u32 r0) {
    return call_004ee364(r0 + 8u, 0u);
}

}  // namespace d_0053138c
GUEST_EXPORT(0x0053138c, d_0053138c::f_0053138c);

// f_00531398: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00531398 {

inline constexpr guest::Function<0x004edd20, u32(u32, u32, u32, u32)> call_004edd20;
inline constexpr guest::Function<0x004ee4c8, u32(u32, u32, u32, u32)> call_004ee4c8;

u32 f_00531398(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_004ee4c8(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_004edd20(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00531398
GUEST_EXPORT(0x00531398, d_00531398::f_00531398);

// f_005313b4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005313b4 {

struct __attribute__((packed)) Object_005313b4_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
    u8 unknown_10[0xc];  // (not used here)
    u32 word_1c;
    u8 unknown_20[0x250];  // (not used here)
    u32 word_270;
};
GUEST_OFFSET(Object_005313b4_0, word_c, 0xc);
GUEST_OFFSET(Object_005313b4_0, word_1c, 0x1c);
GUEST_OFFSET(Object_005313b4_0, word_270, 0x270);

inline constexpr guest::Function<0x00132478, u32(u32, u32)> call_00132478;
inline constexpr guest::Function<0x0013f134, u32(u32, u32)> call_0013f134;
inline constexpr guest::Function<0x002d5f68, u32(u32, u32, u32, u32)> call_002d5f68;
inline constexpr guest::Function<0x002f73b8, u32(u32)> call_002f73b8;
inline constexpr guest::Function<0x002f747c, u32(u32, u32, u32, u32)> call_002f747c;
inline constexpr guest::Function<0x004ecec8, u32(u32, u32)> call_004ecec8;
inline constexpr guest::Function<0x004f1270, u32(u32, u32)> call_004f1270;
inline constexpr guest::Function<0x005b19f8, u32(u32, u32)> call_005b19f8;

u32 f_005313b4(gptr<Object_005313b4_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r6 = r0;
    call_002d5f68(r0 + 0x2a4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    if (arg0->word_c != 0) {
        call_004f1270(r6 + 8u, r1);
        r1 = guest::cpu()->r[1];
    }
    if (arg0->word_1c != 0) {
        call_004ecec8(r6 + 0x14u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
    }
    u32 r4 = arg0->word_270;
    u32 r5 = r6 + 0x2cu;  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1);  // (from the original)
            call_002f73b8(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    r4 = *gptr<u32>(r5 + 0x25cu);  // (from the original)
    if (r4 != 0) {
        do {
            call_005b19f8(r4 + 0xcu, r1);  // (from the original)
            call_002f73b8(r4 + 0x14u);  // (from the original)
            r1 = guest::cpu()->r[1];
            r4 = *gptr<u32>(r4 + 8u);
            guest::preempt();
        } while (r4 != 0);
    }
    call_00132478(r5 + 0x240u, r1);  // (from the original)
    call_00132478(r5 + 0x24cu, guest::cpu()->r[1]);  // (from the original)
    call_00132478(r5 + 0x258u, guest::cpu()->r[1]);  // (from the original)
    r4 = 0u;
    do {
        call_0013f134(r5 + 0x24cu, r5 + (r4 * 7u + (r4 << 6) << 2) + 8u);  // (from the original)
        r4 += 1u;
        guest::preempt();
    } while (r4 < 2u);
    call_002f747c(r5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    frame.release();
    return call_002f747c(r6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_005313b4
GUEST_EXPORT(0x005313b4, d_005313b4::f_005313b4);

// f_0053149c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053149c {

struct __attribute__((packed)) Local_0053149c_r0_10 {
    u8 unknown_0[0x290];  // (not used here)
    u8 byte_290;
    u8 byte_291;
};
GUEST_OFFSET(Local_0053149c_r0_10, byte_290, 0x290);
GUEST_OFFSET(Local_0053149c_r0_10, byte_291, 0x291);

inline constexpr guest::Function<0x00125e08, u32(u32)> call_00125e08;
inline constexpr guest::Function<0x002d5f90, u32(u32)> call_002d5f90;
inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;
inline constexpr guest::Function<0x004ecf18, u32(u32)> call_004ecf18;
inline constexpr guest::Function<0x004edd3c, u32(u32)> call_004edd3c;
inline constexpr guest::Function<0x005673c8, u32(u32, u32, u32, u32)> call_005673c8;
inline constexpr guest::Function<0x005b1a1c, u32(u32, u32)> call_005b1a1c;

u32 f_0053149c(u32 r0, u32 r1, u32 r2, u32 r3) {
    call_005673c8(r0, r1, r2, r3);
    u32 r0_1 = r0 + 8u;
    call_004edd3c(r0_1);
    u32 r0_2 = r0_1 + 0xcu;  // (from the original)
    call_004ecf18(r0_2);
    call_002f825c(r0_2 + 0x18u, 0x264u);  // (from the original)
    u32 r0_4 = r0_2 + 0x18u;  // (from the original)
    call_005673c8(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_00301d0c(r0_4 + 8u, 0x5b1c18u, 0x11cu, 2u);  // (from the original)
    u32 r0_7 = r0_6 + 0x238u;  // (from the original)
    call_00125e08(r0_7);
    u32 r0_8 = r0_7 + 0xcu;  // (from the original)
    call_00125e08(r0_8);
    u32 r0_9 = r0_8 + 0xcu;  // (from the original)
    call_00125e08(r0_9);
    gptr<Local_0053149c_r0_10> r0_10 = gptr<Local_0053149c_r0_10>(r0_9 - 0x284u);  // (from the original)
    r0_10->byte_290 = 0;
    r0_10->byte_291 = 0;
    u32 r0_11 = r0_10.addr() + 0x294u;  // (from the original)
    call_005b1a1c(r0_11, 0u);
    u32 r0_12 = r0_11 + 8u;
    call_005b1a1c(r0_12, guest::cpu()->r[1]);
    u32 r0_14 = call_002d5f90(r0_12 + 8u);
    return r0_14 - 0x2a4u;  // (from the original)
}

}  // namespace d_0053149c
GUEST_EXPORT_FRAMED(0x0053149c, d_0053149c::f_0053149c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053152c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053152c {

inline constexpr guest::Function<0x002e9324, u32(u32, u32, u32, u32)> call_002e9324;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;
inline constexpr guest::Function<0x00317dec, u32(u32, u32, u32, u32)> call_00317dec;
inline constexpr guest::Function<0x004ecf70, u32(u32)> call_004ecf70;
inline constexpr guest::Function<0x004edd84, u32(u32)> call_004edd84;

u32 f_0053152c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r0 + 0x2a4u;  // (from the original)
    call_002e9324(r0_1, r1, r2, r3);
    call_002f76ac(r0_1 - 0x270u, 0x5b1c68u, 0x11cu, 2u);  // (from the original)
    call_00317dec(r0_1 - 0x278u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_004ecf70(r0_1 - 0x290u);  // (from the original)
    call_004edd84(r0_1 - 0x29cu);  // (from the original)
    frame.release();
    return call_00317dec(r0_1 - 0x2a4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0053152c
GUEST_EXPORT(0x0053152c, d_0053152c::f_0053152c);

// f_005360e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005360e0 {

struct __attribute__((packed)) Object_005360e0_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_005360e0_0, byte_0, 0x0);

inline guest::global<u32, 0x00878198> global_00878198;

u32 f_005360e0(gptr<Object_005360e0_0> arg0, u32 r1) {
    u32 r0_1 = arg0->byte_0;
    if (r0_1 >= 0xaau) {  // (from the original)
        return *global_00878198;
    }
    u32 r0_3 = r0_1 * 3u;
    return r1 == 0 ? *gptr<u32>((r0_3 << 2) + 0x878198u + 4u) : *gptr<u32>((r0_3 << 2) + 0x878198u);  // (from the original)
}

}  // namespace d_005360e0
GUEST_EXPORT(0x005360e0, d_005360e0::f_005360e0);

// f_00536110: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536110 {


u32 f_00536110(u32 r0) {
    return *gptr<u16>(r0 >= 0x56u ? 0x887086u : (r0 << 1) + 0xa184e4u);  // (from the original)
}

}  // namespace d_00536110
GUEST_EXPORT(0x00536110, d_00536110::f_00536110);

// f_00536130: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536130 {

inline guest::global<u32, 0x00878990> global_00878990;
inline constexpr guest::Function<0x005361a8, u32(u32)> call_005361a8;
inline constexpr guest::Function<0x006bf18c, u32(u32)> call_006bf18c;

u32 f_00536130(u32 r0, float S0) {
    u32 r0_3 = 0;
    u32 r0_1 = call_005361a8(r0);
    float S0_1 = guest::cpu()->s[0];
    if (r0_1 != 0) {
        u32 r4_1 = *gptr<u16>(r0_1);
        if (r4_1 >= 0x1fbu) {  // (from the original)
            r4_1 = 0u;
            return *gptr<u32>((r4_1 << 2) + 0x878990u);  // (from the original)
        }
        if (r4_1 != 0x136u && r4_1 != 0x151u) {  // (from the original)
            return *gptr<u32>((r4_1 << 2) + 0x878990u);  // (from the original)
        }
        call_006bf18c(r0);
        float S0_2 = guest::cpu()->s[0];
        S0_1 = std::bit_cast<float>(vcvt_uz_f(S0_2));
        u32 r0_2 = std::bit_cast<u32>(S0_1) + r4_1;
        r0_3 = r0_2 < 0x1fbu ? *gptr<u32>((r0_2 << 2) + 0x878990u) : *global_00878990;  // (from the original)
    } else {
        r0_3 = *global_00878990;
    }
    guest::cpu()->s[0] = S0_1;
    return r0_3;
}

}  // namespace d_00536130
GUEST_EXPORT_FRAMED(0x00536130, d_00536130::f_00536130, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_005361e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005361e8 {

inline guest::global<u32, 0x00a183a0> global_00a183a0;

u32 f_005361e8(u32 r0, u32 r1) {
    if (r0 >= 0x9bu) {  // (from the original)
        return 0u;
    }
    u32 r1_1 = *global_00a183a0;
    if (r1_1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return r0 * 3u + r1_1;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005361e8
GUEST_EXPORT(0x005361e8, d_005361e8::f_005361e8);

// f_005369d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005369d0 {

struct __attribute__((packed)) Object_005369d0_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_005369d0_0, word_8, 0x8);

struct __attribute__((packed)) Local_005369d0_r0_1 {
    u32 word_0;
    u8 unknown_4[0x30];  // (not used here)
    u32 word_34;
};
GUEST_OFFSET(Local_005369d0_r0_1, word_0, 0x0);
GUEST_OFFSET(Local_005369d0_r0_1, word_34, 0x34);


u32 f_005369d0(gptr<Object_005369d0_0> arg0, u32 r1) {
    gptr<Local_005369d0_r0_1> r0_1 = gptr<Local_005369d0_r0_1>(0u);
    u32 ea_1 = arg0->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1.addr() : ea_1 + r3_1;
    if (r2_1 == 0) {
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        if (r2_2 != 0) {
            r0_1 = gptr<Local_005369d0_r0_1>(r2_2 + ea_2);
        }
    }
    if (r0_1.addr() == 0) {
        return r0_1->word_34 & 0xffu;  // (from the original)
    }
    if ((0x20000001u & ~r0_1->word_0) != 0) {  // (from the original)
        r0_1 = gptr<Local_005369d0_r0_1>(0u);
    }
    return r0_1->word_34 & 0xffu;  // (from the original)
}

}  // namespace d_005369d0
GUEST_EXPORT(0x005369d0, d_005369d0::f_005369d0);

// f_00536a28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536a28 {

struct __attribute__((packed)) Object_00536a28_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00536a28_0, word_8, 0x8);


u32 f_00536a28(gptr<Object_00536a28_0> arg0, u32 r1) {
    u32 r1_1 = 0;
    u32 r0_1 = 0u;
    u32 ea_1 = arg0->word_8 + 0x28u;  // (from the original)
    u32 r3_1 = *gptr<u32>(ea_1);
    u32 r2_1 = r3_1 == 0 ? r0_1 : ea_1 + r3_1;
    if (r2_1 == 0) {
        r1_1 = 0u;
    } else {
        u32 ea_2 = r2_1 + (r1 << 4) + 0x28u;  // (from the original)
        u32 r2_2 = *gptr<u32>(ea_2);
        r1_1 = r2_2 == 0 ? r0_1 : ea_2 + r2_2;
    }
    if (r1_1 == 0) {
        return 0u;
    }
    if ((0x20000011u & ~*gptr<u32>(r1_1)) != 0) {  // (from the original)
        r1_1 = 0u;
    }
    u32 ea_3 = r1_1 + 0x38u;  // (from the original)
    u32 r2_3 = *gptr<u32>(ea_3);
    u32 ea_4 = (r2_3 == 0 ? r0_1 : ea_3 + r2_3) + 0xcu;  // (from the original)
    u32 r2_4 = *gptr<u32>(ea_4);
    if (r2_4 != 0) {
        r0_1 = r2_4 + ea_4;
    }
    return r0_1;
}

}  // namespace d_00536a28
GUEST_EXPORT(0x00536a28, d_00536a28::f_00536a28);

// f_00536cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536cfc {

struct __attribute__((packed)) Object_00536cfc_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_00536cfc_0, word_8, 0x8);

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x004f2c10, u32(u32, u32, u32, u32)> call_004f2c10;
inline constexpr guest::Function<0x00536650, u32(u32, u32)> call_00536650;

void f_00536cfc(gptr<Object_00536cfc_0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = call_002fcb34(r1, r1, r2, guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0x1cu) {  // (from the original)
        u32 r4_1 = 0u;
        u32 ea_1 = arg0->word_8 + 0x20u;  // (from the original)
        r1_1 = *gptr<u32>(ea_1);
        u32 r0_2 = r1_1 == 0 ? r4_1 : ea_1 + r1_1;
        if (r0_2 != 0) {
            u32 ea_2 = r0_2 + 0x28u;  // (from the original)
            r1_1 = *gptr<u32>(ea_2);
            r0_2 = r1_1 == 0 ? r4_1 : ea_2 + r1_1;
        }
        if (r0_2 != 0) {
            u32 ea_3 = r0_2 + 0xc0u;  // (from the original)
            r1_1 = *gptr<u32>(ea_3);
            u32 r0_3 = r1_1 == 0 ? r4_1 : ea_3 + r1_1;
            if (r0_3 == 0) {
                r4_1 = 0u;
            } else {
                u32 ea_4 = r0_3 + 0x28u;  // (from the original)
                r1_1 = *gptr<u32>(ea_4);
                if (r1_1 != 0) {
                    r4_1 = r1_1 + ea_4;
                }
            }
            if (r4_1 != 0) {
                u32 r0_4 = call_00536650(r1, r1_1);
                frame.release();
                call_004f2c10(r4_1, r0_4, 0u, guest::cpu()->r[3]);
                return;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00536cfc
GUEST_EXPORT(0x00536cfc, d_00536cfc::f_00536cfc);

// f_00536da0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00536da0 {

inline constexpr guest::Function<0x002fcb34, u32(u32, u32, u32, u32)> call_002fcb34;
inline constexpr guest::Function<0x005361a8, u32(u32)> call_005361a8;
inline constexpr guest::Function<0x00544f18, u32(u32)> call_00544f18;
inline constexpr guest::Function<0x00544fec, u32(u32, u32)> call_00544fec;
inline constexpr guest::Function<0x0054a644, u32(u32, u32)> call_0054a644;

void f_00536da0(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    u32 r5_1 = *frame.at<u32>(0x38);  // (from the original)
    u32 r0_1 = call_002fcb34(r2, r1, r2, r3);
    if (r0_1 == 0x40u) {  // (from the original)
        u32 r0_2 = call_005361a8(r2);
        u32 r0_3 = *gptr<u8>(r0_2 + 0xfu);  // (from the original)
        if (r0_3 >= 0x32u) {  // (from the original)
            return;
        }
        if (r0_3 == 0x2au) {  // (from the original)
            u32 r0_4 = frame.at(0).addr();
            call_0054a644(r0_4, r1);
            call_00544fec(r0_4, 0x536f40u);  // (from the original)
            call_00544fec(r0_4, r3);
            call_00544f18(r0_4);
            return;
        }
        if (r0_3 == 1u) {
            u32 r0_5 = frame.at(0).addr();
            call_0054a644(r0_5, r1);
            call_00544fec(r0_5, 0x536f58u);  // (from the original)
            call_00544fec(r0_5, r3);
            call_00544f18(r0_5);
            return;
        }
        if (r0_3 != 7u) {
            return;
        }
        goto L_536e3c;
    }
    if (r0_1 == 0x1cu) {  // (from the original)
        goto L_536e3c;
    }
    if (r0_1 == 0x29u && r5_1 == 1u) {  // (from the original)
        u32 r0_6 = frame.at(0).addr();
        call_0054a644(r0_6, r1);
        call_00544fec(r0_6, 0x536f08u);  // (from the original)
        call_00544fec(r0_6, r3);
        call_00544f18(r0_6);
    }
    return;
L_536e3c:;
    u32 r0_7 = frame.at(0).addr();
    call_0054a644(r0_7, r1);
    call_00544fec(r0_7, 0x536f24u);  // (from the original)
    call_00544fec(r0_7, r3);
    call_00544f18(r0_7);
}

}  // namespace d_00536da0
GUEST_EXPORT_FRAMED(0x00536da0, d_00536da0::f_00536da0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00537028: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537028 {

struct __attribute__((packed)) Object_00537028_0 {
    u8 unknown_0[0x110];  // (not used here)
    u32 word_110;
};
GUEST_OFFSET(Object_00537028_0, word_110, 0x110);

inline constexpr guest::Function<0x002f73b8, u32(u32, u32, u32, u32)> call_002f73b8;
inline constexpr guest::Function<0x006aac18, u32(u32, u32, u32, u32)> call_006aac18;

u32 f_00537028(gptr<Object_00537028_0> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (arg0->word_110 == 0) {
        frame.release();
        return call_002f73b8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    }
    call_006aac18(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_110 = 0;
    frame.release();
    return call_002f73b8(arg0.addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537028
GUEST_EXPORT(0x00537028, d_00537028::f_00537028);

// f_0053721c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053721c {

inline constexpr guest::Function<0x00317e2c, u32(u32, u32, u32, u32)> call_00317e2c;

u32 f_0053721c() {
    return call_00317e2c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053721c
GUEST_EXPORT(0x0053721c, d_0053721c::f_0053721c);

// f_00537220: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537220 {

inline constexpr guest::Function<0x002bec28, u32(u32, u32, u32, u32)> call_002bec28;
inline constexpr guest::Function<0x002becec, u32(u32)> call_002becec;
inline constexpr guest::Function<0x005ca6fc, u32(u32, u32, u32, u32)> call_005ca6fc;

u32 f_00537220(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005ca6fc(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        r0_1 = call_002becec(r0_1);
    }
    u32 r0_2 = call_005ca6fc(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 == 0) {
        return r0_2;
    }
    frame.release();
    return call_002bec28(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00537220
GUEST_EXPORT(0x00537220, d_00537220::f_00537220);

// f_00537328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537328 {

struct __attribute__((packed)) Local_00537328_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_00537328_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_00537328_r0_1, byte_a1, 0xa1);

inline guest::global<u32, 0x00952620> global_00952620;

u32 f_00537328(u32 r0_unused, u32 r1) {
    gptr<Local_00537328_r0_1> r0_1 = gptr<Local_00537328_r0_1>(*global_00952620);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r1 = r0_1->byte_a1;
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_00537328_r0_1>(0u);
    }
    u32 r0_2 = !(r0_1->byte_a0 >= 0x10u);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_00537328
GUEST_EXPORT(0x00537328, d_00537328::f_00537328);

// f_00537358: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537358 {

struct __attribute__((packed)) Object_00537358_0 {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(Object_00537358_0, byte_7dd7, 0x7dd7);

inline guest::global<u32, 0x00952620> global_00952620;
inline constexpr guest::Function<0x002e0d04, u32(u32, u32, u32, u32)> call_002e0d04;
inline constexpr guest::Function<0x0071fcb8, u32(u32, u32, u32, u32)> call_0071fcb8;

void f_00537358(gptr<Object_00537358_0> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_0071fcb8(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 == 0) {
        return;
    }
    arg0->byte_7dd7 = 4;
    u32 r0_2 = *global_00952620;
    u32 zf_1 = r0_2 == 0;
    if (!zf_1) {
        r1_1 = *gptr<u8>(r0_2 + 0xa1u);  // (from the original)
        zf_1 = r1_1 == 0;
    }
    if (zf_1) {
        return;
    }
    frame.release();
    call_002e0d04(r0_2, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    return;
}

}  // namespace d_00537358
GUEST_EXPORT(0x00537358, d_00537358::f_00537358);

// f_0053742c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053742c {

inline constexpr guest::Function<0x001e0190, u32(u32, u32, u32, u32)> call_001e0190;
inline constexpr guest::Function<0x0027a48c, u32(u32)> call_0027a48c;
inline constexpr guest::Function<0x002fb918, u32(u32)> call_002fb918;
inline constexpr guest::Function<0x005cfa78, u32(u32, u32, u32, u32)> call_005cfa78;
inline constexpr guest::Function<0x005cfef0, u32(u32)> call_005cfef0;

u32 f_0053742c(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005cfa78(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        return r0_1;
    }
    u32 r0_2 = call_005cfef0(r0_1);
    if (r0_2 == 0) {
        return r0_2;
    }
    u32 r0_3 = call_002fb918(r0_2);
    call_0027a48c(r0_3 + 0xcu);  // (from the original)
    u32 r0_5 = call_002fb918(r0_3 + 0xcu);  // (from the original)
    frame.release();
    return call_001e0190(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053742c
GUEST_EXPORT(0x0053742c, d_0053742c::f_0053742c);

// f_00537464: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537464 {

inline guest::global<u32, 0x00952620> global_00952620;

u32 f_00537464(u32 r0_unused, u32 r1) {
    u32 r0_1 = *global_00952620;
    u32 zf_1 = r0_1 == 0;
    if (!zf_1) {
        r1 = *gptr<u8>(r0_1 + 0xa1u);  // (from the original)
        zf_1 = r1 == 0;
    }
    if (zf_1) {
        r0_1 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_00537464
GUEST_EXPORT(0x00537464, d_00537464::f_00537464);

// f_005374f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005374f0 {

struct __attribute__((packed)) Object_005374f0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 unknown_8[0x67ec];  // (not used here)
    u16 half_67f4;
    u8 unknown_67f6[0x12];  // (not used here)
    u8 byte_6808;
};
GUEST_OFFSET(Object_005374f0_0, word_4, 0x4);
GUEST_OFFSET(Object_005374f0_0, half_67f4, 0x67f4);
GUEST_OFFSET(Object_005374f0_0, byte_6808, 0x6808);

struct __attribute__((packed)) Local_005374f0_r3_4 {
    u16 half_0;
    u8 unknown_2[0x12];  // (not used here)
    u8 byte_14;
};
GUEST_OFFSET(Local_005374f0_r3_4, half_0, 0x0);
GUEST_OFFSET(Local_005374f0_r3_4, byte_14, 0x14);

inline constexpr guest::Function<0x00100d2d, u32(u32, u32, u32, u32)> call_00100d2c;
inline constexpr guest::Function<0x002be920, u32(u32, u32)> call_002be920;
inline constexpr guest::Function<0x002bea00, u32(u32, u32, u32, u32)> call_002bea00;
inline constexpr guest::Function<0x002beb4c, u32(u32, u32, u32, u32)> call_002beb4c;
inline constexpr guest::Function<0x002beb90, u32(u32, u32, u32)> call_002beb90;
inline constexpr guest::Function<0x002bedd8, u32(u32, u32)> call_002bedd8;
inline constexpr guest::Function<0x002bee04, u32(u32, u32, u32, u32)> call_002bee04;
inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x002fe940, u32(u32, u32)> call_002fe940;
inline constexpr guest::Function<0x0030f4fc, u32(u32, u32)> call_0030f4fc;
inline constexpr guest::Function<0x00467590, u32(u32, u32, u32, u32)> call_00467590;
inline constexpr guest::Function<0x00582d34, u32(u32, u32)> call_00582d34;
inline constexpr guest::Function<0x005ca6fc, u32(u32)> call_005ca6fc;
inline constexpr guest::Function<0x0071a23c, u32(u32)> call_0071a23c;
inline constexpr guest::Function<0x0071d5b8, u32(u32)> call_0071d5b8;
inline constexpr guest::Function<0x0071d664, u32(u32, u32)> call_0071d664;
inline constexpr guest::Function<0x00725978, u32(u32, u32, u32, u32)> call_00725978;
inline constexpr guest::Function<0x00725984, u32(u32, u32, u32, u32)> call_00725984;
inline constexpr guest::Function<0x007259b4, u32(u32, u32)> call_007259b4;

struct __attribute__((packed)) Frame_005374f0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x34];  // (not read or written by name)
};
GUEST_OFFSET(Frame_005374f0, word_0, 0x0);
GUEST_OFFSET(Frame_005374f0, word_4, 0x4);
GUEST_SIZE(Frame_005374f0, 0x3c);

u32 f_005374f0(gptr<Object_005374f0_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005374f0> frame;  // the original's stack frame
    u32 r0_6 = 0;
    u32 r0_1 = call_00725984(arg0.addr(), r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_007259b4(arg0.addr(), r1_1);
        r1_1 = arg0->word_4;
        if (r0_2 == r1_1) {
            u32 r0_3 = call_002fb328(r0_2, r1_1);
            gptr<Local_005374f0_r3_4> r3_4 = gptr<Local_005374f0_r3_4>((r0_3 + 0x62080u) + 0x138u);  // (from the original)
            u32 r1_2 = arg0->half_67f4;
            u32 r2_3 = r3_4->half_0;
            if (r2_3 == r1_2) {
                r1_2 = r3_4->byte_14;
                r2_3 = arg0->byte_6808;
                if (r1_2 == r2_3) {
                    r0_6 = call_00100d2c(r3_4.addr() + 2u, arg0.addr() + 0x67f6u, 0x12u, r3_4.addr());  // (from the original)
                    r1_2 = guest::cpu()->r[1];
                    r2_3 = guest::cpu()->r[2];
                    r3_4 = gptr<Local_005374f0_r3_4>(guest::cpu()->r[3]);
                    if (r0_6 == 0) {
                        return r0_6;
                    }
                }
            }
            u32 r0_7 = call_00725978(arg0.addr(), r1_2, r2_3, r3_4.addr());
            frame->word_0 = 0;
            frame->word_4 = 0;
            u32 r0_8 = call_00467590(r0_7, guest::cpu()->r[1], 0u, 0u);
            r1_1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                return 0u;
            }
            u32 r0_9 = call_002fb328(r0_8, r1_1);
            u32 r0_11 = call_0071a23c(r0_9 + 0xa0u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
            if (r0_11 != 0) {
                call_0030f4fc(r0_11, frame.at(0).addr());
                u32 r0_13 = call_002fe940(arg0.addr() + 0x67deu, frame.at(0).addr());  // (from the original)
                r1_1 = guest::cpu()->r[1];
                if (r0_13 != 0) {
                    return 0u;
                }
            }
            u32 r0_15 = call_00582d34(arg0.addr() + 0x1238u, r1_1);  // (from the original)
            u32 r0_16 = call_005ca6fc(r0_15);
            u32 r0_17 = call_002bee04(r0_16, arg0.addr(), frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
            if (r0_17 != 0) {
                call_002beb4c(r0_16, r0_17, arg0.addr(), r1);
                r1_2 = guest::cpu()->r[1];
            } else {
                u32 r0_18 = call_0071d664(r0_16, r0_17);
                if (s32(r0_18) >= 0) {
                    u32 r0_19 = call_002bedd8(r0_16, r0_18 & 0xffu);  // (from the original)
                    u32 r0_20 = call_0071d5b8(r0_19);
                    u32 r0_21 = call_002bedd8(r0_16, r0_18 & 0xffu);  // (from the original)
                    u32 r0_22 = call_002be920(r0_21, r0_20);
                    r1_1 = r0_22;
                } else {
                    u32 r0_23 = call_002beb90(r0_16, frame.at(0x30).addr(), frame.at(0x34).addr());  // (from the original)
                    r1_1 = r0_23;
                    if (r0_23 == 0) {
                        guest::cpu()->r[1] = r1_1;
                        return 0u;
                    }
                }
                frame->word_0 = r2;
                call_002bea00(r0_16, r1_1, arg0.addr(), r1);
                r1_2 = guest::cpu()->r[1];
            }
            guest::cpu()->r[1] = r1_2;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_005374f0
GUEST_EXPORT_FRAMED(0x005374f0, d_005374f0::f_005374f0, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_005376d4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d4 {

inline constexpr guest::Function<0x005ca6fc, u32(u32, u32)> call_005ca6fc;

u32 f_005376d4() {
    return call_005ca6fc(guest::cpu()->r[0], guest::cpu()->r[1]);
}

}  // namespace d_005376d4
GUEST_EXPORT(0x005376d4, d_005376d4::f_005376d4);

// f_005376d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005376d8 {

struct __attribute__((packed)) Local_005376d8_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_005376d8_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_005376d8_r0_1, byte_a1, 0xa1);

inline guest::global<u32, 0x00952620> global_00952620;

u32 f_005376d8() {
    gptr<Local_005376d8_r0_1> r0_1 = gptr<Local_005376d8_r0_1>(*global_00952620);
    if (r0_1.addr() == 0 || r0_1->byte_a1 == 0) {
        r0_1 = gptr<Local_005376d8_r0_1>(0u);
    }
    u32 r0_2 = r0_1->byte_a0;
    return r0_2 >= 0x10u ? 0u : 0x10u - r0_2;  // (from the original)
}

}  // namespace d_005376d8
GUEST_EXPORT(0x005376d8, d_005376d8::f_005376d8);

// f_005377fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005377fc {

inline constexpr guest::Function<0x002fb328, u32(u32, u32)> call_002fb328;
inline constexpr guest::Function<0x003355ac, u32(u32, u32, u32, u32)> call_003355ac;
inline constexpr guest::Function<0x003506c0, u32(u32, u32, u32, u32)> call_003506c0;

struct __attribute__((packed)) Frame_005377fc {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Frame_005377fc, word_0, 0x0);
GUEST_OFFSET(Frame_005377fc, word_4, 0x4);
GUEST_SIZE(Frame_005377fc, 0x8);

void f_005377fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_005377fc> frame;  // the original's stack frame
    u32 r0_1 = call_003506c0(r0, r1, r2, r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r0_2 = call_002fb328(r0_1, r1_1);
    frame->word_0 = r0_1;
    frame->word_4 = r1_1;
    call_003355ac(r2, r0, r1, r0_2 + 0x6e29au);  // (from the original)
}

}  // namespace d_005377fc
GUEST_EXPORT_FRAMED(0x005377fc, d_005377fc::f_005377fc, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053784c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053784c {

inline constexpr guest::Function<0x0023bc64, u32(u32, u32, u32, u32)> call_0023bc64;
inline constexpr guest::Function<0x002fb918, u32(u32)> call_002fb918;
inline constexpr guest::Function<0x002ff8b0, u32(u32)> call_002ff8b0;

void f_0053784c(u32 r0, u32 r1, u32 r2, u32 r3) {
    for (;;) {
        u32 r0_1 = call_0023bc64(r0, r1, r2, r3);
        if (r0_1 == 0) {
            return;
        }
        u32 r0_2 = call_002ff8b0(4u);
        r0 = call_002fb918(r0_2);
        r1 = r0_2;
        if (!(1)) {
            break;
        }
        if (r1 >= 4u) {
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r1_1 = u32(*gptr<u16>(r0 + 0x22u)) & ~lsl_r(0x1000u, r1 & 0xff);  // (from the original)
        *gptr<u16>(r0 + 0x22u) = u16(r1_1);  // (from the original)
        guest::cpu()->r[1] = r1_1;
        return;
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0053784c
GUEST_EXPORT_FRAMED(0x0053784c, d_0053784c::f_0053784c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053787c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053787c {

struct __attribute__((packed)) Object_0053787c_0 {
    u8 unknown_0[0x7dd7];  // (not used here)
    u8 byte_7dd7;
};
GUEST_OFFSET(Object_0053787c_0, byte_7dd7, 0x7dd7);

struct __attribute__((packed)) Local_0053787c_r0_1 {
    u8 unknown_0[0xa0];  // (not used here)
    u8 byte_a0;
    u8 byte_a1;
};
GUEST_OFFSET(Local_0053787c_r0_1, byte_a0, 0xa0);
GUEST_OFFSET(Local_0053787c_r0_1, byte_a1, 0xa1);

inline guest::global<u32, 0x00952620> global_00952620;
inline constexpr guest::Function<0x002e0d04, u32(u32, u32)> call_002e0d04;
inline constexpr guest::Function<0x002ff8b0, u32(u32, u32, u32, u32)> call_002ff8b0;

void f_0053787c(gptr<Object_0053787c_0> arg0, u32 r1_unused, u32 r2) {
    gptr<Local_0053787c_r0_1> r0_1 = gptr<Local_0053787c_r0_1>(*global_00952620);
    u32 zf_1 = r0_1.addr() == 0;
    if (!zf_1) {
        r2 = r0_1->byte_a1;
        zf_1 = r2 == 0;
    }
    if (zf_1) {
        r0_1 = gptr<Local_0053787c_r0_1>(0u);
    }
    if (r0_1->byte_a0 < 0x10u) {  // (from the original)
        u32 r0_2 = call_002ff8b0(4u, 0u, r2, guest::cpu()->r[3]);
        u32 r1_1 = guest::cpu()->r[1];
        u32 r4_1 = arg0.addr() + 0x7dd7u;  // (from the original)
        arg0->byte_7dd7 = u8(r0_2);
        u32 r0_3 = *global_00952620;
        u32 zf_2 = r0_3 == 0;
        if (!zf_2) {
            r1_1 = *gptr<u8>(r0_3 + 0xa1u);  // (from the original)
            zf_2 = r1_1 == 0;
        }
        if (!zf_2) {
            call_002e0d04(r0_3, r1_1);
        }
    }
}

}  // namespace d_0053787c
GUEST_EXPORT_FRAMED(0x0053787c, d_0053787c::f_0053787c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_005378e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005378e4 {

inline constexpr guest::Function<0x002bed24, u32(u32, u32)> call_002bed24;
inline constexpr guest::Function<0x005ca6fc, u32(u32)> call_005ca6fc;

void f_005378e4(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = call_005ca6fc(r0);
    if (r0_1 == 0) {
        return;
    }
    frame.release();
    call_002bed24(r0_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_005378e4
GUEST_EXPORT(0x005378e4, d_005378e4::f_005378e4);

// f_00537b6c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537b6c {


u32 f_00537b6c(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_00537b6c
GUEST_EXPORT(0x00537b6c, d_00537b6c::f_00537b6c);

// f_00537bb0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537bb0 {


u32 f_00537bb0(u32 r0, u32 r1) {
    if (r0 == 0) {
        return ~0u;
    }
    do {
        r1 -= 1u;
        if (s32(r1) <= 0) {
            u32 r0_2 = (r0 & 0u - r0) - 1u;
            u32 r0_3 = r0_2 - (0x55555555u & r0_2 >> 1);  // (from the original)
            u32 r0_5 = (0x33333333u & r0_3 >> 2) + (r0_3 & 0x33333333u);  // (from the original)
            u32 r0_6 = r0_5 + (r0_5 >> 4) & 0xf0f0f0fu;  // (from the original)
            u32 r0_7 = r0_6 + (r0_6 >> 8);
            guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
            return r0_7 + (r0_7 >> 0x10) & 0x3fu;  // (from the original)
        }
        r0 &= r0 - 1u;
        guest::preempt();
    } while (r0 != 0);
    guest::cpu()->r[1] = r1;
    return ~0u;
}

}  // namespace d_00537bb0
GUEST_EXPORT(0x00537bb0, d_00537bb0::f_00537bb0);

// f_00537ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537ce0 {

struct __attribute__((packed)) Object_00537ce0_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00537ce0_0, word_0, 0x0);

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;
inline constexpr guest::Function<0x005380a8, u32(u32)> call_005380a8;
inline constexpr guest::Function<0x0053814c, u32(u32)> call_0053814c;

void f_00537ce0(gptr<Object_00537ce0_0> arg0) {
    call_001435c8(arg0.addr() + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_1 = arg0->word_0;
    if (r5_1 != 0) {
        call_005380a8(r5_1);
        call_0053814c(r5_1);
        arg0->word_0 = 0;
    }
}

}  // namespace d_00537ce0
GUEST_EXPORT_FRAMED(0x00537ce0, d_00537ce0::f_00537ce0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537d70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537d70 {

inline constexpr guest::Function<0x0013cbdc, u32(u32, u32, u32)> call_0013cbdc;
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32, u32, u32)> call_0053ac4c;

void f_00537d70(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (s32(r1) <= 0) {
        return;
    }
    u32 r4 = r1;
    u32 r5 = r0;
    r0 = call_0053ac4c(r4 << 2, r2, r2, r3);
    r3 = 0u;
    if (r0 == 0) {
        r0 = r3;
    } else {
        r1 = 0u;
        if (r4 >= 0u && r4 != 0) {
            do {
                u32 res_1 = r0 + (r1 << 2);
                r1 += 1u;
                if (res_1 != 0) {
                    *gptr<u32>(res_1) = r3;
                }
                guest::preempt();
            } while (r1 < r4);
        }
    }
    *gptr<u32>(r5) = r0;
    frame.release();
    call_0013cbdc(r5 + 4u, r0, r4);
    return;
}

}  // namespace d_00537d70
GUEST_EXPORT(0x00537d70, d_00537d70::f_00537d70);

// f_00537dd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537dd8 {

struct __attribute__((packed)) Object_00537dd8_0 {
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
GUEST_OFFSET(Object_00537dd8_0, word_0, 0x0);
GUEST_OFFSET(Object_00537dd8_0, word_8, 0x8);
GUEST_OFFSET(Object_00537dd8_0, half_c, 0xc);
GUEST_OFFSET(Object_00537dd8_0, word_10, 0x10);
GUEST_OFFSET(Object_00537dd8_0, half_14, 0x14);
GUEST_OFFSET(Object_00537dd8_0, word_18, 0x18);
GUEST_OFFSET(Object_00537dd8_0, word_1c, 0x1c);
GUEST_OFFSET(Object_00537dd8_0, word_20, 0x20);
GUEST_OFFSET(Object_00537dd8_0, word_30, 0x30);
GUEST_OFFSET(Object_00537dd8_0, word_34, 0x34);


void f_00537dd8(gptr<Object_00537dd8_0> arg0) {
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

}  // namespace d_00537dd8
GUEST_EXPORT(0x00537dd8, d_00537dd8::f_00537dd8);

// f_00537e0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537e0c {

struct __attribute__((packed)) Object_00537e0c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_00537e0c_0, word_0, 0x0);

inline constexpr guest::Function<0x001435c8, u32(u32, u32, u32, u32)> call_001435c8;
inline constexpr guest::Function<0x00143604, u32(u32)> call_00143604;
inline constexpr guest::Function<0x005380a8, u32(u32, u32)> call_005380a8;
inline constexpr guest::Function<0x0053814c, u32(u32)> call_0053814c;

u32 f_00537e0c(gptr<Object_00537e0c_0> arg0, u32 r1) {
    call_001435c8(arg0.addr() + 4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r5_1 = arg0->word_0;
    if (r5_1 != 0) {
        call_005380a8(r5_1, r1_1);
        call_0053814c(r5_1);
        r1_1 = 0u;
        arg0->word_0 = r1_1;
    }
    call_001435c8(arg0.addr() + 4u, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00143604(arg0.addr() + 4u);
    return arg0.addr();
}

}  // namespace d_00537e0c
GUEST_EXPORT_FRAMED(0x00537e0c, d_00537e0c::f_00537e0c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00537e98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00537e98 {

inline constexpr guest::Function<0x0053ac90, u32(u32, u32, u32, u32)> call_0053ac90;

u32 f_00537e98(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = r1;
    u32 vf_1 = (r1 & (r1 ^ res_1)) >> 0x1f;  // (from the original)
    u32 r6 = res_1;
    r1 = r2;
    u32 r5 = r0;
    if (res_1 != 0 && res_1 >> 0x1f == vf_1) {  // (from the original)
        u32 r4 = r6 << 2;
        r0 = call_0053ac90(r4, r1, r3, r3);
        r1 = guest::cpu()->r[1];
        r2 = 0u;
        if (r0 == 0) {
            r0 = r2;
        } else {
            r1 = 0u;
            if (r4 >= 0u && r4 != 0) {
                do {
                    u32 res_2 = r0 + r1;
                    r1 += 1u;
                    if (res_2 != 0) {
                        *gptr<u8>(res_2) = u8(r2);
                    }
                    guest::preempt();
                } while (r1 < r4);
            }
        }
        if (s32(r6) > 0 && r0 != 0) {
            *gptr<u32>(r5 + 8u) = r0;
            *gptr<u32>(r5) = r2;
            *gptr<u32>(r5 + 4) = r6;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00537e98
GUEST_EXPORT_FRAMED(0x00537e98, d_00537e98::f_00537e98, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00538024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538024 {

struct __attribute__((packed)) Object_00538024_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00538024_0, word_0, 0x0);
GUEST_OFFSET(Object_00538024_0, word_4, 0x4);
GUEST_OFFSET(Object_00538024_0, word_8, 0x8);

inline constexpr guest::Function<0x001348cc, u32(u32, u32, u32, u32)> call_001348cc;

void f_00538024(gptr<Object_00538024_0> arg0, u32 r1, u32 r2) {
    if (s32(r1) < 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    u32 res_1 = r1_1 - (r0_1 + 1u);
    u32 nf_1 = res_1 >> 0x1f;  // (from the original)
    u32 zf_1 = res_1 == 0;
    u32 vf_1 = ((r1_1 ^ r0_1 + 1u) & (r1_1 ^ res_1)) >> 0x1f;  // (from the original)
    if (nf_1 == vf_1) {
        u32 res_2 = r0_1 - r1;
        nf_1 = res_2 >> 0x1f;  // (from the original)
        zf_1 = res_2 == 0;
        vf_1 = ((r0_1 ^ r1) & (r0_1 ^ res_2)) >> 0x1f;  // (from the original)
    }
    if (nf_1 == vf_1) {
        if (!zf_1 && nf_1 == vf_1) {
            u32 r1_2 = arg0->word_8;
            call_001348cc(r1_2 + (r1 + 1u << 2), r1_2 + (r1 << 2), (r0_1 - r1) << 2, r1 + 1u);
            r1_1 = guest::cpu()->r[1];
        }
        *gptr<u32>(arg0->word_8 + (r1 << 2)) = r2;
        arg0->word_0 = arg0->word_0 + 1u;
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00538024
GUEST_EXPORT_FRAMED(0x00538024, d_00538024::f_00538024, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00538088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538088 {

struct __attribute__((packed)) Object_00538088_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_00538088_0, word_0, 0x0);
GUEST_OFFSET(Object_00538088_0, word_4, 0x4);
GUEST_OFFSET(Object_00538088_0, word_8, 0x8);


void f_00538088(gptr<Object_00538088_0> arg0, u32 r1, u32 r2) {
    if (s32(r1) <= 0 || r2 == 0) {
        return;
    }
    arg0->word_0 = 0;
    arg0->word_4 = r1;
    arg0->word_8 = r2;
}

}  // namespace d_00538088
GUEST_EXPORT(0x00538088, d_00538088::f_00538088);

// f_00538188: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538188 {

inline constexpr guest::Function<0x00135748, u32(u32, u32)> call_00135748;

void f_00538188(u32 r0) {
    call_00135748(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00538188
GUEST_EXPORT(0x00538188, d_00538188::f_00538188);

// f_00538274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00538274 {

inline constexpr guest::Function<0x001357ec, u32(u32, u32)> call_001357ec;

u32 f_00538274(u32 r0) {
    return call_001357ec(r0 + 0x10u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_00538274
GUEST_EXPORT(0x00538274, d_00538274::f_00538274);

// f_0053827c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053827c {

inline constexpr u32 vtable_pead__CriticalSection = 0x00903a08u;
inline constexpr guest::Function<0x0012f154, u32(u32)> call_0012f154;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;

u32 f_0053827c(gptr<pead__CriticalSection> arg0, u32 r1) {
    call_0053d490(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    arg0->word_0 = vtable_pead__CriticalSection;
    arg0->word_10 = 0;
    call_0012f154(arg0.addr() + 0x10u);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0053827c
GUEST_EXPORT_FRAMED(0x0053827c, d_0053827c::f_0053827c, 0x4010);  // pushes {r4, lr} first, as the original

// f_005382c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_005382c4 {

inline constexpr u32 vtable_pead__CriticalSection = 0x00903a08u;
inline constexpr guest::Function<0x0053d530, u32(u32, u32)> call_0053d530;

u32 f_005382c4(gptr<pead__CriticalSection> arg0) {
    arg0->word_0 = vtable_pead__CriticalSection;
    return call_0053d530(arg0.addr(), 0x903a08u);  // (from the original)
}

}  // namespace d_005382c4
GUEST_EXPORT(0x005382c4, d_005382c4::f_005382c4);

// f_0053ac4c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac4c {

inline guest::global<u32, 0x0097d40c> global_0097d40c;
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;

u32 f_0053ac4c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = call_00749010(*global_0097d40c, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, r0, 4u, r3_1);
}

}  // namespace d_0053ac4c
GUEST_EXPORT(0x0053ac4c, d_0053ac4c::f_0053ac4c);

// f_0053ac90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ac90 {

inline guest::global<u32, 0x0097d40c> global_0097d40c;
inline constexpr guest::Function<0x00749010, u32(u32, u32, u32, u32)> call_00749010;

u32 f_0053ac90(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = r1;
    if (r1 == 0) {
        r0_1 = call_00749010(*global_0097d40c, r1, r2, r3);
        if (r0_1 == 0) {
            return r0_1;
        }
    }
    u32 r3_1 = *gptr<u32>(*gptr<u32>(r0_1) + 0x18u);  // (from the original)
    // virtual function 6 of r0_1
    frame.release();
    return guest::call_address<u32>(r3_1, r0_1, r0, r2, r3_1);
}

}  // namespace d_0053ac90
GUEST_EXPORT(0x0053ac90, d_0053ac90::f_0053ac90);

// f_0053acd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053acd8 {

struct __attribute__((packed)) Object_0053acd8_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0053acd8_0, word_4, 0x4);
GUEST_OFFSET(Object_0053acd8_0, word_8, 0x8);

struct __attribute__((packed)) Local_0053acd8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0053acd8_ea_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053acd8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053acd8_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0053acd8_ea_2, word_c, 0xc);

struct __attribute__((packed)) Local_0053acd8_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053acd8_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0053acd8_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0053acd8_ea_3, word_8, 0x8);

inline constexpr guest::Function<0x00100e5d, u32(u32, u32, u32, u32)> call_00100e5c;

struct __attribute__((packed)) Frame_0053acd8 {
    u8 unknown_0[0xc];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053acd8, word_c, 0xc);
GUEST_OFFSET(Frame_0053acd8, word_14, 0x14);
GUEST_SIZE(Frame_0053acd8, 0x20);

void f_0053acd8(gptr<Object_0053acd8_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053acd8> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0053acd8_ea_1> ea_1 = gptr<Local_0053acd8_ea_1>(frame.at(0x10).addr());  // (from the original)
    ea_1->word_0 = arg0.addr();
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_0053acd8_ea_2> ea_2 = gptr<Local_0053acd8_ea_2>(frame.at(0).addr());
    ea_2->word_0 = r4;
    ea_2->word_4 = r5;
    ea_2->word_8 = r6;
    ea_2->word_c = r14;
    u32 r5_1 = arg0->word_4;
    u32 r2_1 = frame->word_14;
    u32 r4_1 = arg0->word_8;
    u32 r0_1 = call_00100e5c(r5_1, r4_1, r2_1, frame.at(0x18).addr());  // (from the original)
    if (s32(r0_1) >= 0) {
        if (!(s32(r0_1) < s32(r4_1))) {
            *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
        }
    } else {
        *gptr<u8>(r5_1 + r4_1 - 1u) = 0;
    }
    gptr<Local_0053acd8_ea_3> ea_3 = gptr<Local_0053acd8_ea_3>(frame.at(0).addr());
    u32 r4_2 = ea_3->word_0;
    u32 r5_2 = ea_3->word_4;
    u32 r6_1 = ea_3->word_8;
    u32 v_1 = frame->word_c;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_1;
}

}  // namespace d_0053acd8
GUEST_EXPORT(0x0053acd8, d_0053acd8::f_0053acd8);

// f_0053ad24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad24 {

struct __attribute__((packed)) Object_0053ad24_0 {
    u8 unknown_0[0x6c];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad24_0, word_6c, 0x6c);

struct __attribute__((packed)) Local_0053ad24_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053ad24_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0053ad24_r5_1, word_c, 0xc);

inline constexpr guest::Function<0x00538188, u32(u32)> call_00538188;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;
inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;

void f_0053ad24(gptr<Object_0053ad24_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r4_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r4_1 = r0_1;
        call_00538188(r0_1);
    }
    gptr<Local_0053ad24_r5_1> r5_1 = gptr<Local_0053ad24_r5_1>(arg0.addr() + 0x3cu);  // (from the original)
    u32 r1_2 = r5_1->word_c + r1;
    call_0053d268(r5_1.addr(), r1_2);
    r5_1->word_8 = r5_1->word_8 + 1u;
    if (r4_1 != 0) {
        frame.release();
        call_00538274(r4_1, r1_2);
        return;
    }
}

}  // namespace d_0053ad24
GUEST_EXPORT(0x0053ad24, d_0053ad24::f_0053ad24);

// f_0053ad94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ad94 {

struct __attribute__((packed)) Object_0053ad94_0 {
    u8 unknown_0[0x44];  // (not used here)
    u32 word_44;
    u32 word_48;
    u8 unknown_4c[0x20];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Object_0053ad94_0, word_44, 0x44);
GUEST_OFFSET(Object_0053ad94_0, word_48, 0x48);
GUEST_OFFSET(Object_0053ad94_0, word_6c, 0x6c);

inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> call_0053d284;

void f_0053ad94(gptr<Object_0053ad94_0> arg0, u32 r1) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r5_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r5_1 = r0_1;
        call_00538188(r0_1, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    call_0053d284(arg0->word_48 + r1, r1_1);
    arg0->word_44 = arg0->word_44 - 1u;
    if (r5_1 != 0) {
        frame.release();
        call_00538274(r5_1, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_0053ad94
GUEST_EXPORT(0x0053ad94, d_0053ad94::f_0053ad94);

// f_0053af90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053af90 {

struct __attribute__((packed)) Local_0053af90_r4_1 {
    u8 unknown_0[0x2c];  // (not used here)
    u32 word_2c;
    u32 word_30;
    u8 unknown_34[0x38];  // (not used here)
    u32 word_6c;
};
GUEST_OFFSET(Local_0053af90_r4_1, word_2c, 0x2c);
GUEST_OFFSET(Local_0053af90_r4_1, word_30, 0x30);
GUEST_OFFSET(Local_0053af90_r4_1, word_6c, 0x6c);

inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;
inline constexpr guest::Function<0x0053aef0, u32(u32, u32, u32)> call_0053aef0;
inline constexpr guest::Function<0x0053d284, u32(u32, u32)> call_0053d284;

void f_0053af90(gptr<pead__ExpHeap> arg0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    u32 r6_1 = 0u;
    u32 r1_1 = arg0->word_6c & 1u;
    if (r1_1 != 0) {
        r1_1 = 1u;
    }
    if (r1_1 != 0) {
        r6_1 = r0_1;
        call_00538188(r0_1, r1_1);
    }
    call_0053aef0(arg0.addr(), 0u, 0u);
    gptr<Local_0053af90_r4_1> r4_1 = gptr<Local_0053af90_r4_1>(arg0->word_20);
    if (r4_1.addr() != 0) {
        u32 r1_3 = r4_1->word_6c & 1u;
        if (r1_3 != 0) {
            r1_3 = 1u;
        }
        u32 r5_1 = 0u;
        if (r1_3 != 0) {
            r5_1 = r4_1.addr() + 0x50u;  // (from the original)
            call_00538188(r4_1.addr() + 0x50u, r1_3);  // (from the original)
            r1_3 = guest::cpu()->r[1];
        }
        call_0053d284(r4_1->word_30 + arg0.addr(), r1_3);
        r4_1->word_2c = r4_1->word_2c - 1u;
        if (r5_1 != 0) {
            call_00538274(r5_1, guest::cpu()->r[1]);
        }
    }
    if (r6_1 != 0) {
        frame.release();
        call_00538274(r6_1, guest::cpu()->r[1]);
        return;
    }
}

}  // namespace d_0053af90
GUEST_EXPORT(0x0053af90, d_0053af90::f_0053af90);

// f_0053b1b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1b0 {

inline constexpr u32 vtable_pead__Heap = 0x00903bc0u;
inline constexpr guest::Function<0x005382c4, u32(u32, u32)> call_005382c4;
inline constexpr guest::Function<0x0053d530, u32(u32, u32)> call_0053d530;

u32 f_0053b1b0(gptr<pead__Heap> arg0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_pead__Heap;
    u32 r0_1 = arg0.addr() + 0x50u;  // (from the original)
    call_005382c4(r0_1, 0x903bc0u);  // (from the original)
    frame.release();
    return call_0053d530(r0_1 - 0x50u, guest::cpu()->r[1]);  // (from the original)
}

}  // namespace d_0053b1b0
GUEST_EXPORT(0x0053b1b0, d_0053b1b0::f_0053b1b0);

// f_0053b1d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b1d0 {

struct __attribute__((packed)) Object_0053b1d0_0 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Object_0053b1d0_0, word_0, 0x0);
GUEST_OFFSET(Object_0053b1d0_0, word_4, 0x4);
GUEST_OFFSET(Object_0053b1d0_0, byte_8, 0x8);

inline guest::global<u8, 0x0097e9fc> global_0097e9fc;

void f_0053b1d0(gptr<Object_0053b1d0_0> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = 0;
    *global_0097e9fc = 0;
    arg0->byte_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_0053b1d0
GUEST_EXPORT(0x0053b1d0, d_0053b1d0::f_0053b1d0);

// f_0053b2e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b2e0 {

inline constexpr u32 vtable_pead__Event = 0x00903c20u;
inline constexpr guest::Function<0x00127cf8, u32(u32, u32)> call_00127cf8;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;

struct __attribute__((packed)) Frame_0053b2e0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053b2e0, word_0, 0x0);
GUEST_SIZE(Frame_0053b2e0, 0x4);

u32 f_0053b2e0(gptr<pead__Event> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053b2e0> frame;  // the original's stack frame
    frame->word_0 = r3;
    call_0053d490(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_pead__Event;
    arg0->word_10 = 0;
    frame->word_0 = 0;
    u32 r0_2 = call_00127cf8(frame.at(0).addr(), r1);
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        r0_2 = 0u;
        arg0->word_10 = frame->word_0;
    }
    u32 r1_1 = r0_2 >> 0x1f;  // (from the original)
    if (r1_1 != 0) {
        call_0012f204(r0_2, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0053b2e0
GUEST_EXPORT_FRAMED(0x0053b2e0, d_0053b2e0::f_0053b2e0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b400 {

inline constexpr u32 vtable_pead__Mutex = 0x00903c30u;
inline constexpr guest::Function<0x0012f204, u32(u32)> call_0012f204;
inline constexpr guest::Function<0x0014f5dc, u32(u32, u32)> call_0014f5dc;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;

struct __attribute__((packed)) Frame_0053b400 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053b400, word_0, 0x0);
GUEST_SIZE(Frame_0053b400, 0x4);

u32 f_0053b400(gptr<pead__Mutex> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053b400> frame;  // the original's stack frame
    frame->word_0 = r3;
    call_0053d490(arg0.addr(), r1, r2, r3);
    arg0->word_0 = vtable_pead__Mutex;
    arg0->word_10 = 0;
    frame->word_0 = 0;
    u32 r0_2 = call_0014f5dc(frame.at(0).addr(), 0u);
    if ((r0_2 >> 0x1f) == 0) {  // (from the original)
        r0_2 = 0u;
        arg0->word_10 = frame->word_0;
    }
    if ((r0_2 >> 0x1f) != 0) {  // (from the original)
        call_0012f204(r0_2);
    }
    return arg0.addr();
}

}  // namespace d_0053b400
GUEST_EXPORT_FRAMED(0x0053b400, d_0053b400::f_0053b400, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053b4cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b4cc {


void f_0053b4cc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r12 = 0u;
    u32 r4 = r12;
    u32 r6 = *gptr<u32>(guest::cpu()->r[13] + 0x1cu);  // (from the original)
    if (s32(r3) > 0) {
        do {
            if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                r4 += 1u;
                r2 += 1u;
                if (s32(r4) >= s32(r3)) {
                    break;
                }
                if (*gptr<s8>(r2) < 0x20) {  // (from the original)
                    r4 += 1u;
                    r2 += 1u;
                    if (s32(r4) >= s32(r3)) {
                        break;
                    }
                }
            }
            if (s32(r3) >= s32(r4 + 4u)) {
                u32 v_1 = *gptr<s8>(r2);
                u32 r2_1 = r2 + 1u;
                u32 r7_1 = v_1 - 0x41u;  // (from the original)
                if (r7_1 > 0x19u) {  // (from the original)
                    r7_1 = v_1 - 0x61u <= 0x19u ? v_1 - 0x47u : v_1 - 0x30u <= 9u ? v_1 + 4u : (v_1 == 0x2bu || v_1 == 0x2du) ? 0x3eu : (v_1 == 0x2fu || v_1 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_2 = *gptr<s8>(r2_1);
                u32 r2_2 = r2_1 + 1u;
                u32 r7_2 = v_2 - 0x41u;  // (from the original)
                if (r7_2 > 0x19u) {  // (from the original)
                    r7_2 = v_2 - 0x61u <= 0x19u ? v_2 - 0x47u : v_2 - 0x30u <= 9u ? v_2 + 4u : (v_2 == 0x2bu || v_2 == 0x2du) ? 0x3eu : (v_2 == 0x2fu || v_2 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_3 = *gptr<s8>(r2_2);
                u32 r2_3 = r2_2 + 1u;
                u32 r9_1 = r7_2 & 0x3fu;  // (from the original)
                u32 r7_3 = v_3 - 0x41u;  // (from the original)
                if (r7_3 > 0x19u) {  // (from the original)
                    r7_3 = v_3 - 0x61u <= 0x19u ? v_3 - 0x47u : v_3 - 0x30u <= 9u ? v_3 + 4u : (v_3 == 0x2bu || v_3 == 0x2du) ? 0x3eu : (v_3 == 0x2fu || v_3 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                }
                u32 v_4 = *gptr<s8>(r2_3);
                r2 = r2_3 + 1u;
                u32 r7_4 = r7_3 & 0x7fu;  // (from the original)
                u32 r5_1 = v_4 - 0x41u <= 0x19u ? v_4 - 0x41u : v_4 - 0x61u <= 0x19u ? v_4 - 0x47u : v_4 - 0x30u <= 9u ? v_4 + 4u : (v_4 == 0x2bu || v_4 == 0x2du) ? 0x3eu : (v_4 == 0x2fu || v_4 == 0x5fu) ? 0x3fu : 0x40u;  // (from the original)
                u32 r5_2 = r5_1 & 0x7fu;  // (from the original)
                if (s32(r1) > s32(r12)) {
                    *gptr<u8>(r0 + r12) = u8((r7_1 & 0x3fu) << 2 | r9_1 >> 4);  // (from the original)
                    r12 += 1u;
                    if (r7_4 >= 0x40u) {  // (from the original)
                        goto L_53b6dc;
                    }
                    if (s32(r1) > s32(r12)) {
                        *gptr<u8>(r0 + r12) = u8(r9_1 << 4 | r7_4 >> 2);
                        r12 += 1u;
                        if (r5_2 >= 0x40u) {  // (from the original)
                            goto L_53b6dc;
                        }
                        if (s32(r1) > s32(r12)) {
                            *gptr<u8>(r0 + r12) = u8(r5_2 | r7_4 << 6);
                            r12 += 1u;
                            goto L_53b6dc;
                        }
                    }
                }
            }
            return;
L_53b6dc:;
            r4 += 4u;
            guest::preempt();
        } while (s32(r4) < s32(r3));
    }
    if (r6 != 0) {
        *gptr<u32>(r6) = r12;
    }
}

}  // namespace d_0053b4cc
GUEST_EXPORT_FRAMED(0x0053b4cc, d_0053b4cc::f_0053b4cc, 0x7f0);  // pushes {r4, r5, r6, r7, r8, r9, r10} first, as the original

// f_0053b6fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b6fc {

struct __attribute__((packed)) Local_0053b6fc_r12 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053b6fc_r12, byte_0, 0x0);
GUEST_OFFSET(Local_0053b6fc_r12, byte_1, 0x1);
GUEST_OFFSET(Local_0053b6fc_r12, byte_2, 0x2);


void f_0053b6fc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 res_1 = 0;
    r3 = r3 == 0 ? 0x8c83a0u : 0x8c835cu;  // (from the original)
    u32 r12_1 = u64(s64(s32(0x55555556u)) * s32(r2)) >> 0x20;  // (from the original)
    u32 r12_2 = r12_1 - u32(s32(r12_1) >> 0x1f);  // (from the original)
    u32 r7 = r12_2 + (r12_2 << 1);
    u32 r6_1 = r7 + 2u;
    if (s32(r6_1) > 2) {
        u32 r5_1 = u64(s64(s32(0x55555556u)) * s32(r6_1)) >> 0x20;  // (from the original)
        gptr<Local_0053b6fc_r12> r12 = gptr<Local_0053b6fc_r12>(r1);
        u32 r4 = r0;
        u32 r5 = r5_1 - u32(s32(r5_1) >> 0x1f);  // (from the original)
        u32 r6 = r5;
        do {
            res_1 = r5 - 1u;
            r5 = res_1;
            *gptr<u8>(r4) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_0) >> 2))));
            *gptr<u8>(r4 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_0) << 0x1e >> 0x1a | (u32(r12->byte_1) & 0xf0u) >> 4))));  // (from the original)
            *gptr<u8>(r4 + 2u) = u8(u32(*gptr<u8>(r3 + (u32(r12->byte_1) << 0x1c >> 0x1a | (u32(r12->byte_2) & 0xc0u) >> 6))));  // (from the original)
            u32 r8_1 = r12->byte_2;
            r12 = gptr<Local_0053b6fc_r12>(r12.addr() + 3u);
            *gptr<u8>(r4 + 3u) = u8(u32(*gptr<u8>(r3 + (r8_1 & 0x3fu))));  // (from the original)
            r4 += 4u;
            guest::preempt();
        } while (res_1 != 0);
        r0 += (r6 << 2);
        r1 += (r6 + (r6 << 1));
    }
    u32 r12_3 = r2 - r7;
    if (r12_3 != 1u) {
        if (r12_3 == 2u) {
            *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
            *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) << 0x1e >> 0x1a | (u32(*gptr<u8>(r1 + 1u)) & 0xf0u) >> 4))));  // (from the original)
            *gptr<u8>(r0 + 2u) = u8(u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1 + 1u)) & 0xfu) << 2))));  // (from the original)
            *gptr<u8>(r0 + 3u) = 0x3d;  // (from the original)
        }
    } else {
        *gptr<u8>(r0) = u8(u32(*gptr<u8>(r3 + (u32(*gptr<u8>(r1)) >> 2))));
        *gptr<u8>(r0 + 1u) = u8(u32(*gptr<u8>(r3 + ((u32(*gptr<u8>(r1)) & 3u) << 4))));
        *gptr<u8>(r0 + 2u) = 0x3d;  // (from the original)
        *gptr<u8>(r0 + 3u) = 0x3d;  // (from the original)
    }
}

}  // namespace d_0053b6fc
GUEST_EXPORT_FRAMED(0x0053b6fc, d_0053b6fc::f_0053b6fc, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053b844: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053b844 {

struct __attribute__((packed)) Object_0053b844_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Object_0053b844_0, word_0, 0x0);
GUEST_OFFSET(Object_0053b844_0, word_4, 0x4);
GUEST_OFFSET(Object_0053b844_0, word_8, 0x8);
GUEST_OFFSET(Object_0053b844_0, word_c, 0xc);

inline constexpr guest::Function<0x0053d2b4, u32(u32, u32, u32, u32)> call_0053d2b4;

u32 f_0053b844(gptr<Object_0053b844_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = call_0053d2b4(frame.at(0).addr(), r1, r2, r3);
    u32 r0_3 = *gptr<u32>(r0_2);
    u32 r0_4 = (r0_3 ^ r0_3 >> 0x1e) * 0x6c078965u + 1u;  // (from the original)
    arg0->word_0 = r0_4;
    u32 r0_5 = (r0_4 ^ r0_4 >> 0x1e) * 0x6c078965u + 2u;  // (from the original)
    arg0->word_4 = r0_5;
    u32 r0_6 = (r0_5 ^ r0_5 >> 0x1e) * 0x6c078965u + 3u;  // (from the original)
    arg0->word_8 = r0_6;
    u32 r0_7 = (r0_6 ^ r0_6 >> 0x1e) * 0x6c078965u + 4u;  // (from the original)
    arg0->word_c = r0_7;
    guest::cpu()->r[1] = 0x6c078965u;  // (from the original)
    return r0_7;
}

}  // namespace d_0053b844
GUEST_EXPORT_FRAMED(0x0053b844, d_0053b844::f_0053b844, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053bb14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bb14 {

struct __attribute__((packed)) Local_0053bb14_r0_1 {
    float float_0;
    float float_4;
};
GUEST_OFFSET(Local_0053bb14_r0_1, float_0, 0x0);
GUEST_OFFSET(Local_0053bb14_r0_1, float_4, 0x4);

inline constexpr guest::Function<0x00128e80, u32(u32, u32, u32, u32)> call_00128e80;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;
inline constexpr guest::Function<0x00139504, u32(u32, u32)> call_00139504;

struct __attribute__((packed)) Frame_0053bb14 {
    u32 word_0;
    u8 unknown_4[0x8];  // (not read or written by name)
    u32 word_c;
    u8 unknown_10[0x4];  // (not read or written by name)
    u32 word_14;
    u8 unknown_18[0x8];  // (not read or written by name)
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u8 unknown_30[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053bb14, word_0, 0x0);
GUEST_OFFSET(Frame_0053bb14, word_c, 0xc);
GUEST_OFFSET(Frame_0053bb14, word_14, 0x14);
GUEST_OFFSET(Frame_0053bb14, word_20, 0x20);
GUEST_OFFSET(Frame_0053bb14, word_24, 0x24);
GUEST_OFFSET(Frame_0053bb14, word_28, 0x28);
GUEST_OFFSET(Frame_0053bb14, word_2c, 0x2c);
GUEST_SIZE(Frame_0053bb14, 0x34);

u32 f_0053bb14(gptr<pead__Thread> arg0, u32 r1, float S0, float S1) {
    guest::StackFrameOf<Frame_0053bb14> frame;  // the original's stack frame
    if (arg0->word_74 == 0) {
        u32 r12_1 = arg0->word_78;
        frame->word_14 = arg0.addr();
        float S0_1 = std::bit_cast<float>(arg0->word_80);
        float S1_1 = std::bit_cast<float>(arg0->word_84);
        frame->word_20 = 4;
        frame->word_24 = 0x1394e4;  // (from the original)
        frame->word_28 = 0x139500;  // (from the original)
        frame->word_2c = 0x1394f4;  // (from the original)
        frame->word_0 = arg0->word_50 + arg0->word_7c;
        gptr<Local_0053bb14_r0_1> r0_1 = gptr<Local_0053bb14_r0_1>(frame.at(4).addr());
        r0_1->float_0 = S0_1;
        r0_1->float_4 = S1_1;
        frame->word_c = 0;
        guest::cpu()->s[0] = S0_1;
        guest::cpu()->s[1] = S1_1;
        u32 r0_2 = call_00128e80(r12_1, frame.at(0x20).addr(), 0x53b9a0u, frame.at(0x14).addr());  // (from the original)
        r1 = guest::cpu()->r[1];
        S0 = guest::cpu()->s[0];
        S1 = guest::cpu()->s[1];
        if ((r0_2 & 0x7e00000u) != 0x600000u) {  // (from the original)
            u32 b_1 = r0_2 >> 0x1f;  // (from the original)
            r1 = b_1;
            if (b_1 != 0) {
                call_0012f204(r0_2, r1);
                r1 = guest::cpu()->r[1];
                S0 = guest::cpu()->s[0];
                S1 = guest::cpu()->s[1];
            }
        }
        if (!((r0_2 & 0x80000000u) >> 0x1f)) {  // (from the original)
            u32 r1_2 = *gptr<u32>(arg0->word_78);
            guest::cpu()->s[0] = S0;
            guest::cpu()->s[1] = S1;
            u32 r0_4 = call_00139504(frame.at(0).addr(), r1_2);
            if ((r0_4 >> 0x1f) != 0) {  // (from the original)
                call_0012f204(r0_4, r1_2);
            }
            u32 r1_3 = arg0->word_74;
            arg0->word_70 = frame->word_0;
            if (r1_3 == 0) {
                arg0->word_74 = 1;
            }
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    guest::cpu()->s[0] = S0;
    guest::cpu()->s[1] = S1;
    return 0u;
}

}  // namespace d_0053bb14
GUEST_EXPORT_FRAMED(0x0053bb14, d_0053bb14::f_0053bb14, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053bc7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053bc7c {

struct __attribute__((packed)) Object_0053bc7c_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_0053bc7c_2, word_0, 0x0);

inline constexpr u32 vtable_pead__SafeStringBase_char_ = 0x009039e0u;
inline constexpr u32 vtable_pead__Thread = 0x00903c40u;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;
inline constexpr guest::Function<0x0013d00c, u32(u32, u32, u32)> call_0013d00c;
inline constexpr guest::Function<0x0013e164, u32(u32, u32)> call_0013e164;
inline constexpr guest::Function<0x00537d70, u32(u32, u32, u32)> call_00537d70;
inline constexpr guest::Function<0x00537dd8, u32(u32, u32, u32, u32)> call_00537dd8;
inline constexpr guest::Function<0x0053d490, u32(u32, u32, u32, u32)> call_0053d490;

struct __attribute__((packed)) Frame_0053bc7c {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053bc7c, word_0, 0x0);
GUEST_SIZE(Frame_0053bc7c, 0x4);

u32 f_0053bc7c(gptr<pead__Thread> arg0, u32 r1, gptr<Object_0053bc7c_2> arg2, u32 r3) {
    guest::StackFrameOf<Frame_0053bc7c> frame;  // the original's stack frame
    frame->word_0 = r3;
    call_0053d490(arg0.addr(), r1, arg2.addr(), r3);
    arg0->word_10 = vtable_pead__SafeStringBase_char_;
    arg0->word_14 = 0x8b06ac;  // (from the original)
    arg0->word_0 = vtable_pead__Thread;
    call_00537dd8(arg0.addr() + 0x18u, arg0.addr(), 0x8b06acu, 0x9039e0u);  // (from the original)
    arg0->word_50 = 0;
    arg0->word_54 = 0;
    arg0->word_58 = 0;
    arg0->word_5c = 0;
    arg0->word_60 = 0;
    arg0->word_64 = 0;
    arg0->byte_68 = 1;
    arg0->word_6c = ~0x80000000u;  // (from the original)
    arg0->word_70 = r3;
    arg0->word_74 = 1;
    arg0->word_78 = arg2.addr();
    arg0->word_7c = 0;
    u32 r0_3 = call_0013d00c(frame.at(0).addr(), arg2->word_0, arg0.addr() + 0x6cu);  // (from the original)
    u32 r1_2 = r0_3 >> 0x1f;  // (from the original)
    if (r1_2 != 0) {
        call_0012f204(r0_3, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    u32 r0_5 = call_0013e164(frame->word_0, r1_2);
    arg0->word_80 = r0_5;
    arg0->word_84 = ~1u;
    arg0->word_5c = arg0.addr();
    call_00537d70(arg0.addr() + 0x18u, 0x20u, r1);  // (from the original)
    return arg0.addr();
}

}  // namespace d_0053bc7c
GUEST_EXPORT_FRAMED(0x0053bc7c, d_0053bc7c::f_0053bc7c, 0x43f0);  // pushes {r4, r5, r6, r7, r8, r9, lr} first, as the original

// f_0053c024: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c024 {

inline constexpr guest::Function<0x00537c28, u32(u32, u32, u32, u32)> call_00537c28;

struct __attribute__((packed)) Frame_0053c024 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053c024, word_0, 0x0);
GUEST_OFFSET(Frame_0053c024, word_4, 0x4);
GUEST_SIZE(Frame_0053c024, 0xc);

void f_0053c024(u32 r0, u32 r1) {
    guest::StackFrameOf<Frame_0053c024> frame;  // the original's stack frame
    frame->word_0 = r0;
    frame->word_4 = r1;
    call_00537c28(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0053c024
GUEST_EXPORT_FRAMED(0x0053c024, d_0053c024::f_0053c024, 0x4000);  // pushes {lr} first, as the original

// f_0053c300: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c300 {

struct __attribute__((packed)) Object_0053c300_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0xb];  // (not used here)
    u32 word_7c;
    u32 word_80;
    u8 unknown_84[0xc];  // (not used here)
    u32 word_90;
};
GUEST_OFFSET(Object_0053c300_0, byte_70, 0x70);
GUEST_OFFSET(Object_0053c300_0, word_7c, 0x7c);
GUEST_OFFSET(Object_0053c300_0, word_80, 0x80);
GUEST_OFFSET(Object_0053c300_0, word_90, 0x90);

struct __attribute__((packed)) Local_0053c300_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c300_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c300_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c300_r1_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c300_r1_3, word_0, 0x0);
GUEST_OFFSET(Local_0053c300_r1_3, word_4, 0x4);
GUEST_OFFSET(Local_0053c300_r1_3, word_8, 0x8);
GUEST_OFFSET(Local_0053c300_r1_3, word_c, 0xc);

struct __attribute__((packed)) Local_0053c300_r8_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Local_0053c300_r8_1, word_8, 0x8);

inline constexpr guest::Function<0x0053c670, u32(u32, u32)> call_0053c670;
inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;
inline constexpr guest::Function<0x0053d284, u32(u32)> call_0053d284;
inline constexpr guest::Function<0x00748d0c, u32(u32, u32, u32, u32)> call_00748d0c;

u32 f_0053c300(gptr<Object_0053c300_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->byte_70;
    gptr<Local_0053c300_r0_1> r0_1 = gptr<Local_0053c300_r0_1>(call_00748d0c(arg0.addr(), r1, r2, r3_1));
    if (r0_1.addr() != 0) {
        u32 r0_2 = r0_1->word_c + 0x10u + r0_1.addr();  // (from the original)
        u32 res_1 = (r0_2 + r2 - 1u & ~(r2 - 1u)) - r0_2;
        u32 r6_1 = r0_1->word_8 - (r1 + res_1);
        r0_1->word_c = res_1;
        if (res_1 != 0) {
            *gptr<u32>(r0_1.addr() + (res_1 + 0x10u) - 4u) = r0_1.addr() + 1u;  // (from the original)
        }
        r0_1->word_8 = r1;
        call_0053d284(arg0->word_80 + r0_1.addr());
        gptr<Local_0053c300_r8_1> r8_1 = gptr<Local_0053c300_r8_1>(arg0.addr() + 0x84u);  // (from the original)
        arg0->word_7c = arg0->word_7c - 1u;
        call_0053d268(r8_1.addr(), arg0->word_90 + r0_1.addr());
        r8_1->word_8 = r8_1->word_8 + 1u;
        if (r6_1 > 0x10u) {  // (from the original)
            gptr<Local_0053c300_r1_3> r1_3 = gptr<Local_0053c300_r1_3>(r0_1->word_c + 0x10u + r0_1.addr() + r1);  // (from the original)
            if (r1_3.addr() != 0) {
                r1_3->word_0 = 0;
                r1_3->word_4 = 0;
                r1_3->word_8 = 0;
                r1_3->word_c = 0;
            }
            r1_3->word_8 = r6_1 - 0x10u;  // (from the original)
            call_0053c670(arg0.addr(), r1_3.addr());
        } else if (r6_1 != 0) {
            r0_1->word_8 = r1 + r6_1;
        }
        r0_1 = gptr<Local_0053c300_r0_1>(r0_1.addr());
    }
    return r0_1.addr();
}

}  // namespace d_0053c300
GUEST_EXPORT_FRAMED(0x0053c300, d_0053c300::f_0053c300, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053c568: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053c568 {

struct __attribute__((packed)) Object_0053c568_0 {
    u8 unknown_0[0x70];  // (not used here)
    u8 byte_70;
    u8 unknown_71[0xf];  // (not used here)
    u32 word_80;
};
GUEST_OFFSET(Object_0053c568_0, byte_70, 0x70);
GUEST_OFFSET(Object_0053c568_0, word_80, 0x80);

struct __attribute__((packed)) Local_0053c568_r0_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r0_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r0_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r4_1, word_0, 0x0);
GUEST_OFFSET(Local_0053c568_r4_1, word_4, 0x4);
GUEST_OFFSET(Local_0053c568_r4_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r4_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r5_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_1, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r5_1, word_c, 0xc);

struct __attribute__((packed)) Local_0053c568_r5_2 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0053c568_r5_2, word_8, 0x8);
GUEST_OFFSET(Local_0053c568_r5_2, word_c, 0xc);

inline constexpr guest::Function<0x0053d268, u32(u32, u32)> call_0053d268;
inline constexpr guest::Function<0x0053d284, u32(u32)> call_0053d284;
inline constexpr guest::Function<0x00748dd8, u32(u32, u32, u32, u32)> call_00748dd8;

u32 f_0053c568(gptr<Object_0053c568_0> arg0, u32 r1, u32 r2) {
    u32 r3_1 = arg0->byte_70;
    gptr<Local_0053c568_r0_1> r0_1 = gptr<Local_0053c568_r0_1>(call_00748dd8(arg0.addr(), r1, r2, r3_1));
    if (r0_1.addr() != 0) {
        u32 r1_2 = r0_1->word_8;
        u32 r0_2 = r0_1->word_c + 0x10u;  // (from the original)
        u32 r2_1 = r1_2 - r1 + (r0_1.addr() + r0_2);
        u32 r2_2 = r2_1 - (r2_1 & ~(r2 - 1u)) + r1;
        u32 r1_3 = r1_2 - r2_2;
        if (r1_3 <= 0x10u) {  // (from the original)
            r0_1->word_c = r1_3;
            if (r1_3 != 0) {
                *gptr<u32>(r0_1.addr() + (r1_3 + 0x10u) - 4u) = r0_1.addr() + 1u;  // (from the original)
            }
            r0_1->word_8 = r2_2;
            call_0053d284(arg0->word_80 + r0_1.addr());
            u32 r0_4 = *gptr<u32>(arg0.addr() + 0x7cu) - 1u;  // (from the original)
            u32 ea_2 = arg0.addr() + 0x7cu;  // (from the original)
            *gptr<u32>(ea_2) = r0_4;
            gptr<Local_0053c568_r5_1> r5_1 = gptr<Local_0053c568_r5_1>(ea_2 + 8u);
            call_0053d268(r5_1.addr(), r5_1->word_c + r0_1.addr());
            r5_1->word_8 = r5_1->word_8 + 1u;
            return r0_1.addr();
        }
        r0_1->word_8 = r1_3 - 0x10u;  // (from the original)
        gptr<Local_0053c568_r4_1> r4_1 = gptr<Local_0053c568_r4_1>(r0_2 + r0_1.addr() + (r1_3 - 0x10u));  // (from the original)
        if (r4_1.addr() != 0) {
            r4_1->word_0 = 0;
            r4_1->word_4 = 0;
            r4_1->word_8 = 0;
            r4_1->word_c = 0;
        }
        gptr<Local_0053c568_r5_2> r5_2 = gptr<Local_0053c568_r5_2>(arg0.addr() + 0x84u);  // (from the original)
        r4_1->word_8 = r2_2;
        call_0053d268(r5_2.addr(), r5_2->word_c + r4_1.addr());
        r5_2->word_8 = r5_2->word_8 + 1u;
        r0_1 = gptr<Local_0053c568_r0_1>(r4_1.addr());
    }
    return r0_1.addr();
}

}  // namespace d_0053c568
GUEST_EXPORT_FRAMED(0x0053c568, d_0053c568::f_0053c568, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cd54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cd54 {

inline constexpr guest::Function<0x00538188, u32(u32, u32, u32, u32)> call_00538188;
inline constexpr guest::Function<0x00538274, u32(u32)> call_00538274;
inline constexpr guest::Function<0x0053c7b8, u32(u32, u32)> call_0053c7b8;
inline constexpr guest::Function<0x0053cef0, u32(u32, u32, u32, u32)> call_0053cef0;

struct __attribute__((packed)) Frame_0053cd54 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053cd54, word_0, 0x0);
GUEST_OFFSET(Frame_0053cd54, word_4, 0x4);
GUEST_OFFSET(Frame_0053cd54, word_8, 0x8);
GUEST_SIZE(Frame_0053cd54, 0x10);

u32 f_0053cd54(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053cd54> frame;  // the original's stack frame
    u32 r5_1 = r0;
    call_00538188(0xae70c0u, r1, r2, r3);  // (from the original)
    u32 r1_1 = r1 + 3u & ~3u;
    if (r1_1 <= 0xa4u) {  // (from the original)
        call_00538274(0xae70c0u);  // (from the original)
        return 0u;
    }
    if (r5_1 != 0) {
        frame->word_0 = r1_1;
        frame->word_4 = 1;
        frame->word_8 = r3;
        r5_1 = call_0053cef0(r5_1, r2, 0u, r5_1);
        r1_1 = guest::cpu()->r[1];
    }
    call_0053c7b8(r5_1, r1_1);
    call_00538274(0xae70c0u);  // (from the original)
    return r5_1;
}

}  // namespace d_0053cd54
GUEST_EXPORT_FRAMED(0x0053cd54, d_0053cd54::f_0053cd54, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0053cef0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cef0 {

struct __attribute__((packed)) Local_0053cef0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0053cef0_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053cef0_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053cef0_ea_1, word_8, 0x8);

inline constexpr u32 vtable_pead__ExpHeap = 0x00903c8cu;
inline constexpr guest::Function<0x00538188, u32(u32, u32)> call_00538188;
inline constexpr guest::Function<0x00538274, u32(u32, u32)> call_00538274;
inline constexpr guest::Function<0x0053b040, u32(u32, u32, u32, u32)> call_0053b040;

struct __attribute__((packed)) Frame_0053cef0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Frame_0053cef0, word_0, 0x0);
GUEST_OFFSET(Frame_0053cef0, word_4, 0x4);
GUEST_OFFSET(Frame_0053cef0, word_8, 0x8);
GUEST_SIZE(Frame_0053cef0, 0xc);

u32 f_0053cef0(gptr<pead__ExpHeap> arg0, u32 r1) {
    guest::StackFrameOf<Frame_0053cef0> frame;  // the original's stack frame
    gptr<Local_0053cef0_ea_1> ea_1 = gptr<Local_0053cef0_ea_1>(frame.at(0x18).addr());  // (from the original)
    u32 r4_1 = ea_1->word_0;
    u32 r5_1 = ea_1->word_4;
    u32 r12_1 = ea_1->word_8;
    frame->word_0 = r4_1;
    frame->word_4 = r5_1;
    frame->word_8 = r12_1;
    call_0053b040(arg0.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r5_2 = 0u;
    arg0->word_0 = vtable_pead__ExpHeap;
    arg0->byte_70 = u8(r5_2);
    u32 r1_1 = ~0u;
    arg0->word_78 = arg0.addr() + 0x74u;  // (from the original)
    arg0->word_7c = r5_2;
    arg0->word_80 = r1_1;
    arg0->word_74 = arg0.addr() + 0x74u;  // (from the original)
    arg0->word_88 = arg0.addr() + 0x84u;  // (from the original)
    arg0->word_8c = r5_2;
    arg0->word_84 = arg0.addr() + 0x84u;  // (from the original)
    arg0->word_90 = r1_1;
    u32 r1_2 = arg0.addr() + 0x50u;  // (from the original)
    u32 r0_3 = arg0->word_6c & 1u;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    if (r0_3 != 0) {
        r5_2 = r1_2;
        call_00538188(r1_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    *gptr<u32>(arg0.addr() + 0x80u) = 0;  // (from the original)
    *gptr<u32>(arg0.addr() + 0x90u) = 0;  // (from the original)
    if (r5_2 != 0) {
        call_00538274(r5_2, r1_2);
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return arg0.addr();
}

}  // namespace d_0053cef0
GUEST_EXPORT_FRAMED(0x0053cef0, d_0053cef0::f_0053cef0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053cfe8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053cfe8 {

struct __attribute__((packed)) Object_0053cfe8_0 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Object_0053cfe8_0, word_0, 0x0);
GUEST_OFFSET(Object_0053cfe8_0, word_4, 0x4);

inline constexpr u32 vtable_pead__SafeStringBase_char_ = 0x009039e0u;
inline guest::global<u32, 0x0097d40c> global_0097d40c;
inline guest::global<u32, 0x0097d410> global_0097d410;
inline guest::global<u32, 0x0097d418> global_0097d418;
inline guest::global<u32, 0x00ae70a4> global_00ae70a4;
inline guest::global<u32, 0x00ae70a8> global_00ae70a8;
inline guest::global<u32, 0x00ae70ac> global_00ae70ac;
inline constexpr guest::Function<0x0053cd54, u32(u32, u32, u32, u32)> call_0053cd54;

struct __attribute__((packed)) Frame_0053cfe8 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x4];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053cfe8, word_0, 0x0);
GUEST_OFFSET(Frame_0053cfe8, word_4, 0x4);
GUEST_SIZE(Frame_0053cfe8, 0xc);

void f_0053cfe8(gptr<Object_0053cfe8_0> arg0) {
    guest::StackFrameOf<Frame_0053cfe8> frame;  // the original's stack frame
    *global_0097d410 = arg0.addr();
    *global_0097d418 = 0;
    u32 r0_1 = arg0->word_0;
    u32 r1_1 = arg0->word_4;
    frame->word_4 = 0x8b069c;  // (from the original)
    frame->word_0 = vtable_pead__SafeStringBase_char_;
    u32 r0_2 = call_0053cd54(r0_1, r1_1, frame.at(0).addr(), 0u);
    u32 r2_2 = *global_00ae70a4;
    if (s32(r2_2) < s32(*global_00ae70a8)) {
        *gptr<u32>(*global_00ae70ac + (r2_2 << 2)) = r0_2;
        *global_00ae70a4 = *global_00ae70a4 + 1u;
    }
    *global_0097d40c = 0x97d414;  // (from the original)
}

}  // namespace d_0053cfe8
GUEST_EXPORT_FRAMED(0x0053cfe8, d_0053cfe8::f_0053cfe8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053d230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d230 {

struct __attribute__((packed)) Object_0053d230_0 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0053d230_0, word_0, 0x0);
GUEST_OFFSET(Object_0053d230_0, word_4, 0x4);
GUEST_OFFSET(Object_0053d230_0, word_8, 0x8);

struct __attribute__((packed)) Local_0053d230_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0053d230_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0053d230_r3_1, word_4, 0x4);


void f_0053d230(gptr<Object_0053d230_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r1 = arg0->word_4;
    u32 r2 = 0u;
    if (r1 != r0) {
        do {
            gptr<Local_0053d230_r3_1> r3_1 = gptr<Local_0053d230_r3_1>(r1);
            r1 = *gptr<u32>(r1 + 4u);
            r3_1->word_4 = r2;
            r3_1->word_0 = r2;
            guest::preempt();
        } while (r1 != r0);
    }
    arg0->word_4 = r0;
    arg0->word_8 = r2;
    arg0->word_0 = r0;
    guest::cpu()->r[1] = r0 + 4u;
}

}  // namespace d_0053d230
GUEST_EXPORT(0x0053d230, d_0053d230::f_0053d230);

// f_0053d2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d2cc {


u32 f_0053d2cc(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 r12 = 0;
    u32 res_1 = 0;
    u32 r6 = 0x981e90u;  // (from the original)
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xa001u;  // (from the original)
        u32 r7 = 0xaf6bdcu;  // (from the original)
        u32 r4 = 0u;
        do {
            r2 = r4;
            r12 = 4u;
            do {
                u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                r12 -= 1u;
                guest::preempt();
            } while (r12 != 0);
            u32 r3_2 = r7 + (r4 << 1);
            r4 += 1u;
            *gptr<u16>(r3_2) = u16(r2);
            guest::preempt();
        } while (r4 < 0x100u);  // (from the original)
        *gptr<u8>(r6) = 1;
    }
    r12 = 0xaf6bdcu;  // (from the original)
    r2 = 0u;
    if (r1 != 0) {
        u32 r3 = r0 - 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r3 + 1u;
            r3 = ea_1;
            r2 = *gptr<u16>(r12 + (u32(*gptr<u8>(ea_1)) << 1));
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                u32 r0_1 = *gptr<u8>(r3 + 1u);
                u32 ea_3 = r3 + 2u;
                r3 = ea_3;
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r0_2 = u32(*gptr<u16>(r12 + (((r0_1 ^ r2) & 0xffu) << 1))) ^ r2 >> 8;  // (from the original)
                r2 = u32(*gptr<u16>(r12 + (((u32(*gptr<u8>(ea_3)) ^ r0_2) & 0xffu) << 1))) ^ r0_2 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    guest::cpu()->r[1] = r1;
    return uxth(r2);
}

}  // namespace d_0053d2cc
GUEST_EXPORT_FRAMED(0x0053d2cc, d_0053d2cc::f_0053d2cc, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d3b0 {


u32 f_0053d3b0(u32 r0, u32 r1) {
    u32 r2 = 0;
    u32 res_1 = 0;
    u32 r6 = 0x97ea04u;  // (from the original)
    if (*gptr<u8>(r6) == 0) {
        u32 r5 = 0xedb88320u;  // (from the original)
        u32 r7 = 0xaf4990u;  // (from the original)
        u32 r12 = 0u;
        do {
            r2 = r12;
            u32 r4 = 4u;
            do {
                u32 r3_1 = (r2 & 1u) == 0 ? r2 >> 1 : r5 ^ r2 >> 1;
                r2 = (r3_1 & 1u) == 0 ? r3_1 >> 1 : r5 ^ r3_1 >> 1;
                r4 -= 1u;
                guest::preempt();
            } while (r4 != 0);
            *gptr<u32>(r7 + (r12 << 2)) = r2;
            r12 += 1u;
            guest::preempt();
        } while (r12 < 0x100u);  // (from the original)
        *gptr<u8>(r6) = 1;
    }
    u32 r3 = 0xaf4990u;  // (from the original)
    r2 = ~0u;
    if (r1 != 0) {
        r0 -= 1u;
        if ((r1 & 1u) != 0) {
            u32 ea_1 = r0 + 1u;
            r0 = ea_1;
            r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_1)) ^ r2) & 0xffu) << 2)) ^ r2 >> 8;  // (from the original)
        }
        r1 >>= 1;
        if (r1 != 0) {
            do {
                res_1 = r1 - 1u;
                r1 = res_1;
                u32 r4_1 = (u32(*gptr<u8>(r0 + 1u)) ^ r2) & 0xffu;  // (from the original)
                u32 ea_3 = r0 + 2u;
                r0 = ea_3;
                u32 r2_1 = *gptr<u32>(r3 + (r4_1 << 2)) ^ r2 >> 8;
                r2 = *gptr<u32>(r3 + (((u32(*gptr<u8>(ea_3)) ^ r2_1) & 0xffu) << 2)) ^ r2_1 >> 8;  // (from the original)
                guest::preempt();
            } while (res_1 != 0);
        }
    }
    return ~r2;
}

}  // namespace d_0053d3b0
GUEST_EXPORT_FRAMED(0x0053d3b0, d_0053d3b0::f_0053d3b0, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0053d490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d490 {

inline constexpr u32 vtable_pead__IDisposer = 0x00903d1cu;
inline guest::global<u32, 0x0097d40c> global_0097d40c;
inline constexpr guest::Function<0x0053ad24, u32(u32, u32)> call_0053ad24;
inline constexpr guest::Function<0x00749030, u32(u32, u32, u32, u32)> call_00749030;

u32 f_0053d490(gptr<pead__IDisposer> arg0) {
    arg0->word_0 = vtable_pead__IDisposer;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r0_1 = *global_0097d40c;
    if (r0_1 == 0) {
        return arg0.addr();
    }
    u32 r0_2 = call_00749030(r0_1, arg0.addr(), guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r1_1 = arg0.addr();
    }
    arg0->word_4 = r0_2;
    if (r0_2 != 0) {
        call_0053ad24(r0_2, r1_1);
    }
    return arg0.addr();
}

}  // namespace d_0053d490
GUEST_EXPORT_FRAMED(0x0053d490, d_0053d490::f_0053d490, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053d530: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d530 {

inline constexpr u32 vtable_pead__IDisposer = 0x00903d1cu;
inline guest::global<u32, 0x0097ea00> global_0097ea00;
inline constexpr guest::Function<0x0053ad94, u32(u32, u32)> call_0053ad94;

u32 f_0053d530(gptr<pead__IDisposer> arg0) {
    arg0->word_0 = vtable_pead__IDisposer;
    u32 r0_1 = arg0->word_4;
    u32 r1_1 = *global_0097ea00;
    if (r0_1 != r1_1) {
        if (r0_1 != 0) {
            call_0053ad94(r0_1, arg0.addr());
            r1_1 = guest::cpu()->r[1];
        }
        arg0->word_4 = *global_0097ea00;
    }
    guest::cpu()->r[1] = r1_1;
    return arg0.addr();
}

}  // namespace d_0053d530
GUEST_EXPORT_FRAMED(0x0053d530, d_0053d530::f_0053d530, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0053d66c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d66c {

struct __attribute__((packed)) Local_0053d66c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0053d66c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0053d66c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0053d66c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0053d66c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0053d66c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0053d66c_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0053d66c_ea_3 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0053d66c_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0053d66c_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0053d66c_ea_3, word_c, 0xc);
GUEST_OFFSET(Local_0053d66c_ea_3, word_10, 0x10);
GUEST_OFFSET(Local_0053d66c_ea_3, word_14, 0x14);

inline constexpr u32 vtable_pead__MainThread = 0x00903908u;
inline guest::global<u32, 0x008b06a8> global_008b06a8;
inline constexpr guest::Function<0x0012f204, u32(u32, u32)> call_0012f204;
inline constexpr guest::Function<0x00139504, u32(u32, u32, u32, u32)> call_00139504;
inline constexpr guest::Function<0x0013a37c, u32(u32, u32)> call_0013a37c;
inline constexpr guest::Function<0x0053ac4c, u32(u32, u32)> call_0053ac4c;
inline constexpr guest::Function<0x0053bc7c, u32(u32, u32, u32, u32)> call_0053bc7c;

struct __attribute__((packed)) Frame_0053d66c {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(Frame_0053d66c, word_0, 0x0);
GUEST_SIZE(Frame_0053d66c, 0x18);

void f_0053d66c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053d66c> frame;  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0053d66c_ea_1> ea_1 = gptr<Local_0053d66c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_2 = call_00139504(frame.at(0).addr(), *global_008b06a8, r2, r3);
    u32 r1_2 = r0_2 >> 0x1f;  // (from the original)
    if (r1_2 != 0) {
        call_0012f204(r0_2, r1_2);
    }
    u32 r6_1 = frame->word_0;
    u32 r0_3 = call_0053ac4c(0x88u, r1);  // (from the original)
    if (r0_3 != 0) {
        r0_3 = call_0053bc7c(r0_3, r1, 0x974f6cu, r6_1);  // (from the original)
        *gptr<u32>(r0_3) = vtable_pead__MainThread;
    }
    *gptr<u32>(r0 + 0x20u) = r0_3;  // (from the original)
    gptr<Local_0053d66c_ea_3> ea_3 = gptr<Local_0053d66c_ea_3>(frame.at(0).addr());
    u32 r4_1 = ea_3->word_4;
    u32 r5_1 = ea_3->word_8;
    u32 r6_2 = ea_3->word_c;
    u32 r7_1 = ea_3->word_10;
    r14 = ea_3->word_14;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    frame.release();
    call_0013a37c(r0 + 0x24u, r0_3);  // (from the original)
    return;
}

}  // namespace d_0053d66c
GUEST_EXPORT(0x0053d66c, d_0053d66c::f_0053d66c);

// f_0053d7c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053d7c8 {

inline constexpr u32 vtable_pead__ThreadMgr = 0x00903d3cu;
inline constexpr guest::Function<0x0013a38c, u32(u32)> call_0013a38c;

u32 f_0053d7c8(gptr<pead__ThreadMgr> arg0) {
    arg0->word_0 = vtable_pead__ThreadMgr;
    u32 r1_1 = arg0.addr() + 0x14u;  // (from the original)
    arg0->word_18 = r1_1;
    arg0->word_1c = 0;
    arg0->word_14 = r1_1;
    arg0->word_20 = 0;
    u32 r0_2 = call_0013a38c((arg0.addr() + 0x14u) + 0x10u);  // (from the original)
    return r0_2 - 0x24u;  // (from the original)
}

}  // namespace d_0053d7c8
GUEST_EXPORT_FRAMED(0x0053d7c8, d_0053d7c8::f_0053d7c8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0053df24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053df24 {

inline constexpr u32 vtable_sead__Controller = 0x00903d64u;
inline constexpr guest::Function<0x00543c54, u32(u32, u32, u32, u32)> call_00543c54;

struct __attribute__((packed)) Frame_0053df24 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053df24, word_0, 0x0);
GUEST_SIZE(Frame_0053df24, 0x4);

u32 f_0053df24(gptr<sead__Controller> arg0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<Frame_0053df24> frame;  // the original's stack frame
    frame->word_0 = r3;
    frame->word_0 = 0xf;  // (from the original)
    call_00543c54(arg0.addr(), 0x1cu, 0x14u, 0x18u);  // (from the original)
    arg0->word_0 = vtable_sead__Controller;
    arg0->byte_134 = 0;
    arg0->word_138 = r1;
    arg0->word_140 = arg0.addr() + 0x13cu;  // (from the original)
    arg0->word_144 = 0;
    arg0->word_13c = arg0.addr() + 0x13cu;  // (from the original)
    arg0->word_150 = arg0.addr() + 0x14cu;  // (from the original)
    arg0->word_154 = 0;
    arg0->word_14c = arg0.addr() + 0x14cu;  // (from the original)
    arg0->word_148 = 4;
    arg0->word_158 = 0x14c;  // (from the original)
    return arg0.addr();
}

}  // namespace d_0053df24
GUEST_EXPORT_FRAMED(0x0053df24, d_0053df24::f_0053df24, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0053dfa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dfa0 {

struct __attribute__((packed)) Object_0053dfa0_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dfa0_0, word_0, 0x0);
GUEST_OFFSET(Object_0053dfa0_0, byte_4c, 0x4c);


u32 f_0053dfa0(gptr<Object_0053dfa0_0> arg0, u32 r1, u32 r2) {
    if (arg0->byte_4c == 0 || r2 == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(arg0->word_0 + 0x4cu);  // (from the original)
    // virtual function 19 of arg0.addr()
    return guest::call_address<u32>(r3_1, arg0.addr(), r1, r2, r3_1);
}

}  // namespace d_0053dfa0
GUEST_EXPORT(0x0053dfa0, d_0053dfa0::f_0053dfa0);

// f_0053dffc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053dffc {

struct __attribute__((packed)) Object_0053dffc_0 {
    u32 word_0;
    u8 unknown_4[0x48];  // (not used here)
    u8 byte_4c;
};
GUEST_OFFSET(Object_0053dffc_0, word_0, 0x0);
GUEST_OFFSET(Object_0053dffc_0, byte_4c, 0x4c);


u32 f_0053dffc(gptr<Object_0053dffc_0> arg0, u32 r1) {
    if (arg0->byte_4c == 0 || r1 == 0) {
        return 0u;
    }
    u32 r3_1 = *gptr<u32>(arg0->word_0 + 0x50u);  // (from the original)
    // virtual function 20 of arg0.addr()
    return guest::call_address<u32>(r3_1, arg0.addr(), r1, guest::cpu()->r[2], r3_1);
}

}  // namespace d_0053dffc
GUEST_EXPORT(0x0053dffc, d_0053dffc::f_0053dffc);

// f_0053e23c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e23c {

inline constexpr u32 vtable_sead__SafeStringBase_char_ = 0x009047f8u;

void f_0053e23c(gptr<sead__SafeStringBase_char_> arg0) {
    arg0->word_0 = vtable_sead__SafeStringBase_char_;
    arg0->word_4 = 0x8c9f1c;  // (from the original)
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->byte_1c = 1;
    arg0->byte_1d = 1;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->byte_28 = 0;
}

}  // namespace d_0053e23c
GUEST_EXPORT(0x0053e23c, d_0053e23c::f_0053e23c);

// f_0053e958: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e958 {

inline constexpr u32 vtable_sead__FileDevice = 0x00903d90u;
inline guest::global<u32, 0x009752e0> global_009752e0;
inline constexpr guest::Function<0x0013efb4, u32(u32, u32)> call_0013efb4;
inline constexpr guest::Function<0x005423b8, u32(u32, u32)> call_005423b8;

u32 f_0053e958(gptr<sead__FileDevice> arg0, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    arg0->word_0 = vtable_sead__FileDevice;
    u32 r0_1 = *global_009752e0;
    if (r0_1 != 0) {
        call_005423b8(r0_1, arg0.addr());
        r1 = guest::cpu()->r[1];
    }
    frame.release();
    return call_0013efb4(arg0.addr(), r1);
}

}  // namespace d_0053e958
GUEST_EXPORT(0x0053e958, d_0053e958::f_0053e958);

// f_0053e990: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e990 {

struct __attribute__((packed)) Object_0053e990_0 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(Object_0053e990_0, word_8, 0x8);

inline constexpr guest::Function<0x0013ef38, u32(u32, u32, u32, u32)> call_0013ef38;

u32 f_0053e990(gptr<Object_0053e990_0> arg0, u32 r1) {
    u32 r2_1 = arg0->word_8;
    if (r2_1 == 0) {
        return 0u;
    }
    return call_0013ef38(r2_1, arg0.addr(), r2_1, guest::cpu()->r[3]);
}

}  // namespace d_0053e990
GUEST_EXPORT(0x0053e990, d_0053e990::f_0053e990);

// f_0053e9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053e9b0 {

struct __attribute__((packed)) Object_0053e9b0_0 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(Object_0053e9b0_0, word_4, 0x4);

inline constexpr guest::Function<0x0053e71c, u32(u32, u32, u32, u32)> call_0053e71c;

struct __attribute__((packed)) Frame_0053e9b0 {
    u32 word_0;
};
GUEST_OFFSET(Frame_0053e9b0, word_0, 0x0);
GUEST_SIZE(Frame_0053e9b0, 0x4);

u32 f_0053e9b0(gptr<Object_0053e9b0_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<Frame_0053e9b0> frame;  // the original's stack frame
    frame->word_0 = r3;
    u32 r12_1 = arg0->word_4;
    if (r12_1 == 0) {
        return 0u;
    }
    frame->word_0 = r3;
    u32 r0_1 = call_0053e71c(r12_1, guest::cpu()->r[1], arg0.addr(), r2);
    return r0_1;
}

}  // namespace d_0053e9b0
GUEST_EXPORT_FRAMED(0x0053e9b0, d_0053e9b0::f_0053e9b0, 0x4000);  // pushes {lr} first, as the original

// f_0053ecf8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053ecf8 {

struct __attribute__((packed)) Local_0053ecf8_r4_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_0, 0x0);
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_1, 0x1);
GUEST_OFFSET(Local_0053ecf8_r4_1, byte_2, 0x2);


u32 f_0053ecf8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r1_1 = 0;
    u32 r6 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 >> 0x1f == ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (res_1 >> 0x1f == vf_1) {  // (from the original)
            u32 r7 = 0u;
            if (r1 >= 0u && r1 != 0) {
                u32 r8 = 0xc0u;  // (from the original)
                u32 r9 = 0xe0u;  // (from the original)
                u32 r11 = 0x80u;  // (from the original)
                do {
                    u32 r12_1 = *gptr<u16>(r2 + (r5 << 1));
                    gptr<Local_0053ecf8_r4_1> r4_1 = gptr<Local_0053ecf8_r4_1>(r6 + r0);
                    if (s32(r3) <= s32(r5)) {
                        *gptr<u8>(r6 + r0) = u8(r7);
                        guest::cpu()->r[1] = r1;
                        return r0;
                    }
                    if (r12_1 != 0) {
                        if (r12_1 <= 0x7fu) {  // (from the original)
                            r0 += 1u;
                            r4_1->byte_0 = u8(r12_1);
                        } else if (r12_1 >= 0x800u) {  // (from the original)
                            if (r1 <= r0 + 2u) {
                                r1_1 = r6 + r0;
                                *gptr<u8>(r1_1 - 1u) = u8(r7);
                                guest::cpu()->r[1] = r1_1;
                                return r0 - 1u;
                            }
                            r4_1->byte_0 = u8(r9 | r12_1 >> 0xc);  // (from the original)
                            r4_1->byte_1 = u8(r11 | r12_1 >> 6u & 0x3fu);  // (from the original)
                            r0 += 3u;
                            r4_1->byte_2 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
                        } else {
                            if (r1 <= r0 + 1u) {
                                r1_1 = r6 + r0;
                                *gptr<u8>(r1_1 - 1u) = u8(r7);
                                guest::cpu()->r[1] = r1_1;
                                return r0 - 1u;
                            }
                            r4_1->byte_0 = u8(r8 | r12_1 >> 6);
                            r0 += 2u;
                            r4_1->byte_1 = u8(r12_1 & 0x3fu | 0x80u);  // (from the original)
                        }
                    } else {
                        r4_1->byte_0 = u8(r7);
                        guest::cpu()->r[1] = r1;
                        return r0;
                    }
                    r5 += 1u;
                    guest::preempt();
                } while (r0 < r1);
            }
            r1_1 = r6 + r0;
            *gptr<u8>(r1_1 - 1u) = u8(r7);
            guest::cpu()->r[1] = r1_1;
            return r0 - 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0053ecf8
GUEST_EXPORT_FRAMED(0x0053ecf8, d_0053ecf8::f_0053ecf8, 0x4ff0);  // pushes {r4, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0053edf4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053edf4 {

struct __attribute__((packed)) Local_0053edf4_r6_1 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Local_0053edf4_r6_1, byte_0, 0x0);
GUEST_OFFSET(Local_0053edf4_r6_1, byte_1, 0x1);
GUEST_OFFSET(Local_0053edf4_r6_1, byte_2, 0x2);


u32 f_0053edf4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r5 = guest::cpu()->r[5];
    u32 r4_2 = 0;
    u32 r6_3 = 0;
    u32 r1_2 = 0;
    u32 r12 = r0;
    if (r1 != 0) {
        u32 res_1 = r3 + 1u;
        u32 vf_1 = ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f;  // (from the original)
        if (res_1 >> 0x1f == ((r3 ^ res_1) & (1u ^ res_1)) >> 0x1f) {  // (from the original)
            r0 = 0u;
            r5 = r0;
        }
        if (res_1 == 0) {
            r3 = ~0x80000000u;  // (from the original)
        }
        if (res_1 >> 0x1f == vf_1) {  // (from the original)
            u32 r7 = 0u;
            if (r1 >= 0u && r1 != 0) {
                do {
                    gptr<Local_0053edf4_r6_1> r6_1 = gptr<Local_0053edf4_r6_1>(r2 + r5);
                    if (s32(r3) <= s32(r5)) {
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    u32 r4_1 = r6_1->byte_0;
                    if (r4_1 == 0) {
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    if ((r4_1 & 0x80u) != 0) {  // (from the original)
                        if ((r4_1 & 0xe0u) == 0xc0u) {  // (from the original)
                            u32 r6_2 = r6_1->byte_1;
                            if (r6_2 == 0) {
                                r1_2 = r12 + (r0 << 1);
                                *gptr<u16>(r1_2) = u16(r7);
                                guest::cpu()->r[1] = r1_2;
                                return r0;
                            }
                            r4_2 = r6_2 & 0x3fu | (r4_1 & 0x1fu) << 6;  // (from the original)
                            r6_3 = r12 + (r0 << 1);
                            r5 += 2u;
                            goto L_53eed0;
                        }
                        if ((r4_1 & 0xf0u) == 0xe0u) {  // (from the original)
                            u32 r8_1 = r6_1->byte_1;
                            u32 zf_1 = r8_1 == 0;
                            if (!zf_1) {
                                r6_1 = gptr<Local_0053edf4_r6_1>(u32(r6_1->byte_2));
                                zf_1 = r6_1.addr() == 0;
                            }
                            if (zf_1) {
                                r1_2 = r12 + (r0 << 1);
                                *gptr<u16>(r1_2) = u16(r7);
                                guest::cpu()->r[1] = r1_2;
                                return r0;
                            }
                            r6_3 = r12 + (r0 << 1);
                            r4_2 = (r6_1.addr() & 0x3fu) | (r4_1 << 0xc) | (r8_1 & 0x3fu) << 6;  // (from the original)
                            r5 += 3u;
                            goto L_53eed0;
                        }
                        r1_2 = r12 + (r0 << 1);
                        *gptr<u16>(r1_2) = u16(r7);
                        guest::cpu()->r[1] = r1_2;
                        return r0;
                    }
                    r5 += 1u;
                    *gptr<u16>(r12 + (r0 << 1)) = u16(r4_1);
                    goto L_53eed4;
L_53eed0:;
                    *gptr<u16>(r6_3) = u16(r4_2);
L_53eed4:;
                    r0 += 1u;
                    guest::preempt();
                } while (r0 < r1);
            }
            u32 r1_1 = r12 + (r0 << 1);
            *gptr<u16>(r1_1 - 2u) = u16(r7);
            guest::cpu()->r[1] = r1_1;
            return r0 - 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0053edf4
GUEST_EXPORT_FRAMED(0x0053edf4, d_0053edf4::f_0053edf4, 0x3f0);  // pushes {r4, r5, r6, r7, r8, r9} first, as the original

// f_0053f59c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f59c {

inline constexpr guest::Function<0x001210d4, u32(u32, u32, u32, u32)> call_001210d4;

void f_0053f59c() {
    call_001210d4(0xaf52e8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return;  // (from the original)
}

}  // namespace d_0053f59c
GUEST_EXPORT(0x0053f59c, d_0053f59c::f_0053f59c);

// f_0053f608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f608 {

inline constexpr u32 vtable_sead__TextWriter = 0x00903ea0u;
inline guest::global<u32, 0x0053f69c> global_0053f69c;
inline guest::global<u32, 0x00981d70> global_00981d70;
inline guest::global<u32, 0x00981eb8> global_00981eb8;

void f_0053f608(gptr<sead__TextWriter> arg0) {
    arg0->word_4 = 0;
    arg0->word_0 = vtable_sead__TextWriter;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    u32 r2_1 = *global_00981d70;
    float S1_1 = 0.0f;
    float S0_1 = 1.0f;
    if (r2_1 == 0) {
        r2_1 = *global_00981eb8;
    }
    arg0->word_10 = r2_1;
    arg0->float_14 = S1_1;
    arg0->float_18 = S1_1;
    arg0->float_1c = S0_1;
    arg0->float_20 = S0_1;
    arg0->float_24 = S0_1;
    arg0->float_28 = S0_1;
    arg0->float_2c = S0_1;
    arg0->float_30 = S0_1;
    arg0->float_34 = S1_1;
    float S0_2 = std::bit_cast<float>(*global_0053f69c);
    arg0->float_38 = S1_1;
    arg0->word_3c = 0;
    arg0->float_40 = S0_2;
    arg0->word_44 = 0;
    arg0->word_48 = 0;
    arg0->byte_4c = 1;
    guest::cpu()->s[0] = S0_2;
    guest::cpu()->s[1] = S1_1;
}

}  // namespace d_0053f608
GUEST_EXPORT(0x0053f608, d_0053f608::f_0053f608);

// f_0053f6c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f6c4 {


u32 f_0053f6c4(u32 r0) {
    u32 r0_1 = r0 - (0x55555555u & r0 >> 1);  // (from the original)
    u32 r0_3 = (0x33333333u & r0_1 >> 2) + (r0_1 & 0x33333333u);  // (from the original)
    u32 r0_4 = r0_3 + (r0_3 >> 4) & 0xf0f0f0fu;  // (from the original)
    u32 r0_5 = r0_4 + (r0_4 >> 8);
    guest::cpu()->r[1] = 0xf0f0f0fu;  // (from the original)
    return r0_5 + (r0_5 >> 0x10) & 0x3fu;  // (from the original)
}

}  // namespace d_0053f6c4
GUEST_EXPORT(0x0053f6c4, d_0053f6c4::f_0053f6c4);

// f_0053f730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053f730 {

inline constexpr u32 vtable_sead__FrameBuffer = 0x00903edcu;
inline guest::global<u32, 0x00975320> global_00975320;

void f_0053f730(gptr<sead__FrameBuffer> arg0) {
    arg0->word_0 = vtable_sead__FrameBuffer;
    if (arg0.addr() == *global_00975320) {
        *global_00975320 = 0;
    }
    guest::cpu()->r[1] = 0x975320u;  // (from the original)
}

}  // namespace d_0053f730
GUEST_EXPORT(0x0053f730, d_0053f730::f_0053f730);

// f_0053fda8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0053fda8 {

struct __attribute__((packed)) Object_0053fda8_0 {
    u8 unknown_0[0x34];  // (not used here)
    float float_34;
    float float_38;
    float float_3c;
    float float_40;
    float float_44;
    float float_48;
    float float_4c;
    float float_50;
    float float_54;
};
GUEST_OFFSET(Object_0053fda8_0, float_34, 0x34);
GUEST_OFFSET(Object_0053fda8_0, float_38, 0x38);
GUEST_OFFSET(Object_0053fda8_0, float_3c, 0x3c);
GUEST_OFFSET(Object_0053fda8_0, float_40, 0x40);
GUEST_OFFSET(Object_0053fda8_0, float_44, 0x44);
GUEST_OFFSET(Object_0053fda8_0, float_48, 0x48);
GUEST_OFFSET(Object_0053fda8_0, float_4c, 0x4c);
GUEST_OFFSET(Object_0053fda8_0, float_50, 0x50);
GUEST_OFFSET(Object_0053fda8_0, float_54, 0x54);

struct __attribute__((packed)) Object_0053fda8_1 {
    u8 unknown_0[0x94];  // (not used here)
    float float_94;
    u8 unknown_98[0x4];  // (not used here)
    float float_9c;
    float float_a0;
    float float_a4;
    float float_a8;
};
GUEST_OFFSET(Object_0053fda8_1, float_94, 0x94);
GUEST_OFFSET(Object_0053fda8_1, float_9c, 0x9c);
GUEST_OFFSET(Object_0053fda8_1, float_a0, 0xa0);
GUEST_OFFSET(Object_0053fda8_1, float_a4, 0xa4);
GUEST_OFFSET(Object_0053fda8_1, float_a8, 0xa8);

inline constexpr guest::Function<0x0014f4ec, u32(u32, u32)> call_0014f4ec;

void f_0053fda8(gptr<Object_0053fda8_0> arg0, gptr<Object_0053fda8_1> arg1) {
    float S2_1 = arg1->float_9c + arg1->float_a0;
    float S3_1 = 0.5f;
    float S1_1 = arg1->float_a4 + arg1->float_a8;
    arg0->float_3c = arg1->float_94;
    arg0->float_34 = S1_1 * S3_1;
    arg0->float_38 = S2_1 * S3_1;
    float S2_2 = arg1->float_a4 + arg1->float_a8;
    float S1_2 = 1.0f;
    float S4_1 = arg1->float_9c + arg1->float_a0;
    arg0->float_48 = arg1->float_94 - S1_2;
    float S0_1 = 0.0f;
    arg0->float_40 = S2_2 * S3_1;
    arg0->float_44 = S4_1 * S3_1;
    arg0->float_4c = S0_1;
    arg0->float_50 = S1_2;
    arg0->float_54 = S0_1;
    guest::cpu()->s[0] = S0_1;
    guest::cpu()->s[1] = S1_2;
    call_0014f4ec(arg0.addr() + 0x4cu, arg1.addr());  // (from the original)
}

}  // namespace d_0053fda8
GUEST_EXPORT(0x0053fda8, d_0053fda8::f_0053fda8);
