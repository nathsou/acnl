// Small accessors of talk receptors and related objects. Only the fields the code touches are named.
#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x0075cdbc, u32(u32 handle)> query_handle_0075cdbc;

}  // namespace

struct TalkReceptHandleHolder {
    u8 unknown_00[4];
    u32 handle;  // 0 when absent

    u32 query_handle() const;
};
GUEST_OFFSET(TalkReceptHandleHolder, handle, 4);

// Asks about the handle; 0 when there is none.
u32 TalkReceptHandleHolder::query_handle() const {
    if (handle == 0) {
        return 0;
    }
    return query_handle_0075cdbc(handle);
}
GUEST_EXPORT(0x00713aa8, TalkReceptHandleHolder::query_handle);

struct NpcStateBytes {
    static constexpr u8 BYTE_C_SET = 1;
    static constexpr u8 BYTE_E_LIMIT = 4;
    static constexpr u8 BYTE_D_BLOCKING = 4;

    u8 unknown_00[4];
    u32 unknown_04;
    u8 unknown_08[4];
    u8 unknown_0c;
    u8 unknown_0d;
    u8 unknown_0e;

    bool check() const;
};
GUEST_OFFSET(NpcStateBytes, unknown_04, 4);
GUEST_OFFSET(NpcStateBytes, unknown_0c, 0xc);
GUEST_OFFSET(NpcStateBytes, unknown_0d, 0xd);
GUEST_OFFSET(NpcStateBytes, unknown_0e, 0xe);

// False only when unknown_0e has reached its limit and unknown_0d is 4 (and no earlier condition accepted).
bool NpcStateBytes::check() const {
    if (unknown_04 != 0 && unknown_0c == BYTE_C_SET) {
        return true;
    }
    if (unknown_0e < BYTE_E_LIMIT) {
        return true;
    }
    return unknown_0d != BYTE_D_BLOCKING;
}
GUEST_EXPORT(0x00713ad0, NpcStateBytes::check);

struct AcAutoCampEntrySignboard {
    u8 unknown_00[0xfc];
    u32 value_fc;

    void virtual_62(gptr<u8> out);
};
GUEST_OFFSET(AcAutoCampEntrySignboard, value_fc, 0xfc);

// Stores the low byte of value_fc.
void AcAutoCampEntrySignboard::virtual_62(gptr<u8> out) {
    *out = u8(value_fc);
}
GUEST_EXPORT(0x00713b0c, AcAutoCampEntrySignboard::virtual_62);

// A table in rodata the button compares against.
struct ProButtonReference {
    u8 unknown_00[0x98];
    u32 word_98;
    u32 word_9c;
};
GUEST_OFFSET(ProButtonReference, word_98, 0x98);
GUEST_OFFSET(ProButtonReference, word_9c, 0x9c);
inline guest::global<ProButtonReference, 0x00848f50> pro_button_reference;

struct ProButtonNode {
    static constexpr u32 EXPECTED_FUNCTION = 0x002f64d8;

    u8 unknown_000[0xec];
    u32 word_ec;
    u32 word_f0;
    u8 unknown_f4[0x3d4 - 0xf4];
    u32 word_3d4;
    u32 function_3d8;
    u32 word_3dc;

    bool virtual_16() const;
};
GUEST_OFFSET(ProButtonNode, word_ec, 0xec);
GUEST_OFFSET(ProButtonNode, word_f0, 0xf0);
GUEST_OFFSET(ProButtonNode, word_3d4, 0x3d4);
GUEST_OFFSET(ProButtonNode, function_3d8, 0x3d8);
GUEST_OFFSET(ProButtonNode, word_3dc, 0x3dc);

// False only when the words match the reference and the 0x3d4 handler is the default one.
bool ProButtonNode::virtual_16() const {
    u32 expected_ec = pro_button_reference->word_98;
    u32 expected_f0 = pro_button_reference->word_9c;
    if (word_ec != expected_ec) {
        return true;
    }
    bool compare_f0 = true;
    if (word_ec == 0 && !((word_f0 | expected_f0) & 1)) {
        compare_f0 = false;
    }
    if (compare_f0 && word_f0 != expected_f0) {
        return true;
    }
    return !(function_3d8 == EXPECTED_FUNCTION && word_3dc == 0 && word_3d4 == 0);
}
GUEST_EXPORT(0x00713b50, ProButtonNode::virtual_16);
