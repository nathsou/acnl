// Struct layouts and parameter types (exported from the repository's headers and Ghidra's type propagation, see
// docs/decomp.md), to name the fields of the objects a function receives.
use serde_json::Value;
use std::collections::HashMap;

pub struct TypeDb {
    structs: HashMap<String, Value>,   // C++ name -> {"gname", "size", "fields": [{"name", "offset", "type"}]}
    by_gname: HashMap<String, String>, // Ghidra name -> C++ name
    params: HashMap<u32, HashMap<usize, String>>, // function -> argument index -> Ghidra struct name
    names: HashMap<u32, String>,                  // function -> its name (rewrites and known symbols)
    arity: HashMap<u32, usize>,                   // rewritten function -> number of core-register arguments
    globals: HashMap<u32, String>,                // address -> name of the repository's guest::global<T, A> name
    headers: HashMap<String, String>,             // struct -> the header that defines it (path under games/acnl/src)
}

// "struct Name {" in the repository's headers
fn scan_headers(dir: &std::path::Path, root: &std::path::Path, out: &mut HashMap<String, String>) {
    let Ok(entries) = std::fs::read_dir(dir) else { return };
    for e in entries.flatten() {
        let p = e.path();
        if p.is_dir() {
            scan_headers(&p, root, out);
        } else if p.extension().map_or(false, |x| x == "hpp") {
            let Ok(text) = std::fs::read_to_string(&p) else { continue };
            let rel = p.strip_prefix(root).unwrap_or(&p).to_string_lossy().to_string();
            for line in text.lines() {
                if let Some(rest) = line.strip_prefix("struct ") {
                    let name: String = rest.chars().take_while(|c| c.is_ascii_alphanumeric() || *c == '_').collect();
                    if !name.is_empty() && rest[name.len()..].trim_start().starts_with(['{', ':']) {
                        out.entry(name).or_insert(rel.clone());
                    }
                }
            }
        }
    }
}

// "guest::global<T, 0xADDR> name" declarations of the rewrites
fn scan_globals(dir: &std::path::Path, out: &mut HashMap<u32, String>) {
    let Ok(entries) = std::fs::read_dir(dir) else { return };
    for e in entries.flatten() {
        let p = e.path();
        if p.is_dir() {
            scan_globals(&p, out);
        } else if p.extension().map_or(false, |x| x == "cpp" || x == "hpp") {
            let Ok(text) = std::fs::read_to_string(&p) else { continue };
            for line in text.lines() {
                let Some(at) = line.find("guest::global<") else { continue };
                let rest = &line[at..];
                let Some(hex) = rest.find(", 0x") else { continue };
                let digits: String = rest[hex + 4..].chars().take_while(|c| c.is_ascii_hexdigit()).collect();
                let after = &rest[hex + 4 + digits.len()..];
                let Some(name) = after.strip_prefix("> ") else { continue };
                let name: String = name.chars().take_while(|c| c.is_ascii_alphanumeric() || *c == '_').collect();
                if let (Ok(a), false) = (u32::from_str_radix(&digits, 16), name.is_empty()) {
                    out.insert(a, name);
                }
            }
        }
    }
}

fn base_size(t: &str) -> Option<u64> {
    Some(match t {
        "byte" | "sbyte" | "char" | "bool" => 1,
        "ushort" | "short" => 2,
        "uint" | "int" | "float" => 4,
        "ulonglong" | "longlong" | "double" => 8,
        _ => return None,
    })
}

impl TypeDb {
    pub fn load(dir: &str) -> Option<TypeDb> {
        let types: Value = serde_json::from_str(&std::fs::read_to_string(format!("{}/types.json", dir)).ok()?).ok()?;
        let params: Value = serde_json::from_str(&std::fs::read_to_string(format!("{}/param_types.json", dir)).ok()?).ok()?;
        let structs: HashMap<String, Value> = types["structs"].as_object()?.iter().map(|(k, v)| (k.clone(), v.clone())).collect();
        let by_gname = structs.iter().map(|(k, v)| (v["gname"].as_str().unwrap_or("").to_string(), k.clone())).collect();
        let mut p = HashMap::new();
        for (a, m) in params.as_object()? {
            let addr = u32::from_str_radix(a, 16).ok()?;
            let mut args = HashMap::new();
            for (i, t) in m.as_object()? {
                args.insert(i.parse().ok()?, t.as_str()?.to_string());
            }
            p.insert(addr, args);
        }
        let mut names = HashMap::new();
        if let Ok(text) = std::fs::read_to_string(format!("{}/names.txt", dir)) {
            for line in text.lines() {
                let parts: Vec<&str> = line.split_whitespace().collect();
                if parts.len() == 3 && !parts[2].starts_with("f_") && !parts[2].starts_with("t_") {
                    if let Ok(a) = u32::from_str_radix(parts[0], 16) {
                        names.insert(a, parts[2].replace(':', "_"));
                    }
                }
            }
        }
        let mut arity = HashMap::new();
        if let Ok(text) = std::fs::read_to_string(format!("{}/sigs.json", dir)) {
            if let Ok(v) = serde_json::from_str::<Value>(&text) {
                for (a, sig) in v.as_object().into_iter().flatten() {
                    if let (Ok(addr), Some(ps)) = (u32::from_str_radix(a, 16), sig.get("params").and_then(|p| p.as_array())) {
                        let core = ps.iter().filter(|t| !matches!(t.as_str(), Some("float") | Some("double"))).count();
                        arity.insert(addr & !1, core.min(4));
                    }
                }
            }
        }
        let mut globals = HashMap::new();
        scan_globals(std::path::Path::new("games/acnl/src"), &mut globals);
        let mut headers = HashMap::new();
        let root = std::path::Path::new("games/acnl/src");
        scan_headers(root, root, &mut headers);
        Some(TypeDb { structs, by_gname, params: p, names, arity, globals, headers })
    }

