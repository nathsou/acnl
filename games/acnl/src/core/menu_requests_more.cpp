// More menu requests on the global state at 0x0094fd0c (see menu_requests.cpp) and a few reads of the state.
#include "core/global_98c4fc.hpp"
#include "core/state_94fd0c.hpp"

using guest::gptr;

bool begin_menu_request(u32 code);

namespace {

constexpr s32 NO_VALUE = -1;
constexpr u8 BUSY = 1;
constexpr u32 OBJECT_30_BUSY_OFFSET = 0x1fe;

// Request codes (meaning not known yet).
constexpr u32 REQUEST_06 = 0x06;
constexpr u32 REQUEST_40 = 0x40;
constexpr u32 REQUEST_67 = 0x67;
constexpr u32 REQUEST_69 = 0x69;
constexpr u32 REQUEST_77 = 0x77;
constexpr u32 REQUEST_78 = 0x78;
constexpr u32 REQUEST_8A = 0x8a;
constexpr u8 MODE_REQUESTED = 2;
constexpr u32 NO_OBJECT_VALUE = 0x8c;

struct ObjectWithFlag {
    u8 unknown_000[OBJECT_30_BUSY_OFFSET];
    u8 busy_1fe;
};
GUEST_OFFSET(ObjectWithFlag, busy_1fe, 0x1fe);

struct SelectionObject {
    u8 unknown_000[0x1e0];
    gptr<u8> data_1e0;
};
GUEST_OFFSET(SelectionObject, data_1e0, 0x1e0);

struct SelectionData {
    u8 unknown_0000[0x1916];
    s8 value_1916;
};
GUEST_OFFSET(SelectionData, value_1916, 0x1916);

struct InnerObject {
    u8 unknown_00[0x24];
    u8 value_24;
};
GUEST_OFFSET(InnerObject, value_24, 0x24);

struct OuterObject {
    u8 unknown_00[0xc];
    gptr<InnerObject> inner;
};
GUEST_OFFSET(OuterObject, inner, 0xc);

struct Global98c56c {
    u8 byte_00;
    u8 byte_01;
    u8 unknown_02[2];
    s32 words_04[6];
    s32 word_1c;
    u32 word_20;
    u32 words_24[5];
    u8 byte_38;
    u8 byte_39;
    u8 byte_3a;
    u8 byte_3b;
};
GUEST_OFFSET(Global98c56c, words_04, 4);
GUEST_OFFSET(Global98c56c, word_1c, 0x1c);
GUEST_OFFSET(Global98c56c, words_24, 0x24);
GUEST_OFFSET(Global98c56c, byte_38, 0x38);
GUEST_SIZE(Global98c56c, 0x3c);

inline guest::global<Global98c56c, 0x0098c56c> global_98c56c;

inline constexpr guest::Function<0x006d1ffc, u32(u32 request, u32 unknown)> try_request;

// Begins the request (the stronger way when asked to) and, when accepted, resets field 0x50.
bool request_with_mode(u32 code, bool strong) {
    return strong ? begin_menu_request(code) : try_request(code, 0) != 0;
}

}  // namespace

void request_8a(u32 strong) {
    if (request_with_mode(REQUEST_8A, strong != 0)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d351c, request_8a);
GUEST_FUZZ(0x006d351c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2})); });

// Clears byte 0x10, then makes the request.
void request_clearing_byte_10(u32 request) {
    state_94fd0c->byte_10 = 0;
    if (try_request(request, 0) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d355c, request_clearing_byte_10);
GUEST_FUZZ(0x006d355c, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({REQUEST_40, REQUEST_77, REQUEST_78})); });

void try_request_40() {
    if (try_request(REQUEST_40, 0) != 0) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d3584, try_request_40);
GUEST_FUZZ(0x006d3584, 100, [](guest::Fuzz &f) { f.arguments(); });

