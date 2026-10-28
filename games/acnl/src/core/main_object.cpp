// Small accessors of the "main object" (the object query_main_object reads) and helpers next to them.
#include "guest/guest.hpp"

namespace {

// Still recompiled (or rewritten elsewhere and called through the game's ABI):
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x00300904, u32(gptr<void> object)> villager_check_300904;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;

constexpr u32 READY_GLOBAL_BYTE = 2;  // the value read_global_object_byte must give (meaning not known yet)

}  // namespace

// The object query_main_object works on. Only the fields read here are named; its size is not known.
struct MainObject {
    u8 unknown_00000[0x3c];
    u8 excluded_index;  // the index has_index_bit always answers false for
    u8 unknown_0003d[0x13268 - 0x3d];
    u8 value_13268;     // what query() answers when both flags are set
    u8 unknown_13269[0x1326e - 0x13269];
    u8 index_bits;      // one bit per index (bit_for_index)
    u8 unknown_1326f[0x132ac - 0x1326f];
    u8 flag_132ac;      // unknown flag
    s8 value_132ad;
    u8 flag_132ae;      // unknown flag

    u8 query() const;
    bool has_index_bit(u32 index) const;
    s8 signed_value() const;
};
GUEST_OFFSET(MainObject, excluded_index, 0x3c);
GUEST_OFFSET(MainObject, value_13268, 0x13268);
GUEST_OFFSET(MainObject, index_bits, 0x1326e);
GUEST_OFFSET(MainObject, flag_132ac, 0x132ac);
GUEST_OFFSET(MainObject, value_132ad, 0x132ad);
GUEST_OFFSET(MainObject, flag_132ae, 0x132ae);

// value_13268 when both flags are set, else 0.
u8 MainObject::query() const {
    if (flag_132ac == 0 || flag_132ae == 0) {
        return 0;
    }
    return value_13268;
}
GUEST_EXPORT(0x0075dfe8, MainObject::query);

// Whether the index's bit is set in index_bits; always false for excluded_index.
bool MainObject::has_index_bit(u32 index) const {
    if (excluded_index == index) {
        return false;
    }
    return (bit_for_index(index) & index_bits) != 0;
}
GUEST_EXPORT(0x0075e010, MainObject::has_index_bit);

s8 MainObject::signed_value() const {
    return value_132ad;
}
GUEST_EXPORT(0x0075e048, MainObject::signed_value);

// An object with a slot index and a state byte (what it is, is not known yet).
struct SlotState {
    static constexpr u32 SLOTS = 8;
    static constexpr u8 STATE_2 = 2;  // the state matches_slot looks for (meaning not known yet)

    u8 unknown_00[0x12];
    u8 state;
    u8 unknown_13[5];
    u8 slot;

    bool matches_slot(u32 index) const;
};
GUEST_OFFSET(SlotState, state, 0x12);
GUEST_OFFSET(SlotState, slot, 0x18);

// True when index is a valid slot, is this object's slot, and the state is STATE_2.
bool SlotState::matches_slot(u32 index) const {
    if (index >= SLOTS) {
        return false;
    }
    return slot == index && state == STATE_2;
}
GUEST_EXPORT(0x0075e058, SlotState::matches_slot);

// An object with a byte of per-index bits at 5 (passed to villager_check_300904 first).
struct IndexBitsAt5 {
    u8 unknown_00[5];
    u8 index_bits;
};
GUEST_OFFSET(IndexBitsAt5, index_bits, 5);

// Whether the object passes villager_check_300904, the global byte is READY_GLOBAL_BYTE and the bit of the
// current main object's index is set in the object's bits.
bool has_current_main_object_bit(gptr<IndexBitsAt5> object) {
    if (villager_check_300904(object) == 0) {
        return false;
    }
    if (read_global_object_byte() != READY_GLOBAL_BYTE) {
        return false;
    }
    u32 index = query_current_main_object();
    u8 bits = object->index_bits;
    return (bit_for_index(index) & bits) != 0;
}
GUEST_EXPORT(0x0075e0e8, has_current_main_object_bit);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A MainObject whose tail fields (0x13268-0x132af) are random scratch bytes: only those are read through it,
// so the object's base address is placed before the scratch block.
static gptr<MainObject> some_main_object_tail(guest::Fuzz &f) {
    constexpr u32 TAIL_START = 0x13260;
    constexpr u32 TAIL_SIZE = 0x50;
    gptr<void> tail = f.allocate(TAIL_SIZE);
    f.bytes(tail, TAIL_SIZE);
    auto object = gptr<MainObject>(tail.addr() - TAIL_START);
    if (f.below(2) != 0) {
        object->flag_132ac = u8(f.below(2));
        object->flag_132ae = u8(f.below(2));
    }
    return object;
}

GUEST_FUZZ(0x0075dfe8, 300, [](guest::Fuzz &f) { f.arguments(some_main_object_tail(f), u32(0x9502f5)); });
GUEST_FUZZ(0x0075e048, 200, [](guest::Fuzz &f) { f.arguments(some_main_object_tail(f)); });
GUEST_FUZZ(0x0075e010, 300, [](guest::Fuzz &f) {
    // read-only: an address in the game's static data, so that both 0x3c and 0x1326e land in mapped memory
    auto object = gptr<MainObject>(0x00950000 + f.below(0x80000));
    u32 index = f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, 8, 0xffffffff, f.number()});
    if (f.below(4) == 0) {
        index = object->excluded_index;
    }
    f.arguments(object, index);
});
GUEST_FUZZ(0x0075e058, 300, [](guest::Fuzz &f) {
    auto object = f.object<SlotState>();
    u32 index = f.pick<u32>({0, 4, 7, 8, 9, 0xffffffff, f.below(8), f.number()});
    if (f.below(2) != 0) {
        object->slot = u8(index);
    }
    if (f.below(2) != 0) {
        object->state = SlotState::STATE_2;
    }
    f.arguments(object, index);
});
GUEST_FUZZ(0x0075e0e8, 200, [](guest::Fuzz &f) {
    gptr<void> block = f.allocate(0x100);
    f.bytes(block, 0x100);
    f.arguments(block.cast<IndexBitsAt5>());
});
