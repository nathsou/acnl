#include "applet/err_eula_mgr.hpp"

namespace {

// Constant data in the rodata: the callback a reset installs (the rest is not known yet).
struct ErrEulaDefaults {
    guest::MemberFunctionPointer reset_callback;
};
inline guest::global<ErrEulaDefaults, 0x00845240> defaults;

struct UnknownByteState {
    u8 unknown_00;
    s8 value_01;
};
inline guest::global<UnknownByteState, 0x0094e3ac> byte_state;

}  // namespace

bool ErrEulaMgr::is_idle_with_byte_fac() const {
    return state == 0 && byte_fac != 0;
}

static bool err_eula_is_idle_with_byte_fac() {
    return err_eula_globals->instance->is_idle_with_byte_fac();
}
GUEST_EXPORT(0x005ce6dc, err_eula_is_idle_with_byte_fac);
GUEST_FUZZ(0x005ce6dc, 200, [](guest::Fuzz &f) { f.arguments(); });

// Puts the manager back to its initial state (the callbacks both become the reset callback).
void ErrEulaMgr::reset() {
    state = INITIAL_STATE;
    byte_fab = 1;
    byte_fad = 0;
    byte_24 = INITIAL_BYTE_24;
    byte_fac = 0;
    byte_fae = 0;
    byte_fb0 = 0;
    callback_14 = defaults->reset_callback;
    callback_1c = defaults->reset_callback;
}
GUEST_EXPORT(0x005ceb84, ErrEulaMgr::reset);
GUEST_FUZZ(0x005ceb84, 200, [](guest::Fuzz &f) {
    // the live manager when there is one (the object is large for scratch memory)
    gptr<ErrEulaMgr> mgr = err_eula_globals->instance;
    if (!mgr) {
        mgr = f.object<ErrEulaMgr>();
    }
    f.arguments(mgr);
});

static s8 read_byte_state_value() {
    return byte_state->value_01;
}
GUEST_EXPORT(0x005cebd4, read_byte_state_value);
GUEST_FUZZ(0x005cebd4, 200, [](guest::Fuzz &f) { f.arguments(); });
