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
