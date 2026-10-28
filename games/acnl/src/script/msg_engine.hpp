// script::MsgEngine: the base of the script/message engines. A vtable, a small stack of word pairs and a few
// state bytes. Fields not touched by the rewritten code are named after their offsets.
#pragma once

#include "guest/guest.hpp"

namespace script {

struct MsgEngineEntry {
    u32 first;
    u32 second;
};
GUEST_SIZE(MsgEngineEntry, 8);

// The text a MsgEngine reads from (what it is exactly is not known yet).
struct MsgSource {
    guest::gptr<const u16> text;
    u32 following_code;  // compared to the separators 0x20, 0x3000 and 0xa
    u8 unknown_08[4];
    u32 size_bytes;      // single characters have 2 or 3 here
};
GUEST_OFFSET(MsgSource, text, 0);
GUEST_OFFSET(MsgSource, following_code, 4);
GUEST_OFFSET(MsgSource, size_bytes, 0xc);

struct MsgEngine {
    static constexpr u32 VTABLE = 0x0090aa8c;
    static constexpr u32 ENTRY_COUNT = 10;
    static constexpr u16 INITIAL_HALFWORD_6A = 7;

    u32 vtable;
    u32 unknown_04;
    u32 unknown_08;
    MsgEngineEntry entries[ENTRY_COUNT];
    u32 entry_count;
    u8 flag_60;
    u8 state_61;  // 0, 1 or 2
    u8 unknown_62[6];
    u8 byte_68;
    u8 byte_69;
    u16 halfword_6a;
    u32 words_6c[7];
    u16 halfword_88;

    // Reads one character from the source into out; true if one was produced. Also advances state_61.
    bool take_character(gptr<u16> out, const MsgSource &source);
    // Pops all entries and puts the state back to its initial values.
    void reset();
};
GUEST_OFFSET(MsgEngine, entries, 0x0c);
GUEST_OFFSET(MsgEngine, entry_count, 0x5c);
GUEST_OFFSET(MsgEngine, flag_60, 0x60);
GUEST_OFFSET(MsgEngine, state_61, 0x61);
GUEST_OFFSET(MsgEngine, byte_68, 0x68);
GUEST_OFFSET(MsgEngine, halfword_6a, 0x6a);
GUEST_OFFSET(MsgEngine, words_6c, 0x6c);
GUEST_OFFSET(MsgEngine, halfword_88, 0x88);

MsgEngine &construct_msg_engine(MsgEngine &self);
MsgEngine &destroy_msg_engine(MsgEngine &self);

}  // namespace script
