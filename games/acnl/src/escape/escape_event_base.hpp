// Fields of escape::BsEscapeEventBase (and subclasses) used by small helper methods. Only touched fields are named.
#pragma once

#include "guest/guest.hpp"

// An object the event points to three times (at 0x18, 0x1c, 0x20); meaning not known yet.
struct EscapeEventLink {
    u8 unknown_0000[0x92];
    u8 flag_92;
    u8 unknown_93;
    u8 flag_94;
    u8 unknown_95[0x1544 - 0x95];
    u8 state_1544;

    bool has_flag_92_or_94() const { return flag_92 != 0 || flag_94 != 0; }
};
GUEST_OFFSET(EscapeEventLink, flag_92, 0x92);
GUEST_OFFSET(EscapeEventLink, flag_94, 0x94);
GUEST_OFFSET(EscapeEventLink, state_1544, 0x1544);

// The object at 0x9f8 (meaning not known yet).
struct EscapeEventSub {
    u8 unknown_00[0xde];
    u8 byte_de;
    u8 byte_df;
};
GUEST_OFFSET(EscapeEventSub, byte_de, 0xde);
GUEST_OFFSET(EscapeEventSub, byte_df, 0xdf);

struct EscapeEventBase {
    u8 unknown_00[0x18];
    guest::gptr<EscapeEventLink> link_18;
    guest::gptr<EscapeEventLink> link_1c;
    guest::gptr<EscapeEventLink> link_20;
    u8 unknown_24[0x9f8 - 0x24];
    guest::gptr<EscapeEventSub> sub;  // may be null

    void set_sub_byte_de(u8 value);
    void set_sub_byte_df(u8 value);
    bool link_18_state_is_1() const;
    bool no_link_has_flags() const;
};
GUEST_OFFSET(EscapeEventBase, link_18, 0x18);
GUEST_OFFSET(EscapeEventBase, link_1c, 0x1c);
GUEST_OFFSET(EscapeEventBase, link_20, 0x20);
GUEST_OFFSET(EscapeEventBase, sub, 0x9f8);
