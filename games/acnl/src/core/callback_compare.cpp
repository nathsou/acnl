// Comparison of an object's stored callback (a pointer to member function) with one of the game's known callbacks.
#include "guest/guest.hpp"

namespace {

// The known callbacks are pairs (function, adjustment) in the game's data; this one is the fourth.
inline guest::global<guest::MemberFunctionPointer, 0x00879548> known_callback;

struct CallbackHolder {
    u8 unknown_0000[0x2148];
    guest::MemberFunctionPointer callback;
};
GUEST_OFFSET(CallbackHolder, callback, 0x2148);

}  // namespace

// True when the holder's callback is not the known one.
static bool has_other_callback(const CallbackHolder &holder) {
    return !(holder.callback == *known_callback);
}
GUEST_EXPORT(0x0031f260, has_other_callback);
