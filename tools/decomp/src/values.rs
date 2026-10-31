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
}

impl Values {
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
        let node = |uses: Vec<String>, defs: Vec<String>, jump: Jump| Node { path: Some(p.clone()), uses, defs, jump, copy: None };
        let copy_of = |e: &Expr| if let Expr::Var(y) = e { Some(y.clone()) } else { None };
        match s {
            Stmt::Decl(_, x, e) => {
                let mut n = node(e.as_ref().map(vars_of).unwrap_or_default(), vec![x.clone()], Jump::Next);
                n.copy = e.as_ref().and_then(copy_of);
                out.push(n);
            }
            Stmt::Assign(x, e) => {
                let mut n = node(vars_of(e), vec![x.clone()], Jump::Next);
                n.copy = copy_of(e);
                out.push(n);
            }
            Stmt::Store(_, a, v) => out.push(node([vars_of(a), vars_of(v)].concat(), vec![], Jump::Next)),
            Stmt::SetCpu(_, e) => out.push(node(vars_of(e), vec![], Jump::Next)),
            Stmt::If(c, a, b) => {
                *fresh += 1;
                let (el, end) = (format!("__e{}", fresh), format!("__n{}", fresh));
                out.push(node(vars_of(c), vec![], Jump::Either(el.clone())));
                flatten(a, &[p.clone(), vec![0]].concat(), effects, out, fresh);
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::To(end.clone()) });
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::Label(el) });
                flatten(b, &[p.clone(), vec![1]].concat(), effects, out, fresh);
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::Label(end) });
            }
            Stmt::While { top, test, body, check, cond } => {
                if let Some(t) = test {
                    out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::To(t.clone()) });
                }
                out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::Label(top.clone()) });
                flatten(body, &[p.clone(), vec![0]].concat(), effects, out, fresh);
                if let Some(t) = test {
                    out.push(Node { path: None, uses: vec![], defs: vec![], copy: None, jump: Jump::Label(t.clone()) });
                }
                flatten(check, &[p.clone(), vec![1]].concat(), effects, out, fresh);
                out.push(Node { path: Some(loop_condition(&p)), uses: vars_of(cond), defs: vec![], copy: None, jump: Jump::Either(top.clone()) });
            }
            Stmt::Goto(l) => out.push(node(vec![], vec![], Jump::To(l.clone()))),
            Stmt::Label(l) => out.push(node(vec![], vec![], Jump::Label(l.clone()))),
            Stmt::Switch(e, cases) => out.push(node(vars_of(e), vec![], Jump::Cases(cases.iter().map(|(_, l)| l.clone()).collect()))),
            Stmt::GuestCall(..) | Stmt::Dispatch(_) | Stmt::Svc(_) | Stmt::Return => {
                let (uses, defs) = effects(s, &p);
                let exits = matches!(s, Stmt::Return | Stmt::GuestCall(_, true) | Stmt::Dispatch(true));
                out.push(node(uses, defs, if exits { Jump::Exit } else { Jump::Next }));
            }
            Stmt::SyncOut | Stmt::SyncIn | Stmt::Preempt | Stmt::Nop | Stmt::ReturnUnlessPc(_) | Stmt::Unsupported(_) => {}
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
    nodes.push(Node { path: None, uses: vec![], defs: entry.clone(), copy: None, jump: Jump::Next });
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
    for &h in &headers {
        for v in &live_in[h] {
            if let Some(ids) = inn[h].get(v) {
                for &id in ids {
                    keep.insert(find(&mut parent, id));
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
    let mut alias: HashMap<usize, (String, usize)> = HashMap::new(); // value -> (variable, value) it stands for
    let mut copies: HashSet<Path> = HashSet::new();
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
        let (y, yv) = alias.get(&s0).cloned().unwrap_or((src.clone(), s0));
        // on every path from the copy to a read of it, the source is not written (a forward "must" analysis:
        // 0 not reached, 1 unchanged, 2 written on some path); passing the copy again starts over
        let mut state = vec![0u8; n];
        let mut work: Vec<usize> = succ[i].clone();
        for &t in &succ[i] {
            state[t] = 1;
        }
        while let Some(m) = work.pop() {
            let out = if m == i { 1 } else if nodes[m].defs.contains(&y) { 2 } else { state[m] };
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
            alias.insert(w, (y, yv));
            copies.insert(p.clone());
        }
    }
    // names: the variable's for kept values, <variable>_<k> for the others in order of first definition
    let mut value_name: HashMap<usize, String> = HashMap::new();
    let mut count: HashMap<String, usize> = HashMap::new();
    let mut values = Values::default();
    for id in 0..def_var.len() {
        let root = find(&mut parent, id);
        if value_name.contains_key(&root) || alias.contains_key(&root) {
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
    for (i, x) in nodes.iter().enumerate() {
        let Some(p) = &x.path else { continue };
        for d in x.defs.iter().filter(|d| vars.contains(*d)) {
            let root = find(&mut parent, def_id[&(i, d.clone())]);
            values.names.insert((p.clone(), d.clone()), value_name[&root].clone());
        }
        for u in x.uses.iter().filter(|u| vars.contains(*u)) {
            if let Some(&id) = inn[i].get(u).and_then(|s| s.iter().next()) {
                let root = find(&mut parent, id);
                // (a statement that reads and writes a variable: the read is of the value before)
                if !x.defs.contains(u) || values.names.get(&(p.clone(), u.clone())).is_none() {
                    values.names.insert((p.clone(), u.clone()), value_name[&root].clone());
                } else {
                    values.names.insert((p.clone(), format!("{}<", u)), value_name[&root].clone());
                }
            }
        }
    }
    values
}

impl Values {
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
pub fn each_expr(list: &[Stmt], f: &mut dyn FnMut(&Expr)) {
    for s in list {
        match s {
            Stmt::Decl(_, _, Some(e)) | Stmt::Assign(_, e) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) | Stmt::ReturnUnlessPc(e) => f(e),
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
