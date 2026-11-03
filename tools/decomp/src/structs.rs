// Struct recovery across the program: the objects functions receive, as shared structs.
//
// Facts, from each proved decompilation: the fields of the object an argument points to (the offsets and types of its
// accesses, as the drafts' per-function structs have them), and the arguments it passes on unchanged (its argument k,
// its entry value seen through copies, handed to a callee as argument j). Arguments joined by such calls point to the
// same kind of object: union-find merges them and their fields. A class whose fields overlap with different sizes is
// left alone. The others become packed structs in a generated header, and the type database (typedb.rs) gets them
// as the parameter types, so the emitter writes the shared struct (its field names, layout checked by the compiler
// before any proof) instead of one struct per function.
use crate::ast::*;
use std::collections::{BTreeMap, HashMap};

#[derive(Default, Clone)]
pub struct Facts {
    pub fields: BTreeMap<usize, BTreeMap<u64, Ty>>, // argument -> offset -> type of the accesses
    pub flows: Vec<(usize, u32, usize)>,             // (argument, callee, the callee's argument)
    pub vptrs: Vec<(usize, u64)>,                    // (argument, constant stored at its offset 0: a vtable)
}

const ARGS: [&str; 4] = ["r0", "r1", "r2", "r3"];

pub fn facts(f: &Function) -> Facts {
    let f = &crate::values::arguments_in_addresses(f);
    let mut out = Facts::default();
    if crate::emit::fields(&f.body, &mut out.fields).is_err() {
        out.fields.clear();
    }
    // the 32-bit fields only ever read as a float or written from one (their bits): floats; only cleared or copied
    // from one field to another: no vote (NO_VOTE), the other functions' accesses decide
    let mut uses: HashMap<(usize, u64), Uses> = HashMap::new();
    float_uses(&f.body, &mut uses);
    for ((k, off), u) in uses {
        let vote = match (u.floats, u.others, u.neutral) {
            (1.., 0, _) => Some(Ty::F32),
            (0, 0, 1..) => Some(NO_VOTE),
            _ => None,
        };
        if let (Some(vote), Some(t)) = (vote, out.fields.get_mut(&k).and_then(|fs| fs.get_mut(&off))) {
            if *t == Ty::U32 {
                *t = vote;
            }
        }
    }
    // the arguments' copies (argN) and the registers are the same values at the entry
    let vars: std::collections::HashSet<String> = f.synced.iter().map(|(v, _)| v.clone()).filter(|v| v != "r13" && v != "r14").collect();
    let regs: Vec<&str> = ARGS.iter().copied().filter(|r| vars.contains(*r)).collect();
    let values = crate::values::split(f, &vars, &|s, _| match s {
        // a call reads r0-r3 (what it is handed is all that matters here)
        Stmt::GuestCall(..) | Stmt::Dispatch(_, ..) => (regs.iter().map(|r| r.to_string()).collect(), vec![]),
        Stmt::Return => (vec!["r0".to_string()], vec![]),
        _ => (vec![], vec![]),
    });
    fn walk(list: &[Stmt], prefix: &[usize], values: &crate::values::Values, regs: &[&str], out: &mut Vec<(usize, u32, usize)>) {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            match s {
                Stmt::GuestCall(t, _, ..) => {
                    for (j, r) in regs.iter().enumerate() {
                        if let Some(e) = values.entry_value(&p, r) {
                            if let Some(k) = ARGS.iter().position(|a| a == e) {
                                out.push((k, *t & !1, ARGS.iter().position(|a| a == r).unwrap_or(j)));
                            }
                        }
                    }
                }
                Stmt::If(_, a, b) => {
                    walk(a, &[p.clone(), vec![0]].concat(), values, regs, out);
                    walk(b, &[p.clone(), vec![1]].concat(), values, regs, out);
                }
                Stmt::While { body, check, .. } => {
                    walk(body, &[p.clone(), vec![0]].concat(), values, regs, out);
                    walk(check, &[p.clone(), vec![1]].concat(), values, regs, out);
                }
                _ => {}
            }
        }
    }
    walk(&f.body, &[], &values, &regs, &mut out.flows);
    // constants stored at an argument's offset 0 (a constructor or destructor setting the object's vtable)
    fn stores(list: &[Stmt], prefix: &[usize], values: &crate::values::Values, out: &mut Vec<(usize, u64)>) {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            match s {
                Stmt::Store(Ty::U32, Expr::Var(a), v) if a.starts_with("arg") => {
                    let k: Option<usize> = a[3..].parse().ok();
                    let c = match v {
                        Expr::Num(c, _) => Some(*c),
                        Expr::Var(x) => values.constant(&p, x).map(|(c, _)| c),
                        _ => None,
                    };
                    if let (Some(k), Some(c)) = (k, c) {
                        out.push((k, c & 0xffff_ffff));
                    }
                }
                Stmt::If(_, a, b) => {
                    stores(a, &[p.clone(), vec![0]].concat(), values, out);
                    stores(b, &[p.clone(), vec![1]].concat(), values, out);
                }
                Stmt::While { body, check, .. } => {
                    stores(body, &[p.clone(), vec![0]].concat(), values, out);
                    stores(check, &[p.clone(), vec![1]].concat(), values, out);
                }
                _ => {}
            }
        }
    }
    stores(&f.body, &[], &values, &mut out.vptrs);
    out
}

