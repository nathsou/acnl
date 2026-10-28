// Declarations for calling read_global_object_byte (0x00305f2c).
#pragma once

#include "guest/guest.hpp"

inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;

// read_global_object_byte's value that disables the registry lookups
constexpr u32 REGISTRY_DISABLED = 3;
