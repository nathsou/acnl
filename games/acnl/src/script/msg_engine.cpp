#include "script/msg_engine.hpp"

namespace script {

namespace {

constexpr u32 ELEMENT_CONSTRUCTOR = 0x0060183c;
constexpr u32 STATE_PLAIN = 1;
constexpr u32 STATE_AFTER_CHARACTER = 2;
constexpr u32 SEPARATORS[] = {0x20, 0x3000, 0x0a};

inline guest::global<u32, 0x0095df14> initial_word;

// Takes a pointer to a character, which it may change; returns non-zero to accept it (meaning not known yet).
inline constexpr guest::Function<0x005ea294, u32(gptr<u16> character)> filter_character;

}  // namespace

MsgEngine &construct_msg_engine(MsgEngine &self) {
    self.vtable = MsgEngine::VTABLE;
    self.unknown_04 = 0;
    self.unknown_08 = 0;
    for (u32 i = 0; i < MsgEngine::ENTRY_COUNT; i++) {
        guest::call_address<void>(ELEMENT_CONSTRUCTOR, guest::addr_of(self.entries[i]));
    }
    self.entry_count = 0;
    for (u32 i = 0; i < MsgEngine::ENTRY_COUNT; i++) {
        self.entries[i].first = 0;
        self.entries[i].second = 0;
    }
    return self;
}
GUEST_EXPORT(0x00601a20, construct_msg_engine);

// Puts back the base vtable (the base-class part of derived destructors).
MsgEngine &destroy_msg_engine(MsgEngine &self) {
    self.vtable = MsgEngine::VTABLE;
    return self;
}
GUEST_EXPORT(0x00601a88, destroy_msg_engine);

bool MsgEngine::take_character(gptr<u16> out, const MsgSource &source) {
    bool produced = false;
    if (flag_60 != 0 || state_61 == STATE_PLAIN) {
        if ((source.size_bytes >> 1) == 1) {
            guest::StackObject<u16> character;
            *character = *source.text;
            if (filter_character(character.ptr()) != 0) {
                produced = true;
                *out = *character;
            }
        }
    }
    flag_60 = 0;
    if (state_61 == STATE_PLAIN) {
        state_61 = STATE_AFTER_CHARACTER;
    } else if (state_61 == STATE_AFTER_CHARACTER) {
        for (u32 separator : SEPARATORS) {
            if (source.following_code == separator) {
                state_61 = STATE_PLAIN;
                break;
            }
        }
    }
    return produced;
}
GUEST_EXPORT(0x00601a98, MsgEngine::take_character);

void MsgEngine::reset() {
    unknown_04 = initial_word;
    unknown_08 = initial_word;
    while (entry_count != 0) {
        entry_count--;
        entries[entry_count].first = 0;
        entries[entry_count].second = 0;
    }
    flag_60 = 0;
    state_61 = 0;
    byte_68 = 0;
    byte_69 = 0;
    halfword_6a = INITIAL_HALFWORD_6A;
    for (u32 &word : words_6c) {
        word = 0;
    }
    halfword_88 = 0;
}
GUEST_EXPORT(0x00601b44, MsgEngine::reset);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x00601a20, 200, [](guest::Fuzz &f) { f.arguments(f.object<MsgEngine>()); });
GUEST_FUZZ(0x00601a88, 200, [](guest::Fuzz &f) { f.arguments(f.object<MsgEngine>()); });
GUEST_FUZZ(0x00601a98, 300, [](guest::Fuzz &f) {
    auto engine = f.object<MsgEngine>();
    engine->flag_60 = f.below(2);
    engine->state_61 = f.pick<u8>({0, 1, 2, 3});
    auto source = f.object<MsgSource>();
    auto text = f.allocate(8);
    f.bytes(text, 8);
    source->text = text.cast<const u16>();
    source->following_code = f.pick<u32>({0x20, 0x3000, 0xa, 0x41, f.number()});
    source->size_bytes = f.pick<u32>({2, 3, 4, 5, 0, f.number()});
    f.arguments(engine, f.allocate(4).cast<u16>(), source);
});
GUEST_FUZZ(0x00601b44, 300, [](guest::Fuzz &f) {
    auto engine = f.object<MsgEngine>();
    engine->entry_count = f.below(MsgEngine::ENTRY_COUNT + 1);
    f.arguments(engine);
});

}  // namespace script
