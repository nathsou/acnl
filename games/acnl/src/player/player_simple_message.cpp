// PlayerSimpleMessage, a script::ITalkRecept with a 64-character text buffer, an item and a set of words.
#include "item/item.hpp"
#include "script/talk_recept.hpp"

namespace {

// A sead::FixedSafeString<64>: a vtable, a pointer to its buffer, the capacity and the buffer.
struct FixedSafeString64 {
    static constexpr u32 VTABLE = 0x00904950;
    static constexpr s32 CAPACITY = 64;

    u32 vtable;
    gptr<char> buffer;  // points at storage
    s32 capacity;
    char storage[CAPACITY];
};
GUEST_OFFSET(FixedSafeString64, buffer, 4);
GUEST_OFFSET(FixedSafeString64, capacity, 8);
GUEST_OFFSET(FixedSafeString64, storage, 0xc);
GUEST_SIZE(FixedSafeString64, 0x4c);

struct PlayerSimpleMessage {
    static constexpr u32 VTABLE = 0x008f4068;
    static constexpr s32 UNSET = -1;

    script::ITalkRecept base;
    u8 unknown_50[0x79 - 0x50];
    u8 unknown_79;
    u8 unknown_7a[2];
    FixedSafeString64 text;
    s32 words_c8[8];  // all UNSET initially (meaning not known yet)
    u32 unknown_e8;
    s32 words_ec[5];  // all UNSET initially
    Item item;
    u32 unknown_104;
    u8 unknown_108;
};
GUEST_OFFSET(PlayerSimpleMessage, unknown_79, 0x79);
GUEST_OFFSET(PlayerSimpleMessage, text, 0x7c);
GUEST_OFFSET(PlayerSimpleMessage, words_c8, 0xc8);
GUEST_OFFSET(PlayerSimpleMessage, unknown_e8, 0xe8);
GUEST_OFFSET(PlayerSimpleMessage, words_ec, 0xec);
GUEST_OFFSET(PlayerSimpleMessage, item, 0x100);
GUEST_OFFSET(PlayerSimpleMessage, unknown_104, 0x104);
GUEST_OFFSET(PlayerSimpleMessage, unknown_108, 0x108);

// The empty string the sead strings are cleared with (its terminating NUL is read)
inline guest::global<const char, 0x008c9f1c> empty_string;

inline constexpr guest::Function<0x005dd69c, gptr<script::ITalkRecept>(script::ITalkRecept &self)>
    construct_ITalkRecept;
inline constexpr guest::Function<0x002fc20c, gptr<Item>(Item &self)> construct_empty_item;

}  // namespace

// The constructor: an empty text, every word unset and the empty item.
PlayerSimpleMessage &construct_PlayerSimpleMessage(PlayerSimpleMessage &self) {
    construct_ITalkRecept(self.base);
    self.base.vtable = PlayerSimpleMessage::VTABLE;
    self.unknown_79 = 0;

    FixedSafeString64 &text = self.text;
    text.vtable = FixedSafeString64::VTABLE;
    text.buffer = guest::addr_of(text.storage[0]);
    text.capacity = FixedSafeString64::CAPACITY;
    text.buffer[text.capacity - 1] = *empty_string;
    text.buffer[0] = *empty_string;

    for (s32 &word : self.words_c8) {
        word = PlayerSimpleMessage::UNSET;
    }
    self.unknown_e8 = 0;
    for (s32 &word : self.words_ec) {
        word = PlayerSimpleMessage::UNSET;
    }
    construct_empty_item(self.item);
    self.unknown_108 = 0;
    copy_item(self.item, *empty_item);
    self.unknown_104 = 0;
    return self;
}
GUEST_EXPORT(0x002fb808, construct_PlayerSimpleMessage);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

GUEST_FUZZ(0x002fb808, 200, [](guest::Fuzz &f) {
    auto self = f.allocate(0x200);
    f.bytes(self, 0x200);
    f.arguments(self.cast<PlayerSimpleMessage>());
});
