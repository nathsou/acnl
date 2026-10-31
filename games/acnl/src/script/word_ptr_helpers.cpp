// Small helpers on script::WordPtr (a vtable, a buffer of 16-bit units and a capacity).
#include "script/word.hpp"

namespace {

using guest::gptr;
using script::WordPtr;

constexpr u32 WORD_RES_VTABLE = 0x0090a570;
constexpr u32 WORD_RES_CAPACITY = 0x3fffffff;

// virtual_7: zeroes the buffer's 16-bit units. Does nothing without a buffer or when the capacity, doubled as a
// signed 32-bit size, does not give a positive count.
void clear_word_buffer(WordPtr &self) {
    if (!self.buffer || self.capacity == 0) {
        return;
    }
    s32 count = s32(self.capacity * 2) >> 1;
    if (count <= 0) {
        return;
    }
    gptr<u16> units = self.buffer.cast<u16>();
    for (s32 i = 0; i < count; i++) {
        units[i] = 0;
    }
}

// Replaces the buffer and its capacity.
void set_word_buffer(WordPtr &self, gptr<void> buffer, u32 capacity) {
    self.buffer = buffer;
    self.capacity = capacity;
}

// Copies the buffer and capacity of another descriptor (not the vtable).
void copy_word_buffer(WordPtr &self, const WordPtr &other) {
    self.buffer = other.buffer;
    self.capacity = other.capacity;
}

// The constructor of an empty WordPtr.
WordPtr &construct_empty_word_ptr(WordPtr &self) {
    self.buffer = nullptr;
    self.vtable = WordPtr::VTABLE;
    self.capacity = 0;
    return self;
}

// The WordRes constructor: a buffer with an effectively unbounded capacity.
WordPtr &construct_word_res_unbounded(WordPtr &self, gptr<void> buffer) {
    self.buffer = buffer;
    self.capacity = WORD_RES_CAPACITY;
    self.vtable = WORD_RES_VTABLE;
    return self;
}

}  // namespace

GUEST_EXPORT(0x005fcf24, clear_word_buffer);
GUEST_EXPORT(0x005fcf7c, set_word_buffer);
GUEST_EXPORT(0x005fcf88, copy_word_buffer);
GUEST_EXPORT(0x005fcf9c, construct_empty_word_ptr);
GUEST_EXPORT(0x005fcfbc, construct_word_res_unbounded);
