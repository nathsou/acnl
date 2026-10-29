// Small helpers around the name tables, the sead buffered string constructor and a few global blocks.
#include "core/bit_set.hpp"
#include "save/save_data.hpp"
#include "core/safe_string.hpp"
#include "guest/guest.hpp"
#include "save/villager.hpp"

namespace {

// ---- find the first matching entry of 16



// ---- sead::BufferedSafeStringBase<char>

inline constexpr guest::Function<0x00134544, void(gptr<char> dest, gptr<const char> source, s32 count)>
    string_copy_bytes;
inline guest::global<u8, 0x008c9f1c> string_terminator;

constexpr u32 VTABLE_BUFFERED_INITIAL = 0x0090558c;
constexpr u32 VTABLE_BUFFERED_INTERMEDIATE = 0x009050e4;
constexpr u32 VTABLE_BUFFERED_FINAL = 0x0090489c;
constexpr u32 SAFE_STRING_LENGTH_SLOT = 2;  // virtual called on the source (result unused)
constexpr s32 MAX_SCAN_LENGTH = 0x80000;

struct BufferedSafeString {
    static constexpr s32 INLINE_CAPACITY = 0x14;

    u32 vtable;
    gptr<char> text;
    s32 capacity;
    char inline_buffer[INLINE_CAPACITY];
};
GUEST_OFFSET(BufferedSafeString, text, 4);
GUEST_OFFSET(BufferedSafeString, capacity, 8);
GUEST_OFFSET(BufferedSafeString, inline_buffer, 0xc);
GUEST_SIZE(BufferedSafeString, 0x20);

// ---- global at 0x0094d938

struct UnknownState94d938 {
    static constexpr s32 NO_VALUE = -1;
    u8 flag;
    u8 unknown_01[3];
    s32 value;
};
GUEST_OFFSET(UnknownState94d938, value, 4);
inline guest::global<UnknownState94d938, 0x0094d938> state_94d938;

// ---- flag collection

inline constexpr guest::Function<0x001120f1, u32()> check_1120f0;
inline constexpr guest::Function<0x00111f95, u32()> check_111f94;
inline constexpr guest::Function<0x001120a5, u32()> check_1120a4;
inline constexpr guest::Function<0x00111ff1, u32()> check_111ff0;
inline constexpr guest::Function<0x00112299, u32()> check_112298;
inline constexpr guest::Function<0x00717084, u32(gptr<void> object)> object_check_a;
inline constexpr guest::Function<0x00716de4, u32(gptr<void> object)> object_check_b;
inline constexpr guest::Function<0x00716b74, u32(gptr<void> object)> object_check_c;
inline constexpr guest::Function<0x0076cec4, u32(gptr<void> object, u32 index)> indexed_check;

// Flag indices set by collect_flags (what each flag means is not known yet); named after the check that sets them.
constexpr u32 FLAG_FROM_1120F0 = 5;
constexpr u32 FLAG_FROM_111F94 = 6;
constexpr u32 FLAG_FROM_1120A4 = 0x15;
constexpr u32 FLAG_FROM_111FF0 = 8;
constexpr u32 FLAG_FROM_112298 = 0x16;
constexpr u32 FLAG_FROM_OBJECT_A = 9;

// collect_flags modes
constexpr u32 MODE_FIRST_GROUP_AND_MORE = 0;  // the first group only
constexpr u32 MODE_SKIP_FIRST_GROUP = 1;

constexpr u32 FIRST_INDEXED = 0x4a;
constexpr u32 LAST_INDEXED = 0x54;
constexpr u32 INDEXED_FLAG_BIAS = 0x40;  // flag = index - bias

// The 16 bytes the original pushes (r4-r6 and lr) before calling the checks. The callees read stack they have not
// written, so they must run with their frames where the original puts them.
struct CalleeFrameOffset {
    u32 words[4];
};
GUEST_SIZE(CalleeFrameOffset, 16);

// ---- SaveVillager flag
constexpr u32 FLAG_18 = 1u << 18;  // unknown flag

// ---- fuzz sizes

}  // namespace

