// Small queries on objects of the menu code around 0x00718c0c. The object types are not known yet.
#include "core/fuzz_helpers.hpp"
#include "hobj/house_object.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

constexpr u32 SLOT_LIMIT = 16;            // slot indices below this are valid
constexpr u32 WINDOW_SIZE = 10;
constexpr s32 NO_VALUE = -1;
constexpr u32 BITS_PER_WORD = 32;
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

gptr<ChildObject> fuzz_child_object(guest::Fuzz &f) {
    auto object = f.object<ChildObject>();
    auto child = f.object<VirtualObject>();
    child->vtable = fuzz::harmless_vtable(f, SECOND_CHILD_SLOT + 1);
    object->child = f.below(4) ? child : gptr<VirtualObject>(0u);
    return object;
}

}  // namespace

bool slot_index_is_valid(gptr<void> /*object*/, u32 index) {
    return index < SLOT_LIMIT;
}
GUEST_EXPORT(0x00718c0c, slot_index_is_valid);
GUEST_FUZZ(0x00718c0c, 100, [](guest::Fuzz &f) { f.arguments(gptr<void>(), f.pick<u32>({0, 15, 16, 17, 0xffffffffu})); });

// Whether the value is within the next WINDOW_SIZE numbers from the counter (not below it).
bool value_within_window_of_counter(CounterObject &object, s32 value) {
    if (object.counter > value) {
        return false;
    }
    return u32(object.counter + WINDOW_SIZE) > u32(value);
}
GUEST_EXPORT(0x00718d98, value_within_window_of_counter);
GUEST_FUZZ(0x00718d98, 200, [](guest::Fuzz &f) {
    auto object = f.object<CounterObject>();
    object->counter = f.pick<s32>({0, 5, -3, 0x7ffffffc, s32(f.number())});
    f.arguments(object, f.pick<s32>({0, 5, 9, 10, 14, -1, 0x7fffffff, s32(f.number())}));
});

s32 value_minus_counter(CounterObject &object, s32 value) {
    return value - object.counter;
}
GUEST_EXPORT(0x00718dc4, value_minus_counter);
GUEST_FUZZ(0x00718dc4, 100, [](guest::Fuzz &f) { f.arguments(f.object<CounterObject>(), f.number()); });

s8 signed_byte_2ca4(SignedByteObject &object) {
    return object.value;
}
GUEST_EXPORT(0x00718df8, signed_byte_2ca4);
GUEST_FUZZ(0x00718df8, 100, [](guest::Fuzz &f) { f.arguments(f.object<SignedByteObject>()); });

bool value_94fd40_is_unset() {
    return value_94fd40 == NO_VALUE;
}
GUEST_EXPORT(0x00718e04, value_94fd40_is_unset);
GUEST_FUZZ(0x00718e04, 100, [](guest::Fuzz &f) {
    value_94fd40 = f.pick<s32>({-1, 0, 5});
    f.arguments();
});

// Whether bit `index` of the object's bit words is set.
bool bit_is_set(BitSetObject &object, s32 index) {
    u32 word = object.words[index >> 5];
    return (word & (1u << (u32(index) & BIT_INDEX_MASK))) != 0;
}
GUEST_EXPORT(0x00718ef0, bit_is_set);
GUEST_FUZZ(0x00718ef0, 200, [](guest::Fuzz &f) {
    auto object = f.object<BitSetObject>();
    object->words = f.allocate(0x40 * 4 / 8).cast<u32>();
    f.bytes(object->words, 0x40 * 4 / 8);
    f.arguments(object, f.pick<s32>({0, 1, 31, 32, 63, s32(f.below(64))}));
});

u32 call_child_first_slot(ChildObject &object) {
    return call_child_slot(object, FIRST_CHILD_SLOT);
}
GUEST_EXPORT(0x00718f80, call_child_first_slot);
GUEST_FUZZ(0x00718f80, 100, [](guest::Fuzz &f) { f.arguments(fuzz_child_object(f)); });

u32 call_child_second_slot(ChildObject &object) {
    return call_child_slot(object, SECOND_CHILD_SLOT);
}
GUEST_EXPORT(0x00718ff0, call_child_second_slot);
GUEST_FUZZ(0x00718ff0, 100, [](guest::Fuzz &f) { f.arguments(fuzz_child_object(f)); });
