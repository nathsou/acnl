// Small accessors of the local-play session (NetSession) and helpers next to them.
#include "guest/guest.hpp"
#include "net/net_session.hpp"

namespace {

// Still recompiled (or rewritten elsewhere and called through the game's ABI):
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x00300904, u32(gptr<void> object)> villager_check_300904;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x00305f44, u32()> current_station;

constexpr u32 READY_GLOBAL_BYTE = 2;  // the value read_global_object_byte must give (meaning not known yet)

}  // namespace


// station_bits when both flags are set, else 0.
u8 NetSession::station() const {
    if (flag_132ac == 0 || flag_132ae == 0) {
        return 0;
    }
    return station_bits;
}
GUEST_EXPORT(0x0075dfe8, NetSession::station);

// Whether the index's bit is set in station_mask; always false for buffer.own_station.
bool NetSession::has_station_bit(u32 index) const {
    if (buffer.own_station == index) {
        return false;
    }
    return (bit_for_index(index) & station_mask) != 0;
}
GUEST_EXPORT(0x0075e010, NetSession::has_station_bit);

s8 NetSession::signed_value() const {
    return value_132ad;
}
GUEST_EXPORT(0x0075e048, NetSession::signed_value);

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

// An object with a byte of per-station bits at 5 (passed to villager_check_300904 first).
struct StationMaskAt5 {
    u8 unknown_00[5];
    u8 station_mask;
};
GUEST_OFFSET(StationMaskAt5, station_mask, 5);

// Whether the object passes villager_check_300904, the global byte is READY_GLOBAL_BYTE and the bit of the
// current station is set in the object's bits.
bool has_current_station_bit(gptr<StationMaskAt5> object) {
    if (villager_check_300904(object) == 0) {
        return false;
    }
    if (read_global_object_byte() != READY_GLOBAL_BYTE) {
        return false;
    }
    u32 index = current_station();
    u8 bits = object->station_mask;
    return (bit_for_index(index) & bits) != 0;
}
GUEST_EXPORT(0x0075e0e8, has_current_station_bit);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A NetSession whose tail fields (0x13268-0x132af) are random scratch bytes: only those are read through it,
// so the object's base address is placed before the scratch block.
static gptr<NetSession> some_session_tail(guest::Fuzz &f) {
    constexpr u32 TAIL_START = 0x13260;
    constexpr u32 TAIL_SIZE = 0x50;
    gptr<void> tail = f.allocate(TAIL_SIZE);
    f.bytes(tail, TAIL_SIZE);
    auto object = gptr<NetSession>(tail.addr() - TAIL_START);
    if (f.below(2) != 0) {
        object->flag_132ac = u8(f.below(2));
        object->flag_132ae = u8(f.below(2));
    }
    return object;
}

GUEST_FUZZ(0x0075dfe8, 300, [](guest::Fuzz &f) { f.arguments(some_session_tail(f), u32(0x9502f5)); });
GUEST_FUZZ(0x0075e048, 200, [](guest::Fuzz &f) { f.arguments(some_session_tail(f)); });
GUEST_FUZZ(0x0075e010, 300, [](guest::Fuzz &f) {
    // read-only: an address in the game's static data, so that both 0x3c and 0x1326e land in mapped memory
    auto object = gptr<NetSession>(0x00950000 + f.below(0x80000));
    u32 index = f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, 8, 0xffffffff, f.number()});
    if (f.below(4) == 0) {
        index = object->buffer.own_station;
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
    f.arguments(block.cast<StationMaskAt5>());
});
