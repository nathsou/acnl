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

// ---- fuzzing
// These objects are large but each function touches only a few bytes: to keep the scratch memory (on the guest
// stack) small, only the bytes from `first` to `end` are allocated and the object pointer is placed so that they
// fall in the allocation. The functions never access anything outside it.

template <typename T>
static gptr<T> partial_object(guest::Fuzz &f, u32 first, u32 end) {
    gptr<void> block = f.allocate(end - first);
    f.bytes(block, end - first);
    return gptr<T>(block.addr() - first);
}

static gptr<EscapeEventLink> some_link_flags(guest::Fuzz &f) {
    auto link = partial_object<EscapeEventLink>(f, offsetof(EscapeEventLink, flag_92),
                                                offsetof(EscapeEventLink, flag_94) + 1);
    if (f.below(2)) {
        link->flag_92 = 0;
    }
    if (f.below(2)) {
        link->flag_94 = 0;
    }
    return link;
}

static gptr<EscapeEventLink> some_link_state(guest::Fuzz &f) {
    auto link = partial_object<EscapeEventLink>(f, offsetof(EscapeEventLink, state_1544),
                                                offsetof(EscapeEventLink, state_1544) + 1);
    if (f.below(2)) {
        link->state_1544 = f.pick<u8>({0, 1, 2});
    }
    return link;
}

// An event with only its three link pointers
static gptr<EscapeEventBase> some_event_links(guest::Fuzz &f) {
    return partial_object<EscapeEventBase>(f, offsetof(EscapeEventBase, link_18),
                                           offsetof(EscapeEventBase, link_20) + 4);
}

// An event with only its sub pointer, the sub-object with only its two bytes
static gptr<EscapeEventBase> some_event_sub(guest::Fuzz &f) {
    auto event = partial_object<EscapeEventBase>(f, offsetof(EscapeEventBase, sub), offsetof(EscapeEventBase, sub) + 4);
    event->sub = f.below(5) ? partial_object<EscapeEventSub>(f, offsetof(EscapeEventSub, byte_de),
                                                             offsetof(EscapeEventSub, byte_df) + 1)
                            : gptr<EscapeEventSub>();
    return event;
}

GUEST_FUZZ(0x402e2f58, 200, [](guest::Fuzz &f) {
    f.arguments(some_event_sub(f), f.pick<u32>({0, 1, 2, 0xff, f.number() & 0xff}));
});
GUEST_FUZZ(0x402e2f68, 200, [](guest::Fuzz &f) {
    f.arguments(some_event_sub(f), f.pick<u32>({0, 1, 2, 0xff, f.number() & 0xff}));
});
GUEST_FUZZ(0x402e2f78, 200, [](guest::Fuzz &f) {
    auto event = some_event_links(f);
    event->link_18 = some_link_state(f);
    f.arguments(event);
});
GUEST_FUZZ(0x402e2f94, 300, [](guest::Fuzz &f) {
    auto event = some_event_links(f);
    event->link_18 = f.below(4) ? some_link_flags(f) : gptr<EscapeEventLink>();
    event->link_1c = f.below(4) ? some_link_flags(f) : gptr<EscapeEventLink>();
    event->link_20 = f.below(4) ? some_link_flags(f) : gptr<EscapeEventLink>();
    f.arguments(event);
});
