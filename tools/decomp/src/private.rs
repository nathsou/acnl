// Frame words private to a function (DECOMP_PRIVATE=1): an assumption about the program, not a fact the checker
// proves (docs/decomp.md, "Private frame words").
//
// A word of the stack frame whose address the function never hands out is the function's own: the assumption is
// that a callee reads and writes its caller's frame only through addresses it is given and in its stack arguments.
// In the model such words are a region of their own, like the register save area (sym.rs: State::frame), which
// callees neither see nor change; the decompiler then keeps them in variables (`local_24` for the word 0x24 bytes
// below the entry sp), so a value stored before a call is read back after it without a load.
//
// What makes a word private, from a forward analysis of the original function (every value is plain, a constant,
// sp plus a constant, an element of an object at sp plus a constant, or some other value derived from sp):
// - every value derived from sp is followed (an address at an unknown offset loses the function: no word is);
// - it lies below every address the function hands out (stored to memory, passed to a callee, left in a register at
//   a return) and every object it indexes: an object extends upward from its address;
// - every access to it is a 32-bit access at its own address, and it is not in the prologue's push;
// - it is none of a call's stack arguments: a direct call's callee reaches what `decomp stack-args` found from its
//   code (DECOMP_STACK_ARGS); a callee whose reach is not known, a fragment of another function, or an indirect
//   call leaves no word private (DECOMP_PRIVATE_RULE=1: an indirect call's are the words it wrote from its sp up
//   since the last call, a rule with exceptions).
use crate::ast::{BinOp, CpuField, Expr, Function, Stmt, Ty, UnOp};
use std::collections::{BTreeMap, BTreeSet, HashMap};

pub type Path = Vec<usize>;

// DECOMP_PRIVATE_RULE=1: for an indirect call, the rule decides its stack arguments (else the call leaves no word
// private): it has exceptions in the program (docs/decomp.md)
fn rule() -> bool {
    std::env::var("DECOMP_PRIVATE_RULE").map_or(false, |v| v == "1")
}

thread_local! {
    // (a test's own setting, instead of DECOMP_PRIVATE)
    pub static ENABLED: std::cell::Cell<Option<bool>> = const { std::cell::Cell::new(None) };
}

pub fn enabled() -> bool {
    ENABLED.with(|e| e.get()).unwrap_or_else(|| std::env::var("DECOMP_PRIVATE").map_or(false, |v| v == "1"))
}

// the variable holding the private word at `distance` bytes below the entry sp
pub fn variable(distance: u32) -> String {
    format!("local_{:x}", distance)
}

// what the analysis knows of a value
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
enum A {
    Plain,     // not derived from sp
    K(u64),    // a constant (32 bits)
    At(i64),   // the entry sp plus this
    From(i64), // the entry sp plus this, plus an index (an element of an object there: at or above it)
    Any,       // derived from sp, at an offset not known
}

// (an object starting further down than this is no object of the frame)
const MOST_BELOW: i64 = 0x10000;

fn join(a: A, b: A) -> A {
    match (a, b) {
        _ if a == b => a,
        (A::At(x) | A::From(x), A::At(y) | A::From(y)) => from(x.min(y)),
        // (an address in the frame on one path, another value on the other: through it, the object at x or no word
        // of the frame)
        (A::At(x) | A::From(x), A::Plain | A::K(_)) | (A::Plain | A::K(_), A::At(x) | A::From(x)) => from(x),
        (A::Plain | A::K(_), A::Plain | A::K(_)) => A::Plain,
        _ => A::Any,
    }
}

fn from(k: i64) -> A {
    if k < -MOST_BELOW { A::Any } else { A::From(k) }
}

fn derived(a: A) -> bool {
    !matches!(a, A::Plain | A::K(_))
}

#[derive(Clone, PartialEq, Default)]
struct St {
    vars: BTreeMap<String, A>,
    cpu: BTreeMap<String, A>,
    written: BTreeSet<i64>, // the frame words written since the entry or the last call (by offset from the entry sp)
    // the frame words holding a value derived from sp (a spilled address: read back, it is that address again)
    spilled: BTreeMap<i64, A>,
}

