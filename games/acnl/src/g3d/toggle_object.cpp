// An object with a vtable and a mode byte at 4 whose virtual 2 returns an object that gets one of two handler
// functions (f_004d4b94 / f_004d4b08) stored at 0x4c. What these objects are is not known yet.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 VIRTUAL_GET_TARGET = 2;           // vtable offset 8
constexpr u32 HANDLER_OFF = 0x004d4b94;         // stored for mode 0
constexpr u32 HANDLER_ON = 0x004d4b08;          // stored for mode 1

// What the virtual returns (extent not known yet).
struct ToggleTarget {
    u8 unknown_00[0x4c];
    u32 handler;
};
GUEST_OFFSET(ToggleTarget, handler, 0x4c);

// An object holding a flag byte at 0x10.
struct ModeSource {
    u8 unknown_00[0x10];
    u8 flag;
};
GUEST_OFFSET(ModeSource, flag, 0x10);

}  // namespace

struct ToggleObject {
    gptr<u32> vtable;
    u8 mode;

    void set_mode(u32 new_mode);
    void set_mode_from(const ModeSource &source);

private:
    gptr<ToggleTarget> get_target();
};
GUEST_OFFSET(ToggleObject, mode, 4);

gptr<ToggleTarget> ToggleObject::get_target() {
    return guest::call_address<gptr<ToggleTarget>>(vtable[VIRTUAL_GET_TARGET], guest::addr_of(this));
}

// Mode 0 or 1 installs the matching handler on the target; other modes only record the mode.
void ToggleObject::set_mode(u32 new_mode) {
    if (new_mode == 0) {
        get_target()->handler = HANDLER_OFF;
    } else if (new_mode == 1) {
        get_target()->handler = HANDLER_ON;
    }
    mode = u8(new_mode);
}
GUEST_EXPORT(0x004ee904, ToggleObject::set_mode);

// Same, with the mode taken as the truth value of another object's flag.
void ToggleObject::set_mode_from(const ModeSource &source) {
    bool on = source.flag != 0;
    gptr<ToggleTarget> target = get_target();
    target->handler = on ? HANDLER_ON : HANDLER_OFF;
    mode = on;
}
GUEST_EXPORT(0x004ee958, ToggleObject::set_mode_from);

