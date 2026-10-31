// Menu requests that start one request code and then set up a few fields of the state at 0x0094fd0c.
#include "core/flag_manager.hpp"
#include "core/state_94fd0c.hpp"
#include "item/item.hpp"

using guest::gptr;

bool begin_menu_request(u32 code);
void store_global_word_2adee8(u32 value);

namespace {

// The object the state's field 0x30 leads to.
struct MenuObject {
    u8 unknown_000[0x200];
    u32 value_200;
};
GUEST_OFFSET(MenuObject, value_200, 0x200);

gptr<MenuObject> menu_object() {
    return gptr<MenuObject>(state_94fd0c->unknown_30);
}

inline constexpr guest::Function<0x006d1ffc, u32(u32 request, u32 argument)> try_request;

constexpr s32 NO_VALUE = -1;
constexpr u8 MODE_REQUESTED = 2;
constexpr u32 NO_ARGUMENT = 0;

// Request codes (meaning not known yet).
constexpr u32 REQUEST_45 = 0x45, REQUEST_49 = 0x49, REQUEST_4A = 0x4a, REQUEST_4C = 0x4c, REQUEST_79 = 0x79;
constexpr u32 REQUEST_7C = 0x7c, REQUEST_7E = 0x7e, REQUEST_7F = 0x7f, REQUEST_89 = 0x89;
constexpr u32 REQUEST_44 = 0x44, REQUEST_46 = 0x46, REQUEST_4B = 0x4b, REQUEST_5E = 0x5e, REQUEST_5F = 0x5f;
constexpr u32 REQUEST_62 = 0x62, REQUEST_7D = 0x7d, REQUEST_8A = 0x8a;
constexpr u8 NO_POCKET_SLOT = 0xff;
constexpr u8 PICK_KIND_ITEM = 1;  // what byte 0x1a of the state says is being picked (meaning not known yet)
constexpr u8 PICK_KIND_NONE = 0;
constexpr u32 SPECIAL_KIND_3 = 3, SPECIAL_KIND_4 = 4, SPECIAL_KIND_5 = 5;  // the kinds request_7c distinguishes
constexpr u32 FLAG_FOR_KIND_3 = 0x21;
constexpr u32 FLAG_FOR_OTHER_KINDS = 0x1e;

// The item and the position that the item requests store.
inline guest::global<Item, 0x0094fd64> requested_item;
struct RequestedPosition {
    u32 words[3];
};
inline guest::global<RequestedPosition, 0x0098c560> requested_position;
inline guest::global<u8, 0x0094f7e0> requested_kind;
inline guest::global<u8, 0x0094ee3c> flag_94ee3c;

}  // namespace

