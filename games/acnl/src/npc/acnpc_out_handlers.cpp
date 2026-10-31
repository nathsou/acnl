#include "guest/guest.hpp"

namespace {

// AcNpcOut (outdoor NPC): only the two state bytes touched here are named.
struct AcNpcOut {
    static constexpr u8 STATE_DONE = 0x1a;
    static constexpr u32 HANDLER_COUNT = 5;
    static constexpr u32 HANDLER_TABLE = 0x4057e714;

    u8 unknown_0000[0x1975];
    u8 state_1975;
    u8 state_1976;

    // If the state is already STATE_DONE, copies it; otherwise clears state_1976 and tries the handler
    // member functions in order until one returns non-zero (they are expected to set the state themselves).
    void run_state_handlers(u32 argument);
};
GUEST_OFFSET(AcNpcOut, state_1975, 0x1975);
GUEST_OFFSET(AcNpcOut, state_1976, 0x1976);

inline guest::global<guest::MemberFunctionPointer[AcNpcOut::HANDLER_COUNT], AcNpcOut::HANDLER_TABLE> state_handlers;

void AcNpcOut::run_state_handlers(u32 argument) {
    if (state_1975 == STATE_DONE) {
        state_1976 = STATE_DONE;
        return;
    }
    state_1976 = 0;
    for (u32 i = 0; i < HANDLER_COUNT; i++) {
        if (guest::call_member<u32>(state_handlers[i], guest::addr_of(this), argument) != 0) {
            return;
        }
    }
}
GUEST_EXPORT(0x405314b0, AcNpcOut::run_state_handlers);

// Maps a code byte to a slot number: 0-3 to 10-13, 0x42-0x4b to 0-9, and a few other codes to 14-17; else 18.
u32 map_code_to_slot(const u8 &code_ref) {
    constexpr u32 FIRST_RANGE_CODE = 0x42;
    constexpr u32 LAST_RANGE_CODE = 0x4b;
    constexpr u32 NO_SLOT = 0x12;
    u32 code = code_ref;
    if (code <= 3) {
        return 0xa + code;
    }
    if (code >= FIRST_RANGE_CODE && code <= LAST_RANGE_CODE) {
        return code - FIRST_RANGE_CODE;
    }
    switch (code) {
    case 0x5e:
    case 0x81: return 0x11;
    case 0x60: return 0x10;
    case 0x84: return 0xe;
    case 0x88: return 0xf;
    default: return NO_SLOT;
    }
}
GUEST_EXPORT(0x40531538, map_code_to_slot);

}  // namespace
