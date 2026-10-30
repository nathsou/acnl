// Starting a menu request (see the state at 0x0094fd0c).
#include "core/flag_manager.hpp"
#include "core/state_94fd0c.hpp"

namespace {

inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;

constexpr u8 REQUEST_READY = 1;
constexpr u8 REQUEST_UNDER_WAY = 2;
constexpr u32 BUSY_OFFSET = 0x1fe;  // a byte of the object at field 0x30: non-zero while it is busy

// A word of the block at 0x0098c4fc that must be zero for a request to start (meaning not known yet).
struct RequestBlock {
    u32 unknown_00;
    u32 blocked;
};
GUEST_OFFSET(RequestBlock, blocked, 4);
inline guest::global<RequestBlock, 0x0098c4fc> request_block;

constexpr u8 SPECIAL_MODE = 0x46;  // in this mode no flag is requested
constexpr u32 REQUEST_5 = 5, REQUEST_6 = 6, REQUEST_64 = 0x64, REQUEST_7C = 0x7c, REQUEST_88 = 0x88;  // request no flag
constexpr u32 REQUEST_62 = 0x62, REQUEST_63 = 0x63;                                                    // flag 0x1f
constexpr u32 REQUEST_7B = 0x7b, REQUEST_80 = 0x80, REQUEST_81 = 0x81;                                  // flag 0x1e
constexpr u32 FLAG_FOR_62_63 = 0x1f;
constexpr u32 FLAG_FOR_7B_80_81 = 0x1e;
constexpr u32 FLAG_FOR_OTHERS = 0x21;

// The flag the request asks the flag manager for, or NO_FLAG.
constexpr u32 NO_FLAG = 0xffffffff;
u32 flag_for_request(u32 request) {
    switch (request) {
    case REQUEST_5:
    case REQUEST_6:
    case REQUEST_64:
    case REQUEST_7C:
    case REQUEST_88:
        return NO_FLAG;
    case REQUEST_62:
    case REQUEST_63:
        return FLAG_FOR_62_63;
    case REQUEST_7B:
    case REQUEST_80:
    case REQUEST_81:
        return FLAG_FOR_7B_80_81;
    default:
        return FLAG_FOR_OTHERS;
    }
}

}  // namespace

// Starts the request when the state is ready for one, nothing blocks it and the object at field 0x30 is not busy: the
// state goes to "under way" with the request and its argument, and the flag that goes with the request (if any) is
// requested. Returns whether it started.
u32 try_request(u32 request, u32 argument) {
    UnknownState94fd0c &state = *state_94fd0c;
    if (state.request_state != REQUEST_READY || request_block->blocked != 0) {
        return 0;
    }
    if (state.unknown_30 != 0 && gptr<u8>(state.unknown_30)[BUSY_OFFSET] != 0) {
        return 0;
    }
    state.request_state = REQUEST_UNDER_WAY;
    state.request_code = u8(request);
    state.request_argument = u8(argument);
    if (read_global_byte_2() == SPECIAL_MODE) {
        return 1;
    }
    u32 flag = flag_for_request(request);
    if (flag != NO_FLAG) {
        flag_manager->request(flag);
    }
    return 1;
}
GUEST_EXPORT(0x006d1ffc, try_request);
GUEST_FUZZ(0x006d1ffc, 100, [](guest::Fuzz &f) { f.arguments(f.pick<u32>({5, 6, 0x62, 0x63, 0x64, 0x7b, 0x7c, 0x80, 0x88, 0x40}), 0u); });
