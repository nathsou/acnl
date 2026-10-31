// Rewrites memory addresses that are an argument plus a constant as exactly that (RD8(r0 + 3) after
// r0 = r0 + 0xb06 becomes RD8(arg0 + 0xb09)), so fields of the objects a function receives show up with their
// offsets. The arguments live on entry get copies argN; a forward analysis tracks "variable = argN + c" through
// additions, ifs (facts that hold on both branches) and calls (r0-r3 die, callee-saved registers keep theirs).
// Labels clear what is known (another path may arrive there). The checker proves the result.
use crate::ast::*;
use crate::flow::liveness;
use std::collections::HashMap;

type Env = HashMap<String, (usize, u64)>;

const ARGS: [&str; 4] = ["r0", "r1", "r2", "r3"];

fn eval(e: &Expr, env: &Env) -> Option<(usize, u64)> {
    match e {
        Expr::Var(v) => env.get(v).copied(),
        Expr::Bin(BinOp::Add, a, b) => match (&**a, &**b) {
            (x, Expr::Num(c, Ty::U32 | Ty::S32)) | (Expr::Num(c, Ty::U32 | Ty::S32), x) => {
                eval(x, env).map(|(k, o)| (k, (o + c) & 0xffff_ffff))
            }
            _ => None,
        },
        Expr::Bin(BinOp::Sub, a, b) => match &**b {
            Expr::Num(c, Ty::U32 | Ty::S32) => eval(a, env).map(|(k, o)| (k, o.wrapping_sub(*c) & 0xffff_ffff)),
            _ => None,
        },
        Expr::Cast(Ty::U32, a) => eval(a, env),
        _ => None,
    }
}

fn address(k: usize, off: u64) -> Expr {
    let base = Expr::Var(format!("arg{}", k));
    if off == 0 {
        base
    } else {
        Expr::Bin(BinOp::Add, Box::new(base), Box::new(Expr::Num(off, Ty::U32)))
    }
}

fn rewrite_expr(e: &mut Expr, env: &Env) {
    match e {
        Expr::Load(_, a) => {
            if let Some((k, off)) = eval(a, env) {
                **a = address(k, off);
            } else {
                rewrite_expr(a, env);
            }
        }
        Expr::Un(_, a) | Expr::Cast(_, a) => rewrite_expr(a, env),
        Expr::Bin(_, a, b) => {
            rewrite_expr(a, env);
            rewrite_expr(b, env);
        }
        Expr::Cond(c, a, b) => {
            rewrite_expr(c, env);
            rewrite_expr(a, env);
            rewrite_expr(b, env);
        }
        Expr::Call(_, args) => args.iter_mut().for_each(|a| rewrite_expr(a, env)),
        _ => {}
    }
}

fn targets(list: &[Stmt], out: &mut std::collections::HashSet<String>) {
    for s in list {
        match s {
            Stmt::Goto(l) => {
                out.insert(l.clone());
            }
            Stmt::Switch(_, cases) => out.extend(cases.iter().map(|(_, l)| l.clone())),
            Stmt::If(_, a, b) => {
                targets(a, out);
                targets(b, out);
            }
            _ => {}
        }
    }
}

thread_local! {
    static TARGETS: std::cell::RefCell<std::collections::HashSet<String>> = Default::default();
    // variables nothing in the function writes (an argument register that stays the argument everywhere)
    static CONSTANT: std::cell::RefCell<std::collections::HashSet<String>> = Default::default();
}

fn written(list: &[Stmt], out: &mut std::collections::HashSet<String>) {
    for s in list {
        match s {
            Stmt::Decl(_, n, _) | Stmt::Assign(n, _) => {
                out.insert(n.clone());
            }
            Stmt::SyncIn => {
                for r in ["r0", "r1", "r2", "r3", "r12", "r14"] {
                    out.insert(r.into());
                }
            }
            Stmt::If(_, a, b) => {
                written(a, out);
                written(b, out);
            }
            _ => {}
        }
    }
}

fn walk(list: &mut [Stmt], env: &mut Env) {
    for s in list.iter_mut() {
        match s {
            Stmt::Decl(_, x, e) => {
                if let Some(e) = e {
                    rewrite_expr(e, env);
                }
                let v = e.as_ref().and_then(|e| eval(e, env));
                match v {
                    Some(v) if !x.starts_with("arg") => {
                        env.insert(x.clone(), v);
                    }
                    _ => {
                        env.remove(x);
                    }
                }
            }
            Stmt::Assign(x, e) => {
                rewrite_expr(e, env);
                match eval(e, env) {
                    Some(v) => {
                        env.insert(x.clone(), v);
                    }
                    None => {
                        env.remove(x);
                    }
                }
            }
            Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) | Stmt::Switch(e, _) => rewrite_expr(e, env),
            Stmt::Store(_, a, v) => {
                rewrite_expr(v, env);
                if let Some((k, off)) = eval(a, env) {
                    *a = address(k, off);
                } else {
                    rewrite_expr(a, env);
                }
            }
            Stmt::If(c, a, b) => {
                rewrite_expr(c, env);
                let (mut ea, mut eb) = (env.clone(), env.clone());
                walk(a, &mut ea);
                walk(b, &mut eb);
                env.retain(|k, v| ea.get(k) == Some(v) && eb.get(k) == Some(v));
                for (k, v) in &ea {
                    if eb.get(k) == Some(v) {
                        env.insert(k.clone(), *v);
                    }
                }
            }
            // a label another path can jump to: only the argument copies are still known
            Stmt::Label(l) if TARGETS.with(|t| t.borrow().contains(l)) => {
                env.retain(|k, _| k.starts_with("arg") || CONSTANT.with(|c| c.borrow().contains(k)))
            }
            Stmt::SyncIn => {
                for r in ["r0", "r1", "r2", "r3", "r12", "r14"] {
                    env.remove(r);
                }
            }
            _ => {}
        }
    }
}

pub fn normalize_addresses(f: &mut Function) {
    let lv = liveness(f);
    let args: Vec<usize> = (0..4).filter(|k| lv.at_entry.contains(ARGS[*k])).collect();
    if args.is_empty() {
        return;
    }
    let mut env = Env::new();
    for k in &args {
        env.insert(format!("arg{}", k), (*k, 0));
        env.insert(ARGS[*k].to_string(), (*k, 0));
    }
    let mut t = std::collections::HashSet::new();
    targets(&f.body, &mut t);
    TARGETS.with(|x| *x.borrow_mut() = t);
    let mut w = std::collections::HashSet::new();
    written(&f.body, &mut w);
    let constant: std::collections::HashSet<String> =
        args.iter().map(|k| ARGS[*k].to_string()).filter(|r| !w.contains(r)).collect();
    CONSTANT.with(|x| *x.borrow_mut() = constant);
    walk(&mut f.body, &mut env);
    // the copies of the arguments, first thing in the function
    let mut prologue: Vec<Stmt> = args.iter().map(|k| Stmt::Decl(Ty::U32, format!("arg{}", k), Some(Expr::Var(ARGS[*k].into())))).collect();
    prologue.extend(std::mem::take(&mut f.body));
    f.body = prologue;
}
