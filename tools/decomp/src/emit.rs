// C++ drafts of proved decompilations, in the repository's conventions (gptr, structs with GUEST_OFFSET checks,
// GUEST_EXPORT), for a person (or a model's name map) to name. A draft stands for the proved
// AST statement for statement; what cannot be written that way yet is refused (Err with the reason).
use crate::ast::*;
use crate::cpp::MAX_FIELD_OFFSET;
use crate::flow::liveness;
use crate::print::cpu;
use std::collections::{BTreeMap, HashMap, HashSet};

type R<T> = Result<T, String>;

const ARGS: [&str; 4] = ["r0", "r1", "r2", "r3"];

// a variable name given as it is (no value lookup): the base of a value written as another plus a constant
const NAMED: &str = "=";

fn callee_saved(r: &str) -> bool {
    matches!(r, "r4" | "r5" | "r6" | "r7" | "r8" | "r9" | "r10" | "r11" | "r14")
}

// the fields of the objects the arguments point to: argument -> offset -> type of the access
pub(crate) fn fields(list: &[Stmt], out: &mut BTreeMap<usize, BTreeMap<u64, Ty>>) -> R<()> {
    fn expr(e: &Expr, out: &mut BTreeMap<usize, BTreeMap<u64, Ty>>) {
        match e {
            Expr::Load(t, a) => {
                if let Some((k, o)) = arg_off_of(a) {
                    out.entry(k).or_default().entry(o).or_insert(*t);
                }
                expr(a, out);
            }
            Expr::Un(_, a) | Expr::Cast(_, a) => expr(a, out),
            Expr::Bin(_, a, b) => {
                expr(a, out);
                expr(b, out);
            }
            Expr::Cond(c, a, b) => {
                expr(c, out);
                expr(a, out);
                expr(b, out);
            }
            Expr::Call(_, args) => args.iter().for_each(|a| expr(a, out)),
            _ => {}
        }
    }
    for s in list {
        match s {
            Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) => expr(e, out),
            Stmt::Store(t, a, v) => {
                if let Some((k, o)) = arg_off_of(a) {
                    out.entry(k).or_default().entry(o).or_insert(*t);
                }
                expr(a, out);
                expr(v, out);
            }
            Stmt::If(c, a, b) => {
                expr(c, out);
                fields(a, out)?;
                fields(b, out)?;
            }
            Stmt::While { cond, body, check, .. } => {
                expr(cond, out);
                fields(body, out)?;
                fields(check, out)?;
            }
            _ => {}
        }
    }
    Ok(())
}

// (a field only below MAX_FIELD_OFFSET: the host does not wrap g_mem + address + offset as the guest does)
pub(crate) fn arg_off_of(a: &Expr) -> Option<(usize, u64)> {
    match a {
        Expr::Var(v) if v.starts_with("arg") => Some((v[3..].parse().ok()?, 0)),
        Expr::Bin(BinOp::Add, b, o) => match (&**b, &**o) {
            (Expr::Var(v), Expr::Num(n, _)) if v.starts_with("arg") && *n < MAX_FIELD_OFFSET => {
                Some((v[3..].parse().ok()?, *n))
            }
            _ => None,
        },
        _ => None,
    }
}

// the C++ type of a type database base type
fn base_c(b: &str) -> &'static str {
    match b {
        "byte" => "u8",
        "sbyte" => "s8",
        "char" => "char",
        "bool" => "bool",
        "ushort" => "u16",
        "short" => "s16",
        "uint" => "u32",
        "int" => "s32",
        "ulonglong" => "u64",
        "longlong" => "s64",
        _ => "u32",
    }
}

fn field_name(t: Ty, off: u64) -> String {
    let kind = match t.bits() {
        8 => "byte",
        16 => "half",
        32 => "word",
        _ => "dword",
    };
    format!("{}_{:x}", kind, off)
}

struct Emitter {
    known: HashMap<usize, String>, // arguments whose struct the repository already has (k -> C++ name)
    stack: bool, // the function uses its stack frame: r13 is the guest's sp, kept in step with the CPU at calls
    framed: bool, // the export pushes the saved registers (GUEST_EXPORT_FRAMED): the push's sp moves are not written
    frame_object: bool, // a guest::StackFrame holds the frame (else addresses in it are from the CPU's sp)
    reload: Vec<(String, String)>, // after a call: variable <- CPU field (what SI() reads back)
    has_sp: bool,                  // the function keeps r13 in a variable
    float_args: Vec<(String, u32)>, // float registers to hand over before a call (variable, s index)
    call_list: Vec<String>,         // the same, one by one
    needs: HashMap<u32, Need>,      // what each direct callee is handed (signatures.rs)
    has_r0: bool,                   // the function keeps r0 in a variable (else results stay in the CPU)
    pc: Option<String>,             // the target of the next indirect call (the AST sets c->pc first)
    virtual_slot: Option<String>,   // what it is, when it is a vtable slot of an object (a comment for the call)
    slots: HashMap<String, String>, // variables (as written) loaded from a vtable slot -> what the slot is
    tables: HashMap<String, String>, // variables (as written) loaded from an object's first word -> the object
    fields: BTreeMap<usize, BTreeMap<u64, Ty>>,
    struct_name: HashMap<usize, String>,
    callees: BTreeMap<u32, String>, // target -> local guest::Function name
    // before a plain return: the registers a caller sees that the function changes, handed back as SO() does
    write_back: Vec<(String, String)>, // (CPU field, variable)
    svc_regs: Vec<(String, u32)>,      // r0-r7 kept in variables: handed to a system call and read back after it
    live: crate::flow::Liveness,       // what is read later, by statement path (flow.rs numbering)
    labels: HashSet<String>,           // the labels written so far (a goto to one is a loop's back edge)
    values: crate::values::Values,     // each variable split into its values (values.rs)
    globals: std::cell::RefCell<BTreeMap<(u64, Ty), String>>, // accesses at a constant address: their guest::global
    vtables: std::cell::RefCell<BTreeMap<u64, String>>,       // the vtable addresses written by name
    cur: Vec<usize>,                   // the path of the statement being written (which value a variable is there)
    exits: HashMap<String, Exit>,      // short blocks that end the function, written in place of a goto to them
    targets: HashSet<String>,          // labels something other than such a goto still jumps to
    returns: bool,                     // the function returns r0
    after_calls: HashSet<Vec<usize>>,  // calls every path reaches through another call (flow::after_calls)
    sites: HashMap<Vec<usize>, Vec<String>>, // the indirect calls' sites (sites.rs)
    site_extras: HashMap<Vec<usize>, Vec<String>>, // what they hand over through the CPU besides (site_extras)
    synced: Vec<(String, CpuField)>,
    fallthrough: HashMap<Vec<usize>, String>, // gotos at the end of an if right before a label (fallthrough_gotos)
    breaks: HashSet<Vec<usize>>, // gotos out of the innermost loop (loop_breaks)
    folding: std::cell::Cell<bool>, // printing an expression with its constants written in (expr)
    arities: HashMap<u32, usize>,      // the arguments each direct callee is written with (at most)
    fixed: bool,                       // the second pass: every call to a callee writes arities[callee] arguments
    var_types: HashMap<String, Ty>,    // the decompiled function's variables and their types
    typed: HashMap<String, String>,    // locals written as pointers to a struct of their own (C++ name -> struct)
    local_fields: HashMap<String, BTreeMap<u64, Ty>>, // their fields: offset -> type of the access
    foldable: HashMap<String, bool>,   // values defined by a pure expression of their type -> whether it reads memory
    out: String,
}

// A label's block when it is short, straight and ends the function (a return or a tail call): a goto to it is
// written as a copy of it, an early return. The copy runs the same statements, so the proof is unchanged. A short
// straight block ending with a goto (a jump block: `L: r1 = 4; goto M;`) is copied the same way, so that a goto to it
// at the end of an if right before M becomes the block's statements in the if.
#[derive(Clone)]
struct Exit {
    list: Vec<Stmt>, // the list holding it, from its first statement (path numbering continues from `first`)
    prefix: Vec<usize>,
    first: usize,
    written: usize, // the statements a copy writes
    jump: Option<String>, // a jump block's goto
    only_gotos: bool, // reached by gotos only (after a statement that does not fall through)
}

const EXIT_BLOCK_STATEMENTS: usize = 8;
// the statements all the copies of an exit block may add (its size times the gotos to it)
const EXIT_COPIES_STATEMENTS: usize = 16;

fn exit_blocks(list: &[Stmt], prefix: &[usize], out: &mut HashMap<String, Exit>) {
    for (i, s) in list.iter().enumerate() {
        let path: Vec<usize> = [prefix, &[i]].concat();
        match s {
            Stmt::Label(l) => {
                let rest = &list[i + 1..];
                let end = rest.iter().position(|x| matches!(x, Stmt::Return | Stmt::GuestCall(_, true) | Stmt::Dispatch(true) | Stmt::Goto(_)));
                let jump = end.and_then(|k| if let Stmt::Goto(m) = &rest[k] { Some(m.clone()) } else { None });
                let only_gotos = i > 0 && matches!(list[i - 1], Stmt::Return | Stmt::Goto(_) | Stmt::GuestCall(_, true) | Stmt::Dispatch(true));
                if let (Some(k), true) = (end, jump.as_ref() != Some(l)) {
                    // (labels inside are fine while only gotos to exit blocks reach them: see exits_and_targets)
                    let straight = rest[..k].iter().all(|x| {
                        !matches!(
                            x,
                            Stmt::If(..) | Stmt::While { .. } | Stmt::Switch(..) | Stmt::Goto(_)
                                | Stmt::GuestCall(..) | Stmt::Dispatch(_) | Stmt::Svc(_) | Stmt::Unsupported(_)
                        )
                    });
                    // (counting what is written: not the calling-convention bookkeeping)
                    let written = rest[..k]
                        .iter()
                        .filter(|x| !stack_bookkeeping(x) && !matches!(x, Stmt::Label(_) | Stmt::Nop | Stmt::Site(_) | Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::SetCpu(CpuField::Pc, _)))
                        .count();
                    if straight && written < EXIT_BLOCK_STATEMENTS {
                        out.insert(l.clone(), Exit { list: rest[..=k].to_vec(), prefix: prefix.to_vec(), first: i + 1, written, jump, only_gotos });
                    }
                }
            }
            Stmt::If(_, a, b) => {
                exit_blocks(a, &[path.clone(), vec![0]].concat(), out);
                exit_blocks(b, &[path.clone(), vec![1]].concat(), out);
            }
            Stmt::While { body, check, .. } => {
                exit_blocks(body, &[path.clone(), vec![0]].concat(), out);
                exit_blocks(check, &[path.clone(), vec![1]].concat(), out);
            }
            _ => {}
        }
    }
}

// The gotos to the label right after the innermost loop around them: written `break;`. (`follow`: the label control
// reaches past the end of the list, when the list is the last thing before it.)
fn loop_breaks(list: &[Stmt], prefix: &[usize], exit: Option<&str>, follow: Option<&str>, out: &mut HashSet<Vec<usize>>) {
    for (i, s) in list.iter().enumerate() {
        let path: Vec<usize> = [prefix, &[i]].concat();
        // the label right after this statement
        let after = match list.get(i + 1) {
            Some(Stmt::Label(l)) => Some(l.as_str()),
            None => follow,
            _ => None,
        };
        match s {
            Stmt::Goto(l) if Some(l.as_str()) == exit => {
                out.insert(path);
            }
            Stmt::If(_, a, b) => {
                loop_breaks(a, &[path.clone(), vec![0]].concat(), exit, after, out);
                loop_breaks(b, &[path.clone(), vec![1]].concat(), exit, after, out);
            }
            Stmt::While { body, check, test, .. } => {
                loop_breaks(body, &[path.clone(), vec![0]].concat(), after, None, out);
                // (a for loop's check comes before its exit test, which cpp.rs finds as the first `if (...) break;`)
                let exit = if test.is_some() { None } else { after };
                loop_breaks(check, &[path.clone(), vec![1]].concat(), exit, None, out);
            }
            _ => {}
        }
    }
}

// The gotos that end a branch of an if right before a label (path -> that label): a copy of a jump block to that
// label needs no goto there.
fn fallthrough_gotos(list: &[Stmt], prefix: &[usize], out: &mut HashMap<Vec<usize>, String>) {
    for (i, s) in list.iter().enumerate() {
        let path: Vec<usize> = [prefix, &[i]].concat();
        match s {
            Stmt::If(_, a, b) => {
                if let Some(Stmt::Label(m)) = list.get(i + 1) {
                    for (k, branch) in [a, b].into_iter().enumerate() {
                        if let Some(Stmt::Goto(_)) = branch.last() {
                            out.insert([path.clone(), vec![k, branch.len() - 1]].concat(), m.clone());
                        }
                    }
                }
                fallthrough_gotos(a, &[path.clone(), vec![0]].concat(), out);
                fallthrough_gotos(b, &[path.clone(), vec![1]].concat(), out);
            }
            Stmt::While { body, check, .. } => {
                fallthrough_gotos(body, &[path.clone(), vec![0]].concat(), out);
                fallthrough_gotos(check, &[path.clone(), vec![1]].concat(), out);
            }
            _ => {}
        }
    }
}

// the labels jumped to other than by a goto to an exit block (switch cases, loops, other gotos); a jump block's goto
// counts where a copy of it keeps it (not right before its label), and the block itself not when only gotos reach it
fn jump_targets(list: &[Stmt], prefix: &[usize], exits: &HashMap<String, Exit>, fallthrough: &HashMap<Vec<usize>, String>,
                breaks: &HashSet<Vec<usize>>, out: &mut HashSet<String>) {
    let mut skip_to: Option<usize> = None;
    for (i, s) in list.iter().enumerate() {
        let path: Vec<usize> = [prefix, &[i]].concat();
        if let Some(k) = skip_to {
            if i <= k {
                continue;
            }
            skip_to = None;
        }
        match s {
            Stmt::Label(l) => {
                if let Some(x) = exits.get(l).filter(|x| x.jump.is_some() && x.only_gotos) {
                    skip_to = Some(i + x.list.len());
                }
            }
            Stmt::Goto(l) if fallthrough.get(&path) == Some(l) => {}
            Stmt::Goto(l) => match exits.get(l) {
                None => {
                    if !breaks.contains(&path) {
                        out.insert(l.clone());
                    }
                }
                Some(x) => {
                    if let Some(m) = &x.jump {
                        if fallthrough.get(&path) != Some(m) && !exits.contains_key(m) {
                            out.insert(m.clone());
                        }
                    }
                }
            },
            Stmt::Switch(_, cases) => out.extend(cases.iter().map(|(_, l)| l.clone())),
            Stmt::If(_, a, b) => {
                jump_targets(a, &[path.clone(), vec![0]].concat(), exits, fallthrough, breaks, out);
                jump_targets(b, &[path.clone(), vec![1]].concat(), exits, fallthrough, breaks, out);
            }
            // (a loop's own labels: only when something else jumps to them)
            Stmt::While { body, check, .. } => {
                jump_targets(body, &[path.clone(), vec![0]].concat(), exits, fallthrough, breaks, out);
                jump_targets(check, &[path.clone(), vec![1]].concat(), exits, fallthrough, breaks, out);
            }
            _ => {}
        }
    }
}

// The vtables of the RTTI's classes (DECOMP_RTTI, default build/acnl/rtti.json), by address: `vtable_<class>`, or
// `vtable_<class>_at_<offset>` for the one of a base class at that offset; the constants written by those names.
fn vtable_names() -> &'static HashMap<u64, String> {
    static NAMES: std::sync::OnceLock<HashMap<u64, String>> = std::sync::OnceLock::new();
    NAMES.get_or_init(|| {
        let taken = crate::structs::taken_names("games/acnl/src");
        let classes = crate::structs::classes(&std::env::var("DECOMP_RTTI").unwrap_or("build/acnl/rtti.json".into()), &taken);
        let mut out = HashMap::new();
        for c in classes {
            for (address, top) in c.vtables {
                let name = if top == 0 { format!("vtable_{}", c.name) } else { format!("vtable_{}_at_{:x}", c.name, -top) };
                out.entry(address).or_insert(name);
            }
        }
        out
    })
}

fn num(v: u64, t: Ty) -> String {
    // a hex literal in a statement gets a comment on its line (no magic numbers): the emitter adds "// (from the
    // original)"; the declarations that name one (globals, callees, field offsets) need none
    let suffix = match t {
        Ty::U32 => "u",
        Ty::U64 => "ull",
        Ty::S64 => "ll",
        _ => "",
    };
    if v < 10 {
        format!("{}{}", v, suffix)
    } else {
        format!("0x{:x}{}", v, suffix)
    }
}

fn prec(op: BinOp) -> u32 {
    match op {
        BinOp::LOr => 1,
        BinOp::LAnd => 2,
        BinOp::Or => 3,
        BinOp::Xor => 4,
        BinOp::And => 5,
        BinOp::Eq | BinOp::Ne => 6,
        BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge => 7,
        BinOp::Shl | BinOp::Shr => 8,
        BinOp::Add | BinOp::Sub => 9,
        BinOp::Mul | BinOp::Div | BinOp::Rem => 10,
    }
}

fn op_text(op: BinOp) -> &'static str {
    match op {
        BinOp::Add => "+",
        BinOp::Sub => "-",
        BinOp::Mul => "*",
        BinOp::Div => "/",
        BinOp::Rem => "%",
        BinOp::And => "&",
        BinOp::Or => "|",
        BinOp::Xor => "^",
        BinOp::Shl => "<<",
        BinOp::Shr => ">>",
        BinOp::Eq => "==",
        BinOp::Ne => "!=",
        BinOp::Lt => "<",
        BinOp::Le => "<=",
        BinOp::Gt => ">",
        BinOp::Ge => ">=",
        BinOp::LAnd => "&&",
        BinOp::LOr => "||",
    }
}

impl Emitter {
    // what SO() hands over to a callee besides r0-r3: the stack pointer and the float arguments
    // before a tail call: the callee-saved registers the function changed (a fragment of a function hands them on;
    // the callee keeps them, so they are what the caller sees)
    // Whether writing back callee-saved register `field` from `v` at `path` changes nothing: `v` holds the register's
    // entry value there, which the CPU still has (the C++ writes r4-r11 to the CPU only on the way out, and callees
    // keep them; a system call's are read back into new values).
    fn unchanged(&self, path: &[usize], field: &str, v: &str) -> bool {
        let kept = (4..12).any(|k| field == format!("guest::cpu()->r[{}]", k));
        kept && self.values.entry_value(path, v).map_or(false, |e| e == v)
    }

    fn tail_write_back(&mut self, indent: usize, path: &[usize]) {
        for (field, v) in self.tail_writes() {
            if self.unchanged(path, &field, &v) {
                continue;
            }
            let text = format!("{} = {};", field, self.var_text(path, &v));
            self.line(indent, &text);
        }
    }

    // what a tail call hands back besides the callee's results: the callee-saved registers the function changed
    fn tail_writes(&self) -> Vec<(String, String)> {
        self.write_back
            .iter()
            .filter(|(field, _)| !["guest::cpu()->r[1]", "guest::cpu()->s[0]", "guest::cpu()->s[1]", "guest::cpu()->r[13]"].contains(&field.as_str()))
            .cloned()
            .collect()
    }

