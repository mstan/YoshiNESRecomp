# Yoshi NES Recompilation — Claude Rules & Protocol

This project is a **static NES recompilation** of Yoshi (NES). It is NOT
an emulator. We translate 6502 → C → native x64 and verify byte-level
equivalence against an emulator oracle (Nestopia, embedded).

**Read `F:\Projects\PRINCIPLES.md` first.** Those global principles override
anything in this file. This file specializes them for Yoshi.

---

## What we're building

- **nesrecomp** (`nesrecomp/` here, mirrored from `F:/Projects/nesrecomp/`)
  is the recompiler + runner. It is **incomplete** — new games expose new
  6502 idioms and PPU/APU behaviors that have to be added to the tool, not
  worked around in generated output.
- **This repo** holds Yoshi-specific config (`game.cfg`), game hooks
  (`extras.c`), the verify-mode oracle bridge (`verify_mode.c`,
  `nestopia_bridge.cpp`), build files, and the generated artifacts under
  `generated/`.
- When something is wrong, the fix belongs in **the recompiler, the runner,
  or `game.cfg`** — never in `generated/*.c`.

Per-function `extra_func` entries in `game.cfg` are tolerated but always
worse than a generic fix in the function finder. If you reach for one, ask
first what class of reachability discovery missed.

---

# HARD RULES (NON-NEGOTIABLE)

If any rule is violated the response is INVALID — STOP and restart.

## 1. NO GUESSING
No "likely", "probably", "this might be". Every claim is backed by measured
data from the TCP server, the oracle, or Ghidra.

## 2. NO STDOUT/STDERR DEBUGGING
`fprintf` / `printf` debug logging is forbidden. All debugging goes through
the TCP ring buffer (see `TCP.md`). stderr is unreliable on Windows anyway —
buffering can drop output at exit.

## 3. ALWAYS USE ORACLE COMPARISON
Native vs Nestopia must be compared. If you cannot point at a diff, you
have not debugged anything.

## 4. FIX ROOT CAUSE ONLY
No symptom patches. No clamps. No "force this counter so it works."

## 5. DO NOT TRUST THE SYSTEM
Both the recompiler and the runner may be wrong. Verify, don't assume.

## 6. FIX THE TOOL, NOT THE OUTPUT
**Never edit `generated/yoshi_full.c` or `generated/yoshi_dispatch.c`.**
They are build artifacts. Fix one of:
- `nesrecomp/recompiler/src/code_generator.c`
- `nesrecomp/recompiler/src/function_finder.c`
- `nesrecomp/runner/src/runtime.c` / `ppu_renderer.c` / `mapper.c`
- `game.cfg`

## 7. NO STUBS — EVER
See `PRINCIPLES.md` §20. Missing functions get **decoded**, not stubbed.

---

# REQUIRED DEBUGGING PROTOCOL

Every debugging session follows this exact sequence:

1. **SYNC STATE** — find a comparable state between native and Nestopia
   using PPU regs / scroll / palette / RAM markers. Frame number alone
   does not count.
2. **DUMP STATE (BOTH SIDES)** — CPU regs, full CPU RAM, PPUCTRL/MASK/STATUS,
   OAM, scroll/addr latches, nametables, attributes, CHR, palette, mapper
   bank state, frame number. All of it. Partial dumps are invalid.
3. **DIFF** — produce a byte-level diff in this format:
   ```
   Frame:    <synced>
   Location: 0xXXXX
   Expected: 0xYY
   Actual:   0xZZ
   ```
4. **FIRST DIVERGENCE** — identify the FIRST frame where the diff appears.
   Not a downstream symptom.
5. **TRACE THE WRITER** — function, instruction, address written, full call
   path. If you cannot identify the writer, STOP.
6. **CLASSIFY** — codegen / runner / timing / config. Pick exactly one.
7. **FIX** — minimal change to the chosen layer. Never the generated output.

Every response that proposes a fix must include all seven sections. Missing
any one → STOP and restart.

---

# TCP DEBUGGING

The TCP ring buffer is the only sanctioned debugging interface. See
`TCP.md` for the wire protocol, command list, and ports.

Two servers, both listening on 127.0.0.1:
- **Native recomp**: port **4380**
- **Nestopia oracle**: port **4381** (when run with `--emulated` or `--verify`)

