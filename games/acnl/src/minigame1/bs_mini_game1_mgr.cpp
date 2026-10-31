#include "minigame1/bs_mini_game1_mgr.hpp"

#include <cstring>

namespace {

// Still recompiled code (meanings not known yet):
inline constexpr guest::Function<0x403d0558, u32(u32 object)> init_sub_object;
inline constexpr guest::Function<0x403d0560, u32(u32 object)> sub_370_step_1;
inline constexpr guest::Function<0x403d0568, u32(u32 object)> sub_370_step_2;
inline constexpr guest::Function<0x403d0570, u32(u32 flags)> apply_flags;
inline constexpr guest::Function<0x403d0578, u32(u32 object)> sub_370_step_3;

}  // namespace

// Forgets the running manager. (Leaves 0 in r0.)
static u32 clear_bs_mini_game1_instance() {
    bs_mini_game1_instance = nullptr;
    return 0;
}
GUEST_EXPORT(0x403d88d4, clear_bs_mini_game1_instance);

// The constructor: zeroes the state, constructs the sub-object and registers itself as the running manager.
BsMiniGame1Mgr &construct_bs_mini_game1_mgr(BsMiniGame1Mgr &self) {
    for (u32 &word : self.words_00) {
        word = 0;
    }
    self.byte_23 = 0;
    self.byte_24 = 1;
    self.byte_25 = 0;
    self.halfword_26 = 0;
    self.word_28 = 0;
    self.word_2c = 0;
    self.word_34 = 0;
    self.word_38 = 0;
    for (u8 &byte : self.bytes_3c) {
        byte = 0;
    }
    u32 sub = init_sub_object(guest::addr_of(self.unknown_44).addr());
    guest::gptr<BsMiniGame1Mgr> object(sub - 0x44);
    object->pointer_5c = nullptr;
    bs_mini_game1_instance = object;
    return *object;
}
GUEST_EXPORT(0x403d895c, construct_bs_mini_game1_mgr);

// Sets or clears FLAG_8 between steps on the sub-object at 0x370, then runs the final step on it.
u32 BsMiniGame1Mgr::set_flag_8(u32 enable) {
    u32 sub = guest::addr_of(unknown_370).addr();
    sub_370_step_1(sub);
    sub_370_step_2(sub);
    u32 flags = flags_444;
    if (enable != 0) {
        flags |= FLAG_8;
    } else {
        flags &= ~FLAG_8;
    }
    flags_444 = flags;
    apply_flags(flags);
    return sub_370_step_3(sub);
}
GUEST_EXPORT(0x403d89e8, BsMiniGame1Mgr::set_flag_8);
