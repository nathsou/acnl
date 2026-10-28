#include "core/encrypted_int.hpp"

#include "arm.hpp"
#include "core/random.hpp"

u32 EncryptedInt::get() const {
    if (checksum != checksum_of(scrambled)) {
        return 0;
    }
    u32 rotated = arm::rotate_left(scrambled, 32 - ROTATION_BASE - rotation);  // right by rotation + ROTATION_BASE
    return rotated - (offset + KEY);
}
GUEST_EXPORT(0x00303660, EncryptedInt::get);

EncryptedInt EncryptedInt::make(u32 value, u16 offset, u8 rotation) {
    EncryptedInt e;
    e.offset = offset;
    e.rotation = rotation;
    e.scrambled = arm::rotate_left(value + offset + KEY, rotation + ROTATION_BASE);
    e.checksum = checksum_of(e.scrambled);
    return e;
}

void EncryptedInt::set(u32 value) {
    offset = random_below(0x10000);  // any 16-bit value
    rotation = random_below(ROTATIONS);
    scrambled = arm::rotate_left(value + offset + KEY, rotation + ROTATION_BASE);
    checksum = checksum_of(scrambled);
}
GUEST_EXPORT(0x00303534, EncryptedInt::set);

void EncryptedInt::add(u32 amount, u32 max) {
    u32 value = get();
    if (u64(value) + amount > max) {
        set(max);
    } else {
        set(value + amount);
    }
}
GUEST_EXPORT(0x00613c8c, EncryptedInt::add);

void EncryptedInt::subtract(u32 amount) {
    u32 value = get();
    set(amount > value ? 0 : value - amount);
}
GUEST_EXPORT(0x00613d38, EncryptedInt::subtract);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A scrambled value with a valid checksum most of the time, any rotation (corrupted data included)
static gptr<EncryptedInt> some_encrypted_int(guest::Fuzz &f) {
    auto value = f.object<EncryptedInt>();
    if (f.below(4) != 0) {
        value->checksum = EncryptedInt::checksum_of(value->scrambled);
    }
    if (f.below(2) != 0) {
        value->rotation %= EncryptedInt::ROTATIONS;
    }
    return value;
}

GUEST_FUZZ(0x00303660, 400, [](guest::Fuzz &f) { f.arguments(some_encrypted_int(f)); });
GUEST_FUZZ(0x00303534, 200, [](guest::Fuzz &f) { f.arguments(f.object<EncryptedInt>(), f.number()); });
GUEST_FUZZ(0x00613c8c, 400, [](guest::Fuzz &f) {
    f.arguments(some_encrypted_int(f), f.number(), f.pick<u32>({99'999, 999'999'999, 0xffffffff, f.number()}));
});
GUEST_FUZZ(0x00613d38, 400, [](guest::Fuzz &f) { f.arguments(some_encrypted_int(f), f.number()); });
