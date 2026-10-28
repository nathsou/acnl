#include <cstddef>
#include <cstring>

#include "escape/escape_objects.hpp"
#include "guest/guest.hpp"

namespace {

// Recompiled code:
inline constexpr guest::Function<0x40290cb8, u32(gptr<const char> text)> hash_key;
inline constexpr guest::Function<0x40290d50, gptr<void>(gptr<gptr<void>> root, gptr<const char> text, u32 hash)>
    find_resource;
inline constexpr guest::Function<0x40290d90, void(gptr<void> part, float value)> apply_float_to_part;

constexpr u32 KIND_COUNT = 6;
constexpr u32 NO_VALUE = 0xffffffff;

// An entry of an EscapeEntryList seen as a record of six words at 0x2c (meaning not known yet).
struct EscapeEntryValues {
    u8 unknown_00[0x2c];
    u32 values[KIND_COUNT];
};
GUEST_OFFSET(EscapeEntryValues, values, 0x2c);

struct EscapeSubWithByteD6 {
    u8 unknown_00[0xd6];
    s8 value_d6;
};
GUEST_OFFSET(EscapeSubWithByteD6, value_d6, 0xd6);

struct EscapeSubHolder {
    u8 unknown_000[0x9f8];
    gptr<EscapeSubWithByteD6> sub;
};
GUEST_OFFSET(EscapeSubHolder, sub, 0x9f8);

// The header of a resource file: a self-relative offset to the resource table at 0x20 (0: none).
struct ResourceFile {
    u8 unknown_00[0x20];
    u32 table_offset;
};
GUEST_OFFSET(ResourceFile, table_offset, 0x20);

struct ResourceOwner {
    gptr<ResourceFile> file;
};

// A found resource: a self-relative offset to its data at 0xc (0: none).
struct ResourceEntry {
    u8 unknown_00[0xc];
    u32 data_offset;
};
GUEST_OFFSET(ResourceEntry, data_offset, 0xc);

struct EscapePartHolder {
    u8 unknown_000[0x11c];
    u8 part_11c[8];
    u32 value_124;
    u8 unknown_128[0x140 - 0x128];
    float value_140;
};
GUEST_OFFSET(EscapePartHolder, part_11c, 0x11c);
GUEST_OFFSET(EscapePartHolder, value_124, 0x124);
GUEST_OFFSET(EscapePartHolder, value_140, 0x140);

constexpr u32 PART_LITERAL_ADDRESS = 0x402ff850;  // the float constant the original loads from its code

struct EscapeModelObject {
    static constexpr u32 PREPARE_SLOT = 32;  // vtable offset 0x80
    static constexpr u32 APPLY_SLOT = 33;    // vtable offset 0x84

    gptr<u32> vtable;

    u32 virtual_31(u32 argument);
};

}  // namespace

// A word of the entry at `index`, picked by `kind`; all ones for an invalid kind, and entries past the list read
// from a null entry as the game does.
static u32 entry_value(EscapeEntryList &self, u32 index, u32 kind) {
    if (kind >= KIND_COUNT) {
        return NO_VALUE;
    }
    gptr<EscapeEntryValues> entry;
    if (self.count > index) {
        entry = self.entries[index].cast<EscapeEntryValues>();
    }
    return entry->values[kind];
}
GUEST_EXPORT(0x402ff774, entry_value);

// The signed byte at 0xd6 of the object at 0x9f8.
static s8 sub_byte_d6(EscapeSubHolder &self) {
    return self.sub->value_d6;
}
GUEST_EXPORT(0x402ff7a0, sub_byte_d6);

// Finds a resource by name in the file's table; null when there is no table, no name, no such resource or no data.
static gptr<void> find_resource_by_name(ResourceOwner &self, gptr<const char> name) {
    u32 table_address = self.file.addr() + offsetof(ResourceFile, table_offset);
    u32 table_offset = self.file->table_offset;
    u32 table = table_offset != 0 ? table_address + table_offset : 0;
    if (table == 0 || !name) {
        return nullptr;
    }
    guest::StackObject<gptr<void>> root;
    *root = gptr<void>(table);
    gptr<ResourceEntry> entry = find_resource(root.ptr(), name, hash_key(name)).cast<ResourceEntry>();
    if (!entry) {
        return nullptr;
    }
    u32 data_address = entry.addr() + offsetof(ResourceEntry, data_offset);
    u32 data_offset = entry->data_offset;
    return data_offset != 0 ? gptr<void>(data_address + data_offset) : nullptr;
}
GUEST_EXPORT(0x402ff7ac, find_resource_by_name);

// Applies a value to the part at 0x11c (the constant one when `use_constant`, else the one at 0x140), if set.
static void apply_value_to_part_11c(EscapePartHolder &self, u32 use_constant) {
    if (self.value_124 == 0) {
        return;
    }
    float value = use_constant != 0 ? *gptr<float>(PART_LITERAL_ADDRESS) : self.value_140;
    apply_float_to_part(guest::addr_of(self.part_11c[0]), value);
}
GUEST_EXPORT(0x402ff820, apply_value_to_part_11c);

// Calls the object's two virtual functions in a row, the second with the argument.
u32 EscapeModelObject::virtual_31(u32 argument) {
    gptr<void> self = guest::addr_of(this);
    guest::call_address<void>(vtable[PREPARE_SLOT], self);
    return guest::call_address<u32>(vtable[APPLY_SLOT], self, argument);
}
GUEST_EXPORT(0x402ff854, EscapeModelObject::virtual_31);

GUEST_FUZZ(0x402ff774, 300, [](guest::Fuzz &f) {
    auto list = f.object<EscapeEntryList>();
    u32 count = 1 + f.below(4);
    auto entries = f.allocate(count * 4).cast<gptr<EscapeEntry>>();
    for (u32 i = 0; i < count; i++) {
        entries[i] = f.object<EscapeEntry>();
    }
    list->count = count;
    list->entries = entries;
    f.arguments(list, f.below(count), f.below(8));
});
GUEST_FUZZ(0x402ff7a0, 200, [](guest::Fuzz &f) {
    auto holder = f.object<EscapeSubHolder>();
    holder->sub = f.object<EscapeSubWithByteD6>();
    f.arguments(holder);
});
GUEST_FUZZ(0x402ff7ac, 200, [](guest::Fuzz &f) {
    auto owner = f.object<ResourceOwner>();
    auto file = f.object<ResourceFile>();
    file->table_offset = 0;  // no table: the recompiled helpers are not reached
    owner->file = file;
    auto name = f.allocate(8).cast<const char>();
    f.arguments(owner, f.below(2) ? name : gptr<const char>());
});
GUEST_FUZZ(0x402ff820, 200, [](guest::Fuzz &f) {
    auto holder = f.object<EscapePartHolder>();
    holder->value_124 = 0;
    f.arguments(holder, f.below(2));
});
GUEST_FUZZ(0x402ff854, 200, [](guest::Fuzz &f) {
    auto vtable = f.allocate(0x88).cast<u32>();
    for (u32 i = 0; i < 0x88 / 4; i++) {
        vtable[i] = 0x402fcbc4;  // a harmless rewritten function reading bytes of its argument
    }
    auto object = f.allocate(0x40).cast<EscapeModelObject>();
    std::memset(object.get(), 0, 0x40);
    object->vtable = vtable;
    f.arguments(object, f.number());
});
