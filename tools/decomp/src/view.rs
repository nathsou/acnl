// A reader's view of a decompiled function: a signature with the argument registers it reads on entry, returns
// instead of "c->pc = r14; SO(); return;", calls as f_XXXXXXXX(r0, r1, r2, r3), and none of the CPU-state
// plumbing (SO/SI, preemption, the after-call pc checks). The proved form is the AST this is printed from.
use crate::ast::*;
use crate::flow::liveness;
use crate::print::expr_at;

// argN + offset, as a field of the object argN points to
fn field_of(t: Ty, a: &Expr) -> Option<String> {
    let (base, off) = match a {
        Expr::Var(v) if v.starts_with("arg") => (v.clone(), 0),
        Expr::Bin(BinOp::Add, b, o) => match (&**b, &**o) {
            (Expr::Var(v), Expr::Num(n, _)) if v.starts_with("arg") => (v.clone(), *n),
            _ => return None,
        },
        _ => return None,
    };
    let kind = match t {
        Ty::U8 | Ty::S8 => "byte",
        Ty::U16 | Ty::S16 => "half",
        Ty::U32 | Ty::S32 => "word",
        Ty::U64 | Ty::S64 => "dword",
        _ => return None,
    };
    Some(format!("{}->{}_{:x}", base, kind, off))
}

// the expression with object fields for argument-relative loads (and no casts of loads to u32)
fn view_expr(e: &Expr) -> Expr {
    match e {
        Expr::Load(t, a) => match field_of(*t, a) {
            Some(f) => Expr::Var(f),
            None => Expr::Load(*t, Box::new(view_expr(a))),
        },
        Expr::Cast(Ty::U32, a) if matches!(&**a, Expr::Load(Ty::U8 | Ty::U16, _)) => view_expr(a),
        Expr::Un(op, a) => Expr::Un(*op, Box::new(view_expr(a))),
        Expr::Cast(t, a) => Expr::Cast(*t, Box::new(view_expr(a))),
        Expr::Bin(op, a, b) => Expr::Bin(*op, Box::new(view_expr(a)), Box::new(view_expr(b))),
        Expr::Cond(c, a, b) => Expr::Cond(Box::new(view_expr(c)), Box::new(view_expr(a)), Box::new(view_expr(b))),
        Expr::Call(n, args) => Expr::Call(n.clone(), args.iter().map(view_expr).collect()),
        other => other.clone(),
    }
}

fn expr(e: &Expr) -> String {
    expr_at(&view_expr(e), 0)
}
use std::collections::HashSet;

const ARGUMENTS: [&str; 4] = ["r0", "r1", "r2", "r3"];

fn assigned(list: &[Stmt], out: &mut HashSet<String>) {
    for s in list {
        match s {
            Stmt::Assign(n, _) | Stmt::Decl(_, n, Some(_)) => {
                out.insert(n.clone());
            }
            Stmt::If(_, a, b) => {
                assigned(a, out);
                assigned(b, out);
            }
            Stmt::GuestCall(..) | Stmt::Dispatch(_) | Stmt::SyncIn => {
                out.insert("r0".into());
            }
            _ => {}
        }
    }
}

fn used_vars(list: &[Stmt], out: &mut HashSet<String>) {
    fn e(x: &Expr, out: &mut HashSet<String>) {
        let mut r = crate::types::Reads::default();
        crate::types::reads(x, &mut r);
        out.extend(r.vars);
    }
    for s in list {
        match s {
            Stmt::Decl(_, _, Some(x)) | Stmt::Assign(_, x) | Stmt::SetCpu(_, x) | Stmt::Switch(x, _) => e(x, out),
            Stmt::Store(_, a, v) => {
                e(a, out);
                e(v, out);
            }
            Stmt::If(c, a, b) => {
                e(c, out);
                used_vars(a, out);
                used_vars(b, out);
            }
            _ => {}
        }
    }
}

fn line(out: &mut String, indent: usize, text: &str) {
    out.push_str(&"    ".repeat(indent));
    out.push_str(text);
    out.push('\n');
}

