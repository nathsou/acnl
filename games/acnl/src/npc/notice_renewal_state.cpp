// A small state object whose modes start (anonymous namespace)::NoticeRenewal notices. Its owner is not known
// yet; only the layout below is visible from the code.
#include "core/encrypted_int.hpp"
#include "guest/guest.hpp"

namespace {

inline constexpr guest::Function<0x002fae84, u32()> get_base_2fae84;
inline constexpr guest::Function<0x002fb328, u32()> get_word_95bf74;
inline constexpr guest::Function<0x006f39dc, void(u32 object, u32 value)> unknown_6f39dc;
inline constexpr guest::Function<0x003035a4, void(u32 object, u32 value)> unknown_3035a4;
inline constexpr guest::Function<0x001e4ea0, u32(u32 self, u32 kind)> construct_notice_renewal;

// Offsets into the block get_base_2fae84() returns (what lives there is not known yet).
constexpr u32 NOTICE_RENEWAL_OFFSET = 0x621d0;
constexpr u32 OBJECT_6214F_OFFSET = 0x6214f;
constexpr u32 OBJECT_7170C_OFFSET = 0x7170c;
// get_word_95bf74() points this far before the same block
constexpr u32 WORD_95BF74_BIAS = 0x80;
// the byte in the NoticeRenewal object holding its kind
constexpr u32 NOTICE_RENEWAL_KIND_OFFSET = 0x14;

// a table in rodata, indexed by the mode
inline guest::global<u8[256], 0x0088f46f> mode_table;

}  // namespace

struct NoticeRenewalState {
    u32 unknown_00;
    u32 unknown_04;
    EncryptedInt counter_08;
    u8 mode;

    void set_mode(u32 mode);
    u8 mode_table_value() const;
};
GUEST_OFFSET(NoticeRenewalState, unknown_04, 0x04);
GUEST_OFFSET(NoticeRenewalState, counter_08, 0x08);
GUEST_OFFSET(NoticeRenewalState, mode, 0x10);

// The rodata table's entry for the current mode.
u8 NoticeRenewalState::mode_table_value() const {
    return mode_table[mode];
}
GUEST_EXPORT(0x00305ffc, NoticeRenewalState::mode_table_value);

// Enters a mode (0-4; other values are only stored): modes 0-2 reset the counter, modes 3 and 4 construct a
// NoticeRenewal of that kind unless one of that kind is already there.
void NoticeRenewalState::set_mode(u32 new_mode) {
    switch (new_mode) {
    case 0:
        unknown_04 = 30;
        unknown_00 = 5;
        counter_08.set(0);
        break;
    case 1:
        unknown_00 = 1;
        counter_08.set(0);
        break;
    case 2:
        unknown_00 = 0;
        counter_08.set(0);
        unknown_6f39dc(get_base_2fae84() + OBJECT_6214F_OFFSET, 1);
        unknown_3035a4(get_base_2fae84() + OBJECT_7170C_OFFSET, 13);
        break;
    case 3:
    case 4: {
        u32 notice = get_word_95bf74() + WORD_95BF74_BIAS + NOTICE_RENEWAL_OFFSET;
        u8 current_kind = *gptr<u8>(notice + NOTICE_RENEWAL_KIND_OFFSET);
        if (current_kind != new_mode) {
            construct_notice_renewal(get_base_2fae84() + NOTICE_RENEWAL_OFFSET, new_mode);
        }
        break;
    }
    default:
        break;
    }
    mode = u8(new_mode);
}
GUEST_EXPORT(0x0030608d, NoticeRenewalState::set_mode);

GUEST_FUZZ(0x00305ffc, 300, [](guest::Fuzz &f) { f.arguments(f.object<NoticeRenewalState>()); });
GUEST_FUZZ(0x0030608d, 300, [](guest::Fuzz &f) {
    // modes 2-4 change global game state through other code; only the self-contained ones are fuzzed
    f.arguments(f.object<NoticeRenewalState>(), f.pick<u32>({0, 1, 5, 6, 0xff, 0x100, 0xffffffff, f.number() | 8}));
});
