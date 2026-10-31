// Small questions from 0x0071e000 to 0x00767000 on objects whose type is not known yet: bits of the current slot,
// station tables, the actor's angle to another, and a few clock and save checks.
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"
#include "net/net_session.hpp"
#include "save/personal_id.hpp"
#include "save/save_data.hpp"
#include "save/player.hpp"

using guest::gptr;

s16 angle_between_points(const Float3 &from, const Float3 &to);

namespace {

constexpr u32 NIBBLE_SHIFT = 2;
constexpr u32 NIBBLE_MASK = 0xf;
constexpr u32 NIBBLE_LIMIT = 3;
constexpr u32 SLOT_COUNT = 4;
constexpr u32 MAIN_SLOT_INDEX = 4;
constexpr u8 BIT_0 = 1;
constexpr u8 BIT_1 = 2;
constexpr u8 BIT_5 = 0x20;
constexpr u8 BIT_6 = 0x40;
constexpr u32 KIND_FLAG_10000000 = 0x10000000;
constexpr u32 BYTE_1A9_LIMIT = 0xeb;
constexpr u32 DAY_FIRST_HOUR = 7;
constexpr u32 DAY_END_HOUR = 0x13;
constexpr u32 GLOBAL_BYTE_SKIP = 2;
constexpr u32 STATION_TABLE_SIZE = 4;
constexpr u32 NO_STATION = 4;
constexpr u32 DAY_HOUR_INDEX = 7;

inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;
inline constexpr guest::Function<0x002ff8b0, u32(u32 index)> slot_value;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x00300904, u32()> main_object_value;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x003170ec, bool()> talk_state_active;
inline constexpr guest::Function<0x0064f390, u32(u32 index)> entry_10;
inline constexpr guest::Function<0x002fb328, gptr<SaveData>()> get_save_data;
inline constexpr guest::Function<0x002fb378, gptr<s8>()> reference_clock;

// An object with a byte of mode bits at 0 and a per-station table of signed bytes at 0x34.
struct StationBytes {
    u8 mode_bits;
    u8 unknown_01[0x33];
    s8 bytes_34[8];
};
GUEST_OFFSET(StationBytes, bytes_34, 0x34);

struct SlotFlags {
    u8 unknown_000[0x7dd2];
    u8 flags[SLOT_COUNT];
    u8 unknown_7dd6;
    u8 value_7dd7;
};
GUEST_OFFSET(SlotFlags, flags, 0x7dd2);
GUEST_OFFSET(SlotFlags, value_7dd7, 0x7dd7);

struct PositionedObject {
    u8 unknown_00[0x14];
    Float3 position;
};
GUEST_OFFSET(PositionedObject, position, 0x14);

struct EntryTableOwner {
    u8 unknown_00[4];
    u8 bytes_04[STATION_TABLE_SIZE];
};
GUEST_OFFSET(EntryTableOwner, bytes_04, 4);

struct StationBits {
    u8 unknown_00[0x21];
    u8 bits_21;
};
GUEST_OFFSET(StationBits, bits_21, 0x21);

struct FirstByteHolder {
    u8 byte_00;
};

struct TalkAndSlot {
    u8 unknown_000[0x171];
    u8 flags_171;
    u8 unknown_172[0x1ac - 0x172];
    u8 slot_1ac;
};
GUEST_OFFSET(TalkAndSlot, flags_171, 0x171);
GUEST_OFFSET(TalkAndSlot, slot_1ac, 0x1ac);

struct PairFlags {
    u8 unknown_000[0x906];
    u8 byte_906;
    u8 unknown_907[0x91a - 0x907];
    u8 byte_91a;
};
GUEST_OFFSET(PairFlags, byte_906, 0x906);
GUEST_OFFSET(PairFlags, byte_91a, 0x91a);

struct ByteAt1A9 {
    u8 unknown_000[0x1a9];
    u8 byte_1a9;
};
GUEST_OFFSET(ByteAt1A9, byte_1a9, 0x1a9);

struct PlayerContext {
    u8 unknown_000[0x234];
    gptr<SavePlayer> player;
};
GUEST_OFFSET(PlayerContext, player, 0x234);
inline guest::global<PlayerContext, 0x00aaef18> player_context;

}  // namespace

// 0 when the mode nibble (bits 2-5) is below 3; otherwise 1 in the first mode, else the byte for the main object.
s32 station_byte_or_one(StationBytes &object) {
    u32 nibble = (object.mode_bits >> NIBBLE_SHIFT) & NIBBLE_MASK;
    if (NIBBLE_LIMIT > nibble) {
        return 0;
    }
    if (mode_above_1() == 0) {
        return 1;
    }
    return object.bytes_34[query_current_main_object()];
}
GUEST_EXPORT(0x0071e9e8, station_byte_or_one);

