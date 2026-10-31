// Liveness of the function's variables under the calling convention, and dead-code removal.
//
// Statements are numbered by their path in the nested lists ([i] at top level, [i, 0, j] inside the then-branch
// of the if at i, [i, 1, j] in its else-branch). Liveness is computed on the flattened control-flow graph.
use crate::ast::*;
use crate::types::{reads, Reads};
use std::collections::{HashMap, HashSet};

pub type Path = Vec<usize>;
type Set = HashSet<String>;

// what a caller observes after a return (see check.rs), and what survives a call (callee-saved)
const OBSERVED: [&str; 14] = ["r0", "r1", "s0", "s1", "r4", "r5", "r6", "r7", "r8", "r9", "r10", "r11", "r13", "pc"];
fn survives_call(field: &str) -> bool {
    matches!(field, "r4" | "r5" | "r6" | "r7" | "r8" | "r9" | "r10" | "r11" | "r13" | "tls")
        || field.strip_prefix('s').and_then(|n| n.parse::<u32>().ok()).map_or(false, |n| n >= 16)
}
fn call_argument(field: &str) -> bool {
    matches!(field, "r0" | "r1" | "r2" | "r3" | "r13")
        || field.strip_prefix('s').and_then(|n| n.parse::<u32>().ok()).map_or(false, |n| n < 16)
}

#[derive(Clone, Debug)]
enum Node {
    Simple(Path, Set, Option<String>, bool), // uses, the variable it defines, whether that definition kills
    Label(String),
    Jump(String),
    JumpIf(Set, String, Option<Path>), // the if statement it comes from (live_out = after its condition)
    Switch(Set, Vec<String>),
    SyncOut(Path),
    SyncIn(Path),
    Exit(bool), // return (false) or tail call (true)
    Call,
}

fn expr_vars(e: &Expr) -> Set {
    let mut r = Reads::default();
    reads(e, &mut r);
    r.vars.into_iter().collect()
}

fn flatten(list: &[Stmt], prefix: &Path, out: &mut Vec<Node>, fresh: &mut usize) {
    for (i, s) in list.iter().enumerate() {
        let mut p = prefix.clone();
        p.push(i);
        match s {
            Stmt::Decl(_, x, e) => {
                let uses = e.as_ref().map(expr_vars).unwrap_or_default();
                out.push(Node::Simple(p, uses, Some(x.clone()), true));
            }
            Stmt::Assign(x, e) => {
                // a helper writing through &v also defines v (without killing, conservatively)
                let mut uses = expr_vars(e);
                if out_params(e).is_empty() {
                    out.push(Node::Simple(p, uses, Some(x.clone()), true));
                } else {
                    for v in out_params(e) {
                        uses.insert(v);
                    }
                    out.push(Node::Simple(p, uses, Some(x.clone()), true));
                }
            }
            Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) => out.push(Node::Simple(p, expr_vars(e), None, false)),
            Stmt::Store(_, a, v) => {
                let mut u = expr_vars(a);
                u.extend(expr_vars(v));
                out.push(Node::Simple(p, u, None, false));
            }
            Stmt::If(c, a, b) => {
                *fresh += 1;
                let (el, end) = (format!("__e{}", fresh), format!("__n{}", fresh));
                out.push(Node::JumpIf(expr_vars(c), el.clone(), Some(p.clone())));
                let mut pa = p.clone();
                pa.push(0);
                flatten(a, &pa, out, fresh);
                out.push(Node::Jump(end.clone()));
                out.push(Node::Label(el));
                let mut pb = p.clone();
                pb.push(1);
                flatten(b, &pb, out, fresh);
                out.push(Node::Label(end));
            }
            Stmt::While { top, test, body, check, cond } => {
                if let Some(t) = test {
                    out.push(Node::Jump(t.clone()));
                }
                out.push(Node::Label(top.clone()));
                let mut pa = p.clone();
                pa.push(0);
                flatten(body, &pa, out, fresh);
                if let Some(t) = test {
                    out.push(Node::Label(t.clone()));
                }
                let mut pb = p.clone();
                pb.push(1);
                flatten(check, &pb, out, fresh);
                out.push(Node::JumpIf(expr_vars(cond), top.clone(), None));
            }
            Stmt::Goto(l) => out.push(Node::Jump(l.clone())),
            Stmt::Label(l) => out.push(Node::Label(l.clone())),
            Stmt::Switch(e, cases) => out.push(Node::Switch(expr_vars(e), cases.iter().map(|(_, l)| l.clone()).collect())),
            Stmt::SyncOut => out.push(Node::SyncOut(p)),
            Stmt::SyncIn => out.push(Node::SyncIn(p)),
            Stmt::GuestCall(_, false) | Stmt::Dispatch(false) | Stmt::Svc(_) => out.push(Node::Call),
            Stmt::Return => out.push(Node::Exit(false)),
            Stmt::GuestCall(_, true) | Stmt::Dispatch(true) => out.push(Node::Exit(true)),
            Stmt::Preempt | Stmt::Nop => {}
            Stmt::Unsupported(_) => out.push(Node::Call),
        }
    }
}

