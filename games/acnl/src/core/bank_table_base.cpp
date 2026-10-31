// BankTableBase: a base class with a vtable, a word and two halfwords, plus two small helpers next to it.
#include "guest/guest.hpp"

namespace {

constexpr u32 VIRTUAL_0_SLOT = 0;
constexpr u32 RESET_NOTIFY_SLOT = 5;

}  // namespace

struct BankTableBase {
    static constexpr u32 VTABLE = 0x008edc4c;

    gptr<u32> vtable;
    u32 word_04;
    u16 half_08;
    u16 half_0a;

    u32 call_virtual_0();
    u32 clear_and_notify();
};
GUEST_OFFSET(BankTableBase, word_04, 4);
GUEST_OFFSET(BankTableBase, half_08, 8);
GUEST_OFFSET(BankTableBase, half_0a, 0xa);

BankTableBase &construct_bank_table_base(BankTableBase &self) {
    self.word_04 = 0;
    self.vtable = gptr<u32>(BankTableBase::VTABLE);
    self.half_08 = 0;
    self.half_0a = 0;
    return self;
}
GUEST_EXPORT(0x002134a0, construct_bank_table_base);

u32 BankTableBase::call_virtual_0() {
    return guest::call_address<u32>(vtable[VIRTUAL_0_SLOT], guest::addr_of(this));
}
GUEST_EXPORT(0x00212f50, BankTableBase::call_virtual_0);

// Clears the word and the halfwords, then calls virtual 5.
u32 BankTableBase::clear_and_notify() {
    word_04 = 0;
    half_08 = 0;
    half_0a = 0;
    return guest::call_address<u32>(vtable[RESET_NOTIFY_SLOT], guest::addr_of(this));
}
GUEST_EXPORT(0x002132b4, BankTableBase::clear_and_notify);

// The smaller of two unsigned numbers.
static u32 smaller_of(u32 first, u32 second) {
    return first <= second ? first : second;
}
GUEST_EXPORT(0x00213298, smaller_of);

// An object with a countdown (0x3c) and a value (halfword) in its tail, and a flag.
struct CountdownObject {
    static constexpr u16 INITIAL_COUNTDOWN = 0x3c;

    u8 unknown_0000[0x1664];
    u16 countdown;
    u16 value;
    u8 unknown_1668[2];
    u8 active;

    void start(u32 new_value);
};
GUEST_OFFSET(CountdownObject, countdown, 0x1664);
GUEST_OFFSET(CountdownObject, value, 0x1666);
GUEST_OFFSET(CountdownObject, active, 0x166a);

// (Reads the low half of the argument.)
void CountdownObject::start(u32 new_value) {
    active = 1;
    value = u16(new_value);
    countdown = INITIAL_COUNTDOWN;
}
GUEST_EXPORT(0x002131d4, CountdownObject::start);