// Makes the request; when it is accepted, stores the value in field 0x50.
void request_storing_field_50(u32 request, s32 value) {
    if (try_request(request, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = value;
    }
}
GUEST_EXPORT(0x006d1cc0, request_storing_field_50);
GUEST_EXPORT(0x006d2fd0, request_storing_field_50);

// Makes request 0x45 with the values stored in the object at field 0x30 and in the state; the object's value is
// cleared again when the request is not accepted.
void request_45(u32 object_value, s32 value_48, u32 byte_1e) {
    UnknownState94fd0c &state = *state_94fd0c;
    menu_object()->value_200 = object_value;
    state.byte_1e = u8(byte_1e);
    state.byte_00 = 1;
    state.value_48 = value_48;
    if (try_request(REQUEST_45, NO_ARGUMENT) == 0) {
        menu_object()->value_200 = 0;
    }
}
GUEST_EXPORT(0x006d26dc, request_45);

// Makes request 0x79; when it is accepted, marks the state.
void request_79() {
    if (try_request(REQUEST_79, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
    }
}
GUEST_EXPORT(0x006d2724, request_79);

// Makes request 0x89; when it is accepted, resets field 0x50.
void request_89() {
    if (try_request(REQUEST_89, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d2ff4, request_89);

// Makes request 0x7f; when it is accepted, marks the state and resets field 0x2c.
void request_7f() {
    if (try_request(REQUEST_7F, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
        state_94fd0c->value_2c = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d30e4, request_7f);

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

// Makes request 0x4a (0x49) and, when it is accepted, remembers the item.
u32 request_with_item_4a(const Item &item) {
    u32 accepted = try_request(REQUEST_4A, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
    }
    return accepted;
}
GUEST_EXPORT(0x006d3158, request_with_item_4a);

u32 request_with_item_49(const Item &item) {
    u32 accepted = try_request(REQUEST_49, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
    }
    return accepted;
}
GUEST_EXPORT(0x006d31e4, request_with_item_49);

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

// Requests with a fixed code that reset field 0x50 when accepted (0x5f, 0x62).
void request_5f() {
    if (try_request(REQUEST_5F, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d32a8, request_5f);

void request_62() {
    if (try_request(REQUEST_62, NO_ARGUMENT) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d339c, request_62);

// Makes request 0x7d; when it is accepted, marks the state and resets field 0x2c.
void request_7d() {
    if (try_request(REQUEST_7D, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
        state_94fd0c->value_2c = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d330c, request_7d);

// Requests that only mark the state when they are accepted (0x44, 0x5e).
void request_44() {
    if (try_request(REQUEST_44, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
    }
}
GUEST_EXPORT(0x006d3410, request_44);

void request_5e() {
    if (try_request(REQUEST_5E, NO_ARGUMENT) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
    }
}
GUEST_EXPORT(0x006d37b8, request_5e);

// Marks the state and a global flag, then makes request 0x8a (by begin_menu_request with `begin`); when it is accepted,
// resets field 0x50.
void request_8a(bool begin) {
    state_94fd0c->mode = MODE_REQUESTED;
    *flag_94ee3c = 1;
    bool accepted = begin ? begin_menu_request(REQUEST_8A) : try_request(REQUEST_8A, NO_ARGUMENT) != 0;
    if (accepted) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3874, request_8a);

// Makes the request (by begin_menu_request with `begin`); when it is accepted, stores the value in field 0x50.
void request_storing_field_50_beginning(u32 request, s32 value, bool begin) {
    bool accepted = begin ? begin_menu_request(request) : try_request(request, NO_ARGUMENT) != 0;
    if (accepted) {
        state_94fd0c->unknown_50 = value;
    }
}
GUEST_EXPORT(0x006d343c, request_storing_field_50_beginning);

// Makes the request; when it is accepted, stores the value in field 0x50 and the halfword in field 0x26 and picks no
// pocket slot.
void request_storing_halfword_26(u32 halfword, u32 request, s32 value) {
    if (try_request(request, NO_ARGUMENT) != 0) {
        state_94fd0c->half_26 = u16(halfword);
        state_94fd0c->unknown_50 = value;
        state_94fd0c->pocket_slot_19 = NO_POCKET_SLOT;
        state_94fd0c->byte_1a = PICK_KIND_NONE;
    }
}
GUEST_EXPORT(0x006d3240, request_storing_halfword_26);

// The same for item picks: field 0x28 is cleared whatever the result, and byte 0x1a says an item is picked.
void request_storing_halfword_26_for_item(u32 halfword, u32 request, s32 value) {
    bool accepted = try_request(request, NO_ARGUMENT) != 0;
    state_94fd0c->half_28 = 0;
    if (accepted) {
        state_94fd0c->half_26 = u16(halfword);
        state_94fd0c->unknown_50 = value;
        state_94fd0c->byte_1a = PICK_KIND_ITEM;
    }
}
GUEST_EXPORT(0x006d3bd4, request_storing_halfword_26_for_item);

// Like request_45 for request 0x46 (made by begin_menu_request); when it is not accepted, byte 0xc is cleared too.
void request_46(u32 object_value, s32 value_48, u32 byte_1e) {
    UnknownState94fd0c &state = *state_94fd0c;
    menu_object()->value_200 = object_value;
    state.byte_1e = u8(byte_1e);
    state.byte_00 = 1;
    state.value_48 = value_48;
    if (!begin_menu_request(REQUEST_46)) {
        menu_object()->value_200 = 0;
        state_94fd0c->byte_0c = 0;
    }
}
GUEST_EXPORT(0x006d33c8, request_46);

// Makes request 0x4b and, when it is accepted, remembers the item.
u32 request_with_item_4b(const Item &item) {
    u32 accepted = try_request(REQUEST_4B, NO_ARGUMENT);
    if (accepted != 0) {
        copy_item(*requested_item, item);
    }
    return accepted;
}
GUEST_EXPORT(0x006d34e8, request_with_item_4b);