If a query you need does not exist, **build it** in
`nesrecomp/runner/src/debug_server.c` (and the oracle counterpart). Do not
fall back to logging.

---

# GHIDRA REQUIREMENT

Before investigating any unknown 6502 address:
1. Confirm the Ghidra MCP is running.
2. Use it to understand 6502 behavior — never guess.

Bank files for Ghidra import live under `banks/` (when present). Bank 7
($C000–$FFFF) is fixed; banks 0–6 are switchable into $8000–$BFFF.

---

# PROCESS RULES

- **Kill all game instances before launching new ones.** No orphans.
- **No indiscriminate screenshots.** Script-triggered, targeted screenshots
  for oracle comparison are encouraged. Auto-snapping every N frames is not.
- **TCP commands are line-based JSON or text** depending on the server
  build — see `TCP.md`. Use the JSON form when in doubt.
- **stderr is unreliable on Windows.** Use TCP, not `fprintf(stderr,...)`.

---

# Yoshi Specifics

## ROM
- **Mapper 1 (MMC1)**, 8 PRG banks (128 KB), 16 CHR ROM banks (128 KB)
- Vectors: NMI=$E122, RESET=$FFDA, IRQ=$E1ED
- CRC32 (data): 0x9474C09C
- Bank 7 fixed at $C000–$FFFF; banks 0–6 switch into $8000–$BFFF
- CHR ROM banking via MMC1 chr0/chr1

## Build sequence
```
# 1. (only if recompiler source changed)
"C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build F:/Projects/nesrecomp/build/recompiler --config Release

# 2. Regenerate Yoshi C
F:/Projects/nesrecomp/build/recompiler/Release/NESRecomp.exe "Yoshi # NES.NES" --game game.cfg

# 3. Build the game
"C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release

# 4. Run
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES"
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --verify    # native + oracle
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --emulated  # oracle only
```

`game.cfg` (text format) is the live config. The TOML parser had issues
with this project — do not switch back without fixing the parser.

## Key files

| File | Purpose | Edit? |
|------|---------|-------|
| `game.cfg` | Recompiler config (data regions, extra funcs) | Yes |
| `extras.c` | Game hooks, TCP init, verify-mode glue | Yes |
| `verify_mode.c/h` | Dual-execution verification | Yes |
| `nestopia_bridge.cpp/h` | C++ bridge to embedded Nestopia | Yes if needed |
| `CMakeLists.txt` / `nestopia_cmake.cmake` | Build | Yes if needed |
| `nesrecomp/recompiler/src/*.c` | Recompiler (mirror of upstream) | Sync from upstream, then edit |
| `nesrecomp/runner/src/*.c` | Runner (mirror of upstream) | Sync from upstream, then edit |
| `generated/yoshi_full.c` | Recompiled 6502 → C | **NEVER** |
| `generated/yoshi_dispatch.c` | Dispatch table | **NEVER** |

---

# Session start checklist

Before doing any work:
1. Read `PRINCIPLES.md` and this file fully.
2. Confirm you will follow them exactly: no guessing, oracle comparison
   mandatory, TCP only for inspection, never edit generated output.
3. Verify Ghidra MCP is up if you'll need it.
4. Verify the build is current — if not, run the sequence above.

If any of the above fails → STOP and surface it.

---

## TITLE SCREEN DEBUGGING RULES

Title screen bugs are early-frame initialization issues, not steady-state issues.

Hard requirements:

1. Frame sync MUST NOT be based on frame numbers.
   You must sync on a deterministic hardware event:

   Preferred markers (in order):
   - First write to PPUADDR ($2006) targeting $3F00 (palette init)
   - First write to nametable ($2000–$23FF)
   - First NMI where PPUMASK != 0

2. The first divergence is expected EARLY (frame 0–80).
   If your first diff is later, you are looking at a downstream symptom.

3. You are debugging WRITES, not memory.
   Once a bad byte is found:
   - Identify the function that wrote it
   - Identify the 6502 instruction (e.g. STA $2007)
   - Identify the value written

4. Do not audit or modify extra_func entries unless a divergence is PROVEN to originate from a missing function.

5. Title screen bug priority systems:
   - PPUADDR / PPUSCROLL latch behavior
   - $2000 increment mode (1 vs 32)
   - MMC1 CHR banking timing
   - Palette writes ($3F00–$3F1F)
   - NMI timing (writes outside VBlank)
