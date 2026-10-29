// The request slot of the game's state object at 0x00950708: one request at a time, claimed with a kind; and the
// state byte of the object it points to.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// The object the slot points at (contents mostly not known yet).
struct RequestOwner {
    u8 unknown_000[0xb90];
    s8 state;
};
GUEST_OFFSET(RequestOwner, state, 0xb90);

struct RequestSlot {
    u8 unknown_00[0xa];
    u8 pending;
    u8 kind;
    gptr<RequestOwner> owner;
};
GUEST_OFFSET(RequestSlot, pending, 0xa);
GUEST_OFFSET(RequestSlot, owner, 0xc);

inline guest::global<RequestSlot, 0x00950708> request_slot;

}  // namespace

// The owner's state byte, 0 without an owner.
s32 request_owner_state() {
    if (request_slot->owner == nullptr) {
        return 0;
    }
    return request_slot->owner->state;
}
GUEST_EXPORT(0x00292bac, request_owner_state);
GUEST_FUZZ(0x00292bac, 100, [](guest::Fuzz &f) {
    auto owner = f.object<RequestOwner>();
    owner->state = f.pick<s8>({0, 1, -1, 5, -128, 127});
    request_slot->owner = f.below(4) ? owner : gptr<RequestOwner>(0u);
    f.arguments();
});

// Claims the slot for a kind; false when it is already claimed.
bool begin_request(u32 kind) {
    if (request_slot->pending != 0) {
        return false;
    }
    request_slot->pending = 1;
    request_slot->kind = u8(kind);
    return true;
}
GUEST_EXPORT(0x00290cfc, begin_request);
GUEST_FUZZ(0x00290cfc, 100, [](guest::Fuzz &f) {
    request_slot->pending = f.pick<u8>({0, 0, 1, 7});
    f.arguments(f.pick<u32>({0, 1, 0x1ff, f.number()}));
});
