// Settings of the message code with a table of 24-byte style records: resetting them, and setting one byte or group
// of bytes of a record.
#include "script/message_settings.hpp"

using guest::gptr;

// One entry of the style table (what the bytes stand for is not known yet).
struct MessageStyleRecord {
    static constexpr u8 DEFAULT_VALUE = 0xe;  // meaning not known yet
    static constexpr u8 UNSET = 0xff;

    u8 byte_00;
    u8 unknown_01[3];
    u8 byte_04;
    u8 byte_05;
    u8 byte_06;
    u8 unknown_07[2];
    u8 byte_09;
    u8 unknown_0a[3];
    u8 byte_0d;
    u8 byte_0e;
    u8 byte_0f;
    u8 unknown_10[2];
    u8 byte_12;
    u8 byte_13;
    u8 byte_14;
    u8 byte_15;
    u8 unknown_16[2];
};
GUEST_OFFSET(MessageStyleRecord, byte_04, 4);
GUEST_OFFSET(MessageStyleRecord, byte_09, 9);
GUEST_OFFSET(MessageStyleRecord, byte_0d, 0xd);
GUEST_OFFSET(MessageStyleRecord, byte_12, 0x12);
GUEST_SIZE(MessageStyleRecord, 0x18);

// Message settings followed by one style record.
struct StyledMessageSettings : MessageSettings {
    u8 unknown_88[0x4f0 - 0x88];
    MessageStyleRecord style;

    void reset();
};
GUEST_OFFSET(StyledMessageSettings, style, 0x4f0);

// The base settings, then the style record in its default state.
void StyledMessageSettings::reset() {
    MessageSettings::reset();
    style.byte_12 = MessageStyleRecord::UNSET;
    style.byte_13 = MessageStyleRecord::UNSET;
    style.byte_14 = MessageStyleRecord::UNSET;
    style.byte_15 = MessageStyleRecord::UNSET;
    style.byte_00 = 0;
    style.byte_04 = MessageStyleRecord::DEFAULT_VALUE;
    style.byte_05 = MessageStyleRecord::DEFAULT_VALUE;
    style.byte_06 = MessageStyleRecord::DEFAULT_VALUE;
    style.byte_09 = 0;
    style.byte_0d = MessageStyleRecord::DEFAULT_VALUE;
    style.byte_0e = MessageStyleRecord::DEFAULT_VALUE;
    style.byte_0f = MessageStyleRecord::DEFAULT_VALUE;
}
GUEST_EXPORT(0x005b20d0, StyledMessageSettings::reset);

void set_style_byte_04(gptr<MessageStyleRecord> styles, u32 index, u32 value) {
    styles[index].byte_04 = u8(value);
}
GUEST_EXPORT(0x005b2130, set_style_byte_04);

void set_style_byte_00(gptr<MessageStyleRecord> styles, u32 index, u32 value) {
    styles[index].byte_00 = u8(value);
}
GUEST_EXPORT(0x005b2140, set_style_byte_00);

void set_style_byte_0d(gptr<MessageStyleRecord> styles, u32 index, u32 value) {
    styles[index].byte_0d = u8(value);
}
GUEST_EXPORT(0x005b214c, set_style_byte_0d);

void set_style_byte_09(gptr<MessageStyleRecord> styles, u32 index, u32 value) {
    styles[index].byte_09 = u8(value);
}
GUEST_EXPORT(0x005b215c, set_style_byte_09);

// Sets the four bytes at 0x12 (the last two arrive on the stack).
void set_style_bytes_12(gptr<MessageStyleRecord> styles, u32 index, u32 byte_12, u32 byte_13, u32 byte_14,
                        u32 byte_15) {
    MessageStyleRecord &style = styles[index];
    style.byte_12 = u8(byte_12);
    style.byte_13 = u8(byte_13);
    style.byte_14 = u8(byte_14);
    style.byte_15 = u8(byte_15);
}
GUEST_EXPORT(0x005b216c, set_style_bytes_12);