/// Constructs a buffered string with its inline buffer and copies the source text into it, truncated to fit.
static BufferedSafeString &construct_buffered_safe_string(BufferedSafeString &self, const SafeString &source) {
    self.text = guest::addr_of(self.inline_buffer[0]);
    self.capacity = BufferedSafeString::INLINE_CAPACITY;
    self.vtable = VTABLE_BUFFERED_INITIAL;
    self.text[self.capacity - 1] = char(*string_terminator);
    self.vtable = VTABLE_BUFFERED_INTERMEDIATE;

    gptr<char> dest = self.text;
    guest::call_address<u32>(source.vtable[SAFE_STRING_LENGTH_SLOT], guest::addr_of(source));
    gptr<const char> from = source.text;
    if (dest != from.cast<char>()) {
        guest::call_address<u32>(source.vtable[SAFE_STRING_LENGTH_SLOT], guest::addr_of(source));
        gptr<const char> scanned = source.text;
        s32 length = 0;
        for (s32 i = 0; i <= MAX_SCAN_LENGTH; i++) {
            if (s8(scanned[i]) == s8(*string_terminator)) {
                length = i;
                break;
            }
        }
        if (self.capacity <= length) {
            length = self.capacity - 1;
        }
        string_copy_bytes(dest, from, length);
        dest[length] = char(*string_terminator);
    }
    self.vtable = VTABLE_BUFFERED_FINAL;
    return self;
}
GUEST_EXPORT(0x0030a018, construct_buffered_safe_string);

/// Resets the global at 0x0094d938.
static void reset_state_94d938() {
    state_94d938->flag = 0;
    state_94d938->value = UnknownState94d938::NO_VALUE;
}
GUEST_EXPORT(0x0030a01c, reset_state_94d938);

/// Sets flags in a bit set from a series of checks; mode 0 stops after the first group, mode 1 skips it.
static void collect_flags(BitSet32 &set, u32 mode) {
    guest::StackObject<CalleeFrameOffset> frame;
    if (mode != MODE_SKIP_FIRST_GROUP) {
        if (check_1120f0()) {
            set.set(FLAG_FROM_1120F0);
        }
        if (check_111f94()) {
            set.set(FLAG_FROM_111F94);
        }
        if (mode == MODE_FIRST_GROUP_AND_MORE) {
            return;
        }
    }
    if (check_1120a4()) {
        set.set(FLAG_FROM_1120A4);
    }
    if (check_111ff0()) {
        set.set(FLAG_FROM_111FF0);
    }
    if (check_112298()) {
        set.set(FLAG_FROM_112298);
    }
    gptr<void> object_a = guest::addr_of((*save_data)->part_6ad82).cast<void>();
    if (object_a) {
        if (object_check_a(object_a)) {
            if (object_check_b(object_a) || object_check_c(object_a)) {
                set.set(FLAG_FROM_OBJECT_A);
            }
        }
    }
    gptr<void> object_b = guest::addr_of((*save_data)->part_6aeb8).cast<void>();
    for (u32 index = FIRST_INDEXED; index <= LAST_INDEXED; index++) {
        if (indexed_check(object_b, index)) {
            set.set(index - INDEXED_FLAG_BIAS);
        }
    }
}
GUEST_EXPORT(0x0030a038, collect_flags);

/// Sets flag 18 of the object's flag word.
static void set_flag_18(SaveVillager &self) {
    self.flags_2510 |= FLAG_18;
}
GUEST_EXPORT(0x0030a1a0, set_flag_18);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x0030a018, 300, [](guest::Fuzz &f) {
    constexpr u32 VTABLE_SLOTS = 4;
    constexpr u32 HARMLESS_FUNCTION = 0x002fb328;  // get_word_95bf74: no effects
    auto vtable = f.allocate(VTABLE_SLOTS * sizeof(u32)).cast<u32>();
    for (u32 i = 0; i < VTABLE_SLOTS; i++) {
        vtable[i] = HARMLESS_FUNCTION;
    }
    constexpr u32 TEXT_SIZE = 48;
    auto text = f.allocate(TEXT_SIZE).cast<char>();
    f.bytes(text, TEXT_SIZE);
    u32 length = f.below(TEXT_SIZE);
    for (u32 i = 0; i < length; i++) {
        if (u8(text[i]) == *string_terminator) {
            text[i] = 'a';
        }
    }
    text[length] = char(*string_terminator);
    auto source = f.object<SafeString>();
    source->vtable = vtable;
    source->text = text;
    auto self = f.object<BufferedSafeString>();
    f.arguments(self, source);
});

GUEST_FUZZ(0x0030a01c, 200, [](guest::Fuzz &f) { f.arguments(); });

GUEST_FUZZ(0x0030a038, 200, [](guest::Fuzz &f) {
    constexpr u32 MAX_FUZZ_LIMIT = 40;
    auto set = f.object<BitSet32>();
    set->limit = f.below(MAX_FUZZ_LIMIT);
    f.arguments(set, f.pick<u32>({0, 1, 2, 2, 3}));
});

GUEST_FUZZ(0x0030a1a0, 200, [](guest::Fuzz &f) {
    constexpr u32 SIZE = 0x2600;  // past flags_2510
    auto object = f.allocate(SIZE);
    f.bytes(object, SIZE);
    f.arguments(object.cast<SaveVillager>());
});
