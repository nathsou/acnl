// Small members of UI objects around 0x002cd000.
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x00304640, void(gptr<void> part)> request_result;

constexpr u32 INITIAL_FLAGS = 0x08003800;  // meaning not known yet

}  // namespace

// An object that waits for a result: when it is ready the result is handed out, otherwise one is requested.
struct PollState {
    u8 unknown_00[8];
    u8 requester[0x2c];  // the part a result is requested from
    u32 result;
    u8 ready;
    u8 unknown_39[3];
    u32 pending_value;
    u8 unknown_40[4];
    u32 delivered_value;

    bool take_result(u32 &out);
};
GUEST_OFFSET(PollState, requester, 8);
GUEST_OFFSET(PollState, result, 0x34);
GUEST_OFFSET(PollState, ready, 0x38);
GUEST_OFFSET(PollState, pending_value, 0x3c);
GUEST_OFFSET(PollState, delivered_value, 0x44);

// When ready: gives the result, moves the pending value on and returns true. Otherwise, if there is no result either,
// requests one, and returns false.
bool PollState::take_result(u32 &out) {
    u32 current = result;
    if (ready != 0) {
        out = current;
        delivered_value = pending_value;
        return true;
    }
    if (current == 0) {
        request_result(guest::addr_of(requester[0]));
    }
    return false;
}
GUEST_EXPORT(0x002cd77c, PollState::take_result);

// Two words at 0x10: the initial flags and zero.
struct FlagsPair {
    u8 unknown_00[0x10];
    u32 flags;
    u32 word_14;

    void reset();
};
GUEST_OFFSET(FlagsPair, flags, 0x10);

void FlagsPair::reset() {
    flags = INITIAL_FLAGS;
    word_14 = 0;
}
GUEST_EXPORT(0x002cd508, FlagsPair::reset);
