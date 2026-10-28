#include <cstring>

#include "math/matrix34.hpp"

// All twelve values are loaded before any is stored, so overlapping matrices copy like memmove.
gptr<Matrix34> Matrix34::copy_from(const Matrix34 &other) {
    if (&other != this) {
        std::memmove(m, other.m, sizeof(m));
    }
    return guest::addr_of(this);
}
GUEST_EXPORT(0x0013451c, Matrix34::copy_from);

GUEST_FUZZ(0x0013451c, 300, [](guest::Fuzz &f) {
    constexpr u32 FLOATS = 24;  // room for two matrices, to place them overlapping
    auto buffer = f.allocate(FLOATS * sizeof(float));
    f.bytes(buffer, FLOATS * sizeof(float));
    switch (f.below(3)) {
    case 0: {
        auto matrix = buffer.cast<Matrix34>();
        f.arguments(matrix, matrix);
        break;
    }
    case 1: {
        auto destination = buffer.cast<Matrix34>();
        auto source = gptr<Matrix34>(buffer.addr() + 12 * sizeof(float));
        f.arguments(destination, source);
        break;
    }
    default: {
        auto destination = gptr<Matrix34>(buffer.addr() + f.below(13) * sizeof(float));
        auto source = gptr<Matrix34>(buffer.addr() + f.below(13) * sizeof(float));
        f.arguments(destination, source);
        break;
    }
    }
});
