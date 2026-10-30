#include "save/personal_id.hpp"

// Copies the id and the name (22 bytes).
PlayerRef &PlayerRef::operator=(const PlayerRef &other) {
    id = other.id;
    for (u32 i = 0; i < NAME_LENGTH; i++) {
        name[i] = other.name[i];
    }
    return *this;
}
GUEST_EXPORT(0x0030f52c, PlayerRef::operator=);

GUEST_FUZZ(0x0030f52c, 200, [](guest::Fuzz &f) { f.arguments(f.object<PlayerRef>(), f.object<PlayerRef>()); });

namespace {

constexpr u32 TOWN_NAME_COMPARED_BYTES = 0x12;  // the first nine characters; the tenth is compared on its own
constexpr u16 LOW_BYTE_MASK = 0xff;
inline constexpr guest::Function<0x00100d2d, s32(guest::gptr<const u8> a, guest::gptr<const u8> b, u32 n)> memory_compare;
constexpr u32 NAME_LAST = TownRef::NAME_LENGTH - 1;  // the tenth character

}  // namespace

// The player part matches (see identities_match), and so do the town's id, last name byte and name.
bool PersonalId::equals(const PersonalId &other) const {
    if (identities_match(*this, other) == 0) {
        return false;
    }
    if (town.id != other.town.id) {
        return false;
    }
    if ((town.name[NAME_LAST] & LOW_BYTE_MASK) != (other.town.name[NAME_LAST] & LOW_BYTE_MASK)) {
        return false;
    }
    return memory_compare(guest::addr_of(town.name).cast<const u8>(), guest::addr_of(other.town.name).cast<const u8>(),
                                 TOWN_NAME_COMPARED_BYTES) == 0;
}
GUEST_EXPORT(0x002fe940, PersonalId::equals);
GUEST_FUZZ(0x002fe940, 300, [](guest::Fuzz &f) {
    auto identity = f.object<PersonalId>();
    auto other = f.object<PersonalId>();
    if (f.below(2) != 0) {
        *other = *identity;
        if (f.below(2) != 0) {
            other->town.name[f.below(TownRef::NAME_LENGTH)] ^= u16(1 + f.below(3));
        }
        if (f.below(4) == 0) {
            other->town.id = u16(f.number());
        }
    }
    f.arguments(identity, other);
});
