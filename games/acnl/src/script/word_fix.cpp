// script::WordFix<9u>, script::WordFix<29u> and script::WordKey<29u, int>: a WordPtr descriptor followed by a
// ScriptWord and the text buffer it points to.
#include "script/script_word.hpp"
#include "script/word.hpp"

void free_memory(guest::gptr<void> memory);  // 0x002ffb64, rewritten in core/pointer_list_and_heap.cpp

namespace script {
namespace {

constexpr u32 WORD_FIX_9_VTABLE = 0x0090a3e8;
constexpr u32 WORD_FIX_29_BASE_VTABLE = 0x00909e38;
constexpr u32 WORD_FIX_29_VTABLE = 0x0090a420;

// The 16-bit character the 9-character buffer is filled with (read from the rodata, probably 0)
inline guest::global<u16, 0x008906ec> fill_character;

struct WordFix9 {
    static constexpr u32 CAPACITY = 9;

    WordPtr head;
    ScriptWord word;
    u16 text[CAPACITY];
};
GUEST_OFFSET(WordFix9, word, 0x0c);
GUEST_OFFSET(WordFix9, text, 0x18);
GUEST_SIZE(WordFix9, 0x2c);

// WordFix<29u> and WordKey<29u, int> share the layout.
struct WordFix29 {
    static constexpr u32 CAPACITY = 29;

    WordPtr head;
    ScriptWord word;
    u16 text[CAPACITY];
    u8 unknown_52[2];
    u32 value_54;
    u8 byte_58;
    u8 unknown_59[3];
};
GUEST_OFFSET(WordFix29, word, 0x0c);
GUEST_OFFSET(WordFix29, text, 0x18);
GUEST_OFFSET(WordFix29, value_54, 0x54);
GUEST_OFFSET(WordFix29, byte_58, 0x58);
GUEST_SIZE(WordFix29, 0x5c);

// Still recompiled code:
inline constexpr guest::Function<0x002f825c, void(guest::gptr<void> buffer, u32 size)> clear_buffer;
inline constexpr guest::Function<0x005fcf24, void(guest::gptr<void> self)> word_ptr_virtual_7;

// The constructor.
WordFix9 &construct_word_fix_9(WordFix9 &self) {
    construct_word_ptr(self.head, guest::addr_of(self.text[0]), WordFix9::CAPACITY);
    self.head.vtable = WORD_FIX_9_VTABLE;
    construct_script_word(self.word);
    clear_buffer(guest::addr_of(self.text[0]), sizeof(self.text));
    u16 fill = fill_character;
    for (u16 &c : self.text) {
        c = fill;
    }
    return self;
}

// The destructor: puts the vtable back and frees the object.
void destroy_word_fix_9(WordFix9 &self) {
    self.head.vtable = WORD_FIX_9_VTABLE;
    free_memory(guest::addr_of(self));
}

// Virtual 7: runs the WordPtr version, then resets the word and the value that follows the buffer.
u32 word_key_29_virtual_7(WordFix29 &self) {
    word_ptr_virtual_7(guest::addr_of(self));
    self.word.reset();
    self.value_54 = 0;
    self.byte_58 = 0;
    return 0;
}

// The constructor.
WordFix29 &construct_word_fix_29(WordFix29 &self) {
    self.head.capacity = WordFix29::CAPACITY;
    self.head.vtable = WORD_FIX_29_BASE_VTABLE;
    self.head.buffer = guest::addr_of(self.text[0]);
    self.word.reset();
    clear_buffer(guest::addr_of(self.text[0]), sizeof(self.text));
    for (u16 &c : self.text) {
        c = 0;
    }
    self.head.vtable = WORD_FIX_29_VTABLE;
    self.value_54 = 0;
    return self;
}

// The destructor: puts the base vtable back and frees the object.
void destroy_word_key_29(WordFix29 &self) {
    self.head.vtable = WORD_FIX_29_BASE_VTABLE;
    free_memory(guest::addr_of(self));
}

}  // namespace
}  // namespace script

GUEST_EXPORT(0x0081e8d0, script::construct_word_fix_9);
GUEST_EXPORT(0x0081e938, script::destroy_word_fix_9);
GUEST_EXPORT(0x0081e95c, script::word_key_29_virtual_7);
GUEST_EXPORT(0x0081e98c, script::construct_word_fix_29);
GUEST_EXPORT(0x0081ea08, script::destroy_word_key_29);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x0081e8d0, 200, [](guest::Fuzz &f) { f.arguments(f.object<script::WordFix9>()); });
GUEST_FUZZ(0x0081e938, 200, [](guest::Fuzz &f) { f.arguments(f.object<script::WordFix9>()); });
GUEST_FUZZ(0x0081e95c, 200, [](guest::Fuzz &f) {
    auto object = f.object<script::WordFix29>();
    object->head.vtable = 0x00909e38;
    object->head.buffer = guest::addr_of(object->text[0]);
    object->head.capacity = script::WordFix29::CAPACITY;
    f.arguments(object);
});
GUEST_FUZZ(0x0081e98c, 200, [](guest::Fuzz &f) { f.arguments(f.object<script::WordFix29>()); });
GUEST_FUZZ(0x0081ea08, 200, [](guest::Fuzz &f) { f.arguments(f.object<script::WordFix29>()); });
