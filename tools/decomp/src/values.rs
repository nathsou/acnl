// Splitting each variable into its values, so that a register that holds an address, then a count, then a call's
// result becomes three variables (each can then get a name of its own).
//
// A value is a set of definitions joined by the uses they reach (a web): every use of a variable reaches definitions
// of one value only. Renaming a value's definitions and uses together keeps the program the same. The C++ is proved
// against the decompiled function with variables related by name at loop headers, so a value live at a loop header
// keeps the variable's name, and so does the value the variable has at the entry (its declaration's).
//
// What a statement reads and writes is the emitter's business for calls, returns and system calls (the registers it
// hands over and reads back there): `effects` tells, by statement path.
use crate::ast::*;
use crate::flow::Path;
use crate::types::{reads, Reads};
use std::collections::{HashMap, HashSet};

// the path of a loop's condition (a loop's own path numbers its body 0 and its check 1)
pub fn loop_condition(path: &[usize]) -> Path {
    [path, &[2]].concat()
}

#[derive(Default)]
pub struct Values {
    names: HashMap<(Path, String), String>, // (statement, variable) -> its value's name there (uses and definitions)
    pub fresh: Vec<(String, String)>,       // (new name, variable it splits), in order of first definition
    copies: HashSet<Path>,                  // copies left out: their value is the source's wherever it is read
    constants: HashMap<(Path, String), (u64, Ty)>, // reads of a value defined once, by a constant: the constant
    entries: HashMap<(Path, String), String>, // reads of a variable's entry value (copies seen through): that variable
    held_reads: HashSet<(Path, String)>, // reads of values held in the CPU (see split)
    held_defs: HashSet<(Path, String)>,  // their definitions (a call's statement reads and defines a register)
    offsets: HashMap<(Path, String), (String, u64)>, // reads of a value y + K left out (see split): y's name and K
    keys: HashMap<String, Key>, // each value's name -> what the original program says it is (see Key)
}

// What a value is in the original program, whatever the decompiler makes of it: the register (or variable) it splits
// and the instructions that define it, and whether it is the variable's value at the entry. Names are keyed by it
// (tools/decomp/names.py), so that a name stays with its value when the decompiler changes.
#[derive(Clone, Debug, Default)]
pub struct Key {
    pub var: String,
    pub origins: Vec<u32>, // sorted
    pub entry: bool,
}

impl Key {
    // `r0@46bcc8,46bcd0`, `r1@entry` (the entry first), or the variable alone when nothing defines it in the original
    pub fn text(&self) -> String {
        let mut at: Vec<String> = self.origins.iter().map(|a| format!("{:x}", a)).collect();
        if self.entry {
            at.insert(0, "entry".into());
        }
        if at.is_empty() {
            self.var.clone()
        } else {
            format!("{}@{}", self.var, at.join(","))
        }
    }
}

impl Values {
    // every value's name with its key
    pub fn names_with_keys(&self) -> impl Iterator<Item = (&String, &Key)> {
        self.keys.iter()
    }

    // the name of `var`'s value at statement `path` (read or written there)
    pub fn name(&self, path: &[usize], var: &str) -> String {
        self.names.get(&(path.to_vec(), var.to_string())).cloned().unwrap_or_else(|| var.to_string())
    }
}

struct Node {
    path: Option<Path>,
    uses: Vec<String>,
    defs: Vec<String>,
    jump: Jump,
    copy: Option<String>, // the variable a plain copy (x = y) reads
    constant: Option<(u64, Ty)>, // the constant a definition x = K writes
    offset: Option<(String, u64)>, // a definition x = y + K (K wrapping, as u32): y and K
    call: bool, // a call (its uses: the arguments it is handed; its definitions: the registers read back after it)
    ret: bool,  // a return (its uses: the results written back)
    origin: u32, // the original instruction of an assignment or a call (0: none)
}

enum Jump {
    Next,
    To(String),
    Either(String), // to the label, or on
    Cases(Vec<String>),
    Exit,
    Label(String),
}

fn vars_of(e: &Expr) -> Vec<String> {
    let mut r = Reads::default();
    reads(e, &mut r);
    r.vars.into_iter().collect()
}