    // the float arguments written before a call (variable, s index)
    fn floats_for(&self, target: Option<u32>, path: &[usize]) -> Vec<(String, u32)> {
        if let (None, Some(_)) = (target, self.sites.get(path)) {
            return vec![];
        }
        let need = target.and_then(|t| self.needs.get(&t)).cloned();
        self.float_args.iter().filter(|(_, k)| need.as_ref().map_or(true, |n| n.full || n.floats.contains(k))).cloned().collect()
    }

    // the core arguments of a call, as written (registers the function keeps, the CPU's for the others); an indirect
    // call with a site (sites.rs) passes the site's
    fn args_for(&self, target: Option<u32>, path: &[usize]) -> Vec<String> {
        let arity = match (target, self.sites.get(path)) {
            (None, Some(site)) => site.iter().filter(|r| r.starts_with('r')).count(),
            _ => target.and_then(|t| self.needs.get(&t)).map_or(4, |n| if n.full { 4 } else { n.arity }),
        };
        self.call_list[..arity].to_vec()
    }

    // The float arguments of an indirect call with a site, as C++ arguments (the float registers it does not keep from
    // the CPU), and the registers it hands over through the CPU besides: the results read after the call, which may
    // pass through the callee, or every argument register when a scratch result is read (site_extras).
    fn site_floats(&self, path: &[usize]) -> Vec<String> {
        let Some(site) = self.sites.get(path) else { return vec![] };
        site.iter()
            .filter_map(|r| r.strip_prefix('s').and_then(|k| k.parse::<u32>().ok()))
            .map(|k| match self.float_args.iter().find(|(_, j)| *j == k) {
                Some((v, _)) => v.clone(),
                None => format!("guest::cpu()->s[{}]", k),
            })
            .collect()
    }

    fn site_extra(&self, path: &[usize]) -> Vec<(String, String)> {
        let Some(extra) = self.site_extras.get(path) else { return vec![] };
        let mut out = Vec::new();
        for k in extra {
            let Some((v, _)) = self.synced.iter().find(|(_, fl)| crate::sym::cpu_key(fl) == *k) else { continue };
            let field = match k.strip_prefix('s') {
                Some(n) => format!("guest::cpu()->s[{}]", n),
                None => format!("guest::cpu()->r[{}]", &k[1..]),
            };
            out.push((field, v.clone()));
        }
        out
    }

    // What the emitter reads and writes at a call, a return or a system call (values.rs): the variables it writes
    // there, and those it reads back.
    fn effects(&self, s: &Stmt, path: &[usize]) -> (Vec<String>, Vec<String>) {
        let is_var = |a: &String| !a.starts_with("guest::");
        let mut uses: Vec<String> = Vec::new();
        let mut defs: Vec<String> = Vec::new();
        match s {
            Stmt::GuestCall(_, tail) | Stmt::Dispatch(tail) => {
                let target = if let Stmt::GuestCall(t, _) = s { Some(*t) } else { None };
                uses.extend(self.args_for(target, path).into_iter().filter(is_var));
                uses.extend(self.floats_for(target, path).into_iter().map(|(v, _)| v));
                uses.extend(self.site_floats(path).into_iter().filter(is_var));
                uses.extend(self.site_extra(path).into_iter().map(|(_, v)| v));
                if *tail {
                    uses.extend(self.tail_writes().into_iter().map(|(_, v)| v));
                } else {
                    if self.result_read(path) {
                        defs.push("r0".into());
                    }
                    defs.extend(self.reloads_after(path).into_iter().map(|(v, _)| v));
                }
            }
            Stmt::Return => {
                uses.extend(self.write_back.iter().map(|(_, v)| v.clone()));
                if self.returns && self.has_r0 {
                    uses.push("r0".into());
                }
            }
            Stmt::Svc(_) => {
                uses.extend(self.svc_regs.iter().map(|(v, _)| v.clone()));
                defs.extend(self.svc_regs.iter().map(|(v, _)| v.clone()));
            }
            _ => {}
        }
        (uses, defs)
    }

    fn before_call(&mut self, indent: usize, target: Option<u32>, path: &[usize]) {
        if self.stack && self.has_sp {
            self.line(indent, "guest::cpu()->r[13] = r13;");
        }
        for (v, k) in self.floats_for(target, path) {
            let text = format!("guest::cpu()->s[{}] = {};", k, self.var_text(path, &v));
            self.line(indent, &text);
        }
    }

    // a load or store of argN + off through the repository's struct: (read expression, the place, the conversion a
    // stored value goes through, `{}` standing for the value)
    fn known_field(&self, t: Ty, a: &Expr) -> Option<(String, String, String)> {
        let (k, off) = arg_off_of(a)?;
        let st = self.known.get(&k)?;
        let db = crate::view::types()?;
        let bytes = (t.bits() / 8) as u64;
        let path = db.field_path(st, off, bytes)?;
        let base = db.field_base(st, off, bytes)?;
        let place = format!("arg{}->{}", k, path);
        Some(match base.as_str() {
            "float" => (format!("std::bit_cast<u32>({})", place), place, "std::bit_cast<float>(u32({}))".into()),
            "ptr" => (format!("{}.addr()", place), place, "gptr<void>(u32({}))".into()),
            // (no conversion when the field already has the access's type)
            _ if base_c(&base) == t.c_name() => (place.clone(), place, format!("{}({{}})", t.c_name())),
            _ => (format!("{}({})", t.c_name(), place), place, format!("{}({}({{}}))", base_c(&base), t.c_name())),
        })
    }

    fn field_access(&self, t: Ty, a: &Expr) -> Option<String> {
        if let Some((read, _, _)) = self.known_field(t, a) {
            return Some(read);
        }
        let (k, off) = arg_off_of(a)?;
        if self.fields.get(&k)?.get(&off) == Some(&t) {
            Some(format!("arg{}->{}", k, field_name(t, off)))
        } else {
            None
        }
    }

    // the Z / N flag of a VFP comparison as the comparison (exact: Z is a == b, N is a < b, both false for NaN)
    fn float_compare(&self, e: &Expr) -> R<Option<String>> {
        if let Expr::Bin(BinOp::And, x, one) = e {
            if let (Expr::Bin(BinOp::Shr, y, k), Expr::Num(1, _)) = (&**x, &**one) {
                let op = match **k {
                    Expr::Num(30, _) => "==",
                    Expr::Num(31, _) => "<",
                    _ => return Ok(None),
                };
                if let Expr::Bin(BinOp::Or, _, cmp) = &**y {
                    if let Expr::Call(n, args) = &**cmp {
                        if n == "vfp_cmpf" && args.len() == 2 {
                            return Ok(Some(format!("u32({} {} {})", self.expr(&args[0], 7)?, op, self.expr(&args[1], 7)?)));
                        }
                    }
                }
            }
        }
        Ok(None)
    }

    fn expr(&self, e: &Expr, outer: u32) -> R<String> {
        // the constants variables hold written in, when that simplifies the expression (`s32(0u) < 0` is false)
        if !self.folding.get() {
            let mut with = e.clone();
            if self.constants_in(&mut with) {
                let mut folded = with.clone();
                // (an offset value's base is a u32 variable given by name)
                let mut types = self.var_types.clone();
                crate::values::each_var(&with, &mut |v| {
                    if v.starts_with(NAMED) {
                        types.insert(v.to_string(), Ty::U32);
                    }
                });
                crate::simplify::fold(&mut folded, &types);
                if folded != with {
                    self.folding.set(true);
                    let text = self.expr(&folded, outer);
                    self.folding.set(false);
                    return text;
                }
            }
        }
        if let Some(c) = self.float_compare(e)? {
            return Ok(c);
        }
        Ok(match e {
            Expr::Num(v, Ty::U32) if vtable_names().contains_key(v) => {
                let name = vtable_names()[v].clone();
                self.vtables.borrow_mut().insert(*v, name.clone());
                name
            }
            Expr::Num(v, t) => num(*v, *t),
            Expr::Float(v, t) => {
                if !v.is_finite() {
                    return Err("a float literal that is not finite".into());
                }
                format!("{:?}{}", v, if *t == Ty::F32 { "f" } else { "" })
            }
            // an address in the stack frame
            _ if sp_offset(e).is_some() => self.frame_address(sp_offset(e).unwrap()),
            Expr::Var(n) if n.starts_with("arg") => format!("{}.addr()", n),
            // (a value that is another plus a constant, as that sum: precedence as an addition)
            Expr::Var(n) if self.values.offset(&self.cur, n).is_some() => {
                let (name, k) = self.values.offset(&self.cur, n).unwrap().clone();
                let base = format!("{}{}", NAMED, name);
                let mut sum = Expr::Bin(BinOp::Add, Box::new(Expr::Var(base.clone())), Box::new(Expr::Num(k, Ty::U32)));
                let mut types = HashMap::new();
                types.insert(base, Ty::U32);
                crate::simplify::fold(&mut sum, &types);
                return self.expr(&sum, outer);
            }
            Expr::Var(n) => self.var_text(&self.cur, n),
            // the thread's TLS address (IPC buffers): the CPU's, it never changes
            Expr::Cpu(CpuField::Tls) => "guest::cpu()->tls".into(),
            Expr::Cpu(f) => return Err(format!("reads {}", cpu(f))),
            Expr::Un(op, a) => format!("{}{}", match op {
                UnOp::Neg => "-",
                UnOp::Not => "~",
                UnOp::LNot => "!",
            }, self.expr(a, 11)?),
            // arithmetic on constants (a value folded to its constant meets another): its result
            Expr::Bin(..) if self.constant_u32(e).is_some() => num(self.constant_u32(e).unwrap(), Ty::U32),
            // x + K with K a negative 32-bit offset (2^32 - k): x - k (the same in wrapping u32 arithmetic)
            Expr::Bin(BinOp::Add, a, b)
                if matches!(&**b, Expr::Num(k, Ty::U32) if *k >= 0xffff_0000 && *k <= 0xffff_ffff) && self.constant_u32(a).is_none() =>
            {
                let Expr::Num(k, _) = &**b else { unreachable!() };
                let minus = Expr::Bin(BinOp::Sub, a.clone(), Box::new(Expr::Num(0x1_0000_0000 - *k, Ty::U32)));
                return self.expr(&minus, outer);
            }
            // K + x as x + K (an address: base, then offset)
            Expr::Bin(BinOp::Add, a, b) if self.constant_u32(a).is_some() && self.constant_u32(b).is_none() => {
                return self.expr(&Expr::Bin(BinOp::Add, b.clone(), a.clone()), outer);
            }
            // a comparison of an unsigned narrow value widened to u32 with an unsigned value or a constant: without the
            // widening (both sides are non-negative either way, the truth is the same)
            Expr::Bin(op @ (BinOp::Eq | BinOp::Ne | BinOp::Lt | BinOp::Le | BinOp::Gt | BinOp::Ge), a, b)
                if self.narrow_widened(a).is_some() || self.narrow_widened(b).is_some() =>
            {
                let unsigned = |x: &Expr| matches!(x, Expr::Num(k, _) if *k < 1 << 31) || matches!(crate::types::type_of(x, &self.var_types), Some(Ty::U32 | Ty::U16 | Ty::U8));
                let (x, y) = (self.narrow_widened(a).unwrap_or(a), self.narrow_widened(b).unwrap_or(b));
                if !(unsigned(a) && unsigned(b)) {
                    let p = prec(*op);
                    let s = format!("{} {} {}", self.expr(a, p - 1)?, op_text(*op), self.expr(b, p)?);
                    return Ok(if p <= outer { format!("({})", s) } else { s });
                }
                let p = prec(*op);
                let s = format!("{} {} {}", self.expr(x, p - 1)?, op_text(*op), self.expr(y, p)?);
                if p <= outer { format!("({})", s) } else { s }
            }
            // s32(x) of a signed byte or halfword: C++ promotes it to int (s32) anyway
            Expr::Cast(Ty::S32, x) if matches!(crate::types::type_of(x, &self.var_types), Some(Ty::S8 | Ty::S16)) => self.expr(x, outer)?,
            // a byte or halfword loaded and taken as signed: the signed load
            Expr::Cast(t @ (Ty::S8 | Ty::S16), a) if matches!(&**a, Expr::Load(lt, addr) if lt.bits() == t.bits() && sp_offset(addr).is_none() && self.local_field(*lt, addr).is_none() && self.field_access(*lt, addr).is_none() && self.constant_address(addr).is_none()) => {
                let Expr::Load(_, addr) = &**a else { unreachable!() };
                format!("*gptr<{}>({})", t.c_name(), self.expr(addr, 0)?)
            }
            Expr::Bin(op, a, b) => {
                let p = prec(*op);
                // (a right operand with the same associative operator needs no parentheses: a || b || c)
                let assoc = matches!(op, BinOp::LOr | BinOp::LAnd | BinOp::Or | BinOp::And | BinOp::Xor)
                    && matches!(&**b, Expr::Bin(o, _, _) if o == op);
                let s = format!("{} {} {}", self.expr(a, p - 1)?, op_text(*op), self.expr(b, if assoc { p - 1 } else { p })?);
                if p <= outer {
                    format!("({})", s)
                } else {
                    s
                }
            }
            Expr::Cast(t, a) => format!("{}({})", t.c_name(), self.expr(a, 0)?),
            // (parentheses unless it is a whole value: a return's, an assignment's, an argument)
            Expr::Cond(c, a, b) => {
                let t = format!("{} ? {} : {}", self.expr(c, 1)?, self.expr(a, 0)?, self.expr(b, 0)?);
                if outer == 0 { t } else { format!("({})", t) }
            }
            Expr::Load(t, a) if sp_offset(a).is_some() => self.frame_place(*t, sp_offset(a).unwrap()),
            Expr::Load(t, a) if self.local_field(*t, a).is_some() => self.local_field(*t, a).unwrap(),
            Expr::Load(t, a) => match self.field_access(*t, a) {
                Some(f) => f,
                None => match self.constant_address(a) {
                    Some(addr) if !t.float() => format!("*{}", self.global(addr, *t)),
                    _ => match self.indexed(*t, a)? {
                        Some(place) => place,
                        None => format!("*gptr<{}>({})", t.c_name(), self.expr(a, 0)?),
                    },
                },
            },
            Expr::Call(n, args) => {
                // a float of the read-only segments (a literal pool's): the number (written so that it reads back to
                // the same bits)
                if let (true, [Expr::Load(Ty::U32, addr)]) = (n == "U2F", args.as_slice()) {
                    if let Some(w) = self.constant_u32(addr).and_then(|k| crate::image::word(k as u32)) {
                        let v = f32::from_bits(w);
                        let text = format!("{:?}", v);
                        if v.is_finite() && text.parse::<f64>().map_or(false, |x| (x as f32).to_bits() == w) {
                            return Ok(format!("{}f", text));
                        }
                    }
                }
                let a: R<Vec<String>> = args.iter().map(|x| self.expr(x, 0)).collect();
                if n == "U2F" {
                    if let [Expr::Load(Ty::U32, addr)] = args.as_slice() {
                        if let Some((_, place, wrap)) = self.known_field(Ty::U32, addr) {
                            if wrap.starts_with("std::bit_cast<float>") {
                                return Ok(place);
                            }
                        }
                    }
                }
                match n.as_str() {
                    "F2U" => format!("std::bit_cast<u32>({})", a?[0]),
                    "D2B" => format!("std::bit_cast<u64>({})", a?[0]),
                    "U2F" => format!("std::bit_cast<float>({})", a?[0]),
                    // the runtime's helpers (3dsrecomp/runtime/cpu.h)
                    _ => format!("{}({})", n, a?.join(", ")),
                }
            }
            Expr::AddrOf(n) => format!("&{}", n),
        })
    }

