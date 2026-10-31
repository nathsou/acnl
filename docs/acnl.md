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

## Structures known so far

`SavePlayer` (bank at 0x6b8c, an unnamed counter at 0x6b9c, pockets at 0x6bd0, wallet at 0x6f08), `Pockets` (16
items, 16 lock flags, wallet at +0x338), `Item` (id + flags; kinds by id range; 0x7FFE empty), `ItemData` (30 bytes,
category at +0xa), bell bags 0x20AC-0x2117 (100 to 99,000 bells).

ARM C++ ABI details the glue covers: references (`const Item &` arguments, `Item &` results, which is how
constructors return `this`), pointers to member functions (`guest::call_member`). Rewrites that read data the game
did not write itself (save files) must reproduce ARM's behaviour exactly: `arm::rotate_left` is RVCT's 64-bit shift as
the game uses it, valid for any amount.

## Game logic in readable form (the parts mods want)

Entry points for mods (hand-written, checked against the original by running both):

| Topic | Where | What it gives |
|---|---|---|
| Giving the player items | `save/pockets_store.cpp` | `Pockets::add`, `set_slot`, `store_item` (the paths every item reward takes); `Item::sanitize` cleans an item first |
| Money | `save/pockets.cpp` | `pay`, `add_bells`, `bells_room`, `merge_bell_bags`, `free_slots_after_paying`; wallet 99,999 max, bags of bells 100-99,000 |
| Item data | `item/*.cpp` | categories, prices, wear classes, kind-2 items, availability rules (`item_is_available`: which items a shop may offer in which month/season) |
| Choosing items | `item/item_set_filters.cpp`, `item_set_picking.cpp` | filtering an `ItemBitSet` by price or attribute, picking at random / from a seed / distinct |
| Calendar | `core/time_stamp.hpp`, `calendar_math.cpp`, `time_stamp*.cpp`, `game_clock.cpp` | `TimeStamp` (date + clock), day arithmetic, the 6:00 game-day start, seasons, the reference clock, shop opening hours and ordinance hours (`shop_hours.cpp`), `GameTime` (nanoseconds from 2012-01-01) |
| Weather | `core/weather.cpp` | the weather pattern of a game day (0-0x33: stored in the save for today and tomorrow, generated from the date for other days, or a three-day cycle in some modes), the hourly weather type of a pattern, snow and rain events and the phase (before, during, after) of today's event |
| The world map | `core/grid_map.cpp`, `map/*.cpp`, `core/block_rect.cpp` | blocks of 16x16 cells, items on the ground (`GridCellSmall::place_item`, `place_item_at_world`), terrain bytes, world position to block/cell/tile, solid objects (`item_blocks_world_position`) |
| Terrain heights | `map/terrain.cpp`, `map/world_obstacles.cpp` | `GridTile::corner_height` (the low five bits of each of the four corner halfwords, times 8), `GridCellLarge::tile_height` (the first corner's, or the highest corner's), `tile_height_at_world`, `cell_corner_with_height` (the position of a cell corner with its ground height, used all over the game), the free-tile test `tile_is_free` |
| Furniture on the map | `map/furniture_footprints.cpp` | multi-tile furniture: the first tile holds the furniture's item and the other tiles a marker item; `item_covering_tile` and `furniture_first_tile` find the furniture that covers a tile by searching the eight tiles around it with the footprint tables (4 rotations of tile offsets per furniture kind) |
| Whose place is this | `core/scene_list.cpp`, `core/mode_players.cpp` | the owner and room of a mode (a place in the game), the player a mode belongs to |
| Event schedules | `core/date_schedule.cpp` | day and time-of-day patterns of events and whether a time stamp fits them |
| What a player's object is doing | `player/slot_object*.cpp`, `core/actor_actions.cpp` | state checks of the player objects, `ActorObject::begin_action` and the action starters |
| Players / villagers | `player/*.cpp`, `npc/villager_lookup.cpp` | player of a slot, villager by id, the mayor's date |

## Next

The decompiler takes over from here (docs/decomp.md). Topics worth naming first, since their names spread:
`current_player` (0x2fb94c, 458 callers) and the global objects behind it; the money counters on the HUD (0x1ad494);
the per-player counters (0x24b448 with 0x7159b0: bells earned, items bought and so on).
