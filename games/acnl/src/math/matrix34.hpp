// A 3x4 float matrix (12 floats, row-major), as the game's math code uses for transforms.
#pragma once

#include "guest/guest.hpp"

struct Matrix34 {
    float m[12];

    // Sets the rotation around the X axis by an angle in the game's 16-bit units.
    void set_rotation_x(u16 angle);
    // Multiplies this matrix by a rotation around X (does nothing for angle 0).
    void rotate_x(u16 angle);
    // The same for the Y and Z axes.
    void set_rotation_y(u16 angle);
    void rotate_y(u16 angle);
    void rotate_z(u16 angle);
    // Rotates around Y, then X, then Z (one after the other, each multiplied on the right).
    void rotate_y_x_z(u16 x_angle, u16 y_angle, u16 z_angle);
    // Sets a rotation around Z, then rotates around Y and X.
    void set_rotation_z_then_y_x(u16 x_angle, u16 y_angle, u16 z_angle);
    // The assignment operator: copies the other matrix (bit for bit) unless it is this one. Returns this.
    gptr<Matrix34> copy_from(const Matrix34 &other);
};
GUEST_SIZE(Matrix34, 0x30);
