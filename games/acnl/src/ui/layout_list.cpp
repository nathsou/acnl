// Layout objects that keep an intrusive list of child objects (each with a vtable) and forward calls to them.
#include "core/fuzz_helpers.hpp"
#include "ui/layout_list.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

constexpr u32 NOTIFY_SLOT = 0x40 / 4;      // virtual taking (first value, argument)
constexpr u32 FORWARDED_SLOT = 0x2c / 4;   // virtual taking one argument and the constant FORWARDED_ARGUMENT
constexpr u32 FORWARDED_ARGUMENT = 1;

struct LayoutObjectWithChild : LayoutObject {
    gptr<VirtualObject> child;  // may not be null when forward_to_child is used

    u32 forward_to_child(u32 argument);
};
GUEST_OFFSET(LayoutObjectWithChild, child, 0x20);
GUEST_SIZE(LayoutObjectWithChild, 0x24);

}  // namespace

void notify_list_objects(gptr<void> /*owner*/, LayoutObject &self, ChildList &list, u32 argument) {
    self.notified = 0;
    gptr<ChildNode> end = guest::addr_of(list.sentinel);
    for (gptr<ChildNode> node = list.sentinel.next; node != end; node = node->next) {
        gptr<VirtualObject> object = node->object;
        guest::call_address<void>(object->vtable[NOTIFY_SLOT], object, self.first_value, argument);
    }
}
GUEST_EXPORT(0x00568984, notify_list_objects);

u32 LayoutObjectWithChild::forward_to_child(u32 argument) {
    return guest::call_address<u32>(child->vtable[FORWARDED_SLOT], child, argument, FORWARDED_ARGUMENT);
}
GUEST_EXPORT(0x0056878c, LayoutObjectWithChild::forward_to_child);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00568984, 200, [](guest::Fuzz &f) {
    auto list = f.object<ChildList>();
    list->sentinel.next = guest::addr_of(list->sentinel);  // an empty list
    f.arguments(gptr<void>(), f.object<LayoutObject>(), list, f.number());
});

GUEST_FUZZ(0x0056878c, 200, [](guest::Fuzz &f) {
    auto self = f.object<LayoutObjectWithChild>();
    auto child = f.object<VirtualObject>();
    child->vtable = fuzz::harmless_vtable(f, FORWARDED_SLOT + 1);
    self->child = child;
    f.arguments(self, f.pick<u32>({0, 1, 0xffffffff, f.number()}));
});
