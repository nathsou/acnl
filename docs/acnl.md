# Animal Crossing: New Leaf – Welcome amiibo

USA, title 0004000000198E00. RVCT-compiled C++, ARM code (1,479 of 90,344 functions are Thumb), hard-float ABI
(confirmed: `random_below` gets a float back in `s0`). Most of the game is in CRO modules loaded at fixed slots
from 0x40000000. The recompiled C is 6 million lines; a full build takes 2 min 12 s on an M4 Pro, and adding a
rewrite recompiles only the generated files that contain the originals (seconds).

## What the binary tells us for free

- **C++ RTTI** (`tools/rtti.py`): 4,923 classes with their base classes, 5,989 vtables, 24,098 virtual functions,
  including the CRO modules. The tools name each virtual function after the class that introduces it
  (`AcNpc::virtual_4`), and functions that install a vtable as the class's constructors or destructors: 28,374
  functions (31%) get a name this way.
- **Library layout**, from the namespaces of the classes whose virtual functions live in each area of the main
  program: the game's own code is mostly in 0x100000–0x33ffff and 0x4e0000–0x82ffff, with the SDK (`nn::fs`
  0x340000, `nn::nex` 0x350000–0x3dffff, `nn::pia` 0x3e0000–0x45ffff, `nn::boss`, `nn::crypto`), NintendoWare
  (`nw::gfx`, `nw::lyt`, `nw::snd` 0x490000–0x4dffff) and `sead` (0x540000) in between, and a few SDK islands
  inside the game's ranges.
- **Constants at call sites** (`tools/fn.py --args`): the limits passed to the scrambled-amount adder (99,999 and
  999,999,999) separated the wallet's code from the bank's.
- **Field users** (`tools/offsets.py`): which functions compute a given struct offset; the pockets (player
  + 0x6bd0): code computing that offset appears in 324 functions; the wallet (+0x6f08) in 14.

## Rewritten so far (19 functions, all verified)

| Area | Functions | Source |
|---|---|---|
| Random numbers: the global LCG and `random_below` | 2 | `core/random.*` |
| Scrambled amounts (`EncryptedInt`, the save editors' "EncryptedInt32"): get, set, add with a cap, subtract | 4 | `core/encrypted_int.*` |
| Items: empty/range/number tests, index, data table entry, category, constructor, copies | 9 | `item/item.*` |
| Pockets: find an empty slot, total bells (wallet + bags), paying | 3 | `save/pockets.*` |
| The bank: deposit | 1 | `save/player.*` |

Each has 400-2,000 shadow checks in the intro (when play reaches it) and 100-400 fuzzed inputs; mutation tests
confirmed that the fuzzing covers the hard paths (corrupted rotations in `EncryptedInt::get`; the bag-melting path
of `Pockets::pay`, hit by 110 of 300 inputs).

Structures known so far: `SavePlayer` (bank at 0x6b8c, an unnamed counter at 0x6b9c, pockets at 0x6bd0, wallet at
0x6f08), `Pockets` (16 items, 16 lock flags, wallet at +0x338), `Item` (id + flags; kinds by id range; 0x7FFE
empty), `ItemData` (30 bytes, category at +0xa), bell bags 0x20AC-0x2117 (100 to 99,000 bells).

## Differences from the pilot

- The shadow checker protects the linear heap too (some objects, such as other `Random` instances, live there);
  host threads write there all the time, so a fault from another thread is handled even between runs.
- ARM C++ ABI details the glue now covers: references (`const Item &` arguments, `Item &` results, which is how
  constructors return `this`), pointers to member functions (`guest::call_member`, used by the item constructor's
  per-kind initializers).
- Rewrites that read data the game did not write itself (save files) must reproduce ARM's behaviour exactly:
  `arm::rotate_left` is RVCT's 64-bit shift as the game uses it, valid for any amount.

## Next

- The rest of the pockets and item placement (`pockets_set_slot`, `pockets_add`, `item_price`): the core of item
  mods.
- `current_player` (0x2fb94c, 458 callers) and the global objects behind it: entry points for mods.
- The money counters on the HUD (0x1ad494 switches between the wallet, wallet + bags, the 0x6b9c counter and
  the counter at 0x8d1c).
- A longer test script (reaching the town, Nook's, the post office) so that more rewrites get real-play checks,
  not only fuzzing.
