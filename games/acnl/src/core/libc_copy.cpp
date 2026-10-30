// memcpy: the C library has several copy routines, each tuned for the alignments its callers have. They all copy `size`
// bytes from `source` to `destination` (the regions must not overlap) and leave registers unspecified.
#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 FUZZ_BUFFER_SIZE = 0x200;
constexpr u32 FUZZ_MAX_SIZE = 0x180;
constexpr u32 WORD_MASK = 3;

// Fuzzing: two separate buffers with random contents; with `aligned` both start on a word, else at any offset.
void fuzz_copy(guest::Fuzz &f, bool aligned) {
    auto source = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    auto destination = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(source, FUZZ_BUFFER_SIZE);
    u32 source_offset = aligned ? 0 : f.below(WORD_MASK + 1);
    u32 destination_offset = aligned ? 0 : f.below(WORD_MASK + 1);
    f.arguments(destination + destination_offset, source + source_offset, f.below(FUZZ_MAX_SIZE));
}

}  // namespace

// The copy for word-aligned regions.
void copy_aligned_bytes(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x002fbb30, copy_aligned_bytes);
GUEST_FUZZ(0x002fbb30, 300, [](guest::Fuzz &f) { fuzz_copy(f, true); });

// The copy for regions at any alignment.
void copy_bytes_at_any_alignment(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x002f8574, copy_bytes_at_any_alignment);
GUEST_FUZZ(0x002f8574, 300, [](guest::Fuzz &f) { fuzz_copy(f, false); });

// The copy that special-cases the small sizes.
void copy_bytes_small_sizes_first(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x00134544, copy_bytes_small_sizes_first);
GUEST_FUZZ(0x00134544, 300, [](guest::Fuzz &f) { fuzz_copy(f, false); });

// memmove: the regions may overlap.
void move_bytes(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memmove(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x0031c6d0, move_bytes);
GUEST_FUZZ(0x0031c6d0, 300, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER_SIZE).cast<u8>();
    f.bytes(buffer, FUZZ_BUFFER_SIZE);
    f.arguments(buffer + f.below(FUZZ_MAX_SIZE / 2), buffer + f.below(FUZZ_MAX_SIZE / 2), f.below(FUZZ_MAX_SIZE / 2));
});
