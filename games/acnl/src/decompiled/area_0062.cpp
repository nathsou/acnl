// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"
#include "core/grid_rect.hpp"
#include "net/station_mask.hpp"
#include "recovered/structs.hpp"

#include <bit>

using guest::gptr;

// f_00620660: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station slot's byte (slots below 4).
namespace d_00620660 {


void clear_slot_byte_9(u32 r0, u32 slot) {
    if (slot >= 4u) {
        return;
    }
    *gptr<u8>(slot + r0 + 9u) = 0;
}

}  // namespace d_00620660
GUEST_EXPORT(0x00620660, d_00620660::clear_slot_byte_9);

// f_00620678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a station slot's byte (slots below 4).
namespace d_00620678 {


void set_slot_byte_9(u32 r0, u32 slot, u32 value) {
    if (slot < 4u) {
        *gptr<u8>(r0 + slot + 9u) = u8(value);
    }
}

}  // namespace d_00620678
GUEST_EXPORT(0x00620678, d_00620678::set_slot_byte_9);

// f_00620dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station entry: no station (0xa5), no flags.
namespace d_00620dcc {

struct __attribute__((packed)) StationEntry {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u32 word_9;
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(StationEntry, byte_0, 0x0);
GUEST_OFFSET(StationEntry, word_4, 0x4);
GUEST_OFFSET(StationEntry, byte_8, 0x8);
GUEST_OFFSET(StationEntry, word_9, 0x9);
GUEST_OFFSET(StationEntry, byte_d, 0xd);
GUEST_OFFSET(StationEntry, byte_e, 0xe);
GUEST_OFFSET(StationEntry, byte_f, 0xf);
GUEST_OFFSET(StationEntry, byte_10, 0x10);
GUEST_OFFSET(StationEntry, byte_11, 0x11);
GUEST_OFFSET(StationEntry, byte_12, 0x12);
GUEST_OFFSET(StationEntry, byte_13, 0x13);
GUEST_OFFSET(StationEntry, byte_14, 0x14);
GUEST_OFFSET(StationEntry, byte_15, 0x15);
GUEST_OFFSET(StationEntry, byte_16, 0x16);


void StationEntry__clear(gptr<StationEntry> entry) {
    entry->byte_0 = 0;
    entry->word_4 = 0;
    entry->word_9 = 0;
    entry->byte_d = 0;
    entry->byte_e = 0;
    entry->byte_f = 0;
    entry->byte_10 = 0;
    entry->byte_8 = 0xa5;
    entry->byte_11 = 0;
    entry->byte_15 = 0;
    entry->byte_12 = 0;
    entry->byte_13 = 0;
    entry->byte_14 = 0;
    entry->byte_16 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00620dcc
GUEST_EXPORT(0x00620dcc, d_00620dcc::StationEntry__clear);

// f_00620e18: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the visit role from the session: 1 when this station hosts the guest, 3 without a guest, else 8 (for stations
// below 4).
namespace d_00620e18 {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
    u8 unknown_1[0x14];  // (not used here)
    u8 byte_15;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);
GUEST_OFFSET(NetVisit, byte_15, 0x15);

struct __attribute__((packed)) Local_00620e18_r2_1 {
    u8 unknown_0[0x1e5];  // (not used here)
    u8 byte_1e5;
    u8 unknown_1e6[0x13082];  // (not used here)
    u8 byte_13268;
};
GUEST_OFFSET(Local_00620e18_r2_1, byte_1e5, 0x1e5);
GUEST_OFFSET(Local_00620e18_r2_1, byte_13268, 0x13268);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

void NetVisit__init_role(gptr<NetVisit> net_visit) {
    gptr<Local_00620e18_r2_1> r2_1 = gptr<Local_00620e18_r2_1>(*net_session);
    u32 r1_1 = r2_1->byte_1e5;
    if (r1_1 >= 4u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    net_visit->byte_15 = 0;
    u32 r2_2 = r2_1->byte_13268;
    if (r2_2 == r1_1) {
        net_visit->byte_0 = 1;
        guest::cpu()->r[1] = 1u;
        return;
    }
    if (r2_2 == 0) {
        net_visit->byte_0 = 3;
        guest::cpu()->r[1] = 3u;
        return;
    } else {
    }
    net_visit->byte_0 = 8;
    guest::cpu()->r[1] = 8u;
}

}  // namespace d_00620e18
GUEST_EXPORT(0x00620e18, d_00620e18::NetVisit__init_role);

// f_00620e68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station entry: no station (0xa5), no flags (keeping its id bytes).
namespace d_00620e68 {

struct __attribute__((packed)) StationEntry {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 unknown_9[0x4];  // (not used here)
    u8 byte_d;
    u8 byte_e;
    u8 byte_f;
    u8 byte_10;
    u8 byte_11;
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 byte_16;
};
GUEST_OFFSET(StationEntry, byte_0, 0x0);
GUEST_OFFSET(StationEntry, word_4, 0x4);
GUEST_OFFSET(StationEntry, byte_8, 0x8);
GUEST_OFFSET(StationEntry, byte_d, 0xd);
GUEST_OFFSET(StationEntry, byte_e, 0xe);
GUEST_OFFSET(StationEntry, byte_f, 0xf);
GUEST_OFFSET(StationEntry, byte_10, 0x10);
GUEST_OFFSET(StationEntry, byte_11, 0x11);
GUEST_OFFSET(StationEntry, byte_12, 0x12);
GUEST_OFFSET(StationEntry, byte_13, 0x13);
GUEST_OFFSET(StationEntry, byte_14, 0x14);
GUEST_OFFSET(StationEntry, byte_15, 0x15);
GUEST_OFFSET(StationEntry, byte_16, 0x16);


void StationEntry__clear_2(gptr<StationEntry> entry) {
    entry->byte_0 = 0;
    entry->word_4 = 0;
    entry->byte_8 = 0xa5;
    entry->byte_d = 0;
    entry->byte_e = 0;
    entry->byte_f = 0;
    entry->byte_10 = 0;
    entry->byte_11 = 0;
    entry->byte_12 = 0;
    entry->byte_13 = 0;
    entry->byte_14 = 0;
    entry->byte_15 = 0;
    entry->byte_16 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00620e68
GUEST_EXPORT(0x00620e68, d_00620e68::StationEntry__clear_2);

// f_006212f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In role 1 with a valid session: refreshes the station set and sends this station's kind state (record 0xd), or
// handles it locally as the host; then moves to role 2.
namespace d_006212f0 {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x005b4120, u32(u32)> kind_state_byte_3;
inline constexpr guest::Function<0x00621b98, u32(u32, u32, u32)> NetVisit__host_handle_state;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> NetSession__signed_value;

void NetVisit__send_station_state(gptr<NetVisit> net_visit, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r0_1 = *net_session;
    u32 r1_1 = *gptr<u8>(r0_1 + 0x54u);
    if (r1_1 == 0) {
        u32 r0_2 = NetSession__signed_value(r0_1, r1_1, r2, r3);
        r1_1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            u32 r0_4 = NetSession__station(*net_session, r1_1);
            r1_1 = guest::cpu()->r[1];
            if (net_visit->byte_0 == 1u) {
                u32 r0_7 = kind_state_byte_3(StationSet__refresh(net_visit.addr() + 0x10u, r0_4, 0u));
                if (NetSession__station(*net_session, guest::cpu()->r[1]) == 0) {
                    NetVisit__host_handle_state(net_visit.addr(), r0_4, r0_7);
                    r1_1 = guest::cpu()->r[1];
                } else {
                    *frame.at<u16>(0) = u16(u32(*frame.at<u16>(0)) >> 9 << 9 | r0_7 << 1);
                    u32 r5_1 = *net_session + 0x10u;
                    PacketBuffer__reserve_record(r5_1);
                    PacketBuffer__append(r5_1, frame.at(0).addr(), 2u);
                    PacketBuffer__flush_record(r5_1, 0xdu, 0u);
                    r1_1 = guest::cpu()->r[1];
                }
                net_visit->byte_0 = 2;
            }
        }
    }
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006212f0
GUEST_EXPORT_FRAMED(0x006212f0, d_006212f0::NetVisit__send_station_state, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006213c8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Refreshes the station's entry and slot, and in a session of more than one sends the update as a network record (kind
// 1).
namespace d_006213c8 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32)> set_slot_state;
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32)> set_slot_value;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> pack_station_state;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfdc, u32(u32)> NetSession__mode;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075e38c, u32(u32)> station_entry_id;
inline constexpr guest::Function<0x0075e858, u32(u32, u32)> NetSession__first_station_with_bit;

struct __attribute__((packed)) RefreshStationAndSendFrame {
    u32 word_0;
    u32 word_4;
    u32 station;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(RefreshStationAndSendFrame, word_0, 0x0);
GUEST_OFFSET(RefreshStationAndSendFrame, word_4, 0x4);
GUEST_OFFSET(RefreshStationAndSendFrame, station, 0x8);
GUEST_SIZE(RefreshStationAndSendFrame, 0x10);

void refresh_station_and_send(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<RefreshStationAndSendFrame> frame;  // the original's stack frame
    u32 station = NetSession__station(*net_session, r1, r2, r3);
    StationSet__refresh(r0 + 0x18u, station, 1u);
    u32 r0_4 = station_entry_id(r0);
    u32 r5_1 = NetSession__first_station_with_bit(r0 + 1u, r0_4) == 0;
    set_slot_value(r0, station, r0_4);
    set_slot_state(r0, station, r5_1);
    if (NetSession__mode(*net_session) > 1u) {
        frame->word_0 = 1;
        frame->word_4 = r5_1;
        frame->station = station;
        pack_station_state(frame.at(0xc).addr(), station, 1u, r0_4);
        u32 r4_1 = *net_session + 0x10u;
        PacketBuffer__reserve_record(r4_1);
        PacketBuffer__append(r4_1, frame.at(0xc).addr(), 2u);
        PacketBuffer__flush_record(r4_1, 1u, 4u);
    }
}

}  // namespace d_006213c8
GUEST_EXPORT_FRAMED(0x006213c8, d_006213c8::refresh_station_and_send, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_006214a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the slot's value and marks its state 1.
namespace d_006214a0 {

inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32, u32)> set_slot_state;
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32, u32)> set_slot_value;

void set_slot_value_and_state(u32 r0, u32 slot, u32 value) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    set_slot_value(r0, slot, value, guest::cpu()->r[3]);
    frame.release();
    set_slot_state(r0, slot, 1u, guest::cpu()->r[3]);
    return;
}

}  // namespace d_006214a0
GUEST_EXPORT(0x006214a0, d_006214a0::set_slot_value_and_state);

// f_006214c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the visit in role 2: refreshes the station set and sends the state records.
namespace d_006214c4 {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);

struct __attribute__((packed)) Local_006214c4_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006214c4_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_006214c4_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_006214c4_r6_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_006214c4_r6_1, word_0, 0x0);
GUEST_OFFSET(Local_006214c4_r6_1, word_4, 0x4);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x005ce6dc, u32(u32, u32, u32, u32)> err_eula_is_idle_with_byte_fac;
inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32)> set_slot_state;
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32)> set_slot_value;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> pack_station_state;
inline constexpr guest::Function<0x00626070, u32(u32)> store_word_constant_pack_0x4_00626070;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfdc, u32(u32)> NetSession__mode;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075e830, u32(u32, u32)> entry_id;
inline constexpr guest::Function<0x0075eca4, u32(u32, u32, u32)> NetStationList__send;

struct __attribute__((packed)) NetVisitUpdateRole2Frame {
    u32 word_0;
    u8 unknown_4[0xc];  // (not read or written by name)
};
GUEST_OFFSET(NetVisitUpdateRole2Frame, word_0, 0x0);
GUEST_SIZE(NetVisitUpdateRole2Frame, 0x10);

