// Queries around the object numbered 4 (functions at 0x005c7408-0x005c795c). What the objects are is not known yet;
// only the fields this code touches are named.
#include "guest/guest.hpp"
#include "item/item.hpp"

namespace {

// The object the global at 0x00aaef18 points to (at 0x234).
struct CurrentRecord {
    u8 unknown_0000[0x6b7a];
    u8 bits_6b7a;  // the low two bits are an index
};
GUEST_OFFSET(CurrentRecord, bits_6b7a, 0x6b7a);

struct GlobalState_aaef18 {
    u8 unknown_000[0x234];
    gptr<CurrentRecord> current;  // may be null
};
GUEST_OFFSET(GlobalState_aaef18, current, 0x234);
inline guest::global<GlobalState_aaef18, 0x00aaef18> state_aaef18;

// An object returned by f_005c33d0.
struct LookedUpObject {
    u8 unknown_000[0x17c];
    u8 flags_17c;  // bit 1: unknown flag
    u8 unknown_17d[0x1a9 - 0x17d];
    u8 kind_1a9;
};
GUEST_OFFSET(LookedUpObject, flags_17c, 0x17c);
GUEST_OFFSET(LookedUpObject, kind_1a9, 0x1a9);

constexpr u8 KIND_74 = 0x74;     // the only kind whose flag is reported (meaning not known yet)
constexpr u8 FLAG_17C_BIT1 = 1u << 1;
constexpr u32 OBJECT_ID = 4;     // the id every function here asks about (meaning not known yet)
constexpr u32 NO_RANGE_ID = 4;   // ids equal to this get no range lookup
constexpr u32 QUERY_21 = 0x21;   // argument of f_005c507c (meaning not known yet)

// A lower and an upper bound filled by f_00685ad4.
struct FloatRange {
    float lower;
    float upper;
};
GUEST_SIZE(FloatRange, 8);

// Constants in the literal pool of f_005c7438
inline guest::global<float, 0x005c74a8> result_out_of_range;
inline guest::global<float, 0x005c74ac> result_below_range;

// The low byte of this read-only word is passed to f_0067eee8 (meaning not known yet).
inline guest::global<u32, 0x00886ab4> request_parameter;

// Flag byte at 0x00aadad4: bit 3 remembers that the lock below succeeded.
inline guest::global<u8, 0x00aadad4> lock_flags;
constexpr u8 LOCKED = 1u << 3;

inline constexpr guest::Function<0x00685ad4, void(gptr<float> lower, gptr<float> upper, u32 id)> get_float_range;
inline constexpr guest::Function<0x005d458c, float(float value)> map_value_in_range;
inline constexpr guest::Function<0x005c33d0, gptr<LookedUpObject>(u32 id, u32 unknown)> look_up_object;
inline constexpr guest::Function<0x005c507c, u32(u32 query, u32 unknown)> query_5c507c;
inline constexpr guest::Function<0x0067eee8,
                                 u32(gptr<LookedUpObject> object, u32 unknown_r1, u32 unknown_r2, u32 unknown_r3,
                                     u32 stack_0, const Item &item, u32 stack_8, u32 stack_c, u32 stack_10,
                                     u32 stack_14, u32 stack_18)>
    request_67eee8;
inline constexpr guest::Function<0x005c6238, u32(u32 id)> try_lock_5c6238;

}  // namespace

// The two-bit index kept in the current record, or 0 without one.
u32 get_index_5c7408() {
    gptr<CurrentRecord> record = state_aaef18->current;
    if (!record) {
        return 0;
    }
    return record->bits_6b7a & 3;
}
GUEST_EXPORT(0x005c7408, get_index_5c7408);

// Maps a value through f_005d458c if it lies within the range given for id; fixed constants otherwise.
float map_value_for_id(u32 id, float value) {
    if (id == NO_RANGE_ID) {
        return *result_out_of_range;
    }
    // The original keeps the range in its frame (lr, d8 and three words of locals) and get_float_range leaves it
    // unwritten for some ids: the stale words that are then read must be the ones at the original's addresses.
    constexpr u32 FRAME_BYTES = 4 + 8 + 12;
    guest::StackFrame frame(FRAME_BYTES);
    gptr<FloatRange> range = frame.at<FloatRange>(0);
    get_float_range(guest::addr_of(range->lower), guest::addr_of(range->upper), id);
    if (!(value <= range->upper)) {
        return *result_out_of_range;
    }
    if (value >= range->lower) {
        return map_value_in_range(value);
    }
    return *result_below_range;
}
GUEST_EXPORT(0x005c7438, map_value_for_id);

// Whether object 4 exists, is of kind 0x74 and has bit 1 of its flags set.
bool object_has_flag_5c74b0() {
    gptr<LookedUpObject> object = look_up_object(OBJECT_ID, 1);
    if (!object) {
        return false;
    }
    if (object->kind_1a9 != KIND_74) {
        return false;
    }
    return (object->flags_17c & FLAG_17C_BIT1) != 0;
}
GUEST_EXPORT(0x005c74b0, object_has_flag_5c74b0);

// Sends request 5/0x1c to object 4 when query 0x21 allows it; whether it succeeded.
bool send_request_5c789c() {
    if (query_5c507c(QUERY_21, 0) == 0) {
        return false;
    }
    gptr<LookedUpObject> object = look_up_object(OBJECT_ID, 0);
    if (!object) {
        return false;
    }
    u32 parameter = *request_parameter & 0xff;
    return request_67eee8(object, 0, 5, 0x1c, 0, *empty_item, 0, 1, 1, parameter, 0) != 0;
}
GUEST_EXPORT(0x005c789c, send_request_5c789c);

// Takes the lock for id 4 once; later calls succeed without asking again.
bool try_lock_once() {
    if (*lock_flags & LOCKED) {
        return true;
    }
    if (try_lock_5c6238(OBJECT_ID) == 0) {
        return false;
    }
    *lock_flags |= LOCKED;
    return true;
}
GUEST_EXPORT(0x005c7920, try_lock_once);
