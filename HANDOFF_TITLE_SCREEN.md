# Title-screen first-divergence: handoff for next session

This document is a context handoff so the next debugging session (Claude or
ChatGPT) can pick up this investigation without re-deriving everything.

---

## Project context (read first)

This is **YoshiNESRecomp** — a static recompilation of *Yoshi (NES)*. It is
NOT an emulator. Yoshi is iNES Mapper 1 (MMC1), 8 PRG banks (16K each),
16 CHR banks (8K each). Bank 7 ($C000-$FFFF) is fixed; banks 0-6 switch
into $8000-$BFFF.

The recompiler (`nesrecomp/`) translates 6502 → C → native x64 ahead of
time. The runner (also under `nesrecomp/`) provides PPU/APU/mapper
emulation around the recompiled code. Per-game extras live in the project
root (`extras.c`, `verify_mode.c`, `nestopia_bridge.cpp`).

**Verify mode** (`--verify`): runs the recompiled game AND an embedded
Nestopia oracle in the same process. Compares work RAM + nametable RAM
each frame. The oracle is for divergence detection only; the recompiled
code drives rendering.

**Yoshi specifics** clarified by the user this session:
- Yoshi is structurally trivial: title → settings → block-stacking game →
  game-over.
- There is **no persistent state** worth maintaining across game-over.
- Yoshi soft-resets back to the title screen by `JMP $CE02` (the RESET
  handler). This is **intentional** game logic, not a recompiler bug.
- The title screen plays an attract-mode demo. When the demo concludes,
  the game also soft-resets via `JMP $CE02`.
- Therefore **the cycle title→demo→soft-reset→title is real Yoshi
  behavior**, not a bug to be eliminated.

---

## What the visual bug actually looks like

- Native title screen renders as **light grey background** with a few
  scattered sprite fragments (Yoshi face, egg, small Yoshi). No "YOSHI"
  logo, no copyright text, no menu.
- Oracle renders correctly: full title with logo, copyright, big Yoshi+egg
  sprite, "1PLAYER / 2PLAYER" menu.
- Reproducible byte-for-byte across screenshots taken at different frames.
- Gameplay (post-title) **works correctly** — only the title screen is
  affected.

Background pixel measurement (PNG decode of native screenshot):
`[236, 238, 236]` = `0xECEEEC` = `NES_PALETTE[0x20]` (white).

---

## The render-layer mechanism (proven)

PPUCTRL=`0x90`, PPUMASK=`0x1E`, MMC1 ctrl=`0x1F`, mapper.bank=0. PPUMASK
bit 4 (BG enable) is set. The renderer IS running every frame.

`g_chr_ram[$1000-$100F]` reads as `ffffffffffffffffffffffffffffffff` —
i.e., BG pattern table tile $00 is all `0xFF`. With Yoshi's BG sub-palettes
having color-3 = `$20` (white), tile $00 renders as a solid white block
on every screen position that references it. Most of the title nametable
references tile $00 in the empty regions, which paints the entire screen
white.

Verified directly from `Yoshi # NES.NES` CHR ROM:
- CHR offset `$0000-$000F` (sprite-half tile $00) = all `0xFF`
- CHR offset `$1000-$100F` (BG-half tile $00) = all `0x00` ← what should be loaded

So `g_chr_ram[$1000+]` is loaded with **CHR ROM offset $0000-$0FFF**
(sprite half) instead of `$1000-$1FFF` (BG half).

This happens because MMC1 is in 4KB CHR mode (ctrl=$1F bit 4 = 1) with
both `chr0=0` AND `chr1=0`. In that mode, `mapper.c::mmc1_apply_chr` does
`memcpy(g_chr_ram, chr_rom + 0, 0x1000)` for both halves, putting the
sprite half (which has tile $00 = solid `0xFF`) into the BG half slot.

**The recompiler's MMC1 emulation is correct.** The bug is upstream:
the game ends up with `chr0=0/chr1=0` when it should have `chr0=5/chr1=2`
(the values seen briefly during the working title display).

---

## The state-machine layer (proven)

Yoshi's title screen runs a state machine at `$A37C`:

```
$A37C: A9 00 / 8D 48 02   ; $0248 (state) = 0
$A381: A9 01 / 85 B1      ; $B1 = 1
$A385: LDA $B1 / BNE $A385 ; spin-wait for NMI to clear $B1
$A389: JSR $D16E
$A38C: LDA $0248 / ASL / TAX
$A391: LDA $A3A1,X / STA $AD ; load handler addr from jump table at $A3A1
$A396: LDA $A3A2,X / STA $AE
$A39B: JSR $8000           ; $8000 = JMP ($00AD) — dispatch to handler
$A39E: JMP $A381           ; loop
```

