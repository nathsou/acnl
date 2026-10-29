#include "guest/guest.hpp"
#include "save/player.hpp"
#include "save/save_data.hpp"

namespace {

// The object the current player is reached through: its field at 0x234 is the player.
struct NameContext {
    u8 unknown_0000[0x234];
    gptr<SavePlayer> player;  // may be null
};
GUEST_OFFSET(NameContext, player, 0x234);
inline guest::global<gptr<NameContext>, 0x00aaef18> name_context_ptr;

inline constexpr guest::Function<0x002fb378, u32()> get_reference_value;
inline constexpr guest::Function<0x00757620, u32(gptr<void> a, u32 b, s32 c)> compare_with_limit;


}  // namespace

bool SavedRecordInner::has_value() const {
    return value < NONE_VALUE;
}
GUEST_EXPORT(0x00309ef0, SavedRecordInner::has_value);

// Checks that the value starts with the current player's identity, then that it is within bounds around a reference
// value.
static bool passes_context_check(gptr<void> value) {
    gptr<NameContext> context = *name_context_ptr;
    if (!context->player) {
        return false;
    }
    if (!identities_match(context->player->identity, *value.cast<PersonalId>())) {
        return false;
    }
    u32 reference = get_reference_value();
    if (!compare_with_limit(value, reference, -15)) {
        return false;
    }
    return compare_with_limit(value, reference, 15) == 0;
}
GUEST_EXPORT(0x00309f04, passes_context_check);

// The index of the player in the array of players (SaveData::NO_PLAYER for null or a pointer that is none of them).
u32 player_index_in(gptr<const SavePlayer> players, gptr<const SavePlayer> player) {
    if (!player) {
        return SaveData::NO_PLAYER;
    }
    for (u32 i = 0; i < SaveData::PLAYER_COUNT; i++) {
        if (players.addr() + i * SavePlayer::SIZE == player.addr()) {
            return i;
        }
    }
    return SaveData::NO_PLAYER;
}
GUEST_EXPORT(0x00309fbc, player_index_in);

// An object with a field of 5 bytes at 0xde followed by a flag byte (what it is is not known yet).
struct FieldWithFlag {
    u8 unknown_00[0xde];
    u8 field_de[5];
    u8 flag_e3;
};
GUEST_OFFSET(FieldWithFlag, field_de, 0xde);
GUEST_OFFSET(FieldWithFlag, flag_e3, 0xe3);

// Clears the flag and returns the address of the field.
static gptr<u8> clear_flag_and_get_field(FieldWithFlag &object) {
    object.flag_e3 = 0;
    return guest::addr_of(object.field_de[0]);
}
GUEST_EXPORT(0x0030a014, clear_flag_and_get_field);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

static gptr<void> some_string(guest::Fuzz &f) {
    gptr<void> s = f.allocate(64);
    f.bytes(s, 64);
    s.cast<u8>()[63] = 0;
    return s;
}

GUEST_FUZZ(0x00309ef0, 200, [](guest::Fuzz &f) {
    auto inner = f.object<SavedRecordInner>();
    inner->value = f.pick<u8>({0, SavedRecordInner::NONE_VALUE - 1, SavedRecordInner::NONE_VALUE, 0xff, u8(f.number())});
    f.arguments(inner);
});
GUEST_FUZZ(0x00309f04, 200, [](guest::Fuzz &f) { f.arguments(some_string(f)); });
GUEST_FUZZ(0x00309fbc, 200, [](guest::Fuzz &f) {
    auto data = f.allocate(16).cast<SaveData>();  // (only addresses are compared: the array is never read)
    gptr<const SavePlayer> player = f.pick<gptr<const SavePlayer>>(
        {gptr<const SavePlayer>(nullptr), guest::addr_of(data->players[0]), guest::addr_of(data->players[1]),
         guest::addr_of(data->players[2]), guest::addr_of(data->players[3]), gptr<const SavePlayer>(data.addr())});
    f.arguments(data, player);
});GUEST_FUZZ(0x0030a014, 200, [](guest::Fuzz &f) { f.arguments(f.object<FieldWithFlag>()); });
