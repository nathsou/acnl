// The default values of a block of message settings.
#include "script/message_settings.hpp"

void MessageSettings::reset() {
    byte_00 = 0;
    byte_01 = 0;
    byte_02 = 0;
    byte_03 = 1;
    byte_04 = 1;
    byte_05 = 1;
    byte_06 = 1;
    byte_30 = 0;
    byte_31 = 0;
    byte_32 = 1;
    byte_54 = 1;
    byte_55 = 1;
    byte_56 = INITIAL_BYTE_56;
    byte_5c = 1;
    byte_5d = 0;
    byte_5e = 1;
    byte_68 = 1;
    float_6c = 0.0f;
    byte_80 = 0;
    byte_81 = 0;
    byte_82 = UNSET;
    byte_83 = UNSET;
    byte_84 = UNSET;
}
GUEST_EXPORT(0x005b18a8, MessageSettings::reset);
