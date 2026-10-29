// Which of the two values kept at 0x00a83370 a given value equals.
#include "guest/guest.hpp"

namespace {

struct ValuePair {
    u32 values[2];
};
GUEST_SIZE(ValuePair, 8);

inline guest::global<ValuePair, 0x00a83370> pair_a83370;

constexpr s32 NO_MATCH = -1;
constexpr u32 NO_VALUE = 0xffffffff;

}  // namespace

// 0 or 1 for the matching value (the first wins), -1 when neither matches.
s32 index_in_pair_a83370(u32 value) {
    for (u32 i = 0; i < 2; i++) {
        if (pair_a83370->values[i] == value) {
            return s32(i);
        }
    }
    return NO_MATCH;
}
GUEST_EXPORT(0x00309ccc, index_in_pair_a83370);
GUEST_FUZZ(0x00309ccc, 200, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({pair_a83370->values[0], pair_a83370->values[1], 0, 1, 0xffffffffu, f.number()}));
});

// Empties both values.
void reset_pair_a83370() {
    for (u32 &value : pair_a83370->values) {
        value = NO_VALUE;
    }
}
GUEST_EXPORT(0x003079f8, reset_pair_a83370);
GUEST_FUZZ(0x003079f8, 20, [](guest::Fuzz &f) { f.arguments(); });
