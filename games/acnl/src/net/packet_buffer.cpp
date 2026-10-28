#include "guest/guest.hpp"

using guest::gptr;

namespace {

// The global state block the buffers consult (only two bytes are known).
struct BufferGlobals {
    u8 unknown_00000[0x13268];
    u8 record_bits;  // its low 2 bits go into every record
    u8 unknown_13269;
    u8 flags;        // see FLAG_FROZEN
};
GUEST_OFFSET(BufferGlobals, record_bits, 0x13268);
GUEST_OFFSET(BufferGlobals, flags, 0x1326a);

inline guest::global<gptr<BufferGlobals>, 0x0095362c> buffer_globals;

constexpr u8 FLAG_FROZEN = 1;  // set when the buffer ran out of room; nothing is recorded afterwards
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

struct PacketBuffer {
    static constexpr u32 COUNTERS = 4;

    gptr<u8> start;
    gptr<u8> flushed;    // everything before this was handed out; null: nothing to write to
    gptr<u8> write_pos;
    u8 unknown_0c[0x10];
    u32 counters_1c[COUNTERS];
    u32 unknown_2c;
    u32 values_30[COUNTERS];
    u32 unknown_40;
    u8 disabled;

    void reserve_record();
    void increment_counter(u32 index);
    void clear_counter_and_value(u32 index);
    void flush_record(u32 type, u32 value);
    void clear_counter(u32 index);
};
GUEST_OFFSET(PacketBuffer, start, 0);
GUEST_OFFSET(PacketBuffer, flushed, 4);
GUEST_OFFSET(PacketBuffer, write_pos, 8);
GUEST_OFFSET(PacketBuffer, counters_1c, 0x1c);
GUEST_OFFSET(PacketBuffer, values_30, 0x30);
GUEST_OFFSET(PacketBuffer, disabled, 0x44);

}  // namespace

// Makes room for one more record when nothing is pending; past the size limit, freezes the buffer instead.
void PacketBuffer::reserve_record() {
    if (!flushed || disabled != 0) {
        return;
    }
    BufferGlobals &globals = **buffer_globals;
    u8 flags = globals.flags;
    if ((flags & FLAG_FROZEN) || flushed != write_pos) {
        return;
    }
    if (write_pos) {
        u32 used = u32(write_pos - start) + RECORD_SIZE;
        if (used <= MAX_BYTES) {
            write_pos = write_pos + RECORD_SIZE;
            return;
        }
    }
    globals.flags = flags | FLAG_FROZEN;
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
    BufferGlobals &globals = **buffer_globals;
    if (globals.flags & FLAG_FROZEN) {
        return;
    }
    u32 pending = u32(write_pos - flushed);
    if (pending < RECORD_SIZE) {
        return;
    }
    u32 length = pending - RECORD_SIZE;
    gptr<u8> destination = flushed;
    u8 extra = read_global_byte_2();
    u8 global_bits = globals.record_bits;
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

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

constexpr u32 FUZZ_AREA_SIZE = 0x100;
constexpr u32 FUZZ_FLUSH_OFFSET = 0x10;  // where in the area the pending range begins
constexpr u32 FUZZ_MAX_PENDING = 0x80;
constexpr u32 FUZZ_LARGE_PENDING = 0x40;
constexpr u32 FUZZ_COMMON_PENDING = 20;
// distances between the start and the write position, around the size limit
constexpr u32 FUZZ_NEAR_LIMIT = MAX_BYTES - RECORD_SIZE;
constexpr u32 FUZZ_TYPE_LIMIT = 0x20;
constexpr u32 FUZZ_INDEX_LIMIT = PacketBuffer::COUNTERS + 1;

gptr<PacketBuffer> some_buffer(guest::Fuzz &f) {
    auto buffer = f.object<PacketBuffer>();
    gptr<u8> area = f.allocate(FUZZ_AREA_SIZE).cast<u8>();
    u32 pending = f.pick<u32>({0, RECORD_SIZE - 3, RECORD_SIZE - 1, RECORD_SIZE, RECORD_SIZE + 1, FUZZ_COMMON_PENDING,
                               FUZZ_LARGE_PENDING, f.below(FUZZ_MAX_PENDING)});
    buffer->disabled = f.below(5) == 0 ? 1 : 0;
    buffer->flushed = f.below(6) == 0 ? gptr<u8>() : area + FUZZ_FLUSH_OFFSET;
    buffer->write_pos = buffer->flushed ? buffer->flushed + pending : area + FUZZ_FLUSH_OFFSET;
    if (f.below(3) == 0) {
        buffer->write_pos = buffer->flushed;
    }
    u32 distance = f.pick<u32>({0, FUZZ_AREA_SIZE, FUZZ_NEAR_LIMIT, FUZZ_NEAR_LIMIT + 1, MAX_BYTES, MAX_BYTES + 1});
    buffer->start = buffer->write_pos - distance;
    return buffer;
}

u32 some_index(guest::Fuzz &f) {
    return f.pick<u32>({0, 1, 2, 3, PacketBuffer::COUNTERS, FUZZ_INDEX_LIMIT, f.number()});
}

}  // namespace

GUEST_FUZZ(0x00627f74, 300, [](guest::Fuzz &f) { f.arguments(some_buffer(f)); });
GUEST_FUZZ(0x00627fe0, 300, [](guest::Fuzz &f) {
    auto buffer = some_buffer(f);
    if (f.below(3) == 0) {
        buffer->counters_1c[f.below(PacketBuffer::COUNTERS)] = COUNTER_MAX;
    }
    f.arguments(buffer, some_index(f));
});
GUEST_FUZZ(0x00628000, 300, [](guest::Fuzz &f) { f.arguments(some_buffer(f), some_index(f)); });
GUEST_FUZZ(0x0062801c, 300, [](guest::Fuzz &f) {
    f.arguments(some_buffer(f), f.below(FUZZ_TYPE_LIMIT), f.pick<u32>({0, 4, 5, 6, f.number()}));
});
GUEST_FUZZ(0x006280f4, 300, [](guest::Fuzz &f) { f.arguments(some_buffer(f), some_index(f)); });
