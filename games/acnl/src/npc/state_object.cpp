// Small state checks on an object with a state byte at 4 (what it is, is not known yet), and AcNpcSp::virtual_45.
#include <cstring>

#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x0075ad18, u32(gptr<void> argument)> check_75ad18;

}  // namespace

struct StateObject {
    // states the checks below care about (meaning not known yet)
    static constexpr u8 STATE_0 = 0;
    static constexpr u8 STATE_3 = 3;
    static constexpr u8 STATE_4 = 4;
    static constexpr u8 STATE_5 = 5;
    static constexpr u8 STATE_8 = 8;

    u8 unknown_00[4];
    u8 state;
    u8 unknown_05[7];
    u32 word_0c;

    bool state_check(u32 strict) const;
};
GUEST_OFFSET(StateObject, state, 4);
GUEST_OFFSET(StateObject, word_0c, 0xc);

// Without `strict`: the state is 3, 4, 5 or 8. With it: the state is 3, 4 or 8 and word_0c is 0.
bool StateObject::state_check(u32 strict) const {
    bool common = state == STATE_3 || state == STATE_4 || state == STATE_8;
    if (strict == 0) {
        return common || state == STATE_5;
    }
    return common && word_0c == 0;
}
GUEST_EXPORT(0x0075cf88, StateObject::state_check);

struct StateObject360 {
    u8 unknown_00[4];
    u8 state;
    u8 unknown_05[0x360 - 5];
    gptr<void> pointer_360;

    u32 check_pointer_when_state_0() const;
};
GUEST_OFFSET(StateObject360, state, 4);
GUEST_OFFSET(StateObject360, pointer_360, 0x360);

// check_75ad18 on pointer_360, masked to bit 0 by "state is 0".
u32 StateObject360::check_pointer_when_state_0() const {
    u32 state_is_zero = state == 0 ? 1 : 0;
    return check_75ad18(pointer_360) & state_is_zero;
}
GUEST_EXPORT(0x0075d0f0, StateObject360::check_pointer_when_state_0);

struct AcNpcSp {
    u8 unknown_0000[0x1d9f];
    s8 value_1d9f;

    s8 virtual_45() const;
};
GUEST_OFFSET(AcNpcSp, value_1d9f, 0x1d9f);

s8 AcNpcSp::virtual_45() const {
    return value_1d9f;
}
GUEST_EXPORT(0x0075d12c, AcNpcSp::virtual_45);
