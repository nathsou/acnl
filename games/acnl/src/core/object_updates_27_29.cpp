// Small methods of objects of the 0x00270000..0x002a0000 area (their classes are not known yet): a cached element,
// a scale by kind, talk-state checks, and tables of item numbers.
#include "core/fuzz_helpers.hpp"
#include "graphics/hemisphere_light.hpp"
#include "core/state_94fd0c.hpp"
#include "item/item.hpp"

using guest::gptr;

u8 read_global_byte_2();
Item &construct_item(Item &self, u16 id);
Item &copy_item(Item &self, const Item &other);

namespace {

constexpr u32 KIND_LIMIT = 8;
constexpr u32 KIND_SCALE_STRIDE = 12;
constexpr u32 DEFAULT_SCALE_OFFSET = 0x18;
constexpr u8 OBJECT_BYTE_MODE = 2;
constexpr u8 GLOBAL_BYTE_67 = 0x67;
constexpr u8 GLOBAL_BYTE_68 = 0x68;
constexpr u32 TALK_KIND = 0xe;
constexpr u32 NUMBER_COUNT = 0xa5;
constexpr u32 KIND_SCALES = 0x009841ec;  // a table of 8 vectors of 3 floats, then a default one at +0x18

struct ElementHolder {
    u8 unknown_000[0x116];
    u8 index_116;
    u8 unknown_117[0x188 - 0x117];
    gptr<u8> element_188;
};
GUEST_OFFSET(ElementHolder, index_116, 0x116);
GUEST_OFFSET(ElementHolder, element_188, 0x188);

struct KindObject {
    u8 unknown_00[0xc9];
    u8 kind_c9;
    u8 unknown_ca[0xd4 - 0xca];
    u8 node_d4[8];
};
GUEST_OFFSET(KindObject, kind_c9, 0xc9);
GUEST_OFFSET(KindObject, node_d4, 0xd4);

struct TalkObject {
    u8 unknown_00[0x13];
    u8 started_13;
    u8 unknown_14[4];
    u32 value_18;
};
GUEST_OFFSET(TalkObject, started_13, 0x13);
GUEST_OFFSET(TalkObject, value_18, 0x18);

struct Numbers {
    u16 values[NUMBER_COUNT];
};
inline guest::global<Numbers, 0x00998360> numbers_998360;
inline guest::global<Numbers, 0x00998214> numbers_998214;
inline guest::global<gptr<u8>, 0x0094f268> element_base_94f268;

inline constexpr guest::Function<0x00255968, gptr<u8>(gptr<u8> base, u32 index)> element_address;
inline constexpr guest::Function<0x001e90bc, u32(u32 kind)> actor_kind_value;
inline constexpr guest::Function<0x004ee3e8, void(gptr<u8> node, gptr<Float3> scale)> set_node_scale;
inline constexpr guest::Function<0x003170f8, bool(u32 kind, u32 strict)> talk_state_matches;
inline constexpr guest::Function<0x00305f2c, u8()> read_global_object_byte;
inline constexpr guest::Function<0x006d3b80, bool(u32 object)> mark_object_ready;

}  // namespace

// The element of the holder's table for its index, looked up once and kept.
gptr<u8> cached_element(ElementHolder &holder) {
    if (holder.element_188) {
        return holder.element_188;
    }
    holder.element_188 = element_address(*element_base_94f268, holder.index_116);
    return holder.element_188;
}
GUEST_EXPORT(0x0027d3cc, cached_element);
GUEST_FUZZ(0x0027d3cc, 100, [](guest::Fuzz &f) {
    auto holder = f.object<ElementHolder>();
    holder->element_188 = f.below(2) != 0 ? f.allocate(16).cast<u8>() : gptr<u8>(0u);
    *element_base_94f268 = f.allocate(0x100).cast<u8>();
    f.arguments(holder);
});

// Gives the node the scale of the object's kind (the default for kinds past the table).
void apply_kind_scale(KindObject &object) {
    u32 kind = actor_kind_value(object.kind_c9);
    u32 offset = kind < KIND_LIMIT ? kind * KIND_SCALE_STRIDE : DEFAULT_SCALE_OFFSET;
    set_node_scale(guest::addr_of(object.node_d4[0]), gptr<Float3>(KIND_SCALES + offset));
}
GUEST_EXPORT(0x0027db20, apply_kind_scale);
GUEST_FUZZ(0x0027db20, 100, [](guest::Fuzz &f) {
    auto object = f.object<KindObject>();
    object->node_d4[4] = 0;
    f.arguments(object);
});

// Whether the object-mode byte is 2 and the global byte is 0x67 or 0x68.
bool in_mode_67_or_68() {
    if (read_global_object_byte() != OBJECT_BYTE_MODE) {
        return false;
    }
    return read_global_byte_2() == GLOBAL_BYTE_67 || read_global_byte_2() == GLOBAL_BYTE_68;
}
GUEST_EXPORT(0x0028499c, in_mode_67_or_68);
GUEST_FUZZ(0x0028499c, 50, [](guest::Fuzz &f) { f.arguments(); });

// Starts the talk once: in mode 0x67/0x68 with the talk state of kind 0xe, marks the object started.
bool start_talk_once(TalkObject &object) {
    if (!in_mode_67_or_68()) {
        return false;
    }
    if (!talk_state_matches(TALK_KIND, 0)) {
        return false;
    }
    if (object.started_13 != 0) {
        return false;
    }
    object.started_13 = 1;
    object.value_18 = 0;
    return true;
}
GUEST_EXPORT(0x00284910, start_talk_once);
GUEST_FUZZ(0x00284910, 50, [](guest::Fuzz &f) { f.arguments(f.object<TalkObject>()); });

// Marks the object at field 0x30 of the state ready, when there is one.
bool mark_state_object_ready() {
    u32 object = state_94fd0c->unknown_30;
    if (object == 0) {
        return false;
    }
    return mark_object_ready(object);
}
GUEST_EXPORT(0x00284980, mark_state_object_ready);
GUEST_FUZZ(0x00284980, 50, [](guest::Fuzz &f) {
    state_94fd0c->unknown_30 = f.below(2) != 0 ? f.allocate(0x400).addr() : 0;
    f.arguments();
});

// Remembers the item's number at the index in table 0x00998360 (indices past the table are ignored).
void remember_number_a(const Item &item, u32 index) {
    if (index >= NUMBER_COUNT) {
        return;
    }
    numbers_998360->values[index] = item.number();
}
GUEST_EXPORT(0x00284f50, remember_number_a);
GUEST_FUZZ(0x00284f50, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.pick<u32>({0, 5, 0xa4, 0xa5, 0xffffffffu})); });

void remember_number_b(const Item &item, u32 index) {
    if (index >= NUMBER_COUNT) {
        return;
    }
    numbers_998214->values[index] = item.number();
}
GUEST_EXPORT(0x0028511c, remember_number_b);
GUEST_FUZZ(0x0028511c, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.pick<u32>({0, 5, 0xa4, 0xa5, 0xffffffffu})); });

// Builds the item whose number was remembered at the index (the empty item past the table).
Item &recall_item(Item &out, u32 index) {
    if (index >= NUMBER_COUNT) {
        return copy_item(out, *empty_item);
    }
    return construct_item(out, numbers_998360->values[index]);
}
GUEST_EXPORT(0x0028515c, recall_item);
GUEST_FUZZ(0x0028515c, 100, [](guest::Fuzz &f) { f.arguments(f.object<Item>(), f.pick<u32>({0, 5, 0xa4, 0xa5, 0xffffffffu})); });