fn flatten(list: &[Stmt], prefix: &[usize], effects: &dyn Fn(&Stmt, &[usize]) -> (Vec<String>, Vec<String>), out: &mut Vec<Node>,
           fresh: &mut usize) {
    for (i, s) in list.iter().enumerate() {
        let p: Path = [prefix, &[i]].concat();
        let origin = match s {
            Stmt::Decl(_, _, _, o) | Stmt::Assign(_, _, o) | Stmt::GuestCall(_, _, o) | Stmt::Dispatch(_, o) => o.0,
            _ => 0,
        };
        let node = |uses: Vec<String>, defs: Vec<String>, jump: Jump| Node { path: Some(p.clone()), uses, defs, jump, copy: None, constant: None, offset: None, call: false, ret: false, origin };
        let copy_of = |e: &Expr| if let Expr::Var(y) = e { Some(y.clone()) } else { None };
        let constant_of = |e: &Expr| if let Expr::Num(v, t) = e { Some((*v, *t)) } else { None };
        let offset_of = |e: &Expr| match e {
            Expr::Bin(op @ (BinOp::Add | BinOp::Sub), a, b) => match (&**a, &**b) {
                (Expr::Var(y), Expr::Num(k, Ty::U32)) => {
                    Some((y.clone(), if *op == BinOp::Add { *k } else { (*k as u32).wrapping_neg() as u64 }))
                }
                _ => None,
            },
            _ => None,
        };
        // what the C++ does not write: the saved copies of registers and their restoring (calling-convention
        // bookkeeping: the C++ leaves those registers alone), the arguments' copies
        let bookkeeping = match s {
            Stmt::Decl(_, n, _, ..) => n.starts_with("saved_") || n.starts_with("arg"),
            Stmt::Assign(_, Expr::Var(v), ..) => v.starts_with("saved_"),
            _ => false,
        };
        if bookkeeping {
            continue;
        }
        match s {
            Stmt::Decl(_, x, e, ..) => {
                let mut n = node(e.as_ref().map(vars_of).unwrap_or_default(), vec![x.clone()], Jump::Next);
                n.copy = e.as_ref().and_then(copy_of);
                n.constant = e.as_ref().and_then(constant_of);
                n.offset = e.as_ref().and_then(offset_of);
                out.push(n);
            }
            Stmt::Assign(x, e, ..) => {
                let mut n = node(vars_of(e), vec![x.clone()], Jump::Next);
                n.copy = copy_of(e);
                n.constant = constant_of(e);
                n.offset = offset_of(e);
                out.push(n);
            }
            Stmt::Store(_, a, v) => out.push(node([vars_of(a), vars_of(v)].concat(), vec![], Jump::Next)),
            Stmt::SetCpu(_, e) => out.push(node(vars_of(e), vec![], Jump::Next)),
            Stmt::If(c, a, b) => {
                *fresh += 1;
                let (el, end) = (format!("__e{}", fresh), format!("__n{}", fresh));
                out.push(node(vars_of(c), vec![], Jump::Either(el.clone())));
                flatten(a, &[p.clone(), vec![0]].concat(), effects, out, fresh);
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::To(end.clone()) });
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Label(el) });
                flatten(b, &[p.clone(), vec![1]].concat(), effects, out, fresh);
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Label(end) });
            }
            Stmt::While { top, test, body, check, cond } => {
                if let Some(t) = test {
                    out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::To(t.clone()) });
                }
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Label(top.clone()) });
                flatten(body, &[p.clone(), vec![0]].concat(), effects, out, fresh);
                if let Some(t) = test {
                    out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Label(t.clone()) });
                }
                flatten(check, &[p.clone(), vec![1]].concat(), effects, out, fresh);
                out.push(Node { path: Some(loop_condition(&p)), uses: vars_of(cond), defs: vec![], copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Either(top.clone()) });
            }
            Stmt::Goto(l) => out.push(node(vec![], vec![], Jump::To(l.clone()))),
            Stmt::Label(l) => out.push(node(vec![], vec![], Jump::Label(l.clone()))),
            Stmt::Switch(e, cases) => out.push(node(vars_of(e), vec![], Jump::Cases(cases.iter().map(|(_, l)| l.clone()).collect()))),
            Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) | Stmt::Svc(_) | Stmt::Return => {
                let (uses, defs) = effects(s, &p);
                let exits = matches!(s, Stmt::Return | Stmt::GuestCall(_, true, ..) | Stmt::Dispatch(true, ..));
                let mut n = node(uses, defs, if exits { Jump::Exit } else { Jump::Next });
                n.call = matches!(s, Stmt::GuestCall(..) | Stmt::Dispatch(_, ..));
                n.ret = matches!(s, Stmt::Return);
                out.push(n);
            }
            Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::Nop | Stmt::Site(_) | Stmt::ReturnUnlessPc(_) | Stmt::Unsupported(_) => {}
        }
    }
}

// Union-find over definition ids.
fn find(parent: &mut Vec<usize>, x: usize) -> usize {
    let mut r = x;
    while parent[r] != r {
        r = parent[r];
    }
    let mut y = x;
    while parent[y] != r {
        let next = parent[y];
        parent[y] = r;
        y = next;
    }
    r
}

