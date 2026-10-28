// The game's tile graphics come from the player's own Super Mario Bros. ROM (an iNES file on the SD card); the
// program itself is built in (see prg_rom in bus.cpp).
#include "libc.hpp"
#include "nes/cpu.hpp"
#include "nes/ppu.hpp"

namespace nes {

constexpr u32 INES_HEADER_SIZE = 16;
constexpr u32 PRG_ROM_SIZE = 0x8000;  // Super Mario Bros.: 32 KiB of program, then 8 KiB of tiles
constexpr u32 CHR_ROM_SIZE = 0x2000;

static void report(gptr<const char> message, u32 length) { libc::fwrite(message, 1, length, libc::stderr_()); }

// Reads the CHR ROM out of an iNES file into the PPU. Returns 0, or 1 on error (after printing why).
int load_chr_rom(gptr<const char> path) {
    gptr<libc::FILE> file = libc::fopen(path, "rb"_g);
    if (!file) {
        libc::fprintf(libc::stderr_(), "Error: Could not open rom file: %s\n"_g, path);
        return 1;
    }
    struct Buffers {
        u8 header[INES_HEADER_SIZE];
        u8 chr[CHR_ROM_SIZE];
    };
    guest::StackObject<Buffers> buffers;
    gptr<u8> header = guest::addr_of(buffers->header[0]);
    int result = 1;
    if (libc::fread(header, 1, INES_HEADER_SIZE, file) != INES_HEADER_SIZE) {
        report("Error: Could not read NES header\n"_g, 33);
    } else if (header[0] != 'N' || header[1] != 'E' || header[2] != 'S' || header[3] != 0x1a) {
        report("Error: Invalid NES ROM format\n"_g, 30);
    } else if (libc::fseek(file, INES_HEADER_SIZE + PRG_ROM_SIZE, libc::SEEK_FROM_START) != 0) {
        report("Error: Could not seek to CHR ROM\n"_g, 33);
    } else if (libc::fread(guest::addr_of(buffers->chr[0]), 1, CHR_ROM_SIZE, file) != CHR_ROM_SIZE) {
        report("Error: Could not read CHR ROM data\n"_g, 35);
    } else {
        ppu_init(guest::addr_of(buffers->chr[0]));
        result = 0;
    }
    libc::fclose(file);
    return result;
}
GUEST_EXPORT(0x001200dc, load_chr_rom);

}  // namespace nes