impl St {
    fn var(&self, v: &str) -> A {
        self.vars.get(v).copied().unwrap_or(A::Plain)
    }
    fn cpu(&self, k: &str) -> A {
        self.cpu.get(k).copied().unwrap_or(A::Plain)
    }
    fn set_var(&mut self, v: &str, a: A) {
        if a == A::Plain {
            self.vars.remove(v);
        } else {
            self.vars.insert(v.to_string(), a);
        }
    }
    fn set_cpu(&mut self, k: &str, a: A) {
        if a == A::Plain {
            self.cpu.remove(k);
        } else {
            self.cpu.insert(k.to_string(), a);
        }
    }
    fn merge(&mut self, o: &St) {
        fn each(a: &mut BTreeMap<String, A>, b: &BTreeMap<String, A>) {
            let keys: BTreeSet<String> = a.keys().chain(b.keys()).cloned().collect();
            for k in keys {
                let x = join(a.get(&k).copied().unwrap_or(A::Plain), b.get(&k).copied().unwrap_or(A::Plain));
                if x == A::Plain {
                    a.remove(&k);
                } else {
                    a.insert(k, x);
                }
            }
        }
        each(&mut self.vars, &o.vars);
        each(&mut self.cpu, &o.cpu);
        let keys: BTreeSet<i64> = self.spilled.keys().chain(o.spilled.keys()).copied().collect();
        for k in keys {
            let x = join(self.spilled.get(&k).copied().unwrap_or(A::Plain), o.spilled.get(&k).copied().unwrap_or(A::Plain));
            if derived(x) {
                self.spilled.insert(k, x);
            } else {
                self.spilled.remove(&k);
            }
        }
        self.written.extend(o.written.iter().copied());
    }
}

// what the analysis found
#[derive(Default)]
struct Found {
    lost: bool,                                // a value derived from sp not followed: no word is private
    why: &'static str,                         // (what lost it, for the statistics)
    // a callee may read the frame beyond its stack arguments (a fragment of another function, or one whose reach is
    // not known): no word is private, though the function's own reach is still known
    callee_unknown: bool,
    accesses: BTreeMap<i64, BTreeSet<(u32, Ty)>>, // by offset from the entry sp: (bytes, type)
    lowest_escape: Option<i64>,                // the lowest address handed out
    stack_args: BTreeSet<i64>,                 // the words that are some call's stack arguments
    escapes_incoming: bool,                    // an address at or above the entry sp handed out
    calls: Vec<Call<A>>,                       // the calls (for the reach)
    // (the rule for unknown callees tried on the calls of known ones: calls it covers, calls it misses some of)
    rule: (usize, usize),
    // the address of each access, by statement (only for the rewrite)
    at: HashMap<(Path, usize), A>,
}

impl Found {
    fn escape(&mut self, a: A) {
        match a {
            A::Plain | A::K(_) => {}
            A::At(k) | A::From(k) => {
                self.lowest_escape = Some(self.lowest_escape.map_or(k, |e| e.min(k)));
                self.escapes_incoming |= k >= 0;
            }
            A::Any => {
                self.lost = true;
                self.why = "escape";
            }
        }
    }
}

// The bytes of its stack arguments a function may read or write (DECOMP_STACK_ARGS, from `decomp stack-args`; None:
// any number of them), and the functions that are fragments of another (main.rs: a label inside it), which run in
// the frame of the function they belong to (an epilogue pops its registers), so they are never private callees.
// What a function reaches of its stack arguments.
#[derive(Clone, Copy, PartialEq, Eq, Debug)]
pub enum Stack {
    Bytes(u32),  // these bytes above its entry sp
    Passed(u32), // these, and what an indirect tail call's callee reads of them (those its caller wrote: the rule)
    Any,
}

impl Stack {
    pub fn text(self) -> String {
        match self {
            Stack::Bytes(r) => r.to_string(),
            Stack::Passed(r) => format!("{}+", r),
            Stack::Any => "-".into(),
        }
    }
    fn parse(t: &str) -> Stack {
        match t.strip_suffix('+') {
            Some(r) => r.parse().map_or(Stack::Any, Stack::Passed),
            None => t.parse().map_or(Stack::Any, Stack::Bytes),
        }
    }
}

struct Reach {
    bytes: HashMap<u32, Stack>,
    fragments: std::collections::HashSet<u32>,
}

static REACH: std::sync::OnceLock<std::sync::RwLock<Reach>> = std::sync::OnceLock::new();

fn reach() -> &'static std::sync::RwLock<Reach> {
    REACH.get_or_init(|| {
        let text = std::env::var("DECOMP_STACK_ARGS").ok().and_then(|p| std::fs::read_to_string(p).ok()).unwrap_or_default();
        let mut r = Reach { bytes: HashMap::new(), fragments: Default::default() };
        for l in text.lines() {
            let mut w = l.split_whitespace();
            let (Some(a), Some(v)) = (w.next().and_then(|a| u32::from_str_radix(a, 16).ok()), w.next()) else { continue };
            if v == FRAGMENT {
                r.fragments.insert(a & !1);
            } else {
                r.bytes.insert(a & !1, Stack::parse(v));
            }
        }
        std::sync::RwLock::new(r)
    })
}

#[cfg(test)]
pub fn insert_reach(address: u32, s: Stack) {
    reach().write().unwrap().bytes.insert(address & !1, s);
}

pub const FRAGMENT: &str = "fragment";

fn reach_of(address: u32) -> Option<Stack> {
    reach().read().unwrap().bytes.get(&(address & !1)).copied()
}

