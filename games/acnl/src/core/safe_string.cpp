#include "core/safe_string.hpp"

// The constructor.
SafeString &construct_safe_string(SafeString &self, guest::gptr<const char> text) {
    self.text = text;
    self.vtable = guest::gptr<const u32>(SafeString::VTABLE);
    return self;
}
GUEST_EXPORT(0x002f6e64, construct_safe_string);

GUEST_FUZZ(0x002f6e64, 200, [](guest::Fuzz &f) {
    guest::gptr<const char> text = nullptr;
    if (f.below(2) != 0) {
        text = f.allocate(16).cast<const char>();
    }
    f.arguments(f.object<SafeString>(), text);
});