    // u32(x) with x an unsigned narrow value (a u8 or u16 load or variable): x
    fn narrow_widened<'e>(&self, e: &'e Expr) -> Option<&'e Expr> {
        match e {
            Expr::Cast(Ty::U32, x) if matches!(crate::types::type_of(x, &self.var_types), Some(Ty::U8 | Ty::U16)) => Some(&**x),
            _ => None,
        }
    }

    // a value stored as a T: as written when it already has the type or is a constant that fits, else converted
    fn stored(&self, t: Ty, v: &Expr, text: String) -> String {
        // (a constant, written or held in a variable, that fits: a plain number, no suffix to convert)
        let konst = match v {
            Expr::Num(k, _) => Some(*k),
            _ => self.constant_u32(v),
        };
        match konst {
            // (a vtable's address by its name)
            Some(k) if t == Ty::U32 && vtable_names().contains_key(&k) => self.expr(&Expr::Num(k, Ty::U32), 0).unwrap_or(text),
            Some(k) if !t.float() && t.bits() < 64 && k < 1u64 << t.bits() => num(k, Ty::S32),
            _ if crate::types::type_of(v, &self.var_types) == Some(t) => text,
            _ => format!("{}({})", t.c_name(), text),
        }
    }

    // the address k bytes above the frame's bottom, and the T there
    fn frame_address(&self, k: u64) -> String {
        if self.frame_object {
            format!("frame.at({}).addr()", num(k, Ty::S32))
        } else if k == 0 {
            "guest::cpu()->r[13]".into()
        } else {
            format!("guest::cpu()->r[13] + {}", num(k, Ty::U32))
        }
    }

    fn frame_place(&self, t: Ty, k: u64) -> String {
        if self.frame_object {
            format!("*frame.at<{}>({})", t.c_name(), num(k, Ty::S32))
        } else {
            format!("*gptr<{}>({})", t.c_name(), self.frame_address(k))
        }
    }

    fn line(&mut self, indent: usize, text: &str) {
        // (writing back a value the register holds: nothing to do)
        if let Some((a, b)) = text.strip_suffix(';').and_then(|t| t.split_once(" = ")) {
            if a == b && a.starts_with("guest::cpu()->") {
                return;
            }
        }
        self.out.push_str(&"    ".repeat(indent));
        self.out.push_str(text);
        // no magic numbers: a comment on every line with a hex literal
        if text.contains("0x") && !text.contains("//") {
            self.out.push_str("  // (from the original)");
        }
        self.out.push('\n');
    }

    // the variables of `reload` live after the SI() that follows the statement at `path` (all when unknown)
    // `x = value;`, a typed local's value converted to the pointer to its struct
    fn assignment(&self, x: &str, value: &str) -> String {
        match self.typed.get(x) {
            Some(st) => format!("{} = gptr<{}>({});", x, st, value),
            None => format!("{} = {};", x, value),
        }
    }

    fn reloads_after(&self, path: &[usize]) -> Vec<(String, String)> {
        let mut next = path.to_vec();
        *next.last_mut().unwrap() += 1;
        let read: Vec<(String, String)> = match self.live.live_out.get(&next) {
            Some(live) => self.reload.iter().filter(|(v, _)| live.contains(v)).cloned().collect(),
            None => self.reload.clone(),
        };
        // (not a value the CPU's register holds wherever it is read)
        read.into_iter().filter(|(v, _)| !self.values.held_def(path, v)).collect()
    }

    // an access of type t at base + (i << k) or base + i * n, the element's size: `gptr<T>(base)[i]`
    fn indexed(&self, t: Ty, a: &Expr) -> R<Option<String>> {
        let size = (t.bits() / 8) as u64;
        let index = |e: &Expr| -> Option<Expr> {
            match e {
                Expr::Bin(BinOp::Shl, i, k) if matches!(**k, Expr::Num(k, _) if k < 32 && 1u64 << k == size) => Some((**i).clone()),
                Expr::Bin(BinOp::Mul, i, n) if matches!(**n, Expr::Num(n, _) if n == size) => Some((**i).clone()),
                _ => None,
            }
        };
        let Expr::Bin(BinOp::Add, x, y) = a else { return Ok(None) };
        let (base, i) = match (index(y), index(x)) {
            (Some(i), _) => (x, i),
            (None, Some(i)) => (y, i),
            _ => return Ok(None),
        };
        // (the index as an integer of at most 32 bits)
        if crate::types::type_of(&i, &self.var_types).map_or(true, |t| t.float() || t.bits() > 32) {
            return Ok(None);
        }
        Ok(Some(format!("gptr<{}>({})[{}]", t.c_name(), self.expr(base, 0)?, self.expr(&i, 0)?)))
    }

    // whether a branch is only a goto to the label right after its if (fallthrough_gotos)
    fn only_falls(&self, list: &[Stmt], prefix: &[usize]) -> bool {
        matches!(list, [Stmt::Goto(l)] if self.fallthrough.get(&[prefix, &[0]].concat()) == Some(l))
    }

    // writes in the constants the expression's variables hold at the current statement; whether there was one
    fn constants_in(&self, e: &mut Expr) -> bool {
        match e {
            Expr::Var(v) => match (self.values.constant(&self.cur, v), self.values.offset(&self.cur, v)) {
                (Some((k, t)), _) if !self.values.held(&self.cur, v) => {
                    *e = Expr::Num(k, t);
                    true
                }
                (None, Some((name, k))) => {
                    *e = Expr::Bin(BinOp::Add, Box::new(Expr::Var(format!("{}{}", NAMED, name))), Box::new(Expr::Num(*k, Ty::U32)));
                    true
                }
                _ => false,
            },
            Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => self.constants_in(a),
            Expr::Bin(_, a, b) => {
                let x = self.constants_in(a);
                self.constants_in(b) || x
            }
            Expr::Cond(c, a, b) => {
                let x = self.constants_in(c);
                let y = self.constants_in(a);
                self.constants_in(b) || x || y
            }
            Expr::Call(_, args) => args.iter_mut().fold(false, |any, a| self.constants_in(a) || any),
            _ => false,
        }
    }

    // the value of a 32-bit unsigned expression made of constants (and variables holding one), wrapping as the guest
    fn constant_u32(&self, e: &Expr) -> Option<u64> {
        let v = match e {
            Expr::Num(k, Ty::U32) => *k as u32,
            Expr::Var(v) => match self.values.constant(&self.cur, v) {
                Some((k, Ty::U32)) => k as u32,
                _ => return None,
            },
            Expr::Bin(op, a, b) => {
                let (x, y) = (self.constant_u32(a)? as u32, self.constant_u32(b)? as u32);
                match op {
                    BinOp::Add => x.wrapping_add(y),
                    BinOp::Sub => x.wrapping_sub(y),
                    BinOp::Mul => x.wrapping_mul(y),
                    BinOp::And => x & y,
                    BinOp::Or => x | y,
                    BinOp::Xor => x ^ y,
                    _ => return None,
                }
            }
            _ => return None,
        };
        Some(v as u64)
    }

    // the address an access goes to when it is a constant (written as such, or held in a variable)
    fn constant_address(&self, a: &Expr) -> Option<u64> {
        match a {
            Expr::Num(k, _) => Some(*k & 0xffff_ffff),
            Expr::Var(v) => self.values.constant(&self.cur, v).map(|(k, _)| k & 0xffff_ffff),
            Expr::Bin(BinOp::Add, x, y) => Some((self.constant_address(x)? + self.constant_address(y)?) & 0xffff_ffff),
            _ => None,
        }
    }

    // the guest::global for an access of type t at addr (named after the address, and after the type when the
    // function accesses the address with several types)
    fn global(&self, addr: u64, t: Ty) -> String {
        let mut g = self.globals.borrow_mut();
        if let Some(n) = g.get(&(addr, t)) {
            return n.clone();
        }
        let taken = g.keys().any(|(a, _)| *a == addr);
        let name = if taken { format!("global_{:08x}_{}", addr, t.c_name()) } else { format!("global_{:08x}", addr) };
        g.insert((addr, t), name.clone());
        name
    }

    // whether r0 is read after the call at `path` before being written (the call's result is used)
    fn result_read(&self, path: &[usize]) -> bool {
        if !self.has_r0 {
            return false;
        }
        let mut next = path.to_vec();
        *next.last_mut().unwrap() += 1;
        self.live.live_out.get(&next).map_or(true, |live| live.contains("r0"))
    }

    // a variable as read at `path`: its value's name there, or the constant it holds
    fn var_text(&self, path: &[usize], v: &str) -> String {
        // (a name given as it is: an offset value's base)
        if let Some(name) = v.strip_prefix(NAMED) {
            return if self.typed.contains_key(name) { format!("{}.addr()", name) } else { name.to_string() };
        }
        // (a value that is another plus a constant, written so: values.rs)
        if let Some((name, k)) = self.values.offset(path, v) {
            let base = format!("{}{}", NAMED, name);
            let mut sum = Expr::Bin(BinOp::Add, Box::new(Expr::Var(base.clone())), Box::new(Expr::Num(*k, Ty::U32)));
            let mut types = HashMap::new();
            types.insert(base, Ty::U32);
            crate::simplify::fold(&mut sum, &types);
            return self.expr(&sum, 0).unwrap_or_else(|_| format!("{} + {}", name, num(*k, Ty::U32)));
        }
        // (a value the CPU's register holds where it is read: values.rs)
        if self.values.held(path, v) {
            return format!("guest::cpu()->{}[{}]", if v.starts_with('S') { "s" } else { "r" }, &v[1..]);
        }
        match self.values.constant(path, v) {
            Some((k, t)) => num(k, t),
            None => {
                let name = self.values.read(path, v);
                if self.typed.contains_key(&name) { format!("{}.addr()", name) } else { name }
            }
        }
    }

    // a load or store at a typed local's field (base + offset): the place, `local->field`
    fn local_field(&self, t: Ty, a: &Expr) -> Option<String> {
        let (v, off) = match a {
            Expr::Var(v) => (v, 0),
            Expr::Bin(BinOp::Add, b, k) => match (&**b, &**k) {
                (Expr::Var(v), Expr::Num(k, _)) => (v, *k),
                _ => return None,
            },
            _ => return None,
        };
        if self.values.constant(&self.cur, v).is_some() {
            return None;
        }
        let name = self.values.read(&self.cur, v);
        (self.typed.contains_key(&name) && self.local_fields.get(&name)?.get(&off) == Some(&t)).then(|| format!("{}->{}", name, field_name(t, off)))
    }

    // `*(*(obj) + 4k)`, the k-th function of the vtable of the object at obj: "virtual function k of <obj>"
    fn vtable_slot(&self, e: &Expr) -> Option<String> {
        let Expr::Load(Ty::U32, slot) = e else { return None };
        let (table, off) = match &**slot {
            Expr::Bin(BinOp::Add, t, o) => match &**o {
                Expr::Num(k, _) => (&**t, *k),
                _ => return None,
            },
            t => (t, 0),
        };
        let Expr::Load(Ty::U32, obj) = table else { return None };
        if off % 4 != 0 {
            return None;
        }
        let class = match &**obj {
            Expr::Var(v) if v.starts_with("arg") => v[3..].parse::<usize>().ok().and_then(|k| self.known.get(&k)).map(|c| format!(" ({})", c)),
            _ => None,
        };
        Some(format!("virtual function {} of {}{}", off / 4, self.expr(obj, 0).ok()?, class.unwrap_or_default()))
    }

    // `*(table + 4k)` where table was loaded from an object's first word: that object's virtual function k
    fn split_slot(&self, e: &Expr) -> Option<String> {
        let Expr::Load(Ty::U32, slot) = e else { return None };
        let (t, off) = match &**slot {
            Expr::Bin(BinOp::Add, t, o) => match &**o {
                Expr::Num(k, _) => (&**t, *k),
                _ => return None,
            },
            t => (t, 0),
        };
        let Expr::Var(v) = t else { return None };
        if off % 4 != 0 {
            return None;
        }
        let obj = self.tables.get(&self.var_text(&self.cur, v))?;
        Some(format!("virtual function {} of {} (if {} points to a vtable)", off / 4, obj, self.var_text(&self.cur, v)))
    }

    // a call argument as written: the value a kept register has at the call, or the CPU's
    fn arg_text(&self, path: &[usize], a: &str) -> String {
        if a.starts_with("guest::") { a.to_string() } else { self.var_text(path, a) }
    }

    fn stmts(&mut self, list: &[Stmt], indent: usize, returns: bool, prefix: &[usize]) -> R<()> {
        self.stmts_from(list, 0, indent, returns, prefix)
    }

    // the statements of `list`, numbered from `first` in the paths
    fn stmts_from(&mut self, list: &[Stmt], first: usize, indent: usize, returns: bool, prefix: &[usize]) -> R<()> {
        let mut i = 0;
        let mut reachable = true;
        while i < list.len() {
            let s = &list[i];
            let mut path = prefix.to_vec();
            path.push(first + i);
            self.cur = path.clone();
            // after a return, a tail call or a goto, nothing runs before the next label something jumps to
            if let Stmt::Label(l) = s {
                reachable = reachable || self.targets.contains(l);
            }
            if !reachable {
                i += 1;
                continue;
            }
            if matches!(s, Stmt::Return | Stmt::Goto(_) | Stmt::GuestCall(_, true) | Stmt::Dispatch(true)) {
                reachable = false;
            }
            // no guessing here: only what the proved AST marks as bookkeeping (saved_*) is left out
            if stack_bookkeeping(s) {
                i += 1;
                continue;
            }
            match s {
                // calling-convention bookkeeping
                Stmt::Decl(_, n, _) if n.starts_with("saved_") || n.starts_with("arg") => {}
                Stmt::Assign(_, Expr::Var(v)) if v.starts_with("saved_") => {}
                Stmt::SetCpu(CpuField::Pc, e) => {
                    // (a return's c->pc = lr is bookkeeping; an indirect call's target is used below)
                    self.pc = self.expr(e, 0).ok();
                    self.virtual_slot = match e {
                        Expr::Var(v) => self.slots.get(&self.var_text(&path, v)).cloned(),
                        _ => self.vtable_slot(e),
                    };
                }
                Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::Nop | Stmt::Site(_) | Stmt::ReturnUnlessPc(_) => {}
                // sp moved by a constant (the frame) in a function that does not otherwise use it: the CPU's sp moves,
                // so the functions it calls see the stack where the original's callees did
                Stmt::Assign(n, Expr::Bin(BinOp::Add | BinOp::Sub, a, b))
                    if self.framed && n == "r13" && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) => {}
                Stmt::Assign(n, Expr::Bin(op @ (BinOp::Add | BinOp::Sub), a, b))
                    if !self.stack && n == "r13" && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) =>
                {
                    let Expr::Num(k, _) = **b else { unreachable!() };
                    let text = format!("guest::cpu()->r[13] {}= {};", if *op == BinOp::Add { "+" } else { "-" }, num(k, Ty::U32));
                    self.line(indent, &text);
                }
                Stmt::Decl(_, _, None) => {}
                Stmt::Decl(_, _, Some(_)) | Stmt::Assign(_, _) if self.values.left_out(&path) => {}
                Stmt::Decl(_, n, Some(e)) | Stmt::Assign(n, e) => {
                    if let Some(what) = self.vtable_slot(e) {
                        self.slots.insert(self.values.name(&path, n), what);
                    } else if let Some(what) = self.split_slot(e) {
                        self.slots.insert(self.values.name(&path, n), what);
                    }
                    if let Expr::Load(Ty::U32, obj) = e {
                        if let Ok(o) = self.expr(obj, 0) {
                            self.tables.insert(self.values.name(&path, n), o);
                        }
                    }
                    let target = self.values.name(&path, n);
                    // a typed local: the pointer to its struct
                    if let Some(st) = self.typed.get(&target).cloned() {
                        let text = format!("{} = gptr<{}>({});", target, st, self.expr(e, 0)?);
                        self.line(indent, &text);
                        i += 1;
                        continue;
                    }
                    // (a value its single use may take in: a pure expression of the variable's type)
                    let mut r = crate::types::Reads::default();
                    crate::types::reads(e, &mut r);
                    // (helpers in expressions are pure functions; guest calls are statements)
                    // (not one written without its conversion to the variable's type, below: the text has another type)
                    let converted = matches!(e, Expr::Cast(t, _) if self.var_types.get(n) == Some(t));
                    if !r.cpu && !r.out_params && !converted && crate::types::type_of(e, &self.var_types) == self.var_types.get(n).copied() {
                        self.foldable.insert(target.clone(), r.memory);
                    }
                    // x = x + e as x += e (the same statement once read)
                    let compound = match e {
                        Expr::Bin(op @ (BinOp::Add | BinOp::Sub | BinOp::Or | BinOp::And | BinOp::Xor | BinOp::Shl | BinOp::Shr), a, b)
                            if matches!(&**a, Expr::Var(v) if !v.starts_with("arg") && self.var_text(&path, v) == target)
                                && self.var_types.get(n).map_or(false, |t| !t.float())
                                // (a shift only by a constant: x >>= 1)
                                && (!matches!(op, BinOp::Shl | BinOp::Shr) || matches!(&**b, Expr::Num(k, _) if *k < 32))
                                && self.var_types.get(n) == Some(&Ty::U32)
                                && self.constant_u32(e).is_none() =>
                        {
                            Some(format!("{} {}= {};", target, op_text(*op), self.expr(b, prec(*op))?))
                        }
                        _ => None,
                    };
                    // (a conversion to the variable's own type is what the assignment does anyway)
                    let value = match e {
                        Expr::Cast(t, inner)
                            if self.var_types.get(n) == Some(t)
                                && !t.float()
                                && crate::types::type_of(inner, &self.var_types).map_or(false, |it| !it.float()) =>
                        {
                            &**inner
                        }
                        _ => e,
                    };
                    let text = match compound {
                        Some(c) => c,
                        None => format!("{} = {};", target, self.expr(value, 0)?),
                    };
                    self.line(indent, &text);
                }
                Stmt::SetCpu(f, _) => return Err(format!("writes {}", cpu(f))),
                Stmt::Store(t, a, v) => {
                    let value = self.expr(v, 0)?;
                    if let Some((_, place, wrap)) = self.known_field(*t, a) {
                        // a float stored into a float field: no round trip through its bits
                        let text = match v {
                            Expr::Call(n, args) if n == "F2U" && wrap.starts_with("std::bit_cast<float>") => {
                                format!("{} = {};", place, self.expr(&args[0], 0)?)
                            }
                            // (an integer field: a constant that fits as a plain number)
                            _ if wrap == format!("{}({{}})", t.c_name()) => format!("{} = {};", place, self.stored(*t, v, value.clone())),
                            _ => format!("{} = {};", place, wrap.replace("{}", &value)),
                        };
                        self.line(indent, &text);
                        i += 1;
                        continue;
                    }
                    let place = match sp_offset(a) {
                        Some(k) => Some(self.frame_place(*t, k)),
                        None => self.local_field(*t, a),
                    };
                    if let Some(place) = place {
                        let value = self.stored(*t, v, value);
                        let text = format!("{} = {};", place, value);
                        self.line(indent, &text);
                        i += 1;
                        continue;
                    }
                    let global = match self.constant_address(a) {
                        Some(addr) if !t.float() => Some(self.global(addr, *t)),
                        _ => None,
                    };
                    // (no conversion for a value that already has the stored type)
                    let value = self.stored(*t, v, value);
                    let text = match (self.field_access(*t, a), global) {
                        (Some(f), _) => format!("{} = {};", f, value),
                        (None, Some(g)) => format!("*{} = {};", g, value),
                        // (not `gptr<T>(b)[i] = v;`: at the start of a statement C++ reads that as declaring an array)
                        (None, None) => format!("*gptr<{}>({}) = {};", t.c_name(), self.expr(a, 0)?, value),
                    };
                    self.line(indent, &text);
                }
                Stmt::If(c, a, b) => {
                    let (mut pa, mut pb) = ([path.clone(), vec![0]].concat(), [path.clone(), vec![1]].concat());
                    // a branch that only goes to the label right after the if does nothing (conditions have no
                    // effects): `if (c) {} else { B }` is `if (!c) { B }`, and nothing is left of an if of two
                    let (skip_a, skip_b) = (self.only_falls(a, &pa), self.only_falls(b, &pb));
                    let empty: &Vec<Stmt> = &Vec::new();
                    let (c, a, b) = match (skip_a || a.is_empty(), skip_b || b.is_empty()) {
                        (true, true) => {
                            i += 1;
                            continue;
                        }
                        (true, false) => {
                            std::mem::swap(&mut pa, &mut pb);
                            (&Expr::Un(UnOp::LNot, Box::new(c.clone())), b, empty)
                        }
                        (false, true) => (c, a, empty),
                        (false, false) => (c, a, b),
                    };
                    let text = format!("if ({}) {{", self.expr(c, 0)?);
                    self.line(indent, &text);
                    let (mut a, mut b) = (a, b);
                    loop {
                        self.stmts(a, indent + 1, returns, &pa)?;
                        // an else that is a single if: `} else if (...) {`
                        if let [Stmt::If(c2, a2, b2)] = b.as_slice() {
                            let inner = [pb.clone(), vec![0]].concat();
                            self.cur = inner.clone();
                            let text = format!("}} else if ({}) {{", self.expr(c2, 0)?);
                            self.line(indent, &text);
                            pa = [inner.clone(), vec![0]].concat();
                            pb = [inner, vec![1]].concat();
                            a = a2;
                            b = b2;
                            continue;
                        }
                        break;
                    }
                    if b.is_empty() {
                        self.line(indent, "}");
                    } else {
                        self.line(indent, "} else {");
                        self.stmts(b, indent + 1, returns, &pb)?;
                        self.line(indent, "}");
                    }
                }
                Stmt::While { top, test, body, check, cond } => {
                    // (the labels only when something besides the loop jumps to them)
                    let (pa, pb) = ([path.clone(), vec![0]].concat(), [path.clone(), vec![1]].concat());
                    match test {
                        None => {
                            self.line(indent, "do {");
                            if self.targets.contains(top) {
                                self.out.push_str(&format!("{}:;\n", top));
                            }
                            self.labels.insert(top.clone());
                            self.stmts(body, indent + 1, returns, &pa)?;
                            self.stmts(check, indent + 1, returns, &pb)?;
                            self.line(indent + 1, "guest::preempt();");
                            self.cur = crate::values::loop_condition(&path);
                            let text = format!("}} while ({});", self.expr(cond, 0)?);
                            self.line(indent, &text);
                        }
                        Some(t) => {
                            self.line(indent, "for (;;) {");
                            if self.targets.contains(t) {
                                self.out.push_str(&format!("{}:;\n", t));
                            }
                            self.labels.insert(t.clone());
                            self.labels.insert(top.clone());
                            self.stmts(check, indent + 1, returns, &pb)?;
                            self.cur = crate::values::loop_condition(&path);
                            let text = format!("if (!({})) {{", self.expr(cond, 0)?);
                            self.line(indent + 1, &text);
                            self.line(indent + 2, "break;");
                            self.line(indent + 1, "}");
                            if self.targets.contains(top) {
                                self.out.push_str(&format!("{}:;\n", top));
                            }
                            self.stmts(body, indent + 1, returns, &pa)?;
                            self.line(indent + 1, "guest::preempt();");
                            self.line(indent, "}");
                        }
                    }
                }
                // (a goto to the label right after its if, at the end of a branch: nothing to do)
                Stmt::Goto(l) if self.fallthrough.get(&path) == Some(l) => {}
                // (a goto out of the innermost loop: break, before copying an exit block into the loop)
                Stmt::Goto(_) if self.breaks.contains(&path) => self.line(indent, "break;"),
                Stmt::Goto(l) if self.exits.contains_key(l) => {
                    let x = self.exits[l].clone();
                    // (a jump block's goto to the label right after this if: falling through)
                    let falls = x.jump.is_some() && self.fallthrough.get(&path) == x.jump.as_ref();
                    let n = if falls { x.list.len() - 1 } else { x.list.len() };
                    self.stmts_from(&x.list[..n], x.first, indent, returns, &x.prefix)?;
                }
                Stmt::Goto(l) => {
                    if self.labels.contains(l) {
                        self.line(indent, "guest::preempt();"); // a back edge
                    }
                    self.line(indent, &format!("goto {};", l));
                }
                Stmt::Label(l) => {
                    self.labels.insert(l.clone());
                    if self.targets.contains(l) {
                        self.out.push_str(&format!("{}:;\n", l));
                    }
                }
                Stmt::GuestCall(t, tail) => {
                    self.before_call(indent, Some(*t), &path);
                    let name = self.callees.entry(*t).or_insert_with(|| format!("call_{:08x}", t & !1)).clone();
                    let all: Vec<String> = self.args_for(Some(*t), &path).iter().map(|a| self.arg_text(&path, a)).collect();
                    let mut args = all.clone();
                    // after another call, the registers left in the CPU are that call's leftovers: a guest::Function
                    // call leaves the CPU's registers past its arguments alone, so trailing ones need not be written
                    // (as many at every call of the callee: the second pass writes the most any call needs)
                    if self.after_calls.contains(&path) {
                        while args.last().map_or(false, |a| a.starts_with("guest::cpu()->r[")) {
                            args.pop();
                        }
                    }
                    if self.fixed {
                        let want = self.arities.get(t).copied().unwrap_or(all.len());
                        args = all[..want.max(args.len()).min(all.len())].to_vec();
                    } else {
                        let arity = self.arities.entry(*t).or_insert(0);
                        *arity = (*arity).max(args.len());
                    }
                    let call = format!("{}({})", name, args.join(", "));
                    if *tail {
                        self.tail_write_back(indent, &path);
                        if self.frame_object {
                            self.line(indent, "frame.release();");
                        }
                    }
                    if *tail {
                        self.line(indent, &if returns { format!("return {};", call) } else { format!("{};\n{}return;", call, "    ".repeat(indent)) });
                    } else {
                        let r0 = self.values.name(&path, "r0");
                        self.line(indent, &if self.result_read(&path) { self.assignment(&r0, &call) } else { format!("{};", call) });
                        // the registers the callee may have changed that are read later, as the original reads them back
                        for (v, field) in self.reloads_after(&path) {
                            let text = self.assignment(&self.values.name(&path, &v), &field);
                            self.line(indent, &text);
                        }
                    }
                }
                Stmt::Return => {
                    for (field, v) in self.write_back.clone() {
                        if self.unchanged(&path, &field, &v) {
                            continue;
                        }
                        let text = format!("{} = {};", field, self.var_text(&path, &v));
                        self.line(indent, &text);
                    }
                    let r = if !returns {
                        "return;".to_string()
                    } else if self.has_r0 {
                        format!("return {};", self.var_text(&path, "r0"))
                    } else {
                        "return guest::cpu()->r[0];".to_string()
                    };
                    self.line(indent, &r);
                }
                Stmt::Switch(e, cases) => {
                    let text = format!("switch ({}) {{", self.expr(e, 0)?);
                    self.line(indent, &text);
                    for (k, l) in cases {
                        self.line(indent + 1, &format!("case 0x{:x}: goto {};", k, l));
                    }
                    self.line(indent + 1, "default: break;");
                    self.line(indent, "}");
                }
                Stmt::Dispatch(tail) => {
                    let Some(target) = self.pc.take() else { return Err("indirect call without a target".into()) };
                    if let Some(what) = self.virtual_slot.take() {
                        self.line(indent, &format!("// {}", what));
                    }
                    self.before_call(indent, None, &path);
                    for (field, v) in self.site_extra(&path) {
                        let text = format!("{} = {};", field, self.var_text(&path, &v));
                        self.line(indent, &text);
                    }
                    let mut args: Vec<String> = self.args_for(None, &path).iter().map(|a| self.arg_text(&path, a)).collect();
                    let site = self.sites.contains_key(&path);
                    for v in self.site_floats(&path) {
                        let text = if v.starts_with("guest::") { v.clone() } else { self.var_text(&path, &v) };
                        args.push(text);
                    }
                    // (after another call, the registers left in the CPU need not be written: see GuestCall; a site
                    // is as many arguments as it says)
                    if self.after_calls.contains(&path) && !site {
                        while args.last().map_or(false, |a| a.starts_with("guest::cpu()->r[")) {
                            args.pop();
                        }
                    }
                    // (with sites, a call with none is one whose callee may read any argument register)
                    let name = if crate::sites::enabled() && !site { "guest::call_address_any" } else { "guest::call_address" };
                    let call = if args.is_empty() {
                        format!("{}<u32>({})", name, target)
                    } else {
                        format!("{}<u32>({}, {})", name, target, args.join(", "))
                    };
                    if *tail {
                        self.tail_write_back(indent, &path);
                        if self.frame_object {
                            self.line(indent, "frame.release();");
                        }
                    }
                    if *tail {
                        self.line(indent, &if returns { format!("return {};", call) } else { format!("{};", call) });
                        if !returns {
                            self.line(indent, "return;");
                        }
                    } else {
                        let r0 = self.values.name(&path, "r0");
                        self.line(indent, &if self.result_read(&path) { self.assignment(&r0, &call) } else { format!("{};", call) });
                        for (v, field) in self.reloads_after(&path) {
                            let text = self.assignment(&self.values.name(&path, &v), &field);
                            self.line(indent, &text);
                        }
                    }
                }
                Stmt::Svc(n) => {
                    // as SO() / SI() around rt_svc: the registers the kernel reads, and those it may change
                    for (v, k) in self.svc_regs.clone() {
                        let text = format!("guest::cpu()->r[{}] = {};", k, self.var_text(&path, &v));
                        self.line(indent, &text);
                    }
                    if self.stack && self.has_sp {
                        self.line(indent, "guest::cpu()->r[13] = r13;");
                    }
                    self.line(indent, &format!("guest::svc(0x{:x});", n));
                    for (v, k) in self.svc_regs.clone() {
                        let text = self.assignment(&self.values.name(&path, &v), &format!("guest::cpu()->r[{}]", k));
                        self.line(indent, &text);
                    }
                }
                Stmt::Unsupported(w) => return Err(w.clone()),
            }
            i += 1;
        }
        Ok(())
    }
}

