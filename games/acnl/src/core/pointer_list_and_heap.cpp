// Small helpers: an item's offset within its category, a search in a global list of pointers, and the
// allocate/free front ends that go through a global heap object when there is one.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

// The global list at 0x00981fd8: pointers, terminated by a null entry or by the count.
struct PointerList {
    gptr<u32> data;
    u32 count;
};
inline guest::global<PointerList, 0x00981fd8> pointer_list;

// The global heap object (null before it exists).
inline guest::global<gptr<void>, 0x00975338> heap_global;
inline guest::global<u8, 0x009752c0> heap_lookup_enabled;

constexpr u32 DEFAULT_ALIGNMENT = 4;
constexpr u32 UNKNOWN_ALLOCATE_ARGUMENT = 1;  // left in r3 for the plain allocator (meaning not known yet)
constexpr u32 HEAP_ALLOCATE_SLOT = 6;
constexpr u32 HEAP_FREE_SLOT = 7;

struct FlagByteHolder {
    u8 unknown_00[0x18];
    u8 flags;

    void add_flags(u32 bits);
};
GUEST_OFFSET(FlagByteHolder, flags, 0x18);

// Still recompiled code:
inline constexpr guest::Function<0x002f75a0, gptr<void>(u32 size, gptr<void> heap, u32 alignment, u32 unknown)>
    allocate_plain;
inline constexpr guest::Function<0x002f83b0, void(gptr<void> memory)> free_plain;
inline constexpr guest::Function<0x003045a8, gptr<void>(gptr<void> heap)> heap_object_of;
inline constexpr guest::Function<0x00137f28, gptr<void>(gptr<void> object, gptr<void> memory)> find_owner_by_object;
inline constexpr guest::Function<0x00138fec, gptr<void>(gptr<void> heap, gptr<void> memory)> find_owner_in_heap;

u32 vtable_function(gptr<void> object, u32 slot) {
    return *gptr<u32>(*object.cast<u32>() + slot * 4);
}

}  // namespace

// The item number minus the first item number of its category; -1 for items without data.
s32 item_offset_in_category(const Item &item) {
    gptr<ItemData> data = item.data();
    if (!data) {
        return -1;
    }
    u32 category = data->category < Item::NO_CATEGORY ? data->category : 0;
    return s32(item.number() - category_info(category)->first_item_number);
}
GUEST_EXPORT(0x002ffad8, item_offset_in_category);

// The index of the first entry equal to value; the count if there is none (a null entry ends the list).
u32 find_in_pointer_list(u32 value) {
    gptr<u32> data = pointer_list->data;
    u32 count = pointer_list->count;
    u32 i = 0;
    while (count > i && data[i] != 0 && data[i] != value) {
        i++;
    }
    if (data[i] == 0) {
        return count;
    }
    return i;
}
GUEST_EXPORT(0x002ffb15, find_in_pointer_list);

// Allocates size bytes (aligned to 4), from the heap object when one exists.
gptr<void> allocate_memory(u32 size) {
    gptr<void> heap = heap_global;
    if (!heap) {
        return allocate_plain(size, heap, DEFAULT_ALIGNMENT, UNKNOWN_ALLOCATE_ARGUMENT);
    }
    gptr<void> object = heap_object_of(heap);
    if (!object) {
        return nullptr;
    }
    return guest::call_address<gptr<void>>(vtable_function(object, HEAP_ALLOCATE_SLOT), object, size,
                                           DEFAULT_ALIGNMENT);
}
GUEST_EXPORT(0x002ffb48, allocate_memory);

// Frees memory obtained from allocate_memory.
void free_memory(gptr<void> memory) {
    gptr<void> heap = heap_global;
    if (!heap) {
        free_plain(memory);
        return;
    }
    if (!memory) {
        return;
    }
    gptr<void> owner = nullptr;
    if (heap_lookup_enabled) {
        gptr<void> object = heap_object_of(heap);
        if (object) {
            owner = find_owner_by_object(object, memory);
        }
    }
    if (!owner) {
        owner = find_owner_in_heap(heap_global, memory);
        if (!owner) {
            return;
        }
    }
    guest::call_address<void>(vtable_function(owner, HEAP_FREE_SLOT), owner, memory);
}
GUEST_EXPORT(0x002ffb64, free_memory);

void FlagByteHolder::add_flags(u32 bits) {
    flags = u8(bits | flags);
}
GUEST_EXPORT(0x002ffbf8, FlagByteHolder::add_flags);
