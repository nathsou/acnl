// The local-play session (the object the global at 0x0095362c points to): the stations' message buffer, parts that
// are not known yet, and the session's flags. Only the fields the rewritten code uses are named.
#pragma once

#include "guest/guest.hpp"
#include "net/packet_buffer.hpp"

// A part of the session whose type and extent are not known yet.
struct NetSessionPart {
    u8 unknown;
};

struct NetSession {
    static constexpr u8 FLAG_FROZEN = 1;  // flags: the buffer ran out of room; nothing is recorded afterwards

    u8 unknown_00000[0x10];
    PacketBuffer buffer;
    u8 unknown_00058[0xb0 - 0x58];
    NetSessionPart part_b0;
    u8 unknown_000b1[0x1c0 - 0xb1];
    NetSessionPart part_1c0;
    u8 unknown_001c1[0x1e4 - 0x1c1];
    NetSessionPart part_1e4;
    u8 unknown_001e5[0x1f0 - 0x1e5];
    u8 state_1f0;     // 0 or 1: can still move on to the next state (see begin_state_1f0)
    u8 value_1f1;
    u8 unknown_001f2[0x214 - 0x1f2];
    u8 state_214;     // above 2: unknown meaning (see state_214_above_2)
    u8 unknown_00215[0x229 - 0x215];
    u8 flag_229;
    u8 unknown_0022a[2];
    u8 state_22c;
    u8 unknown_0022d[7];
    u8 bits_234;
    u8 unknown_00235[0x23c - 0x235];
    u8 count_23c;
    u8 target_23d;
    u8 unknown_0023e[0x277c - 0x23e];
    NetSessionPart part_277c;
    u8 unknown_0277d[3];
    s8 value_2780;
    u8 unknown_02781[0x27a0 - 0x2781];
    u8 count_27a0;
    u8 unknown_027a1[2];
    u8 value_27a3;
    u8 unknown_027a4[0x28ec - 0x27a4];
    NetSessionPart part_28ec;
    u8 unknown_028ed[0x7874 - 0x28ed];
    NetSessionPart part_7874;
    u8 unknown_07875[0x13234 - 0x7875];
    NetSessionPart block_13234;
    u8 unknown_13235[0x13266 - 0x13235];
    u8 state_13266;
    u8 unknown_13267;
    u8 station_bits;  // its low 2 bits go into every record; station() answers it
    u8 unknown_13269;
    u8 flags;         // see FLAG_FROZEN
    u8 unknown_1326b;
    u8 byte_1326c;
    u8 unknown_1326d;
    u8 station_mask;  // one bit per station (bit_for_index)
    u8 mode_1326f;    // meaning not known yet (see mode)
    u8 unknown_13270[0x1329d - 0x13270];
    u8 selector_1329d;  // 2 selects value_27a3 in current_target
    u8 unknown_1329e[0x132ac - 0x1329e];
    u8 flag_132ac;    // unknown flag
    s8 value_132ad;
    u8 flag_132ae;    // unknown flag

    u8 station() const;
    u8 mode() const;
    bool has_station_bit(u32 index) const;
    s8 signed_value() const;
};
GUEST_OFFSET(NetSession, buffer, 0x10);
GUEST_OFFSET(NetSession, part_b0, 0xb0);
GUEST_OFFSET(NetSession, part_1c0, 0x1c0);
GUEST_OFFSET(NetSession, part_1e4, 0x1e4);
GUEST_OFFSET(NetSession, state_1f0, 0x1f0);
GUEST_OFFSET(NetSession, state_214, 0x214);
GUEST_OFFSET(NetSession, flag_229, 0x229);
GUEST_OFFSET(NetSession, state_22c, 0x22c);
GUEST_OFFSET(NetSession, bits_234, 0x234);
GUEST_OFFSET(NetSession, count_23c, 0x23c);
GUEST_OFFSET(NetSession, target_23d, 0x23d);
GUEST_OFFSET(NetSession, part_277c, 0x277c);
GUEST_OFFSET(NetSession, value_2780, 0x2780);
GUEST_OFFSET(NetSession, count_27a0, 0x27a0);
GUEST_OFFSET(NetSession, value_27a3, 0x27a3);
GUEST_OFFSET(NetSession, part_28ec, 0x28ec);
GUEST_OFFSET(NetSession, part_7874, 0x7874);
GUEST_OFFSET(NetSession, block_13234, 0x13234);
GUEST_OFFSET(NetSession, state_13266, 0x13266);
GUEST_OFFSET(NetSession, station_bits, 0x13268);
GUEST_OFFSET(NetSession, flags, 0x1326a);
GUEST_OFFSET(NetSession, byte_1326c, 0x1326c);
GUEST_OFFSET(NetSession, station_mask, 0x1326e);
GUEST_OFFSET(NetSession, mode_1326f, 0x1326f);
GUEST_OFFSET(NetSession, selector_1329d, 0x1329d);
GUEST_OFFSET(NetSession, flag_132ac, 0x132ac);
GUEST_OFFSET(NetSession, value_132ad, 0x132ad);
GUEST_OFFSET(NetSession, flag_132ae, 0x132ae);

inline guest::global<guest::gptr<NetSession>, 0x0095362c> net_session;
