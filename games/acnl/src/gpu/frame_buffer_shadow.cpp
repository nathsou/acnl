#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;

namespace {

// A block of 0x48 bytes describing a render state; FrameBufferShadow keeps one, and a global caches the last one
// that was emitted. Only the fields that are compared and copied are named.
struct ShadowState {
    u32 word_00;
    u8 byte_04;
    u8 byte_05;
    u8 unknown_06[2];
    u32 word_08;
    u32 word_0c;
    u8 bytes_10[16];  // copied as a block
    u8 unknown_20[4];
    u32 word_24;
    u8 byte_28;
    u8 unknown_29[3];
    u32 word_2c;
    u32 word_30;
    u32 word_34;  // copied but not compared
    u8 byte_38;   // copied but not compared
    u8 unknown_39[7];
    u32 word_40;
    u32 word_44;

    bool same_as_cached(const ShadowState &o) const {
        return o.word_00 == word_00 && o.byte_04 == byte_04 && o.byte_05 == byte_05 && o.word_08 == word_08 &&
               o.word_0c == word_0c && o.word_24 == word_24 && o.byte_28 == byte_28 && o.word_2c == word_2c &&
               o.word_30 == word_30 && o.word_40 == word_40 && o.word_44 == word_44;
    }
};
GUEST_OFFSET(ShadowState, byte_04, 4);
GUEST_OFFSET(ShadowState, bytes_10, 0x10);
GUEST_OFFSET(ShadowState, word_24, 0x24);
GUEST_OFFSET(ShadowState, byte_28, 0x28);
GUEST_OFFSET(ShadowState, word_34, 0x34);
GUEST_OFFSET(ShadowState, byte_38, 0x38);
GUEST_OFFSET(ShadowState, word_44, 0x44);
GUEST_SIZE(ShadowState, 0x48);

inline guest::global<ShadowState, 0x00ae52d4> cached_state;
inline guest::global<u32, 0x009529c4> vector_initialized;
inline guest::global<u32[4], 0x009c7990> default_vector;

// The default vector is filled with 1.0f (the original loads it from its literal pool).
constexpr float DEFAULT_VECTOR_VALUE = 1.0f;

constexpr u32 PACKET_FLAG = 0x80000000;
constexpr u32 PACKET_HEADER = 0x804f02c0;
constexpr u32 REGISTER_VALUE_F = 0x0000000f;
constexpr u32 REGISTER_HEADERS[4] = {0x00010112, 0x00010113, 0x00010114, 0x00010115};

struct FrameBufferShadow {
    u8 unknown_00[0x1c];
    ShadowState state;
    u8 unknown_64[2];
    u8 byte_66;
    u8 unknown_67[5];
    u8 part_6c[0x100 - 0x6c];
    u8 part_100[4];

    // virtual 7: emits the commands for the state when it differs from the cached one, and caches it.
    void virtual_7();
};
GUEST_OFFSET(FrameBufferShadow, state, 0x1c);
GUEST_OFFSET(FrameBufferShadow, byte_66, 0x66);
GUEST_OFFSET(FrameBufferShadow, part_6c, 0x6c);
GUEST_OFFSET(FrameBufferShadow, part_100, 0x100);

inline constexpr guest::Function<0x001277dc, void(u32 size, gptr<gptr<u32>> cursor_out)> begin_command_write;
inline constexpr guest::Function<0x00725d8c, gptr<u32>(ShadowState &state, gptr<u32> cursor, u32 a, u32 b)>
    write_state_commands;
inline constexpr guest::Function<0x001262dc, gptr<u32>(gptr<void> part, gptr<u32> cursor, u32 a)> write_part_100;
inline constexpr guest::Function<0x00727c84, gptr<u32>(gptr<void> part, gptr<u32> cursor)> write_part_6c;
inline constexpr guest::Function<0x001279b4, void(u32 bytes)> advance_command_cursor;
inline constexpr guest::Function<0x002fe7dd, bool(gptr<u32> flag)> claim_flag;
inline constexpr guest::Function<0x00134544, void(gptr<void> dest, gptr<const void> source, u32 size)>
    copy_bytes;

constexpr u32 COMMAND_SPACE = 0x208;

void remember(const ShadowState &s) {
    ShadowState &c = *cached_state;
    c.word_00 = s.word_00;
    c.byte_04 = s.byte_04;
    c.byte_05 = s.byte_05;
    c.word_08 = s.word_08;
    c.word_0c = s.word_0c;
    copy_bytes(guest::addr_of(c.bytes_10), guest::addr_of(s.bytes_10), sizeof(s.bytes_10));
    c.word_24 = s.word_24;
    c.byte_28 = s.byte_28;
    c.word_2c = s.word_2c;
    c.word_30 = s.word_30;
    c.word_34 = s.word_34;
    c.byte_38 = s.byte_38;
    c.word_40 = s.word_40;
    c.word_44 = s.word_44;
}

}  // namespace

void FrameBufferShadow::virtual_7() {
    if (state.same_as_cached(*cached_state)) {
        return;
    }
    guest::StackObject<gptr<u32>> cursor_slot;
    begin_command_write(COMMAND_SPACE, cursor_slot.ptr());
    gptr<u32> start = *cursor_slot;
    gptr<u32> cursor = write_state_commands(state, start, 1, 1);

    if ((*vector_initialized & 1) == 0 && claim_flag(vector_initialized.ptr())) {
        u32 bits;
        std::memcpy(&bits, &DEFAULT_VECTOR_VALUE, sizeof bits);
        for (u32 i = 0; i < 4; i++) {
            (*default_vector)[i] = bits;
        }
    }

    const u32 *vector = *default_vector.get();
    cursor[0] = byte_66 | PACKET_FLAG;
    cursor[1] = PACKET_HEADER;
    cursor[2] = vector[3];
    cursor[3] = vector[2];
    cursor[4] = vector[1];
    cursor[5] = vector[0];
    cursor += 6;

    cursor = write_part_100(guest::addr_of(part_100), cursor, 1);
    cursor[0] = REGISTER_VALUE_F;
    cursor[1] = REGISTER_HEADERS[0];
    cursor[2] = REGISTER_VALUE_F;
    cursor[3] = REGISTER_HEADERS[1];
    cursor[4] = 0;
    cursor[5] = REGISTER_HEADERS[2];
    cursor[6] = 0;
    cursor[7] = REGISTER_HEADERS[3];
    cursor += 8;

    cursor = write_part_6c(guest::addr_of(part_6c), cursor);
    advance_command_cursor((cursor.addr() - start.addr()) & ~3u);
    remember(state);
}
GUEST_EXPORT(0x0071ef4c, FrameBufferShadow::virtual_7);

// Only the unchanged-state path is fuzzed: the other one writes into the game's command buffer.
GUEST_FUZZ(0x0071ef4c, 200, [](guest::Fuzz &f) {
    auto shadow = f.object<FrameBufferShadow>();
    shadow->state = *cached_state;
    f.arguments(shadow);
});