// The values of `f`'s variables. `vars` are those that may be split (with their declared names); the others keep
// their names everywhere.
pub fn split(f: &Function, vars: &HashSet<String>, effects: &dyn Fn(&Stmt, &[usize]) -> (Vec<String>, Vec<String>)) -> Values {
    let mut nodes = Vec::new();
    let mut fresh = 0;
    // the entry: every variable gets its initial value (its declaration)
    let entry: Vec<String> = {
        let mut v: Vec<String> = vars.iter().cloned().collect();
        v.sort();
        v
    };
    nodes.push(Node { path: None, uses: vec![], defs: entry.clone(), copy: None, constant: None, offset: None, call: false, ret: false, origin: 0, jump: Jump::Next });
    flatten(&f.body, &[], effects, &mut nodes, &mut fresh);
    let n = nodes.len();
    let labels: HashMap<String, usize> =
        nodes.iter().enumerate().filter_map(|(i, x)| if let Jump::Label(l) = &x.jump { Some((l.clone(), i)) } else { None }).collect();
    let succ: Vec<Vec<usize>> = (0..n)
        .map(|i| {
            let next = if i + 1 < n { vec![i + 1] } else { vec![] };
            match &nodes[i].jump {
                Jump::Next | Jump::Label(_) => next,
                Jump::To(l) => labels.get(l).map(|&t| vec![t]).unwrap_or_default(),
                Jump::Either(l) => labels.get(l).map(|&t| vec![t]).unwrap_or_default().into_iter().chain(next).collect(),
                Jump::Cases(ls) => ls.iter().filter_map(|l| labels.get(l).copied()).chain(next).collect(),
                Jump::Exit => vec![],
            }
        })
        .collect();
    // definitions: (node, variable) -> id
    let mut def_id: HashMap<(usize, String), usize> = HashMap::new();
    let mut def_var: Vec<String> = Vec::new();
    for (i, x) in nodes.iter().enumerate() {
        for d in x.defs.iter().filter(|d| vars.contains(*d)) {
            def_id.insert((i, d.clone()), def_var.len());
            def_var.push(d.clone());
        }
    }
    // reaching definitions (per variable: the set of ids), forward to a fixed point
    type Reach = HashMap<String, HashSet<usize>>;
    let mut inn: Vec<Reach> = vec![Reach::new(); n];
    let mut out: Vec<Reach> = vec![Reach::new(); n];
    let mut preds: Vec<Vec<usize>> = vec![vec![]; n];
    for i in 0..n {
        for &s in &succ[i] {
            preds[s].push(i);
        }
    }
    let mut work: Vec<usize> = (0..n).rev().collect();
    let mut queued = vec![true; n];
    while let Some(i) = work.pop() {
        queued[i] = false;
        let mut r = Reach::new();
        for &p in &preds[i] {
            for (v, ids) in &out[p] {
                r.entry(v.clone()).or_default().extend(ids.iter().copied());
            }
        }
        let mut o = r.clone();
        for d in nodes[i].defs.iter().filter(|d| vars.contains(*d)) {
            o.insert(d.clone(), HashSet::from([def_id[&(i, d.clone())]]));
        }
        inn[i] = r;
        if o != out[i] {
            out[i] = o;
            for &s in &succ[i] {
                if !queued[s] {
                    queued[s] = true;
                    work.push(s);
                }
            }
        }
    }
    // a use joins the definitions it reaches
    let mut parent: Vec<usize> = (0..def_var.len()).collect();
    for (i, x) in nodes.iter().enumerate() {
        for u in x.uses.iter().filter(|u| vars.contains(*u)) {
            let ids: Vec<usize> = inn[i].get(u).map(|s| s.iter().copied().collect()).unwrap_or_default();
            for w in ids.windows(2) {
                let (a, b) = (find(&mut parent, w[0]), find(&mut parent, w[1]));
                parent[a] = b;
            }
        }
    }
    // the values that keep the variable's name: the entry's, and those live at a loop header (a label jumped to from
    // itself or below, or one the depth-first search reaches again while inside it)
    let mut keep: HashSet<usize> = HashSet::new();
    for v in &entry {
        if let Some(&id) = def_id.get(&(0, v.clone())) {
            keep.insert(find(&mut parent, id));
        }
    }
    let mut headers: HashSet<usize> = HashSet::new();
    for i in 0..n {
        for &s in &succ[i] {
            if s <= i {
                headers.insert(s);
            }
        }
    }
    {
        let mut state = vec![0u8; n];
        let mut stack: Vec<(usize, usize)> = vec![(0, 0)];
        state[0] = 1;
        while let Some((b, k)) = stack.pop() {
            if k < succ[b].len() {
                stack.push((b, k + 1));
                let t = succ[b][k];
                match state[t] {
                    0 => {
                        state[t] = 1;
                        stack.push((t, 0));
                    }
                    1 => {
                        headers.insert(t);
                    }
                    _ => {}
                }
            } else {
                state[b] = 2;
            }
        }
    }
    // live at a header: a definition reaching it whose value is used later (backward liveness of values)
    let mut live_in: Vec<HashSet<String>> = vec![HashSet::new(); n];
    let mut changed = true;
    while changed {
        changed = false;
        for i in (0..n).rev() {
            let mut l: HashSet<String> = HashSet::new();
            for &s in &succ[i] {
                l.extend(live_in[s].iter().cloned());
            }
            for d in &nodes[i].defs {
                l.remove(d);
            }
            l.extend(nodes[i].uses.iter().cloned());
            if l != live_in[i] {
                live_in[i] = l;
                changed = true;
            }
        }
    }
    let mut at_header: HashSet<usize> = HashSet::new();
    for &h in &headers {
        for v in &live_in[h] {
            if let Some(ids) = inn[h].get(v) {
                for &id in ids {
                    keep.insert(find(&mut parent, id));
                    at_header.insert(find(&mut parent, id));
                }
            }
        }
    }
    // copies: a value defined once, by a copy of another variable's value, which every read of it still sees (the
    // source is not written in between) is that value; its copy is left out (not for a value a header relates)
    let mut defs_of: HashMap<usize, Vec<usize>> = HashMap::new(); // value -> its defining nodes
    for (&(i, _), &id) in &def_id {
        let root = find(&mut parent, id);
        defs_of.entry(root).or_default().push(i);
    }
    let mut reads_of: HashMap<usize, Vec<usize>> = HashMap::new(); // value -> the nodes reading it
    for (i, x) in nodes.iter().enumerate() {
        for u in x.uses.iter().filter(|u| vars.contains(*u)) {
            if let Some(&id) = inn[i].get(u).and_then(|s| s.iter().next()) {
                let root = find(&mut parent, id);
                reads_of.entry(root).or_default().push(i);
            }
        }
    }
    // held in the CPU: a value of r1-r3 or s0-s15 (S0-S15) defined only by reading the register back after calls (no
    // call between: every call is followed by such a reading) and read only by calls (as their argument, in that
    // register) and returns (its write-back): wherever it is read, the CPU's register still holds it (not for a value
    // a loop header relates; nor for the entry's value, whose parameter reads better than the CPU)
    let mut held: HashSet<usize> = HashSet::new();
    for (w, ds) in &defs_of {
        let var = &def_var[*w];
        let float = var.strip_prefix('S').map_or(false, |k| k.parse::<u32>().map_or(false, |k| k < 16));
        if !(matches!(var.as_str(), "r1" | "r2" | "r3") || float) || at_header.contains(w) || !ds.iter().all(|&i| nodes[i].call) {
            continue;
        }
        if reads_of.get(w).map_or(false, |rs| rs.iter().all(|&i| nodes[i].call || nodes[i].ret)) {
            held.insert(*w);
        }
    }
    let mut alias: HashMap<usize, (String, usize)> = HashMap::new(); // value -> (variable, value) it stands for
    let mut copies: HashSet<Path> = HashSet::new();
    // the entry definitions, and the copies of an entry value (value -> the variable whose entry value it is)
    let entry_def: HashMap<String, usize> = entry.iter().filter_map(|v| def_id.get(&(0, v.clone())).map(|&id| (v.clone(), id))).collect();
    let mut entry_copy: HashMap<usize, String> = HashMap::new();
    // constants: a value defined once, by a constant, is that constant wherever it is read (not for a value a header
    // relates); its definition is left out
    let mut constant: HashMap<usize, (u64, Ty)> = HashMap::new();
    for i in 0..n {
        let (Some(k), Some(p), [d]) = (&nodes[i].constant, &nodes[i].path, nodes[i].defs.as_slice()) else { continue };
        if !vars.contains(d) {
            continue;
        }
        let w = find(&mut parent, def_id[&(i, d.clone())]);
        if keep.contains(&w) || defs_of.get(&w).map_or(0, |v| v.len()) != 1 {
            continue;
        }
        constant.insert(w, *k);
        copies.insert(p.clone());
    }
    // and a value every one of whose definitions is the same constant (`vf = 0` on both ways to a read)
    for (w, ds) in &defs_of {
        if ds.len() < 2 || keep.contains(w) || constant.contains_key(w) {
            continue;
        }
        let ks: Vec<Option<(u64, Ty)>> = ds
            .iter()
            .map(|&i| match (&nodes[i].constant, &nodes[i].path, nodes[i].defs.as_slice()) {
                (Some(k), Some(_), [d]) if vars.contains(d) => Some(*k),
                _ => None,
            })
            .collect();
        if ks.iter().all(|k| k.is_some() && *k == ks[0]) {
            constant.insert(*w, ks[0].unwrap());
            for &i in ds {
                copies.insert(nodes[i].path.clone().unwrap());
            }
        }
    }
    // a constant plus a constant (x = y + K, y one constant value): to a fixed point, for chains of them
    loop {
        let mut more = false;
        for i in 0..n {
            let (Some((src, k)), Some(p), [d]) = (&nodes[i].offset, &nodes[i].path, nodes[i].defs.as_slice()) else { continue };
            if !vars.contains(src) || !vars.contains(d) {
                continue;
            }
            let w = find(&mut parent, def_id[&(i, d.clone())]);
            if constant.contains_key(&w) || keep.contains(&w) || defs_of.get(&w).map_or(0, |v| v.len()) != 1 {
                continue;
            }
            let Some(ids) = inn[i].get(src) else { continue };
            if ids.len() != 1 {
                continue;
            }
            let s0 = find(&mut parent, *ids.iter().next().unwrap());
            if let Some((c, Ty::U32)) = constant.get(&s0).copied() {
                constant.insert(w, ((c as u32).wrapping_add(*k as u32) as u64, Ty::U32));
                copies.insert(p.clone());
                more = true;
            }
        }
        if !more {
            break;
        }
    }
    for i in 0..n {
        let (Some(src), Some(p), [d]) = (&nodes[i].copy, &nodes[i].path, nodes[i].defs.as_slice()) else { continue };
        if !vars.contains(src) || !vars.contains(d) || src == d {
            continue;
        }
        let w = find(&mut parent, def_id[&(i, d.clone())]);
        if keep.contains(&w) || defs_of.get(&w).map_or(0, |v| v.len()) != 1 {
            continue;
        }
        let Some(ids) = inn[i].get(src) else { continue };
        if ids.is_empty() {
            continue;
        }
        let s0 = find(&mut parent, *ids.iter().next().unwrap());
        // a copy of a constant is that constant
        if let Some(k) = constant.get(&s0).copied() {
            if ids.len() == 1 {
                constant.insert(w, k);
                copies.insert(p.clone());
            }
            continue;
        }
        let (y, yv) = alias.get(&s0).cloned().unwrap_or((src.clone(), s0));
        // on every path from the copy to a read of it, the source is not written (a forward "must" analysis:
        // 0 not reached, 1 unchanged, 2 written on some path); passing the copy again starts over
        let mut state = vec![0u8; n];
        let mut work: Vec<usize> = succ[i].clone();
        for &t in &succ[i] {
            state[t] = 1;
        }
        // (a write of y to another value is to another C++ variable, unless both keep y's name)
        let clobbers = |m: usize, parent: &mut Vec<usize>| -> bool {
            match def_id.get(&(m, y.clone())) {
                Some(&id) => {
                    let r = find(parent, id);
                    r == yv || (keep.contains(&yv) && keep.contains(&r))
                }
                None => false,
            }
        };
        while let Some(m) = work.pop() {
            let out = if m == i { 1 } else if clobbers(m, &mut parent) { 2 } else { state[m] };
            for &t in &succ[m] {
                let merged = state[t].max(out);
                if merged != state[t] {
                    state[t] = merged;
                    work.push(t);
                }
            }
        }
        let still = reads_of.get(&w).map_or(true, |rs| rs.iter().all(|&u| state[u] == 1));
        if still {
            // the copy reads exactly the source's entry value (or a copy of it)
            let only_entry = ids.len() == 1 && entry_def.get(src) == ids.iter().next();
            if only_entry {
                entry_copy.insert(w, src.clone());
            } else if let (1, Some(e)) = (ids.len(), entry_copy.get(&s0).cloned()) {
                entry_copy.insert(w, e);
            }
            alias.insert(w, (y, yv));
            copies.insert(p.clone());
        }
    }
    // a value defined once as another plus a constant (x = y + K), where y's value stays in its C++ variable on every
    // path to the reads of x: written y + K at each read, its definition left out (chains compose: x2 = x1 + 4,
    // x1 = y + 4 is y + 8; `x = x + K` too when the two values have names of their own)
    let mut offset: HashMap<usize, (String, usize, u64)> = HashMap::new(); // value -> (variable, its value, K)
    let bases = address_bases(&f.body);
    for i in 0..n {
        let (Some((src, k)), Some(p), [d]) = (&nodes[i].offset, &nodes[i].path, nodes[i].defs.as_slice()) else { continue };
        // (not a variable something accesses memory through: the emitter may make it a pointer to a struct of its own)
        if !vars.contains(src) || !vars.contains(d) || bases.contains(d) {
            continue;
        }
        let w = find(&mut parent, def_id[&(i, d.clone())]);
        if keep.contains(&w) || constant.contains_key(&w) || alias.contains_key(&w) || defs_of.get(&w).map_or(0, |v| v.len()) != 1 {
            continue;
        }
        // (nor a value a copy of which memory is accessed through)
        if alias.iter().any(|(c, (_, yv))| *yv == w && bases.contains(&def_var[*c])) {
            continue;
        }
        let Some(ids) = inn[i].get(src) else { continue };
        if ids.len() != 1 {
            continue;
        }
        let s0 = find(&mut parent, *ids.iter().next().unwrap());
        if constant.contains_key(&s0) || keep.contains(&s0) {
            continue;
        }
        let (y, yv) = alias.get(&s0).cloned().unwrap_or((src.clone(), s0));
        let (y, yv, k) = match offset.get(&yv) {
            Some((y2, yv2, k2)) => (y2.clone(), *yv2, (*k + *k2) & 0xffff_ffff),
            None => (y, yv, *k & 0xffff_ffff),
        };
        let mut state = vec![0u8; n];
        let mut work: Vec<usize> = succ[i].clone();
        for &t in &succ[i] {
            state[t] = 1;
        }
        let clobbers = |m: usize, parent: &mut Vec<usize>| -> bool {
            match def_id.get(&(m, y.clone())) {
                Some(&id) => {
                    let r = find(parent, id);
                    r == yv || (keep.contains(&yv) && keep.contains(&r))
                }
                None => false,
            }
        };
        while let Some(m) = work.pop() {
            let out = if m == i { 1 } else if clobbers(m, &mut parent) { 2 } else { state[m] };
            for &t in &succ[m] {
                let merged = state[t].max(out);
                if merged != state[t] {
                    state[t] = merged;
                    work.push(t);
                }
            }
        }
        let still = reads_of.get(&w).map_or(false, |rs| rs.iter().all(|&u| state[u] == 1));
        if still {
            offset.insert(w, (y, yv, k));
            copies.insert(p.clone());
        }
    }
    // names: the variable's for kept values, <variable>_<k> for the others in order of first definition
    let mut value_name: HashMap<usize, String> = HashMap::new();
    let mut count: HashMap<String, usize> = HashMap::new();
    let mut values = Values::default();
    for id in 0..def_var.len() {
        let root = find(&mut parent, id);
        if value_name.contains_key(&root) || alias.contains_key(&root) || constant.contains_key(&root) {
            continue;
        }
        let var = &def_var[id];
        let name = if keep.contains(&root) {
            var.clone()
        } else {
            let k = count.entry(var.clone()).or_insert(0);
            *k += 1;
            let name = format!("{}_{}", var, k);
            values.fresh.push((name.clone(), var.clone()));
            name
        };
        value_name.insert(root, name);
    }
    for (w, (_, y)) in &alias {
        if let Some(name) = value_name.get(y).cloned() {
            value_name.insert(*w, name);
        }
    }
    values.copies = copies;
    // the keys: every definition's instruction, under the name of its value
    let mut node_of = vec![0; def_var.len()];
    for (&(i, _), &id) in &def_id {
        node_of[id] = i;
    }
    for id in 0..def_var.len() {
        // (copies left out are the source's value, but their instructions define another register: not its key)
        let root = find(&mut parent, id);
        if alias.contains_key(&root) {
            continue;
        }
        let Some(name) = value_name.get(&root) else { continue };
        let k = values.keys.entry(name.clone()).or_insert_with(|| Key { var: def_var[root].clone(), ..Key::default() });
        let i = node_of[id];
        if i == 0 {
            k.entry = true;
        } else if nodes[i].origin != 0 && !k.origins.contains(&nodes[i].origin) {
            k.origins.push(nodes[i].origin);
        }
    }
    for k in values.keys.values_mut() {
        k.origins.sort();
    }
    for (i, x) in nodes.iter().enumerate() {
        let Some(p) = &x.path else { continue };
        for d in x.defs.iter().filter(|d| vars.contains(*d)) {
            if held.contains(&find(&mut parent, def_id[&(i, d.clone())])) {
                values.held_defs.insert((p.clone(), d.clone()));
            }
        }
        for u in x.uses.iter().filter(|u| vars.contains(*u)) {
            if let Some(&id) = inn[i].get(u).and_then(|s| s.iter().next()) {
                if held.contains(&find(&mut parent, id)) {
                    values.held_reads.insert((p.clone(), u.clone()));
                }
            }
        }
    }
    for (i, x) in nodes.iter().enumerate() {
        let Some(p) = &x.path else { continue };
        for d in x.defs.iter().filter(|d| vars.contains(*d)) {
            let root = find(&mut parent, def_id[&(i, d.clone())]);
            if let Some(name) = value_name.get(&root) {
                values.names.insert((p.clone(), d.clone()), name.clone());
            }
        }
        for u in x.uses.iter().filter(|u| vars.contains(*u)) {
            if let Some(&id) = inn[i].get(u).and_then(|s| s.iter().next()) {
                let root = find(&mut parent, id);
                if let Some(k) = constant.get(&root) {
                    values.constants.insert((p.clone(), u.clone()), *k);
                    continue;
                }
                // (through a copy of one too)
                let target = alias.get(&root).map_or(root, |(_, yv)| *yv);
                if let Some((y, yv, k)) = offset.get(&target) {
                    let name = value_name.get(yv).cloned().unwrap_or_else(|| y.clone());
                    values.offsets.insert((p.clone(), u.clone()), (name, *k));
                    continue;
                }
                // the entry value: exactly the entry definition reaches, or a copy of the entry value does
                let ids = &inn[i][u];
                if ids.len() == 1 && entry_def.get(u) == ids.iter().next() {
                    values.entries.insert((p.clone(), u.clone()), u.clone());
                } else if let (1, Some(e)) = (ids.len(), entry_copy.get(&root)) {
                    values.entries.insert((p.clone(), u.clone()), e.clone());
                }
                // (a statement that reads and writes a variable: the read is of the value before)
                if !x.defs.contains(u) || values.names.get(&(p.clone(), u.clone())).is_none() {
                    values.names.insert((p.clone(), u.clone()), value_name.get(&root).cloned().unwrap_or_else(|| u.clone()));
                } else {
                    values.names.insert((p.clone(), format!("{}<", u)), value_name.get(&root).cloned().unwrap_or_else(|| u.clone()));
                }
            }
        }
    }
    values
}

