// Small helpers of the message code around 0x005b19f8 and 0x005b2294.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x001435b4, u32(u32 address)> translate_address;

// Buffers shorter than this are marked small.
constexpr u32 SMALL_BUFFER_LIMIT = 0x10000;

}  // namespace

// A word and a flag (meaning not known yet).
struct WordAndFlag {
    u32 word;
    u8 flag;
    u8 unknown_05[3];

    void clear();
};
GUEST_OFFSET(WordAndFlag, flag, 4);

void WordAndFlag::clear() {
    word = 0;
    flag = 0;
}
GUEST_EXPORT(0x005b19f8, WordAndFlag::clear);
GUEST_FUZZ(0x005b19f8, 100, [](guest::Fuzz &f) { f.arguments(f.object<WordAndFlag>()); });

// An object that keeps a buffer's translated address and size.
struct BufferHolder {
    u8 unknown_0000[0xd14];
    u32 buffer_address;
    u32 buffer_size;
    bool small;  // size below SMALL_BUFFER_LIMIT

    void set_buffer(u32 address, u32 size);
};
GUEST_OFFSET(BufferHolder, buffer_address, 0xd14);
GUEST_OFFSET(BufferHolder, buffer_size, 0xd18);
GUEST_OFFSET(BufferHolder, small, 0xd1c);

void BufferHolder::set_buffer(u32 address, u32 size) {
    buffer_address = translate_address(address);
    buffer_size = size;
    small = size < SMALL_BUFFER_LIMIT;
}
GUEST_EXPORT(0x005b2294, BufferHolder::set_buffer);
GUEST_FUZZ(0x005b2294, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<BufferHolder>(), f.pick<u32>({0, 0x100000, 0x14000000, 0x30000000, 0x1f000000, f.number()}),
                f.pick<u32>({0, 6, 0xffff, 0x10000, 0xffffffffu}));
});