// What a direct callee is handed: with a proved signature (signatures.rs), its argument registers, r0 (whose result is
// read, and may pass through) and the results read after the call (they may pass through too); everything when it has
// none, or when a scratch register is read after the call (its result depends on every argument register).
#[derive(Clone, Default)]
struct Need {
    arity: usize,       // core registers r0..r(arity-1)
    floats: HashSet<u32>, // float registers written before the call
    full: bool,
}

// What an indirect call with a site (sites.rs) hands over besides its arguments: the results read after it that are
// no argument of the site (a callee may leave them as they were), or every other argument register when a scratch
// result is read after it (scratch results depend on every argument register: sym.rs).
fn site_extras(f: &Function, lv: &crate::flow::Liveness) -> HashMap<Vec<usize>, Vec<String>> {
    let field: HashMap<&str, String> = f.synced.iter().map(|(v, fl)| (v.as_str(), crate::sym::cpu_key(fl))).collect();
    let flows = crate::flow::scratch_flows(f);
    let mut out = HashMap::new();
    let tails = crate::sites::at_tail_calls(f);
    for (p, site) in crate::sites::at_calls(f) {
        // after a tail call, what the function's callers observe
        if tails.contains_key(&p) {
            let extra: Vec<String> = crate::signatures::RESULTS
                .iter()
                .filter(|k| crate::results::observed(f.address, k) && !site.iter().any(|r| r == *k))
                .map(|k| k.to_string())
                .collect();
            if !extra.is_empty() {
                out.insert(p, extra);
            }
            continue;
        }
        let mut next = p.clone();
        *next.last_mut().unwrap() += 1;
        let read: Vec<String> = match lv.live_out.get(&next) {
            Some(live) => live.iter().filter_map(|v| field.get(v.as_str()).cloned()).collect(),
            None => crate::signatures::ARGS.iter().map(|k| k.to_string()).collect(),
        };
        let scratch = flows.contains(&p)
            || read.iter().any(|k| {
                matches!(k.as_str(), "r2" | "r3" | "r12" | "nf" | "zf" | "cf" | "vf" | "qf" | "ge" | "fpscr")
                    || k.strip_prefix('s').and_then(|n| n.parse::<u32>().ok()).map_or(false, |n| (2..16).contains(&n))
            });
        let extra: Vec<String> = if scratch {
            crate::signatures::ARGS.iter().map(|k| k.to_string()).filter(|k| !site.contains(k)).collect()
        } else {
            crate::signatures::RESULTS.iter().map(|k| k.to_string()).filter(|k| read.contains(k) && !site.contains(k)).collect()
        };
        if !extra.is_empty() {
            out.insert(p, extra);
        }
    }
    out
}

fn call_needs(f: &Function, lv: &crate::flow::Liveness) -> HashMap<u32, Need> {
    let field: HashMap<&str, String> = f.synced.iter().map(|(v, fl)| (v.as_str(), crate::sym::cpu_key(fl))).collect();
    let outputs = |k: &str| {
        matches!(k, "r0" | "r1" | "r2" | "r3" | "r12" | "r14" | "nf" | "zf" | "cf" | "vf" | "qf" | "ge" | "fpscr")
            || k.strip_prefix('s').and_then(|n| n.parse::<u32>().ok()).map_or(false, |n| n < 16)
    };
    fn walk(list: &[Stmt], prefix: &[usize], out: &mut Vec<(u32, bool, Vec<usize>)>) {
        for (i, s) in list.iter().enumerate() {
            let mut p = prefix.to_vec();
            p.push(i);
            match s {
                Stmt::GuestCall(t, tail) => out.push((*t, *tail, p)),
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    walk(a, &[p.clone(), vec![0]].concat(), out);
                    walk(b, &[p.clone(), vec![1]].concat(), out);
                }
                _ => {}
            }
        }
    }
    let mut sites = Vec::new();
    walk(&f.body, &[], &mut sites);
    let mut needs: HashMap<u32, Need> = HashMap::new();
    // scratch results reaching later calls through the CPU: every call hands over all its arguments (flow.rs)
    let all = crate::flow::scratch_flows(f);
    for (t, tail, p) in sites {
        let n = needs.entry(t).or_default();
        if all.contains(&p) {
            n.full = true;
            continue;
        }
        let Some(sig) = crate::signatures::of(t) else {
            n.full = true;
            continue;
        };
        // what is read of the call's results: the observed ones after a tail call, the live ones after a call
        let read: Vec<String> = if tail {
            crate::signatures::RESULTS.iter().map(|k| k.to_string()).collect()
        } else {
            let mut next = p.clone();
            *next.last_mut().unwrap() += 1;
            match lv.live_out.get(&next) {
                Some(live) => live.iter().filter_map(|v| field.get(v.as_str()).cloned()).filter(|k| outputs(k)).collect(),
                None => {
                    n.full = true;
                    continue;
                }
            }
        };
        if read.iter().any(|k| !crate::signatures::RESULTS.contains(&k.as_str())) {
            n.full = true;
            continue;
        }
        let mut core = 1; // r0
        for k in sig.iter().chain(read.iter()) {
            if let Some(i) = k.strip_prefix('r').and_then(|x| x.parse::<usize>().ok()) {
                core = core.max(i + 1);
            }
            if let Some(i) = k.strip_prefix('s').and_then(|x| x.parse::<u32>().ok()) {
                n.floats.insert(i);
            }
        }
        n.arity = n.arity.max(core);
    }
    needs
}

fn mentions(line: &str, name: &str) -> bool {
    line.match_indices(name).any(|(i, _)| {
        let before = line[..i].chars().next_back();
        let after = line[i + name.len()..].chars().next();
        let ident = |c: Option<char>| c.map_or(false, |c| c.is_ascii_alphanumeric() || c == '_');
        !ident(before) && !ident(after)
    })
}

// Each variable declared at the top only to start at 0 (`u32 r0_1 = 0;`) is declared at its first assignment instead,
// when that is a plain `name = value;` (the value not reading it) and every other use of the variable follows it in
// the same block, with no goto from outside that stretch to a label inside it (C++: a jump may not skip an
// initialisation). The statements are the same, so the proof is unchanged. (The emitted body: one statement or
// brace per line, four spaces per level, labels at the start of their line.)
fn sink_declarations(body: &str, candidates: &[(String, String)]) -> (String, HashSet<String>) {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let indent = |l: &str| (l.len() - l.trim_start().len()) / 4;
    let is_label = |l: &str| !l.starts_with(' ') && l.trim_end().ends_with(":;");
    let mut sunk = HashSet::new();
    for (name, ty) in candidates {
        let uses: Vec<usize> = (0..lines.len()).filter(|&i| mentions(&lines[i], name)).collect();
        let Some(&first) = uses.first() else { continue };
        let line = lines[first].clone();
        let code = line.trim_start();
        let Some(rhs) = code.strip_prefix(&format!("{} = ", name)) else { continue };
        let rhs_code = rhs.split("  //").next().unwrap_or(rhs);
        if mentions(rhs_code, name) || !rhs_code.trim_end().ends_with(';') || is_label(&line) {
            continue;
        }
        let d = indent(&line);
        // the stretch: up to the first later line at a shallower level (a closing brace)
        let end = (first + 1..lines.len()).find(|&j| !is_label(&lines[j]) && !lines[j].trim().is_empty() && indent(&lines[j]) < d).unwrap_or(lines.len());
        if uses.iter().any(|&u| u >= end) {
            continue;
        }
        let inside: HashSet<String> =
            (first + 1..end).filter(|&j| is_label(&lines[j])).map(|j| lines[j].trim_end().trim_end_matches(":;").to_string()).collect();
        let jumped_into = (0..lines.len()).filter(|&j| j <= first || j >= end).any(|j| {
            lines[j].split("goto ").skip(1).any(|t| inside.contains(t.split(';').next().unwrap_or("").trim()))
        });
        if jumped_into {
            continue;
        }
        lines[first] = format!("{}{} {}", &line[..line.len() - code.len()], ty, code);
        sunk.insert(name.clone());
    }
    let mut out = lines.join("\n");
    out.push('\n');
    (out, sunk)
}

// Two masks a fold brings together: `(x & 0xAu) & 0xB` is `x & 0xCu` (C = A & B), and a register shift by `x & m`
// with m below 32 (lsl_r(a, x & 0x1fu)) is the plain shift. Text in, text out: the C++ is proved as written.
fn tidy_masks(line: &str) -> String {
    let mut out = line.to_string();
    // (x & 0xA[u]) & 0xB[u]  ->  x & 0xC[u]   (x a name, x's mask and the other's in hex)
    loop {
        let Some(start) = out.find(" & 0x") else { break };
        let open = out[..start].rfind('(');
        let Some(open) = open else { break };
        let inner = &out[open + 1..start];
        if !inner.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') {
            break;
        }
        let rest = &out[start + 5..];
        let a_len = rest.find(|c: char| !c.is_ascii_hexdigit()).unwrap_or(rest.len());
        let Ok(a) = u64::from_str_radix(&rest[..a_len], 16) else { break };
        let after = &rest[a_len..];
        let suffix = if after.starts_with('u') { "u" } else { "" };
        let after = &after[suffix.len()..];
        let Some(tail) = after.strip_prefix(") & 0x") else { break };
        let b_len = tail.find(|c: char| !c.is_ascii_hexdigit()).unwrap_or(tail.len());
        let Ok(b) = u64::from_str_radix(&tail[..b_len], 16) else { break };
        let tail = &tail[b_len..];
        let tail = tail.strip_prefix('u').unwrap_or(tail);
        out = format!("{}{} & 0x{:x}{}{}", &out[..open], inner, a & b, suffix, tail);
    }
    // (x - K) == 0 / != 0  ->  x == K / x != K   (x a name, K a constant: wrapping subtraction is 0 exactly then)
    for op in ["==", "!="] {
        loop {
            let pat = format!(") {} 0", op);
            let Some(end) = out.find(&pat) else { break };
            let after = &out[end + pat.len()..];
            if after.starts_with(|c: char| c.is_ascii_alphanumeric() || c == '_' || c == 'x') {
                break;
            }
            let Some(open) = out[..end].rfind('(') else { break };
            let inner = &out[open + 1..end];
            let Some((x, k)) = inner.split_once(" - ") else { break };
            let name = |t: &str| !t.is_empty() && t.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') && !t.starts_with(|c: char| c.is_ascii_digit());
            let konst = |t: &str| t.starts_with(|c: char| c.is_ascii_digit()) && t.chars().all(|c| c.is_ascii_hexdigit() || c == 'x' || c == 'u');
            if !name(x) || !konst(k) {
                break;
            }
            out = format!("{}{} {} {}{}", &out[..open], x, op, k, &out[end + pat.len()..]);
        }
    }
    // lsl_r(a, x & 0xNu) with N < 32 -> (a << (x & 0xNu)), and lsr_r likewise (a a name or a number)
    for (helper, op) in [("lsl_r(", "<<"), ("lsr_r(", ">>")] {
        while let Some(i) = out.find(helper) {
            if i > 0 && out[..i].ends_with(|c: char| c.is_ascii_alphanumeric() || c == '_') {
                break;
            }
            let args = &out[i + helper.len()..];
            let Some(close) = args.find(')') else { break };
            let parts: Vec<&str> = args[..close].split(", ").collect();
            let [a, n] = parts.as_slice() else { break };
            let Some((x, m)) = n.split_once(" & 0x") else { break };
            let m = m.trim_end_matches('u');
            let small = u64::from_str_radix(m, 16).map_or(false, |m| m < 32);
            let plain = |t: &str| t.chars().all(|c| c.is_ascii_alphanumeric() || c == '_');
            if !small || !plain(a) || !plain(x) {
                break;
            }
            out = format!("{}({} {} ({})){}", &out[..i], a, op, n, &args[close + 1..]);
        }
    }
    out
}