Jump table at `$A3A1` (7 entries × 2 bytes):

| State | Handler addr | Bank        | Notes                          |
|-------|-------------|-------------|--------------------------------|
| 0     | $F781       | bank 7      | sets ZP $76=0, $77=0, INC $0248 |
| 1     | $F831       | bank 7      | dwell + advance to 4            |
| 2     | $9F8E       | switchable  | (not reached in observed cycle) |
| 3     | $DC10       | bank 7      | (not reached)                   |
| 4     | $AE16       | switchable  | brief                           |
| 5     | $B57C       | switchable  | correct title display           |
| 6     | $A3AF       | bank 7      | RTS (idle)                      |

ZP `$76` = MMC1 chr1 source, ZP `$77` = MMC1 chr0 source. The bank-7
MMC1 helpers `FUN_cf4f` (writes ZP $76 → $D000) and `FUN_cf39` (writes
ZP $77 → $B000) are called from the NMI handler at `$E13A` and `$E13D`
**every NMI**, so MMC1 chr0/chr1 reflect ZP $77/$76 every frame.

Observed state cycle (from follower history with `RECOMP_STACK_TRACKING`
enabled, multiple captures):

```
f=27178: $0248: 1 → 4
f=27184: $0248: 4 → 5
f=28577: $0248: 5 → 0    ← soft-reset (intentional per user)
f=28583: $0248: 0 → 1
f=31073: $0248: 1 → 4    ← NEXT cycle
f=31079: $0248: 4 → 5
f=32435: $0248: 5 → 0
...
```

**Dwell times:**
- State 5 (correct render): ~1393 frames (~23 seconds)
- State 1 (broken render):  **~2490 frames (~41 seconds)** ← this is the actual bug
- State 0/4: each ~6 frames

On real hardware, state 1 should be a brief setup that quickly advances
to state 4 → 5. In the recompiler, state 1 dwells far too long, leaving
the screen in the broken-CHR state for most of every cycle.

---

## Reframed bug statement

**Why does state 1 dwell ~2490 frames in the recompiler?**

State 1 handler at `$F831` (bank 7):

```
$F831: LDA $0616 / BEQ +12 → $F842   ; if $0616==0, skip the init block
$F836: LDA #$42 / STA $B1            ; (init block, runs only when $0616!=0)
$F83A: JSR $806A
$F83D: LDA #$00 / STA $0616
$F842: JSR $80CB                     ; bank 0
$F845: LDA $0689 / CMP #$34
$F84A: BEQ +75 → $F897               ; if $0689==$34, branch (DON'T advance)
$F84C: ... (fall-through, eventually reaches $F892)
$F892: LDA #$04 / STA $0248          ; advance to state 4
```

**Hypothesis (UNVERIFIED):** the recompiler keeps `$0689 == $34` for too
long, causing state 1 to take the BEQ-taken branch to `$F897` over and
over for thousands of frames before finally falling through to set
`$0248 = 4`.

`$0689` is some game state variable. The next investigation step is:
1. Find every writer of `$0689`.
2. Find what value they write and under what condition.
3. Determine why `$0689` stays at `$34` longer than it should in the
   recompiler.

ALTERNATIVELY, the loop might not even check $0689 each iteration — state 1
might be doing something else entirely that fires `INC $0248` from a
DIFFERENT path. The next session should:
1. Set a follower on `$0248` AND `$0689` from frame 0.
2. Run for ~10 minutes (one full ring buffer).
3. Use `read_frame_ram` to query historical RAM at the exact frames of
   $0248 transitions to see what $0689 was at those moments.
4. Trace back from that.

---

## What's been ruled out

- **MMC1 emulation correctness**: confirmed correct via `read_ppu` and
  follower data. When chr0=5/chr1=2 are written, the right CHR data does
  load. When chr0=0/chr1=0 (default), the wrong data loads. This matches
  expected MMC1 behavior.
- **`ppu_render_frame` early-return**: confirmed renderer runs every frame
  with PPUMASK=$1E. Diagnostic counters in `ppu_renderer.c` (currently
  disabled via `#define RECOMP_RENDER_DIAG 0`) verified this.
- **Recompiler skipping `nes_write` for $0249/$0251/$0252**: every write
  to those addresses goes through `nes_write` and is captured by the
  follower. No bypass exists.
- **Soft-reset path being a recompiler bug**: confirmed by user that
  `JMP $CE02` is intentional Yoshi game logic.
- **`$024B` Start bit triggering soft-reset via `$8209` (the wait-for-Start
  routine at `$81F0`)**: `$024B` was followed for 540+ writes; bit 3 (Start)
  was NEVER set. Demo data buffer at `$828F` writes only single-bit values
  (`0x80, 0x40, 0x20, 0x01`), never `0x08`.
