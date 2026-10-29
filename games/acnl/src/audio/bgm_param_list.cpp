#include "audio/bgm_param_list.hpp"

void BgmParamList::update_nodes(u32 kind, u32 id, u32 value_14, u32 float_bits_18, u32 value_10) {
    for (gptr<BgmParamNode> node = head; node && node->kind <= kind; node = node->next) {
        if (node->kind == kind && node->id == id) {
            node->unknown_14 = value_14;
            node->unknown_18 = float_bits_18;
            node->unknown_10 = value_10;
            node->flag_1f = value_10 == 0;
        }
    }
}
GUEST_EXPORT(0x0058aee8, BgmParamList::update_nodes);

void BgmParamList::insert(gptr<BgmParamNode> new_node) {
    new_node->next = nullptr;
    gptr<BgmParamNode> previous = nullptr;
    gptr<BgmParamNode> node = head;
    while (node) {
        if (new_node->kind <= node->kind) {
            new_node->next = node;
            break;
        }
        previous = node;
        node = node->next;
    }
    if (previous) {
        previous->next = new_node;
    } else {
        head = new_node;
    }
}
GUEST_EXPORT(0x0058af50, BgmParamList::insert);

bool BgmParamList::contains(u32 kind, u32 id) const {
    for (gptr<BgmParamNode> node = head; node; node = node->next) {
        if (node->kind == kind && node->id == id) {
            return true;
        }
        if (node->kind > kind) {
            break;
        }
    }
    return false;
}
GUEST_EXPORT(0x0058afb4, BgmParamList::contains);

void BgmParamList::set_current_value(u32 kind, u32 id, u32 value) {
    for (gptr<BgmParamNode> node = head; node && node->kind <= kind; node = node->next) {
        if (node->kind == kind && node->id == value) {
            // The original stores the value and then loops on this same node forever.
            guest::fatal("set_current_value: endless loop in the original");
        }
    }
    if (current.kind == kind && current.id == id && current.state == BgmCurrentRecord::STATE_8) {
        current.value = value;
    }
}
GUEST_EXPORT(0x0058aff8, BgmParamList::set_current_value);

void BgmParamList::set_flag_43c() {
    flag_43c = FLAG_SET;
}
GUEST_EXPORT(0x0058b060, BgmParamList::set_flag_43c);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// Callers pass kinds up to 0x1a; the generator picks kinds below FUZZ_KIND_COUNT.
static constexpr u32 FUZZ_KIND_COUNT = 0x1c;
static constexpr u32 FUZZ_HIGHEST_NODE_KIND = FUZZ_KIND_COUNT - 2;
static constexpr u32 FUZZ_MAX_NODES = 4;
static constexpr u32 FUZZ_KIND_STEP_RANGE = 4;  // nodes descend (towards the head's smaller kinds) by 0-3 per node
static constexpr u32 FUZZ_ID_BASE = 0x1000000;
static constexpr u32 FUZZ_ID_COUNT = 3;         // few ids, so that lookups often match
static constexpr u32 FUZZ_VALUE_RANGE = 2;      // set_current_value's value is 1 or 2: never a node id

static gptr<BgmParamList> some_list(guest::Fuzz &f) {
    auto list = f.object<BgmParamList>();
    gptr<BgmParamNode> next = nullptr;
    u32 count = f.below(FUZZ_MAX_NODES + 1);
    u32 kind = FUZZ_HIGHEST_NODE_KIND;
    for (u32 i = 0; i < count; i++) {
        auto node = f.object<BgmParamNode>();
        node->next = next;
        node->kind = kind;
        node->id = FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT);
        next = node;
        kind -= f.below(FUZZ_KIND_STEP_RANGE);
    }
    list->head = next;
    list->current.kind = f.below(FUZZ_KIND_STEP_RANGE);
    list->current.id = FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT);
    list->current.state = f.pick<u8>({BgmCurrentRecord::STATE_8, BgmCurrentRecord::STATE_8, 1});
    return list;
}

GUEST_FUZZ(0x0058aee8, 300, [](guest::Fuzz &f) {
    f.arguments(some_list(f), f.below(FUZZ_KIND_COUNT), FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT), f.number(),
                f.number(), f.pick<u32>({0, 1, f.number()}));
});
GUEST_FUZZ(0x0058af50, 300, [](guest::Fuzz &f) {
    auto node = f.object<BgmParamNode>();
    node->kind = f.below(FUZZ_KIND_COUNT);
    f.arguments(some_list(f), node);
});
GUEST_FUZZ(0x0058afb4, 300, [](guest::Fuzz &f) {
    f.arguments(some_list(f), f.below(FUZZ_KIND_COUNT), FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT));
});
GUEST_FUZZ(0x0058aff8, 300, [](guest::Fuzz &f) {
    auto list = some_list(f);
    f.arguments(list, f.below(FUZZ_KIND_COUNT), FUZZ_ID_BASE + f.below(FUZZ_ID_COUNT),
                1 + f.below(FUZZ_VALUE_RANGE));
});
GUEST_FUZZ(0x0058b060, 200, [](guest::Fuzz &f) { f.arguments(some_list(f)); });
