// A state change that asks the state's handler (a member function from the table at 0x009538ec) and keeps the state
// only when the handler accepts.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

constexpr u32 TABLE_ADDRESS = 0x009538ec;

struct StateEntry {
    guest::MemberFunctionPointer handler;
    u32 unknown_08[2];
};
GUEST_SIZE(StateEntry, 16);

struct StatefulObject {
    u8 unknown_00[0x28];
    u16 state_28;
};
GUEST_OFFSET(StatefulObject, state_28, 0x28);

}  // namespace

// Runs the handler of the state with the two arguments; when it answers non-zero the state is stored and true is
// returned.
bool try_enter_state(StatefulObject &object, u32 state, u32 first, u32 second) {
    const StateEntry &entry = gptr<StateEntry>(TABLE_ADDRESS)[state];
    u32 result = guest::call_member<u32>(entry.handler, guest::addr_of(object), first, second);
    if (result == 0) {
        return false;
    }
    object.state_28 = u16(state);
    return true;
}
GUEST_EXPORT(0x00231a4c, try_enter_state);
// (No fuzzing: the table belongs to the running game, and overwriting its handlers would change what it does.)
