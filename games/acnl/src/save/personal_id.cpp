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
