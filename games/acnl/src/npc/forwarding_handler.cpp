// Thunks that call a virtual function of a handler's target (the callee gets the target and the remaining
// arguments; the compiler used one of the argument registers as scratch, so the callee never sees those).
#include "core/fuzz_helpers.hpp"
#include "npc/forwarding_handler.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

// With two arguments (r1, r2).
template <u32 Offset>
u32 call_target_with_two(gptr<ForwardingHandler> handler, u32 first, u32 second) {
    gptr<VirtualObject> target = handler->target;
    return guest::call_address<u32>(target->vtable[Offset / 4], target, first, second);
}

// With one argument (r1).
template <u32 Offset>
u32 call_target_with_one(gptr<ForwardingHandler> handler, u32 first) {
    gptr<VirtualObject> target = handler->target;
    return guest::call_address<u32>(target->vtable[Offset / 4], target, first);
}

// With none.
template <u32 Offset>
u32 call_target_with_none(gptr<ForwardingHandler> handler) {
    gptr<VirtualObject> target = handler->target;
    return guest::call_address<u32>(target->vtable[Offset / 4], target);
}

constexpr u32 FUZZ_SLOTS = 0xa4 / 4 + 1;

gptr<ForwardingHandler> fuzz_handler(guest::Fuzz &f) {
    auto handler = f.object<ForwardingHandler>();
    auto target = f.object<VirtualObject>();
    target->vtable = fuzz::harmless_vtable(f, FUZZ_SLOTS);
    handler->target = target;
    return handler;
}

}  // namespace

GUEST_EXPORT(0x005f11f4, call_target_with_two<0x80>);
GUEST_EXPORT(0x005f1204, call_target_with_two<0x64>);
GUEST_EXPORT(0x005f1214, call_target_with_two<0x5c>);
GUEST_EXPORT(0x005f1224, call_target_with_two<0x50>);
GUEST_EXPORT(0x005f1274, call_target_with_two<0x68>);
GUEST_EXPORT(0x005f1294, call_target_with_two<0x8c>);
GUEST_EXPORT(0x002fe874, call_target_with_two<0x94>);
GUEST_EXPORT(0x005f12b4, call_target_with_one<0x78>);
GUEST_EXPORT(0x005f1264, call_target_with_none<0x3c>);
GUEST_EXPORT(0x005f12a4, call_target_with_none<0x48>);
GUEST_EXPORT(0x00744978, call_target_with_none<0x48>);
GUEST_EXPORT(0x005f12c4, call_target_with_none<0xa4>);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static void fuzz_with_two(guest::Fuzz &f) {
    f.arguments(fuzz_handler(f), f.number(), f.number());
}
GUEST_FUZZ(0x005f11f4, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x005f1204, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x005f1214, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x005f1224, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x005f1274, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x005f1294, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });
GUEST_FUZZ(0x002fe874, 100, [](guest::Fuzz &f) { fuzz_with_two(f); });

GUEST_FUZZ(0x005f12b4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_handler(f), f.number()); });
GUEST_FUZZ(0x005f1264, 100, [](guest::Fuzz &f) { f.arguments(fuzz_handler(f)); });
GUEST_FUZZ(0x005f12a4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_handler(f)); });
GUEST_FUZZ(0x00744978, 100, [](guest::Fuzz &f) { f.arguments(fuzz_handler(f)); });
GUEST_FUZZ(0x005f12c4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_handler(f)); });
