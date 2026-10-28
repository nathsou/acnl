#include "nfp/nfp_thread.hpp"

namespace nfp {

void Thread::virtual_16() {
    if (!object_90) {
        return;
    }
    guest::call_address<void>(object_90->vtable[0], object_90);
    gptr<Thread> self = guest::addr_of(this);

    u32 value = guest::call_address<u32>(vtable[OWN_VIRTUAL_12], self);
    guest::call_address<void>(vtable[OWN_VIRTUAL_11], self, value + VALUE_ADJUST);
    object_90 = nullptr;
}

}  // namespace nfp
GUEST_EXPORT(0x0051b33c, nfp::Thread::virtual_16);

// Only the path without an object: following random vtables would run arbitrary code.
GUEST_FUZZ(0x0051b33c, 200, [](guest::Fuzz &f) {
    auto thread = f.object<nfp::Thread>();
    thread->object_90 = nullptr;
    f.arguments(thread);
});
