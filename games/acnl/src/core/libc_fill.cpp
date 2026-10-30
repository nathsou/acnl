// memset and memclr: the compiler's fill routines. The fill value is a word that the callers repeat to every byte; the
// routines store its bytes in order from the start of an aligned address, so a pattern that is not uniform repeats as the
// aligned routine stores it. Registers are left unspecified.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 WORD_BYTES = 4;
constexpr u32 WORD_MASK = WORD_BYTES - 1;
constexpr u32 HALFWORD_BYTES = 2;
constexpr u32 BYTE_MASK = 0xff;

constexpr u32 FUZZ_BUFFER_SIZE = 0x120;
constexpr u32 FUZZ_MAX_SIZE = 0x100;

// Stores the low byte of the word, and the low halfword.
void store_byte(gptr<u8> &destination, u32 word) {
    *destination = u8(word & BYTE_MASK);
    destination = destination + 1;
}
void store_halfword(gptr<u8> &destination, u32 word) {
    *destination.cast<u16>() = u16(word & 0xffff);
    destination = destination + HALFWORD_BYTES;
}

}  // namespace

// Fills `size` bytes from the word-aligned destination with the word, stored word by word and then a halfword and a byte
// for the rest.
void fill_aligned(gptr<u8> destination, u32 size, u32 word) {
    while (size >= WORD_BYTES) {
        *destination.cast<u32>() = word;
        destination = destination + WORD_BYTES;
        size -= WORD_BYTES;
    }
    if ((size & HALFWORD_BYTES) != 0) {
        store_halfword(destination, word);
    }
    if ((size & 1) != 0) {
        store_byte(destination, word);
    }
}
GUEST_EXPORT(0x002f8260, fill_aligned);
GUEST_FUZZ(0x002f8260, 200, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer, f.below(FUZZ_MAX_SIZE), f.pick<u32>({0, 0xffffffffu, 0x41414141u, f.number()}));
});

// The same with a zero word.
void clear_aligned(gptr<u8> destination, u32 size) {
    fill_aligned(destination, size, 0);
}
GUEST_EXPORT(0x002f825c, clear_aligned);
GUEST_FUZZ(0x002f825c, 200, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer, f.below(FUZZ_MAX_SIZE));
});

// Fills from any address: sizes below 4 store bytes; otherwise the bytes before the first aligned address (a byte for
// an odd count, a halfword from two on) are stored first, and the aligned routine does the rest.
void fill(gptr<u8> destination, u32 size, u32 word) {
    if (size < WORD_BYTES) {
        if ((size & HALFWORD_BYTES) != 0) {
            store_byte(destination, word);
            store_byte(destination, word);
        }
        if ((size & 1) != 0) {
            store_byte(destination, word);
        }
        return;
    }
    u32 head = destination.addr() & WORD_MASK;
    if (head != 0) {
        u32 head_size = WORD_BYTES - head;
        if (head_size != HALFWORD_BYTES) {
            store_byte(destination, word);
        }
        size -= head_size;
        if (head_size >= HALFWORD_BYTES) {
            store_halfword(destination, word);
        }
    }
    fill_aligned(destination, size, word);
}
GUEST_EXPORT(0x00301448, fill);
GUEST_FUZZ(0x00301448, 300, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer + f.below(WORD_BYTES), f.below(FUZZ_MAX_SIZE / 2), f.pick<u32>({0, 0xffffffffu, 0x41414141u, f.number()}));
});

void clear(gptr<u8> destination, u32 size) {
    fill(destination, size, 0);
}
GUEST_EXPORT(0x00301444, clear);
GUEST_FUZZ(0x00301444, 300, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer + f.below(WORD_BYTES), f.below(FUZZ_MAX_SIZE / 2));
});

// memset with the byte in the third argument (repeated into a word for `fill`).
void set_bytes(gptr<u8> destination, u32 size, u32 value) {
    constexpr u32 SECOND_BYTE = 8, THIRD_BYTE = 16;
    u32 byte = value & BYTE_MASK;
    u32 word = byte | byte << SECOND_BYTE;
    fill(destination, size, word | word << THIRD_BYTE);
}
GUEST_EXPORT(0x0013fac4, set_bytes);
GUEST_FUZZ(0x0013fac4, 300, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer + f.below(WORD_BYTES), f.below(FUZZ_MAX_SIZE / 2), f.number());
});