fn fragment(address: u32) -> bool {
    reach().read().unwrap().fragments.contains(&(address & !1))
}

// A call: its target (None: indirect), its sp, whether it is a tail call.
#[derive(Clone, Debug)]
pub struct Call<S> {
    pub target: Option<u32>,
    pub sp: S,
    pub tail: bool,
}

// What a function's own code reaches of its stack arguments: the bytes it accesses above its entry sp (None: an
// address there handed out, or sp not followed), and its calls with the offset of their sp from its entry sp (None:
// not known).
pub fn own_reach(f: &Function) -> (Option<u32>, Vec<Call<Option<i64>>>) {
    let found = analyse(&crate::dispatch::as_direct_calls(f));
    let calls = found.calls.iter().map(|c| Call { target: c.target, sp: if let A::At(s) = c.sp { Some(s) } else { None }, tail: c.tail }).collect();
    if found.lost || found.escapes_incoming {
        return (None, calls);
    }
    let reach = found
        .accesses
        .range(0..)
        .map(|(k, kinds)| *k + kinds.iter().map(|(b, _)| *b as i64).max().unwrap_or(0))
        .max()
        .unwrap_or(0);
    (u32::try_from(reach).ok(), calls)
}

// The reach of every function (`decomp stack-args`), to a fixed point: its own, and its callees' from their sp
// (above its entry sp: a tail call's stack arguments are its own; a callee's past the frame, a piece of the function
// popping it). An indirect tail call at the entry sp passes them on (the rule decides at its callers); a callee
// whose reach is not known, or an indirect call elsewhere, makes it not known.
pub fn reach_table(own: &HashMap<u32, (Option<u32>, Vec<Call<Option<i64>>>)>) -> HashMap<u32, Stack> {
    let mut reach: HashMap<u32, Stack> = own.iter().map(|(a, (r, _))| (*a, r.map_or(Stack::Any, Stack::Bytes))).collect();
    // (a reach past this many bytes is any)
    const MOST: i64 = 0x1000;
    loop {
        let mut changed = false;
        for (a, (own_reach, calls)) in own {
            let Some(mut r) = *own_reach else { continue };
            let (mut any, mut passed) = (false, false);
            for c in calls {
                let g = match c.target {
                    Some(t) => reach.get(&(t & !1)).copied().unwrap_or(Stack::Any),
                    // (an indirect call's callee is a function of its own: it reads its stack arguments only)
                    None if !c.tail => continue,
                    None => Stack::Passed(0),
                };
                match (g, c.sp) {
                    (Stack::Bytes(x), Some(sp)) | (Stack::Passed(x), Some(sp @ 0)) => {
                        let above = sp + x as i64;
                        if above > MOST {
                            any = true;
                        } else if above > 0 {
                            r = r.max(above as u32);
                        }
                        passed |= matches!(g, Stack::Passed(_));
                    }
                    // (passed on below the entry sp: what the function itself wrote, or not known)
                    (Stack::Passed(x), Some(sp)) if !c.tail && sp + (x as i64) <= 0 => {}
                    _ => any = true,
                }
            }
            let new = if any { Stack::Any } else if passed { Stack::Passed(r) } else { Stack::Bytes(r) };
            if new != reach[a] {
                reach.insert(*a, new);
                changed = true;
            }
        }
        if !changed {
            return reach;
        }
    }
}

// One instruction of the flattened function (statements and conditions with the path of their statement).
#[derive(Clone)]
enum Ins {
    Do(Path, Stmt),
    Cond(Path, Expr), // a condition (of an if, a loop, a switch): evaluated, nothing assigned
    Jump(String),
    JumpIf(String),
    Switch(Vec<String>),
    Label(String),
}

