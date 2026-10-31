// Small accessors and initialisers of the g3d code: vtable resets, the state object at 0x00952a20, two reads of a
// model's data block and a mask test.
#include "arm.hpp"
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 TRANSFORM_NODE_BASE_VTABLE = 0x00902974;
constexpr u32 FUNC_VTABLE = 0x00902b04;

// An object that starts with a vtable (and a word).
struct VtableObject {
    gptr<u32> vtable;
    u32 unknown_04;
};

// The object the state at 0x00952a20 points to; four of its bytes are set together.
struct StateObject {
    u8 unknown_00[0xe8];
    u8 byte_e8;
    u8 byte_e9;
    u8 unknown_ea;
    u8 byte_eb;
    u8 byte_ec;
};
GUEST_OFFSET(StateObject, byte_e8, 0xe8);
GUEST_OFFSET(StateObject, byte_ec, 0xec);

struct State952a20 {
    u8 first_byte;
    u8 unknown_01[0x17];
    gptr<StateObject> object;
};
GUEST_OFFSET(State952a20, object, 0x18);

inline guest::global<State952a20, 0x00952a20> state_952a20;

struct ModelBlock {
    u8 unknown_000[0x148];
    u32 value_148;
    u8 unknown_14c[4];
    u32 value_150;
};
GUEST_OFFSET(ModelBlock, value_148, 0x148);
GUEST_OFFSET(ModelBlock, value_150, 0x150);

struct ModelHandle {
    u32 unknown_00;
    gptr<ModelBlock> block;
};
GUEST_OFFSET(ModelHandle, block, 4);

struct MaskObject {
    u8 unknown_00[0x28];
    u8 mask_28;
};
GUEST_OFFSET(MaskObject, mask_28, 0x28);

}  // namespace

// Gives the object the vtable of the transform node base class.
VtableObject &set_base_vtable(VtableObject &object) {
    object.vtable = gptr<u32>(TRANSFORM_NODE_BASE_VTABLE);
    return object;
}
GUEST_EXPORT(0x004ee514, set_base_vtable);
GUEST_EXPORT(0x004edd84, set_base_vtable);  // (a jump to it)
GUEST_EXPORT(0x004f0dd0, set_base_vtable);

// The constructor of g3d::Func.
VtableObject &construct_func(VtableObject &object) {
    object.unknown_04 = 0;
    object.vtable = gptr<u32>(FUNC_VTABLE);
    return object;
}
GUEST_EXPORT(0x004f0d90, construct_func);

u8 state_952a20_first_byte() {
    return state_952a20->first_byte;
}
GUEST_EXPORT(0x004ee524, state_952a20_first_byte);

gptr<StateObject> state_952a20_object() {
    return state_952a20->object;
}
GUEST_EXPORT(0x004eec44, state_952a20_object);

// Sets the four flag bytes of the state's object.
void set_state_object_flags() {
    StateObject &object = *state_952a20->object;
    object.byte_ec = 1;
    object.byte_e9 = 1;
    object.byte_e8 = 1;
    object.byte_eb = 1;
}
GUEST_EXPORT(0x004eec20, set_state_object_flags);

u32 model_value_148(ModelHandle &handle) {
    return handle.block->value_148;
}
GUEST_EXPORT(0x004f1028, model_value_148);

u32 model_value_150(ModelHandle &handle) {
    return handle.block->value_150;
}
GUEST_EXPORT(0x004f10ec, model_value_150);

// True for index 0; otherwise whether the bit `index` of the mask is set (an index past the byte never is).
bool mask_has_bit_or_index_0(MaskObject &object, u32 index) {
    if (index == 0) {
        return true;
    }
    return (object.mask_28 & arm::lsl(1, index)) != 0;
}
GUEST_EXPORT(0x004f023c, mask_has_bit_or_index_0);
