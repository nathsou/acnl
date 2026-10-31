// Small accessors of the local-play session (the global NetSession).
#include "guest/guest.hpp"
#include "net/net_session.hpp"

using guest::gptr;

namespace {

inline constexpr guest::Function<0x006170f4, u32(gptr<NetSessionPart> part)> part_277c_query;

}  // namespace

bool session_flag_229() {
    return (*net_session)->flag_229 != 0;
}
GUEST_EXPORT(0x00624a20, session_flag_229);

u32 session_part_277c_query() {
    return part_277c_query(guest::addr_of((*net_session)->part_277c));
}
GUEST_EXPORT(0x00624a3c, session_part_277c_query);

s8 session_value_2780() {
    return (*net_session)->value_2780;
}
GUEST_EXPORT(0x00624a54, session_value_2780);

// Whether the session has no station number yet.
bool session_has_no_station() {
    return (*net_session)->station() == 0;
}
GUEST_EXPORT(0x00624a6c, session_has_no_station);

s8 session_buffer_disabled() {
    return static_cast<s8>((*net_session)->buffer.disabled);
}
GUEST_EXPORT(0x00624a90, session_buffer_disabled);
