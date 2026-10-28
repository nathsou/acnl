// script::MailMgr's singleton disposer (sead's SingletonDisposer_ pattern): destroying the registered disposer
// destroys the MailMgr singleton.
#include "guest/guest.hpp"

namespace {

using guest::gptr;

struct MailMgr {
    u8 unknown_000[0x14];
    u8 base_014[0x19c - 0x14];  // the part destroyed by f_001327fc (not known yet)
    u8 critical_section[0x1b8 - 0x19c];  // a sead::CriticalSection
    gptr<void> buffer;  // freed when set
};
GUEST_OFFSET(MailMgr, base_014, 0x14);
GUEST_OFFSET(MailMgr, critical_section, 0x19c);
GUEST_OFFSET(MailMgr, buffer, 0x1b8);

struct MailMgrSingleton {
    u8 unknown_00[0x18];
    gptr<MailMgr> instance;
    u32 disposer;  // guest address of the registered SingletonDisposer_
};
GUEST_OFFSET(MailMgrSingleton, instance, 0x18);
GUEST_OFFSET(MailMgrSingleton, disposer, 0x1c);
inline guest::global<MailMgrSingleton, 0x0095deac> mail_mgr_singleton;

constexpr u32 DISPOSER_VTABLE = 0x009097f4;

// The critical section's destructor returns its object; the part at 0x14 lies this far before it.
constexpr u32 CRITICAL_SECTION_TO_BASE = 0x19c - 0x14;

inline constexpr guest::Function<0x002ffb64, void(gptr<void> node)> destroy_list_node;
inline constexpr guest::Function<0x00137e8c, u32(u32 section)> destroy_critical_section;
inline constexpr guest::Function<0x001327fc, void(u32 object)> destroy_mail_mgr_base;
inline constexpr guest::Function<0x0013efb4, u32(u32 disposer)> destroy_disposer;

struct MailMgrSingletonDisposer {
    u32 vtable;
    u8 unknown_04[0xc];  // sead::IDisposer: heap, list node

    u32 destroy();
};

}  // namespace

// The destructor: if this is the registered disposer, the singleton goes with it.
u32 MailMgrSingletonDisposer::destroy() {
    vtable = DISPOSER_VTABLE;
    u32 self = guest::addr_of(this).addr();
    MailMgrSingleton &singleton = mail_mgr_singleton;
    if (self == singleton.disposer) {
        singleton.disposer = 0;
        gptr<MailMgr> mgr = singleton.instance;
        if (mgr->buffer) {
            destroy_list_node(mgr->buffer);
        }
        u32 section = destroy_critical_section(guest::addr_of(mgr->critical_section).addr());
        destroy_mail_mgr_base(section - CRITICAL_SECTION_TO_BASE);
        singleton.instance = nullptr;
    }
    return destroy_disposer(self);
}
GUEST_EXPORT(0x005f4c88, MailMgrSingletonDisposer::destroy);

// ---- inputs for the shadow checker's fuzzing (GUEST_FUZZ=1)

// A disposer that is not the registered one and belongs to no heap (all zero), so the base destructor has nothing
// to unlink.
GUEST_FUZZ(0x005f4c88, 200, [](guest::Fuzz &f) {
    auto disposer = f.object<MailMgrSingletonDisposer>();
    *disposer = MailMgrSingletonDisposer{};
    f.arguments(disposer);
});