// The locals (C++ variables, by name) that are the base of field accesses (`*(x + off)`, two or more, fields not
// overlapping): each is written as a pointer to a struct of its own (`gptr<Local_<address>_<name>> x`, its fields
// `x->word_4`), unless it holds the entry value (initialised from the CPU in its declaration, which a pointer cannot
// be; but a parameter given as the register itself and never assigned is declared by the signature, as
// `gptr<Object_<address>_<k>> rk`), or its address is a constant. Its other uses read `x.addr()`, its assignments
// `x = gptr<S>(...)` (a call's result `x = gptr<S>(call(...))`); the statements are the same.
fn typed_locals(f: &Function, e: &Emitter, lv: &crate::flow::Liveness, plain: &HashSet<String>) -> (HashMap<String, String>, HashMap<String, BTreeMap<u64, Ty>>) {
    let mut fields: HashMap<String, BTreeMap<u64, Ty>> = HashMap::new();
    let mut assigned: HashSet<String> = HashSet::new();
    let mut accesses: HashMap<String, usize> = HashMap::new();
    let mut bad: HashSet<String> = HashSet::new();
    let mut access = |p: &[usize], t: Ty, a: &Expr, fields: &mut HashMap<String, BTreeMap<u64, Ty>>, bad: &mut HashSet<String>| {
        let (v, off) = match a {
            Expr::Var(v) => (v, 0),
            Expr::Bin(BinOp::Add, b, k) => match (&**b, &**k) {
                (Expr::Var(v), Expr::Num(k, _)) if *k < MAX_FIELD_OFFSET => (v, *k),
                _ => return,
            },
            _ => return,
        };
        if v.starts_with("arg") || v == SP || v == "r13" || e.values.constant(p, v).is_some() {
            return;
        }
        let name = e.values.read(p, v);
        *accesses.entry(name.clone()).or_default() += 1;
        let fs = fields.entry(name.clone()).or_default();
        match fs.get(&off) {
            Some(old) if *old != t => {
                bad.insert(name);
            }
            _ => {
                fs.insert(off, t);
            }
        }
    };
    fn loads(e: &Expr, out: &mut Vec<(Ty, Expr)>) {
        match e {
            Expr::Load(t, a) => {
                out.push((*t, (**a).clone()));
                loads(a, out);
            }
            Expr::Un(_, a) | Expr::Cast(_, a) => loads(a, out),
            Expr::Bin(_, a, b) => {
                loads(a, out);
                loads(b, out);
            }
            Expr::Cond(c, a, b) => {
                loads(c, out);
                loads(a, out);
                loads(b, out);
            }
            Expr::Call(_, args) => args.iter().for_each(|x| loads(x, out)),
            _ => {}
        }
    }
    fn walk(list: &[Stmt], prefix: &[usize], visit: &mut dyn FnMut(&[usize], &Stmt)) {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            visit(&p, s);
            match s {
                Stmt::If(_, a, b) => {
                    walk(a, &[p.clone(), vec![0]].concat(), visit);
                    walk(b, &[p.clone(), vec![1]].concat(), visit);
                }
                Stmt::While { body, check, .. } => {
                    walk(body, &[p.clone(), vec![0]].concat(), visit);
                    walk(check, &[p.clone(), vec![1]].concat(), visit);
                }
                _ => {}
            }
        }
    }
    walk(&f.body, &[], &mut |p, s| {
        let mut ls = Vec::new();
        match s {
            Stmt::Decl(_, n, Some(x)) | Stmt::Assign(n, x) => {
                loads(x, &mut ls);
                assigned.insert(e.values.name(p, n));
                let mut r = crate::types::Reads::default();
                crate::types::reads(x, &mut r);
                if r.out_params {
                    bad.insert(e.values.name(p, n));
                }
            }
            Stmt::SetCpu(_, x) | Stmt::Switch(x, _) => loads(x, &mut ls),
            Stmt::Store(t, a, v) => {
                access(p, *t, a, &mut fields, &mut bad);
                loads(a, &mut ls);
                loads(v, &mut ls);
            }
            Stmt::If(c, _, _) => loads(c, &mut ls),
            Stmt::While { cond, .. } => {
                let mut cl = Vec::new();
                loads(cond, &mut cl);
                let q = crate::values::loop_condition(p);
                for (t, a) in cl {
                    access(&q, t, &a, &mut fields, &mut bad);
                }
            }
            // (what a call or system call defines comes back from the CPU, converted: `x = gptr<S>(call(...))`)
            _ => {}
        }
        for (t, a) in ls {
            access(p, t, &a, &mut fields, &mut bad);
        }
    });
    let mut typed = HashMap::new();
    let mut out = HashMap::new();
    for (name, fs) in fields {
        let var = name.rsplit_once('_').filter(|(_, k)| k.bytes().all(|c| c.is_ascii_digit())).map_or(name.as_str(), |(b, _)| b);
        // (the entry's value, a parameter's: initialised from the CPU)
        // (but a parameter given as the register itself and never assigned: the signature declares the pointer)
        let param = plain.contains(&name) && !assigned.contains(&name);
        let entry = lv.at_entry.contains(&name) || ARGS.contains(&name.as_str()) || ARGS.contains(&var) && name == var;
        if bad.contains(&name) || entry && !param || accesses.get(&name).copied().unwrap_or(0) < 2 || name.starts_with("saved_") || name == "r14" {
            continue;
        }
        // fields that overlap: not a struct
        let mut end = 0;
        let mut overlap = false;
        for (off, t) in &fs {
            if *off < end {
                overlap = true;
            }
            end = off + (t.bits() / 8) as u64;
        }
        if overlap || fs.values().any(|t| t.float()) {
            continue;
        }
        let st = if param { format!("Object_{:08x}_{}", f.address, &name[1..]) } else { format!("Local_{:08x}_{}", f.address, name) };
        typed.insert(name.clone(), st);
        out.insert(name, fs);
    }
    (typed, out)
}

// `T x = y;` with y a variable never assigned in the function (a parameter, or one assigned only where declared before)
// and x assigned nowhere else: x's uses read y, and the copy goes. Only without loops (at a loop header the proof
// relates the programs' registers by name, and x may be one of them).
fn propagate_copies(body: &str) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    if lines.iter().any(|l| {
        let t = l.trim_start();
        t.starts_with("do {") || t.starts_with("for (") || t.ends_with(":;")
    }) {
        return body.to_string();
    }
    let assigned = |lines: &[String], v: &str, skip: usize| {
        lines.iter().enumerate().any(|(j, l)| {
            if j == skip {
                return false;
            }
            let t = l.trim_start();
            let t = t.split_once(' ').filter(|(ty, _)| matches!(*ty, "u8" | "u16" | "u32" | "s8" | "s16" | "s32" | "float")).map_or(t, |(_, r)| r);
            ["=", "+=", "-=", "|=", "&=", "^=", "<<=", ">>=", "*=", "/=", "%="].iter().any(|op| t.starts_with(&format!("{} {} ", v, op))) || t.contains(&format!("&{}", v))
        })
    };
    let ident = |t: &str| !t.is_empty() && t.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') && !t.starts_with(|c: char| c.is_ascii_digit());
    let mut d = 0;
    while d < lines.len() {
        let t = lines[d].trim_start().to_string();
        let parsed = t.split_once(' ').and_then(|(ty, rest)| {
            if !matches!(ty, "u32" | "u16" | "u8" | "s32" | "s16" | "s8") {
                return None;
            }
            let (x, y) = rest.strip_suffix(';')?.split_once(" = ")?;
            // (or a struct argument's address: `u32 r0 = arg0.addr();`, the parameter is never assigned)
            let arg_addr = y.strip_suffix(".addr()").map_or(false, |a| a.starts_with("arg") && a[3..].chars().all(|c| c.is_ascii_digit()));
            (ident(x) && (ident(y) || arg_addr)).then(|| (ty.to_string(), x.to_string(), y.to_string()))
        });
        let Some((ty, x, y)) = parsed else {
            d += 1;
            continue;
        };
        // y: declared before d (or a parameter) and never assigned after its declaration; x: assigned only here
        let y_decl = (0..d).find(|&j| lines[j].trim_start().split_once(' ').map_or(false, |(_, r)| r.starts_with(&format!("{} = ", y))));
        let y_type_ok = match y_decl {
            Some(j) => lines[j].trim_start().starts_with(&format!("{} ", ty)),
            None => true, // a parameter (u32 or the argument structs' .addr())
        };
        let y_assigned = !y.ends_with(".addr()") && (0..lines.len()).any(|j| Some(j) != y_decl && assigned(&lines[j..j + 1], &y, usize::MAX));
        if !y_type_ok || y_assigned || assigned(&lines, &x, d) || ty != "u32" {
            d += 1;
            continue;
        }
        lines.remove(d);
        for l in lines.iter_mut() {
            let mut out = String::new();
            let mut last = 0;
            for (i, _) in l.match_indices(x.as_str()) {
                let before = l[..i].chars().next_back();
                let after = l[i + x.len()..].chars().next();
                let id = |c: Option<char>| c.map_or(false, |c| c.is_ascii_alphanumeric() || c == '_');
                if !id(before) && !id(after) {
                    out.push_str(&l[last..i]);
                    out.push_str(&y);
                    last = i + x.len();
                }
            }
            out.push_str(&l[last..]);
            *l = out;
        }
    }
    let mut out = lines.join("\n");
    out.push('\n');
    out
}

// The frame's slots read and written in place (`*frame.at<T>(k)`), each at one offset with one type and none
// overlapping another, as the fields of a struct the size of the frame (`frame->word_k`, guest::StackFrameOf); its
// declaration and the body. None when there is no such slot. The places are the same, so the proof is unchanged.
fn frame_struct(body: &str, address: u32, bytes: u64) -> Option<(String, String)> {
    const AT: &str = "*frame.at<";
    // (offset, type) of each place, in order
    let place = |rest: &str| -> Option<(Ty, u64, usize)> {
        let close = rest.find(">(")?;
        let t = Ty::from_name(&rest[..close])?;
        let k_text = &rest[close + 2..rest[close + 2..].find(')')? + close + 2];
        let k = match k_text.strip_prefix("0x") {
            Some(h) => u64::from_str_radix(h.trim_end_matches('u'), 16).ok()?,
            None => k_text.trim_end_matches('u').parse().ok()?,
        };
        Some((t, k, close + 2 + k_text.len() + 1))
    };
    let mut seen: BTreeMap<u64, Option<Ty>> = BTreeMap::new();
    for (i, _) in body.match_indices(AT) {
        match place(&body[i + AT.len()..]) {
            Some((t, k, _)) => {
                let e = seen.entry(k).or_insert(Some(t));
                if *e != Some(t) {
                    *e = None;
                }
            }
            None => return None,
        }
    }
    // (not the bool type, nor a slot that overlaps another or runs past the frame)
    let mut fields: BTreeMap<u64, Ty> = BTreeMap::new();
    let all: Vec<(u64, Option<Ty>)> = seen.iter().map(|(k, t)| (*k, *t)).collect();
    for (j, (k, t)) in all.iter().enumerate() {
        let Some(t) = t else { continue };
        let end = k + (t.bits() / 8) as u64;
        let next = all.get(j + 1).map_or(u64::MAX, |(n, _)| *n);
        let prev_end = if j > 0 { all[j - 1].0 + all[j - 1].1.map_or(1, |p| (p.bits() / 8) as u64) } else { 0 };
        if *t == Ty::Bool || t.bits() == 64 || end > bytes || end > next || prev_end > *k {
            continue;
        }
        fields.insert(*k, *t);
    }
    if fields.is_empty() {
        return None;
    }
    let name = format!("Frame_{:08x}", address);
    let mut decl = format!("struct __attribute__((packed)) {} {{\n", name);
    let mut pos = 0u64;
    for (k, t) in &fields {
        if *k > pos {
            decl.push_str(&format!("    u8 unknown_{:x}[0x{:x}];  // (not read or written by name)\n", pos, k - pos));
        }
        decl.push_str(&format!("    {} {};\n", t.c_name(), field_name(*t, *k)));
        pos = k + (t.bits() / 8) as u64;
    }
    if bytes > pos {
        decl.push_str(&format!("    u8 unknown_{:x}[0x{:x}];  // (not read or written by name)\n", pos, bytes - pos));
    }
    decl.push_str("};\n");
    for (k, t) in &fields {
        decl.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});\n", name, field_name(*t, *k), k));
    }
    decl.push_str(&format!("GUEST_SIZE({}, 0x{:x});\n\n", name, bytes));
    // the body, the places by name (a line left without a hex literal loses its comment)
    let mut out = String::with_capacity(body.len());
    for line in body.lines() {
        let mut l = String::new();
        let mut rest = line;
        while let Some(i) = rest.find(AT) {
            l.push_str(&rest[..i]);
            let after = &rest[i + AT.len()..];
            match place(after) {
                Some((t, k, used)) if fields.get(&k) == Some(&t) => {
                    l.push_str(&format!("frame->{}", field_name(t, k)));
                    rest = &after[used..];
                }
                _ => {
                    l.push_str(AT);
                    rest = after;
                }
            }
        }
        l.push_str(rest);
        let tag = "  // (from the original)";
        if let Some(code) = l.strip_suffix(tag) {
            if !code.contains("0x") {
                l = code.to_string();
            }
        }
        out.push_str(&l);
        out.push('\n');
    }
    Some((decl, out))
}

// The fields of the draft's own structs (Object_, Local_, Frame_) that are only stored as a float's bits and read
// back as a float (`x->word_8 = std::bit_cast<u32>(e);`, `std::bit_cast<float>(x->word_8)`) are floats: `x->float_8 =
// e;`, `x->float_8`. The accesses are the same (a float field is stored and read as its bits), so is the proof.
// `call_x(a, ...); v = a;` with call_x returning its first argument (returns.rs): `v = call_x(a, ...);` (the reloads
// of other registers after the call may come between).
fn kept_results(body: &str) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let mut i = 0;
    while i < lines.len() {
        let l = lines[i].clone();
        let indent = &l[..l.len() - l.trim_start().len()];
        let (code, comment) = match l.trim_start().split_once("  //") {
            Some((c, m)) => (c.to_string(), format!("  //{}", m)),
            None => (l.trim_start().to_string(), String::new()),
        };
        let callee = code.strip_prefix("call_").and_then(|r| u32::from_str_radix(r.get(..8)?, 16).ok());
        let Some(address) = callee.filter(|a| crate::returns::returns_first_argument(*a)) else {
            i += 1;
            continue;
        };
        let Some(args) = code.strip_suffix(");").and_then(|c| c.split_once('(').map(|(_, a)| a)) else {
            i += 1;
            continue;
        };
        // the first argument: up to the first comma outside parentheses
        let mut depth = 0;
        let first: String = args
            .chars()
            .take_while(|c| {
                match c {
                    '(' | '<' => depth += 1,
                    ')' | '>' => depth -= 1,
                    ',' if depth == 0 => return false,
                    _ => {}
                }
                true
            })
            .collect();
        let _ = address;
        let mut j = i + 1;
        while j < lines.len() && lines[j].trim_start().starts_with('r') && lines[j].contains(" = guest::cpu()->") {
            j += 1;
        }
        if let Some(next) = lines.get(j) {
            let t = next.trim_start();
            let (decl, rest) = match t.strip_prefix("u32 ") {
                Some(r) => ("u32 ", r),
                None => ("", t),
            };
            if let Some((v, value)) = rest.strip_suffix(';').and_then(|r| r.split_once(" = ")) {
                let reloads = lines[i + 1..j].iter().any(|r| r.trim_start().starts_with(&format!("{} =", v)));
                if value == first && !v.contains(' ') && !reloads && !first.is_empty() {
                    lines[i] = format!("{}{}{} = {}{}", indent, decl, v, code, comment);
                    lines.remove(j);
                    continue;
                }
            }
        }
        i += 1;
    }
    let mut out = lines.join("\n");
    if body.ends_with('\n') {
        out.push('\n');
    }
    out
}

fn float_fields(text: &str) -> String {
    let mut text = text.to_string();
    // the structs and the variable that points to each (an argument, a local, the frame)
    let mut owners: Vec<(String, String)> = Vec::new();
    for line in text.lines() {
        for (open, close) in [("gptr<", "> "), ("guest::StackFrameOf<", "> ")] {
            let mut rest = line;
            while let Some(i) = rest.find(open) {
                let after = &rest[i + open.len()..];
                let Some(j) = after.find(close) else { break };
                let st = &after[..j];
                let var: String = after[j + close.len()..].chars().take_while(|c| c.is_ascii_alphanumeric() || *c == '_').collect();
                let own = ["Object_", "Local_", "Frame_"].iter().any(|p| st.starts_with(p)) && st.chars().all(|c| c.is_ascii_alphanumeric() || c == '_');
                if own && !var.is_empty() && !owners.contains(&(st.to_string(), var.clone())) {
                    owners.push((st.to_string(), var));
                }
                rest = &after[j..];
            }
        }
    }
    let pointing = |st: &str, owners: &[(String, String)]| owners.iter().filter(|(s, _)| s == st).count();
    for (st, var) in owners.clone() {
        if pointing(&st, &owners) != 1 {
            continue;
        }
        let Some(start) = text.find(&format!("struct __attribute__((packed)) {} {{\n", st)) else { continue };
        let Some(len) = text[start..].find("\n};\n").map(|k| k + 1) else { continue };
        let fields: Vec<String> = text[start..start + len]
            .lines()
            .filter_map(|l| l.trim().strip_prefix("u32 word_").and_then(|r| r.strip_suffix(';')).map(|k| format!("word_{}", k)))
            .collect();
        for f in fields {
            let place = format!("{}->{}", var, f);
            let store = format!("{} = std::bit_cast<u32>(", place);
            let load = format!("std::bit_cast<float>({})", place);
            // every mention: a whole store of a float's bits, or a read as a float (and the struct used by `var` only)
            let mut ok = true;
            let mut any = false;
            for (i, _) in text.match_indices(&place) {
                let before = text[..i].chars().next_back();
                let after = text[i + place.len()..].chars().next();
                let id = |c: Option<char>| c.map_or(false, |c| c.is_ascii_alphanumeric() || c == '_');
                if id(before) || id(after) {
                    continue;
                }
                any = true;
                let line_start = text[..i].rfind('\n').map_or(0, |k| k + 1);
                let line_end = text[i..].find('\n').map_or(text.len(), |k| i + k);
                let line = &text[line_start..line_end];
                let code = line.split("  //").next().unwrap_or(line).trim();
                let as_store = code.starts_with(&store) && code.ends_with(");") && text[line_start..i].trim().is_empty();
                let as_load = text[..i].ends_with("std::bit_cast<float>(") && text[i + place.len()..].starts_with(')');
                if !(as_store || as_load) {
                    ok = false;
                    break;
                }
            }
            if !ok || !any {
                continue;
            }
            let g = format!("float_{}", &f[5..]);
            let new_place = format!("{}->{}", var, g);
            let mut out = String::with_capacity(text.len());
            for line in text.split_inclusive('\n') {
                let (code, comment) = match line.find("  //") {
                    Some(k) => (&line[..k], &line[k..]),
                    None => (line.trim_end_matches('\n'), if line.ends_with('\n') { "\n" } else { "" }),
                };
                let t = code.trim_start();
                let pad = &code[..code.len() - t.len()];
                let new_code = if let Some(e) = t.strip_prefix(&store).and_then(|r| r.strip_suffix(");")) {
                    format!("{}{} = {};", pad, new_place, e.replace(&load, &new_place))
                } else {
                    code.replace(&load, &new_place)
                };
                out.push_str(&new_code);
                out.push_str(comment);
            }
            // (the declaration, in its struct)
            let start = out.find(&format!("struct __attribute__((packed)) {} {{\n", st)).unwrap_or(0);
            let end = start + out[start..].find("\n};\n").map_or(0, |k| k + 1);
            let decl = out[start..end].replacen(&format!("    u32 {};\n", f), &format!("    float {};\n", g), 1);
            text = format!("{}{}{}", &out[..start], decl, &out[end..])
                .replacen(&format!("GUEST_OFFSET({}, {}, ", st, f), &format!("GUEST_OFFSET({}, {}, ", st, g), 1);
        }
    }
    text
}

