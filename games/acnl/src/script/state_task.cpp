// An object running a request through a table of state handlers (pointers to member functions).
#include "guest/guest.hpp"

namespace {

using guest::gptr;

enum RequestStatus : u8 {
    STATUS_RUNNING = 1,
    STATUS_DONE_FLAG_SET = 2,
    STATUS_DONE_FLAG_CLEAR = 3,
};

struct TaskRequest {
    u8 unknown_00[0xac];
    u8 start_mode;  // 0, 1 or 2 pick the first state; other values keep the current one
    u8 status;      // RequestStatus
};
GUEST_OFFSET(TaskRequest, start_mode, 0xac);
GUEST_OFFSET(TaskRequest, status, 0xad);

// First states for start modes 0, 1 and 2
constexpr u8 START_STATES[] = {0, 12, 32};
constexpr u8 STATE_COUNT = 0x24;  // states at or past this end the run

struct TaskStates {
    u8 unknown_000[0x14];
    u8 state;
    u8 flag_15;  // decides the final status
    u8 unknown_016[0x164 - 0x16];
    gptr<TaskRequest> request;  // set while running
};
GUEST_OFFSET(TaskStates, state, 0x14);
GUEST_OFFSET(TaskStates, flag_15, 0x15);
GUEST_OFFSET(TaskStates, request, 0x164);

// One handler per state, called on the TaskStates part
inline guest::global<guest::MemberFunctionPointer[STATE_COUNT], 0x008916ac> state_handlers;

struct StateTask {
    u8 unknown_000[0x14];
    TaskStates states;
    u8 unknown_17c[0x198 - 0x17c];
    gptr<TaskRequest> request;

    void run();
};
GUEST_OFFSET(StateTask, states, 0x14);
GUEST_OFFSET(StateTask, request, 0x198);

}  // namespace

// Runs the request's handlers until the state leaves the table, then reports how it ended.
void StateTask::run() {
    gptr<TaskRequest> current = request;
    current->status = STATUS_RUNNING;
    u8 mode = current->start_mode;
    if (mode < sizeof(START_STATES)) {
        states.state = START_STATES[mode];
    }
    states.request = current;
    gptr<void> handler_object = guest::addr_of(states).cast<void>();
    while (states.state < STATE_COUNT) {
        guest::call_member<void>(state_handlers[states.state], handler_object);
    }
    states.request = nullptr;
    current->status = states.flag_15 != 0 ? STATUS_DONE_FLAG_SET : STATUS_DONE_FLAG_CLEAR;
}
GUEST_EXPORT(0x005f4cf8, StateTask::run);
