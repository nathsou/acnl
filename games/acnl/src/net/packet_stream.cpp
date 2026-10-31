#include "guest/guest.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {

constexpr u32 MAX_BYTES = 0x16800;

// A 6-byte record header (meaning of the fields: see packet_buffer.cpp).
struct Record {
    static constexpr u32 SIZE = 6;
    static constexpr u32 LENGTH_HIGH_MASK = 0x03;
    static constexpr u32 LENGTH_HIGH_SHIFT = 16;
    static constexpr u32 VALUE_SHIFT = 2;
    static constexpr u32 VALUE_MASK = 0x07;
    static constexpr u32 GLOBAL_BITS_MASK = 0x03;

    u8 type;
    u8 length_low;
    u8 length_mid;
    u8 byte_3;
    u8 byte_4;
    u8 byte_5;
};
GUEST_SIZE(Record, 6);

constexpr u32 HANDLER_TYPE_COUNT = 0x85;
constexpr u32 SMALL_TABLE_COUNT = 0x1b;

inline guest::global<s8[SMALL_TABLE_COUNT], 0x0087b108> small_signed_table;
inline guest::global<u32[SMALL_TABLE_COUNT], 0x0087b124> small_handler_table;
inline guest::global<u32[HANDLER_TYPE_COUNT], 0x0087b898> record_handler_table;

inline constexpr guest::Function<0x002f8574, void(gptr<void> destination, gptr<const void> source, u32 size)>
    copy_bytes;
inline constexpr guest::Function<0x007795ec, u32(gptr<Record> destination, gptr<u8> source)> copy_record;
inline constexpr guest::Function<0x00301444, u32(gptr<void> object, u32 argument)> notify_object;

// An object with a pointer at 0x18 (meaning not known yet).
struct TargetHolder {
    u8 unknown_00[0x18];
    gptr<void> target;  // may be null
};
GUEST_OFFSET(TargetHolder, target, 0x18);

}  // namespace

// Appends bytes at the write position when nothing is pending; past the size limit, freezes the buffers instead.
void PacketBuffer::append(gptr<const u8> data, u32 size) {
    if (!data || disabled != 0) {
        return;
    }
    NetSession &globals = **net_session;
    u8 flags = globals.flags;
    if ((flags & NetSession::FLAG_FROZEN) || flushed == write_pos) {
        return;
    }
    if (write_pos && u32(write_pos - start) + size <= MAX_BYTES) {
        copy_bytes(write_pos, data, size);
        write_pos = write_pos + size;
        return;
    }
    globals.flags = flags | NetSession::FLAG_FROZEN;
}
GUEST_EXPORT(0x00627d44, PacketBuffer::append);

// A signed byte from a 27-entry table; 1 beyond it.
static s8 small_signed_value(u32 index) {
    if (index < SMALL_TABLE_COUNT) {
        return small_signed_table[index];
    }
    return 1;
}
GUEST_EXPORT(0x0062810c, small_signed_value);

// Calls the handler registered for an index with the first three arguments; returns r0 as it ends up.
static u32 call_small_handler(u32 a, u32 b, u32 c, u32 index) {
    if (index < SMALL_TABLE_COUNT) {
        u32 handler = small_handler_table[index];
        if (handler != 0) {
            return guest::call_address<u32>(handler, a, b, c);
        }
    }
    return a;
}
GUEST_EXPORT(0x00628124, call_small_handler);

// Walks a stream of records (6-byte header + payload) and calls the handler of each type.
// A type without a handler only skips its header (the payload is then read as the next header).
static void dispatch_records(gptr<u8> data, u32 size) {
    if (!data || size == 0 || size < Record::SIZE) {
        return;
    }
    guest::StackObject<Record> record;
    u32 consumed = 0;
    while (data) {
        copy_record(record.ptr(), data);
        u32 length = record->length_low | u32(record->length_mid) << 8 |
                     u32(record->byte_3 & Record::LENGTH_HIGH_MASK) << Record::LENGTH_HIGH_SHIFT;
        u32 value = (record->byte_3 >> Record::VALUE_SHIFT) & Record::VALUE_MASK;
        u32 global_bits = record->byte_5 & Record::GLOBAL_BITS_MASK;
        u8 type = record->type;
        u8 byte_4 = record->byte_4;
        consumed += Record::SIZE;
        data = data + Record::SIZE;
        if (consumed + length > size) {
            return;
        }
        if (type < HANDLER_TYPE_COUNT && record_handler_table[type] != 0) {
            guest::call_address<void>(record_handler_table[type], global_bits, data, length, value, u32(byte_4));
            data = data + length;
            consumed += length;
        }
        if (consumed + Record::SIZE > size) {
            return;
        }
    }
}
GUEST_EXPORT(0x00628148, dispatch_records);

// Forwards to f_00301444 with 0x96 when the holder has a target; 0 otherwise.
static u32 notify_target(TargetHolder &holder) {
    constexpr u32 NOTIFY_ARGUMENT = 0x96;
    if (!holder.target) {
        return 0;
    }
    return notify_object(holder.target, NOTIFY_ARGUMENT);
}
GUEST_EXPORT(0x006282a8, notify_target);

