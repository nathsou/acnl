// Getters of the words of a global block (0x009525dc; what the words are is not known yet), a classification of a
// signed byte, and a comparison with the current time.
#include "guest/guest.hpp"

namespace {

struct GlobalValues {
    u32 word_00;
    u32 word_04;
    u32 word_08;
    u32 word_0c;
    u32 word_10;
    u32 word_14;
};
GUEST_OFFSET(GlobalValues, word_14, 0x14);

inline guest::global<GlobalValues, 0x009525dc> global_values;

inline constexpr guest::Function<0x0056b528, s64()> current_time;

}  // namespace

static u32 global_word_00() { return global_values->word_00; }
static u32 global_word_04() { return global_values->word_04; }
static u32 global_word_08() { return global_values->word_08; }
static u32 global_word_0c() { return global_values->word_0c; }
static u32 global_word_14() { return global_values->word_14; }
GUEST_EXPORT(0x00615904, global_word_00);
GUEST_EXPORT(0x006158f4, global_word_04);
GUEST_EXPORT(0x00615924, global_word_08);
GUEST_EXPORT(0x006158d4, global_word_0c);
GUEST_EXPORT(0x006158c4, global_word_14);

namespace {

// The groups of a signed byte: 0 for 4-8 and 16-20, 1 for 9-15, 2 for the rest.
constexpr s32 GROUP_0_FIRST = 4, GROUP_0_COUNT = 5;
constexpr s32 GROUP_0_SECOND_FIRST = 16;
constexpr s32 GROUP_1_FIRST = 9, GROUP_1_COUNT = 7;

struct ByteHolder {
    u8 unknown_00[7];
    s8 value;
};
GUEST_OFFSET(ByteHolder, value, 7);

}  // namespace

static u32 byte_group(const ByteHolder &holder) {
    s32 value = holder.value;
    if (u32(value - GROUP_0_FIRST) < u32(GROUP_0_COUNT) || u32(value - GROUP_0_SECOND_FIRST) < u32(GROUP_0_COUNT)) {
        return 0;
    }
    return u32(value - GROUP_1_FIRST) < u32(GROUP_1_COUNT) ? 1 : 2;
}
GUEST_EXPORT(0x00615934, byte_group);

// -1 when the time is before the value, 0 when equal and 1 after it.
static s32 compare_with_current_time(const s64 &value) {
    s64 now = current_time();
    if (now < value) {
        return -1;
    }
    return now != value ? 1 : 0;
}
GUEST_EXPORT(0x0031703c, compare_with_current_time);