impl Values {
    // the constant `var` holds when statement `path` reads it (a value defined once, by a constant)
    pub fn constant(&self, path: &[usize], var: &str) -> Option<(u64, Ty)> {
        self.constants.get(&(path.to_vec(), var.to_string())).copied()
    }

    // the value `var` holds when statement `path` reads it when it is another plus a constant: that one's name, K
    pub fn offset(&self, path: &[usize], var: &str) -> Option<&(String, u64)> {
        self.offsets.get(&(path.to_vec(), var.to_string()))
    }

    // the variable whose entry value `var` holds when statement `path` reads it (copies seen through)
    pub fn entry_value(&self, path: &[usize], var: &str) -> Option<&String> {
        self.entries.get(&(path.to_vec(), var.to_string()))
    }

    // whether `var`'s value read at statement `path` is held in the CPU's register of the same name
    pub fn held(&self, path: &[usize], var: &str) -> bool {
        self.held_reads.contains(&(path.to_vec(), var.to_string()))
    }

    // whether the value of `var` the call at `path` defines (reading the register back) is held in the CPU
    pub fn held_def(&self, path: &[usize], var: &str) -> bool {
        self.held_defs.contains(&(path.to_vec(), var.to_string()))
    }

    // whether the statement at `path` is a copy left out
    pub fn left_out(&self, path: &[usize]) -> bool {
        self.copies.contains(path)
    }

