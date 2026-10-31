// Checks on the state object the global at 0x009516a0 points to (meaning not known yet: a kind, a mode, a sub-mode).
#include "guest/guest.hpp"

namespace {

struct TalkStateEntry {
    u8 unknown_00[0x18];
    u8 mode;      // must be MODE_3 for strict checks
    u8 kind;      // matched against the requested kind
    u8 sub_mode;  // must not be SUB_MODE_2 for strict checks
};
GUEST_OFFSET(TalkStateEntry, mode, 0x18);
GUEST_OFFSET(TalkStateEntry, kind, 0x19);
GUEST_OFFSET(TalkStateEntry, sub_mode, 0x1a);

struct TalkStateGlobal {
    u8 unknown_00[0xc];
    guest::gptr<TalkStateEntry> current;
};
GUEST_OFFSET(TalkStateGlobal, current, 0xc);

inline guest::global<TalkStateGlobal, 0x009516a0> talk_state;

constexpr u32 ANY_KIND = 0xe;   // matches whatever kind the current entry has
constexpr u8 MODE_3 = 3;        // meaning not known yet
constexpr u8 SUB_MODE_2 = 2;    // meaning not known yet

}  // namespace

// Whether there is a current entry of the given kind (ANY_KIND: of any kind); when strict, the entry must also be
// in mode 3 and not in sub-mode 2.
bool talk_state_matches(u32 kind, u32 strict) {
    gptr<TalkStateEntry> entry = talk_state->current;
    if (!entry) {
        return false;
    }
    if (strict != 0) {
        if (entry->mode != MODE_3 || entry->sub_mode == SUB_MODE_2) {
            return false;
        }
    }
    return kind == ANY_KIND || entry->kind == kind;
}
GUEST_EXPORT(0x003170f8, talk_state_matches);

// talk_state_matches(ANY_KIND, not strict): whether there is a current entry at all.
bool talk_state_active() {
    return talk_state_matches(ANY_KIND, 0);
}
GUEST_EXPORT(0x003170ec, talk_state_active);
