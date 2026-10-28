// Code around the CFL (Mii face library) database: the "$CFLDB:" archive holding CFL_DB.dat.
#include "guest/guest.hpp"

namespace {

// The polymorphic object kept at 0x0097518c + 8 (its class is not known yet).
struct CflDbObject {
    u32 vtable;
    u8 unknown_04[0xe];
    u8 flag_12;
    u8 flag_13;

    static constexpr u32 RELEASE_SLOT = 1;  // vtable slot called when the state is torn down
};
GUEST_OFFSET(CflDbObject, flag_12, 0x12);
GUEST_OFFSET(CflDbObject, flag_13, 0x13);

// The large work area kept at 0x0097518c + 0x10.
struct CflDbWork {
    u8 unknown_0000[0xc820];
    u8 region_c820[0xe4ac - 0xc820];  // start of a REGION_SIZE block handed to f_00139bb0
    u8 flag_e4ac;
    u8 region_e4ad[0xe4c0 - 0xe4ad];
    u8 flag_e4c0;
    u8 flag_e4c1;
    u8 unknown_e4c2[2];
    u32 unknown_e4c4;
    u8 unknown_e4c8[0x10];
    u32 callback_e4d8;  // guest function address
    u8 unknown_e4dc[4];
    u32 unknown_e4e0;

    static constexpr u32 REGION_SIZE = 0x1ca0;  // 0xc820..0xe4c0
};
GUEST_OFFSET(CflDbWork, region_c820, 0xc820);
GUEST_OFFSET(CflDbWork, flag_e4ac, 0xe4ac);
GUEST_OFFSET(CflDbWork, flag_e4c0, 0xe4c0);
GUEST_OFFSET(CflDbWork, flag_e4c1, 0xe4c1);
GUEST_OFFSET(CflDbWork, unknown_e4c4, 0xe4c4);
GUEST_OFFSET(CflDbWork, callback_e4d8, 0xe4d8);
GUEST_OFFSET(CflDbWork, unknown_e4e0, 0xe4e0);

// The global at 0x0097518c.
struct CflDbState {
    u8 unknown_00[3];
    u8 archive_mounted;  // "$CFLDB:" is unmounted (and this cleared) on teardown
    u8 unknown_04[4];
    gptr<CflDbObject> object;
    u32 unknown_0c;
    gptr<CflDbWork> work;
};
GUEST_OFFSET(CflDbState, archive_mounted, 3);
GUEST_OFFSET(CflDbState, object, 8);
GUEST_OFFSET(CflDbState, unknown_0c, 0xc);
GUEST_OFFSET(CflDbState, work, 0x10);
inline guest::global<CflDbState, 0x0097518c> cfl_db_state;

// The sub-object 4 bytes into what f_0013d138 returns.
struct CflSubObject {
    u8 unknown_00[0xa0];
    u32 unknown_a0;
    u32 unknown_a4;
    u8 flag_a8;
};
GUEST_OFFSET(CflSubObject, unknown_a0, 0xa0);
GUEST_OFFSET(CflSubObject, unknown_a4, 0xa4);
GUEST_OFFSET(CflSubObject, flag_a8, 0xa8);
constexpr u32 SUB_OBJECT_OFFSET = 4;

// Guest strings and functions used by address
constexpr gptr<const char> ARCHIVE_NAME{0x008a2c6c};  // "$CFLDB:"
constexpr gptr<const char> OLD_DB_PATH{0x008a2c74};   // "$CFLDB:/CFL_OldDB.dat"
constexpr gptr<const char> DB_PATH{0x008a2c8c};       // "$CFLDB:/CFL_DB.dat"
constexpr u32 WORK_CALLBACK = 0x00139cf8;
constexpr u32 OBJECT_CALLBACK = 0x00139ca0;
constexpr u32 RESULT_10 = 10;          // a result of f_00139c30 that needs f_00139a90 (meaning not known yet)
constexpr u32 NO_FLAG = 0xffffffff;    // third argument of f_00139744 when flag_e4c1 is set or the old file is absent
constexpr u32 FLAG_E4C0_ARG = 0xe4c0;  // what the original passes instead when flag_e4c0 is set (the flag's offset)

inline constexpr guest::Function<0x0013d028, u32()> cfl_query_13d028;
inline constexpr guest::Function<0x001396a4, u32()> cfl_query_1396a4;
inline constexpr guest::Function<0x0013d138, u32()> cfl_object_13d138;
inline constexpr guest::Function<0x00139674, u32(u32 which)> cfl_query_139674;
inline constexpr guest::Function<0x00139bb0, void(u32 unknown, gptr<void> region, u32 size)> cfl_setup_region_139bb0;
inline constexpr guest::Function<0x001396c0, void(gptr<CflDbObject> object, u32 callback)> cfl_set_callback_1396c0;
inline constexpr guest::Function<0x00139c30, u32()> cfl_run_139c30;
inline constexpr guest::Function<0x00139a90, void(u32 result)> cfl_handle_result_139a90;
inline constexpr guest::Function<0x0013959c, u32(gptr<const char> path)> cfl_file_exists_13959c;
inline constexpr guest::Function<0x00139744, void(gptr<const char> from, gptr<const char> to, u32 flag)>
    cfl_move_file_139744;
inline constexpr guest::Function<0x00135520, void(gptr<const char> archive)> cfl_unmount_135520;

gptr<CflSubObject> cfl_sub_object() {
    return gptr<CflSubObject>(cfl_object_13d138() + SUB_OBJECT_OFFSET);
}

}  // namespace

