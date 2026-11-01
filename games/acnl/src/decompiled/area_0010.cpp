// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names are generated (d_<address>::f_<address>, Object_<address>_<argument>, word_<offset>) and still to be chosen.
#include "guest/guest.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00100088: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100088 {

inline guest::global<u32, 0x00952c9c> global_00952c9c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_00100088(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1000b4u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 1;
    u32 r0_3 = call_002f6e78(0x215800u, r0_2, r0, 1u);  // (from the original)
    *global_00952c9c = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100088
GUEST_EXPORT_FRAMED(0x00100089, d_00100088::f_00100088, 0x4010);  // pushes {r4, lr} first, as the original

// f_001000c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001000c4 {

inline guest::global<u32, 0x00952c80> global_00952c80;  // (from the original)
inline constexpr guest::Function<0x0012033c, u32(u32, u32, u32, u32)> call_0012033c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_001000c4(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = call_0012033c(r0, r1, r2, r3);
    u32 r0_3 = call_002f6e64(frame.at(8).addr(), 0x1000f8u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_4 = call_002f6e78(r0_1, r0_3, r0, 1u);
    *global_00952c80 = r0_4;
    call_002f6e8c(r0_4, guest::cpu()->r[1]);
}

}  // namespace d_001000c4
GUEST_EXPORT_FRAMED(0x001000c5, d_001000c4::f_001000c4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010018c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010018c {

inline guest::global<u32, 0x00952cac> global_00952cac;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_0010018c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1001c0u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0x19u << 0xc, r0_2, r0, 1u);  // (from the original)
    *global_00952cac = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_0010018c
GUEST_EXPORT_FRAMED(0x0010018d, d_0010018c::f_0010018c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001001d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001001d0 {

inline guest::global<u32, 0x00952c7c> global_00952c7c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001001d0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x100204u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(1u << 0xa, r0_2, r0, 1u);  // (from the original)
    *global_00952c7c = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
    u32 r0_4 = *global_00952c7c;
    return r0_4;
}

}  // namespace d_001001d0
GUEST_EXPORT_FRAMED(0x001001d1, d_001001d0::f_001001d0, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001002a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001002a4 {

inline guest::global<u32, 0x00952c94> global_00952c94;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001002a4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1002d8u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0xbu << 0x13, r0_2, r0, 1u);  // (from the original)
    *global_00952c94 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
    u32 r0_4 = *global_00952c94;
    return r0_4;
}

}  // namespace d_001002a4
GUEST_EXPORT_FRAMED(0x001002a5, d_001002a4::f_001002a4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001002e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001002e8 {

inline guest::global<u32, 0x00952c3c> global_00952c3c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

u32 f_001002e8(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10031cu, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 1;
    u32 r0_3 = call_002f6e78(0xeb8000u, r0_2, r0, 1u);  // (from the original)
    *global_00952c3c = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
    u32 r0_4 = *global_00952c3c;
    return r0_4;
}

}  // namespace d_001002e8
GUEST_EXPORT_FRAMED(0x001002e9, d_001002e8::f_001002e8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010032c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010032c {

inline guest::global<u32, 0x00952c84> global_00952c84;  // (from the original)
inline constexpr guest::Function<0x0012089c, u32(u32, u32)> call_0012089c;  // (from the original)
inline constexpr guest::Function<0x001209ec, u32(u32, u32, u32, u32)> call_001209ec;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32, u32, u32)> call_002f6e8c;  // (from the original)

void f_0010032c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_1 = call_001209ec(r0, r1, r2, r3);
    u32 r0_3 = call_002f6e64(frame.at(8).addr(), 0x100368u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_4 = call_002f6e78(r0_1, r0_3, r0, 1u);
    *global_00952c84 = r0_4;
    call_002f6e8c(frame.at(8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_0012089c(*global_00952c84, guest::cpu()->r[1]);
}

}  // namespace d_0010032c
GUEST_EXPORT_FRAMED(0x0010032d, d_0010032c::f_0010032c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100378: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100378 {

inline guest::global<u32, 0x00952ca0> global_00952ca0;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_00100378(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1003acu, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 1;
    u32 r0_3 = call_002f6e78(0xd4800u, r0_2, r0, 1u);  // (from the original)
    *global_00952ca0 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100378
GUEST_EXPORT_FRAMED(0x00100379, d_00100378::f_00100378, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001003bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001003bc {

inline guest::global<u32, 0x00952c48> global_00952c48;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_001003bc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1003f0u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0x3bu << 9, r0_2, r0, 1u);  // (from the original)
    *global_00952c48 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_001003bc
GUEST_EXPORT_FRAMED(0x001003bd, d_001003bc::f_001003bc, 0x4030);  // pushes {r4, r5, lr} first, as the original

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
inline constexpr guest::Function<0x00122620, u32(u32, u32)> call_00122620;  // (from the original)
inline constexpr guest::Function<0x00131e5c, u32(u32, u32, u32, u32)> call_00131e5c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32)> call_002f6e8c;  // (from the original)

u32 f_00100400(gptr<Object_00100400_0> arg0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r5_1 = arg0->word_c;
    u32 r4_1 = arg0->word_8;
    u32 r0_2 = call_002f6e64(frame.at(0).addr(), 0x100434u, r2, r3);  // (from the original)
    u32 r0_3 = call_00131e5c(r4_1, r5_1, r0_2, 0u);
    *global_00952c38 = r0_3;
    call_002f6e8c(r0_3);
    call_00122620(0xae53b8u, *global_00952c38);  // (from the original)
    u32 r0_4 = *global_00952c38;
    return r0_4;
}

}  // namespace d_00100400
GUEST_EXPORT_FRAMED(0x00100401, d_00100400::f_00100400, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100448 {

inline guest::global<u32, 0x00952c54> global_00952c54;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_00100448(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10047cu, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0xa5u << 0xc, r0_2, r0, 1u);  // (from the original)
    *global_00952c54 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100448
GUEST_EXPORT_FRAMED(0x00100449, d_00100448::f_00100448, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100490: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100490 {

inline guest::global<u32, 0x00952c70> global_00952c70;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> call_002f70b4;  // (from the original)

void f_00100490(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1004c0u, r2, r3);  // (from the original)
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0) = r0;
    u32 r0_3 = call_002f70b4(0x2710u, 9u, r0_2, 4u);  // (from the original)
    *global_00952c70 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100490
GUEST_EXPORT_FRAMED(0x00100491, d_00100490::f_00100490, 0x4010);  // pushes {r4, lr} first, as the original

// f_001004dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001004dc {

inline guest::global<u32, 0x00952c68> global_00952c68;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_001004dc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x100510u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0x23fc00u, r0_2, r0, 1u);  // (from the original)
    *global_00952c68 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_001004dc
GUEST_EXPORT_FRAMED(0x001004dd, d_001004dc::f_001004dc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100528: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100528 {

inline guest::global<u32, 0x00952c64> global_00952c64;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_00100528(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10055cu, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0x238333u, r0_2, r0, 1u);  // (from the original)
    *global_00952c64 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100528
GUEST_EXPORT_FRAMED(0x00100529, d_00100528::f_00100528, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00100574: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100574 {

inline guest::global<u32, 0x00952c74> global_00952c74;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_00100574(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1005a8u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(0xfu << 0xe, r0_2, r0, 1u);  // (from the original)
    *global_00952c74 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_00100574
GUEST_EXPORT_FRAMED(0x00100575, d_00100574::f_00100574, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_001005c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001005c0 {

inline guest::global<u32, 0x00952c6c> global_00952c6c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)
inline constexpr guest::Function<0x002f70b4, u32(u32, u32, u32, u32)> call_002f70b4;  // (from the original)

void f_001005c0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x1005f0u, r2, r3);  // (from the original)
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0) = r0;
    u32 r0_3 = call_002f70b4(0x18u, 0x10u, r0_2, 4u);  // (from the original)
    *global_00952c6c = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_001005c0
GUEST_EXPORT_FRAMED(0x001005c1, d_001005c0::f_001005c0, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100608: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100608 {

inline constexpr guest::Function<0x00127d54, u32(u32, u32)> call_00127d54;  // (from the original)
inline constexpr guest::Function<0x00127f88, u32(u32, u32)> call_00127f88;  // (from the original)
inline constexpr guest::Function<0x001282a8, u32(u32, u32)> call_001282a8;  // (from the original)
inline constexpr guest::Function<0x00128454, u32(u32, u32)> call_00128454;  // (from the original)
inline constexpr guest::Function<0x00128490, u32(u32, u32)> call_00128490;  // (from the original)
inline constexpr guest::Function<0x001284cc, u32(u32, u32)> call_001284cc;  // (from the original)
inline constexpr guest::Function<0x0012853c, u32(u32, u32)> call_0012853c;  // (from the original)
inline constexpr guest::Function<0x001285c8, u32(u32, u32)> call_001285c8;  // (from the original)
inline constexpr guest::Function<0x001288e8, u32(u32, u32)> call_001288e8;  // (from the original)
inline constexpr guest::Function<0x0012b6c0, u32(u32, u32)> call_0012b6c0;  // (from the original)
inline constexpr guest::Function<0x0012b7c4, u32(u32, u32)> call_0012b7c4;  // (from the original)
inline constexpr guest::Function<0x0012cb84, u32(u32, u32)> call_0012cb84;  // (from the original)
inline constexpr guest::Function<0x0012cc78, u32(u32, u32)> call_0012cc78;  // (from the original)
inline constexpr guest::Function<0x0012d19c, u32(u32, u32)> call_0012d19c;  // (from the original)
inline constexpr guest::Function<0x0012d3ac, u32(u32, u32)> call_0012d3ac;  // (from the original)
inline constexpr guest::Function<0x0012d444, u32(u32, u32)> call_0012d444;  // (from the original)
inline constexpr guest::Function<0x001325e4, u32(u32, u32)> call_001325e4;  // (from the original)
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> call_002f737c;  // (from the original)

u32 f_00100608(u32 r0) {
    call_002f737c(r0, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f737c(r0, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002f737c(r0, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = call_002f737c(r0, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_2 = call_001282a8(r0_1, guest::cpu()->r[1]);
        u32 r0_3 = call_0012cc78(r0_2, guest::cpu()->r[1]);
        u32 r0_4 = call_00128454(r0_3, guest::cpu()->r[1]);
        u32 r0_5 = call_001284cc(r0_4, guest::cpu()->r[1]);
        u32 r0_6 = call_001288e8(r0_5, guest::cpu()->r[1]);
        u32 r0_7 = call_00128490(r0_6, guest::cpu()->r[1]);
        u32 r0_8 = call_0012b6c0(r0_7, guest::cpu()->r[1]);
        u32 r0_9 = call_0012cb84(r0_8, guest::cpu()->r[1]);
        u32 r0_10 = call_0012d3ac(r0_9, guest::cpu()->r[1]);
        u32 r0_11 = call_0012853c(r0_10, guest::cpu()->r[1]);
        u32 r0_12 = call_00127d54(r0_11, guest::cpu()->r[1]);
        u32 r0_13 = call_0012d444(r0_12, guest::cpu()->r[1]);
        u32 r0_14 = call_00127f88(r0_13, guest::cpu()->r[1]);
        u32 r0_15 = call_001285c8(r0_14, guest::cpu()->r[1]);
        call_001325e4(r0_15, guest::cpu()->r[1]);
    }
    u32 r0_16 = call_002f737c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_16 = guest::cpu()->r[1];
    if (r0_16 == 0) {
        return 1u;
    }
    u32 r0_17 = call_0012d19c(r0_16, r1_16);
    call_0012b7c4(r0_17, guest::cpu()->r[1]);
    return 1u;
}

}  // namespace d_00100608
GUEST_EXPORT_FRAMED(0x00100609, d_00100608::f_00100608, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100684 {

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline guest::global<u32, 0x00950158> global_00950158;  // (from the original)
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
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0_14 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    *global_00950148 = 0;
    call_002f73b8(r4 + 0xe5ccu, r1, guest::cpu()->r[2], r3);  // (from the original)
    call_002f747c(r4 + 0xe6d4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0012d3f4(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_3 = guest::cpu()->r[1];
    u32 r3_3 = guest::cpu()->r[3];
    if (*gptr<u32>(r4 + 0xe7e8u) != 0) {  // (from the original)
        call_002f73b8(r4 + 0xe6dcu, r1_3, guest::cpu()->r[2], r3_3);  // (from the original)
        call_002f747c(r4 + 0xe7e4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    if (*gptr<u32>(r4 + 0xe8f8u) != 0) {  // (from the original)
        call_002f73b8(r4 + 0xe7ecu, r1_3, guest::cpu()->r[2], r3_3);  // (from the original)
        call_002f747c(r4 + 0xe8f4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    if (*gptr<u32>(r4 + (0x75u << 9) + 8u) != 0) {  // (from the original)
        call_002f73b8(r4 + 0xe8fcu, r1_3, guest::cpu()->r[2], r3_3);  // (from the original)
        call_002f747c(r4 + 0xea04u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_3 = guest::cpu()->r[1];
        r3_3 = guest::cpu()->r[3];
    }
    *global_00950158 = 0;
    u32 r0_9 = r4 + 0xef94u;  // (from the original)
    u32 r0_10 = call_002f74a8(r0_9, r1_3, guest::cpu()->r[2], r3_3);
    u32 r1_7 = guest::cpu()->r[1];
    u32 r3_7 = guest::cpu()->r[3];
    if (r0_10 != 0) {
        call_002f74b0(r0_9, r1_7, guest::cpu()->r[2], r3_7);
        r1_7 = guest::cpu()->r[1];
        r3_7 = guest::cpu()->r[3];
    }
    u32 r0_11 = r4 + 0xefe0u;  // (from the original)
    u32 r0_12 = call_002f74a8(r0_11, r1_7, guest::cpu()->r[2], r3_7);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    if (r0_12 != 0) {
        call_002f74b0(r0_11, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
    }
    u32 r7 = 0xf02cu;  // (from the original)
    u32 r5 = 0u;
    do {
        u32 r0_13 = 0x4cu * r5 + r4 + r7;  // (from the original)
        r0_14 = call_002f74a8(r0_13, r1, guest::cpu()->r[2], r3);
        r1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_14 != 0) {
            r0_14 = call_002f74b0(r0_13, r1, guest::cpu()->r[2], r3);
            r1 = guest::cpu()->r[1];
            r3 = guest::cpu()->r[3];
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 2);
    u32 r0_15 = call_0012d198(r0_14, r1, guest::cpu()->r[2], r3);
    u32 r0_16 = call_002f74c8(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = call_002f74e0(0x40u, r0_16, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    if (r0_17 != 0) {
        call_0014f6fc(r0_17, r1_9, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_9 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_9;
    return 2u;
}

}  // namespace d_00100684
GUEST_EXPORT_FRAMED(0x00100685, d_00100684::f_00100684, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

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
    u32 r4_1 = r0 + 0x1976cu;  // (from the original)
    call_002f76ac(r4_1, 0x100b8du, 0x2518u, 4u);  // (from the original)
    u32 r4_2 = r4_1 + 0xffffee8au;  // (from the original)
    call_002f76ac(r4_2 + 0x30u, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    u32 r4_3 = r4_2 + 0xfffff084u;  // (from the original)
    call_002f76ac(r4_3 + 0x30u, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    u32 r0_4 = call_001389f8(r4_3 + 0xfffe898au + 0x1764au, 0x1764au, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_001389c0(r0_4 + 0xfffe89b6u + 0x17448u, 0x17448u, 0xfffe89b6u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_8 = call_001389e4(r0_6 + 0xfffe8bb8u + 0x173ecu, 0x173ecu, 0xfffe8bb8u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_002f7708(r0_8 + 0xfffe8c14u + 0x173c6u, 0x173c6u, 0xfffe8c14u, guest::cpu()->r[3]);  // (from the original)
    u32 r0_12 = call_002f7708(r0_10 + 0xfffe8c3au + 0x173a0u, 0x173a0u, 0xfffe8c3au, guest::cpu()->r[3]);  // (from the original)
    u32 r0_14 = call_001389fc(r0_12 + 0xfffe8c60u + 0x172f4u, 0x172f4u, 0xfffe8c60u, guest::cpu()->r[3]);  // (from the original)
    u32 r4_4 = r0_14 + 0xfffe8d0cu;  // (from the original)
    call_002f76ac(r4_4, 0x100b8du, 0x2518u, 0xau);  // (from the original)
    return r4_4 - 4u;
}

}  // namespace d_00100a8c
GUEST_EXPORT_FRAMED(0x00100a8d, d_00100a8c::f_00100a8c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100b80: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100b80 {


u32 f_00100b80(u32 r0) {
    return guest::call_address<u32>(0x100b8du, r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00100b80
GUEST_EXPORT(0x00100b80, d_00100b80::f_00100b80);

// f_00100b8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100b8c {

inline constexpr guest::Function<0x00139d24, u32(u32, u32)> call_00139d24;  // (from the original)
inline constexpr guest::Function<0x0013c0e4, u32(u32)> call_0013c0e4;  // (from the original)
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> call_002f76ac;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f77e8, u32(u32, u32, u32, u32)> call_002f77e8;  // (from the original)

u32 f_00100b8c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0_2 = call_002f777c(r0 + 0x249au + 0x50u, 0x249au, r2, r3);  // (from the original)
    u32 r0_4 = call_002f777c(r0_2 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_002f777c(r0_4 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_8 = call_002f777c(r0_6 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_10 = call_002f777c(r0_8 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_002f777c(r0_10 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = call_002f777c(r0_12 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_16 = call_002f777c(r0_14 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = call_002f777c(r0_16 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = call_002f777c(r0_18 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = call_002f777c(r0_20 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_24 = call_002f777c(r0_22 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_26 = call_002f777c(r0_24 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_28 = call_002f777c(r0_26 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_30 = call_002f777c(r0_28 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_32 = call_002f777c(r0_30 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_34 = call_002f777c(r0_32 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_36 = call_002f777c(r0_34 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_38 = call_002f777c(r0_36 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_40 = call_002f777c(r0_38 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_42 = call_002f777c(r0_40 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_44 = call_002f77e8(r0_42 + 0xffffdb66u + 0x2210u, 0x2210u, 0xffffdb66u, guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_44 + 0xffffddf0u;  // (from the original)
    call_002f76ac(r4_1 + 0x1810u, 0x2f77e8u, 5u << 7, 4u);  // (from the original)
    call_002f76ac(r4_1 + 0x8eeu, 0x100ccdu, 0xf2u, 0x10u);  // (from the original)
    u32 r0_48 = call_002f777c(r4_1 + 0x8eau, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_50 = call_002f777c(r0_48 + 0xfffff716u + 0x8e6u, 0x8e6u, 0xfffff716u, guest::cpu()->r[3]);  // (from the original)
    u32 r4_2 = r0_50 + 0xfffff71au;  // (from the original)
    call_002f76ac(r4_2 + 0x8d6u, 0x2f777cu, 4u, 4u);  // (from the original)
    call_002f76ac(r4_2 + 0x8c6u, 0x2f777cu, 4u, 4u);  // (from the original)
    u32 r0_54 = call_0013c0e4(r4_2 + 0x8b6u);  // (from the original)
    u32 r0_56 = call_00139d24(r0_54 + 0xfffff74au + 0x30u, 0xfffff74au);  // (from the original)
    return r0_56 - 0x30u;  // (from the original)
}

}  // namespace d_00100b8c
GUEST_EXPORT_FRAMED(0x00100b8d, d_00100b8c::f_00100b8c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100d0e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100d0e {

inline constexpr guest::Function<0x002f7951, u32(u32, u32, u32, u32)> call_002f7950;  // (from the original)

u32 f_00100d0e(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002f7950(0u, r0, r1, r2);
    return r0_1;
}

}  // namespace d_00100d0e
GUEST_EXPORT_FRAMED(0x00100d0f, d_00100d0e::f_00100d0e, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100e38: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e38 {

struct __attribute__((packed)) Local_00100e38_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00100e38_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100e38_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> call_002f7c90;  // (from the original)

void f_00100e38(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00100e38_ea_1> ea_1 = gptr<Local_00100e38_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    *frame.at<u32>(0) = r0;
    u32 r0_1 = call_002f7a2e(r1, frame.at(0).addr(), r2, 0x2f7c91u);  // (from the original)
    call_002f7c90(0u, frame.at(0).addr());
}

}  // namespace d_00100e38
GUEST_EXPORT_FRAMED(0x00100e39, d_00100e38::f_00100e38, 0x4010);  // pushes {r4, lr} first, as the original

// f_00100e5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e5c {

struct __attribute__((packed)) Local_00100e5c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00100e5c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100e5c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100e5c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00100e5c_ea_1> ea_1 = gptr<Local_00100e5c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    *frame.at<u32>(0) = r0;
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    *frame.at<u32>(4) = r0;
    u32 r0_1 = call_002f7a2e(r2, frame.at(0).addr(), r3, 0x101a95u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r1 != 0) {
        call_002f7c90(0u, frame.at(0).addr());
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00100e5c
GUEST_EXPORT_FRAMED(0x00100e5d, d_00100e5c::f_00100e5c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100e94: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100e94 {

struct __attribute__((packed)) Local_00100e94_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00100e94_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100e94_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> call_002f7ca6;  // (from the original)
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32)> call_002f7ccc;  // (from the original)

u32 f_00100e94(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00100e94_ea_1> ea_1 = gptr<Local_00100e94_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    *frame.at<u32>(0) = r0;
    if (r1 != 0) {
        r0 = (r1 << 1) + r0 - 2u;
    }
    *frame.at<u32>(4) = r0;
    u32 r0_1 = call_002f7ca6(r2, frame.at(0).addr(), r3, 0x2f7ccdu);  // (from the original)
    if (r1 != 0) {
        *frame.at<u32>(4) = *frame.at<u32>(4) + 2u;
        call_002f7ccc(0u, frame.at(0).addr());
    }
    if (r0_1 >= r1) {
        return ~0u;
    }
    return r0_1;
}

}  // namespace d_00100e94
GUEST_EXPORT_FRAMED(0x00100e95, d_00100e94::f_00100e94, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00100edc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100edc {

struct __attribute__((packed)) Local_00100edc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100edc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100edc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100edc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100edc_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00100edc_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00100edc_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100edc_ea_2, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7cdd, u32(u32, u32, u32)> call_002f7cdc;  // (from the original)

void f_00100edc(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100edc_ea_1> ea_1 = gptr<Local_00100edc_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100edc_ea_2> ea_2 = gptr<Local_00100edc_ea_2>(ea_1.addr() - 8);
    ea_2->word_0 = r4;
    ea_2->word_4 = r14;
    r13 = ea_2.addr();
    u32 r0_1 = *gptr<u32>(r13 + 8u);
    guest::cpu()->r[13] = r13;
    call_002f7cdc(r0_1, 0xaf752cu, r13 + 0xcu);  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    r13 += 4;
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00100edc
GUEST_EXPORT(0x00100edd, d_00100edc::f_00100edc);

// f_00100ef8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100ef8 {

struct __attribute__((packed)) Local_00100ef8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100ef8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00100ef8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100ef8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100ef8_ea_2, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> call_002f7c90;  // (from the original)

u32 f_00100ef8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100ef8_ea_1> ea_1 = gptr<Local_00100ef8_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100ef8_ea_2> ea_2 = gptr<Local_00100ef8_ea_2>(ea_1.addr() - 0x10);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = r0;
    u32 r0_1 = *gptr<u32>(r13 + 0x14u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f7a2e(r0_1, r13, r13 + 0x18u, 0x2f7c91u);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f7c90(0u, r13);
    u32 r4_1 = *gptr<u32>(r13 + 8);
    r13 += 0xc;  // (from the original)
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00100ef8
GUEST_EXPORT(0x00100ef9, d_00100ef8::f_00100ef8);

// f_00100f24: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100f24 {

struct __attribute__((packed)) Local_00100f24_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100f24_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00100f24_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00100f24_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00100f24_ea_2, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> call_002f7c90;  // (from the original)

void f_00100f24(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100f24_ea_1> ea_1 = gptr<Local_00100f24_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100f24_ea_2> ea_2 = gptr<Local_00100f24_ea_2>(ea_1.addr() - 0x18);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r5;
    ea_2->word_10 = r6;
    ea_2->word_14 = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = r0;
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    *gptr<u32>(r13 + 4u) = r0;
    u32 r0_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f7a2e(r0_1, r13, r13 + 0x24u, 0x101a95u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r1 != 0) {
        guest::cpu()->r[13] = r13;
        call_002f7c90(0u, r13);
        r1_2 = guest::cpu()->r[1];
    }
    u32 r4_1 = *gptr<u32>(r13 + 8);
    u32 r5_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 r6_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00100f24
GUEST_EXPORT(0x00100f25, d_00100f24::f_00100f24);

// f_00100f68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00100f68 {

struct __attribute__((packed)) Local_00100f68_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00100f68_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_1, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_00100f68_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00100f68_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_2, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_2, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00100f68_ea_2, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f7ca7, u32(u32, u32, u32, u32)> call_002f7ca6;  // (from the original)
inline constexpr guest::Function<0x002f7ccd, u32(u32, u32)> call_002f7ccc;  // (from the original)

u32 f_00100f68(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00100f68_ea_1> ea_1 = gptr<Local_00100f68_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    gptr<Local_00100f68_ea_2> ea_2 = gptr<Local_00100f68_ea_2>(ea_1.addr() - 0x18);  // (from the original)
    ea_2->word_0 = r2;
    ea_2->word_4 = r3;
    ea_2->word_8 = r4;
    ea_2->word_c = r5;
    ea_2->word_10 = r6;
    ea_2->word_14 = r14;
    r13 = ea_2.addr();
    *gptr<u32>(r13) = r0;
    if (r1 != 0) {
        r0 = (r1 << 1) + r0 - 2u;
    }
    *gptr<u32>(r13 + 4u) = r0;
    u32 r0_1 = *gptr<u32>(r13 + 0x20u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f7ca6(r0_1, r13, r13 + 0x24u, 0x2f7ccdu);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r1 != 0) {
        *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 4u) + 2u;
        guest::cpu()->r[13] = r13;
        call_002f7ccc(0u, r13);
        r1_2 = guest::cpu()->r[1];
    }
    u32 r4_1 = *gptr<u32>(r13 + 8);
    u32 r5_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 r6_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[13] = r13;
    return r0_2 < r1 ? r0_2 : ~0u;
}

}  // namespace d_00100f68
GUEST_EXPORT(0x00100f69, d_00100f68::f_00100f68);

// f_001011e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001011e4 {

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> call_002f7dac;  // (from the original)

u32 f_001011e4(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    u32 r1 = 0u;
    u32 r4 = r0 + 0x24u;  // (from the original)
    for (;;) {
        if (!((r2 | r3) != 0)) {
            break;
        }
        *gptr<u8>(r4 + r1) = u8((r2 & 7u) + 0x30u);  // (from the original)
        r1 += 1u;
        r2 = r2 >> 3 | r3 << 0x1d;  // (from the original)
        r3 >>= 3;
        guest::preempt();
    }
    u32 r4_1 = *gptr<u32>(r0);
    u32 r3_1 = 0u;
    u32 r2_1 = 0x10124cu;  // (from the original)
    if ((r4_1 << 0x1c) >> 0x1f) {  // (from the original)
        if ((r4_1 & 0x20u | r1) != 0) {  // (from the original)
            r3_1 = 1u;
            r2_1 = 0x101250u;  // (from the original)
            *gptr<u32>(r0 + 0x1cu) = *gptr<u32>(r0 + 0x1cu) - 1u;  // (from the original)
        }
    }
    u32 r0_1 = call_002f7dac(r0, r1, r2_1, r3_1);
    return r0_1;
}

}  // namespace d_001011e4
GUEST_EXPORT_FRAMED(0x001011e5, d_001011e4::f_001011e4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010125c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010125c {

struct __attribute__((packed)) Object_0010125c_0 {
    u32 word_0;
};
GUEST_OFFSET(Object_0010125c_0, word_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x002f7dad, u32(u32, u32, u32, u32)> call_002f7dac;  // (from the original)

u32 f_0010125c(gptr<Object_0010125c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    *frame.at<u32>(0) = r3;
    u32 r7 = r1;
    u32 r4 = arg0->word_0 & 0x800u ? 0x8c83ecu : 0x8c8400u;  // (from the original)
    r1 = 0u;
    u32 r5 = r0 + 0x24u;  // (from the original)
    for (;;) {
        if (!((r2 | r3) != 0)) {
            break;
        }
        *gptr<u8>(r5 + r1) = u8(u32(*gptr<u8>(r4 + (r2 & 0xfu))));  // (from the original)
        r1 += 1u;
        r2 = r2 >> 4 | r3 << 0x1c;  // (from the original)
        r3 >>= 4;
        guest::preempt();
    }
    u32 r2_1 = r4;
    u32 r3_1 = 0u;
    if ((*gptr<u32>(r0) << 0x1c) >> 0x1f) {  // (from the original)
        if (r7 == 0x70u) {  // (from the original)
            r2_1 += 0x10u;  // (from the original)
            r3_1 = 1u;
        } else if (r1 != 0) {
            r2_1 += 0x11u;  // (from the original)
            r3_1 = 2u;
        }
    }
    u32 r0_1 = call_002f7dac(r0, r1, r2_1, r3_1);
    return r0_1;
}

}  // namespace d_0010125c
GUEST_EXPORT_FRAMED(0x0010125d, d_0010125c::f_0010125c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001012f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001012f4 {

struct __attribute__((packed)) Local_001012f4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_001012f4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001012f4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001012f4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001012f4_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32)> call_002f80c8;  // (from the original)

void f_001012f4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_001012f4_ea_1> ea_1 = gptr<Local_001012f4_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    u32 ea_2 = ea_1.addr() - 4;
    *gptr<u32>(ea_2) = r14;
    r13 = ea_2 - 0x34u;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = r0;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = r0;  // (from the original)
    *gptr<u32>(r13) = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = ~0u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = 0;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = 0x1020d5;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = 0x1020f5;  // (from the original)
    u32 r1_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002f80c8(r13 + 0x24u, r1_1, r13);  // (from the original)
    r13 += 0x34u;  // (from the original)
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
}

}  // namespace d_001012f4
GUEST_EXPORT(0x001012f5, d_001012f4::f_001012f4);

// f_00101334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101334 {

inline constexpr guest::Function<0x0010211d, u32(u32, u32, u32)> call_0010211c;  // (from the original)
inline constexpr guest::Function<0x002f7a04, u32(u32, u32, u32, u32)> call_002f7a04;  // (from the original)

u32 f_00101334(u32 r0, u32 r1, u32 r2) {
    u32 r0_1 = call_002f7a04(r0, r1, r2, guest::cpu()->r[3]);
    u32 r4_1 = *gptr<u32>(r0_1);
    u32 r0_2 = call_0010211c(r0, 0u, 0xau);  // (from the original)
    *gptr<u32>(r0_1) = r4_1;
    return r0_2;
}

}  // namespace d_00101334
GUEST_EXPORT_FRAMED(0x00101335, d_00101334::f_00101334, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001013c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001013c4 {

inline constexpr guest::Function<0x0010218d, u32(u32, u32, u32, u32)> call_0010218c;  // (from the original)

u32 f_001013c4() {
    call_0010218c(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return guest::cpu()->r[0];
}

}  // namespace d_001013c4
GUEST_EXPORT_FRAMED(0x001013c5, d_001013c4::f_001013c4, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101482: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101482 {

struct __attribute__((packed)) Local_00101482_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00101482_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00101482_ea_1, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> call_002f84e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> call_002f8574;  // (from the original)

void f_00101482(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_00101482_ea_1> ea_1 = gptr<Local_00101482_ea_1>(r13 - 0x20);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r6 = r1;
    r4 = 0u;
    r13 = ea_1.addr() - 0x10u;  // (from the original)
    r7 = r4;
L_101494:;
    if (r7 != 0) {
        u32 r0_1 = *gptr<u32>(r7);
        *gptr<u32>(r13 + 0xcu) = *gptr<u32>(r7 + 4u);  // (from the original)
        *gptr<u32>(r13 + 8u) = r0_1;
    }
    u32 r1_1 = *gptr<u16>(r6);
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_002f84e8(r13, r1_1, r7, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if ((r0_3 + 1u) != 0) {
        if (*gptr<u32>(r13 + 0x10u) == 0) {  // (from the original)
            goto L_1014dc;
        }
        r1 = r0_3 + r4;
        if (r1 <= *gptr<u32>(r13 + 0x18u)) {  // (from the original)
            u32 r0_4 = *gptr<u32>(r13 + 0x10u) + r4;  // (from the original)
            guest::cpu()->r[13] = r13;
            call_002f8574(r0_4, r13, r0_3);
            r1 = guest::cpu()->r[1];
            goto L_1014dc;
        }
        if (r7 == 0) {
            goto L_1014ea;
        }
        r1 = *gptr<u32>(r13 + 0xcu);  // (from the original)
        *gptr<u32>(r7) = *gptr<u32>(r13 + 8u);
        *gptr<u32>(r7 + 4) = r1;
        goto L_1014ea;
    }
    r13 += 0x1cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return;
L_1014dc:;
    r4 += r0_3;
    if (*gptr<u16>(r6) != 0) {
        r6 += 2u;
        guest::preempt();
        goto L_101494;
    }
L_1014ea:;
    r13 += 0x1cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_1 = *gptr<u32>(r13 + 4);
    r6_1 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00101482
GUEST_EXPORT(0x00101483, d_00101482::f_00101482);

// f_0010179a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010179a {


u32 f_0010179a(u32 r0, u32 r1) {
    u32 r5 = r0;
    do {
        u32 r2 = r5;
        u32 r3 = r1;
L_1017a2:;
        u32 r0_1 = *gptr<u8>(r2);
        u32 r4_1 = *gptr<u8>(r3);
        r2 += 1u;
        r3 += 1u;
        if (r0_1 != 0 && r0_1 == r4_1) {
            guest::preempt();
            goto L_1017a2;
        }
        if (r4_1 == 0) {
            return r5;
        }
        if (r0_1 == 0) {
            return r0_1;
        }
        r5 += 1u;
        guest::preempt();
    } while (1);
}

}  // namespace d_0010179a
GUEST_EXPORT_FRAMED(0x0010179b, d_0010179a::f_0010179a, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00101800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101800 {


u32 f_00101800(u32 r0, u32 r1, u32 r2) {
    u32 r3 = r0;
    for (;;) {
        u32 cf_1 = r2 >= 1u;
        r2 -= 1u;
        if (!(cf_1)) {
            break;
        }
        *gptr<u16>(r0) = u16(u32(*gptr<u16>(r1)));
        r0 += 2u;
        if (*gptr<u16>(r1) != 0) {
            r1 += 2u;
        }
        guest::preempt();
    }
    guest::cpu()->r[1] = r1;
    return r3;
}

}  // namespace d_00101800
GUEST_EXPORT_FRAMED(0x00101801, d_00101800::f_00101800, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010181c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010181c {

inline constexpr guest::Function<0x002f8720, u32(u32, u32, u32, u32)> call_002f8720;  // (from the original)

void f_0010181c(u32 r0_unused, u32 r1_unused, u32 r2) {
    call_002f8720(guest::cpu()->r[0], guest::cpu()->r[1], r2 << 1, guest::cpu()->r[3]);
}

}  // namespace d_0010181c
GUEST_EXPORT_FRAMED(0x0010181d, d_0010181c::f_0010181c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101826: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101826 {

inline constexpr guest::Function<0x00150c2c, u32(u32, u32, u32)> call_00150c2c;  // (from the original)

void f_00101826(u32 r0_unused, u32 r1_unused, u32 r2) {
    call_00150c2c(guest::cpu()->r[0], guest::cpu()->r[1], r2 << 1);
}

}  // namespace d_00101826
GUEST_EXPORT_FRAMED(0x00101827, d_00101826::f_00101826, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101890 {


u32 f_00101890(u32 r0, u32 r1) {
    do {
        u32 r2 = 0u;
        for (;;) {
            u32 r4 = r2 << 1;
            u32 r3 = *gptr<u16>(r1 + r4);
            if (!(r3 != 0)) {
                break;
            }
            u32 r4_1 = *gptr<u16>(r0 + r4);
            if (r4_1 == 0) {
                return 0u;
            }
            if (r4_1 != r3) {
                goto L_1018b0;
            }
            r2 += 1u;
            guest::preempt();
        }
        return r0;
L_1018b0:;
        if (*gptr<u16>(r1 + (r2 << 1)) == 0) {
            return r0;
        }
        r0 += 2u;
        guest::preempt();
    } while (1);
}

}  // namespace d_00101890
GUEST_EXPORT_FRAMED(0x00101891, d_00101890::f_00101890, 0x4010);  // pushes {r4, lr} first, as the original

// f_001018bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001018bc {

struct __attribute__((packed)) Object_001018bc_2 {
    u32 word_0;
};
GUEST_OFFSET(Object_001018bc_2, word_0, 0x0);  // (from the original)


u32 f_001018bc(u32 r0, u32 r1, gptr<Object_001018bc_2> arg2) {
    u32 r3 = 0;
    u32 r5 = 0u;
    if (r0 == 0) {
        r0 = arg2->word_0;
        if (r0 == 0) {
            return r0;
        }
    }
L_1018ea:;
    u32 r6 = *gptr<u16>(r0);
    if (r6 != 0) {
        r3 = 0u;
        for (;;) {
            u32 r4 = *gptr<u16>(r1 + (r3 << 1));
            if (!(r4 != 0)) {
                break;
            }
            if (r4 == r6) {
                if (*gptr<u16>(r1 + (r3 << 1)) == 0) {
                    goto L_1018f2;
                }
                r0 += 2u;
                guest::preempt();
                goto L_1018ea;
            }
            r3 += 1u;
            guest::preempt();
        }
    } else {
        arg2->word_0 = r5;
        return 0u;
    }
L_1018f2:;
    if ((r6 & 0xffffu) == 0) {  // (from the original)
        arg2->word_0 = r5;
        return 0u;
    }
    r6 = r0;
L_1018fa:;
    r3 = 0u;
    goto L_10190c;
L_10190c:;
    u32 r4_1 = *gptr<u16>(r1 + (r3 << 1));
    if (r4_1 != 0) {
        u32 r7_1 = *gptr<u16>(r0);
        if (r4_1 == r7_1) {
            if (*gptr<u16>(r1 + (r3 << 1)) != 0) {
                if ((r7_1 & 0xffffu) == 0) {  // (from the original)
                    arg2->word_0 = r5;
                    return r6;
                }
                *gptr<u16>(r0) = u16(r5);
                arg2->word_0 = r0 + 2u;
                return r6;
            }
        } else {
            r3 += 1u;
            guest::preempt();
            goto L_10190c;
        }
    }
    r0 += 2u;
    if (*gptr<u16>(r0) != 0) {
        guest::preempt();
        goto L_1018fa;
    }
    arg2->word_0 = r5;
    return r6;
}

}  // namespace d_001018bc
GUEST_EXPORT_FRAMED(0x001018bd, d_001018bc::f_001018bc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010193a: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010193a {

struct __attribute__((packed)) Object_0010193a_0 {
    u16 half_0;
};
GUEST_OFFSET(Object_0010193a_0, half_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0010193a_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010193a_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010193a_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010193a_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002f8260, u32(u32, u32, u32)> call_002f8260;  // (from the original)

void f_0010193a(gptr<Object_0010193a_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r0 = arg0.addr();
    gptr<Local_0010193a_ea_1> ea_1 = gptr<Local_0010193a_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r1;
    ea_1->word_4 = r2;
    ea_1->word_8 = r3;
    u32 r5_1 = r0;
    u32 r4_1 = r2;
    *frame.at<u32>(0) = r0;
    if ((r0 & 3u) != 0u) {
        if (r4_1 == 0) {
            goto L_10196e;
        }
        r4_1 = r2 - 1u;
        arg0->half_0 = u16(r1);
        r5_1 += 2u;
    }
    if (r4_1 >= 2u) {
        u32 r7_1 = r4_1 >> 1 << 1;
        u32 r1_1 = r7_1 << 1;
        *frame.at<u32>(4) = r1_1;
        call_002f8260(r5_1, r1_1, r1 << 0x10 | r1);  // (from the original)
        r4_1 -= r7_1;
        r5_1 = *frame.at<u32>(4) + r5_1;
    }
L_10196e:;
    if (r4_1 != 0) {
        *gptr<u16>(r5_1) = u16(r1);
    }
}

}  // namespace d_0010193a
GUEST_EXPORT_FRAMED(0x0010193b, d_0010193a::f_0010193a, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00101978: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101978 {

inline constexpr guest::Function<0x002f8849, u32(u32, u32, u32, u32)> call_002f8848;  // (from the original)

u32 f_00101978(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r6 = r0;
    u32 r5 = 0u;
    *frame.at<u32>(0) = r1;
L_101984:;
    u32 r4_1 = r5 << 1;
    u32 r0_1 = *gptr<u16>(r6 + r4_1);
    u32 r0_2 = call_002f8848(r0_1, r1, guest::cpu()->r[2], r3);
    u32 r0_3 = *gptr<u16>(*frame.at<u32>(0) + r4_1);
    u32 r0_4 = call_002f8848(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r3 = guest::cpu()->r[3];
    u32 r0_5 = r0_2 - r0_4;
    if (r0_5 == 0) {
        r1 = *gptr<u16>(r6 + r4_1);
        if (r1 != 0) {
            r5 += 1u;
            guest::preempt();
            goto L_101984;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_5;
}

}  // namespace d_00101978
GUEST_EXPORT_FRAMED(0x00101979, d_00101978::f_00101978, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00101a00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a00 {


void f_00101a00() {
    guest::call_address<u32>(0x101a13u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_00101a00
GUEST_EXPORT(0x00101a00, d_00101a00::f_00101a00);

// f_00101a1e: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a1e {

inline constexpr guest::Function<0x001024ff, u32(u32)> call_001024fe;  // (from the original)

u32 f_00101a1e(u32 r0) {
    u32 r0_1 = call_001024fe(r0);
    return r0_1 & 1u;
}

}  // namespace d_00101a1e
GUEST_EXPORT_FRAMED(0x00101a1f, d_00101a1e::f_00101a1e, 0x4010);  // pushes {r4, lr} first, as the original

// f_00101a2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101a2c {

struct __attribute__((packed)) Local_00101a2c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00101a2c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00101a2c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7a2f, u32(u32, u32, u32, u32)> call_002f7a2e;  // (from the original)
inline constexpr guest::Function<0x002f7c91, u32(u32, u32)> call_002f7c90;  // (from the original)

u32 f_00101a2c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_00101a2c_ea_1> ea_1 = gptr<Local_00101a2c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    *frame.at<u32>(0) = r0;
    if (r1 != 0) {
        r0 = r0 + r1 - 1u;
    }
    *frame.at<u32>(4) = r0;
    u32 r0_1 = call_002f7a2e(r2, frame.at(0).addr(), r3, 0x101a95u);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    if (r1 != 0) {
        call_002f7c90(0u, frame.at(0).addr());
        r1_2 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_2;
    return r0_1;
}

}  // namespace d_00101a2c
GUEST_EXPORT_FRAMED(0x00101a2d, d_00101a2c::f_00101a2c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00101bd0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00101bd0 {

struct __attribute__((packed)) Local_00101bd0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_00101bd0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00101bd0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00101bd0_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00101bd0_ea_1, word_c, 0xc);  // (from the original)

inline constexpr guest::Function<0x002f80c9, u32(u32, u32, u32)> call_002f80c8;  // (from the original)

u32 f_00101bd0(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_00101bd0_ea_1> ea_1 = gptr<Local_00101bd0_ea_1>(r13 - 0x10);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    u32 ea_2 = ea_1.addr() - 4;
    *gptr<u32>(ea_2) = r14;
    r13 = ea_2 - 0x34u;  // (from the original)
    *gptr<u32>(r13 + 0x24u) = r0;  // (from the original)
    *gptr<u32>(r13 + 0x2cu) = r0;  // (from the original)
    *gptr<u32>(r13) = r13 + 0x40u;  // (from the original)
    *gptr<u32>(r13 + 0x28u) = ~0u;  // (from the original)
    *gptr<u32>(r13 + 0x30u) = 0;  // (from the original)
    *gptr<u32>(r13 + 0x18u) = 0x1020d5;  // (from the original)
    *gptr<u32>(r13 + 0x1cu) = 0x1020f5;  // (from the original)
    u32 r1_1 = *gptr<u32>(r13 + 0x3cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_2 = call_002f80c8(r13 + 0x24u, r1_1, r13);  // (from the original)
    r13 += 0x34u;  // (from the original)
    u32 r3_1 = *gptr<u32>(r13);
    r13 += 0x14u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_2;
}

}  // namespace d_00101bd0
GUEST_EXPORT(0x00101bd1, d_00101bd0::f_00101bd0);

// f_001024e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001024e0 {

inline constexpr guest::Function<0x002f9e18, u32(u32, u32)> call_002f9e18;  // (from the original)

u32 f_001024e0(u32 r0) {
    u32 r0_1 = call_002f9e18(0xcu, r0);  // (from the original)
    return r0_1;
}

}  // namespace d_001024e0
GUEST_EXPORT_FRAMED(0x001024e1, d_001024e0::f_001024e0, 0x4010);  // pushes {r4, lr} first, as the original

// f_001024fe: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001024fe {

inline constexpr guest::Function<0x002f7a10, u32(u32)> call_002f7a10;  // (from the original)

u32 f_001024fe(u32 r0, u32 r1) {
    u32 r1_2 = 0;
    if (r0 > 0xffu) {  // (from the original)
        return 0u;
    }
    u32 r0_1 = call_002f7a10(r0);
    u32 r0_2 = *gptr<u8>(*gptr<u32>(r0_1) + r0);
    if ((r0_2 & 0x98u) != 0 && (r0_2 & 1u) == 0u) {  // (from the original)
        r0_2 |= 1u << 0xa;  // (from the original)
    }
    if ((r0_2 & 0x21u << 5) != 0) {  // (from the original)
        r0_2 |= 1u << 0xb;  // (from the original)
    }
    if ((r0_2 & 0xbau) != 0) {  // (from the original)
        r0_2 |= 0x100u;  // (from the original)
    }
    if ((r0_2 & 0xbeu) != 0) {  // (from the original)
        r0_2 |= 1u << 9;
    }
    u32 r0_3 = !!((r0_2 << 0x1a) >> 0x1f) && !(r0_2 & 0x80u) ? r0_2 | 0x80u : r0_2 & ~0x20u;  // (from the original)
    u32 r1_1 = r0_3 << 0x1f;  // (from the original)
    if (r1_1 != 0) {
        r1_1 = r0_3 << 0x19;  // (from the original)
        if (!(r1_1 >> 0x1f)) {  // (from the original)
            r1_2 = 1u << 0xc;  // (from the original)
            guest::cpu()->r[1] = r1_2;
            return r0_3 | r1_2;
        }
    }
    if (r0 != 9u) {
        guest::cpu()->r[1] = r1_1;
        return r0_3;
    }
    r1_2 = 1u << 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    return r0_3 | r1_2;
}

}  // namespace d_001024fe
GUEST_EXPORT_FRAMED(0x001024ff, d_001024fe::f_001024fe, 0x4010);  // pushes {r4, lr} first, as the original

// f_001032ee: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001032ee {

struct __attribute__((packed)) Object_001032ee_0 {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(Object_001032ee_0, word_c, 0xc);  // (from the original)


u32 f_001032ee(gptr<Object_001032ee_0> arg0) {
    u32 r0_1 = arg0->word_c & 0x80u;  // (from the original)
    guest::cpu()->r[1] = 0x80u;  // (from the original)
    return r0_1;
}

}  // namespace d_001032ee
GUEST_EXPORT(0x001032ef, d_001032ee::f_001032ee);

// f_001032f6: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001032f6 {

struct __attribute__((packed)) Local_001032f6_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001032f6_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001032f6_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002f7a04, u32(u32)> call_002f7a04;  // (from the original)
inline constexpr guest::Function<0x002f84e9, u32(u32, u32, u32, u32)> call_002f84e8;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

u32 f_001032f6(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_001032f6_ea_1> ea_1 = gptr<Local_001032f6_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r2;
    ea_1->word_4 = r3;
    if (r2 == 0) {
        r2 = 0u;
    }
    u32 r0_2 = call_002f84e8(frame.at(0).addr(), r1, r2, r3);
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_3 = r0_2 + 1u;
    if (r0_3 == 0) {
        u32 r0_4 = call_002f7a04(r0_3);
        *gptr<u32>(r0_4) = 4;
    } else if (r0 != 0) {
        call_002f8574(r0, frame.at(0).addr(), r0_2, r3_1);
    }
    return r0_2;
}

}  // namespace d_001032f6
GUEST_EXPORT_FRAMED(0x001032f7, d_001032f6::f_001032f6, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00103334: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00103334 {

inline constexpr guest::Function<0x002f91d4, u32(u32, u32, u32, u32)> call_002f91d4;  // (from the original)
inline constexpr guest::Function<0x002fa90c, u32(u32, u32)> call_002fa90c;  // (from the original)

u32 f_00103334(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = r0;
    u32 r5 = r1;
    u32 r0_1 = call_002f91d4(r0, r1, r2, r3);
    u32 r1_1 = *gptr<u32>(r0_1);
    u32 r0_2 = *gptr<u32>(r1_1);
    if (r0_2 != 0) {
        r1 = r1_1 + r0_2;
L_103348:;
        u32 r0_3 = *gptr<u8>(r4);
        u32 r3_1 = *gptr<u8>(r5);
        r4 += 1u;
        r5 += 1u;
        u32 r2_1 = *gptr<u8>(r1 + r0_3);
        u32 r3_2 = *gptr<u8>(r1 + r3_1);
        if (r0_3 != 0 && r2_1 == r3_2) {
            guest::preempt();
            goto L_103348;
        }
        guest::cpu()->r[1] = r1;
        return r2_1 - r3_2;
    }
    u32 r0_5 = call_002fa90c(r4, r5);
    return r0_5;
}

}  // namespace d_00103334
GUEST_EXPORT_FRAMED(0x00103335, d_00103334::f_00103334, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

inline constexpr guest::Function<0x002f777c, u32(u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fc20c, u32(u32, u32, u32, u32)> call_002fc20c;  // (from the original)
inline constexpr guest::Function<0x002fc934, u32(u32, u32)> call_002fc934;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x002fe4e0, u32(u32, u32)> call_002fe4e0;  // (from the original)
inline constexpr guest::Function<0x002fe53c, u32(u32, u32)> call_002fe53c;  // (from the original)
inline constexpr guest::Function<0x002fe56c, u32(u32)> call_002fe56c;  // (from the original)
inline constexpr guest::Function<0x002fe574, u32(u32, u32)> call_002fe574;  // (from the original)
inline constexpr guest::Function<0x002fe594, u32(u32)> call_002fe594;  // (from the original)
inline constexpr guest::Function<0x002fe5c8, u32(u32, u32)> call_002fe5c8;  // (from the original)
inline constexpr guest::Function<0x002fe618, u32(u32, u32)> call_002fe618;  // (from the original)
inline constexpr guest::Function<0x002fe668, u32(u32, u32)> call_002fe668;  // (from the original)

void f_001059b4(u32 r0, u32 r1) {
    guest::StackFrame frame(0xc);  // the original's stack frame
    u32 r1_4 = 0;
    call_002fc20c(frame.at(0).addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = call_002fe4e0(r0, frame.at(0).addr());
    u32 r1_2 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        r0_2 = call_002fe53c(frame.at(0).addr(), r1_2);
        r1_2 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_4 = call_002fb328(r0_2);
            u32 r0_6 = call_002fe56c(r0_4 + 0x62232u);  // (from the original)
            call_002fc934(frame.at(4).addr(), r0_6);
            u32 r0_9 = call_002fe574(frame.at(4).addr(), frame.at(0).addr());
            if (r0_9 != 0) {
                u32 r4_1 = 3u;
                r0_2 = call_002fccdc(r0);
                if (r0_2 == 4u) {
                    r0_2 = call_002fe594(r0);
                    u32 r5_1 = r0_2;
                    if (s32(r0_2) > 0) {
                        u32 r0_10 = call_002fd068(r0_2);
                        r0_2 = call_002fe5c8(r0_10, r5_1);
                        r1_4 = guest::cpu()->r[1];
                        r4_1 -= r5_1;
                        if (s32(r4_1) <= 0) {
                            goto L_105a50;
                        }
                    }
                }
                r0_2 = call_002fd068(r0_2);
                call_002fe618(r0_2, r4_1);
                r1_4 = guest::cpu()->r[1];
            } else {
                u32 r4_2 = 3u;
                u32 r0_11 = call_002fcb84(r0, 0x35u);  // (from the original)
                if (r0_11 == 0) {
                    r0_11 = call_002fcb84(r0, 0x30u);  // (from the original)
                    if (r0_11 == 0) {
                        goto L_105a46;
                    }
                }
                r4_2 = 2u;
L_105a46:;
                r0_2 = call_002fd068(r0_11);
                call_002fe668(r0_2, r4_2);
                r1_4 = guest::cpu()->r[1];
            }
L_105a50:;
            call_002f777c(r0_2, r1_4);
            r1_2 = guest::cpu()->r[1];
        }
    }
    call_002f777c(r0_2, r1_2);
}

}  // namespace d_001059b4
GUEST_EXPORT_FRAMED(0x001059b5, d_001059b4::f_001059b4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00105d0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00105d0c {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32, u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x002fe9dc, u32(u32, u32, u32, u32)> call_002fe9dc;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)

void f_00105d0c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r1_2 = 0;
    u32 r2_2 = 0;
    u32 r3_2 = 0;
    call_002fc288(frame.at(0).addr(), r1, r2, r3);
    u32 r0_2 = call_002ff6f4(0x64u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    if (s32(r0_2) < 0x23) {  // (from the original)
        call_002fe9c8(frame.at(0).addr(), 5u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else if (s32(r0_2) < 0x37) {  // (from the original)
        call_002fe9c8(frame.at(0).addr(), 3u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else if (s32(r0_2) < 0x4b) {  // (from the original)
        call_002fe9c8(frame.at(0).addr(), 4u, 1u, 0u);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else if (s32(r0_2) < 0x5a) {  // (from the original)
        call_002fe9c8(frame.at(0).addr(), 6u, 0xau, 0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    } else {
        call_002fe9c8(frame.at(0).addr(), 0x33u, 0u, 0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_2 = guest::cpu()->r[3];
    }
    u32 r0_8 = call_002fcaf4(r1, r1_2, r2_2, r3_2);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        call_002fe9dc(frame.at(0).addr(), r1, r2_3, r3_3);
        r2_3 = guest::cpu()->r[2];
        r3_3 = guest::cpu()->r[3];
    }
    call_002fea2c(r0, frame.at(0).addr(), r2_3, r3_3);
    call_002fc8fc(r0);
}

}  // namespace d_00105d0c
GUEST_EXPORT_FRAMED(0x00105d0d, d_00105d0c::f_00105d0c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00105f54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00105f54 {

struct __attribute__((packed)) Local_00105f54_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(Local_00105f54_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00105f54_ea_1, word_1c, 0x1c);  // (from the original)

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fcb84, u32(u32, u32, u32, u32)> call_002fcb84;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002fcc14, u32(u32, u32, u32, u32)> call_002fcc14;  // (from the original)
inline constexpr guest::Function<0x002ff6a4, u32(u32, u32, u32, u32)> call_002ff6a4;  // (from the original)
inline constexpr guest::Function<0x00303134, u32(u32, u32, u32, u32)> call_00303134;  // (from the original)

void f_00105f54(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_2 = 0;
    gptr<Local_00105f54_ea_1> ea_1 = gptr<Local_00105f54_ea_1>(r13 - 0x20);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r4;
    ea_1->word_10 = r5;
    ea_1->word_14 = r6;
    ea_1->word_18 = r7;
    ea_1->word_1c = r14;
    r13 = ea_1.addr() - 8u;
    r5 = 0u;
    r7 = r0;
    r6 = r2;
    do {
        r4 = 0u;
        do {
            guest::cpu()->r[13] = r13;
            u32 r0_1 = call_00303134(r7, r4, r5, r3);
            u32 r1_1 = guest::cpu()->r[1];
            u32 r2_1 = guest::cpu()->r[2];
            u32 r3_1 = guest::cpu()->r[3];
            *gptr<u32>(r13) = r0_1;
            guest::cpu()->r[13] = r13;
            u32 r0_2 = call_002ff6a4(r0_1, r1_1, r2_1, r3_1);
            r1_2 = guest::cpu()->r[1];
            u32 r2_2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r1_3 = *gptr<u32>(r13 + 0xcu);  // (from the original)
                guest::cpu()->r[13] = r13;
                u32 r0_4 = call_002fcbb0(r13, r1_3, r2_2, r3);
                guest::cpu()->r[13] = r13;
                call_002fcc14(r7, r0_4, r4, r5);
                u32 r1_4 = guest::cpu()->r[1];
                u32 r2_3 = guest::cpu()->r[2];
                u32 r3_2 = guest::cpu()->r[3];
                guest::cpu()->r[13] = r13;
                call_002f777c(r13, r1_4, r2_3, r3_2);
                r1_2 = guest::cpu()->r[1];
                r3 = guest::cpu()->r[3];
            } else if (r6 != 0) {
                u32 r0_6 = *gptr<u32>(r13);
                guest::cpu()->r[13] = r13;
                u32 r0_7 = call_002fcb84(r0_6, 0x30u, r2_2, r3);  // (from the original)
                r1_2 = guest::cpu()->r[1];
                u32 r2_4 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_7 != 0) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = call_002fcbb0(r13, 0x35u, r2_4, r3);  // (from the original)
                    guest::cpu()->r[13] = r13;
                    call_002fcc14(r7, r0_9, r4, r5);
                    u32 r1_5 = guest::cpu()->r[1];
                    u32 r2_5 = guest::cpu()->r[2];
                    u32 r3_3 = guest::cpu()->r[3];
                    guest::cpu()->r[13] = r13;
                    call_002f777c(r13, r1_5, r2_5, r3_3);
                    r1_2 = guest::cpu()->r[1];
                    r3 = guest::cpu()->r[3];
                }
            }
            r4 += 1u;
            guest::preempt();
        } while (r4 < 0x10u);  // (from the original)
        r5 += 1u;
        guest::preempt();
    } while (r5 < 0x10u);  // (from the original)
    r13 += 0x14u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_2;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00105f54
GUEST_EXPORT(0x00105f55, d_00105f54::f_00105f54);

// f_00106318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106318 {

inline constexpr guest::Function<0x002ff8b0, u32(u32)> call_002ff8b0;  // (from the original)

u32 f_00106318() {
    u32 r0_1 = call_002ff8b0(4u);
    if (r0_1 >= 4u) {
        return 0u;
    }
    return *gptr<u8>(0x853e36u + r0_1);  // (from the original)
}

}  // namespace d_00106318
GUEST_EXPORT_FRAMED(0x00106319, d_00106318::f_00106318, 0x4010);  // pushes {r4, lr} first, as the original

// f_001063bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001063bc {

struct __attribute__((packed)) Local_001063bc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_001063bc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001063bc_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_001063bc_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_001063bc_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_001063bc_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_001063bc_ea_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002ffb15, u32(u32)> call_002ffb14;  // (from the original)

u32 f_001063bc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_001063bc_ea_1> ea_1 = gptr<Local_001063bc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r14;
    call_002ffb14(r0);
    u32 r4_1 = *frame.at<u32>(0x10);  // (from the original)
    u32 tpc_1 = *frame.at<u32>(0x14);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    return r3;
}

}  // namespace d_001063bc
GUEST_EXPORT(0x001063bd, d_001063bc::f_001063bc);

// f_001063dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001063dc {

struct __attribute__((packed)) Local_001063dc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001063dc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001063dc_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> call_002ffb48;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

u32 f_001063dc(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_001063dc_ea_1> ea_1 = gptr<Local_001063dc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r0_1 = call_002ffb48(1u, r1, r2, r3);
    call_002ffb64(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return ~0u;
}

}  // namespace d_001063dc
GUEST_EXPORT_FRAMED(0x001063dd, d_001063dc::f_001063dc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106940: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106940 {

inline constexpr guest::Function<0x002ffb15, u32(u32, u32, u32, u32)> call_002ffb14;  // (from the original)
inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

void f_00106940(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = call_002ffb14(r0, r1, r2, r3);
    u32 r5 = 0x981fd8u;  // (from the original)
    if (*gptr<u32>(r5 + 4u) > r0_1) {
        u32 r1_1 = r0_1 << 2;
        call_002ffb64(*gptr<u32>(*gptr<u32>(r5) + r1_1), r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r0 = *gptr<u32>(r5);
        u32 r4 = r0_1 + 1u;
L_10696e:;
        u32 r1_2 = r4 << 2;
        u32 r2_2 = *gptr<u32>(r0 + r1_2);
        if (r2_2 != 0 && *gptr<u32>(r5 + 4u) > r4) {
            r4 += 1u;
            *gptr<u32>(r0 + (r1_2 - 4u)) = r2_2;
            guest::preempt();
            goto L_10696e;
        }
        if (*gptr<u32>(r5 + 4u) > r4) {
            *gptr<u32>(r0 + (r4 << 2)) = 0;
        }
        return;
    }
}

}  // namespace d_00106940
GUEST_EXPORT_FRAMED(0x00106941, d_00106940::f_00106940, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00106998: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106998 {

struct __attribute__((packed)) Local_00106998_r12 {
    u8 unknown_0[0x1c];  // (not used here)
    u32 word_1c;
};
GUEST_OFFSET(Local_00106998_r12, word_1c, 0x1c);  // (from the original)

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

void f_00106998(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r5 = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    gptr<Local_00106998_r12> r12 = gptr<Local_00106998_r12>(0u);
    u32 r1_1 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    u32 r3_2 = 0;
    u32 r2_2 = 0;
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 r3_3 = 0;
    u32 r0_8 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r1_12 = 0;
    u32 r4 = r0;
    u32 r0_1 = r0 + 0x18u;  // (from the original)
    u32 r0_2 = call_003002f0(r0_1, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_2 != 0) {
        u32 r0_3 = call_0030031c(r0_1, 1u, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r2_1 = guest::cpu()->r[2];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            goto L_106ab4;
        }
    }
    r5 = 1u;
    call_00300458(r0_1, r5, r2_1, r3_1);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r6 = 0u;
    r7 = r6;
    do {
        call_002fc8e8((r6 << 2) + r4, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_5 = r4 + r6;
        r6 += 1u;
        *gptr<u8>(r0_5 + 8u) = u8(r7);
        guest::preempt();
    } while (s32(r6) < 2);
    r0_6 = frame.at(0).addr();
    call_002fc288(r0_6, r1_1, r2, r3);
    r0_7 = frame.at(0).addr();
    call_002fe9c8(r0_7, 5u, 0xb4u, 0u);  // (from the original)
    r3_2 = guest::cpu()->r[3];
    r2_2 = frame.at(0).addr();
    call_003004c4(r4, 2u, r2_2, r3_2);
    r1_2 = guest::cpu()->r[1];
    r2_3 = guest::cpu()->r[2];
    r3_3 = guest::cpu()->r[3];
    r0_8 = frame.at(0).addr();
    call_002fc8fc(r0_8, r1_2, r2_3, r3_3);
    r1 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    if (r5 != 0) {
        call_00300634(0u, 1u, r2_4, r3_4);
        *gptr<u16>(r4 + 0xeu) = 0xffff;  // (from the original)
        *gptr<u16>(r4 + 0xcu) = 0xffff;  // (from the original)
        u32 r0_10 = call_00300650(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_11 = call_002fb328(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_13 = call_003036c0(r0_11 + 0x80u + 0x6e1f4u, *frame.at<u32>(0), *frame.at<u32>(4), *frame.at<u32>(8));  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        *frame.at<u32>(0x14) = r0_13;  // (from the original)
        r6 = 1u << 0xc;  // (from the original)
L_106a2c:;
        u32 r0_15 = call_001b5d6c(frame.at(0x20).addr(), r6, r2, r3);  // (from the original)
        u32 r0_16 = call_003036c4(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_18 = call_002f6e64(frame.at(0x18).addr(), r0_16, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_003036c8(frame.at(0).addr(), r0_18, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002f6e8c(frame.at(0x18).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r2_12 = guest::cpu()->r[2];
        u32 r3_12 = guest::cpu()->r[3];
        u32 r1_8 = *frame.at<u32>(8);
        if (s32(r1_8) <= 3) {
            call_003036cc(frame.at(0).addr(), r1_8, r2_12, r3_12);
            r2_12 = guest::cpu()->r[2];
            r3_12 = guest::cpu()->r[3];
        } else {
            *gptr<u8>(*frame.at<u32>(4) + 3u) = u8(u32(*global_008c9f1c));
        }
        u32 r0_23 = call_002f6e64(frame.at(0x18).addr(), *frame.at<u32>(0x14), r2_12, r3_12);  // (from the original)
        u32 r0_25 = call_00300768(frame.at(0).addr(), r0_23, guest::cpu()->r[2], guest::cpu()->r[3]);
        call_002f6e8c(frame.at(0x18).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_11 = guest::cpu()->r[1];
        u32 r2_15 = guest::cpu()->r[2];
        u32 r3_15 = guest::cpu()->r[3];
        if (r0_25 != 0) {
            *gptr<u16>(r4 + 0xcu) = u16(r6);  // (from the original)
            call_003007fc(frame.at(0).addr(), r1_11, r2_15, r3_15);
            r1_12 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        } else {
            call_003007fc(frame.at(0).addr(), r1_11, r2_15, r3_15);
            r1_12 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            r6 += 1u;
            if (s32(r6) < s32(0x1010u)) {  // (from the original)
                guest::preempt();
                goto L_106a2c;
            }
        }
        call_004ddc94(1u, r1_12, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r5 == 0) {
            return;
        }
        r0 = 0x88f3e8u;  // (from the original)
        r2 = 0u;
        r3 = 3u;
        r12 = gptr<Local_00106998_r12>(r0);
        r6 = *gptr<u32>(r0 + 4u);
        r1 = *gptr<u32>(r0);
        do {
            r0 += 8u;
            r1 += r6;
            r6 = *gptr<u32>(r0 + 4u);
            r2 += *gptr<u32>(r0);
            r3 -= 1u;
            guest::preempt();
        } while (r3 != 0);
        u32 r1_13 = r12->word_1c;
        u32 r0_31 = call_002ff6f8(r1_13 + (r1 + r2), r1_13, r2, r3);
        r1 = 0u;
        r3 = r0_31;
        r2 = 0x88f3e8u;  // (from the original)
        *gptr<u8>(r4 + 0x14u) = 7;  // (from the original)
        r0 = r1;
        goto L_106ad8;
    }
L_106ab4:;
    guest::cpu()->r[1] = r1;
    return;
L_106ad8:;
    r1 = *gptr<u32>(r2) + r1;
    if (s32(r3) < s32(r1)) {
        *gptr<u8>(r4 + 0x14u) = u8(r0);  // (from the original)
    } else {
        r2 += 4u;
        r0 = uxtb(r0 + 1u);
        if (r0 < 8u) {
            guest::preempt();
            goto L_106ad8;
        }
    }
    if (r5 != 0) {
        r0 = 0x88f408u;  // (from the original)
        r2 = 0u;
        r3 = 3u;
        r12 = gptr<Local_00106998_r12>(r0);
        r6 = *gptr<u32>(r0 + 4u);
        r1 = *gptr<u32>(r0);
        do {
            r0 += 8u;
            r1 += r6;
            r6 = *gptr<u32>(r0 + 4u);
            r2 += *gptr<u32>(r0);
            r3 -= 1u;
            guest::preempt();
        } while (r3 != 0);
        u32 r1_14 = r12->word_1c;
        u32 r0_34 = call_002ff6f8(r1_14 + (r1 + r2), r1_14, r2, r3);
        r1 = 0u;
        r3 = r0_34;
        r2 = 0x88f408u;  // (from the original)
        *gptr<u8>(r4 + 0x15u) = 7;  // (from the original)
        r0 = r1;
L_106b24:;
        r1 = *gptr<u32>(r2) + r1;
        if (s32(r3) < s32(r1)) {
            *gptr<u8>(r4 + 0x15u) = u8(r0);  // (from the original)
        } else {
            r2 += 4u;
            r0 = uxtb(r0 + 1u);
            if (r0 < 8u) {
                guest::preempt();
                goto L_106b24;
            }
        }
        if (r5 != 0) {
            r7 = 0x88f428u;  // (from the original)
            r2 = 0u;
            r3 = 3u;
            r0 = r7;
            r5 = *gptr<u32>(r7 + 4u);
            r1 = *gptr<u32>(r7);
            do {
                r0 += 8u;
                r1 += r5;
                r5 = *gptr<u32>(r0 + 4u);
                r2 += *gptr<u32>(r0);
                r3 -= 1u;
                guest::preempt();
            } while (r3 != 0);
            u32 r1_15 = *gptr<u32>(r7 + 0x1cu);  // (from the original)
            u32 r0_37 = call_002ff6f8(r1_15 + (r1 + r2), r1_15, r2, r3);
            r1 = 0u;
            r3 = r0_37;
            r2 = 0x88f428u;  // (from the original)
            *gptr<u8>(r4 + 0x16u) = 7;  // (from the original)
            r0 = r1;
L_106b6e:;
            r1 = *gptr<u32>(r2) + r1;
            if (s32(r3) >= s32(r1)) {
                r2 += 4u;
                r0 = uxtb(r0 + 1u);
                if (r0 >= 8u) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                guest::preempt();
                goto L_106b6e;
            }
            *gptr<u8>(r4 + 0x16u) = u8(r0);  // (from the original)
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00106998
GUEST_EXPORT_FRAMED(0x00106999, d_00106998::f_00106998, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

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
inline constexpr guest::Function<0x00300800, u32(u32)> call_00300800;  // (from the original)

void f_00106bb0(gptr<Object_00106bb0_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r6 = 0u;
    arg0->word_0 = r6;
    arg0->word_4 = r6;
    arg0->word_8 = r6;
    arg0->word_c = r6;
    arg0->word_10 = r6;
    arg0->word_14 = r6;
    u32 r4 = r0;
    u32 r5 = r6;
    arg0->word_18 = r6;
    do {
        call_002fc8e8((r5 << 2) + r4, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r0_2 = r4 + r5;
        r5 += 1u;
        *gptr<u8>(r0_2 + 8u) = u8(r6);
        guest::preempt();
    } while (s32(r5) < 2);
    *gptr<u8>(r4 + 0x14u) = u8(r6);  // (from the original)
    *gptr<u8>(r4 + 0x15u) = u8(r6);  // (from the original)
    call_00300800(r4 + 0x18u);  // (from the original)
}

}  // namespace d_00106bb0
GUEST_EXPORT_FRAMED(0x00106bb1, d_00106bb0::f_00106bb0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00106bfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106bfc {

inline constexpr guest::Function<0x00300815, u32(u32)> call_00300814;  // (from the original)

u32 f_00106bfc() {
    call_00300814(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_00106bfc
GUEST_EXPORT_FRAMED(0x00106bfd, d_00106bfc::f_00106bfc, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106c0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106c0c {

inline constexpr guest::Function<0x00300815, u32(u32)> call_00300814;  // (from the original)

u32 f_00106c0c() {
    call_00300814(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_00106c0c
GUEST_EXPORT_FRAMED(0x00106c0d, d_00106c0c::f_00106c0c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00106da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00106da4 {

struct __attribute__((packed)) Local_00106da4_ea_1 {
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
GUEST_OFFSET(Local_00106da4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_00106da4_ea_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_00106da4_r1_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u16 half_10;
};
GUEST_OFFSET(Local_00106da4_r1_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00106da4_r1_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00106da4_r1_4, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00106da4_r1_4, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00106da4_r1_4, half_10, 0x10);  // (from the original)

inline guest::global<u8, 0x00952b9d> global_00952b9d;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fccdc, u32(u32, u32, u32, u32)> call_002fccdc;  // (from the original)
inline constexpr guest::Function<0x002feb00, u32(u32, u32, u32, u32)> call_002feb00;  // (from the original)
inline constexpr guest::Function<0x00300a74, u32(u32, u32, u32, u32)> call_00300a74;  // (from the original)

void f_00106da4(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_1 = 0;
    gptr<Local_00106da4_ea_1> ea_1 = gptr<Local_00106da4_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x14u;  // (from the original)
    r5 = 0u;
    r6 = r1;
    *gptr<u32>(r13 + 4u) = *gptr<u32>(r13 + 0x14u) + 0x180u;  // (from the original)
    do {
        u32 r0_1 = r5 << 2;
        u32 r4_1 = *gptr<u32>(r6 + 8u) + *gptr<u32>(0x8657acu + r0_1);  // (from the original)
        u32 r0_2 = *gptr<u32>(r6 + 0xcu) + *gptr<u32>(0x8657ccu + r0_1);  // (from the original)
        r1_1 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
        u32 r2_1 = r4_1 - 0x10u;  // (from the original)
        *gptr<u32>(r13) = r0_2;
        if (r2_1 < 0x50u && r0_2 >= 0x10u && r0_2 < 0x50u) {  // (from the original)
            u32 r0_3 = (r2_1 >> 4) + (r0_2 + (r0_2 << 2)) - 0x50u;  // (from the original)
            u32 r3_1 = r4_1 & 0xfu;  // (from the original)
            *gptr<u32>(r13 + 0xcu) = r0_3;  // (from the original)
            *gptr<u32>(r13 + 8u) = r3_1;
            r1_1 = *gptr<u16>(r1_1 + (r0_3 << 1));
            u32 r0_4 = lsl_r(1u, r3_1 & 0xff);  // (from the original)
            *gptr<u32>(r13 + 0x10u) = r0_4;  // (from the original)
            if ((r1_1 & r0_4) != 0) {
                u32 r1_2 = *gptr<u32>(r13);
                u32 r2_2 = *global_00952b9d;
                guest::cpu()->r[13] = r13;
                u32 r0_5 = call_00300a74(r4_1, r1_2, r2_2, r3_1);
                u32 r3_2 = guest::cpu()->r[3];
                u32 r1_3 = *gptr<u32>(r6 + 0xcu);  // (from the original)
                u32 r0_6 = *gptr<u32>(r6 + 8u);
                u32 r2_3 = *global_00952b9d;
                guest::cpu()->r[13] = r13;
                u32 r0_7 = call_00300a74(r0_6, r1_3, r2_3, r3_2);
                r1_1 = guest::cpu()->r[1];
                if (r0_5 == r0_7) {
                    u32 r2_4 = *gptr<u32>(r13);
                    u32 r0_8 = *gptr<u32>(r13 + 0x20u);  // (from the original)
                    guest::cpu()->r[13] = r13;
                    u32 r0_9 = call_002feb00(r0_8, r4_1, r2_4, 0u);
                    r1_1 = guest::cpu()->r[1];
                    u32 r2_5 = guest::cpu()->r[2];
                    u32 r3_3 = guest::cpu()->r[3];
                    if (r0_9 != 0) {
                        guest::cpu()->r[13] = r13;
                        u32 r0_10 = call_002fccdc(r0_9, r1_1, r2_5, r3_3);
                        u32 r2_6 = guest::cpu()->r[2];
                        u32 r3_4 = guest::cpu()->r[3];
                        r1_1 = r0_10;
                        if (r1_1 == *gptr<u32>(r13 + 0x38u)) {  // (from the original)
                            u32 r0_11 = (*gptr<u32>(*gptr<u32>(r13 + 4u)) << 2) + *gptr<u32>(r13 + 0x14u) + 0x140u;  // (from the original)
                            guest::cpu()->r[13] = r13;
                            call_002fc8e8(r0_11, r0_9, r2_6, r3_4);
                            gptr<Local_00106da4_r1_4> r1_4 = gptr<Local_00106da4_r1_4>(*gptr<u32>(*gptr<u32>(r13 + 4u)) * 0x14u + *gptr<u32>(r13 + 0x14u));  // (from the original)
                            u32 r0_12 = *gptr<u32>(r13);
                            r1_4->word_8 = r4_1;
                            r1_4->word_c = r0_12;
                            r1_4->word_4 = *gptr<u32>(r13 + 8u);
                            r1_4->word_0 = *gptr<u32>(r13 + 0xcu);  // (from the original)
                            r1_4->half_10 = u16(*gptr<u32>(r13 + 0x10u));  // (from the original)
                            r1_1 = *gptr<u32>(r13 + 4u);
                            *gptr<u32>(r1_1) = *gptr<u32>(*gptr<u32>(r13 + 4u)) + 1u;
                        }
                    }
                }
            }
        }
        r5 += 1u;
        guest::preempt();
    } while (r5 < 8u);
    r13 += 0x24u;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00106da4
GUEST_EXPORT(0x00106da5, d_00106da4::f_00106da4);

// f_00107538: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107538 {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)

void f_00107538() {
    *global_0095c210 = 0;
}

}  // namespace d_00107538
GUEST_EXPORT(0x00107539, d_00107538::f_00107538);

// f_00107544: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107544 {

struct __attribute__((packed)) Local_00107544_r0_3 {
    u16 half_0;
    u8 byte_2;
    u8 byte_3;
};
GUEST_OFFSET(Local_00107544_r0_3, half_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00107544_r0_3, byte_2, 0x2);  // (from the original)
GUEST_OFFSET(Local_00107544_r0_3, byte_3, 0x3);  // (from the original)

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)
inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301400, u32(u32, u32, u32, u32)> call_00301400;  // (from the original)

void f_00107544(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c4);  // the original's stack frame
    u32 r6_2 = 0;
    u32 r1_7 = 0;
    u32 r0_11 = 0;
    u32 r5 = r0;
    r0 = 0u;
L_10754c:;
    if ((u32(*gptr<u16>(0x1acu * r0 + r5 + 0x1aau)) & 1u) != 0) {  // (from the original)
        r0 += 1u;
        if (s32(r0) < 0xf) {  // (from the original)
            guest::preempt();
            goto L_10754c;
        }
    }
    u32 r1_1 = *global_0095c210;
    *frame.at<u32>(4) = r0;
    u32 res_2 = r0 - r1_1;
    *frame.at<u32>(8) = res_2;
    if (res_2 >> 0x1f) {  // (from the original)
        *frame.at<u32>(8) = 0;
    }
    call_003013c0(frame.at(0x14).addr(), r1_1, r2, r3);  // (from the original)
    u32 r1_2 = *frame.at<u32>(4);
    u32 r0_2 = *frame.at<u32>(8) + 1u;
    *frame.at<u32>(0) = r0_2;
    if (s32(r0_2) < s32(r1_2)) {
        *frame.at<u32>(0xc) = frame.at(0x1ba).addr();  // (from the original)
        do {
            u32 r4_1 = *frame.at<u32>(0) * 0x1acu + r5;  // (from the original)
            gptr<Local_00107544_r0_3> r0_3 = gptr<Local_00107544_r0_3>(r4_1 + 0x1a6u);  // (from the original)
            u32 r3_1 = r0_3->byte_3;
            u32 r2_1 = r0_3->byte_2;
            u32 r1_3 = r0_3->half_0;
            u32 r0_4 = call_00301400(r4_1 - 6u, r1_3, r2_1, r3_1);
            if (s32(r0_4) > 0) {
                call_002f8574(frame.at(0x14).addr(), r4_1, 0x1acu, guest::cpu()->r[3]);  // (from the original)
                u32 r7 = *frame.at<u32>(0xc);  // (from the original)
                call_002f8574(r4_1, r4_1 - 0x1acu, 0x1acu, guest::cpu()->r[3]);  // (from the original)
                u32 r3_4 = guest::cpu()->r[3];
                u32 r4 = *frame.at<u32>(0) - 1u;
                if (s32(r4) > s32(*frame.at<u32>(8))) {
                    do {
                        r6_2 = r4 - 1u;
                        u32 r3_5 = *gptr<u8>(r7 + 3u);
                        u32 r2_2 = *gptr<u8>(r7 + 2u);
                        u32 r1_4 = *gptr<u16>(r7);
                        u32 r0_6 = 0x1acu * r6_2 + r5;  // (from the original)
                        *frame.at<u32>(0x10) = r0_6;  // (from the original)
                        u32 r0_8 = call_00301400(r0_6 + 0x1a6u, r1_4, r2_2, r3_5);  // (from the original)
                        r3_4 = guest::cpu()->r[3];
                        if (s32(r0_8) <= 0) {
                            goto L_10760e;
                        }
                        call_002f8574((r4 * 0x1acu) + r5, *frame.at<u32>(0x10), 0x1acu, r3_4);  // (from the original)
                        r3_4 = guest::cpu()->r[3];
                        r4 = r6_2;
                        guest::preempt();
                    } while (s32(r6_2) > s32(*frame.at<u32>(8)));
                }
L_10760e:;
                call_002f8574((r4 * 0x1acu) + r5, frame.at(0x14).addr(), 0x1acu, r3_4);  // (from the original)
            }
            r1_7 = *frame.at<u32>(4);
            r0_11 = *frame.at<u32>(0) + 1u;
            *frame.at<u32>(0) = r0_11;
            guest::preempt();
        } while (s32(r0_11) < s32(r1_7));
    }
}

}  // namespace d_00107544
GUEST_EXPORT_FRAMED(0x00107545, d_00107544::f_00107544, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00107634: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107634 {

struct __attribute__((packed)) Local_00107634_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_00107634_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00107634_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00107634_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_00107634_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_00107634_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_00107634_ea_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_00107634(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 0xfu) {  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return;
    }
    gptr<Local_00107634_ea_1> ea_1 = gptr<Local_00107634_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r4 = r1 + 1u;
    r6 = r0;
    r7 = 0x1acu;  // (from the original)
    r0 = 0x1acu * r1 + r6;  // (from the original)
    if (s32(r4) < 0xf) {  // (from the original)
        do {
            u32 res_1 = 0x1acu * r4 + r6;  // (from the original)
            if ((u32(*gptr<u16>(0x1aau + res_1)) & 1u) == 0) {  // (from the original)
                goto L_107672;
            }
            call_002f8574(r0, res_1, r7, r3);
            r3 = guest::cpu()->r[3];
            r4 += 1u;
            r0 = res_1;
            guest::preempt();
        } while (s32(r4) < 0xf);  // (from the original)
    }
L_107672:;
    call_00301444(r0, r7);
    u32 r4_1 = *frame.at<u32>(4);
    u32 r5_1 = *frame.at<u32>(8);
    u32 r6_1 = *frame.at<u32>(0xc);  // (from the original)
    u32 r7_1 = *frame.at<u32>(0x10);  // (from the original)
    u32 tpc_1 = *frame.at<u32>(0x14);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_00107634
GUEST_EXPORT(0x00107635, d_00107634::f_00107634);

// f_0010767c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010767c {

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)

void f_0010767c() {
    *global_0095c210 = ~0u;
    guest::cpu()->r[1] = 0x95c210u;  // (from the original)
}

}  // namespace d_0010767c
GUEST_EXPORT(0x0010767d, d_0010767c::f_0010767c);

// f_00107ed0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107ed0 {

struct __attribute__((packed)) Local_00107ed0_r4_1 {
    u8 byte_0;
    u8 unknown_1[0xa];  // (not used here)
    u8 byte_b;
};
GUEST_OFFSET(Local_00107ed0_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00107ed0_r4_1, byte_b, 0xb);  // (from the original)

inline guest::global<u32, 0x0088ec08> global_0088ec08;  // (from the original)
inline guest::global<u32, 0x0088ec0c> global_0088ec0c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fbf30, u32(u32, u32)> call_002fbf30;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301df4, u32(u32, u32, u32, u32)> call_00301df4;  // (from the original)
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> call_00301ea8;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x00302204, u32(u32, u32, u32, u32)> call_00302204;  // (from the original)
inline constexpr guest::Function<0x003022a4, u32(u32, u32, u32, u32)> call_003022a4;  // (from the original)
inline constexpr guest::Function<0x003022b8, u32(u32)> call_003022b8;  // (from the original)

void f_00107ed0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c0);  // the original's stack frame
    u32 r0_1 = call_002fae84(r0, r1, r2, r3);
    gptr<Local_00107ed0_r4_1> r4_1 = gptr<Local_00107ed0_r4_1>(r0_1 + 0x6214fu);  // (from the original)
    if ((u32(r4_1->byte_0) & 1u) != 0u) {
        u32 r0_2 = u32(r4_1->byte_b) << 0x1f;  // (from the original)
        if (r0_2 == 0) {
            u32 r0_3 = call_002fb328(r0_2, 0x6214fu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r0_5 = call_00302204(r0_3 + 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            if (r0_5 != 4u) {
                u32 r0_6 = call_002fb328(r0_5, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r0_8 = call_00301df4(r0_6 + 0xa0u, r0_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                if (r0_8 != 0) {
                    u32 r1_3 = 0x57u << 8;  // (from the original)
                    u32 r0_9 = u32(*gptr<u8>(r0_8 + r1_3 + 1u)) << 0x1e;  // (from the original)
                    if (r0_9 >> 0x1f) {  // (from the original)
                        u32 r0_10 = call_002fae84(r0_9, r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);
                        u32 r0_12 = call_003013c0(frame.at(0x10).addr(), 0x6e238u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        *gptr<u32>(r0_12 + 0x1acu) = 0xfc;  // (from the original)
                        call_003022a4(0xad554cu, frame.at(0x10).addr(), *global_0088ec08, *global_0088ec0c);  // (from the original)
                        *frame.at<u32>(0) = 0;
                        *frame.at<u32>(8) = 0xad554c;  // (from the original)
                        *frame.at<u32>(4) = 0;
                        u32 r0_14 = call_00301ea8(frame.at(0x10).addr(), 0x88ec50u, 1u, r0);  // (from the original)
                        if (r0_14 != 0) {
                            call_002fbf30(r4_1.addr(), 1u);
                            call_00301f08(r0_10 + 0x6e238u, frame.at(0x10).addr());  // (from the original)
                            call_003022b8(0xad554cu);  // (from the original)
                        }
                    }
                }
            }
        }
    }
}

}  // namespace d_00107ed0
GUEST_EXPORT_FRAMED(0x00107ed1, d_00107ed0::f_00107ed0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00107f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107f84 {

inline constexpr guest::Function<0x00107ed1, u32(u32, u32, u32, u32)> call_00107ed0;  // (from the original)
inline constexpr guest::Function<0x00108019, u32(u32, u32)> call_00108018;  // (from the original)
inline constexpr guest::Function<0x001080ed, u32(u32, u32)> call_001080ec;  // (from the original)
inline constexpr guest::Function<0x001081d9, u32(u32, u32)> call_001081d8;  // (from the original)

u32 f_00107f84(u32 r0, u32 r1) {
    call_00107ed0(r1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00108018(r0, r1);
    call_001080ec(r0, r1);
    u32 r0_1 = call_001081d8(r0, r1);
    return r0_1;
}

}  // namespace d_00107f84
GUEST_EXPORT_FRAMED(0x00107f85, d_00107f84::f_00107f84, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00107fac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00107fac {

struct __attribute__((packed)) Local_00107fac_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_00107fac_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_00107fac_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_00107fac_ea_1, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301ea9, u32(u32, u32, u32, u32)> call_00301ea8;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> call_00301f08;  // (from the original)

void f_00107fac(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    if (r0 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_00107fac_ea_1> ea_1 = gptr<Local_00107fac_ea_1>(r13 - 0xc);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r14;
    r13 = ea_1.addr() - 0x1c4u;  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r1_1 = 0x6214fu;  // (from the original)
    u32 r0_2 = u32(*gptr<u8>(r0_1 + 0x80u + r1_1 + 3u)) >> 3 << 0x1f;  // (from the original)
    if (r0_2 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_3 = call_002fae84(r0_2, r1_1, r2_1, r3_1);
        u32 r2_2 = guest::cpu()->r[2];
        u32 r3_2 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        u32 r0_5 = call_003013c0(r13 + 0x10u, 0x6e238u, r2_2, r3_2);  // (from the original)
        *gptr<u32>(r0_5 + 0x1acu) = 0xfc;  // (from the original)
        *gptr<u32>(r13) = 0;
        *gptr<u32>(r13 + 4u) = 0;
        *gptr<u32>(r13 + 8u) = 0;
        guest::cpu()->r[13] = r13;
        u32 r0_7 = call_00301ea8(r13 + 0x10u, 0x10800cu, 0x10u, r1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        if (r0_7 != 0) {
            guest::cpu()->r[13] = r13;
            call_00301f08(r0_3 + 0x6e238u, r13 + 0x10u);  // (from the original)
            r1_1 = guest::cpu()->r[1];
        }
    }
    r13 += 0x1c4u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 tpc_1 = *gptr<u32>(r13 + 8);
    r13 += 0xc;  // (from the original)
    guest::cpu()->r[1] = r1_1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_00107fac
GUEST_EXPORT(0x00107fad, d_00107fac::f_00107fac);

// f_001082c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001082c8 {

inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)

void f_001082c8(u32 r0) {
    u32 r1_1 = 0;
    u32 r4 = 0u;
    u32 r6 = 0x1acu;  // (from the original)
    u32 r5 = r0;
    do {
        call_00301444(0x1acu * r4 + r5, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xf);  // (from the original)
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_001082c8
GUEST_EXPORT_FRAMED(0x001082c9, d_001082c8::f_001082c8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_001082e8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001082e8 {

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32, u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x003026f8, u32(u32, u32, u32, u32)> call_003026f8;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028b4, u32(u32, u32)> call_003028b4;  // (from the original)

u32 f_001082e8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2a0);  // the original's stack frame
    u32 r0_1 = call_002fb378(r0, r1, r2, r3);
    call_003026f8(frame.at(0x1b8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_003013c0(frame.at(0xc).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00302788(frame.at(0x1b8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0) = r0_1;
    *frame.at<u32>(8) = 0;
    call_0030279c(frame.at(0x1b8).addr(), frame.at(0xc).addr(), 0x88ec38u, 1u);  // (from the original)
    call_00301f08(r0, frame.at(0xc).addr(), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(0) = r0_1;
    *frame.at<u32>(8) = 0;
    call_0030279c(frame.at(0x1b8).addr(), frame.at(0xc).addr(), 0x88ec38u, 2u);  // (from the original)
    call_00301f08(r0, frame.at(0xc).addr(), 0x88ec38u, 2u);  // (from the original)
    call_0030289c(r0, guest::cpu()->r[1]);
    u32 r0_8 = call_003028b4(frame.at(0x1b8).addr(), guest::cpu()->r[1]);  // (from the original)
    return r0_8;
}

}  // namespace d_001082e8
GUEST_EXPORT_FRAMED(0x001082e9, d_001082e8::f_001082e8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00108354: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108354 {

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x003013c1, u32(u32, u32, u32, u32)> call_003013c0;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00301f09, u32(u32, u32)> call_00301f08;  // (from the original)
inline constexpr guest::Function<0x003026f8, u32(u32, u32, u32, u32)> call_003026f8;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028b4, u32(u32, u32)> call_003028b4;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00304438, u32(u32, u32, u32, u32)> call_00304438;  // (from the original)
inline constexpr guest::Function<0x0030443c, u32(u32, u32, u32, u32)> call_0030443c;  // (from the original)
inline constexpr guest::Function<0x00304440, u32(u32, u32, u32, u32)> call_00304440;  // (from the original)
inline constexpr guest::Function<0x00304444, u32(u32, u32, u32, u32)> call_00304444;  // (from the original)

u32 f_00108354(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2a4);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r4 = 0u;
    u32 r6 = 0x1acu;  // (from the original)
    u32 r5 = r0;
    do {
        r0_2 = call_00301444(0x1acu * r4 + r5, r6, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xf);  // (from the original)
    u32 r0_3 = call_002fb378(r0_2, r1_1, r2, r3);
    *frame.at<u32>(0) = r0_3;
    call_003026f8(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_6 = call_003013c0(frame.at(0xf8).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_7 = call_002fb328(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = call_00304438(r0_7 + 0xa0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r7_1 = 0u;
    u32 r6_1 = r7_1;
    if (r0_9 != 0) {
        u32 r0_10 = r0_9 + 0x56f0u;  // (from the original)
        u32 r0_11 = call_0030443c(r0_10, 0x56f0u, r2_5, r3_5);  // (from the original)
        r1_6 = guest::cpu()->r[1];
        r2_5 = guest::cpu()->r[2];
        r3_5 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            u32 r0_12 = call_00304440(r0_10, r1_6, r2_5, r3_5);
            r1_6 = guest::cpu()->r[1];
            r2_5 = guest::cpu()->r[2];
            r3_5 = guest::cpu()->r[3];
            r7_1 = r0_12;
            r6_1 = r1_6;
        }
    }
    call_00302788(frame.at(0x10).addr(), r1_6, r2_5, r3_5);  // (from the original)
    u32 r0_15 = call_003028f0(frame.at(0x10).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00304444(r0_15, guest::cpu()->r[1], r7_1, r6_1);
    *frame.at<u32>(4) = 0;
    *frame.at<u32>(8) = 0;
    call_0030279c(frame.at(0x10).addr(), frame.at(0xf8).addr(), 0x88ec44u, 3u);  // (from the original)
    call_00301f08(r5, frame.at(0xf8).addr());  // (from the original)
    call_0030289c(r5, guest::cpu()->r[1]);
    u32 r0_18 = call_003028b4(frame.at(0x10).addr(), guest::cpu()->r[1]);  // (from the original)
    return r0_18;
}

}  // namespace d_00108354
GUEST_EXPORT_FRAMED(0x00108355, d_00108354::f_00108354, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_001083fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_001083fc {

struct __attribute__((packed)) Local_001083fc_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_001083fc_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_001083fc_ea_1, word_4, 0x4);  // (from the original)

inline guest::global<u32, 0x0095c210> global_0095c210;  // (from the original)
inline constexpr guest::Function<0x00107545, u32(u32, u32)> call_00107544;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)

void f_001083fc(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_1 = *global_0095c210;
    if (s32(r0_1) <= 1) {
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_001083fc_ea_1> ea_1 = gptr<Local_001083fc_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r0_2 = call_002fae84(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00107544(r0_2 + 0x6e238u, 0x6e238u);  // (from the original)
    u32 r4_1 = *frame.at<u32>(0);
    u32 tpc_1 = *frame.at<u32>(4);
    guest::cpu()->r[4] = r4_1;
}

}  // namespace d_001083fc
GUEST_EXPORT(0x001083fd, d_001083fc::f_001083fc);

// f_00108434: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108434 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

u32 f_00108434() {
    call_00301d0c(guest::cpu()->r[0], 0x3013c1u, 0x1acu, 0xfu);  // (from the original)
    return guest::cpu()->r[0];
}

}  // namespace d_00108434
GUEST_EXPORT_FRAMED(0x00108435, d_00108434::f_00108434, 0x4010);  // pushes {r4, lr} first, as the original

// f_00108448: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108448 {

struct __attribute__((packed)) Object_00108448_0 {
    u8 byte_0;
};
GUEST_OFFSET(Object_00108448_0, byte_0, 0x0);  // (from the original)

inline constexpr guest::Function<0x001e4524, u32(u32, u32, u32, u32)> call_001e4524;  // (from the original)

void f_00108448(gptr<Object_00108448_0> arg0) {
    arg0->byte_0 = 0;
    call_001e4524(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00108448
GUEST_EXPORT_FRAMED(0x00108449, d_00108448::f_00108448, 0x4010);  // pushes {r4, lr} first, as the original

// f_00108a9c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108a9c {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00303018, u32(u32, u32)> call_00303018;  // (from the original)

void f_00108a9c(u32 r0) {
    u32 r1 = 0;
    u32 r4 = r0;
    call_00301444(r0, 0x8cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r6 = 0u;
    *gptr<u8>(r4) = u8(r6);
    u32 r5 = r6;
    *gptr<u8>(r4 + 1u) = u8(r6);
    do {
        call_002fc8e8((r5 << 2) + r4 + 2u, 0x95bfdcu);  // (from the original)
        r1 = guest::cpu()->r[1];
        u32 r0_2 = r4 + r5 + 0x40u;  // (from the original)
        r5 += 1u;
        *gptr<u8>(r0_2 + 0xau) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r5) < 0x12);  // (from the original)
    r5 = 0u;
    do {
        call_00303018(0x18u * r5 + r4 + 0x5cu, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 2);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00108a9c
GUEST_EXPORT_FRAMED(0x00108a9d, d_00108a9c::f_00108a9c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00108ae0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00108ae0 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fe9c8, u32(u32, u32, u32, u32)> call_002fe9c8;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32, u32)> call_003004c4;  // (from the original)

void f_00108ae0(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r4 = 0u;
    u32 r5 = r0;
    u32 r6 = r4;
    do {
        call_002fc8e8((r4 << 2) + r5 + 0x12u, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r5 + r4 + 0x20u;  // (from the original)
        r4 += 1u;
        *gptr<u8>(r0_2 + 0xau) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 6);
    call_002fc288(frame.at(0).addr(), r1_1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0xbu, 0x28u, 0u);  // (from the original)
    call_003004c4(r5 + 0x12u, 4u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0xau, 0x28u, 0u);  // (from the original)
    u32 r3_4 = guest::cpu()->r[3];
    u32 r0_9 = r5 + 0x22u;  // (from the original)
    u32 r2_4 = frame.at(0).addr();
    call_003004c4(r0_9, 2u, r2_4, r3_4);
    call_002fc8fc(r0_9, guest::cpu()->r[1], r2_4, r3_4);
}

}  // namespace d_00108ae0
GUEST_EXPORT_FRAMED(0x00108ae1, d_00108ae0::f_00108ae0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003035dd, u32(u32, u32, u32, u32)> call_003035dc;  // (from the original)

void f_00108b58(gptr<Object_00108b58_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    arg0->word_c = 0;
    arg0->word_10 = 0;
    arg0->word_14 = 0;
    arg0->word_18 = 0;
    arg0->word_1c = 0;
    arg0->word_20 = 0;
    arg0->word_24 = 0;
    arg0->word_28 = 0;
    arg0->word_2c = 0;
    call_003035dc(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00303534(arg0.addr() + 8u, 0u);
}

}  // namespace d_00108b58
GUEST_EXPORT_FRAMED(0x00108b59, d_00108b58::f_00108b58, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109614: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109614 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303cdc, u32(u32)> call_00303cdc;  // (from the original)

void f_00109614(u32 r0) {
    call_002f825c(r0, 0x9cu);  // (from the original)
    *gptr<u8>(r0 + 0x15u) = 0;  // (from the original)
    *gptr<u8>(r0 + 0x14u) = 0;  // (from the original)
    *gptr<u32>(r0 + 0x10u) = 0xa;  // (from the original)
    call_00303cdc(r0);
    call_00303cdc(r0 + 8u);
    call_00303534(r0 + 0x18u, 0u);  // (from the original)
    *gptr<u32>(r0 + 0x98u) = 0xf;  // (from the original)
}

}  // namespace d_00109614
GUEST_EXPORT_FRAMED(0x00109615, d_00109614::f_00109614, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109930 {

inline constexpr guest::Function<0x001acb90, u32(u32)> call_001acb90;  // (from the original)
inline constexpr guest::Function<0x001b1308, u32(u32)> call_001b1308;  // (from the original)
inline constexpr guest::Function<0x001b31a4, u32(u32)> call_001b31a4;  // (from the original)
inline constexpr guest::Function<0x001b7688, u32(u32)> call_001b7688;  // (from the original)
inline constexpr guest::Function<0x001c203c, u32(u32)> call_001c203c;  // (from the original)
inline constexpr guest::Function<0x001e5ba0, u32(u32)> call_001e5ba0;  // (from the original)
inline constexpr guest::Function<0x00207330, u32(u32)> call_00207330;  // (from the original)
inline constexpr guest::Function<0x00243bd0, u32(u32)> call_00243bd0;  // (from the original)
inline constexpr guest::Function<0x0029cb74, u32(u32)> call_0029cb74;  // (from the original)
inline constexpr guest::Function<0x0029cf7c, u32(u32)> call_0029cf7c;  // (from the original)
inline constexpr guest::Function<0x0029d060, u32(u32)> call_0029d060;  // (from the original)
inline constexpr guest::Function<0x002c21c4, u32(u32)> call_002c21c4;  // (from the original)
inline constexpr guest::Function<0x002e0bec, u32(u32)> call_002e0bec;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x0030459c, u32(u32)> call_0030459c;  // (from the original)
inline constexpr guest::Function<0x00304f1c, u32(u32, u32, u32, u32)> call_00304f1c;  // (from the original)
inline constexpr guest::Function<0x00304f20, u32(u32)> call_00304f20;  // (from the original)
inline constexpr guest::Function<0x00304f24, u32(u32)> call_00304f24;  // (from the original)
inline constexpr guest::Function<0x00304f28, u32(u32)> call_00304f28;  // (from the original)
inline constexpr guest::Function<0x00304f2c, u32(u32)> call_00304f2c;  // (from the original)
inline constexpr guest::Function<0x0030503c, u32(u32)> call_0030503c;  // (from the original)
inline constexpr guest::Function<0x00305040, u32(u32)> call_00305040;  // (from the original)
inline constexpr guest::Function<0x00305044, u32(u32)> call_00305044;  // (from the original)
inline constexpr guest::Function<0x00305048, u32(u32)> call_00305048;  // (from the original)
inline constexpr guest::Function<0x0030504c, u32(u32)> call_0030504c;  // (from the original)
inline constexpr guest::Function<0x00305050, u32(u32)> call_00305050;  // (from the original)
inline constexpr guest::Function<0x003317b4, u32(u32)> call_003317b4;  // (from the original)
inline constexpr guest::Function<0x004e1ac4, u32(u32)> call_004e1ac4;  // (from the original)
inline constexpr guest::Function<0x004eb268, u32(u32)> call_004eb268;  // (from the original)

void f_00109930(u32 r0) {
    call_00304f1c(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = call_0030444c(0xa82000u);  // (from the original)
    u32 r0_2 = call_00207330(r0_1);
    u32 r0_3 = call_004eb268(r0_2);
    u32 r0_4 = call_00304f20(r0_3);
    u32 r0_5 = call_001e5ba0(r0_4);
    u32 r0_6 = call_001b31a4(r0_5);
    u32 r0_7 = call_00304f24(r0_6);
    u32 r0_8 = call_00304f28(r0_7);
    u32 r0_9 = call_002fc188(r0_8);
    u32 r0_10 = call_002fc194(r0_9);
    u32 r0_11 = call_00304f2c(r0_10);
    u32 r0_12 = call_00304530(r0_11);
    u32 r0_13 = call_001c203c(r0_12);
    u32 r0_14 = call_0030459c(r0_13);
    u32 r0_15 = call_001b1308(r0_14);
    call_00243bd0(r0_15);
    call_0029cb74(0u);
    call_0029d060(0u);
    call_003317b4(0u);
    u32 r0_16 = call_0029cf7c(0u);
    u32 r0_17 = call_0030503c(r0_16);
    u32 r0_18 = call_00305040(r0_17);
    call_00305044(r0_18);
    call_002c21c4(0u);
    call_001acb90(0u);
    call_00305048(0u);
    call_001b7688(0u);
    u32 r0_19 = call_002e0bec(0u);
    u32 r0_20 = call_0030504c(r0_19);
    call_004e1ac4(r0_20);
    call_00305050(r0_20);
}

}  // namespace d_00109930
GUEST_EXPORT_FRAMED(0x00109931, d_00109930::f_00109930, 0x4010);  // pushes {r4, lr} first, as the original

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
    u32 r0_2 = call_003045a8(*global_00975338, r1, r2, r3);
    u32 r0_3 = call_00305054(0xa14b5cu, r0_2, *global_00952c64, guest::cpu()->r[3]);  // (from the original)
    u32 r0_5 = call_003045a8(*global_00975338, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_00305058(0xa8349cu, 0x887628u, r0_5, 0x20u);  // (from the original)
    u32 r0_8 = call_003045a8(*global_00975338, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_9 = call_0030505c(0xa83aecu, 0x88760cu, r0_8, 0x20u);  // (from the original)
    u32 r0_11 = call_003045a8(*global_00975338, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_12 = call_00305060(0xa8413cu, 0x8875f0u, r0_11, 0x20u);  // (from the original)
    u32 r1_4 = r0_12 & ((r0_3 & r0_6) & r0_9);
    u32 r0_13 = call_00305064(r0_12, r1_4, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_14 = r0_13 & r1_4;
    u32 r0_15 = call_00305068(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_16 = call_001de39c(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_17 = call_0030506c(r0_16, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_18 = call_00305070(r0_17, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_19 = call_00304530(r0_18, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_20 = call_001c1eb8(r0_19, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_21 = call_0030459c(r0_20, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_22 = call_001b1010(r0_21, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_23 = call_002b6580(r0_22, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_24 = call_0028edfc(r0_23, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_25 = call_00305074(r0_24, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_25 & ((((((((r0_15 & r0_14) & r0_16) & r0_17) & r0_18) & r0_20) & r0_22) & r0_23) & r0_24);
}

}  // namespace d_00109a90
GUEST_EXPORT_FRAMED(0x00109a91, d_00109a90::f_00109a90, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r3_4 = 0;
    u32 r0_11 = 0;
    u32 r0_13 = 0;
    u32 r0_14 = 0;
    u32 r3_6 = 0;
    *frame.at<u32>(0) = r3;
    u32 r0_1 = *global_0095168c;
    if (r0_1 != 0) {
        u32 r0_2 = call_00305078(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], r3);
        if (r0_2 != 0) {
            u32 r0_3 = call_001b95f4(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r0_4 = call_001b9250(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_001b85ac(r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            r3_4 = guest::cpu()->r[3];
            if (*gptr<u32>(r0 + 0x34u) == 0) {  // (from the original)
                *gptr<u32>(r0 + 0x20u) = 0x109a19;  // (from the original)
                *gptr<u32>(r0 + 0x24u) = 0x1099cd;  // (from the original)
                call_0014f704(*global_00952c3c, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
                call_00304640(r0 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                return 0u;
            }
            u32 r0_7 = *gptr<u8>(0x38u + r0);  // (from the original)
            if (r0_7 == 0) {
                return r0_7;
            }
            if (*gptr<u32>(r0 + 0x6cu) == 0) {  // (from the original)
                call_00304640(r0 + 0x40u, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);  // (from the original)
                return 0u;
            }
            u32 r0_9 = *gptr<u8>(r0 + 0x70u);  // (from the original)
            if (r0_9 == 0) {
                return r0_9;
            }
            u32 r0_10 = *global_009500e0;
            if (r0_10 == 0) {
                call_002f3398(r0_10, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
                r3_4 = guest::cpu()->r[3];
                r0_11 = *global_009500e0;
                if (r0_11 == 0) {
                    goto L_109bf0;
                }
                goto L_109bd4;
            }
            goto L_109bd4;
        }
    }
    return 0u;
L_109bd4:;
    if (*global_00981ff0 == 0) {
        call_002f341c(*global_00952c3c, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
        r3_4 = guest::cpu()->r[3];
    }
    r0_13 = frame.at(0).addr();
    r0_14 = call_003050dc(r0_13, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    r3_6 = guest::cpu()->r[3];
    if (r0_14 == 0) {
        return r0_14;
    }
    r0_11 = call_003050e0(r0_14, guest::cpu()->r[1], guest::cpu()->r[2], r3_6);
    r3_4 = guest::cpu()->r[3];
L_109bf0:;
    u32 r0_15 = call_003050e4(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], r3_4);
    call_0014f70c(r0_15, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return 1u;
}

}  // namespace d_00109b58
GUEST_EXPORT_FRAMED(0x00109b59, d_00109b58::f_00109b58, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00109c14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109c14 {

inline constexpr guest::Function<0x00109931, u32(u32, u32)> call_00109930;  // (from the original)
inline constexpr guest::Function<0x00109a91, u32(u32, u32)> call_00109a90;  // (from the original)
inline constexpr guest::Function<0x00109b59, u32(u32, u32)> call_00109b58;  // (from the original)
inline constexpr guest::Function<0x002430ac, u32(u32, u32)> call_002430ac;  // (from the original)
inline constexpr guest::Function<0x002f737c, u32(u32, u32, u32, u32)> call_002f737c;  // (from the original)
inline constexpr guest::Function<0x00304bf4, u32(u32, u32)> call_00304bf4;  // (from the original)
inline constexpr guest::Function<0x003050e8, u32(u32, u32)> call_003050e8;  // (from the original)
inline constexpr guest::Function<0x003050ec, u32(u32, u32)> call_003050ec;  // (from the original)
inline constexpr guest::Function<0x003050f0, u32(u32, u32)> call_003050f0;  // (from the original)
inline constexpr guest::Function<0x0030514c, u32(u32, u32)> call_0030514c;  // (from the original)
inline constexpr guest::Function<0x00305150, u32(u32, u32)> call_00305150;  // (from the original)

u32 f_00109c14(u32 r0) {
    u32 r1 = 0;
    u32 r4_1 = r0;
    u32 r0_1 = call_002f737c(r0, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_1 == 0) {
        u32 r0_2 = call_003050e8(r0_1, guest::cpu()->r[1]);
        u32 r0_3 = call_003050ec(r0_2, guest::cpu()->r[1]);
        u32 r0_4 = call_003050f0(r0_3, guest::cpu()->r[1]);
        r1 = r0_4;
        if ((r1 & (r0_2 & r0_3)) == 0) {
            guest::cpu()->r[1] = r1;
            return 0u;
        }
        call_00304bf4(r4_1, 0u);
    }
    u32 r0_5 = call_002f737c(r4_1, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_5 == 0) {
        call_00304bf4(r4_1, 1u);
        call_00109930(r4_1, guest::cpu()->r[1]);
        goto L_109c60;
    }
    goto L_109c60;
L_109c60:;
    u32 r0_6 = call_002f737c(r4_1, 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_6 == 0) {
        r0 = call_00109a90(r4_1, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            return r0;
        }
        call_00304bf4(r4_1, 2u);
    }
    u32 r0_7 = call_002f737c(r4_1, 3u, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_7 == 0) {
        r0 = call_00109b58(r4_1, guest::cpu()->r[1]);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            return r0;
        }
        call_00304bf4(r4_1, 3u);
    }
    u32 r0_8 = call_002f737c(r4_1, 4u, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_7 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        call_00304bf4(r4_1, 4u);
        u32 r0_9 = call_0030514c(0u, guest::cpu()->r[1]);
        call_002430ac(r0_9, guest::cpu()->r[1]);
        call_00305150(r0_9, guest::cpu()->r[1]);
        r1_7 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_7;
    return 1u;
}

}  // namespace d_00109c14
GUEST_EXPORT_FRAMED(0x00109c15, d_00109c14::f_00109c14, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00109cc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109cc4 {

inline guest::global<u32, 0x0094e4b8> global_0094e4b8;  // (from the original)
inline guest::global<u32, 0x009506cc> global_009506cc;  // (from the original)
inline guest::global<u8, 0x00957224> global_00957224;  // (from the original)
inline constexpr guest::Function<0x00304c1c, u32(u32, u32, u32, u32)> call_00304c1c;  // (from the original)
inline constexpr guest::Function<0x00304c68, u32(u32, u32, u32, u32)> call_00304c68;  // (from the original)
inline constexpr guest::Function<0x00305154, u32(u32, u32, u32, u32)> call_00305154;  // (from the original)
inline constexpr guest::Function<0x0030516c, u32(u32)> call_0030516c;  // (from the original)
inline constexpr guest::Function<0x00305170, u32(u32)> call_00305170;  // (from the original)

void f_00109cc4(gptr<ScBoot> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_6 = 0;
    u32 r1_7 = 0;
    *frame.at<u32>(0) = r3;
    if (arg0->word_34 != 4u) {
        u32 r0_1 = *global_009506cc;
        if (r0_1 == 0xbu) {  // (from the original)
            goto L_109d2a;
        }
        call_00305154(r0_1, r1, r2, r3);
        u32 r0_2 = call_00304c1c(1u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_2 == 0) {
            goto L_109d2a;
        }
        u32 r0_3 = call_00304c1c(2u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_3 == 0) {
            goto L_109d2a;
        }
        u32 r0_4 = call_00304c1c(8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        if (r0_4 == 0) {
            goto L_109d2a;
        }
        u32 r0_5 = call_00304c1c(0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        if (r0_5 == 0) {
            goto L_109d2a;
        }
        call_0030516c(r0_5);
        *frame.at<u32>(0) = 2;
        call_00304c68(0x62u, 2u, 2u, 2u);  // (from the original)
        return;
    }
    call_00305170(r0);
    *frame.at<u32>(0) = 2;
    call_00304c68(0x62u, 2u, 2u, 2u);  // (from the original)
    return;
L_109d2a:;
    if (*global_00957224 != 0) {
        r2_5 = 0u;
        r3_5 = 1u;
        *gptr<u8>(*global_0094e4b8 + (5u << 9) + 0x10u) = u8(r2_5);  // (from the original)
        *frame.at<u32>(0) = 1;
        r0_6 = 0x9cu;  // (from the original)
        r1_7 = r3_5;
    } else {
        r3_5 = 1u;
        *frame.at<u32>(0) = 1;
        r2_5 = 0u;
        r0_6 = 0x5eu;  // (from the original)
        r1_7 = r3_5;
    }
    call_00304c68(r0_6, r1_7, r2_5, r3_5);
}

}  // namespace d_00109cc4
GUEST_EXPORT_FRAMED(0x00109cc5, d_00109cc4::f_00109cc4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00109d68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109d68 {

inline constexpr guest::Function<0x00304ca4, u32(u32, u32, u32, u32)> call_00304ca4;  // (from the original)
inline constexpr guest::Function<0x003051b8, u32(u32, u32)> call_003051b8;  // (from the original)

u32 f_00109d68(u32 r0) {
    u32 r0_1 = call_003051b8(r0, 0u);
    u32 r0_3 = call_00304ca4(r0_1 + 8u, 0u, 0x540002u, 2u);  // (from the original)
    u32 r0_5 = call_00304ca4(r0_3 + 0x38u, 0u, 1u << 0x17, 0u);  // (from the original)
    u32 r0_6 = r0_5 - 0x40u;  // (from the original)
    *gptr<u8>(0x78u + r0_6) = 0;  // (from the original)
    return r0_6;
}

}  // namespace d_00109d68
GUEST_EXPORT_FRAMED(0x00109d69, d_00109d68::f_00109d68, 0x4010);  // pushes {r4, lr} first, as the original

// f_00109da8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109da8 {

inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x003004c4, u32(u32, u32, u32)> call_003004c4;  // (from the original)
inline constexpr guest::Function<0x00302944, u32(u32, u32, u32)> call_00302944;  // (from the original)
inline constexpr guest::Function<0x00302a5c, u32(u32, u32, u32)> call_00302a5c;  // (from the original)
inline constexpr guest::Function<0x00304d30, u32(u32, u32, u32)> call_00304d30;  // (from the original)
inline constexpr guest::Function<0x003051dc, u32(u32, u32, u32)> call_003051dc;  // (from the original)

void f_00109da8(u32 r0, u32 r1_unused, u32 r2) {
    guest::StackFrame frame(0x2e8);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r0_2 = 0;
    u32 r4 = 0u;
    u32 r5 = r0;
    u32 r6 = r4;
    do {
        call_002fc8e8((r4 << 2) + r5, 0x95bfdcu, r2, guest::cpu()->r[3]);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r0_2 = r5 + r4 + 0x20u;  // (from the original)
        r4 += 1u;
        *gptr<u8>(r0_2 + 0x1cu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 5);
    u32 r4_1 = 4u;
    u32 r0_3 = call_003051dc(r0_2, r1_1, r2);
    if (r0_3 != 0) {
        if (r0_3 == 1u) {
            r4_1 = 1u;
        } else if (r0_3 == 2u) {
            r4_1 = 2u;
        } else if (r0_3 == 3u) {
            r4_1 = 3u;
        }
    } else {
        r4_1 = 0u;
    }
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    call_00302944(frame.at(0).addr(), 6u, guest::cpu()->r[2]);
    call_00302944(frame.at(0).addr(), 7u, guest::cpu()->r[2]);
    call_00302a5c(frame.at(0).addr(), 0xau, guest::cpu()->r[2]);  // (from the original)
    call_00304d30(frame.at(0).addr(), r4_1, 1u);
    call_003004c4(r5, 3u, frame.at(0).addr());
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2]);
    call_00302944(frame.at(0).addr(), 9u, guest::cpu()->r[2]);
    call_00302a5c(frame.at(0).addr(), 0xau, guest::cpu()->r[2]);  // (from the original)
    call_00304d30(frame.at(0).addr(), r4_1, 1u);
    u32 r0_14 = r5 + 0xcu;  // (from the original)
    u32 r2_10 = frame.at(0).addr();
    call_003004c4(r0_14, 2u, r2_10);
    call_002fc8fc(r0_14, guest::cpu()->r[1], r2_10);
}

}  // namespace d_00109da8
GUEST_EXPORT_FRAMED(0x00109da9, d_00109da8::f_00109da8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00109ff8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00109ff8 {

inline constexpr guest::Function<0x001e0114, u32(u32, u32)> call_001e0114;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)

void f_00109ff8(u32 r0) {
    call_002f825c(r0, 0x43ccu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_001e0114(r0 + 0x4cu, guest::cpu()->r[1]);  // (from the original)
    call_00303534(r0 + 0x34u, 0u);  // (from the original)
}

}  // namespace d_00109ff8
GUEST_EXPORT_FRAMED(0x00109ff9, d_00109ff8::f_00109ff8, 0x4010);  // pushes {r4, lr} first, as the original

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
    arg0->byte_3 = u8(*gptr<u32>(guest::cpu()->r[13] + 4u));
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r2);
    arg0->byte_2 = u8(r3);
}

}  // namespace d_0010a0cc
GUEST_EXPORT_FRAMED(0x0010a0cd, d_0010a0cc::f_0010a0cc, 0x10);  // pushes {r4} first, as the original

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
    u32 r4_1 = *gptr<u32>(guest::cpu()->r[13] + 4u);
    arg0->byte_0 = u8(r1);
    arg0->byte_1 = u8(r4_1);
    arg0->byte_2 = u8(r2);
    arg0->byte_3 = u8(r3);
}

}  // namespace d_0010a0dc
GUEST_EXPORT_FRAMED(0x0010a0dd, d_0010a0dc::f_0010a0dc, 0x10);  // pushes {r4} first, as the original

// f_0010a2cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a2cc {

inline constexpr guest::Function<0x00109e65, u32(u32, u32, u32, u32)> call_00109e64;  // (from the original)
inline constexpr guest::Function<0x0010a9bd, u32(u32)> call_0010a9bc;  // (from the original)

void f_0010a2cc(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    call_00109e64(r0 + 0x9cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0010a9bc(r0 + 0x4650u);  // (from the original)
    u32 r0_4 = (r0 + 0x8b00u) + 0x32u;  // (from the original)
    frame.release();
    guest::call_address<u32>(0x10a301u, r0_4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    return;
}

}  // namespace d_0010a2cc
GUEST_EXPORT(0x0010a2cc, d_0010a2cc::f_0010a2cc);

// f_0010a400: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a400 {

inline constexpr guest::Function<0x0024ddec, u32(u32)> call_0024ddec;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00301444, u32(u32, u32, u32, u32)> call_00301444;  // (from the original)
inline constexpr guest::Function<0x00305280, u32(u32, u32)> call_00305280;  // (from the original)

void f_0010a400(u32 r0) {
    call_00301444(r0, 0x20u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00305280(r0, 0u);
    call_0024ddec(r0);
    *gptr<u8>(r0 + 2u) = 0;
    call_002fc8e8(r0 + 0x10u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r0 + 0x14u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r0 + 0x18u, 0x95bfdcu);  // (from the original)
    call_002fc8e8(r0 + 0x1cu, 0x95bfdcu);  // (from the original)
}

}  // namespace d_0010a400
GUEST_EXPORT_FRAMED(0x0010a401, d_0010a400::f_0010a400, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a44c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a44c {

struct __attribute__((packed)) Object_0010a44c_0 {
    u8 byte_0;
    u8 byte_1;
    u8 byte_2;
};
GUEST_OFFSET(Object_0010a44c_0, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010a44c_0, byte_1, 0x1);  // (from the original)
GUEST_OFFSET(Object_0010a44c_0, byte_2, 0x2);  // (from the original)

struct __attribute__((packed)) Local_0010a44c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010a44c_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010a44c_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00305280, u32(u32, u32, u32, u32)> call_00305280;  // (from the original)
inline constexpr guest::Function<0x0030556c, u32(u32, u32, u32, u32)> call_0030556c;  // (from the original)

void f_0010a44c(gptr<Object_0010a44c_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        return;
    }
    gptr<Local_0010a44c_ea_1> ea_1 = gptr<Local_0010a44c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    u32 r0_1 = arg0->byte_0;
    if (r0_1 != 0) {
        if (r0_1 != 1u || s32(r1) <= 0) {
            u32 r4_1 = *frame.at<u32>(0);
            u32 tpc_1 = *frame.at<u32>(4);
            guest::cpu()->r[4] = r4_1;
            return;
        }
        u32 r0_2 = *gptr<s8>(arg0.addr() + r0_1);
        if (s32(r0_2) <= 0) {
            u32 r4_2 = *frame.at<u32>(0);
            u32 tpc_2 = *frame.at<u32>(4);
            guest::cpu()->r[4] = r4_2;
            return;
        }
        u32 r0_3 = sxtb(r0_2 - r1);
        arg0->byte_1 = u8(r0_3);
        if (s32(r0_3) > 0) {
            u32 r4_3 = *frame.at<u32>(0);
            u32 tpc_3 = *frame.at<u32>(4);
            guest::cpu()->r[4] = r4_3;
            return;
        }
        arg0->byte_1 = 0;
        u32 r0_4 = call_002fb378(0u, r1, r2, r3);
        u32 r0_6 = call_0030556c(*gptr<u32>(r0_4), *gptr<u32>(r0_4 + 4), *gptr<u32>(r0_4 + 8), 1u);
        if (r0_6 == 0) {
            call_00305280(arg0.addr(), 2u, guest::cpu()->r[2], guest::cpu()->r[3]);
            u32 r4_4 = *frame.at<u32>(0);
            u32 tpc_4 = *frame.at<u32>(4);
            guest::cpu()->r[4] = r4_4;
            return;
        }
        arg0->byte_1 = 1;
        u32 r4_5 = *frame.at<u32>(0);
        u32 tpc_5 = *frame.at<u32>(4);
        guest::cpu()->r[4] = r4_5;
        return;
    }
    if (arg0->byte_2 == 0) {
        u32 r4_6 = *frame.at<u32>(0);
        u32 tpc_6 = *frame.at<u32>(4);
        guest::cpu()->r[4] = r4_6;
        return;
    }
    call_00305280(arg0.addr(), 1u, r2, r3);
    u32 r4_7 = *frame.at<u32>(0);
    u32 tpc_7 = *frame.at<u32>(4);
    guest::cpu()->r[4] = r4_7;
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

void f_0010a4a8(gptr<Object_0010a4a8_0> arg0) {
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    arg0->word_8 = 0;
    call_0024dea8(arg0.addr(), 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010a4a8
GUEST_EXPORT_FRAMED(0x0010a4a9, d_0010a4a8::f_0010a4a8, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010a800: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a800 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003052f0, u32(u32, u32)> call_003052f0;  // (from the original)

void f_0010a800(u32 r0) {
    u32 r1_2 = 0;
    u32 r5 = r0;
    call_002f825c(r0, 0xecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = 0u;
    u32 r6 = r4;
    do {
        call_002fc8e8((r4 << 2) + r5, 0x95bfdcu);  // (from the original)
        call_003052f0(0x2eu * r4 + r5 + 0x14u, guest::cpu()->r[1]);  // (from the original)
        call_00303534((r4 << 3) + r5 + 0xccu, 0u);  // (from the original)
        r1_2 = guest::cpu()->r[1];
        u32 r0_4 = r5 + r4;
        r4 += 1u;
        *gptr<u8>(r0_4 + 0x10u) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_0010a800
GUEST_EXPORT_FRAMED(0x0010a801, d_0010a800::f_0010a800, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010a840: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a840 {

struct __attribute__((packed)) Local_0010a840_r0_25 {
    u8 unknown_0[0x1];  // (not used here)
    u8 byte_1;
};
GUEST_OFFSET(Local_0010a840_r0_25, byte_1, 0x1);  // (from the original)

struct __attribute__((packed)) Local_0010a840_r0_27 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0010a840_r0_27, byte_0, 0x0);  // (from the original)

struct __attribute__((packed)) Local_0010a840_r0_7 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0010a840_r0_7, byte_0, 0x0);  // (from the original)

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

void f_0010a840(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x294);  // the original's stack frame
    u32 r5 = 0;
    u32 r1_5 = 0;
    u32 r2_8 = 0;
    gptr<Local_0010a840_r0_25> r0_25 = gptr<Local_0010a840_r0_25>(0u);
    u32 r6 = 0x55a6u;  // (from the original)
    u32 r7 = 0x5700u;  // (from the original)
    if (r1 != 0) {
        r5 = 0u;
        do {
            u32 r0_2 = call_002fb96c(uxtb(r5), r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                u32 r0_4 = call_002fbd54(r0_2 + r6, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 r0_6 = call_002fcaf4(r0_2 + 0x8f0eu, r1, r2, r3);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_6 == 0) {
                        gptr<Local_0010a840_r0_7> r0_7 = gptr<Local_0010a840_r0_7>(r0_2 + r7 + 0x20u);  // (from the original)
                        r2 = 0x20u;  // (from the original)
                        r1 = u32(r0_7->byte_0) | r2;
                        r0_7->byte_0 = u8(r1);
                    }
                }
            }
            r5 += 1u;
            guest::preempt();
        } while (s32(r5) < 4);
    }
    r5 = 0u;
    do {
        u32 r0_9 = call_002fb96c(uxtb(r5), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_9 != 0) {
            u32 r0_10 = r0_9 + 0x55a6u;  // (from the original)
            u32 r0_11 = call_002fbd54(r0_10, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_11 != 0) {
                u32 r0_12 = r0_9 + 0x8f0eu;  // (from the original)
                u32 r0_13 = call_002fcaf4(r0_12, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_13 == 0 && (u32(*gptr<u8>(r0_9 + 0x5720u)) >> 5 & 1u) != 0u) {  // (from the original)
                    call_002ff368(frame.at(0x10).addr(), r1, r2, r3);  // (from the original)
                    call_002fc8e8(0x95c3a8u, r0_12, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    u32 r0_16 = call_002fcbb0(frame.at(0xc).addr(), 0x227cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    *frame.at<u32>(0) = r0_16;
                    u32 r0_17 = call_002ff6f8(3u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    *frame.at<u32>(8) = 0x24e080;  // (from the original)
                    *frame.at<u32>(4) = 0xd;  // (from the original)
                    call_00305894(frame.at(0x10).addr(), 0x10a978u, r0_17 + 1u, r0_10);  // (from the original)
                    call_002f777c(frame.at(0xc).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                    call_00305898(frame.at(0x10).addr(), r0_12, 0u, guest::cpu()->r[3]);  // (from the original)
                    u32 r0_22 = call_002ff4d4(frame.at(0x10).addr(), 3u, 0u, 0u);  // (from the original)
                    u32 r1_3 = guest::cpu()->r[1];
                    u32 r2_6 = guest::cpu()->r[2];
                    u32 r3_6 = guest::cpu()->r[3];
                    if (r0_22 != 0) {
                        u32 r0_23 = call_002fcb34(r0_12, r1_3, r2_6, r3_6);
                        u32 r3_7 = guest::cpu()->r[3];
                        if (r0_23 != 0x55u) {  // (from the original)
                            u32 r0_24 = call_002fcb34(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], r3_7);
                            r1_5 = guest::cpu()->r[1];
                            r2_8 = guest::cpu()->r[2];
                            r3_7 = guest::cpu()->r[3];
                            if (r0_24 != 0x59u) {  // (from the original)
                                goto L_10a92a;
                            }
                        }
                        r1_5 = 1u;
                        r0_25 = gptr<Local_0010a840_r0_25>(r0_9 + (0x57u << 8));  // (from the original)
                        r2_8 = u32(r0_25->byte_1) | r1_5;
                        r0_25->byte_1 = u8(r2_8);
L_10a92a:;
                        call_0030589c(r0_9 + 0x8f12u, r1_5, r2_8, r3_7);  // (from the original)
                        call_002fc8e8(r0_12, 0x95bfdcu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                        r3_6 = guest::cpu()->r[3];
                        r1_3 = 0xdfu;  // (from the original)
                        gptr<Local_0010a840_r0_27> r0_27 = gptr<Local_0010a840_r0_27>(r0_9 + (0x57u << 8) + 0x20u);  // (from the original)
                        r2_6 = u32(r0_27->byte_0) & r1_3;
                        r0_27->byte_0 = u8(r2_6);
                    }
                    call_002f77e8(frame.at(0x10).addr(), r1_3, r2_6, r3_6);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
}

}  // namespace d_0010a840
GUEST_EXPORT_FRAMED(0x0010a841, d_0010a840::f_0010a840, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010a9bc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010a9bc {

struct __attribute__((packed)) Local_0010a9bc_r3_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010a9bc_r3_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010a9bc_r3_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010a9bc_r3_6, word_8, 0x8);  // (from the original)

inline guest::global<u32, 0x0088f624> global_0088f624;  // (from the original)
inline guest::global<u32, 0x0088f628> global_0088f628;  // (from the original)
inline guest::global<u32, 0x0088f62c> global_0088f62c;  // (from the original)
inline constexpr guest::Function<0x001b3f24, u32(u32, u32, u32, u32)> call_001b3f24;  // (from the original)
inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb310, u32(u32, u32, u32, u32)> call_002fb310;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x002ff6f8, u32(u32, u32, u32, u32)> call_002ff6f8;  // (from the original)
inline constexpr guest::Function<0x003058c9, u32(u32, u32, u32, u32)> call_003058c8;  // (from the original)
inline constexpr guest::Function<0x003058ec, u32(u32, u32, u32, u32)> call_003058ec;  // (from the original)

u32 f_0010a9bc(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x1c);  // the original's stack frame
    u32 r1 = 0;
    u32 r6 = 0;
    u32 r0_8 = 0;
    u32 r1_3 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_9 = 0;
    u32 r2_5 = 0;
    u32 r3_5 = 0;
    u32 r0_10 = 0;
    u32 r0_17 = 0;
    u32 r1_7 = 0;
    u32 r2_9 = 0;
    u32 r3_10 = 0;
    u32 r0_18 = 0;
    u32 r2_10 = 0;
    u32 r3_11 = 0;
    u32 r0_19 = 0;
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
    u32 r4 = 0u;
    u32 r5 = r0;
    do {
        r0 = call_001b3f24((0x87u << 4) * r4 + r5 + 0x7cu, 0x16u, r2, r3);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    r4 = 0u;
L_10a9dc:;
    u32 r0_2 = call_002fae84(r0, r1, r2, r3);
    u32 r0_3 = call_002fb310(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r0 = call_003058c8(r0_3 + 4u, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10aaec;
    }
    if (r4 < 0xau) {  // (from the original)
        u32 r0_6 = call_002fcbb0(frame.at(4).addr(), 0x2c81u, r2, r3);  // (from the original)
        *frame.at<u32>(0) = 0x78;  // (from the original)
        call_003058ec(r5, 4u, r0_6, r4);
        r0 = call_002f777c(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
    }
L_10aa14:;
    r6 = 0x88f484u;  // (from the original)
L_10aa16:;
    r0_8 = call_002fae84(r0, r1, r2, r3);
    r1_3 = guest::cpu()->r[1];
    r2_4 = guest::cpu()->r[2];
    r3_4 = guest::cpu()->r[3];
    r0_9 = call_002fb310(r0_8, r1_3, r2_4, r3_4);
    r2_5 = guest::cpu()->r[2];
    r3_5 = guest::cpu()->r[3];
    r0_10 = r0_9 + 4u;
    r0 = call_003058c8(r0_10, r4, r2_5, r3_5);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab04;
    }
    if (r4 < 0xau) {  // (from the original)
        u32 r0_11 = *gptr<u32>(r6 + 8u);
        *frame.at<u32>(0x14) = *gptr<u32>(r6 + 0xcu);  // (from the original)
        *frame.at<u32>(0x10) = r0_11;  // (from the original)
        u32 r0_12 = *global_0088f624;
        u32 r1_4 = *global_0088f628;
        u32 r2_6 = *global_0088f62c;
        gptr<Local_0010a9bc_r3_6> r3_6 = gptr<Local_0010a9bc_r3_6>(frame.at(4).addr());
        r3_6->word_0 = r0_12;
        r3_6->word_4 = r1_4;
        r3_6->word_8 = r2_6;
        u32 r0_13 = call_002ff6f8(3u, r1_4, r2_6, r3_6.addr() + 0xc);  // (from the original)
        u32 r1_5 = *gptr<u16>(frame.at(0x10).addr() + (r0_13 << 1));  // (from the original)
        u32 r0_15 = call_002fcbb0(frame.at(0x18).addr(), r1_5, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        *frame.at<u32>(0) = *gptr<u32>(frame.at(4).addr() + (r0_13 << 2));
        call_003058ec(r5, 5u, r0_15, r4);
        r0 = call_002f777c(frame.at(0x18).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
    }
L_10aa70:;
    r0_17 = call_002fae84(r0, r1, r2, r3);
    r1_7 = guest::cpu()->r[1];
    r2_9 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    r0_18 = call_002fb310(r0_17, r1_7, r2_9, r3_10);
    r2_10 = guest::cpu()->r[2];
    r3_11 = guest::cpu()->r[3];
    r0_19 = r0_18 + 4u;
    r0 = call_003058c8(r0_19, r4, r2_10, r3_11);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab0c;
    }
    if (r4 < 0xau) {  // (from the original)
        u32 r0_21 = call_002fcbb0(frame.at(4).addr(), 0x2c59u, r2, r3);  // (from the original)
        *frame.at<u32>(0) = 0x1f4;  // (from the original)
        call_003058ec(r5, 6u, r0_21, r4);
        r0 = call_002f777c(frame.at(4).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
    }
L_10aaaa:;
    r0_23 = call_002fae84(r0, r1, r2, r3);
    r1_9 = guest::cpu()->r[1];
    r2_12 = guest::cpu()->r[2];
    r3_13 = guest::cpu()->r[3];
    r0_24 = call_002fb310(r0_23, r1_9, r2_12, r3_13);
    r2_13 = guest::cpu()->r[2];
    r3_14 = guest::cpu()->r[3];
    r0_25 = r0_24 + 4u;
    r0 = call_003058c8(r0_25, r4, r2_13, r3_14);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0 == 0) {
        goto L_10ab14;
    }
    if (r4 >= 0xau) {  // (from the original)
        return r0;
    }
    r1_10 = *gptr<u32>(r6 + 0x14u);  // (from the original)
    *frame.at<u32>(4) = *gptr<u32>(r6 + 0x10u);  // (from the original)
    *frame.at<u32>(8) = r1_10;
    r0_26 = call_002ff6f8(3u, r1_10, r2, r3);
    r2_14 = guest::cpu()->r[2];
    r3_15 = guest::cpu()->r[3];
    r1_11 = *gptr<u16>(frame.at(4).addr() + (r0_26 << 1));
    r0_27 = frame.at(0xc).addr();  // (from the original)
    r0_28 = call_002fcbb0(r0_27, r1_11, r2_14, r3_15);
    *frame.at<u32>(0) = 0x19u << 5;  // (from the original)
    goto L_10aaee;
L_10aaec:;
    goto L_10aafc;
L_10aaee:;
    call_003058ec(r5, 7u, r0_28, r4);
    r1_12 = guest::cpu()->r[1];
    r2_15 = guest::cpu()->r[2];
    r3_16 = guest::cpu()->r[3];
    r0_29 = frame.at(0xc).addr();  // (from the original)
    r0 = call_002f777c(r0_29, r1_12, r2_15, r3_16);
    r1 = guest::cpu()->r[1];
    return r0;
L_10aafc:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aa14;
    }
    r4 += 1u;
    guest::preempt();
    goto L_10a9dc;
L_10ab04:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aa70;
    }
    r4 += 1u;
    guest::preempt();
    goto L_10aa16;
L_10ab0c:;
    if (r4 >= 0xau) {  // (from the original)
        guest::preempt();
        goto L_10aaaa;
    }
    r4 += 1u;
    guest::preempt();
    goto L_10aa70;
L_10ab14:;
    if (r4 >= 0xau) {  // (from the original)
        guest::cpu()->r[1] = r1;
        return r0;
    }
    r4 += 1u;
    guest::preempt();
    goto L_10aaaa;
}

}  // namespace d_0010a9bc
GUEST_EXPORT_FRAMED(0x0010a9bd, d_0010a9bc::f_0010a9bc, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010ab2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010ab2c {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32, u32, u32)> call_002fc8e8;  // (from the original)
inline constexpr guest::Function<0x002fcbb0, u32(u32, u32, u32, u32)> call_002fcbb0;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x003059f8, u32(u32, u32, u32, u32)> call_003059f8;  // (from the original)

void f_0010ab2c(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r1_4 = 0;
    *frame.at<u32>(0) = r3;
    u32 r5 = r0;
    call_002f825c(r0, 0x441cu, r2, r3);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x2085u;  // (from the original)
    u32 r4 = 0u;
    u32 r6 = r4 - 1u;
    do {
        u32 r0_2 = call_002fcbb0(frame.at(0).addr(), r7, r2, r3);
        call_002fc8e8((r4 << 2) + r5 + 0x14u, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_002f777c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        *gptr<u8>(r5 + r4 + 0x34u) = u8(r6);  // (from the original)
        call_00303534((r4 << 3) + r5 + 0x3cu, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        call_003059f8((0x87u << 4) * r4 + r5 + 0x7cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 8);
    r6 = 0x7ffeu;  // (from the original)
    r4 = 0u;
    do {
        u32 r0_8 = call_002fcbb0(frame.at(0).addr(), r6, r2, r3);
        u32 r2_5 = (r4 << 2) + r5;
        call_002fc8e8(r2_5, r0_8, r2_5, guest::cpu()->r[3]);
        call_002f777c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 5);
    r6 = 0x43fcu;  // (from the original)
    r4 = 0u;
    do {
        call_00303534((r4 << 3) + r5 + r6, 0u, r2, r3);
        r1_4 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    guest::cpu()->r[1] = r1_4;
}

}  // namespace d_0010ab2c
GUEST_EXPORT_FRAMED(0x0010ab2d, d_0010ab2c::f_0010ab2c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010abc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010abc8 {

struct __attribute__((packed)) Local_0010abc8_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010abc8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010abc8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010abc8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010abc8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010abc8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010abc8_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0010abc8_r0_9 {
    u8 unknown_0[0x15];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_0010abc8_r0_9, byte_15, 0x15);  // (from the original)

inline constexpr guest::Function<0x002fb96c, u32(u32, u32, u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x002fbd54, u32(u32, u32, u32, u32)> call_002fbd54;  // (from the original)
inline constexpr guest::Function<0x002fd068, u32(u32, u32, u32, u32)> call_002fd068;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32, u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305940, u32(u32, u32, u32, u32)> call_00305940;  // (from the original)
inline constexpr guest::Function<0x00305a40, u32(u32, u32, u32, u32)> call_00305a40;  // (from the original)

void f_0010abc8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return;
    }
    gptr<Local_0010abc8_ea_1> ea_1 = gptr<Local_0010abc8_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r4 = 0u;
    r6 = r0;
    r7 = 0x43fcu;  // (from the original)
    do {
        u32 r0_2 = call_002fb96c(uxtb(r4), r1, r2, r3);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            u32 r0_4 = call_002fbd54(r0_2 + 0x55a6u, guest::cpu()->r[1], r2_1, r3_1);  // (from the original)
            r2_1 = guest::cpu()->r[2];
            r3_1 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                u32 r0_5 = (r4 << 3) + r6 + r7;
                *frame.at<u32>(0) = r0_5;
                u32 r0_6 = call_00303660(r0_5, guest::cpu()->r[1], r2_1, r3_1);
                r2_1 = guest::cpu()->r[2];
                r3_1 = guest::cpu()->r[3];
                if (r0_6 != 0) {
                    u32 r0_8 = call_00303660(*frame.at<u32>(0), guest::cpu()->r[1], r2_1, r3_1);
                    call_00305a40(r0_2, r0_8, guest::cpu()->r[2], guest::cpu()->r[3]);
                    gptr<Local_0010abc8_r0_9> r0_9 = gptr<Local_0010abc8_r0_9>(r0_2 + (0x57u << 8));  // (from the original)
                    u32 r2_3 = u32(r0_9->byte_15) | 0x80u;  // (from the original)
                    r0_9->byte_15 = u8(r2_3);
                    u32 r0_11 = call_00303660(r0_2 + 0x6b8cu, 0x80u, r2_3, guest::cpu()->r[3]);  // (from the original)
                    u32 r0_12 = call_002fd068(r0_11, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    call_00305940(r0_12, r4, r0_11, guest::cpu()->r[3]);
                    r2_1 = guest::cpu()->r[2];
                    r3_1 = guest::cpu()->r[3];
                }
            }
        }
        call_00303534((r4 << 3) + r6 + r7, 0u, r2_1, r3_1);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 4);
    u32 r4_1 = *frame.at<u32>(4);
    u32 r5_1 = *frame.at<u32>(8);
    u32 r6_1 = *frame.at<u32>(0xc);  // (from the original)
    u32 r7_1 = *frame.at<u32>(0x10);  // (from the original)
    u32 tpc_1 = *frame.at<u32>(0x14);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
}

}  // namespace d_0010abc8
GUEST_EXPORT(0x0010abc9, d_0010abc8::f_0010abc8);

// f_0010ac50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010ac50 {

inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)

void f_0010ac50(u32 r0, u32 r1) {
    call_002fc8e8(r0, r1);
    call_002fc8e8(r0 + 4u, r1 + 4u);
    call_002fc8e8(r0 + 8u, r1 + 8u);
    call_002fc8e8(r0 + 0xcu, r1 + 0xcu);  // (from the original)
    call_002fc8e8(r0 + 0x10u, r1 + 0x10u);  // (from the original)
    call_002fc8e8(r0 + 0x14u, r1 + 0x14u);  // (from the original)
    call_002fc8e8(r0 + 0x18u, r1 + 0x18u);  // (from the original)
    call_002fc8e8(r0 + 0x1cu, r1 + 0x1cu);  // (from the original)
    u32 r1_8 = *gptr<u8>(r1 + 0x20u);  // (from the original)
    *gptr<u8>(0x20u + r0) = u8(r1_8);  // (from the original)
    guest::cpu()->r[1] = r1_8;
}

}  // namespace d_0010ac50
GUEST_EXPORT_FRAMED(0x0010ac51, d_0010ac50::f_0010ac50, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010af10: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010af10 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32)> call_003035a4;  // (from the original)
inline constexpr guest::Function<0x00305b74, u32(u32, u32, u32)> call_00305b74;  // (from the original)
inline constexpr guest::Function<0x00305b78, u32(u32, u32, u32)> call_00305b78;  // (from the original)

void f_0010af10(u32 r0, u32 r1, u32 r2) {
    u32 r0_9 = 0;
    u32 r5_1 = r1;
    if (r1 != 0) {
        if (r5_1 != 1u) {
            *gptr<u8>(r0) = u8(r5_1);
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r0_1 = call_002fae84(r0, r1, r2, guest::cpu()->r[3]);
        u32 r0_3 = call_00305b74(r0_1 + 0x6ae38u, 0x6ae38u, guest::cpu()->r[2]);  // (from the original)
        u32 r0_4 = call_002fae84(r0_3, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r0_6 = call_00305b78(r0_4 + 0x6214fu, 1u, 0x6214fu);  // (from the original)
        u32 r0_7 = call_002fae84(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        call_003035a4(r0_7 + 0x7170cu, 8u);  // (from the original)
        r1 = guest::cpu()->r[1];
        r0_9 = 7u;
    } else {
        r0_9 = 0u;
    }
    *gptr<u8>(r0 + 0x11u) = u8(r0_9);  // (from the original)
    *gptr<u8>(r0) = u8(r5_1);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0010af10
GUEST_EXPORT_FRAMED(0x0010af11, d_0010af10::f_0010af10, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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
    u32 r2_1 = arg0->byte_0;
    if (r2_1 == 0 || r2_1 != 1u || s32(r1) <= 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r2_2 = arg0->byte_11;
    if (r2_2 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    if (s32(r2_2) <= s32(r1)) {
        arg0->byte_11 = 0;
        guest::cpu()->r[1] = 0u;
        return;
    }
    u32 r1_1 = r2_2 - r1;
    arg0->byte_11 = u8(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0010af72
GUEST_EXPORT(0x0010af73, d_0010af72::f_0010af72);

// f_0010b1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b1e4 {

inline constexpr guest::Function<0x0013366c, u32(u32, u32, u32, u32)> call_0013366c;  // (from the original)
inline constexpr guest::Function<0x002fc8e8, u32(u32, u32)> call_002fc8e8;  // (from the original)

u32 f_0010b1e4(u32 r0, u32 r1) {
    u32 r0_2 = 0;
    u32 r1_1 = 0;
    u32 r5 = r0;
    call_0013366c(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc8e8(r5, 0x95bfdcu);  // (from the original)
    u32 r4 = 0u;
    do {
        r0_2 = call_002fc8e8((r4 << 2) + r5 + 4u, 0x95bfdcu);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 2);
    guest::cpu()->r[1] = r1_1;
    return r0_2;
}

}  // namespace d_0010b1e4
GUEST_EXPORT_FRAMED(0x0010b1e5, d_0010b1e4::f_0010b1e4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

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

void f_0010b210(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r1_12 = 0;
    u32 r2_18 = 0;
    u32 r3_18 = 0;
    u32 r0_28 = 0;
    u32 r5 = 0u;
    u32 r4 = r0;
    u32 r6 = r5;
    do {
        call_002fc8e8((r5 << 2) + r4 + 0x12u, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r4 + r5 + 0x20u;  // (from the original)
        r5 += 1u;
        *gptr<u8>(r0_2 + 0x1eu) = u8(r6);  // (from the original)
        guest::preempt();
    } while (s32(r5) < 0xb);  // (from the original)
    call_002fc288(frame.at(0).addr(), r1_1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 5u, 0x1cu, 0u);  // (from the original)
    u32 r0_5 = call_00305cb4(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003004c4(r4 + 0x12u, r0_5, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc2a4(frame.at(0).addr(), 0x2cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_10 = call_00305cb8(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003004c4(r4 + 0x16u, r0_10, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_00302944(frame.at(0).addr(), 0x37u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_15 = call_00305cbc(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003004c4(r4 + 0x1eu, r0_15, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r5 = 0u;
    u32 r0_18 = call_00305ffc(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_18 >= 0u && r0_18 != 0) {
        r6 = 0x200bu;  // (from the original)
        u32 r7 = r6 + 2u;
        do {
            u32 r0_19 = call_002ff6f8(2u, r1, r2, r3);
            u32 r2_15 = guest::cpu()->r[2];
            u32 r3_15 = guest::cpu()->r[3];
            if (r0_19 == 0) {
                u32 r0_21 = call_002fcbb0(frame.at(0).addr(), r6, r2_15, r3_15);
                call_002fc8e8((r5 << 2) + r4 + 0x26u, r0_21, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                call_002f777c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_12 = guest::cpu()->r[1];
                r2_18 = guest::cpu()->r[2];
                r3_18 = guest::cpu()->r[3];
            } else {
                u32 r0_25 = call_002fcbb0(frame.at(0).addr(), r7, r2_15, r3_15);
                call_002fc8e8((r5 << 2) + r4 + 0x26u, r0_25, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
                call_002f777c(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                r1_12 = guest::cpu()->r[1];
                r2_18 = guest::cpu()->r[2];
                r3_18 = guest::cpu()->r[3];
            }
            r5 += 1u;
            r0_28 = call_00305ffc(r4, r1_12, r2_18, r3_18);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_28 > r5);
    }
    call_002fc288(frame.at(0).addr(), r1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0x38u, 0xadu, 0u);  // (from the original)
    u32 r0_31 = call_00305d94(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003004c4(r4 + 0x2au, r0_31, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x36u, 0x29u, 0u);  // (from the original)
    u32 r0_36 = call_00305d98(r4, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_003004c4(r4 + 0x32u, r0_36, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r2_28 = guest::cpu()->r[2];
    u32 r0_39 = call_00305d9c(r4, guest::cpu()->r[1], r2_28, guest::cpu()->r[3]);
    u32 r1_20 = guest::cpu()->r[1];
    u32 r3_29 = guest::cpu()->r[3];
    if (r0_39 != 0) {
        u32 r0_41 = call_002fcbb0(frame.at(0).addr(), 0x202bu, r2_28, r3_29);  // (from the original)
        u32 r0_42 = r4 + 0x3au;  // (from the original)
        call_002fc8e8(r0_42, r0_41, r2_28, r3_29);
        call_002f777c(r0_42, guest::cpu()->r[1], r2_28, r3_29);
        r1_20 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_20;
}

}  // namespace d_0010b210
GUEST_EXPORT_FRAMED(0x0010b211, d_0010b210::f_0010b210, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010b390: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b390 {

inline constexpr guest::Function<0x002f825c, u32(u32, u32, u32, u32)> call_002f825c;  // (from the original)
inline constexpr guest::Function<0x00303534, u32(u32, u32)> call_00303534;  // (from the original)
inline constexpr guest::Function<0x0030608d, u32(u32, u32)> call_0030608c;  // (from the original)

void f_0010b390(u32 r0) {
    call_002f825c(r0, 0x4cu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00303534(r0 + 8u, 0u);
    call_0030608c(r0, 0u);
}

}  // namespace d_0010b390
GUEST_EXPORT_FRAMED(0x0010b391, d_0010b390::f_0010b390, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010b3b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b3b0 {

struct __attribute__((packed)) Object_0010b3b0_0 {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not used here)
    u8 byte_10;
};
GUEST_OFFSET(Object_0010b3b0_0, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010b3b0_0, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0010b3b0_0, byte_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0010b3b0_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010b3b0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010b3b0_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x00305da0, u32(u32, u32, u32)> call_00305da0;  // (from the original)
inline constexpr guest::Function<0x0030608d, u32(u32, u32, u32, u32)> call_0030608c;  // (from the original)

void f_0010b3b0(gptr<Object_0010b3b0_0> arg0, u32 r1) {
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r0_2 = 0;
    u32 r0_3 = 0;
    u32 r0_4 = 0;
    u32 r2_3 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r2_4 = 0;
    u32 r4_5 = 0;
    u32 tpc_6 = 0;
    u32 r0_7 = 0;
    u32 r0_8 = 0;
    u32 r4_9 = 0;
    u32 tpc_10 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_0010b3b0_ea_1> ea_1 = gptr<Local_0010b3b0_ea_1>(r13 - 8);
    ea_1->word_0 = r4;
    ea_1->word_4 = r14;
    r13 = ea_1.addr();
    u32 r0_1 = arg0->byte_10;
    if (r0_1 >= 3u) {
        u32 r4_1 = *gptr<u32>(r13);
        u32 tpc_1 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r2_1 = *gptr<u8>(r0_1 + 0x10b3c8u);  // (from the original)
    u32 r2_2 = r2_1 + r2_1;
    u32 tpc_2 = 0x10b3cau + r2_2 | 1;  // (from the original)
    switch (tpc_2) {
        case 0x10b3cd: goto L_10b3cc;  // (from the original)
        case 0x10b407: goto L_10b406;  // (from the original)
        case 0x10b423: goto L_10b422;  // (from the original)
        default: break;
    }
    guest::cpu()->r[13] = r13;
    guest::cpu()->r[4] = r0;
    guest::call_address<u32>(tpc_2, r0_1, r1, r2_2, guest::cpu()->r[3]);
    return;
L_10b3cc:;
    r0_2 = arg0->word_0;
    if (s32(r1) > 0) {
        if (s32(r0_2) <= 0) {
            goto L_10b3e6;
        }
        r0_2 -= r1;
        arg0->word_0 = r0_2;
        if (s32(r0_2) <= 0) {
            r0_2 = 0u;
        }
        arg0->word_0 = r0_2;
    }
    if (s32(r0_2) > 0) {
        u32 r4_2 = *gptr<u32>(r13);
        u32 tpc_3 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_2;
        guest::cpu()->r[13] = r13;
        return;
    }
L_10b3e6:;
    r0_3 = arg0->word_4;
    if (s32(r0_3) > 0) {
        u32 r4_3 = *gptr<u32>(r13);
        u32 tpc_4 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_3;
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    r0_4 = call_002fae84(r0_3, r1, r2_2, guest::cpu()->r[3]);
    r2_3 = guest::cpu()->r[2];
    r0_5 = r0_4 + 0x621d0u;  // (from the original)
    guest::cpu()->r[13] = r13;
    r0_6 = call_00305da0(r0_5, 0x621d0u, r2_3);  // (from the original)
    r2_4 = guest::cpu()->r[2];
    if (r0_6 != 0) {
        u32 r4_4 = *gptr<u32>(r13);
        u32 tpc_5 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_4;
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    call_0030608c(r0, 1u, r2_4, guest::cpu()->r[3]);
    r4_5 = *gptr<u32>(r13);
    tpc_6 = *gptr<u32>(r13 + 4);
    r13 += 8;
    guest::cpu()->r[4] = r4_5;
    guest::cpu()->r[13] = r13;
    return;
L_10b406:;
    if (s32(r1) <= 0) {
        u32 r4_6 = *gptr<u32>(r13);
        u32 tpc_7 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_6;
        guest::cpu()->r[13] = r13;
        return;
    }
    r0_7 = arg0->word_0;
    if (s32(r0_7) <= 0) {
        u32 r4_7 = *gptr<u32>(r13);
        u32 tpc_8 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_7;
        guest::cpu()->r[13] = r13;
        return;
    }
    r0_8 = r0_7 - 1u;
    arg0->word_0 = r0_8;
    if (s32(r0_8) > 0) {
        u32 r4_8 = *gptr<u32>(r13);
        u32 tpc_9 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_8;
        guest::cpu()->r[13] = r13;
        return;
    }
    guest::cpu()->r[13] = r13;
    call_0030608c(r0, 2u, r2_2, guest::cpu()->r[3]);
    r4_9 = *gptr<u32>(r13);
    tpc_10 = *gptr<u32>(r13 + 4);
    r13 += 8;
    guest::cpu()->r[4] = r4_9;
    guest::cpu()->r[13] = r13;
    return;
L_10b422:;
    if (s32(r1) <= 0) {
        u32 r4_10 = *gptr<u32>(r13);
        u32 tpc_11 = *gptr<u32>(r13 + 4);
        r13 += 8;
        guest::cpu()->r[4] = r4_10;
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r0_9 = arg0->word_0 + r1;
    arg0->word_0 = r0_9;
    if (s32(r0_9) > 0xa) {  // (from the original)
        r0_9 = 0xau;  // (from the original)
    }
    arg0->word_0 = r0_9;
    u32 r4_11 = *gptr<u32>(r13);
    u32 tpc_12 = *gptr<u32>(r13 + 4);
    r13 += 8;
    guest::cpu()->r[4] = r4_11;
    guest::cpu()->r[13] = r13;
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
    arg0->word_0 = 0;
    arg0->word_4 = 0;
    *gptr<u8>(arg0.addr() + 4u) = 0;
    guest::cpu()->r[1] = 0u;
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

struct __attribute__((packed)) Local_0010b448_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010b448_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010b448_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010b448_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010b448_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010b448_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010b448_ea_1, word_14, 0x14);  // (from the original)

inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x003035a4, u32(u32, u32, u32, u32)> call_003035a4;  // (from the original)
inline constexpr guest::Function<0x00303660, u32(u32, u32, u32, u32)> call_00303660;  // (from the original)
inline constexpr guest::Function<0x00305de4, u32(u32, u32, u32, u32)> call_00305de4;  // (from the original)
inline constexpr guest::Function<0x00305e84, u32(u32, u32, u32, u32)> call_00305e84;  // (from the original)

void f_0010b448(gptr<Object_0010b448_0> arg0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r0 = arg0.addr();
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r14 = guest::cpu()->r[14];
    u32 r4_1 = 0;
    u32 r5_1 = 0;
    u32 r6_1 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    if (r1 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        return;
    }
    gptr<Local_0010b448_ea_1> ea_1 = gptr<Local_0010b448_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r3;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    u32 r0_1 = arg0->byte_4;
    if (r0_1 == 0) {
        goto L_10b492;
    }
    if (r0_1 == 1u && s32(r1) > 0) {
        u32 r0_2 = arg0->word_0;
        if (s32(r0_2) > 0) {
            u32 r0_3 = r0_2 - r1;
            arg0->word_0 = r0_3;
            if (s32(r0_3) <= 0) {
                arg0->word_0 = 0;
                u32 r0_4 = call_002fae84(0u, r1, r2, r3);
                u32 r0_6 = call_003035a4(r0_4 + 0x7170cu, 0xfu, 0x7170cu, guest::cpu()->r[3]);  // (from the original)
                u32 r0_7 = call_002fae84(r0_6, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                call_00305de4(r0_7 + 0x6214fu, 1u, 0x6214fu, guest::cpu()->r[3]);  // (from the original)
                *gptr<u8>(r0 + 4u) = 2;
            }
        }
    }
    r4_1 = *frame.at<u32>(4);
    r5_1 = *frame.at<u32>(8);
    r6_1 = *frame.at<u32>(0xc);  // (from the original)
    r7_1 = *frame.at<u32>(0x10);  // (from the original)
    tpc_1 = *frame.at<u32>(0x14);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    return;
L_10b492:;
    u32 r5_2 = 0u;
    u32 r4_2 = r5_2;
    u32 r0_9 = call_002fae84(r0_1, r1, r2, r3);
    u32 r3_4 = guest::cpu()->r[3];
    u32 r2_2 = 0x621d0u;  // (from the original)
    u32 r1_2 = 0x45ccu;  // (from the original)
    u32 r0_10 = r0_9 + r2_2;
    u32 r7_2 = r0_10 + r1_2;
    if (r7_2 != 0) {
        r0_10 = call_00303660(r7_2 + 8u, r1_2, r2_2, r3_4);
        r1_2 = guest::cpu()->r[1];
        r2_2 = guest::cpu()->r[2];
        r3_4 = guest::cpu()->r[3];
        r4_2 = 0u;
        r5_2 = r0_10;
    }
    u32 r0_12 = call_002fae84(r0_10, r1_2, r2_2, r3_4);
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r1_3 = 0x621d0u;  // (from the original)
    u32 r0_13 = r0_12 + r1_3 + 0x9cu;  // (from the original)
    if (r0_13 != 0) {
        r0_13 = call_00303660(r0_13 + 0x34u, r1_3, r2_3, r3_5);  // (from the original)
        r3_5 = guest::cpu()->r[3];
        r1_3 = s32(r0_13) >> 0x1f;  // (from the original)
        r2_3 = r4_2;
        u32 res_1 = r0_13 + r5_2;
        r5_2 = res_1;
        r4_2 = u64(r1_3) + r2_3 + u32(res_1 < r0_13);
    }
    u32 r0_15 = call_002fae84(r0_13, r1_3, r2_3, r3_5);
    u32 r3_6 = guest::cpu()->r[3];
    u32 r2_4 = 0x621d0u;  // (from the original)
    u32 r0_16 = r0_15 + r2_4 + 0x4468u;  // (from the original)
    if (r0_16 != 0) {
        u32 r0_18 = call_00303660(r0_16 + 0x24u, 0x4468u, r2_4, r3_6);  // (from the original)
        r3_6 = guest::cpu()->r[3];
        r2_4 = r4_2;
        u32 res_2 = r0_18 + r5_2;
        r5_2 = res_2;
        r4_2 = u64(0u) + r2_4 + u32(res_2 < r0_18);
    }
    u64 t_1 = u64(r4_2) + ~0u + u32(r5_2 >= 0x2710u);  // (from the original)
    u32 r4_3 = t_1;
    if (u32(t_1 >> 0x20)) {  // (from the original)
        u32 r0_19 = call_00305e84(r7_2, 0u, r2_4, r3_6);
        if (r0_19 == 0) {
            r4_1 = *frame.at<u32>(4);
            r5_1 = *frame.at<u32>(8);
            r6_1 = *frame.at<u32>(0xc);  // (from the original)
            r7_1 = *frame.at<u32>(0x10);  // (from the original)
            tpc_1 = *frame.at<u32>(0x14);  // (from the original)
            guest::cpu()->r[4] = r4_1;
            guest::cpu()->r[5] = r5_1;
            guest::cpu()->r[6] = r6_1;
            guest::cpu()->r[7] = r7_1;
            return;
        }
        *gptr<u32>(r0) = 3;
        *gptr<u8>(r0 + 4u) = 1;
        u32 r4_4 = *frame.at<u32>(4);
        u32 r5_3 = *frame.at<u32>(8);
        u32 r6_2 = *frame.at<u32>(0xc);  // (from the original)
        u32 r7_3 = *frame.at<u32>(0x10);  // (from the original)
        u32 tpc_2 = *frame.at<u32>(0x14);  // (from the original)
        guest::cpu()->r[4] = r4_4;
        guest::cpu()->r[5] = r5_3;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_3;
        return;
    }
    r4_1 = *frame.at<u32>(4);
    r5_1 = *frame.at<u32>(8);
    r6_1 = *frame.at<u32>(0xc);  // (from the original)
    r7_1 = *frame.at<u32>(0x10);  // (from the original)
    tpc_1 = *frame.at<u32>(0x14);  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
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

void f_0010b544(u32 r0, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x2ec);  // the original's stack frame
    u32 r1_1 = 0;
    u32 r5 = 0u;
    u32 r4 = r0;
    u32 r6 = r5;
    do {
        call_002fc8e8((r5 << 2) + r4, 0x95bfdcu, r2, r3);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_2 = r4 + r5 + 0x20u;  // (from the original)
        r5 += 1u;
        *gptr<u8>(r0_2) = u8(r6);
        guest::preempt();
    } while (s32(r5) < 8);
    call_002fc288(frame.at(0).addr(), r1_1, r2, r3);
    call_002fe9c8(frame.at(0).addr(), 0x63u, 0x51u, 0u);  // (from the original)
    call_003004c4(r4, 1u, frame.at(0).addr(), guest::cpu()->r[3]);
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x5du, 0x4bu, 0u);  // (from the original)
    call_003004c4(r4 + 0x10u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x5fu, 0x4cu, 0u);  // (from the original)
    call_003004c4(r4 + 0x14u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x5eu, 0x4du, 0u);  // (from the original)
    call_003004c4(r4 + 0x18u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x62u, 0x50u, 0u);  // (from the original)
    call_003004c4(r4 + 8u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x61u, 0x4fu, 0u);  // (from the original)
    call_003004c4(r4 + 0xcu, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x60u, 0x4eu, 0u);  // (from the original)
    call_003004c4(r4 + 4u, 1u, frame.at(0).addr(), guest::cpu()->r[3]);
    call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fc288(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe9c8(frame.at(0).addr(), 0x64u, 0x52u, 0u);  // (from the original)
    call_003004c4(r4 + 0x1cu, 1u, frame.at(0).addr(), guest::cpu()->r[3]);  // (from the original)
    r0 = call_002fc8fc(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x55a6u;  // (from the original)
    r5 = 0u;
    do {
        u32 r0_34 = call_002fae84(r0, r1, r2, r3);
        r0 = call_002fb7e8(r0_34 + 0x20u, uxtb(r5), guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r6_2 = r0;
        if (r0 != 0) {
            r0 = call_002fbd54(r6_2 + r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                u32 r0_37 = r6_2 + 0x8f0au;  // (from the original)
                r0 = call_002fcaf4(r0_37, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0 == 0) {
                    r0 = call_002fc814(r4, r0_37, r2, r3);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
            }
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
}

}  // namespace d_0010b544
GUEST_EXPORT_FRAMED(0x0010b545, d_0010b544::f_0010b544, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010b6d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b6d0 {

inline constexpr guest::Function<0x00301444, u32(u32, u32)> call_00301444;  // (from the original)

void f_0010b6d0() {
    call_00301444(guest::cpu()->r[0], 0x28u);  // (from the original)
}

}  // namespace d_0010b6d0
GUEST_EXPORT_FRAMED(0x0010b6d1, d_0010b6d0::f_0010b6d0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010b730: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b730 {

struct __attribute__((packed)) Local_0010b730_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010b730_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0010b730_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_0010b730_r0_14 {
    u8 unknown_0[0xd];  // (not used here)
    u8 byte_d;
};
GUEST_OFFSET(Local_0010b730_r0_14, byte_d, 0xd);  // (from the original)

struct __attribute__((packed)) Local_0010b730_r4_3 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
};
GUEST_OFFSET(Local_0010b730_r4_3, byte_13, 0x13);  // (from the original)

struct __attribute__((packed)) Local_0010b730_r6_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010b730_r6_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010b730_r6_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010b730_r6_1, word_8, 0x8);  // (from the original)

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

void f_0010b730(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010b730_ea_1> ea_1 = gptr<Local_0010b730_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r5 = 0u;
    r13 = ea_1.addr() - 0x2a4u;  // (from the original)
    r7 = 0x55a6u;  // (from the original)
    do {
        guest::cpu()->r[13] = r13;
        u32 r0_1 = call_002fae84(r0, r1, r2, r3);
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        guest::cpu()->r[13] = r13;
        r0 = call_002fb7e8(r0_1 + 0x20u, uxtb(r5), r2_1, r3_1);  // (from the original)
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r4_2 = r0;
        if (r0 != 0) {
            u32 r0_3 = r4_2 + r7;
            guest::cpu()->r[13] = r13;
            r0 = call_002fbd54(r0_3, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0 != 0) {
                u32 r0_4 = *gptr<u32>(r13 + 0x2a8u);  // (from the original)
                if (r0_4 != 0) {
                    u32 r0_5 = r4_2 + (0x57u << 8);  // (from the original)
                    *gptr<u32>(r13 + 0x18u) = r0_5;  // (from the original)
                    r0_4 = *gptr<u8>(r0_5 + 0x12u);  // (from the original)
                    r1 = r0_4 >> 4 << 0x1f;  // (from the original)
                    if (r1 != 0) {
                        r0_4 = r0_4 >> 5 << 0x1f;  // (from the original)
                        if (r0_4 == 0) {
                            guest::cpu()->r[13] = r13;
                            call_002ff368(r13 + 0x20u, r1, r2, r3);  // (from the original)
                            u32 r2_2 = guest::cpu()->r[2];
                            u32 r3_2 = guest::cpu()->r[3];
                            guest::cpu()->r[13] = r13;
                            call_002fcbb0(r13 + 0x1cu, 0x225au, r2_2, r3_2);  // (from the original)
                            *gptr<u32>(r13 + 8u) = 0;
                            *gptr<u32>(r13 + 4u) = 6;
                            *gptr<u32>(r13) = r13 + 0x1cu;  // (from the original)
                            guest::cpu()->r[13] = r13;
                            u32 r0_9 = call_00306354(r13 + 0x20u, 0x10b854u, 1u, r0_3);  // (from the original)
                            u32 r1_1 = guest::cpu()->r[1];
                            u32 r2_3 = guest::cpu()->r[2];
                            u32 r3_3 = guest::cpu()->r[3];
                            if (r0_9 != 0) {
                                guest::cpu()->r[13] = r13;
                                u32 r0_11 = call_002ff4d4(r13 + 0x20u, 8u, 1u, 0u);  // (from the original)
                                r1_1 = guest::cpu()->r[1];
                                r2_3 = guest::cpu()->r[2];
                                r3_3 = guest::cpu()->r[3];
                                if (r0_11 != 0) {
                                    u32 r0_12 = (u32(*gptr<u8>(*gptr<u32>(r13 + 0x18u) + 0x12u)) | 0x20u) & 0xefu;  // (from the original)
                                    u32 r1_2 = *gptr<u32>(r13 + 0x18u);  // (from the original)
                                    *gptr<u8>(r1_2 + 0x12u) = u8(r0_12);  // (from the original)
                                    guest::cpu()->r[13] = r13;
                                    u32 r0_13 = call_002fae84(r0_12, r1_2, r2_3, r3_3);
                                    r3_3 = guest::cpu()->r[3];
                                    gptr<Local_0010b730_r0_14> r0_14 = gptr<Local_0010b730_r0_14>(r0_13 + 0x6214fu);  // (from the original)
                                    r1_1 = 1u;
                                    r2_3 = u32(r0_14->byte_d) | r1_1;
                                    r0_14->byte_d = u8(r2_3);
                                }
                            }
                            guest::cpu()->r[13] = r13;
                            call_002f777c(r13 + 0x1cu, r1_1, r2_3, r3_3);  // (from the original)
                            u32 r1_3 = guest::cpu()->r[1];
                            u32 r2_4 = guest::cpu()->r[2];
                            u32 r3_4 = guest::cpu()->r[3];
                            guest::cpu()->r[13] = r13;
                            r0_4 = call_002f77e8(r13 + 0x20u, r1_3, r2_4, r3_4);  // (from the original)
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                        }
                    }
                }
                guest::cpu()->r[13] = r13;
                r0 = call_002fb93c(r0_4, r1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0 != 0) {
                    gptr<Local_0010b730_r4_3> r4_3 = gptr<Local_0010b730_r4_3>(r4_2 + (0x57u << 8));  // (from the original)
                    r0 = u32(r4_3->byte_13) >> 1 << 0x1f;  // (from the original)
                    if (r0 != 0) {
                        guest::cpu()->r[13] = r13;
                        call_002ff368(r13 + 0x18u, r1, r2, r3);  // (from the original)
                        u32 r2_5 = guest::cpu()->r[2];
                        u32 r3_5 = guest::cpu()->r[3];
                        guest::cpu()->r[13] = r13;
                        call_002fcbb0(r13 + 0x298u, 0x225au, r2_5, r3_5);  // (from the original)
                        gptr<Local_0010b730_r6_1> r6_1 = gptr<Local_0010b730_r6_1>(r13);
                        r6_1->word_0 = r13 + 0x298u;  // (from the original)
                        r6_1->word_4 = 6;
                        r6_1->word_8 = 0;
                        u32 r6_2 = r6_1.addr() + 0xc;  // (from the original)
                        guest::cpu()->r[13] = r13;
                        u32 r0_20 = call_00306354(r13 + 0x18u, 0x10b854u, 2u, r0_3);  // (from the original)
                        u32 r1_4 = guest::cpu()->r[1];
                        u32 r2_6 = guest::cpu()->r[2];
                        u32 r3_6 = guest::cpu()->r[3];
                        if (r0_20 != 0) {
                            guest::cpu()->r[13] = r13;
                            u32 r0_22 = call_002ff4d4(r13 + 0x18u, 3u, 1u, 0u);  // (from the original)
                            r1_4 = guest::cpu()->r[1];
                            r2_6 = guest::cpu()->r[2];
                            r3_6 = guest::cpu()->r[3];
                            if (r0_22 != 0) {
                                r1_4 = 0xfdu;  // (from the original)
                                r4_3->byte_13 = u8(u32(r4_3->byte_13) & r1_4);
                            }
                        }
                        guest::cpu()->r[13] = r13;
                        call_002f777c(r13 + 0x298u, r1_4, r2_6, r3_6);  // (from the original)
                        u32 r1_5 = guest::cpu()->r[1];
                        u32 r2_7 = guest::cpu()->r[2];
                        u32 r3_7 = guest::cpu()->r[3];
                        guest::cpu()->r[13] = r13;
                        r0 = call_002f77e8(r13 + 0x18u, r1_5, r2_7, r3_7);  // (from the original)
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                    }
                }
            }
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
    r13 += 0x2acu;  // (from the original)
    u32 r4_4 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_3 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_3;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010b730
GUEST_EXPORT(0x0010b731, d_0010b730::f_0010b730);

// f_0010b86c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b86c {

struct __attribute__((packed)) Local_0010b86c_r5_1 {
    u8 unknown_0[0x1c];  // (not used here)
    u8 byte_1c;
    u8 byte_1d;
    u8 byte_1e;
    u8 byte_1f;
};
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1d, 0x1d);  // (from the original)
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1e, 0x1e);  // (from the original)
GUEST_OFFSET(Local_0010b86c_r5_1, byte_1f, 0x1f);  // (from the original)

inline constexpr guest::Function<0x001cd668, u32(u32, u32, u32, u32)> call_001cd668;  // (from the original)
inline constexpr guest::Function<0x00304224, u32(u32, u32, u32, u32)> call_00304224;  // (from the original)
inline constexpr guest::Function<0x00305ff4, u32(u32, u32, u32, u32)> call_00305ff4;  // (from the original)
inline constexpr guest::Function<0x00305ff8, u32(u32, u32, u32, u32)> call_00305ff8;  // (from the original)
inline constexpr guest::Function<0x003064ac, u32(u32, u32, u32, u32)> call_003064ac;  // (from the original)

u32 f_0010b86c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = call_003064ac(r0, r1, guest::cpu()->r[2], r3);
    u32 r1_1 = guest::cpu()->r[1];
    u32 r3_1 = guest::cpu()->r[3];
    if (r0_1 == 0) {
        return r0_1;
    }
    gptr<Local_0010b86c_r5_1> r5_1 = gptr<Local_0010b86c_r5_1>(r0 + (0xbu << 8));  // (from the original)
    if (r5_1->byte_1c != 0) {
        call_00304224(r0 + 0x78u, 0u, guest::cpu()->r[2], r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
    }
    if (r5_1->byte_1d != 0) {
        u32 r0_3 = call_00305ff4(4u, 1u, guest::cpu()->r[2], r3_1);
        r1_1 = guest::cpu()->r[1];
        r3_1 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            u32 r0_4 = call_00305ff8(r0, 4u, guest::cpu()->r[2], r3_1);
            r3_1 = guest::cpu()->r[3];
            *frame.at<u32>(0) = r0_4;
            r1_1 = *frame.at<u16>(0);
            *gptr<u16>(r0 + 0x2eu) = u16(r1_1);  // (from the original)
            *gptr<u16>(r0 + 0x3au) = u16(r1_1);  // (from the original)
        }
    }
    if (r5_1->byte_1e != 0) {
        call_001cd668(r0 + (0x5du << 4), 1u, guest::cpu()->r[2], r3_1);  // (from the original)
        r1_1 = guest::cpu()->r[1];
    }
    if (r5_1->byte_1f != 0) {
        r1_1 = 1u;
        *gptr<u8>(*gptr<u32>(r0 + 0x68u) + 0x3eu) = u8(r1_1);  // (from the original)
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_0010b86c
GUEST_EXPORT_FRAMED(0x0010b86d, d_0010b86c::f_0010b86c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010b9b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010b9b0 {

inline constexpr guest::Function<0x002d4d00, u32(u32, u32, u32, u32)> call_002d4d00;  // (from the original)
inline constexpr guest::Function<0x002d4d3c, u32(u32, u32, u32, u32)> call_002d4d3c;  // (from the original)
inline constexpr guest::Function<0x002fb96c, u32(u32, u32)> call_002fb96c;  // (from the original)
inline constexpr guest::Function<0x00305114, u32(u32, u32)> call_00305114;  // (from the original)
inline constexpr guest::Function<0x00306088, u32(u32, u32, u32, u32)> call_00306088;  // (from the original)
inline constexpr guest::Function<0x004e7f28, u32(u32, u32, u32, u32)> call_004e7f28;  // (from the original)

void f_0010b9b0(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    call_002d4d3c(r0, r1, r2, r3);
    call_002d4d00(r0, r3, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = guest::cpu()->r[1];
    if (s32(r3) > 0) {
        u32 r0_1 = call_00306088(r0, r1_1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_1 = guest::cpu()->r[1];
        u32 r3_3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            u32 r0_2 = *gptr<u8>(r0 + 0x1eu);  // (from the original)
            if (r0_2 == 0) {
                r0_2 = 2u;
            } else {
                if (r0_2 >= 4u) {
                    goto L_10b9e2;
                }
                r0_2 += 1u;
            }
            *gptr<u8>(r0 + 0x1eu) = u8(r0_2);  // (from the original)
L_10b9e2:;
            call_004e7f28(uxtb(r0_2), uxtb(r2), uxtb(r1), r3_3);
            *gptr<u8>(r0 + 0x1fu) = 0;  // (from the original)
            u32 r0_5 = call_002fb96c(uxtb(r1), guest::cpu()->r[1]);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 != 0) {
                call_00305114(r0_5 + (0x57u << 8), 1u);  // (from the original)
                r1_1 = guest::cpu()->r[1];
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0010b9b0
GUEST_EXPORT_FRAMED(0x0010b9b1, d_0010b9b0::f_0010b9b0, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010bb34: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bb34 {


u32 f_0010bb34(u32 r0) {
    return *gptr<u32>(0x9502e8u + (r0 << 2));  // (from the original)
}

}  // namespace d_0010bb34
GUEST_EXPORT(0x0010bb35, d_0010bb34::f_0010bb34);

// f_0010beb8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010beb8 {

struct __attribute__((packed)) Local_0010beb8_ea_1 {
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
GUEST_OFFSET(Local_0010beb8_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_0010beb8_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0010beb8_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_2, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010beb8_ea_2, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0010beb8_r4_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010beb8_r4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010beb8_r4_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x002fb430, u32(u32, u32, u32, u32)> call_002fb430;  // (from the original)
inline constexpr guest::Function<0x00300914, u32(u32, u32, u32, u32)> call_00300914;  // (from the original)
inline constexpr guest::Function<0x00300924, u32(u32, u32, u32, u32)> call_00300924;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32, u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32, u32)> call_00303c84;  // (from the original)

u32 f_0010beb8(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010beb8_ea_1> ea_1 = gptr<Local_0010beb8_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0x1cu;  // (from the original)
    u32 r6_1 = *gptr<u32>(r13 + 0x44u);  // (from the original)
    u32 r5_1 = *gptr<u32>(r13 + 0x40u);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    gptr<Local_0010beb8_r4_1> r4_1 = gptr<Local_0010beb8_r4_1>(r0_1 + 0x80u + 0x621d0u);  // (from the original)
    u32 r0_2 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_2, 0x621d0u, r2_1, r3_1);  // (from the original)
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    u32 r0_3 = r4_1->word_0;
    *gptr<u32>(r13 + 0x14u) = r4_1->word_4;  // (from the original)
    *gptr<u32>(r13 + 0x10u) = r0_3;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r13, r13 + 0x10u, r2_2, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r7_1 = *gptr<u32>(r13 + 4u);
    u32 r0_5 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_6 = call_003028f0(r0_5, r1_2, r2_3, r3_3);
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00300914(r0_6, sxtb(r7_1), 0u, r3_4);
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_5 = guest::cpu()->r[3];
    u32 r0_7 = r4_1->word_0;
    u32 r1_4 = r4_1->word_4;
    u32 r4_2 = r4_1.addr() + 8;
    *gptr<u32>(r13 + 0x10u) = r0_7;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = r1_4;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_002fb430(r13, r13 + 0x10u, r2_4, r3_5);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    u32 r3_6 = guest::cpu()->r[3];
    u32 r4_3 = *gptr<u32>(r13 + 4u);
    u32 r0_9 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_10 = call_003028f0(r0_9, r1_6, r2_5, r3_6);
    u32 r3_7 = guest::cpu()->r[3];
    u32 r1_7 = s32(r4_3 << 0x10) >> 0x18;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00300924(r0_10, r1_7, 0u, r3_7);
    u32 r0_11 = *gptr<u32>(r13 + 0x48u);  // (from the original)
    *gptr<u32>(r13 + 4u) = r6_1;
    *gptr<u32>(r13) = r5_1;
    *gptr<u32>(r13 + 8u) = r0_11;
    gptr<Local_0010beb8_ea_2> ea_2 = gptr<Local_0010beb8_ea_2>(r13 + 0x1cu);  // (from the original)
    u32 r0_12 = ea_2->word_0;
    u32 r1_8 = ea_2->word_4;
    u32 r2_6 = ea_2->word_8;
    u32 r3_8 = ea_2->word_c;
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_12, r1_8, r2_6, r3_8);
    u32 r1_9 = guest::cpu()->r[1];
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_12, r1_9);
    u32 r1_10 = guest::cpu()->r[1];
    u32 r0_13 = *gptr<u32>(r13 + 0x1cu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_14 = call_00303c84(r0_13, r1_10);
    r13 += 0x2cu;  // (from the original)
    u32 r4_4 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_4;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_14;
}

}  // namespace d_0010beb8
GUEST_EXPORT(0x0010beb9, d_0010beb8::f_0010beb8);

// f_0010bf48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bf48 {

struct __attribute__((packed)) Local_0010bf48_ea_1 {
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
GUEST_OFFSET(Local_0010bf48_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_18, 0x18);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_1c, 0x1c);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_1, word_20, 0x20);  // (from the original)

struct __attribute__((packed)) Local_0010bf48_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010bf48_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0010bf48_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0010bf48_ea_3, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_3, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_3, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010bf48_ea_3, word_c, 0xc);  // (from the original)

struct __attribute__((packed)) Local_0010bf48_r0_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010bf48_r0_6, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010bf48_r0_6, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010bf48_r0_6, word_8, 0x8);  // (from the original)

inline constexpr guest::Function<0x002fb328, u32(u32, u32, u32, u32)> call_002fb328;  // (from the original)
inline constexpr guest::Function<0x00302788, u32(u32, u32, u32, u32)> call_00302788;  // (from the original)
inline constexpr guest::Function<0x0030279c, u32(u32, u32, u32, u32)> call_0030279c;  // (from the original)
inline constexpr guest::Function<0x0030289c, u32(u32)> call_0030289c;  // (from the original)
inline constexpr guest::Function<0x003028f0, u32(u32, u32, u32, u32)> call_003028f0;  // (from the original)
inline constexpr guest::Function<0x00303c84, u32(u32)> call_00303c84;  // (from the original)
inline constexpr guest::Function<0x00306404, u32(u32, u32, u32, u32)> call_00306404;  // (from the original)
inline constexpr guest::Function<0x00306408, u32(u32, u32, u32, u32)> call_00306408;  // (from the original)

u32 f_0010bf48(u32 r0, u32 r1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010bf48_ea_1> ea_1 = gptr<Local_0010bf48_ea_1>(r13 - 0x24);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r2;
    ea_1->word_c = r3;
    ea_1->word_10 = r4;
    ea_1->word_14 = r5;
    ea_1->word_18 = r6;
    ea_1->word_1c = r7;
    ea_1->word_20 = r14;
    r13 = ea_1.addr() - 0xcu;  // (from the original)
    gptr<Local_0010bf48_ea_2> ea_2 = gptr<Local_0010bf48_ea_2>(r13 + 0x30u);  // (from the original)
    u32 r5_1 = ea_2->word_0;
    u32 r6_1 = ea_2->word_4;
    u32 r7_1 = ea_2->word_8;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb328(r0, r1, r2, r3);
    u32 r2_1 = guest::cpu()->r[2];
    u32 r3_1 = guest::cpu()->r[3];
    u32 r0_2 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    call_00302788(r0_2, 0x621d0u, r2_1, r3_1);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    u32 r3_2 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    u32 r0_3 = call_00306404(r0_1 + 0x80u + 0x621d0u, r1_1, r2_2, r3_2);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    u32 r3_3 = guest::cpu()->r[3];
    u32 r0_4 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_5 = call_003028f0(r0_4, r1_2, r2_3, r3_3);
    u32 r3_4 = guest::cpu()->r[3];
    guest::cpu()->r[13] = r13;
    call_00306408(r0_5, r0_3, 0u, r3_4);
    gptr<Local_0010bf48_r0_6> r0_6 = gptr<Local_0010bf48_r0_6>(r13);
    r0_6->word_0 = r5_1;
    r0_6->word_4 = r6_1;
    r0_6->word_8 = r7_1;
    gptr<Local_0010bf48_ea_3> ea_3 = gptr<Local_0010bf48_ea_3>(r13 + 0xcu);  // (from the original)
    u32 r0_7 = ea_3->word_0;
    u32 r1_3 = ea_3->word_4;
    u32 r2_4 = ea_3->word_8;
    u32 r3_5 = ea_3->word_c;
    guest::cpu()->r[13] = r13;
    call_0030279c(r0_7, r1_3, r2_4, r3_5);
    guest::cpu()->r[13] = r13;
    call_0030289c(r0_7);
    u32 r0_8 = *gptr<u32>(r13 + 0xcu);  // (from the original)
    guest::cpu()->r[13] = r13;
    u32 r0_9 = call_00303c84(r0_8);
    r13 += 0x1cu;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_2 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_2;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
    return r0_9;
}

}  // namespace d_0010bf48
GUEST_EXPORT(0x0010bf49, d_0010bf48::f_0010bf48);

// f_0010bf98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010bf98 {

struct __attribute__((packed)) Local_0010bf98_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0010bf98_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010bf98_ea_1, word_4, 0x4);  // (from the original)

inline constexpr guest::Function<0x002ffb48, u32(u32, u32, u32, u32)> call_002ffb48;  // (from the original)
inline constexpr guest::Function<0x00307569, u32(u32, u32, u32, u32)> call_00307568;  // (from the original)

u32 f_0010bf98(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    gptr<Local_0010bf98_ea_1> ea_1 = gptr<Local_0010bf98_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    u32 r0_1 = call_002ffb48(r0, r1, r2, r3);
    if (r0_1 != 0) {
        return r0_1;
    }
    call_00307568(3u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_1;
}

}  // namespace d_0010bf98
GUEST_EXPORT_FRAMED(0x0010bf99, d_0010bf98::f_0010bf98, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c12c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c12c {

inline constexpr guest::Function<0x002ffb64, u32(u32, u32, u32, u32)> call_002ffb64;  // (from the original)

void f_0010c12c() {
    call_002ffb64(guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0010c12c
GUEST_EXPORT_FRAMED(0x0010c12d, d_0010c12c::f_0010c12c, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c228: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c228 {

inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0010c228(u32 r0) {
    u32 r0_2 = call_003076c8(r0 + 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    return r0_2 - 4u;
}

}  // namespace d_0010c228
GUEST_EXPORT_FRAMED(0x0010c229, d_0010c228::f_0010c228, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c234: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c234 {

inline constexpr guest::Function<0x0010c229, u32(u32)> call_0010c228;  // (from the original)
inline constexpr guest::Function<0x003076c9, u32(u32, u32, u32, u32)> call_003076c8;  // (from the original)

u32 f_0010c234(u32 r0) {
    u32 r0_2 = call_003076c8(r0 + 0xcu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4_1 = r0_2 - 0xcu;  // (from the original)
    u32 r0_4 = call_003076c8(r0_2 - 4u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_6 = call_0010c228(r0_4 - 8u);
    return r0_6;
}

}  // namespace d_0010c234
GUEST_EXPORT_FRAMED(0x0010c235, d_0010c234::f_0010c234, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c33c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c33c {

inline guest::global<u32, 0x00952c5c> global_00952c5c;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010c33c(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10c36cu, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(r1, r0_2, r0, 1u);
    *global_00952c5c = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
    u32 r0_4 = *global_00952c5c;
    return r0_4;
}

}  // namespace d_0010c33c
GUEST_EXPORT_FRAMED(0x0010c33d, d_0010c33c::f_0010c33c, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c37c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c37c {


void f_0010c37c() {
    guest::call_address<u32>(0x10c385u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c37c
GUEST_EXPORT(0x0010c37c, d_0010c37c::f_0010c37c);

// f_0010c3c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c3c8 {


void f_0010c3c8() {
    guest::call_address<u32>(0x10c3d1u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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

inline guest::global<u32, 0x00952c60> global_00952c60;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

void f_0010c458(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10c488u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 1;
    u32 r0_3 = call_002f6e78(r1, r0_2, r0, 1u);
    *global_00952c60 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
}

}  // namespace d_0010c458
GUEST_EXPORT_FRAMED(0x0010c459, d_0010c458::f_0010c458, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c4b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c4b8 {

inline guest::global<u32, 0x00952c98> global_00952c98;  // (from the original)
inline constexpr guest::Function<0x002f6e64, u32(u32, u32, u32, u32)> call_002f6e64;  // (from the original)
inline constexpr guest::Function<0x002f6e78, u32(u32, u32, u32, u32)> call_002f6e78;  // (from the original)
inline constexpr guest::Function<0x002f6e8c, u32(u32, u32)> call_002f6e8c;  // (from the original)

u32 f_0010c4b8(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x14);  // the original's stack frame
    u32 r4_1 = r1;
    if (r1 == 0) {
        r4_1 = 0x140000u;  // (from the original)
    }
    u32 r0_2 = call_002f6e64(frame.at(8).addr(), 0x10c4f4u, r2, r3);  // (from the original)
    *frame.at<u32>(0) = 0;
    u32 r0_3 = call_002f6e78(r4_1, r0_2, r0, 1u);
    *global_00952c98 = r0_3;
    call_002f6e8c(r0_3, guest::cpu()->r[1]);
    u32 r0_4 = *global_00952c98;
    return r0_4;
}

}  // namespace d_0010c4b8
GUEST_EXPORT_FRAMED(0x0010c4b9, d_0010c4b8::f_0010c4b8, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_0010c50c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c50c {


void f_0010c50c() {
    guest::call_address<u32>(0x10c515u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010c50c
GUEST_EXPORT(0x0010c50c, d_0010c50c::f_0010c50c);

// f_0010c560: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c560 {


void f_0010c560() {
    guest::call_address<u32>(0x10c569u, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
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

inline constexpr guest::Function<0x003007fc, u32(u32)> call_003007fc;  // (from the original)

u32 f_0010c650() {
    call_003007fc(guest::cpu()->r[0]);
    return guest::cpu()->r[0];
}

}  // namespace d_0010c650
GUEST_EXPORT_FRAMED(0x0010c651, d_0010c650::f_0010c650, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c658: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c658 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> call_00301d0c;  // (from the original)

void f_0010c658() {
    call_00301d0c(guest::cpu()->r[0], 0x2fc20cu, 4u, 4u);  // (from the original)
}

}  // namespace d_0010c658
GUEST_EXPORT_FRAMED(0x0010c659, d_0010c658::f_0010c658, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c6b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c6b0 {

inline guest::global<u32, 0x00950148> global_00950148;  // (from the original)
inline constexpr guest::Function<0x001c0f3c, u32(u32, u32, u32, u32)> call_001c0f3c;  // (from the original)
inline constexpr guest::Function<0x00305e88, u32(u32, u32)> call_00305e88;  // (from the original)
inline constexpr guest::Function<0x0030692c, u32(u32, u32)> call_0030692c;  // (from the original)
inline constexpr guest::Function<0x00306930, u32(u32, u32)> call_00306930;  // (from the original)

u32 f_0010c6b0(u32 r0, u32 r1) {
    call_001c0f3c(r0 + 0x9b4u, r1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0030692c(r0, guest::cpu()->r[1]);
    call_00305e88(r0, guest::cpu()->r[1]);
    u32 r0_2 = *global_00950148;
    if (r0_2 == 0) {
        return 1u;
    }
    call_00306930(r0_2, r0);
    return 1u;
}

}  // namespace d_0010c6b0
GUEST_EXPORT_FRAMED(0x0010c6b1, d_0010c6b0::f_0010c6b0, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010c720: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c720 {

inline guest::global<u32, 0x0094d7a0> global_0094d7a0;  // (from the original)
inline constexpr guest::Function<0x0029c964, u32(u32, u32)> call_0029c964;  // (from the original)
inline constexpr guest::Function<0x002fe7dd, u32(u32)> call_002fe7dc;  // (from the original)
inline constexpr guest::Function<0x003081b4, u32(u32, u32)> call_003081b4;  // (from the original)

u32 f_0010c720(u32 r0, u32 r1) {
    u32 r4_1 = r1;
    if ((*global_0094d7a0 & 1u) == 0u) {
        u32 r0_1 = call_002fe7dc(0x94d7a0u);  // (from the original)
        if (r0_1 != 0) {
            call_0029c964(0x94d7a8u, 3u);  // (from the original)
        }
    }
    if (r4_1 == 0) {
        r4_1 = 0x94d7a8u;  // (from the original)
    }
    call_003081b4(r4_1, r0);
    return r4_1;
}

}  // namespace d_0010c720
GUEST_EXPORT_FRAMED(0x0010c721, d_0010c720::f_0010c720, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010c764: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010c764 {

inline guest::global<u32, 0x0095385c> global_0095385c;  // (from the original)
inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline guest::global<u32, 0x00953874> global_00953874;  // (from the original)
inline guest::global<u32, 0x0095c6d0> global_0095c6d0;  // (from the original)
inline guest::global<u32, 0x0095df64> global_0095df64;  // (from the original)
inline constexpr guest::Function<0x0010767d, u32(u32)> call_0010767c;  // (from the original)
inline constexpr guest::Function<0x0013873c, u32(u32)> call_0013873c;  // (from the original)
inline constexpr guest::Function<0x001bac9c, u32(u32)> call_001bac9c;  // (from the original)
inline constexpr guest::Function<0x001ed594, u32(u32)> call_001ed594;  // (from the original)
inline constexpr guest::Function<0x0022d734, u32(u32)> call_0022d734;  // (from the original)
inline constexpr guest::Function<0x00242744, u32(u32)> call_00242744;  // (from the original)
inline constexpr guest::Function<0x0027c554, u32(u32)> call_0027c554;  // (from the original)
inline constexpr guest::Function<0x0029d150, u32(u32)> call_0029d150;  // (from the original)
inline constexpr guest::Function<0x002b8898, u32(u32)> call_002b8898;  // (from the original)
inline constexpr guest::Function<0x002c20ec, u32(u32)> call_002c20ec;  // (from the original)
inline constexpr guest::Function<0x002f98a8, u32(u32)> call_002f98a8;  // (from the original)
inline constexpr guest::Function<0x002fc188, u32(u32)> call_002fc188;  // (from the original)
inline constexpr guest::Function<0x002fc194, u32(u32)> call_002fc194;  // (from the original)
inline constexpr guest::Function<0x0030444c, u32(u32)> call_0030444c;  // (from the original)
inline constexpr guest::Function<0x00304530, u32(u32)> call_00304530;  // (from the original)
inline constexpr guest::Function<0x00306934, u32(u32, u32, u32, u32)> call_00306934;  // (from the original)
inline constexpr guest::Function<0x00306938, u32(u32)> call_00306938;  // (from the original)
inline constexpr guest::Function<0x0030693c, u32(u32)> call_0030693c;  // (from the original)
inline constexpr guest::Function<0x00306940, u32(u32)> call_00306940;  // (from the original)
inline constexpr guest::Function<0x00306944, u32(u32)> call_00306944;  // (from the original)
inline constexpr guest::Function<0x00306948, u32(u32)> call_00306948;  // (from the original)
inline constexpr guest::Function<0x0030694c, u32(u32)> call_0030694c;  // (from the original)
inline constexpr guest::Function<0x00306950, u32(u32)> call_00306950;  // (from the original)
inline constexpr guest::Function<0x00306954, u32(u32)> call_00306954;  // (from the original)
inline constexpr guest::Function<0x00306958, u32(u32)> call_00306958;  // (from the original)
inline constexpr guest::Function<0x0030695c, u32(u32)> call_0030695c;  // (from the original)
inline constexpr guest::Function<0x00306960, u32(u32)> call_00306960;  // (from the original)
inline constexpr guest::Function<0x00306964, u32(u32)> call_00306964;  // (from the original)
inline constexpr guest::Function<0x00306968, u32(u32)> call_00306968;  // (from the original)
inline constexpr guest::Function<0x0030696c, u32(u32)> call_0030696c;  // (from the original)
inline constexpr guest::Function<0x00306970, u32(u32)> call_00306970;  // (from the original)
inline constexpr guest::Function<0x003081c8, u32(u32)> call_003081c8;  // (from the original)
inline constexpr guest::Function<0x00308238, u32(u32)> call_00308238;  // (from the original)
inline constexpr guest::Function<0x003082bc, u32(u32)> call_003082bc;  // (from the original)
inline constexpr guest::Function<0x00308340, u32(u32)> call_00308340;  // (from the original)
inline constexpr guest::Function<0x0030834c, u32(u32)> call_0030834c;  // (from the original)
inline constexpr guest::Function<0x003319e8, u32(u32)> call_003319e8;  // (from the original)
inline constexpr guest::Function<0x004e9dc8, u32(u32)> call_004e9dc8;  // (from the original)

void f_0010c764() {
    u32 r0_1 = call_00306934(0x9c9fd0u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r0_2 = call_00306938(r0_1);
    call_0030693c(r0_2);
    call_0030444c(0xa82000u);  // (from the original)
    u32 r0_4 = call_002f98a8(*global_0095386c);
    u32 r0_5 = call_002fc188(r0_4);
    call_002fc194(r0_5);
    call_002c20ec(*global_0095df64);
    call_003081c8(*global_00953864);
    call_003319e8(*global_0095385c);
    u32 r0_10 = call_0029d150(*global_00953874);
    call_00306940(r0_10);
    u32 r0_12 = call_00306944(*global_0095c6d0);
    u32 r0_13 = call_0010767c(r0_12);
    u32 r0_14 = call_001bac9c(r0_13);
    call_001ed594(r0_14);
    u32 r0_15 = call_00306948(0xfcu);  // (from the original)
    call_00242744(r0_15);
    u32 r0_16 = call_0030694c(1u);
    u32 r0_17 = call_00308238(r0_16);
    u32 r0_18 = call_0027c554(r0_17);
    u32 r0_19 = call_0022d734(r0_18);
    u32 r0_20 = call_002b8898(r0_19);
    u32 r0_21 = call_00304530(r0_20);
    u32 r0_22 = call_0013873c(r0_21);
    u32 r0_23 = call_00306950(r0_22);
    u32 r0_24 = call_003082bc(r0_23);
    u32 r0_25 = call_00306954(r0_24);
    u32 r0_26 = call_00306958(r0_25);
    u32 r0_27 = call_0030695c(r0_26);
    u32 r0_28 = call_00306960(r0_27);
    u32 r0_29 = call_00306964(r0_28);
    u32 r0_30 = call_004e9dc8(r0_29);
    u32 r0_31 = call_00306968(r0_30);
    u32 r0_32 = call_0030696c(r0_31);
    u32 r0_33 = call_00308340(r0_32);
    u32 r0_34 = call_0030834c(r0_33);
    call_00306970(r0_34);
}

}  // namespace d_0010c764
GUEST_EXPORT_FRAMED(0x0010c765, d_0010c764::f_0010c764, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010cadc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010cadc {

inline constexpr guest::Function<0x002fe470, u32(u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00308971, u32(u32, u32, u32, u32)> call_00308970;  // (from the original)

u32 f_0010cadc(u32 r0, u32 r1) {
    u32 r0_1 = call_00308970(r1, r0, 0xau, guest::cpu()->r[3]);  // (from the original)
    if (r0_1 >= 0xau) {  // (from the original)
        return 0u;
    }
    u32 r4_1 = r0_1 * 0x2518u + r0;  // (from the original)
    if (r4_1 == 0) {
        guest::cpu()->r[1] = 0x2518u;  // (from the original)
        return 0u;
    }
    u32 r0_2 = call_002fe470(r4_1, 0x2518u);  // (from the original)
    if (r0_2 == 0) {
        return 0u;
    }
    return r4_1;
}

}  // namespace d_0010cadc
GUEST_EXPORT_FRAMED(0x0010cadd, d_0010cadc::f_0010cadc, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010cbd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010cbd4 {

struct __attribute__((packed)) Object_0010cbd4_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Object_0010cbd4_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Object_0010cbd4_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Object_0010cbd4_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0010cbd4_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(Local_0010cbd4_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_1, word_10, 0x10);  // (from the original)

struct __attribute__((packed)) Local_0010cbd4_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010cbd4_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_ea_2, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0010cbd4_r3_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010cbd4_r3_4, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_r3_4, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_r3_4, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0010cbd4_r6_1 {
    u8 unknown_0[0x13];  // (not used here)
    u8 byte_13;
    u8 unknown_14[0x1];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(Local_0010cbd4_r6_1, byte_13, 0x13);  // (from the original)
GUEST_OFFSET(Local_0010cbd4_r6_1, byte_15, 0x15);  // (from the original)

inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x002fd4b4, u32(u32, u32, u32, u32)> call_002fd4b4;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002ff6f4, u32(u32, u32, u32, u32)> call_002ff6f4;  // (from the original)
inline constexpr guest::Function<0x00306c6c, u32(u32, u32, u32, u32)> call_00306c6c;  // (from the original)
inline constexpr guest::Function<0x00306c70, u32(u32, u32, u32, u32)> call_00306c70;  // (from the original)
inline constexpr guest::Function<0x00306c74, u32(u32, u32, u32, u32)> call_00306c74;  // (from the original)
inline constexpr guest::Function<0x00308e80, u32(u32, u32, u32, u32)> call_00308e80;  // (from the original)
inline constexpr guest::Function<0x00308efc, u32(u32, u32, u32, u32)> call_00308efc;  // (from the original)

void f_0010cbd4(u32 r0, gptr<Object_0010cbd4_1> arg1, u32 r2, u32 r3) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 r1_7 = 0;
    u32 r7_1 = 0;
    if (r2 == 0) {
        guest::cpu()->r[4] = r4;
        guest::cpu()->r[5] = r5;
        guest::cpu()->r[6] = r6;
        guest::cpu()->r[7] = r7;
        guest::cpu()->r[13] = r13;
        return;
    }
    gptr<Local_0010cbd4_ea_1> ea_1 = gptr<Local_0010cbd4_ea_1>(r13 - 0x14);  // (from the original)
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r14;
    r13 = ea_1.addr() - 0x2cu;  // (from the original)
    u32 r0_1 = arg1->word_8;
    if (r0_1 != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_00308e80(r0_1, arg1.addr(), r2, r3);
        u32 r1_1 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        if (r0_2 == 0x26u) {  // (from the original)
            gptr<Local_0010cbd4_r6_1> r6_1 = gptr<Local_0010cbd4_r6_1>(r0 + 0x17640u);  // (from the original)
            u32 r0_3 = u32(s8(r6_1->byte_15)) + 1u;
            if (r0_3 == 0) {
                guest::cpu()->r[13] = r13;
                u32 r0_4 = call_002fb378(r0_3, r1_1, r2_1, r3_1);
                u32 r3_2 = guest::cpu()->r[3];
                u32 r2_2 = *gptr<u32>(r0_4 + 4u);
                u32 r1_2 = *gptr<u32>(r0_4);
                u32 r0_5 = *gptr<u32>(r0_4 + 8u);
                *gptr<u32>(r13 + 0x18u) = r2_2;  // (from the original)
                *gptr<u32>(r13 + 0x14u) = r1_2;  // (from the original)
                *gptr<u32>(r13 + 0x1cu) = r0_5;  // (from the original)
                guest::cpu()->r[13] = r13;
                call_00308efc(r13 + 0x14u, r1_2, r2_2, r3_2);  // (from the original)
                u32 r2_3 = guest::cpu()->r[2];
                u32 r3_3 = guest::cpu()->r[3];
                u32 r1_3 = r0 + 0x1764au;  // (from the original)
                guest::cpu()->r[13] = r13;
                call_00306c6c(r13 + 0x20u, r1_3, r2_3, r3_3);  // (from the original)
                gptr<Local_0010cbd4_r3_4> r3_4 = gptr<Local_0010cbd4_r3_4>(r13 + 8u);
                gptr<Local_0010cbd4_ea_2> ea_2 = gptr<Local_0010cbd4_ea_2>(r13 + 0x20u);  // (from the original)
                u32 r1_4 = ea_2->word_4;
                u32 r2_4 = ea_2->word_8;
                r3_4->word_0 = ea_2->word_0;
                r3_4->word_4 = r1_4;
                r3_4->word_8 = r2_4;
                guest::cpu()->r[13] = r13;
                call_00308efc(r13 + 8u, r1_4, r2_4, r3_4.addr() + 0xc);  // (from the original)
                u32 r3_6 = guest::cpu()->r[3];
                guest::cpu()->r[13] = r13;
                u32 r0_10 = call_002fd4b4(r13 + 0x14u, r13 + 8u, 1u, r3_6);  // (from the original)
                u32 r2_5 = guest::cpu()->r[2];
                u32 r3_7 = guest::cpu()->r[3];
                if (s32(r0_10) < 0) {
                    guest::cpu()->r[13] = r13;
                    call_00306c70(r1_3, r13 + 0x14u, r2_5, r3_7);  // (from the original)
                    r2_5 = guest::cpu()->r[2];
                    r3_7 = guest::cpu()->r[3];
                    r0_10 = 0u;
                }
                if (r6_1->byte_13 == 2u) {
                    r1_7 = 0x14u;  // (from the original)
                    r7_1 = (r0_10 - 7u) * r1_7;
                } else {
                    u32 r0_11 = r0_10 - 2u;
                    r1_7 = r0_11 << 2;
                    r7_1 = r0_11 + r1_7;
                    if (s32(r7_1) > 0x32) {  // (from the original)
                        r7_1 = 0x32u;  // (from the original)
                    }
                }
                guest::cpu()->r[13] = r13;
                u32 r0_12 = call_002ff6f4(0x64u, r1_7, r2_5, r3_7);  // (from the original)
                u32 r1_8 = guest::cpu()->r[1];
                u32 r2_6 = guest::cpu()->r[2];
                u32 r3_8 = guest::cpu()->r[3];
                if (s32(r0_12) < s32(r7_1)) {
                    guest::cpu()->r[13] = r13;
                    u32 r0_13 = call_002fe418(arg1.addr(), r1_8, r2_6, r3_8);
                    u32 r2_7 = guest::cpu()->r[2];
                    u32 r3_9 = guest::cpu()->r[3];
                    guest::cpu()->r[13] = r13;
                    call_00306c74(r1_3, r0_13, r2_7, r3_9);
                    u32 r2_8 = s8(r6_1->byte_15);
                    if (arg1->word_0 > r2_8) {
                        u32 r1_9 = arg1->word_4;
                        u32 r0_14 = lsl_r(1u, r2_8 & 0xff);  // (from the original)
                        if ((r1_9 & r0_14) != 0) {
                            u32 r0_15 = arg1->word_8;
                            arg1->word_4 = r1_9 & ~r0_14;
                            arg1->word_8 = r0_15 - 1u;
                        }
                    }
                }
            }
        }
    }
    r13 += 0x2cu;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_2 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010cbd4
GUEST_EXPORT(0x0010cbd5, d_0010cbd4::f_0010cbd4);

// f_0010d454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010d454 {

struct __attribute__((packed)) Local_0010d454_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010d454_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010d454_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010d454_ea_1, word_8, 0x8);  // (from the original)

struct __attribute__((packed)) Local_0010d454_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0010d454_ea_2, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010d454_ea_2, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010d454_ea_2, word_8, 0x8);  // (from the original)

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

void f_0010d454(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x30);  // the original's stack frame
    u32 r0_2 = 0;
    u32 r1_4 = 0;
    u32 r2_4 = 0;
    u32 r3_4 = 0;
    u32 r0_13 = 0;
    u32 r2_10 = 0;
    u32 r3_10 = 0;
    u32 r6 = r0;
    u32 r5 = r1;
    u32 r4_1 = r6 + 0x172f4u;  // (from the original)
    if (s32(r1) <= 0) {
        u32 r0_1 = call_00309864(r6, 0u, r2, r3);
        if (r0_1 < 0xau) {  // (from the original)
            r0_2 = call_002fb378(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
            call_002fb430(frame.at(0x14).addr(), r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
            u32 r1_2 = *gptr<u32>(r0_2 + 8u);
            *frame.at<u32>(0) = *gptr<u32>(r0_2 + 4u);
            *frame.at<u32>(4) = r1_2;
            gptr<Local_0010d454_ea_1> ea_1 = gptr<Local_0010d454_ea_1>(frame.at(0x14).addr());  // (from the original)
            u32 r0_5 = call_002fb4a0(ea_1->word_0, ea_1->word_4, ea_1->word_8, *gptr<u32>(r0_2));
            r1_4 = guest::cpu()->r[1];
            r2_4 = guest::cpu()->r[2];
            r3_4 = guest::cpu()->r[3];
            if (r0_5 == 0) {
                goto L_10d4a0;
            }
            call_0030a2b4(r4_1, r0_2, r2_4, r3_4);
        }
        return;
L_10d4a0:;
        u32 r0_6 = r6 + 0x17396u;  // (from the original)
        u32 r0_7 = call_003002f0(r0_6, r1_4, r2_4, r3_4);
        if (r0_7 == 0) {
            return;
        }
        call_0030a34c(frame.at(0x10).addr(), r0_6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
        u32 r1_5 = *gptr<u32>(r0_2 + 8u);
        *frame.at<u32>(0) = *gptr<u32>(r0_2 + 4u);
        *frame.at<u32>(4) = r1_5;
        gptr<Local_0010d454_ea_2> ea_2 = gptr<Local_0010d454_ea_2>(frame.at(0x10).addr());  // (from the original)
        u32 r0_10 = call_002fb4a0(ea_2->word_0, ea_2->word_4, ea_2->word_8, *gptr<u32>(r0_2));
        if (r0_10 == 0) {
            return;
        }
        call_0030a390(r6, r0_2, guest::cpu()->r[2], guest::cpu()->r[3]);
        return;
    }
    u32 r0_11 = call_002fdf10(4u, r1, r2, r3);
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    u32 r3_8 = guest::cpu()->r[3];
    if (r0_11 == 0) {
        r0_11 = call_002fdf10(2u, r1_7, r2_8, r3_8);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = call_002fdf10(0xdu, r1_7, r2_8, r3_8);  // (from the original)
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = call_002fdf10(9u, r1_7, r2_8, r3_8);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        r0_11 = call_002fdf10(5u, r1_7, r2_8, r3_8);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (r0_11 != 0) {
            goto L_10d51a;
        }
        u32 r0_12 = call_00309864(r6, 0u, r2_8, r3_8);
        r0_11 = call_00309ccc(r0_12, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        r1_7 = guest::cpu()->r[1];
        r2_8 = guest::cpu()->r[2];
        r3_8 = guest::cpu()->r[3];
        if (s32(r0_11) < 0) {
            goto L_10d52a;
        }
    }
L_10d51a:;
    r0_13 = call_002fb378(r0_11, r1_7, r2_8, r3_8);
    r2_10 = guest::cpu()->r[2];
    r3_10 = guest::cpu()->r[3];
    call_0030a2b4(r4_1, r0_13, r2_10, r3_10);
    return;
L_10d52a:;
    u32 r0_14 = call_002fb378(r0_11, r1_7, r2_8, r3_8);
    u32 r2_11 = *gptr<u32>(r0_14 + 4u);
    u32 r1_9 = *gptr<u32>(r0_14);
    u32 r0_15 = *gptr<u32>(r0_14 + 8u);
    u32 r4 = 0u;
    *frame.at<u32>(0) = r4;
    *frame.at<u32>(0x28) = r0_15;  // (from the original)
    *frame.at<u32>(0x20) = r1_9;  // (from the original)
    *frame.at<u32>(0x24) = r2_11;  // (from the original)
    call_0030a488(frame.at(0x20).addr(), u32(0) - (r5 - 1u), r4, r4);  // (from the original)
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    do {
        u32 r0_17 = call_0030a390(r6, frame.at(0x20).addr(), r2, r3);  // (from the original)
        if (r0_17 == 0) {
            return;
        }
        r5 -= 1u;
        *frame.at<u32>(0) = r4;
        call_0030a488(frame.at(0x20).addr(), 1u, 0u, 0u);  // (from the original)
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        guest::preempt();
    } while (r5 != 0);
}

}  // namespace d_0010d454
GUEST_EXPORT_FRAMED(0x0010d455, d_0010d454::f_0010d454, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010d690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010d690 {

struct __attribute__((packed)) Local_0010d690_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010d690_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0010d690_ea_1, word_18, 0x18);  // (from the original)

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32, u32)> call_002f8574;  // (from the original)

void f_0010d690(u32 r0, u32 r1) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    u32 res_1 = 0;
    u32 r1_1 = 0;
    u32 r5_2 = 0;
    u32 r6_1 = 0;
    u32 r4_1 = 0;
    u32 r5_5 = 0;
    u32 r6_2 = 0;
    u32 r7_1 = 0;
    u32 tpc_1 = 0;
    gptr<Local_0010d690_ea_1> ea_1 = gptr<Local_0010d690_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 0x24u;  // (from the original)
    r4 = r0;
    r7 = 0xffffu;  // (from the original)
    u32 r0_1 = *gptr<u32>(r13 + 0x28u);  // (from the original)
    if (r0_1 == r7) {
        r13 += 0x2cu;  // (from the original)
        r4_1 = *gptr<u32>(r13);
        r5_5 = *gptr<u32>(r13 + 4);
        r6_2 = *gptr<u32>(r13 + 8);
        r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
        tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
        r13 += 0x14;  // (from the original)
        guest::cpu()->r[1] = r1;
        guest::cpu()->r[4] = r4_1;
        guest::cpu()->r[5] = r5_5;
        guest::cpu()->r[6] = r6_2;
        guest::cpu()->r[7] = r7_1;
        guest::cpu()->r[13] = r13;
        return;
    }
    u32 r2 = r0_1;
    r0 = r4 + 0x17656u;  // (from the original)
    r1 = 0u;
    r5 = r0;
L_10d6a8:;
    u32 r3_1 = *gptr<u16>(r0);
    if (r3_1 != r2) {
        goto L_10d742;
    }
    if (r1 < 0x10u) {  // (from the original)
        *gptr<u16>((r1 << 1) + r4 + 0x17656u) = u16(r7);  // (from the original)
        r6 = r5;
        guest::cpu()->r[13] = r13;
        call_002f8574(r13, r5, 0x20u, r3_1);  // (from the original)
        r5 = r6 - 2u;
        r0 = 8u;
        do {
            *gptr<u16>(r5 + 2u) = u16(r7);
            r5 += 4u;
            res_1 = r0 - 1u;
            r0 = res_1;
            *gptr<u16>(r5) = u16(r7);
            guest::preempt();
        } while (res_1 != 0);
        r1 = 0u;
        r2 = 0x10u;  // (from the original)
        r0 = r13;
        do {
            u32 r3_2 = *gptr<u16>(r0);
            if (r3_2 != r7) {
                u32 r5_1 = r1 << 1;
                r1 += 1u;
                *gptr<u16>(r6 + r5_1) = u16(r3_2);
            }
            r0 += 2u;
            r2 -= 1u;
            guest::preempt();
        } while (r2 != 0);
    }
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
        u32 r1_2 = r1 + 1u;
        *gptr<u16>((r7 - r1 << 1) + r4 + r0 + 0x16u) = u16(u32(*gptr<u16>(((0xeu - r1 << 1) + r4 + r0) + 0x16u)));  // (from the original)
        u32 r3_4 = *gptr<u16>((0xeu - r1_2 << 1) + r4 + r0 + 0x16u);  // (from the original)
        r1 = r1_2 + 1u;
        r2 += 2u;
        *gptr<u16>(((r7 - r1_2 << 1) + r4 + r0) + 0x16u) = u16(r3_4);  // (from the original)
        guest::preempt();
    } while (s32(r2) < 0xf);  // (from the original)
    r1 = r4 + r0;
    *gptr<u16>(r1 + 0x16u) = u16(*gptr<u32>(r13 + 0x28u));  // (from the original)
    r13 += 0x2cu;  // (from the original)
    r4_1 = *gptr<u32>(r13);
    r5_5 = *gptr<u32>(r13 + 4);
    r6_2 = *gptr<u32>(r13 + 8);
    r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_5;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
    return;
L_10d742:;
    r0 += 2u;
    r1 += 1u;
    if (s32(r1) >= 0x10) {  // (from the original)
        guest::preempt();
        goto L_10d6ee;
    }
    guest::preempt();
    goto L_10d6a8;
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

void f_0010d984(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r6 = r1;
    call_0010d454(r0, r1, r2, r3);
    call_0030aac8(r0 + 0x173c6u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0030aac8(r0 + 0x173a0u, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00307104(r0 + 0x173ecu, r6, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_00307108(r0 + 0x1764au, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r7 = 0x55a6u;  // (from the original)
    u32 r5 = 0u;
    do {
        u32 r0_6 = call_002fb96c(uxtb(r5), r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_6 != 0) {
            u32 r0_8 = call_002fbd54(r0_6 + r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_8 != 0) {
                call_0030715c(r0_6 + 0x8d4cu, r6, r2, r3);  // (from the original)
                u32 r2_5 = guest::cpu()->r[2];
                u32 r3_5 = guest::cpu()->r[3];
                if (r6 != 0) {
                    call_00307160(r0_6 + 0x8d6cu, guest::cpu()->r[1], r2_5, r3_5);  // (from the original)
                    r2_5 = guest::cpu()->r[2];
                    r3_5 = guest::cpu()->r[3];
                }
                call_00307164(r0_6 + 0x8d5cu, r6, r2_5, r3_5);  // (from the original)
                call_0030ac68(r0_6 + 0x8d84u, r0_6, r6, guest::cpu()->r[3]);  // (from the original)
                call_00112e34(r0_6 + 0x8dfau, r6, r5, guest::cpu()->r[3]);  // (from the original)
                call_00307168(r0_6 + 0x8e08u, r6, r0_6, guest::cpu()->r[3]);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r5 += 1u;
        guest::preempt();
    } while (s32(r5) < 4);
}

}  // namespace d_0010d984
GUEST_EXPORT_FRAMED(0x0010d985, d_0010d984::f_0010d984, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010db50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010db50 {

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002ff408, u32(u32, u32, u32, u32)> call_002ff408;  // (from the original)

void f_0010db50(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r5_1 = 0;
    *frame.at<u32>(0) = r3;
    u32 r4 = 0u;
    u32 r6 = r1;
    u32 r7 = r0;
    *frame.at<u32>(0) = r6 * (5u << 7);
    do {
        if (r4 >= 0xau) {  // (from the original)
            r5_1 = 0u;
        } else {
            r5_1 = r4 * 0x2518u + r7;  // (from the original)
            if (r5_1 == 0) {
                goto L_10db8e;
            }
            u32 r0_1 = call_002fe470(r5_1, 0x2518u, guest::cpu()->r[2], r3);  // (from the original)
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_10db8e;
            }
        }
        if (r5_1 != 0 && r6 < 4u) {
            u32 r1_1 = *frame.at<u32>(0) + r5_1;
            call_002ff408(r1_1 + 0x1810u, r1_1, guest::cpu()->r[2], r3);  // (from the original)
            r3 = guest::cpu()->r[3];
        }
L_10db8e:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
}

}  // namespace d_0010db50
GUEST_EXPORT_FRAMED(0x0010db51, d_0010db50::f_0010db50, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010dea4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010dea4 {

inline constexpr guest::Function<0x002fae84, u32(u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32)> call_002ff8f0;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32, u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030b250, u32(u32, u32)> call_0030b250;  // (from the original)

u32 f_0010dea4(u32 r0) {
    u32 r4_1 = r0 + 0x173ecu;  // (from the original)
    u32 r5_1 = r4_1 + 0x46u;  // (from the original)
    u32 r0_1 = call_00309ef0(r5_1, 0x173ecu, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_002fae84(r0_1, r1_1);
        u32 r0_4 = call_002ff8f0(r0_2 + 0x20u, r4_1);  // (from the original)
        u32 r1_2 = guest::cpu()->r[1];
        if (r0_4 != 0 && *gptr<u8>(r5_1 + 9u) == 4u) {
            u32 r0_6 = call_002fcaf4(r4_1 + 0x52u, r1_2);  // (from the original)
            r1_2 = guest::cpu()->r[1];
            if (r0_6 == 0) {
                return r0_6;
            }
        }
        r0_1 = call_0030b250(r4_1, r1_2);
        r1_1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_0010dea4
GUEST_EXPORT_FRAMED(0x0010dea5, d_0010dea4::f_0010dea4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010df1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010df1c {

struct __attribute__((packed)) Local_0010df1c_r0_2 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010df1c_r0_2, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32, u32)> call_00301e20;  // (from the original)

void f_0010df1c(u32 r0, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r4 = r0;
    u32 r6 = r1;
    r1 = 0xfu & ~lsl_r(1u, r6 & 0xff);  // (from the original)
    u32 r7 = 0x2518u;  // (from the original)
    u32 r5 = 0u;
    u32 r2 = ~0x78u;  // (from the original)
    *frame.at<u32>(0) = r1 << 3 | r2;
    do {
        u32 r0_1 = call_00301e20(r4, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0 && r6 < 4u) {
            r2 = *frame.at<u32>(0);
            gptr<Local_0010df1c_r0_2> r0_2 = gptr<Local_0010df1c_r0_2>(r4 + (0x25u << 8));  // (from the original)
            r1 = r0_2->word_10 & r2;
            r0_2->word_10 = r1;
        }
        r5 += 1u;
        r4 += r7;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
}

}  // namespace d_0010df1c
GUEST_EXPORT_FRAMED(0x0010df1d, d_0010df1c::f_0010df1c, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010df64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010df64 {

struct __attribute__((packed)) Local_0010df64_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
};
GUEST_OFFSET(Local_0010df64_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_14, 0x14);  // (from the original)
GUEST_OFFSET(Local_0010df64_ea_1, word_18, 0x18);  // (from the original)

struct __attribute__((packed)) Local_0010df64_r4_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010df64_r4_1, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x001b625c, u32(u32, u32, u32)> call_001b625c;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fb378, u32(u32, u32, u32, u32)> call_002fb378;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> call_00301e20;  // (from the original)

void f_0010df64(u32 r0, u32 r1, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010df64_ea_1> ea_1 = gptr<Local_0010df64_ea_1>(r13 - 0x1c);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r1;
    ea_1->word_8 = r4;
    ea_1->word_c = r5;
    ea_1->word_10 = r6;
    ea_1->word_14 = r7;
    ea_1->word_18 = r14;
    r13 = ea_1.addr() - 4u;
    r5 = r0;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_002fb378(r0, r1, r2, guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r7 = 0x2518u;  // (from the original)
    r6 = 0u;
    *gptr<u32>(r13) = r0_1;
    do {
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_00301e20(r5, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_2 != 0) {
            gptr<Local_0010df64_r4_1> r4_1 = gptr<Local_0010df64_r4_1>(r5 + (0x25u << 8));  // (from the original)
            u32 r0_3 = r4_1->word_10;
            r1 = r0_3 >> 1u & 1u;
            if (r1 != 0) {
                u32 r0_4 = r0_3 & ~(3u << 9);
                r4_1->word_10 = r0_4;
                if ((r0_4 & 1u) == 0u) {
                    if (*gptr<u8>(*gptr<u32>(r13) + 4u) == 0xcu) {  // (from the original)
                        r1 = *gptr<u8>(*gptr<u32>(r13) + 5u);
                        if (r1 == 0x18u) {  // (from the original)
                            goto L_10dfce;
                        }
                    }
                    u32 r0_5 = r0_4 | 1u;
                    r4_1->word_10 = r0_5;
                    guest::cpu()->r[13] = r13;
                    u32 r0_6 = call_002fae84(r0_5, 1u, r2);
                    guest::cpu()->r[13] = r13;
                    call_001b625c(r0_6 + 0x7170cu, r6, 0x7170cu);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    if (s32(*gptr<u32>(r13 + 8u)) <= 1) {
                        goto L_10dfce;
                    }
                    r0_4 = r4_1->word_10;
                }
                r1 = 2u;
                r4_1->word_10 = r0_4 >> 1 << 1 & ~r1;
            }
        }
L_10dfce:;
        r6 += 1u;
        r5 += r7;
        guest::preempt();
    } while (s32(r6) < 0xa);  // (from the original)
    r13 += 0xcu;  // (from the original)
    u32 r4_2 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_1 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[4] = r4_2;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_1;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010df64
GUEST_EXPORT(0x0010df65, d_0010df64::f_0010df64);

// f_0010dfe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010dfe4 {

struct __attribute__((packed)) Local_0010dfe4_r7_3 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Local_0010dfe4_r7_3, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Local_0010dfe4_r7_3, byte_f, 0xf);  // (from the original)

inline guest::global<u32, 0x0095386c> global_0095386c;  // (from the original)
inline constexpr guest::Function<0x001ad5c8, u32(u32, u32)> call_001ad5c8;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe450, u32(u32, u32)> call_002fe450;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fe4d0, u32(u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x003074b8, u32(u32, u32)> call_003074b8;  // (from the original)
inline constexpr guest::Function<0x0030755c, u32(u32, u32)> call_0030755c;  // (from the original)
inline constexpr guest::Function<0x00307560, u32(u32, u32)> call_00307560;  // (from the original)
inline constexpr guest::Function<0x00307564, u32(u32, u32)> call_00307564;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x0030988c, u32(u32, u32)> call_0030988c;  // (from the original)
inline constexpr guest::Function<0x003098b0, u32(u32, u32)> call_003098b0;  // (from the original)
inline constexpr guest::Function<0x003099d0, u32(u32, u32)> call_003099d0;  // (from the original)
inline constexpr guest::Function<0x00309ccc, u32(u32, u32)> call_00309ccc;  // (from the original)
inline constexpr guest::Function<0x0030b36c, u32(u32, u32, u32, u32)> call_0030b36c;  // (from the original)
inline constexpr guest::Function<0x0030b414, u32(u32, u32)> call_0030b414;  // (from the original)

u32 f_0010dfe4(u32 r0, u32 r1) {
    guest::StackFrame frame(0x3c);  // the original's stack frame
    u32 r7_1 = 0;
    u32 r0_12 = 0;
    u32 r7_2 = 0;
    u32 r0_15 = 0;
    gptr<Local_0010dfe4_r7_3> r7_3 = gptr<Local_0010dfe4_r7_3>(0u);
    u32 r7_4 = 0;
    u32 r5 = r0;
    u32 r0_1 = r5 + 0x173c6u;  // (from the original)
    call_0030b36c(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = r5 + 0x173a0u;  // (from the original)
    call_0030b36c(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe4d0(~0u, guest::cpu()->r[1]);
    call_0030b414(0u, guest::cpu()->r[1]);
    u32 r0_4 = *global_0095386c;
    *frame.at<u32>(0x14) = r0_4;  // (from the original)
    if (r0_4 != 0) {
        call_003074b8(r0_4 + 0x98u, 0u);  // (from the original)
    }
    *frame.at<u32>(4) = 0xa;  // (from the original)
    *frame.at<u32>(0xc) = 0;  // (from the original)
    u32 r6 = 0u;
    *frame.at<u32>(8) = 0;
    *frame.at<u32>(0x34) = 0;  // (from the original)
    u32 r0_6 = r5 + 0x173ecu;  // (from the original)
    *frame.at<u32>(0x24) = r0_6;  // (from the original)
    if (*gptr<u8>(r0_6 + 0x4fu) < 4u) {  // (from the original)
        *frame.at<u32>(0x34) = 1;  // (from the original)
    }
    u32 r0_7 = ~0u;
    *frame.at<u32>(0x10) = r0_7;  // (from the original)
    *frame.at<u32>(0x20) = r0_7;  // (from the original)
    u32 r0_8 = call_003098b0(r0_1, 0x173ecu);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    if (r0_8 == 0) {
        r1_4 = r5 + 0x173e0u;  // (from the original)
        *frame.at<u32>(0x10) = u32(*gptr<s8>(r1_4 + 7u));  // (from the original)
    }
    u32 r0_9 = call_003098b0(r0_2, r1_4);
    u32 r1_5 = guest::cpu()->r[1];
    if (r0_9 == 0) {
        r1_5 = r5 + 0x173c0u;  // (from the original)
        *frame.at<u32>(0x20) = u32(*gptr<s8>(r1_5 + 1u));  // (from the original)
    }
    u32 r0_10 = ~0u;
    *frame.at<u32>(0x18) = r0_10;  // (from the original)
    *frame.at<u32>(0x1c) = r0_10;  // (from the original)
    u32 r0_11 = call_003091e0(r0_10, r1_5);
    r0 = call_003091ec(r0_11, guest::cpu()->r[1]);
    r1 = guest::cpu()->r[1];
    u32 r4 = r0;
    if (r0 == 0) {
        goto L_10e0b8;
    }
    r7_1 = r4 + 0x8dfau;  // (from the original)
    r0_12 = call_0030988c(r7_1, r1);
    if (r0_12 != 0) {
        *frame.at<u32>(0x18) = u32(*gptr<s8>(r7_1 + 0xcu));  // (from the original)
    }
    r0 = *gptr<u8>(r4 + 0x8f88u);  // (from the original)
    r1 = r0 >> 6 << 0x1f;  // (from the original)
    if (r1 != 0) {
        r1 = r0 >> 7;
        if (r1 == 0) {
            r4 = 0u;
            *frame.at<u32>(0x1c) = r0 >> 2u & 0xfu;  // (from the original)
            goto L_10e0b2;
        }
    }
    r4 = 0u;
    goto L_10e0b8;
L_10e0b2:;
    r0 = *frame.at<u32>(0x1c);  // (from the original)
    if (r4 == r0) {
        goto L_10e172;
    }
L_10e0b8:;
    if (r4 >= 0xau) {  // (from the original)
        r7_2 = 0u;
    } else {
        r1 = 0x2518u;  // (from the original)
        r0 = r4 * r1;
        r7_2 = r0 + r5;
        if (r7_2 == 0) {
            goto L_10e172;
        }
        r0 = call_002fe470(r7_2, r1);
        r1 = guest::cpu()->r[1];
        if (r0 == 0) {
            goto L_10e172;
        }
    }
    if (r7_2 != 0) {
        u32 r0_13 = call_002fe450(r4, r1);
        u32 r1_7 = guest::cpu()->r[1];
        if (r0_13 != 0) {
            u32 r0_14 = call_003099d0(r0_13, r1_7);
            r1_7 = guest::cpu()->r[1];
            if (s32(r0_14) >= 0) {
                goto L_10e0f0;
            }
        }
        r0_15 = call_00309ccc(r4, r1_7);
        r1 = guest::cpu()->r[1];
        if (s32(r0_15) < 0) {
            r7_3 = gptr<Local_0010dfe4_r7_3>(r7_2 + (0x25u << 8));  // (from the original)
            if (r7_3->byte_e == 0) {
                u32 r0_16 = *frame.at<u32>(0x14);  // (from the original)
                if (r0_16 != 0) {
                    call_0030755c(r0_16 + 0x98u, r4);  // (from the original)
                    r1 = guest::cpu()->r[1];
                }
                r7_3->byte_f = 0;
                r0 = *frame.at<u32>(0x10);  // (from the original)
                r6 += 1u;
                if (r4 == r0) {
                    goto L_10e172;
                }
                r0 = *frame.at<u32>(0x20);  // (from the original)
                if (r4 == r0) {
                    goto L_10e172;
                }
                r0 = *frame.at<u32>(0x18);  // (from the original)
                if (r4 == r0) {
                    goto L_10e172;
                }
                if (*frame.at<u32>(0x34) != 0) {  // (from the original)
                    r0 = call_00307560(*frame.at<u32>(0x24), r4);  // (from the original)
                    r1 = guest::cpu()->r[1];
                    if (r0 != 3u) {
                        goto L_10e172;
                    }
                }
                if (*frame.at<u32>(4) > r4) {
                    r1 = *frame.at<u32>(8);
                    u32 r0_19 = lsl_r(1u, r4 & 0xff);  // (from the original)
                    if ((r1 & r0_19) == 0) {
                        r1 = *frame.at<u32>(8) | r0_19;
                        u32 r0_20 = *frame.at<u32>(0xc);  // (from the original)
                        *frame.at<u32>(8) = r1;
                        *frame.at<u32>(0xc) = r0_20 + 1u;  // (from the original)
                    }
                }
            }
            goto L_10e160;
        }
L_10e0f0:;
        r0 = 2u;
        r1 = r7_2 + (0x25u << 8);  // (from the original)
        *gptr<u8>(r1 + 0xfu) = u8(r0);  // (from the original)
        goto L_10e172;
L_10e160:;
        r0 = r7_3->byte_f;
        if (r0 != 3u && r0 != 5u && r0 != 6u) {
            goto L_10e172;
        }
        r0 = 2u;
        r7_3->byte_f = u8(r0);
    }
L_10e172:;
    r4 += 1u;
    if (s32(r4) >= 0xa) {  // (from the original)
        if (s32(r6) > 3) {
            *frame.at<u32>(0) = *frame.at<u32>(0x14) + 0x98u;  // (from the original)
            do {
                r0 = call_002fe418(frame.at(4).addr(), r1);
                r1 = guest::cpu()->r[1];
                u32 r4_1 = r0;
                if (r0 >= 0xau) {  // (from the original)
                    r7_4 = 0u;
                } else {
                    r1 = 0x2518u;  // (from the original)
                    r0 = r0 * r1;
                    r7_4 = r0 + r5;
                    if (r7_4 == 0) {
                        goto L_10e1da;
                    }
                    r0 = call_002fe470(r7_4, r1);
                    r1 = guest::cpu()->r[1];
                    if (r0 == 0) {
                        goto L_10e1da;
                    }
                }
                if (r7_4 != 0) {
                    r1 = r7_4 + (0x25u << 8);  // (from the original)
                    *gptr<u8>(r1 + 0xfu) = 2;  // (from the original)
                    if (*frame.at<u32>(4) > r4_1) {
                        r1 = *frame.at<u32>(8);
                        u32 r0_22 = lsl_r(1u, r4_1 & 0xff);  // (from the original)
                        if ((r1 & r0_22) != 0) {
                            r1 = *frame.at<u32>(8) & ~r0_22;
                            u32 r0_23 = *frame.at<u32>(0xc);  // (from the original)
                            *frame.at<u32>(8) = r1;
                            *frame.at<u32>(0xc) = r0_23 - 1u;  // (from the original)
                        }
                    }
                    r0 = *frame.at<u32>(0x14);  // (from the original)
                    r6 -= 1u;
                    if (r0 != 0) {
                        r0 = call_00307564(*frame.at<u32>(0), r4_1);
                        r1 = guest::cpu()->r[1];
                    }
                }
L_10e1da:;
                guest::preempt();
            } while (s32(r6) > 3);
        }
        u32 r0_25 = call_001ad5c8(r0, r1);
        return r0_25;
    }
    guest::preempt();
    goto L_10e0b2;
}

}  // namespace d_0010dfe4
GUEST_EXPORT_FRAMED(0x0010dfe5, d_0010dfe4::f_0010dfe4, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010e210: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e210 {

inline constexpr guest::Function<0x0030b544, u32(u32)> call_0030b544;  // (from the original)

u32 f_0010e210(u32 r0) {
    call_0030b544(r0 + 0x173c6u);  // (from the original)
    u32 r0_3 = call_0030b544(r0 + 0x173a0u);  // (from the original)
    return r0_3;
}

}  // namespace d_0010e210
GUEST_EXPORT_FRAMED(0x0010e211, d_0010e210::f_0010e210, 0x4010);  // pushes {r4, lr} first, as the original

// f_0010e230: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e230 {

inline constexpr guest::Function<0x002f777c, u32(u32, u32, u32, u32)> call_002f777c;  // (from the original)
inline constexpr guest::Function<0x002fc288, u32(u32, u32, u32, u32)> call_002fc288;  // (from the original)
inline constexpr guest::Function<0x002fc8fc, u32(u32, u32)> call_002fc8fc;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x002fea2c, u32(u32, u32, u32, u32)> call_002fea2c;  // (from the original)
inline constexpr guest::Function<0x003075c8, u32(u32, u32, u32, u32)> call_003075c8;  // (from the original)
inline constexpr guest::Function<0x0030b5a5, u32(u32, u32, u32, u32)> call_0030b5a4;  // (from the original)
inline constexpr guest::Function<0x0030b654, u32(u32, u32, u32, u32)> call_0030b654;  // (from the original)
inline constexpr guest::Function<0x0030b674, u32(u32, u32, u32, u32)> call_0030b674;  // (from the original)
inline constexpr guest::Function<0x0030b6b8, u32(u32)> call_0030b6b8;  // (from the original)

void f_0010e230(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x304);  // the original's stack frame
    u32 r7 = 0;
    u32 r6 = r0;
    *frame.at<u32>(8) = 0xa;  // (from the original)
    u32 r4 = 0u;
    *frame.at<u32>(0xc) = 0;  // (from the original)
    *frame.at<u32>(0x10) = 0;  // (from the original)
    do {
        if (r4 >= 0xau) {  // (from the original)
            r7 = 0u;
        } else {
            r1 = 0x2518u;  // (from the original)
            r7 = r4 * r1 + r6;
            if (r7 == 0) {
                goto L_10e290;
            }
            u32 r0_1 = call_002fe470(r7, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_1 == 0) {
                goto L_10e290;
            }
        }
        if (r7 != 0) {
            u32 r5 = 0u;
            do {
                call_0030b5a4(frame.at(0).addr(), r7, r5, r3);
                u32 r0_4 = call_0030b654(frame.at(0).addr(), guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                u32 r1_2 = guest::cpu()->r[1];
                u32 r2_2 = guest::cpu()->r[2];
                u32 r3_2 = guest::cpu()->r[3];
                if (r0_4 != 0) {
                    u32 r0_6 = call_0030b674(frame.at(0).addr(), r1_2, r2_2, r3_2);
                    r1_2 = guest::cpu()->r[1];
                    r2_2 = guest::cpu()->r[2];
                    r3_2 = guest::cpu()->r[3];
                    if (r0_6 == 1u || r0_6 == 2u) {
                        if (*frame.at<u32>(8) > r4) {
                            r1_2 = *frame.at<u32>(0xc);  // (from the original)
                            u32 r0_7 = lsl_r(1u, r4 & 0xff);  // (from the original)
                            if ((r1_2 & r0_7) == 0) {
                                r1_2 = *frame.at<u32>(0xc) | r0_7;  // (from the original)
                                u32 r0_8 = *frame.at<u32>(0x10);  // (from the original)
                                *frame.at<u32>(0xc) = r1_2;  // (from the original)
                                *frame.at<u32>(0x10) = r0_8 + 1u;  // (from the original)
                            }
                        }
                        call_002f777c(frame.at(0).addr(), r1_2, r2_2, r3_2);
                        r1 = guest::cpu()->r[1];
                        r2 = guest::cpu()->r[2];
                        r3 = guest::cpu()->r[3];
                        goto L_10e290;
                    }
                }
                call_002f777c(frame.at(0).addr(), r1_2, r2_2, r3_2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                r5 += 1u;
                guest::preempt();
            } while (s32(r5) < 0xa);  // (from the original)
        }
L_10e290:;
        r4 += 1u;
        guest::preempt();
    } while (s32(r4) < 0xa);  // (from the original)
    u32 r0_12 = call_002fe418(frame.at(8).addr(), r1, r2, r3);
    u32 r1_3 = r6 + 0x19760u;  // (from the original)
    *gptr<u8>(r1_3 + 7u) = u8(r0_12);
    call_002fc288(frame.at(0x18).addr(), r1_3, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    *frame.at<u32>(0) = 1;
    *frame.at<u32>(4) = 1;
    call_003075c8(frame.at(0x18).addr(), 5u, 0u, 1u);  // (from the original)
    u32 r2_4 = guest::cpu()->r[2];
    u32 r3_4 = guest::cpu()->r[3];
    call_002fea2c(frame.at(0x14).addr(), frame.at(0x18).addr(), r2_4, r3_4);  // (from the original)
    u32 r0_17 = call_0030b6b8(frame.at(0x14).addr());  // (from the original)
    u32 r1_5 = r6 + 0x196e0u;  // (from the original)
    *gptr<u16>(r1_5 + 0x1au) = u16(r0_17);  // (from the original)
    call_002f777c(r0_17, r1_5, r2_4, r3_4);
    call_002fc8fc(r0_17, guest::cpu()->r[1]);
}

}  // namespace d_0010e230
GUEST_EXPORT_FRAMED(0x0010e231, d_0010e230::f_0010e230, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010e360: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e360 {


u32 f_0010e360(u32 r0) {
    u32 r2 = 0x95c230u;  // (from the original)
    u32 r1 = 0u;
    do {
        u32 r3_1 = r1 << 1;
        if (*gptr<u16>(r2 + r3_1) == r0 || *gptr<u16>(r3_1 + r2 + 2u) == r0) {
            return 1u;
        }
        r1 += 2u;
        guest::preempt();
    } while (s32(r1) < 0xa);  // (from the original)
    return 0u;
}

}  // namespace d_0010e360
GUEST_EXPORT_FRAMED(0x0010e361, d_0010e360::f_0010e360, 0x10);  // pushes {r4} first, as the original

// f_0010e7ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010e7ac {

struct __attribute__((packed)) Local_0010e7ac_r0_17 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(Local_0010e7ac_r0_17, byte_4, 0x4);  // (from the original)

struct __attribute__((packed)) Local_0010e7ac_r0_24 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(Local_0010e7ac_r0_24, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Local_0010e7ac_r0_24, byte_f, 0xf);  // (from the original)

struct __attribute__((packed)) Local_0010e7ac_r1_12 {
    u8 unknown_0[0xe];  // (not used here)
    u8 byte_e;
    u8 unknown_f[0x1];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010e7ac_r1_12, byte_e, 0xe);  // (from the original)
GUEST_OFFSET(Local_0010e7ac_r1_12, word_10, 0x10);  // (from the original)

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline constexpr guest::Function<0x0029cc7c, u32(u32, u32)> call_0029cc7c;  // (from the original)
inline constexpr guest::Function<0x002fe419, u32(u32, u32, u32)> call_002fe418;  // (from the original)
inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00308355, u32(u32, u32, u32)> call_00308354;  // (from the original)
inline constexpr guest::Function<0x003091e0, u32(u32, u32, u32)> call_003091e0;  // (from the original)
inline constexpr guest::Function<0x003091ec, u32(u32, u32, u32)> call_003091ec;  // (from the original)
inline constexpr guest::Function<0x00309f85, u32(u32, u32, u32)> call_00309f84;  // (from the original)
inline constexpr guest::Function<0x0030b8bc, u32(u32, u32, u32)> call_0030b8bc;  // (from the original)
inline constexpr guest::Function<0x0030c428, u32(u32, u32, u32, u32)> call_0030c428;  // (from the original)
inline constexpr guest::Function<0x0030c4d0, u32(u32, u32, u32)> call_0030c4d0;  // (from the original)
inline constexpr guest::Function<0x0030c4f4, u32(u32, u32, u32)> call_0030c4f4;  // (from the original)
inline constexpr guest::Function<0x0030c578, u32(u32, u32, u32)> call_0030c578;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32, u32)> call_0030c598;  // (from the original)

u32 f_0010e7ac(u32 r0, u32 r1, u32 r2) {
    u32 r13 = guest::cpu()->r[13];
    u32 r4 = r0;
    r13 -= 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    call_0030c428(r4 + 0x172f4u, r1, r2, guest::cpu()->r[3]);  // (from the original)
    u32 r1_1 = guest::cpu()->r[1];
    u32 r2_1 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030b8bc(r4 + 0x173a0u, r1_1, r2_1);  // (from the original)
    u32 r1_2 = guest::cpu()->r[1];
    u32 r2_2 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030b8bc(r4 + 0x173c6u, r1_2, r2_2);  // (from the original)
    u32 r1_3 = guest::cpu()->r[1];
    u32 r2_3 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030c4d0(r4 + 0x173ecu, r1_3, r2_3);  // (from the original)
    u32 r1_4 = guest::cpu()->r[1];
    u32 r2_4 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030c4f4(r4 + 0x17448u, r1_4, r2_4);  // (from the original)
    u32 r1_5 = guest::cpu()->r[1];
    u32 r2_5 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030c578(r4 + 0x1764au, r1_5, r2_5);  // (from the original)
    u32 r1_6 = guest::cpu()->r[1];
    u32 r2_6 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_00308354(r4 + 0x17676u, r1_6, r2_6);  // (from the original)
    u32 r1_7 = guest::cpu()->r[1];
    u32 r2_7 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_00308354(r4 + 0x185f2u, r1_7, r2_7);  // (from the original)
    u32 r1_8 = guest::cpu()->r[1];
    u32 r2_8 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030c598(r4 + 0x19570u, r1_8, r2_8);  // (from the original)
    u32 r1_9 = guest::cpu()->r[1];
    u32 r2_9 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    call_0030c598(r4 + 0x19630u, r1_9, r2_9);  // (from the original)
    u32 r1_10 = ~0u;
    u32 r2_10 = r4 + 0x19760u;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = 5;  // (from the original)
    *gptr<u8>(r2_10 + 7u) = u8(r1_10);
    *gptr<u32>(r13) = 0xa;  // (from the original)
    u32 r7 = r4;
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13 + 8u) = 0;
    guest::cpu()->r[13] = r13;
    u32 r0_11 = call_003091e0(0u, r1_10, r2_10);
    u32 r1_11 = guest::cpu()->r[1];
    u32 r2_11 = guest::cpu()->r[2];
    guest::cpu()->r[13] = r13;
    u32 r0_12 = call_003091ec(r0_11, r1_11, r2_11);
    r2 = guest::cpu()->r[2];
    r1 = 0x55a6u;  // (from the original)
    u32 r6 = 0x2518u;  // (from the original)
    u32 r5 = 0u;
    *gptr<u32>(r13 + 0x10u) = r0_12;  // (from the original)
    *gptr<u32>(r13 + 0x14u) = r0_12 + r1;  // (from the original)
    do {
        guest::cpu()->r[13] = r13;
        u32 r0_13 = call_00301e20(r7, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_13 != 0) {
            gptr<Local_0010e7ac_r1_12> r1_12 = gptr<Local_0010e7ac_r1_12>(r7 + (0x25u << 8));  // (from the original)
            r1_12->byte_e = 1;
            r1 = r1_12->word_10;
            r2 = r1 & 1u;
            if (r2 == 0) {
                r1 = r1 >> 1u & 1u;
                if (r1 == 0) {
                    r1 = *gptr<u32>(r13);
                    if (r1 > r5) {
                        r1 = *gptr<u32>(r13 + 4u);
                        u32 r0_14 = lsl_r(1u, r5 & 0xff);  // (from the original)
                        if ((r1 & r0_14) == 0) {
                            r1 = *gptr<u32>(r13 + 4u) | r0_14;
                            u32 r0_15 = *gptr<u32>(r13 + 8u);
                            *gptr<u32>(r13 + 4u) = r1;
                            *gptr<u32>(r13 + 8u) = r0_15 + 1u;
                        }
                    }
                }
            }
            if (*gptr<u32>(r13 + 0x10u) != 0) {  // (from the original)
                u32 r1_13 = *gptr<u32>(r13 + 0x14u);  // (from the original)
                guest::cpu()->r[13] = r13;
                u32 r0_16 = call_00309f84(r7, r1_13, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_16 != 0) {
                    gptr<Local_0010e7ac_r0_17> r0_17 = gptr<Local_0010e7ac_r0_17>(r0_16 + 0xb6u);  // (from the original)
                    r2 = 0x8fu;  // (from the original)
                    r1 = u32(r0_17->byte_4) & 0xf1u & r2;  // (from the original)
                    r0_17->byte_4 = u8(r1);
                }
            }
        }
        r5 += 1u;
        r7 += r6;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    goto L_10e8ea;
L_10e8b4:;
    if (r7 != 0) {
        r1 = 0u;
        *gptr<u8>(r7 + (0x25u << 8) + 0xeu) = u8(r1);  // (from the original)
        if (*gptr<u32>(r13) > r5) {
            r1 = *gptr<u32>(r13 + 4u);
            u32 r0_18 = lsl_r(1u, r5 & 0xff);  // (from the original)
            if ((r1 & r0_18) != 0) {
                r1 = *gptr<u32>(r13 + 4u) & ~r0_18;
                u32 r0_19 = *gptr<u32>(r13 + 8u);
                *gptr<u32>(r13 + 4u) = r1;
                *gptr<u32>(r13 + 8u) = r0_19 - 1u;
            }
        }
        *gptr<u32>(r13 + 0xcu) = *gptr<u32>(r13 + 0xcu) - 1u;  // (from the original)
    }
L_10e8e4:;
    if (s32(*gptr<u32>(r13 + 0xcu)) <= 0) {  // (from the original)
        goto L_10e8f0;
    }
L_10e8ea:;
    if (*gptr<u32>(r13 + 8u) != 0) {
        guest::cpu()->r[13] = r13;
        u32 r0_21 = call_002fe418(r13, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r5 = r0_21;
        if (r0_21 >= 0xau) {  // (from the original)
            r7 = 0u;
            guest::preempt();
            goto L_10e8b4;
        }
        r1 = 0x2518u;  // (from the original)
        r7 = r0_21 * r1 + r4;
        if (r7 == 0) {
            guest::preempt();
            goto L_10e8e4;
        }
        guest::cpu()->r[13] = r13;
        u32 r0_22 = call_002fe470(r7, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_22 == 0) {
            guest::preempt();
            goto L_10e8e4;
        }
        guest::preempt();
        goto L_10e8b4;
    }
L_10e8f0:;
    r5 = 0u;
    r7 = 0x25u << 8;  // (from the original)
    do {
        guest::cpu()->r[13] = r13;
        u32 r0_23 = call_00301e20(r4, r1, r2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (r0_23 != 0) {
            gptr<Local_0010e7ac_r0_24> r0_24 = gptr<Local_0010e7ac_r0_24>(r4 + r7);
            r1 = r0_24->byte_e;
            if (r1 != 0) {
                r1 = 2u;
            }
            r0_24->byte_f = u8(r1);
        }
        r5 += 1u;
        r4 += r6;
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    u32 r0_25 = *global_00953864;
    guest::cpu()->r[13] = r13;
    u32 r0_26 = call_0029cc7c(r0_25, r1);
    r13 += 0x30u;  // (from the original)
    guest::cpu()->r[13] = r13;
    return r0_26;
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
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r2 = 0;
    u32 r0_2 = 0;
    *frame.at<u32>(0) = r0;
    u32 r1 = 0u;
    u32 r4 = 0x2518u;  // (from the original)
    r0 = *frame.at<u32>(0);
    u32 r6 = 0x25u << 8;  // (from the original)
    u32 r3 = 4u;
    do {
        r2 = r0 + r6;
        r0 += r4;
        r1 += 1u;
        *gptr<u32>(r2 + 0x10u) = *gptr<u32>(r2 + 0x10u) & ~r3;  // (from the original)
        guest::preempt();
    } while (s32(r1) < 0xa);  // (from the original)
    u32 r7 = 0x8beu;  // (from the original)
    u32 r5 = *frame.at<u32>(0);
    r6 = 0u;
    do {
        call_00303cdc(r5 + r7, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        r6 += 1u;
        r5 += r4;
        guest::preempt();
    } while (s32(r6) < 0xa);  // (from the original)
    r5 = *frame.at<u32>(0);
    r7 = 0u;
    r6 = r7;
    do {
        r0_2 = call_00301e20(r5, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_2 != 0) {
            r0_2 = call_0030c824(r5, r1, r2, r3);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                r0_2 = call_0030c868(r0_2 + 0x38u, r5, r7, r3);  // (from the original)
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        r6 += 1u;
        r5 += r4;
        guest::preempt();
    } while (s32(r6) < 0xa);  // (from the original)
    guest::cpu()->r[1] = r1;
    return r0_2;
}

}  // namespace d_0010e9a8
GUEST_EXPORT_FRAMED(0x0010e9a9, d_0010e9a8::f_0010e9a8, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0010eeec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010eeec {

struct __attribute__((packed)) Object_0010eeec_0 {
    u8 unknown_0[0x19762];  // (not used here)
    u8 byte_19762;
};
GUEST_OFFSET(Object_0010eeec_0, byte_19762, 0x19762);  // (from the original)

struct __attribute__((packed)) Local_0010eeec_r4_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0010eeec_r4_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010eeec_r4_1, byte_1, 0x1);  // (from the original)

inline constexpr guest::Function<0x002fe470, u32(u32, u32, u32, u32)> call_002fe470;  // (from the original)
inline constexpr guest::Function<0x0030aa59, u32(u32, u32, u32, u32)> call_0030aa58;  // (from the original)

void f_0010eeec(gptr<Object_0010eeec_0> arg0) {
    u32 r0 = arg0.addr();
    u32 r0_4 = 0;
    u32 r0_5 = 0;
    gptr<Local_0010eeec_r4_1> r4_1 = gptr<Local_0010eeec_r4_1>(r0 + 0x19760u);  // (from the original)
    u32 r0_1 = 0u;
    u32 r2_1 = s8(arg0->byte_19762);
    if (r2_1 < 0xau) {  // (from the original)
        u32 r2_2 = r2_1 * 0x2518u;  // (from the original)
        u32 r5_1 = r2_2 + r0;
        if (r5_1 == 0) {
            goto L_10ef2a;
        }
        u32 r0_2 = call_002fe470(r5_1, r0, r2_2, guest::cpu()->r[3]);
        r2_1 = guest::cpu()->r[2];
        if (r0_2 == 0) {
            goto L_10ef2a;
        }
        r0_1 = r5_1;
    }
    if (r0_1 != 0) {
        u32 r1_1 = s8(r4_1->byte_1);
        if (s32(r1_1) >= 0) {
            return;
        }
        u32 r0_3 = call_0030aa58(r0_1, r1_1, r2_1, guest::cpu()->r[3]);
        if (r0_3 == 0) {
            r0_4 = 7u;
            r0_5 = r0_4 - u32(r4_1->byte_0);
            r4_1->byte_1 = u8(r0_5);
            return;
        }
        r0_4 = 0xau;  // (from the original)
        r0_5 = r0_4 - u32(r4_1->byte_0);
        r4_1->byte_1 = u8(r0_5);
        return;
    }
L_10ef2a:;
    r0_5 = ~0u;
    r4_1->byte_1 = u8(r0_5);
}

}  // namespace d_0010eeec
GUEST_EXPORT_FRAMED(0x0010eeed, d_0010eeec::f_0010eeec, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f044: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f044 {


void f_0010f044() {
    guest::call_address<u32>(0x10f04du, guest::cpu()->r[0], guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
}

}  // namespace d_0010f044
GUEST_EXPORT(0x0010f044, d_0010f044::f_0010f044);

// f_0010f0b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f0b0 {

struct __attribute__((packed)) Local_0010f0b0_r0_3 {
    u8 byte_0;
    u8 unknown_1[0x1];  // (not used here)
    u8 byte_2;
};
GUEST_OFFSET(Local_0010f0b0_r0_3, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010f0b0_r0_3, byte_2, 0x2);  // (from the original)

inline constexpr guest::Function<0x002fe4d0, u32(u32, u32)> call_002fe4d0;  // (from the original)
inline constexpr guest::Function<0x00300634, u32(u32, u32)> call_00300634;  // (from the original)
inline constexpr guest::Function<0x00307fcc, u32(u32, u32)> call_00307fcc;  // (from the original)
inline constexpr guest::Function<0x00307fd0, u32(u32, u32)> call_00307fd0;  // (from the original)
inline constexpr guest::Function<0x00307fd4, u32(u32, u32)> call_00307fd4;  // (from the original)
inline constexpr guest::Function<0x0030c599, u32(u32, u32)> call_0030c598;  // (from the original)
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32, u32, u32)> call_0030ddb4;  // (from the original)

u32 f_0010f0b0(u32 r0, u32 r1) {
    call_0030ddb4(r0, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    call_002fe4d0(~0u, guest::cpu()->r[1]);
    if (r1 != 0) {
        u32 r0_2 = call_00307fcc(r0, r1);
        if (r0_2 != 0) {
            gptr<Local_0010f0b0_r0_3> r0_3 = gptr<Local_0010f0b0_r0_3>(r0 + 0x19760u);  // (from the original)
            if (s8(r0_3->byte_2) < 0) {
                r0_3->byte_0 = 0;
            }
        }
        call_00307fd0(r0, r1);
        call_0030c598(r0 + 0x19570u, guest::cpu()->r[1]);  // (from the original)
        call_0030c598(r0 + 0x19630u, guest::cpu()->r[1]);  // (from the original)
    }
    call_00307fd4(r0 + 0x17448u, r1);  // (from the original)
    u32 r0_7 = call_00300634(1u, 0u);
    return r0_7;
}

}  // namespace d_0010f0b0
GUEST_EXPORT_FRAMED(0x0010f0b1, d_0010f0b0::f_0010f0b0, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f138: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f138 {

struct __attribute__((packed)) Object_0010f138_0 {
    u8 unknown_0[0x19760];  // (not used here)
    u8 byte_19760;
};
GUEST_OFFSET(Object_0010f138_0, byte_19760, 0x19760);  // (from the original)

struct __attribute__((packed)) Local_0010f138_r0_1 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0010f138_r0_1, byte_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010f138_r0_1, byte_1, 0x1);  // (from the original)


u32 f_0010f138(gptr<Object_0010f138_0> arg0, u32 r1) {
    gptr<Local_0010f138_r0_1> r0_1 = gptr<Local_0010f138_r0_1>(arg0.addr() + 0x19760u);  // (from the original)
    u32 r2_1 = u32(s8(arg0->byte_19760)) + r1;
    if (r2_1 > 0x7fu) {  // (from the original)
        r2_1 = 0x7fu;  // (from the original)
    }
    u32 r3_1 = s8(r0_1->byte_1);
    r0_1->byte_0 = u8(r2_1);
    if (s32(r3_1) <= 0) {
        guest::cpu()->r[1] = r1;
        return r0_1.addr();
    }
    if (r3_1 > r1) {
        u32 r1_1 = r3_1 - r1;
        r0_1->byte_1 = u8(r1_1);
        guest::cpu()->r[1] = r1_1;
        return r0_1.addr();
    }
    r0_1->byte_1 = 0;
    guest::cpu()->r[1] = 0u;
    return r0_1.addr();
}

}  // namespace d_0010f138
GUEST_EXPORT(0x0010f139, d_0010f138::f_0010f138);

// f_0010f16c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f16c {

inline guest::global<u32, 0x00953864> global_00953864;  // (from the original)
inline guest::global<u8, 0x0095c219> global_0095c219;  // (from the original)
inline constexpr guest::Function<0x002fae84, u32(u32, u32)> call_002fae84;  // (from the original)
inline constexpr guest::Function<0x002fcaf4, u32(u32, u32)> call_002fcaf4;  // (from the original)
inline constexpr guest::Function<0x002ff8f0, u32(u32, u32)> call_002ff8f0;  // (from the original)
inline constexpr guest::Function<0x003081c8, u32(u32)> call_003081c8;  // (from the original)
inline constexpr guest::Function<0x00309ef0, u32(u32, u32)> call_00309ef0;  // (from the original)
inline constexpr guest::Function<0x0030b250, u32(u32, u32)> call_0030b250;  // (from the original)
inline constexpr guest::Function<0x0030ddb4, u32(u32, u32)> call_0030ddb4;  // (from the original)
inline constexpr guest::Function<0x0030e185, u32(u32, u32, u32, u32)> call_0030e184;  // (from the original)

u32 f_0010f16c(u32 r0) {
    call_0030e184(r0, r0 + 0x173c6u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    call_0030e184(r0, r0 + 0x173a0u, guest::cpu()->r[2], guest::cpu()->r[3]);  // (from the original)
    u32 r4 = r0 + 0x173ecu;  // (from the original)
    u32 r5_1 = r4 + 0x46u;  // (from the original)
    u32 r0_1 = call_00309ef0(r5_1, guest::cpu()->r[1]);
    u32 r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = call_002fae84(r0_1, r1);
        u32 r0_4 = call_002ff8f0(r0_2 + 0x20u, r4);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_4 != 0 && *gptr<u8>(r5_1 + 9u) == 4u) {
            goto L_10f1b4;
        }
L_10f1ac:;
        r0_1 = r4;
        call_0030b250(r0_1, r1);
        r1 = guest::cpu()->r[1];
        goto L_10f1c0;
L_10f1b4:;
        r0_1 = call_002fcaf4(r4 + 0x52u, r1);  // (from the original)
        r1 = guest::cpu()->r[1];
        if (r0_1 != 0) {
            guest::preempt();
            goto L_10f1ac;
        }
    }
L_10f1c0:;
    call_0030ddb4(r0_1, r1);
    call_003081c8(*global_00953864);
    *global_0095c219 = 0;
    guest::cpu()->r[1] = 0x95c218u;  // (from the original)
    return 0u;
}

}  // namespace d_0010f16c
GUEST_EXPORT_FRAMED(0x0010f16d, d_0010f16c::f_0010f16c, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0010f3d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_0010f3d0 {

struct __attribute__((packed)) Local_0010f3d0_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0010f3d0_ea_1, word_0, 0x0);  // (from the original)
GUEST_OFFSET(Local_0010f3d0_ea_1, word_4, 0x4);  // (from the original)
GUEST_OFFSET(Local_0010f3d0_ea_1, word_8, 0x8);  // (from the original)
GUEST_OFFSET(Local_0010f3d0_ea_1, word_c, 0xc);  // (from the original)
GUEST_OFFSET(Local_0010f3d0_ea_1, word_10, 0x10);  // (from the original)
GUEST_OFFSET(Local_0010f3d0_ea_1, word_14, 0x14);  // (from the original)

struct __attribute__((packed)) Local_0010f3d0_r7_1 {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(Local_0010f3d0_r7_1, word_10, 0x10);  // (from the original)

inline constexpr guest::Function<0x00301e20, u32(u32, u32, u32)> call_00301e20;  // (from the original)
inline constexpr guest::Function<0x00309865, u32(u32, u32, u32, u32)> call_00309864;  // (from the original)
inline constexpr guest::Function<0x0030e430, u32(u32, u32, u32)> call_0030e430;  // (from the original)
inline constexpr guest::Function<0x0030e455, u32(u32, u32, u32)> call_0030e454;  // (from the original)

void f_0010f3d0(u32 r0, u32 r1_unused, u32 r2) {
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r13 = guest::cpu()->r[13];
    u32 r14 = guest::cpu()->r[14];
    gptr<Local_0010f3d0_ea_1> ea_1 = gptr<Local_0010f3d0_ea_1>(r13 - 0x18);  // (from the original)
    ea_1->word_0 = r0;
    ea_1->word_4 = r4;
    ea_1->word_8 = r5;
    ea_1->word_c = r6;
    ea_1->word_10 = r7;
    ea_1->word_14 = r14;
    r13 = ea_1.addr() - 0x10u;  // (from the original)
    *gptr<u32>(r13) = 0xa;  // (from the original)
    r4 = *gptr<u32>(r13 + 0x10u);  // (from the original)
    *gptr<u32>(r13 + 4u) = 0;
    *gptr<u32>(r13 + 8u) = 0;
    guest::cpu()->r[13] = r13;
    u32 r0_1 = call_00309864(r4, 0u, r2, guest::cpu()->r[3]);
    u32 r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r5 = 0u;
    r6 = 0x25u << 8;  // (from the original)
    *gptr<u32>(r13 + 0xcu) = r0_1;  // (from the original)
    do {
        guest::cpu()->r[13] = r13;
        u32 r0_2 = call_00301e20(r4, r1, r2);
        if (r0_2 != 0) {
            gptr<Local_0010f3d0_r7_1> r7_1 = gptr<Local_0010f3d0_r7_1>(r4 + r6);
            u32 r1_1 = r7_1->word_10;
            u32 r2_1 = r1_1 >> 1u & 1u;
            if (r2_1 != 0) {
                r1_1 &= 1u;
                if (r1_1 == 0) {
                    goto L_10f43e;
                }
            }
            guest::cpu()->r[13] = r13;
            u32 r0_3 = call_0030e430(r4, r1_1, r2_1);
            if (r0_3 == 0 && *gptr<u32>(r13 + 0xcu) != r5) {  // (from the original)
                if ((r7_1->word_10 & 1u) == 0 && *gptr<u32>(r13) > r5) {
                    u32 r0_4 = lsl_r(1u, r5 & 0xff);  // (from the original)
                    if ((*gptr<u32>(r13 + 4u) & r0_4) == 0) {
                        u32 r1_2 = *gptr<u32>(r13 + 4u) | r0_4;
                        u32 r0_5 = *gptr<u32>(r13 + 8u);
                        *gptr<u32>(r13 + 4u) = r1_2;
                        *gptr<u32>(r13 + 8u) = r0_5 + 1u;
                    }
                }
            }
        }
L_10f43e:;
        r2 = 0x2518u;  // (from the original)
        r1 = r4 + r6;
        u32 r0_6 = ~0u;
        r5 += 1u;
        r4 += r2;
        *gptr<u8>(r1 + 0x16u) = u8(r0_6);  // (from the original)
        *gptr<u8>(r1 + 0x15u) = u8(r0_6);  // (from the original)
        guest::preempt();
    } while (s32(r5) < 0xa);  // (from the original)
    if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
        u32 r0_7 = *gptr<u32>(r13 + 0x10u);  // (from the original)
        guest::cpu()->r[13] = r13;
        call_0030e454(r0_7, r13, 0u);
        r1 = guest::cpu()->r[1];
        if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
            u32 r0_8 = *gptr<u32>(r13 + 0x10u);  // (from the original)
            guest::cpu()->r[13] = r13;
            call_0030e454(r0_8, r13, 1u);
            r1 = guest::cpu()->r[1];
            if (s32(*gptr<u32>(r13 + 8u)) >= 2) {
                u32 r0_9 = *gptr<u32>(r13 + 0x10u);  // (from the original)
                guest::cpu()->r[13] = r13;
                call_0030e454(r0_9, r13, 0u);
                r1 = guest::cpu()->r[1];
            }
        }
    }
    r13 += 0x14u;  // (from the original)
    u32 r4_1 = *gptr<u32>(r13);
    u32 r5_1 = *gptr<u32>(r13 + 4);
    u32 r6_1 = *gptr<u32>(r13 + 8);
    u32 r7_2 = *gptr<u32>(r13 + 0xc);  // (from the original)
    u32 tpc_1 = *gptr<u32>(r13 + 0x10);  // (from the original)
    r13 += 0x14;  // (from the original)
    guest::cpu()->r[1] = r1;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_1;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[13] = r13;
}

}  // namespace d_0010f3d0
GUEST_EXPORT(0x0010f3d1, d_0010f3d0::f_0010f3d0);
