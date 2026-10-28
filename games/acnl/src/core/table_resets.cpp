#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x0077956c, void(gptr<u8> record)> reset_record_hook;
inline constexpr guest::Function<0x002f825c, void(gptr<u8> buffer, u32 size)> clear_buffer;
inline constexpr guest::Function<0x003084d0, void(gptr<u8> object)> prepare_object;
inline constexpr guest::Function<0x003084f9, void(gptr<u8> sub_object)> init_sub_object;
inline constexpr guest::Function<0x0027a48c, void(gptr<u8> region)> init_region;

}  // namespace

/// Copies an 8-byte value.
static void copy_8_bytes(gptr<u32> dest, gptr<u32> source) {
    u32 first = source[0];
    u32 second = source[1];
    dest[0] = first;
    dest[1] = second;
}
GUEST_EXPORT(0x003081b4, copy_8_bytes);
GUEST_FUZZ(0x003081b4, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<u64>(), f.object<u64>());
});

/// Resets a table of 63 entries of 16 bytes (from offset 0x10) and the 63 flag bytes at offset 0x400.
static void reset_entry_table(gptr<u8> base) {
    constexpr u32 COUNT = 63;
    constexpr u32 ENTRIES_OFFSET = 0x10;
    constexpr u32 ENTRY_SIZE = 16;
    constexpr u32 FLAGS_OFFSET = 0x400;
    for (u32 i = 0; i < COUNT; i++) {
        gptr<u8> entry = base + (ENTRIES_OFFSET + i * ENTRY_SIZE);
        entry[5] = 0x24;
        entry[6] = 0;
        entry[4] = 0xa5;
    }
    for (u32 i = 0; i < COUNT; i++) {
        gptr<u8> flag = base + (FLAGS_OFFSET + i);
        *flag = *flag & ~1;
    }
}
GUEST_EXPORT(0x003081c8, reset_entry_table);
GUEST_FUZZ(0x003081c8, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(0x440)); });

/// Clears a global state block and its records.
static void reset_global_block_a() {
    constexpr u32 BLOCK = 0x009ab588;
    constexpr u32 RECORDS = 0x009ab5f8;
    constexpr u32 RECORD_SIZE = 7;
    gptr<u32> head(BLOCK);
    head[0] = 0;
    head[1] = 0;
    head[2] = 0;
    head[3] = 0;
    for (u32 i = 0; i < 6; i++) {
        gptr<u32> pair(BLOCK + 0x10 + i * 8);
        pair[0] = 0;
        pair[1] = 0;
        pair[0x30 / 4] = 0;
        pair[0x34 / 4] = 0;
    }
    for (u32 i = 0; i < 4; i++) {
        gptr<u8> record(RECORDS + i * RECORD_SIZE);
        record[6] = 0;
        reset_record_hook(record);
    }
    *gptr<u8>(0x009516b8) = 0;
}
GUEST_EXPORT(0x00308238, reset_global_block_a);
GUEST_FUZZ(0x00308238, 200, [](guest::Fuzz &f) { f.arguments(); });

/// Resets two global tables of 32 entries, clears a buffer and sets two indices to -1.
static void reset_global_block_b() {
    constexpr u32 TABLE_A = 0x009b41c4;
    constexpr u32 TABLE_B = 0x009b4264;
    constexpr u32 BUFFER = 0x009b4524;
    constexpr u32 BUFFER_SIZE = 0x500;
    constexpr u32 INDICES = 0x00952694;
    for (u32 i = 0; i < 32; i++) {
        *gptr<u8>(TABLE_A + i * 5 + 2) = 0xa5;
    }
    for (u32 i = 0; i < 32; i++) {
        gptr<u8> entry(TABLE_B + i * 22);
        entry[0x10] = 0;
        entry[0x11] = 0;
    }
    clear_buffer(gptr<u8>(BUFFER), BUFFER_SIZE);
    gptr<s32> indices(INDICES);
    indices[4] = -1;
    indices[5] = -1;
}
GUEST_EXPORT(0x003082bc, reset_global_block_b);
GUEST_FUZZ(0x003082bc, 200, [](guest::Fuzz &f) { f.arguments(); });

/// Prepares an object and its 16 sub-objects of 0xf2 bytes (from offset 0x30), then a region at offset 0xf66.
static void init_object_with_sub_objects(gptr<u8> object) {
    prepare_object(object);
    for (u32 i = 0; i < 16; i++) {
        init_sub_object(object + (0x30 + i * 0xf2));
    }
    init_region(object + 0xf66);
}
GUEST_EXPORT(0x00308355, init_object_with_sub_objects);
GUEST_FUZZ(0x00308355, 200, [](guest::Fuzz &f) { f.arguments(f.allocate(0x2000)); });