fn flatten(list: &[Stmt], prefix: &[usize], out: &mut Vec<Ins>, fresh: &mut usize) {
    for (i, s) in list.iter().enumerate() {
        let p: Path = [prefix, &[i]].concat();
        match s {
            Stmt::If(c, a, b) => {
                *fresh += 1;
                let (else_l, end_l) = (format!("__else{}", fresh), format!("__end{}", fresh));
                out.push(Ins::Cond(p.clone(), c.clone()));
                out.push(Ins::JumpIf(else_l.clone()));
                flatten(a, &[p.clone(), vec![0]].concat(), out, fresh);
                out.push(Ins::Jump(end_l.clone()));
                out.push(Ins::Label(else_l));
                flatten(b, &[p.clone(), vec![1]].concat(), out, fresh);
                out.push(Ins::Label(end_l));
            }
            Stmt::Goto(l) => out.push(Ins::Jump(l.clone())),
            Stmt::Label(l) => out.push(Ins::Label(l.clone())),
            // (the runtime's re-entry table: only entry 0 is decompiled and proved)
            Stmt::Switch(Expr::Var(v), _) if v == "entry" => {}
            Stmt::Switch(e, cases) => {
                out.push(Ins::Cond(p.clone(), e.clone()));
                out.push(Ins::Switch(cases.iter().map(|(_, l)| l.clone()).collect()));
            }
            Stmt::While { top, test, body, check, cond } => {
                if let Some(t) = test {
                    out.push(Ins::Jump(t.clone()));
                }
                out.push(Ins::Label(top.clone()));
                flatten(body, &[p.clone(), vec![0]].concat(), out, fresh);
                if let Some(t) = test {
                    out.push(Ins::Label(t.clone()));
                }
                flatten(check, &[p.clone(), vec![1]].concat(), out, fresh);
                out.push(Ins::Cond([p.clone(), vec![2]].concat(), cond.clone()));
                match cond {
                    Expr::Num(k, _) if *k != 0 => out.push(Ins::Jump(top.clone())),
                    _ => out.push(Ins::JumpIf(top.clone())),
                }
            }
            other => out.push(Ins::Do(p, other.clone())),
        }
    }
}

// the offset of a 32-bit constant, as a signed number (sp - 4 is written sp + 0xfffffffc too)
fn signed(c: u64) -> i64 {
    c as u32 as i32 as i64
}

struct Run<'a> {
    synced: &'a [(String, CpuField)],
    found: Found,
    recording: bool,
}

