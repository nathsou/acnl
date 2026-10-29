// Helpers on the session state object (the global at 0x0095362c): the entry template store, a readiness check on one
// of its parts, a per-frame update of a part, a length table, and the rebuild of the slot records.
#include "guest/guest.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {


inline guest::global<u32[PacketBuffer::TEMPLATE_COUNT], 0x0087b640> template_offsets;
inline guest::global<u32[PacketBuffer::TEMPLATE_COUNT], 0x0087b190> template_sizes;
inline guest::global<u32[PacketBuffer::TEMPLATE_COUNT], 0x0087baac> template_handlers;  // 0: none

inline constexpr guest::Function<0x002f8574, void(gptr<void> destination, gptr<void> source, u32 size)> copy_bytes;
inline constexpr guest::Function<0x00100d2d, u32(gptr<void> first, gptr<void> second, u32 size)> memory_compare;
inline constexpr guest::Function<0x0011916d, void(u32 destination, gptr<void> source, u32 unknown)> unknown_thumb_11916c;
inline constexpr guest::Function<0x002fb328, u32()> get_word_95bf74;

inline constexpr guest::Function<0x0075e35c, u32(gptr<void> part, u32 id)> part_test;
inline constexpr guest::Function<0x0075e2fc, u32(gptr<void> part)> part_value;
inline constexpr guest::Function<0x0062bce0, void(gptr<void> part)> part_update_28ec;
inline constexpr guest::Function<0x0075f0b0, u32(gptr<void> part, u32 arg)> part_check_f0b0;
inline constexpr guest::Function<0x006295d8, void(gptr<void> part, u32 arg)> part_handle_95d8;
inline constexpr guest::Function<0x0075f1c4, u32(gptr<void> part, u32 arg)> part_check_f1c4;
inline constexpr guest::Function<0x0075f17c, u32(gptr<void> part, u32 arg, u32 arg2)> part_check_f17c;
inline constexpr guest::Function<0x00629438, u32(gptr<void> part, u32 arg)> part_check_9438;
inline constexpr guest::Function<0x0062a724, void(gptr<void> part)> part_finish_a724;

inline constexpr guest::Function<0x0075dfe8, u32(gptr<void> state)> query_main_object;
inline constexpr guest::Function<0x0075e010, u32(gptr<void> state, u32 index)> has_index_bit;
inline constexpr guest::Function<0x00627f74, void(gptr<void> buffer)> reserve_record;
inline constexpr guest::Function<0x0062801c, void(gptr<void> buffer, u32 type, u32 value)> flush_record;
inline constexpr guest::Function<0x00627d44, void(gptr<void> buffer, gptr<void> data, u32 length)> append_to_buffer;

}  // namespace

void PacketBuffer::apply_template(u32 id, gptr<void> entry, u32 result) {
    if (disabled != 0 || !scratch || id >= TEMPLATE_COUNT || !templates) {
        return;
    }
    gptr<u8> source(templates.addr() + template_offsets[id]);
    u32 size = template_sizes[id];
    if (!source || size == 0 || size + 8 > scratch_size) {
        return;
    }
    for (u32 i = 0; i < GUARD_SIZE; i++) {
        scratch[i] = GUARD;
        scratch[size + GUARD_SIZE + i] = GUARD;
    }
    gptr<u8> work = scratch + GUARD_SIZE;
    copy_bytes(work, source, size);
    u32 handler = template_handlers[id];
    if (handler != 0) {
        guest::call_address<void>(handler, work, entry);
    }
    for (u32 i = 0; i < GUARD_SIZE; i++) {
        if (scratch[i] != GUARD || scratch[size + GUARD_SIZE + i] != GUARD) {
            return;
        }
    }
    if (memory_compare(work, source, size) == 0) {
        return;
    }
    copy_bytes(source, work, size);
    if (templates && results) {
        results[id] = u8(result);
    }
}

// The entry template update on the global session state's buffer.
static void apply_entry_template(u32 template_id, gptr<void> entry, u32 result) {
    (*net_session)->buffer.apply_template(template_id, entry, result);
}
GUEST_EXPORT(0x0062512c, apply_entry_template);

// Whether part 0x1c0 passes its test and reports a value of at least MIN_VALUE.
static bool part_1c0_ready() {
    constexpr u32 TEST_ID = 0x60;
    constexpr u32 MIN_VALUE = 4;
    gptr<void> part = guest::addr_of((*net_session)->part_1c0).cast<void>();
    if (part_test(part, TEST_ID) == 0) {
        return false;
    }
    gptr<void> part_again = guest::addr_of((*net_session)->part_1c0).cast<void>();
    return part_value(part_again) >= MIN_VALUE;
}
GUEST_EXPORT(0x0062514c, part_1c0_ready);

// Advances the session state when its state byte is 6 and the part at 0x7874 settles: finishes part 0xb0, resets
// the state byte and passes the block at 0x13234 to an unknown routine. True if it finished.
static bool finish_session_step() {
    constexpr u8 WAITING_STATE = 6;
    constexpr u32 ARG = 3;
    gptr<NetSession> state = *net_session;
    if (state->state_13266 != WAITING_STATE) {
        return false;
    }
    part_update_28ec(guest::addr_of(state->part_28ec).cast<void>());
    gptr<void> part = guest::addr_of(state->part_7874).cast<void>();
    if (part_check_f0b0(part, ARG) != 0) {
        part_handle_95d8(part, ARG);
        return false;
    }
    if (part_check_f1c4(part, ARG) != 0) {
        return false;
    }
    if (part_check_f17c(part, ARG, 0) != 0) {
        return false;
    }
    if (part_check_9438(part, 0) == 0) {
        return false;
    }
    if (part_check_f1c4(part, 0) == 0) {
        return false;
    }
    part_finish_a724(guest::addr_of(state->part_b0).cast<void>());
    state->state_13266 = 0;
    constexpr u32 TARGET_OFFSET = 0x292a4;  // from the word the callee returns
    unknown_thumb_11916c(get_word_95bf74() + TARGET_OFFSET, guest::addr_of(state->block_13234).cast<void>(), 0);
    return true;
}
GUEST_EXPORT(0x00625190, finish_session_step);

