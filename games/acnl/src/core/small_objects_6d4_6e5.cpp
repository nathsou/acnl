// Small questions and lookups from 0x006d4000 to 0x006e6000: kind flags of the global byte, keyed lists of an owner
// and two words of an item's wear class entry.
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {

constexpr u32 FLAG_80000 = 0x80000;
constexpr u32 FLAG_100000 = 0x100000;
constexpr u32 FLAG_10000000 = 0x10000000;
constexpr u32 FLAG_4 = 4;
constexpr u32 SLOT_MATCHED = 4;
constexpr u32 FIRST_MODE_VALUE = 1;
constexpr u32 ENTRY_WORD_LIMIT = 0x276;
constexpr float SEVEN = 7.0f;
constexpr float ZERO = 0.0f;
constexpr u32 KEY_WORD_COUNT = 11;
constexpr u32 KEY_WORD_2B4 = 0;
constexpr u32 KEY_WORD_2BC = 2;
constexpr u32 KEY_WORD_2C4 = 4;
constexpr u32 KEY_WORD_2D4 = 8;
constexpr u32 KEY_WORD_2DC = 10;

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x0075e058, bool(gptr<void> state, u32 index)> slot_state_matches;
inline constexpr guest::Function<0x00305f44, u32()> query_current_main_object;
inline constexpr guest::Function<0x002fc900, u32()> mode_above_1;
inline constexpr guest::Function<0x00625690, u8()> current_mode;
inline guest::global<float, 0x00886cb0> default_float;

// A table of entries of two words at 0x34 (eight bytes apart) behind the global at 0x0095063c.
struct WordEntries {
    u8 unknown_00[0x34];
    u32 words[2];
};
GUEST_OFFSET(WordEntries, words, 0x34);
GUEST_SIZE(WordEntries, 0x3c);
inline guest::global<gptr<u8>, 0x0095063c> word_entries;
constexpr u32 WORD_ENTRY_OFFSET = 0x34;
constexpr u32 WORD_ENTRY_STRIDE = 8;

// Two halfwords at the start of a wear class entry.
struct WearClassWords {
    u16 first;
    u16 second;
};

// A node of the owner's list: next at 8, the key at 0xc, the payload at 0x14.
struct KeyedNode {
    u8 unknown_00[8];
    gptr<KeyedNode> next;
    u32 key;
    u8 unknown_10[4];
    u8 payload[4];
};
GUEST_OFFSET(KeyedNode, next, 8);
GUEST_OFFSET(KeyedNode, key, 0xc);
GUEST_OFFSET(KeyedNode, payload, 0x14);

struct KeyedOwner {
    u8 unknown_000[0xe94];
    gptr<KeyedNode> head;
    u8 unknown_e98[0xeb4 - 0xe98];
    u32 key_words[KEY_WORD_COUNT];
};
GUEST_OFFSET(KeyedOwner, head, 0xe94);
GUEST_OFFSET(KeyedOwner, key_words, 0xeb4);

// The payload of the first node whose key is the owner's key word (null if none).
gptr<u8> payload_for_key_word(KeyedOwner &owner, u32 word) {
    u32 key = owner.key_words[word];
    gptr<u8> found(0u);
    for (gptr<KeyedNode> node = owner.head; node != nullptr; node = node->next) {
        if (node->key == key) {
            found = guest::addr_of(node->payload[0]);
            break;
        }
    }
    return found;
}

gptr<KeyedOwner> fuzz_owner(guest::Fuzz &f) {
    auto owner = f.object<KeyedOwner>();
    gptr<KeyedNode> next = nullptr;
    u32 count = f.below(5);
    for (u32 i = 0; i < count; i++) {
        auto node = f.object<KeyedNode>();
        node->next = next;
        node->key = f.below(3);
        next = node;
    }
    owner->head = next;
    for (u32 &word : owner->key_words) {
        word = f.below(3);
    }
    return owner;
}

}  // namespace

gptr<u8> payload_2b4(KeyedOwner &owner) { return payload_for_key_word(owner, KEY_WORD_2B4); }
gptr<u8> payload_2bc(KeyedOwner &owner) { return payload_for_key_word(owner, KEY_WORD_2BC); }
gptr<u8> payload_2c4(KeyedOwner &owner) { return payload_for_key_word(owner, KEY_WORD_2C4); }
gptr<u8> payload_2d4(KeyedOwner &owner) { return payload_for_key_word(owner, KEY_WORD_2D4); }
gptr<u8> payload_2dc(KeyedOwner &owner) { return payload_for_key_word(owner, KEY_WORD_2DC); }
GUEST_EXPORT(0x006daac8, payload_2b4);
GUEST_EXPORT(0x006dab64, payload_2bc);
GUEST_EXPORT(0x006daa54, payload_2c4);
GUEST_EXPORT(0x006de6f4, payload_2d4);
GUEST_EXPORT(0x006de8bc, payload_2dc);
GUEST_FUZZ(0x006daac8, 100, [](guest::Fuzz &f) { f.arguments(fuzz_owner(f)); });
GUEST_FUZZ(0x006dab64, 100, [](guest::Fuzz &f) { f.arguments(fuzz_owner(f)); });
GUEST_FUZZ(0x006daa54, 100, [](guest::Fuzz &f) { f.arguments(fuzz_owner(f)); });
GUEST_FUZZ(0x006de6f4, 100, [](guest::Fuzz &f) { f.arguments(fuzz_owner(f)); });
GUEST_FUZZ(0x006de8bc, 100, [](guest::Fuzz &f) { f.arguments(fuzz_owner(f)); });

