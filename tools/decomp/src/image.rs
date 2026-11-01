// The program's read-only segments (code and constants: the 3DS kernel maps them without write permission), from
// tools/readonly.py (DECOMP_READONLY, default build/acnl/readonly): a word loaded from a constant address in them is
// the image's word, as the recompiler itself folds them (tools/recomp/image.py, ro_read), except the words the loader
// patches at run time (a CRO's relocations). Without the files nothing is known.
use std::collections::HashSet;

struct Image {
    segments: Vec<(u32, u32, usize)>, // address, size, offset into the data
    data: Vec<u8>,
    patched: HashSet<u32>,
}

fn image() -> &'static Image {
    static IMAGE: std::sync::OnceLock<Image> = std::sync::OnceLock::new();
    IMAGE.get_or_init(|| {
        let base = std::env::var("DECOMP_READONLY").unwrap_or("build/acnl/readonly".into());
        let data = std::fs::read(format!("{}.bin", base)).unwrap_or_default();
        let (mut segments, mut patched) = (Vec::new(), HashSet::new());
        for line in std::fs::read_to_string(format!("{}.txt", base)).unwrap_or_default().lines() {
            let w: Vec<&str> = line.split_whitespace().collect();
            let hex = |s: &str| u32::from_str_radix(s, 16).ok();
            match w.as_slice() {
                ["volatile", a] => patched.extend(hex(a)),
                [a, n, o] => {
                    if let (Some(a), Some(n), Some(o)) = (hex(a), hex(n), hex(o)) {
                        if o as usize + n as usize <= data.len() {
                            segments.push((a, n, o as usize));
                        }
                    }
                }
                _ => {}
            }
        }
        Image { segments, data, patched }
    })
}

// the word at `address` (aligned) when it is read-only and not patched at run time
pub fn word(address: u32) -> Option<u32> {
    let im = image();
    if address & 3 != 0 || im.patched.contains(&address) {
        return None;
    }
    let (a, _, o) = im.segments.iter().find(|(a, n, _)| address >= *a && address - *a + 4 <= *n)?;
    let at = o + (address - a) as usize;
    Some(u32::from_le_bytes(im.data[at..at + 4].try_into().ok()?))
}
