#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 EVENT_BOOK_VTABLE = 0x008f95b0;

}  // namespace

// EventBook constructor: only installs the vtable.
static gptr<void> construct_event_book(gptr<void> self) {
    *self.cast<u32>() = EVENT_BOOK_VTABLE;
    return self;
}
GUEST_EXPORT(0x006e4824, construct_event_book);
