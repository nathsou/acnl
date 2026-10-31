// The C subset of the recompiler's output, which is also the language the decompiled functions are built in: one
// interpreter (sym.rs) gives both their meaning, so the proof compares like with like.

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub enum Ty {
    U8,
    U16,
    U32,
    U64,
    S8,
    S16,
    S32,
    S64,
    F32,
    F64,
    Bool,
}

impl Ty {
    pub fn bits(self) -> u32 {
        match self {
            Ty::U8 | Ty::S8 => 8,
            Ty::U16 | Ty::S16 => 16,
            Ty::U32 | Ty::S32 | Ty::F32 => 32,
            Ty::U64 | Ty::S64 | Ty::F64 => 64,
            Ty::Bool => 1,
        }
    }
    pub fn signed(self) -> bool {
        matches!(self, Ty::S8 | Ty::S16 | Ty::S32 | Ty::S64)
    }
    pub fn float(self) -> bool {
        matches!(self, Ty::F32 | Ty::F64)
    }
    pub fn from_name(name: &str) -> Option<Ty> {
        Some(match name {
            "u8" | "uint8_t" => Ty::U8,
            "u16" | "uint16_t" | "u16_u" => Ty::U16,
            "u32" | "uint32_t" | "u32_u" | "unsigned" => Ty::U32,
            "u64" | "uint64_t" | "u64_u" => Ty::U64,
            "s8" | "int8_t" => Ty::S8,
            "s16" | "int16_t" => Ty::S16,
            "s32" | "int32_t" | "int" => Ty::S32,
            "s64" | "int64_t" => Ty::S64,
            "float" => Ty::F32,
            "double" => Ty::F64,
            "bool" => Ty::Bool,
            _ => return None,
        })
    }
    pub fn c_name(self) -> &'static str {
        match self {
            Ty::U8 => "u8",
            Ty::U16 => "u16",
            Ty::U32 => "u32",
            Ty::U64 => "u64",
            Ty::S8 => "s8",
            Ty::S16 => "s16",
            Ty::S32 => "s32",
            Ty::S64 => "s64",
            Ty::F32 => "float",
            Ty::F64 => "double",
            Ty::Bool => "bool",
        }
    }
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub enum BinOp {
    Add,
    Sub,
    Mul,
    Div,
    Rem,
    And,
    Or,
    Xor,
    Shl,
    Shr,
    Eq,
    Ne,
    Lt,
    Le,
    Gt,
    Ge,
    LAnd,
    LOr,
}

#[derive(Clone, Copy, Debug, PartialEq, Eq, Hash)]
pub enum UnOp {
    Neg,
    Not,  // ~
    LNot, // !
}

// A CPU field the generated code reads or writes directly (c->r[N], c->s[N], c->pc ...).
#[derive(Clone, Debug, PartialEq, Eq, Hash)]
pub enum CpuField {
    R(u32),
    S(u32),
    Flag(String), // nf zf cf vf qf ge
    Fpscr,
    Tls,
    Pc,
}

#[derive(Clone, Debug, PartialEq)]
pub enum Expr {
    Num(u64, Ty),
    Float(f64, Ty),
    Var(String),
    Cpu(CpuField),
    Un(UnOp, Box<Expr>),
    Bin(BinOp, Box<Expr>, Box<Expr>),
    Cast(Ty, Box<Expr>),
    Cond(Box<Expr>, Box<Expr>, Box<Expr>),
    // RD8/RD16/RD32/RD64 and the decompiler's typed loads
    Load(Ty, Box<Expr>),
    // helper functions of the runtime (ror32, sxth, vfp_cmpf, U2F ...)
    Call(String, Vec<Expr>),
    // &var (only for the helpers that return a second value through a pointer, like lsl_rc's carry)
    AddrOf(String),
}

#[derive(Clone, Debug, PartialEq)]
pub enum Stmt {
    Decl(Ty, String, Option<Expr>),
    Assign(String, Expr),
    SetCpu(CpuField, Expr),
    Store(Ty, Expr, Expr), // WR8/16/32/64 (address, value)
    If(Expr, Vec<Stmt>, Vec<Stmt>),
    Goto(String),
    Label(String),
    // SO() / SI(): the function's register copies are written to / read from the CPU
    SyncOut,
    SyncIn,
    // a call of guest code: f_XXXXXXXX(c, entry) (target, tail call)
    GuestCall(u32, bool),
    // rt_dispatch(c, 0): a call through c->pc (tail: return rt_dispatch(c, 0))
    Dispatch(bool),
    // switch (e) { case K: goto L; ... default: break; } (computed jumps inside the function)
    Switch(Expr, Vec<(u64, String)>),
    // rt_svc(c, n)
    Svc(u32),
    // rt_preempt(c): lets other guest threads run
    Preempt,
    // `if (c->pc != expected) return;` after a call: the callee did not come back normally
    ReturnUnlessPc(Expr),
    Return,
    // a loop the structuring found; it stands for exactly these labels and jumps:
    //   test None:     top: body; check; if (cond) goto top;                 (do { } while)
    //   test Some(t):  goto t; top: body; t: check; if (cond) goto top;     (while / for (;;))
    While { top: String, test: Option<String>, body: Vec<Stmt>, check: Vec<Stmt>, cond: Expr },
    Nop,
    // anything the parser does not model yet (the function is then left alone)
    Unsupported(String),
}

#[derive(Clone, Debug)]
pub struct Function {
    pub address: u32,
    pub thumb: bool,
    pub name: String,
    // the registers and fields the function keeps in locals (from its SO() macro)
    pub synced: Vec<(String, CpuField)>,
    pub locals: Vec<(Ty, String, Option<Expr>)>,
    pub entries: Vec<(u32, String)>, // switch (entry): case -> label
    pub body: Vec<Stmt>,
}
