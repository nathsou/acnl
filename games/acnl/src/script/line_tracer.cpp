// script::LineTracer: a message engine that collects the characters it is given into a buffer until a newline.
#include "script/msg_engine.hpp"

namespace script {

namespace {

constexpr u32 NEWLINE = 0x0a;

// The text the engine is given to append (what it is exactly is not known yet).
struct LineChunk {
    gptr<const void> data;
    u8 unknown_04[0x10];
    u32 size_bytes;  // two bytes per character
};
GUEST_OFFSET(LineChunk, size_bytes, 0x14);

inline constexpr guest::Function<0x002f8574, void(gptr<void> destination, gptr<const void> source, u32 bytes)>
    copy_bytes;
// Given the address of the write position and of the write limit. What the result means is not known yet.
inline constexpr guest::Function<0x005ea21c,
                                 u32(gptr<gptr<u8>> position, gptr<gptr<u8>> limit, const MsgSource &source)>
    handle_other_code;

}  // namespace

struct LineTracer {
    static constexpr u32 VTABLE = 0x009084fc;

    u32 vtable;
    u32 unknown_04;
    u8 unknown_08[0x58];
    u32 saved_04;           // unknown_04 as it was at the last newline
    gptr<u8> write_position;
    gptr<u8> write_limit;
    u8 finished;
    u8 unknown_6d[3];

    u32 virtual_5(const MsgSource &source);
    void virtual_6(const LineChunk &chunk);
    bool virtual_4() const;
};
GUEST_OFFSET(LineTracer, saved_04, 0x60);
GUEST_OFFSET(LineTracer, write_position, 0x64);
GUEST_OFFSET(LineTracer, write_limit, 0x68);
GUEST_OFFSET(LineTracer, finished, 0x6c);
GUEST_SIZE(LineTracer, 0x70);

// A newline ends the line; any other code is handed to the helper.
u32 LineTracer::virtual_5(const MsgSource &source) {
    if (source.following_code == NEWLINE) {
        finished = 1;
        saved_04 = unknown_04;
        return guest::addr_of(this).addr();
    }
    return handle_other_code(guest::addr_of(write_position), guest::addr_of(write_limit), source);
}
GUEST_EXPORT(0x005d56e4, LineTracer::virtual_5);

// Appends the chunk to the buffer if it fits.
void LineTracer::virtual_6(const LineChunk &chunk) {
    u32 bytes = (chunk.size_bytes >> 1) << 1;
    gptr<u8> new_position = write_position + bytes;
    if (new_position.addr() > write_limit.addr()) {
        return;
    }
    copy_bytes(write_position, chunk.data, bytes);
    write_position = new_position;
}
GUEST_EXPORT(0x005d5738, LineTracer::virtual_6);

bool LineTracer::virtual_4() const {
    return finished == 0;
}
GUEST_EXPORT(0x005d5774, LineTracer::virtual_4);
GUEST_EXPORT(0x005d51f8, LineTracer::virtual_4);

LineTracer &construct_line_tracer(LineTracer &self) {
    construct_msg_engine(reinterpret_cast<MsgEngine &>(self));
    self.vtable = LineTracer::VTABLE;
    self.saved_04 = 0;
    self.write_position = nullptr;
    self.write_limit = nullptr;
    self.finished = 0;
    return self;
}
GUEST_EXPORT(0x005d5810, construct_line_tracer);

}  // namespace script
