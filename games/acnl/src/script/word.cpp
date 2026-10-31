#include "hobj/house_object.hpp"
#include "script/word.hpp"

namespace script {

WordPtr &construct_word_ptr(WordPtr &self, guest::gptr<void> buffer, u32 capacity) {
    self.vtable = WordPtr::VTABLE;
    self.buffer = buffer;
    self.capacity = capacity;
    return self;
}

WordPtrSv &construct_word_ptr_sv(WordPtrSv &self, guest::gptr<void> buffer) {
    construct_word_ptr(self, buffer, WordPtrSv::CAPACITY);
    self.vtable = WordPtrSv::VTABLE;
    return self;
}

}  // namespace script

GUEST_EXPORT(0x003083bc, script::construct_word_ptr);
GUEST_EXPORT(0x00308450, script::construct_word_ptr_sv);

namespace {

// An object with a 5-byte field at 0x0a followed by a terminator byte (meaning not known yet).
struct ShortTextHolder {
    u8 unknown_00[0x0a];
    u8 text[5];
    u8 terminator;
};
GUEST_OFFSET(ShortTextHolder, text, 0x0a);
GUEST_OFFSET(ShortTextHolder, terminator, 0x0f);
GUEST_SIZE(ShortTextHolder, 0x10);

// Terminates the 5-byte field and returns its address.
guest::gptr<u8> terminate_short_text(ShortTextHolder &self) {
    self.terminator = 0;
    return guest::addr_of(self.text[0]);
}

using hobj::VirtualObject;
constexpr u32 VIRTUAL_SLOT_5 = 5;  // [vtable + 0x14]

// Calls the object's fifth virtual function, forwarding the other arguments (r2 holds the target, as in the
// original's tail call).
u32 call_virtual_5(VirtualObject &self, u32 arg1, u32 unused_r2, u32 arg3) {
    (void)unused_r2;
    u32 target = self.vtable[VIRTUAL_SLOT_5];
    return guest::call_address<u32>(target, guest::addr_of(self), arg1, target, arg3);
}

}  // namespace

GUEST_EXPORT(0x003083d4, terminate_short_text);
GUEST_EXPORT(0x0030846c, call_virtual_5);
