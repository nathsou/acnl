// The player of a slot (local players are in the save data, remote ones in their own array), a count of the bits in
// a table of halfwords, and two flags of an object.
#include "guest/guest.hpp"
#include "save/save_data.hpp"

namespace {

inline constexpr guest::Function<0x00607bdc, u32()> player_unavailable;
inline constexpr guest::Function<0x002fae84, gptr<void>()> get_data_base;
inline constexpr guest::Function<0x002fb7e8, gptr<SavePlayer>(gptr<SavePlayer> players, u32 index)> player_at;
inline constexpr guest::Function<0x0027ab40, bool(u32 slot)> is_local_slot;
inline constexpr guest::Function<0x0027ab24, bool(u32 slot)> is_remote_slot;
inline constexpr guest::Function<0x0027a5dc, u32(u32 slot)> remote_slot_index;

inline guest::global<SavePlayer[SaveData::PLAYER_COUNT], 0x00a84790> remote_players;

constexpr u32 HALFWORD_COUNT = 320;
constexpr u32 NIBBLE_COUNT = 16;
constexpr u32 NIBBLE_BITS = 4;
inline guest::global<u8[NIBBLE_COUNT], 0x008657ec> bits_in_nibble;

}  // namespace

// The player of the slot: null when the players are not available or for a slot that is none of them.
static gptr<SavePlayer> player_for_slot(u32 slot) {
    if (player_unavailable() != 0) {
        return nullptr;
    }
    if (is_local_slot(slot)) {
        gptr<void> base = get_data_base();
        return player_at(guest::addr_of(save_data_of_base(base.addr())->players[0]), slot);
    }
    if (!is_remote_slot(slot)) {
        return nullptr;
    }
    u32 index = remote_slot_index(slot);
    if (index >= SaveData::PLAYER_COUNT) {
        return nullptr;
    }
    return guest::addr_of(remote_players[index]);
}
GUEST_EXPORT(0x002fb96c, player_for_slot);

// A table of 320 halfwords followed by a total of the bits set in them.
struct BitTable {
    u16 entries[HALFWORD_COUNT];
    u32 total;

    u32 count_bits();
};
GUEST_OFFSET(BitTable, total, 0x280);

u32 BitTable::count_bits() {
    total = 0;
    for (u16 entry : entries) {
        if (entry == 0) {
            continue;
        }
        for (u32 nibble = 0; nibble < 4; nibble++) {
            total += bits_in_nibble[entry >> (nibble * NIBBLE_BITS) & 0xf];
        }
    }
    return total;
}
GUEST_EXPORT(0x002fb9f1, BitTable::count_bits);

// An object with flags in its byte at 0xb.
struct FlagsAtB {
    static constexpr u8 BIT_0 = 1 << 0;  // unknown flag
    static constexpr u8 BIT_4 = 1 << 4;  // unknown flag

    u8 unknown_00[0xb];
    u8 flags;

    void set_bit_0(u32 on);
    void set_bit_4(u32 on);
};
GUEST_OFFSET(FlagsAtB, flags, 0xb);

void FlagsAtB::set_bit_0(u32 on) {
    flags = on != 0 ? (flags | BIT_0) : (flags & ~BIT_0);
}
GUEST_EXPORT(0x002fbf30, FlagsAtB::set_bit_0);

void FlagsAtB::set_bit_4(u32 on) {
    flags = on != 0 ? (flags | BIT_4) : (flags & ~BIT_4);
}
GUEST_EXPORT(0x002fbf48, FlagsAtB::set_bit_4);
