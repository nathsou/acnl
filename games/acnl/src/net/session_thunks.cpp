// Small accessors on the global NetSession: entry template lookup and two states at 0x1f0 and 0x214.
#include "net/net_session.hpp"

using guest::gptr;

namespace {

inline guest::global<u32[PacketBuffer::TEMPLATE_COUNT], 0x0087b640> template_offsets;

enum State1f0 : u8 {
    STATE_1F0_IDLE_A = 0,
    STATE_1F0_IDLE_B = 1,
    STATE_1F0_BEGUN = 2,
};
constexpr u8 VALUE_1F1_BEGUN = 3;  // meaning not known yet
constexpr u8 STATE_214_LIMIT = 2;

constexpr u8 MODE_LIMIT = 1;
constexpr u8 SELECTOR_USES_27A3 = 2;

}  // namespace

// The stored entry template for an id (null for an id out of range, or while the templates are not set).
gptr<u8> entry_template_address(u32 id) {
    PacketBuffer &buffer = (*net_session)->buffer;
    if (id >= PacketBuffer::TEMPLATE_COUNT || !buffer.templates) {
        return gptr<u8>(0u);
    }
    return gptr<u8>(buffer.templates.addr() + template_offsets[id]);
}
GUEST_EXPORT(0x006268f8, entry_template_address);
GUEST_FUZZ(0x006268f8, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 0x95, 0x96, 0x97, 0xffffffffu, f.below(0x96)}));
});

// Moves the session from state 0 or 1 to the next state; false when it is in another state.
bool begin_state_1f0() {
    NetSession &session = **net_session;
    if (session.state_1f0 != STATE_1F0_IDLE_A && session.state_1f0 != STATE_1F0_IDLE_B) {
        return false;
    }
    session.state_1f0 = STATE_1F0_BEGUN;
    session.value_1f1 = VALUE_1F1_BEGUN;
    return true;
}
GUEST_EXPORT(0x006269b0, begin_state_1f0);
GUEST_FUZZ(0x006269b0, 100, [](guest::Fuzz &f) {
    (*net_session)->state_1f0 = f.pick<u8>({0, 1, 2, 3, 0xff});
    f.arguments();
});

// The address of the session's byte at 0x214.
gptr<u8> state_214_address() {
    return guest::addr_of((*net_session)->state_214);
}
GUEST_EXPORT(0x00626a8c, state_214_address);
GUEST_FUZZ(0x00626a8c, 20, [](guest::Fuzz &f) { f.arguments(); });

bool state_214_above_2() {
    return (*net_session)->state_214 > STATE_214_LIMIT;
}
GUEST_EXPORT(0x00626ba8, state_214_above_2);
GUEST_FUZZ(0x00626ba8, 100, [](guest::Fuzz &f) {
    (*net_session)->state_214 = f.pick<u8>({0, 1, 2, 3, 0xff});
    f.arguments();
});

u8 NetSession::mode() const {
    return mode_1326f;
}
GUEST_EXPORT(0x0075dfdc, NetSession::mode);
GUEST_FUZZ(0x0075dfdc, 100, [](guest::Fuzz &f) {
    (*net_session)->mode_1326f = f.pick<u8>({0, 1, 2, 0xff});
    f.arguments(*net_session);
});

// Whether the mode is above 1.
bool mode_above_1() {
    return (*net_session)->mode() > MODE_LIMIT;
}
GUEST_EXPORT(0x002fc900, mode_above_1);
GUEST_FUZZ(0x002fc900, 100, [](guest::Fuzz &f) {
    (*net_session)->mode_1326f = f.pick<u8>({0, 1, 2, 0xff});
    f.arguments();
});

u8 current_mode() {
    return (*net_session)->mode();
}
GUEST_EXPORT(0x00625690, current_mode);
GUEST_FUZZ(0x00625690, 50, [](guest::Fuzz &f) { f.arguments(); });

// The session's target value: value_27a3 while the selector is 2, else target_23d.
u8 current_target() {
    NetSession &session = **net_session;
    return session.selector_1329d == SELECTOR_USES_27A3 ? session.value_27a3 : session.target_23d;
}
GUEST_EXPORT(0x006256a0, current_target);
GUEST_FUZZ(0x006256a0, 100, [](guest::Fuzz &f) {
    (*net_session)->selector_1329d = f.pick<u8>({0, 1, 2, 3});
    f.arguments();
});
