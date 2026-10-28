// A handle to a playing sound: one pointer to the sound, which points back at its handle.
#include "guest/guest.hpp"

namespace {

struct SoundHandle;

struct HandledSound {
    u8 unknown_000[0x118];
    guest::gptr<SoundHandle> handle;  // the handle attached to this sound, if any
};
GUEST_OFFSET(HandledSound, handle, 0x118);

struct SoundHandle {
    guest::gptr<HandledSound> sound;

    void detach();
};
GUEST_SIZE(SoundHandle, 4);

}  // namespace

// Lets go of the sound. If the sound still points back at this handle, that back-pointer is cleared as well.
void SoundHandle::detach() {
    if (!sound) {
        return;
    }
    if (sound->handle == guest::addr_of(this)) {
        sound->handle = nullptr;
    }
    sound = nullptr;
}
GUEST_EXPORT(0x00130ed8, SoundHandle::detach);

GUEST_FUZZ(0x00130ed8, 300, [](guest::Fuzz &f) {
    auto handle = f.object<SoundHandle>();
    switch (f.below(4)) {
    case 0:
        handle->sound = nullptr;
        break;
    default: {
        auto sound = f.object<HandledSound>();
        handle->sound = sound;
        switch (f.below(3)) {
        case 0: sound->handle = handle; break;
        case 1: sound->handle = nullptr; break;
        default: break;  // random bytes, only compared
        }
        break;
    }
    }
    f.arguments(handle);
});