fn frame_places(body: &str) -> String {
    let mut out = String::with_capacity(body.len());
    let mut rest = body;
    while let Some(i) = rest.find("*gptr<") {
        out.push_str(&rest[..i]);
        let after = &rest[i + 6..];
        let parsed = after.find(">(frame.at(").and_then(|t| {
            let ty = &after[..t];
            let k_start = t + ">(frame.at(".len();
            let k_len = after[k_start..].find(").addr())")?;
            let k = &after[k_start..k_start + k_len];
            let simple = ty.chars().all(|c| c.is_ascii_alphanumeric()) && k.chars().all(|c| c.is_ascii_alphanumeric());
            simple.then(|| (format!("*frame.at<{}>({})", ty, k), 6 + k_start + k_len + ").addr())".len()))
        });
        match parsed {
            Some((text, used)) => {
                out.push_str(&text);
                rest = &rest[i + used..];
            }
            None => {
                out.push_str("*gptr<");
                rest = &rest[i + 6..];
            }
        }
    }
    out.push_str(rest);
    out
}

// whether an expression as written needs parentheses to stand for an operand (an operator outside parentheses)
fn compound_text(e: &str) -> bool {
    let b = e.as_bytes();
    let mut depth = 0i32;
    if matches!(b.first(), Some(b'-' | b'~' | b'!')) {
        return true;
    }
    for (i, c) in e.char_indices() {
        match c {
            '(' | '[' => depth += 1,
            ')' | ']' => depth -= 1,
            ' ' if depth == 0 => {
                // a space at the top level separates an operator (casts and names have none)
                let next = &e[i + 1..];
                if next.starts_with(|c: char| "+-*/%&|^<>=!?".contains(c)) {
                    return true;
                }
            }
            _ => {}
        }
    }
    false
}

// A value its single use takes in: `T x = e;` with x read on one later line only, once, in the same block, with no
// loop start, label or shallower line between, none of e's variables assigned between, and (when e reads memory) only
// assignments to plain variables between. The statements compute the same (the C++ is proved anyway).
fn fold_single_uses(body: &str, foldable: &HashMap<String, bool>) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let indent = |l: &str| (l.len() - l.trim_start().len()) / 4;
    let words = |t: &str| -> Vec<String> {
        t.split(|c: char| !(c.is_ascii_alphanumeric() || c == '_')).filter(|w| !w.is_empty() && !w.starts_with(|c: char| c.is_ascii_digit())).map(|w| w.to_string()).collect()
    };
    let assigns = |l: &str, w: &str| {
        let c = l.trim_start();
        let c = c.split_once(' ').filter(|(t, _)| matches!(*t, "u8" | "u16" | "u32" | "u64" | "s8" | "s16" | "s32" | "s64" | "float" | "double")).map_or(c, |(_, r)| r);
        ["=", "+=", "-=", "|=", "&=", "^=", "<<=", ">>=", "*=", "/=", "%="].iter().any(|op| c.starts_with(&format!("{} {} ", w, op)))
    };
    loop {
        let mut changed = false;
        for d in 0..lines.len() {
            let line = lines[d].clone();
            let code = line.trim_start();
            let Some((ty, rest)) = code.split_once(' ') else { continue };
            if !matches!(ty, "u8" | "u16" | "u32" | "u64" | "s8" | "s16" | "s32" | "s64") {
                continue;
            }
            let Some((name, rhs)) = rest.split_once(" = ") else { continue };
            let rhs = rhs.split("  //").next().unwrap_or(rhs).trim_end();
            let Some(rhs) = rhs.strip_suffix(';') else { continue };
            // (a register read back from the CPU after a call: while nothing changes the CPU)
            let cpu_read = rhs.starts_with("guest::cpu()->") && rhs.ends_with(']') && !rhs.contains(' ');
            let memory = match foldable.get(name) {
                Some(&m) => m,
                None if cpu_read => false,
                None => continue,
            };
            let uses: Vec<usize> = (0..lines.len()).filter(|&i| i != d && mentions(&lines[i], name)).collect();
            let [u] = uses.as_slice() else { continue };
            let u = *u;
            let at = indent(&line);
            let use_code = lines[u].split("  //").next().unwrap_or(&lines[u]).to_string();
            if u < d || use_code.matches(name).count() != 1 || indent(&lines[u]) < at || use_code.trim_start().starts_with('}') {
                continue;
            }
            let operands = words(rhs);
            let between = &lines[d + 1..u];
            let blocked = between.iter().any(|l| {
                let t = l.trim_start();
                indent(l) < at
                    || !l.starts_with(' ')
                    || t.starts_with("do {")
                    || t.starts_with("for (")
                    || t.starts_with("} while")
                    || operands.iter().any(|w| assigns(l, w))
                    || (cpu_read && (t.starts_with("guest::cpu()->") || t.contains("call_") || t.contains("guest::call_address") || t.contains("guest::svc")))
                    || (memory && !(words(t).first().map_or(false, |w| assigns(l, w)) && !t.contains("call_") && !t.contains("guest::") && !t.starts_with('*') && !t.contains("->")))
            });
            if blocked || lines[u].trim_start().starts_with(&format!("{} =", name)) {
                continue;
            }
            // the use, with x replaced (whole words only); parentheses unless x is a whole operand there (a return's
            // value, an assignment's, an argument, a condition)
            let mut out = String::new();
            let mut last = 0;
            for (i, _) in use_code.match_indices(name) {
                let before = use_code[..i].chars().next_back();
                let after = use_code[i + name.len()..].chars().next();
                let ident = |c: Option<char>| c.map_or(false, |c| c.is_ascii_alphanumeric() || c == '_');
                if !ident(before) && !ident(after) {
                    let left = use_code[..i].trim_end();
                    let whole_left = left.ends_with('(') || left.ends_with(',') || left.ends_with("return")
                        || (left.ends_with(" =") || left.ends_with("[")) && !left.ends_with("==");
                    let right = use_code[i + name.len()..].trim_start();
                    let whole = whole_left && (right.starts_with(')') || right.starts_with(',') || right.starts_with(';') || right.starts_with(']'));
                    let value = if compound_text(rhs) && !whole { format!("({})", rhs) } else { rhs.to_string() };
                    out.push_str(&use_code[last..i]);
                    out.push_str(&value);
                    last = i + name.len();
                }
            }
            out.push_str(&use_code[last..]);
            let out = tidy_masks(&out);
            if out.trim().len() > 110 {
                continue;
            }
            let comment = lines[u][use_code.len()..].to_string();
            let comment = if comment.is_empty() && out.contains("0x") { "  // (from the original)".to_string() } else { comment };
            lines[u] = out + &comment;
            lines.remove(d);
            changed = true;
            break;
        }
        if !changed {
            break;
        }
    }
    let mut out = lines.join("\n");
    out.push('\n');
    out
}

// `guest::cpu()->r[N] = x;` where x was read from the CPU's r[N] earlier in the same block (`x = guest::cpu()->r[N];`)
// with no call, system call, write to the CPU, loop, label or other mention of x between: the CPU still holds x, the
// write changes nothing. Such writes are left out, then the reads nothing uses any more.
fn drop_unchanged_write_backs(body: &str, params: &HashMap<String, String>) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let indent = |l: &str| (l.len() - l.trim_start().len()) / 4;
    let field_value = |l: &str| -> Option<(String, String)> {
        // `guest::cpu()->r[N] = x;` -> (r[N], x)
        let t = l.trim_start().strip_prefix("guest::cpu()->")?;
        let (field, v) = t.split_once(" = ")?;
        let v = v.strip_suffix(';')?;
        (v.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') && !v.starts_with(|c: char| c.is_ascii_digit())).then(|| (field.to_string(), v.to_string()))
    };
    let read_of = |l: &str| -> Option<(String, String)> {
        // `[T ]x = guest::cpu()->r[N];` -> (x, r[N])
        let t = l.trim_start();
        let t = t.split_once(' ').filter(|(ty, _)| matches!(*ty, "u32" | "float")).map_or(t, |(_, r)| r);
        let (x, rest) = t.split_once(" = guest::cpu()->")?;
        // (a variable only: `*gptr<u32>(a) = guest::cpu()->r[1];` is a store)
        if !x.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') || x.starts_with(|c: char| c.is_ascii_digit()) {
            return None;
        }
        Some((x.to_string(), rest.strip_suffix(';')?.to_string()))
    };
    // (a call or system call changes every register; a write to the CPU, the field it writes)
    let changes = |l: &str, field: &str| {
        let t = l.trim_start();
        t.starts_with(&format!("guest::cpu()->{} =", field)) || t.contains("call_") || t.contains("guest::call_address") || t.contains("guest::svc")
    };
    let mut i = 0;
    while i < lines.len() {
        let Some((field, x)) = field_value(&lines[i]) else {
            i += 1;
            continue;
        };
        // (no loop between either: at a loop header the proof does not relate the CPU's copy of a register the
        // function keeps in a variable, so it could not see that the CPU still holds it)
        let clear = |from: usize, at: usize, lines: &[String]| {
            lines[from..i].iter().all(|l| {
                let t = l.trim_start();
                l.starts_with(' ') && indent(l) >= at && !changes(l, &field) && !t.starts_with("do {") && !t.starts_with("for (")
            })
        };
        // the nearest earlier line that mentions x: x read from that register; or none, x being the parameter that
        // holds the register's entry value (the C++ reads it so), with nothing between changing the register
        match (0..i).rev().find(|&j| mentions(&lines[j], &x)) {
            Some(d) => {
                let same = read_of(&lines[d]).map_or(false, |(v, f)| v == x && f == field);
                let at = indent(&lines[d]);
                if same && clear(d + 1, at, &lines) && indent(&lines[i]) >= at {
                    lines.remove(i);
                    continue;
                }
            }
            None if params.get(&x) == Some(&field) && clear(0, 0, &lines) => {
                lines.remove(i);
                continue;
            }
            None => {}
        }
        i += 1;
    }
    // reads of the CPU nothing uses any more
    let mut k = 0;
    while k < lines.len() {
        if let Some((x, _)) = read_of(&lines[k]) {
            if !(0..lines.len()).any(|j| j != k && mentions(&lines[j], &x)) {
                lines.remove(k);
                continue;
            }
        }
        k += 1;
    }
    let mut out = lines.join("\n");
    out.push('\n');
    out
}

// `if (c) { return a; } return b;` as one return: `return c;` for 1 and 0, `return !c;` (the comparison turned
// around) for 0 and 1, `return c ? a : b;` for other plain values. The statements are the same.
fn return_choices(body: &str) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let plain = |t: &str| !t.is_empty() && t.chars().all(|c| c.is_ascii_alphanumeric() || c == '_' || c == '.' || c == '(' || c == ')');
    let invert = |c: &str| -> String {
        let top = !c.contains("&&") && !c.contains("||") && !c.contains('?');
        for (op, not) in [(" == ", " != "), (" != ", " == "), (" <= ", " > "), (" >= ", " < "), (" < ", " >= "), (" > ", " <= ")] {
            if top && c.matches(op).count() == 1 && [" == ", " != ", " <= ", " >= ", " < ", " > "].iter().filter(|o| c.contains(*o)).count() == 1 {
                return c.replacen(op, not, 1);
            }
        }
        format!("!({})", c)
    };
    let mut i = 0;
    while i + 3 < lines.len() {
        let pad = &lines[i][..lines[i].len() - lines[i].trim_start().len()];
        let inner = format!("{}    ", pad);
        let cond = lines[i].strip_prefix(pad).and_then(|t| t.strip_prefix("if (")).and_then(|t| t.strip_suffix(") {"));
        let a = lines[i + 1].strip_prefix(&inner).and_then(|t| t.strip_prefix("return ")).and_then(|t| t.strip_suffix(';'));
        let closed = lines[i + 2] == format!("{}}}", pad);
        let b = lines[i + 3].strip_prefix(pad).and_then(|t| t.strip_prefix("return ")).and_then(|t| t.strip_suffix(';'));
        let (Some(c), Some(a), true, Some(b)) = (cond, a, closed, b) else {
            i += 1;
            continue;
        };
        if a.contains("//") || b.contains("//") || !plain(a) || !plain(b) {
            i += 1;
            continue;
        }
        let value = match (a, b) {
            ("1u", "0u") => c.to_string(),
            ("0u", "1u") => invert(c),
            _ => format!("{} ? {} : {}", c, a, b),
        };
        let text = format!("{}return {};", pad, value);
        let text = if text.contains("0x") { format!("{}  // (from the original)", text) } else { text };
        lines.splice(i..i + 4, [text]);
        i += 1;
    }
    let mut out = lines.join("\n");
    out.push('\n');
    out
}

// `x = E; ... return x;` with only plain statements between (no block, label, goto or call, none mentioning x, and
// none writing memory when E reads it) is `... return E;` (E not reading the CPU, nor calling).
fn return_values(body: &str) -> String {
    let mut lines: Vec<String> = body.lines().map(|l| l.to_string()).collect();
    let indent = |l: &str| (l.len() - l.trim_start().len()) / 4;
    let mut i = 0;
    while i < lines.len() {
        let t = lines[i].trim_start().to_string();
        let Some(x) = t.strip_prefix("return ").and_then(|r| r.strip_suffix(';')) else {
            i += 1;
            continue;
        };
        if !x.chars().all(|c| c.is_ascii_alphanumeric() || c == '_') || x.starts_with(|c: char| c.is_ascii_digit()) {
            i += 1;
            continue;
        }
        let x = x.to_string();
        let Some(d) = (0..i).rev().find(|&j| mentions(&lines[j], &x)) else {
            i += 1;
            continue;
        };
        let code = lines[d].split("  //").next().unwrap_or(&lines[d]).trim_start().to_string();
        let code = code.split_once(' ').filter(|(ty, _)| matches!(*ty, "u8" | "u16" | "u32" | "s8" | "s16" | "s32")).map_or(code.clone(), |(_, r)| r.to_string());
        let Some(e) = code.strip_prefix(&format!("{} = ", x)).and_then(|r| r.strip_suffix(';')) else {
            i += 1;
            continue;
        };
        let memory = e.contains('*') || e.contains("->");
        let plain = lines[d + 1..i].iter().all(|l| {
            let t = l.trim_start();
            l.starts_with(' ') && indent(l) == indent(&lines[i]) && !t.ends_with('{') && !t.starts_with('}') && !t.starts_with("goto ")
                && !t.contains("call_") && !t.contains("guest::call_address") && !t.contains("guest::svc")
                && !(memory && (t.starts_with('*') || t.contains("->")))
        });
        if !plain || indent(&lines[d]) != indent(&lines[i]) || mentions(e, &x) || e.contains("guest::") || e.contains("call_") {
            i += 1;
            continue;
        }
        let comment = if e.contains("0x") { "  // (from the original)" } else { "" };
        lines[i] = format!("{}return {};{}", " ".repeat(4 * indent(&lines[i])), e, comment);
        lines.remove(d);
        i = d;
    }
    let mut out = lines.join("\n");
    out.push('\n');
    out
}

// what the emitter leaves out: the registers the decompiler unsaved (saved_* copies and their restores)
fn stack_bookkeeping(s: &Stmt) -> bool {
    match s {
        Stmt::Decl(_, n, _) if n.starts_with("saved_") => true,
        Stmt::Assign(_, Expr::Var(v)) if v.starts_with("saved_") => true,
        _ => false,
    }
}

fn decls(list: &[Stmt], out: &mut BTreeMap<String, Ty>) -> R<()> {
    for s in list {
        match s {
            Stmt::Decl(t, n, _) => {
                if let Some(old) = out.insert(n.clone(), *t) {
                    if old != *t {
                        return Err(format!("{} declared as {} and {}", n, old.c_name(), t.c_name()));
                    }
                }
            }
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                decls(a, out)?;
                decls(b, out)?;
            }
            _ => {}
        }
    }
    Ok(())
}

fn reads_stack(list: &[Stmt]) -> bool {
    fn e(x: &Expr) -> bool {
        let mut r = crate::types::Reads::default();
        crate::types::reads(x, &mut r);
        r.vars.iter().any(|v| v == "r13" || v == "ea")
    }
    list.iter().any(|s| match s {
        Stmt::Assign(n, Expr::Bin(_, a, b)) if n == "r13" && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) => false,
        Stmt::Decl(_, _, Some(x)) | Stmt::Assign(_, x) | Stmt::Switch(x, _) => e(x),
        Stmt::Store(_, a, v) => e(a) || e(v),
        Stmt::If(c, a, b) | Stmt::While { cond: c, body: a, check: b, .. } => e(c) || reads_stack(a) || reads_stack(b),
        _ => false,
    })
}

// whether a register the C++ cannot see after a call (r1-r3, r12, flags, s0-s15) is read after one
fn uses_call_clobbers(f: &Function) -> Option<String> {
    let lv = liveness(f);
    fn after_calls(list: &[Stmt], prefix: &Vec<usize>, out: &mut Vec<Vec<usize>>) {
        for (i, s) in list.iter().enumerate() {
            let mut p = prefix.clone();
            p.push(i);
            match s {
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    let mut pa = p.clone();
                    pa.push(0);
                    let mut pb = p.clone();
                    pb.push(1);
                    after_calls(a, &pa, out);
                    after_calls(b, &pb, out);
                }
                Stmt::GuestCall(_, false) => out.push(p),
                _ => {}
            }
        }
    }
    let _ = &lv;
    // the statement after each call's SI(): its live-in must not hold a clobbered register
    let mut calls = Vec::new();
    after_calls(&f.body, &vec![], &mut calls);
    // r1-r3, r12 and s0-s15 are read back from the CPU after a call (as SI() does); the flags cannot be
    let clobbered = ["nf", "zf", "cf", "vf", "qf", "ge", "fpsr"];
    for p in calls {
        // SI() follows the call: liveness after SI = live-out of the statement after it
        let mut q = p.clone();
        *q.last_mut().unwrap() += 1; // the SI()
        if let Some(live) = lv.live_out.get(&q) {
            if let Some(v) = live.iter().find(|v| clobbered.contains(&v.as_str())) {
                return Some(v.clone());
            }
        } else {
            return Some("(no SI after a call)".into());
        }
    }
    None
}

// the bottom of the stack frame in a function written with one (frame_mode): frame.at(k) is SP + k
const SP: &str = "__sp";

