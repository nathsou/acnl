// Small routines that copy a block into a buffer, a table entry or a record.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x002f8574, void(gptr<void> destination, gptr<const void> source, u32 size)>
    copy_bytes;
inline constexpr guest::Function<0x00134544, void(gptr<void> destination, gptr<const void> source, u32 size)>
    copy_bytes_small_sizes_first;

constexpr u32 SIXTEEN_BYTES = 0x10;
constexpr u32 LOADED_BLOCK_SIZE = 0xa00;
constexpr u32 LOADED_BLOCK_OFFSET = 0x1c;
constexpr u32 BYTE_SINK_LIMIT = 0x16800;
constexpr u32 CHARACTER_SIZE = 2;
constexpr u32 TABLE_ENTRY_SIZE = 0x28;
constexpr u32 SLOT_ENTRY_SIZE = 0x32;
constexpr u32 SLOT_COUNT = 4;
constexpr u32 SLOT_ENTRY_TABLE = 0x00a82b90;

// Sizes for the fuzz inputs
constexpr u32 FUZZ_BUFFER = 0x100;
constexpr u32 FUZZ_SMALL_BUFFER = 0x20;
constexpr u32 FUZZ_SPLIT = 0x80;
constexpr u32 FUZZ_COPY_MAX = 0x40;
constexpr u32 FUZZ_TEXT_MAX = 0x90;
constexpr u32 FUZZ_NEAR_LIMIT = BYTE_SINK_LIMIT - 0x80;

// A buffer and how much of it is used.
struct ByteSink {
    gptr<u8> data;
    u32 used;
};
GUEST_OFFSET(ByteSink, used, 4);

// A pointer into a buffer that text is written at.
struct TextCursor {
    gptr<u8> position;
};

// A string of 16-bit characters; the size is in bytes.
struct WideText {
    gptr<u8> data;
    u8 unknown_04[0x10];
    u32 size_bytes;
};
GUEST_OFFSET(WideText, size_bytes, 0x14);

// An object with a table of 40-byte entries.
struct EntryTableOwner {
    u8 unknown_00[0xd0];
    gptr<u8> entries;
    u8 unknown_d4[0xec - 0xd4];
    u32 entry_count;
};
GUEST_OFFSET(EntryTableOwner, entries, 0xd0);
GUEST_OFFSET(EntryTableOwner, entry_count, 0xec);

}  // namespace

// Copies 16 bytes unless there is no source.
void copy_16_bytes_unless_null(gptr<void> destination, gptr<const void> source) {
    if (source) {
        copy_bytes_small_sizes_first(destination, source, SIXTEEN_BYTES);
    }
}
GUEST_EXPORT(0x001cdf04, copy_16_bytes_unless_null);
GUEST_FUZZ(0x001cdf04, 100, [](guest::Fuzz &f) {
    f.arguments(f.allocate(FUZZ_SMALL_BUFFER), f.below(4) == 0 ? gptr<void>(0u) : f.allocate(FUZZ_SMALL_BUFFER));
});

// Copies the block of 0xa00 bytes to the loaded block at 0x1c of the destination; other sizes are ignored.
void load_block_a00(gptr<u8> destination, gptr<const void> source, u32 size) {
    if (size == LOADED_BLOCK_SIZE) {
        copy_bytes_small_sizes_first(destination + LOADED_BLOCK_OFFSET, source, LOADED_BLOCK_SIZE);
    }
}
GUEST_EXPORT(0x006a92f4, load_block_a00);
GUEST_FUZZ(0x006a92f4, 100, [](guest::Fuzz &f) {
    auto source = f.allocate(LOADED_BLOCK_SIZE);
    f.bytes(source.cast<u8>(), LOADED_BLOCK_SIZE);
    f.arguments(f.allocate(LOADED_BLOCK_SIZE + FUZZ_COPY_MAX), source, f.pick<u32>({LOADED_BLOCK_SIZE, LOADED_BLOCK_SIZE, 0, FUZZ_BUFFER}));
});

