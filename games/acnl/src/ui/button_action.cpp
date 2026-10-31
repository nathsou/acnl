#include "guest/guest.hpp"
#include "ui/layout_list.hpp"

using guest::gptr;

namespace {

// A slot of ButtonActionCstmNode (0x28 bytes); the handle at 0x18 is what f_0074fdd0 checks.
struct ButtonActionSlot {
    u8 unknown_00[0x18];
    u32 handle_18;  // zero: the slot is unused
    u8 unknown_1c[0xc];
};
GUEST_SIZE(ButtonActionSlot, 0x28);

struct ButtonActionNode {
    u32 vtable;
    u8 unknown_04[8];
    u32 values_0c[4];
    u8 unknown_1c[0x70 - 0x1c];
    ButtonActionSlot slot_70;
    ButtonActionSlot slot_98;
    u32 value_c0;
    u32 value_c4;
    u32 value_c8;
};
GUEST_OFFSET(ButtonActionNode, values_0c, 0x0c);
GUEST_OFFSET(ButtonActionNode, slot_70, 0x70);
GUEST_OFFSET(ButtonActionNode, slot_98, 0x98);
GUEST_OFFSET(ButtonActionNode, value_c0, 0xc0);
GUEST_SIZE(ButtonActionNode, 0xcc);

// Seven words copied into a node by set_node_values.
struct ButtonActionValues {
    u32 values[7];
};
GUEST_SIZE(ButtonActionValues, 0x1c);

// The vtable of a drag icon source (only slot 2 is used here).
struct SourceVtable {
    u8 unknown_00[8];
    u32 slot_8;  // function address
    u8 unknown_0c[4];
};
GUEST_OFFSET(SourceVtable, slot_8, 8);

// An object with a vtable and a handle at 0x18 (zero: nothing to do). notify_list_objects clears the byte at
// 0x1c and reads the word at 0x18 of it.
struct DragIconSource {
    gptr<SourceVtable> vtable;
    u8 unknown_04[0x14];
    u32 handle_18;
    u8 unknown_1c[4];
};
GUEST_OFFSET(DragIconSource, handle_18, 0x18);
GUEST_SIZE(DragIconSource, 0x20);

// The object a drag icon target notifies (only the byte at 0x122 is known).
struct DragIconObject {
    u8 unknown_00[0x122];
    u8 flag_122;
    u8 unknown_123[0x0d];
};
GUEST_OFFSET(DragIconObject, flag_122, 0x122);

struct DragIconTarget {
    u8 unknown_00[0x10];
    gptr<ChildList> list_10;  // may be null
    u8 unknown_14[8];
    gptr<DragIconObject> object_1c;
};
GUEST_OFFSET(DragIconTarget, list_10, 0x10);
GUEST_OFFSET(DragIconTarget, object_1c, 0x1c);

inline constexpr guest::Function<0x00569420, void(gptr<void> object, gptr<void> source, u32 unknown)>
    notify_object;
inline constexpr guest::Function<0x0074fdd0, u32(ButtonActionSlot &slot)> slot_check;

}  // namespace

// Copies the seven values into the node's fields.
void set_node_values(ButtonActionNode &node, const ButtonActionValues &v) {
    node.values_0c[0] = v.values[0];
    node.values_0c[1] = v.values[1];
    node.values_0c[2] = v.values[2];
    node.values_0c[3] = v.values[3];
    node.value_c4 = v.values[4];
    node.value_c8 = v.values[5];
    node.value_c0 = v.values[6];
}
GUEST_EXPORT(0x002b6a00, set_node_values);

// Notifies the target's object about the source: through the target's list when it has one.
void notify_drag_icon_target(DragIconTarget &target, DragIconSource &source) {
    if (source.handle_18 == 0 || !target.object_1c) {
        return;
    }
    gptr<void> object = target.object_1c;
    if (target.list_10) {
        notify_list_objects(object, *guest::addr_of(source).cast<LayoutObject>(), *target.list_10, 0);
    } else {
        notify_object(object, guest::addr_of(source), 0);
    }
}
GUEST_EXPORT(0x002b6a3c, notify_drag_icon_target);

// True when one of the two slots is in use and f_0074fdd0 reports 0 for it.
bool button_action_node_virtual_11(ButtonActionNode &node) {
    if (node.slot_70.handle_18 != 0 && slot_check(node.slot_70) == 0) {
        return true;
    }
    if (node.slot_98.handle_18 != 0 && slot_check(node.slot_98) == 0) {
        return true;
    }
    return false;
}
GUEST_EXPORT(0x002b6aa4, button_action_node_virtual_11);

// Runs the source's virtual function 2 (vtable slot at 8) and flags the target's object.
void drag_icon_target_trigger(DragIconTarget &target, DragIconSource &source) {
    if (source.handle_18 == 0) {
        return;
    }
    guest::call_address<void>(source.vtable->slot_8, guest::addr_of(source));
    target.object_1c->flag_122 = 1;
}
GUEST_EXPORT(0x002b6af8, drag_icon_target_trigger);

