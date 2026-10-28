#include "core/request_object.hpp"

using guest::gptr;

namespace {

constexpr u32 LENGTH_WRAP = 48;
constexpr s32 NO_ENTRY = -1;

guest::global<gptr<void>, 0x0094d0d0> entry_manager;

inline constexpr guest::Function<0x0070edf8, s32(gptr<void> manager)> manager_next_entry;
inline constexpr guest::Function<0x0070edd4, u32(gptr<void> manager, s32 entry)> manager_entry_kind;
inline constexpr guest::Function<0x0070ed04, u32(gptr<void> manager, s32 entry)> manager_entry_length;

}  // namespace

// In state BEGUN without an id: takes new_id, picks the manager's next entry (if any) and moves on.
bool RequestObject::poll(s32 new_id) {
    if (state != STATE_BEGUN) {
        return state == STATE_READY;
    }
    if (id != NO_ID) {
        return false;
    }
    id = new_id;
    gptr<void> manager = *entry_manager;
    s32 entry = manager_next_entry(manager);
    if (entry != NO_ENTRY) {
        kind = u8(manager_entry_kind(manager, entry));
        length_48 = manager_entry_length(manager, entry) % LENGTH_WRAP;
    }
    state = STATE_ENTRY_PICKED;
    return false;
}
GUEST_EXPORT(0x00275b4c, RequestObject::poll);

void RequestObject::set_idle() {
    state = STATE_IDLE;
    id = NO_ID;
}
GUEST_EXPORT(0x00275e8c, RequestObject::set_idle);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00275b4c, 300, [](guest::Fuzz &f) {
    auto object = f.object<RequestObject>();
    object->state = f.pick<u32>({RequestObject::STATE_BEGUN, RequestObject::STATE_BEGUN,
                                 RequestObject::STATE_ENTRY_PICKED, RequestObject::STATE_READY,
                                 RequestObject::STATE_IDLE, 0, f.number()});
    object->id = f.pick<s32>({RequestObject::NO_ID, RequestObject::NO_ID, 5, s32(f.number())});
    // the manager is only asked when the game has one
    if (!*entry_manager && object->id == RequestObject::NO_ID) {
        object->id = 0;
    }
    f.arguments(object, s32(f.number()));
});
GUEST_FUZZ(0x00275e8c, 200, [](guest::Fuzz &f) { f.arguments(f.object<RequestObject>()); });