// A 32-bit field a function only clears or copies to or from another field (its accesses say nothing of its type),
// until the fields are merged (merged, then plain_types: a u32 if no function says more). No 32-bit access has a
// signed type, so S32 is free to mark it.
pub const NO_VOTE: Ty = Ty::S32;

#[derive(Default)]
struct Uses {
    floats: usize,  // read as a float (`U2F(load)`) or written from one (`F2U(x)`)
    others: usize,  // read or written otherwise
    neutral: usize, // a 0 stored, or a copy from or to another field (a load stored as it is)
}

// The accesses through an argument (argN + offset), counted as float ones, neutral ones or others.
fn float_uses(list: &[Stmt], out: &mut HashMap<(usize, u64), Uses>) {
    fn expr(e: &Expr, out: &mut HashMap<(usize, u64), Uses>) {
        match e {
            Expr::Call(n, args) if n == "U2F" && matches!(args.as_slice(), [Expr::Load(Ty::U32, _)]) => {
                let Expr::Load(_, a) = &args[0] else { unreachable!() };
                if let Some(key) = crate::emit::arg_off_of(a) {
                    out.entry(key).or_default().floats += 1;
                }
                expr(a, out);
            }
            Expr::Load(_, a) => {
                if let Some(key) = crate::emit::arg_off_of(a) {
                    out.entry(key).or_default().others += 1;
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
            Expr::Call(_, args) => args.iter().for_each(|x| expr(x, out)),
            _ => {}
        }
    }
    for s in list {
        match s {
            Stmt::Decl(_, _, Some(e), ..) | Stmt::Assign(_, e, ..) | Stmt::SetCpu(_, e) | Stmt::Switch(e, _) | Stmt::ReturnUnlessPc(e) => expr(e, out),
            Stmt::Store(t, a, v) => {
                // (a word copied from a field: neutral for both)
                let copied = match v {
                    Expr::Load(Ty::U32, src) if *t == Ty::U32 => crate::emit::arg_off_of(src).map(|k| (k, src)),
                    _ => None,
                };
                if let Some(key) = crate::emit::arg_off_of(a) {
                    let float = *t == Ty::U32 && matches!(v, Expr::Call(n, _) if n == "F2U");
                    let cleared = *t == Ty::U32 && matches!(v, Expr::Num(0, _));
                    let e = out.entry(key).or_default();
                    if float {
                        e.floats += 1;
                    } else if cleared || copied.is_some() {
                        e.neutral += 1;
                    } else {
                        e.others += 1;
                    }
                }
                expr(a, out);
                match copied {
                    Some((k, src)) if crate::emit::arg_off_of(a).is_some() => {
                        out.entry(k).or_default().neutral += 1;
                        expr(src, out);
                    }
                    _ => expr(v, out),
                }
            }
            Stmt::If(c, a, b) => {
                expr(c, out);
                float_uses(a, out);
                float_uses(b, out);
            }
            Stmt::While { cond, body, check, .. } => {
                expr(cond, out);
                float_uses(body, out);
                float_uses(check, out);
            }
            _ => {}
        }
    }
}

// One field's type from two functions' accesses: a float where both read it as one, the 32-bit integer where one of
// them does not (the first type otherwise, as before).
fn merged(old: Ty, new: Ty) -> Ty {
    match (old, new) {
        (Ty::F32, Ty::U32) | (Ty::U32, Ty::F32) => Ty::U32,
        // (a function without a vote leaves it to the others)
        (NO_VOTE, t) => t,
        _ => old,
    }
}

// the fields' types once merged: one no function voted on is a u32
fn plain_types(fields: &mut BTreeMap<u64, Ty>) {
    for t in fields.values_mut() {
        if *t == NO_VOTE {
            *t = Ty::U32;
        }
    }
}

// The classes of the program's RTTI (build/acnl/rtti.json): name, base classes, primary vtable and its functions.
pub struct Class {
    pub name: String,      // C++ identifier (namespaces joined with __)
    pub bases: Vec<usize>, // indices of the base classes (at offset 0 first)
    pub vtable: Option<u64>,
    pub functions: Vec<u32>,
    pub vtables: Vec<(u64, i64)>, // every vtable of the class: its address (function 0) and offset to the top
}

// The struct names the repository's sources (games/acnl/src, the recovered header aside) and the type database
// already use: recovered classes are named around them.
pub fn taken_names(src: &str) -> std::collections::HashSet<String> {
    fn scan(dir: &std::path::Path, out: &mut std::collections::HashSet<String>) {
        let Ok(entries) = std::fs::read_dir(dir) else { return };
        for e in entries.flatten() {
            let p = e.path();
            if p.is_dir() {
                if p.file_name().map_or(false, |n| n != "recovered") {
                    scan(&p, out);
                }
            } else if p.extension().map_or(false, |x| x == "hpp" || x == "cpp") {
                let Ok(text) = std::fs::read_to_string(&p) else { continue };
                for line in text.lines() {
                    if let Some(rest) = line.trim_start().strip_prefix("struct ") {
                        let rest = rest.trim_start_matches("__attribute__((packed)) ");
                        let name: String = rest.chars().take_while(|c| c.is_ascii_alphanumeric() || *c == '_').collect();
                        if !name.is_empty() {
                            out.insert(name);
                        }
                    }
                }
            }
        }
    }
    let mut out = std::collections::HashSet::new();
    scan(std::path::Path::new(src), &mut out);
    out
}

pub fn classes(path: &str, taken: &std::collections::HashSet<String>) -> Vec<Class> {
    let Ok(text) = std::fs::read_to_string(path) else { return vec![] };
    let Ok(serde_json::Value::Object(map)) = serde_json::from_str::<serde_json::Value>(&text) else { return vec![] };
    let mut keys: Vec<&String> = map.keys().collect();
    keys.sort_by_key(|k| k.parse::<u64>().unwrap_or(0));
    let index: HashMap<u64, usize> = keys.iter().enumerate().filter_map(|(i, k)| Some((k.parse().ok()?, i))).collect();
    let mut used: HashMap<String, usize> = HashMap::new();
    let mut out = Vec::new();
    for k in &keys {
        let v = &map[*k];
        let raw = v["class"].as_str().unwrap_or("").to_string();
        let mut name: String = raw
            .replace("(anonymous namespace)", "anon")
            .replace("::", "__")
            .chars()
            .map(|c| if c.is_ascii_alphanumeric() || c == '_' { c } else { '_' })
            .collect();
        if taken.contains(&name) {
            name = format!("{}_rec", name);
        }
        let n = used.entry(name.clone()).or_insert(0);
        *n += 1;
        if *n > 1 {
            name = format!("{}_{}", name, n);
        }
        let mut bases: Vec<(i64, usize)> = v["bases"]
            .as_array()
            .into_iter()
            .flatten()
            .filter_map(|b| Some((b["offset"].as_i64().unwrap_or(0), *index.get(&b["typeinfo"].as_u64()?)?)))
            .collect();
        bases.sort();
        let primary = v["vtables"].as_array().into_iter().flatten().find(|t| t["offset_to_top"].as_i64() == Some(0));
        out.push(Class {
            name,
            bases: bases.into_iter().map(|(_, b)| b).collect(),
            vtable: primary.and_then(|t| t["address"].as_u64()),
            functions: primary
                .and_then(|t| t["functions"].as_array())
                .into_iter()
                .flatten()
                .filter_map(|f| f.as_u64().map(|a| a as u32 & !1))
                .collect(),
            vtables: v["vtables"]
                .as_array()
                .into_iter()
                .flatten()
                .filter_map(|t| Some((t["address"].as_u64()?, t["offset_to_top"].as_i64()?)))
                .collect(),
        });
    }
    out
}

// The ancestors of a class through the bases at offset 0 (itself first), the chain a pointer to it is also a pointer to.
fn chain(classes: &[Class], c: usize) -> Vec<usize> {
    let mut out = vec![c];
    let mut at = c;
    while let Some(&b) = classes[at].bases.first() {
        if out.contains(&b) {
            break;
        }
        out.push(b);
        at = b;
    }
    out
}

// the closest class both are (a common ancestor in the primary chain), if any
fn join(classes: &[Class], a: usize, b: usize) -> Option<usize> {
    let ca = chain(classes, a);
    chain(classes, b).into_iter().find(|x| ca.contains(x))
}

// Types arguments with the RTTI classes: a vtable's functions receive `this` of its class, a function storing a
// vtable at its argument's offset 0 builds or destroys an object of that class; an argument passed on unchanged makes
// the callee's argument at least that class (the closest common ancestor of all it receives), until nothing changes.
// A class's fields are those its typed arguments access, with its ancestors' (a pointer to a class points to its
// primary bases too); the struct of a class holds them all, at their offsets.
pub fn by_class(all: &HashMap<u32, Facts>, classes: &[Class], skip: &dyn Fn(u32, usize) -> bool) -> Recovered {
    let mut ty: HashMap<(u32, usize), usize> = HashMap::new();
    let by_vtable: HashMap<u64, usize> = classes.iter().enumerate().filter_map(|(i, c)| Some((c.vtable?, i))).collect();
    let seed = |key: (u32, usize), c: usize, ty: &mut HashMap<(u32, usize), usize>| {
        let t = match ty.get(&key) {
            Some(&old) => join(classes, old, c),
            None => Some(c),
        };
        match t {
            Some(t) => {
                ty.insert(key, t);
            }
            None => {
                ty.remove(&key);
            }
        }
    };
    for (i, c) in classes.iter().enumerate() {
        for f in &c.functions {
            seed((*f, 0), i, &mut ty);
        }
    }
    // constructors and destructors: the exact class (it stores its own vtable last, after the bases' ones)
    for (a, f) in all {
        if let Some((k, c)) = f.vptrs.iter().rev().find_map(|(k, v)| by_vtable.get(v).map(|c| (*k, *c))) {
            ty.insert((*a, k), c);
        }
    }
    let mut changed = true;
    let mut rounds = 0;
    while changed && rounds < 20 {
        changed = false;
        rounds += 1;
        for (a, f) in all {
            for (k, t, j) in &f.flows {
                let Some(&c) = ty.get(&(*a, *k)) else { continue };
                let callee = (*t, *j);
                let next = match ty.get(&callee) {
                    Some(&old) => join(classes, old, c),
                    None => Some(c),
                };
                if let Some(n) = next {
                    if ty.get(&callee) != Some(&n) {
                        ty.insert(callee, n);
                        changed = true;
                    }
                }
            }
        }
    }
    // fields per class, then with the ancestors' (conflicting sizes at one offset: the first kept)
    let mut own: Vec<BTreeMap<u64, Ty>> = vec![BTreeMap::new(); classes.len()];
    for ((a, k), c) in &ty {
        if let Some(fs) = all.get(a).and_then(|f| f.fields.get(k)) {
            for (off, t) in fs {
                let e = own[*c].entry(*off).or_insert(*t);
                *e = merged(*e, *t);
            }
        }
    }
    let mut out = Recovered { structs: BTreeMap::new(), params: BTreeMap::new() };
    let mut made: std::collections::HashSet<usize> = std::collections::HashSet::new();
    let mut keys: Vec<&(u32, usize)> = ty.keys().collect();
    keys.sort();
    for key in keys {
        if skip(key.0, key.1) {
            continue;
        }
        let c = ty[key];
        if made.insert(c) {
            let mut fields: BTreeMap<u64, Ty> = BTreeMap::new();
            for x in chain(classes, c).into_iter().rev() {
                for (off, t) in &own[x] {
                    let e = fields.entry(*off).or_insert(*t);
                    *e = merged(*e, *t);
                }
            }
            // overlapping fields: the earlier one stays
            let mut end = 0u64;
            fields.retain(|off, t| {
                let keep = *off >= end;
                if keep {
                    end = off + (t.bits() / 8) as u64;
                }
                keep
            });
            plain_types(&mut fields);
            out.structs.insert(classes[c].name.clone(), fields);
        }
        out.params.entry(key.0).or_default().insert(key.1, classes[c].name.clone());
    }
    out
}

fn find(parent: &mut [usize], x: usize) -> usize {
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

pub struct Recovered {
    pub structs: BTreeMap<String, BTreeMap<u64, Ty>>, // name -> offset -> field type
    pub params: BTreeMap<u32, BTreeMap<usize, String>>, // function -> argument -> struct
}

// Joins the arguments the facts relate; `skip` are arguments whose type is already known (the repository's).
pub fn unify(all: &HashMap<u32, Facts>, skip: &dyn Fn(u32, usize) -> bool) -> Recovered {
    let mut ids: HashMap<(u32, usize), usize> = HashMap::new();
    let mut nodes: Vec<(u32, usize)> = Vec::new();
    let id = |key: (u32, usize), ids: &mut HashMap<(u32, usize), usize>, nodes: &mut Vec<(u32, usize)>| -> usize {
        *ids.entry(key).or_insert_with(|| {
            nodes.push(key);
            nodes.len() - 1
        })
    };
    let mut addrs: Vec<&u32> = all.keys().collect();
    addrs.sort();
    for &a in &addrs {
        let f = &all[a];
        for k in f.fields.keys() {
            id((*a, *k), &mut ids, &mut nodes);
        }
        for (k, t, j) in &f.flows {
            id((*a, *k), &mut ids, &mut nodes);
            id((*t, *j), &mut ids, &mut nodes);
        }
    }
    let mut parent: Vec<usize> = (0..nodes.len()).collect();
    for &a in &addrs {
        for (k, t, j) in &all[a].flows {
            if skip(*a, *k) || skip(*t, *j) {
                continue;
            }
            let (x, y) = (find(&mut parent, ids[&(*a, *k)]), find(&mut parent, ids[&(*t, *j)]));
            if x != y {
                parent[x.max(y)] = x.min(y);
            }
        }
    }
    // the fields of each class
    let mut fields: BTreeMap<usize, BTreeMap<u64, Ty>> = BTreeMap::new();
    let mut broken: std::collections::HashSet<usize> = std::collections::HashSet::new();
    for (n, key) in nodes.iter().enumerate() {
        let Some(fs) = all.get(&key.0).and_then(|f| f.fields.get(&key.1)) else { continue };
        let root = find(&mut parent, n);
        let class = fields.entry(root).or_default();
        for (off, t) in fs {
            match class.get(off) {
                Some(old) if old.bits() != t.bits() => {
                    broken.insert(root);
                }
                Some(old) => {
                    let m = merged(*old, *t);
                    class.insert(*off, m);
                }
                None => {
                    class.insert(*off, *t);
                }
            }
        }
    }
    // overlapping fields
    for (root, class) in &fields {
        let mut end = 0u64;
        for (off, t) in class {
            if *off < end {
                broken.insert(*root);
            }
            end = off + (t.bits() / 8) as u64;
        }
    }
    let mut out = Recovered { structs: BTreeMap::new(), params: BTreeMap::new() };
    let mut names: HashMap<usize, String> = HashMap::new();
    for (n, key) in nodes.iter().enumerate() {
        if skip(key.0, key.1) {
            continue;
        }
        let root = find(&mut parent, n);
        let Some(class) = fields.get(&root) else { continue };
        if class.is_empty() || broken.contains(&root) {
            continue;
        }
        let name = names
            .entry(root)
            .or_insert_with(|| {
                let (a, k) = nodes[root];
                format!("S_{:08x}_{}", a, k)
            })
            .clone();
        out.structs.entry(name.clone()).or_insert_with(|| {
            let mut fields = class.clone();
            plain_types(&mut fields);
            fields
        });
        out.params.entry(key.0).or_default().insert(key.1, name);
    }
    out
}

fn db_type(t: Ty) -> &'static str {
    match t {
        Ty::U8 => "byte",
        Ty::S8 => "sbyte",
        Ty::U16 => "ushort",
        Ty::S16 => "short",
        Ty::U32 => "uint",
        Ty::S32 => "int",
        Ty::U64 => "ulonglong",
        Ty::S64 => "longlong",
        Ty::F32 => "float",
        Ty::F64 => "double",
        _ => "uint",
    }
}

fn field_name(t: Ty, off: u64) -> String {
    let kind = match t.bits() {
        _ if t == Ty::F32 => "float",
        8 => "byte",
        16 => "half",
        32 => "word",
        _ => "dword",
    };
    format!("{}_{:x}", kind, off)
}

// The header with the recovered structs (packed: the original's offsets, whatever their alignment).
pub fn header(r: &Recovered) -> String {
    let mut out = String::from(
        "// Structs recovered by tools/decomp (`decomp structs`, docs/decomp.md): the objects functions receive, joined across\n\
         // the calls that pass them on. Generated; the names are still to be chosen.\n#pragma once\n#include \"guest/guest.hpp\"\n\n",
    );
    for (name, fields) in &r.structs {
        out.push_str(&format!("struct {} {{\n", name));
        let mut pos = 0u64;
        for (off, t) in fields {
            if *off > pos {
                out.push_str(&format!("    u8 unknown_{:x}[0x{:x}];  // (not used yet)\n", pos, off - pos));
            }
            out.push_str(&format!("    {} {};\n", t.c_name(), field_name(*t, *off)));
            pos = off + (t.bits() / 8) as u64;
        }
        out.push_str("} __attribute__((packed));\n");
        for (off, t) in fields {
            out.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});\n", name, field_name(*t, *off), off));
        }
        out.push('\n');
    }
    out
}

// The type database entries (typedb.rs): structs and parameter types, added to `types` and `params` (JSON objects).
pub fn add_to_db(r: &Recovered, types: &mut serde_json::Value, params: &mut serde_json::Value) {
    let structs = types["structs"].as_object_mut().expect("types.json has structs");
    for (name, fields) in &r.structs {
        let size = fields.iter().map(|(o, t)| o + (t.bits() / 8) as u64).max().unwrap_or(0);
        let fs: Vec<serde_json::Value> = fields
            .iter()
            .map(|(o, t)| serde_json::json!({"name": field_name(*t, *o), "offset": o, "type": db_type(*t)}))
            .collect();
        structs.insert(name.clone(), serde_json::json!({"gname": name, "size": size, "fields": fs}));
    }
    let ps = params.as_object_mut().expect("param_types.json is an object");
    for (a, args) in &r.params {
        let entry = ps.entry(format!("{:x}", a)).or_insert_with(|| serde_json::json!({}));
        for (k, name) in args {
            entry.as_object_mut().unwrap().entry(k.to_string()).or_insert(serde_json::json!(name));
        }
    }
}
