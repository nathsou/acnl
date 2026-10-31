// Inserting a word into a message: the current text style (colour, two tag flags) is closed around the word with
// control tags and restored after it.
#include "guest/guest.hpp"
#include "hobj/house_object.hpp"
#include "script/msg_engine.hpp"
#include "script/script_word.hpp"

using guest::gptr;

namespace {

// Message control tags (UTF-16: 0x0e, group, type, parameter size, parameters).
constexpr u32 TAG_FF_2 = 0x00890e34;           // group 0xff, type 2: meaning not known yet
constexpr u32 TAG_FF_3 = 0x00890e3e;           // group 0xff, type 3
constexpr u32 TAG_FF_4 = 0x00890e48;           // group 0xff, type 4
constexpr u32 TAG_COLOR_TABLE = 0x00890e5c;    // group 0, type 3 (colour) with the colour index: 12 bytes each
constexpr u32 TAG_COLOR_SIZE = 12;
constexpr u32 TAG_COLOR_RESET = 0x00890eb0;    // colour 0xffff: back to the default colour

inline guest::global<u32, 0x0095df14> no_end;  // the second word pushed with a tag (always 0)

inline constexpr guest::Function<0x005d55bc, s8(u32 type, u32 row, u32 column)> lookup_table_value;

}  // namespace

namespace script {

struct WordStyle {
    static constexpr u16 NO_COLOR = 7;
    static constexpr u16 COLOR_COUNT = 7;

    gptr<MsgEngine> engine;
    u8 tag_ff_2;  // closed with TAG_FF_2 only
    u8 tag_ff_4;  // suspended with TAG_FF_4, closed with TAG_FF_3
    u16 color;
    u32 word_for_column_1;
    u32 word_for_column_2;
    u32 word_for_column_8;

    void suspend();
    void close();
    void insert_word(gptr<hobj::VirtualObject> word, const ScriptWord &info);
};
GUEST_OFFSET(WordStyle, tag_ff_2, 4);
GUEST_OFFSET(WordStyle, tag_ff_4, 5);
GUEST_OFFSET(WordStyle, color, 6);
GUEST_OFFSET(WordStyle, word_for_column_1, 8);
GUEST_OFFSET(WordStyle, word_for_column_2, 0xc);
GUEST_OFFSET(WordStyle, word_for_column_8, 0x10);

namespace {

void push_tag(gptr<MsgEngine> engine, u32 tag) {
    engine->push_state(tag, *no_end);
}

}  // namespace

// Pushes the tags that end the current style before a word.
void WordStyle::suspend() {
    if (tag_ff_4) {
        push_tag(engine, TAG_FF_4);
    }
    if (color != NO_COLOR) {
        push_tag(engine, TAG_COLOR_RESET);
    }
}
GUEST_EXPORT(0x005fd374, WordStyle::suspend);

// Pushes the tags that end the style for good and forgets it.
void WordStyle::close() {
    if (color != NO_COLOR) {
        push_tag(engine, color < COLOR_COUNT ? TAG_COLOR_TABLE + color * TAG_COLOR_SIZE : TAG_COLOR_RESET);
    }
    if (tag_ff_4) {
        push_tag(engine, TAG_FF_3);
    }
    if (tag_ff_2) {
        push_tag(engine, TAG_FF_2);
    }
    tag_ff_2 = 0;
    color = NO_COLOR;
    tag_ff_4 = 0;
}
GUEST_EXPORT(0x005fd3d4, WordStyle::close);

// Pushes the word between the style's tags, and remembers it for the columns of the word's table row that are set.
void WordStyle::insert_word(gptr<hobj::VirtualObject> word, const ScriptWord &info) {
    suspend();
    engine->push_state_from_object(word);
    close();
    u32 type = info.value_4;
    u32 row = info.value_8;
    if (lookup_table_value(type, row, 1)) {
        word_for_column_1 = word.addr();
    }
    if (lookup_table_value(type, row, 2)) {
        word_for_column_2 = word.addr();
    }
    if (lookup_table_value(type, row, 8)) {
        word_for_column_8 = word.addr();
    }
}
GUEST_EXPORT(0x005fd4b8, WordStyle::insert_word);

}  // namespace script
