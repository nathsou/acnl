// Two more constructors of word descriptors: the buffer and its capacity are given (compare WordPtr).
#include "script/word.hpp"

namespace {

constexpr u32 WORD_C_PTR_SV_VTABLE = 0x00908b9c;

// A descriptor of a text buffer with a capacity, like WordPtr (the vtable is set last).
struct WordCPtrSv : script::WordPtr {};
GUEST_SIZE(WordCPtrSv, 12);

}  // namespace

// Constructor of the WordPtrSv that takes its capacity (compare construct_word_ptr_sv, which fixes it).
script::WordPtrSv &construct_word_ptr_sv_with_capacity(script::WordPtrSv &self, guest::gptr<void> buffer,
                                                       u32 capacity) {
    self.buffer = buffer;
    self.capacity = capacity;
    self.vtable = script::WordPtrSv::VTABLE;
    return self;
}
GUEST_EXPORT(0x00604890, construct_word_ptr_sv_with_capacity);
GUEST_FUZZ(0x00604890, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<script::WordPtrSv>(), f.number(), f.pick<u32>({9, 0x15, 0x41, 0xf8, f.number()}));
});

WordCPtrSv &construct_word_c_ptr_sv(WordCPtrSv &self, guest::gptr<void> buffer, u32 capacity) {
    self.buffer = buffer;
    self.capacity = capacity;
    self.vtable = WORD_C_PTR_SV_VTABLE;
    return self;
}
GUEST_EXPORT(0x005d867c, construct_word_c_ptr_sv);
GUEST_FUZZ(0x005d867c, 100, [](guest::Fuzz &f) {
    f.arguments(f.object<WordCPtrSv>(), f.number(), f.pick<u32>({9, 0xb, 0x15, 0x18, 0x41, f.number()}));
});
