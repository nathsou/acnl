// The local-play session's message buffer (NetSession::buffer): records of messages written for the other stations,
// with per-type counters, and the entry templates edited through a guarded scratch copy.
#pragma once

#include "guest/guest.hpp"

struct PacketBuffer {
    static constexpr u32 COUNTERS = 4;
    static constexpr u32 TEMPLATE_COUNT = 0x96;
    static constexpr u8 GUARD = 0xfe;
    static constexpr u32 GUARD_SIZE = 4;  // guard bytes before and after the scratch copy

    guest::gptr<u8> start;
    guest::gptr<u8> flushed;    // everything before this was handed out; null: nothing to write to
    guest::gptr<u8> write_pos;
    guest::gptr<u8> templates;  // the stored entry templates
    guest::gptr<u8> scratch;    // guard bytes, the working copy, guard bytes
    u32 scratch_size;
    guest::gptr<u8> results;    // one byte per template
    u32 counters_1c[COUNTERS];
    u8 own_station;             // the index NetSession::has_station_bit always answers false for
    u8 unknown_2d[3];
    u32 values_30[COUNTERS];
    u32 unknown_40;
    u8 disabled;
    u8 unknown_45[3];

    void append(guest::gptr<const u8> data, u32 size);
    void reserve_record();
    void increment_counter(u32 index);
    void clear_counter_and_value(u32 index);
    void flush_record(u32 type, u32 value);
    void clear_counter(u32 index);
    // Lets the template's handler edit a copy of the template; if the handler stayed inside the copy and changed it,
    // the template is replaced and the result byte set.
    void apply_template(u32 id, guest::gptr<void> entry, u32 result);
};
GUEST_OFFSET(PacketBuffer, start, 0);
GUEST_OFFSET(PacketBuffer, flushed, 4);
GUEST_OFFSET(PacketBuffer, write_pos, 8);
GUEST_OFFSET(PacketBuffer, templates, 0xc);
GUEST_OFFSET(PacketBuffer, scratch, 0x10);
GUEST_OFFSET(PacketBuffer, scratch_size, 0x14);
GUEST_OFFSET(PacketBuffer, results, 0x18);
GUEST_OFFSET(PacketBuffer, counters_1c, 0x1c);
GUEST_OFFSET(PacketBuffer, own_station, 0x2c);
GUEST_OFFSET(PacketBuffer, values_30, 0x30);
GUEST_OFFSET(PacketBuffer, disabled, 0x44);
GUEST_SIZE(PacketBuffer, 0x48);