// statements that only exist for the calling convention: the saving and restoring of callee-saved registers,
// and stack pointer moves when nothing else reads the stack pointer
fn bookkeeping(s: &Stmt, sp_read: bool) -> bool {
    match s {
        Stmt::Decl(_, n, _) if n.starts_with("saved_") => true,
        Stmt::Assign(_, Expr::Var(v)) if v.starts_with("saved_") => true,
        Stmt::SetCpu(CpuField::Pc, Expr::Var(v)) if v.starts_with("saved_") => true,
        Stmt::Assign(n, Expr::Bin(BinOp::Add | BinOp::Sub, a, b))
            if n == "r13" && !sp_read && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) => true,
        _ => false,
    }
}

thread_local! {
    static SP_READ: std::cell::Cell<bool> = std::cell::Cell::new(true);
    static REFERENCED: std::cell::RefCell<HashSet<String>> = std::cell::RefCell::new(HashSet::new());
}

// labels some goto or (other than the entry table) switch jumps to
fn referenced(list: &[Stmt], out: &mut HashSet<String>) {
    for s in list {
        match s {
            Stmt::Goto(l) => {
                out.insert(l.clone());
            }
            Stmt::Switch(Expr::Var(v), _) if v == "entry" => {}
            Stmt::Switch(_, cases) => out.extend(cases.iter().map(|(_, l)| l.clone())),
            Stmt::If(_, a, b) => {
                referenced(a, out);
                referenced(b, out);
            }
            _ => {}
        }
    }
}

fn body(list: &[Stmt], indent: usize, returns: bool, out: &mut String) {
    let mut i = 0;
    while i < list.len() {
        let s = &list[i];
        if bookkeeping(s, SP_READ.with(|c| c.get())) {
            i += 1;
            continue;
        }
        match s {
            // r14 = <return address>; SO(); f_X(c, 0); SI(); [pc check]
            Stmt::Assign(n, _) if n == "r14" && matches!(list.get(i + 1), Some(Stmt::SyncOut)) => {
                i += 1;
                continue;
            }
            Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::Nop | Stmt::ReturnUnlessPc(_) => {}
            Stmt::SetCpu(CpuField::Pc, _) if matches!(list.get(i + 1), Some(Stmt::SyncOut)) => {}
            Stmt::Decl(_, _, None) => {}
            // the copies of the arguments are the parameters
            Stmt::Decl(_, n, Some(Expr::Var(_))) if n.starts_with("arg") => {}
            Stmt::Decl(t, n, Some(e)) => line(out, indent, &format!("{} {} = {};", t.c_name(), n, expr(e))),
            Stmt::Assign(n, e) => line(out, indent, &format!("{} = {};", n, expr(e))),
            Stmt::SetCpu(f, e) => line(out, indent, &format!("{} = {};", crate::print::cpu(f), expr(e))),
            Stmt::Store(t, a, v) => match field_of(*t, a) {
                Some(f) => line(out, indent, &format!("{} = {};", f, expr(v))),
                None => line(out, indent, &format!("WR{}({}, {});", t.bits(), expr(a), expr(v))),
            },

            Stmt::If(c, a, b) => {
                line(out, indent, &format!("if ({}) {{", expr(c)));
                body(a, indent + 1, returns, out);
                if b.is_empty() {
                    line(out, indent, "}");
                } else {
                    line(out, indent, "} else {");
                    body(b, indent + 1, returns, out);
                    line(out, indent, "}");
                }
            }
            Stmt::Goto(l) => line(out, indent, &format!("goto {};", l)),
            Stmt::Label(l) if !REFERENCED.with(|r| r.borrow().contains(l)) => {}
            Stmt::Label(l) => out.push_str(&format!("{}:\n", l)),
            Stmt::GuestCall(t, tail) => {
                let call = format!("f_{:08x}(r0, r1, r2, r3)", t & !1);
                if *tail {
                    line(out, indent, &format!("return {};", call));
                } else {
                    line(out, indent, &format!("r0 = {};", call));
                }
            }
            Stmt::Dispatch(tail) => {
                let call = "call_through(c->pc, r0, r1, r2, r3)".to_string();
                line(out, indent, &if *tail { format!("return {};", call) } else { format!("r0 = {};", call) });
            }
            // the runtime's re-entry table (entry != 0 only when it resumes the function in the middle)
            Stmt::Switch(Expr::Var(v), _) if v == "entry" => {}
            Stmt::Switch(e, cases) => {
                line(out, indent, &format!("switch ({}) {{", expr(e)));
                for (k, l) in cases {
                    line(out, indent + 1, &format!("case 0x{:x}: goto {};", k, l));
                }
                line(out, indent, "}");
            }
            Stmt::Svc(n) => line(out, indent, &format!("svc(0x{:x});", n)),
            Stmt::Return => line(out, indent, if returns { "return r0;" } else { "return;" }),
            Stmt::Unsupported(w) => line(out, indent, &format!("/* unsupported: {} */", w)),
        }
        i += 1;
    }
}

