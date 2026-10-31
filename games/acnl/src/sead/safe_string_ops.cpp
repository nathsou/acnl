// Helper around the CFL state flag, next to the sead::SafeStringBase<char> code.
#include "guest/guest.hpp"

namespace {

struct StateFlag {
    u8 unknown_00[0x10];
    u32 value_10;
};
GUEST_OFFSET(StateFlag, value_10, 0x10);
inline guest::global<StateFlag, 0x00975274> state_flag;

bool cfl_state_flag_set() { return state_flag->value_10 != 0; }

}  // namespace

GUEST_EXPORT(0x0013d028, cfl_state_flag_set);
