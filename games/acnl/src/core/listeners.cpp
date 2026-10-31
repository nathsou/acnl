#include "guest/guest.hpp"

namespace {

// An object that is handed a value and then asked, through a virtual function, to act on it.
struct Listener {
    guest::gptr<u32> vtable;
    u8 unknown_04[4];
    u32 value_08;
};
GUEST_OFFSET(Listener, value_08, 8);

struct ListenerPair {
    guest::gptr<Listener> first;   // may be null
    guest::gptr<Listener> second;  // may be null
};
inline guest::global<ListenerPair, 0x009753e0> listeners;

constexpr u32 SLOT_A = 4;  // vtable offset 0x10
constexpr u32 SLOT_B = 5;  // vtable offset 0x14

u32 call_slot(guest::gptr<Listener> listener, u32 slot) {
    u32 function = listener->vtable[slot];
    return guest::call_address<u32>(function, guest::gptr<void>(listener.addr()));
}

// Gives the value to the first listener and calls its virtual; if that returns non-zero (or there is no first
// listener), the same for the second one, whose result is returned. 1 when there is no listener at all.
u32 notify(u32 value, u32 slot) {
    u32 result = 1;
    if (listeners->first) {
        listeners->first->value_08 = value;
        guest::gptr<Listener> first = listeners->first;
        result = call_slot(first, slot);
        if (result == 0) {
            return 0;
        }
    }
    if (listeners->second) {
        listeners->second->value_08 = value;
        guest::gptr<Listener> second = listeners->second;
        return call_slot(second, slot);
    }
    return result;
}

}  // namespace

u32 notify_listeners_a(u32 value) {
    return notify(value, SLOT_A);
}
GUEST_EXPORT(0x00565f00, notify_listeners_a);

u32 notify_listeners_b(u32 value) {
    return notify(value, SLOT_B);
}
GUEST_EXPORT(0x00565f74, notify_listeners_b);
