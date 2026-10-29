// Tables indexed by a kind number (below KIND_COUNT; KIND_NONE stands for "no kind") in the game's data.
#include "guest/guest.hpp"

namespace {

constexpr u32 KIND_COUNT = 0xa5;
constexpr u32 KIND_NONE = 0xa5;
constexpr u32 MAX_COUNT = 0x30;           // limit of the counts table
constexpr u32 NO_KIND_BYTE = 0xfc;        // the byte for an out-of-range kind
constexpr u32 FIRST_SPECIAL_KIND = 0xa1;  // kinds 0xa1 and 0xa2 are special (meaning not known yet)
constexpr u32 SECOND_SPECIAL_KIND = 0xa2;
constexpr u32 PAIR_COUNT = 6;

inline guest::global<u32[KIND_COUNT], 0x00889308> counts_by_kind;
inline guest::global<u8[KIND_COUNT], 0x0088959c> bytes_by_kind;
inline guest::global<u8[PAIR_COUNT * 2], 0x00889ca4> listed_bytes;  // a list of bytes, two per pair

// The state shared by the code that deals with kinds (only the fields read here are named).
struct KindState {
    u8 unknown_00[3];
    u8 byte_03;
};
GUEST_OFFSET(KindState, byte_03, 3);
inline guest::global<KindState, 0x00957320> kind_state;

}  // namespace

static u8 kind_state_byte_3() {
    return kind_state->byte_03;
}
GUEST_EXPORT(0x005b4120, kind_state_byte_3);

// The count for the kind, at most MAX_COUNT; 0 for a kind out of range.
static u32 capped_count_for_kind(u32 kind) {
    if (kind >= KIND_COUNT) {
        return 0;
    }
    u32 count = counts_by_kind[kind];
    return count > MAX_COUNT ? MAX_COUNT : count;
}
GUEST_EXPORT(0x005b42fc, capped_count_for_kind);

static u32 byte_for_kind(u32 kind) {
    return kind < KIND_COUNT ? bytes_by_kind[kind] : NO_KIND_BYTE;
}
GUEST_EXPORT(0x005b4340, byte_for_kind);

static bool is_special_kind(u32 kind) {
    return kind == FIRST_SPECIAL_KIND || kind == SECOND_SPECIAL_KIND;
}
GUEST_EXPORT(0x005b4358, is_special_kind);

// Whether the byte is in the list.
static bool is_listed_byte(u32 value) {
    for (u32 i = 0; i < PAIR_COUNT * 2; i++) {
        if (listed_bytes[i] == value) {
            return true;
        }
    }
    return false;
}
GUEST_EXPORT(0x005b436c, is_listed_byte);

GUEST_FUZZ(0x005b4120, 100, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x005b42fc, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 2, 3, KIND_COUNT - 1, KIND_COUNT, 0xffffffffu, f.below(KIND_COUNT)}));
});
GUEST_FUZZ(0x005b4340, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, KIND_COUNT - 1, KIND_COUNT, 0xffffffffu, f.below(KIND_COUNT)}));
});
GUEST_FUZZ(0x005b4358, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, FIRST_SPECIAL_KIND - 1, FIRST_SPECIAL_KIND, SECOND_SPECIAL_KIND, 0xa3, f.number()}));
});
GUEST_FUZZ(0x005b436c, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 105, 106, 107, 127, 128, 129, 0x100 + 106, f.number(), f.below(140)}));
});

namespace {

struct KindStateByte1 {
    u8 unknown_00;
    u8 byte_01;
};
inline guest::global<KindStateByte1, 0x00957320> kind_state_1;

}  // namespace

static u8 kind_state_byte_1() {
    return kind_state_1->byte_01;
}
GUEST_EXPORT(0x003041c8, kind_state_byte_1);
GUEST_FUZZ(0x003041c8, 100, [](guest::Fuzz &f) { f.arguments(); });