void begin_request_67() {
    if (begin_menu_request(REQUEST_67)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d35b0, begin_request_67);
GUEST_FUZZ(0x006d35b0, 100, [](guest::Fuzz &f) { f.arguments(); });

// Marks the object at field 0x30 as busy, when there is one.
void mark_object_30_busy() {
    u32 object = state_94fd0c->unknown_30;
    if (object != 0) {
        gptr<ObjectWithFlag>(object)->busy_1fe = BUSY;
    }
}
GUEST_EXPORT(0x006d35d8, mark_object_30_busy);
GUEST_FUZZ(0x006d35d8, 100, [](guest::Fuzz &f) {
    state_94fd0c->unknown_30 = f.below(2) != 0 ? f.allocate(0x200).addr() : 0;
    f.arguments();
});

void begin_request_69_clearing_byte_12() {
    state_94fd0c->byte_12 = 0;
    if (begin_menu_request(REQUEST_69)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d370c, begin_request_69_clearing_byte_12);
GUEST_FUZZ(0x006d370c, 100, [](guest::Fuzz &f) { f.arguments(); });

// Begins request 6 (the stronger way when asked to); when accepted, stores the byte and resets field 0x50.
void request_6_with_byte(u32 value, u32 strong) {
    if (request_with_mode(REQUEST_06, strong != 0)) {
        state_94fd0c->byte_06 = u8(value);
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d2a40, request_6_with_byte);
GUEST_FUZZ(0x006d2a40, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 0x101, f.number()}), f.pick<u32>({0, 0, 1})); });

// Begins the request with the given code; when accepted, resets field 0x50.
void begin_request_and_reset(u32 code) {
    if (begin_menu_request(code)) {
        state_94fd0c->unknown_50 = NO_VALUE;
    }
}
GUEST_EXPORT(0x006d2a88, begin_request_and_reset);
GUEST_FUZZ(0x006d2a88, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0x6e, 0x6c, 0x71})); });

// Requests 0x78 or 0x77; when accepted, marks the state as requested.
void request_77_or_78(u32 first) {
    if (try_request(first != 0 ? REQUEST_78 : REQUEST_77, 0) != 0) {
        state_94fd0c->mode = MODE_REQUESTED;
    }
}
GUEST_EXPORT(0x006d2aac, request_77_or_78);
GUEST_FUZZ(0x006d2aac, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 1, 2})); });

// The selection value of the object at field 0x30: a signed byte inside the data it points to.
s32 selection_value() {
    gptr<SelectionObject> object(state_94fd0c->unknown_30);
    return object->data_1e0.cast<SelectionData>()->value_1916;
}
GUEST_EXPORT(0x006d27e4, selection_value);
GUEST_FUZZ(0x006d27e4, 100, [](guest::Fuzz &f) {
    auto object = f.object<SelectionObject>();
    object->data_1e0 = f.allocate(0x2000).cast<u8>();
    f.bytes(object->data_1e0, 0x2000);
    state_94fd0c->unknown_30 = object.addr();
    f.arguments();
});

// A byte of the object behind the global's pointer, or NO_OBJECT_VALUE while there is none.
u32 inner_value_or_none() {
    if (global_98c4fc->value_04 == 0) {
        return NO_OBJECT_VALUE;
    }
    gptr<OuterObject> outer(global_98c4fc->value_04);
    return outer->inner->value_24;
}
GUEST_EXPORT(0x006d2944, inner_value_or_none);
GUEST_FUZZ(0x006d2944, 100, [](guest::Fuzz &f) {
    auto outer = f.object<OuterObject>();
    outer->inner = f.object<InnerObject>();
    global_98c4fc->value_04 = f.below(3) != 0 ? outer.addr() : 0;
    f.arguments();
});

// Puts the global at 0x0098c56c in its initial state.
void reset_global_98c56c() {
    Global98c56c &g = *global_98c56c;
    g.byte_00 = 0;
    g.byte_01 = 0;
    for (s32 &word : g.words_04) {
        word = NO_VALUE;
    }
    g.word_20 = 0;
    g.word_1c = NO_VALUE;
    for (u32 &word : g.words_24) {
        word = 0;
    }
    g.byte_38 = 1;
    g.byte_39 = 1;
    g.byte_3a = 0;
    g.byte_3b = 0;
}
GUEST_EXPORT(0x006d2780, reset_global_98c56c);
GUEST_FUZZ(0x006d2780, 50, [](guest::Fuzz &f) { f.arguments(); });
