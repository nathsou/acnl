// Small queries on objects of the menu code around 0x00718c0c. The object types are not known yet.
#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

constexpr u32 SLOT_LIMIT = 16;            // slot indices below this are valid
constexpr u32 WINDOW_SIZE = 10;
constexpr s32 NO_VALUE = -1;
constexpr u32 BIT_INDEX_MASK = 0x1f;
constexpr u32 FIRST_CHILD_SLOT = 0xc / 4;
constexpr u32 SECOND_CHILD_SLOT = 0x20 / 4;

struct CounterObject {
    u8 unknown_0000[0x2be8];
    s32 counter;
};
GUEST_OFFSET(CounterObject, counter, 0x2be8);

struct SignedByteObject {
    u8 unknown_0000[0x2ca4];
    s8 value;
};
GUEST_OFFSET(SignedByteObject, value, 0x2ca4);

struct BitSetObject {
    u8 unknown_00[0xc];
    gptr<u32> words;
};
GUEST_OFFSET(BitSetObject, words, 0xc);

struct ChildObject {
    u8 unknown_0000[0x118];
    gptr<VirtualObject> child;  // may be null
};
GUEST_OFFSET(ChildObject, child, 0x118);

inline guest::global<s32, 0x0094fd40> value_94fd40;

u32 call_child_slot(ChildObject &object, u32 slot) {
    gptr<VirtualObject> child = object.child;
    if (!child) {
        return 0;
    }
    return guest::call_address<u32>(child->vtable[slot], child);
}

}  // namespace

bool slot_index_is_valid(gptr<void> /*object*/, u32 index) {
    return index < SLOT_LIMIT;
}
GUEST_EXPORT(0x00718c0c, slot_index_is_valid);

// Whether the value is within the next WINDOW_SIZE numbers from the counter (not below it).
bool value_within_window_of_counter(CounterObject &object, s32 value) {
    if (object.counter > value) {
        return false;
    }
    return u32(object.counter + WINDOW_SIZE) > u32(value);
}
GUEST_EXPORT(0x00718d98, value_within_window_of_counter);

s32 value_minus_counter(CounterObject &object, s32 value) {
    return value - object.counter;
}
GUEST_EXPORT(0x00718dc4, value_minus_counter);

s8 signed_byte_2ca4(SignedByteObject &object) {
    return object.value;
}
GUEST_EXPORT(0x00718df8, signed_byte_2ca4);

bool value_94fd40_is_unset() {
    return value_94fd40 == NO_VALUE;
}
GUEST_EXPORT(0x00718e04, value_94fd40_is_unset);

// Whether bit `index` of the object's bit words is set.
bool bit_is_set(BitSetObject &object, s32 index) {
    u32 word = object.words[index >> 5];
    return (word & (1u << (u32(index) & BIT_INDEX_MASK))) != 0;
}
GUEST_EXPORT(0x00718ef0, bit_is_set);

u32 call_child_first_slot(ChildObject &object) {
    return call_child_slot(object, FIRST_CHILD_SLOT);
}
GUEST_EXPORT(0x00718f80, call_child_first_slot);

u32 call_child_second_slot(ChildObject &object) {
    return call_child_slot(object, SECOND_CHILD_SLOT);
}
GUEST_EXPORT(0x00718ff0, call_child_second_slot);
