// Releasing an object through its owner (heap or registry), the ExhibitionNorthBook constructor and a small
// request that publishes three bytes of state.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// Whatever owns an allocation; only its vtable is known.
struct ObjectOwner {
    gptr<const u32> vtable;
};

constexpr u32 RELEASE_SLOT = 7;  // vtable offset 0x1c: releases an object given to the owner

inline guest::global<gptr<void>, 0x00975338> main_heap;
inline guest::global<u8, 0x009752c0> registry_enabled;

inline constexpr guest::Function<0x003045a8, gptr<void>()> call_3045a8;
inline constexpr guest::Function<0x00137f28, gptr<ObjectOwner>(gptr<void> container, gptr<void> object)>
    find_owner_by_object;
inline constexpr guest::Function<0x00138fec, gptr<ObjectOwner>(gptr<void> heap, gptr<void> object)>
    find_owner_in_heap;
inline constexpr guest::Function<0x002f83b0, void(gptr<void> object)> free_plain;

// The state block at 0x0094ddc4 and the request that fills it.
struct RequestState {
    u8 first;
    u8 second;
    u8 third;
};
inline guest::global<RequestState, 0x0094ddc4> request_state;

struct RequestInput {
    static constexpr u8 MODE_COPY = 0;
    static constexpr u8 MODE_RESET = 1;

    u8 mode;
    u8 first;
    u8 second;
};

inline constexpr guest::Function<0x0060be28, void(u32 code)> notify_request;
constexpr u32 NOTIFY_COPY = 9;
constexpr u32 NOTIFY_RESET = 0xb;
constexpr u8 RESET_FIRST = 4;

struct ExhibitionNorthBook {
    static constexpr u32 VTABLE = 0x008f3f48;
    u32 vtable;
};

}  // namespace

// Frees an object: plainly when there is no heap, else through the owner that holds it (found in the registry
// first, when enabled, then in the heap), which releases it by its virtual function. Unowned objects are left.
void release_owned_object(gptr<void> object) {
    gptr<void> heap = *main_heap;
    if (!heap) {
        free_plain(object);
        return;
    }
    if (!object) {
        return;
    }
    gptr<ObjectOwner> owner = nullptr;
    if (*registry_enabled != 0) {
        gptr<void> registry = call_3045a8();
        if (registry) {
            owner = find_owner_by_object(registry, object);
        }
    }
    if (!owner) {
        owner = find_owner_in_heap(*main_heap, object);
        if (!owner) {
            return;
        }
    }
    guest::call_address<void>(owner->vtable[RELEASE_SLOT], owner, object);
}
GUEST_EXPORT(0x002f88b8, release_owned_object);

ExhibitionNorthBook &construct_exhibition_north_book(ExhibitionNorthBook &self) {
    self.vtable = ExhibitionNorthBook::VTABLE;
    return self;
}
GUEST_EXPORT(0x002f8954, construct_exhibition_north_book);

// Publishes a request: MODE_COPY copies its two bytes into the state block, MODE_RESET resets the block; both
// notify the guest code. Other modes do nothing.
void publish_request(gptr<RequestInput> input) {
    if (input->mode == RequestInput::MODE_COPY) {
        u8 first = input->first;
        u8 second = input->second;
        request_state->first = first;
        request_state->second = 1;
        request_state->third = second;
        notify_request(NOTIFY_COPY);
    } else if (input->mode == RequestInput::MODE_RESET) {
        request_state->first = RESET_FIRST;
        request_state->second = 0;
        request_state->third = 0;
        notify_request(NOTIFY_RESET);
    }
}
GUEST_EXPORT(0x002f896c, publish_request);
