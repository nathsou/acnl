// Copies of the same small function, compiled for different flag objects: set every byte of a 3- or 4-byte object to
// 0xff when the flag is non-zero, or to 0 when it is zero. Some return the object, the others return nothing.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u8 ALL_SET = 0xff;

void fill_bytes(gptr<u8> object, u32 size, bool on) {
    for (u32 i = 0; i < size; i++) {
        object[i] = on ? ALL_SET : 0;
    }
}

gptr<u8> fuzz_object(guest::Fuzz &f) {
    auto object = f.allocate(8).cast<u8>();
    f.bytes(object, 8);
    return object;
}

constexpr u32 THREE_BYTES = 3;
constexpr u32 FOUR_BYTES = 4;

}  // namespace

gptr<u8> fill_three_bytes_303e60(gptr<u8> object, u32 on) {
    fill_bytes(object, THREE_BYTES, on != 0);
    return object;
}
GUEST_EXPORT(0x00303e60, fill_three_bytes_303e60);

void fill_three_bytes_303e64(gptr<u8> object, u32 on) {
    fill_bytes(object, THREE_BYTES, on != 0);
}
GUEST_EXPORT(0x00303e64, fill_three_bytes_303e64);

gptr<u8> fill_four_bytes_303e6c(gptr<u8> object, u32 on) {
    fill_bytes(object, FOUR_BYTES, on != 0);
    return object;
}
GUEST_EXPORT(0x00303e6c, fill_four_bytes_303e6c);

void fill_four_bytes_303e70(gptr<u8> object, u32 on) {
    fill_bytes(object, FOUR_BYTES, on != 0);
}
GUEST_EXPORT(0x00303e70, fill_four_bytes_303e70);

gptr<u8> fill_three_bytes_303e74(gptr<u8> object, u32 on) {
    fill_bytes(object, THREE_BYTES, on != 0);
    return object;
}
GUEST_EXPORT(0x00303e74, fill_three_bytes_303e74);

void fill_three_bytes_303e78(gptr<u8> object, u32 on) {
    fill_bytes(object, THREE_BYTES, on != 0);
}
GUEST_EXPORT(0x00303e78, fill_three_bytes_303e78);

GUEST_FUZZ(0x00303e60, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
GUEST_FUZZ(0x00303e64, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
GUEST_FUZZ(0x00303e6c, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
GUEST_FUZZ(0x00303e70, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
GUEST_FUZZ(0x00303e74, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
GUEST_FUZZ(0x00303e78, 100, [](guest::Fuzz &f) { f.arguments(fuzz_object(f), f.pick<u32>({0, 1, 0x100, f.number()})); });
