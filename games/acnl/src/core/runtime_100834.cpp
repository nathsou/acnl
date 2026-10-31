// Small runtime helpers around 0x00100834: a UTF-16 string length, lazily created per-context blocks, and the
// release of two objects held by a global.
#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

namespace {

inline constexpr guest::Function<0x002f75a0, gptr<void>(u32 size)> allocate;          // operator new-like
inline constexpr guest::Function<0x0013424c, void()> on_allocation_failure;            // does not return
inline constexpr guest::Function<0x00139448, gptr<gptr<void>>()> context_block_slot;  // where the block is kept

constexpr u32 SMALL_BLOCK_SIZE = 0x88;
constexpr u32 CALLBACK_00100895 = 0x00100895;  // the Thumb function t_00100894

// The 0x20-byte block created by get_or_create_context_block.
struct ContextBlock {
    u32 unknown_00;
    u32 unknown_04;
    u32 callback;  // guest function address
    u8 unknown_0c;
    u8 unknown_0d[3];
    u32 unknown_10;
    u32 unknown_14;
    u32 unknown_18;
    u32 unknown_1c;
};
GUEST_OFFSET(ContextBlock, callback, 0x08);
GUEST_OFFSET(ContextBlock, unknown_0c, 0x0c);
GUEST_OFFSET(ContextBlock, unknown_1c, 0x1c);
GUEST_SIZE(ContextBlock, 0x20);

// Objects with a vtable (hobj::VirtualObject); slot 4 releases them.
using hobj::VirtualObject;
constexpr u32 RELEASE_SLOT = 4;

struct GlobalObjects952c38 {
    u8 unknown_00[0x48];
    gptr<VirtualObject> object_48;
    u8 unknown_4c[0x64 - 0x4c];
    gptr<VirtualObject> object_64;
};
GUEST_OFFSET(GlobalObjects952c38, object_48, 0x48);
GUEST_OFFSET(GlobalObjects952c38, object_64, 0x64);
inline guest::global<GlobalObjects952c38, 0x00952c38> global_objects_952c38;

void release(gptr<VirtualObject> &holder) {
    gptr<VirtualObject> object = holder;
    guest::call_address<void>(object->vtable[RELEASE_SLOT], object);
    holder = nullptr;
}

}  // namespace

// The number of 16-bit characters before the terminating 0.
s32 string16_length(gptr<const u16> text) {
    s32 length = 0;
    while (*text != 0) {
        length++;
        ++text;
    }
    return length;
}
GUEST_EXPORT(0x00100835, string16_length);

// Allocates a 0x88-byte block and clears its first byte (null if the allocation failed).
gptr<u8> create_small_block() {
    gptr<u8> block = allocate(SMALL_BLOCK_SIZE).cast<u8>();
    if (block) {
        *block = 0;
    }
    return block;
}
GUEST_EXPORT(0x00100851, create_small_block);

// The block kept in the current context's slot, created (zeroed, with its callback) on first use.
gptr<ContextBlock> get_or_create_context_block() {
    gptr<gptr<void>> slot = context_block_slot();
    gptr<ContextBlock> block = slot->cast<ContextBlock>();
    if (block) {
        return block;
    }
    block = allocate(sizeof(ContextBlock)).cast<ContextBlock>();
    if (!block) {
        on_allocation_failure();
        return block;
    }
    *slot = block.cast<void>();
    block->unknown_04 = 0;
    block->unknown_00 = 0;
    block->callback = CALLBACK_00100895;
    block->unknown_0c = 0;
    block->unknown_10 = 0;
    block->unknown_14 = 0;
    block->unknown_18 = 0;
    block->unknown_1c = 0;  // (an optional initializer is compiled out)
    return block;
}
GUEST_EXPORT(0x00100899, get_or_create_context_block);

// Releases the global object at offset 0x64 and forgets it.
void release_global_object_64() {
    release(global_objects_952c38->object_64);
}
GUEST_EXPORT(0x001008e9, release_global_object_64);

// Releases the global object at offset 0x48 and forgets it.
void release_global_object_48() {
    release(global_objects_952c38->object_48);
}
GUEST_EXPORT(0x00100901, release_global_object_48);

namespace {

}  // namespace
