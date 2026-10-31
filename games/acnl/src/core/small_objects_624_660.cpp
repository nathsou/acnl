// Small objects and accessors from 0x00624000 to 0x00661000: byte tables kept by the session, the target cell of the
// walkers, a few flag checks and the angle of the camera's line of sight.
#include "graphics/hemisphere_light.hpp"
#include "guest/guest.hpp"
#include "item/item.hpp"
#include "net/net_session.hpp"
#include "save/player.hpp"

using guest::gptr;

s16 angle_between_points(const Float3 &from, const Float3 &to);

namespace {

constexpr u8 SLOT_VALUE_LIMIT = 0xa5;
constexpr u8 COUNT_VALUE_LIMIT = 4;
constexpr u32 SLOT_COUNT = 4;
constexpr u8 STATE_7 = 7;
constexpr u8 STATE_A = 0xa;
constexpr u32 ITEM_BYTE_0F_VALUE = 8;
constexpr u32 FIRST_MODE = 0;
constexpr u32 SECOND_MODE = 1;
constexpr u32 THIRD_MODE = 3;
constexpr u32 FIFTH_MODE = 5;
constexpr u32 CAMERA_FIRST_POINT = 0x24;
constexpr u32 CAMERA_SECOND_POINT = 0x30;

inline constexpr guest::Function<0x007795ac, void(gptr<void> self)> store_constants_7795ac;
inline constexpr guest::Function<0x006a5f0c, void(Float3 &out, s32 cell_x, s32 cell_z)> cell_corner;
inline constexpr guest::Function<0x00624c78, u32(u32 index)> bit_for_index;
inline constexpr guest::Function<0x003117bc, u32(const Item &item)> item_data_byte_0f;
inline constexpr guest::Function<0x00305f2c, u32()> read_global_object_byte;
inline constexpr guest::Function<0x002f74c8, u8()> read_global_byte_2;
inline constexpr guest::Function<0x002f74e0, u32(u32 mask, u32 index)> table_entry_has_all_bits;
inline constexpr guest::Function<0x00300904, u32()> main_object_value;
inline constexpr guest::Function<0x002fb94c, gptr<SavePlayer>()> get_current_player;
inline guest::global<Item, 0x0094f31c> item_94f31c;
inline guest::global<Item, 0x0094f320> item_94f320;
inline guest::global<Item[0x80], 0x0098b080> item_row_98b080;
inline guest::global<u32, 0x0098b280> row_end_value;

constexpr u32 FLAG_8000 = 0x8000;
constexpr u32 FLAG_2000 = 0x2000;
constexpr u8 KIND_49 = 0x49;
constexpr u8 PLAYER_FLAG_6 = 0x40;
constexpr u8 PLAYER_FLAG_5 = 0x20;
constexpr u32 SEVENTH_MODE = 7;
constexpr u32 SIXTH_MODE = 6;
constexpr u32 WALK_MODE_2 = 2;
constexpr u32 ROW_ITEM_COUNT = 0x80;

// Two byte tables of four entries each.
struct ByteTables {
    u8 first[SLOT_COUNT];
    u8 second[SLOT_COUNT];
};
GUEST_SIZE(ByteTables, 8);

// An object whose bytes 8-11 are cleared after the constants are stored.
struct ConstantsHolder {
    u8 unknown_00[8];
    u8 bytes_08[4];
};
GUEST_OFFSET(ConstantsHolder, bytes_08, 8);

// A walker with a start cell, a mode and the world position of its target cell.
struct CellWalker {
    u8 unknown_000[0x47c];
    u32 start_x;
    u32 start_z;
    u8 unknown_484[0x870 - 0x484];
    u8 mode_870;
    u8 unknown_871[3];
    u32 from_x;
    u32 from_z;
    float target_x;
    float target_z;
};
GUEST_OFFSET(CellWalker, start_x, 0x47c);
GUEST_OFFSET(CellWalker, mode_870, 0x870);
GUEST_OFFSET(CellWalker, from_x, 0x874);
GUEST_OFFSET(CellWalker, target_x, 0x87c);

struct CameraHolder {
    u8 unknown_000[0x1a4];
    gptr<u8> camera;
};
GUEST_OFFSET(CameraHolder, camera, 0x1a4);
inline guest::global<gptr<CameraHolder>, 0x0094edd8> camera_holder;

void set_cell_target(CellWalker &self, u32 mode, s32 cell_x, s32 cell_z) {
    self.mode_870 = u8(mode);
    self.from_x = self.start_x;
    self.from_z = self.start_z;
    guest::StackObject<Float3> corner;
    cell_corner(*corner, cell_x, cell_z);
    self.target_x = corner->v[0];
    self.target_z = corner->v[2];
}

}  // namespace

// Stores the value in the first table when the session has no station (values above 0xa5 and indices of 4 and more are
// ignored).
void set_first_table_entry(ByteTables &tables, u32 index, u32 value) {
    if ((*net_session)->station() != 0) {
        return;
    }
    if (value <= SLOT_VALUE_LIMIT && index < SLOT_COUNT) {
        tables.first[index] = u8(value);
    }
}
GUEST_EXPORT(0x00625ba4, set_first_table_entry);

// The same for the second table (values above 4 are ignored).
void set_second_table_entry(ByteTables &tables, u32 index, u32 value) {
    if ((*net_session)->station() != 0) {
        return;
    }
    if (value <= COUNT_VALUE_LIMIT && index < SLOT_COUNT) {
        tables.second[index] = u8(value);
    }
}
GUEST_EXPORT(0x00625be0, set_second_table_entry);

