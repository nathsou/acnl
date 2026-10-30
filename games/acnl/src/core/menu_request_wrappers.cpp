// Menu requests that start one request code and then set up a few fields of the state at 0x0094fd0c.
#include "core/flag_manager.hpp"
#include "core/state_94fd0c.hpp"
#include "item/item.hpp"

using guest::gptr;

bool begin_menu_request(u32 code);
void store_global_word_2adee8(u32 value);

namespace {

inline constexpr guest::Function<0x006d1ffc, u32(u32 request, u32 argument)> try_request;

constexpr s32 NO_VALUE = -1;
constexpr u8 MODE_REQUESTED = 2;
constexpr u32 NO_ARGUMENT = 0;

// Request codes (meaning not known yet).
constexpr u32 REQUEST_45 = 0x45, REQUEST_49 = 0x49, REQUEST_4A = 0x4a, REQUEST_4C = 0x4c, REQUEST_79 = 0x79;
constexpr u32 REQUEST_7C = 0x7c, REQUEST_7E = 0x7e, REQUEST_7F = 0x7f, REQUEST_89 = 0x89;
constexpr u32 SPECIAL_KIND_3 = 3, SPECIAL_KIND_4 = 4, SPECIAL_KIND_5 = 5;  // the kinds request_7c distinguishes
constexpr u32 FLAG_FOR_KIND_3 = 0x21;
constexpr u32 FLAG_FOR_OTHER_KINDS = 0x1e;
constexpr u32 OBJECT_30_VALUE_OFFSET = 0x200;

// The item and the position that the item requests store.
inline guest::global<Item, 0x0094fd64> requested_item;
struct RequestedPosition {
    u32 words[3];
};
inline guest::global<RequestedPosition, 0x0098c560> requested_position;
inline guest::global<u8, 0x0094f7e0> requested_kind;

}  // namespace

// Makes the request; when it is accepted, stores the value in field 0x50.
void request_storing_field_50(u32 request, s32 value) {
    if (try_request(request, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = value;
    }
}
GUEST_EXPORT(0x006d1cc0, request_storing_field_50);
GUEST_EXPORT(0x006d2fd0, request_storing_field_50);
GUEST_FUZZ(0x006d1cc0, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x40, 0x42, 0x43}), f.number()); });
GUEST_FUZZ(0x006d2fd0, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x40, 0x42, 0x43}), f.number()); });

// Makes request 0x45 with the values stored in the object at field 0x30 and in the state; the object's value is
// cleared again when the request is not accepted.
void request_45(u32 object_value, s32 value_48, u32 byte_1e) {
    UnknownState94fd0c &state = *state_94fd0c;
    *gptr<u32>(state.unknown_30 + OBJECT_30_VALUE_OFFSET) = object_value;
    state.byte_1e = u8(byte_1e);
    state.byte_00 = 1;
    state.value_48 = value_48;
    if (try_request(REQUEST_45, NO_ARGUMENT) == 0) {
        *gptr<u32>(state_94fd0c->unknown_30 + OBJECT_30_VALUE_OFFSET) = 0;
    }
}
GUEST_EXPORT(0x006d26dc, request_45);
GUEST_FUZZ(0x006d26dc, 100, [](guest::Fuzz &f) {
    state_94fd0c->unknown_30 = f.allocate(0x220).addr();
    f.arguments(f.number(), f.number(), f.below(256));
});

// Makes request 0x79; when it is accepted, marks the state.
void request_79() {
    if (try_request(REQUEST_79, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
    }
}
GUEST_EXPORT(0x006d2724, request_79);
GUEST_FUZZ(0x006d2724, 100, [](guest::Fuzz &f) { f.arguments(); });

// Makes request 0x89; when it is accepted, resets field 0x50.
void request_89() {
    if (try_request(REQUEST_89, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d2ff4, request_89);
GUEST_FUZZ(0x006d2ff4, 100, [](guest::Fuzz &f) { f.arguments(); });

// Makes request 0x7f; when it is accepted, marks the state and resets field 0x2c.
void request_7f() {
    if (try_request(REQUEST_7F, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
        state_94fd0c->value_2c = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d30e4, request_7f);
GUEST_FUZZ(0x006d30e4, 100, [](guest::Fuzz &f) { f.arguments(); });

// Makes request 0x7e; when it is accepted, marks the state, clears field 0x2c and stores 0 as the global word.
u32 request_7e() {
    u32 accepted = try_request(REQUEST_7E, NO_ARGUMENT);
    if (accepted != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
        state_94fd0c->value_2c = 0;
        store_global_word_2adee8(0);
    }
    return accepted;
}
GUEST_EXPORT(0x006d3118, request_7e);
GUEST_FUZZ(0x006d3118, 100, [](guest::Fuzz &f) { f.arguments(); });

// Makes request 0x4a (0x49) and, when it is accepted, remembers the item.
u32 request_with_item_4a(const Item &item) {
    u32 accepted = try_request(REQUEST_4A, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
    }
    return accepted;
}
GUEST_EXPORT(0x006d3158, request_with_item_4a);
GUEST_FUZZ(0x006d3158, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });

u32 request_with_item_49(const Item &item) {
    u32 accepted = try_request(REQUEST_49, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
    }
    return accepted;
}
GUEST_EXPORT(0x006d31e4, request_with_item_49);
GUEST_FUZZ(0x006d31e4, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>()); });

// Makes request 0x4c and, when it is accepted, remembers the item and the position.
u32 request_with_item_and_position_4c(const Item &item, const RequestedPosition &position) {
    u32 accepted = try_request(REQUEST_4C, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
        *requested_position = position;
    }
    return accepted;
}
GUEST_EXPORT(0x006d318c, request_with_item_and_position_4c);
GUEST_FUZZ(0x006d318c, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.object<RequestedPosition>()); });

// Makes request 0x7c (the stronger way for kinds 4 and 5); when it is accepted, requests the flag of the kind from the
// flag manager, remembers the kind and marks the state. Returns whether it was accepted.
u32 request_7c_of_kind(u32 kind) {
    bool accepted;
    if (kind == SPECIAL_KIND_4 || kind == SPECIAL_KIND_5) {
        accepted = begin_menu_request(REQUEST_7C);
    } else {
        accepted = try_request(REQUEST_7C, NO_ARGUMENT) != 0;
    }
    if (!accepted) {
        return 0;
    }
    flag_manager->request(kind == SPECIAL_KIND_3 ? FLAG_FOR_KIND_3 : FLAG_FOR_OTHER_KINDS);
    *requested_kind = u8(kind);
    state_94fd0c->mode = MODE_REQUESTED;
    state_94fd0c->byte_07 = 0;
    return accepted;
}
GUEST_EXPORT(0x006d2888, request_7c_of_kind);
GUEST_FUZZ(0x006d2888, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5})); });
