// Small actions of NPC talk receivers: forwarding to the speaker's handler, and beginning a request.
#include "core/fuzz_helpers.hpp"
#include "guest/guest.hpp"
#include "npc/forwarding_handler.hpp"

using guest::gptr;

namespace {

constexpr u32 TARGET_VFUNCTION_SLOT = 0x80 / 4;  // the target's virtual function the handler forwards to (0x005f11f4)
constexpr u32 FLAG_BIT_REQUESTED = 7;            // meaning not known yet
constexpr u32 REQUEST_KIND = 1;                  // meaning not known yet

struct TalkOwner {
    u8 unknown_000[0x354];
    gptr<ForwardingHandler> handler;
};
GUEST_OFFSET(TalkOwner, handler, 0x354);

inline constexpr guest::Function<0x005f11f4, void(gptr<ForwardingHandler> handler, u32 first, u32 second)>
    forward_to_target;
inline constexpr guest::Function<0x00813b30, void(gptr<u8> bits, u32 index, u32 value)> set_flag_below_19;
inline constexpr guest::Function<0x00292bac, s32()> request_owner_state;
inline constexpr guest::Function<0x00290cfc, u32(u32 kind)> begin_request;

}  // namespace

struct TalkRecept {
    u32 unknown_00;
    gptr<TalkOwner> owner;
    u8 unknown_08[0x21c];
    u8 flags[4];  // bit array at 0x224

    bool forward_to_handler(u32 first, u32 second);
    u32 begin_request_if_idle();
};
GUEST_OFFSET(TalkRecept, owner, 4);
GUEST_OFFSET(TalkRecept, flags, 0x224);

// Passes the two values to the owner's handler when it has one; reports whether it did.
bool TalkRecept::forward_to_handler(u32 first, u32 second) {
    if (owner == nullptr) {
        return false;
    }
    gptr<ForwardingHandler> handler = owner->handler;
    if (handler == nullptr) {
        return false;
    }
    forward_to_target(handler, first, second);
    return true;
}
GUEST_EXPORT(0x00230f90, TalkRecept::forward_to_handler);
GUEST_FUZZ(0x00230f90, 200, [](guest::Fuzz &f) {
    auto recept = f.object<TalkRecept>();
    auto owner = f.object<TalkOwner>();
    auto handler = f.object<ForwardingHandler>();
    auto target = f.object<hobj::VirtualObject>();
    target->vtable = fuzz::harmless_vtable(f, TARGET_VFUNCTION_SLOT + 1);
    handler->target = target;
    owner->handler = f.below(4) ? handler : gptr<ForwardingHandler>(0u);
    recept->owner = f.below(4) ? owner : gptr<TalkOwner>(0u);
    f.arguments(recept, f.number(), f.pick<u32>({0xb, 0xc, 0x10, f.number()}));
});

// When the request slot's owner has state 0: marks the receiver as requested and tries to begin the request.
// Otherwise returns the owner's state.
u32 TalkRecept::begin_request_if_idle() {
    s32 state = request_owner_state();
    if (state != 0) {
        return u32(state);
    }
    set_flag_below_19(guest::addr_of(flags[0]), FLAG_BIT_REQUESTED, 1);
    return begin_request(REQUEST_KIND);
}
GUEST_EXPORT(0x00231724, TalkRecept::begin_request_if_idle);
GUEST_FUZZ(0x00231724, 100, [](guest::Fuzz &f) { f.arguments(f.object<TalkRecept>()); });
