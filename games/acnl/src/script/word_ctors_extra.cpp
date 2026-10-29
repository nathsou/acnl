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

namespace {
constexpr u32 WORD_CAPACITY_9 = 9;
}

// A word descriptor of capacity 9 (two identical copies in the game).
script::WordPtrSv &construct_word_ptr_sv_9(script::WordPtrSv &self, guest::gptr<void> buffer) {
    script::construct_word_ptr(self, buffer, WORD_CAPACITY_9);
    self.vtable = script::WordPtrSv::VTABLE;
    return self;
}
GUEST_EXPORT(0x00308944, construct_word_ptr_sv_9);
GUEST_EXPORT(0x0031824c, construct_word_ptr_sv_9);
GUEST_FUZZ(0x00308944, 100, [](guest::Fuzz &f) { f.arguments(f.object<script::WordPtrSv>(), f.number()); });
GUEST_FUZZ(0x0031824c, 100, [](guest::Fuzz &f) { f.arguments(f.object<script::WordPtrSv>(), f.number()); });

namespace {
constexpr u32 OFFSET_C1_BASE = 0xaa;
constexpr u32 CAPACITY_C1 = 0xc1;
constexpr u32 OFFSET_22C_BASE = 0x22c;
constexpr u32 OFFSET_68_BASE = 0x68;
constexpr u32 CAPACITY_21 = 0x21;

// A descriptor of the text buffer that lies at an offset inside an object.
script::WordPtrSv &construct_word_ptr_sv_in(script::WordPtrSv &self, guest::gptr<void> object, u32 offset,
                                            u32 capacity) {
    script::construct_word_ptr(self, object + offset, capacity);
    self.vtable = script::WordPtrSv::VTABLE;
    return self;
}
}  // namespace

script::WordPtrSv &construct_word_ptr_sv_aa(script::WordPtrSv &self, guest::gptr<void> object) {
    return construct_word_ptr_sv_in(self, object, OFFSET_C1_BASE, CAPACITY_C1);
}
script::WordPtrSv &construct_word_ptr_sv_22c(script::WordPtrSv &self, guest::gptr<void> object) {
    return construct_word_ptr_sv_in(self, object, OFFSET_22C_BASE, CAPACITY_21);
}
script::WordPtrSv &construct_word_ptr_sv_68(script::WordPtrSv &self, guest::gptr<void> object) {
    return construct_word_ptr_sv_in(self, object, OFFSET_68_BASE, CAPACITY_21);
}
GUEST_EXPORT(0x005cc4b4, construct_word_ptr_sv_aa);
GUEST_EXPORT(0x005cc4e4, construct_word_ptr_sv_22c);
GUEST_EXPORT(0x005cc504, construct_word_ptr_sv_68);
GUEST_FUZZ(0x005cc4b4, 100, [](guest::Fuzz &f) { f.arguments(f.object<script::WordPtrSv>(), f.number()); });
GUEST_FUZZ(0x005cc4e4, 100, [](guest::Fuzz &f) { f.arguments(f.object<script::WordPtrSv>(), f.number()); });
GUEST_FUZZ(0x005cc504, 100, [](guest::Fuzz &f) { f.arguments(f.object<script::WordPtrSv>(), f.number()); });