- **Input emulation injecting button bits**: `g_controller1_buttons` is 0
  throughout. The values appearing in `$0249` come from the demo
  playback routine at `$D250-$D27F` reading from `($83/$84)+Y` (= the
  demo data buffer at `$828F`), NOT from `$4016` reads.

---

## What's still open

1. **Why state 1 dwells too long.** The actual title-screen bug. See
   reframed bug statement above. Investigate `$0689` and the state 1
   handler at `$F831`.

2. **Which `JMP $CE02` site fires the soft-reset.** Three candidates:
   - `$FFDE` (RESET vector trampoline) — known one-time at boot
   - `$D1FF` (input routine: `LDA $0249 / AND #$0F / CMP #$0F / BNE / JSR / JMP $CE02`) — checks if A+B+Sel+Start all pressed
   - `$BFDE` (bank 0/N's copy of trampoline at end of bank ROM)

   The `$D1FF` path checks `$0249 & $0F == $0F`. I confirmed `$0249` only
   ever has single bits set during the demo, so this path *should* not
   fire — but it does fire periodically per the state cycle. Either:
   - There's a brief frame where `$0249` momentarily has multiple low bits
     set that the follower didn't capture (followers fire on CHANGE only,
     same-value writes don't fire)
   - OR `$BFDE` is actually firing
   - OR the soft-reset comes via a path I haven't identified

   This needs to be definitively narrowed in the next session.

3. **Whether the demo data at `$828F` actually completes.** If the demo
   plays through, it reaches the game-over → soft-reset transition, which
   is intended. If the demo gets STUCK and times out via some other
   mechanism, that would also explain the long dwell. Need to read raw
   bytes at `$828F` and decode the demo format.

---

## Tooling caveats — IMPORTANT for next session

The runner has a **36000-frame (~10 min) ring buffer** at port `127.0.0.1:4380`
with TCP commands:

- `get_frame frame=N` — full frame snapshot (CPU, PPU, mapper, ZP RAM)
- `read_frame_ram frame=N addr=XXX len=N` — read RAM as captured in a
  specific historical frame (any byte in $0000-$07FF)
- `frame_diff frame=N` — verify-mode RAM/nametable diffs for frame N
- `first_failure` — first frame where verify failed
- `follow addr=XXX` — register a write follower (logs all changing writes
  to that address with frame + old/new + call stack if RECOMP_STACK_TRACKING
  is on)
- `follow_history addr=XXX limit=N` — pull follower log. **DEFAULT LIMIT
  IS 50** — pass `limit:8000` for full history. Buffer in the response is
  ~16KB so only ~250 entries fit per response; query in chunks if needed.

**Don't poll live state when historical state is in the ring buffer.**
Don't wait for live oscillation cycles when you can query backward in
time. The previous session wasted ~30-second waits when historical
queries were available.

**Watchpoints (`watch` TCP cmd) DO NOT FIRE** — `debug_server_check_watchpoints()`
is never called from the runner main loop. Use **followers** instead.

---

## Current branch / commit state

Two repos, both on branch `title-screen-divergence`:

**`F:\Projects\nesrecomp-release\YoshiNESRecomp\nesrecomp\`** (the recompiler/runner submodule):
- Commit `5a39a76`: checkpoint with TCP `frame_diff` infra + diagnostic
  instrumentation. Bundles ~470 lines of pre-existing dirty state in
  `debug_server.c` from prior sessions; needs branch-cleanup pass to split.
- Working tree: `CMakeLists.txt` may have `RECOMP_STACK_TRACKING` enabled
  (added this session), and `main_runner.c` has `SDL_SetWindowAlwaysOnTop`
  commented out (per user request).

**`F:\Projects\nesrecomp-release\YoshiNESRecomp\`** (the game project):
- Commit `9b3f537`: TCP `frame_diff` plumbing + investigation tooling
  (verify_mode.c diff capture, extras.c game_post_nmi recording fix,
  CLAUDE.md/DEBUG.md/TCP.md additions, tools/diff_title_sequence.js,
  tools/title_shot.txt).

---

## Diagnostic instrumentation currently in the build

Disabled by `#define X_DIAG 0` (set to 1 to re-enable, then re-add the
matching `extern` block + dispatch entries in `debug_server.c::s_commands[]`):

