// Two forwarders on an object holding a sub-object at 0x10 that is only used once the pointer at 0x18 is set.
#include "guest/guest.hpp"

namespace {

struct NodeHolder {
    u8 unknown_00[0x10];
    u8 node[8];                 // sub-object handed to the callees (type not known yet)
    gptr<void> attached;        // the callees are only called when set (also passed along in r1)
};
GUEST_OFFSET(NodeHolder, node, 0x10);
GUEST_OFFSET(NodeHolder, attached, 0x18);

inline constexpr guest::Function<0x004ee9cc, void(gptr<void> node, gptr<void> attached)> node_call_004ee9cc;
inline constexpr guest::Function<0x004ee9a8, void(gptr<void> node, gptr<void> attached)> node_call_004ee9a8;

}  // namespace

// Calls f_004ee9cc on the sub-object, when something is attached.
void node_holder_call_004ee9cc(NodeHolder &self) {
    if (self.attached) {
        node_call_004ee9cc(guest::addr_of(self.node).cast<void>(), self.attached);
    }
}
GUEST_EXPORT(0x002fcd48, node_holder_call_004ee9cc);

// Calls f_004ee9a8 on the sub-object, when something is attached.
void node_holder_call_004ee9a8(NodeHolder &self) {
    if (self.attached) {
        node_call_004ee9a8(guest::addr_of(self.node).cast<void>(), self.attached);
    }
}
GUEST_EXPORT(0x002fcd60, node_holder_call_004ee9a8);
