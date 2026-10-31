// Small forwarding helpers: calls through a vtable of the object a script word holds at +4, the main object's
// signed value, the villager record lookup and the vtable reset of script::WordFix<9u>.
#include "guest/guest.hpp"
#include "save/save_data.hpp"
#include "hobj/house_object.hpp"
#include "script/word.hpp"

using guest::gptr;

namespace {

using hobj::VirtualObject;

// An object that holds another object (with a vtable) at +4.
struct VirtualHolder {
    u8 unknown_00[4];
    gptr<VirtualObject> object;
};
GUEST_OFFSET(VirtualHolder, object, 4);

constexpr u32 FORWARDED_SLOT_A = 0x54 / 4;
constexpr u32 FORWARDED_SLOT_B = 0x58 / 4;

constexpr u32 WORD_FIX_9_VTABLE = 0x0090a3e8;

// The main object (the one MainObject::signed_value reads).
inline guest::global<gptr<void>, 0x0095362c> main_object;

inline constexpr guest::Function<0x0075e048, s32(gptr<void> main_object)> main_object_signed_value;
inline constexpr guest::Function<0x002fe470, u32(gptr<SaveVillager> record)> is_record_valid;
inline constexpr guest::Function<0x003084cc, u32(script::WordPtr &self)> word_ptr_virtual_0;

u32 call_forwarded(gptr<VirtualHolder> holder, u32 slot, u32 a1, u32 a2, u32 a3) {
    gptr<VirtualObject> object = holder->object;
    u32 target = object->vtable[slot];
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
gptr<SaveVillager> villager_record_at(gptr<SaveVillager> records, u32 index) {
    if (index >= SaveData::VILLAGER_COUNT) {
        return nullptr;
    }
    gptr<SaveVillager> record = records + index;
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