fn out_params(e: &Expr) -> Vec<String> {
    let mut r = Reads::default();
    reads(e, &mut r);
    if !r.out_params {
        return vec![];
    }
    let mut v = vec![];
    collect_addr(e, &mut v);
    v
}

fn collect_addr(e: &Expr, out: &mut Vec<String>) {
    match e {
        Expr::AddrOf(n) => out.push(n.clone()),
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => collect_addr(a, out),
        Expr::Bin(_, a, b) => {
            collect_addr(a, out);
            collect_addr(b, out);
        }
        Expr::Cond(c, a, b) => {
            collect_addr(c, out);
            collect_addr(a, out);
            collect_addr(b, out);
        }
        Expr::Call(_, args) => args.iter().for_each(|a| collect_addr(a, out)),
        _ => {}
    }
}

#[derive(Clone)]
pub struct Liveness {
    pub live_out: HashMap<Path, Set>,
    pub at_label: HashMap<String, Set>, // live on entry to each label
    pub at_entry: Set,                   // live when the function starts
}

// Live variables after each simple statement.
pub fn liveness(f: &Function) -> Liveness {
    liveness_with(f, true)
}

// With preserve false, keeping callee-saved registers for the caller does not count as reading them (what a C++
// function, which keeps them anyway, needs to know).
pub fn liveness_with(f: &Function, preserve: bool) -> Liveness {
    let mut nodes = Vec::new();
    let mut fresh = 0;
    flatten(&f.body, &vec![], &mut nodes, &mut fresh);
    let field_of: HashMap<String, String> =
        f.synced.iter().map(|(v, fl)| (v.clone(), crate::sym::cpu_key(fl))).collect();
    let synced: Vec<String> = f.synced.iter().map(|(v, _)| v.clone()).collect();
    // what an SO() reads depends on what follows it
    for k in 0..nodes.len() {
        if let Node::SyncOut(_) = &nodes[k] {
            let next = nodes[k + 1..].iter().find(|n| !matches!(n, Node::Simple(_, _, None, _) | Node::Label(_)));
            let uses: Set = match next {
                Some(Node::Call) => synced
                    .iter()
                    .filter(|v| {
                        let fl = &field_of[*v];
                        call_argument(fl) || (preserve && survives_call(fl))
                    })
                    .cloned()
                    .collect(),
                Some(Node::Exit(tail)) => {
                    let tail = *tail;
                    synced
                        .iter()
                        .filter(|v| {
                            let fl = &field_of[*v];
                            let observed = if preserve {
                                OBSERVED.contains(&fl.as_str())
                            } else {
                                matches!(fl.as_str(), "r0" | "r1" | "s0" | "s1")
                            };
                            // tail calls pass arguments, and the callee returns through lr
                            observed || (tail && (call_argument(fl) || fl == "r14"))
                        })
                        .cloned()
                        .collect()
                }
                _ => synced.iter().cloned().collect(),
            };
            let p = if let Node::SyncOut(p) = &nodes[k] { p.clone() } else { unreachable!() };
            nodes[k] = Node::Simple(p, uses, None, false);
        }
    }
    let labels: HashMap<String, usize> =
        nodes.iter().enumerate().filter_map(|(i, n)| if let Node::Label(l) = n { Some((l.clone(), i)) } else { None }).collect();
    let n = nodes.len();
    let succ: Vec<Vec<usize>> = (0..n)
        .map(|i| match &nodes[i] {
            Node::Jump(l) => labels.get(l).map(|&t| vec![t]).unwrap_or_default(),
            Node::JumpIf(_, l, _) => {
                let mut v = vec![];
                if let Some(&t) = labels.get(l) {
                    v.push(t);
                }
                if i + 1 < n {
                    v.push(i + 1);
                }
                v
            }
            Node::Switch(_, ls) => {
                let mut v: Vec<usize> = ls.iter().filter_map(|l| labels.get(l).copied()).collect();
                if i + 1 < n {
                    v.push(i + 1);
                }
                v
            }
            Node::Exit(_) => vec![],
            _ => {
                if i + 1 < n {
                    vec![i + 1]
                } else {
                    vec![]
                }
            }
        })
        .collect();
    let mut live_in: Vec<Set> = vec![Set::new(); n];
    let mut changed = true;
    while changed {
        changed = false;
        for i in (0..n).rev() {
            let mut out = Set::new();
            for &s in &succ[i] {
                out.extend(live_in[s].iter().cloned());
            }
            let inn: Set = match &nodes[i] {
                Node::Simple(_, uses, def, kills) => {
                    let mut x = out.clone();
                    if let (Some(d), true) = (def, kills) {
                        x.remove(d);
                    }
                    x.extend(uses.iter().cloned());
                    x
                }
                Node::JumpIf(u, _, _) | Node::Switch(u, _) => {
                    let mut x = out.clone();
                    x.extend(u.iter().cloned());
                    x
                }
                Node::SyncIn(_) => {
                    let mut x = out.clone();
                    for v in &synced {
                        // without preserve, what survives a call is the variable itself (not redefined)
                        if preserve || !survives_call(&field_of[v]) {
                            x.remove(v);
                        }
                    }
                    x
                }
                Node::Exit(_) => Set::new(),
                _ => out.clone(),
            };
            if inn != live_in[i] {
                live_in[i] = inn;
                changed = true;
            }
        }
    }
    let mut at_label = HashMap::new();
    for i in 0..n {
        if let Node::Label(l) = &nodes[i] {
            at_label.insert(l.clone(), live_in[i].clone());
        }
    }
    let mut live_out = HashMap::new();
    for i in 0..n {
        let path = match &nodes[i] {
            Node::Simple(p, ..) => Some(p),
            Node::JumpIf(_, _, Some(p)) => Some(p),
            Node::SyncIn(p) => Some(p),
            _ => None,
        };
        if let Some(p) = path {
            let mut out = Set::new();
            for &s in &succ[i] {
                out.extend(live_in[s].iter().cloned());
            }
            live_out.insert(p.clone(), out);
        }
    }
    let at_entry = live_in.first().cloned().unwrap_or_default();
    Liveness { live_out, at_label, at_entry }
}

