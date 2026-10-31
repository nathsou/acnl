// g3d::Model's constructor, a type check on the object a holder points to, a sort of a list of entries into
// self-relative slots, and a lookup of three words behind a chain of self-relative pointers.
#include <cstring>

#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

using guest::gptr;

namespace {

// A pointer stored as the distance from the field itself to its target (0: null).
template <typename T>
struct RelativePtr {
    u32 offset;

    gptr<T> get() const {
        if (offset == 0) {
            return nullptr;
        }
        gptr<u8> self = guest::addr_of(this).template cast<u8>();
        return (self + offset).template cast<T>();
    }
    void set(gptr<T> target) {
        if (!target) {
            offset = 0;
            return;
        }
        gptr<u8> self = guest::addr_of(this).template cast<u8>();
        offset = u32(target.template cast<u8>() - self);
    }
};
GUEST_SIZE(RelativePtr<u32>, 4);

// ---- type check

// A node of the game's runtime type information: a chain of parents.
struct RuntimeType {
    gptr<RuntimeType> parent;
};

struct ObjectHolder {
    u8 unknown_00[4];
    gptr<hobj::VirtualObject> object;  // may be null
};
GUEST_OFFSET(ObjectHolder, object, 4);

constexpr gptr<RuntimeType> WANTED_TYPE{0x009750bc};
constexpr u32 GET_TYPE_SLOT = 2;

// ---- sorting

struct TypeInfo {
    u8 unknown_00[0x20];
    u32 priority;  // only the low byte counts
};
GUEST_OFFSET(TypeInfo, priority, 0x20);

struct TypeRef {
    u8 unknown_00[8];
    gptr<TypeInfo> info;
};
GUEST_OFFSET(TypeRef, info, 8);

struct SortEntry {
    u8 unknown_00[0x1c];
    u32 type_index;
    u8 unknown_20[5];
    u8 order;  // tie breaker
};
GUEST_OFFSET(SortEntry, type_index, 0x1c);
GUEST_OFFSET(SortEntry, order, 0x25);

using EntrySlot = RelativePtr<SortEntry>;

struct SlotOwner {
    u8 unknown_00[0xb8];
    RelativePtr<EntrySlot> slots;  // used when the context's own slot list is empty
};
GUEST_OFFSET(SlotOwner, slots, 0xb8);

struct SortContext {
    u8 unknown_00[8];
    gptr<SlotOwner> owner;
    u8 unknown_0c[0x164 - 0xc];
    gptr<gptr<TypeRef>> types;
    u8 unknown_168[0x170 - 0x168];
    gptr<EntrySlot> slots_begin;
    gptr<EntrySlot> slots_end;
};
GUEST_OFFSET(SortContext, owner, 8);
GUEST_OFFSET(SortContext, types, 0x164);
GUEST_OFFSET(SortContext, slots_begin, 0x170);
GUEST_OFFSET(SortContext, slots_end, 0x174);

struct SortableList {
    static constexpr u32 MAX_ENTRIES = 64;

    u8 unknown_00[4];
    gptr<SortContext> context;

    // Sorts the entries by type priority then order, and stores them as relative offsets in the slot list.
    // Returns the entry count.
    s32 sort_into_slots();
};
GUEST_OFFSET(SortableList, context, 4);

struct EntryArray {
    gptr<SortEntry> items[SortableList::MAX_ENTRIES];
};

inline constexpr guest::Function<0x004f0f80, s32(SortableList &self, gptr<gptr<SortEntry>> out)> collect_entries;

u32 priority_of(const SortContext &context, const SortEntry &entry) {
    return context.types[entry.type_index]->info->priority & 0xff;
}

// ---- model

struct Model {
    static constexpr u32 VTABLE = 0x00902b1c;

    gptr<u32> vtable;
    gptr<void> node;
    u8 flag_08;
};
GUEST_OFFSET(Model, flag_08, 8);

inline constexpr guest::Function<0x004ee4ec, gptr<void>(gptr<void> self)> construct_transform_node_base;

// ---- relative lookup

struct WordTriple {
    u32 words[3];
};

struct LookupData {
    u8 unknown_00[0x38];
    WordTriple triple;
};
GUEST_OFFSET(LookupData, triple, 0x38);

struct LookupSlot {
    RelativePtr<LookupData> data;
    u8 unknown_04[12];
};
GUEST_SIZE(LookupSlot, 16);

struct LookupLevel2 {
    u8 unknown_00[0x28];
    LookupSlot slots[1];  // indexed beyond 1
};
GUEST_OFFSET(LookupLevel2, slots, 0x28);

struct LookupLevel1 {
    u8 unknown_00[0x1c];
    RelativePtr<LookupLevel2> level2;
};
GUEST_OFFSET(LookupLevel1, level2, 0x1c);

struct LookupSource {
    u8 unknown_00[0xe0];
    RelativePtr<LookupLevel1> level1;
};
GUEST_OFFSET(LookupSource, level1, 0xe0);

}  // namespace

// The object the holder points to, if its runtime type (virtual 2) derives from WANTED_TYPE; else null.
gptr<hobj::VirtualObject> object_if_of_wanted_type(ObjectHolder &holder) {
    gptr<hobj::VirtualObject> object = holder.object;
    if (!object) {
        return nullptr;
    }
    gptr<RuntimeType> type = guest::call_address<gptr<RuntimeType>>(object->vtable[GET_TYPE_SLOT], object);
    while (type != WANTED_TYPE) {
        type = type->parent;
        if (!type) {
            return nullptr;
        }
    }
    return object;
}
GUEST_EXPORT(0x004f1328, object_if_of_wanted_type);

s32 SortableList::sort_into_slots() {
    guest::StackObject<EntryArray> storage;
    gptr<gptr<SortEntry>> items = storage.ptr().cast<gptr<SortEntry>>();
    s32 count = collect_entries(*this, items);

    for (s32 i = 0; i < count; i++) {
        for (s32 j = i + 1; j < count; j++) {
            gptr<SortEntry> a = items[i];
            gptr<SortEntry> b = items[j];
            u32 priority_a = priority_of(*context, *a);
            u32 priority_b = priority_of(*context, *b);
            if (priority_a > priority_b || (priority_a == priority_b && a->order > b->order)) {
                items[i] = b;
                items[j] = a;
            }
        }
    }

    gptr<EntrySlot> slots = context->slots_begin;
    if (context->slots_begin == context->slots_end) {
        slots = context->owner->slots.get();
    }
    for (s32 i = 0; i < count; i++) {
        slots[i].set(items[i]);
    }
    return count;
}
GUEST_EXPORT(0x004f1374, SortableList::sort_into_slots);

// g3d::Model::Model
Model &construct_model(Model &self) {
    construct_transform_node_base(guest::addr_of(self));
    self.vtable = gptr<u32>(Model::VTABLE);
    self.flag_08 = 0;
    return self;
}
GUEST_EXPORT(0x004f147c, construct_model);

// Copies three words out of the entry `index` of a table reached through relative pointers. Always succeeds.
bool read_relative_triple(WordTriple &out, LookupSource &source, u32 index) {
    gptr<LookupLevel1> level1 = source.level1.get();
    gptr<LookupLevel2> level2 = level1->level2.get();
    gptr<LookupData> data = nullptr;
    if (level2) {
        data = level2->slots[index].data.get();
    }
    out = data->triple;
    return true;
}
GUEST_EXPORT(0x004f14b0, read_relative_triple);
