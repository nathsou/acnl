// The layout system's global state at 0x00975c20: the layout manager and the two allocators layouts are created
// with (set up once at boot).
#include "guest/guest.hpp"

namespace {

struct LayoutGlobals {
    gptr<void> layout_mgr;    // ssys::ma::lyt::LayoutMgr
    gptr<void> allocator_4;   // ssys::ma::Allocator, the first one created
    gptr<void> allocator_8;   // ssys::ma::Allocator, the second one created
};
GUEST_OFFSET(LayoutGlobals, layout_mgr, 0);
GUEST_OFFSET(LayoutGlobals, allocator_4, 4);
GUEST_OFFSET(LayoutGlobals, allocator_8, 8);

inline guest::global<LayoutGlobals, 0x00975c20> layout_globals;

// The first layout allocator (used by most layout objects: buttons, menus, lists).
gptr<void> layout_allocator_4() {
    return layout_globals->allocator_4;
}

// The second layout allocator.
gptr<void> layout_allocator_8() {
    return layout_globals->allocator_8;
}

}  // namespace

GUEST_EXPORT(0x00569d50, layout_allocator_4);

GUEST_EXPORT(0x00569dc4, layout_allocator_8);
