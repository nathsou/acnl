// C++ drafts of proved decompilations, in the repository's conventions (gptr, structs with GUEST_OFFSET checks,
// GUEST_EXPORT, a generated GUEST_FUZZ), for the harness to check and a person to name. A draft stands for the proved
// AST statement for statement; what cannot be written that way yet is refused (Err with the reason).
use crate::ast::*;
use crate::flow::liveness;
use crate::print::cpu;
use std::collections::{BTreeMap, HashMap, HashSet};

type R<T> = Result<T, String>;

const ARGS: [&str; 4] = ["r0", "r1", "r2", "r3"];

fn callee_saved(r: &str) -> bool {
    matches!(r, "r4" | "r5" | "r6" | "r7" | "r8" | "r9" | "r10" | "r11" | "r14")
}

// the fields of the objects the arguments point to: argument -> offset -> type of the access
fn fields(list: &[Stmt], out: &mut BTreeMap<usize, BTreeMap<u64, Ty>>) -> R<()> {
    fn arg_off(a: &Expr) -> Option<(usize, u64)> {
        match a {
            Expr::Var(v) if v.starts_with("arg") => Some((v[3..].parse().ok()?, 0)),
            Expr::Bin(BinOp::Add, b, o) => match (&**b, &**o) {
                (Expr::Var(v), Expr::Num(n, _)) if v.starts_with("arg") => Some((v[3..].parse().ok()?, *n)),
                _ => None,
            },
            _ => None,
        }
    }
    fn expr(e: &Expr, out: &mut BTreeMap<usize, BTreeMap<u64, Ty>>) {
        match e {
            Expr::Load(t, a) => {
                if let Some((k, o)) = arg_off(a) {
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
                if let Some((k, o)) = arg_off(a) {
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

fn arg_off_of(a: &Expr) -> Option<(usize, u64)> {
    match a {
        Expr::Var(v) if v.starts_with("arg") => Some((v[3..].parse().ok()?, 0)),
        Expr::Bin(BinOp::Add, b, o) => match (&**b, &**o) {
            (Expr::Var(v), Expr::Num(n, _)) if v.starts_with("arg") => Some((v[3..].parse().ok()?, *n)),
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
    reload: Vec<(String, String)>, // after a call: variable <- CPU field (what SI() reads back)
    has_sp: bool,                  // the function keeps r13 in a variable
    float_args: Vec<(String, u32)>, // float registers to hand over before a call (variable, s index)
    call_args: String,              // r0-r3 as a call passes them (the CPU's for registers the function does not keep)
    has_r0: bool,                   // the function keeps r0 in a variable (else results stay in the CPU)
    pc: Option<String>,             // the target of the next indirect call (the AST sets c->pc first)
    fields: BTreeMap<usize, BTreeMap<u64, Ty>>,
    struct_name: HashMap<usize, String>,
    callees: BTreeMap<u32, String>, // target -> local guest::Function name
    out: String,
}

fn num(v: u64, t: Ty) -> String {
    // hex literals need a comment on their line (repository lint): the emitter adds "// (from the original)"
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
    fn before_call(&mut self, indent: usize) {
        if self.stack && self.has_sp {
            self.line(indent, "guest::cpu()->r[13] = r13;");
        }
        for (v, k) in self.float_args.clone() {
            self.line(indent, &format!("guest::cpu()->s[{}] = {};", k, v));
        }
    }

    // a load or store of argN + off through the repository's struct: (read expression, write wrapper)
    fn known_field(&self, t: Ty, a: &Expr) -> Option<(String, String, String)> {
        let (k, off) = arg_off_of(a)?;
        let st = self.known.get(&k)?;
        let db = crate::view::types()?;
        let bytes = (t.bits() / 8) as u64;
        let path = db.field_path(st, off, bytes)?;
        let base = db.field_base(st, off, bytes)?;
        let place = format!("arg{}->{}", k, path);
        Some(match base.as_str() {
            "float" => (format!("std::bit_cast<u32>({})", place), place, "std::bit_cast<float>(u32(".into()),
            "ptr" => (format!("{}.addr()", place), place, "gptr<void>(u32(".into()),
            // (one conversion when the field already has the access's type; "x((" keeps the closing count)
            _ if base_c(&base) == t.c_name() => (format!("{}({})", t.c_name(), place), place, format!("{}((", t.c_name())),
            _ => (format!("{}({})", t.c_name(), place), place, format!("{}({}(", base_c(&base), t.c_name())),
        })
    }

    fn field_access(&self, t: Ty, a: &Expr) -> Option<String> {
        if let Some((read, _, _)) = self.known_field(t, a) {
            return Some(read);
        }
        let (k, off) = match a {
            Expr::Var(v) if v.starts_with("arg") => (v[3..].parse::<usize>().ok()?, 0),
            Expr::Bin(BinOp::Add, b, o) => match (&**b, &**o) {
                (Expr::Var(v), Expr::Num(n, _)) if v.starts_with("arg") => (v[3..].parse().ok()?, *n),
                _ => return None,
            },
            _ => return None,
        };
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
        if let Some(c) = self.float_compare(e)? {
            return Ok(c);
        }
        Ok(match e {
            Expr::Num(v, t) => num(*v, *t),
            Expr::Float(v, _) => format!("{:?}", v),
            Expr::Var(n) if n.starts_with("arg") => format!("{}.addr()", n),
            Expr::Var(n) => n.clone(),
            Expr::Cpu(f) => return Err(format!("reads {}", cpu(f))),
            Expr::Un(op, a) => format!("{}{}", match op {
                UnOp::Neg => "-",
                UnOp::Not => "~",
                UnOp::LNot => "!",
            }, self.expr(a, 11)?),
            Expr::Bin(op, a, b) => {
                let p = prec(*op);
                let s = format!("{} {} {}", self.expr(a, p - 1)?, op_text(*op), self.expr(b, p)?);
                if p <= outer {
                    format!("({})", s)
                } else {
                    s
                }
            }
            Expr::Cast(t, a) => format!("{}({})", t.c_name(), self.expr(a, 0)?),
            Expr::Cond(c, a, b) => format!("({} ? {} : {})", self.expr(c, 0)?, self.expr(a, 0)?, self.expr(b, 0)?),
            Expr::Load(t, a) => match self.field_access(*t, a) {
                Some(f) => f,
                None => format!("*gptr<{}>({})", t.c_name(), self.expr(a, 0)?),
            },
            Expr::Call(n, args) => {
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
                    "U2F" => format!("std::bit_cast<float>({})", a?[0]),
                    // the runtime's helpers (3dsrecomp/runtime/cpu.h)
                    _ => format!("{}({})", n, a?.join(", ")),
                }
            }
            Expr::AddrOf(n) => format!("&{}", n),
        })
    }

    fn line(&mut self, indent: usize, text: &str) {
        self.out.push_str(&"    ".repeat(indent));
        self.out.push_str(text);
        // the repository's lint wants a comment on every line with a hex literal
        if text.contains("0x") && !text.contains("//") {
            self.out.push_str("  // (from the original)");
        }
        self.out.push('\n');
    }

    fn stmts(&mut self, list: &[Stmt], indent: usize, returns: bool) -> R<()> {
        let mut i = 0;
        while i < list.len() {
            let s = &list[i];
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
                }
                Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::Nop | Stmt::ReturnUnlessPc(_) => {}
                Stmt::Assign(n, Expr::Bin(BinOp::Add | BinOp::Sub, a, b))
                    if !self.stack && n == "r13" && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) => {}
                Stmt::Decl(_, _, None) => {}
                Stmt::Decl(_, n, Some(e)) | Stmt::Assign(n, e) => {
                    let text = format!("{} = {};", n, self.expr(e, 0)?);
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
                            _ => format!("{} = {}{}));", place, wrap, value),
                        };
                        self.line(indent, &text);
                        i += 1;
                        continue;
                    }
                    let text = match self.field_access(*t, a) {
                        Some(f) => format!("{} = {}({});", f, t.c_name(), value),
                        None => format!("*gptr<{}>({}) = {}({});", t.c_name(), self.expr(a, 0)?, t.c_name(), value),
                    };
                    self.line(indent, &text);
                }
                Stmt::If(c, a, b) => {
                    let text = format!("if ({}) {{", self.expr(c, 0)?);
                    self.line(indent, &text);
                    self.stmts(a, indent + 1, returns)?;
                    if b.is_empty() {
                        self.line(indent, "}");
                    } else {
                        self.line(indent, "} else {");
                        self.stmts(b, indent + 1, returns)?;
                        self.line(indent, "}");
                    }
                }
                Stmt::While { top, test, body, check, cond } => {
                    // labels kept: other gotos may still use them
                    match test {
                        None => {
                            self.line(indent, "do {");
                            self.out.push_str(&format!("{}:;\n", top));
                            self.stmts(body, indent + 1, returns)?;
                            self.stmts(check, indent + 1, returns)?;
                            let text = format!("}} while ({});", self.expr(cond, 0)?);
                            self.line(indent, &text);
                        }
                        Some(t) => {
                            self.line(indent, "for (;;) {");
                            self.out.push_str(&format!("{}:;\n", t));
                            self.stmts(check, indent + 1, returns)?;
                            let text = format!("if (!({})) {{", self.expr(cond, 0)?);
                            self.line(indent + 1, &text);
                            self.line(indent + 2, "break;");
                            self.line(indent + 1, "}");
                            self.out.push_str(&format!("{}:;\n", top));
                            self.stmts(body, indent + 1, returns)?;
                            self.line(indent, "}");
                        }
                    }
                }
                Stmt::Goto(l) => self.line(indent, &format!("goto {};", l)),
                Stmt::Label(l) => self.out.push_str(&format!("{}:;\n", l)),
                Stmt::GuestCall(t, tail) => {
                    self.before_call(indent);
                    let name = self.callees.entry(*t).or_insert_with(|| format!("call_{:08x}", t & !1)).clone();
                    let call = format!("{}({})", name, self.call_args);
                    if *tail {
                        self.line(indent, &if returns { format!("return {};", call) } else { format!("{};\n{}return;", call, "    ".repeat(indent)) });
                    } else {
                        self.line(indent, &if self.has_r0 { format!("r0 = {};", call) } else { format!("{};", call) });
                        // the registers the callee may have changed, as the original reads them back
                        for (v, field) in self.reload.clone() {
                            self.line(indent, &format!("{} = {};", v, field));
                        }
                    }
                }
                Stmt::Return => {
                    let r = if !returns { "return;" } else if self.has_r0 { "return r0;" } else { "return guest::cpu()->r[0];" };
                    self.line(indent, r);
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
                    self.before_call(indent);
                    let call = format!("guest::call_address<u32>({}, {})", target, self.call_args);
                    if *tail {
                        self.line(indent, &if returns { format!("return {};", call) } else { format!("{};", call) });
                        if !returns {
                            self.line(indent, "return;");
                        }
                    } else {
                        self.line(indent, &if self.has_r0 { format!("r0 = {};", call) } else { format!("{};", call) });
                        for (v, field) in self.reload.clone() {
                            self.line(indent, &format!("{} = {};", v, field));
                        }
                    }
                }
                Stmt::Svc(_) => return Err("system call".into()),
                Stmt::Unsupported(w) => return Err(w.clone()),
            }
            i += 1;
        }
        Ok(())
    }
}

fn sp_or_ea(e: &Expr) -> bool {
    let mut r = crate::types::Reads::default();
    crate::types::reads(e, &mut r);
    r.vars.iter().any(|v| v == "r13" || v == "ea")
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

pub fn emit(f: &Function) -> R<String> {
    let addr = f.address | f.thumb as u32;
    let stack = reads_stack(&f.body);
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
    let call_args: String = ARGS
        .iter()
        .enumerate()
        .map(|(k, r)| if declared.contains(r) { r.to_string() } else { format!("guest::cpu()->r[{}]", k) })
        .collect::<Vec<_>>()
        .join(", ");
    let floats: Vec<String> = (0..16).map(|i| format!("S{}", i)).filter(|s| lv.at_entry.contains(s)).collect();
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
    let mut e = Emitter { known: known.clone(), stack, reload, has_sp, float_args, call_args, has_r0, pc: None, fields: fl, struct_name: HashMap::new(), callees: BTreeMap::new(), out: String::new() };
    let mut assigned = HashSet::new();
    crate::view::assigned_vars(&f.body, &mut assigned);
    let returns = assigned.contains("r0");
    // the body first (it decides the callees)
    e.stmts(&f.body, 1, returns)?;
    let body = std::mem::take(&mut e.out);
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
            out.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});  // (from the original)\n", name, fname, off));
        }
        out.push('\n');
        e.struct_name.insert(*k, name);
    }
    for (t, n) in &e.callees {
        out.push_str(&format!("inline constexpr guest::Function<0x{:08x}, u32(u32, u32, u32, u32)> {};  // (from the original)\n", t, n));
    }
    out.push('\n');
    let mut sig = Vec::new();
    for p in &params {
        let k: usize = p[1..].parse().unwrap();
        if let Some(st) = e.known.get(&k) {
            sig.push(format!("gptr<{}> arg{}", st, k));
            continue;
        }
        match e.struct_name.get(&k) {
            Some(s) => sig.push(format!("gptr<{}> arg{}", s, k)),
            None if copies.contains(&k) => sig.push(format!("u32 arg{}_value", k)),
            None => sig.push(format!("u32 {}_in", p)),
        }
    }
    for s in &floats {
        sig.push(format!("float {}_in", s));
    }
    out.push_str(&format!("{} {}({}) {{\n", if returns { "u32" } else { "void" }, base, sig.join(", ")));
    // the registers and temporaries, all declared first (so gotos jump over no initialisation); only those used
    let used: HashSet<String> = body
        .split(|c: char| !(c.is_ascii_alphanumeric() || c == '_'))
        .map(|w| w.to_string())
        .collect();
    let mut locals: Vec<String> = Vec::new();
    for (n, t) in &vars {
        if n.starts_with("saved_") || n.starts_with("arg") || !used.contains(n) {
            continue;
        }
        locals.push(format!("{} {} = 0;", t.c_name(), n));
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
                format!("{}_in", n)
            }
        } else if floats.contains(n) {
            format!("{}_in", n)
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
    for k in &copies {
        if !e.struct_name.contains_key(k) && !e.known.contains_key(k) {
            // an argument kept as a plain value
            locals.push(format!("gptr<u8> arg{} = gptr<u8>(arg{}_value);", k, k));
        }
    }
    for l in locals {
        out.push_str(&format!("    {}\n", l));
    }
    out.push_str(&body);
    out.push_str("}\n");
    let _ = callee_saved;
    out.push_str(&format!("\n}}  // namespace d_{:08x}\n", f.address));
    out.push_str(&format!("GUEST_EXPORT(0x{:08x}, d_{:08x}::{});\n", addr, f.address, base));
    // fuzzing: random objects for the arguments with fields, random words for the others
    let mut gen = Vec::new();
    for p in &params {
        let k: usize = p[1..].parse().unwrap();
        if let Some(st) = e.known.get(&k) {
            gen.push(format!("f.object<{}>()", st));
            continue;
        }
        match e.struct_name.get(&k) {
            Some(s) => gen.push(format!("f.object<d_{:08x}::{}>()", f.address, s)),
            None => gen.push("f.pick<u32>({0, 1, 0xffffffff, f.below(0x100), f.number()})".into()),
        }
    }
    for _ in &floats {
        gen.push("f.real()".into());
    }
    out.push_str(&format!(
        "GUEST_FUZZ(0x{:08x}, 100, [](guest::Fuzz &f) {{ f.arguments({}); }});  // (from the original)\n",
        addr,
        gen.join(", ")
    ));
    Ok(out)
}