// Bit 0 of the flag byte of the main slot (0 for slots past the four).
u32 main_slot_flag_bit_0(SlotFlags &object) {
    u32 slot = slot_value(MAIN_SLOT_INDEX);
    return slot < SLOT_COUNT ? object.flags[slot] & BIT_0 : 0;
}
GUEST_EXPORT(0x0071fc48, main_slot_flag_bit_0);

// Bit 1 of the same flag byte.
u32 main_slot_flag_bit_1(SlotFlags &object) {
    u32 slot = slot_value(MAIN_SLOT_INDEX);
    return slot < SLOT_COUNT ? (object.flags[slot] & BIT_1) >> 1 : 0;
}
GUEST_EXPORT(0x0071fd34, main_slot_flag_bit_1);

// Whether the main slot's value is the object's byte 0x7dd7.
bool main_slot_is_marked_slot(SlotFlags &object) {
    return slot_value(MAIN_SLOT_INDEX) == object.value_7dd7;
}
GUEST_EXPORT(0x0071fcb8, main_slot_is_marked_slot);

// The angle from one object to another; 0 without another.
u32 angle_to_object(PositionedObject &from, gptr<PositionedObject> to) {
    s16 angle = 0;
    if (to != nullptr) {
        angle = angle_between_points(from.position, to->position);
    }
    return u16(angle);
}
GUEST_EXPORT(0x007521a4, angle_to_object);

// Whether the current player has the identity.
bool current_player_matches(const PersonalId &identity) {
    gptr<SavePlayer> player = player_context->player;
    return player != nullptr && identities_match(player->identity, identity) != 0;
}
GUEST_EXPORT(0x007576e4, current_player_matches);

// Whether the station's bit is set in the session's mask byte.
bool session_has_station(gptr<NetSession> session, u32 station) {
    return (bit_for_index(station) & session->station_mask) != 0;
}
GUEST_EXPORT(0x0075dfb4, session_has_station);

// Whether the main object has a value, the registry byte is 2 and the object's first byte is 0.
bool main_object_idle_in_mode_2(FirstByteHolder &object) {
    return main_object_value() != 0 && read_global_object_byte() == GLOBAL_BYTE_SKIP && object.byte_00 == 0;
}
GUEST_EXPORT(0x0075e1a8, main_object_idle_in_mode_2);

// Whether the byte at 0x21 has the bit of each of the four stations.
bool all_stations_in_bits(StationBits &object) {
    for (u32 station = 0; station < SLOT_COUNT; station++) {
        if ((bit_for_index(station) & object.bits_21) == 0) {
            return false;
        }
    }
    return true;
}
GUEST_EXPORT(0x0075e410, all_stations_in_bits);

// The station's table byte while the session has no station; 4 otherwise.
u32 table_byte_without_session_station(EntryTableOwner &owner, u32 station) {
    if ((*net_session)->station() == 0 && station < STATION_TABLE_SIZE) {
        return owner.bytes_04[station];
    }
    return NO_STATION;
}
GUEST_EXPORT(0x0075ea7c, table_byte_without_session_station);

// 1 while bit 5 of the flags is clear; otherwise whether a talk entry is active.
bool talk_active_or_no_flag(TalkAndSlot &object) {
    if ((object.flags_171 & BIT_5) == 0) {
        return true;
    }
    return talk_state_active();
}
GUEST_EXPORT(0x0076263c, talk_active_or_no_flag);

// Bit 6 of a byte of the object picked by the kind of the global byte.
u32 pair_flag_bit_6(PairFlags &object) {
    bool flagged = table_entry_has_all_bits(KIND_FLAG_10000000, read_global_byte_2()) != 0;
    u8 byte = flagged ? object.byte_906 : object.byte_91a;
    return (byte & BIT_6) != 0;
}
GUEST_EXPORT(0x007626c0, pair_flag_bit_6);

// The entry for the byte at 0x1a9 when it is below the limit, else 0.
u32 entry_for_byte_1a9(ByteAt1A9 &object) {
    u32 index = object.byte_1a9;
    return index < BYTE_1A9_LIMIT ? entry_10(index) : 0;
}
GUEST_EXPORT(0x00763818, entry_for_byte_1a9);

// Whether the save data's byte 0x6e2a6 is 1.
bool save_state_6e2a6_is_1() {
    return get_save_data()->state_6e2a6 == 1;
}
GUEST_EXPORT(0x0076620c, save_state_6e2a6_is_1);

// Whether the clock's hour byte is outside 7 to 18.
bool clock_is_night() {
    s32 hour = reference_clock()[DAY_HOUR_INDEX];
    return hour < s32(DAY_FIRST_HOUR) || hour >= s32(DAY_END_HOUR);
}
GUEST_EXPORT(0x00766ed4, clock_is_night);
