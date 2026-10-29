#include "escape/escape_objects.hpp"
#include "guest/guest.hpp"

namespace {

// Recompiled code:
inline constexpr guest::Function<0x40290d78, u32(gptr<void> part)> query_part;
inline constexpr guest::Function<0x40304b6c, void(gptr<void> target, u32 value)> notify_target_value;

constexpr u8 PART_DONE_STATE = 1;

// An entry seen with a byte at 0x1e (meaning not known yet).
struct EscapeEntryByte1e {
    u8 unknown_00[0x1e];
    u8 byte_1e;
};
GUEST_OFFSET(EscapeEntryByte1e, byte_1e, 0x1e);

struct EscapePartState {
    u8 unknown_00[0x11c];
    u8 part_11c[4];
    u8 state_120;
    u8 unknown_121[3];
    u32 value_124;
};
GUEST_OFFSET(EscapePartState, state_120, 0x120);
GUEST_OFFSET(EscapePartState, value_124, 0x124);

struct NotifyTarget {
    u8 unknown_00[0x110];
    u32 value_110;
};
GUEST_OFFSET(NotifyTarget, value_110, 0x110);

struct EscModelBase {
    u8 unknown_00[0x48];
    gptr<NotifyTarget> target;
};
GUEST_OFFSET(EscModelBase, target, 0x48);

}  // namespace

// The byte at 0x1e of the list's entry at `index`; a missing entry reads from null as the game does.
static u8 entry_byte_1e(EscapeEntryList &self, u32 index) {
    gptr<EscapeEntryByte1e> entry;
    if (self.count > index) {
        entry = self.entries[index].cast<EscapeEntryByte1e>();
    }
    return entry->byte_1e;
}
GUEST_EXPORT(0x402ff758, entry_byte_1e);

// Whether the part at 0x11c is done (true without a value or in the done state), else what the part reports.
static u32 part_state_or_query(EscapePartState &self) {
    if (self.value_124 == 0 || self.state_120 == PART_DONE_STATE) {
        return 1;
    }
    return query_part(guest::addr_of(self.part_11c[0]));
}
GUEST_EXPORT(0x402ff8e8, part_state_or_query);

// esc::BsEscModelBase::virtual_21: notifies the held target of its value, if it has one. Always true.
static bool notify_held_target(EscModelBase &self) {
    gptr<NotifyTarget> target = self.target;
    if (target && target->value_110 != 0) {
        notify_target_value(target, target->value_110);
    }
    return true;
}
GUEST_EXPORT(0x402ff940, notify_held_target);

GUEST_FUZZ(0x402ff758, 300, [](guest::Fuzz &f) {
    auto list = f.object<EscapeEntryList>();
    u32 count = 1 + f.below(4);
    auto entries = f.allocate(count * 4).cast<gptr<EscapeEntry>>();
    for (u32 i = 0; i < count; i++) {
        entries[i] = f.object<EscapeEntry>();
    }
    list->count = count;
    list->entries = entries;
    f.arguments(list, f.below(count + 2));
});
GUEST_FUZZ(0x402ff8e8, 200, [](guest::Fuzz &f) {
    auto part = f.object<EscapePartState>();
    if (f.below(2) != 0) {
        part->value_124 = 0;
    } else {
        part->value_124 = 1;
        part->state_120 = PART_DONE_STATE;
    }
    f.arguments(part);
});
GUEST_FUZZ(0x402ff940, 200, [](guest::Fuzz &f) {
    auto model = f.object<EscModelBase>();
    if (f.below(2) != 0) {
        model->target = nullptr;
    } else {
        auto target = f.object<NotifyTarget>();
        target->value_110 = 0;
        model->target = target;
    }
    f.arguments(model);
});
