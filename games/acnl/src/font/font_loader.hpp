// font::Mgr's font slots: each one (dLoadSplit) loads a .bcfnt font file through one of two loaders and builds an
// nw::font::ResFont from it. Only what the rewritten code touches is named.
#pragma once

#include "guest/guest.hpp"

// A string with its own buffer (sead::FixedSafeString-like): vtable, pointer to the text, capacity, the buffer.
template <u32 N>
struct FixedString {
    guest::gptr<u32> vtable;
    guest::gptr<char> text;
    u32 capacity;
    char buffer[N];
};

// An allocator object (only its vtable is used).
struct FontHeap {
    static constexpr u32 ALLOCATE_SLOT = 6;  // virtual 6: allocate(size, alignment)
    static constexpr u32 ALLOCATE_ALIGNMENT = 4;

    guest::gptr<u32> vtable;
};

// The loader used when use_load_split is clear (at 0x4, 0x10 bytes).
struct FontSource {
    u8 unknown_00[4];
    guest::gptr<void> file_data;  // what the ResFont is built from
    u8 unknown_08[8];
};
GUEST_SIZE(FontSource, 0x10);

// The loader used when use_load_split is set (a ssys::ma::LoadSplit, 0xec bytes).
struct LoadSplitData {
    guest::gptr<u32> vtable;
    u8 unknown_04[0xd0 - 4];
    guest::gptr<void> file_data;  // what the ResFont is built from
    u8 unknown_d4[0xec - 0xd4];
};
GUEST_OFFSET(LoadSplitData, file_data, 0xd0);
GUEST_SIZE(LoadSplitData, 0xec);

// nw::font::ResFont (extent not known beyond what the slot leaves for it).
struct ResFontStorage {
    u8 unknown_00[0x18];
};

struct DLoadSplit {
    static constexpr u8 NOT_STARTED = 0;
    static constexpr u8 STARTING = 1;
    static constexpr u8 STARTED = 2;
    static constexpr u8 READY = 3;
    static constexpr u32 PATH_CAPACITY = 64;
    static constexpr u32 NAME_CAPACITY = 32;
    static constexpr u32 LOAD_ARGUMENT = 0x80;  // unknown argument of both loaders

    u8 use_load_split;  // which loader is used
    u8 result;          // what the loader reported
    u8 unknown_02[2];
    FontSource source;
    LoadSplitData load_split;
    FixedString<PATH_CAPACITY> path;       // "Font/<file name>"
    FixedString<NAME_CAPACITY> file_name;  // "<name>.bcfnt"
    ResFontStorage res_font;
    u8 flag_190;
    u8 state;
    u8 unknown_192[2];
    guest::gptr<FontHeap> heap;

    // Starts the load if needed and builds the font once loaded. True when ready.
    bool update();
    // Sets the file to load from a font name.
    void set_font(guest::gptr<const char> name, u8 flag, guest::gptr<FontHeap> heap_or_null);
};
GUEST_OFFSET(DLoadSplit, source, 4);
GUEST_OFFSET(DLoadSplit, load_split, 0x14);
GUEST_OFFSET(DLoadSplit, path, 0x100);
GUEST_OFFSET(DLoadSplit, file_name, 0x14c);
GUEST_OFFSET(DLoadSplit, res_font, 0x178);
GUEST_OFFSET(DLoadSplit, flag_190, 0x190);
GUEST_OFFSET(DLoadSplit, state, 0x191);
GUEST_OFFSET(DLoadSplit, heap, 0x194);
GUEST_SIZE(DLoadSplit, 0x198);

DLoadSplit &construct_dload_split(DLoadSplit &self, u8 use_load_split);

// font::Mgr: five font slots from offset 0x10.
struct FontMgr {
    static constexpr u32 SLOT_COUNT = 5;
    static constexpr u32 DEFAULT_SLOT = 3;  // indices other than 0, 1, 2 and 4

    u8 unknown_00[0x10];
    DLoadSplit slots[SLOT_COUNT];

    // The font of a slot, or null if it is not ready.
    guest::gptr<ResFontStorage> get_ready_font(u32 index);
};
GUEST_OFFSET(FontMgr, slots, 0x10);
