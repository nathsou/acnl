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
