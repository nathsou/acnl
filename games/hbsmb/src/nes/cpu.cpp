#include "nes/cpu.hpp"

namespace nes {

// Power-on state: registers and flags cleared, the stack pointer at the top of page 1, the controller unlatched.
// (RAM keeps whatever it holds.)
void cpu_init() {
    cpu->a = cpu->x = cpu->y = 0;
    cpu->sp = 0xff;
    cpu->carry = cpu->zero = cpu->negative = 0;
    cpu->controller1 = 0;
    cpu->strobe = 0;
    cpu->controller_bit = 0;
}
GUEST_EXPORT(0x00120278, cpu_init);

}  // namespace nes
