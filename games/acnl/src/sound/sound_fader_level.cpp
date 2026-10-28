#include "guest/guest.hpp"

using guest::gptr;

namespace sound_fader_level {

// The fields of a SoundFader that the rewritten setter writes; the rest is not known yet.
struct FaderFields {
    u32 vtable;
    float unknown_04;
    float unknown_08;
    float unknown_0c;
    s32 unknown_10;
};
GUEST_OFFSET(FaderFields, unknown_04, 0x04);
GUEST_OFFSET(FaderFields, unknown_08, 0x08);
GUEST_OFFSET(FaderFields, unknown_10, 0x10);
GUEST_SIZE(FaderFields, 0x14);

constexpr s32 NO_TARGET = -1;  // what the field at 0x10 is reset to (meaning not known yet)

// SoundFader::virtual_2: sets both level fields to the same value and resets the field at 0x10.
void set_level(gptr<FaderFields> self, float level) {
    self->unknown_04 = level;
    self->unknown_08 = level;
    self->unknown_10 = NO_TARGET;
}

// A thunk that adds and removes the same offset: it returns its argument.
u32 offset_identity_thunk(u32 object) {
    return object;
}

}  // namespace sound_fader_level

GUEST_EXPORT(0x0012e804, sound_fader_level::set_level);
GUEST_FUZZ(0x0012e804, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<sound_fader_level::FaderFields>(), f.real());
});

GUEST_EXPORT(0x0012e858, sound_fader_level::offset_identity_thunk);
GUEST_FUZZ(0x0012e858, 200, [](guest::Fuzz &f) { f.arguments(f.number()); });
