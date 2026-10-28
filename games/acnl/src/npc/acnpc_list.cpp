#include "npc/acnpc.hpp"

s32 AcNpc::clear_list_entry(u32 value) {
    s32 count = s32(list_end.addr() - list_begin.addr()) >> 2;
    if (count < 1) {
        return 1;
    }
    for (s32 i = 0; i < count; i++) {
        if (list_begin[i] == value) {
            list_begin[i] = 0;
            return 0;
        }
    }
    return count + 1;
}
GUEST_EXPORT(0x00306930, AcNpc::clear_list_entry);

// Only the two list pointers are read, so just they are allocated: the object's address is placed so that they land
// on the allocation (a whole AcNpc would not fit on the guest stack).
GUEST_FUZZ(0x00306930, 300, [](guest::Fuzz &f) {
    constexpr u32 LIST_OFFSET = offsetof(AcNpc, list_begin);
    constexpr u32 MAX_ENTRIES = 8;
    auto fields = f.allocate(8);
    auto npc = guest::gptr<AcNpc>(fields.addr() - LIST_OFFSET);
    u32 count = f.below(MAX_ENTRIES);
    auto entries = f.allocate((MAX_ENTRIES + 1) * 4).cast<u32>();
    f.bytes(entries, (MAX_ENTRIES + 1) * 4);
    npc->list_begin = entries;
    npc->list_end = entries + count;
    u32 value = f.below(2) ? entries[f.below(count + 1)] : f.number();
    f.arguments(npc, value);
});