impl Run<'_> {
    fn access(&mut self, at: &(Path, usize), a: A, t: Ty) {
        if self.recording {
            self.found.at.insert(at.clone(), a);
        }
        match a {
            A::At(k) => {
                self.found.accesses.entry(k).or_default().insert((t.bits() / 8, t));
            }
            // (an element of an object at k: the words from k up are not private)
            A::From(_) => self.found.escape(a),
            A::Any => {
                self.found.lost = true;
                self.found.why = "unknown address";
            }
            A::Plain | A::K(_) => {}
        }
    }

    // `n` numbers the loads and stores of a statement in the order they are evaluated
    fn eval(&mut self, e: &Expr, st: &mut St, path: &Path, n: &mut usize) -> A {
        match e {
            Expr::Num(c, _) => A::K(c & 0xffff_ffff),
            Expr::Float(..) | Expr::AddrOf(_) => A::Plain,
            Expr::Var(v) => st.var(v),
            Expr::Cpu(f) => st.cpu(&crate::sym::cpu_key(f)),
            Expr::Load(t, a) => {
                let x = self.eval(a, st, path, n);
                let key = (path.clone(), *n);
                *n += 1;
                self.access(&key, x, *t);
                // (a spilled address read back; through an index, any of them)
                match x {
                    A::At(k) => st.spilled.get(&k).copied().unwrap_or(A::Plain),
                    A::From(_) | A::Any if !st.spilled.is_empty() => A::Any,
                    _ => A::Plain,
                }
            }
            Expr::Un(op, a) => {
                let x = self.eval(a, st, path, n);
                match (op, x) {
                    (UnOp::Not, A::K(c)) => A::K(!c & 0xffff_ffff),
                    (UnOp::Neg, A::K(c)) => A::K(c.wrapping_neg() & 0xffff_ffff),
                    _ if *op == UnOp::LNot || !derived(x) => A::Plain,
                    _ => A::Any,
                }
            }
            Expr::Cast(t, a) => {
                let x = self.eval(a, st, path, n);
                match t {
                    Ty::U32 | Ty::S32 => x,
                    _ if !derived(x) => A::Plain,
                    _ if derived(x) => A::Any,
                    _ => A::Plain,
                }
            }
            Expr::Cond(c, a, b) => {
                self.eval(c, st, path, n);
                let (x, y) = (self.eval(a, st, path, n), self.eval(b, st, path, n));
                join(x, y)
            }
            Expr::Call(_, args) => {
                let mut any = false;
                for a in args {
                    any |= derived(self.eval(a, st, path, n));
                }
                for a in args {
                    if let Expr::AddrOf(v) = a {
                        st.set_var(v, A::Plain);
                    }
                }
                if any { A::Any } else { A::Plain }
            }
            Expr::Bin(op, a, b) => {
                let (x, y) = (self.eval(a, st, path, n), self.eval(b, st, path, n));
                let _ = (a, b);
                match (op, x, y) {
                    (BinOp::Add, A::K(p), A::K(q)) => A::K(p.wrapping_add(q) & 0xffff_ffff),
                    (BinOp::Sub, A::K(p), A::K(q)) => A::K(p.wrapping_sub(q) & 0xffff_ffff),
                    (_, A::Plain | A::K(_), A::Plain | A::K(_)) => A::Plain,
                    (BinOp::Add, A::At(k), A::K(c)) | (BinOp::Add, A::K(c), A::At(k)) => A::At(k + signed(c)),
                    (BinOp::Sub, A::At(k), A::K(c)) => A::At(k - signed(c)),
                    (BinOp::Add, A::From(k), A::K(c)) | (BinOp::Add, A::K(c), A::From(k)) => from(k + signed(c)),
                    (BinOp::Sub, A::From(k), A::K(c)) => from(k - signed(c)),
                    // (an index added: an element of the object)
                    (BinOp::Add, A::At(k) | A::From(k), A::Plain) | (BinOp::Add, A::Plain, A::At(k) | A::From(k)) => from(k),
                    // (the distance between two addresses in the frame is a number)
                    (BinOp::Sub, x, y) if derived(x) && derived(y) => A::Plain,
                    (BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge | BinOp::LAnd | BinOp::LOr, ..) => A::Plain,
                    _ => A::Any,
                }
            }
        }
    }

    // a call or a return hands the callee or the caller what the CPU holds (`keeps`: the registers a callee keeps
    // and does not read)
    fn hand_out(&mut self, st: &St, keeps: &dyn Fn(&str) -> bool) {
        let out: Vec<A> = st.cpu.iter().filter(|(k, _)| !keeps(k)).map(|(_, a)| *a).collect();
        for a in out {
            self.found.escape(a);
        }
    }

    // a call's stack arguments: those its callee reaches (`decomp stack-args`); for an indirect call with the rule,
    // the words from its sp up written since the last call (one gap allowed: a callee may overwrite its stack
    // arguments, so a caller writes them again before every call)
    fn stack_arguments(&mut self, st: &St, target: Option<u32>) {
        // the words from sp up written since the last call (one gap allowed)
        let written = |s: i64| -> i64 {
            let mut w = s;
            let mut any = false;
            loop {
                if st.written.contains(&w) {
                    any = true;
                    w += 4;
                } else if any && st.written.contains(&(w + 4)) {
                    w += 4;
                } else {
                    return w;
                }
            }
        };
        match (st.cpu("r13"), target.and_then(reach_of)) {
            // (without the rule: a callee's stack arguments not known)
            (A::At(_), Some(Stack::Passed(_))) | (A::At(_), None) if !rule() => self.found.callee_unknown = true,
            (A::At(s), Some(Stack::Passed(r))) => {
                let end = written(s).max(s + r as i64);
                let mut w = s;
                while w < end {
                    self.found.stack_args.insert(w);
                    w += 4;
                }
            }
            (A::At(s), Some(Stack::Bytes(r))) => {
                let mut w = s;
                while w < s + r as i64 {
                    self.found.stack_args.insert(w);
                    w += 4;
                }
                if r > 0 {
                    // (a miss matters for the words of the frame only, below the entry sp)
                    if written(s) >= (s + r as i64).min(0) {
                        self.found.rule.0 += 1
                    } else {
                        self.found.rule.1 += 1;
                    }
                }
            }
            // (a function's callee whose reach is not known may be a piece of it, which reads its frame: only an
            // indirect call's callee, a function of its own, gets the rule)
            (A::At(_), _) if target.is_some() => self.found.callee_unknown = true,
            (A::At(s), _) => {
                let end = written(s);
                let mut w = s;
                while w < end {
                    self.found.stack_args.insert(w);
                    w += 4;
                }
            }
            _ => {
                self.found.lost = true;
                self.found.why = "sp at a call";
            }
        }
    }

    // runs one instruction; false: the path ends there
    fn step(&mut self, ins: &Ins, st: &mut St) -> bool {
        let (path, s) = match ins {
            Ins::Do(p, s) => (p, s),
            Ins::Cond(p, e) => {
                let mut n = 0;
                self.eval(e, st, p, &mut n);
                return true;
            }
            _ => return true,
        };
        let mut n = 0;
        let callee_keeps = |k: &str| matches!(k, "r4" | "r5" | "r6" | "r7" | "r8" | "r9" | "r10" | "r11" | "r13");
        match s {
            Stmt::Decl(_, v, e, ..) => {
                let a = e.as_ref().map_or(A::Plain, |e| self.eval(e, st, path, &mut n));
                st.set_var(v, a);
            }
            Stmt::Assign(v, e, ..) => {
                let a = self.eval(e, st, path, &mut n);
                st.set_var(v, a);
            }
            Stmt::SetCpu(f, e) => {
                let a = self.eval(e, st, path, &mut n);
                st.set_cpu(&crate::sym::cpu_key(f), a);
            }
            Stmt::Store(t, a, v) => {
                let x = self.eval(a, st, path, &mut n);
                let key = (path.clone(), n);
                n += 1;
                self.access(&key, x, *t);
                if let A::At(k) = x {
                    let bytes = (t.bits() / 8).max(1) as i64;
                    let mut w = k.div_euclid(4) * 4;
                    while w < k + bytes {
                        st.written.insert(w);
                        w += 4;
                    }
                }
                let y = self.eval(v, st, path, &mut n);
                self.found.escape(y);
                match x {
                    A::At(k) if derived(y) && t.bits() == 32 => {
                        st.spilled.insert(k, y);
                    }
                    A::At(k) => {
                        st.spilled.remove(&k);
                    }
                    _ => {}
                }
            }
            Stmt::SyncOut => {
                for (v, f) in self.synced {
                    let a = st.var(v);
                    st.set_cpu(&crate::sym::cpu_key(f), a);
                }
            }
            Stmt::SyncIn => {
                for (v, f) in self.synced {
                    let a = st.cpu(&crate::sym::cpu_key(f));
                    st.set_var(v, a);
                }
            }
            Stmt::GuestCall(_, tail, ..) | Stmt::Dispatch(tail, ..) => {
                let target = if let Stmt::GuestCall(t, _, ..) = s { Some(*t) } else { None };
                // (a fragment of another function may pop what it finds at sp)
                if target.map_or(false, fragment) {
                    self.found.callee_unknown = true;
                }
                // (a tail call leaves r4-r11 to the caller as they are)
                if *tail {
                    self.hand_out(st, &|k: &str| k == "r13");
                } else {
                    self.hand_out(st, &callee_keeps);
                }
                self.stack_arguments(st, target);
                self.found.calls.push(Call { target, sp: st.cpu("r13"), tail: *tail });
                if *tail {
                    return false;
                }
                // (a callee writes the scratch registers, keeps r4-r11 and sp)
                st.cpu.retain(|k, _| callee_keeps(k));
                st.written.clear();
            }
            Stmt::Svc(_) => {
                // (the kernel reads r0-r7 and memory through them)
                self.hand_out(st, &|k: &str| matches!(k, "r8" | "r9" | "r10" | "r11" | "r13"));
                st.cpu.retain(|k, _| callee_keeps(k) && !matches!(k.as_str(), "r4" | "r5" | "r6" | "r7"));
                st.written.clear();
            }
            Stmt::Return => {
                self.hand_out(st, &|k: &str| k == "r13");
                return false;
            }
            Stmt::ReturnUnlessPc(e) => {
                self.eval(e, st, path, &mut n);
                self.hand_out(st, &|k: &str| k == "r13");
            }
            Stmt::Unsupported(_) => {
                self.found.lost = true;
                self.found.why = "unsupported";
            }
            Stmt::Site(_) | Stmt::Preempt | Stmt::Nop | Stmt::Label(_) | Stmt::Goto(_) => {}
            Stmt::If(..) | Stmt::While { .. } | Stmt::Switch(..) => {}
        }
        true
    }
}