    // the name of the value `var` has when statement `path` starts (what it reads; it may write another)
    pub fn read(&self, path: &[usize], var: &str) -> String {
        if let Some(n) = self.names.get(&(path.to_vec(), format!("{}<", var))) {
            return n.clone();
        }
        self.name(path, var)
    }
}

// every expression of the statements (top level only: the walker does not enter the expressions)
// The variables memory is accessed through (the base of a load's or a store's address: x, or x plus a constant).
fn address_bases(list: &[Stmt]) -> HashSet<String> {
    fn base(a: &Expr, out: &mut HashSet<String>) {
        match a {
            Expr::Var(v) => {
                out.insert(v.clone());
            }
            Expr::Bin(BinOp::Add | BinOp::Sub, x, k) if matches!(**k, Expr::Num(..)) => base(x, out),
            _ => {}
        }
    }
    fn loads(e: &Expr, out: &mut HashSet<String>) {
        match e {
            Expr::Load(_, a) => {
                base(a, out);
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
            Expr::Call(_, args) => args.iter().for_each(|a| loads(a, out)),
            _ => {}
        }
    }
    let mut out = HashSet::new();
    fn walk(list: &[Stmt], out: &mut HashSet<String>) {
        for s in list {
            match s {
                Stmt::Store(_, a, v) => {
                    base(a, out);
                    loads(a, out);
                    loads(v, out);
                }
                Stmt::If(c, a, b) => {
                    loads(c, out);
                    walk(a, out);
                    walk(b, out);
                }
                Stmt::While { body, check, cond, .. } => {
                    loads(cond, out);
                    walk(body, out);
                    walk(check, out);
                }
                Stmt::Decl(_, _, Some(e), ..) | Stmt::Assign(_, e, ..) | Stmt::SetCpu(_, e) | Stmt::ReturnUnlessPc(e) | Stmt::Switch(e, _) => {
                    loads(e, out)
                }
                _ => {}
            }
        }
    }
    walk(list, &mut out);
    out
}

// every variable an expression reads
// e with every variable renamed by f
pub fn rename_vars(e: &mut Expr, f: &mut dyn FnMut(&str) -> String) {
    match e {
        Expr::Var(v) => *v = f(v),
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => rename_vars(a, f),
        Expr::Bin(_, a, b) => {
            rename_vars(a, f);
            rename_vars(b, f);
        }
        Expr::Cond(c, a, b) => {
            rename_vars(c, f);
            rename_vars(a, f);
            rename_vars(b, f);
        }
        Expr::Call(_, args) => args.iter_mut().for_each(|a| rename_vars(a, f)),
        _ => {}
    }
}

pub fn each_var(e: &Expr, f: &mut dyn FnMut(&str)) {
    match e {
        Expr::Var(v) => f(v),
        Expr::Un(_, a) | Expr::Cast(_, a) | Expr::Load(_, a) => each_var(a, f),
        Expr::Bin(_, a, b) => {
            each_var(a, f);
            each_var(b, f);
        }
        Expr::Cond(c, a, b) => {
            each_var(c, f);
            each_var(a, f);
            each_var(b, f);
        }
        Expr::Call(_, args) => args.iter().for_each(|a| each_var(a, f)),
        _ => {}
    }
}

pub fn each_expr(list: &[Stmt], f: &mut dyn FnMut(&Expr)) {
    for s in list {
        match s {
            Stmt::Decl(_, _, Some(e), ..) | Stmt::Assign(_, e, ..) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) | Stmt::ReturnUnlessPc(e) => f(e),
            Stmt::Store(_, a, v) => {
                f(a);
                f(v);
            }
            Stmt::If(c, a, b) => {
                f(c);
                each_expr(a, f);
                each_expr(b, f);
            }
            Stmt::While { body, check, cond, .. } => {
                each_expr(body, f);
                each_expr(check, f);
                f(cond);
            }
            _ => {}
        }
    }
}