// sp + k for an address relative to the frame's bottom
fn sp_offset(a: &Expr) -> Option<u64> {
    match a {
        Expr::Var(v) if v == SP => Some(0),
        Expr::Bin(BinOp::Add, b, k) => match (&**b, &**k) {
            (Expr::Var(v), Expr::Num(k, _)) if v == SP => Some(*k),
            _ => None,
        },
        _ => None,
    }
}

// The stack frame as one object. When the function moves sp only by constants, with the same depth wherever paths
// meet, at its deepest at every call and system call and at the entry's at every return, and makes no tail call, sp is
// entry - M at every call: a guest::StackFrame of M bytes (with the export's push, GUEST_EXPORT_FRAMED, for the pushed
// registers) gives callees the same stack, and every address relative to sp becomes one relative to the frame's
// bottom (SP, written frame.at(k)). Returns the function so rewritten (its sp moves left out) and M.
fn frame_mode(f: &Function) -> Option<(Function, u64, bool)> {
    let sp_move = |s: &Stmt| -> Option<i64> {
        match s {
            Stmt::Assign(n, Expr::Bin(op, a, b)) if n == "r13" && **a == Expr::Var("r13".into()) => match (op, &**b) {
                (BinOp::Sub, Expr::Num(k, _)) => Some(*k as i64),
                (BinOp::Add, Expr::Num(k, _)) => Some(-(*k as i64)),
                _ => None,
            },
            _ => None,
        }
    };
    struct St {
        labels: HashMap<String, i64>,
        depths: HashMap<Vec<usize>, i64>,
        calls: Vec<i64>,
        ok: bool,
        why: &'static str,
        tails: bool, // it makes tail calls
    }
    fn goto(l: &str, cur: i64, st: &mut St) {
        match st.labels.get(l) {
            Some(&y) if y != cur => { st.ok = false; st.why = "goto depth differs"; }
            Some(_) => {}
            None => {
                st.labels.insert(l.to_string(), cur);
            }
        }
    }
    // the depth (bytes below the entry sp) before each statement; returns the depth after the list (None: not reached)
    fn walk(list: &[Stmt], prefix: &[usize], mut d: Option<i64>, st: &mut St, sp_move: &dyn Fn(&Stmt) -> Option<i64>) -> Option<i64> {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            if let Stmt::Label(l) = s {
                match (d, st.labels.get(l).copied()) {
                    (Some(x), Some(y)) if x != y => { st.ok = false; st.why = "label depth differs"; }
                    (None, Some(y)) => d = Some(y),
                    (Some(x), None) => {
                        st.labels.insert(l.clone(), x);
                    }
                    (None, None) => { st.ok = false; st.why = "label reached first from below"; } // reached only by a jump from below: its depth is not known yet
                    _ => {}
                }
                continue;
            }
            let Some(cur) = d else { continue };
            st.depths.insert(p.clone(), cur);
            if let Some(m) = sp_move(s) {
                d = Some(cur + m);
                if cur + m < 0 {
                    st.ok = false;
                    st.why = "sp below the entry";
                }
                continue;
            }
            match s {
                Stmt::Assign(n, _) | Stmt::Decl(_, n, _) if n == "r13" => { st.ok = false; st.why = "r13 assigned otherwise"; }
                Stmt::SetCpu(CpuField::R(13), _) => { st.ok = false; st.why = "r13 written in the CPU"; }
                Stmt::GuestCall(_, false) | Stmt::Dispatch(false) | Stmt::Svc(_) => st.calls.push(cur),
                // a tail call once the frame is given back (the C++ releases its StackFrame before it)
                Stmt::GuestCall(_, true) | Stmt::Dispatch(true) => {
                    if cur != 0 {
                        st.ok = false;
                        st.why = "tail call inside the frame";
                    }
                    st.tails = true;
                    d = None;
                }
                Stmt::Return => {
                    if cur != 0 {
                        st.ok = false;
                        st.why = "return inside the frame";
                    }
                    d = None;
                }
                Stmt::Goto(l) => {
                    goto(l, cur, st);
                    d = None;
                }
                Stmt::Switch(_, cases) => {
                    for (_, l) in cases {
                        goto(l, cur, st);
                    }
                }
                Stmt::If(_, a, b) => {
                    let da = walk(a, &[p.clone(), vec![0]].concat(), Some(cur), st, sp_move);
                    let db = walk(b, &[p.clone(), vec![1]].concat(), Some(cur), st, sp_move);
                    d = match (da, db) {
                        (Some(x), Some(y)) if x != y => {
                            st.ok = false;
                            st.why = "if branches end at different depths";
                            None
                        }
                        (Some(x), _) | (None, Some(x)) => Some(x),
                        (None, None) => None,
                    };
                }
                Stmt::While { top, test, body, check, .. } => {
                    goto(top, cur, st);
                    if let Some(t) = test {
                        goto(t, cur, st);
                    }
                    let db = walk(body, &[p.clone(), vec![0]].concat(), Some(cur), st, sp_move);
                    let dc = walk(check, &[p.clone(), vec![1]].concat(), Some(cur), st, sp_move);
                    if db.map_or(false, |x| x != cur) || dc.map_or(false, |x| x != cur) {
                        st.ok = false;
                        st.why = "loop changes the depth";
                    }
                    d = Some(cur);
                }
                _ => {}
            }
        }
        d
    }
    // a kept push (`ea = r13 - 4; *ea = r4; r13 = ea;`): r13 = ea is the move r13 = r13 - 4 (ea still holds r13 - 4)
    fn moves(list: &mut [Stmt]) {
        let mut at: HashMap<String, i64> = HashMap::new(); // variables holding r13 + k
        for s in list.iter_mut() {
            match s {
                Stmt::Decl(_, x, Some(e)) | Stmt::Assign(x, e) if x != "r13" => {
                    let off = match e {
                        Expr::Var(v) if v == "r13" => Some(0),
                        Expr::Bin(op @ (BinOp::Add | BinOp::Sub), a, b) => match (&**a, &**b) {
                            (Expr::Var(v), Expr::Num(k, _)) if v == "r13" => Some(if *op == BinOp::Add { *k as i64 } else { -(*k as i64) }),
                            _ => None,
                        },
                        _ => None,
                    };
                    match off {
                        Some(o) => {
                            at.insert(x.clone(), o);
                        }
                        None => {
                            at.remove(x);
                        }
                    }
                }
                Stmt::Assign(x, Expr::Var(v)) if x == "r13" && at.contains_key(v) => {
                    let o = at[v];
                    *s = Stmt::Assign(
                        "r13".into(),
                        Expr::Bin(if o < 0 { BinOp::Sub } else { BinOp::Add }, Box::new(Expr::Var("r13".into())), Box::new(Expr::Num(o.unsigned_abs(), Ty::U32))),
                    );
                    at.clear();
                }
                Stmt::Assign(x, _) if x == "r13" => at.clear(),
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    moves(a);
                    moves(b);
                    at.clear();
                }
                Stmt::Store(..) | Stmt::Nop | Stmt::Preempt => {}
                _ => at.clear(),
            }
        }
    }
    let mut f = f.clone();
    moves(&mut f.body);
    let f = &f;
    let mut st = St { labels: HashMap::new(), depths: HashMap::new(), calls: vec![], ok: true, why: "", tails: false };
    walk(&f.body, &[], Some(0), &mut st, &sp_move);
    let m = st.depths.values().copied().max().unwrap_or(0);
    if std::env::var("DECOMP_DEBUG_FRAME").is_ok() && m > 0 && (!st.ok || st.calls.iter().any(|&c| c != m)) {
        eprintln!("frame {:x}: {} calls {:?} max {}", f.address, if st.ok { "calls not at the deepest" } else { st.why }, st.calls, m);
    }
    if !st.ok || m <= 0 || st.calls.iter().any(|&c| c != m) {
        return None;
    }
    // r13 at depth d is SP + (M - d)
    fn fold(e: Expr) -> Expr {
        match e {
            Expr::Bin(op @ (BinOp::Add | BinOp::Sub), a, b) => {
                let (a, b) = (fold(*a), fold(*b));
                match (&a, &b, op) {
                    (Expr::Bin(BinOp::Add, x, k1), Expr::Num(k2, _), _) if matches!(&**x, Expr::Var(v) if v == SP) => {
                        let Expr::Num(k1, _) = **k1 else { return Expr::Bin(op, Box::new(a), Box::new(b)) };
                        let k = if op == BinOp::Add { k1.wrapping_add(*k2) } else { k1.wrapping_sub(*k2) } & 0xffff_ffff;
                        Expr::Bin(BinOp::Add, x.clone(), Box::new(Expr::Num(k, Ty::U32)))
                    }
                    _ => Expr::Bin(op, Box::new(a), Box::new(b)),
                }
            }
            Expr::Un(o, a) => Expr::Un(o, Box::new(fold(*a))),
            Expr::Cast(t, a) => Expr::Cast(t, Box::new(fold(*a))),
            Expr::Load(t, a) => Expr::Load(t, Box::new(fold(*a))),
            Expr::Bin(o, a, b) => Expr::Bin(o, Box::new(fold(*a)), Box::new(fold(*b))),
            Expr::Cond(c, a, b) => Expr::Cond(Box::new(fold(*c)), Box::new(fold(*a)), Box::new(fold(*b))),
            Expr::Call(n, args) => Expr::Call(n, args.into_iter().map(fold).collect()),
            other => other,
        }
    }
    fn subst(e: &mut Expr, by: &Expr) {
        match e {
            Expr::Var(v) if v == "r13" => *e = by.clone(),
            Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => subst(a, by),
            Expr::Bin(_, a, b) => {
                subst(a, by);
                subst(b, by);
            }
            Expr::Cond(c, a, b) => {
                subst(c, by);
                subst(a, by);
                subst(b, by);
            }
            Expr::Call(_, args) => args.iter_mut().for_each(|x| subst(x, by)),
            _ => {}
        }
    }
    fn rewrite(list: &mut [Stmt], prefix: &[usize], st: &St, m: i64, sp_move: &dyn Fn(&Stmt) -> Option<i64>) {
        for (i, s) in list.iter_mut().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            let Some(&d) = st.depths.get(&p) else { continue };
            if sp_move(s).is_some() {
                *s = Stmt::Nop;
                continue;
            }
            let by = Expr::Bin(BinOp::Add, Box::new(Expr::Var(SP.into())), Box::new(Expr::Num((m - d) as u64, Ty::U32)));
            let one = |e: &mut Expr| {
                subst(e, &by);
                *e = fold(std::mem::replace(e, Expr::Num(0, Ty::U32)));
            };
            match s {
                Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) | Stmt::ReturnUnlessPc(e) => one(e),
                Stmt::Store(_, a, v) => {
                    one(a);
                    one(v);
                }
                Stmt::If(c, a, b) => {
                    one(c);
                    rewrite(a, &[p.clone(), vec![0]].concat(), st, m, sp_move);
                    rewrite(b, &[p.clone(), vec![1]].concat(), st, m, sp_move);
                }
                Stmt::While { cond, body, check, .. } => {
                    one(cond);
                    rewrite(body, &[p.clone(), vec![0]].concat(), st, m, sp_move);
                    rewrite(check, &[p.clone(), vec![1]].concat(), st, m, sp_move);
                }
                _ => {}
            }
        }
    }
    let mut g = f.clone();
    rewrite(&mut g.body, &[], &st, m, &sp_move);
    // nothing left of r13, and no address below the frame
    let mut left = false;
    crate::values::each_expr(&g.body, &mut |e| {
        let mut r = crate::types::Reads::default();
        crate::types::reads(e, &mut r);
        left |= r.vars.iter().any(|v| v == "r13");
        left |= format!("{:?}", e).contains("Var(\"__sp\")") && below_frame(e);
    });
    if left {
        if std::env::var("DECOMP_DEBUG_FRAME").is_ok() {
            eprintln!("frame {:x}: r13 left or an address below the frame", f.address);
        }
        return None;
    }
    Some((g, m as u64, st.tails))
}

// an address SP + k with k wrapped past 2^31 (below the frame)
fn below_frame(e: &Expr) -> bool {
    match e {
        Expr::Bin(BinOp::Add, a, k) => {
            matches!((&**a, &**k), (Expr::Var(v), Expr::Num(k, _)) if v == SP && *k >= 1 << 31) || below_frame(a) || below_frame(k)
        }
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => below_frame(a),
        Expr::Bin(_, a, b) => below_frame(a) || below_frame(b),
        Expr::Cond(c, a, b) => below_frame(c) || below_frame(a) || below_frame(b),
        Expr::Call(_, args) => args.iter().any(below_frame),
        _ => false,
    }
}

// The push the export can do (GUEST_EXPORT_FRAMED's mask) when the function's only sp moves are the push's (the
// saved registers' bytes, down at the entry, up before each return) and it makes no tail call (the export's frame
// lasts until the C++ returns, and the original pops before branching).
fn push_mask(f: &Function, saved: &[(String, u32)], stack: bool) -> Option<u32> {
    if stack || saved.is_empty() {
        return None;
    }
    let mut mask = 0u32;
    for (r, _) in saved {
        let k: u32 = r.strip_prefix('r')?.parse().ok()?;
        if !(4..=14).contains(&k) || k == 13 {
            return None;
        }
        mask |= 1 << k;
    }
    let bytes = 4 * saved.len() as u64;
    fn ok(list: &[Stmt], bytes: u64) -> bool {
        list.iter().all(|s| match s {
            Stmt::Decl(_, n, _) if n == "r13" => false,
            Stmt::Assign(n, e) if n == "r13" => matches!(e, Expr::Bin(BinOp::Add | BinOp::Sub, a, b)
                if **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(k, _) if k == bytes)),
            Stmt::GuestCall(_, true) | Stmt::Dispatch(true) | Stmt::SetCpu(CpuField::R(13), _) => false,
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => ok(a, bytes) && ok(b, bytes),
            _ => true,
        })
    }
    if ok(&f.body, bytes) { Some(mask) } else { None }
}

fn register_list(mask: u32) -> String {
    (0..15).filter(|r| mask >> r & 1 != 0).map(|r| if r == 14 { "lr".to_string() } else { format!("r{}", r) }).collect::<Vec<_>>().join(", ")
}