- `nesrecomp/runner/src/ppu_renderer.c`: `RECOMP_RENDER_DIAG` — counters
  + last-seen state inside `ppu_render_frame()`. Exposed via TCP cmd
  `render_debug` (currently `#if 0`'d out in `debug_server.c`).
- `nesrecomp/runner/src/mapper.c`: `RECOMP_MMC1_DIAG` — counters + last
  (chr0, chr1, ctrl) inside `mmc1_apply_chr()`. Exposed via `mmc1_debug`.
- `CMakeLists.txt`: `RECOMP_STACK_TRACKING` was added this session and
  may still be enabled. **The next session should leave it on** — it's
  needed for follower stack capture, even though the captured stacks
  have known unreliability (see "Recompiler bugs found" below).

---

## Recompiler bugs found this session (NOT the title-screen bug, but worth fixing)

These are real bugs in the recompiler/runner that the next session may
want to address separately:

1. **Stack-tracking missing pop before tail-call return.** In
   `code_generator.c`, `JMP $XXXX` is emitted as
   `call_by_address(0xXXXX); return;` but does NOT emit
   `recomp_stack_pop()` before the `return`. So tail-jumps leak the
   calling function's stack entry. Visible at e.g. line 2228 of
   `generated/yoshi_full.c`:
   ```
   /* $CECC: 4C */ ... call_by_address(0xA37C); return;
   ```
   This should be:
   ```
   /* $CECC: 4C */ ... recomp_stack_pop(); call_by_address(0xA37C); return;
   ```
   (Or equivalently, `func_X(); recomp_stack_pop(); return;` for direct
   tail calls.)

2. **`function_finder.c` may be over-extending functions across data
   regions.** `func_A8AD_b2..b6` are each ~4000 lines long, mostly
   containing `/* ILLEGAL $FF — skip 3 */` comments, ending with
   `func_CE02(); return;` at the bank's `$BFDE` trampoline copy. This
   suggests function discovery walked from a function entry at `$A8AD`
   linearly through ROM data all the way to `$BFDE`, treating data
   bytes as code. May or may not actually execute, but the function
   shouldn't exist. Worth checking `function_finder.c` for boundary
   handling.

3. **Watchpoints don't fire.** `debug_server_check_watchpoints()` in
   `nesrecomp/runner/src/debug_server.c:1383` is defined but never
   called from the runner main loop. The `watch` TCP command registers
   watchpoints successfully but they never trigger. Use `follow`
   (followers) instead — those work via `nes_write` hook.

---

## Concrete next-session task list

In priority order:

1. **Pull `$0689` history.** Set follower on `$0689` at boot. Run for
   ~10 min. Pull full history. See what writes it and when. Cross-reference
   with `$0248` transitions to determine if state 1's dwell correlates
   with `$0689 == $34`.

2. **Read raw bytes at `$828F`** (the demo data buffer). It's in bank 0
   PRG ROM. Decode the demo format (probably one byte per frame, button
   bitmap). Determine the demo's expected duration in frames. Compare to
   the observed dwell time of state 1 + state 5.

3. **Identify which `$JMP $CE02` site fires.** Set follower on `$0248`
   with `RECOMP_STACK_TRACKING` enabled. When `$0248` transitions 5→0,
   capture the stack. Despite stack-tracking being unreliable due to bug
   #1, the trace should at least narrow down the path. Cross-reference
   with the three candidate sites: `$D1FF`, `$BFDE`, or some other path.

4. **Decide if state 1's slow dwell is a recompiler bug (cycle counting,
   timing) or a real game-state bug** (something the game expects to
   tick but isn't ticking in the recomp).

5. **OPTIONAL — fix incidental recompiler bugs** (1, 2, 3 above) if they
   block further investigation.

---

## Files to read first in next session

In this order:

1. `F:\Projects\PRINCIPLES.md` — global rules
2. `F:\Projects\nesrecomp-release\YoshiNESRecomp\CLAUDE.md` — Yoshi rules
3. `F:\Projects\nesrecomp-release\YoshiNESRecomp\TCP.md` — TCP protocol
4. This file (`HANDOFF_TITLE_SCREEN.md`) — current state
5. `F:\Projects\nesrecomp-release\YoshiNESRecomp\nesrecomp\runner\src\debug_server.c` — TCP server impl + follower mechanism

ROM and bank files for Ghidra:
- `Yoshi # NES.NES` (the ROM)
- `banks/bank00.bin` … `banks/bank07.bin` (split PRG banks, base $8000 for 0-6, $C000 for 7)
- `banks/chr00.bin` … `banks/chr15.bin` (split CHR banks, 8KB each)
- `ghidra/YoshiNES.gpr` (existing Ghidra project with bank 7 + bank 0 loaded as raw 6502 binaries)

---

## One-line summary for ChatGPT

Yoshi NES recomp's title screen renders broken because state 1 of the
title-screen state machine dwells ~2500 frames instead of advancing
quickly. During state 1, MMC1 has chr0=0/chr1=0 (the post-RESET defaults)
which loads the wrong CHR bank into the BG pattern table, making BG tile
$00 render as solid white. State 1 only advances when `$0689 != $34` per
the disassembly at `$F845`. Find why `$0689` stays at `$34` too long.
