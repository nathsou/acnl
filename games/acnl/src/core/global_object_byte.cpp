#include "guest/guest.hpp"

namespace {
// A global pointer to a large object (not identified yet)
inline guest::global<guest::gptr<u8>, 0x0095362c> global_object;
constexpr u32 BYTE_OFFSET = 0x13000 + 0x29d;
}  // namespace

// Reads one byte of the object the global pointer refers to (meaning not known yet).
static u8 read_global_object_byte() {
    return (*global_object)[BYTE_OFFSET];
}
GUEST_EXPORT(0x00305f2c, read_global_object_byte);

GUEST_FUZZ(0x00305f2c, 200, [](guest::Fuzz &f) { f.arguments(); });
