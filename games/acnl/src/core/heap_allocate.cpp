// The allocation wrapper used by constructors all over the game (sead strings, tasks, contexts...): allocates from a
// given heap, from the heap found for the current allocator state, or from the default allocator.
#include "guest/guest.hpp"

namespace {

// A heap: its vtable has the allocation function in slot 6.
struct HeapVtable {
    u32 slots_before_allocate[6];
    u32 allocate;  // allocate(heap, size, alignment)
};
GUEST_OFFSET(HeapVtable, allocate, 0x18);

struct Heap {
    gptr<HeapVtable> vtable;
};

// Still recompiled code.
inline constexpr guest::Function<0x002f75a0, gptr<void>(u32 size, u32 zero, u32 alignment, u32 one)> allocate_default;
inline constexpr guest::Function<0x003045a8, gptr<Heap>(u32 value)> find_heap;

// The global at 0x00975338: when zero, allocation goes to the default allocator.
inline guest::global<u32, 0x00975338> allocator_state;

}  // namespace

// Allocates size bytes from the given heap; without a heap, from the one found by find_heap; with no allocator
// state at all, from the default allocator.
static gptr<void> allocate_from_heap(u32 size, gptr<Heap> heap, u32 alignment) {
    u32 state = *allocator_state;
    if (state == 0) {
        return allocate_default(size, state, alignment, 1);
    }
    if (!heap) {
        heap = find_heap(state);
        if (!heap) {
            return nullptr;
        }
    }
    return guest::call_address<gptr<void>>(heap->vtable->allocate, heap, size, alignment);
}
GUEST_EXPORT(0x002fd108, allocate_from_heap);
