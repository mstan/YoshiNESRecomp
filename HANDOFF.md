# Yoshi NES Recompilation — Handoff: Broken Title Screen

Copy everything below the line into a new context-cleared Claude Code session
opened in `F:\Projects\nesrecomp-release\YoshiNESRecomp`. The session must
follow the rules in `CLAUDE.md`, `DEBUG.md`, `TCP.md`, and
`F:\Projects\PRINCIPLES.md`. No exceptions.

---

## What is PROVEN

1. **Gameplay works.** Once past the title screen, Yoshi runs correctly to
   the user's eye. Frames advance at 60 fps, input responds, the game loop
   is healthy.
2. **The build is current and clean.** It links against the latest
   `F:/Projects/nesrecomp/` runner (cycle-accurate NMI timing,
   `maybe_trigger_vblank(int cycles)`). The local
   `YoshiNESRecomp/nesrecomp/runner/` has been synced from upstream.
3. **The recompiler finds 1846 functions** with `game.cfg`. There are no
   compile errors. There ARE link-time `C4013` warnings about
   `func_XXXX_bN` being implicitly extern from `yoshi_dispatch.c` —
   those entries come from `extra_func` lines in `game.cfg` that point at
   functions the function finder did not actually emit. They have not been
   shown to cause the title-screen bug. **Do not assume they are related
   without proof.**
4. **TCP debug ports are project-unique:**
   - Native recomp: `127.0.0.1:4380`
   - Nestopia oracle (`--emulated` / `--verify`): `127.0.0.1:4381`
   Source of truth: `extras.c::game_on_init`.
5. **The Nestopia oracle is wired in.** `--verify` runs both, `--emulated`
   runs Nestopia only. `verify_mode.c` already does per-frame RAM diffing
   and records divergences in the ring buffer.

## What is NOT the problem

- The build / sync work. Already done. Do not redo.
- Mapper / CHR banking in general. Gameplay tile graphics work, so MMC1
  CHR switching is functional in the steady state.
- The function set for gameplay. The game runs.
- TCP port collisions with sibling projects. Already moved to 4380/4381.

Do not re-debug any of the above without producing measured evidence that
contradicts it.

## The bug — observed

Symptom (user screenshot):
- The Yoshi title screen renders with **garbage tiles in the background**:
  multi-colored "egg cluster" sprites near the top, a fragment of pipe /
  ground tiles in the middle, a broken Yoshi character glyph at the
  bottom, and three stray colored sprite artifacts.
- Background palette appears wrong (greys / olives where blue/black
  belong).
- The mouse cursor is visible because the SDL window has not drawn over
  it — the framebuffer is still mostly empty.
- This is **only** the title screen. Gameplay is correct.

## The exact next question to answer

> **At what frame, and at what memory or PPU address, does the recomp
> first diverge from Nestopia while drawing the title screen?**

Everything else is downstream of that. The bug is to be reduced to a single
byte difference at a single frame on a single side (CHR / nametable /
palette / OAM / mapper register / PPUCTRL latch).

## The exact data needed to answer it

You need a per-frame diff between native and Nestopia for the title-screen
sequence — frame 0 through whichever frame the title fully renders in
Nestopia (a few hundred frames at most). For each frame you must capture
**all** of the following on **both** sides:

- CPU: A, X, Y, S, P, full RAM `0x0000–0x07FF`
- PPU: PPUCTRL, PPUMASK, PPUSTATUS, OAMADDR, scroll latches, addr latch
- VRAM: nametables `$2000–$2FFF`, attribute tables, palette `$3F00–$3F1F`
- CHR: pattern tables `$0000–$1FFF` (whichever banks are mapped)
- OAM: full 256 bytes of sprite RAM
- Mapper: MMC1 control + chr0 + chr1 + prg bank
- Frame number, NMI/VBlank depth

If `read_ppu` / `ppu_state` / `mapper_state` cannot return one of these
fields on either server, **add the command** to
`nesrecomp/runner/src/debug_server.c` (and the oracle counterpart) and
rebuild before continuing. See `TCP.md` §"Adding a new command".

Then walk the time series and identify the **first** frame where any byte
of the above differs. That single byte is the bug.

## The required workflow (do not skip steps)

1. **Sanity check the build.** From `F:\Projects\nesrecomp-release\YoshiNESRecomp`:
   ```
   ./build/Release/YoshiRecomp.exe "Yoshi # NES.NES"
   ```
   Confirm the broken title screen is reproducible. Kill it. **Never leave
   orphan instances** — they lock the binary on the next build.

2. **Run verify mode** to get both servers up:
   ```
   ./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --verify
   ```
   Native: 4380. Oracle: 4381. Confirm both with `ping`.

3. **Establish a state-sync method**, NOT a frame-number sync. The two
   sides will not align frame-for-frame after RESET. Sync on a stable
   marker: e.g. PPUCTRL value, palette write count, or a known title-screen
   RAM byte. Document the marker.

4. **Pull a time series from both ring buffers** covering frame 0 through
   the title-screen render. Use `frame_range` / `frame_timeseries` /
   `get_frame`.