pub fn view(f: &Function) -> String {
    let lv = liveness(f);
    let live_in: HashSet<String> = lv.at_entry.clone();
    let params: Vec<&str> = ARGUMENTS.iter().copied().filter(|r| live_in.contains(*r)).collect();
    let floats: Vec<String> = (0..16).map(|i| format!("S{}", i)).filter(|s| live_in.contains(s)).collect();
    let mut set = HashSet::new();
    assigned(&f.body, &mut set);
    let returns = set.contains("r0");
    // a parameter is shown as argN when the function keeps a copy of it (the register itself may change)
    let copies: HashSet<String> = f
        .body
        .iter()
        .filter_map(|s| if let Stmt::Decl(_, n, Some(Expr::Var(r))) = s { if n.starts_with("arg") { Some(r.clone()) } else { None } } else { None })
        .collect();
    let mut sig: Vec<String> = params
        .iter()
        .map(|p| {
            if copies.contains(*p) {
                format!("u32 arg{} /* {} */", &p[1..], p)
            } else {
                format!("u32 {}", p)
            }
        })
        .collect();
    sig.extend(floats.iter().map(|s| format!("float {}", s)));
    let mut out = format!(
        "// view of the proved decompilation of {} (signature and calls are read from the calling convention)\n{} {}({}) {{\n",
        f.name,
        if returns { "u32" } else { "void" },
        f.name,
        sig.join(", ")
    );
    // locals: registers used but not parameters
    let mut used = HashSet::new();
    used_vars(&f.body, &mut used);
    used.extend(set.iter().cloned());
    let mut locals: Vec<String> = f
        .locals
        .iter()
        .filter(|(_, n, _)| used.contains(n) && !params.contains(&n.as_str()) && !floats.contains(n) && n != "tpc"
            && n != "r14" && (n != "r13" || SP_READ.with(|c| c.get())))
        .map(|(t, n, _)| format!("{} {};", t.c_name(), n))
        .collect();
    locals.sort();
    if !locals.is_empty() {
        line(&mut out, 1, &locals.join(" "));
    }
    // a register kept as a variable next to its argument copy starts from the argument
    for p in &params {
        if copies.contains(*p) && used.contains(*p) {
            line(&mut out, 1, &format!("u32 {} = arg{};", p, &p[1..]));
        }
    }
    // the entry label is not needed when nothing jumps to it
    // is the stack pointer read other than to move it?
    fn sp_read(list: &[Stmt]) -> bool {
        list.iter().any(|s| match s {
            Stmt::Assign(n, Expr::Bin(_, a, b)) if n == "r13" && **a == Expr::Var("r13".into()) && matches!(**b, Expr::Num(..)) => false,
            Stmt::If(c, a, b) => {
                let mut r = crate::types::Reads::default();
                crate::types::reads(c, &mut r);
                r.vars.iter().any(|v| v == "r13") || sp_read(a) || sp_read(b)
            }
            Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) => {
                let mut r = crate::types::Reads::default();
                crate::types::reads(e, &mut r);
                r.vars.iter().any(|v| v == "r13")
            }
            Stmt::Store(_, a, v) => {
                let mut r = crate::types::Reads::default();
                crate::types::reads(a, &mut r);
                crate::types::reads(v, &mut r);
                r.vars.iter().any(|v| v == "r13")
            }
            // (calls see it too, for stack arguments: not shown)
            _ => false,
        })
    }
    SP_READ.with(|c| c.set(sp_read(&f.body)));
    let mut refs = HashSet::new();
    referenced(&f.body, &mut refs);
    REFERENCED.with(|r| *r.borrow_mut() = refs);
    let mut b = String::new();
    body(&f.body, 1, returns, &mut b);
    out.push_str(&b);
    out.push_str("}\n");
    out
}
