// Small accessors of the game's "book" objects (village, event and others), a price table by stage, and the
// checksummed save section.
#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x003193e8, u32(gptr<const u8> data, u32 size, u32 start, u32 final_xor)> crc32;

constexpr u32 CRC_START = 0xffffffff;
constexpr u32 CRC_FINAL_XOR = 0xffffffff;

}  // namespace

// A section of the save data: a CRC-32 of the rest, a payload, and at its end a set of flags.
struct SaveSection {
    static constexpr u32 PAYLOAD_SIZE = 0x44b8;
    static constexpr u32 FLAG_COUNT = 0x51;
    static constexpr u32 FLAG_WORDS = 3;

    u32 checksum;
    u8 payload[0x44ac];
    u32 flag_words[FLAG_WORDS];  // the last FLAG_WORDS words of the payload

    void update_checksum();
    bool checksum_is_valid() const;
    bool has_flag(u32 index) const;
};
GUEST_OFFSET(SaveSection, payload, 4);
GUEST_OFFSET(SaveSection, flag_words, 0x44b0);
GUEST_SIZE(SaveSection, 0x44bc);

void SaveSection::update_checksum() {
    checksum = crc32(guest::addr_of(payload), PAYLOAD_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x00759298, SaveSection::update_checksum);

bool SaveSection::checksum_is_valid() const {
    return checksum == crc32(guest::addr_of(payload), PAYLOAD_SIZE, CRC_START, CRC_FINAL_XOR);
}
GUEST_EXPORT(0x007592c0, SaveSection::checksum_is_valid);

// Whether the flag is set; false for an index past FLAG_COUNT.
bool SaveSection::has_flag(u32 index) const {
    if (index >= FLAG_COUNT) {
        return false;
    }
    return (flag_words[index / 32] >> (index % 32) & 1) != 0;
}
GUEST_EXPORT(0x0075915c, SaveSection::has_flag);

// ---- accessors by index; an index past the end gives the first entry

// An object with 0x38 words of entries from offset 8 (village book and others; what the entries hold is not known).
struct EntryBook {
    static constexpr u32 ENTRY_COUNT = 0x38;

    u8 unknown_00[8];
    u32 entries[ENTRY_COUNT];

    gptr<u32> entry(u32 index);
};
GUEST_OFFSET(EntryBook, entries, 8);

gptr<u32> EntryBook::entry(u32 index) {
    return guest::addr_of(entries[index < ENTRY_COUNT ? index : 0]);
}
GUEST_EXPORT(0x00759270, EntryBook::entry);
GUEST_EXPORT(0x005cd9f8, EntryBook::entry);

// An object with two words of entries from offset 0xe8 (event book).
struct EventEntries {
    static constexpr u32 ENTRY_COUNT = 2;

    u8 unknown_00[0xe8];
    u32 entries[ENTRY_COUNT];

    gptr<u32> entry(u32 index);
};
GUEST_OFFSET(EventEntries, entries, 0xe8);

gptr<u32> EventEntries::entry(u32 index) {
    return guest::addr_of(entries[index < ENTRY_COUNT ? index : 0]);
}
GUEST_EXPORT(0x00759280, EventEntries::entry);

// An object with a small value in a byte at 6.
struct SmallValueHolder {
    static constexpr u8 LIMIT = 8;       // stored values at or above read as MAX_VALUE
    static constexpr u32 MAX_VALUE = 7;

    u8 unknown_00[6];
    u8 value;

    u32 clamped_value() const;
};
GUEST_OFFSET(SmallValueHolder, value, 6);

u32 SmallValueHolder::clamped_value() const {
    return value >= LIMIT ? MAX_VALUE : value;
}
GUEST_EXPORT(0x00759260, SmallValueHolder::clamped_value);

// ---- an amount by stage

// An object with a stage in a byte at 0x14 (stages 1-4 have an amount; what they are is not known yet).
struct StagedObject {
    enum Stage : u8 { STAGE_NONE = 0, STAGE_1, STAGE_2, STAGE_3, STAGE_4, STAGE_COUNT };

    u8 unknown_00[0x14];
    u8 stage;

    u32 amount_for_stage() const;
};
GUEST_OFFSET(StagedObject, stage, 0x14);

u32 StagedObject::amount_for_stage() const {
    switch (stage) {
    case STAGE_1:
        return 300'000;
    case STAGE_2:
        return 500'000;
    case STAGE_3:
        return 1'000'000;
    case STAGE_4:
        return 2'000'000;
    default:
        return 0;
    }
}
GUEST_EXPORT(0x00758e2c, StagedObject::amount_for_stage);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00759298, 200, [](guest::Fuzz &f) { f.arguments(f.object<SaveSection>()); });
GUEST_FUZZ(0x007592c0, 200, [](guest::Fuzz &f) {
    auto section = f.object<SaveSection>();
    if (f.below(2) != 0) {
        section->checksum = crc32(guest::addr_of(section->payload), SaveSection::PAYLOAD_SIZE, CRC_START, CRC_FINAL_XOR);
    }
    f.arguments(section);
});
GUEST_FUZZ(0x0075915c, 300, [](guest::Fuzz &f) {
    f.arguments(f.object<SaveSection>(), f.pick<u32>({0, 1, 31, 32, 0x50, 0x51, 0x52, 0xffffffffu, f.below(0x60)}));
});
static void fuzz_759270(guest::Fuzz &f) {
    f.arguments(f.object<EntryBook>(), f.pick<u32>({0, 1, 0x37, 0x38, 0x39, 0xffffffffu, f.below(0x40)}));
}
GUEST_FUZZ(0x00759270, 300, fuzz_759270);
GUEST_FUZZ(0x005cd9f8, 300, fuzz_759270);
GUEST_FUZZ(0x00759280, 200, [](guest::Fuzz &f) {
    f.arguments(f.object<EventEntries>(), f.pick<u32>({0, 1, 2, 3, 0xffffffffu}));
});
GUEST_FUZZ(0x00759260, 200, [](guest::Fuzz &f) { f.arguments(f.object<SmallValueHolder>()); });
GUEST_FUZZ(0x00758e2c, 200, [](guest::Fuzz &f) {
    auto object = f.object<StagedObject>();
    object->stage = f.pick<u8>({0, 1, 2, 3, 4, 5, 6, 0xff, u8(f.number())});
    f.arguments(object);
});
