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
}

const ARGS: [&str; 4] = ["r0", "r1", "r2", "r3"];

pub fn facts(f: &Function) -> Facts {
    let f = &crate::values::arguments_in_addresses(f);
    let mut out = Facts::default();
    if crate::emit::fields(&f.body, &mut out.fields).is_err() {
        out.fields.clear();
    }
    // the arguments' copies (argN) and the registers are the same values at the entry
    let vars: std::collections::HashSet<String> = f.synced.iter().map(|(v, _)| v.clone()).filter(|v| v != "r13" && v != "r14").collect();
    let regs: Vec<&str> = ARGS.iter().copied().filter(|r| vars.contains(*r)).collect();
    let values = crate::values::split(f, &vars, &|s, _| match s {
        // a call reads r0-r3 (what it is handed is all that matters here)
        Stmt::GuestCall(..) | Stmt::Dispatch(_) => (regs.iter().map(|r| r.to_string()).collect(), vec![]),
        Stmt::Return => (vec!["r0".to_string()], vec![]),
        _ => (vec![], vec![]),
    });
    fn walk(list: &[Stmt], prefix: &[usize], values: &crate::values::Values, regs: &[&str], out: &mut Vec<(usize, u32, usize)>) {
        for (i, s) in list.iter().enumerate() {
            let p: Vec<usize> = [prefix, &[i]].concat();
            match s {
                Stmt::GuestCall(t, _) => {
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
                Some(_) => {}
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
        out.structs.entry(name.clone()).or_insert_with(|| class.clone());
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
            out.push_str(&format!("GUEST_OFFSET({}, {}, 0x{:x});  // (from the original)\n", name, field_name(*t, *off), off));
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
