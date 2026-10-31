// script::Searcher: a state machine of the script code whose virtual functions dispatch to per-state handlers
// (tables of pointers to member functions, indexed by the state).
#include "guest/guest.hpp"

namespace {

using guest::gptr;
using guest::MemberFunctionPointer;

// Per-state handler tables (pointers to Searcher member functions; a null entry means "nothing to do")
constexpr gptr<const MemberFunctionPointer> HANDLERS_5{0x00890ec8};
constexpr gptr<const MemberFunctionPointer> HANDLERS_6{0x00890ee8};

constexpr u8 STATE_1 = 1;  // the state in which virtual_3 latches unknown_04 (meaning not known yet)

struct Searcher {
    u32 vtable;
    u32 unknown_04;
    u8 unknown_08[0x60 - 0x08];
    u8 state;  // index into the handler tables
    u8 unknown_61[0x74 - 0x61];
    u8 latched;  // set once unknown_04 has been copied to latched_value
    u8 unknown_75[3];
    u32 latched_value;

    void latch_in_state_1();
    void call_handler_5(u32 argument);
    void call_handler_6(u32 argument);

private:
    void call_handler(gptr<const MemberFunctionPointer> table, u32 argument);
};
GUEST_OFFSET(Searcher, unknown_04, 0x04);
GUEST_OFFSET(Searcher, state, 0x60);
GUEST_OFFSET(Searcher, latched, 0x74);
GUEST_OFFSET(Searcher, latched_value, 0x78);
GUEST_SIZE(Searcher, 0x7c);

bool is_null_handler(const MemberFunctionPointer &handler) {
    return handler.function == 0 && (handler.adjust & 1) == 0;
}

// Calls the current state's handler from a table, if it has one (the caller's r1 is passed on).
void Searcher::call_handler(gptr<const MemberFunctionPointer> table, u32 argument) {
    const MemberFunctionPointer &handler = table[state];
    if (is_null_handler(handler)) {
        return;
    }
    guest::call_member<void>(handler, guest::addr_of(*this).cast<void>(), argument);
}

// virtual_3: in state 1, the first call copies unknown_04 to latched_value.
void Searcher::latch_in_state_1() {
    if (state != STATE_1 || latched != 0) {
        return;
    }
    latched = 1;
    latched_value = unknown_04;
}

// virtual_5
void Searcher::call_handler_5(u32 argument) { call_handler(HANDLERS_5, argument); }

// virtual_6
void Searcher::call_handler_6(u32 argument) { call_handler(HANDLERS_6, argument); }

}  // namespace

GUEST_EXPORT(0x005fd284, Searcher::latch_in_state_1);
GUEST_EXPORT(0x005fd1b0, Searcher::call_handler_5);
GUEST_EXPORT(0x005fd2ac, Searcher::call_handler_6);
