#include "guest/guest.hpp"

namespace {

constexpr u32 HEAP_ALLOCATOR_VTABLE = 0x00906120;

// ssys::ma::HeapAllocator: a vtable and an owned object (released by the destructor).
struct HeapAllocator {
    u32 vtable;
    gptr<u32> owned;  // an object whose first word is its vtable
};
GUEST_SIZE(HeapAllocator, 8);

}  // namespace

// The constructor: no owned object yet.
HeapAllocator &construct_heap_allocator(HeapAllocator &self) {
    self.owned = nullptr;
    self.vtable = HEAP_ALLOCATOR_VTABLE;
    return self;
}
GUEST_EXPORT(0x005673c8, construct_heap_allocator);

GUEST_FUZZ(0x005673c8, 200, [](guest::Fuzz &f) { f.arguments(f.object<HeapAllocator>()); });
