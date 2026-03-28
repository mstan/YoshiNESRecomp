# Yoshi NES Recompilation — Handoff Prompt

Copy everything below this line into a new Claude Code session opened in
`F:\Projects\nesrecomp-release\YoshiNESRecomp`:

---

## Context

You are working on a **static NES recompilation** of Yoshi. The project
translates 6502 machine code → C → native x64. It is NOT an emulator.

The project is set up and builds successfully. The Ghidra MCP server is running
on port 4998. Before doing anything, verify Ghidra is live:

```
Call mcp__ghidra_yoshi__get_program_info
```

If it doesn't respond, STOP. Ghidra must be running.

## ROM Details

- **Mapper 1 (MMC1)**, 8 PRG banks (128KB), 16 CHR ROM banks (128KB)
- Vectors: NMI=$E122, RESET=$FFDA, IRQ=$E1ED
- CRC32 (data): 0x9474C09C
- Bank 7 is the fixed bank ($C000-$FFFF), banks 0-6 are switchable ($8000-$BFFF)
- CHR ROM banking is active — MMC1 chr0/chr1 registers switch tile graphics

## What's Working

- CHR ROM bank switching (16 banks, applied at runtime via mapper_init_chr)
- Title screen partially renders — "YOSHI" logo, copyright text, Yoshi character
- Game loop runs at 60fps, frames advance normally
- The recompiler finds 2833 functions

## Current Problem

The title screen **only renders the top half**. The bottom half is blank/wrong,
the background behind the YOSHI logo is the wrong color (olive instead of blue),
and there are 3 stray green sprite artifacts. The game appears frozen (no animation)
but frames ARE advancing at 60fps.

**Root cause: the recompiler's pointer scanner is misidentifying data bytes as
code addresses.** This causes the game to dispatch to garbage addresses like
`$11E7` (which is in RAM, not ROM). When these bad dispatches happen, game state
gets corrupted and rendering setup doesn't complete.

This is the same problem Dr. Mario had — it was fixed by adding `data_region`
directives to the config to exclude data tables from the pointer scan.

## The Fix

Use Ghidra to identify data regions in each bank (especially bank 7 and bank 1)
and add `[[data_region]]` entries to `game.toml`. The format is:

```toml
[[data_region]]
bank = 7        # or 0-6 for switchable banks, 7 for fixed
start = 0xC100  # start address (inclusive)
end = 0xC200    # end address (exclusive)
```

### How to identify data regions in Ghidra:

1. Look at the fixed bank (bank07.bin loaded at $C000)
2. After auto-analysis, scroll through the listing view
3. Data regions show up as:
   - Undefined bytes (not disassembled as instructions)
   - Tables of `.word` or `.byte` values
   - Areas between functions that don't contain valid 6502 instructions
   - Jump/dispatch tables (arrays of 16-bit addresses)
4. Use `D` to try disassembling ambiguous regions — if the instructions
   make no sense, it's data
5. Note the start and end addresses of each data region

### Priority areas to investigate:

- **Bank 7 (fixed, $C000-$FFFF)**: Contains NMI, RESET, IRQ, and all
  inter-bank dispatch. Most pointer scan false positives come from here.
  Key addresses:
  - $CF25 — MMC1 Control register write
  - $CF3B — CHR Bank 0 write
  - $CF51 — CHR Bank 1 write
  - $CF65/$CF69 — PRG bank switch entries
  - $CF6B — PRG serial write (STA $F000)

- **Bank 1 ($8000-$BFFF)**: The dispatch miss `$11E7` came from bank 1.
  This bank likely has data tables that the scanner picked up as addresses.

## The Loop

```
1. GHIDRA: Examine a bank, identify data regions
2. UPDATE game.toml: Add [[data_region]] entries
3. REGENERATE: F:/Projects/nesrecomp/build/recompiler/Release/NESRecomp.exe "Yoshi # NES.NES" --game game.toml
4. REBUILD: "C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release
5. TEST: Run build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --debug
6. CHECK: Look at C:/temp/nes_shot_XXXX.png and dispatch_misses.log
7. REPEAT until title screen renders correctly
```

## Key Rules

- **RULE 1: Fix the tool, never the output.** generated/*.c files are build
  artifacts. Never read them whole, never edit them. Fix code_generator.c,
  function_finder.c, runtime.c, or game.toml instead.
- **RULE 2: Check PATTERNS.md** before implementing any new dispatch pattern.
  Read nesrecomp/PATTERNS.md first.
- **No fprintf debug logging.** Use the TCP debug server if you need runtime
  inspection (port 4370 when debug.ini exists next to the exe).

## File Locations

| File | Purpose |
|------|---------|
| `game.toml` | Recompiler config — add data_region, extra funcs, dispatch here |
| `extras.c` | Game-specific hooks (CRC32, name, init) |
| `nesrecomp/recompiler/src/code_generator.c` | 6502→C emitter |
| `nesrecomp/recompiler/src/function_finder.c` | Function discovery / pointer scan |
| `nesrecomp/runner/src/runtime.c` | NES memory map, PPU register stubs |
| `nesrecomp/runner/src/ppu_renderer.c` | Tile/sprite rendering |
| `nesrecomp/runner/src/mapper.c` | MMC1/MMC3 bank switching + CHR banking |
| `nesrecomp/PATTERNS.md` | 6502 dispatch idiom catalog |

## Current game.toml

```toml
[game]
name = "Yoshi"
output_prefix = "yoshi"

[functions]
fixed = [0xF781, 0xF831, 0xFF25]
bank1 = [0xA2D6, 0xA28E, 0xA284, 0xA2E2, 0xA340]
```

## Bank Files for Ghidra

Pre-extracted in `banks/` directory:
- `bank07.bin` → import at base address $C000 (fixed bank, DO THIS FIRST)
- `bank00.bin` through `bank06.bin` → import at base address $8000
- Language: 6502:LE:16:default, Format: Raw Binary

## Immediate Next Steps

1. In Ghidra, examine bank07.bin ($C000-$FFFF). Run auto-analysis.
2. Identify all data regions — look for undefined bytes, address tables,
   tile data, string tables between functions.
3. Add `[[data_region]]` entries to game.toml for each region found.
4. Regenerate, rebuild, test. Check if dispatch misses decrease.
5. If misses remain, import the offending switchable bank and repeat.
6. Goal: zero dispatch misses AND a fully rendered title screen.

---