fn has_out_params(s: &Stmt) -> bool {
    match s {
        Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) => !out_params(e).is_empty(),
        _ => false,
    }
}

fn remove_dead(list: &mut Vec<Stmt>, prefix: &Path, lv: &Liveness, keep_decls: &HashSet<String>) -> bool {
    let mut changed = false;
    let mut i = list.len();
    while i > 0 {
        i -= 1;
        let mut p = prefix.clone();
        p.push(i);
        if let Stmt::If(_, a, b) = &mut list[i] {
            let mut pa = p.clone();
            pa.push(0);
            let mut pb = p.clone();
            pb.push(1);
            changed |= remove_dead(a, &pa, lv, keep_decls);
            changed |= remove_dead(b, &pb, lv, keep_decls);
            continue;
        }
        let dead = match &list[i] {
            Stmt::Assign(x, _) => lv.live_out.get(&p).map_or(false, |s| !s.contains(x)),
            Stmt::Decl(_, x, _) if !keep_decls.contains(x) => lv.live_out.get(&p).map_or(false, |s| !s.contains(x)),
            _ => false,
        };
        if dead && !has_out_params(&list[i]) {
            // a Decl still provides the variable's declaration for later assignments: keep it without a value
            if let Stmt::Decl(t, x, Some(_)) = &list[i] {
                let (t, x) = (*t, x.clone());
                list[i] = Stmt::Decl(t, x, None);
            } else {
                list.remove(i);
            }
            changed = true;
        }
    }
    // an if left with two empty branches does nothing (its condition has no effect)
    list.retain(|s| !matches!(s, Stmt::If(_, a, b) if a.is_empty() && b.is_empty()));
    changed
}

// Removes assignments whose value nobody reads (repeatedly, as removals make more values dead).
pub fn remove_dead_code(f: &mut Function) {
    let keep: HashSet<String> = HashSet::new();
    for _ in 0..50 {
        let lv = liveness(f);
        if !remove_dead(&mut f.body, &vec![], &lv, &keep) {
            break;
        }
    }
}
