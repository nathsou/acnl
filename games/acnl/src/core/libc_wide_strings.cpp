// C library string routines of the game for 16-bit characters (UTF-16 as the game keeps its texts) and bytes: copying,
// appending and comparing.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 FUZZ_BUFFER_CHARS = 64;
constexpr u32 FUZZ_MAX_LENGTH = 10;
constexpr u32 FUZZ_ALPHABET = 3;  // few different characters, so that strings often share a prefix

// A string of random length (possibly 0) made of a few different characters, ending with a zero.
gptr<u16> fuzz_wide_string(guest::Fuzz &f, u32 max_length = FUZZ_MAX_LENGTH) {
    auto buffer = f.allocate(FUZZ_BUFFER_CHARS * sizeof(u16)).cast<u16>();
    u32 length = f.below(max_length + 1);
    for (u32 i = 0; i < length; i++) {
        buffer[i] = u16(0x100 + f.below(FUZZ_ALPHABET));
    }
    buffer[length] = 0;
    return buffer;
}

gptr<u8> fuzz_byte_string(guest::Fuzz &f, u32 max_length = FUZZ_MAX_LENGTH) {
    auto buffer = f.allocate(FUZZ_BUFFER_CHARS).cast<u8>();
    u32 length = f.below(max_length + 1);
    for (u32 i = 0; i < length; i++) {
        buffer[i] = u8('a' + f.below(FUZZ_ALPHABET));
    }
    buffer[length] = 0;
    return buffer;
}

}  // namespace

// Copies the 16-bit string (with its zero) to the destination and gives back the destination (Thumb entry).
gptr<u16> copy_wide_string(gptr<u16> destination, gptr<const u16> source) {
    u32 i = 0;
    do {
        destination[i] = source[i];
    } while (source[i++] != 0);
    return destination;
}
GUEST_EXPORT(0x001017e5, copy_wide_string);
GUEST_FUZZ(0x001017e5, 200, [](guest::Fuzz &f) { f.arguments(fuzz_wide_string(f), fuzz_wide_string(f)); });

// Appends the 16-bit string to the destination's and gives back the destination (Thumb entry).
gptr<u16> append_wide_string(gptr<u16> destination, gptr<const u16> source) {
    u32 end = 0;
    while (destination[end] != 0) {
        end++;
    }
    copy_wide_string(destination + end, source);
    return destination;
}
GUEST_EXPORT(0x00101831, append_wide_string);
GUEST_FUZZ(0x00101831, 200, [](guest::Fuzz &f) {
    f.arguments(fuzz_wide_string(f, FUZZ_MAX_LENGTH / 2), fuzz_wide_string(f, FUZZ_MAX_LENGTH / 2));
});

// Compares two 16-bit strings: the difference of the first characters that differ (the first one's minus the second's), 0 when
// they are the same (Thumb entry).
s32 compare_wide_strings(gptr<const u16> first, gptr<const u16> second) {
    u32 i = 0;
    while (first[i] != 0 && first[i] == second[i]) {
        i++;
    }
    return s32(first[i]) - s32(second[i]);
}
GUEST_EXPORT(0x0010184d, compare_wide_strings);
GUEST_FUZZ(0x0010184d, 300, [](guest::Fuzz &f) {
    auto first = fuzz_wide_string(f);
    auto second = f.below(3) == 0 ? first : fuzz_wide_string(f);
    f.arguments(first, second);
});

// Appends the byte string to the destination's (Thumb entry); the destination is in r0 afterwards, as it was given.
void append_byte_string(gptr<u8> destination, gptr<const u8> source) {
    u32 end = 0;
    while (destination[end] != 0) {
        end++;
    }
    u32 i = 0;
    do {
        destination[end + i] = source[i];
    } while (source[i++] != 0);
}
GUEST_EXPORT(0x001019c5, append_byte_string);
GUEST_FUZZ(0x001019c5, 200, [](guest::Fuzz &f) {
    f.arguments(fuzz_byte_string(f, FUZZ_MAX_LENGTH / 2), fuzz_byte_string(f, FUZZ_MAX_LENGTH / 2));
});

// Whether the pointer is null or points to a zero word (Thumb entry).
bool pointer_is_null_or_points_to_zero(gptr<const u32> pointer) {
    return pointer == nullptr || *pointer == 0;
}
GUEST_EXPORT(0x00100cfd, pointer_is_null_or_points_to_zero);
GUEST_FUZZ(0x00100cfd, 100, [](guest::Fuzz &f) {
    auto word = f.object<u32>();
    *word = f.pick<u32>({0, 1, 5});
    f.arguments(f.below(4) != 0 ? word : gptr<u32>(0u));
});

// Whether the bit is set in the bit set that has a count and a word of bits (false for bits past the count) (Thumb entry).
struct SmallBitSet {
    u32 count;
    u32 bits;
};
bool small_bit_set_has(const SmallBitSet &set, u32 bit) {
    constexpr u32 WORD_BITS = 32;
    return set.count > bit && bit < WORD_BITS && (set.bits & (1u << bit)) != 0;
}
GUEST_EXPORT(0x0011b4f7, small_bit_set_has);
GUEST_FUZZ(0x0011b4f7, 200, [](guest::Fuzz &f) {
    auto set = f.object<SmallBitSet>();
    set->count = f.below(34);
    f.arguments(set, f.pick<u32>({f.below(34), 0xffffffffu}));
});