// The function with each access through an argument register that still holds its entry value written through the
// argument's copy instead (argK, when the function has one): `r0 + 4` -> `arg0 + 4`, so that it reads as a field of
// the object the argument points to. A call is taken to change r0-r3 (whatever its signature), so only reads that
// certainly see the entry value change.
pub fn arguments_in_addresses(f: &Function) -> Function {
    let mut g = f.clone();
    let copies: HashSet<String> = {
        let mut out = HashSet::new();
        each_decl(&f.body, &mut |n| {
            if n.starts_with("arg") {
                out.insert(n.to_string());
            }
        });
        out
    };
    if copies.is_empty() {
        return g;
    }
    // with loops, only the registers the function never writes (at a loop header the proof relates the argument's copy
    // to the register only then)
    let (_, _, headers) = crate::sym::Sym::graph(f);
    let mut written: HashSet<String> = HashSet::new();
    crate::view::assigned_vars(&f.body, &mut written);
    let loop_free = headers.is_empty();
    let copies: HashSet<String> = copies
        .into_iter()
        .filter(|a| loop_free || !written.contains(&format!("r{}", &a[3..])))
        .collect();
    let regs: Vec<String> = ["r0", "r1", "r2", "r3"].iter().map(|r| r.to_string()).collect();
    let vars: HashSet<String> = f.synced.iter().map(|(v, _)| v.clone()).filter(|v| v != "r13" && v != "r14").collect();
    let values = split(f, &vars, &|s, _| match s {
        Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) | Stmt::Svc(_) => (regs.clone(), regs.clone()),
        Stmt::Return => (vec!["r0".to_string()], vec![]),
        _ => (vec![], vec![]),
    });
    // (without loops, any register holding an argument's entry value; with loops, the argument's own register)
    fn subst(a: &mut Expr, p: &[usize], values: &Values, copies: &HashSet<String>, any: bool) {
        let fix = |e: &mut Expr| {
            if let Expr::Var(v) = e {
                if let Some(entry) = values.entry_value(p, v) {
                    if let Some(k) = entry.strip_prefix('r') {
                        let arg = format!("arg{}", k);
                        if copies.contains(&arg) && (entry == v || any) {
                            *e = Expr::Var(arg);
                        }
                    }
                }
            }
        };
        match a {
            Expr::Var(_) => fix(a),
            Expr::Bin(BinOp::Add, b, o) if matches!(**o, Expr::Num(..)) => fix(b),
            _ => {}
        }
    }
    fn loads(e: &mut Expr, p: &[usize], values: &Values, copies: &HashSet<String>, loop_free: bool) {
        match e {
            Expr::Load(_, a) => {
                loads(a, p, values, copies, loop_free);
                subst(a, p, values, copies, loop_free);
            }
            Expr::Un(_, a) | Expr::Cast(_, a) => loads(a, p, values, copies, loop_free),
            Expr::Bin(_, a, b) => {
                loads(a, p, values, copies, loop_free);
                loads(b, p, values, copies, loop_free);
            }
            Expr::Cond(c, a, b) => {
                loads(c, p, values, copies, loop_free);
                loads(a, p, values, copies, loop_free);
                loads(b, p, values, copies, loop_free);
            }
            Expr::Call(_, args) => args.iter_mut().for_each(|x| loads(x, p, values, copies, loop_free)),
            _ => {}
        }
    }
    fn walk(list: &mut [Stmt], prefix: &[usize], values: &Values, copies: &HashSet<String>, loop_free: bool) {
        for (i, s) in list.iter_mut().enumerate() {
            let p: Path = [prefix, &[i]].concat();
            match s {
                Stmt::Decl(_, _, Some(e), ..) | Stmt::Assign(_, e, ..) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) => loads(e, &p, values, copies, loop_free),
                Stmt::Store(_, a, v) => {
                    loads(a, &p, values, copies, loop_free);
                    loads(v, &p, values, copies, loop_free);
                    subst(a, &p, values, copies, loop_free);
                }
                Stmt::If(c, a, b) => {
                    loads(c, &p, values, copies, loop_free);
                    walk(a, &[p.clone(), vec![0]].concat(), values, copies, loop_free);
                    walk(b, &[p.clone(), vec![1]].concat(), values, copies, loop_free);
                }
                Stmt::While { body, check, cond, .. } => {
                    walk(body, &[p.clone(), vec![0]].concat(), values, copies, loop_free);
                    walk(check, &[p.clone(), vec![1]].concat(), values, copies, loop_free);
                    loads(cond, &loop_condition(&p), values, copies, loop_free);
                }
                _ => {}
            }
        }
    }
    walk(&mut g.body, &[], &values, &copies, loop_free);
    g
}

// the names every declaration of the statements declares
fn each_decl(list: &[Stmt], f: &mut dyn FnMut(&str)) {
    for s in list {
        match s {
            Stmt::Decl(_, n, _, ..) => f(n),
            Stmt::If(_, a, b) | Stmt::While { body: a, check: b, .. } => {
                each_decl(a, f);
                each_decl(b, f);
            }
            _ => {}
        }
    }
}
