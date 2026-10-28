#include "nes/apu.hpp"

namespace nes {

// note lengths for the length counters, indexed by the top 5 bits of $4003/$4007/$400B/$400F
inline guest::global<u8[32], 0x0013a018> length_table;
inline guest::global<u16[16], 0x0013a078> noise_periods;
inline guest::global<u16[16], 0x0013a098> dmc_rates;

// $4000/$4004: duty, envelope loop / length halt, constant volume, volume or envelope period
static void write_pulse_control(PulseChannel &pulse, u8 value) {
    pulse.duty = value >> 6;
    pulse.envelope_loop = (value >> 5) & 1;
    pulse.length_enabled = !pulse.envelope_loop;
    pulse.constant_volume = (value >> 4) & 1;
    pulse.volume = value & 0xf;
    pulse.envelope_divider = value & 0xf;
    pulse.envelope_start = 1;
}

// $4001/$4005
static void write_pulse_sweep(PulseChannel &pulse, u8 value) {
    pulse.sweep_enabled = value >> 7;
    pulse.sweep_period = (value >> 4) & 7;
    pulse.sweep_negate = (value >> 3) & 1;
    pulse.sweep_shift = value & 7;
    pulse.sweep_reload = 1;
}

// $4003/$4007: timer high bits and length; restarts the note
static void write_pulse_length(PulseChannel &pulse, u8 value) {
    pulse.sequence_step = 0;
    pulse.timer_period = (pulse.timer_period & 0xff) | (value & 7) << 8;
    pulse.envelope_start = 1;
    pulse.length_counter = length_table[value >> 3];
}

// $4015: channel enables (a disabled channel's length counter is cleared)
static void write_status(u8 value) {
    for (int i = 0; i < 2; i++) {
        PulseChannel &pulse = apu->pulse[i];
        pulse.enabled = (value >> i) & 1;
        if (!pulse.enabled) {
            pulse.length_counter = 0;
        }
    }
    apu->triangle.enabled = (value >> 2) & 1;
    if (!apu->triangle.enabled) {
        apu->triangle.length_counter = 0;
    }
    apu->noise.enabled = (value >> 3) & 1;
    if (!apu->noise.enabled) {
        apu->noise.length_counter = 0;
    }

    DmcChannel &dmc = apu->dmc;
    dmc.enabled = (value >> 4) & 1;
    if (!dmc.enabled) {
        dmc.bytes_remaining = 0;
    } else if (dmc.bytes_remaining == 0) {  // start the sample
        dmc.current_address = dmc.sample_address;
        dmc.bytes_remaining = dmc.sample_length;
    }
    dmc.irq_pending = 0;
}

void apu_write_register(u16 address, u8 value) {
    switch (address) {
    case 0x4000: write_pulse_control(apu->pulse[0], value); break;
    case 0x4001: write_pulse_sweep(apu->pulse[0], value); break;
    case 0x4002: apu->pulse[0].timer_period = (apu->pulse[0].timer_period & 0xff00) | value; break;
    case 0x4003: write_pulse_length(apu->pulse[0], value); break;
    case 0x4004: write_pulse_control(apu->pulse[1], value); break;
    case 0x4005: write_pulse_sweep(apu->pulse[1], value); break;
    case 0x4006: apu->pulse[1].timer_period = (apu->pulse[1].timer_period & 0xff00) | value; break;
    case 0x4007: write_pulse_length(apu->pulse[1], value); break;

    case 0x4008: {
        TriangleChannel &triangle = apu->triangle;
        triangle.control = value >> 7;
        triangle.linear_reload_value = value & 0x7f;
        break;
    }
    case 0x400a: apu->triangle.timer_period = (apu->triangle.timer_period & 0xff00) | value; break;
    case 0x400b: {
        TriangleChannel &triangle = apu->triangle;
        u16 period = (triangle.timer_period & 0xff) | (value & 7) << 8;
        triangle.timer = period;
        triangle.timer_period = period;
        triangle.length_counter = length_table[value >> 3];
        triangle.linear_reload = 1;
        break;
    }

    case 0x400c: {
        NoiseChannel &noise = apu->noise;
        noise.envelope_loop = (value >> 5) & 1;
        if (noise.envelope_loop) {
            noise.length_counter = 0;  // (halting clears it here, unlike the pulse channels)
        }
        noise.constant_volume = (value >> 4) & 1;
        noise.volume = value & 0xf;
        noise.envelope_divider = value & 0xf;
        break;
    }
    case 0x400e:
        apu->noise.mode = value >> 7;
        apu->noise.timer_period = noise_periods[value & 0xf];
        break;
    case 0x400f:
        apu->noise.length_counter = value >> 3;  // the raw index: unlike the other channels, no length_table lookup
        apu->noise.envelope_start = 1;
        break;

    case 0x4010:
        apu->dmc.irq_enabled = value >> 7;
        apu->dmc.loop = (value >> 6) & 1;
        apu->dmc.rate = dmc_rates[value & 0xf];
        break;
    case 0x4011: apu->dmc.output_level = value & 0x7f; break;
    case 0x4012: apu->dmc.sample_address = 0xc000 | value << 6; break;
    case 0x4013: apu->dmc.sample_length = (value << 4) | 1; break;

    case 0x4015: write_status(value); break;
    }
}

}  // namespace nes
