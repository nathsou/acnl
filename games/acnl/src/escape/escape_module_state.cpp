#include <cstring>

#include "guest/guest.hpp"

namespace {

// Recompiled code:
inline constexpr guest::Function<0x40301bec, void(gptr<void> target, u32 unknown, u32 flag)> set_block_flag;
inline constexpr guest::Function<0x402a1ed8, void(gptr<void> target, s32 limit, u32 inverted_flag)> set_block_limit;
inline constexpr guest::Function<0x40290bb0, void(gptr<void> target, u32 value)> apply_value_to_block;
inline constexpr guest::Function<0x40290bb8, void(gptr<void> target, u32 value)> apply_value_to_part;
inline constexpr guest::Function<0x403012e0, void(gptr<void> target, u32 a, u32 b, u32 value)> notify_target;

struct EscapeGlobalSettings {
    u8 unknown_00[0x2c];
    u32 value_2c;
};
GUEST_OFFSET(EscapeGlobalSettings, value_2c, 0x2c);
inline guest::global<EscapeGlobalSettings, 0x40369328> escape_settings;

struct EscapePartTarget {
    u8 unknown_00[0x2c8];
    u8 part_2c8;
};

struct EscapeNotifyTarget {
    u8 unknown_00[0x110];
    u32 value_110;
};
GUEST_OFFSET(EscapeNotifyTarget, value_110, 0x110);

struct EscapeNotifyHolder {
    u8 unknown_00[0x48];
    gptr<EscapeNotifyTarget> target;
};
GUEST_OFFSET(EscapeNotifyHolder, target, 0x48);

// Part of the escape module object; only the fields these methods touch are named.
struct EscapeModuleState {
    u8 unknown_000[0x9b4];
    u8 block_9b4;
    u8 unknown_9b5[0xb06 - 0x9b5];
    u8 block_b06;
    u8 unknown_b07[0x124c - 0xb07];
    gptr<EscapePartTarget> part_target;  // may be null
    u8 byte_1250;
    u8 unknown_1251[0x1278 - 0x1251];
    gptr<EscapeNotifyHolder> holder;     // may be null
    u8 unknown_127c[0x138c - 0x127c];
    u8 byte_138c;
    u8 unknown_138d[0x1568 - 0x138d];
    u8 block_1568;
    u8 unknown_1569[0x15c8 - 0x1569];
    u8 byte_15c8;
    u8 unknown_15c9[0x15d0 - 0x15c9];
};
GUEST_OFFSET(EscapeModuleState, block_9b4, 0x9b4);
GUEST_OFFSET(EscapeModuleState, block_b06, 0xb06);
GUEST_OFFSET(EscapeModuleState, part_target, 0x124c);
GUEST_OFFSET(EscapeModuleState, byte_1250, 0x1250);
GUEST_OFFSET(EscapeModuleState, holder, 0x1278);
GUEST_OFFSET(EscapeModuleState, byte_138c, 0x138c);
GUEST_OFFSET(EscapeModuleState, block_1568, 0x1568);
GUEST_OFFSET(EscapeModuleState, byte_15c8, 0x15c8);

}  // namespace

// Switches the module's flag on (non-zero) or off; turning it off also pushes the settings value to two blocks.
static void set_module_flag(EscapeModuleState &self, u32 flag) {
    set_block_flag(guest::addr_of(self.block_b06), 0, flag);
    self.byte_15c8 = u8(flag);
    set_block_limit(guest::addr_of(self.block_1568), 0x7fffffff, flag ^ 1);
    if (flag != 0) {
        return;
    }
    u32 value = escape_settings->value_2c;
    apply_value_to_block(guest::addr_of(self.block_9b4), value);
    if (self.part_target) {
        apply_value_to_part(guest::addr_of(self.part_target->part_2c8), escape_settings->value_2c);
    }
}
GUEST_EXPORT(0x402fe080, set_module_flag);

// Notifies the held target (when it has one) and clears the holder and two bytes.
static void clear_holder(EscapeModuleState &self) {
    gptr<EscapeNotifyHolder> holder = self.holder;
    if (holder) {
        gptr<EscapeNotifyTarget> target = holder->target;
        if (target && target->value_110 != 0) {
            notify_target(target, 0, 0, target->value_110);
        }
    }
    self.holder = nullptr;
    self.byte_1250 = 0;
    self.byte_138c = 0;
}
GUEST_EXPORT(0x402fe108, clear_holder);