pub fn emit(d: &crate::decompile::Decompiled) -> R<String> {
    // accesses through an argument register that still holds the argument read as its fields
    let f = &crate::values::arguments_in_addresses(&d.function);
    // (an indirect call to a function's address: a call of that function)
    let f = &crate::dispatch::as_direct_calls(f);
    let addr = f.address | f.thumb as u32;
    // the stack frame as one object (the push by the export, the rest by a guest::StackFrame), when it can be
    let framed = frame_mode(f);
    let (f, frame_bytes, tails) = match &framed {
        Some((g, m, t)) => (g, *m, *t),
        None => (f, 0, false),
    };
    let stack = frame_bytes == 0 && reads_stack(&f.body);
    let pushed: Option<u32> = {
        let mut mask = Some(0u32);
        for (r, _) in &d.saved {
            match r.strip_prefix('r').and_then(|k| k.parse::<u32>().ok()) {
                Some(k) if (4..=14).contains(&k) && k != 13 => mask = mask.map(|m| m | 1 << k),
                _ => mask = None,
            }
        }
        // (not with tail calls: the export's push lasts until the C++ returns, the StackFrame can be given back)
        mask.filter(|m| *m != 0 && 4 * m.count_ones() as u64 <= frame_bytes && !tails)
    };
    let mask = if frame_bytes > 0 { pushed } else { push_mask(f, &d.saved, stack) };
    // the bytes the StackFrame lowers sp by (the frame less the export's push)
    let locals_bytes = frame_bytes - mask.filter(|_| frame_bytes > 0).map_or(0, |m| 4 * m.count_ones() as u64);
    if let Some(v) = uses_call_clobbers(f) {
        return Err(format!("reads {} after a call", v));
    }
    let mut vars = BTreeMap::new();
    decls(&f.body, &mut vars)?;
    let lv = liveness(f);
    // a function that calls passes r0-r3 as they are: the ones it never writes are the caller's (parameters too)
    fn calls(list: &[Stmt]) -> bool {
        list.iter().any(|s| match s {
            Stmt::GuestCall(..) => true,
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => calls(a) || calls(b),
            _ => false,
        })
    }
    let has_calls = calls(&f.body);
    let declared: HashSet<&str> = f.locals.iter().map(|(_, n, _)| n.as_str()).collect();
    let _ = has_calls;
    let params: Vec<&str> = ARGS.iter().copied().filter(|r| lv.at_entry.contains(*r) && declared.contains(r)).collect();
    // parameters go by position (the k-th is rk): every register up to the last one read gets one
    let last_param = params.iter().map(|p| p[1..].parse::<usize>().unwrap()).max();
    let call_list: Vec<String> = ARGS
        .iter()
        .enumerate()
        .map(|(k, r)| if declared.contains(r) { r.to_string() } else { format!("guest::cpu()->r[{}]", k) })
        .collect();
    let needs = call_needs(f, &lv);
    let floats: Vec<String> = (0..16).map(|i| format!("S{}", i)).filter(|s| lv.at_entry.contains(s)).collect();
    let last_float = floats.iter().map(|s| s[1..].parse::<usize>().unwrap()).max();
    if lv.at_entry.iter().any(|v| v.starts_with('S') && !floats.contains(v)) {
        return Err("reads float registers above s15".into());
    }
    let mut fl = BTreeMap::new();
    fields(&f.body, &mut fl)?;
    let base = format!("f_{:08x}", f.address);
    let reload: Vec<(String, String)> = f
        .synced
        .iter()
        .filter_map(|(v, fl)| match fl {
            CpuField::R(n @ (1 | 2 | 3 | 12 | 14)) => Some((v.clone(), format!("guest::cpu()->r[{}]", n))),
            CpuField::S(n) if *n < 16 => Some((v.clone(), format!("guest::cpu()->s[{}]", n))),
            _ => None,
        })
        .collect();
    let has_sp = f.locals.iter().any(|(_, n, _)| n == "r13");
    let float_args: Vec<(String, u32)> = f
        .synced
        .iter()
        .filter_map(|(v, fl)| match fl {
            CpuField::S(k) if *k < 16 => Some((v.clone(), *k)),
            _ => None,
        })
        .collect();
    let has_r0 = declared.contains("r0");
    // arguments whose struct the repository has, when every access of the function is one of its fields
    let mut known = HashMap::new();
    if let Some(db) = crate::view::types() {
        for (k, fs) in &fl {
            let Some(st) = db.param(addr, *k) else { continue };
            if st.contains("::") || db.header(&st).is_none() {
                continue;
            }
            if fs.iter().all(|(off, t)| db.field_path(&st, *off, (t.bits() / 8) as u64).is_some()) {
                known.insert(*k, st);
            }
        }
    }
    let mut assigned = HashSet::new();
    crate::view::assigned_vars(&f.body, &mut assigned);
    // what a caller observes besides r0 (check.rs OBSERVED): r1, s0, s1, r4-r11 and sp
    // (registers restored from a saved_* copy before every return keep the caller's value in the CPU)
    let restored: HashSet<String> = vars.keys().filter_map(|n| n.strip_prefix("saved_").map(|r| r.to_string())).collect();
    let write_back: Vec<(String, String)> = f
        .synced
        .iter()
        .filter(|(v, _)| assigned.contains(v) && !restored.contains(v))
        .filter_map(|(v, fl)| match fl {
            CpuField::R(13) if !stack => None, // the CPU's sp is moved directly
            CpuField::R(1) | CpuField::S(0 | 1) if !crate::results::observed(f.address, &crate::sym::cpu_key(fl)) => None,
            CpuField::R(n @ (1 | 4..=11 | 13)) => Some((format!("guest::cpu()->r[{}]", n), v.clone())),
            CpuField::S(n @ (0 | 1)) => Some((format!("guest::cpu()->s[{}]", n), v.clone())),
            _ => None,
        })
        .collect();
    let svc_regs: Vec<(String, u32)> = f
        .synced
        .iter()
        .filter_map(|(v, fl)| match fl {
            CpuField::R(k) if *k <= 7 => Some((v.clone(), *k)),
            _ => None,
        })
        .collect();
    // (sp written to the CPU before calls only when the function moves it: otherwise the CPU's is the same)
    let has_sp = has_sp && assigned.contains("r13");
    let mut e = Emitter { known: known.clone(), stack, framed: mask.is_some() || frame_bytes > 0, frame_object: locals_bytes > 0, reload, has_sp, float_args, call_list, needs, has_r0, pc: None, virtual_slot: None, slots: HashMap::new(), tables: HashMap::new(), fields: fl, struct_name: HashMap::new(), callees: BTreeMap::new(), write_back, svc_regs, live: lv.clone(), labels: HashSet::new(), values: Default::default(), globals: Default::default(), vtables: Default::default(), cur: vec![], exits: HashMap::new(), targets: HashSet::new(), returns: assigned.contains("r0") && crate::results::observed(f.address, "r0"), var_types: vars.iter().map(|(n, t)| (n.clone(), *t)).chain(f.locals.iter().map(|(t, n, _)| (n.clone(), *t))).chain(std::iter::once((SP.to_string(), Ty::U32))).collect(), foldable: HashMap::new(), typed: HashMap::new(), local_fields: HashMap::new(), after_calls: crate::flow::after_calls(f), sites: crate::sites::at_calls(f), site_extras: site_extras(f, &lv), synced: f.synced.clone(), fallthrough: HashMap::new(), breaks: HashSet::new(), folding: std::cell::Cell::new(false), arities: HashMap::new(), fixed: false, out: String::new() };
    // the variables split into their values: registers and temporaries (not the arguments' copies, the saved copies,
    // sp, lr, nor what a helper writes through a pointer)
    let mut splittable: HashSet<String> = vars.keys().cloned().chain(f.locals.iter().map(|(_, n, _)| n.clone())).collect();
    let mut pointed: Vec<String> = Vec::new();
    crate::values::each_expr(&f.body, &mut |x| pointed.extend(crate::flow::out_params(x)));
    splittable.retain(|n| !n.starts_with("arg") && !n.starts_with("saved_") && n != "r13" && n != "r14" && !pointed.contains(n));
    e.values = crate::values::split(f, &splittable, &|s, p| e.effects(s, p));
    // (the parameters the signature gives as the register itself: no argK copy)
    let plain: HashSet<String> =
        params.iter().filter(|p| !vars.contains_key(&format!("arg{}", &p[1..]))).map(|p| p.to_string()).collect();
    let (typed, local_fields) = typed_locals(f, &e, &lv, &plain);
    e.typed = typed;
    e.local_fields = local_fields;
    exit_blocks(&f.body, &[], &mut e.exits);
    // (an exit block copied at many gotos makes the function longer than the gotos do)
    let mut gotos: HashMap<String, usize> = HashMap::new();
    fn count_gotos(list: &[Stmt], out: &mut HashMap<String, usize>) {
        for s in list {
            match s {
                Stmt::Goto(l) => *out.entry(l.clone()).or_default() += 1,
                Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                    count_gotos(a, out);
                    count_gotos(b, out);
                }
                _ => {}
            }
        }
    }
    count_gotos(&f.body, &mut gotos);
    e.exits.retain(|l, x| x.written * gotos.get(l).copied().unwrap_or(0) <= EXIT_COPIES_STATEMENTS);
    // (a jump block to a jump block is not copied: no chains, no cycles)
    loop {
        let chained: Vec<String> = e
            .exits
            .iter()
            .filter(|(_, x)| x.jump.as_ref().map_or(false, |m| e.exits.get(m).map_or(false, |y| y.jump.is_some())))
            .map(|(l, _)| l.clone())
            .collect();
        if chained.is_empty() {
            break;
        }
        for l in chained {
            e.exits.remove(&l);
        }
    }
    fallthrough_gotos(&f.body, &[], &mut e.fallthrough);
    loop_breaks(&f.body, &[], None, None, &mut e.breaks);
    jump_targets(&f.body, &[], &e.exits, &e.fallthrough, &e.breaks, &mut e.targets);
    // an exit block holding a label something else jumps to is not copied (the copy would define it again)
    loop {
        let holding: Vec<String> = e
            .exits
            .iter()
            .filter(|(_, x)| x.list.iter().any(|s| matches!(s, Stmt::Label(l) if e.targets.contains(l))))
            .map(|(l, _)| l.clone())
            .collect();
        if holding.is_empty() {
            break;
        }
        for l in holding {
            e.exits.remove(&l);
        }
        e.targets.clear();
        jump_targets(&f.body, &[], &e.exits, &e.fallthrough, &e.breaks, &mut e.targets);
    }
    let returns = assigned.contains("r0") && crate::results::observed(f.address, "r0");
    // the body first (it decides the callees), twice: the first time finds how many arguments each callee's calls need
    e.stmts(&f.body, 1, returns, &[])?;
    e.out.clear();
    e.labels.clear();
    e.slots.clear();
    e.tables.clear();
    e.foldable.clear();
    e.pc = None;
    e.virtual_slot = None;
    e.fixed = true;
    e.stmts(&f.body, 1, returns, &[])?;
    let body = std::mem::take(&mut e.out);
    // a register's saved copy used beyond saving and restoring (a second push of it): not written yet
    if body.contains("saved_") {
        return Err("uses a saved register copy".into());
    }
    let mut out = String::new();
    for st in e.known.values() {
        if let Some(h) = crate::view::types().and_then(|db| db.header(st)) {
            out.push_str(&format!("#include \"{}\"\n", h));
        }
    }
    out.push_str(&format!("// {}: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).\n", base));
    out.push_str(&format!("namespace d_{:08x} {{\n\n", f.address));
    let copies: HashSet<usize> = (0..4).filter(|k| vars.contains_key(&format!("arg{}", k))).collect();
    for (k, fs) in &e.fields {
        if !copies.contains(k) || e.known.contains_key(k) {
            continue;
        }
        let name = format!("Object_{:08x}_{}", f.address, k);
        let mut pos = 0u64;
        // packed: the original's offsets, whatever their alignment
        out.push_str(&format!("struct __attribute__((packed)) {} {{\n", name));
        let mut offsets = Vec::new();
        for (off, t) in fs {
            if *off < pos {
                return Err(format!("overlapping fields of argument {}", k));
            }
            if *off > pos {
                out.push_str(&format!("    u8 unknown_{:x}[0x{:x}];  // (not used here)\n", pos, off - pos));
            }
            let fname = field_name(*t, *off);
            out.push_str(&format!("    {} {};\n", t.c_name(), fname));
            offsets.push((fname, *off));
            pos = off + (t.bits() / 8) as u64;
        }
        out.push_str("};\n");
        for (fname, off) in offsets {
            // natural alignment of the fields (GUEST_OFFSET checks the layout)
            out.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});\n", name, fname, off));
        }
        out.push('\n');
        e.struct_name.insert(*k, name);
    }
    let mut local_structs: Vec<(&String, &String)> = e.typed.iter().collect();
    local_structs.sort();
    for (local, st) in local_structs {
        let mut pos = 0u64;
        out.push_str(&format!("struct __attribute__((packed)) {} {{\n", st));
        let mut offsets = Vec::new();
        for (off, t) in &e.local_fields[local] {
            if *off > pos {
                out.push_str(&format!("    u8 unknown_{:x}[0x{:x}];  // (not used here)\n", pos, off - pos));
            }
            let fname = field_name(*t, *off);
            out.push_str(&format!("    {} {};\n", t.c_name(), fname));
            offsets.push((fname, *off));
            pos = off + (t.bits() / 8) as u64;
        }
        out.push_str("};\n");
        for (fname, off) in offsets {
            out.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});\n", st, fname, off));
        }
        out.push('\n');
    }
    for (addr, n) in e.vtables.borrow().iter() {
        out.push_str(&format!("inline constexpr u32 {} = 0x{:08x}u;\n", n, addr));
    }
    for ((addr, t), n) in e.globals.borrow().iter() {
        out.push_str(&format!("inline guest::global<{}, 0x{:08x}> {};\n", t.c_name(), addr, n));
    }
    for (t, n) in &e.callees {
        let arity = e.arities.get(t).copied().unwrap_or_else(|| e.needs.get(t).map_or(4, |n| if n.full { 4 } else { n.arity }));
        let args = vec!["u32"; arity].join(", ");
        out.push_str(&format!("inline constexpr guest::Function<0x{:08x}, u32({})> {};\n", t, args, n));
    }
    out.push('\n');
    let mut sig = Vec::new();
    for k in 0..last_param.map_or(0, |m| m + 1) {
        let p = ARGS[k];
        if !params.contains(&p) {
            sig.push(format!("u32 {}_unused", p));
            continue;
        }
        if let Some(st) = e.known.get(&k) {
            sig.push(format!("gptr<{}> arg{}", st, k));
            continue;
        }
        match e.struct_name.get(&k) {
            Some(s) => sig.push(format!("gptr<{}> arg{}", s, k)),
            None if copies.contains(&k) => sig.push(format!("u32 arg{}_value", k)),
            // the register itself is the parameter (a pointer to its struct when it is typed)
            None => sig.push(match e.typed.get(p) {
                Some(st) => format!("gptr<{}> {}", st, p),
                None => format!("u32 {}", p),
            }),
        }
    }
    for k in 0..last_float.map_or(0, |m| m + 1) {
        let s = format!("S{}", k);
        if floats.contains(&s) {
            sig.push(format!("float {}", s));
        } else {
            sig.push(format!("float {}_unused", s));
        }
    }
    let signature_at = out.len();
    out.push_str(&format!("{} {}({}) {{\n", if returns { "u32" } else { "void" }, base, sig.join(", ")));
    if locals_bytes > 0 {
        out.push_str(&format!("    guest::StackFrame frame(0x{:x});  // the original's stack frame\n", locals_bytes));
    }
    // the registers and temporaries, all declared first (so gotos jump over no initialisation); only those used
    let used: HashSet<String> = body
        .split(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
        .map(|w| w.to_string())
        .collect();
    let mut locals: Vec<String> = Vec::new();
    let mut sinkable: Vec<(String, String)> = Vec::new(); // declared `= 0` only so that gotos skip no initialisation
    // what the function itself reads of the entry values (saving a callee-saved register for the caller is not a read)
    let used_at_entry = {
        // (without the saved copies and their restores, which the C++ leaves out)
        fn strip(list: &mut Vec<Stmt>) {
            list.retain(|s| !stack_bookkeeping(s));
            for s in list.iter_mut() {
                if let Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } = s {
                    strip(a);
                    strip(b);
                }
            }
        }
        let mut g = f.clone();
        strip(&mut g.body);
        crate::flow::liveness_with(&g, false).at_entry
    };
    for (n, t) in &vars {
        if n.starts_with("saved_") || n.starts_with("arg") || !used.contains(n) {
            continue;
        }
        locals.push(format!("{} {} = 0;", t.c_name(), n));
        sinkable.push((n.clone(), t.c_name().to_string()));
    }
    for (t, n, _) in &f.locals {
        if vars.contains_key(n) || !used.contains(n) {
            continue;
        }
        let init = if params.contains(&n.as_str()) {
            let k: usize = n[1..].parse().unwrap();
            if e.struct_name.contains_key(&k) || e.known.contains_key(&k) {
                format!("arg{}.addr()", k)
            } else if copies.contains(&k) {
                format!("arg{}_value", k)
            } else {
                continue; // the parameter
            }
        } else if floats.contains(n) {
            continue; // the parameter
        } else if !lv.at_entry.contains(n) || (callee_saved(n) && !used_at_entry.contains(n)) {
            // its value at the entry is never read (a callee-saved register's only by the save the C++ leaves out)
            sinkable.push((n.clone(), t.c_name().to_string()));
            "0".into()
        } else {
            // as the generated code's prologue: the register's value in the guest CPU
            match f.synced.iter().find(|(v, _)| v == n) {
                Some((_, CpuField::R(k))) => format!("guest::cpu()->r[{}]", k),
                Some((_, CpuField::S(k))) => format!("guest::cpu()->s[{}]", k),
                Some((_, CpuField::Flag(fl))) => format!("guest::cpu()->{}", fl),
                Some((_, CpuField::Fpscr)) => "guest::cpu()->fpscr".into(),
                _ => "0".into(),
            }
        };
        locals.push(format!("{} {} = {};", t.c_name(), n, init));
    }
    // the values split off a variable (values.rs), with its type
    for (name, var) in &e.values.fresh {
        if !used.contains(name) {
            continue;
        }
        let t = vars.get(var).copied().or_else(|| f.locals.iter().find(|(_, n, _)| n == var).map(|(t, _, _)| *t));
        let Some(t) = t else { return Err(format!("no type for {}", var)) };
        locals.push(format!("{} {} = 0;", t.c_name(), name));
        sinkable.push((name.clone(), t.c_name().to_string()));
    }
    for k in &copies {
        if !e.struct_name.contains_key(k) && !e.known.contains_key(k) {
            // an argument kept as a plain value
            locals.push(format!("gptr<u8> arg{} = gptr<u8>(arg{}_value);", k, k));
        }
    }
    // declarations moved to the variable's first assignment where C++ allows it
    let sinkable: Vec<(String, String)> =
        sinkable.into_iter().map(|(n, t)| match e.typed.get(&n) { Some(st) => (n, format!("gptr<{}>", st)), None => (n, t) }).collect();
    let body = kept_results(&body);
    let (body, sunk) = sink_declarations(&body, &sinkable);
    let body = fold_single_uses(&body, &e.foldable);
    // (the parameters that hold a register's entry value: S0 holds s[0], r1 r[1])
    let entry_params: HashMap<String, String> = sig
        .iter()
        .filter_map(|p| {
            let name = p.split_whitespace().last()?;
            let field = match name.as_bytes().first()? {
                b'r' => format!("r[{}]", name[1..].parse::<u32>().ok()?),
                b'S' => format!("s[{}]", name[1..].parse::<u32>().ok()?),
                _ => return None,
            };
            Some((name.to_string(), field))
        })
        .collect();
    let body = drop_unchanged_write_backs(&body, &entry_params);
    let body = return_values(&body);
    let body = return_choices(&body);
    // (`*gptr<T>(frame.at(k).addr())`, a frame address folded into an access: `*frame.at<T>(k)`)
    let body = frame_places(&body);
    let body = propagate_copies(&body);
    // (a void function's last `return;`: it ends there anyway)
    // (not after a frame.release() and a tail call: the release must be followed by the return)
    let body = match body.strip_suffix("    return;\n") {
        Some(rest)
            if !returns && !rest.ends_with(":;\n") && !rest.trim_end().ends_with('{')
                && !rest.lines().rev().nth(1).map_or(false, |l| l.trim() == "frame.release();") =>
        {
            rest.to_string()
        }
        _ => body,
    };
    // (a register read folded into the write-back of the same register: `guest::cpu()->r[1] = guest::cpu()->r[1];`
    // does nothing)
    let body: String = body
        .lines()
        .filter(|l| !matches!(l.trim_start().strip_suffix(';').and_then(|t| t.split_once(" = ")), Some((a, b)) if a == b && a.starts_with("guest::cpu()->")))
        .map(|l| format!("{}\n", l))
        .collect();
    // (a register declared as a struct argument's address and never assigned, in a function without loops: its uses
    // read the argument's address, as propagate_copies does in the body)
    let loopless = !body.lines().any(|l| {
        let t = l.trim_start();
        t.starts_with("do {") || t.starts_with("for (") || t.ends_with(":;")
    });
    let mut body = body;
    if loopless {
        for l in &locals {
            let Some((x, y)) = l.strip_prefix("u32 ").and_then(|r| r.strip_suffix(';')).and_then(|r| r.split_once(" = ")) else { continue };
            if !(y.starts_with("arg") && y.ends_with(".addr()")) {
                continue;
            }
            let written = body.lines().any(|b| {
                let t = b.trim_start();
                ["=", "+=", "-=", "|=", "&=", "^=", "<<=", ">>=", "*=", "/=", "%="].iter().any(|op| t.starts_with(&format!("{} {} ", x, op)))
            });
            if written {
                continue;
            }
            let mut out = String::new();
            let mut last = 0;
            for (i, _) in body.match_indices(x) {
                let before = body[..i].chars().next_back();
                let after = body[i + x.len()..].chars().next();
                let id = |c: Option<char>| c.map_or(false, |c| c.is_ascii_alphanumeric() || c == '_');
                if !id(before) && !id(after) {
                    out.push_str(&body[last..i]);
                    out.push_str(y);
                    last = i + x.len();
                }
            }
            out.push_str(&body[last..]);
            body = out;
        }
    }
    // (the variables the passes left unused are not declared)
    let still: HashSet<String> = body.split(|c: char| !(c.is_ascii_alphanumeric() || c == '_')).map(|w| w.to_string()).collect();
    // (a typed local: a pointer to its struct)
    let locals: Vec<String> = locals
        .into_iter()
        .map(|l| {
            let name = l.split_whitespace().nth(1).unwrap_or("").to_string();
            match e.typed.get(&name) {
                Some(st) => format!("gptr<{}> {} = gptr<{}>(0u);", st, name, st),
                None => l,
            }
        })
        .collect();
    for l in locals {
        let name = l.split_whitespace().nth(1).unwrap_or("");
        if sunk.contains(name) || !still.contains(name) {
            continue;
        }
        out.push_str(&format!("    {}\n", l));
    }
    // the frame's slots read and written in place as the fields of a struct
    let body = match frame_struct(&body, f.address, locals_bytes) {
        Some((decl, b)) => {
            let line = format!("    guest::StackFrame frame(0x{:x});  // the original's stack frame\n", locals_bytes);
            out = out.replacen(&line, &format!("    guest::StackFrameOf<Frame_{:08x}> frame;  // the original's stack frame\n", f.address), 1);
            out.insert_str(signature_at, &decl);
            b
        }
        None => body,
    };
    out.push_str(&body);
    out.push_str("}\n");
    out.push_str(&format!("\n}}  // namespace d_{:08x}\n", f.address));
    match mask {
        Some(m) => out.push_str(&format!(
            "GUEST_EXPORT_FRAMED(0x{:08x}, d_{:08x}::{}, 0x{:x});  // pushes {{{}}} first, as the original\n",
            addr, f.address, base, m, register_list(m)
        )),
        None => out.push_str(&format!("GUEST_EXPORT(0x{:08x}, d_{:08x}::{});\n", addr, f.address, base)),
    }
    Ok(float_fields(&out))
}
