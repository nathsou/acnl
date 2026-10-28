// The emulated NES audio processing unit. This build only records what the game writes to the sound registers
// ($4000-$4015); nothing plays it.
#pragma once

#include "guest/guest.hpp"

namespace nes {

struct PulseChannel {
    u8 enabled;
    u8 duty;               // waveform: 12.5%, 25%, 50%, 75%
    u8 sequence_step;
    u8 unknown_03[3];
    u16 timer_period;      // 11 bits
    u8 length_enabled;     // the length counter counts down (not halted)
    u8 length_counter;
    u8 constant_volume;
    u8 envelope_loop;      // also halts the length counter
    u8 envelope_start;
    u8 volume;             // the constant volume, or the envelope's period
    u8 envelope_divider;
    u8 unknown_0f[2];
    u8 sweep_enabled;
    u8 sweep_period;
    u8 sweep_negate;
    u8 sweep_shift;
    u8 sweep_reload;
    u8 unknown_16[2];
};
GUEST_SIZE(PulseChannel, 0x18);

struct TriangleChannel {
    u8 enabled;
    u8 control;            // halts the length counter, keeps reloading the linear counter
    u8 linear_reload_value;
    u8 unknown_03;
    u16 timer;
    u16 timer_period;
    u8 unknown_08;
    u8 length_counter;
    u8 unknown_0a;
    u8 linear_reload;
    u8 unknown_0c[4];
};
GUEST_SIZE(TriangleChannel, 0x10);

struct NoiseChannel {
    u8 enabled;
    u8 unknown_01;
    u8 length_counter;
    u8 constant_volume;
    u8 envelope_loop;
    u8 envelope_start;
    u8 volume;
    u8 envelope_divider;
    u8 unknown_08[4];
    u16 timer_period;
    u8 unknown_0e[2];
    u8 mode;               // short (93-step) sequence
    u8 unknown_11[3];
};
GUEST_SIZE(NoiseChannel, 0x14);

struct DmcChannel {        // delta modulation (samples)
    u8 enabled;
    u8 irq_pending;
    u8 loop;
    u8 unknown_03[3];
    u16 rate;
    u8 output_level;
    u8 unknown_09;
    u16 sample_address;
    u16 sample_length;
    u16 current_address;
    u16 bytes_remaining;
    u8 unknown_12[3];
    u8 irq_enabled;
};

struct Apu {
    PulseChannel pulse[2];
    TriangleChannel triangle;
    NoiseChannel noise;
    DmcChannel dmc;
};
GUEST_OFFSET(Apu, triangle, 0x30);
GUEST_OFFSET(Apu, noise, 0x40);
GUEST_OFFSET(Apu, dmc, 0x54);
GUEST_OFFSET(Apu, dmc.irq_enabled, 0x69);

inline guest::global<Apu, 0x001870f0> apu;

void apu_write_register(u16 address, u8 value);

}  // namespace nes
