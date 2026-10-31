// Requests the local-play code writes to the session: some set a state and tell the other stations through the
// session's message buffer, others only update the station masks of the requesting object.
#include "net/net_session.hpp"
#include "net/station_mask.hpp"

using guest::gptr;

namespace {

constexpr u32 STATION_COUNT = StationMask::STATION_COUNT;
constexpr u32 FIRST_LOCAL_STATION = 0;
constexpr u32 RECORD_TYPE_2B = 0x2b;
constexpr u32 RECORD_TYPE_72 = 0x72;
constexpr u32 RECORD_TYPE_6E = 0x6e;
constexpr u32 NO_VALUE = 0;
constexpr u8 STATE_5 = 5;
constexpr u8 STATE_25 = 0x25;
constexpr u8 STATE_C = 0xc;
constexpr u8 STATE_8 = 8;
constexpr u8 STATE_MASK_REMOVED = 3;
constexpr u32 SELECTED_LIMIT = 0x40;
constexpr u16 SELECTED_ALL = 0x140;
constexpr u8 SELECTED_ALL_VALUE = 0x40;
constexpr u32 MASK_COUNT = 6;
constexpr u32 FLAG_BYTE_MASK = 0xff;
constexpr u32 PAIR_FIRST_VALUE = 0xfffffffd;  // -3
constexpr u32 PAIR_SECOND_VALUE = 0xffffffff;
constexpr u32 ARRAY_ELEMENT_COUNT = 4;
constexpr u32 ARRAY_ELEMENT_SIZE = 0x32;
constexpr u32 NO_DESTRUCTOR_ADDRESS = 0x0029b888;  // the element destructor, which does nothing

inline constexpr guest::Function<0x00623e70, void(gptr<void> set, u32 station, u32 add)> refresh_station_set;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;
inline constexpr guest::Function<0x0030b6c4, u32()> main_object_idle;
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x00624008, gptr<void>(gptr<void> stamp)> construct_empty_player_stamp;
inline constexpr guest::Function<0x002f76ad, void(gptr<void> array, u32 function, u32 stride, u32 count)>
    destroy_array_elements;

// A station mask with six more bytes, as kept in the requesters.
struct MaskRecord {
    StationMask mask;
    u8 unknown_02[2];
    u8 byte_04;
    u8 unknown_05[3];
};
GUEST_SIZE(MaskRecord, 8);

// Requesters with a state at 0 and masks after 0x18.
struct MaskRequester {
    u8 state_00;
    u8 unknown_01[0x17];
    MaskRecord masks[MASK_COUNT];
    u8 unknown_48[0x140 - 0x48];
    u8 byte_140;
    u8 unknown_141;
    u8 byte_142;
};
GUEST_OFFSET(MaskRequester, masks, 0x18);
GUEST_OFFSET(MaskRequester, byte_140, 0x140);
GUEST_OFFSET(MaskRequester, byte_142, 0x142);

// Requesters that refresh a station set at a fixed offset.
struct StationSetRequester {
    u8 state_00;
    u8 unknown_01[0x1b];
    u8 set_1c[0x18];
    u8 set_34[0x10];
};
GUEST_OFFSET(StationSetRequester, set_1c, 0x1c);
GUEST_OFFSET(StationSetRequester, set_34, 0x34);

struct StateOnly {
    u8 state_00;
};

// A selection request: a state, a flag, a value and the requesting station.
struct SelectionRequest {
    u8 state_00;
    u8 flag_01;
    u8 value_02;
    u8 unknown_03;
    u8 station_04;
};
GUEST_OFFSET(SelectionRequest, flag_01, 1);
GUEST_OFFSET(SelectionRequest, station_04, 4);

// A pair of words after an empty player stamp.
struct StampWithPair {
    u8 stamp[8];
    u32 first;
    u32 second;
};
GUEST_OFFSET(StampWithPair, first, 8);

struct FlagArrayOwner {
    u8 unknown_00[0x72];
    u8 elements[ARRAY_ELEMENT_COUNT * ARRAY_ELEMENT_SIZE];
};
GUEST_OFFSET(FlagArrayOwner, elements, 0x72);

}  // namespace

// For each of four stations: 1, except where the session's byte 0x1326c has the station's bit set (then 0); the
// first is always 1.
void fill_station_flags(gptr<u8> flags) {
    for (u32 station = 0; station < STATION_COUNT; station++) {
        if (station == 0) {
            flags[0] = 1;
            continue;
        }
        u8 bits = (*net_session)->byte_1326c;
        flags[station] = (bit_for_index(station) & bits) != 0 ? 0 : 1;
    }
}
GUEST_EXPORT(0x00617098, fill_station_flags);

