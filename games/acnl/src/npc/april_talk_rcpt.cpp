// AcNpcApril::AprilTalkRcpt: the talk receptor of the April NPC. Only the fields the rewritten code uses are named.
#include <cstring>

#include "guest/guest.hpp"

using guest::gptr;
using guest::MemberFunctionPointer;

// The object AprilTalkRcpt::unknown_f0 points to (type not known yet).
struct AprilTalkPartner {
    u8 unknown_0000[0x9a8];
    u8 unknown_9a8;              // when 0, virtual_50 compares unknown_9ac against its selector
    u8 unknown_9a9[3];
    u8 unknown_9ac[0x1028 - 0x9ac];  // an object passed to 0x0071b83c
    u32 unknown_1028;            // a handle, 0 when absent
};
GUEST_OFFSET(AprilTalkPartner, unknown_9a8, 0x9a8);
GUEST_OFFSET(AprilTalkPartner, unknown_9ac, 0x9ac);
GUEST_OFFSET(AprilTalkPartner, unknown_1028, 0x1028);

struct AprilTalkRcpt {
    static constexpr u8 FLAG_ARMED = 0x02;     // (meaning not known yet) required before notifying
    static constexpr u8 FLAG_NOTIFIED = 0x04;  // the notification below was done once

    u32 vtable;
    u32 unknown_04;
    u8 unknown_08[0xf0 - 0x08];
    gptr<AprilTalkPartner> partner;  // may be null
    u8 unknown_f4[0x2c0 - 0xf4];
    MemberFunctionPointer pending_handler;  // run once by virtual_40, then reset
    u8 unknown_2c8[0x2d1 - 0x2c8];
    u8 flags_2d1;
    u8 unknown_2d2[2];

    void virtual_40(u32 argument);
    u16 virtual_50(u32 argument);
};
GUEST_OFFSET(AprilTalkRcpt, unknown_04, 0x04);
GUEST_OFFSET(AprilTalkRcpt, partner, 0xf0);
GUEST_OFFSET(AprilTalkRcpt, pending_handler, 0x2c0);
GUEST_OFFSET(AprilTalkRcpt, flags_2d1, 0x2d1);

namespace {

inline constexpr guest::Function<0x00713aa8, u32(AprilTalkRcpt &self)> talk_rcpt_query_00713aa8;
inline constexpr guest::Function<0x0075ce78, u32(u32 value)> convert_0075ce78;
inline constexpr guest::Function<0x002fe4c0, u32(u32 handle)> resolve_handle_002fe4c0;
inline constexpr guest::Function<0x0051cd74, void(u32 object, u32 value, u32 converted)> notify_0051cd74;
inline constexpr guest::Function<0x0075a5c8, void(u32 argument, gptr<u8> selector, gptr<u16> values, u32 count)>
    read_choices_0075a5c8;
inline constexpr guest::Function<0x0071b83c, u32(gptr<void> object)> query_0071b83c;

// What pending_handler is reset to before it runs (a constant in rodata)
inline guest::global<MemberFunctionPointer, 0x0083fe28> reset_handler;

}  // namespace

// Notifies once (when armed and the query gives a value), then runs and clears the pending handler.
void AprilTalkRcpt::virtual_40(u32 argument) {
    u32 value = talk_rcpt_query_00713aa8(*this);
    if (!(flags_2d1 & FLAG_NOTIFIED) && value != 0 && (flags_2d1 & FLAG_ARMED)) {
        flags_2d1 |= FLAG_NOTIFIED;
        u32 handle = partner ? partner->unknown_1028 : 0;
        if (handle != 0 && unknown_04 != 0) {
            u32 converted = convert_0075ce78(unknown_04);
            u32 object = resolve_handle_002fe4c0(handle);
            notify_0051cd74(object, value, converted);
        }
    }

    MemberFunctionPointer handler = pending_handler;
    if (handler.function == 0 && !(handler.adjust & 1)) {
        return;
    }
    pending_handler = *reset_handler;
    // the original calls the old function with the adjustment it reads back after the reset
    MemberFunctionPointer call{handler.function, pending_handler.adjust};
    guest::call_member<void>(call, guest::addr_of(this), argument);
}
GUEST_EXPORT(0x006342dc, AprilTalkRcpt::virtual_40);

// Picks one of two values read for the argument: the second when the partner's state differs from the selector.
u16 AprilTalkRcpt::virtual_50(u32 argument) {
    struct Choices {
        u16 values[2];
        u8 selector;
        u8 unknown_5[3];
    };
    guest::StackObject<Choices> choices;
    read_choices_0075a5c8(argument, guest::addr_of(&choices->selector), guest::addr_of(&choices->values[0]), 2);
    u32 index = 0;
    if (partner && partner->unknown_9a8 == 0) {
        u32 state = query_0071b83c(guest::addr_of(&partner->unknown_9ac[0]).cast<void>());
        if (state != choices->selector) {
            index = 1;
        }
    }
    return choices->values[index];
}
GUEST_EXPORT(0x006343cc, AprilTalkRcpt::virtual_50);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

template <typename T>
static gptr<T> zeroed(guest::Fuzz &f) {
    gptr<T> p = f.allocate(sizeof(T)).template cast<T>();
    std::memset(p.get(), 0, sizeof(T));
    return p;
}

GUEST_FUZZ(0x006342dc, 200, [](guest::Fuzz &f) {
    auto self = zeroed<AprilTalkRcpt>(f);
    self->flags_2d1 = u8(f.number());
    if (f.below(2) != 0) {
        self->partner = zeroed<AprilTalkPartner>(f);  // no handle: the notification is skipped
    }
    f.arguments(self, f.number());
});

GUEST_FUZZ(0x006343cc, 200, [](guest::Fuzz &f) {
    auto self = zeroed<AprilTalkRcpt>(f);
    if (f.below(2) != 0) {
        auto partner = zeroed<AprilTalkPartner>(f);
        partner->unknown_9a8 = u8(1 + f.below(255));
        self->partner = partner;
    }
    auto argument = f.allocate(0x100);
    std::memset(argument.get(), 0, 0x100);
    f.arguments(self, argument);
});
