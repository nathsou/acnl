// Small forwarding helpers: calls through a vtable of the object a script word holds at +4, the main object's
// signed value, the villager record lookup and the vtable reset of script::WordFix<9u>.
#include "guest/guest.hpp"
#include "script/word.hpp"

using guest::gptr;

namespace {

// An object reached through its vtable only.
struct VirtualObject {
    u32 vtable;
};

// An object that holds another object (with a vtable) at +4.
struct VirtualHolder {
    u8 unknown_00[4];
    gptr<VirtualObject> object;
};
GUEST_OFFSET(VirtualHolder, object, 4);

constexpr u32 FORWARDED_SLOT_A = 0x54 / 4;
constexpr u32 FORWARDED_SLOT_B = 0x58 / 4;

// The record of a villager in the save data (0x2518 bytes, ten of them).
struct VillagerRecordSlot {
    u8 unknown[0x2518];
};
GUEST_SIZE(VillagerRecordSlot, 0x2518);
constexpr u32 VILLAGER_RECORD_COUNT = 10;

constexpr u32 WORD_FIX_9_VTABLE = 0x0090a3e8;

// The main object (the one MainObject::signed_value reads).
inline guest::global<gptr<void>, 0x0095362c> main_object;

inline constexpr guest::Function<0x0075e048, s32(gptr<void> main_object)> main_object_signed_value;
inline constexpr guest::Function<0x002fe470, u32(gptr<VillagerRecordSlot> record)> is_record_valid;
inline constexpr guest::Function<0x003084cc, u32(script::WordPtr &self)> word_ptr_virtual_0;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;

u32 call_forwarded(gptr<VirtualHolder> holder, u32 slot, u32 a1, u32 a2, u32 a3) {
    gptr<VirtualObject> object = holder->object;
    u32 target = *gptr<u32>(object->vtable + slot * 4);
    return guest::call_address<u32>(target, object, a1, a2, a3);
}

}  // namespace

// The signed value of the main object (the argument is ignored).
s32 main_object_value(gptr<void>) {
    return main_object_signed_value(main_object);
}
GUEST_EXPORT(0x00300904, main_object_value);

// Calls virtual function 21 of the object held at +4, with the same remaining arguments.
u32 forward_to_held_object_slot_21(gptr<VirtualHolder> holder, u32 a1, u32 a2, u32 a3) {
    return call_forwarded(holder, FORWARDED_SLOT_A, a1, a2, a3);
}
GUEST_EXPORT(0x00300914, forward_to_held_object_slot_21);

// Calls virtual function 22 of the object held at +4, with the same remaining arguments.
u32 forward_to_held_object_slot_22(gptr<VirtualHolder> holder, u32 a1, u32 a2, u32 a3) {
    return call_forwarded(holder, FORWARDED_SLOT_B, a1, a2, a3);
}
GUEST_EXPORT(0x00300924, forward_to_held_object_slot_22);

// The villager record with this index, or null when the index is out of range, the address is null or the
// record is not valid.
gptr<VillagerRecordSlot> villager_record_at(gptr<VillagerRecordSlot> records, u32 index) {
    if (index >= VILLAGER_RECORD_COUNT) {
        return nullptr;
    }
    gptr<VillagerRecordSlot> record = records + index;
    if (!record) {
        return nullptr;
    }
    if (is_record_valid(record) == 0) {
        return nullptr;
    }
    return record;
}
GUEST_EXPORT(0x003009a9, villager_record_at);

// script::WordFix<9u> virtual 0: puts its vtable back, then runs WordPtr's.
u32 word_fix_9_virtual_0(script::WordPtr &self) {
    self.vtable = WORD_FIX_9_VTABLE;
    return word_ptr_virtual_0(self);
}
GUEST_EXPORT(0x003009cc, word_fix_9_virtual_0);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Scratch memory whose every word holds its own address: any pointer the callees load from it stays inside.
static gptr<void> self_referencing_block(guest::Fuzz &f, u32 size) {
    gptr<u32> words = f.allocate(size).cast<u32>();
    for (u32 i = 0; i < size / 4; i++) {
        words[i] = words.addr();
    }
    return words.cast<void>();
}

static gptr<VirtualHolder> some_holder(guest::Fuzz &f) {
    constexpr u32 VTABLE_SIZE = 0x60;
    auto vtable = f.allocate(VTABLE_SIZE).cast<u32>();
    for (u32 i = 0; i < VTABLE_SIZE / 4; i++) {
        vtable[i] = read_global_object_byte.address;  // a guest function that ignores its arguments
    }
    auto inner = f.allocate(0x20).cast<VirtualObject>();
    inner->vtable = vtable.addr();
    auto holder = f.allocate(0x10).cast<VirtualHolder>();
    holder->object = inner;
    return holder;
}

GUEST_FUZZ(0x00300904, 200, [](guest::Fuzz &f) { f.arguments(f.number()); });
GUEST_FUZZ(0x00300914, 200, [](guest::Fuzz &f) {
    f.arguments(some_holder(f), f.pick<u32>({0, 1}), f.pick<u32>({0, 1}), f.number());
});
GUEST_FUZZ(0x00300924, 200, [](guest::Fuzz &f) {
    f.arguments(some_holder(f), f.pick<u32>({0, 1}), f.pick<u32>({0, 1}), f.number());
});
GUEST_FUZZ(0x003009a9, 300, [](guest::Fuzz &f) {
    constexpr u32 RECORD_SIZE = sizeof(VillagerRecordSlot);
    switch (f.below(4)) {
    case 0: {
        // out of range: the records are never touched
        u32 index = f.pick<u32>({10, 11, 0xffffffff, 10 + f.below(100), f.number() | 0x80000000u});
        f.arguments(gptr<VillagerRecordSlot>(), index);
        return;
    }
    case 1: {
        // records + index is the null address
        u32 index = f.below(VILLAGER_RECORD_COUNT);
        f.arguments(gptr<VillagerRecordSlot>(u32(0) - index * RECORD_SIZE), index);
        return;
    }
    default: {
        // only the selected record is allocated; the base is moved back so that records + index lands on it
        gptr<void> record = self_referencing_block(f, RECORD_SIZE);
        u32 index = f.pick<u32>({0, 1, 9, f.below(VILLAGER_RECORD_COUNT)});
        f.arguments(gptr<VillagerRecordSlot>(record.addr() - index * RECORD_SIZE), index);
        return;
    }
    }
});
GUEST_FUZZ(0x003009cc, 200, [](guest::Fuzz &f) {
    auto object = self_referencing_block(f, 0x40).cast<script::WordPtr>();
    object->buffer = self_referencing_block(f, 0x40);
    object->capacity = 9;
    f.arguments(object);
});