// Whether the global byte's kind has flag 0x80000 or 0x100000 and the session's station 4 state matches.
bool kind_flag_and_session_slot() {
    bool flagged = table_entry_has_all_bits(FLAG_80000, read_global_byte_2()) != 0 ||
                   table_entry_has_all_bits(FLAG_100000, read_global_byte_2()) != 0;
    if (!flagged) {
        return false;
    }
    gptr<NetSession> session = *net_session;
    if (session == nullptr) {
        return false;
    }
    return slot_state_matches(guest::addr_of(session->part_1e4).cast<void>(), SLOT_MATCHED);
}
GUEST_EXPORT(0x006d46bc, kind_flag_and_session_slot);
GUEST_FUZZ(0x006d46bc, 50, [](guest::Fuzz &f) { f.arguments(); });

// Whether the main object's entry in the table has a non-zero first word (false without the table).
bool main_object_entry_set() {
    gptr<u8> table = *word_entries;
    if (table == nullptr) {
        return false;
    }
    u32 entry = query_current_main_object();
    gptr<WordEntries> at(table.addr() + entry * WORD_ENTRY_STRIDE);
    return at->words[0] != 0;
}
GUEST_EXPORT(0x006d96fc, main_object_entry_set);
GUEST_FUZZ(0x006d96fc, 100, [](guest::Fuzz &f) {
    *word_entries = f.below(4) != 0 ? f.allocate(WORD_ENTRY_OFFSET + 8 * WORD_ENTRY_STRIDE).cast<u8>() : gptr<u8>(0u);
    f.arguments();
});

// The mode while it is above 1, else 1.
u32 mode_or_one() {
    if (mode_above_1() != 0) {
        return current_mode();
    }
    return FIRST_MODE_VALUE;
}
GUEST_EXPORT(0x006e09c0, mode_or_one);
GUEST_FUZZ(0x006e09c0, 50, [](guest::Fuzz &f) {
    (*net_session)->mode_1326f = f.pick<u8>({0, 1, 2, 5});
    f.arguments();
});

// Whether the global byte's kind has flag 0x80000 or 0x100000.
bool kind_has_flag_80000_or_100000() {
    return table_entry_has_all_bits(FLAG_80000, read_global_byte_2()) != 0 ||
           table_entry_has_all_bits(FLAG_100000, read_global_byte_2()) != 0;
}
GUEST_EXPORT(0x006e0b2c, kind_has_flag_80000_or_100000);
GUEST_FUZZ(0x006e0b2c, 50, [](guest::Fuzz &f) { f.arguments(); });

// The first word of the wear class entry when it is below the limit, else 0 (also without an entry).
u32 wear_class_first_word(const Item &item) {
    gptr<WearClassEntry> entry = item.wear_class_entry();
    if (entry == nullptr) {
        return 0;
    }
    u32 word = entry.cast<WearClassWords>()->first;
    return word < ENTRY_WORD_LIMIT ? word : 0;
}
GUEST_EXPORT(0x006e567c, wear_class_first_word);

u32 wear_class_second_word(const Item &item) {
    gptr<WearClassEntry> entry = item.wear_class_entry();
    if (entry == nullptr) {
        return 0;
    }
    u32 word = entry.cast<WearClassWords>()->second;
    return word < ENTRY_WORD_LIMIT ? word : 0;
}
GUEST_EXPORT(0x006e5500, wear_class_second_word);
GUEST_FUZZ(0x006e567c, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(3) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(item);
});
GUEST_FUZZ(0x006e5500, 100, [](guest::Fuzz &f) {
    auto item = f.object<Item>();
    if (f.below(3) != 0) {
        item->id = u16(Item::FIRST_ITEM + f.below(Item::ITEM_COUNT));
    }
    f.arguments(item);
});

// 0 for kinds with flag 0x10000000, 7 for the ones with flag 4, else the default.
float kind_float() {
    if (table_entry_has_all_bits(FLAG_10000000, read_global_byte_2()) != 0) {
        return ZERO;
    }
    if (table_entry_has_all_bits(FLAG_4, read_global_byte_2()) != 0) {
        return SEVEN;
    }
    return *default_float;
}
GUEST_EXPORT(0x006e56a4, kind_float);
GUEST_FUZZ(0x006e56a4, 50, [](guest::Fuzz &f) { f.arguments(); });
