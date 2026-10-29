// Reads of small indexed fields (four entries) of objects around 0x0075e74c. Their types are not known yet: each
// struct below describes what one group of functions reads of its object.
#include "guest/guest.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {

constexpr u32 ENTRY_COUNT = 4;
constexpr u32 MASK_COUNT = 5;     // indices below this have a bit in the mask byte
constexpr u8 NO_ENTRY_ID = 0xa5;  // meaning not known yet
constexpr u32 FUZZ_OBJECT_SIZE = 0x40;
constexpr u32 POINTER_SKIP = 2;   // the entry's pointer is returned plus this

inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;

// An object with four entry ids, a byte of per-entry flags, a mask byte and four signed values.
struct ByteEntries {
    u8 ids[ENTRY_COUNT];
    u8 flags;
    u8 unknown_05;
    u8 mask;
    u8 unknown_07[0x18 - 7];
    s8 values[ENTRY_COUNT];
};
GUEST_OFFSET(ByteEntries, flags, 4);
GUEST_OFFSET(ByteEntries, mask, 6);
GUEST_OFFSET(ByteEntries, values, 0x18);

// An object with two arrays of four words.
struct WordArrays {
    u32 unknown_00;
    u32 first[ENTRY_COUNT];
    u32 second[ENTRY_COUNT];
};
GUEST_OFFSET(WordArrays, first, 4);
GUEST_OFFSET(WordArrays, second, 0x14);

// An object with four pointers and four presence bytes.
struct PointerEntries {
    u32 unknown_00;
    gptr<u8> pointers[ENTRY_COUNT];
    u8 present[ENTRY_COUNT];
};
GUEST_OFFSET(PointerEntries, pointers, 4);
GUEST_OFFSET(PointerEntries, present, 0x14);

// An object that has a member far into it.
struct BigObject {
    u8 unknown_0000[0x3860];
    u8 member_3860;
};
GUEST_OFFSET(BigObject, member_3860, 0x3860);

u32 fuzz_index(guest::Fuzz &f) {
    return f.pick<u32>({0, 1, 3, 4, 5, 6, 0xffffffffu, f.below(8)});
}

template <typename T>
gptr<T> fuzz_bytes_object(guest::Fuzz &f) {
    auto object = f.allocate(std::max<u32>(sizeof(T), FUZZ_OBJECT_SIZE)).template cast<T>();
    f.bytes(object.template cast<u8>(), sizeof(T));
    return object;
}

}  // namespace

gptr<u8> address_of_member_3860(BigObject &object) {
    return guest::addr_of(object.member_3860);
}
GUEST_EXPORT(0x0075e74c, address_of_member_3860);
GUEST_FUZZ(0x0075e74c, 20, [](guest::Fuzz &f) { f.arguments(f.object<BigObject>()); });

// Whether the bit for the index (below 5) is set in the mask byte.
bool mask_bit_set(const ByteEntries &object, u32 index) {
    if (index >= MASK_COUNT) {
        return false;
    }
    return (object.mask & (1u << index)) != 0;
}
GUEST_EXPORT(0x0075e758, mask_bit_set);
GUEST_FUZZ(0x0075e758, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<ByteEntries>(f), fuzz_index(f)); });

// The sum of the entry's words in the two arrays, 0 for an index past the entries.
u32 entry_word_sum(const WordArrays &object, u32 index) {
    if (index >= ENTRY_COUNT) {
        return 0;
    }
    return object.second[index] + object.first[index];
}
GUEST_EXPORT(0x0075e78c, entry_word_sum);
GUEST_FUZZ(0x0075e78c, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<WordArrays>(f), fuzz_index(f)); });

// Whether the flags byte has a bit set for each of the four entries.
bool all_entries_flagged(const ByteEntries &object) {
    for (u32 i = 0; i < ENTRY_COUNT; i++) {
        if ((bit_for_index(i) & object.flags) == 0) {
            return false;
        }
    }
    return true;
}
GUEST_EXPORT(0x0075e7f8, all_entries_flagged);
GUEST_FUZZ(0x0075e7f8, 200, [](guest::Fuzz &f) {
    auto object = fuzz_bytes_object<ByteEntries>(f);
    object->flags = f.pick<u8>({0, 0xf, 0x7, 0x1, 0xff, u8(f.number())});
    f.arguments(object);
});

u32 entry_id(const ByteEntries &object, u32 index) {
    return index < ENTRY_COUNT ? object.ids[index] : NO_ENTRY_ID;
}
GUEST_EXPORT(0x0075e830, entry_id);
GUEST_FUZZ(0x0075e830, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<ByteEntries>(f), fuzz_index(f)); });

// The entry's bit of the flags byte.
u32 entry_flag(const ByteEntries &object, u32 index) {
    if (index >= ENTRY_COUNT) {
        return 0;
    }
    return (object.flags >> index) & 1;
}
GUEST_EXPORT(0x0075e840, entry_flag);
GUEST_FUZZ(0x0075e840, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<ByteEntries>(f), fuzz_index(f)); });

u32 entry_pointer(const PointerEntries &object, u32 index) {
    if (index >= ENTRY_COUNT) {
        return 0;
    }
    return object.pointers[index].addr();
}
GUEST_EXPORT(0x0075e9e4, entry_pointer);
GUEST_FUZZ(0x0075e9e4, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<PointerEntries>(f), fuzz_index(f)); });

s32 entry_signed_value(const ByteEntries &object, u32 index) {
    if (index >= ENTRY_COUNT) {
        return 0;
    }
    return object.values[index];
}
GUEST_EXPORT(0x0075e9f8, entry_signed_value);
GUEST_FUZZ(0x0075e9f8, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<ByteEntries>(f), fuzz_index(f)); });

// Two bytes past the entry's pointer; null when the entry is not present.
gptr<u8> entry_pointer_plus_2(const PointerEntries &object, u32 index) {
    if (index >= ENTRY_COUNT || object.present[index] == 0) {
        return gptr<u8>(0u);
    }
    if (!object.pointers[index]) {
        return gptr<u8>(0u);
    }
    return object.pointers[index] + POINTER_SKIP;
}
GUEST_EXPORT(0x0075ea0c, entry_pointer_plus_2);
GUEST_FUZZ(0x0075ea0c, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<PointerEntries>(f), fuzz_index(f)); });

// The entry's id, but only while the local station is 0 (otherwise NO_ENTRY_ID).
u32 entry_id_for_station_0(const ByteEntries &object, u32 index) {
    if ((*net_session)->station() == 0 && index < ENTRY_COUNT) {
        return object.ids[index];
    }
    return NO_ENTRY_ID;
}
GUEST_EXPORT(0x0075ea44, entry_id_for_station_0);
GUEST_FUZZ(0x0075ea44, 200, [](guest::Fuzz &f) { f.arguments(fuzz_bytes_object<ByteEntries>(f), fuzz_index(f)); });
