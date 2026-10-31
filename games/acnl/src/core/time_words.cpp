#include "save/save_data.hpp"
#include "guest/guest.hpp"

namespace {

// A 12-byte value produced and consumed by the game's time-like helpers (meaning not known yet).
struct Words12 {
    u32 word[3];
};
GUEST_SIZE(Words12, 12);

// A sentinel 64-bit value meaning "none".
constexpr u64 SENTINEL_NONE = 0x7fffffffffffffffull;

inline constexpr guest::Function<0x0056bb88, void(Words12 &out)> fill_words12;
inline constexpr guest::Function<0x0056c258, void(Words12 &self, u64 value)> apply_value_to_words12;
inline constexpr guest::Function<0x0056be20, s64(Words12 &self)> words12_to_s64;

u64 read_u64(gptr<const u8> p) {
    u64 v;
    memcpy(&v, p.get(), 8);
    return v;
}

}  // namespace

// The address of the save data.
static u32 get_save_data() {
    return (*save_data).addr();
}
GUEST_EXPORT(0x002fb328, get_save_data);

// True unless the 8-byte value is the "none" sentinel.
static bool is_not_sentinel(gptr<const u8> value) {
    return read_u64(value) != SENTINEL_NONE;
}
GUEST_EXPORT(0x002fb338, is_not_sentinel);

// Fills `out` with the base words, adjusted by the 8-byte value unless that is 0 or the sentinel.
static void make_adjusted_words(gptr<Words12> out, gptr<const u8> value_ptr) {
    u64 value = read_u64(value_ptr);
    guest::StackObject<Words12> words;
    fill_words12(*words);
    if (value != SENTINEL_NONE && value != 0) {
        apply_value_to_words12(*words, value);
    }
    *out = *words;
}
GUEST_EXPORT(0x002fb430, make_adjusted_words);

// True when the first value is greater than or equal to the second (signed), each given as a 12-byte struct by value.
static bool words_not_less(u32 a0, u32 a1, u32 a2, u32 b0, u32 b1, u32 b2) {
    guest::StackObject<Words12> a;
    guest::StackObject<Words12> b;
    *a = Words12{{a0, a1, a2}};
    *b = Words12{{b0, b1, b2}};
    s64 first = words12_to_s64(*a);
    s64 second = words12_to_s64(*b);
    return first >= second;
}
GUEST_EXPORT(0x002fb4a0, words_not_less);
