// script::MsgEngine: the base of the script/message engines. A vtable, a small stack of word pairs and a few
// state bytes. Fields not touched by the rewritten code are named after their offsets.
#pragma once

#include "guest/guest.hpp"
#include "hobj/house_object.hpp"

namespace script {

struct MsgEngineEntry {
    u32 first;
    u32 second;
};
GUEST_SIZE(MsgEngineEntry, 8);

// The text a MsgEngine reads from (what it is exactly is not known yet).
struct MsgSource {
    guest::gptr<const u16> text;
    u32 following_code;  // compared to the separators 0x20, 0x3000 and 0xa; also the code run() dispatches on
    u8 unknown_08[4];
    u32 size_bytes;      // single characters have 2 or 3 here
};
GUEST_OFFSET(MsgSource, text, 0);
GUEST_OFFSET(MsgSource, following_code, 4);
GUEST_OFFSET(MsgSource, size_bytes, 0xc);
GUEST_SIZE(MsgSource, 0x10);

struct MsgEngine {
    static constexpr u32 VTABLE = 0x0090aa8c;
    static constexpr u32 ENTRY_COUNT = 10;
    static constexpr u16 INITIAL_HALFWORD_6A = 7;

    u32 vtable;
    u32 unknown_04;  // current position in the text (0: none)
    u32 unknown_08;  // second position (end of the current part)
    MsgEngineEntry entries[ENTRY_COUNT];  // saved (unknown_04, unknown_08) pairs
    u32 entry_count;
    u8 flag_60;
    u8 state_61;  // 0, 1 or 2
    u8 unknown_62[2];
    guest::gptr<MsgEngine> self_64;  // set to the engine itself by the SeqEngine constructor
    u8 byte_68;
    u8 byte_69;
    u16 halfword_6a;
    u32 words_6c[7];
    u16 halfword_88;

    // Reads one character from the source into out; true if one was produced. Also advances state_61.
    bool take_character(gptr<u16> out, const MsgSource &source);
    // Pops all entries and puts the state back to its initial values.
    void reset();

    // Saves the current pair on the stack (if *first is non-zero and there is room) and loads new ones.
    void push_state(const u32 &first, const u32 &second);
    // Same, but the new first value comes from the object's virtual 3 (nothing happens if it returns 0) and the
    // second one is the initial word.
    void push_state_from_object(guest::gptr<hobj::VirtualObject> object);
    // Processes the text until the end marker or until a virtual check says stop.
    void run(const u32 &end_marker);
    // Drops the saved pairs, sets new positions and calls virtual 2.
    void restart(const u32 &first, const u32 &second);
};
GUEST_OFFSET(MsgEngine, entries, 0x0c);
GUEST_OFFSET(MsgEngine, entry_count, 0x5c);
GUEST_OFFSET(MsgEngine, flag_60, 0x60);
GUEST_OFFSET(MsgEngine, state_61, 0x61);
GUEST_OFFSET(MsgEngine, self_64, 0x64);
GUEST_OFFSET(MsgEngine, byte_68, 0x68);
GUEST_OFFSET(MsgEngine, halfword_6a, 0x6a);
GUEST_OFFSET(MsgEngine, words_6c, 0x6c);
GUEST_OFFSET(MsgEngine, halfword_88, 0x88);

MsgEngine &construct_msg_engine(MsgEngine &self);
MsgEngine &destroy_msg_engine(MsgEngine &self);
MsgEngine &construct_seq_engine(MsgEngine &self);

}  // namespace script
