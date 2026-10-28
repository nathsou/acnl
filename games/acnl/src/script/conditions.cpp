// A script condition check (0x0023bdac): answers one of a few yes/no questions about the game state by index.
#include "guest/guest.hpp"

namespace {

// A sead::FixedSafeString<16> as built on the stack: vtable, buffer pointer, capacity, storage.
struct FixedSafeString16 {
    u32 vtable;
    gptr<char> buffer;
    s32 capacity;
    char storage[16];
};
GUEST_OFFSET(FixedSafeString16, buffer, 4);
GUEST_OFFSET(FixedSafeString16, capacity, 8);
GUEST_OFFSET(FixedSafeString16, storage, 0xc);
GUEST_SIZE(FixedSafeString16, 0x1c);

constexpr u32 FIXED_SAFE_STRING_16_VTABLE = 0x00904874;
constexpr u32 STRING_VTABLE_SLOT_2 = 8;  // byte offset of the virtual called after formatting

// Two flag bytes at 0x00953b14 (meaning not known yet).
struct Flags953b14 {
    u8 flag_0;
    u8 flag_1;
};
inline guest::global<Flags953b14, 0x00953b14> flags_953b14;

// Four signed single digits at 0x0094fd60 (formatted as a 4-digit number).
inline guest::global<s8[4], 0x0094fd60> digits_94fd60;

// The string terminator the game keeps in rodata (0x008c9f1c).
inline guest::global<char, 0x008c9f1c> null_char;

// The block at get_word_95bf74() + BLOCK_OFFSET (meaning not known yet).
constexpr u32 BLOCK_OFFSET = 0x71900;
struct Block71900 {
    u8 unknown_00[0x22];
    u16 flags_22;  // bit 0 checked by condition 3
};
GUEST_OFFSET(Block71900, flags_22, 0x22);

inline constexpr guest::Function<0x002fb328, u32()> get_word_95bf74;
inline constexpr guest::Function<0x003508ac, u32()> query_003508ac;
inline constexpr guest::Function<0x0070f56c, u32(gptr<Block71900> block)> check_block_0070f56c;
inline constexpr guest::Function<0x0030f48c, void(gptr<FixedSafeString16> string, gptr<const char> format, s32 a,
                                                  s32 b, s32 c, s32 d)>
    format_string;
inline constexpr guest::Function<0x003508e4, u32(gptr<char> text)> check_text_003508e4;

enum Condition : u32 {
    CONDITION_QUERY_003508AC = 0,
    CONDITION_BLOCK_CHECK = 1,
    CONDITION_DIGITS_TEXT = 2,
    CONDITION_BLOCK_FLAG = 3,
    CONDITION_FLAG_0 = 4,
    CONDITION_UNUSED_5 = 5,
    CONDITION_FLAG_1 = 6,
};

constexpr u32 NOT_A_CONDITION = 2;  // the result for unknown indices

gptr<Block71900> block_71900() { return gptr<Block71900>(get_word_95bf74() + BLOCK_OFFSET); }

// Formats the four digits into a FixedSafeString<16> and asks f_003508e4 about the text.
u32 check_digits_text() {
    guest::StackObject<FixedSafeString16> text;
    text->buffer = guest::addr_of(text->storage[0]);
    text->capacity = sizeof(text->storage);
    text->buffer[text->capacity - 1] = *null_char;
    text->storage[0] = *null_char;
    text->vtable = FIXED_SAFE_STRING_16_VTABLE;
    format_string(text.ptr(), "%1d%1d%1d%1d"_g, digits_94fd60[0], digits_94fd60[1], digits_94fd60[2],
                  digits_94fd60[3]);
    guest::call_address<void>(*gptr<u32>(text->vtable + STRING_VTABLE_SLOT_2), text.ptr());
    return check_text_003508e4(text->buffer) != 0 ? 0 : 1;
}

}  // namespace

// Returns 0 or 1 for conditions 0-4 and 6, and 2 for any other index.
u32 evaluate_condition(u32 condition) {
    switch (condition) {
    case CONDITION_QUERY_003508AC:
        return query_003508ac() == 1 ? 0 : 1;
    case CONDITION_BLOCK_CHECK:
        return check_block_0070f56c(block_71900()) != 0 ? 0 : 1;
    case CONDITION_DIGITS_TEXT:
        return check_digits_text();
    case CONDITION_BLOCK_FLAG:
        return (block_71900()->flags_22 & 1) ? 0 : 1;
    case CONDITION_FLAG_0:
        return flags_953b14->flag_0 != 0 ? 0 : 1;
    case CONDITION_FLAG_1:
        return flags_953b14->flag_1 != 0 ? 1 : 0;
    default:
        return NOT_A_CONDITION;
    }
}
GUEST_EXPORT(0x0023bdac, evaluate_condition);

GUEST_FUZZ(0x0023bdac, 300, [](guest::Fuzz &f) {
    f.arguments(f.pick<u32>({0, 1, 2, 3, 4, 5, 6, 7, 8, 0xffffffff, f.below(8), f.number()}));
});
