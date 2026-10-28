// Loading sound data by item id. The shape matches NintendoWare's nw::snd SoundDataManager::LoadData (item id,
// allocator, load flags, block size); the kinds of item ids are dispatched on the id's top byte.
#include "guest/guest.hpp"

namespace {

// The kinds of item ids (the id's top byte); kinds 0, 4 and 7+ load nothing.
enum ItemIdKind : u32 {
    ID_KIND_SOUND = 1,
    ID_KIND_2 = 2,
    ID_KIND_3 = 3,
    ID_KIND_5 = 5,
    ID_KIND_6 = 6,
};
constexpr u32 ID_KIND_SHIFT = 24;
constexpr u32 INVALID_ID = 0xffffffff;

// The sub-types of sound ids, as the archive reports them.
enum SoundType : u32 {
    SOUND_TYPE_1 = 1,
    SOUND_TYPE_2 = 2,
    SOUND_TYPE_3 = 3,
};

constexpr u32 LOAD_FLAG_3 = 1u << 3;  // for kind 5 ids: also load the file (meaning not known yet)

struct SoundDataLoader {
    u8 unknown_000[4];
    guest::gptr<void> archive;  // the sound archive item ids are looked up in
    u8 unknown_008[0x208 - 0x8];
    u16 load_depth;  // nesting of load calls (loads recurse)
    u8 cancelled;    // while set, loads do nothing; cleared when the outermost load ends

    u32 load(u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size);
    u32 load_by_kind(u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size);
};
GUEST_OFFSET(SoundDataLoader, archive, 0x4);
GUEST_OFFSET(SoundDataLoader, load_depth, 0x208);
GUEST_OFFSET(SoundDataLoader, cancelled, 0x20a);

inline constexpr guest::Function<0x00138c88, u32(guest::gptr<void> archive)> archive_is_available;
inline constexpr guest::Function<0x00138f08, u32(guest::gptr<void> archive, u32 id)> archive_sound_type;
inline constexpr guest::Function<0x0013c7d0, u32(guest::gptr<void> archive, u32 id)> archive_file_of_sound;
inline constexpr guest::Function<0x0013c718, u32(guest::gptr<void> archive, u32 id)> archive_file_of_item;
inline constexpr guest::Function<0x001370dc,
                                 u32(SoundDataLoader &self, u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size)>
    load_sound_type_1;
inline constexpr guest::Function<0x0013aea0, u32(SoundDataLoader &self, u32 id, guest::gptr<void> allocator, u32 flags,
                                                 u32 block_size, s32 unknown)>
    load_sound_type_3;
inline constexpr guest::Function<0x00136f2c,
                                 u32(SoundDataLoader &self, u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size)>
    load_kind_2;
inline constexpr guest::Function<0x0013b22c,
                                 u32(SoundDataLoader &self, u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size)>
    load_kind_3;
inline constexpr guest::Function<0x0013b438,
                                 u32(SoundDataLoader &self, u32 file, guest::gptr<void> allocator, u32 block_size, u32 unknown)>
    load_file;
inline constexpr guest::Function<0x001371c0,
                                 u32(SoundDataLoader &self, u32 file_data, guest::gptr<void> allocator, u32 block_size)>
    load_kind_6_from_file;

}  // namespace

// The load proper, for a loader that is not cancelled.
u32 SoundDataLoader::load_by_kind(u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size) {
    switch (id >> ID_KIND_SHIFT) {
    case ID_KIND_SOUND:
        switch (archive_sound_type(archive, id)) {
        case SOUND_TYPE_1:
            return load_sound_type_1(*this, id, allocator, flags, block_size);
        case SOUND_TYPE_2:
            return load_file(*this, archive_file_of_sound(archive, id), allocator, block_size, 0) != 0;
        case SOUND_TYPE_3:
            return load_sound_type_3(*this, id, allocator, flags, block_size, -1);
        default:
            return 0;
        }
    case ID_KIND_2:
        return load_kind_2(*this, id, allocator, flags, block_size);
    case ID_KIND_3:
        return load_kind_3(*this, id, allocator, flags, block_size);
    case ID_KIND_5:
        if (flags & LOAD_FLAG_3) {
            if (load_file(*this, archive_file_of_item(archive, id), allocator, block_size, 1) == 0) {
                return 0;
            }
        }
        return 1;
    case ID_KIND_6: {
        u32 file_data = load_file(*this, archive_file_of_item(archive, id), allocator, block_size, 1);
        if (file_data == 0) {
            return 0;
        }
        return load_kind_6_from_file(*this, file_data, allocator, block_size);
    }
    default:
        return 0;
    }
}

// Loads the data of an item id. Returns 0 on failure (no archive, invalid id, no allocator, cancelled).
u32 SoundDataLoader::load(u32 id, guest::gptr<void> allocator, u32 flags, u32 block_size) {
    if (!archive) {
        return 0;
    }
    if (archive_is_available(archive) == 0 || id == INVALID_ID || !allocator) {
        return 0;
    }
    load_depth = u16(load_depth + 1);
    u32 result = cancelled ? 0 : load_by_kind(id, allocator, flags, block_size);
    load_depth = u16(load_depth - 1);
    if (load_depth == 0) {
        cancelled = 0;
    }
    return result;
}
GUEST_EXPORT(0x00130f0c, SoundDataLoader::load);

// Only the path without an archive can be fuzzed: the archive and the loaders are other guest code with unknown
// object layouts.
GUEST_FUZZ(0x00130f0c, 200, [](guest::Fuzz &f) {
    auto loader = f.object<SoundDataLoader>();
    loader->archive = nullptr;
    auto allocator = f.allocate(16);
    f.arguments(loader, f.pick<u32>({0, INVALID_ID, 0x01000000, 0x06000001, f.number()}),
                f.below(2) ? allocator : guest::gptr<void>(nullptr), f.pick<u32>({1, 2, 4, 8, f.number()}),
                f.number());
});
