// Runtime side of rewritten functions: entering them from guest code, calling guest code from them, and the shadow
// checker that runs each rewritten function against the recompiled original during play.
//
// Shadow checking (GUEST_SHADOW=1): on a sampled call of a rewritten function, the original runs first while the
// guest's writable memory is write-protected. Every page it writes is copied before the write (the signal handler
// below), so afterwards its effects can be recorded and undone. The rewritten function then runs from the same
// state, and the two results are compared: return registers, preserved registers, and every byte of every page
// either of them wrote (except the dead stack below the entry sp). The original's state is kept, so a wrong
// rewrite never changes the game during a checked call. Calls whose original makes a system call (or gets
// preempted) cannot be replayed and are counted as unchecked.
//
// GUEST_OVERLAY=0 runs the recompiled originals instead of every rewritten function.
#include <pthread.h>
#include <setjmp.h>
#include <signal.h>
#include <sys/mman.h>
#include <unistd.h>

#include <algorithm>
#include <atomic>
#include <cstdarg>
#include <cstdio>
#include <cstdlib>
#include <chrono>
#include <mutex>
#include <unordered_map>
#include <string>
#include <thread>
#include <vector>

#include "guest/abi.hpp"

void rt_log(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
[[noreturn]] void rt_fatal(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
extern "C" void rt_svc(CPU *c, u32 imm);
extern "C" void rt_preempt(CPU *c);
extern u64 g_frame;  // vblanks since boot
extern void (*g_fatal_hook)(const char *msg);

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

static void write_report();

static struct Settings {
    bool overlay = true;
    int shadow = 0;          // 0 off, 1 sampled, 2 every call
    u64 shadow_first = 200;  // calls of each function always checked (mode 1)
    u64 shadow_every = 64;   // then one call in this many
    u32 dead_stack = 0x10000;
    bool fuzz = false;       // GUEST_FUZZ=1: run the fuzzers once, at the first rewritten call after fuzz_frame
    u64 fuzz_frame = 600;
    Settings() {
        if (const char *s = getenv("GUEST_FUZZ")) {
            fuzz = atoi(s) != 0;
        }
        if (const char *s = getenv("GUEST_FUZZ_FRAME")) {
            fuzz_frame = strtoull(s, nullptr, 0);
        }
        if (const char *s = getenv("GUEST_OVERLAY")) {
            overlay = atoi(s) != 0;
        }
        if (const char *s = getenv("GUEST_SHADOW")) {
            shadow = !strcmp(s, "all") ? 2 : atoi(s) ? 1 : 0;
        }
        if (const char *s = getenv("GUEST_SHADOW_FIRST")) {
            shadow_first = strtoull(s, nullptr, 0);
        }
        if (const char *s = getenv("GUEST_SHADOW_EVERY")) {
            shadow_every = std::max(1ull, strtoull(s, nullptr, 0));
        }
        if (shadow) {
            // the runtime may leave with _exit (RECOMP_FRAMES): keep the summary file current instead
            std::thread([] {
                for (;;) {
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    write_report();
                }
            }).detach();
        }
    }
} settings;

detail::Export::Export(u32 address, const char *name, Ret ret, void (*overlay)(CPU *), GuestFn original)
    : address(address), name(name), ret(ret), overlay(overlay), original(original) {
    registry().push_back(this);
}

// ---------------------------------------------------------------- page journal

namespace {

// What game code writes outside system calls: the program's data, the heap and the main stack, and the linear
// heap. Not the shared memory blocks mapped from 0x10000000, which the runtime's own threads keep writing.
struct Range { u32 lo, hi; };
constexpr Range PROTECTED[] = {{0x00100000, 0x10000000}, {0x14000000, 0x1c000000}};
constexpr u32 PROTECT_LO = PROTECTED[0].lo;  // the page index covers [PROTECT_LO, PROTECT_HI)
constexpr u32 PROTECT_HI = PROTECTED[1].hi;
constexpr u32 POOL_PAGES = 3072;

u32 page_size;
u32 npages;
u8 *pool;           // copies of pages
u32 pool_used;
s16 *slot_of_page;  // journal index of each page in the protected range, -1 if none

struct Page {
    u32 index;      // page number from PROTECT_LO
    u8 *orig;       // contents before the run
    bool foreign;   // also written by another host thread: neither compared nor restored
};

std::atomic<bool> journaling;
pthread_t journal_owner;
std::vector<Page> journal;  // reserved up front: the signal handler never allocates
bool journal_overflow;
std::atomic<bool> busy;     // a check is in progress (on some thread)
std::atomic<bool> fuzzing;  // run_fuzzers is running: it holds `busy` for the whole time
bool tainted;               // the run made a system call or got preempted
u32 preemptions_deferred;   // in the current run (reset by begin_journal)
u64 abandons;               // runs abandoned so far (a check compares the count before and after its run)
struct sigaction old_segv, old_bus;

u8 *page_ptr(u32 index) { return g_mem + PROTECT_LO + u64(index) * page_size; }

// Sets the protection of [base, base + size). Where the game has unmapped memory in the range, mprotect stops at the
// first hole and leaves everything after it as it was (the main stack sits at the top of the range): so on failure
// the range is split until each mapped part has been done.
void protect_range(u8 *base, u64 size, int prot) {
    if (mprotect(base, size, prot) == 0) {
        return;
    }
    if (size <= page_size) {
        static int reported = 0;
        if (getenv("GUEST_SHADOW_DEBUG") && reported++ < 10) {
            fprintf(stderr, "protect_range: cannot set %d on guest %08x: %s\n", prot, u32(base - g_mem), strerror(errno));
        }
        return;
    }
    u64 half = (size / 2 + page_size - 1) / page_size * page_size;
    protect_range(base, half, prot);
    protect_range(base + half, size - half, prot);
}

void protect_all(int prot) {
    for (const Range &r : PROTECTED) {
        protect_range(g_mem + r.lo, r.hi - r.lo, prot);
    }
}

bool is_protected(const u8 *a) {
    for (const Range &r : PROTECTED) {
        if (a >= g_mem + r.lo && a < g_mem + r.hi) {
            return true;
        }
    }
    return false;
}

void chain(int sig, siginfo_t *si, void *ctx) {
    struct sigaction &old = sig == SIGBUS ? old_bus : old_segv;
    if (old.sa_flags & SA_SIGINFO) {
        if (old.sa_sigaction) {
            return old.sa_sigaction(sig, si, ctx);
        }
    } else if (old.sa_handler != SIG_DFL && old.sa_handler != SIG_IGN) {
        return old.sa_handler(sig);
    }
    signal(sig, SIG_DFL);  // re-raised by the faulting instruction
}

void on_fault(int sig, siginfo_t *si, void *ctx) {
    u8 *a = static_cast<u8 *>(si->si_addr);
    if (!is_protected(a)) {
        return chain(sig, si, ctx);
    }
    u32 index = u32((a - (g_mem + PROTECT_LO)) / page_size);
    if (!journaling.load(std::memory_order_acquire)) {
        // another thread faulted just as a run ended (between the end of journaling and the unprotect)
        mprotect(page_ptr(index), page_size, PROT_READ | PROT_WRITE);
        return;
    }
    s16 slot = slot_of_page[index];
    bool mine = pthread_equal(pthread_self(), journal_owner);
    if (slot < 0) {
        if (pool_used == POOL_PAGES || journal.size() == journal.capacity()) {
            journal_overflow = true;  // cannot journal it: the run is abandoned (see shadow_check)
        } else {
            u8 *copy = pool + u64(pool_used++) * page_size;
            memcpy(copy, page_ptr(index), page_size);
            slot = s16(journal.size());
            journal.push_back({index, copy, !mine});
            slot_of_page[index] = slot;
        }
    } else if (!mine) {
        journal[slot].foreign = true;
    }
    mprotect(page_ptr(index), page_size, PROT_READ | PROT_WRITE);
}

void init_journal() {
    page_size = u32(getpagesize());
    npages = (PROTECT_HI - PROTECT_LO) / page_size;
    pool = static_cast<u8 *>(mmap(nullptr, u64(POOL_PAGES) * page_size, PROT_READ | PROT_WRITE,
                                  MAP_PRIVATE | MAP_ANON | MAP_NORESERVE, -1, 0));
    slot_of_page = new s16[npages];
    std::fill(slot_of_page, slot_of_page + npages, s16(-1));
    journal.reserve(POOL_PAGES);
    struct sigaction sa {};
    sa.sa_sigaction = on_fault;
    sa.sa_flags = SA_SIGINFO;
    sigemptyset(&sa.sa_mask);
    sigaction(SIGSEGV, &sa, &old_segv);
    sigaction(SIGBUS, &sa, &old_bus);
}

void begin_journal() {
    journal.clear();
    // (a slot left over from an earlier run would make the handler skip a page's first copy: the page would be
    // neither restored nor compared)
    std::fill(slot_of_page, slot_of_page + npages, s16(-1));
    preemptions_deferred = 0;
    journal_overflow = false;
    tainted = false;
    journal_owner = pthread_self();
    journaling.store(true, std::memory_order_release);
    protect_all(PROT_READ);
}

void end_journal() {
    protect_all(PROT_READ | PROT_WRITE);
    journaling.store(false, std::memory_order_release);
    for (auto &p : journal) {
        slot_of_page[p.index] = -1;
    }
}

// a system call or a preemption in the middle of a checked run: it cannot be undone, so stop journaling now
const char *abandon_why;
u32 abandon_pc;

void abandon_run(const char *why, u32 pc) {
    if (!journaling.load() || !pthread_equal(pthread_self(), journal_owner)) {
        return;
    }
    abandon_why = why;
    abandon_pc = pc;
    tainted = true;
    abandons++;
    end_journal();
    // the rest of the run is just the original running: let the functions it calls be checked (a run of main
    // never ends). Not while fuzzing: the fuzz loop owns the journal, and another thread starting a check would
    // reset it under the loop.
    if (!fuzzing.load()) {
        busy.store(false);
    }
}

}  // namespace

// generated code is compiled with -Drt_svc=guest_shadow_svc -Drt_preempt=guest_shadow_preempt
static void escape_fuzz_input_on_this_thread();  // (fuzzing, below)

constexpr u32 SVC_BREAK = 0x3c;  // the game's assertion failures end here

extern "C" void guest_shadow_svc(CPU *c, u32 imm) {
    if (imm == SVC_BREAK) {
        escape_fuzz_input_on_this_thread();  // a fuzz input tripped an assertion: drop it (before the kernel)
    }
    abandon_run("system call", c->pc);
    rt_svc(c, imm);
}
extern "C" void guest_shadow_preempt(CPU *c) {
    // The recompiler checks for preemption on every backward branch, loops or not. During a checked run the
    // preemption waits (rt_preempt_flag stays set, so it happens at the first check after the run), unless the
    // run spins long enough to be waiting for another thread.
    if (journaling.load() && pthread_equal(pthread_self(), journal_owner) && ++preemptions_deferred < 100000) {
        return;
    }
    abandon_run("preemption", c->pc);
    rt_preempt(c);
}

// ---------------------------------------------------------------- the check

static FILE *report_file() {
    static FILE *f = fopen("guest_shadow.log", "w");
    return f;
}

static void report(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static void report(const char *fmt, ...) {
    char buf[2048];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    rt_log("[shadow] %s", buf);
    if (FILE *f = report_file()) {
        fputs(buf, f);
        fflush(f);
    }
}

static std::string format(const char *fmt, ...) __attribute__((format(printf, 1, 2)));
static std::string format(const char *fmt, ...) {
    char buf[512];
    va_list ap;
    va_start(ap, fmt);
    vsnprintf(buf, sizeof buf, fmt, ap);
    va_end(ap);
    return buf;
}

static const char *reg_name(int r) {
    static const char *n[] = {"r0", "r1", "r2", "r3", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r12", "sp", "lr", "pc"};
    return n[r];
}


static void shadow_check(detail::Export &e, CPU *c) {
    using detail::Ret;
    static bool ready = (init_journal(), true);
    (void)ready;
    const CPU in = *c;
    u8 dbg_before[0x40] = {};
    static const bool dbg = getenv("GUEST_SHADOW_DEBUG") != nullptr;
    if (dbg && in.r[0] >= 0x00100000 && in.r[0] < 0x0fffff00) {
        memcpy(dbg_before, g_mem + in.r[0], sizeof dbg_before);
    }

    // 1. the original, journaled
    u64 abandoned_before = abandons;
    begin_journal();
    e.original(c, 0);
    tainted = abandons != abandoned_before;
    if (tainted || journal_overflow || journal.size() * 3 > POOL_PAGES) {  // (room for its results and the rewrite's)
        if (tainted && e.unchecked_syscall++ < 3) {
            report("unchecked %s (%08x): %s at %08x\n", e.name, e.address, abandon_why, abandon_pc);
        } else {
            e.unchecked_memory++;
        }
        if (!tainted) {
            end_journal();
        }
        pool_used = 0;
        e.unchecked++;
        return;
    }
    const CPU gen = *c;
    std::vector<Page> gen_pages = journal;
    std::vector<u8 *> gen_result(gen_pages.size());
    end_journal();
    for (size_t i = 0; i < gen_pages.size(); i++) {
        u8 *page = page_ptr(gen_pages[i].index);
        gen_result[i] = pool + u64(pool_used++) * page_size;
        memcpy(gen_result[i], page, page_size);
        memcpy(page, gen_pages[i].orig, page_size);
    }

    // 2. the rewrite, from the same state
    if (dbg && in.r[0] >= 0x00100000 && in.r[0] < 0x0fffff00 && memcmp(dbg_before, g_mem + in.r[0], sizeof dbg_before)) {
        static int printed = 0;
        if (printed++ < 20) {
            u32 pi = (in.r[0] - PROTECT_LO) / page_size;
            const Page *found = nullptr;
            for (auto &p : gen_pages) {
                if (p.index == pi) {
                    found = &p;
                }
            }
            report("DEBUG %s: object at %08x differs; page %u %s%s; gen_pages %zu; slot_of_page=%d; pool_used=%u\n", e.name,
                   in.r[0], pi, found ? "journaled" : "NOT journaled", found && found->foreign ? " (foreign)" : "",
                   gen_pages.size(), int(slot_of_page[pi]), pool_used);
        }
    }
    *c = in;
    abandoned_before = abandons;
    begin_journal();
    e.overlay(c);
    bool ov_svc = abandons != abandoned_before, ov_overflow = journal_overflow;
    tainted = ov_svc;
    if (!tainted) {
        end_journal();
    }
    std::vector<Page> ov_pages = journal;
    for (auto &p : journal) {
        slot_of_page[p.index] = -1;
    }

    // 3. compare
    std::vector<std::string> diffs;
    auto diff = [&](const std::string &s) { diffs.push_back(s); };
    if (ov_svc) {
        diff(format("the rewrite made a system call (or was preempted); the original did not"));
    }
    if (ov_overflow) {
        diff(format("the rewrite wrote more pages than the journal holds"));
    }
    auto rb = [](const CPU &x, int s) { return F2U(x.s[s]); };
    switch (e.ret) {
    case Ret::R0:
        if (gen.r[0] != c->r[0]) {
            diff(format("r0: original %08x, rewrite %08x", gen.r[0], c->r[0]));
        }
        break;
    case Ret::R0R1:
        if (gen.r[0] != c->r[0] || gen.r[1] != c->r[1]) {
            diff(format("r0:r1: original %08x:%08x, rewrite %08x:%08x", gen.r[1], gen.r[0], c->r[1], c->r[0]));
        }
        break;
    case Ret::S0:
        if (rb(gen, 0) != rb(*c, 0)) {
            diff(format("s0: original %g (%08x), rewrite %g (%08x)", gen.s[0], rb(gen, 0), c->s[0], rb(*c, 0)));
        }
        break;
    case Ret::D0:
        if (rb(gen, 0) != rb(*c, 0) || rb(gen, 1) != rb(*c, 1)) {
            diff(format("d0 differs"));
        }
        break;
    case Ret::Void: break;
    }
    for (int r = 4; r <= 13; r++) {
        if (r != 12 && c->r[r] != in.r[r]) {
            diff(format("%s not preserved: %08x -> %08x", reg_name(r), in.r[r], c->r[r]));
        }
    }
    if (c->pc != in.r[14]) {
        diff(format("returned to %08x instead of %08x", c->pc, in.r[14]));
    }

    u32 dead_lo = in.r[13] - settings.dead_stack, dead_hi = in.r[13];  // (fuzz inputs are above: allocated before the call)
    auto find = [](const std::vector<Page> &v, u32 index) -> const Page * {
        for (auto &p : v) {
            if (p.index == index) {
                return &p;
            }
        }
        return nullptr;
    };
    std::vector<u32> indices;
    for (auto &p : gen_pages) {
        indices.push_back(p.index);
    }
    for (auto &p : ov_pages) {
        indices.push_back(p.index);
    }
    std::sort(indices.begin(), indices.end());
    indices.erase(std::unique(indices.begin(), indices.end()), indices.end());
    int shown = 0, total = 0;
    for (u32 index : indices) {
        const Page *g = find(gen_pages, index), *o = find(ov_pages, index);
        if ((g && g->foreign) || (o && o->foreign)) {
            continue;
        }
        const u8 *want = g ? gen_result[g - gen_pages.data()] : o->orig;
        const u8 *got = page_ptr(index);
        if (!memcmp(want, got, page_size)) {
            continue;
        }
        u32 base = PROTECT_LO + index * page_size;
        for (u32 off = 0; off < page_size; off += 4) {
            u32 ga = base + off;
            if (ga >= dead_lo && ga < dead_hi) {
                continue;
            }
            u32 w, h;
            memcpy(&w, want + off, 4);
            memcpy(&h, got + off, 4);
            if (w == h) {
                continue;
            }
            total++;
            if (shown++ < 8) {
                diff(format("[%08x]: original %08x, rewrite %08x", ga, w, h));
            }
        }
    }
    if (total > 8) {
        diff(format("... %d differing words in all", total));
    }

    // 4. keep the original's results
    for (auto &p : ov_pages) {
        if (!p.foreign) {
            memcpy(page_ptr(p.index), p.orig, page_size);
        }
    }
    for (size_t i = 0; i < gen_pages.size(); i++) {
        if (!gen_pages[i].foreign) {
            memcpy(page_ptr(gen_pages[i].index), gen_result[i], page_size);
        }
    }
    *c = gen;
    pool_used = 0;

    e.checked++;
    if (fuzzing) {
        e.fuzzed++;
    }
    if (!diffs.empty()) {
        if (e.mismatches++ < 5) {
            report("MISMATCH %s (%08x) %s %llu, args r0=%08x r1=%08x r2=%08x r3=%08x lr=%08x\n", e.name, e.address,
                   fuzzing ? "fuzz input" : "call", (unsigned long long)(fuzzing ? e.fuzzed : e.calls), in.r[0],
                   in.r[1], in.r[2], in.r[3], in.r[14]);
            for (auto &d : diffs) {
                report("    %s\n", d.c_str());
            }
            if (getenv("GUEST_SHADOW_DEBUG")) {
                int gf = 0, of = 0;
                for (auto &p : gen_pages) gf += p.foreign;
                for (auto &p : ov_pages) of += p.foreign;
                report("    pages: original %zu (%d foreign), rewrite %zu (%d foreign)\n", gen_pages.size(), gf,
                       ov_pages.size(), of);
            }
        }
    }
}

static bool should_check(detail::Export &e) {
    if (settings.shadow == 2) {
        return true;
    }
    if (settings.shadow == 0) {
        return false;
    }
    return e.calls <= settings.shadow_first || e.calls % settings.shadow_every == 0;
}

// ---------------------------------------------------------------- fuzzing

struct Fuzzer {
    detail::Export *e;
    int iterations;
    void (*generate)(Fuzz &);
};
static std::vector<Fuzzer> &fuzzers() {
    static std::vector<Fuzzer> f;
    return f;
}

detail::FuzzRegistration::FuzzRegistration(Export &e, int iterations, void (*generate)(Fuzz &)) {
    fuzzers().push_back({&e, iterations, generate});
}

Fuzz::Fuzz(CPU *c, u64 seed) : c_(c), state_(seed * 0x9e3779b97f4a7c15ull + 1) {}

u32 Fuzz::number() {  // xorshift64*; small and boundary values more often than chance would give them
    state_ ^= state_ >> 12;
    state_ ^= state_ << 25;
    state_ ^= state_ >> 27;
    u64 r = state_ * 0x2545f4914f6cdd1dull;
    switch (r & 7) {
    case 0: return u32(r >> 32) & 0xff;
    case 1: return -(u32(r >> 32) & 0xff);
    default: return u32(r >> 32);
    }
}

float Fuzz::real() { return float(s32(number() % 2000000) - 1000000) / 1000.0f; }

void Fuzz::bytes(gptr<void> p, u32 size) {
    for (u32 i = 0; i < size; i++) {
        p.cast<u8>()[i] = u8(number());
    }
}

gptr<void> Fuzz::allocate(u32 size) {
    c_->r[13] = (c_->r[13] - size) & ~7u;
    return gptr<void>(c_->r[13]);
}

// GUEST_FUZZ_ONLY=<address>,<address>...: fuzz only these functions. The fuzzer running is written to
// guest_fuzz_progress.txt first, so that a crash or a hang can be blamed on it.
static bool fuzz_selected(u32 address) {
    static const char *only = getenv("GUEST_FUZZ_ONLY");
    if (!only || !*only) {
        return true;
    }
    char needle[16];
    snprintf(needle, sizeof needle, "%x", address);
    std::string list = std::string(",") + only + ",";
    return list.find(std::string(",") + needle + ",") != std::string::npos ||
           list.find(std::string(",0x") + needle + ",") != std::string::npos;
}

static void note_fuzz_progress(const detail::Export *e) {
    if (FILE *f = fopen("guest_fuzz_progress.txt", "w")) {
        if (e) {
            fprintf(f, "%x %s\n", e->address, e->name);
        } else {
            fprintf(f, "done\n");
        }
        fclose(f);
    }
}

// A fuzz input can lead the code under test to a fatal error (a garbage function pointer, typically). The runtime
// calls g_fatal_hook before exiting: during fuzzing, the hook jumps back to the fuzz loop instead, which puts back the
// pages the run wrote and drops the input.
static jmp_buf fuzz_escape;
static bool fuzz_escape_armed;
static pthread_t fuzz_thread;
static void (*previous_fatal_hook)(const char *);

static void fuzz_fatal_hook(const char *msg) {
    if (fuzz_escape_armed && pthread_equal(pthread_self(), fuzz_thread)) {
        fuzz_escape_armed = false;
        longjmp(fuzz_escape, 1);
    }
    if (previous_fatal_hook) {
        previous_fatal_hook(msg);
    }
}

static void escape_fuzz_input_on_this_thread() {
    if (fuzz_escape_armed && pthread_equal(pthread_self(), fuzz_thread)) {
        fuzz_escape_armed = false;
        longjmp(fuzz_escape, 1);
    }
}

static void recover_from_crashed_input() {
    // memory: before the rewrite's run it was put back to the original state, and the current journal holds the
    // first copy of every page written since (by whichever run crashed)
    protect_all(PROT_READ | PROT_WRITE);
    for (auto &p : journal) {
        if (!p.foreign) {
            memcpy(page_ptr(p.index), p.orig, page_size);
        }
        slot_of_page[p.index] = -1;
    }
    journal.clear();
    journaling.store(false);
    pool_used = 0;
    busy.store(true);  // (still inside run_fuzzers)
}

// The fuzzers of a CRO module wait until its code is loaded (it may be loaded after the fuzzing frame): they are
// retried every FUZZ_RETRY_FRAMES frames, and run anyway (their inputs then crash and are dropped) after
// FUZZ_DEFER_LIMIT frames.
static constexpr u32 CRO_BASE = 0x40000000;
static constexpr u64 FUZZ_RETRY_FRAMES = 600;
static constexpr u64 FUZZ_DEFER_LIMIT = 40000;
static std::vector<size_t> deferred_fuzzers;
static bool fuzz_pending;
static u64 fuzz_retry_frame;

static void run_fuzzers(CPU *c, bool retry) {
    fuzzing = true;
    fuzz_thread = pthread_self();
    previous_fatal_hook = g_fatal_hook;
    g_fatal_hook = fuzz_fatal_hook;
    std::vector<size_t> todo;
    if (retry) {
        todo.swap(deferred_fuzzers);
    } else {
        for (size_t i = 0; i < fuzzers().size(); i++) {
            todo.push_back(i);
        }
    }
    deferred_fuzzers.clear();
    for (size_t index : todo) {
        auto &fz = fuzzers()[index];
        if (!fuzz_selected(fz.e->address)) {
            continue;
        }
        if (fz.e->address >= CRO_BASE && !dispatch_lookup(fz.e->address) && g_frame < settings.fuzz_frame + FUZZ_DEFER_LIMIT) {
            deferred_fuzzers.push_back(index);
            continue;
        }
        note_fuzz_progress(fz.e);
        static const int minimum = getenv("GUEST_FUZZ_MIN") ? atoi(getenv("GUEST_FUZZ_MIN")) : 0;
        int iterations = std::max(fz.iterations, minimum);  // GUEST_FUZZ_MIN: at least this many inputs each
        for (int i = 0; i < iterations; i++) {
            const CPU saved = *c;
            Fuzz f(c, (u64(fz.e->address) << 20) + i);
            fz.generate(f);
            c->r[14] = RETURN_TO_HOST;
            c->pc = fz.e->address;
            if (setjmp(fuzz_escape) == 0) {
                fuzz_escape_armed = true;
                shadow_check(*fz.e, c);
                busy.store(true);  // (an abandoned run released it)
            } else {
                recover_from_crashed_input();  // the input made the original or the rewrite crash: drop it
                fz.e->crashed_inputs++;
            }
            fuzz_escape_armed = false;
            *c = saved;
        }
    }
    note_fuzz_progress(nullptr);
    g_fatal_hook = previous_fatal_hook;
    write_report();
    fuzzing = false;
    fuzz_pending = !deferred_fuzzers.empty();
    if (fuzz_pending) {
        fuzz_retry_frame = g_frame + FUZZ_RETRY_FRAMES;
        return;
    }
    if (getenv("GUEST_FUZZ_EXIT")) {  // a test run ends when its fuzzing is done (the frame count keeps going)
        _exit(0);
    }
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
        return e.original(c, entry);  // resuming inside the original
    }
    static bool fuzzed;
    if (settings.fuzz && settings.shadow && !fuzzed && g_frame >= settings.fuzz_frame && !busy.exchange(true)) {
        fuzzed = true;
        run_fuzzers(c, false);
        busy.store(false);
    }
    if (settings.fuzz && settings.shadow && fuzz_pending && g_frame >= fuzz_retry_frame && !busy.exchange(true)) {
        run_fuzzers(c, true);
        busy.store(false);
    }
    e.calls++;
    if (settings.shadow && should_check(e) && !busy.exchange(true)) {
        shadow_check(e, c);
        busy.store(false);
        return;
    }
    e.overlay(c);
}

static void write_report() {
    FILE *f = fopen("guest_shadow_summary.txt.tmp", "w");
    if (!f) {
        return;
    }
    fprintf(f, "%-8s %-32s %10s %10s %10s %10s %10s   (unchecked: system call or preemption / too much memory)\n",
            "address", "function", "calls", "checked", "fuzzed", "unchecked", "mismatch");
    auto r = registry();
    std::sort(r.begin(), r.end(), [](auto *a, auto *b) { return a->address < b->address; });
    for (auto *e : r) {
        fprintf(f, "%08x %-32s %10llu %10llu %10llu %10llu %10llu   (%llu / %llu)\n", e->address, e->name,
                (unsigned long long)e->calls, (unsigned long long)e->checked, (unsigned long long)e->fuzzed,
                (unsigned long long)e->unchecked, (unsigned long long)e->mismatches,
                (unsigned long long)e->unchecked_syscall, (unsigned long long)e->unchecked_memory);
    }
    fclose(f);
    rename("guest_shadow_summary.txt.tmp", "guest_shadow_summary.txt");
}

}  // namespace guest