// Runs the analysis over a function to its fixed point, then once more recording what it finds.
fn analyse(f: &Function) -> Found {
    let mut prog = Vec::new();
    let mut fresh = 0;
    flatten(&f.body, &[], &mut prog, &mut fresh);
    let mut labels: HashMap<String, usize> = HashMap::new();
    for (i, ins) in prog.iter().enumerate() {
        if let Ins::Label(l) = ins {
            labels.insert(l.clone(), i);
        }
    }
    let mut run = Run { synced: &f.synced, found: Found::default(), recording: false };
    let mut entry = St::default();
    entry.set_cpu("r13", A::At(0));
    for (_, v, e) in &f.locals {
        let a = e.as_ref().map_or(A::Plain, |e| run.eval(e, &mut entry, &vec![usize::MAX], &mut 0));
        entry.set_var(v, a);
    }
    let mut at: HashMap<usize, St> = HashMap::new(); // the state at each label (where paths meet)
    let mut work: Vec<(usize, St)> = vec![(0, entry)]; // (the instruction to run from, the state there)
    // a state reaching a label: merged in; the label runs again when that changed its state
    fn arrive(at: &mut HashMap<usize, St>, work: &mut Vec<(usize, St)>, i: usize, st: &St) {
        let merged = match at.get(&i) {
            Some(old) => {
                let mut m = old.clone();
                m.merge(st);
                if m == *old {
                    return;
                }
                m
            }
            None => st.clone(),
        };
        at.insert(i, merged.clone());
        work.push((i + 1, merged));
    }
    let mut passes = 0;
    // to the fixed point (each label's state only grows, in a lattice of finite height)
    while let Some((mut i, mut st)) = work.pop() {
        passes += 1;
        if passes > 100_000 {
            run.found.lost = true;
            return run.found;
        }
        while i < prog.len() {
            match &prog[i] {
                Ins::Label(_) => {
                    arrive(&mut at, &mut work, i, &st);
                    break;
                }
                Ins::Jump(l) => {
                    if let Some(&t) = labels.get(l) {
                        arrive(&mut at, &mut work, t, &st);
                    }
                    break;
                }
                Ins::JumpIf(l) => {
                    if let Some(&t) = labels.get(l) {
                        arrive(&mut at, &mut work, t, &st);
                    }
                }
                Ins::Switch(ls) => {
                    for l in ls {
                        if let Some(&t) = labels.get(l) {
                            arrive(&mut at, &mut work, t, &st);
                        }
                    }
                }
                ins => {
                    if !run.step(ins, &mut st) {
                        break;
                    }
                }
            }
            i += 1;
        }
    }
    // once more from each block's final state, recording
    run.found = Found::default();
    run.recording = true;
    let mut entry = St::default();
    entry.set_cpu("r13", A::At(0));
    for (_, v, e) in &f.locals {
        let a = e.as_ref().map_or(A::Plain, |e| run.eval(e, &mut entry, &vec![usize::MAX], &mut 0));
        entry.set_var(v, a);
    }
    let mut firsts: Vec<(usize, St)> = vec![(0, entry)];
    let mut keys: Vec<usize> = at.keys().copied().collect();
    keys.sort();
    for k in keys {
        firsts.push((k + 1, at[&k].clone()));
    }
    for (i, mut st) in firsts {
        let mut j = i;
        while j < prog.len() {
            match &prog[j] {
                Ins::Label(_) | Ins::Jump(_) => break,
                Ins::JumpIf(_) | Ins::Switch(_) => {}
                ins => {
                    if !run.step(ins, &mut st) {
                        break;
                    }
                }
            }
            j += 1;
        }
    }
    run.found
}

