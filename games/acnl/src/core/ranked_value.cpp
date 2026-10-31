#include "core/ranked_value.hpp"

void RankedValue::set_info(u8 info_8, u8 info_9) {
    byte_8 = info_8;
    byte_9 = info_9;
    if (rank < 1) {
        rank = 1;
        value = 0;
    }
}
GUEST_EXPORT(0x0051b094, RankedValue::set_info);

void RankedValue::raise(u32 new_rank, u32 new_value) {
    if (rank < new_rank) {
        rank = u8(new_rank);
        value = new_value;
        return;
    }
    if (rank == new_rank && value == 0 && new_value != 0) {
        value = new_value;
    }
}
GUEST_EXPORT(0x0051b0b8, RankedValue::raise);

void RankedValue::clear() {
    rank = 0;
    value = 0;
    byte_8 = 0;
    byte_9 = INITIAL_INFO_9;
}
GUEST_EXPORT(0x0051b0e4, RankedValue::clear);
GUEST_EXPORT(0x00137a0c, RankedValue::clear);