namespace {

// Four lengths (indices 0-3) at 0xc.
struct EntryLengths {
    static constexpr u32 COUNT = 4;

    u8 unknown_00[0xc];
    u32 values[COUNT];

    void clear(u32 index);
};
GUEST_OFFSET(EntryLengths, values, 0xc);

}  // namespace

void EntryLengths::clear(u32 index) {
    if (index < COUNT) {
        values[index] = 0;
    }
}
GUEST_EXPORT(0x006251a0, EntryLengths::clear);

namespace {

// Records for slots 1-3, in a block of 6-byte strides: a 16-bit header copied from a source, then for each handler a
// flag byte followed by the handler's output.
struct SlotRecords {
    static constexpr u32 SLOTS = 4;
    static constexpr u32 RECORD_STRIDE = 6;
    static constexpr u32 HEADER_SIZE = 2;
    static constexpr u32 HANDLER_COUNT = 2;
    static constexpr u32 FLUSH_TYPE = 0x16;

    u8 unknown_00[8];
    gptr<u8> block;
    u32 lengths[SLOTS];  // the length of each built record, until it is flushed

    u32 record_address(u32 slot) const { return block.addr() + RECORD_STRIDE * (slot - 1); }
    void build_record(u32 slot, gptr<u8> record, gptr<u16> source);
    void rebuild_all(gptr<u16> source);
};
GUEST_OFFSET(SlotRecords, block, 8);
GUEST_OFFSET(SlotRecords, lengths, 0xc);

inline guest::global<u32[SlotRecords::HANDLER_COUNT], 0x0087bd44> record_handlers;  // 0: none
inline guest::global<u32[SlotRecords::HANDLER_COUNT], 0x0087bd3c> record_output_sizes;

}  // namespace

void SlotRecords::build_record(u32 slot, gptr<u8> record, gptr<u16> source) {
    *gptr<u16>(record.addr()) = *source;
    gptr<u8> cursor = record + HEADER_SIZE;
    u32 length = HEADER_SIZE;
    for (u32 i = 0; i < HANDLER_COUNT; i++) {
        u32 handler = record_handlers[i];
        gptr<u8> flag = cursor;
        cursor++;
        length++;
        if (handler == 0) {
            *flag = 0;
            continue;
        }
        u32 size = record_output_sizes[i];
        u32 result = guest::call_address<u32>(handler, cursor, slot, source.cast<void>(), size);
        if (result != 0) {
            cursor += size;
            length += size;
        }
        *flag = u8(result);
    }
    lengths[slot] = length;
}

// Unless the main object answers non-zero: for each slot 1-3 the main state has a bit for, rebuilds its record,
// then flushes it to the session buffer and forgets its length.
void SlotRecords::rebuild_all(gptr<u16> source) {
    if (query_main_object((*net_session).cast<void>()) != 0) {
        return;
    }
    for (u32 slot = 1; slot < SLOTS; slot++) {
        if (has_index_bit((*net_session).cast<void>(), slot) == 0) {
            continue;
        }
        u32 record = record_address(slot);
        if (record != 0) {
            build_record(slot, gptr<u8>(record), source);
        }
        gptr<void> buffer = guest::addr_of((*net_session)->buffer).cast<void>();
        reserve_record(buffer);
        u32 length = lengths[slot];
        if (length != 0 && record_address(slot) != 0) {
            append_to_buffer(buffer, gptr<void>(record_address(slot)), length);
        }
        flush_record(buffer, FLUSH_TYPE, slot);
        lengths[slot] = 0;
    }
}
GUEST_EXPORT(0x006251b8, SlotRecords::rebuild_all);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

namespace {

gptr<void> zeroed(guest::Fuzz &f, u32 size) {
    gptr<void> p = f.allocate(size);
    std::memset(p.get(), 0, size);
    return p;
}

constexpr u32 FUZZ_AREA = 0x40;

}  // namespace

GUEST_FUZZ(0x0062512c, 200, [](guest::Fuzz &f) {
    u32 id = f.pick<u32>({0x90, 0x95, f.below(PacketBuffer::TEMPLATE_COUNT), f.below(0x98), f.number()});
    f.arguments(id, zeroed(f, FUZZ_AREA), f.pick<u32>({0, 1, f.number()}));
});
GUEST_FUZZ(0x0062514c, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00625190, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x006251a0, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<EntryLengths>(), f.pick<u32>({0, 1, 2, 3, 4, 5, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x006251b8, 200, [](guest::Fuzz &f) {
    auto records = f.object<SlotRecords>();
    records->block = zeroed(f, FUZZ_AREA).cast<u8>();
    for (u32 i = 0; i < SlotRecords::SLOTS; i++) {
        records->lengths[i] = f.below(0x19);
    }
    f.arguments(records, zeroed(f, FUZZ_AREA).cast<u16>());
});
