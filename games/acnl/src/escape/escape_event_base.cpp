#include "escape/escape_event_base.hpp"

#include <cstddef>

using guest::gptr;

void EscapeEventBase::set_sub_byte_de(u8 value) {
    if (sub) {
        sub->byte_de = value;
    }
}
GUEST_EXPORT(0x402e2f58, EscapeEventBase::set_sub_byte_de);

void EscapeEventBase::set_sub_byte_df(u8 value) {
    if (sub) {
        sub->byte_df = value;
    }
}
GUEST_EXPORT(0x402e2f68, EscapeEventBase::set_sub_byte_df);

bool EscapeEventBase::link_18_state_is_1() const {
    return link_18->state_1544 == 1;
}
GUEST_EXPORT(0x402e2f78, EscapeEventBase::link_18_state_is_1);

// True when none of the (non-null) linked objects has byte 0x92 or 0x94 set.
bool EscapeEventBase::no_link_has_flags() const {
    bool any = false;
    for (gptr<EscapeEventLink> link : {link_18, link_1c, link_20}) {
        if (link && link->has_flag_92_or_94()) {
            any = true;
        }
    }
    return !any;
}
GUEST_EXPORT(0x402e2f94, EscapeEventBase::no_link_has_flags);

// These objects are large but each function touches only a few bytes: to keep the scratch memory (on the guest
// stack) small, only the bytes from `first` to `end` are allocated and the object pointer is placed so that they
// fall in the allocation. The functions never access anything outside it.

// An event with only its three link pointers
