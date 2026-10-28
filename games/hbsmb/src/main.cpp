// The program: Super Mario Bros.'s code, recompiled from the NES, runs one frame per 3DS vblank. This early build
// emulates the game's CPU, PPU registers and sound registers, but does not draw the PPU's picture yet: the top
// screen is cleared to a fixed color every frame.
#include "ctru.hpp"
#include "libc.hpp"
#include "nes/cpu.hpp"
#include "smb/routines.hpp"

namespace nes {
int load_chr_rom(gptr<const char> path);
}

namespace app {  // (not the global namespace: the host program has its own main)

constexpr u32 TOP_SCREEN_WIDTH = 400, TOP_SCREEN_HEIGHT = 240;

// the top screen's picture, BGR, copied to the framebuffer every frame
inline guest::global<u8[TOP_SCREEN_WIDTH * TOP_SCREEN_HEIGHT * 3], 0x00140bf0> top_screen;
inline guest::global<u8, 0x0013f000> clear_blue;   // (0xff)
inline guest::global<u8, 0x0013f001> clear_red;    // (0xff)
inline guest::global<u8, 0x00140be8> clear_green;  // (0)

static void clear_top_screen() {
    for (u32 i = 0; i < sizeof(*top_screen); i += 3) {
        top_screen[i] = clear_blue;
        top_screen[i + 1] = clear_green;
        top_screen[i + 2] = clear_red;
    }
}

int main() {
    ctru::gfxInitDefault();
    ctru::consoleInit(ctru::GFX_BOTTOM, nullptr);
    ctru::gfxSetDoubleBuffering(ctru::GFX_TOP, false);
    gptr<u8> framebuffer = ctru::gfxGetFramebuffer(ctru::GFX_TOP, ctru::GFX_LEFT, nullptr, nullptr);

    nes::cpu_init();
    smb::start();
    if (nes::load_chr_rom("../Super Mario Bros.nes"_g) != 0) {
        libc::puts("Failed to read CHR ROM"_g);
        return 1;
    }
    libc::puts("Press L + R to exit"_g);

    while (ctru::aptMainLoop()) {
        ctru::hidScanInput();
        smb::non_maskable_interrupt();  // the game's whole frame runs in its vblank handler
        clear_top_screen();
        libc::memcpy(framebuffer, top_screen.ptr(), sizeof(*top_screen));
        if (ctru::hidKeysDown() & (ctru::KEY_L | ctru::KEY_R)) {
            break;
        }
        ctru::gfxFlushBuffers();
        ctru::gfxSwapBuffers();
        ctru::gspWaitForVBlank();
    }
    ctru::gfxExit();
    return 0;
}
GUEST_EXPORT(0x00100948, main);

}  // namespace app
