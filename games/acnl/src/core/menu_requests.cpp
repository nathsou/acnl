// Menu requests on the global state at 0x0094fd0c: begin one when the state is ready, and the callers that reset
// field 0x50 once a request was accepted.
#include "core/global_98c4fc.hpp"
#include "core/state_94fd0c.hpp"

using guest::gptr;

namespace {

constexpr u8 REQUEST_READY = 1;
constexpr u8 REQUEST_UNDER_WAY = 2;
constexpr s32 NO_VALUE = -1;
constexpr u32 OBJECT_30_BUSY_OFFSET = 0x1fe;  // a byte of the object at state field 0x30: non-zero blocks requests

// Request codes whose callers reset field 0x50 (meaning not known yet).
constexpr u32 REQUEST_56 = 0x56;
constexpr u32 REQUEST_65 = 0x65;
constexpr u32 REQUEST_66 = 0x66;
constexpr u32 REQUEST_6C = 0x6c;
constexpr u32 REQUEST_71 = 0x71;
constexpr u32 REQUEST_72 = 0x72;
constexpr u32 REQUEST_73 = 0x73;
constexpr u32 REQUEST_74 = 0x74;
constexpr u32 REQUEST_75 = 0x75;
constexpr u32 REQUEST_76 = 0x76;
constexpr u32 REQUEST_7A = 0x7a;
constexpr u8 MODE_AFTER_7A = 2;
constexpr u32 SECOND_STAGE_CODE = 0x208;  // (offset of the byte set by mark_object_ready)

inline constexpr guest::Function<0x006d1ffc, u32(u32 request, u32 unknown)> try_request;

}  // namespace

// Starts a request when the state is ready, the object at field 0x30 is not busy and the global at 0x0098c4fc has a
// value; records the request code. False when it could not start.
bool begin_menu_request(u32 code) {
    UnknownState94fd0c &state = *state_94fd0c;
    if (state.unknown_30 != 0 && *gptr<u8>(state.unknown_30 + OBJECT_30_BUSY_OFFSET) != 0) {
        return false;
    }
    if (state.request_state != REQUEST_READY) {
        return false;
    }
    if (global_98c4fc->value_04 == 0) {
        return false;
    }
    state.request_state = REQUEST_UNDER_WAY;
    state.request_code = u8(code);
    return true;
}
GUEST_EXPORT(0x006d265c, begin_menu_request);
GUEST_FUZZ(0x006d265c, 200, [](guest::Fuzz &f) {
    state_94fd0c->unknown_30 = f.below(2) != 0 ? f.allocate(0x200).addr() : 0;
    if (state_94fd0c->unknown_30 != 0) {
        *gptr<u8>(state_94fd0c->unknown_30 + OBJECT_30_BUSY_OFFSET) = f.below(2);
    }
    state_94fd0c->request_state = f.pick<u8>({0, 1, 1, 2});
    global_98c4fc->value_04 = f.pick<u32>({0, 1, 5});
    f.arguments(f.pick<u32>({0, REQUEST_6C, REQUEST_71, 0x1ff}));
});

// Makes a request and, once accepted, sets field 0x50 to the value.
void request_then_set_50(u32 request, s32 value) {
    if (try_request(request, 0) != 0) {
        state_94fd0c->unknown_50 = value;
    }
}
GUEST_EXPORT(0x006d393c, request_then_set_50);
GUEST_FUZZ(0x006d393c, 100, [](guest::Fuzz &f) { f.arguments(REQUEST_56, s32(f.number())); });

void request_66_clearing_40() {
    state_94fd0c->value_40 = 0;
    if (try_request(REQUEST_66, 0) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3960, request_66_clearing_40);
GUEST_FUZZ(0x006d3960, 100, [](guest::Fuzz &f) { f.arguments(); });

void try_request_71() {
    if (try_request(REQUEST_71, 0) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3c1c, try_request_71);
GUEST_FUZZ(0x006d3c1c, 100, [](guest::Fuzz &f) { f.arguments(); });

void try_request_65() {
    if (try_request(REQUEST_65, 0) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3d98, try_request_65);
GUEST_FUZZ(0x006d3d98, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_6c() {
    if (begin_menu_request(REQUEST_6C)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d39fc, begin_request_6c);
GUEST_FUZZ(0x006d39fc, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_73() {
    if (begin_menu_request(REQUEST_73)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3d70, begin_request_73);
GUEST_FUZZ(0x006d3d70, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_71() {
    if (begin_menu_request(REQUEST_71)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3dc4, begin_request_71);
GUEST_FUZZ(0x006d3dc4, 100, [](guest::Fuzz &f) { f.arguments(); });

// Stores the value in field 0x38, then begins request 0x72, which also clears byte 0xf.
void set_38_and_begin_request_72(u32 value) {
    state_94fd0c->value_38 = value;
    if (begin_menu_request(REQUEST_72)) {
        state_94fd0c->byte_0f = 0;
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3dec, set_38_and_begin_request_72);
GUEST_FUZZ(0x006d3dec, 100, [](guest::Fuzz &f) { f.arguments(f.number()); });

// Sets the byte at 0x208 of the object; always true.
struct ReadyFlagObject {
    u8 unknown_000[SECOND_STAGE_CODE];
    u8 ready;
};
GUEST_OFFSET(ReadyFlagObject, ready, 0x208);

bool mark_object_ready(ReadyFlagObject &object) {
    object.ready = 1;
    return true;
}
GUEST_EXPORT(0x006d3b80, mark_object_ready);
GUEST_FUZZ(0x006d3b80, 50, [](guest::Fuzz &f) { f.arguments(f.object<ReadyFlagObject>()); });

// Whether a request could begin right now: the state is ready and the global at 0x0098c4fc has no value.
bool request_state_ready_without_value() {
    return state_94fd0c->request_state == REQUEST_READY && global_98c4fc->value_04 == 0;
}
GUEST_EXPORT(0x006d465c, request_state_ready_without_value);
GUEST_FUZZ(0x006d465c, 100, [](guest::Fuzz &f) {
    state_94fd0c->request_state = f.pick<u8>({0, 1, 2});
    global_98c4fc->value_04 = f.pick<u32>({0, 1});
    f.arguments();
});

void begin_request_75() {
    if (begin_menu_request(REQUEST_75)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3218, begin_request_75);
GUEST_FUZZ(0x006d3218, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_76() {
    if (begin_menu_request(REQUEST_76)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3790, begin_request_76);
GUEST_FUZZ(0x006d3790, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_74() {
    if (begin_menu_request(REQUEST_74)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3844, begin_request_74);
GUEST_FUZZ(0x006d3844, 100, [](guest::Fuzz &f) { f.arguments(); });

// Begins request 0x7a, which also sets the mode.
void begin_request_7a() {
    if (begin_menu_request(REQUEST_7A)) {
        state_94fd0c->mode = MODE_AFTER_7A;
    }
}
GUEST_EXPORT(0x006d38c8, begin_request_7a);
GUEST_FUZZ(0x006d38c8, 100, [](guest::Fuzz &f) { f.arguments(); });
