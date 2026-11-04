// Functions decompiled by tools/decomp (docs/decomp.md), each proved equal to the recompiled original (prove-cpp). The
// names come from games/acnl/names (tools/decomp/names.py); the others are generated (d_<address>::f_<address>,
// Object_<address>_<argument>, word_<offset>) and still to be chosen. Hexadecimal constants are the original's
// (addresses, offsets, sizes and ids as the game has them).
#include "guest/guest.hpp"

#include <bit>

using guest::gptr;

// f_007f6f40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f6f40 {

inline constexpr guest::Function<0x007f6f40, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f6f40;

void NexTree__recycle_nodes_7f6f40(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f6f40(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f6f40
GUEST_EXPORT_FRAMED(0x007f6f40, d_007f6f40::NexTree__recycle_nodes_7f6f40, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f7aec: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f7aec {

inline constexpr guest::Function<0x007f7aec, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f7aec;

void NexTree__recycle_nodes_7f7aec(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f7aec(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f7aec
GUEST_EXPORT_FRAMED(0x007f7aec, d_007f7aec::NexTree__recycle_nodes_7f7aec, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f82c4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f82c4 {

inline constexpr guest::Function<0x007f82c4, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f82c4;

void NexTree__recycle_nodes_7f82c4(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f82c4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f82c4
GUEST_EXPORT_FRAMED(0x007f82c4, d_007f82c4::NexTree__recycle_nodes_7f82c4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f8960: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f8960 {

inline constexpr guest::Function<0x007f8960, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f8960;

void NexTree__recycle_nodes_7f8960(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f8960(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f8960
GUEST_EXPORT_FRAMED(0x007f8960, d_007f8960::NexTree__recycle_nodes_7f8960, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f94f4: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f94f4 {

inline constexpr guest::Function<0x007f94f4, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f94f4;

void NexTree__recycle_nodes_7f94f4(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f94f4(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f94f4
GUEST_EXPORT_FRAMED(0x007f94f4, d_007f94f4::NexTree__recycle_nodes_7f94f4, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007f9f44: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007f9f44 {

inline constexpr guest::Function<0x007f9f44, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7f9f44;

void NexTree__recycle_nodes_7f9f44(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7f9f44(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007f9f44
GUEST_EXPORT_FRAMED(0x007f9f44, d_007f9f44::NexTree__recycle_nodes_7f9f44, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007faacc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007faacc {

inline constexpr guest::Function<0x007faacc, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7faacc;

void NexTree__recycle_nodes_7faacc(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7faacc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007faacc
GUEST_EXPORT_FRAMED(0x007faacc, d_007faacc::NexTree__recycle_nodes_7faacc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007fb4fc: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007fb4fc {

inline constexpr guest::Function<0x007fb4fc, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7fb4fc;

void NexTree__recycle_nodes_7fb4fc(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7fb4fc(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007fb4fc
GUEST_EXPORT_FRAMED(0x007fb4fc, d_007fb4fc::NexTree__recycle_nodes_7fb4fc, 0x4030);  // pushes {r4, r5, lr} first, as the original

// f_007fc258: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes into the pool's free list, destroying its string key and its value.
namespace d_007fc258 {

inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x003d32f0, u32(u32)> NexVariant__destroy;
inline constexpr guest::Function<0x007fc258, u32(u32, u32, u32, u32)> call_NexTree__recycle_string_nodes_7fc258;

void NexTree__recycle_string_nodes_7fc258(u32 nex_tree, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_string_nodes_7fc258(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);
        NexVariant__destroy(r7_1 + 8u);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fc258
GUEST_EXPORT_FRAMED(0x007fc258, d_007fc258::NexTree__recycle_string_nodes_7fc258, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fcd40: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes into the pool's free list, destroying its string key and its value.
namespace d_007fcd40 {

inline constexpr guest::Function<0x00361988, u32(u32, u32)> nex_free;
inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fcd40, u32(u32, u32, u32, u32)> call_NexTree__recycle_string_nodes_7fcd40;

void NexTree__recycle_string_nodes_7fcd40(u32 nex_tree, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_string_nodes_7fcd40(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;
        nex_free(*gptr<u32>(r7_1 + 8u), r1_2);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fcd40
GUEST_EXPORT_FRAMED(0x007fcd40, d_007fcd40::NexTree__recycle_string_nodes_7fcd40, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fd790: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes into the pool's free list, destroying its string key.
namespace d_007fd790 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fd790, u32(u32, u32, u32, u32)> call_NexTree__recycle_string_nodes_7fd790;

void NexTree__recycle_string_nodes_7fd790(u32 nex_tree, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_string_nodes_7fd790(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;
        nn__nex__String__virtual_0(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fd790
GUEST_EXPORT_FRAMED(0x007fd790, d_007fd790::NexTree__recycle_string_nodes_7fd790, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007fe0ac: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes into the pool's free list, destroying its two strings.
namespace d_007fe0ac {

inline constexpr guest::Function<0x003d0d6c, u32(u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fe0ac, u32(u32, u32, u32, u32)> call_NexTree__recycle_string_nodes_7fe0ac;

void NexTree__recycle_string_nodes_7fe0ac(u32 nex_tree, u32 r1) {
    if (r1 == 0) {
        guest::cpu()->r[1] = r1;
        return;
    }
    u32 r6 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_string_nodes_7fe0ac(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r5_1 = r4;
        u32 r7_1 = r4 + 0x10u;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = *gptr<u32>(r6 + 4u);
        nn__nex__String__virtual_0(r7_1 + 8u);
        nn__nex__String__virtual_0(r7_1);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fe0ac
GUEST_EXPORT_FRAMED(0x007fe0ac, d_007fe0ac::NexTree__recycle_string_nodes_7fe0ac, 0x41f0);  // pushes {r4, r5, r6, r7, r8, lr} first, as the original

// f_007fed54: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes into the pool's free list, destroying its string key.
namespace d_007fed54 {

inline constexpr guest::Function<0x003d0d6c, u32(u32, u32)> nn__nex__String__virtual_0;
inline constexpr guest::Function<0x007fed54, u32(u32, u32, u32, u32)> call_NexTree__recycle_string_nodes_7fed54;

void NexTree__recycle_string_nodes_7fed54(u32 nex_tree, u32 r1) {
    if (r1 == 0) {
        return;
    }
    u32 r6 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_string_nodes_7fed54(r6, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        u32 r1_2 = *gptr<u32>(r6 + 4u);
        u32 r5_1 = r4;
        u32 r0_1 = r4 + 0x10u;
        r4 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r5_1 + 0xcu) = r1_2;
        nn__nex__String__virtual_0(r0_1, r1_2);
        *gptr<u32>(r6 + 4u) = r5_1;
        guest::preempt();
    } while (r4 != 0);
}

}  // namespace d_007fed54
GUEST_EXPORT_FRAMED(0x007fed54, d_007fed54::NexTree__recycle_string_nodes_7fed54, 0x4070);  // pushes {r4, r5, r6, lr} first, as the original

// f_007ff900: decompiled by tools/decomp, proved equal to the recompiled code (names to choose).
// Recycles the tree's nodes (recursively, by the left links) into the pool's free list.
namespace d_007ff900 {

inline constexpr guest::Function<0x007ff900, u32(u32, u32, u32, u32)> call_NexTree__recycle_nodes_7ff900;

void NexTree__recycle_nodes_7ff900(u32 nex_tree, u32 r1) {
    u32 r0_1 = 0;
    if (r1 == 0) {
        return;
    }
    u32 r5 = nex_tree;
    u32 r4 = r1;
    do {
        call_NexTree__recycle_nodes_7ff900(r5, *gptr<u32>(r4 + 0xcu), guest::cpu()->r[2], guest::cpu()->r[3]);
        r0_1 = *gptr<u32>(r4 + 8u);
        *gptr<u32>(r4 + 0xcu) = *gptr<u32>(r5 + 4u);
        *gptr<u32>(r5 + 4u) = r4;
        r4 = r0_1;
        guest::preempt();
    } while (r0_1 != 0);
}

}  // namespace d_007ff900
GUEST_EXPORT_FRAMED(0x007ff900, d_007ff900::NexTree__recycle_nodes_7ff900, 0x4030);  // pushes {r4, r5, lr} first, as the original
