// Runtime side of rewritten functions: entering them from guest code and calling guest code from them.
//
// GUEST_OVERLAY=0 runs the recompiled originals instead of every rewritten function; GUEST_DISABLE=<address>,...
// only for those.
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>
#include <unordered_map>
#include <vector>

#include "guest/abi.hpp"

[[noreturn]] void rt_fatal(const char *fmt, ...) __attribute__((format(printf, 1, 2)));

namespace guest {

static thread_local CPU *tls_cpu;

CPU *cpu() {
    if (!tls_cpu) {
        fatal("rewritten code called guest code outside a guest thread");
    }
    return tls_cpu;
}
void detail::set_cpu(CPU *c) { tls_cpu = c; }

void fatal(const char *fmt, ...) {
    char buf[1024];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    rt_fatal("%s\n", buf);
}

const GuestEntry *detail::lookup(u32 address) {
    const GuestEntry *e = dispatch_lookup(address);
    if (!e) {
        fatal("no guest function at %08x", address);
    }
    return e;
}

// ---------------------------------------------------------------- strings

}  // namespace guest
namespace mem {
u32 hle_alloc(u32 size, u32 align);  // 3dsrecomp runtime: memory outside anything the game maps
}
namespace guest {

gptr<const char> guest_string(const char *text, size_t length) {
    static std::mutex m;
    static std::unordered_map<const char *, u32> copies;  // literals have static storage: their address is the key
    std::lock_guard<std::mutex> lock(m);
    u32 &addr = copies[text];
    if (!addr) {
        addr = mem::hle_alloc(u32(length + 1), 4);
        memcpy(g_mem + addr, text, length + 1);
    }
    return gptr<const char>(addr);
}

// ---------------------------------------------------------------- registry and settings

static std::vector<detail::Export *> &registry() {
    static std::vector<detail::Export *> r;
    return r;
}

static struct Settings {
    bool overlay = true;
    Settings() {
        if (const char *s = getenv("GUEST_OVERLAY")) {
            overlay = atoi(s) != 0;
        }
    }
} settings;

detail::Export::Export(u32 address, const char *name, Ret ret, void (*overlay)(CPU *), GuestFn original)
    : address(address), name(name), ret(ret), overlay(overlay), original(original) {
    registry().push_back(this);
}

// GUEST_DISABLE=<address>,<address>...: these rewrites run their originals instead (to find which one breaks a run)
static bool disabled(const detail::Export &e) {
    static const std::string list = getenv("GUEST_DISABLE") ? std::string(",") + getenv("GUEST_DISABLE") + "," : "";
    if (list.empty()) {
        return false;
    }
    char needle[16];
    snprintf(needle, sizeof needle, ",%x,", e.address);
    return list.find(needle) != std::string::npos;
}

void detail::enter(Export &e, CPU *c, u32 entry) {
    if (entry != 0 || !settings.overlay || disabled(e)) {
        return e.original(c, entry);  // resuming inside the original, or the original asked for
    }
    e.overlay(c);
}

}  // namespace guest
