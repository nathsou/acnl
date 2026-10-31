// memcpy: the C library has several copy routines, each tuned for the alignments its callers have. They all copy `size`
// bytes from `source` to `destination` (the regions must not overlap) and leave registers unspecified.
#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;


// The copy for word-aligned regions.
void copy_aligned_bytes(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x002fbb30, copy_aligned_bytes);

// The copy for regions at any alignment.
void copy_bytes_at_any_alignment(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x002f8574, copy_bytes_at_any_alignment);

// The copy that special-cases the small sizes.
void copy_bytes_small_sizes_first(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memcpy(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x00134544, copy_bytes_small_sizes_first);

// memmove: the regions may overlap.
void move_bytes(gptr<u8> destination, gptr<const u8> source, u32 size) {
    std::memmove(destination.get(), source.get(), size);
}
GUEST_EXPORT(0x0031c6d0, move_bytes);

// strlen: the number of bytes before the first zero byte.
u32 string_length(gptr<const u8> text) {
    u32 length = 0;
    while (text[length] != 0) {
        length++;
    }
    return length;
}
GUEST_EXPORT(0x002fa9d0, string_length);

// Copies a whole player record (the regions may overlap: when the destination starts inside the source, the bytes are
// copied one after the other from the start, so the source is smeared).
void copy_player_record(gptr<u8> destination, gptr<const u8> source) {
    constexpr u32 PLAYER_RECORD_SIZE = 0xa480;
    s32 distance = s32(destination.addr() - source.addr());
    if (distance > 0 && distance < s32(PLAYER_RECORD_SIZE)) {
        for (u32 i = 0; i < PLAYER_RECORD_SIZE; i++) {
            destination[i] = source[i];
        }
        return;
    }
    std::memmove(destination.get(), source.get(), PLAYER_RECORD_SIZE);
}
GUEST_EXPORT(0x006bcdfc, copy_player_record);