// Clears the sub-object's fields when the CFL state allows it. Returns false when it did, true otherwise.
bool cfl_reset_sub_object() {
    if (!cfl_query_13d028()) {
        return true;
    }
    if (cfl_query_1396a4()) {
        return true;
    }
    if (!cfl_query_13d028()) {
        return true;
    }
    gptr<CflSubObject> sub = cfl_sub_object();
    if (!sub) {
        return true;
    }
    sub->flag_a8 = 0;
    sub->unknown_a4 = 0;
    sub->unknown_a0 = 0;
    return false;
}
GUEST_EXPORT(0x00134cdc, cfl_reset_sub_object);

// The sub-object's flag_a8, or 0 when it is not available.
u8 cfl_sub_object_flag() {
    if (!cfl_query_13d028()) {
        return 0;
    }
    if (!cfl_query_13d028()) {
        return 0;
    }
    gptr<CflSubObject> sub = cfl_sub_object();
    if (!sub) {
        return 0;
    }
    return sub->flag_a8;
}
GUEST_EXPORT(0x00134d30, cfl_sub_object_flag);

// Tears down the CFL database state. With skip_save 0 it first runs the pending work (when flag_e4ac is set) and
// moves CFL_OldDB.dat onto CFL_DB.dat as needed; then it releases the object and unmounts the archive.
void cfl_db_shutdown(u32 skip_save) {
    CflDbState &state = cfl_db_state;
    if (skip_save == 0) {
        gptr<CflDbWork> work;
        if (cfl_query_13d028() && (work = state.work) && work->flag_e4ac) {
            u32 result = 1;
            if (!cfl_query_139674(1) && !cfl_query_139674(0)) {
                work->unknown_e4c4 = 0;
                work->callback_e4d8 = WORK_CALLBACK;
                work->unknown_e4e0 = 1;
                cfl_setup_region_139bb0(0, guest::addr_of(&work->region_c820[0]).cast<void>(),
                                        CflDbWork::REGION_SIZE);
                state.object->flag_12 = 1;
                state.object->flag_13 = 1;
                cfl_set_callback_1396c0(state.object, OBJECT_CALLBACK);
                result = cfl_run_139c30();
            }
            if (result == RESULT_10) {
                cfl_handle_result_139a90(result);
            }
        }

        work = state.work;
        if (work && !cfl_query_139674(1) && !cfl_query_139674(0)) {
            if (!work->flag_e4c1 && cfl_file_exists_13959c(OLD_DB_PATH)) {
                if (work->flag_e4c0) {
                    cfl_move_file_139744(OLD_DB_PATH, DB_PATH, FLAG_E4C0_ARG);
                }
            } else {
                cfl_move_file_139744(OLD_DB_PATH, DB_PATH, NO_FLAG);
            }
        }
    }

    state.unknown_0c = 0;
    state.work = nullptr;
    gptr<CflDbObject> object = state.object;
    u32 release = *gptr<u32>(object->vtable + CflDbObject::RELEASE_SLOT * 4);
    guest::call_address<void>(release, object);
    state.object = nullptr;
    if (state.archive_mounted) {
        cfl_unmount_135520(ARCHIVE_NAME);
        state.archive_mounted = 0;
    }
}
GUEST_EXPORT(0x00134d64, cfl_db_shutdown);

GUEST_FUZZ(0x00134cdc, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00134d30, 200, [](guest::Fuzz &f) { f.arguments(); });
GUEST_FUZZ(0x00134d64, 200, [](guest::Fuzz &f) {
    // Only the teardown part: a fake object whose release slot is a pure function, nothing mounted.
    constexpr u32 HARMLESS_FUNCTION = 0x00134cb4;  // __aeabi_lasr
    auto vtable = f.allocate(2 * sizeof(u32)).cast<u32>();
    vtable[0] = 0;
    vtable[CflDbObject::RELEASE_SLOT] = HARMLESS_FUNCTION;
    auto object = f.object<CflDbObject>();
    object->vtable = vtable.addr();
    cfl_db_state->object = object;
    cfl_db_state->archive_mounted = 0;
    f.arguments(f.number() | 1);
});