5. **Diff** byte for byte at the synced points. Produce diffs in the
   format from `CLAUDE.md` §"REQUIRED DEBUGGING PROTOCOL" step 3:
   ```
   Frame:    <synced>
   Location: 0xXXXX
   Expected: 0xYY
   Actual:   0xZZ
   ```

6. **Find the FIRST frame** where the diff appears. Not a downstream
   symptom. The wrong tile on screen at frame 200 is *not* the bug — the
   wrong byte at frame 47 (or wherever) is.

7. **Trace the writer.** What recompiled function wrote that byte? What
   6502 instruction? What was the call path? If you cannot identify the
   writer, STOP and add the observability you need (watch / follow /
   call_stack) — do not guess.

8. **Classify.** Exactly one of:
   - Codegen: the recompiler emitted wrong C for a 6502 instruction or
     dispatch pattern. Fix in `nesrecomp/recompiler/src/code_generator.c`
     or `function_finder.c`.
   - Runner: the runtime / PPU / mapper modeled the hardware wrong. Fix
     in `nesrecomp/runner/src/runtime.c`, `ppu_renderer.c`, or `mapper.c`.
   - Timing: NMI / VBlank / cycle count. Fix in the runner timing code.
   - Config: a missing function or a misclassified data region in
     `game.cfg`. Per-function `extra_func` is a smell — prefer fixing the
     function finder generically.

9. **Apply the minimal fix** to the chosen layer. **Never edit
   `generated/yoshi_full.c` or `generated/yoshi_dispatch.c`** — they are
   build artifacts. If you cannot resist, you have misunderstood the rules.

10. **Verify at the consumer.** Re-run with `--verify`. The diff must be
    gone at the same synced frame, AND the title screen must render
    correctly to the eye.

## Hard rules — do not violate

- **No `printf` / `fprintf` debugging.** TCP only. (`stderr` is unreliable
  on Windows anyway.)
- **No editing `generated/*.c` ever.** They are build artifacts.
- **No stubs.** Missing functions get decoded, not faked. See
  `PRINCIPLES.md` §20.
- **No "let me try X and see".** If you cannot point at a measured diff,
  you do not yet understand the bug. Gather data first.
- **No reopening proven facts.** Gameplay works. The build is clean. The
  ports are right. Build forward.
- **Kill orphan game instances** before rebuilding — they lock
  `YoshiRecomp.exe`.

## Build / regen / run cheat sheet

```
# (a) regenerate Yoshi C from the ROM (after game.cfg or recompiler change)
F:/Projects/nesrecomp/build/recompiler/Release/NESRecomp.exe "Yoshi # NES.NES" --game game.cfg

# (b) build the game
"C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build build --config Release

# (c) build the recompiler itself (only if its sources changed)
"C:/Program Files/Microsoft Visual Studio/2022/Community/Common7/IDE/CommonExtensions/Microsoft/CMake/CMake/bin/cmake.exe" --build F:/Projects/nesrecomp/build/recompiler --config Release

# (d) run modes
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES"            # native
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --verify   # native + oracle, diffed
./build/Release/YoshiRecomp.exe "Yoshi # NES.NES" --emulated # oracle only
```

## ROM / mapper recap

- Mapper 1 (MMC1), 8 PRG banks (128 KB), 16 CHR ROM banks (128 KB)
- Vectors: NMI=$E122, RESET=$FFDA, IRQ=$E1ED
- CRC32 (data): 0x9474C09C
- Bank 7 fixed at $C000–$FFFF; banks 0–6 switch into $8000–$BFFF
- CHR ROM banking via MMC1 chr0/chr1

## Files you may touch

| File | Why |
|------|-----|
| `game.cfg` | Add a `data_region` or fix an `extra_func` if discovery is provably the cause |
| `nesrecomp/recompiler/src/code_generator.c` | Codegen fixes |
| `nesrecomp/recompiler/src/function_finder.c` | Discovery / dispatch fixes |
| `nesrecomp/runner/src/runtime.c` | NES memory map, PPU register stubs |
| `nesrecomp/runner/src/ppu_renderer.c` | Tile / sprite / palette rendering |
| `nesrecomp/runner/src/mapper.c` | MMC1 banking |
| `nesrecomp/runner/src/debug_server.c` | Add missing TCP queries here |
| `extras.c` | Game hooks only — not a place to patch the bug |

## Files you must NOT touch

- `generated/yoshi_full.c`
- `generated/yoshi_dispatch.c`

These are regenerated by NESRecomp.exe. Any edit you make is silently lost
on the next regen and the fix vanishes.

## Definition of done

1. The first divergence between native and Nestopia on the title-screen
   sequence is identified by frame, address, expected, and actual.
2. The exact recompiled function and 6502 instruction responsible for the
   wrong write is named.
3. The root cause is classified as codegen / runner / timing / config.
4. A minimal fix is applied to the chosen layer (never to generated/).
5. `--verify` shows zero diffs across the title-screen frame range.
6. The title screen renders correctly to the user.
7. Gameplay still works.

If you cannot point at the exact variable, the exact instruction, and the
exact moment of divergence — per `PRINCIPLES.md` §22 — you do not yet
understand the bug and you must keep gathering data, not propose fixes.
