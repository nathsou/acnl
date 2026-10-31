// Table lookups and resource arrays of the escape minigame code.
#include "escape/escape_objects.hpp"
#include "guest/guest.hpp"

namespace {

// Recompiled code:
inline constexpr guest::Function<0x40290cb8, u32(gptr<const char> text)> hash_key;
inline constexpr guest::Function<0x40290d50, gptr<void>(gptr<gptr<void>> root, gptr<const char> text, u32 hash)>
    find_resource;
inline constexpr guest::Function<0x40290c90, gptr<void>(u32 size, gptr<void> heap, u32 alignment)> allocate_aligned;
inline constexpr guest::Function<0x40290510, gptr<void>(gptr<void> memory, u32 constructor, u32 element_size,
                                                       u32 count)>
    construct_array;

constexpr u32 SYMBOL_COUNT = 12;
constexpr u32 CONSTRUCTOR_ADDRESS = 0x4029166c;
constexpr u32 TABLE_ENTRY_SIZE = 4;
constexpr u32 ENTRY_WORD_COUNT = 256;  // the lookups use indices from the pair table

// An entry of an EscapeEntryList as a record of words at 0x2c (meaning not known yet).
struct EscapeEntryWords {
    u8 unknown_00[0x2c];
    s32 values[ENTRY_WORD_COUNT];
};
GUEST_OFFSET(EscapeEntryWords, values, 0x2c);

// Two word indices tried for a kind.
struct KindPair {
    u8 first;
    u8 second;
};
GUEST_SIZE(KindPair, 2);
constexpr u32 KIND_PAIRS_ADDRESS = 0x4036a780;

struct DispatchTable {
    s8 values[SYMBOL_COUNT];
};
inline guest::global<DispatchTable, 0x40369ad4> dispatch_table;

// A 32-bit offset relative to its own address; 0 means none.
struct SelfRelativeOffset {
    u32 offset;

    gptr<void> target() const {
        if (offset == 0) {
            return nullptr;
        }
        return gptr<void>(guest::addr_of(this).addr() + offset);
    }
};
GUEST_SIZE(SelfRelativeOffset, 4);

// The entry at index, or null when index is past the list (its words are then read from guest address 0x2c...).
gptr<EscapeEntryWords> entry_or_null(const EscapeEntryList &list, u32 index) {
    if (list.count > index) {
        return list.entries[index].cast<EscapeEntryWords>();
    }
    return nullptr;
}

struct ResourceTable {
    u8 unknown_00[0x68];
    SelfRelativeOffset table;  // the resource table
};
GUEST_OFFSET(ResourceTable, table, 0x68);

struct ResourceEntry {
    u8 unknown_00[0xc];
    SelfRelativeOffset data;
};
GUEST_OFFSET(ResourceEntry, data, 0xc);

struct ResourceTableOwner {
    u8 unknown_00[8];
    gptr<ResourceTable> resources;
};
GUEST_OFFSET(ResourceTableOwner, resources, 8);

struct HeapHolder {
    u8 unknown_00[4];
    gptr<void> heap;
};
GUEST_OFFSET(HeapHolder, heap, 4);

}  // namespace

// A signed byte of a 12-entry table.
static s32 dispatch_second_byte_impl(u32 index, u32 unused) {
    (void)unused;
    return dispatch_table->values[index];
}
GUEST_EXPORT(0x402fe84c, dispatch_second_byte_impl);

// Looks an entry up by kind: tries the first word index of the kind's pair, then the second; the value found is
// the index of another entry, whose word (picked by the pair's other index) is the result. -1 when not found.
static s32 find_linked_value(const EscapeEntryList &list, u32 index, s32 kind) {
    if (kind >= s32(SYMBOL_COUNT)) {
        return -1;
    }
    KindPair pair = gptr<KindPair>(KIND_PAIRS_ADDRESS)[kind];
    u8 other_index = pair.second;
    s32 link = entry_or_null(list, index)->values[pair.first];
    if (link < 0) {
        other_index = pair.first;
        link = entry_or_null(list, index)->values[pair.second];
        if (link < 0) {
            return -1;
        }
    }
    return entry_or_null(list, u32(link))->values[other_index];
}
GUEST_EXPORT(0x402fe86c, find_linked_value);

// Allocates an array of `count` pointers and fills each with the data of the resource named in `names`
// (null when there is no resource table, no name, no such resource or no data). Null for a count of 0 or less.
static gptr<gptr<void>> find_resource_array(ResourceTableOwner &self, gptr<gptr<const char>> names, s32 count,
                                            HeapHolder &heap_holder) {
    if (count <= 0) {
        return nullptr;
    }
    gptr<void> memory = allocate_aligned(u32(count) * 4, heap_holder.heap, TABLE_ENTRY_SIZE);
    gptr<gptr<void>> result =
        construct_array(memory, CONSTRUCTOR_ADDRESS, TABLE_ENTRY_SIZE, u32(count)).cast<gptr<void>>();
    if (!result) {
        return nullptr;
    }
    for (s32 i = 0; i < count; i++) {
        gptr<const char> name = names[i];
        gptr<void> root = self.resources->table.target();
        gptr<void> data;
        if (root && name) {
            guest::StackObject<gptr<void>> root_slot;
            *root_slot = root;
            gptr<ResourceEntry> entry = find_resource(root_slot.ptr(), name, hash_key(name)).cast<ResourceEntry>();
            if (entry) {
                data = entry->data.target();
            }
        }
        result[i] = data;
    }
    return result;
}
GUEST_EXPORT(0x402fef20, find_resource_array);
