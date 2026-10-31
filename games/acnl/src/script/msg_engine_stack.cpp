// MsgEngine's stack of saved positions, its run loop, and the SeqEngine constructor.
#include "arm.hpp"
#include "core/encrypted_int.hpp"
#include "script/msg_engine.hpp"

namespace script {

namespace {

constexpr u32 SEQ_ENGINE_VTABLE = 0x0090aab4;
constexpr u32 CODE_COMMAND = 0xe;  // followed by a command read by read_command
constexpr u32 CODE_SHORT = 0xf;    // 6 bytes long

// virtual slots of the engine used here
constexpr u32 VIRTUAL_RESTART_HOOK = 2;
constexpr u32 VIRTUAL_FINISH = 3;
constexpr u32 VIRTUAL_CAN_CONTINUE = 4;
constexpr u32 VIRTUAL_ON_SOURCE = 5;
constexpr u32 VIRTUAL_ON_COMMAND = 6;
constexpr u32 VIRTUAL_ON_SHORT = 7;

// What read_command fills in (extent beyond size_bytes not known yet).
struct MsgCommand {
    u8 unknown_00[0x14];
    u32 size_bytes;
};
GUEST_OFFSET(MsgCommand, size_bytes, 0x14);
GUEST_SIZE(MsgCommand, 0x18);

inline guest::global<u32, 0x0095df14> initial_word;

// Reads the token at a text position.
inline constexpr guest::Function<0x005ec990, void(guest::gptr<MsgSource> out, u32 position)> read_source;
// Reads the command at the position stored at the given address.
inline constexpr guest::Function<0x005d7a8c, void(guest::gptr<MsgCommand> out, guest::gptr<u32> position)>
    read_command;

u32 virtual_function(const MsgEngine &engine, u32 slot) {
    return *guest::gptr<u32>(engine.vtable + slot * 4);
}

void push_pair(MsgEngine &engine, u32 first, u32 second) {
    u32 count = engine.entry_count;
    engine.entry_count = count + 1;
    engine.entries[count].first = engine.unknown_04;
    engine.entries[count].second = engine.unknown_08;
    engine.unknown_04 = first;
    engine.unknown_08 = second;
}

}  // namespace

void MsgEngine::push_state(const u32 &first, const u32 &second) {
    if (first == 0) {
        return;
    }
    if (entry_count >= ENTRY_COUNT) {
        return;
    }
    u32 count = entry_count;
    entry_count = count + 1;
    entries[count].first = unknown_04;
    entries[count].second = unknown_08;
    unknown_04 = first;
    unknown_08 = second;
}
GUEST_EXPORT(0x0060177c, MsgEngine::push_state);

void MsgEngine::push_state_from_object(guest::gptr<hobj::VirtualObject> object) {
    u32 first = guest::call_address<u32>(object->vtable[3], object);
    if (first == 0) {
        return;
    }
    if (entry_count >= ENTRY_COUNT) {
        return;
    }
    push_pair(*this, first, initial_word);
}
GUEST_EXPORT(0x006017d0, MsgEngine::push_state_from_object);

void MsgEngine::run(const u32 &end_marker) {
    if (unknown_04 == 0) {
        return;
    }
    guest::gptr<MsgEngine> self = guest::addr_of(this);
    while (true) {
        if (unknown_04 == end_marker) {
            guest::call_address<void>(virtual_function(*this, VIRTUAL_FINISH), self);
            return;
        }
        if (guest::call_address<u32>(virtual_function(*this, VIRTUAL_CAN_CONTINUE), self) == 0) {
            return;
        }
        guest::StackObject<MsgSource> source;
        read_source(source.ptr(), unknown_04);
        if (source->following_code == 0 || unknown_04 == unknown_08) {
            if (entry_count == 0) {
                guest::call_address<void>(virtual_function(*this, VIRTUAL_FINISH), self);
                return;
            }
            const MsgEngineEntry &top = entries[entry_count - 1];
            unknown_04 = top.first;
            unknown_08 = top.second;
            entry_count--;
            entries[entry_count].first = 0;
            entries[entry_count].second = 0;
            continue;
        }
        if (source->following_code == CODE_COMMAND) {
            guest::StackObject<MsgCommand> command;
            read_command(command.ptr(), guest::addr_of(unknown_04));
            unknown_04 = unknown_04 + (command->size_bytes >> 1) * 2;
            guest::call_address<void>(virtual_function(*this, VIRTUAL_ON_COMMAND), self, command.ptr());
        } else if (source->following_code == CODE_SHORT) {
            unknown_04 = unknown_04 + 6;
            guest::call_address<void>(virtual_function(*this, VIRTUAL_ON_SHORT), self);
        } else {
            unknown_04 = unknown_04 + (source->size_bytes >> 1) * 2;
            guest::call_address<void>(virtual_function(*this, VIRTUAL_ON_SOURCE), self, source.ptr());
        }
    }
}
GUEST_EXPORT(0x0060184c, MsgEngine::run);

void MsgEngine::restart(const u32 &first, const u32 &second) {
    unknown_04 = initial_word;
    unknown_08 = initial_word;
    while (entry_count != 0) {
        entry_count--;
        entries[entry_count].first = 0;
        entries[entry_count].second = 0;
    }
    unknown_04 = first;
    unknown_08 = second;
    guest::call_address<void>(virtual_function(*this, VIRTUAL_RESTART_HOOK), guest::addr_of(this));
}
GUEST_EXPORT(0x006019b0, MsgEngine::restart);

MsgEngine &construct_seq_engine(MsgEngine &self) {
    construct_msg_engine(self);
    self.vtable = SEQ_ENGINE_VTABLE;
    self.flag_60 = 0;
    self.state_61 = 0;
    self.self_64 = guest::addr_of(self);
    self.byte_68 = 0;
    self.byte_69 = 0;
    self.halfword_6a = MsgEngine::INITIAL_HALFWORD_6A;
    for (u32 &word : self.words_6c) {
        word = 0;
    }
    self.halfword_88 = 0;
    return self;
}
GUEST_EXPORT(0x00601bc0, construct_seq_engine);

namespace {

}  // namespace

}  // namespace script
