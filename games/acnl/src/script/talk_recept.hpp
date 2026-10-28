// script::ITalkRecept (a base class of many "Recept" objects) and the talk state checks next to it.
#pragma once

#include "guest/guest.hpp"

namespace script {

struct ITalkRecept {
    static constexpr u32 VTABLE = 0x00908dd4;
    static constexpr u32 SECOND_VTABLE = 0x0090a3e8;  // the vtable of a second base class at 0x4c

    u32 vtable;
    u8 unknown_04[0x48];
    u32 second_vtable;
};
GUEST_OFFSET(ITalkRecept, vtable, 0x00);
GUEST_OFFSET(ITalkRecept, second_vtable, 0x4c);

// Puts back the ITalkRecept vtables (the base-class part of the derived destructors).
ITalkRecept &destroy_ITalkRecept(ITalkRecept &self);

}  // namespace script