// The private words of a function (by their distance below the entry sp), from its original; `save_slots`: the
// bytes of the register save area (distances below the entry sp).
pub fn private_words(original: &Function, save_slots: &[u32]) -> BTreeSet<u32> {
    if fragment(original.address) {
        return BTreeSet::new();
    }
    // (an indirect call of a constant address is a call of that function, dispatch.rs)
    let found = analyse(&crate::dispatch::as_direct_calls(original));
    // (the prologue's push, kept or not)
    let mut area = save_slots.to_vec();
    area.extend(crate::saves::push_area(original));
    let w = words(&found, &area);
    if std::env::var("DECOMP_STATS_PRIVATE").is_ok() {
        // the words outside the save area, by why they are not private
        let mut why: BTreeMap<&str, usize> = BTreeMap::new();
        for (&k, kinds) in &found.accesses {
            let d = (-k) as u32;
            if k >= 0 || (0..4).any(|i| d >= i && area.contains(&(d - i))) {
                continue;
            }
            let r = if found.lost {
                found.why
            } else if found.callee_unknown {
                "a callee may read the frame"
            } else if k % 4 != 0 || kinds.len() != 1 || kinds.iter().next().unwrap().0 != 4 {
                "shape"
            } else if found.stack_args.contains(&k) {
                "stack argument"
            } else if found.lowest_escape.map_or(false, |e| k + 4 > e) {
                "above an escape"
            } else if w.contains(&d) {
                "private"
            } else {
                "overlap"
            };
            *why.entry(r).or_default() += 1;
        }
        println!("stats {:?} rule {:?}", why, if found.lost { (0, 0) } else { found.rule });
    }
    if std::env::var("DECOMP_DEBUG_PRIVATE").is_ok() {
        eprintln!("private {:x}: lost {} escape {:?} stack args {:?} accessed {:?} -> {:?}", original.address, found.lost,
                  found.lowest_escape, found.stack_args, found.accesses.keys().collect::<Vec<_>>(), w);
    }
    w
}

// the private words of what the analysis found; `area`: the bytes of the register save area
fn words(found: &Found, area: &[u32]) -> BTreeSet<u32> {
    let mut out = BTreeSet::new();
    if found.lost || found.callee_unknown {
        return out;
    }
    for (&k, kinds) in &found.accesses {
        if k >= 0 || k % 4 != 0 || kinds.len() != 1 || kinds.iter().next().unwrap().0 != 4 {
            continue;
        }
        // (no other access reaches into the word)
        let overlapping = found.accesses.range(k - 7..k + 4).any(|(&j, ks)| j != k && ks.iter().any(|(b, _)| j + *b as i64 > k));
        if overlapping || found.stack_args.contains(&k) || found.lowest_escape.map_or(false, |e| k + 4 > e) {
            continue;
        }
        let d = (-k) as u32;
        if (0..4).any(|i| area.contains(&(d - i))) {
            continue;
        }
        out.insert(d);
    }
    out
}