// Whether the session's state is 0xa, or 7 while it has a station.
bool session_state_is_special() {
    u8 state = (*net_session)->state_22c;
    if ((*net_session)->station() != 0 && state == STATE_7) {
        return true;
    }
    return state == STATE_A;
}
GUEST_EXPORT(0x00626208, session_state_is_special);

// Whether the session's bits at 0x234 include the bit of its station.
bool session_station_bit_set() {
    gptr<NetSession> session = *net_session;
    return (bit_for_index(session->station_bits) & session->bits_234) != 0;
}
GUEST_EXPORT(0x006267dc, session_station_bit_set);

void construct_constants_holder(ConstantsHolder &self) {
    store_constants_7795ac(guest::addr_of(self).cast<void>());
    for (u8 &byte : self.bytes_08) {
        byte = 0;
    }
}
GUEST_EXPORT(0x00628ce4, construct_constants_holder);

// Whether the registry is disabled.
bool registry_is_disabled() {
    return read_global_object_byte() == 3;
}
GUEST_EXPORT(0x0064c5e0, registry_is_disabled);

// Whether the item's data byte 0x0f is 8.
bool item_data_byte_0f_is_8(const Item &item) {
    return item_data_byte_0f(item) == ITEM_BYTE_0F_VALUE;
}
GUEST_EXPORT(0x0064ce10, item_data_byte_0f_is_8);

// The angle between the camera's two points; 0 without a camera holder.
u32 camera_angle() {
    gptr<CameraHolder> holder = *camera_holder;
    if (holder == nullptr) {
        return 0;
    }
    gptr<u8> camera = holder->camera;
    Float3 &from = *(camera + CAMERA_FIRST_POINT).cast<Float3>();
    Float3 &to = *(camera + CAMERA_SECOND_POINT).cast<Float3>();
    return u16(angle_between_points(from, to));
}
GUEST_EXPORT(0x0065473c, camera_angle);

void set_cell_target_5(CellWalker &self, s32 x, s32 z) { set_cell_target(self, FIFTH_MODE, x, z); }
void set_cell_target_0(CellWalker &self, s32 x, s32 z) { set_cell_target(self, FIRST_MODE, x, z); }
void set_cell_target_1(CellWalker &self, s32 x, s32 z) { set_cell_target(self, SECOND_MODE, x, z); }
void set_cell_target_3(CellWalker &self, s32 x, s32 z) { set_cell_target(self, THIRD_MODE, x, z); }
GUEST_EXPORT(0x00659630, set_cell_target_5);
GUEST_EXPORT(0x0065ddb8, set_cell_target_0);
GUEST_EXPORT(0x0065ddfc, set_cell_target_1);
GUEST_EXPORT(0x006606e0, set_cell_target_3);

void set_cell_target_7(CellWalker &self, s32 x, s32 z) { set_cell_target(self, SEVENTH_MODE, x, z); }
void set_cell_target_6(CellWalker &self, s32 x, s32 z) { set_cell_target(self, SIXTH_MODE, x, z); }
GUEST_EXPORT(0x0066a18c, set_cell_target_7);
GUEST_EXPORT(0x0066a284, set_cell_target_6);

// Copies the two global items out.
void copy_global_items(Item &first, Item &second) {
    copy_item(first, *item_94f31c);
    copy_item(second, *item_94f320);
}
GUEST_EXPORT(0x00692ad4, copy_global_items);

// Empties both global items.
void clear_global_items() {
    copy_item(*item_94f31c, copy_item(*item_94f320, *empty_item));
}
GUEST_EXPORT(0x00693778, clear_global_items);

// Empties the row of 128 items and clears the word after it.
void clear_global_item_row() {
    for (u32 i = 0; i < ROW_ITEM_COUNT; i++) {
        copy_item((*item_row_98b080)[i], *empty_item);
    }
    *row_end_value = 0;
}
GUEST_EXPORT(0x00693570, clear_global_item_row);

// Whether the global byte's table entry has the flag 0x8000 but neither is kind 0x49 nor has the flag 0x2000.
bool global_kind_has_flag_8000_only() {
    if (table_entry_has_all_bits(FLAG_8000, read_global_byte_2()) == 0) {
        return false;
    }
    if (read_global_byte_2() == KIND_49) {
        return false;
    }
    return table_entry_has_all_bits(FLAG_2000, read_global_byte_2()) == 0;
}
GUEST_EXPORT(0x0068c3d8, global_kind_has_flag_8000_only);

// True when the main object has no value, the current player exists, flag 6 of byte 0x5712 is clear and flag 5 of
// byte 0x5713 is set.
bool current_player_flag_5713_bit_5() {
    if (main_object_value() != 0) {
        return false;
    }
    gptr<SavePlayer> player = get_current_player();
    if (player == nullptr || (player->flags_5712 & PLAYER_FLAG_6) != 0) {
        return false;
    }
    return (player->flags_5713 & PLAYER_FLAG_5) != 0;
}
GUEST_EXPORT(0x006986d4, current_player_flag_5713_bit_5);

void set_cell_target_2(CellWalker &self, s32 x, s32 z) { set_cell_target(self, WALK_MODE_2, x, z); }
GUEST_EXPORT(0x00660724, set_cell_target_2);
