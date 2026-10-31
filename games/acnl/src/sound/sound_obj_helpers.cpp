// Small members of the sound objects around 0x00250000.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x00277f80, void(gptr<void> object)> stop_player;
inline constexpr guest::Function<0x00136cc8, void(gptr<void> part)> release_part;
inline constexpr guest::Function<0x0020aedc, void(gptr<void> object)> stop_base;

constexpr s32 NO_HANDLE = -1;

struct SoundHandle {
    u8 unknown_00[0xb0];
    s32 id;
};
GUEST_OFFSET(SoundHandle, id, 0xb0);

}  // namespace

// A sound object with a handle at 0x44 (to a handle with an id at 0xb0) and a "playing" byte at 0x5c.
struct SoundObjectWithHandle {
    u8 unknown_00[0x44];
    gptr<SoundHandle> handle;  // may be null
    u8 unknown_48[0x14];
    u8 playing;

    bool has_handle_id(s32 id) const;
    void stop();
};
GUEST_OFFSET(SoundObjectWithHandle, handle, 0x44);
GUEST_OFFSET(SoundObjectWithHandle, playing, 0x5c);

bool SoundObjectWithHandle::has_handle_id(s32 id) const {
    s32 own_id = handle ? handle->id : NO_HANDLE;
    return own_id == id;
}
GUEST_EXPORT(0x0025038c, SoundObjectWithHandle::has_handle_id);

// When playing: releases the handle part, stops the base object and clears the byte.
void SoundObjectWithHandle::stop() {
    if (playing == 0) {
        return;
    }
    release_part(guest::addr_of(handle));
    stop_base(guest::addr_of(this));
    playing = 0;
}
GUEST_EXPORT(0x002504e0, SoundObjectWithHandle::stop);

// A sound object player with a "playing" byte at 0xc4.
struct SoundObjectPlayer {
    u8 unknown_00[0xc4];
    u8 playing;

    void stop();
};
GUEST_OFFSET(SoundObjectPlayer, playing, 0xc4);

void SoundObjectPlayer::stop() {
    if (playing == 0) {
        return;
    }
    stop_player(guest::addr_of(this));
    playing = 0;
}
GUEST_EXPORT(0x0025030c, SoundObjectPlayer::stop);
