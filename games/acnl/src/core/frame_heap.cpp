// A heap that allocates from both ends of one block (from the head with a positive alignment, from the tail with a
// negative one) and frees by going back to a recorded state, like the SDK's frame heaps. Also the dispatch on a
// heap's kind word.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A recorded state: where head and tail were, under a tag.
struct FrameHeapState {
    u32 tag;
    u32 head;
    u32 tail;
    gptr<FrameHeapState> next;
};
GUEST_SIZE(FrameHeapState, 16);

struct FrameHeap {
    u8 unknown_00[0x28];
    u32 head;  // first free byte
    u32 tail;  // end of the free space
    gptr<FrameHeapState> states;  // most recent first

    u32 allocate(u32 size, s32 alignment);
    bool record_state(u32 tag);
    bool free_to_state(u32 tag);
};
GUEST_OFFSET(FrameHeap, head, 0x28);
GUEST_OFFSET(FrameHeap, tail, 0x2c);
GUEST_OFFSET(FrameHeap, states, 0x30);

// Still recompiled: called with each range given out / taken back (address, size)
inline constexpr guest::Function<0x00140838, void(gptr<FrameHeap> heap, u32 address, u32 size)> on_range_allocated;
inline constexpr guest::Function<0x0014080c, void(gptr<FrameHeap> heap, u32 address, u32 size)> on_range_freed;

constexpr u32 align_up_4(u32 value) { return (value + 3) & ~3u; }

}  // namespace

// Allocates size bytes (at least 1, rounded up to 4) from the head, or from the tail when alignment is negative.
// Returns the address, or 0 when there is no room.
u32 FrameHeap::allocate(u32 size, s32 alignment) {
    if (size == 0) {
        size = 1;
    }
    size = align_up_4(size);
    gptr<FrameHeap> self = guest::addr_of(this);
    if (alignment >= 0) {
        u32 old_head = head;
        u32 block = (old_head + u32(alignment) - 1) & ~(u32(alignment) - 1);
        u32 end = block + size;
        if (tail < end) {
            return 0;
        }
        on_range_allocated(self, old_head, end - old_head);
        head = end;
        return block;
    }
    u32 old_tail = tail;
    u32 block = (old_tail - size) & ~(u32(-alignment) - 1);
    if (head > block) {
        return 0;
    }
    on_range_allocated(self, block, old_tail - block);
    tail = block;
    return block;
}
GUEST_EXPORT(0x0013e92c, FrameHeap::allocate);

// Records the current head and tail under tag, in a 16-byte record allocated from the head.
bool FrameHeap::record_state(u32 tag) {
    u32 old_head = head;
    u32 record_address = align_up_4(old_head);
    u32 end = record_address + sizeof(FrameHeapState);
    if (tail < end) {
        return false;
    }
    on_range_allocated(guest::addr_of(this), old_head, end - old_head);
    head = end;
    gptr<FrameHeapState> record(record_address);
    if (!record) {
        return false;
    }
    record->tail = 0;
    record->head = old_head;
    record->tag = tag;
    record->next = nullptr;
    record->tail = tail;
    record->next = states;
    states = record;
    return true;
}
GUEST_EXPORT(0x0013e8a0, FrameHeap::record_state);

// Frees everything allocated since the state recorded under tag (tag 0: the most recent state), dropping the
// states recorded after it. Returns false if there is no such state.
bool FrameHeap::free_to_state(u32 tag) {
    gptr<FrameHeapState> state = states;
    if (tag != 0) {
        while (state && state->tag != tag) {
            state = state->next;
        }
    }
    if (!state) {
        return false;
    }
    u32 old_head = head;
    u32 old_tail = tail;
    u32 saved_head = state->head;
    u32 saved_tail = state->tail;
    gptr<FrameHeapState> older = state->next;
    head = saved_head;
    tail = saved_tail;
    states = older;
    gptr<FrameHeap> self = guest::addr_of(this);
    on_range_freed(self, saved_head, old_head - saved_head);
    on_range_freed(self, old_tail, saved_tail - old_tail);
    return true;
}
GUEST_EXPORT(0x0013e7fc, FrameHeap::free_to_state);

