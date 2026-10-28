#include "escape/escape_objects.hpp"

using guest::gptr;

namespace {

// A {group, id} pair of an id table; a negative group ends the table.
struct IdPair {
    s16 group;
    s16 id;
};
GUEST_SIZE(IdPair, 4);

// The minigame module is relocatable: its code finds its data through literal pools that the loader patches, so
// the rewrite reads the data addresses from those pools like the original does.
constexpr u32 ID_TABLE_COUNT = 4;
struct IdTablePool {
    gptr<IdPair> tables[ID_TABLE_COUNT];  // searched in order
};
inline guest::global<IdTablePool, 0x402dc430> id_table_pool;

// A match at index i of table t yields (i + INDEX_BASE[t]) | TAG[t] << 16.
constexpr u32 INDEX_BASE[ID_TABLE_COUNT] = {2, 2, 1, 1};
constexpr u32 TAG[ID_TABLE_COUNT] = {4, 3, 5, 6};

// Partial view of escape::EscapeWindowWorldBase.
struct EscapeWindowWorldBase {
    u8 unknown_00[4];
    u8 group_04;
    u8 unknown_05[0x10 - 0x05];
    s32 id_10;

    u32 virtual_10() const;
};
GUEST_OFFSET(EscapeWindowWorldBase, group_04, 0x04);
GUEST_OFFSET(EscapeWindowWorldBase, id_10, 0x10);

// Module globals holding pointers to objects not known yet (their addresses come from literal pools).
inline guest::global<gptr<u32>, 0x402dc44c> module_object_2cac_pool;

struct ModuleObject2da4Inner {
    u8 unknown_000[0x678];
    u32 handler_678;  // passed to f_4031f8f8 when set
};
GUEST_OFFSET(ModuleObject2da4Inner, handler_678, 0x678);
struct ModuleObject2da4 {
    u8 unknown_00[0x64];
    gptr<ModuleObject2da4Inner> inner;
};
GUEST_OFFSET(ModuleObject2da4, inner, 0x64);
inline guest::global<gptr<gptr<ModuleObject2da4>>, 0x402dc478> module_object_2da4_pool;

inline constexpr guest::Function<0x402df2c8, void(u32 object, s32 mode)> module_object_2cac_call;
inline constexpr guest::Function<0x4031f8f8, void(u32 handler)> run_handler_678;

}  // namespace

s8 EscapeOwner::held_value() const {
    gptr<EscapeValueHolder> holder = sub->value_holder;
    if (!holder) {
        return 0;
    }
    return holder->value_30;
}
GUEST_EXPORT(0x402dc2a8, EscapeOwner::held_value);

// Searches the id tables for {group, id}; returns the tagged index of the first match, or 0.
static u32 find_id_pair(s32 group, s32 id) {
    for (u32 t = 0; t < ID_TABLE_COUNT; t++) {
        gptr<IdPair> entries = id_table_pool->tables[t];
        for (u32 i = 0; entries[i].group >= 0; i++) {
            if (entries[i].group == group && entries[i].id == id) {
                return u16(i + INDEX_BASE[t]) | (TAG[t] << 16);
            }
        }
    }
    return 0;
}
GUEST_EXPORT(0x402dc2cc, find_id_pair);

// The tagged id of this window (the original falls through into find_id_pair).
u32 EscapeWindowWorldBase::virtual_10() const {
    return find_id_pair(group_04, id_10);
}
GUEST_EXPORT(0x402dc2c0, EscapeWindowWorldBase::virtual_10);

// Forwards to f_402df2c8 on the module object behind the literal at 0x402dc44c.
static void call_module_object_2cac(s32 mode) {
    module_object_2cac_call(*(*module_object_2cac_pool), mode);
}
GUEST_EXPORT(0x402dc440, call_module_object_2cac);

// Runs f_4031f8f8 on the handler of the module object behind the literal at 0x402dc478, if it has one.
static void run_module_handler() {
    u32 handler = (*(*module_object_2da4_pool))->inner->handler_678;
    if (handler != 0) {
        run_handler_678(handler);
    }
}
GUEST_EXPORT(0x402dc450, run_module_handler);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A {group, id} pair, often one taken from the tables
static void some_id_pair(guest::Fuzz &f, s32 &group, s32 &id) {
    constexpr u32 MAX_SCAN = 64;
    group = s32(f.below(8)) - 1;
    id = f.pick<s32>({0x136, 0, -1, s32(f.below(0x200))});
    if (f.below(4) == 0) {
        return;
    }
    gptr<IdPair> entries = id_table_pool->tables[f.below(ID_TABLE_COUNT)];
    u32 count = 0;
    while (count < MAX_SCAN && entries[count].group >= 0) {
        count++;
    }
    if (count == 0) {
        return;
    }
    const IdPair &pair = entries[f.below(count)];
    group = pair.group;
    id = pair.id;
}

GUEST_FUZZ(0x402dc2a8, 200, [](guest::Fuzz &f) {
    auto owner = f.object<EscapeOwner>();
    auto sub = f.object<EscapeSubObject>();
    owner->sub = sub;
    sub->value_holder = f.below(4) == 0 ? gptr<EscapeValueHolder>() : f.object<EscapeValueHolder>();
    f.arguments(owner);
});
GUEST_FUZZ(0x402dc2cc, 300, [](guest::Fuzz &f) {
    s32 group, id;
    some_id_pair(f, group, id);
    f.arguments(group, id);
});
GUEST_FUZZ(0x402dc2c0, 200, [](guest::Fuzz &f) {
    auto window = f.object<EscapeWindowWorldBase>();
    s32 group, id;
    some_id_pair(f, group, id);
    if (group >= 0 && f.below(8) != 0) {
        window->group_04 = u8(group);
        window->id_10 = id;
    }
    f.arguments(window);
});
GUEST_FUZZ(0x402dc440, 200, [](guest::Fuzz &f) { f.arguments(f.pick<s32>({1, 2})); });
GUEST_FUZZ(0x402dc450, 200, [](guest::Fuzz &f) { f.arguments(); });
