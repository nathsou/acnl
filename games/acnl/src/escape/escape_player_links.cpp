// Small accessors of the escape minigame's player objects (callers include escape::BsPlayerBase).
#include "guest/guest.hpp"

using guest::gptr;

namespace {

// An object the escape player code links to; only the value at 8 is read.
struct EscapeLinkTarget {
    u8 unknown_00[8];
    u32 value;
};
GUEST_OFFSET(EscapeLinkTarget, value, 8);

struct EscapeLinkHolder {
    u8 unknown_00[0x18];
    gptr<EscapeLinkTarget> target;
    u32 linked;  // non-zero when target is valid

    u32 linked_value() const;
};
GUEST_OFFSET(EscapeLinkHolder, target, 0x18);
GUEST_OFFSET(EscapeLinkHolder, linked, 0x1c);

// The object at offset 0 of the escape word state: a script::WordFix<32u>.
struct EscapeWordState {
    u8 unknown_0000[0x2b78];
    u8 pending;  // set on every set_word
    u8 unknown_2b79[7];
    u32 word_source;  // passed along with the word id to resolve it
    u8 unknown_2b84[4];
    u32 word_id;
    u8 keep_text;  // when set, the text is not rebuilt
    u8 flag_2b8d;  // meaning not known yet

    void set_word(u32 id, u32 keep, u32 flag);
};
GUEST_OFFSET(EscapeWordState, pending, 0x2b78);
GUEST_OFFSET(EscapeWordState, word_source, 0x2b80);
GUEST_OFFSET(EscapeWordState, word_id, 0x2b88);
GUEST_OFFSET(EscapeWordState, keep_text, 0x2b8c);
GUEST_OFFSET(EscapeWordState, flag_2b8d, 0x2b8d);

// Still recompiled code:
inline constexpr guest::Function<0x40290f50, u32(u32 id, u32 source)> resolve_word;
// (its only argument after `this` is 64-bit, so it travels in r2:r3)
inline constexpr guest::Function<0x402e8128, void(EscapeWordState &self, u64 value)> reset_word_text;
inline constexpr guest::Function<0x402e7fc0, void(EscapeWordState &self, u32 word, u32 unknown)> construct_word_fix_32;

}  // namespace

// The linked target's value, or 0 when nothing is linked.
u32 EscapeLinkHolder::linked_value() const {
    if (linked == 0) {
        return 0;
    }
    return target->value;
}
GUEST_EXPORT(0x402fa7bc, EscapeLinkHolder::linked_value);

// Records a word id; unless keep is set, the text is reset and rebuilt from the resolved word.
void EscapeWordState::set_word(u32 id, u32 keep, u32 flag) {
    word_id = id;
    keep_text = u8(keep);
    flag_2b8d = u8(flag);
    pending = 1;
    if (keep != 0) {
        return;
    }
    resolve_word(id, word_source);  // result unused
    reset_word_text(*this, 0);
    u32 word = resolve_word(word_id, word_source);
    construct_word_fix_32(*this, word, 0);
}
GUEST_EXPORT(0x402fa9f8, EscapeWordState::set_word);