StampWithPair &construct_stamp_with_pair(StampWithPair &self) {
    construct_empty_player_stamp(guest::addr_of(self).cast<void>());
    self.first = PAIR_FIRST_VALUE;
    self.second = PAIR_SECOND_VALUE;
    return self;
}
GUEST_EXPORT(0x0061a7f4, construct_stamp_with_pair);

// Adds station 0 to the requester's first mask when the main object has no station; otherwise tells the others.
void request_stage_2b(MaskRequester &self) {
    if (main_object_idle() != 0) {
        self.masks[0].mask.add(FIRST_LOCAL_STATION);
        return;
    }
    PacketBuffer &buffer = (*net_session)->buffer;
    buffer.reserve_record();
    buffer.flush_record(RECORD_TYPE_2B, NO_VALUE);
}
GUEST_EXPORT(0x0061d888, request_stage_2b);

// Without a session station: refreshes the first set with the main object's station and moves to state 5.
void begin_state_5(StationSetRequester &self) {
    if ((*net_session)->station() != 0) {
        return;
    }
    refresh_station_set(guest::addr_of(self.set_1c[0]).cast<void>(), query_current_main_object(), 0);
    self.state_00 = STATE_5;
}
GUEST_EXPORT(0x0061da90, begin_state_5);

// Removes the station from each mask and resets the requester.
void remove_station_from_masks(MaskRequester &self, u32 station) {
    if (station >= STATION_COUNT) {
        return;
    }
    for (MaskRecord &record : self.masks) {
        record.mask.remove(station);
    }
    self.masks[MASK_COUNT - 1].byte_04 = STATE_MASK_REMOVED;
    self.byte_140 = 0;
    self.byte_142 = 0;
}
GUEST_EXPORT(0x0061dd74, remove_station_from_masks);

// Refreshes the second set with the session's station and moves to state 0x25.
void begin_state_25(StationSetRequester &self) {
    refresh_station_set(guest::addr_of(self.set_34[0]).cast<void>(), (*net_session)->station(), 1);
    self.state_00 = STATE_25;
}
GUEST_EXPORT(0x0061e540, begin_state_25);

// Moves to state 0xc without a session station; otherwise tells the others. Always succeeds.
bool request_stage_72(StateOnly &self) {
    if ((*net_session)->station() == 0) {
        self.state_00 = STATE_C;
        return true;
    }
    PacketBuffer &buffer = (*net_session)->buffer;
    buffer.reserve_record();
    buffer.flush_record(RECORD_TYPE_72, NO_VALUE);
    return true;
}
GUEST_EXPORT(0x0061ee10, request_stage_72);

static bool request_selection(SelectionRequest &self, u32 flag, u32 value, u16 announced) {
    self.value_02 = u8(value);
    self.flag_01 = u8(flag);
    self.station_04 = u8(query_current_main_object());
    if ((*net_session)->station() == 0) {
        self.state_00 = STATE_8;
        return true;
    }
    PacketBuffer &buffer = (*net_session)->buffer;
    buffer.reserve_record();
    guest::StackObject<u16> data;
    *data = announced;
    buffer.append(guest::addr_of(*data).cast<const u8>(), sizeof(u16));
    buffer.flush_record(RECORD_TYPE_6E, NO_VALUE);
    return true;
}

// Selects one of the first 0x40 choices (anything else is refused).
bool request_choice(SelectionRequest &self, u32 choice) {
    if (choice >= SELECTED_LIMIT) {
        return false;
    }
    return request_selection(self, 0, choice, u16(choice & FLAG_BYTE_MASK));
}
GUEST_EXPORT(0x0061f2e8, request_choice);

// Selects everything.
bool request_all(SelectionRequest &self) {
    return request_selection(self, 1, SELECTED_ALL_VALUE, SELECTED_ALL);
}
GUEST_EXPORT(0x0061f374, request_all);

// Destroys the four elements of 0x32 bytes (which have nothing to destroy).
FlagArrayOwner &destroy_flag_array_owner(FlagArrayOwner &self) {
    destroy_array_elements(guest::addr_of(self.elements[0]).cast<void>(), NO_DESTRUCTOR_ADDRESS, ARRAY_ELEMENT_SIZE,
                           ARRAY_ELEMENT_COUNT);
    return self;
}
GUEST_EXPORT(0x0061f5e0, destroy_flag_array_owner);
