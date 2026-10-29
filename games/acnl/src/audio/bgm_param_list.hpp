// A sorted linked list of parameter nodes kept by an audio::bgm object at 0x414, and the "current" record after it.
// What the object is exactly is not known yet.
#pragma once

#include "guest/guest.hpp"

struct BgmParamNode {
    guest::gptr<BgmParamNode> next;  // ascending by kind
    u8 kind;
    u8 unknown_05[3];
    u32 id;
    u32 unknown_0c;
    u32 unknown_10;
    u32 unknown_14;
    u32 unknown_18;  // float bits
    u8 unknown_1c[3];
    u8 flag_1f;
};
GUEST_OFFSET(BgmParamNode, kind, 4);
GUEST_OFFSET(BgmParamNode, id, 8);
GUEST_OFFSET(BgmParamNode, unknown_0c, 0xc);
GUEST_OFFSET(BgmParamNode, unknown_10, 0x10);
GUEST_OFFSET(BgmParamNode, unknown_14, 0x14);
GUEST_OFFSET(BgmParamNode, unknown_18, 0x18);
GUEST_OFFSET(BgmParamNode, flag_1f, 0x1f);
GUEST_SIZE(BgmParamNode, 0x20);

struct BgmCurrentRecord {
    static constexpr u8 STATE_8 = 8;  // the state in which the value may be replaced (meaning not known yet)

    u32 value;
    u8 state;
    u8 unknown_05[3];
    u32 id;
    u8 kind;
    u8 unknown_0d[3];
};
GUEST_OFFSET(BgmCurrentRecord, state, 4);
GUEST_OFFSET(BgmCurrentRecord, id, 8);
GUEST_OFFSET(BgmCurrentRecord, kind, 0xc);
GUEST_SIZE(BgmCurrentRecord, 0x10);

struct BgmParamList {
    static constexpr u8 FLAG_SET = 1;

    u8 unknown_000[0x414];
    guest::gptr<BgmParamNode> head;
    u8 unknown_418[4];
    BgmCurrentRecord current;
    u8 unknown_42c[0x43c - 0x42c];
    u8 flag_43c;  // meaning not known yet

    // Overwrites the fields of every node with this kind and id.
    void update_nodes(u32 kind, u32 id, u32 value_14, u32 float_bits_18, u32 value_10);
    // Inserts a node before the first one whose kind is not smaller.
    void insert(guest::gptr<BgmParamNode> node);
    bool contains(u32 kind, u32 id) const;
    // Hangs forever (as the original does) when a node of the kind has id == value; see the .cpp.
    void set_current_value(u32 kind, u32 id, u32 value);
    void set_flag_43c();
};
GUEST_OFFSET(BgmParamList, head, 0x414);
GUEST_OFFSET(BgmParamList, current, 0x41c);
GUEST_OFFSET(BgmParamList, flag_43c, 0x43c);
