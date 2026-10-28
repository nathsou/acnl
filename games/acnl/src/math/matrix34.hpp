// A 3x4 float matrix (12 floats, row-major), as the game's math code uses for transforms.
#pragma once

#include "guest/guest.hpp"

struct Matrix34 {
    float m[12];

    // Sets the rotation around the X axis by an angle in the game's 16-bit units.
    void set_rotation_x(u16 angle);
    // Multiplies this matrix by a rotation around X (does nothing for angle 0).
    void rotate_x(u16 angle);
};
GUEST_SIZE(Matrix34, 0x30);
