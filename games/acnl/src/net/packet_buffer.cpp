#include "guest/guest.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {

constexpr u32 RECORD_SIZE = 6;
constexpr u32 MAX_BYTES = 0x16800;
constexpr u32 COUNTER_MAX = 0xffffffff;

// A 6-byte record built by flush_record (the meaning of its fields is not known yet).
struct Record {
    // byte_3: bits 0-1 are length bits 16-17, bits 2-4 a caller value
    static constexpr u32 LENGTH_HIGH_MASK = 0x03;
    static constexpr u32 LENGTH_HIGH_SHIFT = 16;
    static constexpr u32 VALUE_SHIFT = 2;
    static constexpr u32 VALUE_MASK = 0x1c;
    static constexpr u8 BYTE_3_FIELDS = 0x1f;
    // byte_5: bits 0-1 come from the globals, bit 2 is cleared
    static constexpr u32 GLOBAL_BITS_MASK = 0x03;
    static constexpr u8 BYTE_5_FIELDS = 0x07;

    u8 type;
    u8 length_low;
    u8 length_mid;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_SIZE(Record, 6);

inline constexpr guest::Function<0x007795ec, u32(gptr<u8> destination, gptr<Record> record)> write_record;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;

}  // namespace

// Makes room for one more record when nothing is pending; past the size limit, freezes the buffer instead.
void PacketBuffer::reserve_record() {
    if (!flushed || disabled != 0) {
        return;
    }
    NetSession &globals = **net_session;
    u8 flags = globals.flags;
    if ((flags & NetSession::FLAG_FROZEN) || flushed != write_pos) {
        return;
    }
    if (write_pos) {
        u32 used = u32(write_pos - start) + RECORD_SIZE;
        if (used <= MAX_BYTES) {
            write_pos = write_pos + RECORD_SIZE;
            return;
        }
    }
    globals.flags = flags | NetSession::FLAG_FROZEN;
}
GUEST_EXPORT(0x00627f74, PacketBuffer::reserve_record);

// Counts up, saturating.
void PacketBuffer::increment_counter(u32 index) {
    if (index < COUNTERS && counters_1c[index] != COUNTER_MAX) {
        counters_1c[index]++;
    }
}
GUEST_EXPORT(0x00627fe0, PacketBuffer::increment_counter);

void PacketBuffer::clear_counter_and_value(u32 index) {
    if (index < COUNTERS) {
        counters_1c[index] = 0;
        values_30[index] = 0;
    }
}
GUEST_EXPORT(0x00628000, PacketBuffer::clear_counter_and_value);

// Writes a record describing the pending range to `flushed` and marks everything as handed out.
void PacketBuffer::flush_record(u32 type, u32 value) {
    if (disabled != 0) {
        return;
    }
    NetSession &globals = **net_session;
    if (globals.flags & NetSession::FLAG_FROZEN) {
        return;
    }
    u32 pending = u32(write_pos - flushed);
    if (pending < RECORD_SIZE) {
        return;
    }
    u32 length = pending - RECORD_SIZE;
    gptr<u8> destination = flushed;
    u8 extra = read_global_byte_2();
    u8 global_bits = globals.station_bits;
    if (destination) {
        guest::StackObject<Record> record;
        record->type = u8(type);
        record->length_low = u8(length);
        record->length_mid = u8(length >> 8);
        record->byte_4 = extra;
        record->byte_5 = u8((record->byte_5 & ~Record::BYTE_5_FIELDS) | (global_bits & Record::GLOBAL_BITS_MASK));
        u32 length_high = (length >> Record::LENGTH_HIGH_SHIFT) & Record::LENGTH_HIGH_MASK;
        u32 caller_bits = (value << Record::VALUE_SHIFT) & Record::VALUE_MASK;
        record->byte_3 = u8((record->byte_3 & ~Record::BYTE_3_FIELDS) | length_high | caller_bits);
        write_record(destination, record.ptr());
    }
    flushed = write_pos;
}
GUEST_EXPORT(0x0062801c, PacketBuffer::flush_record);

void PacketBuffer::clear_counter(u32 index) {
    if (index < COUNTERS) {
        counters_1c[index] = 0;
    }
}
GUEST_EXPORT(0x006280f4, PacketBuffer::clear_counter);

namespace {

}  // namespace