    pub fn header(&self, name: &str) -> Option<&String> {
        self.headers.get(name)
    }

    pub fn global(&self, addr: u32) -> Option<&String> {
        self.globals.get(&addr)
    }

    pub fn name(&self, addr: u32) -> Option<&String> {
        self.names.get(&(addr & !1))
    }

    pub fn arity(&self, addr: u32) -> Option<usize> {
        self.arity.get(&(addr & !1)).copied()
    }

    // the C++ struct of argument `index` of the function, if known
    pub fn param(&self, addr: u32, index: usize) -> Option<String> {
        let g = self.params.get(&(addr & !1))?.get(&index)?;
        self.by_gname.get(g).cloned()
    }

    fn size(&self, t: &Value) -> Option<u64> {
        if let Some(s) = t.as_str() {
            return base_size(s);
        }
        if t.get("ptr").is_some() {
            return Some(4);
        }
        if let Some(s) = t.get("struct").and_then(|v| v.as_str()) {
            return self.structs.get(s)?.get("size")?.as_u64();
        }
        if let Some(e) = t.get("array") {
            return Some(self.size(e)? * t.get("n")?.as_u64()?);
        }
        None
    }

    // the base type of the field `field_path` finds ("float", "byte", ...)
    pub fn field_base(&self, name: &str, offset: u64, bytes: u64) -> Option<String> {
        let s = self.structs.get(name)?;
        for f in s.get("fields")?.as_array()? {
            let (fo, ft) = (f.get("offset")?.as_u64()?, f.get("type")?);
            let fsize = self.size(ft)?;
            if offset < fo || offset + bytes > fo + fsize {
                continue;
            }
            return self.base_within(ft, offset - fo, bytes);
        }
        None
    }

    fn base_within(&self, t: &Value, offset: u64, bytes: u64) -> Option<String> {
        if let Some(b) = t.as_str() {
            return if offset == 0 && base_size(b)? == bytes { Some(b.to_string()) } else { None };
        }
        if t.get("ptr").is_some() {
            return if offset == 0 && bytes == 4 { Some("ptr".into()) } else { None };
        }
        if let Some(sn) = t.get("struct").and_then(|v| v.as_str()) {
            return self.field_base(sn, offset, bytes);
        }
        if let Some(e) = t.get("array") {
            let es = self.size(e)?;
            return self.base_within(e, offset % es, bytes);
        }
        None
    }

    // ".position.v[1]" for an access of `bytes` at `offset` into struct `name` (None: no field there)
    pub fn field_path(&self, name: &str, offset: u64, bytes: u64) -> Option<String> {
        let s = self.structs.get(name)?;
        for f in s.get("fields")?.as_array()? {
            let (fo, ft) = (f.get("offset")?.as_u64()?, f.get("type")?);
            let fsize = self.size(ft)?;
            if offset < fo || offset + bytes > fo + fsize {
                continue;
            }
            let fname = f.get("name")?.as_str()?;
            return self.within(ft, offset - fo, bytes).map(|rest| format!("{}{}", fname, rest));
        }
        None
    }

    fn within(&self, t: &Value, offset: u64, bytes: u64) -> Option<String> {
        if let Some(b) = t.as_str() {
            return if offset == 0 && base_size(b)? == bytes { Some(String::new()) } else { None };
        }
        if t.get("ptr").is_some() {
            return if offset == 0 && bytes == 4 { Some(String::new()) } else { None };
        }
        if let Some(sn) = t.get("struct").and_then(|v| v.as_str()) {
            return self.field_path(sn, offset, bytes).map(|p| format!(".{}", p));
        }
        if let Some(e) = t.get("array") {
            let es = self.size(e)?;
            let i = offset / es;
            return self.within(e, offset % es, bytes).map(|rest| format!("[{}]{}", i, rest));
        }
        None
    }
}
