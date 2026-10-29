// Small functions on objects of the 0x0029 area whose type is not known yet: field setters, a clamped difference,
// a float computation, a virtual call and a queue append.
#include "core/fuzz_helpers.hpp"
#include "hobj/house_object.hpp"

using guest::gptr;
using hobj::VirtualObject;

namespace {

constexpr u32 FIRST_SLOT = 1;             // virtual function called without arguments
constexpr float HALF = 0.5f;
constexpr u32 FLAG_BIT_3 = 0x8;

struct CountObject {
    u8 unknown_000[0x720];
    s32 count_720;
    u8 unknown_724[0x74c - 0x724];
    s32 begin_74c;
    s32 end_750;
};
GUEST_OFFSET(CountObject, count_720, 0x720);
GUEST_OFFSET(CountObject, begin_74c, 0x74c);
GUEST_OFFSET(CountObject, end_750, 0x750);

struct SizeSource {
    u8 unknown_00[0x4c];
    float size_4c;
};
GUEST_OFFSET(SizeSource, size_4c, 0x4c);

struct PositionObject {
    u8 unknown_000[0x704];
    float position_704;
    u8 unknown_708[0x714 - 0x708];
    float position_714;
    u8 unknown_718[0x768 - 0x718];
    gptr<SizeSource> source_768;
};
GUEST_OFFSET(PositionObject, position_704, 0x704);
GUEST_OFFSET(PositionObject, position_714, 0x714);
GUEST_OFFSET(PositionObject, source_768, 0x768);

struct FlagObject {
    u8 unknown_000[0x6dc];
    u32 flags_6dc;
    u8 unknown_6e0[0x6f8 - 0x6e0];
    u8 byte_6f8;
};
GUEST_OFFSET(FlagObject, flags_6dc, 0x6dc);
GUEST_OFFSET(FlagObject, byte_6f8, 0x6f8);

struct QueueOwner {
    u8 unknown_000[0x438];
    u8 queue[0xc];
};
GUEST_OFFSET(QueueOwner, queue, 0x438);

inline constexpr guest::Function<0x0013f134, void(gptr<void> queue, gptr<void> node)> queue_append;

}  // namespace

// Calls the object's virtual function 1; a null object gives 0.
u32 call_virtual_1_if_present(gptr<VirtualObject> object) {
    if (!object) {
        return 0;
    }
    return guest::call_address<u32>(object->vtable[FIRST_SLOT], object);
}
GUEST_EXPORT(0x0024f71c, call_virtual_1_if_present);
GUEST_FUZZ(0x0024f71c, 100, [](guest::Fuzz &f) {
    auto object = f.object<VirtualObject>();
    object->vtable = fuzz::harmless_vtable(f, FIRST_SLOT + 1);
    f.arguments(f.below(4) != 0 ? object : gptr<VirtualObject>(0u));
});

// The distance between the two positions, counting both ends, but never below 0.
void update_count_720(CountObject &object) {
    s32 count = object.end_750 - object.begin_74c + 1;
    object.count_720 = count;
    if (count <= 0) {
        count = 0;
    }
    object.count_720 = count;
}
GUEST_EXPORT(0x00299070, update_count_720);
GUEST_FUZZ(0x00299070, 200, [](guest::Fuzz &f) {
    auto object = f.object<CountObject>();
    object->begin_74c = f.pick<s32>({0, 5, -5, 0x7fffffff, s32(f.number())});
    object->end_750 = f.pick<s32>({0, 4, 5, 6, 100, -100, s32(f.number())});
    f.arguments(object);
});

// The position at 0x704 minus half the source's size, stored at 0x714.
void update_position_714(PositionObject &object) {
    float position = object.position_704;
    float size = object.source_768->size_4c;
    object.position_714 = position - size * HALF;
}
GUEST_EXPORT(0x0029937c, update_position_714);
GUEST_FUZZ(0x0029937c, 200, [](guest::Fuzz &f) {
    auto object = f.object<PositionObject>();
    object->source_768 = f.object<SizeSource>();
    object->position_704 = f.pick<float>({0.0f, 1.0f, -3.5f, f.real()});
    object->source_768->size_4c = f.pick<float>({0.0f, 2.0f, 7.25f, f.real()});
    f.arguments(object);
});

// Stores the flag in byte 0x6f8 (its low byte) and as bit 3 of the flags at 0x6dc.
void set_flag_6f8(FlagObject &object, u32 on) {
    object.byte_6f8 = u8(on);
    if (on != 0) {
        object.flags_6dc = object.flags_6dc | FLAG_BIT_3;
    } else {
        object.flags_6dc = object.flags_6dc & ~FLAG_BIT_3;
    }
}
GUEST_EXPORT(0x00299984, set_flag_6f8);
GUEST_FUZZ(0x00299984, 100, [](guest::Fuzz &f) { f.arguments(f.object<FlagObject>(), f.pick<u32>({0, 1, 0x100, f.number()})); });

// Appends the node to the owner's queue.
void append_to_queue(QueueOwner &owner, gptr<void> node) {
    queue_append(guest::addr_of(owner.queue[0]), node);
}
GUEST_EXPORT(0x002999a0, append_to_queue);
GUEST_FUZZ(0x002999a0, 100, [](guest::Fuzz &f) {
    auto owner = f.object<QueueOwner>();
    std::memset(owner->queue, 0, sizeof(owner->queue));
    auto node = f.allocate(0x10);
    std::memset(node.get(), 0, 0x10);
    f.arguments(owner, node);
});