void NetVisit__update_role_2(gptr<NetVisit> net_visit, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetVisitUpdateRole2Frame> frame;  // the original's stack frame
    u32 r0_13 = 0;
    u32 r0_1 = *gptr<u8>(*net_session + 0x132b4u);
    if (r0_1 == 0) {
        u32 r0_2 = err_eula_is_idle_with_byte_fac(r0_1, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_3 = *net_session;
            r1 = *gptr<u8>(r0_3 + 0x54u);
            if (r1 == 0) {
                r1 = net_visit->byte_0;
                if (r1 == 4u) {
                    u32 r0_4 = NetSession__station(r0_3, r1);
                    u32 r0_5 = *net_session;
                    gptr<Local_006214c4_r6_1> r6_1 = gptr<Local_006214c4_r6_1>(r0_5 + 0x7864u);
                    u32 r7_1 = r0_5 + 0x10u;
                    if (NetSession__mode(r0_5) > 1u) {
                        if (r0_4 != 0) {
                            PacketBuffer__reserve_record(r7_1);
                            u32 r2_4 = r6_1->word_4;
                            if (r2_4 != 0) {
                                PacketBuffer__append(r7_1, r6_1->word_0, r2_4);
                            }
                            PacketBuffer__flush_record(r7_1, 0xeu, 0u);
                        } else {
                            u32 r0_8 = entry_id(net_visit.addr() + 1u, 0u);
                            if (r0_8 < 0xa5u) {
                                NetStationList__send(r6_1.addr(), 0u, r0_8);
                            }
                        }
                    }
                    StationSet__refresh(net_visit.addr() + 0x18u, r0_4, 1u);
                    set_slot_value(net_visit.addr(), r0_4, 0xa5u);
                    set_slot_state(net_visit.addr(), r0_4, 0u);
                    if (NetSession__mode(*net_session) > 1u) {
                        frame->word_0 = 1;
                        gptr<Local_006214c4_ea_2> ea_2 = gptr<Local_006214c4_ea_2>(frame.at(4).addr());
                        ea_2->word_0 = 0;
                        ea_2->word_4 = r0_4;
                        pack_station_state(frame.at(0xc).addr(), r0_4, 1u, 0xa5u);
                        PacketBuffer__reserve_record(r7_1);
                        PacketBuffer__append(r7_1, frame.at(0xc).addr(), 2u);
                        PacketBuffer__flush_record(r7_1, 1u, 4u);
                    }
                    store_word_constant_pack_0x4_00626070(r6_1.addr());
                    net_visit->byte_0 = 0xb;
                    return;
                }
                if (r1 == 6u) {
                    r0_13 = 7u;
                } else if (r1 == 9u) {
                    r0_13 = 0xau;
                } else {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                net_visit->byte_0 = u8(r0_13);
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006214c4
GUEST_EXPORT_FRAMED(0x006214c4, d_006214c4::NetVisit__update_role_2, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_00621684: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears station slot `slot` (fewer than 4): its entry, no value (0xa5), state 0, and its bit in the station mask.
namespace d_00621684 {

inline constexpr guest::Function<0x00621da4, u32(u32, u32, u32)> set_slot_state;
inline constexpr guest::Function<0x00621f0c, u32(u32, u32, u32)> set_slot_value;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00625c20, u32(u32, u32, u32, u32)> clear_station_slot;

void reset_station_slot(u32 table, u32 slot, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    if (slot >= 4u) {
        return;
    }
    clear_station_slot(table + 6u, slot, r2, guest::cpu()->r[3]);
    set_slot_value(table, slot, 0xa5u);
    set_slot_state(table, slot, 0u);
    frame.release();
    StationMask__remove(table + 0x21u, slot);
    return;
}

}  // namespace d_00621684
GUEST_EXPORT(0x00621684, d_00621684::reset_station_slot);

// f_006216d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the visit state records for the stations in the mask.
namespace d_006216d0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00625b64, u32(u32, u32, u32)> StationEntry__set;
inline constexpr guest::Function<0x00625b90, u32(u32, u32, u32, u32)> StationEntry__clear_3;
inline constexpr guest::Function<0x00625ba4, u32(u32, u32, u32)> set_first_table_entry;
inline constexpr guest::Function<0x00625be0, u32(u32, u32, u32, u32)> set_second_table_entry;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075ea44, u32(u32, u32)> entry_id_for_station_0;
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32, u32, u32)> table_byte_without_session_station;

struct __attribute__((packed)) NetVisitSendStateRecordsFrame {
    u32 word_0;
    u8 unknown_4[0x14];  // (not read or written by name)
};
GUEST_OFFSET(NetVisitSendStateRecordsFrame, word_0, 0x0);
GUEST_SIZE(NetVisitSendStateRecordsFrame, 0x18);

u32 NetVisit__send_state_records(u32 net_visit, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<NetVisitSendStateRecordsFrame> frame;  // the original's stack frame
    u32 r6 = 0;
    u32 r4_1 = 0;
    u32 r0_9 = 0;
    u32 r0_10 = 0;
    u32 r0_11 = 0;
    u32 station_entry = 0;
    u32 r1_3 = 0;
    frame->word_0 = r3;
    u32 r5 = net_visit;
    set_second_table_entry(net_visit + 6u, r1, 4u, r3);
    set_first_table_entry(r5 + 6u, r1, 0xa5u);
    u32 r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 i = 0u;
    do {
        u32 r6_1 = i & 0xffu;
        u32 r0_4 = table_byte_without_session_station(r5 + 6u, r6_1, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_4 - 1u < 3u) {
            set_second_table_entry(r5 + 6u, r6_1, r0_4 - 1u & 0xffu, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    u32 r7 = net_session_address;
    u32 r0_8 = NetSession__station(*gptr<u32>(r7), guest::cpu()->r[1], r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_8 == 0) {
        i = 0u;
        goto L_6217e0;
    } else {
        r6 = *gptr<u8>(r5 + 0xfu);
    }
L_621750:;
    r4_1 = *gptr<u32>(r7) + 0x10u;
    if (r6 >= 4u) {
        PacketBuffer__reserve_record(r4_1, r1, r2, r3);
        frame.release();
        return PacketBuffer__flush_record(r4_1, 4u, 4u);
    }
    r0_9 = frame.at(0).addr();
    StationEntry__clear_3(r0_9, r1, r2, r3);
    r0_10 = r5 + 6u;
    r0_11 = entry_id_for_station_0(r0_10, r6);
    station_entry = frame.at(0).addr();
    StationEntry__set(station_entry, r6, r0_11);
    PacketBuffer__reserve_record(r4_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    r1_3 = frame.at(0).addr();
    PacketBuffer__append(r4_1, r1_3, 2u);
    PacketBuffer__flush_record(r4_1, 3u, 4u);
    if (r6 == 0) {
        StationMask__add(r5 + 0x14u, 0u);
    } else {
        PacketBuffer__reserve_record(r4_1, 3u, 4u, guest::cpu()->r[3]);
        PacketBuffer__flush_record(r4_1, 5u, r6);
    }
    return frame.at(0).addr();
L_6217e0:;
    r6 = i & 0xffu;
    u32 r0_16 = table_byte_without_session_station(r5 + 6u, r6, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_16 != 0) {
        i += 1u;
        if (s32(i) < 4) {
            guest::preempt();
            goto L_6217e0;
        }
        r6 = 4u;
        guest::preempt();
        goto L_621750;
    }
    guest::preempt();
    goto L_621750;
}

}  // namespace d_006216d0
GUEST_EXPORT(0x006216d0, d_006216d0::NetVisit__send_state_records);

// f_00621b98: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Handles a station's state as the host: records it in the station mask and sends the answer records.
namespace d_00621b98 {

struct __attribute__((packed)) NetVisit {
    u8 unknown_0[0xf];  // (not used here)
    u8 byte_f;
};
GUEST_OFFSET(NetVisit, byte_f, 0xf);

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00625b64, u32(u32, u32, u32)> StationEntry__set;
inline constexpr guest::Function<0x00625b90, u32(u32)> StationEntry__clear_3;
inline constexpr guest::Function<0x00625ba4, u32(u32, u32, u32)> set_first_table_entry;
inline constexpr guest::Function<0x00625be0, u32(u32, u32, u32, u32)> set_second_table_entry;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075ea7c, u32(u32, u32, u32, u32)> table_byte_without_session_station;

struct __attribute__((packed)) NetVisitHostHandleStateFrame {
    u32 word_0;
};
GUEST_OFFSET(NetVisitHostHandleStateFrame, word_0, 0x0);
GUEST_SIZE(NetVisitHostHandleStateFrame, 0x4);

u32 NetVisit__host_handle_state(gptr<NetVisit> net_visit, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetVisitHostHandleStateFrame> frame;  // the original's stack frame
    u32 r0 = net_visit.addr();
    u32 i = 0;
    u32 r6 = 0;
    u32 r7 = 0;
    u32 r2_1 = 0;
    u32 r0_5 = 0;
    u32 r0_6 = 0;
    u32 r0_7 = 0;
    frame->word_0 = r3;
    u32 r5 = r0;
    u32 r8 = r1;
    u32 r10 = r2;
    u32 r9 = net_session_address;
    u32 r0_2 = NetSession__station(*gptr<u32>(r9), r1, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        i = 0u;
        goto L_621ca8;
    } else {
        r7 = net_visit->byte_f;
    }
L_621bc4:;
    r6 = 0u;
    if (!(r7 >= 4u)) {
        r6 = 1u;
        i = 0u;
        do {
            u32 r0_4 = table_byte_without_session_station(r5 + 6u, i & 0xffu, r2, r3);
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 < 4u && r0_4 >= r6) {
                r6 = r0_4 + 1u;
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
    }
L_621c04:;
    r2_1 = r6 & 0xffu;
    r0_5 = r5 + 6u;
    set_second_table_entry(r0_5, r8, r2_1, r3);
    r0_6 = r5 + 6u;
    r0_7 = set_first_table_entry(r0_6, r8, r10);
    if (r6 == 0) {
        StationEntry__clear_3(frame.at(0).addr());
        StationEntry__set(frame.at(0).addr(), r8, r10);
        u32 r4_1 = *gptr<u32>(r9) + 0x10u;
        PacketBuffer__reserve_record(r4_1, guest::cpu()->r[1], guest::cpu()->r[2]);
        PacketBuffer__append(r4_1, frame.at(0).addr(), 2u);
        PacketBuffer__flush_record(r4_1, 3u, 4u);
        if (r8 == 0) {
            StationMask__add(r5 + 0x14u, 0u);
        } else {
            PacketBuffer__reserve_record(r4_1, 3u, 4u);
            PacketBuffer__flush_record(r4_1, 5u, r8);
        }
        r0_7 = frame.at(0).addr();
    }
    return r0_7;
L_621ca8:;
    r7 = i & 0xffu;
    u32 r0_12 = table_byte_without_session_station(r5 + 6u, r7, r2, r3);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_12 == 0) {
        guest::preempt();
        goto L_621bc4;
    }
    i += 1u;
    if (s32(i) < 4) {
        guest::preempt();
        goto L_621ca8;
    }
    r6 = 0u;
    guest::preempt();
    goto L_621c04;
}

}  // namespace d_00621b98
GUEST_EXPORT_FRAMED(0x00621b98, d_00621b98::NetVisit__host_handle_state, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_00621da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Activates a station slot and, when the session station takes over another one, tells the other stations
// both slots' new states.
namespace d_00621da4 {

struct __attribute__((packed)) Local_00621da4_r4_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_00621da4_r4_1, byte_a, 0xa);

struct __attribute__((packed)) Local_00621da4_r4_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00621da4_r4_2, word_0, 0x0);
GUEST_OFFSET(Local_00621da4_r4_2, word_4, 0x4);

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624968, u32(u32, u32, u32, u32)> set_station_active;
inline constexpr guest::Function<0x00625870, u32(u32, u32, u32, u32)> pack_station_state;
inline constexpr guest::Function<0x00627d44, u32(u32, u32, u32)> PacketBuffer__append;
inline constexpr guest::Function<0x00627f74, u32(u32, u32, u32, u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32)> NetSession__station;
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> NetSession__has_station_bit;
inline constexpr guest::Function<0x0075e830, u32(u32, u32)> entry_id;
inline constexpr guest::Function<0x0075e8c0, u32(u32, u32)> station_of_active_entry;

struct __attribute__((packed)) SetSlotStateFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(SetSlotStateFrame, word_0, 0x0);
GUEST_OFFSET(SetSlotStateFrame, word_4, 0x4);
GUEST_OFFSET(SetSlotStateFrame, word_8, 0x8);
GUEST_SIZE(SetSlotStateFrame, 0x14);

u32 set_slot_state(u32 r0, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<SetSlotStateFrame> frame;  // the original's stack frame
    u32 r5_1 = r0;
    set_station_active(r0 + 1u, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    u32 r9 = net_session_address;
    r0 = *gptr<u32>(r9);
    gptr<Local_00621da4_r4_1> r4_1 = gptr<Local_00621da4_r4_1>(r0 + 0xa4u);
    u32 r6 = *gptr<u8>(r0 + 0xadu);
    if (r6 < 4u) {
        r1 = r4_1->byte_a;
        if (r1 == 0) {
            u32 r0_2 = NetSession__station(r0, r1);
            u32 r7 = r0_2;
            r0 = station_of_active_entry(r5_1 + 1u, entry_id(r5_1 + 1u, r0_2));
            r1 = guest::cpu()->r[1];
            if (r0 < 4u && r0 != r6) {
                if (r0 == r7) {
                    r4_1->byte_a = 1;
                    frame->word_4 = 0;
                    frame->word_8 = 4;
                    frame->word_0 = 1;
                    pack_station_state(frame.at(0xc).addr(), r6, 1u, 0xa5u);
                    gptr<Local_00621da4_r4_2> r4_2 = gptr<Local_00621da4_r4_2>(frame.at(4).addr());
                    frame->word_0 = 1;
                    r4_2->word_0 = 1;
                    r4_2->word_4 = r6;
                    r0 = pack_station_state(frame.at(0x10).addr(), r7, 0u, 0xa5u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    u32 i = 0u;
                    do {
                        u32 r5_2 = i & 0xffu;
                        if (r5_2 != r6 && r5_2 != r7) {
                            r0 = NetSession__has_station_bit(*gptr<u32>(r9), r5_2, r2, r3);
                            r1 = guest::cpu()->r[1];
                            r2 = guest::cpu()->r[2];
                            r3 = guest::cpu()->r[3];
                            if (r0 != 0) {
                                u32 r8_1 = *gptr<u32>(r9) + 0x10u;
                                PacketBuffer__reserve_record(r8_1, r1, r2, r3);
                                PacketBuffer__append(r8_1, frame.at(0xc).addr(), 2u);
                                PacketBuffer__flush_record(r8_1, 1u, r5_2);
                                PacketBuffer__reserve_record(r8_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                                PacketBuffer__append(r8_1, frame.at(0x10).addr(), 2u);
                                r0 = PacketBuffer__flush_record(r8_1, 1u, r5_2);
                                r1 = guest::cpu()->r[1];
                                r2 = guest::cpu()->r[2];
                                r3 = guest::cpu()->r[3];
                            }
                        }
                        i += 1u;
                        guest::preempt();
                    } while (s32(i) < 4);
                } else {
                    r0 = 2u;
                    r4_1->byte_a = u8(r0);
                }
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0;
}

}  // namespace d_00621da4
GUEST_EXPORT_FRAMED(0x00621da4, d_00621da4::set_slot_state, 0x43f0);  // pushes {i, r5, r6, r7, r8, r9, lr} first, as the original

// f_00621f0c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets a station slot's value and its entry id, offline or from the net session.
namespace d_00621f0c {

struct __attribute__((packed)) SetSlotValueArg0 {
    u8 unknown_0[0x20];  // (not used here)
    u8 byte_20;
};
GUEST_OFFSET(SetSlotValueArg0, byte_20, 0x20);

struct __attribute__((packed)) Local_00621f0c_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
};
GUEST_OFFSET(Local_00621f0c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_00621f0c_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_00621f0c_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_00621f0c_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_00621f0c_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_00621f0c_ea_1, word_14, 0x14);
GUEST_OFFSET(Local_00621f0c_ea_1, word_18, 0x18);
GUEST_OFFSET(Local_00621f0c_ea_1, word_1c, 0x1c);
GUEST_OFFSET(Local_00621f0c_ea_1, word_20, 0x20);
GUEST_OFFSET(Local_00621f0c_ea_1, word_24, 0x24);

struct __attribute__((packed)) Local_00621f0c_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u8 unknown_20[0x4];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(Local_00621f0c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00621f0c_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_00621f0c_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_00621f0c_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_00621f0c_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_00621f0c_ea_2, word_14, 0x14);
GUEST_OFFSET(Local_00621f0c_ea_2, word_18, 0x18);
GUEST_OFFSET(Local_00621f0c_ea_2, word_1c, 0x1c);
GUEST_OFFSET(Local_00621f0c_ea_2, word_24, 0x24);

struct __attribute__((packed)) Local_00621f0c_r6_1 {
    u8 unknown_0[0xa];  // (not used here)
    u8 byte_a;
};
GUEST_OFFSET(Local_00621f0c_r6_1, byte_a, 0xa);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00624954, u32(u32, u32, u32)> set_station_entry_id;
inline constexpr guest::Function<0x0075e830, u32(u32, u32)> entry_id;

u32 set_slot_value(gptr<SetSlotValueArg0> arg0, u32 r1, u32 r2) {
    guest::StackFrame frame(0x28);  // the original's stack frame
    u32 r4 = guest::cpu()->r[4];
    u32 r5 = guest::cpu()->r[5];
    u32 r6 = guest::cpu()->r[6];
    u32 r7 = guest::cpu()->r[7];
    u32 r8 = guest::cpu()->r[8];
    u32 r9 = guest::cpu()->r[9];
    u32 r10 = guest::cpu()->r[10];
    u32 r11 = guest::cpu()->r[11];
    u32 r12 = guest::cpu()->r[12];
    u32 r14 = guest::cpu()->r[14];
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return arg0.addr();
    }
    gptr<Local_00621f0c_ea_1> ea_1 = gptr<Local_00621f0c_ea_1>(frame.at(0).addr());
    ea_1->word_0 = r4;
    ea_1->word_4 = r5;
    ea_1->word_8 = r6;
    ea_1->word_c = r7;
    ea_1->word_10 = r8;
    ea_1->word_14 = r9;
    ea_1->word_18 = r10;
    ea_1->word_1c = r11;
    ea_1->word_20 = r12;
    ea_1->word_24 = r14;
    u32 r7_1 = 0u;
    u32 r8_1 = arg0->byte_20;
    u32 r10_1 = 0xa5u;
    u32 r0_1 = *net_session;
    u32 zf_1 = r8_1 == r1;
    gptr<Local_00621f0c_r6_1> r6_1 = gptr<Local_00621f0c_r6_1>(r0_1 + 0xa4u);
    u32 r9_1 = *gptr<u8>(r0_1 + 0xacu);
    if (!zf_1) {
        zf_1 = r9_1 == r1;
    }
    if (zf_1) {
        r7_1 = 1u;
        r10_1 = entry_id(arg0.addr() + 1u, r1);
    }
    u32 r0_5 = set_station_entry_id(arg0.addr() + 1u, r1, r2);
    if (r7_1 != 0) {
        r0_5 = entry_id(arg0.addr() + 1u, r1);
        if (r0_5 != r10_1) {
            if (r8_1 == r1) {
                r0_5 = 4u;
                arg0->byte_20 = u8(r0_5);
            }
            if (r9_1 == r1) {
                r0_5 = r6_1->byte_a;
                if (r0_5 != 2u) {
                    r0_5 = 2u;
                    r6_1->byte_a = u8(r0_5);
                }
            }
        }
    }
    gptr<Local_00621f0c_ea_2> ea_2 = gptr<Local_00621f0c_ea_2>(frame.at(0).addr());
    u32 r4_1 = ea_2->word_0;
    u32 r5_1 = ea_2->word_4;
    u32 r6_2 = ea_2->word_8;
    u32 r7_2 = ea_2->word_c;
    u32 r8_2 = ea_2->word_10;
    u32 r9_2 = ea_2->word_14;
    u32 r10_2 = ea_2->word_18;
    u32 r11_1 = ea_2->word_1c;
    guest::cpu()->r[4] = r4_1;
    guest::cpu()->r[5] = r5_1;
    guest::cpu()->r[6] = r6_2;
    guest::cpu()->r[7] = r7_2;
    guest::cpu()->r[8] = r8_2;
    guest::cpu()->r[9] = r9_2;
    guest::cpu()->r[10] = r10_2;
    guest::cpu()->r[11] = r11_1;
    return r0_5;
}

}  // namespace d_00621f0c
GUEST_EXPORT(0x00621f0c, d_00621f0c::set_slot_value);

// f_006220f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a net confirmation state machine: no station, its three flag pairs cleared.
namespace d_006220f8 {

struct __attribute__((packed)) netgame__ConfirmMachine {
    u8 byte_0;
};
GUEST_OFFSET(netgame__ConfirmMachine, byte_0, 0x0);

inline constexpr u32 vtable_netgame__ConfirmMachine_rec = 0x0090ac18u;
inline constexpr guest::Function<0x00624990, u32(u32)> store_byte_constant_pack_0x4_00624990;
inline constexpr guest::Function<0x00624c90, u32(u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00625b90, u32(u32)> StationEntry__clear_3;
inline constexpr guest::Function<0x00625c7c, u32(u32)> clear_station_slots;

u32 netgame__ConfirmMachine__ConfirmMachine_006220f8(gptr<netgame__ConfirmMachine> confirm_machine) {
    u32 r1 = 0;
    confirm_machine->byte_0 = 0;
    u32 r0_1 = confirm_machine.addr() + 1u;
    store_byte_constant_pack_0x4_00624990(r0_1);
    u32 station_entry = clear_station_slots(r0_1 + 5u) + 8u;
    StationEntry__clear_3(station_entry);
    u32 r0_5 = station_entry + 6u;
    clear_flag_pair_b(r0_5, r1);
    *gptr<u32>(r0_5 - 4u) = vtable_netgame__ConfirmMachine_rec;
    u32 r0_6 = r0_5 + 8u;
    clear_flag_pair_b(r0_6, r1);
    u32 ea_1 = r0_6 - 4u;
    *gptr<u32>(ea_1) = vtable_netgame__ConfirmMachine_rec;
    u32 r0_7 = ea_1 - 0x18u;
    *gptr<u8>(r0_7 + 0x20u) = 4;
    u32 r0_8 = r0_7 + 0x21u;
    clear_flag_pair_b(r0_8, 4u);
    u32 r0_9 = r0_8 - 0x21u;
    *gptr<u8>(r0_9 + 0x23u) = 0;
    return r0_9;
}

}  // namespace d_006220f8
GUEST_EXPORT_FRAMED(0x006220f8, d_006220f8::netgame__ConfirmMachine__ConfirmMachine_006220f8, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00622158: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns at once.
namespace d_00622158 {


void do_nothing_00622158(u32 r0) {
}

}  // namespace d_00622158
GUEST_EXPORT_FRAMED(0x00622158, d_00622158::do_nothing_00622158, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062217c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the current player's short id (or clears it), resets the peer table (006221e4) and marks it ready (+0x42aa).
namespace d_0062217c {

struct __attribute__((packed)) NetPeerTable {
    u8 unknown_0[0x38e0];  // (not used here)
    u16 half_38e0;
    u16 half_38e2;
};
GUEST_OFFSET(NetPeerTable, half_38e0, 0x38e0);
GUEST_OFFSET(NetPeerTable, half_38e2, 0x38e2);

struct __attribute__((packed)) Local_0062217c_r1_3 {
    u8 unknown_0[0xa6];  // (not used here)
    u16 half_a6;
    u8 unknown_a8[0x14];  // (not used here)
    u16 half_bc;
};
GUEST_OFFSET(Local_0062217c_r1_3, half_a6, 0xa6);
GUEST_OFFSET(Local_0062217c_r1_3, half_bc, 0xbc);

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline constexpr guest::Function<0x001aa88c, u32(u32, u32, u32, u32)> FriendList__refresh_keys;
inline constexpr guest::Function<0x002fb94c, u32(u32)> get_current_player;
inline constexpr guest::Function<0x006221e4, u32(u32, u32, u32)> NetChat__update;
inline constexpr guest::Function<0x006256dc, u32(u32, u32)> ShortId__clear_006256dc;

void NetPeerTable__init_own_id(gptr<NetPeerTable> net_peer_table, u32 r1, u32 r2) {
    u32 r1_2 = 0;
    u32 r2_3 = 0;
    u32 player = get_current_player(FriendList__refresh_keys(*friend_list_instance, r1, r2, guest::cpu()->r[3]));
    if (player == 0) {
        ShortId__clear_006256dc(net_peer_table.addr() + 0x38e0u, player);
        r1_2 = guest::cpu()->r[1];
        r2_3 = guest::cpu()->r[2];
    } else {
        gptr<Local_0062217c_r1_3> r1_3 = gptr<Local_0062217c_r1_3>(player + 0x5500u);
        r2_3 = r1_3->half_a6;
        r1_2 = r1_3->half_bc;
        net_peer_table->half_38e0 = u16(r2_3);
        net_peer_table->half_38e2 = u16(r1_2);
    }
    NetChat__update(net_peer_table.addr(), r1_2, r2_3);
    *gptr<u8>(net_peer_table.addr() + 0x42aau) = 1;
    guest::cpu()->r[1] = 0x42aau;
}

}  // namespace d_0062217c
GUEST_EXPORT_FRAMED(0x0062217c, d_0062217c::NetPeerTable__init_own_id, 0x4010);  // pushes {r4, lr} first, as the original

// f_006223f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the table is ready and the link allows it: sends the pending request (0050d3dc, kind and value kept once); true
// when done or not ready.
namespace d_006223f0 {

struct __attribute__((packed)) NetPeerTable {
    u8 unknown_0[0x42a4];  // (not used here)
    u8 byte_42a4;
    u8 byte_42a5;
    u8 unknown_42a6[0x4];  // (not used here)
    u8 byte_42aa;
    u8 byte_42ab;
};
GUEST_OFFSET(NetPeerTable, byte_42a4, 0x42a4);
GUEST_OFFSET(NetPeerTable, byte_42a5, 0x42a5);
GUEST_OFFSET(NetPeerTable, byte_42aa, 0x42aa);
GUEST_OFFSET(NetPeerTable, byte_42ab, 0x42ab);

struct __attribute__((packed)) Local_006223f0_r4_1 {
    u8 unknown_0[0x2a4];  // (not used here)
    u32 word_2a4;
    u8 unknown_2a8[0x3];  // (not used here)
    u8 byte_2ab;
};
GUEST_OFFSET(Local_006223f0_r4_1, word_2a4, 0x2a4);
GUEST_OFFSET(Local_006223f0_r4_1, byte_2ab, 0x2ab);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> RequestPool__request_store;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

u32 NetPeerTable__try_send(gptr<NetPeerTable> net_peer_table, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = 0;
    u32 r6_1 = net_peer_table.addr() + 0x4200u;
    u32 r7_1 = r1;
    if (net_peer_table->byte_42aa == 0) {
        r0_1 = 1u;
    } else {
        u32 r0_2 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        gptr<Local_006223f0_r4_1> r4_1 = gptr<Local_006223f0_r4_1>(net_peer_table.addr() + 0x4000u);
        if (r0_2 != 0) {
            r0_1 = 0u;
            net_peer_table->byte_42ab = 0;
        } else {
            if (net_peer_table->byte_42ab == 0) {
                net_peer_table->byte_42a4 = u8(r7_1);
                net_peer_table->byte_42ab = 1;
                net_peer_table->byte_42a5 = u8(r2);
            }
            r0_1 = RequestPool__request_store(request_pool_address, 1u, r4_1->word_2a4, net_peer_table.addr() + 0x40a4u);
            r1 = guest::cpu()->r[1];
            if (r0_1 != 0) {
                r4_1->byte_2ab = 0;
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
}

}  // namespace d_006223f0
GUEST_EXPORT_FRAMED(0x006223f0, d_006223f0::NetPeerTable__try_send, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00622478: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the player of `slot` has a gated record that matches the peer's address: resets the peer table.
namespace d_00622478 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x001df2f8, u32(u32)> data_loader_gated_value;
inline constexpr guest::Function<0x002be5fc, u32(u32, u32, u32)> PlayerRecords32__find;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> player_of_slot_index_unreserved;
inline constexpr guest::Function<0x006221e4, u32(u32)> NetChat__update;
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32)> NetPlayers__slot_identity_is_set;

struct __attribute__((packed)) NetPeerTableRefreshForSlotFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(NetPeerTableRefreshForSlotFrame, word_4, 0x4);
GUEST_OFFSET(NetPeerTableRefreshForSlotFrame, word_8, 0x8);
GUEST_SIZE(NetPeerTableRefreshForSlotFrame, 0xc);

void NetPeerTable__refresh_for_slot(u32 net_peer_table, u32 r1, u32 r2) {
    guest::StackFrameOf<NetPeerTableRefreshForSlotFrame> frame;  // the original's stack frame
    u32 r0_1 = player_of_slot_index_unreserved(r1, r1, r2, guest::cpu()->r[3]);
    if (r0_1 != 0) {
        u32 r0_3 = data_loader_gated_value(data_block_71900(r0_1));
        if (r0_3 != 0) {
            frame->word_4 = 0;
            frame->word_8 = 0;
            NetPlayers__slot_identity_is_set(*net_session + 0xb0u, frame.at(0).addr(), r1);
            if (PlayerRecords32__find(r0_3, r0_1, frame.at(0).addr()) != 0) {
                NetChat__update(net_peer_table);
            }
        }
    }
}

}  // namespace d_00622478
GUEST_EXPORT_FRAMED(0x00622478, d_00622478::NetPeerTable__refresh_for_slot, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_00622864: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the peer table: sends the pending requests and refreshes the peers' records.
namespace d_00622864 {

struct __attribute__((packed)) NetPeerTable {
    u8 unknown_0[0x42a8];  // (not used here)
    u8 byte_42a8;
};
GUEST_OFFSET(NetPeerTable, byte_42a8, 0x42a8);

struct __attribute__((packed)) Local_00622864_r6_1 {
    u8 unknown_0[0xaa];  // (not used here)
    u8 byte_aa;
    u8 byte_ab;
};
GUEST_OFFSET(Local_00622864_r6_1, byte_aa, 0xaa);
GUEST_OFFSET(Local_00622864_r6_1, byte_ab, 0xab);

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x001df2f8, u32(u32)> data_loader_gated_value;
inline constexpr guest::Function<0x002be4a4, u32(u32, u32, u32)> PlayerRecords32__write_for_player;
inline constexpr guest::Function<0x002fb918, u32(u32, u32)> data_block_71900;
inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> RequestPool__request_store;
inline constexpr guest::Function<0x005c4e5c, u32(u32, u32, u32, u32)> player_of_slot_index_unreserved;
inline constexpr guest::Function<0x006221e4, u32(u32)> NetChat__update;
inline constexpr guest::Function<0x0062a698, u32(u32, u32)> NetPlayers__entry;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> PartMask__allows;
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32)> NetPlayers__slot_identity_is_set;

struct __attribute__((packed)) NetPeerTableUpdateFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NetPeerTableUpdateFrame, word_4, 0x4);
GUEST_OFFSET(NetPeerTableUpdateFrame, word_8, 0x8);
GUEST_SIZE(NetPeerTableUpdateFrame, 0x10);

u32 NetPeerTable__update(gptr<NetPeerTable> net_peer_table, u32 r1_unused, u32 r2, u32 r3) {
    guest::StackFrameOf<NetPeerTableUpdateFrame> frame;  // the original's stack frame
    u32 r0 = net_peer_table.addr();
    u32 r0_7 = 0;
    u32 r1_5 = 0;
    u32 r0_14 = 0;
    u32 r4_1 = r0 + 0x4000u;
    u32 r1_1 = net_peer_table->byte_42a8;
    u32 r0_1 = *net_session;
    if (r1_1 != 1u) {
        if (r1_1 == 2u) {
            u32 r0_2 = *gptr<u8>(r4_1 + 0x2a9u);
            u32 r0_3 = player_of_slot_index_unreserved(r0_2, r1_1, r2, r3);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                u32 player_records32 = data_loader_gated_value(data_block_71900(r0_3, r1_1));
                r1_1 = guest::cpu()->r[1];
                if (player_records32 != 0) {
                    frame->word_4 = 0;
                    frame->word_8 = 0;
                    u32 r2_3 = *gptr<u8>(r4_1 + 0x2a9u);
                    NetPlayers__slot_identity_is_set(*net_session + 0xb0u, frame.at(0).addr(), r2_3);
                    PlayerRecords32__write_for_player(player_records32, r0_3, frame.at(0).addr());
                    NetChat__update(r0);
                    r1_1 = guest::cpu()->r[1];
                }
            }
            r0_7 = 3u;
            *gptr<u8>(r4_1 + 0x2a8u) = u8(r0_7);
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        if (r1_1 != 3u) {
            *gptr<u8>(r4_1 + 0x2a8u) = 0;
            guest::cpu()->r[1] = r1_1;
            return 1u;
        }
        u32 r0_9 = PartMask__allows(r0_1 + 0x7874u, 3u, r2, r3);
        r1_1 = guest::cpu()->r[1];
        u32 r2_6 = guest::cpu()->r[2];
        u32 r3_6 = guest::cpu()->r[3];
        gptr<Local_00622864_r6_1> r6_1 = gptr<Local_00622864_r6_1>(r0 + 0x4200u);
        if (r6_1->byte_aa != 0) {
            u32 r0_10 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1_1, r2_6, r3_6);
            r1_1 = guest::cpu()->r[1];
            if (r0_10 != 0) {
                *gptr<u8>(r4_1 + 0x2abu) = 0;
            } else {
                if (r6_1->byte_ab == 0) {
                    *gptr<u8>(r4_1 + 0x2a4u) = u8(r0_9);
                    *gptr<u8>(r4_1 + 0x2abu) = 1;
                    *gptr<u8>(r4_1 + 0x2a5u) = 0;
                }
                r2_6 = *gptr<u32>(r4_1 + 0x2a4u);
                r3_6 = r0 + 0x40a4u;
                u32 r0_11 = RequestPool__request_store(request_pool_address, 1u, r2_6, r3_6);
                r1_1 = guest::cpu()->r[1];
                if (r0_11 != 0) {
                    *gptr<u8>(r4_1 + 0x2abu) = 0;
                    *gptr<u8>(r4_1 + 0x2a8u) = 0;
                    return 1u;
                }
            }
            u32 r0_12 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1_1, r2_6, r3_6);
            r1_1 = guest::cpu()->r[1];
            if (r0_12 == 0) {
                goto L_6229c8;
            }
        }
        *gptr<u8>(r4_1 + 0x2a8u) = 0;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    r1_5 = *gptr<u8>(r4_1 + 0x2a9u);
    r0_14 = NetPlayers__entry(r0_1 + 0xb0u, r1_5);
    r1_1 = guest::cpu()->r[1];
    if (r0_14 != 0) {
        r0_7 = 2u;
    } else {
        goto L_6229c8;
    }
    *gptr<u8>(r4_1 + 0x2a8u) = u8(r0_7);
    return 0u;
L_6229c8:;
    if (*gptr<u8>(r4_1 + 0x2a8u) == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_00622864
GUEST_EXPORT_FRAMED(0x00622864, d_00622864::NetPeerTable__update, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00622ab0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In state 3 (+0x42a8): tries to send the pending request and clears the state when it is done or the link is gone;
// true when idle.
namespace d_00622ab0 {

struct __attribute__((packed)) NetPeerTable {
    u8 unknown_0[0x42a4];  // (not used here)
    u8 byte_42a4;
    u8 byte_42a5;
    u8 unknown_42a6[0x2];  // (not used here)
    u8 byte_42a8;
    u8 unknown_42a9[0x1];  // (not used here)
    u8 byte_42aa;
    u8 byte_42ab;
};
GUEST_OFFSET(NetPeerTable, byte_42a4, 0x42a4);
GUEST_OFFSET(NetPeerTable, byte_42a5, 0x42a5);
GUEST_OFFSET(NetPeerTable, byte_42a8, 0x42a8);
GUEST_OFFSET(NetPeerTable, byte_42aa, 0x42aa);
GUEST_OFFSET(NetPeerTable, byte_42ab, 0x42ab);

struct __attribute__((packed)) Local_00622ab0_r4_1 {
    u8 unknown_0[0x2a4];  // (not used here)
    u32 word_2a4;
    u8 byte_2a8;
    u8 unknown_2a9[0x2];  // (not used here)
    u8 byte_2ab;
};
GUEST_OFFSET(Local_00622ab0_r4_1, word_2a4, 0x2a4);
GUEST_OFFSET(Local_00622ab0_r4_1, byte_2a8, 0x2a8);
GUEST_OFFSET(Local_00622ab0_r4_1, byte_2ab, 0x2ab);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0050d3dc, u32(u32, u32, u32, u32)> RequestPool__request_store;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> PartMask__allows;

u32 NetPeerTable__poll_state_3(gptr<NetPeerTable> net_peer_table, u32 r1_unused, u32 r2, u32 r3) {
    u32 r0 = net_peer_table.addr();
    gptr<Local_00622ab0_r4_1> r4_1 = gptr<Local_00622ab0_r4_1>(r0 + 0x4000u);
    u32 r1_1 = net_peer_table->byte_42a8;
    if (r1_1 == 3u) {
        u32 r0_2 = PartMask__allows(*net_session + 0x7874u, 3u, r2, r3);
        r1_1 = guest::cpu()->r[1];
        u32 r2_1 = guest::cpu()->r[2];
        u32 r3_1 = guest::cpu()->r[3];
        u32 r7_1 = r0 + 0x4200u;
        if (net_peer_table->byte_42aa != 0) {
            u32 r0_3 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1_1, r2_1, r3_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_3 != 0) {
                net_peer_table->byte_42ab = 0;
            } else {
                if (net_peer_table->byte_42ab == 0) {
                    net_peer_table->byte_42a4 = u8(r0_2);
                    net_peer_table->byte_42ab = 1;
                    net_peer_table->byte_42a5 = 0;
                }
                r2_1 = r4_1->word_2a4;
                r3_1 = r0 + 0x40a4u;
                u32 r0_4 = RequestPool__request_store(request_pool_address, 1u, r2_1, r3_1);
                r1_1 = guest::cpu()->r[1];
                if (r0_4 != 0) {
                    r4_1->byte_2ab = 0;
                    r4_1->byte_2a8 = 0;
                    return 1u;
                }
            }
            u32 r0_5 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1_1, r2_1, r3_1);
            r1_1 = guest::cpu()->r[1];
            if (r0_5 == 0) {
                goto L_622b6c;
            }
        }
        r4_1->byte_2a8 = 0;
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
L_622b6c:;
    if (r4_1->byte_2a8 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    guest::cpu()->r[1] = r1_1;
    return 1u;
}

}  // namespace d_00622ab0
GUEST_EXPORT_FRAMED(0x00622ab0, d_00622ab0::NetPeerTable__poll_state_3, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_00622be8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the address and id pair of peer `index` (below 32, under the lock), or a cleared id when there is none.
namespace d_00622be8 {

struct __attribute__((packed)) NetPeerTablePeerAddressArg1 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(NetPeerTablePeerAddressArg1, word_0, 0x0);
GUEST_OFFSET(NetPeerTablePeerAddressArg1, half_4, 0x4);
GUEST_OFFSET(NetPeerTablePeerAddressArg1, half_6, 0x6);

struct __attribute__((packed)) Local_00622be8_r0_2 {
    u16 half_0;
    u16 half_2;
};
GUEST_OFFSET(Local_00622be8_r0_2, half_0, 0x0);
GUEST_OFFSET(Local_00622be8_r0_2, half_2, 0x2);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x006256d0, u32(u32, u32)> NpcEntryRef__clear;

void NetPeerTable__peer_address(u32 net_peer_table, gptr<NetPeerTablePeerAddressArg1> arg1, u32 r2) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r5_1 = r1;
    if (r2 < 0x20u) {
        RecursiveLock__lock(net_peer_table, r1, r2, guest::cpu()->r[3]);
        u32 r0_1 = net_peer_table + (r2 << 2);
        r1 = *gptr<u32>(r0_1 + 0x4024u);
        if (r1 != 0) {
            gptr<Local_00622be8_r0_2> r0_2 = gptr<Local_00622be8_r0_2>(r0_1 + 0x3860u);
            arg1->word_0 = *gptr<u32>(r1);
            arg1->half_4 = r0_2->half_0;
            arg1->half_6 = r0_2->half_2;
            frame.release();
            RecursiveLock__unlock(net_peer_table, r1);
            return;
        }
        RecursiveLock__unlock(net_peer_table, r1);
    }
    frame.release();
    NpcEntryRef__clear(r5_1, r1);
    return;
}

}  // namespace d_00622be8
GUEST_EXPORT(0x00622be8, d_00622be8::NetPeerTable__peer_address);

// f_00622c5c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Returns every peer entry to the free list and clears the 32 peer slots and the ready flags.
namespace d_00622c5c {

struct __attribute__((packed)) NetPeerTable {
    u8 unknown_0[0xc];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(NetPeerTable, word_c, 0xc);

struct __attribute__((packed)) Local_00622c5c_r1_1 {
    u8 unknown_0[0x2aa];  // (not used here)
    u8 byte_2aa;
    u8 byte_2ab;
};
GUEST_OFFSET(Local_00622c5c_r1_1, byte_2aa, 0x2aa);
GUEST_OFFSET(Local_00622c5c_r1_1, byte_2ab, 0x2ab);

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

void NetPeerTable__clear(gptr<NetPeerTable> net_peer_table) {
    u32 r0 = net_peer_table.addr();
    u32 r4 = r0;
    u32 i = 0u;
    if (s32(net_peer_table->word_c) > 0) {
        do {
            u32 r6_1 = gptr<u32>(*gptr<u32>(r4 + 0x14u))[i];
            destroy_array_elements(r6_1 + 4u, 0x62573cu, 4u, 0x20u);
            i += 1u;
            *gptr<u32>(r6_1) = *gptr<u32>(r4 + 0x18u);
            *gptr<u32>(r4 + 0x18u) = r6_1;
            guest::preempt();
        } while (s32(*gptr<u32>(r4 + 0xcu)) > s32(i));
    }
    r0 = 0u;
    u32 r2 = r0;
    u32 r1 = r0;
    *gptr<u32>(r4 + 0xcu) = r0;
    do {
        u32 r2_1 = r2 + 1u;
        r1 += 2u;
        *gptr<u32>((r4 + (r2 << 2)) + 0x4024u) = r0;
        r2 = r2_1 + 1u;
        *gptr<u32>((r4 + (r2_1 << 2) + 0x4000u) + 0x24u) = r0;
        guest::preempt();
    } while (s32(r1) < 0x20);
    gptr<Local_00622c5c_r1_1> r1_1 = gptr<Local_00622c5c_r1_1>(r4 + 0x4000u);
    r1_1->byte_2ab = u8(r0);
    r1_1->byte_2aa = u8(r0);
    guest::cpu()->r[1] = r1_1.addr();
}

}  // namespace d_00622c5c
GUEST_EXPORT_FRAMED(0x00622c5c, d_00622c5c::NetPeerTable__clear, 0x4070);  // pushes {r4, i, r6, lr} first, as the original

// f_00622d04: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the peer table: its lock, entries, own id and free list.
namespace d_00622d04 {

struct __attribute__((packed)) NetPeerTable {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
};
GUEST_OFFSET(NetPeerTable, word_0, 0x0);
GUEST_OFFSET(NetPeerTable, word_c, 0xc);
GUEST_OFFSET(NetPeerTable, word_10, 0x10);
GUEST_OFFSET(NetPeerTable, word_14, 0x14);
GUEST_OFFSET(NetPeerTable, word_18, 0x18);
GUEST_OFFSET(NetPeerTable, word_1c, 0x1c);

struct __attribute__((packed)) Local_00622d04_r0_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00622d04_r0_10, word_0, 0x0);
GUEST_OFFSET(Local_00622d04_r0_10, word_4, 0x4);

inline constexpr guest::Function<0x0012f154, u32(u32, u32, u32, u32)> RecursiveLock__initialize;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003052f0, u32(u32, u32, u32, u32)> clear_identity_with_flags;
inline constexpr guest::Function<0x00540c1c, u32(u32, u32, u32, u32)> init_array_header;
inline constexpr guest::Function<0x00624d48, u32(u32, u32, u32)> construct_entry_table;
inline constexpr guest::Function<0x00625720, u32(u32)> ShortId__clear_00625720;

u32 NetPeerTable__construct(gptr<NetPeerTable> net_peer_table, u32 r1, u32 r2, u32 r3) {
    u32 lock = net_peer_table.addr();
    u32 r5 = 0;
    u32 res_2 = 0;
    u32 r7 = 0u;
    net_peer_table->word_0 = r7;
    RecursiveLock__initialize(lock, r1, r2, r3);
    net_peer_table->word_c = r7;
    u32 header = lock + 0xcu;
    u32 res_1 = header + 0x14u;
    r2 = res_1;
    net_peer_table->word_10 = r7;
    net_peer_table->word_14 = r7;
    net_peer_table->word_18 = r7;
    r1 = 0x64u;
    net_peer_table->word_1c = r7;
    if (res_1 != 0) {
        u32 r12 = 0x23u;
        r3 = 0u;
        r5 = 0x63u;
        net_peer_table->word_18 = r2;
        do {
            res_2 = r5 - 1u;
            r5 = res_2;
            *gptr<u32>(r2 + (r3 << 2)) = r2 + (r12 + r3 << 2);
            r3 += r12;
            guest::preempt();
        } while (res_2 != 0);
        u32 r3_2 = r12 * (r1 - 1u);
        *gptr<u32>(r2 + (r3_2 << 2)) = r7;
        *gptr<u32>(header + 0x10u) = r2;
        init_array_header(header, r1, r2 + r1 * 0x8cu, r3_2);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
    }
    u32 r0_5 = ShortId__clear_00625720(construct_entry_table(header + 0x3854u, r1, r2) + 0x80u) + 4u;
    u32 r0_8 = for_each_element(for_each_element(r0_5, 0x51b100u, 0xcu, 0x20u) + 0x180u, 0x1b4b7cu, 0x2eu, 0x20u);
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    r5 = r0_8 - 0x3a64u;
    u32 r6 = r5 + 0x4000u;
    *gptr<u32>(r0_8 + 0x840u) = r7;
    *gptr<u8>(r6 + 0x2a8u) = u8(r7);
    *gptr<u8>(r6 + 0x2a9u) = 4;
    *gptr<u8>(r6 + 0x2aau) = u8(r7);
    header = 0u;
    *gptr<u8>(r6 + 0x2abu) = u8(r7);
    do {
        u32 r0_9 = r5 + (header + (header << 1) << 2);
        u32 r1_2 = r0_9 + 0x38e4u;
        gptr<Local_00622d04_r0_10> r0_10 = gptr<Local_00622d04_r0_10>(r0_9 + 0x38e8u);
        *gptr<u32>(r1_2) = r7;
        r0_10->word_0 = r7;
        r0_10->word_4 = r7;
        clear_identity_with_flags(r5 + ((header << 3) - header + (header << 4) << 1) + 0x3a64u, r1_2, r2, r3);
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_12 = r5 + (header << 2) + 0x4000u;
        header += 1u;
        *gptr<u32>(r0_12 + 0x24u) = r7;
        guest::preempt();
    } while (header < 0x20u);
    *gptr<u16>(r6 + 0xa4u) = u16(r7);
    return r5;
}

}  // namespace d_00622d04
GUEST_EXPORT_FRAMED(0x00622d04, d_00622d04::NetPeerTable__construct, 0x41f0);  // pushes {header, r5, r6, r7, r8, lr} first, as the original

// f_00622e70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the link state machine (sends and polls through 0050d3f0 and 0050d420).
namespace d_00622e70 {

struct __attribute__((packed)) NetLink {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
};
GUEST_OFFSET(NetLink, byte_5, 0x5);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u16, 0x00953600> net_value_953600;
inline constexpr guest::Function<0x0050d3f0, u32(u32, u32, u32)> RequestPool__request_download;
inline constexpr guest::Function<0x0050d420, u32(u32, u32, u32)> RequestPool__request_upload;
inline constexpr guest::Function<0x00746f8c, u32(u32, u32, u32, u32)> UnknownStateA22020__flag_144_without_flag_30;

void NetLink__update(gptr<NetLink> net_link, u32 r1, u32 r2, u32 r3) {
    u32 r0 = net_link.addr();
    u32 res_1 = 0;
    u32 r4 = r0;
    u32 r6 = 0u;
    if (net_link->byte_5 == 0) {
        u32 r0_1 = *gptr<u8>(r4);
        if (r0_1 == 0) {
            return;
        }
        *gptr<u8>(r4 + 5u) = u8(r0_1);
        r2 = r4;
        r3 = 0u;
        r0 = r4;
        r1 = 2u;
        do {
            u32 r5_1 = *gptr<u8>(r0 + 1u);
            u32 r12_1 = *gptr<u8>(r0 + 2u);
            res_1 = r1 - 1u;
            r1 = res_1;
            *gptr<u8>(r0) = u8(r5_1);
            *gptr<u8>(r0 + 1u) = u8(r12_1);
            r0 += 2u;
            guest::preempt();
        } while (res_1 != 0);
        *gptr<u8>(4u - r3 + r2) = u8(r6);
        if (*gptr<u8>(r4 + 5u) == 0) {
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    u32 r0_2 = UnknownStateA22020__flag_144_without_flag_30(request_pool_address, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    if (r0_2 != 0) {
        *gptr<u8>(r4 + 5u) = u8(r6);
    } else {
        u32 r0_3 = *gptr<u8>(r4 + 5u);
        u32 r5_2 = r0_3 & 0x7fu;
        u32 r0_4 = *gptr<u8>(r4 + 6u);
        if (((r0_3 & 0x80u) >> 7) == 0) {
            if (r0_4 == 0) {
                u32 r0_5 = RequestPool__request_upload(request_pool_address, r1, r2);
                r1 = guest::cpu()->r[1];
                if (r0_5 == 0) {
                    return;
                }
            }
            u32 r0_6 = *gptr<u8>(r4 + 6u);
            *gptr<u8>(r4 + 5u) = u8(r6);
            *gptr<u8>(r4 + 6u) = u8(r0_6 | r5_2);
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r0_7 = r0_4 & ~r5_2;
        if (r0_7 != 0) {
            *gptr<u8>(r4 + 6u) = u8(r0_7);
            *gptr<u8>(r4 + 5u) = u8(r6);
        } else {
            u32 r1_1 = 0u;
            u32 r2_1 = r1_1;
            if ((r5_2 & 1u) != 0) {
                r1_1 = 1u;
                r2_1 = *net_value_953600;
            }
            u32 r0_8 = RequestPool__request_download(request_pool_address, r1_1, r2_1);
            r1 = guest::cpu()->r[1];
            if (r0_8 != 0) {
                u32 r0_9 = *gptr<u8>(r4 + 6u);
                *gptr<u8>(r4 + 5u) = u8(r6);
                *gptr<u8>(r4 + 6u) = u8(r0_9 & ~r5_2);
            }
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00622e70
GUEST_EXPORT_FRAMED(0x00622e70, d_00622e70::NetLink__update, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00622fa0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the link is up: requests the station's bit with flag 0x80; true when sent.
namespace d_00622fa0 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0062302c, u32(u32, u32)> NetLink__queue_request;
inline constexpr guest::Function<0x00746f10, u32(u32, u32)> UnknownStateA22020__sub_check;

u32 NetLink__request_station_bit_with_flag(u32 net_link, u32 r1) {
    u32 r0_1 = UnknownStateA22020__sub_check(request_pool_address, 0u);
    if (r0_1 != 0) {
        NetLink__queue_request(net_link, lsl_r(1u, r1 & 0xff) & 0xffu | 0x80u);
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_00622fa0
GUEST_EXPORT_FRAMED(0x00622fa0, d_00622fa0::NetLink__request_station_bit_with_flag, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00622fe4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the link is up and the station is below 5: requests the station's bit; true when sent.
namespace d_00622fe4 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0062302c, u32(u32, u32)> NetLink__queue_request;
inline constexpr guest::Function<0x00746f10, u32(u32, u32)> UnknownStateA22020__sub_check;

u32 NetLink__request_station_bit(u32 net_link, u32 r1) {
    u32 r0_1 = UnknownStateA22020__sub_check(request_pool_address, 0u);
    u32 r1_1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        r1_1 = lsl_r(1u, r1 & 0xff) & 0xffu;
        r0_1 = r1_1 & 0x1fu;
        if (r0_1 != 0) {
            NetLink__queue_request(net_link, r1_1);
            r1_1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1_1;
    return r0_1;
}

}  // namespace d_00622fe4
GUEST_EXPORT_FRAMED(0x00622fe4, d_00622fe4::NetLink__request_station_bit, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062302c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Queues a request mask for the link.
namespace d_0062302c {

struct __attribute__((packed)) Local_0062302c_r2_3 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0062302c_r2_3, byte_0, 0x0);
GUEST_OFFSET(Local_0062302c_r2_3, byte_1, 0x1);


void NetLink__queue_request(u32 net_link, u32 r1) {
    u32 res_1 = 0;
    u32 res_2 = 0;
    if ((r1 & 0x1fu) != 0) {
        u32 r4 = r1 & 0x7fu;
        u32 r6 = (r1 & 0x80u) >> 7;
        u32 r3 = net_link + 4u;
        u32 r2 = 4u;
        u32 r12 = 0u;
        do {
            if (r4 == (u32(*gptr<u8>(r3)) & 0x7fu)) {
                if (r6 == (u32(*gptr<u8>(r3)) & 0x80u) >> 7) {
                    guest::cpu()->r[1] = r1;
                    return;
                }
                if (r2 >= 5u) {
                    break;
                }
                r3 = net_link + r2;
                r2 = 4u - r2;
                if (s32(r2) > 0) {
                    net_link = r3;
                    if ((r2 & 1u) != 0) {
                        *gptr<u8>(net_link) = *gptr<u8>(net_link + 1u);
                        net_link = r3 + 1u;
                    }
                    r1 = s32(r2) >> 1;
                    if (r1 != 0) {
                        do {
                            u32 r4_1 = *gptr<u8>(net_link + 2u);
                            res_1 = r1 - 1u;
                            r1 = res_1;
                            *gptr<u8>(net_link) = *gptr<u8>(net_link + 1u);
                            *gptr<u8>(net_link + 1u) = u8(r4_1);
                            net_link += 2u;
                            guest::preempt();
                        } while (res_1 != 0);
                    }
                    r3 += r2;
                }
                *gptr<u8>(r3) = u8(r12);
                guest::cpu()->r[1] = r1;
                return;
            }
            r2 -= 1u;
            res_2 = r2 + 1u;
            r3 -= 1u;
            guest::preempt();
        } while (res_2 != 0 && res_2 >> 0x1f == ((r2 ^ res_2) & (1u ^ res_2)) >> 0x1f);
        if (*gptr<u8>(net_link + 5u) != r1) {
            goto L_6230fc;
        }
        guest::cpu()->r[1] = r1;
        return;
L_6230fc:;
        if (*gptr<u8>(net_link) == 0) {
            *gptr<u8>(net_link + r12) = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        if (*gptr<u8>(net_link + 1u) == 0) {
            r12 = 1u;
            *gptr<u8>(net_link + r12) = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        u32 r2_2 = (net_link + 1u) + 1u;
        if (*gptr<u8>(r2_2) == 0) {
            r12 = 2u;
            *gptr<u8>(net_link + r12) = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        gptr<Local_0062302c_r2_3> r2_3 = gptr<Local_0062302c_r2_3>(r2_2 + 1u);
        if (r2_3->byte_0 == 0) {
            r12 = 3u;
            *gptr<u8>(net_link + r12) = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
        if (r2_3->byte_1 == 0) {
            r12 = 4u;
            *gptr<u8>(net_link + r12) = u8(r1);
            guest::cpu()->r[1] = r1;
            return;
        }
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0062302c
GUEST_EXPORT_FRAMED(0x0062302c, d_0062302c::NetLink__queue_request, 0x70);  // pushes {r4, r5, r6} first, as the original

// f_00623168: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the link's time record and clears its two state bytes.
namespace d_00623168 {

struct __attribute__((packed)) NetLink {
    u8 unknown_0[0x5];  // (not used here)
    u8 byte_5;
    u8 byte_6;
};
GUEST_OFFSET(NetLink, byte_5, 0x5);
GUEST_OFFSET(NetLink, byte_6, 0x6);

inline constexpr guest::Function<0x0077955c, u32(u32)> store_constants_77955c;

u32 NetLink__reset(gptr<NetLink> net_link) {
    store_constants_77955c(net_link.addr());
    net_link->byte_5 = 0;
    net_link->byte_6 = 0;
    return 0u;
}

}  // namespace d_00623168
GUEST_EXPORT_FRAMED(0x00623168, d_00623168::NetLink__reset, 0x4010);  // pushes {r4, lr} first, as the original

// f_006235cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In state 6: removes the leaving station (+1) from the session's station mask; true.
namespace d_006235cc {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);
GUEST_OFFSET(NetVisit, byte_1, 0x1);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;

u32 NetVisit__remove_leaving_station(gptr<NetVisit> net_visit, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    u32 r5_1 = 1u;
    if (net_visit->byte_0 == 6u) {
        u32 r6_1 = net_visit->byte_1;
        *frame.at<u16>(0) = *gptr<u16>(*net_session + 0x1326eu);
        StationMask__remove(frame.at(0).addr(), r6_1);
        u32 r4_1 = net_visit->byte_1;
        if (0u) {
            r5_1 = 0u;
        }
        *frame.at<u16>(0) = *gptr<u16>(*net_session + 0x1326eu);
        StationMask__remove(frame.at(0).addr(), r4_1);
        r1 = frame.at(0).addr();
        if (0) {
            r5_1 = 0u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r5_1;
}

}  // namespace d_006235cc
GUEST_EXPORT_FRAMED(0x006235cc, d_006235cc::NetVisit__remove_leaving_station, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006237ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// In state 0xa: records the leaving station, resets its slot, removes it from the mask and moves to state 0xb.
namespace d_006237ec {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
    u8 slot;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);
GUEST_OFFSET(NetVisit, slot, 0x1);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00621684, u32(u32, u32, u32, u32)> reset_station_slot;
inline constexpr guest::Function<0x00624b24, u32(u32, u32)> StationMask__remove;

void NetVisit__finish_station_leave(gptr<NetVisit> net_visit, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    if (net_visit->byte_0 == 0xau) {
        u32 slot = net_visit->slot;
        u32 r0_1 = *net_session;
        *gptr<u8>(r0_1 + 0x3cu) = u8(slot);
        reset_station_slot(r0_1 + 0x1c0u, slot, guest::cpu()->r[2], r3);
        u32 r5_1 = net_visit->slot;
        *frame.at<u16>(0) = *gptr<u16>(*net_session + 0x1326eu);
        StationMask__remove(frame.at(0).addr(), r5_1);
        r1 = frame.at(0).addr();
        net_visit->byte_0 = 0xb;
    }
    guest::cpu()->r[1] = r1;
}

}  // namespace d_006237ec
GUEST_EXPORT_FRAMED(0x006237ec, d_006237ec::NetVisit__finish_station_leave, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_006238d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes a station from the session's mask and reports it (00626bd8).
namespace d_006238d0 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00626bd8, u32(u32, u32)> on_station_left;

u32 NetVisit__station_left(u32 r0_unused, u32 room_timers, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = *gptr<u16>(*net_session + 0x1326eu);
    StationMask__remove(frame.at(0).addr(), room_timers, guest::cpu()->r[2], r3);
    return on_station_left(room_timers, frame.at(0).addr());
}

}  // namespace d_006238d0
GUEST_EXPORT_FRAMED(0x006238d0, d_006238d0::NetVisit__station_left, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_00623948: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes a station from the session's mask and reports it (00626c2c).
namespace d_00623948 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00626c2c, u32(u32, u32)> NetSession__reset_shared_state;

void NetVisit__station_dropped(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    *frame.at<u32>(0) = r3;
    *frame.at<u16>(0) = *gptr<u16>(*net_session + 0x1326eu);
    StationMask__remove(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    NetSession__reset_shared_state(r1, frame.at(0).addr());
}

}  // namespace d_00623948
GUEST_EXPORT_FRAMED(0x00623948, d_00623948::NetVisit__station_dropped, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_006239fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the visit state (station 4, state 0) and its three flag pairs and four flags.
namespace d_006239fc {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x253a];  // (not used here)
    u8 byte_253c;
    u8 byte_253d;
    u8 byte_253e;
    u8 byte_253f;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);
GUEST_OFFSET(NetVisit, byte_1, 0x1);
GUEST_OFFSET(NetVisit, byte_253c, 0x253c);
GUEST_OFFSET(NetVisit, byte_253d, 0x253d);
GUEST_OFFSET(NetVisit, byte_253e, 0x253e);
GUEST_OFFSET(NetVisit, byte_253f, 0x253f);

inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;

void NetVisit__reset(gptr<NetVisit> net_visit) {
    net_visit->byte_1 = 4;
    net_visit->byte_0 = 0;
    clear_flag_pair(net_visit.addr() + 8u);
    clear_flag_pair(net_visit.addr() + 0x10u);
    clear_flag_pair(net_visit.addr() + 0x18u);
    net_visit->byte_253c = 0;
    net_visit->byte_253d = 0;
    net_visit->byte_253e = 0;
    net_visit->byte_253f = 0;
    guest::cpu()->r[1] = net_visit.addr() + 0x253du;
}

}  // namespace d_006239fc
GUEST_EXPORT_FRAMED(0x006239fc, d_006239fc::NetVisit__reset, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00623bb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs a visit confirmation state machine: its three flag pairs and a visiting villager, cleared.
namespace d_00623bb4 {

struct __attribute__((packed)) netgame__ConfirmMachine {
    u8 byte_0;
    u8 byte_1;
    u8 unknown_2[0x2];  // (not used here)
    u32 confirm_machine_vtable;
    u8 unknown_8[0x4];  // (not used here)
    u32 confirm_machine_vtable_c;
    u8 unknown_10[0x4];  // (not used here)
    u32 confirm_machine_vtable_14;
};
GUEST_OFFSET(netgame__ConfirmMachine, byte_0, 0x0);
GUEST_OFFSET(netgame__ConfirmMachine, byte_1, 0x1);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable, 0x4);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_c, 0xc);
GUEST_OFFSET(netgame__ConfirmMachine, confirm_machine_vtable_14, 0x14);

inline constexpr u32 vtable_netgame__ConfirmMachine_rec = 0x0090ac18u;
inline constexpr guest::Function<0x001ae1e4, u32(u32)> VisitingVillager__construct;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;

u32 netgame__ConfirmMachine__ConfirmMachine_00623bb4(gptr<netgame__ConfirmMachine> confirm_machine, u32 r1_unused, u32 r2, u32 r3) {
    confirm_machine->byte_0 = 0;
    confirm_machine->byte_1 = 4;
    u32 r0_1 = confirm_machine.addr() + 8u;
    clear_flag_pair_b(r0_1, 4u, r2, r3);
    confirm_machine->confirm_machine_vtable = vtable_netgame__ConfirmMachine_rec;
    clear_flag_pair_b(r0_1 + 8u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_c = vtable_netgame__ConfirmMachine_rec;
    clear_flag_pair_b(r0_1 + 0x10u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    confirm_machine->confirm_machine_vtable_14 = vtable_netgame__ConfirmMachine_rec;
    u32 r0_5 = VisitingVillager__construct(r0_1 + 0x14u);
    *gptr<u8>(r0_5 + 0x2520u) = 0;
    *gptr<u8>((0x253cu | u32(s32(0x253cu) >> 5)) + (r0_5 - 0x1cu)) = 0;
    *gptr<u8>((0x253cu | u32(s32(0x253cu) >> 9)) + (r0_5 - 0x1cu)) = 0;
    *gptr<u8>(r0_5 - 0x1cu + 0x253fu) = 0;
    guest::cpu()->r[1] = 0x253cu;
    return r0_5 - 0x1cu;
}

}  // namespace d_00623bb4
GUEST_EXPORT_FRAMED(0x00623bb4, d_00623bb4::netgame__ConfirmMachine__ConfirmMachine_00623bb4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00623c28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00100b80 on the part at +0x1c and returns the object.
namespace d_00623c28 {

inline constexpr guest::Function<0x00100b80, u32(u32, u32, u32, u32)> Player__destruct_veneer;

u32 call_00100b80_at_1c(u32 r0) {
    return Player__destruct_veneer(r0 + 0x1cu, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) - 0x1cu;
}

}  // namespace d_00623c28
GUEST_EXPORT_FRAMED(0x00623c28, d_00623c28::call_00100b80_at_1c, 0x4010);  // pushes {r4, lr} first, as the original

// f_00623c3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets what station `station` uses, and its count (under the session's lock).
namespace d_00623c3c {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

void StationBuffers__reset(u32 station_buffers, u32 station) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (station >= 4u) {
        return;
    }
    u32 r2_1 = station_buffers + (station << 2);
    *gptr<u32>(r2_1 + 0x14u) = 0;
    u32 r0_1 = *net_session + 0x13280u;
    lock_member_lock(r0_1, station, r2_1, guest::cpu()->r[3]);
    *gptr<u8>(station_buffers + station + 0x24u) = 0;
    frame.release();
    unlock_member_lock(r0_1, station);
    return;
}

}  // namespace d_00623c3c
GUEST_EXPORT(0x00623c3c, d_00623c3c::StationBuffers__reset);

// f_00623c8c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds `delta` (negative to take away) to station `station`'s count, under the session's lock.
namespace d_00623c8c {

struct __attribute__((packed)) Local_00623c8c_r0_2 {
    u8 unknown_0[0x24];  // (not used here)
    u8 byte_24;
};
GUEST_OFFSET(Local_00623c8c_r0_2, byte_24, 0x24);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;

void StationBuffers__add_count(u32 station_buffers, u32 station, u32 delta) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    if (station < 4u) {
        u32 r5_1 = (s32(delta) >= 0 ? delta : 0u - delta) & 0xffu;
        u32 r0_1 = *net_session + 0x13280u;
        lock_member_lock(r0_1, station, delta, guest::cpu()->r[3]);
        u32 r1_1 = guest::cpu()->r[1];
        gptr<Local_00623c8c_r0_2> r0_2 = gptr<Local_00623c8c_r0_2>(station_buffers + station);
        if (delta != 0) {
            r1_1 = r0_2->byte_24;
        }
        if (s32(delta) < 0) {
            r1_1 -= r5_1;
        }
        if (delta != 0 && s32(delta) >= 0) {
            r1_1 += r5_1;
        }
        if (delta != 0) {
            r0_2->byte_24 = u8(r1_1);
        }
        frame.release();
        unlock_member_lock(r0_1, r1_1);
        return;
    }
    guest::cpu()->r[1] = station;
}

}  // namespace d_00623c8c
GUEST_EXPORT(0x00623c8c, d_00623c8c::StationBuffers__add_count);

// f_00623cfc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds `size` to what station `station` uses when it still fits in its 0xd002 bytes; true when it did.
namespace d_00623cfc {

struct __attribute__((packed)) Local_00623cfc_r3_1 {
    u8 unknown_0[0x14];  // (not used here)
    u32 word_14;
};
GUEST_OFFSET(Local_00623cfc_r3_1, word_14, 0x14);


u32 StationBuffers__reserve(u32 station_buffers, u32 station, u32 size) {
    u32 r0_1 = 0u;
    if (station >= 4u) {
        return r0_1;
    }
    gptr<Local_00623cfc_r3_1> r3_1 = gptr<Local_00623cfc_r3_1>(station_buffers + (station << 2));
    u32 r1_1 = r3_1->word_14 + size;
    if (0xd002u >= r1_1) {
        r0_1 = 1u;
        r3_1->word_14 = r1_1;
    }
    return r0_1;
}

}  // namespace d_00623cfc
GUEST_EXPORT(0x00623cfc, d_00623cfc::StationBuffers__reserve);

// f_00623d30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station's used buffer count (stations below 4).
namespace d_00623d30 {


void StationBuffers__reset_used(u32 station_buffers, u32 station) {
    if (station >= 4u) {
        return;
    }
    *gptr<u32>(station_buffers + (station << 2) + 0x14u) = 0;
}

}  // namespace d_00623d30
GUEST_EXPORT(0x00623d30, d_00623d30::StationBuffers__reset_used);

// f_00623d48: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Lays the buffer out once: each of the 4 stations but `own` gets 0xd002 bytes of it, in order.
namespace d_00623d48 {

struct __attribute__((packed)) StationBuffers {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x14];  // (not used here)
    u8 byte_28;
};
GUEST_OFFSET(StationBuffers, word_0, 0x0);
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, byte_28, 0x28);


void StationBuffers__layout(gptr<StationBuffers> buffers, u32 own) {
    if (buffers->byte_28 != 0 || own >= 4u) {
        return;
    }
    u32 r2_1 = buffers->word_0;
    if (r2_1 == 0) {
        return;
    }
    u32 r3_1 = 0u;
    if (own != 0) {
        r3_1 = r2_1;
        r2_1 += 0xd002u;
    }
    buffers->word_4 = r3_1;
    u32 r3_2 = 0u;
    if (own != 1u) {
        r3_2 = r2_1;
        r2_1 += 0xd002u;
    }
    buffers->word_8 = r3_2;
    u32 r3_3 = 0u;
    if (own != 2u) {
        r3_3 = r2_1;
        r2_1 += 0xd002u;
    }
    u32 r1_1 = 0u;
    if (own != 3u) {
        r1_1 = r2_1;
    }
    buffers->word_c = r3_3;
    buffers->word_10 = r1_1;
    buffers->byte_28 = 1;
}

}  // namespace d_00623d48
GUEST_EXPORT(0x00623d48, d_00623d48::StationBuffers__layout);

// f_00623dcc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station's send and receive buffers (keeping its owner).
namespace d_00623dcc {

struct __attribute__((packed)) StationBuffers {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, word_14, 0x14);
GUEST_OFFSET(StationBuffers, word_18, 0x18);
GUEST_OFFSET(StationBuffers, word_1c, 0x1c);
GUEST_OFFSET(StationBuffers, word_20, 0x20);
GUEST_OFFSET(StationBuffers, word_24, 0x24);
GUEST_OFFSET(StationBuffers, byte_28, 0x28);


void StationBuffers__clear(gptr<StationBuffers> buffers) {
    buffers->word_14 = 0;
    buffers->word_18 = 0;
    buffers->word_1c = 0;
    buffers->word_20 = 0;
    buffers->word_4 = 0;
    buffers->word_8 = 0;
    buffers->word_c = 0;
    buffers->word_10 = 0;
    buffers->byte_28 = 0;
    buffers->word_24 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00623dcc
GUEST_EXPORT(0x00623dcc, d_00623dcc::StationBuffers__clear);

// f_00623e3c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a station's send and receive buffers: no owner, empty.
namespace d_00623e3c {

struct __attribute__((packed)) StationBuffers {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 byte_28;
};
GUEST_OFFSET(StationBuffers, word_0, 0x0);
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, word_14, 0x14);
GUEST_OFFSET(StationBuffers, word_18, 0x18);
GUEST_OFFSET(StationBuffers, word_1c, 0x1c);
GUEST_OFFSET(StationBuffers, word_20, 0x20);
GUEST_OFFSET(StationBuffers, word_24, 0x24);
GUEST_OFFSET(StationBuffers, byte_28, 0x28);


void StationBuffers__init(gptr<StationBuffers> buffers) {
    buffers->word_0 = 0;
    buffers->word_14 = 0;
    buffers->word_18 = 0;
    buffers->word_1c = 0;
    buffers->word_20 = 0;
    buffers->word_4 = 0;
    buffers->word_8 = 0;
    buffers->word_c = 0;
    buffers->word_10 = 0;
    buffers->byte_28 = 0;
    buffers->word_24 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00623e3c
GUEST_EXPORT(0x00623e3c, d_00623e3c::StationBuffers__init);

// f_00624038: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 0075f63c on the network session.
namespace d_00624038 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075f63c, u32(u32, u32, u32, u32)> NetSession__player_identity;

u32 net_session_call_75f63c(u32 r0, u32 r1) {
    return NetSession__player_identity(*net_session, r0, r1, guest::cpu()->r[3]);
}

}  // namespace d_00624038
GUEST_EXPORT(0x00624038, d_00624038::net_session_call_75f63c);

// f_00624600: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves state 5 to 7, or state 6 to 9 marking the session ended (+0x54).
namespace d_00624600 {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

void NetVisit__advance_ending(gptr<NetVisit> net_visit) {
    u32 r1_1 = net_visit->byte_0;
    if (r1_1 == 5u) {
        net_visit->byte_0 = 7;
        guest::cpu()->r[1] = 7u;
        return;
    }
    if (r1_1 != 6u) {
        guest::cpu()->r[1] = r1_1;
        return;
    }
    u32 r1_2 = *net_session;
    *gptr<u8>(r1_2 + 0x54u) = 1;
    net_visit->byte_0 = 9;
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00624600
GUEST_EXPORT(0x00624600, d_00624600::NetVisit__advance_ending);

// f_0062463c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports every connected station (00626bd8) with a cleared flag pair.
namespace d_0062463c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00626bd8, u32(u32, u32, u32, u32)> on_station_left;
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> NetSession__has_station_bit;

struct __attribute__((packed)) ReportAllStationsLeftFrame {
    u32 word_0;
};
GUEST_OFFSET(ReportAllStationsLeftFrame, word_0, 0x0);
GUEST_SIZE(ReportAllStationsLeftFrame, 0x4);

void report_all_stations_left(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ReportAllStationsLeftFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    clear_flag_pair_b(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    u32 r6 = net_session_address;
    u32 i = 0u;
    do {
        u32 room_timers = i & 0xffu;
        u32 r0_3 = NetSession__has_station_bit(*gptr<u32>(r6), room_timers, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            on_station_left(room_timers, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_0062463c
GUEST_EXPORT_FRAMED(0x0062463c, d_0062463c::report_all_stations_left, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0062468c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether every connected station passes the flag-pair check.
namespace d_0062468c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> NetSession__has_station_bit;

struct __attribute__((packed)) AllStationsReadyFrame {
    u32 word_0;
};
GUEST_OFFSET(AllStationsReadyFrame, word_0, 0x0);
GUEST_SIZE(AllStationsReadyFrame, 0x4);

u32 all_stations_ready(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<AllStationsReadyFrame> frame;  // the original's stack frame
    u32 r1_1 = 0;
    frame->word_0 = r3;
    clear_flag_pair_b(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    u32 r7 = net_session_address;
    u32 r6 = 1u;
    u32 i = 0u;
    do {
        u32 r0_3 = NetSession__has_station_bit(*gptr<u32>(r7), i & 0xffu, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r1_1 = frame.at(0).addr();
            if ((r6 & ~1u) != 0) {
                r6 = 0u;
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = r1_1;
    return r6;
}

}  // namespace d_0062468c
GUEST_EXPORT_FRAMED(0x0062468c, d_0062468c::all_stations_ready, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_006246ec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Reports every connected station (00626c2c) with a cleared flag pair.
namespace d_006246ec {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00626c2c, u32(u32, u32, u32, u32)> NetSession__reset_shared_state;
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> NetSession__has_station_bit;

struct __attribute__((packed)) ReportAllStationsDroppedFrame {
    u32 word_0;
};
GUEST_OFFSET(ReportAllStationsDroppedFrame, word_0, 0x0);
GUEST_SIZE(ReportAllStationsDroppedFrame, 0x4);

void report_all_stations_dropped(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<ReportAllStationsDroppedFrame> frame;  // the original's stack frame
    frame->word_0 = r3;
    clear_flag_pair_b(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    u32 r6 = net_session_address;
    u32 i = 0u;
    do {
        u32 r5_1 = i & 0xffu;
        u32 r0_3 = NetSession__has_station_bit(*gptr<u32>(r6), r5_1, guest::cpu()->r[2], r3);
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            NetSession__reset_shared_state(r5_1, frame.at(0).addr(), guest::cpu()->r[2], r3);
            r3 = guest::cpu()->r[3];
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_006246ec
GUEST_EXPORT_FRAMED(0x006246ec, d_006246ec::report_all_stations_dropped, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_0062473c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The last connected station (below 4), or 0.
namespace d_0062473c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00624c90, u32(u32, u32, u32, u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x0075e010, u32(u32, u32, u32, u32)> NetSession__has_station_bit;

struct __attribute__((packed)) LastConnectedStationFrame {
    u32 word_0;
};
GUEST_OFFSET(LastConnectedStationFrame, word_0, 0x0);
GUEST_SIZE(LastConnectedStationFrame, 0x4);

u32 last_connected_station(u32 r0_unused, u32 r1, u32 r2_unused, u32 r3) {
    guest::StackFrameOf<LastConnectedStationFrame> frame;  // the original's stack frame
    u32 r0_3 = 0;
    u32 r1_1 = 0;
    frame->word_0 = r3;
    clear_flag_pair_b(frame.at(0).addr(), r1, guest::cpu()->r[2], r3);
    r3 = guest::cpu()->r[3];
    u32 r6 = net_session_address;
    u32 i = 0u;
    do {
        u32 r5_1 = i & 0xffu;
        r0_3 = NetSession__has_station_bit(*gptr<u32>(r6), r5_1, guest::cpu()->r[2], r3);
        r1_1 = guest::cpu()->r[1];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            r1_1 = frame.at(0).addr();
            r0_3 = r5_1;
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = r1_1;
    return r0_3;
}

}  // namespace d_0062473c
GUEST_EXPORT_FRAMED(0x0062473c, d_0062473c::last_connected_station, 0x40f0);  // pushes {i, r5, r6, r7, lr} first, as the original

// f_00624814: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Starts a visit: as a guest refreshes the station set (state 3 when `joining`); as the host rebuilds the slot
// records, waits for the stations that are expected and moves to state 1.
namespace d_00624814 {

struct __attribute__((packed)) NetVisit {
    u8 byte_0;
    u8 unknown_1[0xd];  // (not used here)
    u8 byte_e;
    u8 byte_f;
};
GUEST_OFFSET(NetVisit, byte_0, 0x0);
GUEST_OFFSET(NetVisit, byte_e, 0xe);
GUEST_OFFSET(NetVisit, byte_f, 0xf);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x001adef4, u32(u32)> NetSession__refresh_players;
inline constexpr guest::Function<0x00623e70, u32(u32, u32, u32)> StationSet__refresh;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00624c68, u32(u32)> clear_flag_pair;
inline constexpr guest::Function<0x00624f00, u32(u32, u32, u32)> station_is_waited_for;
inline constexpr guest::Function<0x006251b8, u32(u32, u32)> SlotRecords__rebuild_all;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

u32 NetVisit__start(gptr<NetVisit> net_visit, u32 r1, u32 r2) {
    u32 r0 = net_visit.addr();
    u32 r6 = r0;
    u32 r0_2 = NetSession__station(*net_session, r1, r2, guest::cpu()->r[3]);
    u32 r7 = 0u;
    net_visit->byte_f = u8(r7);
    if (NetSession__station(*net_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]) != 0) {
        u32 r0_6 = StationSet__refresh(r6 + 4u, r0_2, 0u);
        if (r1 == 0) {
            net_visit->byte_0 = u8(r7);
        } else {
            r0_6 = 3u;
            net_visit->byte_e = u8(r7);
            net_visit->byte_0 = u8(r0_6);
        }
        return r0_6;
    }
    if (r1 != 0) {
        StationSet__refresh(r6 + 4u, r0_2, 1u);
        u32 r0_8 = *net_session;
        SlotRecords__rebuild_all(r0_8 + 0x2784u, r0_8 + 0x1326eu);
        NetSession__refresh_players(*net_session);
        clear_flag_pair(r6 + 0xcu);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        u32 i = 0u;
        do {
            u32 r5_1 = i & 0xffu;
            if (r5_1 != 0) {
                u32 r0_12 = station_is_waited_for(r5_1, r1, r2);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                if (r0_12 != 0) {
                    StationMask__add(r6 + 0xcu, r5_1, r2);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
        *gptr<u8>(r6 + 0xeu) = u8(r7);
        *gptr<u8>(r6) = 1;
        guest::cpu()->r[1] = r1;
        return 1u;
    }
    u32 r0_15 = StationSet__refresh(r6 + 4u, r0_2, 0u);
    *gptr<u8>(r6) = u8(r7);
    return r0_15;
}

}  // namespace d_00624814
GUEST_EXPORT_FRAMED(0x00624814, d_00624814::NetVisit__start, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_00624954: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the entry id (up to 0xa5) of station `index` (below 4).
namespace d_00624954 {


void set_station_entry_id(u32 r0, u32 r1, u32 r2) {
    if (r1 >= 4u) {
        return;
    }
    if (r2 <= 0xa5u) {
        *gptr<u8>(r0 + r1) = u8(r2);
    }
}

}  // namespace d_00624954
GUEST_EXPORT(0x00624954, d_00624954::set_station_entry_id);

// f_00624968: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets or clears the active bit of station `index` (below 4) in +4.
namespace d_00624968 {

struct __attribute__((packed)) SetStationActiveArg0 {
    u8 unknown_0[0x4];  // (not used here)
    u8 byte_4;
};
GUEST_OFFSET(SetStationActiveArg0, byte_4, 0x4);


void set_station_active(gptr<SetStationActiveArg0> arg0, u32 r1, u32 r2) {
    if (r1 >= 4u) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 zf_1 = r2 == 0;
    u32 r2_1 = arg0->byte_4;
    u32 r1_1 = lsl_r(1u, r1 & 0xff);
    u32 r1_2 = zf_1 ? r2_1 & ~r1_1 : r1_1 | r2_1;
    arg0->byte_4 = u8(r1_2);
    guest::cpu()->r[1] = r1_2;
}

}  // namespace d_00624968
GUEST_EXPORT(0x00624968, d_00624968::set_station_active);

// f_00624d1c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies 0x80 bytes.
namespace d_00624d1c {

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void copy_128_bytes() {
    copy_bytes_at_any_alignment(guest::cpu()->r[0], guest::cpu()->r[1], 0x80u);
    return;
}

}  // namespace d_00624d1c
GUEST_EXPORT(0x00624d1c, d_00624d1c::copy_128_bytes);

// f_00624f14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two flags (+0x14, +0x18) of station `index` (below 4).
namespace d_00624f14 {

struct __attribute__((packed)) Local_00624f14_r0_1 {
    u8 unknown_0[0x14];  // (not used here)
    u8 byte_14;
    u8 unknown_15[0x3];  // (not used here)
    u8 byte_18;
};
GUEST_OFFSET(Local_00624f14_r0_1, byte_14, 0x14);
GUEST_OFFSET(Local_00624f14_r0_1, byte_18, 0x18);


void clear_station_flags(u32 r0, u32 villager_table) {
    if (villager_table >= 4u) {
        return;
    }
    gptr<Local_00624f14_r0_1> r0_1 = gptr<Local_00624f14_r0_1>(r0 + villager_table);
    r0_1->byte_14 = 0;
    r0_1->byte_18 = 0;
}

}  // namespace d_00624f14
GUEST_EXPORT(0x00624f14, d_00624f14::clear_station_flags);

// f_00624f30: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Once (+0x1c): gives each of the other three stations a 0x16802-byte part of the buffer (+0), skipping this station's
// slot.
namespace d_00624f30 {

struct __attribute__((packed)) StationBuffers {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(StationBuffers, word_0, 0x0);
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, byte_1c, 0x1c);


void StationBuffers__assign(gptr<StationBuffers> station_buffers, u32 own) {
    if (station_buffers->byte_1c != 0 || own >= 4u) {
        guest::cpu()->r[1] = own;
        return;
    }
    u32 r2_1 = station_buffers->word_0;
    if (r2_1 == 0) {
        guest::cpu()->r[1] = own;
        return;
    }
    u32 r3_1 = 0u;
    if (own != 0) {
        r3_1 = r2_1;
        r2_1 += 0x16802u;
    }
    station_buffers->word_4 = r3_1;
    u32 r3_2 = 0u;
    if (own != 1u) {
        r3_2 = r2_1;
        r2_1 += 0x16802u;
    }
    station_buffers->word_8 = r3_2;
    u32 r3_3 = 0u;
    if (own != 2u) {
        r3_3 = r2_1;
        r2_1 += 0x16802u;
    }
    u32 r1_1 = 0u;
    if (own != 3u) {
        r1_1 = r2_1;
    }
    station_buffers->word_c = r3_3;
    station_buffers->word_10 = r1_1;
    station_buffers->byte_1c = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_00624f30
GUEST_EXPORT(0x00624f30, d_00624f30::StationBuffers__assign);

// f_00624fb4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the flag of station `index` (below 4) at +0x18.
namespace d_00624fb4 {


void set_station_flag_18(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1 + 0x18u) = u8(r2);
    }
}

}  // namespace d_00624fb4
GUEST_EXPORT(0x00624fb4, d_00624fb4::set_station_flag_18);

// f_00624fc4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the flag of station `index` (below 4) at +0x14.
namespace d_00624fc4 {


void set_station_flag_14(u32 r0, u32 r1, u32 r2) {
    if (r1 < 4u) {
        *gptr<u8>(r0 + r1 + 0x14u) = u8(r2);
    }
}

}  // namespace d_00624fc4
GUEST_EXPORT(0x00624fc4, d_00624fc4::set_station_flag_14);

// f_00624fd4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four station parts, their two flags and the assigned flag (+0x1c).
namespace d_00624fd4 {

struct __attribute__((packed)) StationBuffers {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, byte_1c, 0x1c);


void StationBuffers__clear_2(gptr<StationBuffers> station_buffers) {
    u32 r0 = station_buffers.addr();
    u32 i = 0u;
    station_buffers->word_4 = i;
    station_buffers->word_8 = i;
    station_buffers->word_c = i;
    station_buffers->word_10 = i;
    station_buffers->byte_1c = u8(i);
    do {
        u32 r2_1 = i & 0xffu;
        u32 cf_1 = r2_1 >= 4u;
        if (r2_1 < 4u) {
            *gptr<u8>(r2_1 + r0 + 0x14u) = 0;
        }
        u32 r2_2 = i & 0xffu;
        if (!cf_1) {
            r2_2 += r0;
        }
        i += 1u;
        if (!cf_1) {
            *gptr<u8>(r2_2 + 0x18u) = 0;
        }
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = i;
}

}  // namespace d_00624fd4
GUEST_EXPORT(0x00624fd4, d_00624fd4::StationBuffers__clear_2);

// f_00625060: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the buffer, the four station parts, their flags and the assigned flag (+0x1c).
namespace d_00625060 {

struct __attribute__((packed)) StationBuffers {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x8];  // (not used here)
    u8 byte_1c;
};
GUEST_OFFSET(StationBuffers, word_0, 0x0);
GUEST_OFFSET(StationBuffers, word_4, 0x4);
GUEST_OFFSET(StationBuffers, word_8, 0x8);
GUEST_OFFSET(StationBuffers, word_c, 0xc);
GUEST_OFFSET(StationBuffers, word_10, 0x10);
GUEST_OFFSET(StationBuffers, byte_1c, 0x1c);


void StationBuffers__clear_all(gptr<StationBuffers> station_buffers) {
    u32 r0 = station_buffers.addr();
    u32 i = 0u;
    station_buffers->word_0 = i;
    station_buffers->word_4 = i;
    station_buffers->word_8 = i;
    station_buffers->word_c = i;
    station_buffers->word_10 = i;
    station_buffers->byte_1c = u8(i);
    do {
        u32 r2_1 = i & 0xffu;
        u32 cf_1 = r2_1 >= 4u;
        if (r2_1 < 4u) {
            r2_1 += r0;
        }
        i += 1u;
        if (!cf_1) {
            *gptr<u8>(r2_1 + 0x14u) = 0;
        }
        guest::preempt();
    } while (s32(i) < 4);
    guest::cpu()->r[1] = i;
}

}  // namespace d_00625060
GUEST_EXPORT(0x00625060, d_00625060::StationBuffers__clear_all);

// f_006250a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00617c84 on the network session.
namespace d_006250a0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00617c84, u32(u32, u32, u32, u32)> NetSession__finish_leave;

u32 net_session_call_617c84() {
    return NetSession__finish_leave(*net_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006250a0
GUEST_EXPORT(0x006250a0, d_006250a0::net_session_call_617c84);

// f_006250b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores the visit kind at +0x1329d of the network session.
namespace d_006250b0 {

inline guest::global<u32, 0x0095362c> net_session;

void NetSession__set_visit_kind(u32 r0) {
    u32 r1_1 = *net_session + 0x13000u;
    *gptr<u8>(r1_1 + 0x29du) = u8(r0);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_006250b0
GUEST_EXPORT(0x006250b0, d_006250b0::NetSession__set_visit_kind);

// f_006254f8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the send hook (0x87bd34) with the part of station `index` (1-3) of the buffer.
namespace d_006254f8 {

struct __attribute__((packed)) StationBuffers {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(StationBuffers, word_4, 0x4);

inline guest::global<u32, 0x0087bd2c> station_send_hook;
inline guest::global<u32, 0x0087bd30> station_receive_hook;
inline guest::global<u32, 0x0087bd34> global_0087bd34;

void StationBuffers__call_send_hook(gptr<StationBuffers> station_buffers, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r3_1 = *global_0087bd34;
    if (r3_1 == 0 || r1 >= 4u) {
        return;
    }
    u32 r0_1 = station_buffers->word_4;
    if (r0_1 == 0) {
        return;
    }
    u32 r0_2 = r0_1 + *station_receive_hook + (r1 - 1u);
    if (r0_2 == 0) {
        return;
    }
    guest::call_address<u32>(r3_1, r0_2, r1, *station_send_hook, r3_1);
}

}  // namespace d_006254f8
GUEST_EXPORT(0x006254f8, d_006254f8::StationBuffers__call_send_hook);

// f_00625554: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls the receive hook (0x87bd38) with the part of station `index` (1-3) of the buffer.
namespace d_00625554 {

struct __attribute__((packed)) StationBuffers {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
};
GUEST_OFFSET(StationBuffers, word_4, 0x4);

inline guest::global<u32, 0x0087bd2c> station_send_hook;
inline guest::global<u32, 0x0087bd30> station_receive_hook;
inline guest::global<u32, 0x0087bd38> global_0087bd38;

u32 StationBuffers__call_receive_hook(gptr<StationBuffers> station_buffers, u32 r1) {
    if (r1 == 0) {
        return r1;
    }
    u32 r3_1 = *global_0087bd38;
    if (r3_1 == 0 || r1 >= 4u) {
        return r1;
    }
    u32 r1_1 = station_buffers->word_4;
    if (r1_1 == 0) {
        return r1;
    }
    u32 r1_2 = r1_1 + *station_receive_hook + (r1 - 1u);
    if (r1_2 == 0) {
        return r1;
    }
    return guest::call_address<u32>(r3_1, r1, r1_2, *station_send_hook, r3_1);
}

}  // namespace d_00625554
GUEST_EXPORT(0x00625554, d_00625554::StationBuffers__call_receive_hook);

// f_00625678: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether peer `index` of the session's peer list (+0xb0) is in use.
namespace d_00625678 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075f4d4, u32(u32, u32)> entry_in_use;

u32 net_peer_in_use(u32 r0) {
    return entry_in_use(*net_session + 0xb0u, r0);
}

}  // namespace d_00625678
GUEST_EXPORT(0x00625678, d_00625678::net_peer_in_use);

// f_00625740: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether bit 3 of the flags of the session's network part (+0x7874) is set.
namespace d_00625740 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075f1c4, u32(u32, u32)> flags_09_bit_is_set;

u32 net_part_flag_3() {
    return flags_09_bit_is_set(*net_session + 0x7874u, 3u);
}

}  // namespace d_00625740
GUEST_EXPORT(0x00625740, d_00625740::net_part_flag_3);

// f_00625798: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the stations are ready: the given station's bit in the ready mask, or every station flagged and the ready
// flag set (host and guest variants).
namespace d_00625798 {

struct __attribute__((packed)) Local_00625798_r0_1 {
    u8 unknown_0[0x268];  // (not used here)
    u8 byte_268;
    u8 unknown_269[0x34];  // (not used here)
    u8 byte_29d;
};
GUEST_OFFSET(Local_00625798_r0_1, byte_268, 0x268);
GUEST_OFFSET(Local_00625798_r0_1, byte_29d, 0x29d);

struct __attribute__((packed)) Local_00625798_r4_3 {
    u8 unknown_0[0x44];  // (not used here)
    u8 byte_44;
    u8 unknown_45[0xfd];  // (not used here)
    u8 byte_142;
};
GUEST_OFFSET(Local_00625798_r4_3, byte_44, 0x44);
GUEST_OFFSET(Local_00625798_r4_3, byte_142, 0x142);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00624c78, u32(u32, u32)> bit_for_index;
inline constexpr guest::Function<0x0075e7f8, u32(u32, u32, u32, u32)> all_entries_flagged;

u32 NetVisit__everyone_ready() {
    u32 r1_1 = *net_session;
    gptr<Local_00625798_r0_1> r0_1 = gptr<Local_00625798_r0_1>(r1_1 + 0x13000u);
    u32 r2_1 = r0_1->byte_29d;
    u32 r0_2 = r0_1->byte_268;
    if (r2_1 != 2u) {
        u32 r4_1 = r1_1 + 0x23cu;
        if (r0_2 == 0) {
            if (all_entries_flagged(r4_1 + 0xcu, r1_1, r2_1, guest::cpu()->r[3]) == 0) {
                return 0u;
            }
            if (*gptr<u8>(r4_1 + 0x253eu) != 0) {
                return 1u;
            }
            return 0u;
        }
        u32 r4_2 = *gptr<u8>(r4_1 + 0x10u);
        u32 bit = bit_for_index(r0_2, r1_1);
        return (bit & r4_2) != 0;
    }
    gptr<Local_00625798_r4_3> r4_3 = gptr<Local_00625798_r4_3>(r1_1 + 0x27a0u);
    if (r0_2 != 0) {
        u32 r1_4 = r1_1 + 0x27e0u;
        u32 r4_4 = *gptr<u8>(r1_4);
        u32 bit_2 = bit_for_index(r0_2, r1_4);
        return (bit_2 & r4_4) != 0;
    }
    if (r4_3->byte_44 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    u32 r0_8 = all_entries_flagged(r4_3.addr() + 0x3cu, r1_1, r2_1, guest::cpu()->r[3]);
    return !(r0_8 == 0 || r4_3->byte_142 == 0);
}

}  // namespace d_00625798
GUEST_EXPORT_FRAMED(0x00625798, d_00625798::NetVisit__everyone_ready, 0x4010);  // pushes {r4, lr} first, as the original

// f_00625870: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Packs a station state into 16 bits (kind, flag, entry id, two flags and the station).
namespace d_00625870 {

struct __attribute__((packed)) PackStationStateArg0 {
    u16 half_0;
};
GUEST_OFFSET(PackStationStateArg0, half_0, 0x0);

struct __attribute__((packed)) Local_00625870_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_00625870_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_00625870_ea_2, word_4, 0x4);


void pack_station_state(gptr<PackStationStateArg0> arg0, u32 r1, u32 r2, u32 r3) {
    if (arg0.addr() == 0) {
        return;
    }
    u32 r12_1 = *gptr<u32>(guest::cpu()->r[13] + 0x10u);
    gptr<Local_00625870_ea_2> ea_2 = gptr<Local_00625870_ea_2>(guest::cpu()->r[13] + 0x14u);
    u32 r1_1 = (((((r1 & 3u | u32(arg0->half_0) & ~3u) & ~4u | r2 << 2) & ~0x400u & ~0x3f8u | r3 << 3) & ~0x800u | r12_1 << 0xb) & ~0x1000u | ea_2->word_0 << 0xc) & ~0xe000u | 0xe000u & ea_2->word_4 << 0xd;
    arg0->half_0 = u16(r1_1);
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00625870
GUEST_EXPORT_FRAMED(0x00625870, d_00625870::pack_station_state, 0xf0);  // pushes {r4, r5, r6, r7} first, as the original

// f_0062593c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the word at +0 of the source.
namespace d_0062593c {

struct __attribute__((packed)) CopyWord0Arg0 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord0Arg0, word_0, 0x0);

struct __attribute__((packed)) CopyWord0Arg1 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord0Arg1, word_0, 0x0);


void copy_word_0(gptr<CopyWord0Arg0> arg0, gptr<CopyWord0Arg1> arg1) {
    u32 r1_1 = arg1->word_0;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0062593c
GUEST_EXPORT(0x0062593c, d_0062593c::copy_word_0);

// f_00625974: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Byte +0x1329c of the network session.
namespace d_00625974 {

inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__byte_1329c() {
    return *gptr<u8>(*net_session + 0x1329cu);
}

}  // namespace d_00625974
GUEST_EXPORT(0x00625974, d_00625974::NetSession__byte_1329c);

// f_0062598c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sends the ready record to the stations in the mask.
namespace d_0062598c {

struct __attribute__((packed)) Local_0062598c_r2_1 {
    u8 unknown_0[0x268];  // (not used here)
    u8 byte_268;
    u8 unknown_269[0x34];  // (not used here)
    u8 byte_29d;
};
GUEST_OFFSET(Local_0062598c_r2_1, byte_268, 0x268);
GUEST_OFFSET(Local_0062598c_r2_1, byte_29d, 0x29d);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> NetMessage__send;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00627f74, u32(u32)> PacketBuffer__reserve_record;
inline constexpr guest::Function<0x0062801c, u32(u32, u32, u32)> PacketBuffer__flush_record;

struct __attribute__((packed)) NetVisitSendReadyRecordFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
};
GUEST_OFFSET(NetVisitSendReadyRecordFrame, word_0, 0x0);
GUEST_OFFSET(NetVisitSendReadyRecordFrame, word_4, 0x4);
GUEST_OFFSET(NetVisitSendReadyRecordFrame, word_8, 0x8);
GUEST_OFFSET(NetVisitSendReadyRecordFrame, word_c, 0xc);
GUEST_OFFSET(NetVisitSendReadyRecordFrame, word_10, 0x10);
GUEST_SIZE(NetVisitSendReadyRecordFrame, 0x18);

u32 NetVisit__send_ready_record() {
    guest::StackFrameOf<NetVisitSendReadyRecordFrame> frame;  // the original's stack frame
    u32 r0_1 = *net_session;
    gptr<Local_0062598c_r2_1> r2_1 = gptr<Local_0062598c_r2_1>(r0_1 + 0x13000u);
    u32 r3_1 = r2_1->byte_29d;
    u32 r2_2 = r2_1->byte_268;
    if (r3_1 != 2u) {
        if (r2_2 == 0) {
            StationMask__add(r0_1 + 0x24cu, 0u);
            return 1u;
        }
        if (*gptr<u8>(r0_1 + 0x23du) != r2_2) {
            u32 r4_1 = r0_1 + 0x10u;
            PacketBuffer__reserve_record(r4_1);
            PacketBuffer__flush_record(r4_1, 0x21u, 0u);
            return 1u;
        }
        frame->word_8 = 0;
        frame->word_c = 0;
        frame->word_10 = 0;
        frame->word_0 = 0;
        frame->word_4 = 0x11;
        u32 r0_3 = NetMessage__send(r0_1, 0u, 0u, 0u);
        return r0_3 == 0 ? r0_3 : 1u;
    }
    if (r2_2 != 0) {
        u32 r3_2 = *gptr<u8>(r0_1 + 0x27a3u);
        if (r3_2 != r2_2) {
            if (r3_2 != 0) {
                u32 r4_2 = r0_1 + 0x10u;
                PacketBuffer__reserve_record(r4_2);
                PacketBuffer__flush_record(r4_2, 0x23u, 0u);
                return 1u;
            }
            frame->word_8 = 0;
            frame->word_c = 0;
            frame->word_10 = 0;
            frame->word_0 = 0;
            frame->word_4 = 0x15;
            u32 r0_4 = NetMessage__send(r0_1, 0u, 0u, 0u);
            return r0_4 == 0 ? r0_4 : 1u;
        }
        frame->word_8 = 0;
        frame->word_c = 0;
        frame->word_10 = 0;
        frame->word_0 = 0;
        frame->word_4 = 0x13;
        u32 r0_5 = NetMessage__send(r0_1, 0u, 0u, 0u);
        return r0_5 == 0 ? r0_5 : 1u;
    }
    StationMask__add(r0_1 + 0x27e0u, 0u);
    u32 r0_7 = *net_session;
    u32 r1_7 = *gptr<u8>(r0_7 + 0x27a3u);
    if (r1_7 != 0) {
        guest::cpu()->r[1] = r1_7;
        return 1u;
    }
    *gptr<u8>(r0_7 + 0x28e2u) = 1;
    guest::cpu()->r[1] = 1u;
    return 1u;
}

}  // namespace d_0062598c
GUEST_EXPORT_FRAMED(0x0062598c, d_0062598c::NetVisit__send_ready_record, 0x4010);  // pushes {r4, lr} first, as the original

// f_00625b28: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether byte +0x223 of the network session is clear.
namespace d_00625b28 {

inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__byte_223_is_clear() {
    return *gptr<u8>(*net_session + 0x223u) == 0;
}

}  // namespace d_00625b28
GUEST_EXPORT(0x00625b28, d_00625b28::NetSession__byte_223_is_clear);

// f_00625b50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes a station pair: no station (0xa5), slot 4.
namespace d_00625b50 {

struct __attribute__((packed)) InitPart0eArg0 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(InitPart0eArg0, byte_0, 0x0);
GUEST_OFFSET(InitPart0eArg0, byte_1, 0x1);


void init_part_0e(gptr<InitPart0eArg0> arg0) {
    arg0->byte_1 = 4;
    arg0->byte_0 = 0xa5;
    guest::cpu()->r[1] = 0xa5u;
}

}  // namespace d_00625b50
GUEST_EXPORT(0x00625b50, d_00625b50::init_part_0e);

// f_00625b64: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a station (below 4) and its entry id (below 0xa5).
namespace d_00625b64 {

struct __attribute__((packed)) StationEntry {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(StationEntry, byte_0, 0x0);
GUEST_OFFSET(StationEntry, byte_1, 0x1);


void StationEntry__set(gptr<StationEntry> station_entry, u32 r1, u32 r2) {
    if (r1 >= 4u || r2 >= 0xa5u) {
        return;
    } else {
        station_entry->byte_1 = u8(r1);
        station_entry->byte_0 = u8(r2);
    }
}

}  // namespace d_00625b64
GUEST_EXPORT(0x00625b64, d_00625b64::StationEntry__set);

// f_00625b84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a station entry (16 bits).
namespace d_00625b84 {

struct __attribute__((packed)) StationEntry {
    u16 half_0;
};
GUEST_OFFSET(StationEntry, half_0, 0x0);

struct __attribute__((packed)) StationEntryCopyArg1 {
    u16 half_0;
};
GUEST_OFFSET(StationEntryCopyArg1, half_0, 0x0);


void StationEntry__copy(gptr<StationEntry> station_entry, gptr<StationEntryCopyArg1> arg1) {
    station_entry->half_0 = arg1->half_0;
}

}  // namespace d_00625b84
GUEST_EXPORT(0x00625b84, d_00625b84::StationEntry__copy);

// f_00625b90: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a station entry (station 4, entry 0xa5).
namespace d_00625b90 {

struct __attribute__((packed)) StationEntry {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(StationEntry, byte_0, 0x0);
GUEST_OFFSET(StationEntry, byte_1, 0x1);


void StationEntry__clear_3(gptr<StationEntry> station_entry) {
    station_entry->byte_1 = 4;
    station_entry->byte_0 = 0xa5;
}

}  // namespace d_00625b90
GUEST_EXPORT(0x00625b90, d_00625b90::StationEntry__clear_3);

// f_00625c20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears station `index` (below 4): entry 0xa5, station 4.
namespace d_00625c20 {


void clear_station_slot(u32 r0, u32 slot) {
    if (slot >= 4u) {
        return;
    }
    *gptr<u8>(r0 + slot) = 0xa5;
    *gptr<u8>(r0 + slot + 4u) = 4;
}

}  // namespace d_00625c20
GUEST_EXPORT(0x00625c20, d_00625c20::clear_station_slot);

// f_00625c40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Initializes four station pairs: no station (0xa5), slot 4.
namespace d_00625c40 {


void init_part_06(u32 r0) {
    u32 i = 0u;
    u32 r3 = 0xa5u;
    u32 r12 = 4u;
    do {
        u32 r2_1 = i & 0xffu;
        if (r2_1 < 4u) {
            *gptr<u8>(r0 + r2_1) = u8(r3);
            *gptr<u8>(r0 + r2_1 + 4u) = u8(r12);
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_00625c40
GUEST_EXPORT_FRAMED(0x00625c40, d_00625c40::init_part_06, 0x30);  // pushes {r4, r5} first, as the original

// f_00625c7c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the four station slots (entries 0xa5, stations 4).
namespace d_00625c7c {


void clear_station_slots(u32 r0) {
    u32 i = 0u;
    u32 r4 = 0xa5u;
    u32 r12 = 4u;
    do {
        u32 r3_1 = i & 0xffu;
        if (r3_1 < 4u) {
            *gptr<u8>(r0 + r3_1) = u8(r4);
            *gptr<u8>(r0 + r3_1 + 4u) = u8(r12);
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
}

}  // namespace d_00625c7c
GUEST_EXPORT_FRAMED(0x00625c7c, d_00625c7c::clear_station_slots, 0x30);  // pushes {r4, r5} first, as the original

// f_00625da4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a small packet (station 4, size 0).
namespace d_00625da4 {

struct __attribute__((packed)) SmallPacket {
    u8 byte_0;
    u8 unknown_1[0x7];  // (not used here)
    u32 word_8;
};
GUEST_OFFSET(SmallPacket, byte_0, 0x0);
GUEST_OFFSET(SmallPacket, word_8, 0x8);


void SmallPacket__reset(gptr<SmallPacket> small_packet) {
    small_packet->word_8 = 0;
    small_packet->byte_0 = 4;
    guest::cpu()->r[1] = 4u;
}

}  // namespace d_00625da4
GUEST_EXPORT(0x00625da4, d_00625da4::SmallPacket__reset);

// f_00625db8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 5 payload bytes into the packet's buffer (+4) and keeps the size (+8).
namespace d_00625db8 {

struct __attribute__((packed)) SmallPacket {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SmallPacket, word_4, 0x4);
GUEST_OFFSET(SmallPacket, word_8, 0x8);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void SmallPacket__set_payload(gptr<SmallPacket> small_packet, u32 r1, u32 r2) {
    if (r1 == 0 || r2 > 5u) {
        return;
    }
    u32 r0_1 = small_packet->word_4;
    if (r0_1 != 0) {
        if (r2 != 0) {
            copy_bytes_at_any_alignment(r0_1, r1, r2);
        }
        small_packet->word_8 = r2;
    }
}

}  // namespace d_00625db8
GUEST_EXPORT_FRAMED(0x00625db8, d_00625db8::SmallPacket__set_payload, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00625e2c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a small packet (station 4, no buffer, size 0).
namespace d_00625e2c {

struct __attribute__((packed)) SmallPacket {
    u8 byte_0;
    u8 unknown_1[0x3];  // (not used here)
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(SmallPacket, byte_0, 0x0);
GUEST_OFFSET(SmallPacket, word_4, 0x4);
GUEST_OFFSET(SmallPacket, word_8, 0x8);


void SmallPacket__clear(gptr<SmallPacket> small_packet) {
    small_packet->byte_0 = 4;
    small_packet->word_4 = 0;
    small_packet->word_8 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00625e2c
GUEST_EXPORT(0x00625e2c, d_00625e2c::SmallPacket__clear);

// f_00625ee4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 5 bytes into the buffer (+0) and keeps the size (+4).
namespace d_00625ee4 {

struct __attribute__((packed)) SmallPayload {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SmallPayload, word_0, 0x0);
GUEST_OFFSET(SmallPayload, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void SmallPayload__set(gptr<SmallPayload> small_payload, u32 r1, u32 r2) {
    if (r1 == 0 || r2 > 5u) {
        return;
    }
    u32 r0_1 = small_payload->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            copy_bytes_at_any_alignment(r0_1, r1, r2);
        }
        small_payload->word_4 = r2;
    }
}

}  // namespace d_00625ee4
GUEST_EXPORT_FRAMED(0x00625ee4, d_00625ee4::SmallPayload__set, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00625f84: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the word at +0 of the source.
namespace d_00625f84 {

struct __attribute__((packed)) CopyWord02Arg0 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord02Arg0, word_0, 0x0);

struct __attribute__((packed)) CopyWord02Arg1 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord02Arg1, word_0, 0x0);


void copy_word_0_2(gptr<CopyWord02Arg0> arg0, gptr<CopyWord02Arg1> arg1) {
    u32 r1_1 = arg1->word_0;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00625f84
GUEST_EXPORT(0x00625f84, d_00625f84::copy_word_0_2);

// f_0062607c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 5 bytes into the buffer (+0) and keeps the size (+4).
namespace d_0062607c {

struct __attribute__((packed)) SmallPayload {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SmallPayload, word_0, 0x0);
GUEST_OFFSET(SmallPayload, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void SmallPayload__set_2(gptr<SmallPayload> small_payload, u32 r1, u32 r2) {
    if (r1 == 0 || r2 > 5u) {
        return;
    }
    u32 r0_1 = small_payload->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            copy_bytes_at_any_alignment(r0_1, r1, r2);
        }
        small_payload->word_4 = r2;
    }
}

}  // namespace d_0062607c
GUEST_EXPORT_FRAMED(0x0062607c, d_0062607c::SmallPayload__set_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00626118: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies the word at +0 of the source.
namespace d_00626118 {

struct __attribute__((packed)) CopyWord03Arg0 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord03Arg0, word_0, 0x0);

struct __attribute__((packed)) CopyWord03Arg1 {
    u32 word_0;
};
GUEST_OFFSET(CopyWord03Arg1, word_0, 0x0);


void copy_word_0_3(gptr<CopyWord03Arg0> arg0, gptr<CopyWord03Arg1> arg1) {
    u32 r1_1 = arg1->word_0;
    arg0->word_0 = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00626118
GUEST_EXPORT(0x00626118, d_00626118::copy_word_0_3);

// f_0062613c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The rank of station `station` among the connected stations (how many connected ones come before it); 4 when it is
// not connected.
namespace d_0062613c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x0075dfb4, u32(u32, u32)> session_has_station;
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> NetSession__signed_value;

u32 NetSession__station_rank(u32 net_session, u32 r1) {
    u32 r5 = net_session;
    u32 r7 = net_session_address;
    u32 r0_2 = NetSession__signed_value(*gptr<u32>(r7), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (r0_2 != 0 && r5 < 4u) {
        if (session_has_station(*gptr<u32>(r7), r5) != 0) {
            u32 r6 = 0u;
            u32 i = r6;
            do {
                u32 r1_2 = i & 0xffu;
                if (r1_2 == r5) {
                    guest::cpu()->r[1] = r1_2;
                    return r6;
                }
                if (session_has_station(*gptr<u32>(r7), r1_2) != 0) {
                    r6 += 1u;
                }
                i += 1u;
                guest::preempt();
            } while (s32(i) < 4);
        }
    }
    return 4u;
}

}  // namespace d_0062613c
GUEST_EXPORT_FRAMED(0x0062613c, d_0062613c::NetSession__station_rank, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_006261b8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the visit has started (+0x28e1 for visit kind 2, else +0x2779).
namespace d_006261b8 {

struct __attribute__((packed)) Local_006261b8_r0_1 {
    u8 unknown_0[0x2779];  // (not used here)
    u8 byte_2779;
    u8 unknown_277a[0x167];  // (not used here)
    u8 byte_28e1;
};
GUEST_OFFSET(Local_006261b8_r0_1, byte_2779, 0x2779);
GUEST_OFFSET(Local_006261b8_r0_1, byte_28e1, 0x28e1);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__visit_started() {
    gptr<Local_006261b8_r0_1> r0_1 = gptr<Local_006261b8_r0_1>(*net_session);
    u32 r1_1 = *gptr<u8>(r0_1.addr() + 0x1329du);
    if (r1_1 != 2u) {
        if (r0_1->byte_2779 == 0) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    if (r0_1->byte_28e1 != 0) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_006261b8
GUEST_EXPORT(0x006261b8, d_006261b8::NetSession__visit_started);

// f_0062624c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006184d8 on the network session.
namespace d_0062624c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x006184d8, u32(u32, u32, u32, u32)> NetSession__close_result;

u32 net_session_call_6184d8() {
    return NetSession__close_result(*net_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062624c
GUEST_EXPORT(0x0062624c, d_0062624c::net_session_call_6184d8);

// f_0062625c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the session's close state (+0x1f0) from 0 or 1 to 2; true when it did.
namespace d_0062625c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__try_begin_close() {
    for (;;) {
        u32 r0 = *net_session;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u8>(r0 + 0x1f0u);
        if (r0_1 != 0 && r0_1 != 1u) {
            guest::cpu()->r[1] = r0;
            return 0u;
        }
        *gptr<u8>(r0 + 0x1f0u) = 2;
        *gptr<u8>(r0 + 0x1f1u) = 0;
        guest::cpu()->r[1] = r0;
        return 1u;
        guest::preempt();
    }
}

}  // namespace d_0062625c
GUEST_EXPORT(0x0062625c, d_0062625c::NetSession__try_begin_close);

// f_0062626c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets +0x223 of the network session.
namespace d_0062626c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__set_byte_223() {
    u32 r0_1 = *net_session;
    *gptr<u8>(r0_1 + 0x223u) = 1;
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_0062626c
GUEST_EXPORT(0x0062626c, d_0062626c::NetSession__set_byte_223);

// f_00626284: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// As the host: sends the announcement record (0x16); as a guest: adds station 0 to the waited mask.
namespace d_00626284 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00617840, u32(u32, u32, u32, u32)> NetMessage__send;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32)> StationMask__add;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

struct __attribute__((packed)) NetSessionAnnounceOrWaitFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u8 unknown_14[0xc];  // (not read or written by name)
};
GUEST_OFFSET(NetSessionAnnounceOrWaitFrame, word_0, 0x0);
GUEST_OFFSET(NetSessionAnnounceOrWaitFrame, word_4, 0x4);
GUEST_OFFSET(NetSessionAnnounceOrWaitFrame, word_8, 0x8);
GUEST_OFFSET(NetSessionAnnounceOrWaitFrame, word_c, 0xc);
GUEST_OFFSET(NetSessionAnnounceOrWaitFrame, word_10, 0x10);
GUEST_SIZE(NetSessionAnnounceOrWaitFrame, 0x20);

void NetSession__announce_or_wait(u32 r0_unused, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetSessionAnnounceOrWaitFrame> frame;  // the original's stack frame
    if (NetSession__station(*net_session, r1, r2, r3) != 0) {
        frame->word_0 = 0;
        frame->word_4 = 0x16;
        frame->word_8 = 0;
        frame->word_c = 0;
        frame->word_10 = 0;
        NetMessage__send(*net_session, 0u, 0u, 0u);
        return;
    }
    u32 r0_4 = *net_session;
    frame.release();
    StationMask__add(r0_4 + 0x234u, 0u);
    return;
}

}  // namespace d_00626284
GUEST_EXPORT(0x00626284, d_00626284::NetSession__announce_or_wait);

// f_006262f0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets +0x20b of the network session.
namespace d_006262f0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__set_byte_20b() {
    u32 r0_1 = *net_session;
    *gptr<u8>(r0_1 + 0x20bu) = 1;
    guest::cpu()->r[1] = 1u;
    return r0_1;
}

}  // namespace d_006262f0
GUEST_EXPORT(0x006262f0, d_006262f0::NetSession__set_byte_20b);

// f_00626308: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the session state (+0x214) is 0xb.
namespace d_00626308 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__state_is_b() {
    return *gptr<u8>(*net_session + 0x214u) == 0xbu;
}

}  // namespace d_00626308
GUEST_EXPORT(0x00626308, d_00626308::NetSession__state_is_b);

// f_00626318: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the session's close state (+0x1f0) from 0 or 1 to 2 with reason 1; true when it did.
namespace d_00626318 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__try_begin_close_1() {
    for (;;) {
        u32 r0 = *net_session;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u8>(r0 + 0x1f0u);
        if (r0_1 != 0 && r0_1 != 1u) {
            guest::cpu()->r[1] = r0;
            return 0u;
        }
        *gptr<u8>(r0 + 0x1f0u) = 2;
        *gptr<u8>(r0 + 0x1f1u) = 1;
        guest::cpu()->r[1] = r0;
        return 1u;
        guest::preempt();
    }
}

}  // namespace d_00626318
GUEST_EXPORT(0x00626318, d_00626318::NetSession__try_begin_close_1);

// f_00626328: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// As the host: whether every connected guest (and the given station) passes 00618ecc; false as a guest.
namespace d_00626328 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline constexpr guest::Function<0x00618ecc, u32(u32, u32, u32, u32)> NetSession__station_link_ok;
inline constexpr guest::Function<0x0075dfb4, u32(u32, u32, u32, u32)> session_has_station;
inline constexpr guest::Function<0x0075dfe8, u32(u32, u32, u32, u32)> NetSession__station;

u32 NetSession__guests_ready(u32 net_session, u32 r1, u32 r2, u32 r3) {
    u32 r0_6 = 0;
    u32 r6 = net_session;
    u32 r7 = net_session_address;
    u32 r0_2 = NetSession__station(*gptr<u32>(r7), r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if (r0_2 == 0) {
        u32 i = 0u;
        do {
            u32 r5_1 = i & 0xffu;
            if (r5_1 != 0) {
                u32 r0_4 = session_has_station(*gptr<u32>(r7), r5_1, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                if (r0_4 != 0 || r6 == r5_1) {
                    r0_6 = NetSession__station_link_ok(*gptr<u32>(r7), r5_1, 0u, 0u);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                    if (r0_6 == 0) {
                        return r0_6;
                    }
                }
            }
            i += 1u;
            guest::preempt();
        } while (s32(i) < 4);
        r0_6 = 1u;
    } else {
        r0_6 = 0u;
    }
    guest::cpu()->r[1] = r1;
    return r0_6;
}

}  // namespace d_00626328
GUEST_EXPORT_FRAMED(0x00626328, d_00626328::NetSession__guests_ready, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_006263ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets the session's guest station (+0x1e5) to none (4).
namespace d_006263ac {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__clear_guest_station() {
    u32 r0_1 = *net_session;
    *gptr<u8>(r0_1 + 0x1e5u) = 4;
    guest::cpu()->r[1] = 4u;
    return r0_1;
}

}  // namespace d_006263ac
GUEST_EXPORT(0x006263ac, d_006263ac::NetSession__clear_guest_station);

// f_00626454: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a packet (size 0, station 4, flag 0).
namespace d_00626454 {

struct __attribute__((packed)) SmallPacket2 {
    u8 unknown_0[0x4];  // (not used here)
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(SmallPacket2, word_4, 0x4);
GUEST_OFFSET(SmallPacket2, byte_8, 0x8);
GUEST_OFFSET(SmallPacket2, byte_9, 0x9);


void SmallPacket2__reset(gptr<SmallPacket2> small_packet2) {
    small_packet2->word_4 = 0;
    small_packet2->byte_8 = 4;
    small_packet2->byte_9 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00626454
GUEST_EXPORT(0x00626454, d_00626454::SmallPacket2__reset);

// f_0062646c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 5 bytes into the buffer (+0) and keeps the size (+4).
namespace d_0062646c {

struct __attribute__((packed)) SmallPayload {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SmallPayload, word_0, 0x0);
GUEST_OFFSET(SmallPayload, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void SmallPayload__set_3(gptr<SmallPayload> small_payload, u32 r1, u32 r2) {
    if (r2 > 5u || r1 == 0) {
        return;
    }
    u32 r0_1 = small_payload->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            copy_bytes_at_any_alignment(r0_1, r1, r2);
        }
        small_payload->word_4 = r2;
    }
}

}  // namespace d_0062646c
GUEST_EXPORT_FRAMED(0x0062646c, d_0062646c::SmallPayload__set_3, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006264e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a packet (no buffer, size 0, station 4, flag 0).
namespace d_006264e0 {

struct __attribute__((packed)) SmallPacket2 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
};
GUEST_OFFSET(SmallPacket2, word_0, 0x0);
GUEST_OFFSET(SmallPacket2, word_4, 0x4);
GUEST_OFFSET(SmallPacket2, byte_8, 0x8);
GUEST_OFFSET(SmallPacket2, byte_9, 0x9);


void SmallPacket2__clear(gptr<SmallPacket2> small_packet2) {
    small_packet2->word_0 = 0;
    small_packet2->word_4 = 0;
    small_packet2->byte_8 = 4;
    small_packet2->byte_9 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_006264e0
GUEST_EXPORT(0x006264e0, d_006264e0::SmallPacket2__clear);

// f_006265d0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to 5 bytes into the buffer (+0) and keeps the size (+4).
namespace d_006265d0 {

struct __attribute__((packed)) SmallPayload {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(SmallPayload, word_0, 0x0);
GUEST_OFFSET(SmallPayload, word_4, 0x4);

inline constexpr guest::Function<0x002f8574, u32(u32, u32, u32)> copy_bytes_at_any_alignment;

void SmallPayload__set_4(gptr<SmallPayload> small_payload, u32 r1, u32 r2) {
    if (r1 == 0 || r2 > 5u) {
        return;
    }
    u32 r0_1 = small_payload->word_0;
    if (r0_1 != 0) {
        if (r2 != 0) {
            copy_bytes_at_any_alignment(r0_1, r1, r2);
        }
        small_payload->word_4 = r2;
    }
}

}  // namespace d_006265d0
GUEST_EXPORT_FRAMED(0x006265d0, d_006265d0::SmallPayload__set_4, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006267a4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00618728 on the network session with the arguments.
namespace d_006267a4 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00618728, u32(u32, u32, u32, u32)> NetSession__connect;

u32 net_session_call_618728(u32 r0, u32 r1, u32 r2) {
    return NetSession__connect(*net_session, r0, r1, r2);
}

}  // namespace d_006267a4
GUEST_EXPORT(0x006267a4, d_006267a4::net_session_call_618728);

// f_006267c0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether +0x23b of the network session is set.
namespace d_006267c0 {

inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__byte_23b_is_set() {
    u32 r0_1 = *gptr<u8>(*net_session + 0x23bu);
    if (r0_1 != 0) {
        r0_1 = 1u;
    }
    return r0_1;
}

}  // namespace d_006267c0
GUEST_EXPORT(0x006267c0, d_006267c0::NetSession__byte_23b_is_set);

// f_0062680c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Moves the session's close state (+0x1f0) from 0 or 1 to 2 with reason 2; true when it did.
namespace d_0062680c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__try_begin_close_2() {
    for (;;) {
        u32 r0 = *net_session;
        if (!1) {
            break;
        }
        u32 r0_1 = *gptr<u8>(r0 + 0x1f0u);
        if (r0_1 != 0 && r0_1 != 1u) {
            guest::cpu()->r[1] = r0;
            return 0u;
        }
        *gptr<u8>(r0 + 0x1f0u) = 2;
        *gptr<u8>(r0 + 0x1f1u) = 2;
        guest::cpu()->r[1] = r0;
        return 1u;
        guest::preempt();
    }
}

}  // namespace d_0062680c
GUEST_EXPORT(0x0062680c, d_0062680c::NetSession__try_begin_close_2);

// f_0062681c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the guest station is gone: no valid session, no guest, or 0075f63c no longer finds it.
namespace d_0062681c {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x0075e048, u32(u32, u32, u32, u32)> NetSession__signed_value;
inline constexpr guest::Function<0x0075f63c, u32(u32, u32, u32)> NetSession__player_identity;

u32 NetSession__guest_gone(u32 r0_unused, u32 r1, u32 r2) {
    if (NetSession__signed_value(*net_session, r1, r2, guest::cpu()->r[3]) == 0) {
        return 1u;
    }
    u32 r0_3 = *net_session;
    u32 r1_2 = *gptr<u8>(r0_3 + 0x1329du) == 2u ? u32(*gptr<u8>(r0_3 + 0x27a3u)) : u32(*gptr<u8>(r0_3 + 0x23du));
    if (r1_2 >= 4u) {
        guest::cpu()->r[1] = r1_2;
        return 1u;
    }
    return NetSession__player_identity(r0_3, r1_2, 1u) == 0;
}

}  // namespace d_0062681c
GUEST_EXPORT_FRAMED(0x0062681c, d_0062681c::NetSession__guest_gone, 0x4010);  // pushes {r4, lr} first, as the original

// f_00626880: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the guest has arrived (state past 4, or past 8 for the second visit kind).
namespace d_00626880 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;

u32 NetSession__guest_arrived() {
    for (;;) {
        u32 r0 = *net_session;
        if (!1) {
            break;
        }
        u32 r1_1 = *gptr<u8>(r0 + 0x1e5u);
        if (r1_1 >= 4u) {
            guest::cpu()->r[1] = r1_1;
            return 0u;
        }
        u32 r0_1 = *gptr<u8>(r0 + 0x214u);
        u32 r1_3 = *gptr<u8>((r0 + 0x13000u) + 0x268u);
        if (r1_3 != 0) {
            if (r0_1 <= 8u) {
                guest::cpu()->r[1] = r1_3;
                return 0u;
            }
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
        if (r0_1 > 4u) {
            guest::cpu()->r[1] = r1_3;
            return 1u;
        }
        guest::cpu()->r[1] = r1_3;
        return 0u;
        guest::preempt();
    }
}

}  // namespace d_00626880
GUEST_EXPORT(0x00626880, d_00626880::NetSession__guest_arrived);

// f_00626890: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00618930 on the network session.
namespace d_00626890 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00618930, u32(u32, u32, u32, u32)> NetSession__reset;

u32 net_session_call_618930() {
    return NetSession__reset(*net_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626890
GUEST_EXPORT(0x00626890, d_00626890::net_session_call_618930);

// f_006268a0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 006189d0 on the network session.
namespace d_006268a0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x006189d0, u32(u32, u32)> NetSession__request_close;

u32 net_session_call_6189d0() {
    return NetSession__request_close(*net_session, guest::cpu()->r[1]);
}

}  // namespace d_006268a0
GUEST_EXPORT(0x006268a0, d_006268a0::net_session_call_6189d0);

// f_006268b0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00618a1c on the network session with a value.
namespace d_006268b0 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00618a1c, u32(u32, u32, u32, u32)> NetSession__check_component;

u32 net_session_call_618a1c(u32 r0) {
    return NetSession__check_component(*net_session, r0, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_006268b0
GUEST_EXPORT(0x006268b0, d_006268b0::net_session_call_618a1c);

// f_006268c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the session's record at +0x28ec and checks network part 3.
namespace d_006268c4 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00629438, u32(u32, u32)> part_check_9438;
inline constexpr guest::Function<0x0062bce0, u32(u32)> store_constants_62bce0;

void NetSession__reset_part_3() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    store_constants_62bce0(*net_session + 0x28ecu);
    u32 r0_2 = *net_session;
    frame.release();
    part_check_9438(r0_2 + 0x7874u, 3u);
    return;
}

}  // namespace d_006268c4
GUEST_EXPORT(0x006268c4, d_006268c4::NetSession__reset_part_3);

// f_00626930: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the session's record at +0x28ec and handles network part 3.
namespace d_00626930 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x006295d8, u32(u32, u32)> PartMask__claim;
inline constexpr guest::Function<0x0062bce0, u32(u32)> store_constants_62bce0;

u32 NetSession__handle_part_3() {
    guest::StackFrame frame(0x8);  // the original's stack frame
    store_constants_62bce0(*net_session + 0x28ecu);
    u32 r0_2 = *net_session;
    frame.release();
    return PartMask__claim(r0_2 + 0x7874u, 3u);
}

}  // namespace d_00626930
GUEST_EXPORT(0x00626930, d_00626930::NetSession__handle_part_3);

// f_0062697c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// For station `index` (below 4): releases its two template kinds (tables 0x881b8c and 0x881b90).
namespace d_0062697c {

struct __attribute__((packed)) RoomTimers {
    u8 unknown_0[0x881b8c];  // (not used here)
    u8 byte_881b8c;
    u8 unknown_881b8d[0x3];  // (not used here)
    u8 byte_881b90;
};
GUEST_OFFSET(RoomTimers, byte_881b8c, 0x881b8c);
GUEST_OFFSET(RoomTimers, byte_881b90, 0x881b90);

inline constexpr guest::Function<0x00626964, u32(u32, u32, u32, u32)> NetSession__send_veneer;

u32 release_station_templates(gptr<RoomTimers> room_timers) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    if (room_timers.addr() >= 4u) {
        return room_timers.addr();
    }
    u32 r0_1 = room_timers->byte_881b8c;
    NetSession__send_veneer(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_2 = room_timers->byte_881b90;
    frame.release();
    return NetSession__send_veneer(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_0062697c
GUEST_EXPORT(0x0062697c, d_0062697c::release_station_templates);

// f_00626bc8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Calls 00626a9c on the network session.
namespace d_00626bc8 {

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00626a9c, u32(u32, u32, u32, u32)> NetSession__refresh_local_entry;

void net_session_call_626a9c() {
    NetSession__refresh_local_entry(*net_session, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626bc8
GUEST_EXPORT(0x00626bc8, d_00626bc8::net_session_call_626a9c);

// f_00626bd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// After station `index` left: releases its templates, resets the global block, the NPC packets and its room data; when
// no station remains, resets the NPC share info.
namespace d_00626bd8 {

inline constexpr u32 npc_net_packet_mgr_instance_address = 0x00953864u;
inline constexpr u32 npc_net_share_info_instance_address = 0x0095386cu;
inline guest::global<u32, 0x00953864> npc_net_packet_mgr_instance;
inline guest::global<u32, 0x0095386c> npc_net_share_info_instance;
inline constexpr guest::Function<0x0029ce80, u32(u32)> NetEntries63__reset_and_share;
inline constexpr guest::Function<0x002c2078, u32(u32, u32)> DrawFlags__init;
inline constexpr guest::Function<0x00308238, u32(u32)> reset_global_block_a;
inline constexpr guest::Function<0x004e7d38, u32(u32, u32)> RoomTimers__stop;
inline constexpr guest::Function<0x0062697c, u32(u32, u32, u32, u32)> release_station_templates;

u32 on_station_left(u32 room_timers, gptr<StationMask> station_mask) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    reset_global_block_a(release_station_templates(room_timers, station_mask.addr(), guest::cpu()->r[2], guest::cpu()->r[3]));
    NetEntries63__reset_and_share(*npc_net_packet_mgr_instance);
    RoomTimers__stop(room_timers, 0u);
    u32 count = station_mask->count;
    if (count == 0) {
        u32 draw_flags = *npc_net_share_info_instance;
        frame.release();
        return DrawFlags__init(draw_flags, guest::cpu()->r[1]);
    }
    return count;
}

}  // namespace d_00626bd8
GUEST_EXPORT(0x00626bd8, d_00626bd8::on_station_left);

// f_00626ca4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Sets +0x221 of the network session.
namespace d_00626ca4 {

inline guest::global<u32, 0x0095362c> net_session;

void NetSession__set_byte_221() {
    *gptr<u8>(*net_session + 0x221u) = 1;
    guest::cpu()->r[1] = 1u;
}

}  // namespace d_00626ca4
GUEST_EXPORT(0x00626ca4, d_00626ca4::NetSession__set_byte_221);

// f_00626cbc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the peer and stores its address pair (+8), clearing its host link.
namespace d_00626cbc {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(NetPeer, word_8, 0x8);
GUEST_OFFSET(NetPeer, word_c, 0xc);
GUEST_OFFSET(NetPeer, word_10, 0x10);

struct __attribute__((packed)) NetPeerSetAddressArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetPeerSetAddressArg1, word_0, 0x0);
GUEST_OFFSET(NetPeerSetAddressArg1, word_4, 0x4);

inline constexpr guest::Function<0x0061a7b0, u32(u32)> NetPeer__reset;

void NetPeer__set_address(gptr<NetPeer> net_peer, gptr<NetPeerSetAddressArg1> arg1) {
    NetPeer__reset(net_peer.addr());
    u32 r1_1 = arg1->word_4;
    net_peer->word_8 = arg1->word_0;
    net_peer->word_c = r1_1;
    net_peer->word_10 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00626cbc
GUEST_EXPORT_FRAMED(0x00626cbc, d_00626cbc::NetPeer__set_address, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00626ce0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies a peer's id, two halves and address, clearing its host link.
namespace d_00626ce0 {

struct __attribute__((packed)) NetPeer {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
    u32 word_10;
};
GUEST_OFFSET(NetPeer, word_0, 0x0);
GUEST_OFFSET(NetPeer, half_4, 0x4);
GUEST_OFFSET(NetPeer, half_6, 0x6);
GUEST_OFFSET(NetPeer, word_8, 0x8);
GUEST_OFFSET(NetPeer, word_c, 0xc);
GUEST_OFFSET(NetPeer, word_10, 0x10);

struct __attribute__((packed)) NetPeerCopyArg1 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(NetPeerCopyArg1, word_0, 0x0);
GUEST_OFFSET(NetPeerCopyArg1, half_4, 0x4);
GUEST_OFFSET(NetPeerCopyArg1, half_6, 0x6);
GUEST_OFFSET(NetPeerCopyArg1, word_8, 0x8);
GUEST_OFFSET(NetPeerCopyArg1, word_c, 0xc);


void NetPeer__copy(gptr<NetPeer> net_peer, gptr<NetPeerCopyArg1> arg1) {
    net_peer->word_0 = arg1->word_0;
    net_peer->half_4 = arg1->half_4;
    net_peer->half_6 = arg1->half_6;
    u32 r2_1 = arg1->word_c;
    net_peer->word_8 = arg1->word_8;
    net_peer->word_c = r2_1;
    net_peer->word_10 = 0;
}

}  // namespace d_00626ce0
GUEST_EXPORT(0x00626ce0, d_00626ce0::NetPeer__copy);

// f_00626d14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the peer and releases its host link (+0x10) when it has one.
namespace d_00626d14 {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x10];  // (not used here)
    u32 word_10;
};
GUEST_OFFSET(NetPeer, word_10, 0x10);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0051ac04, u32(u32, u32)> RequestPool__release_2;
inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> NetPeer__reset;

void NetPeer__release(gptr<NetPeer> net_peer, u32 r1) {
    NetPeer__reset(net_peer.addr(), r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r1_1 = net_peer->word_10;
    if (r1_1 != 0) {
        RequestPool__release_2(request_pool_address, r1_1);
        r1_1 = guest::cpu()->r[1];
    }
    net_peer->word_10 = 0;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_00626d14
GUEST_EXPORT_FRAMED(0x00626d14, d_00626d14::NetPeer__release, 0x4010);  // pushes {r4, lr} first, as the original

// f_00626d40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Connects the peer when its address is set: drops a dead host link, then opens a new one; true when linked.
namespace d_00626d40 {

struct __attribute__((packed)) NetPeer {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
    u32 link_sub;
};
GUEST_OFFSET(NetPeer, word_8, 0x8);
GUEST_OFFSET(NetPeer, word_c, 0xc);
GUEST_OFFSET(NetPeer, link_sub, 0x10);

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0051aa84, u32(u32, u32)> RequestPool__release;
inline constexpr guest::Function<0x0051ad60, u32(u32, u32, u32, u32)> RequestPool__acquire;
inline constexpr guest::Function<0x007475e0, u32(u32, u32, u32, u32)> LinkSub__state_locked;

u32 NetPeer__connect(gptr<NetPeer> net_peer, u32 r1, u32 r2) {
    u32 r0 = net_peer.addr();
    u32 r3_1 = ~2u;
    u32 r2_1 = ~0u;
    u32 r1_1 = net_peer->word_c ^ r2_1;
    if ((net_peer->word_8 ^ r3_1 | r1_1) != 0) {
        u32 link_sub = net_peer->link_sub;
        if (link_sub == 0) {
            goto L_626db0;
        }
        if (LinkSub__state_locked(link_sub, r1_1, r2_1, r3_1) != 0) {
            RequestPool__release(request_pool_address, net_peer->link_sub);
            net_peer->link_sub = 0;
            goto L_626db0;
        }
        if (net_peer->link_sub == 0) {
            goto L_626db0;
        }
    }
    return 0u;
L_626db0:;
    u32 r0_3 = RequestPool__acquire(request_pool_address, r0 + 8u, r1, r2);
    net_peer->link_sub = r0_3;
    if (r0_3 != 0) {
        r0_3 = 1u;
    }
    return r0_3;
}

}  // namespace d_00626d40
GUEST_EXPORT_FRAMED(0x00626d40, d_00626d40::NetPeer__connect, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00626df0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Creates the net game manager on the net game heap and hands it to the session.
namespace d_00626df0 {

inline constexpr u32 net_game_heap_address = 0x00952ca0u;
inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x00952ca0> net_game_heap;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x006177bc, u32(u32, u32, u32, u32)> netgame__NetGameMgr__create_instance;
inline constexpr guest::Function<0x00618dd4, u32(u32, u32, u32, u32)> NetSession__start;

u32 create_net_game_mgr(u32 r0_unused, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r4_1 = *net_game_heap;
    if (r4_1 == 0) {
        return net_game_heap_address;
    }
    netgame__NetGameMgr__create_instance(r4_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    u32 r0_1 = *net_session;
    frame.release();
    return NetSession__start(r0_1, r4_1, guest::cpu()->r[2], guest::cpu()->r[3]);
}

}  // namespace d_00626df0
GUEST_EXPORT(0x00626df0, d_00626df0::create_net_game_mgr);

// f_00628518: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a network record (station 4).
namespace d_00628518 {

struct __attribute__((packed)) NetRecord {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u8 unknown_1c[0x10];  // (not used here)
    u8 byte_2c;
    u8 unknown_2d[0x13];  // (not used here)
    u32 word_40;
    u8 byte_44;
};
GUEST_OFFSET(NetRecord, word_0, 0x0);
GUEST_OFFSET(NetRecord, word_4, 0x4);
GUEST_OFFSET(NetRecord, word_8, 0x8);
GUEST_OFFSET(NetRecord, word_c, 0xc);
GUEST_OFFSET(NetRecord, word_10, 0x10);
GUEST_OFFSET(NetRecord, word_14, 0x14);
GUEST_OFFSET(NetRecord, word_18, 0x18);
GUEST_OFFSET(NetRecord, byte_2c, 0x2c);
GUEST_OFFSET(NetRecord, word_40, 0x40);
GUEST_OFFSET(NetRecord, byte_44, 0x44);


void NetRecord__clear(gptr<NetRecord> net_record) {
    net_record->word_0 = 0;
    net_record->word_4 = 0;
    net_record->word_8 = 0;
    net_record->word_c = 0;
    net_record->word_10 = 0;
    net_record->word_14 = 0;
    net_record->word_18 = 0;
    net_record->byte_2c = 4;
    net_record->word_40 = 0;
    net_record->byte_44 = 0;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_00628518
GUEST_EXPORT(0x00628518, d_00628518::NetRecord__clear);

// f_00628afc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stores a 16-bit value at 0x953600 and builds a word pointer to it.
namespace d_00628afc {

inline guest::global<u16, 0x00953600> net_value_953600;
inline constexpr guest::Function<0x00628b0c, u32(u32, u32)> script__WordCPtrSv__WordCPtrSv_00628b0c;

u32 set_net_value_953600(u32 r0_unused, u32 r1) {
    *net_value_953600 = u16(r1);
    return script__WordCPtrSv__WordCPtrSv_00628b0c(guest::cpu()->r[0], r1);
}

}  // namespace d_00628afc
GUEST_EXPORT(0x00628afc, d_00628afc::set_net_value_953600);

// f_00629438: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
namespace d_00629438 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x006295d8, u32(u32, u32)> PartMask__claim;
inline constexpr guest::Function<0x00629690, u32(u32, u32)> table_scan_629690;
inline constexpr guest::Function<0x0062bce0, u32(u32)> store_constants_62bce0;
inline constexpr guest::Function<0x00746f10, u32(u32, u32)> UnknownStateA22020__sub_check;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32)> PartMask__allows;

u32 part_check_9438(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r0_3 = 0;
    u32 r5_1 = r1;
    if (r1 != 3u) {
        if (r5_1 == 5u) {
            r0_1 = UnknownStateA22020__sub_check(request_pool_address, 1u);
            r1 = guest::cpu()->r[1];
        } else {
            r0_1 = UnknownStateA22020__sub_check(request_pool_address, 0u);
            r1 = guest::cpu()->r[1];
        }
        if (r0_1 == 0) {
            guest::cpu()->r[1] = r1;
            return r0_1;
        }
    }
    u32 r6_1 = lsl_r(1u, r5_1 & 0xff) & 0xffu;
    r0_1 = r6_1 & 0x3fu;
    if (r0_1 != 0) {
        u32 r0_2 = PartMask__allows(r0, r5_1);
        r1 = guest::cpu()->r[1];
        if (r0_2 != 0) {
            return 1u;
        }
        u32 r1_1 = *gptr<u8>(r0 + 9u);
        r0_3 = r6_1 & 0x3eu;
        if (r0_3 != 0) {
            r0_3 = 1u;
        }
        if (r1_1 != 0) {
            r1 = r1_1 & 0x3eu;
            if (r1 != 0) {
                r1 = 1u;
            }
            if (r1 == r0_3) {
                goto L_629588;
            }
            if (r0_3 != 0) {
                PartMask__claim(r0, 0u);
                r1 = guest::cpu()->r[1];
                return 0u;
            }
            PartMask__claim(r0, 1u);
            PartMask__claim(r0, 2u);
            PartMask__claim(r0, 3u);
            PartMask__claim(r0, 4u);
            PartMask__claim(r0, 5u);
            store_constants_62bce0(*net_session + 0x28ecu);
            r1 = guest::cpu()->r[1];
            return 0u;
        }
        r1 = *gptr<u8>(r0 + 8u);
        if (r1 == 0) {
            goto L_629588;
        }
        u32 r2_1 = r1 & 0x3eu;
        if (r2_1 != 0) {
            r2_1 = 1u;
        }
        if (r2_1 == r0_3) {
            goto L_629588;
        }
        r0_1 = r1 & 0x80u;
        if (r0_1 != 0) {
            table_scan_629690(r0, r6_1);
            r1 = guest::cpu()->r[1];
            r0_1 = 1u;
        }
    }
    guest::cpu()->r[1] = r1;
    return r0_1;
L_629588:;
    if (r0_3 == 0) {
        u32 r0_5 = *gptr<u8>(r0 + 8u);
        if (r0_5 == 0) {
            *gptr<u8>(r0 + 8u) = u8(r6_1);
            *gptr<u8>(r0 + 0xau) = 0;
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        if (r0_5 == r6_1) {
            guest::cpu()->r[1] = r1;
            return 1u;
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    table_scan_629690(r0, r6_1);
    r1 = guest::cpu()->r[1];
    return 1u;
}

}  // namespace d_00629438
GUEST_EXPORT_FRAMED(0x00629438, d_00629438::part_check_9438, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_006295d8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Claims a part (arg 1): when the part is allowed (parts 3 and 5 also by the request pool's checks),
// marks it taken (its high bit) in the mask; 1 when claimed.
namespace d_006295d8 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x00629690, u32(u32, u32)> table_scan_629690;
inline constexpr guest::Function<0x00746f10, u32(u32, u32, u32, u32)> UnknownStateA22020__sub_check;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32, u32, u32)> PartMask__allows;

u32 PartMask__claim(u32 r0, u32 r1) {
    u32 r0_1 = 0;
    u32 r5 = r0;
    u32 r4 = r1;
    if (r1 == 3u) {
        goto L_629608;
    }
    if (r4 == 5u) {
        goto L_629648;
    }
    r0 = UnknownStateA22020__sub_check(request_pool_address, 0u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
L_629600:;
    if (r0 == 0) {
        guest::cpu()->r[1] = r1;
        return r0;
    }
L_629608:;
    r0_1 = PartMask__allows(r5, r4, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    if (r0_1 != 0) {
        u32 r0_2 = lsl_r(1u, r4 & 0xff) & 0xffu;
        r1 = r0_2 | 0x80u;
        if ((r0_2 & 0x3eu) == 0) {
            goto L_629660;
        }
        table_scan_629690(r5, r1);
        r1 = guest::cpu()->r[1];
    }
    guest::cpu()->r[1] = r1;
    return 1u;
L_629648:;
    r0 = UnknownStateA22020__sub_check(request_pool_address, 1u, guest::cpu()->r[2], guest::cpu()->r[3]);
    r1 = guest::cpu()->r[1];
    guest::preempt();
    goto L_629600;
L_629660:;
    u32 r0_3 = *gptr<u8>(r5 + 8u);
    if (r0_3 != 0) {
        if (r0_3 == r1) {
            guest::cpu()->r[1] = r1;
            return 1u;
        } else {
        }
        guest::cpu()->r[1] = r1;
        return 0u;
    }
    *gptr<u8>(r5 + 8u) = u8(r1);
    *gptr<u8>(r5 + 0xau) = 0;
    guest::cpu()->r[1] = r1;
    return 1u;
}

}  // namespace d_006295d8
GUEST_EXPORT_FRAMED(0x006295d8, d_006295d8::PartMask__claim, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_00629690: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the table for the value.
namespace d_00629690 {


void table_scan_629690(u32 r0, u32 r1) {
    u32 res_1 = 0;
    u32 res_2 = 0;
    if ((r1 & 0x3fu) == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r12 = r1 & 0x7fu;
    u32 r5 = (r1 & 0x80u) >> 7;
    u32 r3 = r0 + 7u;
    u32 i = 7u;
    do {
        if (r12 == (u32(*gptr<u8>(r3)) & 0x7fu)) {
            if (r5 == (u32(*gptr<u8>(r3)) & 0x80u) >> 7) {
                guest::cpu()->r[1] = r1;
                return;
            }
            if (i >= 8u) {
                break;
            }
            r3 = r0 + i;
            i = 7u - i;
            if (s32(i) > 0) {
                r0 = r3;
                if ((i & 1u) != 0) {
                    *gptr<u8>(r0) = *gptr<u8>(r0 + 1u);
                    r0 = r3 + 1u;
                }
                r1 = s32(i) >> 1;
                if (r1 != 0) {
                    do {
                        u32 r12_1 = *gptr<u8>(r0 + 2u);
                        res_1 = r1 - 1u;
                        r1 = res_1;
                        *gptr<u8>(r0) = *gptr<u8>(r0 + 1u);
                        *gptr<u8>(r0 + 1u) = u8(r12_1);
                        r0 += 2u;
                        guest::preempt();
                    } while (res_1 != 0);
                }
                r3 += i;
            }
            *gptr<u8>(r3) = 0;
            guest::cpu()->r[1] = r1;
            return;
        }
        i -= 1u;
        res_2 = i + 1u;
        r3 -= 1u;
        guest::preempt();
    } while (res_2 != 0 && res_2 >> 0x1f == ((i ^ res_2) & (1u ^ res_2)) >> 0x1f);
    if (*gptr<u8>(r0 + 8u) != r1) {
        r3 = r0;
        i = 0u;
    } else {
        guest::cpu()->r[1] = r1;
        return;
    }
    do {
        if (*gptr<u8>(r3) == 0) {
            if (i >= 8u) {
                guest::cpu()->r[1] = r1;
                return;
            } else {
                *gptr<u8>(r0 + i) = u8(r1);
            }
            guest::cpu()->r[1] = r1;
            return;
        }
        i += 1u;
        r3 += 1u;
        guest::preempt();
    } while (s32(i) < 8);
    guest::cpu()->r[1] = r1;
}

}  // namespace d_00629690
GUEST_EXPORT_FRAMED(0x00629690, d_00629690::table_scan_629690, 0x30);  // pushes {r4, r5} first, as the original

// f_006297a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Stamps the current player into a record and sends it (0x10 bytes) through the link object at 0xa22020.
namespace d_006297a8 {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x0050d368, u32(u32, u32, u32)> script__WordPtrSv__WordPtrSv_0050d368;
inline constexpr guest::Function<0x00623f34, u32(u32)> PlayerStamp__stamp_current_player;
inline constexpr guest::Function<0x00623fb8, u32(u32, u32)> NetMessage__send_buffer;
inline constexpr guest::Function<0x00624008, u32(u32, u32, u32, u32)> construct_empty_player_stamp;
inline constexpr guest::Function<0x00624024, u32(u32)> construct_nothing_00624024;

void send_own_player_stamp(u32 r0_unused, u32 r1, u32 r2) {
    guest::StackFrame frame(0x34);  // the original's stack frame
    construct_empty_player_stamp(frame.at(0x28).addr(), r1, r2, guest::cpu()->r[3]);
    PlayerStamp__stamp_current_player(frame.at(0x28).addr());
    NetMessage__send_buffer(frame.at(0).addr(), frame.at(0x28).addr());
    script__WordPtrSv__WordPtrSv_0050d368(request_pool_address, frame.at(0).addr(), 0x10u);
    construct_nothing_00624024(request_pool_address);
}

}  // namespace d_006297a8
GUEST_EXPORT_FRAMED(0x006297a8, d_006297a8::send_own_player_stamp, 0x4000);  // pushes {lr} first, as the original

// f_006298a8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a peer list header (stations 4 and 4, state 3).
namespace d_006298a8 {

struct __attribute__((packed)) NetPeerList {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
    u8 byte_9;
    u8 byte_a;
};
GUEST_OFFSET(NetPeerList, word_0, 0x0);
GUEST_OFFSET(NetPeerList, word_4, 0x4);
GUEST_OFFSET(NetPeerList, byte_8, 0x8);
GUEST_OFFSET(NetPeerList, byte_9, 0x9);
GUEST_OFFSET(NetPeerList, byte_a, 0xa);


void NetPeerList__clear_header(gptr<NetPeerList> net_peer_list) {
    net_peer_list->word_0 = 0;
    net_peer_list->word_4 = 0;
    net_peer_list->byte_8 = 4;
    net_peer_list->byte_9 = 4;
    net_peer_list->byte_a = 3;
    guest::cpu()->r[1] = 0u;
}

}  // namespace d_006298a8
GUEST_EXPORT(0x006298a8, d_006298a8::NetPeerList__clear_header);

// f_006298cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finishes the list's part and stores this console's address (by link mode) as its own peer.
namespace d_006298cc {

inline constexpr u32 request_pool_address = 0x00a22020u;
inline constexpr guest::Function<0x00626cbc, u32(u32, u32)> NetPeer__set_address;
inline constexpr guest::Function<0x0062a724, u32(u32, u32, u32, u32)> NetPeerList__reset;
inline constexpr guest::Function<0x00746e74, u32(u32)> RequestPool__local_identity;
inline constexpr guest::Function<0x00746f3c, u32(u32)> RequestPool__session_key;
inline constexpr guest::Function<0x00746fb4, u32(u32)> UnknownStateA22020__mode_3_or_matching_values;

void NetPeerList__set_own_address(u32 net_peer_list, u32 r1) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 r0_2 = 0;
    NetPeerList__reset(net_peer_list, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
    if (UnknownStateA22020__mode_3_or_matching_values(request_pool_address) == 0) {
        r0_2 = RequestPool__session_key(request_pool_address);
    } else {
        r0_2 = RequestPool__local_identity(request_pool_address);
    }
    frame.release();
    NetPeer__set_address(net_peer_list + 8u, r0_2);
    return;
}

}  // namespace d_006298cc
GUEST_EXPORT(0x006298cc, d_006298cc::NetPeerList__set_own_address);

// f_0062a04c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Drops peer `index` (below 4, under the session lock): forgets its address in the table and releases its link.
namespace d_0062a04c {

struct __attribute__((packed)) NetEntry {
    u32 word_0;
    u8 unknown_4[0x8];  // (not used here)
    u32 word_c;
};
GUEST_OFFSET(NetEntry, word_0, 0x0);
GUEST_OFFSET(NetEntry, word_c, 0xc);

struct __attribute__((packed)) Local_0062a04c_r1_1 {
    u8 unknown_0[0x8];  // (not used here)
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0062a04c_r1_1, word_8, 0x8);
GUEST_OFFSET(Local_0062a04c_r1_1, word_c, 0xc);

struct __attribute__((packed)) Local_0062a04c_r3_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a04c_r3_1, word_0, 0x0);
GUEST_OFFSET(Local_0062a04c_r3_1, word_4, 0x4);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> NetPeer__release;
inline constexpr guest::Function<0x0062a550, u32(u32, u32, u32, u32)> NetPlayers__entry_of_identity;

struct __attribute__((packed)) NetPeerListDropPeerFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x18];  // (not read or written by name)
};
GUEST_OFFSET(NetPeerListDropPeerFrame, word_0, 0x0);
GUEST_OFFSET(NetPeerListDropPeerFrame, word_4, 0x4);
GUEST_SIZE(NetPeerListDropPeerFrame, 0x20);

void NetPeerList__drop_peer(u32 net_peer_list, u32 villager_table, u32 r2, u32 r3) {
    guest::StackFrameOf<NetPeerListDropPeerFrame> frame;  // the original's stack frame
    if (villager_table >= 4u) {
        guest::cpu()->r[1] = villager_table;
        return;
    }
    u32 r0_1 = *net_session + 0x13280u;
    lock_member_lock(r0_1, villager_table, r2, r3);
    gptr<Local_0062a04c_r3_1> r3_1 = gptr<Local_0062a04c_r3_1>(guest::cpu()->r[3]);
    u32 r2_1 = villager_table + (villager_table << 1);
    u32 r6_1 = net_peer_list + (r2_1 << 3);
    gptr<Local_0062a04c_r1_1> r1_1 = gptr<Local_0062a04c_r1_1>(r6_1 + 8u);
    if (r6_1 + 8u != 0) {
        r3_1 = gptr<Local_0062a04c_r3_1>(r1_1->word_8 ^ (~2u));
        r2_1 = r1_1->word_c ^ ~0u | r3_1.addr();
        if (r2_1 != 0) {
            u32 r2_2 = r1_1->word_c;
            frame->word_0 = r1_1->word_8;
            frame->word_4 = r2_2;
            u32 r1_2 = frame.at(0).addr();
            gptr<NetEntry> net_entry_2 = gptr<NetEntry>(NetPlayers__entry_of_identity(net_peer_list, r1_2, r2_2, r3_1.addr()));
            r1_1 = gptr<Local_0062a04c_r1_1>(guest::cpu()->r[1]);
            r2_1 = guest::cpu()->r[2];
            r3_1 = gptr<Local_0062a04c_r3_1>(guest::cpu()->r[3]);
            if (net_entry_2.addr() != 0) {
                r2_1 = ~2u;
                r3_1 = gptr<Local_0062a04c_r3_1>(net_entry_2.addr() + 4u);
                r1_1 = gptr<Local_0062a04c_r1_1>(~0u);
                net_entry_2->word_0 = r2_1;
                r3_1->word_0 = r1_1.addr();
                r3_1->word_4 = 0;
                net_entry_2->word_c = 0;
            }
        }
    }
    NetPeer__release(r6_1 + 8u, r1_1.addr(), r2_1, r3_1.addr());
    frame.release();
    unlock_member_lock(r0_1, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0062a04c
GUEST_EXPORT(0x0062a04c, d_0062a04c::NetPeerList__drop_peer);

// f_0062a18c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Updates the peer list: adds and removes stations, sets and releases peer addresses, and keeps the masks.
namespace d_0062a18c {

struct __attribute__((packed)) Local_0062a18c_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_11 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_11, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_2, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_3 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_3, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_5 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_5, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_6 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_6, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_7, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_8 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_8, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_8, word_4, 0x4);

struct __attribute__((packed)) Local_0062a18c_ea_9 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_ea_9, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_ea_9, word_4, 0x4);

struct __attribute__((packed)) NetEntry {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(NetEntry, word_0, 0x0);
GUEST_OFFSET(NetEntry, word_4, 0x4);
GUEST_OFFSET(NetEntry, word_8, 0x8);
GUEST_OFFSET(NetEntry, word_c, 0xc);

struct __attribute__((packed)) Local_0062a18c_r3_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a18c_r3_2, word_0, 0x0);
GUEST_OFFSET(Local_0062a18c_r3_2, word_4, 0x4);

inline constexpr u32 net_session_address = 0x0095362cu;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32, u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x003081b4, u32(u32, u32, u32, u32)> copy_8_bytes;
inline constexpr guest::Function<0x00624aa4, u32(u32, u32, u32, u32)> StationMask__add;
inline constexpr guest::Function<0x00624b24, u32(u32, u32, u32, u32)> StationMask__remove;
inline constexpr guest::Function<0x00624c78, u32(u32, u32, u32, u32)> bit_for_index;
inline constexpr guest::Function<0x00624c90, u32(u32)> clear_flag_pair_b;
inline constexpr guest::Function<0x00626cbc, u32(u32, u32, u32, u32)> NetPeer__set_address;
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> NetPeer__release;
inline constexpr guest::Function<0x0062a550, u32(u32, u32, u32, u32)> NetPlayers__entry_of_identity;

struct __attribute__((packed)) NetPeerListUpdateFrame {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x8];  // (not read or written by name)
    u32 word_10;
    u8 unknown_14[0x4];  // (not read or written by name)
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u32 word_2c;
    u32 word_30;
    u32 word_34;
    u32 word_38;
    u8 unknown_3c[0x4];  // (not read or written by name)
    u8 byte_40;
    u8 unknown_41[0x7];  // (not read or written by name)
    u32 word_48;
    u8 unknown_4c[0x8];  // (not read or written by name)
};
GUEST_OFFSET(NetPeerListUpdateFrame, word_0, 0x0);
GUEST_OFFSET(NetPeerListUpdateFrame, word_4, 0x4);
GUEST_OFFSET(NetPeerListUpdateFrame, word_10, 0x10);
GUEST_OFFSET(NetPeerListUpdateFrame, word_18, 0x18);
GUEST_OFFSET(NetPeerListUpdateFrame, word_1c, 0x1c);
GUEST_OFFSET(NetPeerListUpdateFrame, word_20, 0x20);
GUEST_OFFSET(NetPeerListUpdateFrame, word_24, 0x24);
GUEST_OFFSET(NetPeerListUpdateFrame, word_28, 0x28);
GUEST_OFFSET(NetPeerListUpdateFrame, word_2c, 0x2c);
GUEST_OFFSET(NetPeerListUpdateFrame, word_30, 0x30);
GUEST_OFFSET(NetPeerListUpdateFrame, word_34, 0x34);
GUEST_OFFSET(NetPeerListUpdateFrame, word_38, 0x38);
GUEST_OFFSET(NetPeerListUpdateFrame, byte_40, 0x40);
GUEST_OFFSET(NetPeerListUpdateFrame, word_48, 0x48);
GUEST_SIZE(NetPeerListUpdateFrame, 0x54);

u32 NetPeerList__update(u32 net_peer_list, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<NetPeerListUpdateFrame> frame;  // the original's stack frame
    u32 r0_20 = 0;
    u32 r5_1 = 0;
    u32 r0_21 = 0;
    u32 r0_22 = 0;
    u32 r6 = net_peer_list;
    u32 r9 = r1;
    u32 r7 = r2;
    u32 r11 = *net_session + 0x13280u;
    lock_member_lock(r11, r1, r2, r3);
    for_each_element(frame.at(0x18).addr(), 0x151578u, 8u, 4u);
    frame->word_20 = 0;
    frame->word_18 = 0;
    frame->word_1c = 0;
    frame->word_34 = 0;
    u32 r5 = 0u;
    frame->word_24 = 0;
    frame->word_28 = 0;
    frame->word_2c = 0;
    frame->word_30 = 0;
    frame->word_48 = 0;
    clear_flag_pair_b(frame.at(0x40).addr());
    if (r9 == 0) {
        r9 = frame.at(0x48).addr();
    }
    u32 i = 0u;
    u32 r10 = frame.at(0x18).addr();
    do {
        gptr<Local_0062a18c_r3_2> r3_2 = gptr<Local_0062a18c_r3_2>(frame.at(0x10).addr());
        r3_2->word_0 = 0;
        r3_2->word_4 = 0;
        copy_8_bytes(frame.at(0x10).addr(), r7 + (i << 3), 0u, r3_2.addr());
        gptr<Local_0062a18c_ea_1> ea_1 = gptr<Local_0062a18c_ea_1>(frame.at(0x10).addr());
        u32 r0_4 = ea_1->word_0;
        u32 r1_3 = ea_1->word_4;
        r2 = r6 + (i + (i << 1) << 3);
        gptr<Local_0062a18c_ea_2> ea_2 = gptr<Local_0062a18c_ea_2>(r10 + (i << 3));
        ea_2->word_0 = r0_4;
        ea_2->word_4 = r1_3;
        gptr<Local_0062a18c_ea_3> ea_3 = gptr<Local_0062a18c_ea_3>(r2 + 0x10u);
        if ((ea_3->word_0 ^ (~2u) | ea_3->word_4 ^ ~0u) != 0) {
            gptr<Local_0062a18c_ea_4> ea_4 = gptr<Local_0062a18c_ea_4>(frame.at(0x10).addr());
            u32 r3_3 = ea_4->word_0;
            u32 r12_1 = ea_4->word_4;
            gptr<Local_0062a18c_ea_5> ea_5 = gptr<Local_0062a18c_ea_5>(r2 + 0x10u);
            r1 = ea_5->word_4;
            r3 = r3_3 ^ ea_5->word_0;
            if ((r1 ^ r12_1 | r3) != 0) {
                r3 = ~2u;
                if ((frame->word_10 ^ r3 | r12_1 ^ ~0u) != 0) {
                    gptr<Local_0062a18c_ea_6> ea_6 = gptr<Local_0062a18c_ea_6>(r2 + 0x10u);
                    u32 r0_5 = ea_6->word_0;
                    r1 = ea_6->word_4;
                    gptr<Local_0062a18c_ea_7> ea_7 = gptr<Local_0062a18c_ea_7>(r6 + 0x70u);
                    if ((ea_7->word_0 ^ r0_5 | ea_7->word_4 ^ r1) == 0) {
                        goto L_62a48c;
                    }
                    gptr<Local_0062a18c_ea_8> ea_8 = gptr<Local_0062a18c_ea_8>(r6 + 0x80u);
                    if ((ea_8->word_0 ^ r0_5 | ea_8->word_4 ^ r1) == 0) {
                        goto L_62a48c;
                    }
                    gptr<Local_0062a18c_ea_9> ea_9 = gptr<Local_0062a18c_ea_9>(r6 + 0x90u);
                    if ((ea_9->word_0 ^ r0_5 | ea_9->word_4 ^ r1) == 0) {
                        goto L_62a48c;
                    }
                    r3 = *gptr<u32>(r6 + 0xa0u);
                    r2 = *gptr<u32>(r6 + 0xa4u);
                    r1 ^= r2;
                    if ((r0_5 ^ r3 | r1) == 0) {
                        goto L_62a48c;
                    }
                    *gptr<u32>(r9) = *gptr<u32>(r9) + 1u;
                    StationMask__add(frame.at(0x40).addr(), i & 0xffu, r2, r3);
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                frame->word_4 = i & 0xffu;
                u32 r1_5 = frame->word_4;
                u32 r8_2 = *net_session;
                StationMask__remove(r8_2 + 0x13272u, r1_5, r2, r3);
                StationMask__remove(r8_2 + 0x13276u, frame->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
                StationMask__remove(r8_2 + 0x13274u, frame->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
                StationMask__remove(r8_2 + 0x13278u, frame->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
                StationMask__remove(r8_2 + 0x1327au, frame->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
                StationMask__remove(r8_2 + 0x1327cu, frame->word_4, guest::cpu()->r[2], guest::cpu()->r[3]);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
                u32 r8_3 = frame->word_4;
                if (r8_3 < 4u) {
                    u32 r0_13 = *net_session + 0x13280u;
                    frame->word_38 = r0_13;
                    lock_member_lock(r0_13, r1, r2, r3);
                    u32 r2_7 = guest::cpu()->r[2];
                    u32 r3_9 = guest::cpu()->r[3];
                    u32 r1_11 = r8_3 + (r8_3 << 1);
                    u32 r8_4 = r6 + (r1_11 << 3);
                    u32 r0_14 = r8_4 + 8u;
                    if (r0_14 != 0) {
                        r3_9 = ~2u;
                        gptr<Local_0062a18c_ea_10> ea_10 = gptr<Local_0062a18c_ea_10>(r0_14 + 8u);
                        r2_7 = ea_10->word_4 ^ ~0u;
                        r1_11 = ea_10->word_0 ^ r3_9 | r2_7;
                        if (r1_11 != 0) {
                            gptr<Local_0062a18c_ea_11> ea_11 = gptr<Local_0062a18c_ea_11>(r0_14 + 8u);
                            u32 r1_12 = ea_11->word_4;
                            frame->word_0 = ea_11->word_0;
                            frame->word_4 = r1_12;
                            u32 r1_13 = frame.at(0).addr();
                            gptr<NetEntry> net_entry_2 = gptr<NetEntry>(NetPlayers__entry_of_identity(r6, r1_13, r2_7, r3_9));
                            r1_11 = guest::cpu()->r[1];
                            r2_7 = guest::cpu()->r[2];
                            r3_9 = guest::cpu()->r[3];
                            if (net_entry_2.addr() != 0) {
                                r2_7 = ~0u;
                                net_entry_2->word_0 = ~2u;
                                net_entry_2->word_4 = r2_7;
                                r1_11 = 0u;
                                net_entry_2->word_8 = r1_11;
                                net_entry_2->word_c = r1_11;
                            }
                        }
                    }
                    NetPeer__release(r8_4 + 8u, r1_11, r2_7, r3_9);
                    unlock_member_lock(frame->word_38, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
                    r1 = guest::cpu()->r[1];
                    r2 = guest::cpu()->r[2];
                    r3 = guest::cpu()->r[3];
                }
                r5 += 1u;
            }
        } else {
            r2 = ~2u;
            r3 = ~0u;
            r1 = r1_3 ^ r3;
            r5 += 1u;
            if ((r0_4 ^ r2 | r1) != 0) {
                *gptr<u32>(r9) = *gptr<u32>(r9) + 1u;
                StationMask__add(frame.at(0x40).addr(), i & 0xffu, r2, r3);
                r1 = guest::cpu()->r[1];
                r2 = guest::cpu()->r[2];
                r3 = guest::cpu()->r[3];
            }
        }
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    r0_20 = *gptr<u32>(r9);
    if (r0_20 == 0) {
        goto L_62a4d8;
    }
    if (r0_20 <= r5) {
        i = 0u;
        goto L_62a4a0;
    }
L_62a48c:;
    unlock_member_lock(r11, r1, r2, r3);
    return 0u;
L_62a4a0:;
    r5_1 = frame->byte_40;
    r0_21 = i & 0xffu;
    r0_22 = bit_for_index(r0_21, r1, r2, r3);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    if ((r0_22 & r5_1) != 0) {
        NetPeer__set_address(r6 + (i + (i << 1) << 3) + 8u, r10 + (i << 3), r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
    }
    i += 1u;
    if (s32(i) < 4) {
        guest::preempt();
        goto L_62a4a0;
    }
L_62a4d8:;
    unlock_member_lock(r11, r1, r2, r3);
    return 1u;
}

}  // namespace d_0062a18c
GUEST_EXPORT_FRAMED(0x0062a18c, d_0062a18c::NetPeerList__update, 0x4ff0);  // pushes {i, r5, r6, r7, r8, r9, r10, r11, lr} first, as the original

// f_0062a5cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Removes a peer address from the list (under the session lock), moving the following entries down and clearing the
// last.
namespace d_0062a5cc {

struct __attribute__((packed)) NetPeerListRemoveAddressArg1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(NetPeerListRemoveAddressArg1, word_0, 0x0);
GUEST_OFFSET(NetPeerListRemoveAddressArg1, word_4, 0x4);

struct __attribute__((packed)) Local_0062a5cc_r0_3 {
    float float_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0062a5cc_r0_3, float_0, 0x0);
GUEST_OFFSET(Local_0062a5cc_r0_3, half_4, 0x4);
GUEST_OFFSET(Local_0062a5cc_r0_3, half_6, 0x6);
GUEST_OFFSET(Local_0062a5cc_r0_3, word_8, 0x8);
GUEST_OFFSET(Local_0062a5cc_r0_3, word_c, 0xc);

struct __attribute__((packed)) Local_0062a5cc_r2_3 {
    float float_0;
    u16 half_4;
    u16 half_6;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0062a5cc_r2_3, float_0, 0x0);
GUEST_OFFSET(Local_0062a5cc_r2_3, half_4, 0x4);
GUEST_OFFSET(Local_0062a5cc_r2_3, half_6, 0x6);
GUEST_OFFSET(Local_0062a5cc_r2_3, word_8, 0x8);
GUEST_OFFSET(Local_0062a5cc_r2_3, word_c, 0xc);

struct __attribute__((packed)) Local_0062a5cc_r3_2 {
    u8 unknown_0[0xa8];  // (not used here)
    u32 word_a8;
    u32 word_ac;
};
GUEST_OFFSET(Local_0062a5cc_r3_2, word_a8, 0xa8);
GUEST_OFFSET(Local_0062a5cc_r3_2, word_ac, 0xac);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32, u32)> unlock_member_lock;
inline constexpr guest::Function<0x0061a7b0, u32(u32, u32)> NetPeer__reset;
inline constexpr guest::Function<0x0075f5c0, u32(u32, u32, u32, u32)> NetPlayer__identity_differs;

void NetPeerList__remove_address(u32 net_peer_list, gptr<NetPeerListRemoveAddressArg1> arg1, u32 r2, u32 r3, float S0) {
    guest::StackFrame frame(0x18);  // the original's stack frame
    u32 r1 = arg1.addr();
    u32 r4 = net_peer_list;
    u32 r0_1 = *net_session + 0x13280u;
    u32 r5 = r0_1;
    lock_member_lock(r0_1, r1, r2, r3);
    float S0_1 = guest::cpu()->s[0];
    u32 r3_1 = ~2u;
    u32 r2_1 = ~0u;
    u32 r1_1 = arg1->word_4 ^ r2_1;
    if ((arg1->word_0 ^ r3_1 | r1_1) != 0) {
        u32 r0_2 = NetPlayer__identity_differs(r4, r1, r2_1, r3_1);
        r1_1 = guest::cpu()->r[1];
        S0_1 = guest::cpu()->s[0];
        if (r0_2 < 4u) {
            r1 = r0_2;
            if (s32(r0_2) < 3) {
                do {
                    u32 r2_2 = r4 + (r1 << 4);
                    gptr<Local_0062a5cc_r0_3> r0_3 = gptr<Local_0062a5cc_r0_3>(r2_2 + 0x78u);
                    gptr<Local_0062a5cc_r2_3> r2_3 = gptr<Local_0062a5cc_r2_3>(r2_2 + 0x68u);
                    S0_1 = r0_3->float_0;
                    gptr<Local_0062a5cc_r3_2> r3_2 = gptr<Local_0062a5cc_r3_2>(r4 + (r1 << 2));
                    r2_3->float_0 = S0_1;
                    u32 r7_1 = r0_3->half_4;
                    r1 += 1u;
                    r2_3->half_4 = u16(r7_1);
                    u32 r6_1 = r0_3->half_6;
                    r2_3->half_6 = u16(r6_1);
                    u32 r12_1 = r0_3->word_c;
                    r2_3->word_8 = r0_3->word_8;
                    r2_3->word_c = r12_1;
                    r3_2->word_a8 = r3_2->word_ac;
                    guest::preempt();
                } while (s32(r1) < 3);
            }
            guest::cpu()->s[0] = S0_1;
            NetPeer__reset(r4 + 0x98u, r1);
            r1_1 = guest::cpu()->r[1];
            S0_1 = guest::cpu()->s[0];
            *gptr<u32>(r4 + 0xb4u) = 0;
        }
    }
    guest::cpu()->s[0] = S0_1;
    frame.release();
    unlock_member_lock(r5, r1_1);
    return;
}

}  // namespace d_0062a5cc
GUEST_EXPORT(0x0062a5cc, d_0062a5cc::NetPeerList__remove_address);

// f_0062a724: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets a net peer list: releases and resets its four peers, and clears their slots and ids.
namespace d_0062a724 {

struct __attribute__((packed)) Local_0062a724_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a724_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062a724_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0062a724_ea_10 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a724_ea_10, word_0, 0x0);
GUEST_OFFSET(Local_0062a724_ea_10, word_4, 0x4);

struct __attribute__((packed)) Local_0062a724_ea_11 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0062a724_ea_11, word_0, 0x0);
GUEST_OFFSET(Local_0062a724_ea_11, word_4, 0x4);
GUEST_OFFSET(Local_0062a724_ea_11, word_8, 0x8);
GUEST_OFFSET(Local_0062a724_ea_11, word_c, 0xc);

struct __attribute__((packed)) Local_0062a724_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a724_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0062a724_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0062a724_ea_7 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062a724_ea_7, word_0, 0x0);
GUEST_OFFSET(Local_0062a724_ea_7, word_4, 0x4);

inline constexpr guest::Function<0x0061a7b0, u32(u32, u32, u32, u32)> NetPeer__reset;
inline constexpr guest::Function<0x00626d14, u32(u32, u32, u32, u32)> NetPeer__release;

void NetPeerList__reset(u32 net_peer_list, u32 r1, u32 r2, u32 r3) {
    u32 r5 = net_peer_list;
    u32 i = 0u;
    do {
        NetPeer__release(r5 + i * 0x18u + 8u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        i += 1u;
        guest::preempt();
    } while (s32(i) < 4);
    i = 0u;
    u32 r6 = i;
    do {
        NetPeer__reset(r5 + (i << 4) + 0x68u, r1, r2, r3);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        u32 r0_3 = r5 + (i << 2);
        i += 1u;
        *gptr<u32>(r0_3 + 0xa8u) = r6;
        guest::preempt();
    } while (s32(i) < 4);
    u32 r12_1 = ~0u;
    gptr<Local_0062a724_ea_1> ea_1 = gptr<Local_0062a724_ea_1>(r5 + 0xb8u);
    ea_1->word_0 = ~2u;
    ea_1->word_4 = r12_1;
    *gptr<u32>(r5 + 0xc0u) = r6;
    u32 r0_4 = ~2u;
    *gptr<u32>(r5 + 0xc4u) = r6;
    gptr<Local_0062a724_ea_4> ea_4 = gptr<Local_0062a724_ea_4>(r5 + 0xc8u);
    ea_4->word_0 = r0_4;
    ea_4->word_4 = r12_1;
    u32 r4_1 = ~2u;
    *gptr<u32>(r5 + 0xd0u) = r6;
    *gptr<u32>(r5 + 0xd4u) = r6;
    gptr<Local_0062a724_ea_7> ea_7 = gptr<Local_0062a724_ea_7>(r5 + 0xd8u);
    ea_7->word_0 = r4_1;
    ea_7->word_4 = r12_1;
    *gptr<u32>(r5 + 0xe0u) = r6;
    *gptr<u32>(r5 + 0xe4u) = r6;
    gptr<Local_0062a724_ea_10> ea_10 = gptr<Local_0062a724_ea_10>(r5 + 0xe8u);
    ea_10->word_0 = r4_1;
    ea_10->word_4 = r12_1;
    u32 r1_1 = ~0u;
    *gptr<u32>(r5 + 0xf0u) = r6;
    *gptr<u32>(r5 + 0xf4u) = r6;
    *gptr<u8>(r5 + 0x108u) = u8(r6);
    gptr<Local_0062a724_ea_11> ea_11 = gptr<Local_0062a724_ea_11>(r5 + 0xf8u);
    ea_11->word_0 = r0_4;
    ea_11->word_4 = r1_1;
    ea_11->word_8 = r4_1;
    ea_11->word_c = r1_1;
    guest::cpu()->r[1] = r1_1;
}

}  // namespace d_0062a724
GUEST_EXPORT_FRAMED(0x0062a724, d_0062a724::NetPeerList__reset, 0x41f0);  // pushes {i, r5, r6, r7, r8, lr} first, as the original

// f_0062abd8: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Connects peer `index` (below 4) of the list, under the session lock.
namespace d_0062abd8 {

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00135740, u32(u32, u32, u32, u32)> lock_member_lock;
inline constexpr guest::Function<0x00137e84, u32(u32)> unlock_member_lock;
inline constexpr guest::Function<0x00626d40, u32(u32, u32, u32)> NetPeer__connect;

u32 NetPeerList__connect_peer(u32 net_peer_list, u32 r1, u32 r2, u32 r3) {
    u32 r0_1 = *net_session + 0x13280u;
    lock_member_lock(r0_1, r1, r2, r3);
    if (r1 < 4u) {
        u32 net_peer = net_peer_list + r1 * 0x18u + 8u;
        if (net_peer != 0) {
            u32 r0_3 = NetPeer__connect(net_peer, r2, r3);
            unlock_member_lock(r0_1);
            return r0_3;
        }
    }
    unlock_member_lock(r0_1);
    return 0u;
}

}  // namespace d_0062abd8
GUEST_EXPORT_FRAMED(0x0062abd8, d_0062abd8::NetPeerList__connect_peer, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0062ac50: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Constructs the avatar manager: a system callback with four avatars, four peers and four slots, none in use.
namespace d_0062ac50 {

struct __attribute__((packed)) Local_0062ac50_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062ac50_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062ac50_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0062ac50_ea_2 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062ac50_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0062ac50_ea_2, word_4, 0x4);

inline constexpr u32 vtable_netgame__AvatarMgr = 0x0090ac28u;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;
inline constexpr guest::Function<0x0050c988, u32(u32, u32, u32, u32)> net__SystemCallback__SystemCallback;

u32 netgame__AvatarMgr__AvatarMgr(gptr<netgame__AvatarMgr> avatar_mgr, u32 r1, u32 r2, u32 r3) {
    net__SystemCallback__SystemCallback(avatar_mgr.addr(), r1, r2, r3);
    avatar_mgr->vtable = vtable_netgame__AvatarMgr;
    u32 r0_5 = for_each_element(for_each_element(avatar_mgr.addr() + 8u, 0x626dd8u, 0x18u, 4u) + 0x60u, 0x61a7f4u, 0x10u, 4u) + 0x50u;
    u32 r0_7 = for_each_element(r0_5, 0x62a500u, 0x10u, 4u) - 0xb8u;
    u32 r1_1 = ~2u;
    u32 r2_1 = ~0u;
    gptr<Local_0062ac50_ea_1> ea_1 = gptr<Local_0062ac50_ea_1>(r0_7 + 0xf8u);
    ea_1->word_0 = r1_1;
    ea_1->word_4 = r2_1;
    gptr<Local_0062ac50_ea_2> ea_2 = gptr<Local_0062ac50_ea_2>(r0_7 + 0x100u);
    ea_2->word_0 = r1_1;
    ea_2->word_4 = r2_1;
    *gptr<u8>(r0_7 + 0x108u) = 0;
    guest::cpu()->r[1] = 0u;
    return r0_7;
}

}  // namespace d_0062ac50
GUEST_EXPORT_FRAMED(0x0062ac50, d_0062ac50::netgame__AvatarMgr__AvatarMgr, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062ad20: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the avatar manager: its peers and avatars, then the system callback.
namespace d_0062ad20 {

inline constexpr u32 vtable_netgame__AvatarMgr = 0x0090ac28u;
inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;
inline constexpr guest::Function<0x0050c9a0, u32(u32, u32)> do_nothing_0050c9a0;

u32 netgame__AvatarMgr__destructor(gptr<netgame__AvatarMgr> avatar_mgr) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    avatar_mgr->vtable = vtable_netgame__AvatarMgr;
    destroy_array_elements(avatar_mgr.addr() + 0x68u, 0x624020u, 0x10u, 4u);
    destroy_array_elements(avatar_mgr.addr() + 8u, 0x626decu, 0x18u, 4u);
    frame.release();
    return do_nothing_0050c9a0(avatar_mgr.addr(), guest::cpu()->r[1]);
}

}  // namespace d_0062ad20
GUEST_EXPORT(0x0062ad20, d_0062ad20::netgame__AvatarMgr__destructor);

// f_0062ad70: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears station `index`'s friend flags and sets bit 3 when the friend list knows the peer's key.
namespace d_0062ad70 {

struct __attribute__((packed)) Local_0062ad70_ea_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0062ad70_ea_1, byte_0, 0x0);

inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x001aa94c, u32(u32, u32)> FriendList__contains;
inline constexpr guest::Function<0x0075f1f8, u32(u32, u32, u32, u32)> NetPlayers__slot_identity_is_set;

struct __attribute__((packed)) FriendCheckCheckStationFrame {
    u8 unknown_0[0x4];  // (not read or written by name)
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not read or written by name)
};
GUEST_OFFSET(FriendCheckCheckStationFrame, word_4, 0x4);
GUEST_OFFSET(FriendCheckCheckStationFrame, word_8, 0x8);
GUEST_SIZE(FriendCheckCheckStationFrame, 0x10);

void FriendCheck__check_station(u32 friend_check, u32 r1) {
    guest::StackFrameOf<FriendCheckCheckStationFrame> frame;  // the original's stack frame
    gptr<Local_0062ad70_ea_1> ea_1 = gptr<Local_0062ad70_ea_1>(friend_check + r1 + 0x8b1u);
    ea_1->byte_0 = 0;
    frame->word_4 = 0;
    frame->word_8 = 0;
    NetPlayers__slot_identity_is_set(*net_session + 0xb0u, frame.at(0).addr(), r1, 0u);
    if (FriendList__contains(*friend_list_instance, frame.at(0).addr()) == 0) {
        return;
    }
    ea_1->byte_0 = u8(u32(ea_1->byte_0) | 8u);
}

}  // namespace d_0062ad70
GUEST_EXPORT_FRAMED(0x0062ad70, d_0062ad70::FriendCheck__check_station, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062af78: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Once per station (bit 0): when the friend list accepts this slot's 0x200-byte record, sends it (message 0x7f) and
// notes it.
namespace d_0062af78 {

struct __attribute__((packed)) Local_0062af78_ea_1 {
    u8 byte_0;
};
GUEST_OFFSET(Local_0062af78_ea_1, byte_0, 0x0);

inline constexpr u32 friend_record_state_address = 0x0094ed74u;
inline constexpr u32 friend_list_instance_address = 0x009529ccu;
inline guest::global<u32, 0x0094ed74> friend_record_state;
inline guest::global<u32, 0x009529cc> friend_list_instance;
inline constexpr guest::Function<0x001aa804, u32(u32, u32)> FriendList__add_friend;
inline constexpr guest::Function<0x00214f4c, u32(u32, u32)> script__WordFix_9u___WordFix_00214f4c;
inline constexpr guest::Function<0x00305f44, u32(u32, u32, u32, u32)> current_net_station;
inline constexpr guest::Function<0x006249b0, u32(u32, u32, u32, u32)> send_message;

void FriendCheck__send_friend_record(u32 friend_check, u32 r1, u32 r2, u32 r3) {
    gptr<Local_0062af78_ea_1> ea_1 = gptr<Local_0062af78_ea_1>(friend_check + r1 + 0x8b1u);
    u32 r1_1 = ea_1->byte_0;
    if ((r1_1 & 1u) == 0) {
        u32 station = current_net_station(friend_check, r1_1, r2, r3);
        if (s32(station) >= 4) {
            return;
        }
        u32 r1_2 = friend_check + (station << 9);
        if (FriendList__add_friend(*friend_list_instance, r1_2) == 0) {
            return;
        }
        send_message(0x7fu, r1, r1_2, 0x200u);
        ea_1->byte_0 = u8(u32(ea_1->byte_0) | 1u);
        script__WordFix_9u___WordFix_00214f4c(*friend_record_state, r1);
    }
}

}  // namespace d_0062af78
GUEST_EXPORT_FRAMED(0x0062af78, d_0062af78::FriendCheck__send_friend_record, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062b014: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Builds the four 0x2c-byte friend entries (+0x800) and the four station flags (+0x8b1), station 4.
namespace d_0062b014 {

inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

u32 FriendCheck__construct(u32 friend_check) {
    u32 r0_3 = for_each_element(friend_check + 0x800u, 0x81e8d0u, 0x2cu, 4u) - 0x800u;
    *gptr<u8>(r0_3 + 0x8b0u) = 4;
    return for_each_element(r0_3 + 0x8b1u, 0x62b008u, 1u, 4u) - 0x8b1u;
}

}  // namespace d_0062b014
GUEST_EXPORT_FRAMED(0x0062b014, d_0062b014::FriendCheck__construct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062b064: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Destroys the four friend entries.
namespace d_0062b064 {

inline constexpr guest::Function<0x002f76ad, u32(u32, u32, u32, u32)> destroy_array_elements;

u32 FriendCheck__destruct(u32 friend_check) {
    destroy_array_elements(friend_check + 0x800u, 0x3009ccu, 0x2cu, 4u);
    return friend_check;
}

}  // namespace d_0062b064
GUEST_EXPORT_FRAMED(0x0062b064, d_0062b064::FriendCheck__destruct, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062b08c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears a visitor log entry (its header, counters and time).
namespace d_0062b08c {

struct __attribute__((packed)) VisitorLogEntry {
    u32 word_0;
    u8 unknown_4[0x16];  // (not used here)
    u16 half_1a;
    u16 half_1c;
    u8 unknown_1e[0x10];  // (not used here)
    u16 half_2e;
    u8 unknown_30[0x48];  // (not used here)
    u8 byte_78;
    u8 byte_79;
};
GUEST_OFFSET(VisitorLogEntry, word_0, 0x0);
GUEST_OFFSET(VisitorLogEntry, half_1a, 0x1a);
GUEST_OFFSET(VisitorLogEntry, half_1c, 0x1c);
GUEST_OFFSET(VisitorLogEntry, half_2e, 0x2e);
GUEST_OFFSET(VisitorLogEntry, byte_78, 0x78);
GUEST_OFFSET(VisitorLogEntry, byte_79, 0x79);

inline constexpr guest::Function<0x0027a48c, u32(u32)> SavedRecordHeader__clear;
inline constexpr guest::Function<0x00303cdc, u32(u32)> clear_inner;
inline constexpr guest::Function<0x005cdf48, u32(u32, u32, u32, u32)> game_time_set;

u32 VisitorLogEntry__clear(gptr<VisitorLogEntry> visitor_log_entry) {
    visitor_log_entry->word_0 = 0;
    u32 r0_1 = visitor_log_entry.addr() + 4u;
    visitor_log_entry->half_1a = 0;
    game_time_set(r0_1 + 0x6cu, guest::cpu()->r[1], ~0u, ~0x80000000u);
    visitor_log_entry->byte_78 = 0;
    visitor_log_entry->byte_79 = 0;
    SavedRecordHeader__clear(r0_1);
    visitor_log_entry->half_1c = 0;
    visitor_log_entry->half_2e = 0;
    clear_inner(r0_1 + 0x6cu);
    return r0_1 - 4u;
}

}  // namespace d_0062b08c
GUEST_EXPORT_FRAMED(0x0062b08c, d_0062b08c::VisitorLogEntry__clear, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062b200: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Allocates the two logs of 100 entries (0x7c bytes) when missing, then resets their counters and the log state under
// its lock.
namespace d_0062b200 {

struct __attribute__((packed)) VisitorLog {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u8 unknown_c[0x4];  // (not used here)
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x3bc];  // (not used here)
    u32 word_3e4;
    u8 byte_3e8;
    u8 byte_3e9;
    u8 byte_3ea;
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(VisitorLog, word_0, 0x0);
GUEST_OFFSET(VisitorLog, word_4, 0x4);
GUEST_OFFSET(VisitorLog, word_8, 0x8);
GUEST_OFFSET(VisitorLog, word_10, 0x10);
GUEST_OFFSET(VisitorLog, word_14, 0x14);
GUEST_OFFSET(VisitorLog, word_18, 0x18);
GUEST_OFFSET(VisitorLog, word_1c, 0x1c);
GUEST_OFFSET(VisitorLog, word_20, 0x20);
GUEST_OFFSET(VisitorLog, word_24, 0x24);
GUEST_OFFSET(VisitorLog, word_3e4, 0x3e4);
GUEST_OFFSET(VisitorLog, byte_3e8, 0x3e8);
GUEST_OFFSET(VisitorLog, byte_3e9, 0x3e9);
GUEST_OFFSET(VisitorLog, byte_3ea, 0x3ea);
GUEST_OFFSET(VisitorLog, byte_3eb, 0x3eb);
GUEST_OFFSET(VisitorLog, byte_3ec, 0x3ec);
GUEST_OFFSET(VisitorLog, byte_3ed, 0x3ed);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x001391c4, u32(u32, u32, u32, u32)> allocate_in;
inline constexpr guest::Function<0x00301d0d, u32(u32, u32, u32, u32)> for_each_element;

void VisitorLog__init(gptr<VisitorLog> visitor_log, u32 heap, u32 r2, u32 r3) {
    if (heap == 0) {
        guest::cpu()->r[1] = heap;
        return;
    }
    u32 r5_1 = heap;
    if (visitor_log->word_18 == 0) {
        u32 r0_1 = allocate_in(0x3070u, heap, 4u, 0x8c8484u);
        heap = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_1 != 0) {
            u32 r0_2 = for_each_element(r0_1, 0x62b08cu, 0x7cu, 0x64u);
            heap = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_2 != 0) {
                heap = visitor_log.addr() + 0x18u;
                visitor_log->word_24 = 0;
                visitor_log->word_18 = r0_2;
                visitor_log->word_1c = 0x64;
                visitor_log->word_20 = 0;
            }
        }
    }
    if (visitor_log->word_8 == 0) {
        u32 r0_3 = allocate_in(0x3070u, r5_1, 4u, 0x8c8484u);
        heap = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        r3 = guest::cpu()->r[3];
        if (r0_3 != 0) {
            u32 r0_4 = for_each_element(r0_3, 0x62b08cu, 0x7cu, 0x64u);
            heap = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            if (r0_4 != 0) {
                heap = visitor_log.addr() + 8u;
                visitor_log->word_14 = 0;
                *gptr<u32>(heap) = r0_4;
                *gptr<u32>(heap + 4) = 0x64;
                *gptr<u32>(heap + 8) = 0;
            }
        }
    }
    RecursiveLock__lock(visitor_log.addr() + 0x28u, heap, r2, r3);
    visitor_log->word_14 = 0;
    visitor_log->word_10 = 0;
    visitor_log->word_24 = 0;
    visitor_log->word_20 = 0;
    visitor_log->byte_3e9 = 0;
    visitor_log->byte_3ea = 0;
    RecursiveLock__unlock(visitor_log.addr() + 0x28u);
    *gptr<u16>(visitor_log.addr() + 0x1e2u) = 0;
    visitor_log->word_3e4 = 0;
    visitor_log->byte_3e9 = 0;
    visitor_log->byte_3ea = 0;
    visitor_log->byte_3e8 = 1;
    visitor_log->byte_3eb = 0;
    visitor_log->word_0 = 0;
    visitor_log->byte_3ec = 0;
    visitor_log->word_4 = 0;
    visitor_log->byte_3ed = 0;
}

}  // namespace d_0062b200
GUEST_EXPORT_FRAMED(0x0062b200, d_0062b200::VisitorLog__init, 0x47f0);  // pushes {r4, r5, r6, r7, r8, r9, r10, lr} first, as the original

// f_0062bb00: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the two counts of the visitor log (+0x28ec), under its lock.
namespace d_0062bb00 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x28fc];  // (not used here)
    u32 word_28fc;
    u32 word_2900;
};
GUEST_OFFSET(NetSession, word_28fc, 0x28fc);
GUEST_OFFSET(NetSession, word_2900, 0x2900);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

void NetSession__clear_visitor_log_counts(gptr<NetSession> net_session) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = net_session.addr() + 0x28ecu;
    RecursiveLock__lock(r0_1 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    net_session->word_2900 = 0;
    net_session->word_28fc = 0;
    frame.release();
    RecursiveLock__unlock(r0_1 + 0x28u, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0062bb00
GUEST_EXPORT(0x0062bb00, d_0062bb00::NetSession__clear_visitor_log_counts);

// f_0062bc68: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Resets the log's current state (and its flag when asked), keeping it when the network part still allows it.
namespace d_0062bc68 {

struct __attribute__((packed)) VisitorLog {
    u32 word_0;
    u8 unknown_4[0x3e7];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(VisitorLog, word_0, 0x0);
GUEST_OFFSET(VisitorLog, byte_3eb, 0x3eb);
GUEST_OFFSET(VisitorLog, byte_3ec, 0x3ec);
GUEST_OFFSET(VisitorLog, byte_3ed, 0x3ed);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00300904, u32(u32, u32, u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x0075f020, u32(u32, u32)> NetPart__allows;

void VisitorLog__reset_state(gptr<VisitorLog> visitor_log, u32 r1) {
    u32 r5 = 0u;
    if (r1 != 0) {
        visitor_log->byte_3ed = u8(r5);
    }
    u32 r0_1 = visitor_log->byte_3ec;
    if (r0_1 == 0) {
        visitor_log->word_0 = r5;
        visitor_log->byte_3eb = u8(r5);
    } else {
        u32 r0_2 = current_net_signed_value(r0_1, r1, guest::cpu()->r[2], guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        if (r0_2 == 0) {
            u32 r0_4 = NetPart__allows(*net_session + 0x7874u, 0u);
            r1 = guest::cpu()->r[1];
            if (r0_4 == 0) {
                *gptr<u32>(visitor_log.addr()) = r5;
                *gptr<u32>(visitor_log.addr() + 4u) = r5;
                return;
            }
            *gptr<u8>(visitor_log.addr() + 0x3ebu) = u8(r5);
            *gptr<u32>(visitor_log.addr()) = r5;
            *gptr<u8>(visitor_log.addr() + 0x3ecu) = u8(r5);
            *gptr<u32>(visitor_log.addr() + 4u) = r5;
            return;
        }
        *gptr<u8>(visitor_log.addr() + 0x3ebu) = u8(r5);
        *gptr<u32>(visitor_log.addr()) = r5;
        *gptr<u8>(visitor_log.addr() + 0x3ecu) = u8(r5);
    }
    *gptr<u32>(visitor_log.addr() + 4u) = r5;
    guest::cpu()->r[1] = r1;
}

}  // namespace d_0062bc68
GUEST_EXPORT_FRAMED(0x0062bc68, d_0062bc68::VisitorLog__reset_state, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062c0cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When there is no main-object value and part 3 is up (or the log was waiting): opens the log state (+0x3ec) and, when
// asked, handles part 3.
namespace d_0062c0cc {

struct __attribute__((packed)) VisitorLog {
    u32 word_0;
    u32 word_4;
    u8 unknown_8[0x3e3];  // (not used here)
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(VisitorLog, word_0, 0x0);
GUEST_OFFSET(VisitorLog, word_4, 0x4);
GUEST_OFFSET(VisitorLog, byte_3eb, 0x3eb);
GUEST_OFFSET(VisitorLog, byte_3ec, 0x3ec);
GUEST_OFFSET(VisitorLog, byte_3ed, 0x3ed);

inline guest::global<u32, 0x0095362c> net_session;
inline constexpr guest::Function<0x00300904, u32(u32, u32)> current_net_signed_value;
inline constexpr guest::Function<0x006295d8, u32(u32, u32)> PartMask__claim;
inline constexpr guest::Function<0x0075f0b0, u32(u32, u32)> PartMask__allows;

u32 VisitorLog__begin(gptr<VisitorLog> visitor_log, u32 r1) {
    u32 r0_1 = current_net_signed_value(visitor_log.addr(), r1);
    if (r0_1 == 0) {
        u32 r6_1 = *net_session + 0x7874u;
        if (PartMask__allows(r6_1, 3u) == 0) {
            r0_1 = visitor_log->byte_3eb;
            if (r0_1 == 0) {
                return r0_1;
            }
        }
        r0_1 = 0u;
        visitor_log->byte_3ec = 1;
        visitor_log->word_4 = r0_1;
        visitor_log->byte_3eb = u8(r0_1);
        visitor_log->word_0 = r0_1;
        if (r1 != 0) {
            r0_1 = PartMask__claim(r6_1, 3u);
            visitor_log->byte_3ed = 1;
        }
    }
    return r0_1;
}

}  // namespace d_0062c0cc
GUEST_EXPORT_FRAMED(0x0062c0cc, d_0062c0cc::VisitorLog__begin, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_0062c14c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// When the current player has bit 6 of +0x571f and the gated save record allows it (and the connection checks pass):
// resets network part 3.
namespace d_0062c14c {

inline constexpr guest::Function<0x001df2f8, u32(u32)> data_loader_gated_value;
inline constexpr guest::Function<0x0023bf10, u32(u32)> WirelessCheck__not_a;
inline constexpr guest::Function<0x0023c544, u32(u32)> WirelessCheck__is_state_1;
inline constexpr guest::Function<0x0023c604, u32(u32)> save_block_flag_bit_8;
inline constexpr guest::Function<0x0023c634, u32(u32)> WirelessCheck__is_state_0;
inline constexpr guest::Function<0x0023c65c, u32(u32)> online_is_blocked;
inline constexpr guest::Function<0x002fb918, u32(u32)> data_block_71900;
inline constexpr guest::Function<0x002fb94c, u32(u32, u32, u32, u32)> get_current_player;
inline constexpr guest::Function<0x003505bc, u32(u32)> Boss__is_ready;
inline constexpr guest::Function<0x00350754, u32(u32)> Ac__get_flag;
inline constexpr guest::Function<0x006268c4, u32(u32, u32)> NetSession__reset_part_3;
inline constexpr guest::Function<0x0070f5b0, u32(u32)> SaveBlock71900__check;
inline constexpr guest::Function<0x0071d3e4, u32(u32)> any_record_set;

void reset_visitor_log_if_allowed(u32 r0) {
    guest::StackFrame frame(0x8);  // the original's stack frame
    u32 player = get_current_player(r0, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    if (player == 0) {
        return;
    }
    u32 r0_2 = u32(*gptr<u8>(player + 0x571fu)) << 0x19;
    if (s32(r0_2) >= 0) {
        return;
    }
    u32 r0_4 = data_loader_gated_value(data_block_71900(r0_2));
    if (r0_4 == 0) {
        return;
    }
    u32 r0_5 = any_record_set(r0_4);
    if (r0_5 == 0) {
        return;
    }
    u32 flag = Ac__get_flag(r0_5);
    if (flag != 0) {
        flag = WirelessCheck__is_state_0(flag);
        if (flag == 0) {
            u32 r0_7 = save_block_flag_bit_8(flag);
            if (r0_7 == 0) {
                return;
            }
            u32 wireless_check = SaveBlock71900__check(r0_7);
            if (wireless_check == 0) {
                return;
            }
            flag = WirelessCheck__is_state_1(wireless_check);
            if (flag == 0) {
                return;
            }
        }
    }
    u32 r0_9 = WirelessCheck__not_a(flag);
    if (r0_9 == 0) {
        return;
    }
    u32 r0_10 = online_is_blocked(r0_9);
    if (r0_10 == 0) {
        return;
    }
    u32 r0_11 = Boss__is_ready(r0_10);
    if (r0_11 == 0) {
        return;
    }
    frame.release();
    NetSession__reset_part_3(r0_11, guest::cpu()->r[1]);
    return;
}

}  // namespace d_0062c14c
GUEST_EXPORT(0x0062c14c, d_0062c14c::reset_visitor_log_if_allowed);

// f_0062c20c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Adds a visitor entry (address and id) to the session's visitor log when its id is valid.
namespace d_0062c20c {

struct __attribute__((packed)) VisitorLogAddEntryArg2 {
    u32 word_0;
    u16 half_4;
    u16 half_6;
};
GUEST_OFFSET(VisitorLogAddEntryArg2, word_0, 0x0);
GUEST_OFFSET(VisitorLogAddEntryArg2, half_4, 0x4);
GUEST_OFFSET(VisitorLogAddEntryArg2, half_6, 0x6);

inline guest::global<u16, 0x0088f298> default_npc_entry_id;
inline constexpr guest::Function<0x0062c2bc, u32(u32, u32, u32, u32)> sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc;

struct __attribute__((packed)) VisitorLogAddEntryFrame {
    u32 word_0;
    u16 half_4;
    u8 unknown_6[0x2];  // (not read or written by name)
};
GUEST_OFFSET(VisitorLogAddEntryFrame, word_0, 0x0);
GUEST_OFFSET(VisitorLogAddEntryFrame, half_4, 0x4);
GUEST_SIZE(VisitorLogAddEntryFrame, 0x8);

void VisitorLog__add_entry(u32 visitor_log, u32 r1_unused, gptr<VisitorLogAddEntryArg2> arg2) {
    guest::StackFrameOf<VisitorLogAddEntryFrame> frame;  // the original's stack frame
    u32 r3_1 = arg2->word_0;
    if (r3_1 == 0) {
        return;
    }
    u32 r4_1 = *default_npc_entry_id;
    u32 r12_1 = arg2->half_4;
    if (r12_1 == r4_1 || arg2->half_6 == 0) {
        return;
    }
    frame->word_0 = r3_1;
    frame->half_4 = u16(r12_1);
    sead__BufferedSafeStringBase_wchar_t___BufferedSafeStringBase_0062c2bc(visitor_log + 0x28ecu, guest::cpu()->r[1], frame.at(0).addr(), frame.at(4).addr());
}

}  // namespace d_0062c20c
GUEST_EXPORT_FRAMED(0x0062c20c, d_0062c20c::VisitorLog__add_entry, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062c274: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the visitor log's four counts and two flags, under its lock.
namespace d_0062c274 {

struct __attribute__((packed)) NetSession {
    u8 unknown_0[0x28fc];  // (not used here)
    u32 word_28fc;
    u32 word_2900;
    u8 unknown_2904[0x8];  // (not used here)
    u32 word_290c;
    u32 word_2910;
    u8 unknown_2914[0x3c1];  // (not used here)
    u8 byte_2cd5;
    u8 byte_2cd6;
};
GUEST_OFFSET(NetSession, word_28fc, 0x28fc);
GUEST_OFFSET(NetSession, word_2900, 0x2900);
GUEST_OFFSET(NetSession, word_290c, 0x290c);
GUEST_OFFSET(NetSession, word_2910, 0x2910);
GUEST_OFFSET(NetSession, byte_2cd5, 0x2cd5);
GUEST_OFFSET(NetSession, byte_2cd6, 0x2cd6);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32, u32)> RecursiveLock__unlock;

u32 NetSession__clear_visitor_log(gptr<NetSession> net_session) {
    guest::StackFrame frame(0x10);  // the original's stack frame
    u32 r0_1 = net_session.addr() + 0x28ecu;
    RecursiveLock__lock(r0_1 + 0x28u, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
    net_session->word_2900 = 0;
    net_session->word_28fc = 0;
    net_session->word_2910 = 0;
    net_session->word_290c = 0;
    net_session->byte_2cd5 = 0;
    net_session->byte_2cd6 = 0;
    frame.release();
    return RecursiveLock__unlock(r0_1 + 0x28u, guest::cpu()->r[1]);
}

}  // namespace d_0062c274
GUEST_EXPORT(0x0062c274, d_0062c274::NetSession__clear_visitor_log);

// f_0062c790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Copies up to `count` entries (0x7c bytes) of the circular log from `start` into `out` (under the lock), gives the
// total and clears the new flag when asked.
namespace d_0062c790 {

struct __attribute__((packed)) VisitorLog {
    u8 unknown_0[0x24];  // (not used here)
    u32 word_24;
};
GUEST_OFFSET(VisitorLog, word_24, 0x24);

struct __attribute__((packed)) Local_0062c790_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062c790_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062c790_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0062c790_r0_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
};
GUEST_OFFSET(Local_0062c790_r0_2, word_0, 0x0);
GUEST_OFFSET(Local_0062c790_r0_2, word_4, 0x4);
GUEST_OFFSET(Local_0062c790_r0_2, word_8, 0x8);

inline constexpr guest::Function<0x00135748, u32(u32, u32, u32, u32)> RecursiveLock__lock;
inline constexpr guest::Function<0x001357ec, u32(u32)> RecursiveLock__unlock;
inline constexpr guest::Function<0x002fbb30, u32(u32, u32, u32, u32)> copy_aligned_bytes;

void VisitorLog__copy_entries(gptr<VisitorLog> visitor_log, u32 r1, u32 r2, u32 r3) {
    guest::StackFrame frame(0x4);  // the original's stack frame
    u32 r0 = visitor_log.addr();
    u32 r12 = guest::cpu()->r[12];
    u32 r1_1 = 0;
    *frame.at<u32>(0x20) = r12;
    u32 r6 = r0;
    u32 lock = r6 + 0x28u;
    u32 r9 = r1;
    gptr<Local_0062c790_ea_1> ea_1 = gptr<Local_0062c790_ea_1>(frame.at(0x28).addr());
    u32 r4_1 = ea_1->word_0;
    u32 r11 = ea_1->word_4;
    u32 r7 = r2;
    u32 i = r3;
    RecursiveLock__lock(lock, r1, r2, r3);
    u32 r0_1 = visitor_log->word_24;
    if (s32(r0_1) <= 0) {
        RecursiveLock__unlock(lock);
        return;
    }
    if (r4_1 != 0) {
        *gptr<u32>(r4_1) = r0_1;
    }
    u32 r8 = *gptr<u32>(r6 + 0x24u);
    u32 r4 = 0u;
    if (i < r8) {
        do {
            if (r4 >= r7) {
                break;
            }
            gptr<Local_0062c790_r0_2> r0_2 = gptr<Local_0062c790_r0_2>(r6 + 0x18u);
            u32 r3_1 = r9 + r4 * 0x7cu;
            if (i >= *gptr<u32>(r6 + 0x24u)) {
                r1_1 = r0_2->word_0;
            } else {
                u32 r2_1 = r0_2->word_4;
                u32 r1_2 = r0_2->word_8 + i;
                if (s32(r2_1) <= s32(r1_2)) {
                    r1_2 -= r2_1;
                }
                r1_1 = r0_2->word_0 + r1_2 * 0x7cu;
            }
            copy_aligned_bytes(r3_1, r1_1, 0x7cu, r3_1);
            i += 1u;
            r4 += 1u;
            guest::preempt();
        } while (i < r8);
    }
    if (r11 != 0) {
        *gptr<u8>(r6 + 0x3e9u) = 0;
    }
    RecursiveLock__unlock(lock);
}

}  // namespace d_0062c790
GUEST_EXPORT_FRAMED(0x0062c790, d_0062c790::VisitorLog__copy_entries, 0x4ff0);  // pushes {r4, i, r6, r7, r8, r9, lock, r11, lr} first, as the original

// f_0062c868: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the visitor log, initializes its lock and clears its state.
namespace d_0062c868 {

struct __attribute__((packed)) VisitorLog {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u32 word_28;
    u8 unknown_2c[0x3b8];  // (not used here)
    u32 word_3e4;
    u8 byte_3e8;
    u8 byte_3e9;
    u8 byte_3ea;
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(VisitorLog, word_0, 0x0);
GUEST_OFFSET(VisitorLog, word_4, 0x4);
GUEST_OFFSET(VisitorLog, word_8, 0x8);
GUEST_OFFSET(VisitorLog, word_c, 0xc);
GUEST_OFFSET(VisitorLog, word_10, 0x10);
GUEST_OFFSET(VisitorLog, word_14, 0x14);
GUEST_OFFSET(VisitorLog, word_18, 0x18);
GUEST_OFFSET(VisitorLog, word_1c, 0x1c);
GUEST_OFFSET(VisitorLog, word_20, 0x20);
GUEST_OFFSET(VisitorLog, word_24, 0x24);
GUEST_OFFSET(VisitorLog, word_28, 0x28);
GUEST_OFFSET(VisitorLog, word_3e4, 0x3e4);
GUEST_OFFSET(VisitorLog, byte_3e8, 0x3e8);
GUEST_OFFSET(VisitorLog, byte_3e9, 0x3e9);
GUEST_OFFSET(VisitorLog, byte_3ea, 0x3ea);
GUEST_OFFSET(VisitorLog, byte_3eb, 0x3eb);
GUEST_OFFSET(VisitorLog, byte_3ec, 0x3ec);
GUEST_OFFSET(VisitorLog, byte_3ed, 0x3ed);

inline constexpr guest::Function<0x0012f154, u32(u32)> RecursiveLock__initialize;

u32 VisitorLog__construct_2(gptr<VisitorLog> visitor_log) {
    visitor_log->word_0 = 0;
    visitor_log->word_4 = 0;
    visitor_log->word_8 = 0;
    visitor_log->word_c = 0;
    visitor_log->word_10 = 0;
    visitor_log->word_14 = 0;
    visitor_log->word_18 = 0;
    visitor_log->word_1c = 0;
    visitor_log->word_20 = 0;
    visitor_log->word_24 = 0;
    visitor_log->word_28 = 0;
    RecursiveLock__initialize(visitor_log.addr() + 0x28u);
    visitor_log->word_3e4 = 0;
    visitor_log->byte_3e8 = 0;
    visitor_log->byte_3e9 = 0;
    visitor_log->byte_3ea = 0;
    visitor_log->byte_3eb = 0;
    visitor_log->byte_3ec = 0;
    visitor_log->byte_3ed = 0;
    return visitor_log.addr();
}

}  // namespace d_0062c868
GUEST_EXPORT_FRAMED(0x0062c868, d_0062c868::VisitorLog__construct_2, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062c8cc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Clears the log state and frees its two entry buffers.
namespace d_0062c8cc {

struct __attribute__((packed)) VisitorLog {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
    u32 word_18;
    u32 word_1c;
    u32 word_20;
    u32 word_24;
    u8 unknown_28[0x3c1];  // (not used here)
    u8 byte_3e9;
    u8 byte_3ea;
    u8 byte_3eb;
    u8 byte_3ec;
    u8 byte_3ed;
};
GUEST_OFFSET(VisitorLog, word_0, 0x0);
GUEST_OFFSET(VisitorLog, word_4, 0x4);
GUEST_OFFSET(VisitorLog, word_8, 0x8);
GUEST_OFFSET(VisitorLog, word_c, 0xc);
GUEST_OFFSET(VisitorLog, word_10, 0x10);
GUEST_OFFSET(VisitorLog, word_14, 0x14);
GUEST_OFFSET(VisitorLog, word_18, 0x18);
GUEST_OFFSET(VisitorLog, word_1c, 0x1c);
GUEST_OFFSET(VisitorLog, word_20, 0x20);
GUEST_OFFSET(VisitorLog, word_24, 0x24);
GUEST_OFFSET(VisitorLog, byte_3e9, 0x3e9);
GUEST_OFFSET(VisitorLog, byte_3ea, 0x3ea);
GUEST_OFFSET(VisitorLog, byte_3eb, 0x3eb);
GUEST_OFFSET(VisitorLog, byte_3ec, 0x3ec);
GUEST_OFFSET(VisitorLog, byte_3ed, 0x3ed);

inline constexpr guest::Function<0x002f88b8, u32(u32, u32, u32, u32)> release_owned_object;

u32 VisitorLog__destruct(gptr<VisitorLog> visitor_log) {
    visitor_log->byte_3e9 = 0;
    visitor_log->byte_3ea = 0;
    u32 r0_1 = visitor_log->word_8;
    visitor_log->byte_3eb = 0;
    visitor_log->word_0 = 0;
    visitor_log->byte_3ec = 0;
    visitor_log->word_4 = 0;
    visitor_log->byte_3ed = 0;
    if (r0_1 != 0) {
        release_owned_object(r0_1, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        visitor_log->word_8 = 0;
        visitor_log->word_c = 0;
        visitor_log->word_14 = 0;
        visitor_log->word_10 = 0;
    }
    u32 r0_2 = visitor_log->word_18;
    if (r0_2 != 0) {
        release_owned_object(r0_2, guest::cpu()->r[1], guest::cpu()->r[2], guest::cpu()->r[3]);
        visitor_log->word_18 = 0;
        visitor_log->word_1c = 0;
        visitor_log->word_24 = 0;
        visitor_log->word_20 = 0;
    }
    return visitor_log.addr();
}

}  // namespace d_0062c8cc
GUEST_EXPORT_FRAMED(0x0062c8cc, d_0062c8cc::VisitorLog__destruct, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_0062cc14: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the entry (below 0x18f) has kind 0 or 1.
namespace d_0062cc14 {

inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;

u32 ItemList400__is_kind_0_or_1(u32 item_list400) {
    u32 r1_1 = *item_list_400;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == item_list400;
        cf_1 = 0x18fu >= item_list400;
    }
    if (!cf_1 || zf_1) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 r0_1 = r1_1 + item_list400 * 0x22u;
    if (r0_1 == 0) {
        guest::cpu()->r[1] = r1_1;
        return 0u;
    }
    u32 res_1 = u32(*gptr<u8>(r0_1 + 0x1cu)) & 0xfu;
    u32 zf_2 = res_1 == 0;
    if (!zf_2) {
        zf_2 = res_1 == 1u;
    }
    if (zf_2) {
        guest::cpu()->r[1] = r1_1;
        return 1u;
    }
    guest::cpu()->r[1] = r1_1;
    return 0u;
}

}  // namespace d_0062cc14
GUEST_EXPORT(0x0062cc14, d_0062cc14::ItemList400__is_kind_0_or_1);

// f_0062cca0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the entry (below 0x18f) has kind 0, 1 or 2.
namespace d_0062cca0 {

inline constexpr u32 item_list_400_address = 0x00a83af0u;
inline guest::global<u32, 0x00a83af0> item_list_400;

u32 ItemList400__is_kind_0_to_2(u32 item_list400) {
    u32 r1_1 = *item_list_400;
    u32 zf_1 = r1_1 == 0;
    u32 cf_1 = r1_1 >= 0u;
    if (!zf_1) {
        zf_1 = 0x18fu == item_list400;
        cf_1 = 0x18fu >= item_list400;
    }
    if (!cf_1 || zf_1) {
        return 0u;
    }
    u32 r0_1 = r1_1 + item_list400 * 0x22u;
    if (r0_1 == 0) {
        return 0u;
    }
    u32 res_1 = u32(*gptr<u8>(r0_1 + 0x1cu)) & 0xfu;
    u32 zf_2 = res_1 == 0;
    if (!zf_2) {
        zf_2 = res_1 == 1u;
    }
    if (!zf_2) {
        zf_2 = res_1 == 2u;
    }
    return zf_2;
}

}  // namespace d_0062cca0
GUEST_EXPORT(0x0062cca0, d_0062cca0::ItemList400__is_kind_0_to_2);

// f_0062d0f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the structure fits at the position: by the terrain for a single cell, else its rectangle.
namespace d_0062d0f4 {

struct __attribute__((packed)) Local_0062d0f4_ea_1 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062d0f4_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062d0f4_ea_1, word_4, 0x4);

struct __attribute__((packed)) Local_0062d0f4_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062d0f4_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0062d0f4_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0062d0f4_r0_7 {
    u8 byte_0;
    u8 byte_1;
};
GUEST_OFFSET(Local_0062d0f4_r0_7, byte_0, 0x0);
GUEST_OFFSET(Local_0062d0f4_r0_7, byte_1, 0x1);

inline constexpr guest::Function<0x002400b0, u32(u32)> structure_terrain_kind;
inline constexpr guest::Function<0x00241cf0, u32(u32)> kind_in_list_887460;
inline constexpr guest::Function<0x00243038, u32(u32, u32)> terrain_item_for_kind;
inline constexpr guest::Function<0x00315788, u32(u32, u32, u32)> terrain_at_world;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;
inline constexpr guest::Function<0x005ca234, u32(u32)> entry_address_88b948;
inline constexpr guest::Function<0x0062d1e4, u32(u32, u32, u32)> StructurePlacement__rect_is_free;
inline constexpr guest::Function<0x006cc934, u32(u32, u32, u32, u32)> byte_88bd38_is_f;

u32 StructurePlacement__fits(gptr<GridRect> grid_rect, u32 r1, u32 r2) {
    guest::StackFrame frame(0x24);  // the original's stack frame
    if (byte_88bd38_is_f(r1, r1, r2, guest::cpu()->r[3]) != 0) {
        u32 r2_2 = 0u;
        if (r2 == 1u) {
            r2_2 = 1u;
        }
        u32 r0_3 = terrain_at_world(u32(grid_rect->min.x), u32(grid_rect->min.y), r2_2);
        u32 r0_4 = kind_in_list_887460(r0_3);
        if (r0_4 != 0) {
            u32 terrain_item = terrain_item_for_kind(r0_3, structure_terrain_kind(r1));
            r0_4 = terrain_item == r1;
        }
        return r0_4;
    }
    gptr<Local_0062d0f4_r0_7> r0_7 = gptr<Local_0062d0f4_r0_7>(entry_address_88b948(r1));
    u32 r2_6 = s8(r0_7->byte_1);
    gptr<Local_0062d0f4_ea_1> ea_1 = gptr<Local_0062d0f4_ea_1>(frame.at(0x10).addr());
    ea_1->word_0 = u32(s8(r0_7->byte_0));
    ea_1->word_4 = r2_6;
    u32 r2_7 = *gptr<s8>(r0_7.addr() + 3u);
    u32 r1_5 = *gptr<s8>(r0_7.addr() + 2u);
    gptr<Local_0062d0f4_ea_4> ea_4 = gptr<Local_0062d0f4_ea_4>(frame.at(0x18).addr());
    ea_4->word_0 = r1_5;
    ea_4->word_4 = r2_7;
    construct_word_quad_from_pairs(frame.at(0).addr(), frame.at(0x10).addr(), frame.at(0x18).addr());
    return StructurePlacement__rect_is_free(grid_rect.addr(), frame.at(0).addr(), r2);
}

}  // namespace d_0062d0f4
GUEST_EXPORT_FRAMED(0x0062d0f4, d_0062d0f4::StructurePlacement__fits, 0x40f0);  // pushes {r4, r5, r6, r7, lr} first, as the original

// f_0062d1e4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Whether the structure's rectangle at the position passes every placement check.
namespace d_0062d1e4 {

inline constexpr guest::Function<0x00248dd0, u32(u32)> StructurePlacement__check_cells_a;
inline constexpr guest::Function<0x00248fb0, u32(u32)> StructurePlacement__has_blocked_cell;
inline constexpr guest::Function<0x0024919c, u32(u32)> StructurePlacement__check_terrain;
inline constexpr guest::Function<0x00249728, u32(u32)> StructurePlacement__check_neighbors;
inline constexpr guest::Function<0x00249eec, u32(u32)> StructurePlacement__check_cells_b;
inline constexpr guest::Function<0x0024a0cc, u32(u32)> StructurePlacement__check_cells_c;
inline constexpr guest::Function<0x0024a45c, u32(u32, u32, u32, u32)> StructurePlacement__init;
inline constexpr guest::Function<0x0052f260, u32(u32)> PlacementQuery__destroy;
inline constexpr guest::Function<0x00715280, u32(u32)> MapRect__has_indexed_item_a;
inline constexpr guest::Function<0x007153ec, u32(u32)> MapRect__has_blocking_cell;
inline constexpr guest::Function<0x00715780, u32(u32)> MapRect__has_block_kind_1;

struct __attribute__((packed)) StructurePlacementRectIsFreeFrame {
    u32 word_0;
    u8 unknown_4[0x30];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementRectIsFreeFrame, word_0, 0x0);
GUEST_SIZE(StructurePlacementRectIsFreeFrame, 0x34);

u32 StructurePlacement__rect_is_free(gptr<GridRect> grid_rect, u32 r1, u32 r2) {
    guest::StackFrameOf<StructurePlacementRectIsFreeFrame> frame;  // the original's stack frame
    frame->word_0 = r2;
    StructurePlacement__init(frame.at(4).addr(), u32(grid_rect->min.x), u32(grid_rect->min.y), r1);
    u32 r0_3 = MapRect__has_blocking_cell(frame.at(4).addr());
    if (r0_3 == 0) {
        r0_3 = StructurePlacement__has_blocked_cell(frame.at(4).addr());
        if (r0_3 == 0) {
            r0_3 = StructurePlacement__check_neighbors(frame.at(4).addr());
            if (r0_3 == 0) {
                r0_3 = MapRect__has_block_kind_1(frame.at(4).addr());
                if (r0_3 == 0) {
                    r0_3 = StructurePlacement__check_terrain(frame.at(4).addr());
                    if (r0_3 == 0) {
                        r0_3 = StructurePlacement__check_cells_c(frame.at(4).addr());
                        if (r0_3 == 0) {
                            r0_3 = StructurePlacement__check_cells_b(frame.at(4).addr());
                            if (r0_3 == 0) {
                                r0_3 = MapRect__has_indexed_item_a(frame.at(4).addr());
                                if (r0_3 == 0) {
                                    r0_3 = StructurePlacement__check_cells_a(frame.at(4).addr());
                                    if (r0_3 == 0) {
                                        PlacementQuery__destroy(r0_3);
                                        return 1u;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    PlacementQuery__destroy(r0_3);
    return 0u;
}

}  // namespace d_0062d1e4
GUEST_EXPORT_FRAMED(0x0062d1e4, d_0062d1e4::StructurePlacement__rect_is_free, 0x4000);  // pushes {lr} first, as the original

// f_0062d4e0: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// The default structure rectangle (built once).
namespace d_0062d4e0 {

inline constexpr u32 default_structure_rect_a_address = 0x0095b6c8u;
inline constexpr u32 default_structure_rect_b_address = 0x0095b6ccu;
inline constexpr u32 default_structure_rect_c_address = 0x0095b6d0u;
inline constexpr u32 default_structure_rect_d_address = 0x0095b6d4u;
inline constexpr u32 default_structure_rect_e_address = 0x0095b6dcu;
inline constexpr u32 default_structure_rect_value_address = 0x00ac3548u;
inline guest::global<u32, 0x0095b6c8> default_structure_rect_a;
inline guest::global<u32, 0x0095b6cc> default_structure_rect_b;
inline guest::global<u32, 0x0095b6d0> default_structure_rect_c;
inline guest::global<u32, 0x0095b6d4> default_structure_rect_d;
inline guest::global<u32, 0x0095b6d8> global_0095b6d8;
inline guest::global<u32, 0x0095b6dc> default_structure_rect_e;
inline guest::global<u32, 0x0095b6e0> global_0095b6e0;
inline constexpr guest::Function<0x002fe7dd, u32(u32, u32, u32, u32)> static_guard_acquire;
inline constexpr guest::Function<0x0052f200, u32(u32, u32, u32)> construct_word_quad_from_pairs;

u32 default_structure_rect(u32 r0_unused, u32 r1, u32 r2) {
    if ((*default_structure_rect_c & 1u) == 0) {
        u32 first_time_4 = static_guard_acquire(default_structure_rect_c_address, r1, r2, guest::cpu()->r[3]);
        r1 = guest::cpu()->r[1];
        r2 = guest::cpu()->r[2];
        if (first_time_4 != 0) {
            *default_structure_rect_d = 1;
            *global_0095b6d8 = 1;
            r2 = 0x100000u;
            r1 = 0x52f0ecu;
        }
    }
    if ((*default_structure_rect_b & 1u) == 0) {
        u32 first_time_5 = static_guard_acquire(default_structure_rect_b_address, r1, r2, guest::cpu()->r[3]);
        if (first_time_5 != 0) {
            *default_structure_rect_e = 5;
            *global_0095b6e0 = 4;
        }
    }
    if ((*default_structure_rect_a & 1u) != 0) {
        return default_structure_rect_value_address;
    }
    u32 first_time_6 = static_guard_acquire(default_structure_rect_a_address, r1, r2, guest::cpu()->r[3]);
    if (first_time_6 == 0) {
        return default_structure_rect_value_address;
    }
    construct_word_quad_from_pairs(default_structure_rect_value_address, default_structure_rect_d_address, default_structure_rect_e_address);
    return default_structure_rect_value_address;
}

}  // namespace d_0062d4e0
GUEST_EXPORT_FRAMED(0x0062d4e0, d_0062d4e0::default_structure_rect, 0x4010);  // pushes {r4, lr} first, as the original

// f_0062d5dc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Scans the position's blocks for the structure's listed kinds.
namespace d_0062d5dc {

struct __attribute__((packed)) StructurePlacement {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(StructurePlacement, word_0, 0x0);
GUEST_OFFSET(StructurePlacement, word_4, 0x4);

struct __attribute__((packed)) Local_0062d5dc_ea_1 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_ea_1, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_1, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_ea_1, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_ea_1, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_ea_1, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_ea_1, word_14, 0x14);

struct __attribute__((packed)) Local_0062d5dc_ea_2 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_ea_2, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_2, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_ea_2, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_ea_2, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_ea_2, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_ea_2, word_14, 0x14);

struct __attribute__((packed)) Local_0062d5dc_ea_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
};
GUEST_OFFSET(Local_0062d5dc_ea_3, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_3, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_ea_3, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_ea_3, word_c, 0xc);

struct __attribute__((packed)) Local_0062d5dc_ea_4 {
    u32 word_0;
    u32 word_4;
};
GUEST_OFFSET(Local_0062d5dc_ea_4, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_4, word_4, 0x4);

struct __attribute__((packed)) Local_0062d5dc_ea_5 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_ea_5, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_5, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_ea_5, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_ea_5, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_ea_5, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_ea_5, word_14, 0x14);

struct __attribute__((packed)) Local_0062d5dc_ea_6 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_ea_6, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_ea_6, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_ea_6, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_ea_6, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_ea_6, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_ea_6, word_14, 0x14);

struct __attribute__((packed)) Local_0062d5dc_r0_7 {
    u32 word_0;
    u32 word_4;
    u8 byte_8;
};
GUEST_OFFSET(Local_0062d5dc_r0_7, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_r0_7, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_r0_7, byte_8, 0x8);

struct __attribute__((packed)) Local_0062d5dc_r5_3 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_r5_3, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_r5_3, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_r5_3, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_r5_3, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_r5_3, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_r5_3, word_14, 0x14);

struct __attribute__((packed)) Local_0062d5dc_r5_4 {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(Local_0062d5dc_r5_4, word_0, 0x0);
GUEST_OFFSET(Local_0062d5dc_r5_4, word_4, 0x4);
GUEST_OFFSET(Local_0062d5dc_r5_4, word_8, 0x8);
GUEST_OFFSET(Local_0062d5dc_r5_4, word_c, 0xc);
GUEST_OFFSET(Local_0062d5dc_r5_4, word_10, 0x10);
GUEST_OFFSET(Local_0062d5dc_r5_4, word_14, 0x14);

inline constexpr guest::Function<0x00314a04, u32(u32, u32, u32, u32)> word_ab7df4_00314a04;
inline constexpr guest::Function<0x00314a1c, u32(u32, u32)> ListCursor__end;
inline constexpr guest::Function<0x00314a9c, u32(u32, u32)> ListCursor__begin;
inline constexpr guest::Function<0x00314b04, u32(u32, u32, u32, u32)> handles_differ;
inline constexpr guest::Function<0x00314b58, u32(u32)> ListCursor__next;
inline constexpr guest::Function<0x006a6c78, u32(u32, u32, u32, u32)> blocks_of_position;
inline constexpr guest::Function<0x006cac2c, u32(u32, u32, u32, u32)> value_is_in_table_e4ec;

struct __attribute__((packed)) StructurePlacementScanBlocksFrame {
    u8 unknown_0[0x80];  // (not read or written by name)
    u32 word_80;
    u32 word_84;
    u8 unknown_88[0xc];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementScanBlocksFrame, word_80, 0x80);
GUEST_OFFSET(StructurePlacementScanBlocksFrame, word_84, 0x84);
GUEST_SIZE(StructurePlacementScanBlocksFrame, 0x94);

u32 StructurePlacement__scan_blocks(gptr<StructurePlacement> structure_placement, u32 r1, u32 r2, u32 r3) {
    guest::StackFrameOf<StructurePlacementScanBlocksFrame> frame;  // the original's stack frame
    u32 r2_7 = 0;
    u32 r3_7 = 0;
    u32 r0_11 = 0;
    gptr<Local_0062d5dc_ea_6> ea_6 = gptr<Local_0062d5dc_ea_6>(0u);
    u32 r1_6 = 0;
    u32 r4_2 = 0;
    u32 r12_4 = 0;
    gptr<Local_0062d5dc_r5_4> r5_4 = gptr<Local_0062d5dc_r5_4>(0u);
    u32 list = word_ab7df4_00314a04(0u, r1, r2, r3);
    ListCursor__begin(frame.at(0x50).addr(), list);
    ListCursor__end(frame.at(0x38).addr(), list);
    u32 r7 = frame.at(8).addr();
    gptr<Local_0062d5dc_ea_1> ea_1 = gptr<Local_0062d5dc_ea_1>(frame.at(0x50).addr());
    u32 r0_4 = ea_1->word_0;
    u32 r1_1 = ea_1->word_4;
    u32 r2_3 = ea_1->word_8;
    u32 r3_3 = ea_1->word_c;
    u32 r5_1 = ea_1->word_10;
    u32 r12_1 = ea_1->word_14;
    u32 cursor = frame.at(0x20).addr();
    gptr<Local_0062d5dc_ea_2> ea_2 = gptr<Local_0062d5dc_ea_2>(frame.at(0x20).addr());
    ea_2->word_0 = r0_4;
    ea_2->word_4 = r1_1;
    ea_2->word_8 = r2_3;
    ea_2->word_c = r3_3;
    ea_2->word_10 = r5_1;
    ea_2->word_14 = r12_1;
    gptr<Local_0062d5dc_ea_3> ea_3 = gptr<Local_0062d5dc_ea_3>(frame.at(0x38).addr());
    u32 r0_5 = ea_3->word_0;
    u32 r1_2 = ea_3->word_4;
    u32 r2_4 = ea_3->word_8;
    u32 r3_4 = ea_3->word_c;
    gptr<Local_0062d5dc_ea_4> ea_4 = gptr<Local_0062d5dc_ea_4>(frame.at(0x48).addr());
    u32 r5_2 = ea_4->word_0;
    u32 r12_2 = ea_4->word_4;
    *gptr<u32>(r7) = r0_5;
    *gptr<u32>(r7 + 4) = r1_2;
    *gptr<u32>(r7 + 8) = r2_4;
    *gptr<u32>(r7 + 0xc) = r3_4;
    *gptr<u32>(r7 + 0x10) = r5_2;
    *gptr<u32>(r7 + 0x14) = r12_2;
    u32 r5 = structure_placement->word_0;
    u32 r6 = structure_placement->word_4;
    u32 r0_6 = handles_differ(cursor, r7, r2_4, r3_4);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    r3 = guest::cpu()->r[3];
    u32 r9 = 0u;
    if (r0_6 != 0) {
        do {
            gptr<Local_0062d5dc_r0_7> r0_7 = gptr<Local_0062d5dc_r0_7>(cursor + 8u);
            u32 r0_8 = r0_7->byte_8;
            if (value_is_in_table_e4ec(r0_8, r1, r2, r3) != 0) {
                frame->word_80 = r9;
                frame->word_84 = r9;
                blocks_of_position(frame.at(0x80).addr(), frame.at(0x84).addr(), r0_7->word_0, r0_7->word_4);
                if (r5 == frame->word_80 && r6 == frame->word_84) {
                    gptr<Local_0062d5dc_ea_5> ea_5 = gptr<Local_0062d5dc_ea_5>(frame.at(0x20).addr());
                    u32 r1_5 = ea_5->word_4;
                    r2_7 = ea_5->word_8;
                    r3_7 = ea_5->word_c;
                    u32 r4_1 = ea_5->word_10;
                    u32 r12_3 = ea_5->word_14;
                    gptr<Local_0062d5dc_r5_3> r5_3 = gptr<Local_0062d5dc_r5_3>(frame.at(0x68).addr());
                    r5_3->word_0 = ea_5->word_0;
                    r5_3->word_4 = r1_5;
                    r5_3->word_8 = r2_7;
                    r5_3->word_c = r3_7;
                    r5_3->word_10 = r4_1;
                    r5_3->word_14 = r12_3;
                    goto L_62d6e8;
                }
            }
            ListCursor__next(cursor);
            r0_11 = handles_differ(cursor, r7, guest::cpu()->r[2], guest::cpu()->r[3]);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            r3 = guest::cpu()->r[3];
            guest::preempt();
        } while (r0_11 != 0);
    }
    ea_6 = gptr<Local_0062d5dc_ea_6>(frame.at(8).addr());
    r1_6 = ea_6->word_4;
    r2_7 = ea_6->word_8;
    r3_7 = ea_6->word_c;
    r4_2 = ea_6->word_10;
    r12_4 = ea_6->word_14;
    r5_4 = gptr<Local_0062d5dc_r5_4>(frame.at(0x68).addr());
    r5_4->word_0 = ea_6->word_0;
    r5_4->word_4 = r1_6;
    r5_4->word_8 = r2_7;
    r5_4->word_c = r3_7;
    r5_4->word_10 = r4_2;
    r5_4->word_14 = r12_4;
L_62d6e8:;
    return handles_differ(frame.at(0x38).addr(), frame.at(0x68).addr(), r2_7, r3_7);
}

}  // namespace d_0062d5dc
GUEST_EXPORT_FRAMED(0x0062d5dc, d_0062d5dc::StructurePlacement__scan_blocks, 0x43f0);  // pushes {r4, r5, r6, r7, cursor, r9, lr} first, as the original

// f_0062e47c: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Finds a spot in the block where the structure fits.
namespace d_0062e47c {

inline constexpr guest::Function<0x0024220c, u32(u32, u32, u32)> RealEstate__plot_fits;
inline constexpr guest::Function<0x0052eed0, u32(u32, u32, u32)> cell_of_block_and_position;
inline constexpr guest::Function<0x0052f0c0, u32(u32, u32, u32)> copy_construct_word_pair;
inline constexpr guest::Function<0x0052f144, u32(u32, u32, u32)> WrappingCursor__advance;
inline constexpr guest::Function<0x0052f224, u32(u32, u32)> copy_word_quad;
inline constexpr guest::Function<0x00540b14, u32(u32, u32, u32)> IntArray__fill_range;
inline constexpr guest::Function<0x00540bd0, u32(u32, u32, u32)> IntArray__shuffle;
inline constexpr guest::Function<0x0057bb98, u32(u32)> block_cell_rect;
inline constexpr guest::Function<0x0062d0f4, u32(u32, u32, u32)> StructurePlacement__fits;
inline constexpr guest::Function<0x007481ec, u32(u32, u32)> key_records_differ;
inline constexpr guest::Function<0x0074824c, u32(u32, u32)> make_end_grid_rect_iterator;
inline constexpr guest::Function<0x00748284, u32(u32, u32)> construct_grid_rect_iterator;
inline constexpr guest::Function<0x00810b1c, u32(u32, u32, u32, u32)> NodePool256__construct;

struct __attribute__((packed)) StructurePlacementFindSpotFrame {
    u32 word_0;
    u32 word_4;
    u32 word_8;
    u32 word_c;
    u8 unknown_10[0xc54];  // (not read or written by name)
};
GUEST_OFFSET(StructurePlacementFindSpotFrame, word_0, 0x0);
GUEST_OFFSET(StructurePlacementFindSpotFrame, word_4, 0x4);
GUEST_OFFSET(StructurePlacementFindSpotFrame, word_8, 0x8);
GUEST_OFFSET(StructurePlacementFindSpotFrame, word_c, 0xc);
GUEST_SIZE(StructurePlacementFindSpotFrame, 0xc64);

u32 StructurePlacement__find_spot(u32 structure_placement, u32 r1, u32 r2) {
    guest::StackFrameOf<StructurePlacementFindSpotFrame> frame;  // the original's stack frame
    u32 r12 = guest::cpu()->r[12];
    u32 r0_5 = 0;
    *frame.at<u32>(0xc80) = r12;
    u32 node_pool256 = frame.at(0).addr();
    u32 r9 = structure_placement;
    u32 r11 = r1;
    u32 r10 = r2;
    u32 r0_2 = block_cell_rect(NodePool256__construct(node_pool256, r1, r2, guest::cpu()->r[3]));
    u32 r7_1 = frame.at(0xc18).addr();
    copy_word_quad(r7_1, r0_2);
    u32 r6 = frame.at(0xc38).addr();
    make_end_grid_rect_iterator(r6, r7_1);
    u32 grid_rect = frame.at(0xc28).addr();
    construct_grid_rect_iterator(grid_rect, r7_1);
    u32 r0_3 = key_records_differ(grid_rect, r6);
    r1 = guest::cpu()->r[1];
    r2 = guest::cpu()->r[2];
    if (r0_3 != 0) {
        u32 r8 = frame.at(0xc48).addr();
        do {
            if (s32(*gptr<u32>(grid_rect + 8u)) >= 2 && s32(*gptr<u32>(grid_rect + 8u)) < 0xe && s32(*gptr<u32>(grid_rect + 0xcu)) >= 2 && s32(*gptr<u32>(grid_rect + 0xcu)) < 0xe) {
                cell_of_block_and_position(r8, r9, grid_rect + 8u);
                r2 = guest::cpu()->r[2];
                r1 = frame->word_4;
                if (s32(frame->word_0) < s32(r1)) {
                    u32 r0_4 = frame->word_c;
                    if (r0_4 != 0) {
                        frame->word_c = *gptr<u32>(r0_4);
                        r0_4 = copy_construct_word_pair(r0_4, r8, r2);
                    }
                    r1 = frame->word_0;
                    r2 = frame->word_4;
                    if (s32(r1) < s32(r2)) {
                        r1 = frame->word_8;
                        r2 = frame->word_0;
                        *gptr<u32>(r1 + (r2 << 2)) = r0_4;
                        frame->word_0 = frame->word_0 + 1u;
                    }
                }
            }
            WrappingCursor__advance(grid_rect, r1, r2);
            r0_5 = key_records_differ(grid_rect, r6);
            r1 = guest::cpu()->r[1];
            r2 = guest::cpu()->r[2];
            guest::preempt();
        } while (r0_5 != 0);
    }
    if (s32(frame->word_0) > 0) {
        IntArray__shuffle(node_pool256, r10, r2);
        r1 = guest::cpu()->r[1];
        u32 r0_6 = frame->word_0;
        if (r0_6 >= 0u && r0_6 != 0) {
            grid_rect = *gptr<u32>(frame->word_8);
            if (grid_rect != 0) {
                do {
                    if (StructurePlacement__fits(grid_rect, r11, 3u) != 0) {
                        RealEstate__plot_fits(*gptr<u32>(grid_rect), *gptr<u32>(grid_rect + 4), r11);
                        return 1u;
                    }
                    if (s32(frame->word_0) >= 1) {
                        u32 r4_1 = *gptr<u32>(frame->word_8);
                        *gptr<u32>(r4_1) = frame->word_c;
                        frame->word_c = r4_1;
                    }
                    IntArray__fill_range(node_pool256, 0u, 1u);
                    r1 = guest::cpu()->r[1];
                    u32 r0_9 = frame->word_0;
                    u32 zf_1 = r0_9 == 0;
                    if (zf_1 || s32(r0_9) < 0 || r0_9 < 0u || zf_1) {
                        break;
                    }
                    grid_rect = *gptr<u32>(frame->word_8);
                    guest::preempt();
                } while (grid_rect != 0);
            }
        }
    }
    guest::cpu()->r[1] = r1;
    return 0u;
}

}  // namespace d_0062e47c
GUEST_EXPORT_FRAMED(0x0062e47c, d_0062e47c::StructurePlacement__find_spot, 0x4ff0);  // pushes {grid_rect, node_pool256, r6, r7, r8, r9, r10, r11, lr} first, as the original
