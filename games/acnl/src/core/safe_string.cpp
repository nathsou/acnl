#include "core/safe_string.hpp"

// The constructor.
SafeString &construct_safe_string(SafeString &self, guest::gptr<const char> text) {
    self.text = text;
    self.vtable = guest::gptr<const u32>(SafeString::VTABLE);
    return self;
}
GUEST_EXPORT(0x002f6e64, construct_safe_string);