// Appends the bytes to the sink when it has a buffer and they fit below the limit.
void append_to_byte_sink(ByteSink &sink, gptr<const void> source, u32 size) {
    if (!source || !sink.data) {
        return;
    }
    u32 new_used = sink.used + size;
    if (new_used > BYTE_SINK_LIMIT) {
        return;
    }
    copy_bytes(sink.data + sink.used, source, size);
    sink.used = new_used;
}
GUEST_EXPORT(0x0062986c, append_to_byte_sink);
GUEST_FUZZ(0x0062986c, 150, [](guest::Fuzz &f) {
    auto sink = f.object<ByteSink>();
    sink->data = f.below(4) == 0 ? gptr<u8>(0u) : f.allocate(FUZZ_BUFFER).cast<u8>();
    sink->used = f.pick<u32>({0, FUZZ_SMALL_BUFFER, FUZZ_NEAR_LIMIT, BYTE_SINK_LIMIT - 1, BYTE_SINK_LIMIT});
    if (sink->data && sink->used > FUZZ_SPLIT) {
        sink->used = f.below(FUZZ_SPLIT);  // (the buffer is small)
    }
    auto source = f.allocate(FUZZ_BUFFER);
    f.arguments(sink, f.below(5) == 0 ? gptr<void>(0u) : source, f.below(FUZZ_COPY_MAX));
});

// Writes the characters of the text at the cursor and moves the cursor behind them, when they end before `limit`.
// Returns whether they fit.
bool write_wide_text(TextCursor &cursor, const gptr<u8> &limit, const WideText &text) {
    u32 byte_count = text.size_bytes / CHARACTER_SIZE * CHARACTER_SIZE;
    gptr<u8> end = cursor.position + byte_count;
    if (end.addr() > limit.addr()) {
        return false;
    }
    copy_bytes(cursor.position, text.data, byte_count);
    cursor.position = end;
    return true;
}
GUEST_EXPORT(0x005ea1d0, write_wide_text);
GUEST_FUZZ(0x005ea1d0, 150, [](guest::Fuzz &f) {
    auto buffer = f.allocate(FUZZ_BUFFER).cast<u8>();
    auto cursor = f.object<TextCursor>();
    cursor->position = buffer;
    auto limit = f.object<gptr<u8>>();
    *limit = buffer + f.below(FUZZ_BUFFER);
    auto text = f.object<WideText>();
    text->data = f.allocate(FUZZ_BUFFER).cast<u8>();
    text->size_bytes = f.below(FUZZ_TEXT_MAX);
    f.arguments(cursor, limit, text);
});

// Copies the owner's 40-byte entry at the index to the destination, when the table has one.
void copy_table_entry(const EntryTableOwner &owner, gptr<void> destination, u32 index) {
    if (owner.entries && index < owner.entry_count) {
        copy_bytes(destination, owner.entries + index * TABLE_ENTRY_SIZE, TABLE_ENTRY_SIZE);
    }
}
GUEST_EXPORT(0x002ee864, copy_table_entry);
GUEST_FUZZ(0x002ee864, 150, [](guest::Fuzz &f) {
    auto owner = f.object<EntryTableOwner>();
    owner->entries = f.below(4) == 0 ? gptr<u8>(0u) : f.allocate(8 * TABLE_ENTRY_SIZE).cast<u8>();
    owner->entry_count = f.below(9);
    f.arguments(owner, f.allocate(TABLE_ENTRY_SIZE + 8), f.below(10));
});

// Copies the 50-byte entry of the slot from the table of the four slots (the first entry for any other slot).
void copy_slot_entry(gptr<void> destination, u32 slot) {
    gptr<u8> source(SLOT_ENTRY_TABLE);
    if (slot < SLOT_COUNT) {
        source = source + slot * SLOT_ENTRY_SIZE;
    }
    copy_bytes(destination, source, SLOT_ENTRY_SIZE);
}
GUEST_EXPORT(0x0051d6c0, copy_slot_entry);
GUEST_FUZZ(0x0051d6c0, 100, [](guest::Fuzz &f) { f.arguments(f.allocate(SLOT_ENTRY_SIZE + 8), f.pick<u32>({0, 1, 2, 3, 4, 9})); });