// ---- dispatch on a heap's kind

namespace {

struct HeapHeader {
    u32 kind;
};

enum HeapKind : u32 {
    HEAP_KIND_80000000 = 0x80000000,  // handled by the first hook
    HEAP_KIND_40000000 = 0x40000000,  // handled by the second hook
};

// Function pointers for the two heap kinds (what they do is not known yet)
struct HeapKindHooks {
    u32 kind_80000000;
    u32 kind_40000000;
};
inline guest::global<HeapKindHooks, 0x009750e4> heap_kind_hooks;

struct HeapHandle {
    gptr<HeapHeader> header;

    void dispatch_by_kind() const;
};

}  // namespace

// Passes the heap to the hook for its kind; other kinds are ignored.
void HeapHandle::dispatch_by_kind() const {
    gptr<HeapHeader> heap = header;
    if (heap->kind == HEAP_KIND_80000000) {
        guest::call_address<void>(heap_kind_hooks->kind_80000000, heap);
    } else if (heap->kind == HEAP_KIND_40000000) {
        guest::call_address<void>(heap_kind_hooks->kind_40000000, heap);
    }
}
GUEST_EXPORT(0x0013e9e4, HeapHandle::dispatch_by_kind);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 BUFFER_SIZE = 256;

// A heap with zeroed unknown fields, its head and tail inside a real buffer
gptr<FrameHeap> some_heap(guest::Fuzz &f, u32 &buffer) {
    buffer = f.allocate(BUFFER_SIZE).addr();
    auto heap = f.object<FrameHeap>();
    memset(heap->unknown_00, 0, sizeof(heap->unknown_00));
    heap->head = buffer + 100 + f.below(50);
    heap->tail = buffer + 160 + f.below(50);
    if (f.below(4) == 0) {
        heap->tail = heap->head + f.below(20);  // little room
    }
    heap->states = nullptr;
    return heap;
}

}  // namespace

GUEST_FUZZ(0x0013e92c, 300, [](guest::Fuzz &f) {
    u32 buffer;
    auto heap = some_heap(f, buffer);
    u32 size = f.pick<u32>({0, 1, 4, 0x18, 0x20, f.below(120)});
    s32 alignment = f.pick<s32>({1, 4, 8, 0x20, 0x80, -1, -4, -8, -0x20, -0x80});
    f.arguments(heap, size, alignment);
});

GUEST_FUZZ(0x0013e8a0, 300, [](guest::Fuzz &f) {
    u32 buffer;
    auto heap = some_heap(f, buffer);
    if (f.below(2) == 0) {
        heap->head = buffer + f.below(64);
    }
    if (f.below(2) == 0) {
        heap->states = f.object<FrameHeapState>();
    }
    f.arguments(heap, f.pick<u32>({0, 1, 2, f.number()}));
});

GUEST_FUZZ(0x0013e7fc, 300, [](guest::Fuzz &f) {
    u32 buffer;
    auto heap = some_heap(f, buffer);
    heap->tail = buffer + 160 + f.below(50);  // keep tail >= head
    u32 count = f.below(4);
    gptr<FrameHeapState> next = nullptr;
    for (u32 i = 0; i < count; i++) {
        auto state = f.object<FrameHeapState>();
        state->tag = count - i;
        state->head = buffer + f.below(100);
        state->tail = buffer + 210 + f.below(BUFFER_SIZE - 210);
        state->next = next;
        next = state;
    }
    heap->states = next;
    f.arguments(heap, f.pick<u32>({0, 1, 2, 3, 7}));
});

GUEST_FUZZ(0x0013e9e4, 200, [](guest::Fuzz &f) {
    // only kinds without a hook: the hooks are not safe to call on scratch data
    auto header = f.object<HeapHeader>();
    u32 kind = f.pick<u32>({0, 1, 0x20000000, 0xc0000000, f.number()});
    if (kind == HEAP_KIND_80000000 || kind == HEAP_KIND_40000000) {
        kind = 0;
    }
    header->kind = kind;
    auto handle = f.object<HeapHandle>();
    handle->header = header;
    f.arguments(handle);
});
