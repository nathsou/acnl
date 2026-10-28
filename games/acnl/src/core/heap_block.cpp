// Heap blocks and the DelegateThread delegate call: small helpers of the game's (pead) memory and thread code.
#include "guest/guest.hpp"

namespace {

// The 16 bytes in front of a heap block. When `link` is odd, the real header is elsewhere, at link - 1.
struct AllocationHeader {
    u32 unknown_00;
    u32 unknown_04;
    u32 owner;  // returned by allocation_owner (presumably the heap the block belongs to)
    u32 link;
};
GUEST_SIZE(AllocationHeader, 0x10);
GUEST_OFFSET(AllocationHeader, owner, 8);
GUEST_OFFSET(AllocationHeader, link, 0xc);

constexpr u32 LINK_FLAG = 1;  // set in `link` when it points to the real header

// An object called through slot 0 of its vtable with (thread, argument).
struct Delegate {
    gptr<u32> vtable;
};

struct DelegateThread {
    u8 unknown_00[0x88];
    gptr<Delegate> delegate;

    void invoke_delegate(u32 argument);
};
GUEST_OFFSET(DelegateThread, delegate, 0x88);

struct Heap {
    gptr<u32> vtable;
};
constexpr u32 HEAP_FREE_SLOT = 7;  // vtable slot (offset 0x1c) called with the address to release

inline guest::global<gptr<Heap>, 0x0097d40c> root_heap;

inline constexpr guest::Function<0x00749030, gptr<Heap>(gptr<Heap> root, gptr<void> address)> find_heap_containing;

}  // namespace

// The owner word of a heap block's header, following the header link when there is one.
u32 allocation_owner(gptr<void> block) {
    gptr<AllocationHeader> header = gptr<AllocationHeader>(block.addr()) - 1;
    u32 link = header->link;
    if (link & LINK_FLAG) {
        header = gptr<AllocationHeader>(link - LINK_FLAG);
    }
    return header->owner;
}
GUEST_EXPORT(0x005380a8, allocation_owner);

// pead::DelegateThread::virtual_15: forwards to the delegate, passing this thread and the argument.
void DelegateThread::invoke_delegate(u32 argument) {
    gptr<Delegate> target = delegate;
    guest::call_address<void>(target->vtable[0], target, guest::addr_of(this), argument);
}
GUEST_EXPORT(0x005380c0, DelegateThread::invoke_delegate);

// Releases an address through the heap that contains it; returns 0 when no heap does.
u32 free_in_containing_heap(gptr<void> address) {
    gptr<Heap> heap = find_heap_containing(*root_heap, address);
    if (!heap) {
        return 0;
    }
    return guest::call_address<u32>(heap->vtable[HEAP_FREE_SLOT], heap, address);
}
GUEST_EXPORT(0x0053814c, free_in_containing_heap);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A block preceded by a header, linked to a second header half of the time; returns the block address.
static gptr<void> some_block(guest::Fuzz &f) {
    auto header = f.object<AllocationHeader>();
    if (f.below(2) != 0) {
        auto real = f.object<AllocationHeader>();
        header->link = real.addr() + LINK_FLAG;
    } else {
        header->link &= ~LINK_FLAG;
    }
    return gptr<void>((header + 1).addr());
}

GUEST_FUZZ(0x005380a8, 300, [](guest::Fuzz &f) { f.arguments(some_block(f)); });

GUEST_FUZZ(0x005380c0, 200, [](guest::Fuzz &f) {
    // the delegate is itself a heap block whose vtable slot 0 is allocation_owner, a harmless reader
    auto header = f.object<AllocationHeader>();
    header->link &= ~LINK_FLAG;
    auto delegate = gptr<Delegate>((header + 1).addr());
    f.allocate(sizeof(Delegate));  // room for the delegate right after its header
    auto vtable = f.allocate(4).cast<u32>();
    vtable[0] = 0x005380a8;
    delegate->vtable = vtable;
    auto thread = f.object<DelegateThread>();
    thread->delegate = delegate;
    f.arguments(thread, f.pick<u32>({0, 1, 0xffffffff, f.number()}));
});

GUEST_FUZZ(0x0053814c, 200, [](guest::Fuzz &f) {
    // addresses below the code start lie in no heap: nothing real gets freed
    f.arguments(gptr<void>(f.pick<u32>({0, 4, 0x1000, f.below(0x100000)})));
});
