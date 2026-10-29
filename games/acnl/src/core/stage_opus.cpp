// audio::bgm::StageOpusBase and its subclasses: the objects that pick the background music of a stage (shop, cafe,
// tour...). Only the fields the rewritten code touches are named.
#include "save/save_data.hpp"
#include "guest/guest.hpp"

using guest::gptr;

struct StageOpusBase {
    static constexpr u32 VTABLE = 0x00906458;

    u32 vtable;
    u8 unknown_04;
    u8 flag_05;
    u8 flag_06;
    u8 unknown_07;
    u32 word_08;
    u32 word_0c;
    u8 flag_10;  // starts at 1
    u8 unknown_11[8];
    u8 flag_19;
    u8 flag_1a;
    u8 flag_1b;
    u8 flag_1c;
    u8 flag_1d;
    u8 unknown_1e[0x29 - 0x1e];
    u8 value_29;  // set by StageOpusShop::virtual_18 (meaning not known yet)
};
GUEST_OFFSET(StageOpusBase, flag_05, 5);
GUEST_OFFSET(StageOpusBase, flag_06, 6);
GUEST_OFFSET(StageOpusBase, word_08, 8);
GUEST_OFFSET(StageOpusBase, word_0c, 0xc);
GUEST_OFFSET(StageOpusBase, flag_10, 0x10);
GUEST_OFFSET(StageOpusBase, flag_19, 0x19);
GUEST_OFFSET(StageOpusBase, flag_1a, 0x1a);
GUEST_OFFSET(StageOpusBase, flag_1b, 0x1b);
GUEST_OFFSET(StageOpusBase, flag_1c, 0x1c);
GUEST_OFFSET(StageOpusBase, flag_1d, 0x1d);
GUEST_OFFSET(StageOpusBase, value_29, 0x29);

namespace {

constexpr u8 SHOP_VALUE_IF_SET = 0x18;
constexpr u8 SHOP_VALUE_IF_CLEAR = 0x16;

inline constexpr guest::Function<0x00758e08, u32()> save_data_flag_621cf_bit_2;

}  // namespace

// The constructor: the vtable and the initial flags.
static StageOpusBase &construct_stage_opus_base(StageOpusBase &self) {
    self.flag_05 = 0;
    self.flag_06 = 0;
    self.word_08 = 0;
    self.vtable = StageOpusBase::VTABLE;
    self.word_0c = 0;
    self.flag_10 = 1;
    self.flag_19 = 0;
    self.flag_1a = 0;
    self.flag_1b = 0;
    self.flag_1c = 0;
    self.flag_1d = 0;
    return self;
}
GUEST_EXPORT(0x00585c5c, construct_stage_opus_base);
GUEST_FUZZ(0x00585c5c, 200, [](guest::Fuzz &f) { f.arguments(f.object<StageOpusBase>()); });

// StageOpusShop::virtual_18: picks value_29 from a flag of the save data.
static void shop_pick_value(StageOpusBase &self) {
    u32 result = save_data_flag_621cf_bit_2();
    self.value_29 = result != 0 ? SHOP_VALUE_IF_SET : SHOP_VALUE_IF_CLEAR;
}
GUEST_EXPORT(0x00585cc0, shop_pick_value);
GUEST_FUZZ(0x00585cc0, 200, [](guest::Fuzz &f) { f.arguments(f.object<StageOpusBase>()); });