// The decompiler's pass: the 32-bit accesses of the words in `private` (found private in the original) become a
// variable each, when the function `f` accesses them that way only and with one type. Returns the variables and
// their words' distances; the proof (check.rs) then models those words as a region callees do not reach.
pub fn keep_in_variables(f: &mut Function, private: &BTreeSet<u32>, save_slots: &[u32]) -> Vec<(String, u32)> {
    if private.is_empty() {
        return vec![];
    }
    let mut found = analyse(f);
    // (the stack arguments are the original's: here an indirect call of a constant address is one of an unknown callee)
    found.stack_args.clear();
    let mine = words(&found, save_slots);
    let chosen: BTreeMap<u32, Ty> = private
        .iter()
        .filter(|d| mine.contains(d))
        .filter_map(|d| {
            let kinds = &found.accesses[&-(*d as i64)];
            let (_, t) = *kinds.iter().next().unwrap();
            matches!(t, Ty::U32 | Ty::S32 | Ty::F32).then_some((*d, t))
        })
        .collect();
    if chosen.is_empty() {
        return vec![];
    }
    fn rewrite_expr(e: &mut Expr, path: &Path, n: &mut usize, at: &HashMap<(Path, usize), A>, chosen: &BTreeMap<u32, Ty>) {
        match e {
            Expr::Load(_, a) => {
                rewrite_expr(a, path, n, at, chosen);
                let key = (path.clone(), *n);
                *n += 1;
                if let Some(A::At(k)) = at.get(&key) {
                    if *k < 0 && chosen.contains_key(&((-*k) as u32)) {
                        *e = Expr::Var(variable((-*k) as u32));
                    }
                }
            }
            Expr::Un(_, a) | Expr::Cast(_, a) => rewrite_expr(a, path, n, at, chosen),
            Expr::Bin(_, a, b) => {
                rewrite_expr(a, path, n, at, chosen);
                rewrite_expr(b, path, n, at, chosen);
            }
            Expr::Cond(c, a, b) => {
                rewrite_expr(c, path, n, at, chosen);
                rewrite_expr(a, path, n, at, chosen);
                rewrite_expr(b, path, n, at, chosen);
            }
            Expr::Call(_, args) => args.iter_mut().for_each(|a| rewrite_expr(a, path, n, at, chosen)),
            _ => {}
        }
    }
    fn walk(list: &mut [Stmt], prefix: &[usize], at: &HashMap<(Path, usize), A>, chosen: &BTreeMap<u32, Ty>) {
        for (i, s) in list.iter_mut().enumerate() {
            let p: Path = [prefix, &[i]].concat();
            let mut n = 0;
            match s {
                Stmt::Decl(_, _, Some(e), ..) | Stmt::Assign(_, e, ..) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) => {
                    rewrite_expr(e, &p, &mut n, at, chosen)
                }
                Stmt::Switch(e, _) => rewrite_expr(e, &p, &mut n, at, chosen),
                Stmt::Store(_, a, v) => {
                    rewrite_expr(a, &p, &mut n, at, chosen);
                    let key = (p.clone(), n);
                    n += 1;
                    rewrite_expr(v, &p, &mut n, at, chosen);
                    if let Some(A::At(k)) = at.get(&key) {
                        if *k < 0 && chosen.contains_key(&((-*k) as u32)) {
                            *s = Stmt::Assign(variable((-*k) as u32), v.clone(), crate::ast::Origin(0));
                        }
                    }
                }
                Stmt::If(c, a, b) => {
                    rewrite_expr(c, &p, &mut n, at, chosen);
                    walk(a, &[p.clone(), vec![0]].concat(), at, chosen);
                    walk(b, &[p.clone(), vec![1]].concat(), at, chosen);
                }
                Stmt::While { body, check, cond, .. } => {
                    walk(body, &[p.clone(), vec![0]].concat(), at, chosen);
                    walk(check, &[p.clone(), vec![1]].concat(), at, chosen);
                    rewrite_expr(cond, &[p.clone(), vec![2]].concat(), &mut n, at, chosen);
                }
                _ => {}
            }
        }
    }
    walk(&mut f.body, &[], &found.at, &chosen);
    // each variable starts as what the word holds at the entry (an assignment that goes unless read before written)
    let sp = f.synced.iter().find(|(_, fl)| *fl == CpuField::R(13)).map(|(v, _)| v.clone()).unwrap_or("r13".into());
    // (after the copies of the arguments, which come first)
    let first = f.body.iter().take_while(|s| matches!(s, Stmt::Decl(_, n, Some(Expr::Var(_)), ..) if n.starts_with("arg"))).count();
    let mut out = Vec::new();
    for (k, (d, t)) in chosen.iter().enumerate() {
        let a = Expr::Bin(BinOp::Sub, Box::new(Expr::Var(sp.clone())), Box::new(Expr::Num(*d as u64, Ty::U32)));
        f.body.insert(first + k, Stmt::Assign(variable(*d), Expr::Load(*t, Box::new(a)), crate::ast::Origin(0)));
        f.locals.push((*t, variable(*d), None));
        out.push((variable(*d), *d));
    }
    out
}
