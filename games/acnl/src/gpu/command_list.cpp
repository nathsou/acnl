#include "guest/guest.hpp"

namespace {

// A recorded section of a command list (28 bytes).
struct CommandSegment {
    u8 active;
    u8 unknown_01[3];
    u32 start;
    u32 length;
    u32 flags;
    u8 unknown_10[12];
};
GUEST_SIZE(CommandSegment, 28);

// PICA200 commands are two words: the parameter, then a header (register in bits 0-15, the byte mask of the
// parameter in bits 16-19).
constexpr u32 command_header(u32 reg, u32 byte_mask = 0xf) {
    return byte_mask << 16 | reg;
}
constexpr u32 REG_FINALIZE = 0x010;
constexpr u32 REG_FRAMEBUFFER_INVALIDATE = 0x110;
constexpr u32 REG_FRAMEBUFFER_FLUSH = 0x111;
constexpr u32 REG_START_DRAW_FUNC0 = 0x25e;
constexpr u32 FINALIZE_VALUE = 0x12345678;  // the value the GPU expects to signal the end of a list
constexpr u32 COMMAND_SIZE = 8;
constexpr u32 FINAL_COMMANDS_SIZE = 3 * COMMAND_SIZE;  // flush, invalidate and finalize

constexpr u32 SEGMENT_FLAG_CLEAR = 2;
constexpr u32 SEGMENT_FLAG_SET = 1;

struct CommandList {
    u8 unknown_00[4];
    u32 base;
    u8 unknown_08[4];
    u32 end;
    u8 unknown_10[4];
    u32 mark;
    gptr<CommandSegment> segments;
    u8 unknown_1c[4];
    u32 segment_count;
    u8 unknown_24[0x34 - 0x24];
    u32 on_segment;
    u8 unknown_38[5];
    u8 segment_flag;
};
GUEST_OFFSET(CommandList, base, 4);
GUEST_OFFSET(CommandList, end, 0xc);
GUEST_OFFSET(CommandList, mark, 0x14);
GUEST_OFFSET(CommandList, segments, 0x18);
GUEST_OFFSET(CommandList, segment_count, 0x20);
GUEST_OFFSET(CommandList, on_segment, 0x34);
GUEST_OFFSET(CommandList, segment_flag, 0x3d);

struct GpuState {
    u8 unknown_00[0x11];
    u8 flag_11;
    u8 flag_12;
    u8 unknown_13[0x9c - 0x13];
    gptr<CommandList> current;
    gptr<CommandList> other;
};
GUEST_OFFSET(GpuState, flag_11, 0x11);
GUEST_OFFSET(GpuState, current, 0x9c);
GUEST_OFFSET(GpuState, other, 0xa0);

inline guest::global<GpuState, 0x00adf8c0> gpu_state;
inline guest::global<gptr<u32>, 0x00974a7c> command_cursor;
inline guest::global<gptr<u32>, 0x00974a80> command_limit;

inline constexpr guest::Function<0x0012de20, void(CommandList &list, CommandSegment &segment)> notify_segment;
inline constexpr guest::Function<0x0012ffcc, void()> segment_hook_begin;
inline constexpr guest::Function<0x0012de78, void()> start_flagged_list;
inline constexpr guest::Function<0x0012ffdc, void()> segment_hook_end;

// Writes a two-word command if there is room.
void emit(u32 first, u32 second) {
    gptr<u32> cursor = *command_cursor;
    if (cursor.addr() < command_limit->addr()) {
        cursor[0] = first;
        cursor[1] = second;
        *command_cursor = cursor + 2;
    }
}

}  // namespace

// Adds bytes to the command write cursor.
void advance_command_cursor(u32 bytes) {
    *command_cursor = gptr<u32>(command_cursor->addr() + bytes);
}
GUEST_EXPORT(0x001279b4, advance_command_cursor);
GUEST_FUZZ(0x001279b4, 200, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({0, 8, 16, 24, 32})); });

// Closes the current segment of the current command list: emits a few fixed commands and records the segment.
void close_command_segment() {
    CommandList &list = *gpu_state->current;
    u32 length = command_cursor->addr() - list.base;
    if (length & COMMAND_SIZE) {  // (the segment ends on a 16-byte boundary: one more command pads it otherwise)
        list.end = length + FINAL_COMMANDS_SIZE;
    } else {
        list.end = length + FINAL_COMMANDS_SIZE + COMMAND_SIZE;
        emit(0, command_header(REG_START_DRAW_FUNC0, 0x8));
    }
    emit(1, command_header(REG_FRAMEBUFFER_FLUSH));
    emit(1, command_header(REG_FRAMEBUFFER_INVALIDATE));
    emit(FINALIZE_VALUE, command_header(REG_FINALIZE));

    CommandSegment &segment = list.segments[list.segment_count];
    segment.active = 1;
    segment.start = list.base + list.mark;
    segment.length = list.end - list.mark;
    if (list.on_segment != 0) {
        notify_segment(list, segment);
    }
    segment.flags &= ~SEGMENT_FLAG_CLEAR;
    if (list.segment_flag != 0) {
        segment.flags |= SEGMENT_FLAG_SET;
    }
    list.mark = list.end;
    segment_hook_begin();
    list.segment_count++;
    if (gpu_state->other == guest::addr_of(list) && gpu_state->flag_12 != 0 && gpu_state->flag_11 == 0) {
        gpu_state->flag_11 = 1;
        start_flagged_list();
    }
    segment_hook_end();
}
GUEST_EXPORT(0x001279cc, close_command_segment);
GUEST_FUZZ(0x001279cc, 1, [](guest::Fuzz &f) { f.arguments(); });
